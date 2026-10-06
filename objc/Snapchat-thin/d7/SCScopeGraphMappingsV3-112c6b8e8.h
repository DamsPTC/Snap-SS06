// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCScopeGraphMappingsV3
// Superclass: NSObject
// Address: 0x112c6b8e8

@interface SCScopeGraphMappingsV3

// Property: entityMappings; attributes: T{span<const char *const, 18446744073709551615UL>=^*Q},R,N,V_entityMappings
// Property: entryPointToPropertyMappings; attributes: T{Lookup<snap::CFS_View<snap::impl::MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, std::span<const snap::scopegraph::EntryPointProperty *const>> *>>>>={CFS_View<snap::impl::MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, std::span<const snap::scopegraph::EntryPointProperty *const>> *>>>={MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, std::span<const snap::scopegraph::EntryPointProperty *const>> *>, void>={IteratorPairView<const snap::pre20::Pair<unsigned short, std::span<const snap::scopegraph::EntryPointProperty *const>> *>=^v^v}}}},R,N,V_entryPointToPropertyMappings
// Property: serviceProviderToServiceMappings; attributes: T{Lookup<snap::CFS_View<snap::impl::MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, unsigned short> *>>>>={CFS_View<snap::impl::MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, unsigned short> *>>>={MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, unsigned short> *>, void>={IteratorPairView<const snap::pre20::Pair<unsigned short, unsigned short> *>=^v^v}}}},R,N,V_serviceProviderToServiceMappings
// Property: scopedServiceProviderSet; attributes: T{Eytzinger<std::span<const unsigned short>, std::less<void>>={span<const unsigned short, 18446744073709551615UL>=^SQ}},R,N,V_scopedServiceProviderSet
// Property: lifecycleToEntryPointMappingsV2; attributes: T{Lookup<snap::CFS_Forest<snap::impl::MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, snap::scopegraph::LifecycleNode> *>>>>={CFS_View<snap::impl::MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, snap::scopegraph::LifecycleNode> *>>>={MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, snap::scopegraph::LifecycleNode> *>, void>={IteratorPairView<const snap::pre20::Pair<unsigned short, snap::scopegraph::LifecycleNode> *>=^v^v}}}^v},R,N,V_lifecycleToEntryPointMappingsV2
// Property: lifecycleToEntryPointMappingsV3; attributes: T{Lookup<snap::CFS_Forest<snap::impl::MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, snap::scopegraph::LifecycleNode> *>>>>={CFS_View<snap::impl::MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, snap::scopegraph::LifecycleNode> *>>>={MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, snap::scopegraph::LifecycleNode> *>, void>={IteratorPairView<const snap::pre20::Pair<unsigned short, snap::scopegraph::LifecycleNode> *>=^v^v}}}^v},R,N,V_lifecycleToEntryPointMappingsV3
// Property: deferredEntryPointsFallbackSet; attributes: T{Eytzinger<std::span<const unsigned short>, std::less<void>>={span<const unsigned short, 18446744073709551615UL>=^SQ}},R,N,V_deferredEntryPointsFallbackSet
// Property: scopeToIdentifyingExposuresMappings; attributes: T{Lookup<snap::CFS_View<snap::impl::MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, std::span<const unsigned short>> *>>>>={CFS_View<snap::impl::MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, std::span<const unsigned short>> *>>>={MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, std::span<const unsigned short>> *>, void>={IteratorPairView<const snap::pre20::Pair<unsigned short, std::span<const unsigned short>> *>=^v^v}}}},R,N,V_scopeToIdentifyingExposuresMappings

// -[SCScopeGraphMappingsV3 initWithEntityMappings:entryPointToPropertyMappings:serviceProviderToServiceMappings:scopedServiceProviderSet:lifecycleToEntryPointMappingsV2:lifecycleToEntryPointMappingsV3:scopeToIdentifyingExposuresMappings:deferredEntryPointsFallbackSet:]
// Type encoding: @160@0:8{span<const char *const, 18446744073709551615UL>=^*Q}16{Lookup<snap::CFS_View<snap::impl::MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, std::span<const snap::scopegraph::EntryPointProperty *const>> *>>>>={CFS_View<snap::impl::MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, std::span<const snap::scopegraph::EntryPointProperty *const>> *>>>={MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, std::span<const snap::scopegraph::EntryPointProperty *const>> *>, void>={IteratorPairView<const snap::pre20::Pair<unsigned short, std::span<const snap::scopegraph::EntryPointProperty *const>> *>=^v^v}}}}32{Lookup<snap::CFS_View<snap::impl::MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, unsigned short> *>>>>={CFS_View<snap::impl::MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, unsigned short> *>>>={MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, unsigned short> *>, void>={IteratorPairView<const snap::pre20::Pair<unsigned short, unsigned short> *>=^v^v}}}}48{Eytzinger<std::span<const unsigned short>, std::less<void>>={span<const unsigned short, 18446744073709551615UL>=^SQ}}64{Lookup<snap::CFS_Forest<snap::impl::MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, snap::scopegraph::LifecycleNode> *>>>>={CFS_View<snap::impl::MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, snap::scopegraph::LifecycleNode> *>>>={MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, snap::scopegraph::LifecycleNode> *>, void>={IteratorPairView<const snap::pre20::Pair<unsigned short, snap::scopegraph::LifecycleNode> *>=^v^v}}}^v}80{Lookup<snap::CFS_Forest<snap::impl::MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, snap::scopegraph::LifecycleNode> *>>>>={CFS_View<snap::impl::MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, snap::scopegraph::LifecycleNode> *>>>={MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, snap::scopegraph::LifecycleNode> *>, void>={IteratorPairView<const snap::pre20::Pair<unsigned short, snap::scopegraph::LifecycleNode> *>=^v^v}}}^v}104{Lookup<snap::CFS_View<snap::impl::MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, std::span<const unsigned short>> *>>>>={CFS_View<snap::impl::MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, std::span<const unsigned short>> *>>>={MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, std::span<const unsigned short>> *>, void>={IteratorPairView<const snap::pre20::Pair<unsigned short, std::span<const unsigned short>> *>=^v^v}}}}128{Eytzinger<std::span<const unsigned short>, std::less<void>>={span<const unsigned short, 18446744073709551615UL>=^SQ}}144
// Implementation: 0x10007fac0

// -[SCScopeGraphMappingsV3 entityMappings]
// Type encoding: {span<const char *const, 18446744073709551615UL>=^*Q}16@0:8
// Implementation: 0x100080284

// -[SCScopeGraphMappingsV3 entryPointToPropertyMappings]
// Type encoding: {Lookup<snap::CFS_View<snap::impl::MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, std::span<const snap::scopegraph::EntryPointProperty *const>> *>>>>={CFS_View<snap::impl::MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, std::span<const snap::scopegraph::EntryPointProperty *const>> *>>>={MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, std::span<const snap::scopegraph::EntryPointProperty *const>> *>, void>={IteratorPairView<const snap::pre20::Pair<unsigned short, std::span<const snap::scopegraph::EntryPointProperty *const>> *>=^v^v}}}}16@0:8
// Implementation: 0x100080290

// -[SCScopeGraphMappingsV3 serviceProviderToServiceMappings]
// Type encoding: {Lookup<snap::CFS_View<snap::impl::MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, unsigned short> *>>>>={CFS_View<snap::impl::MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, unsigned short> *>>>={MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, unsigned short> *>, void>={IteratorPairView<const snap::pre20::Pair<unsigned short, unsigned short> *>=^v^v}}}}16@0:8
// Implementation: 0x10008029c

// -[SCScopeGraphMappingsV3 scopedServiceProviderSet]
// Type encoding: {Eytzinger<std::span<const unsigned short>, std::less<void>>={span<const unsigned short, 18446744073709551615UL>=^SQ}}16@0:8
// Implementation: 0x1000802a8

// -[SCScopeGraphMappingsV3 lifecycleToEntryPointMappingsV2]
// Type encoding: {Lookup<snap::CFS_Forest<snap::impl::MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, snap::scopegraph::LifecycleNode> *>>>>={CFS_View<snap::impl::MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, snap::scopegraph::LifecycleNode> *>>>={MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, snap::scopegraph::LifecycleNode> *>, void>={IteratorPairView<const snap::pre20::Pair<unsigned short, snap::scopegraph::LifecycleNode> *>=^v^v}}}^v}16@0:8
// Implementation: 0x1000802b4

// -[SCScopeGraphMappingsV3 lifecycleToEntryPointMappingsV3]
// Type encoding: {Lookup<snap::CFS_Forest<snap::impl::MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, snap::scopegraph::LifecycleNode> *>>>>={CFS_View<snap::impl::MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, snap::scopegraph::LifecycleNode> *>>>={MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, snap::scopegraph::LifecycleNode> *>, void>={IteratorPairView<const snap::pre20::Pair<unsigned short, snap::scopegraph::LifecycleNode> *>=^v^v}}}^v}16@0:8
// Implementation: 0x1000802c8

// -[SCScopeGraphMappingsV3 deferredEntryPointsFallbackSet]
// Type encoding: {Eytzinger<std::span<const unsigned short>, std::less<void>>={span<const unsigned short, 18446744073709551615UL>=^SQ}}16@0:8
// Implementation: 0x1000802dc

// -[SCScopeGraphMappingsV3 scopeToIdentifyingExposuresMappings]
// Type encoding: {Lookup<snap::CFS_View<snap::impl::MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, std::span<const unsigned short>> *>>>>={CFS_View<snap::impl::MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, std::span<const unsigned short>> *>>>={MappingView<snap::impl::IteratorPairView<const snap::pre20::Pair<unsigned short, std::span<const unsigned short>> *>, void>={IteratorPairView<const snap::pre20::Pair<unsigned short, std::span<const unsigned short>> *>=^v^v}}}}16@0:8
// Implementation: 0x1000802e8

// -[SCScopeGraphMappingsV3 .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10007fab0

@end
