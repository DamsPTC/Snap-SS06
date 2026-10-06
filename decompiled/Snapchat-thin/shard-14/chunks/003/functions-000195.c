/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b0a84c8; end: 10b0a84cb; -[SCMemoryUsageReportingScopeLifecycleMonitor lifecycleDuplicated:] */

void FUN_10b0a84c8(void)

{
  return;
}



/* Entry: 10b0a84cc; end: 10b0a84cf; -[SCMemoryUsageReportingScopeLifecycleMonitor scopedAccess:didAccessValue:] */

void FUN_10b0a84cc(void)

{
  return;
}



/* Entry: 10b0a84d0; end: 10b0a84ff; -[SCMemoryUsageReportingScopeLifecycleMonitor .cxx_destruct] */

void FUN_10b0a84d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0a8500; end: 10b0a8583; -[SCMutliplexingScopeLifecycleMonitor setMemoryUsageMetricsReporter:] */

void FUN_10b0a8500(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b0a8584;
  puStack_30 = &UNK_110cb7518;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010be18700(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0a8584; end: 10b0a858f;  */

void FUN_10b0a8584(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c6810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setMemoryUsageMetricsReporter__11264f428,*(undefined8 *)(param_1 + 0x20))
  ;
  return;
}



/* Entry: 10b0a8590; end: 10b0a8613; -[SCMutliplexingScopeLifecycleMonitor setMetricsReporter:] */

void FUN_10b0a8590(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b0a8614;
  puStack_30 = &UNK_110cb7518;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010be18700(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0a8614; end: 10b0a861f;  */

void FUN_10b0a8614(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c7870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setMetricsReporter__11264f840,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b0a8620; end: 10b0a86a3; -[SCMutliplexingScopeLifecycleMonitor setPerformanceMetricsReporter:] */

void FUN_10b0a8620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b0a86a4;
  puStack_30 = &UNK_110cb7518;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010be18700(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0a86a4; end: 10b0a86af;  */

void FUN_10b0a86a4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1da970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setPerformanceMetricsReporter__112654480,*(undefined8 *)(param_1 + 0x20))
  ;
  return;
}



/* Entry: 10b0a86b0; end: 10b0a86c3; -[SCMutliplexingScopeLifecycleMonitor scopeGraphAllMappingsBuilt] */

void FUN_10b0a86b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be18710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__forEachMonitor__112563b60,&PTR___NSConcreteGlobalBlock_110cb7568);
  return;
}



/* Entry: 10b0a86c4; end: 10b0a8747; -[SCMutliplexingScopeLifecycleMonitor scopeGraphMappingBuildStart:] */

void FUN_10b0a86c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b0a8748;
  puStack_30 = &UNK_110cb7518;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010be18700(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0a8748; end: 10b0a8753;  */

void FUN_10b0a8748(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1508f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_scopeGraphMappingBuildStart__112631c58,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b0a8754; end: 10b0a87d7; -[SCMutliplexingScopeLifecycleMonitor scopeGraphMappingBuildEnd:] */

void FUN_10b0a8754(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b0a87d8;
  puStack_30 = &UNK_110cb7518;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010be18700(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0a87d8; end: 10b0a87e3;  */

void FUN_10b0a87d8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1508d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_scopeGraphMappingBuildEnd__112631c50,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b0a87e4; end: 10b0a8867; -[SCMutliplexingScopeLifecycleMonitor lifecycleEnding:] */

void FUN_10b0a87e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b0a8868;
  puStack_30 = &UNK_110cb7518;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010be18700(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0a8868; end: 10b0a8873;  */

void FUN_10b0a8868(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c098cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_lifecycleEnding__112603d38,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b0a8874; end: 10b0a88f7; -[SCMutliplexingScopeLifecycleMonitor lifecycleEnded:] */

void FUN_10b0a8874(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b0a88f8;
  puStack_30 = &UNK_110cb7518;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010be18700(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0a88f8; end: 10b0a8903;  */

void FUN_10b0a88f8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c098c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_lifecycleEnded__112603d30,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b0a8904; end: 10b0a89b3; -[SCMutliplexingScopeLifecycleMonitor entryPoint:endingInLifecycle:] */

void FUN_10b0a8904(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b0a89b4;
  puStack_48 = &UNK_110cb7588;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be18700(param_1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0a89b4; end: 10b0a89bf;  */

void FUN_10b0a89b4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf974d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_entryPoint_endingInLifecycle__1125c36d8,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10b0a89c0; end: 10b0a8a6f; -[SCMutliplexingScopeLifecycleMonitor entryPoint:endedInLifecycle:] */

void FUN_10b0a89c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b0a8a70;
  puStack_48 = &UNK_110cb7588;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be18700(param_1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0a8a70; end: 10b0a8a7b;  */

void FUN_10b0a8a70(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf974b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_entryPoint_endedInLifecycle__1125c36d0,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10b0a8a7c; end: 10b0a8b2b; -[SCMutliplexingScopeLifecycleMonitor scope:willBeRemovedFromLifecycle:] */

void FUN_10b0a8a7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b0a8b2c;
  puStack_48 = &UNK_110cb7588;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be18700(param_1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0a8b2c; end: 10b0a8b37;  */

void FUN_10b0a8b2c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1505b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_scope_willBeRemovedFromLifecycle_112631b88,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10b0a8b38; end: 10b0a8be7; -[SCMutliplexingScopeLifecycleMonitor scope:overExposedInLifecycle:] */

void FUN_10b0a8b38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b0a8be8;
  puStack_48 = &UNK_110cb7588;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be18700(param_1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0a8be8; end: 10b0a8bf3;  */

void FUN_10b0a8be8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c150550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_scope_overExposedInLifecycle__112631b70,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10b0a8bf4; end: 10b0a8ca3; -[SCMutliplexingScopeLifecycleMonitor scope:overRemovedInLifecycle:] */

void FUN_10b0a8bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b0a8ca4;
  puStack_48 = &UNK_110cb7588;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be18700(param_1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0a8ca4; end: 10b0a8caf;  */

void FUN_10b0a8ca4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c150570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_scope_overRemovedInLifecycle__112631b78,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10b0a8cb0; end: 10b0a8d33; -[SCMutliplexingScopeLifecycleMonitor lifecycleDuplicated:] */

void FUN_10b0a8cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b0a8d34;
  puStack_30 = &UNK_110cb7518;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010be18700(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0a8d34; end: 10b0a8d3f;  */

void FUN_10b0a8d34(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c098c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_lifecycleDuplicated__112603d28,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b0a8d40; end: 10b0a8e13; -[SCMutliplexingScopeLifecycleMonitor handleAppEvent:] */

void FUN_10b0a8d40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10b0a8dc4;
  puStack_30 = &UNK_110cb7518;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010be18700(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0a8e14; end: 10b0a8e1f; -[SCMutliplexingScopeLifecycleMonitor .cxx_destruct] */

void FUN_10b0a8e14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0a8e20; end: 10b0a8e23; -[SCNilScopedAccessWatchDog setMemoryUsageMetricsReporter:] */

void FUN_10b0a8e20(void)

{
  return;
}



/* Entry: 10b0a8e24; end: 10b0a8e27; -[SCNilScopedAccessWatchDog setMetricsReporter:] */

void FUN_10b0a8e24(void)

{
  return;
}



/* Entry: 10b0a8e28; end: 10b0a8e57; -[SCNilScopedAccessWatchDog setExceptionReporter:] */

void FUN_10b0a8e28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0a8e58; end: 10b0a8e5b; -[SCNilScopedAccessWatchDog setPerformanceMetricsReporter:] */

void FUN_10b0a8e58(void)

{
  return;
}



/* Entry: 10b0a8e5c; end: 10b0a8e5f; -[SCNilScopedAccessWatchDog setStartupInfoService:] */

void FUN_10b0a8e5c(void)

{
  return;
}



/* Entry: 10b0a8e60; end: 10b0a8e67; -[SCNilScopedAccessWatchDog _reportNilScopedAccessException:] */

void FUN_10b0a8e60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1333f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_reportNilScopedAccessWithClassNa_11262a718);
  return;
}



/* Entry: 10b0a8e68; end: 10b0a8e6b; -[SCNilScopedAccessWatchDog entryPoint:endingInLifecycle:] */

void FUN_10b0a8e68(void)

{
  return;
}



/* Entry: 10b0a8e6c; end: 10b0a8e6f; -[SCNilScopedAccessWatchDog entryPoint:endedInLifecycle:] */

void FUN_10b0a8e6c(void)

{
  return;
}



/* Entry: 10b0a8e70; end: 10b0a8e73; -[SCNilScopedAccessWatchDog scopeGraphMappingBuildStart:] */

void FUN_10b0a8e70(void)

{
  return;
}



/* Entry: 10b0a8e74; end: 10b0a8e77; -[SCNilScopedAccessWatchDog scopeGraphMappingBuildEnd:] */

void FUN_10b0a8e74(void)

{
  return;
}



/* Entry: 10b0a8e78; end: 10b0a8e7b; -[SCNilScopedAccessWatchDog scopeGraphAllMappingsBuilt] */

void FUN_10b0a8e78(void)

{
  return;
}



/* Entry: 10b0a8e7c; end: 10b0a8e7f; -[SCNilScopedAccessWatchDog lifecycleBeginning:] */

void FUN_10b0a8e7c(void)

{
  return;
}



/* Entry: 10b0a8e80; end: 10b0a8e83; -[SCNilScopedAccessWatchDog lifecycleBegan:] */

void FUN_10b0a8e80(void)

{
  return;
}



/* Entry: 10b0a8e84; end: 10b0a8e87; -[SCNilScopedAccessWatchDog lifecycleEnding:] */

void FUN_10b0a8e84(void)

{
  return;
}



/* Entry: 10b0a8e88; end: 10b0a8e8b; -[SCNilScopedAccessWatchDog lifecycleEnded:] */

void FUN_10b0a8e88(void)

{
  return;
}



/* Entry: 10b0a8e8c; end: 10b0a8e8f; -[SCNilScopedAccessWatchDog entryPoint:beginningInLifecycle:] */

void FUN_10b0a8e8c(void)

{
  return;
}



/* Entry: 10b0a8e90; end: 10b0a8e93; -[SCNilScopedAccessWatchDog entryPoint:beganInLifecycle:] */

void FUN_10b0a8e90(void)

{
  return;
}



/* Entry: 10b0a8e94; end: 10b0a8e97; -[SCNilScopedAccessWatchDog services:willBeExposedInLifecycle:] */

void FUN_10b0a8e94(void)

{
  return;
}



/* Entry: 10b0a8e98; end: 10b0a8e9b; -[SCNilScopedAccessWatchDog serviceProviderProviding:] */

void FUN_10b0a8e98(void)

{
  return;
}



/* Entry: 10b0a8e9c; end: 10b0a8e9f; -[SCNilScopedAccessWatchDog serviceProviderProvided:] */

void FUN_10b0a8e9c(void)

{
  return;
}



/* Entry: 10b0a8ea0; end: 10b0a8ea3; -[SCNilScopedAccessWatchDog scope:willBeExposedFromLifecycle:] */

void FUN_10b0a8ea0(void)

{
  return;
}



/* Entry: 10b0a8ea4; end: 10b0a8ea7; -[SCNilScopedAccessWatchDog scope:willBeRemovedFromLifecycle:] */

void FUN_10b0a8ea4(void)

{
  return;
}



/* Entry: 10b0a8ea8; end: 10b0a8eab; -[SCNilScopedAccessWatchDog plugInScope:loadingPlugInsInLifecycle:] */

void FUN_10b0a8ea8(void)

{
  return;
}



/* Entry: 10b0a8eac; end: 10b0a8eaf; -[SCNilScopedAccessWatchDog plugInScope:loadedPlugInsInLifecycle:] */

void FUN_10b0a8eac(void)

{
  return;
}



/* Entry: 10b0a8eb0; end: 10b0a8eb3; -[SCNilScopedAccessWatchDog scope:overExposedInLifecycle:] */

void FUN_10b0a8eb0(void)

{
  return;
}



/* Entry: 10b0a8eb4; end: 10b0a8eb7; -[SCNilScopedAccessWatchDog scope:overRemovedInLifecycle:] */

void FUN_10b0a8eb4(void)

{
  return;
}



/* Entry: 10b0a8eb8; end: 10b0a8ebb; -[SCNilScopedAccessWatchDog lifecycleDuplicated:] */

void FUN_10b0a8eb8(void)

{
  return;
}



/* Entry: 10b0a8ebc; end: 10b0a8f03; -[SCNilScopedAccessWatchDog scopedAccess:didAccessValue:] */

void FUN_10b0a8ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
    return;
  }
  _NSStringFromClass(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8fd40(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0a8f04; end: 10b0a8f0f; -[SCNilScopedAccessWatchDog .cxx_destruct] */

void FUN_10b0a8f04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0a8f10; end: 10b0a8f13; -[SCNoOpScopeLifecycleMonitor setMemoryUsageMetricsReporter:] */

void FUN_10b0a8f10(void)

{
  return;
}



/* Entry: 10b0a8f14; end: 10b0a8f17; -[SCNoOpScopeLifecycleMonitor setMetricsReporter:] */

void FUN_10b0a8f14(void)

{
  return;
}



/* Entry: 10b0a8f18; end: 10b0a8f1b; -[SCNoOpScopeLifecycleMonitor setPerformanceMetricsReporter:] */

void FUN_10b0a8f18(void)

{
  return;
}



/* Entry: 10b0a8f1c; end: 10b0a8f1f; -[SCNoOpScopeLifecycleMonitor scopeGraphAllMappingsBuilt] */

void FUN_10b0a8f1c(void)

{
  return;
}



/* Entry: 10b0a8f20; end: 10b0a8f23; -[SCNoOpScopeLifecycleMonitor scopeGraphMappingBuildStart:] */

void FUN_10b0a8f20(void)

{
  return;
}



/* Entry: 10b0a8f24; end: 10b0a8f27; -[SCNoOpScopeLifecycleMonitor scopeGraphMappingBuildEnd:] */

void FUN_10b0a8f24(void)

{
  return;
}



/* Entry: 10b0a8f28; end: 10b0a8f2b; -[SCNoOpScopeLifecycleMonitor lifecycleEnding:] */

void FUN_10b0a8f28(void)

{
  return;
}



/* Entry: 10b0a8f2c; end: 10b0a8f2f; -[SCNoOpScopeLifecycleMonitor lifecycleEnded:] */

void FUN_10b0a8f2c(void)

{
  return;
}



/* Entry: 10b0a8f30; end: 10b0a8f33; -[SCNoOpScopeLifecycleMonitor entryPoint:endingInLifecycle:] */

void FUN_10b0a8f30(void)

{
  return;
}



/* Entry: 10b0a8f34; end: 10b0a8f37; -[SCNoOpScopeLifecycleMonitor entryPoint:endedInLifecycle:] */

void FUN_10b0a8f34(void)

{
  return;
}



/* Entry: 10b0a8f38; end: 10b0a8f3b; -[SCNoOpScopeLifecycleMonitor scope:willBeRemovedFromLifecycle:] */

void FUN_10b0a8f38(void)

{
  return;
}



/* Entry: 10b0a8f3c; end: 10b0a8f3f; -[SCNoOpScopeLifecycleMonitor scope:overExposedInLifecycle:] */

void FUN_10b0a8f3c(void)

{
  return;
}



/* Entry: 10b0a8f40; end: 10b0a8f43; -[SCNoOpScopeLifecycleMonitor scope:overRemovedInLifecycle:] */

void FUN_10b0a8f40(void)

{
  return;
}



/* Entry: 10b0a8f44; end: 10b0a8f47; -[SCNoOpScopeLifecycleMonitor lifecycleDuplicated:] */

void FUN_10b0a8f44(void)

{
  return;
}



/* Entry: 10b0a8f48; end: 10b0a8f4b; -[SCNoOpScopeLifecycleMonitor handleAppEvent:] */

void FUN_10b0a8f48(void)

{
  return;
}



/* Entry: 10b0a8f4c; end: 10b0a8fef; -[SCPerformanceMetricsLoggingMonitor init] */

undefined8 FUN_10b0a8f4c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = 0;
  _dispatch_queue_attr_make_with_qos_class(0,0x11,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x11;
  _dispatch_get_global_queue(0x11,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = &UNK_10f727520;
  _dispatch_queue_create_with_target_V2(&UNK_10f727520,uVar1,uVar2);
  func_0x00010c03c660(param_1);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0a8ff0; end: 10b0a908f; -[SCPerformanceMetricsLoggingMonitor initWithQueue:currentTime:] */

undefined1 *
FUN_10b0a8ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112705700;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0a9090; end: 10b0a9093; -[SCPerformanceMetricsLoggingMonitor setMemoryUsageMetricsReporter:] */

void FUN_10b0a9090(void)

{
  return;
}



/* Entry: 10b0a9094; end: 10b0a9097; -[SCPerformanceMetricsLoggingMonitor setMetricsReporter:] */

void FUN_10b0a9094(void)

{
  return;
}



/* Entry: 10b0a9098; end: 10b0a909b; -[SCPerformanceMetricsLoggingMonitor setExceptionReporter:] */

void FUN_10b0a9098(void)

{
  return;
}



/* Entry: 10b0a909c; end: 10b0a909f; -[SCPerformanceMetricsLoggingMonitor setStartupInfoService:] */

void FUN_10b0a909c(void)

{
  return;
}



/* Entry: 10b0a90a0; end: 10b0a915b; -[SCPerformanceMetricsLoggingMonitor setPerformanceMetricsReporter:] */

void FUN_10b0a90a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b0a915c;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x000107c27d8c(uVar1,&puStack_68);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10b0a915c; end: 10b0a918f;  */

void FUN_10b0a915c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea5aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b0a9190; end: 10b0a9287; -[SCPerformanceMetricsLoggingMonitor lifecycleBeginning:] */

void FUN_10b0a9190(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  pcVar3 = *(code **)(param_2 + 0x20);
  _objc_retain(param_4);
  (*pcVar3)();
  uVar2 = param_4;
  func_0x00010c098dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10b0a9288;
  puStack_58 = &UNK_110cb75e8;
  _objc_retain(uVar2);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x10b0a9298;
  puStack_88 = &UNK_110cb7618;
  uStack_80 = uVar2;
  uStack_78 = param_1;
  uStack_50 = uVar2;
  uStack_48 = param_1;
  _objc_retain(uVar2);
  func_0x00010be8fca0(param_2,param_3,&puStack_70,&puStack_a0);
  _objc_release(uStack_80);
  _objc_release(uStack_50);
  _objc_release(uVar2);
  return;
}



/* Entry: 10b0a9288; end: 10b0a92af;  */

void FUN_10b0a9288(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1331d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),param_2,
             PTR_s_reportLifecycleBeginStart_timest_11262a690,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b0a92b0; end: 10b0a93a7; -[SCPerformanceMetricsLoggingMonitor lifecycleBegan:] */

void FUN_10b0a92b0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  pcVar3 = *(code **)(param_2 + 0x20);
  _objc_retain(param_4);
  (*pcVar3)();
  uVar2 = param_4;
  func_0x00010c098dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10b0a93a8;
  puStack_58 = &UNK_110cb75e8;
  _objc_retain(uVar2);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x10b0a93b8;
  puStack_88 = &UNK_110cb7618;
  uStack_80 = uVar2;
  uStack_78 = param_1;
  uStack_50 = uVar2;
  uStack_48 = param_1;
  _objc_retain(uVar2);
  func_0x00010be8fca0(param_2,param_3,&puStack_70,&puStack_a0);
  _objc_release(uStack_80);
  _objc_release(uStack_50);
  _objc_release(uVar2);
  return;
}



/* Entry: 10b0a93a8; end: 10b0a93cf;  */

void FUN_10b0a93a8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c133190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),param_2,
             PTR_s_reportLifecycleBeginEnd_timestam_11262a680,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b0a93d0; end: 10b0a956b; -[SCPerformanceMetricsLoggingMonitor entryPoint:beginningInLifecycle:] */

void FUN_10b0a93d0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  pcVar5 = *(code **)(param_2 + 0x20);
  _objc_retain(param_5);
  _objc_retain(param_4);
  (*pcVar5)();
  uVar2 = param_4;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010b0a9b84();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar4 = param_5;
  func_0x00010c098dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10b0a956c;
  puStack_78 = &UNK_110cb7648;
  _objc_retain(uVar2);
  uStack_70 = uVar2;
  _objc_retain(uVar3);
  uStack_68 = uVar3;
  _objc_retain(uVar4);
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x10b0a9580;
  puStack_b8 = &UNK_110cb7678;
  uStack_b0 = uVar2;
  uStack_a8 = uVar3;
  uStack_a0 = uVar4;
  uStack_98 = param_1;
  uStack_60 = uVar4;
  uStack_58 = param_1;
  _objc_retain(uVar4);
  _objc_retain(uVar3);
  _objc_retain(uVar2);
  func_0x00010be8fca0(param_2,param_3,&puStack_90,&puStack_d0);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 10b0a956c; end: 10b0a959b;  */

void FUN_10b0a956c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c132cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),param_2,
             PTR_s_reportEntryPointBeginStart_ofTyp_11262a548,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10b0a959c; end: 10b0a9737; -[SCPerformanceMetricsLoggingMonitor entryPoint:beganInLifecycle:] */

void FUN_10b0a959c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  pcVar5 = *(code **)(param_2 + 0x20);
  _objc_retain(param_5);
  _objc_retain(param_4);
  (*pcVar5)();
  uVar2 = param_4;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c098dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar4 = param_4;
  func_0x00010b0a9b84();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10b0a9738;
  puStack_78 = &UNK_110cb7648;
  _objc_retain(uVar2);
  uStack_70 = uVar2;
  _objc_retain(uVar4);
  uStack_68 = uVar4;
  _objc_retain(uVar3);
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x10b0a974c;
  puStack_b8 = &UNK_110cb7678;
  uStack_b0 = uVar2;
  uStack_a8 = uVar4;
  uStack_a0 = uVar3;
  uStack_98 = param_1;
  uStack_60 = uVar3;
  uStack_58 = param_1;
  _objc_retain(uVar3);
  _objc_retain(uVar4);
  _objc_retain(uVar2);
  func_0x00010be8fca0(param_2,param_3,&puStack_90,&puStack_d0);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  return;
}



/* Entry: 10b0a9738; end: 10b0a9767;  */

void FUN_10b0a9738(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c132c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),param_2,
             PTR_s_reportEntryPointBeginEnd_ofType__11262a538,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10b0a9768; end: 10b0a97b3; -[SCPerformanceMetricsLoggingMonitor _setMetricsReporter:] */

void FUN_10b0a9768(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be18350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__flushQueuedEvents_112563a70);
    return;
  }
  return;
}



/* Entry: 10b0a97b4; end: 10b0a990f; -[SCPerformanceMetricsLoggingMonitor _reportMetric:orQueueEvent:] */

void FUN_10b0a97b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x10b0a9894;
  puStack_58 = &UNK_110924520;
  _objc_copyWeak(auStack_40,auStack_38);
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x000107c27d8c(uVar1,&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10b0a9910; end: 10b0a9aaf; -[SCPerformanceMetricsLoggingMonitor _flushQueuedEvents] */

void FUN_10b0a9910(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      func_0x00010c0bf9a0(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  lVar2 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c1331d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(lVar2 + 0x20) + 8),
             PTR_s_reportLifecycleBeginStart_timest_11262a690,param_2);
  return;
}



/* Entry: 10b0a9ab0; end: 10b0a9aff;  */

void FUN_10b0a9ab0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1331d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_reportLifecycleBeginStart_timest_11262a690,param_2);
  return;
}



/* Entry: 10b0a9b00; end: 10b0a9b03; -[SCPerformanceMetricsLoggingMonitor scopeGraphAllMappingsBuilt] */

void FUN_10b0a9b00(void)

{
  return;
}



/* Entry: 10b0a9b04; end: 10b0a9b07; -[SCPerformanceMetricsLoggingMonitor scopeGraphMappingBuildStart:] */

void FUN_10b0a9b04(void)

{
  return;
}



/* Entry: 10b0a9b08; end: 10b0a9b0b; -[SCPerformanceMetricsLoggingMonitor scopeGraphMappingBuildEnd:] */

void FUN_10b0a9b08(void)

{
  return;
}



/* Entry: 10b0a9b0c; end: 10b0a9b0f; -[SCPerformanceMetricsLoggingMonitor lifecycleEnding:] */

void FUN_10b0a9b0c(void)

{
  return;
}


