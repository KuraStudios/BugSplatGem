
#include <AzCore/Memory/SystemAllocator.h>
#include <AzCore/Module/Module.h>

#include <BugSplatGemSystemComponent.h>

namespace BugSplatGem
{
    class BugSplatGemModule
        : public AZ::Module
    {
    public:
        AZ_RTTI(BugSplatGemModule, "{ACF68C52-7DEE-46A6-970C-F35EE7D1CE4A}", AZ::Module);
        AZ_CLASS_ALLOCATOR(BugSplatGemModule, AZ::SystemAllocator, 0);

        BugSplatGemModule()
            : AZ::Module()
        {
            // Push results of [MyComponent]::CreateDescriptor() into m_descriptors here.
            m_descriptors.insert(m_descriptors.end(), {
                BugSplatGemSystemComponent::CreateDescriptor(),
            });
        }

        /**
         * Add required SystemComponents to the SystemEntity.
         */
        AZ::ComponentTypeList GetRequiredSystemComponents() const override
        {
            return AZ::ComponentTypeList {
                azrtti_typeid<BugSplatGemSystemComponent>(),
            };
        }
    };
}

// DO NOT MODIFY THIS LINE UNLESS YOU RENAME THE GEM
// The first parameter should be GemName_GemIdLower
// The second should be the fully qualified name of the class above
AZ_DECLARE_MODULE_CLASS(BugSplatGem_a8677a39606b4b1da49b248c140d8fec, BugSplatGem::BugSplatGemModule)
