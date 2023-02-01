
#pragma once

#include <AzCore/Component/Component.h>

#include <BugSplatGem/BugSplatGemBus.h>

namespace BugSplatGem
{
    class BugSplatGemSystemComponent
        : public AZ::Component
        , protected BugSplatGemRequestBus::Handler
    {
    public:
        AZ_COMPONENT(BugSplatGemSystemComponent, "{84D3A7DA-8D1B-4434-8A3A-D7B8BB7AADC3}");

        static void Reflect(AZ::ReflectContext* context);

        static void GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptor::DependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptor::DependencyArrayType& dependent);

    protected:
        ////////////////////////////////////////////////////////////////////////
        // BugSplatGemRequestBus interface implementation

        ////////////////////////////////////////////////////////////////////////

        ////////////////////////////////////////////////////////////////////////
        // AZ::Component interface implementation
        void Init() override;
        void Activate() override;
        void Deactivate() override;
        ////////////////////////////////////////////////////////////////////////
    };

} // namespace BugSplatGem
