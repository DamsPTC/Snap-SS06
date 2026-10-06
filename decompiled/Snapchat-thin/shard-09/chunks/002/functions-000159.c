/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106af506c; end: 106af50b7; +[KSCrashReportFileUtils getReportIDFromReport:] */

void FUN_106af506c(undefined8 param_1)

{
  FUN_106af51d4();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af51e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106af50b8; end: 106af511b; +[KSCrashReportFileUtils getReportFileIDFromReport:] */

undefined8 FUN_106af50b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_106af51d4();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b4ca0();
  _objc_release(param_1);
  func_0x000106af51e4();
  return uVar1;
}



/* Entry: 106af511c; end: 106af5187; +[KSCrashReportFileUtils isNonFatal:] */

undefined8 FUN_106af511c(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_106af51d4();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0720c0();
  _objc_release(param_1);
  func_0x000106af51e4();
  return uVar1;
}



/* Entry: 106af5188; end: 106af51d3; +[KSCrashReportFileUtils getNonFatalReportName:] */

void FUN_106af5188(undefined8 param_1)

{
  FUN_106af51d4();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af51e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106af51d4; end: 106af51eb;  */

undefined8 FUN_106af51d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



/* Entry: 106af51ec; end: 106af530f; -[KSCrashThreadStackDumper dumpStackTraceForThread:] */

void FUN_106af51ec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_398 [872];
  
  lVar1 = param_1;
  _pthread_self();
  if (param_3 == lVar1) {
    FUN_106af0b98(auStack_398,0);
    func_0x00010beea5e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    param_3 = param_1;
  }
  else {
    _pthread_mutex_lock(0x113170770);
    uVar2 = 0;
    _dispatch_semaphore_create();
    uVar3 = uRam00000001136c6340;
    uRam00000001136c6340 = uVar2;
    _objc_release(uVar3);
    _pthread_kill(param_3,0x1f);
    if ((int)param_3 == 0) {
      uVar3 = 0;
      _dispatch_time(0,3000000000);
      _dispatch_semaphore_wait(uRam00000001136c6340,uVar3);
      FUN_106af095c(auStack_398,0x1136c6350,uRam00000001136c6348,1);
      func_0x00010beea5e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _bzero(0x1136c6350,800);
      uRam00000001136c6348 = 0;
      func_0x000106af54f4();
      param_3 = param_1;
    }
    else {
      func_0x000106af54f4();
      func_0x000106af54e8();
      func_0x00010c04b760();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106af5310; end: 106af54af; -[KSCrashThreadStackDumper _walkStack:] */

void FUN_106af5310(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  _objc_retainAutoreleasedReturnValue();
  iVar7 = 0;
  while (puVar3 = param_3, (*(code *)param_3[7])(), (int)puVar3 != 0) {
    puVar3 = param_3;
    (*(code *)param_3[8])();
    if ((int)puVar3 != 0) {
      lVar4 = param_3[1];
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        FUN_106aec680();
        puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25d8e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,lVar4,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2,param_2,puVar6);
        _objc_release(puVar6);
      }
      uVar8 = *param_3;
      uVar9 = param_3[2];
      puVar6 = PTR_PTR_1126b6c28;
      func_0x00010bf497a0(PTR_PTR_1126b6c28,param_2,iVar7,lVar4,uVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126b6c28;
      func_0x00010bf49800(PTR_PTR_1126b6c28,param_2,uVar9,uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dfd398);
      iVar7 = iVar7 + 1;
      _objc_release(puVar5);
      _objc_release(puVar6);
    }
  }
  FUN_106af54e8();
  puVar6 = puVar2;
  func_0x00010bf00560(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04b760(puVar3,param_2,puVar1,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106af54b0; end: 106af54e7;  */

void FUN_106af54b0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x1136c6350;
  _backtrace_async(0x1136c6350,100,0);
  uRam00000001136c6348 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(uRam00000001136c6340);
  return;
}



/* Entry: 106af54e8; end: 106af54ff;  */

void FUN_106af54e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_alloc_11034d1a8)(PTR_PTR_1126d0620);
  return;
}



/* Entry: 106af5500; end: 106af5537; +[KSCString stringWithString:] */

void FUN_106af5500(void)

{
  undefined8 unaff_x20;
  
  func_0x000106af576c();
  _objc_retain();
  _objc_alloc();
  func_0x00010c04e820();
  func_0x000106af5784();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}



/* Entry: 106af5538; end: 106af555b; +[KSCString stringWithCString:] */

void FUN_106af5538(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x00010bffa3a0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106af555c; end: 106af5593; +[KSCString stringWithData:] */

void FUN_106af555c(void)

{
  undefined8 unaff_x20;
  
  func_0x000106af576c();
  _objc_retain();
  _objc_alloc();
  func_0x00010c008240();
  func_0x000106af5784();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}



/* Entry: 106af5594; end: 106af55bf; +[KSCString stringWithData:length:] */

void FUN_106af5594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_alloc();
  func_0x00010c008420(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106af55c0; end: 106af55f3; -[KSCString initWithString:] */

void FUN_106af55c0(void)

{
  func_0x000106af576c();
  _objc_retainAutorelease();
  func_0x00010bf260e0();
                    /* WARNING: Could not recover jumptable at 0x00010bffa3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 106af55f4; end: 106af563b; -[KSCString initWithCString:] */

long FUN_106af55f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000106af5750();
  if (param_1 != 0) {
    _strdup();
    *(undefined8 *)(param_1 + 0x10) = param_3;
    _strlen();
    *(undefined8 *)(param_1 + 8) = param_3;
  }
  return param_1;
}



/* Entry: 106af563c; end: 106af5693; -[KSCString initWithData:] */

void FUN_106af563c(void)

{
  func_0x000106af576c();
  _objc_retainAutorelease();
  _objc_retain();
  func_0x00010bf25f00();
  func_0x00010c08fa60();
  func_0x000106af5784();
                    /* WARNING: Could not recover jumptable at 0x00010c008430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 106af5694; end: 106af56f7; -[KSCString initWithData:length:] */

long FUN_106af5694(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  
  func_0x000106af5750();
  if (param_1 != 0) {
    *(long *)(param_1 + 8) = param_4;
    uVar1 = (ulong)((int)param_4 + 1);
    _malloc();
    _memcpy();
    *(undefined1 *)(uVar1 + param_4) = 0;
    *(ulong *)(param_1 + 0x10) = uVar1;
  }
  return param_1;
}



/* Entry: 106af56f8; end: 106af573f; -[KSCString dealloc] */

void FUN_106af56f8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _free(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_1126f4cf8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106af5740; end: 106af5747; -[KSCString length] */

undefined8 FUN_106af5740(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106af5748; end: 106af578b; -[KSCString bytes] */

undefined8 FUN_106af5748(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106af578c; end: 106af581f; -[KSThreadDumpInfo initWithStackTraces:imageNames:] */

undefined1 *
FUN_106af578c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f4d00;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c2090c0(puVar1);
    func_0x00010c1aa600(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106af5820; end: 106af5827; -[KSThreadDumpInfo stackTraces] */

undefined8 FUN_106af5820(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106af5828; end: 106af582f; -[KSThreadDumpInfo setStackTraces:] */

void FUN_106af5828(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106af5830; end: 106af5837; -[KSThreadDumpInfo imageNames] */

undefined8 FUN_106af5830(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106af5838; end: 106af583f; -[KSThreadDumpInfo setImageNames:] */

void FUN_106af5838(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106af5840; end: 106af586f; -[KSThreadDumpInfo .cxx_destruct] */

void FUN_106af5840(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106af5870; end: 106af5877; +[FBAllocationTrackerManager sharedManager] */

undefined8 FUN_106af5870(void)

{
  return 0;
}



/* Entry: 106af5878; end: 106af587f; -[FBAllocationTrackerManager isAllocationTrackerEnabled] */

undefined8 FUN_106af5878(void)

{
  return 0;
}



/* Entry: 106af5880; end: 106af5883; -[FBAllocationTrackerManager startTrackingAllocations] */

void FUN_106af5880(void)

{
  return;
}



/* Entry: 106af5884; end: 106af5887; -[FBAllocationTrackerManager stopTrackingAllocations] */

void FUN_106af5884(void)

{
  return;
}



/* Entry: 106af5888; end: 106af588b; -[FBAllocationTrackerManager enableGenerations] */

void FUN_106af5888(void)

{
  return;
}



/* Entry: 106af588c; end: 106af588f; -[FBAllocationTrackerManager disableGenerations] */

void FUN_106af588c(void)

{
  return;
}



/* Entry: 106af5890; end: 106af5893; -[FBAllocationTrackerManager markGeneration] */

void FUN_106af5890(void)

{
  return;
}



/* Entry: 106af5894; end: 106af589b; -[FBAllocationTrackerManager currentAllocationSummary] */

undefined8 FUN_106af5894(void)

{
  return 0;
}



/* Entry: 106af589c; end: 106af58a3; -[FBAllocationTrackerManager currentSummaryForGenerations] */

undefined8 FUN_106af589c(void)

{
  return 0;
}



/* Entry: 106af58a4; end: 106af58ab; -[FBAllocationTrackerManager instancesForClass:inGeneration:] */

undefined8 FUN_106af58a4(void)

{
  return 0;
}



/* Entry: 106af58ac; end: 106af58b3; -[FBAllocationTrackerManager instancesOfClasses:] */

undefined8 FUN_106af58ac(void)

{
  return 0;
}



/* Entry: 106af58b4; end: 106af58bb; -[FBAllocationTrackerManager trackedClasses] */

undefined8 FUN_106af58b4(void)

{
  return 0;
}



/* Entry: 106af58bc; end: 106af595b; -[FBAllocationTrackerSummary initWithAllocations:deallocations:aliveObjects:className:instanceSize:] */

undefined1 *
FUN_106af58bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f4d08;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 106af595c; end: 106af5a77; -[FBAllocationTrackerSummary description] */

void FUN_106af595c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(long *)(param_1 + 0x28) * *(long *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar6,param_2,&PTR____CFConstantStringClassReference_110e71558);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106af5a78; end: 106af5a7f; -[FBAllocationTrackerSummary allocations] */

undefined8 FUN_106af5a78(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106af5a80; end: 106af5a87; -[FBAllocationTrackerSummary deallocations] */

undefined8 FUN_106af5a80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106af5a88; end: 106af5a8f; -[FBAllocationTrackerSummary aliveObjects] */

undefined8 FUN_106af5a88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106af5a90; end: 106af5a97; -[FBAllocationTrackerSummary className] */

undefined8 FUN_106af5a90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106af5a98; end: 106af5a9f; -[FBAllocationTrackerSummary instanceSize] */

undefined8 FUN_106af5a98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106af5aa0; end: 106af5aab; -[FBAllocationTrackerSummary .cxx_destruct] */

void FUN_106af5aa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 106af5aac; end: 106af5b67;  */

void FUN_106af5aac(undefined1 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126d0628;
  _objc_alloc(PTR_PTR_1126d0628);
  uVar1 = *param_1;
  puVar3 = param_1 + 8;
  func_0x0001001011a4(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  puVar4 = param_1 + 0x28;
  func_0x0001056329cc(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01faa0(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),
                      *(undefined8 *)(param_1 + 0x68),puVar2,param_2,uVar1,puVar3,uVar5,puVar4,
                      (long)*(int *)(param_1 + 0x50));
  FUN_106af5be0();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106af5b68; end: 106af5bdf;  */

undefined1 *
FUN_106af5b68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
             undefined1 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_4 = param_5;
  uVar2 = param_6[1];
  uVar1 = *param_6;
  *(undefined8 *)(param_4 + 0x18) = param_6[2];
  *(undefined8 *)(param_4 + 0x10) = uVar2;
  *(undefined8 *)(param_4 + 8) = uVar1;
  param_6[1] = 0;
  param_6[2] = 0;
  *param_6 = 0;
  *(undefined8 *)(param_4 + 0x20) = param_7;
  func_0x00010028acf0(param_4 + 0x28,param_8);
  *(undefined4 *)(param_4 + 0x50) = param_9;
  *(undefined8 *)(param_4 + 0x58) = param_1;
  *(undefined8 *)(param_4 + 0x60) = param_2;
  *(undefined8 *)(param_4 + 0x68) = param_3;
  return param_4;
}



/* Entry: 106af5be0; end: 106af5bef;  */

void FUN_106af5be0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106af5bf0; end: 106af5c03;  */

void FUN_106af5bf0(void)

{
  FUN_106af5d78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106af5c04; end: 106af5c0f;  */

long FUN_106af5c04(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110960288;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    func_0x000106af5d94();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 106af5c10; end: 106af5c4f;  */

void FUN_106af5c10(void)

{
  func_0x000106af5d88();
  return;
}



/* Entry: 106af5c50; end: 106af5ce7;  */

void FUN_106af5c50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_106af5aac(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_106af5fe8(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5a80(uVar2);
  func_0x000106af5d94();
  func_0x00010044faa4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106af5ce8; end: 106af5d77;  */

long FUN_106af5ce8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110960288;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    func_0x000106af5d94();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 106af5d78; end: 106af5d9b;  */

void FUN_106af5d78(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109602c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 106af5d9c; end: 106af5e1b; -[SCNBlizzardNativeBlizzardEventLoggerInstaller initWithCpp:] */

undefined1 * FUN_106af5d9c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar4 = &uStack_40;
  puStack_38 = PTR_PTR_1126f4d10;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar4 != (undefined8 *)0x0) {
    uVar6 = param_3[1];
    uVar5 = *param_3;
    if (param_3[1] != 0) {
      plVar1 = (long *)(param_3[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_28 = *(undefined8 *)((long)puVar4 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar4 + 0x18);
    *(undefined8 *)((long)puVar4 + 0x20) = uVar6;
    *(undefined8 *)((long)puVar4 + 0x18) = uVar5;
    func_0x000106af5ec0(&uStack_30);
  }
  return (undefined1 *)puVar4;
}



/* Entry: 106af5e1c; end: 106af5e77; -[SCNBlizzardNativeBlizzardEventLoggerInstaller .cxx_destruct] */

void FUN_106af5e1c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110960358;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x000106af5ec0((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 106af5e78; end: 106af5ee7; -[SCNBlizzardNativeBlizzardEventLoggerInstaller .cxx_construct] */

undefined8 * FUN_106af5e78(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  func_0x00010015c19c();
  lVar5 = puVar4[1];
  uVar6 = *puVar4;
  param_1[2] = puVar4[1];
  param_1[1] = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 106af5ee8; end: 106af5f5f; -[SCNBlizzardProtoSerializationCallbackCppProxy initWithCpp:] */

undefined1 * FUN_106af5ee8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f4d18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_106af61f8();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_106af61cc(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106af5f60; end: 106af5fe7; -[SCNBlizzardProtoSerializationCallbackCppProxy serializeToProto] */

void FUN_106af5f60(long param_1)

{
  undefined1 auStack_38 [24];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(auStack_38);
  func_0x000100101220(auStack_38);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af6214();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106af5fe8; end: 106af6057;  */

void FUN_106af5fe8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_110960368,&PTR_DAT_110960378,0);
    if (lVar1 == 0) {
      FUN_106af60f0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      param_1 = *(long **)(lVar1 + 0x18);
      _objc_retain(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106af6058; end: 106af60ab; -[SCNBlizzardProtoSerializationCallbackCppProxy .cxx_destruct] */

void FUN_106af6058(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1109603c0;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  FUN_106af61cc((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 106af60ac; end: 106af60ef; -[SCNBlizzardProtoSerializationCallbackCppProxy .cxx_construct] */

undefined8 * FUN_106af60ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_106af61f8();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 106af60f0; end: 106af615b;  */

void FUN_106af60f0(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_1109603c0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_106af61f8();
    } while (extraout_w10 != 0);
  }
  func_0x00010015c218(&ppuStack_28,&uStack_40,FUN_106af615c);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af6220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106af615c; end: 106af61cb;  */

void FUN_106af615c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126d0638;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_106af61f8();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_106af61cc(&uStack_30);
  return;
}



/* Entry: 106af61cc; end: 106af61f7;  */

long FUN_106af61cc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 106af61f8; end: 106af623f;  */

void FUN_106af61f8(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 106af6240; end: 106af6367; -[SCNBlizzardBlizzardNativeEvent initWithIsUserTracked:eventName:payloadId:eventFields:qualityOfService:perUserSamplingRate:perEventSamplingRate:perUserSamplingRateV2:] */

undefined1 *
FUN_106af6240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_7);
  _objc_retain(param_9);
  puStack_78 = PTR_PTR_1126f4d20;
  uStack_80 = param_4;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_10;
    *(undefined8 *)((long)puVar1 + 0x30) = param_1;
    *(undefined8 *)((long)puVar1 + 0x38) = param_2;
    *(undefined8 *)((long)puVar1 + 0x40) = param_3;
  }
  _objc_release(param_9);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 106af6368; end: 106af636f; -[SCNBlizzardBlizzardNativeEvent isUserTracked] */

undefined1 FUN_106af6368(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106af6370; end: 106af6377; -[SCNBlizzardBlizzardNativeEvent eventName] */

undefined8 FUN_106af6370(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106af6378; end: 106af637f; -[SCNBlizzardBlizzardNativeEvent payloadId] */

undefined8 FUN_106af6378(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106af6380; end: 106af6387; -[SCNBlizzardBlizzardNativeEvent eventFields] */

undefined8 FUN_106af6380(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106af6388; end: 106af638f; -[SCNBlizzardBlizzardNativeEvent qualityOfService] */

undefined8 FUN_106af6388(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106af6390; end: 106af6397; -[SCNBlizzardBlizzardNativeEvent perUserSamplingRate] */

undefined8 FUN_106af6390(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106af6398; end: 106af639f; -[SCNBlizzardBlizzardNativeEvent perEventSamplingRate] */

undefined8 FUN_106af6398(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106af63a0; end: 106af63a7; -[SCNBlizzardBlizzardNativeEvent perUserSamplingRateV2] */

undefined8 FUN_106af63a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106af63a8; end: 106af63d7; -[SCNBlizzardBlizzardNativeEvent .cxx_destruct] */

void FUN_106af63a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106af63d8; end: 106af63db;  */

void FUN_106af63d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110960468;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 106af63dc; end: 106af63ef;  */

void FUN_106af63dc(void)

{
  func_0x000106af655c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106af63f0; end: 106af63fb;  */

long FUN_106af63f0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110960428;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 106af63fc; end: 106af643b;  */

void FUN_106af63fc(void)

{
  func_0x000106af656c();
  return;
}



/* Entry: 106af643c; end: 106af64af;  */

void FUN_106af643c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_106af6544(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25c500(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 106af64b0; end: 106af6543;  */

long FUN_106af64b0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110960428;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 106af6544; end: 106af6577;  */

void FUN_106af6544(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf64a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSData_1126ae778,PTR_s_dataWithBytesNoCopy_length_freeW_1125b6c38,
             *param_1,param_1[1],0);
  return;
}



/* Entry: 106af6578; end: 106af65f7; -[SCNSpectrumNativeSpectrumEventLoggerInstaller initWithCpp:] */

undefined1 * FUN_106af6578(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar4 = &uStack_40;
  puStack_38 = PTR_PTR_1126f4d28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar4 != (undefined8 *)0x0) {
    uVar6 = param_3[1];
    uVar5 = *param_3;
    if (param_3[1] != 0) {
      plVar1 = (long *)(param_3[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_28 = *(undefined8 *)((long)puVar4 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar4 + 0x18);
    *(undefined8 *)((long)puVar4 + 0x20) = uVar6;
    *(undefined8 *)((long)puVar4 + 0x18) = uVar5;
    func_0x000106af669c(&uStack_30);
  }
  return (undefined1 *)puVar4;
}



/* Entry: 106af65f8; end: 106af6653; -[SCNSpectrumNativeSpectrumEventLoggerInstaller .cxx_destruct] */

void FUN_106af65f8(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1109604f8;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x000106af669c((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 106af6654; end: 106af66c3; -[SCNSpectrumNativeSpectrumEventLoggerInstaller .cxx_construct] */

undefined8 * FUN_106af6654(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  func_0x00010015c19c();
  lVar5 = puVar4[1];
  uVar6 = *puVar4;
  param_1[2] = puVar4[1];
  param_1[1] = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 106af66c4; end: 106af66f3;  */

void FUN_106af66c4(void)

{
  func_0x00010bcebda8();
  FUN_106af676c();
  return;
}



/* Entry: 106af66f4; end: 106af676b;  */

undefined8 * FUN_106af66f4(long param_1,long param_2)

{
  undefined8 *unaff_x19;
  
  if (param_1 == 0) {
    param_1 = 0x20;
    __Znwm();
  }
  else {
    func_0x000106af6788();
  }
  func_0x00010bcec220();
  *unaff_x19 = &PTR_DAT_110d9b4b0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010bcec1ec();
  }
  func_0x00010bcec1f8();
  unaff_x19[2] = param_1;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  return unaff_x19;
}



/* Entry: 106af676c; end: 106af6793;  */

long FUN_106af676c(long param_1)

{
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 106af6794; end: 106af67bf;  */

long FUN_106af6794(long param_1)

{
  func_0x00010bceb940();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 106af67c0; end: 106af6803;  */

undefined8 * FUN_106af67c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x18);
  }
  *puVar1 = &PTR_DAT_110d9b550;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  func_0x00010bceb8bc();
  return puVar1;
}



/* Entry: 106af6804; end: 106af682f;  */

long FUN_106af6804(long param_1)

{
  func_0x00010bceb580();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 106af6830; end: 106af6873;  */

undefined8 * FUN_106af6830(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x18);
  }
  *puVar1 = &PTR_DAT_110d9b5a0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  func_0x00010bceb4f4();
  return puVar1;
}



/* Entry: 106af6874; end: 106af687f;  */

void FUN_106af6874(ulong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*param_1 & 0xfffffffffffffffc);
  if (-1 < *(char *)((long)puVar1 + 0x17)) {
    *(undefined1 *)puVar1 = 0;
    *(undefined1 *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 106af6880; end: 106af69bf;  */

void FUN_106af6880(byte *param_1)

{
  ulong uVar1;
  
  FUN_106af6ce8();
  uVar1 = 0x38;
  func_0x0001001a59d0();
  func_0x000106af6d28();
  for (; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *param_1 = (byte)uVar1 | 0x80;
    param_1 = param_1 + 1;
  }
  *param_1 = (byte)uVar1;
  return;
}



/* Entry: 106af69c0; end: 106af6a47;  */

undefined8 *
FUN_106af69c0(int param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar3 = param_5;
  func_0x0001001a597c(param_5,param_4);
  uVar1 = (ulong)(param_1 << 3 | 2);
  func_0x0001001a59d0(uVar1,uVar3);
  uVar3 = param_2;
  func_0x0001001a5744(param_2);
  uVar2 = (ulong)((int)uVar3 + 10);
  func_0x0001001a59d0(uVar2,uVar1);
  uVar3 = 1;
  func_0x0001059928f0(1,param_2,uVar2,param_5);
  func_0x0001001a597c(param_5,uVar3);
  uVar3 = *param_3;
  puVar4 = (undefined8 *)0x11;
  func_0x0001001a59d0(0x11,param_5);
  *puVar4 = uVar3;
  return puVar4 + 1;
}



/* Entry: 106af6a48; end: 106af6a93;  */

undefined8 * FUN_106af6a48(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[1] = 0x100000000;
  *param_1 = 0x100000000;
  param_1[2] = &DAT_10e5b4a18;
  param_1[3] = param_2;
  FUN_106af6bb0(param_1,param_3);
  return param_1;
}



/* Entry: 106af6a94; end: 106af6ad7;  */

long FUN_106af6a94(long param_1)

{
  if (*(int *)(param_1 + 4) != 1) {
    func_0x00010063c004(param_1,&UNK_100280020,0);
  }
  return param_1;
}



/* Entry: 106af6ad8; end: 106af6b6f;  */

ulong * FUN_106af6ad8(ulong *param_1,uint *param_2)

{
  uint uVar1;
  long *plVar2;
  long alStack_48 [3];
  
  uVar1 = *param_2;
  *param_1 = (ulong)uVar1;
  if (uVar1 == 0) {
    param_1[1] = 0;
  }
  else {
    plVar2 = (long *)((ulong)uVar1 << 3);
    __Znam();
    param_1[1] = (ulong)plVar2;
    func_0x00010564c19c(alStack_48,param_2);
    while (alStack_48[0] != 0) {
      *plVar2 = alStack_48[0] + 8;
      func_0x000106af6d20();
      plVar2 = plVar2 + 1;
    }
    func_0x000105991c2c(param_1[1],param_1[1] + *param_1 * 8);
  }
  return param_1;
}


