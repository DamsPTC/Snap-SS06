/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b10bd6c; end: 10b10bd7b;  */

void FUN_10b10bd6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b10bd7c; end: 10b10bdfb; -[SCNFileManagerGetResultCppProxy initWithCpp:] */

undefined1 * FUN_10b10bd7c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112705dd0;
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
    func_0x00010b10c000(&uStack_30);
  }
  return (undefined1 *)puVar4;
}



/* Entry: 10b10bdfc; end: 10b10be53; -[SCNFileManagerGetResultCppProxy getError] */

long FUN_10b10bdfc(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x10))();
  return (long)(int)plVar1;
}



/* Entry: 10b10be54; end: 10b10bed7; -[SCNFileManagerGetResultCppProxy getData] */

void FUN_10b10be54(long param_1)

{
  undefined1 auStack_30 [16];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(auStack_30);
  func_0x00010bcc07c0(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b10c048();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b10bed8; end: 10b10bf5b; -[SCNFileManagerGetResultCppProxy getDataRef] */

void FUN_10b10bed8(long param_1)

{
  undefined1 auStack_30 [16];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))(auStack_30);
  func_0x000107c31724(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b10c03c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b10bf5c; end: 10b10bfb7; -[SCNFileManagerGetResultCppProxy .cxx_destruct] */

void FUN_10b10bf5c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cbb890;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x00010b10c000((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b10bfb8; end: 10b10c027; -[SCNFileManagerGetResultCppProxy .cxx_construct] */

undefined8 * FUN_10b10bfb8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  func_0x000107c31704();
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



/* Entry: 10b10c028; end: 10b10c063;  */

void FUN_10b10c028(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b10c064; end: 10b10c0bf; -[SCNGrapheneClientMetricsProcessor compact] */

void FUN_10b10c064(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 10b10c0c0; end: 10b10c18b; -[SCNGrapheneClientMetricsProcessor flush:] */

void FUN_10b10c0c0(void)

{
  undefined1 *puVar1;
  long unaff_x20;
  long *plVar2;
  undefined1 auStack_98 [48];
  undefined1 auStack_68 [56];
  
  func_0x000107c35088();
  plVar2 = *(long **)(unaff_x20 + 0x18);
  func_0x000107c3509c();
  FUN_10b10c774();
  (**(code **)(*plVar2 + 0x20))(auStack_68,plVar2,auStack_98);
  FUN_10b10c1e0(auStack_98);
  puVar1 = auStack_68;
  FUN_10b10c878(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27914(auStack_68);
  func_0x000107c35080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b10c18c; end: 10b10c1df; -[SCNGrapheneClientMetricsProcessor .cxx_destruct] */

void FUN_10b10c18c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cbb8a0;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000107c2be00((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b10c1e0; end: 10b10c207;  */

void FUN_10b10c1e0(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10b10c208; end: 10b10c233;  */

undefined1 * FUN_10b10c208(void)

{
  return &stack0x00000008;
}



/* Entry: 10b10c234; end: 10b10c27b;  */

void FUN_10b10c234(void)

{
  _objc_alloc(PTR_PTR_1126dfca0);
  func_0x00010c00ff60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b10c27c; end: 10b10c333;  */

void FUN_10b10c27c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_110cbb908;
    lStack_40 = param_2;
    func_0x000107c316f4(&uStack_30,&ppuStack_38,&lStack_40,FUN_10b10c334);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x000107c27d28(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10b10c61c(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10b10c334; end: 10b10c42f;  */

void FUN_10b10c334(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110cbb948;
  puVar4[3] = &PTR_DAT_110cbb9d0;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x000107c316f8();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_FUN_110cbb998;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10b10c61c(&uStack_50);
  return;
}



/* Entry: 10b10c430; end: 10b10c433;  */

void FUN_10b10c430(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbb948;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b10c434; end: 10b10c447;  */

void FUN_10b10c434(void)

{
  FUN_10b10c60c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b10c448; end: 10b10c453;  */

long FUN_10b10c448(long param_1)

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
    ppuStack_38 = &PTR_DAT_110cbb908;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10b10c454; end: 10b10c493;  */

void FUN_10b10c454(void)

{
  func_0x00010b10c694();
  return;
}



/* Entry: 10b10c494; end: 10b10c4df;  */

void FUN_10b10c494(void)

{
  FUN_10b10c648();
  func_0x00010b10c674();
  FUN_10b10c6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b10c684();
  func_0x00010bfec2c0();
  func_0x00010b10c658();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10b10c4e0; end: 10b10c52b;  */

void FUN_10b10c4e0(void)

{
  FUN_10b10c648();
  func_0x00010b10c674();
  FUN_10b10c6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b10c684();
  func_0x00010befbfe0();
  func_0x00010b10c658();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10b10c52c; end: 10b10c577;  */

void FUN_10b10c52c(void)

{
  FUN_10b10c648();
  func_0x00010b10c674();
  FUN_10b10c6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b10c684();
  func_0x00010bef9180();
  func_0x00010b10c658();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10b10c578; end: 10b10c60b;  */

long FUN_10b10c578(long param_1)

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
    ppuStack_38 = &PTR_DAT_110cbb908;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10b10c60c; end: 10b10c61b;  */

void FUN_10b10c60c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbb948;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b10c61c; end: 10b10c647;  */

long FUN_10b10c61c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b10c648; end: 10b10c69f;  */

void FUN_10b10c648(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPush_11034d1d8)();
  return;
}



/* Entry: 10b10c6a0; end: 10b10c767;  */

void FUN_10b10c6a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126dfca8;
  _objc_alloc(PTR_PTR_1126dfca8);
  lVar2 = param_1;
  func_0x000107c27f28(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x18;
  func_0x000107c27f28(lVar3);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x30;
  func_0x00010595bb18(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0343c0(puVar1,param_2,lVar2,lVar3,param_1);
  FUN_10b10c768();
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b10c768; end: 10b10c773;  */

void FUN_10b10c768(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b10c774; end: 10b10c877;  */

void FUN_10b10c774(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c294420(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f20(&uStack_48);
  uVar2 = param_2;
  func_0x00010c2922e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f20(&uStack_60);
  param_1[1] = uStack_40;
  *param_1 = uStack_48;
  param_1[2] = uStack_38;
  uStack_40 = 0;
  uStack_38 = 0;
  param_1[4] = uStack_58;
  param_1[3] = uStack_60;
  param_1[5] = uStack_50;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_60);
  _objc_release(uVar2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_48);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10b10c878; end: 10b10c90f;  */

void FUN_10b10c878(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126dfcb0;
  _objc_alloc(PTR_PTR_1126dfcb0);
  lVar2 = param_1;
  func_0x000107c28044(param_1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x18;
  FUN_10b10c234(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c014380(puVar1,param_2,lVar2,param_1);
  FUN_10b10c910();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b10c910; end: 10b10c91b;  */

void FUN_10b10c910(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b10c91c; end: 10b10c9a7;  */

void FUN_10b10c91c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x18) * 0x18;
  _memcpy(lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10b10c9a8; end: 10b10ca37;  */

long * FUN_10b10c9a8(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107f4e338();
  }
  lVar1 = param_4 + param_3 * 0x18;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x18;
  return param_1;
}



/* Entry: 10b10ca38; end: 10b10ca67;  */

void FUN_10b10ca38(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  puVar1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined8 **)(param_1 + 8) = puVar1 + 3;
  return;
}



/* Entry: 10b10ca68; end: 10b10cb4f;  */

long * FUN_10b10ca68(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *extraout_x8;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  uVar1 = (param_1[1] - *param_1) / 0x18 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
    func_0x000107f4e324();
    func_0x000107f4e37c(auStack_48);
    __Unwind_Resume();
    _objc_retain();
    plVar7 = param_1;
    func_0x00010c0888a0();
    _objc_retainAutoreleasedReturnValue();
    plVar3 = plVar7;
    func_0x000107c28134();
    plVar4 = param_1;
    func_0x00010bf6d0a0();
    _objc_retainAutoreleasedReturnValue();
    FUN_10b10cc20();
    plVar5 = param_1;
    func_0x00010bf4be00();
    *extraout_x8 = plVar3;
    extraout_x8[1] = (ulong)param_2 & 0xff;
    extraout_x8[2] = (ulong)plVar4 & 0xffffffffff;
    *(int *)(extraout_x8 + 3) = (int)plVar5;
    FUN_10b10cd2c();
    _objc_release(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return param_1;
  }
  uVar2 = (param_1[2] - *param_1) / 0x18;
  uVar6 = uVar2 * 2;
  if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
    uVar6 = uVar1;
  }
  if (0x555555555555554 < uVar2) {
    uVar6 = 0xaaaaaaaaaaaaaaa;
  }
  FUN_10b10c9a8(auStack_48,uVar6);
  *puStack_38 = 0;
  puStack_38[1] = 0;
  puStack_38[2] = 0;
  uVar8 = *param_2;
  puStack_38[1] = param_2[1];
  *puStack_38 = uVar8;
  puStack_38[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  puStack_38 = puStack_38 + 3;
  FUN_10b10c91c(param_1,auStack_48);
  plVar7 = (long *)param_1[1];
  func_0x000107f4e37c(auStack_48);
  return plVar7;
}



/* Entry: 10b10cb50; end: 10b10cc1f;  */

void FUN_10b10cb50(ulong *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c0888a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000107c28134();
  uVar3 = param_2;
  func_0x00010bf6d0a0();
  _objc_retainAutoreleasedReturnValue();
  FUN_10b10cc20();
  uVar4 = param_2;
  func_0x00010bf4be00();
  *param_1 = uVar2;
  param_1[1] = param_3 & 0xff;
  param_1[2] = uVar3 & 0xffffffffff;
  *(int *)(param_1 + 3) = (int)uVar4;
  FUN_10b10cd2c();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b10cc20; end: 10b10cc3f;  */

ulong FUN_10b10cc20(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    FUN_10b10ccf4();
    uVar1 = param_1 & 0xffffffff | 0x100000000;
  }
  return uVar1;
}



/* Entry: 10b10cc40; end: 10b10ccf3;  */

void FUN_10b10cc40(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126dfcb8;
  _objc_alloc(PTR_PTR_1126dfcb8);
  lVar2 = param_1;
  func_0x000107c28138(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x14) == '\x01') {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)*(int *)(param_1 + 0x10))
    ;
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  func_0x00010c0216c0(puVar1,param_2,lVar2,puVar3,*(undefined4 *)(param_1 + 0x18));
  FUN_10b10cd2c();
  func_0x00010b10cd34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b10ccf4; end: 10b10cd2b;  */

undefined8 FUN_10b10ccf4(undefined8 param_1)

{
  _objc_retain();
  func_0x00010c067fc0(param_1);
  func_0x00010b10cd34();
  return param_1;
}



/* Entry: 10b10cd2c; end: 10b10cd3b;  */

void FUN_10b10cd2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b10cd3c; end: 10b10cdb3; -[SCNNetworkManagerNetworkManagerCppProxy initWithCpp:] */

undefined1 * FUN_10b10cd3c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112705de0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10b10e484();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0001052a9ef8(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b10cdb4; end: 10b10cf77; -[SCNNetworkManagerNetworkManagerCppProxy submit:requestKey:callback:requestContext:httpHeaders:requestMediaType:loggingInfo:] */

void FUN_10b10cdb4(long param_1)

{
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar1;
  undefined8 in_stack_00000000;
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [48];
  undefined1 auStack_110 [120];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [16];
  
  func_0x00010b10e624();
  func_0x00010b10e53c();
  func_0x00010b10e5c4();
  func_0x00010b10e614();
  func_0x00010b10e5a4();
  _objc_retain(in_x6);
  _objc_retain(in_stack_00000000);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10b1104f8(auStack_70);
  func_0x000107c27f20(auStack_88);
  FUN_10b111310(auStack_98,in_x4);
  FUN_10b49b094(auStack_110,in_x5);
  func_0x000107c28250(auStack_140,in_x6);
  func_0x00010b10e5fc();
  (**(code **)(*plVar1 + 0x10))
            (plVar1,auStack_70,auStack_88,auStack_98,auStack_110,auStack_140,in_x7,auStack_158);
  func_0x00010b10e570();
  func_0x000107c27bb0(auStack_140);
  func_0x00010529fe04(auStack_110);
  func_0x0001052b81ac(auStack_98);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
  func_0x0001052ac684(auStack_70);
  func_0x00010b10e59c();
  func_0x00010b10e4c0();
  func_0x00010b10e4b8();
  func_0x00010b10e4a4();
  func_0x00010b10e49c();
  func_0x00010b10e494();
  return;
}



/* Entry: 10b10cf78; end: 10b10d0db;  */

void FUN_10b10cf78(void)

{
  undefined8 *puVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  char *pcStack_40;
  undefined8 *puStack_38;
  
  func_0x00010b10e58c();
  if (unaff_x19 == 0) {
    *(undefined1 *)unaff_x20 = 0;
    *(undefined1 *)(unaff_x20 + 2) = 0;
  }
  else {
    func_0x00010b10e5ec();
    puStack_60 = &uStack_68;
    uStack_68 = 0;
    uStack_58 = 0x3812000000;
    pcStack_50 = FUN_10b10e328;
    uStack_48 = 0x10b10e338;
    pcStack_40 = "";
    puVar1 = (undefined8 *)0x28;
    __Znwm();
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    func_0x0001052b7b6c();
    puStack_38 = puVar1;
    func_0x0001052b7b20(&uStack_a0,puStack_60[6]);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_10b10e358;
    puStack_78 = &UNK_11093e260;
    puStack_70 = &uStack_68;
    func_0x00010c26d0c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010b10e5cc();
    puVar1 = puStack_38;
    puStack_38 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      func_0x00010b10e4ac();
    }
    func_0x00010b10e494();
    unaff_x20[1] = uStack_98;
    *unaff_x20 = uStack_a0;
    uStack_a0 = 0;
    uStack_98 = 0;
    *(undefined1 *)(unaff_x20 + 2) = 1;
    func_0x00010b10e52c();
  }
  func_0x00010b10e494();
  return;
}



/* Entry: 10b10d0dc; end: 10b10d2a7; -[SCNNetworkManagerNetworkManagerCppProxy submitProgressiveDownloadRequest:requestKey:requestContext:httpHeaders:isStreaming:requestMediaType:callback:loggingInfo:] */

void FUN_10b10d0dc(long param_1)

{
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar1;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [40];
  undefined1 auStack_108 [120];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x00010b10e624();
  func_0x00010b10e53c();
  func_0x00010b10e5c4();
  func_0x00010b10e614();
  func_0x00010b10e5a4();
  _objc_retain(in_stack_00000000);
  _objc_retain(in_stack_00000008);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10b1104f8(auStack_78);
  func_0x000107c27f20(auStack_90);
  FUN_10b49b094(auStack_108,in_x4);
  func_0x000107c281c8(auStack_130,in_x5);
  FUN_10b10f200(auStack_140,in_stack_00000000);
  func_0x00010b10e5fc();
  (**(code **)(*plVar1 + 0x18))
            (plVar1,auStack_78,auStack_90,auStack_108,auStack_130,in_x6,in_x7,auStack_140,
             auStack_158);
  func_0x00010b10e570();
  func_0x0001052b81d0(auStack_140);
  func_0x000107c278e0(auStack_130);
  func_0x00010529fe04(auStack_108);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  func_0x0001052ac684(auStack_78);
  func_0x00010b10e59c();
  func_0x00010b10e4c0();
  func_0x00010b10e4b8();
  func_0x00010b10e4a4();
  func_0x00010b10e49c();
  func_0x00010b10e494();
  return;
}



/* Entry: 10b10d2a8; end: 10b10d34b; -[SCNNetworkManagerNetworkManagerCppProxy cancelRequest:] */

void FUN_10b10d2a8(long param_1)

{
  long *plVar1;
  undefined1 auStack_48 [24];
  
  func_0x00010b10e53c();
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010b10e5f4(auStack_48);
  (**(code **)(*plVar1 + 0x20))(plVar1,auStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  func_0x00010b10e494();
  return;
}



/* Entry: 10b10d34c; end: 10b10d427; -[SCNNetworkManagerNetworkManagerCppProxy updateRequestContext:requestContext:] */

void FUN_10b10d34c(long param_1)

{
  long *plVar1;
  undefined1 auStack_c0 [120];
  undefined1 auStack_48 [24];
  
  func_0x00010b10e624();
  func_0x00010b10e53c();
  func_0x00010b10e5c4();
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010b10e5f4(auStack_48);
  FUN_10b49b094(auStack_c0);
  (**(code **)(*plVar1 + 0x28))(plVar1,auStack_48,auStack_c0);
  func_0x00010529fe04(auStack_c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  func_0x00010b10e49c();
  func_0x00010b10e494();
  return;
}



/* Entry: 10b10d428; end: 10b10d503; -[SCNNetworkManagerNetworkManagerCppProxy monitorProgress:progressCallback:] */

void FUN_10b10d428(long param_1)

{
  long *plVar1;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [24];
  
  func_0x00010b10e624();
  func_0x00010b10e53c();
  func_0x00010b10e5c4();
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010b10e5f4(auStack_48);
  FUN_10b10e884(auStack_58);
  (**(code **)(*plVar1 + 0x30))(plVar1,auStack_48,auStack_58);
  func_0x0001052b81f4(auStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  func_0x00010b10e49c();
  func_0x00010b10e494();
  return;
}



/* Entry: 10b10d504; end: 10b10d62f;  */

void FUN_10b10d504(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  int extraout_w10;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  if (param_2 == 0) {
    uVar5 = 0x10;
    ___cxa_allocate_exception(0x10);
    func_0x00010527a174();
    ___cxa_throw(uVar5,PTR___ZTISt16invalid_argument_110352248,
                 PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10b10d608);
    (*pcVar2)();
  }
  puVar3 = PTR_PTR_1126dfcc0;
  _objc_opt_class(PTR_PTR_1126dfcc0);
  uVar4 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar3);
  if ((uVar4 & 1) == 0) {
    func_0x00010b10e5ec();
    ppuStack_48 = &PTR_DAT_110cbba50;
    uStack_50 = param_2;
    func_0x000107c316f4(&uStack_40,&ppuStack_48,&uStack_50,FUN_10b10d6c4);
    uVar1 = uStack_38;
    uVar5 = uStack_40;
    uStack_40 = 0;
    uStack_38 = 0;
    func_0x000107c27d28(&uStack_40);
    _objc_release(uStack_50);
    param_1[1] = uVar1;
    *param_1 = uVar5;
    uStack_60 = 0;
    uStack_58 = 0;
    FUN_10b10e300(&uStack_60);
  }
  else {
    lVar6 = *(long *)(param_2 + 0x20);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = *(undefined8 *)(param_2 + 0x20);
    *param_1 = uVar5;
    if (lVar6 != 0) {
      do {
        FUN_10b10e484();
      } while (extraout_w10 != 0);
    }
  }
  func_0x00010b10e494();
  return;
}



/* Entry: 10b10d630; end: 10b10d683; -[SCNNetworkManagerNetworkManagerCppProxy .cxx_destruct] */

void FUN_10b10d630(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cbbbb0;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x0001052a9ef8((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b10d684; end: 10b10d6c3; -[SCNNetworkManagerNetworkManagerCppProxy .cxx_construct] */

undefined8 * FUN_10b10d684(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10b10e484();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b10d6c4; end: 10b10d7a7;  */

void FUN_10b10d6c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar5 = *param_2;
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110cbba90;
  puVar1[3] = &PTR_DAT_110cbbb28;
  puVar2 = puVar1;
  func_0x00010b10e5a4();
  _objc_autoreleasePoolPush();
  puVar3 = puVar2;
  func_0x000107c316f8();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      func_0x00010b10e484();
    } while (extraout_w10 != 0);
  }
  func_0x00010b10e5a4();
  puVar1[6] = uVar5;
  _objc_autoreleasePoolPop(puVar2);
  func_0x00010b10e4b8();
  puVar1[3] = &PTR_FUN_110cbbae0;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10b10e300(&uStack_50);
  return;
}



/* Entry: 10b10d7a8; end: 10b10d7ab;  */

void FUN_10b10d7a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbba90;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b10d7ac; end: 10b10d7bf;  */

void FUN_10b10d7ac(void)

{
  FUN_10b10e2f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b10d7c0; end: 10b10d7cb;  */

long FUN_10b10d7c0(long param_1)

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
    ppuStack_38 = &PTR_DAT_110cbba50;
    func_0x00010b10e614();
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    func_0x00010b10e4a4();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10b10d7cc; end: 10b10d807;  */

void FUN_10b10d7cc(void)

{
  func_0x00010b10e608();
  return;
}



/* Entry: 10b10d808; end: 10b10d94b;  */

void FUN_10b10d808(long param_1)

{
  long lVar1;
  undefined8 in_x5;
  undefined8 in_x7;
  undefined8 uVar2;
  
  func_0x00010b10e644();
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_10b110628();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f28();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b10e580();
  FUN_10b111444();
  _objc_retainAutoreleasedReturnValue();
  FUN_10b49b1ec();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010595bb18(in_x5);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b10dc68();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b10e630(uVar2);
  func_0x00010c25edc0();
  _objc_release(in_x7);
  func_0x00010b10e558();
  func_0x00010b10e4c0();
  func_0x00010b10e4a4();
  func_0x00010b10e49c();
  func_0x00010b10e494();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10b10d94c; end: 10b10da93;  */

void FUN_10b10d94c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 in_stack_00000000;
  
  func_0x00010b10e644();
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_10b110628();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f28();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b10e580();
  FUN_10b49b1ec();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001056329cc();
  _objc_retainAutoreleasedReturnValue();
  FUN_10b10f32c();
  _objc_retainAutoreleasedReturnValue();
  FUN_10b10dc68();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b10e630(uVar2);
  func_0x00010c25f4a0();
  _objc_release(in_stack_00000000);
  func_0x00010b10e558();
  func_0x00010b10e4c0();
  func_0x00010b10e4a4();
  func_0x00010b10e49c();
  func_0x00010b10e494();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10b10da94; end: 10b10daf3;  */

void FUN_10b10da94(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c27f28(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2edc0(uVar2);
  func_0x00010b10e49c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10b10daf4; end: 10b10db67;  */

void FUN_10b10daf4(undefined8 param_1)

{
  func_0x00010b10e5ac();
  func_0x000107c27f28();
  _objc_retainAutoreleasedReturnValue();
  FUN_10b49b1ec();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b10e658();
  func_0x00010c289360();
  func_0x00010b10e4a4();
  func_0x00010b10e494();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10b10db68; end: 10b10dbdb;  */

void FUN_10b10db68(undefined8 param_1)

{
  func_0x00010b10e5ac();
  func_0x000107c27f28();
  _objc_retainAutoreleasedReturnValue();
  FUN_10b10e9ac();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b10e658();
  func_0x00010c0d0d20();
  func_0x00010b10e4a4();
  func_0x00010b10e494();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10b10dbdc; end: 10b10dc67;  */

long FUN_10b10dbdc(long param_1)

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
    ppuStack_38 = &PTR_DAT_110cbba50;
    func_0x00010b10e614();
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    func_0x00010b10e4a4();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10b10dc68; end: 10b10dec3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b10dc68(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  int extraout_w10;
  undefined *puVar5;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  long lStack_78;
  long alStack_68 [7];
  
  if (*(char *)(param_1 + 2) == '\x01') {
    uStack_b8 = param_1[1];
    uStack_c0 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    puVar1 = PTR_PTR_1126b8058;
    _objc_alloc_init();
    puVar5 = puVar1;
    func_0x00010bfc5fe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b10e5ec();
    alStack_68[5] = 0;
    alStack_68[6] = 0;
    alStack_68[1] = 0;
    alStack_68[2] = 0;
    func_0x0001052b7fa4(alStack_68 + 3,&uStack_c0,alStack_68 + 1);
    func_0x0001052b7ff8(alStack_68 + 5,alStack_68 + 3);
    func_0x0001052b7ddc(alStack_68 + 3);
    func_0x0001052b7ddc(alStack_68 + 1);
    func_0x000107c27b48(alStack_68);
    func_0x000107c27b4c(alStack_68 + 3,alStack_68[0]);
    lStack_78 = alStack_68[0];
    alStack_68[0] = 0;
    lStack_90 = 0;
    lStack_88 = 0;
    lStack_a0 = alStack_68[5] + 0x58;
    lStack_98 = CONCAT71(lStack_98._1_7_,1);
    puStack_80 = puVar1;
    __ZNSt3__15mutex4lockEv();
    lVar2 = alStack_68[5];
    FUN_10b10dec4();
    if ((int)lVar2 == 0) {
      puVar3 = (undefined8 *)0x18;
      __Znwm();
      lVar2 = lStack_78;
      puVar1 = puStack_80;
      *puVar3 = &PTR_FUN_110cbbb70;
      puStack_80 = (undefined *)0x0;
      lStack_78 = 0;
      puVar3[2] = lVar2;
      puVar3[1] = puVar1;
      plVar4 = *(long **)(alStack_68[5] + 0xa0);
      *(undefined8 **)(alStack_68[5] + 0xa0) = puVar3;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
    else {
      func_0x0001052b7ff8(&lStack_90,alStack_68 + 5);
    }
    func_0x000107c2798c(&lStack_a0);
    if (lStack_90 != 0) {
      lStack_a0 = lStack_90;
      lStack_98 = lStack_88;
      if (lStack_88 != 0) {
        do {
          func_0x00010b10e484();
        } while (extraout_w10 != 0);
      }
      FUN_10b10df0c(&puStack_80);
      func_0x00010b10e524();
    }
    uStack_a8 = alStack_68[4];
    uStack_b0 = alStack_68[3];
    alStack_68[3] = 0;
    alStack_68[4] = 0;
    func_0x00010b10e5d8();
    FUN_10b10e2c4(&puStack_80);
    func_0x000107c27b58(alStack_68 + 3);
    lVar2 = alStack_68[0];
    alStack_68[0] = 0;
    if (lVar2 != 0) {
      func_0x00010b10e4ac();
    }
    func_0x0001052b7ddc(alStack_68 + 5);
    func_0x000107c27b58(&uStack_b0);
    _objc_release(0);
    func_0x00010b10e494();
    func_0x00010b10e52c();
  }
  else {
    puVar5 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10b10dec4; end: 10b10df0b;  */

bool FUN_10b10dec4(long param_1)

{
  bool bVar1;
  
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    bVar1 = *(long *)(param_1 + 0x98) != 0;
    func_0x00010b10e578();
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 10b10df0c; end: 10b10e0cf;  */

void FUN_10b10df0c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar1;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 auStack_60 [32];
  
  if (param_3 != 0) {
    do {
      FUN_10b10e484();
    } while (extraout_w10 != 0);
    do {
      FUN_10b10e484();
    } while (extraout_w10_00 != 0);
  }
  uVar1 = *param_1;
  uStack_70 = param_2;
  lStack_68 = param_3;
  FUN_10b10e164(auStack_60,&uStack_70);
  FUN_10b10cc40(auStack_60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160(uVar1);
  func_0x00010b10e4b8();
  func_0x00010b10e524();
  func_0x00010b10e568();
  func_0x000107c27b68(param_1[1]);
  return;
}



/* Entry: 10b10e0d0; end: 10b10e0d3;  */

undefined8 * FUN_10b10e0d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbbb70;
  FUN_10b10e2c4(param_1 + 1);
  return param_1;
}



/* Entry: 10b10e0d4; end: 10b10e0e7;  */

void FUN_10b10e0d4(void)

{
  FUN_10b10e138();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b10e0e8; end: 10b10e137;  */

void FUN_10b10e0e8(long param_1,long param_2)

{
  int extraout_w10;
  
  if (*(long *)(param_2 + 8) != 0) {
    do {
      FUN_10b10e484();
    } while (extraout_w10 != 0);
  }
  FUN_10b10df0c(param_1 + 8);
  func_0x00010b10e52c();
  return;
}



/* Entry: 10b10e138; end: 10b10e163;  */

undefined8 * FUN_10b10e138(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbbb70;
  FUN_10b10e2c4(param_1 + 1);
  return param_1;
}



/* Entry: 10b10e164; end: 10b10e273;  */

void FUN_10b10e164(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [8];
  undefined8 *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  long lStack_28;
  
  puStack_30 = (undefined8 *)0x0;
  lStack_28 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x0001052b7fa4(&puStack_40,param_2,&uStack_50);
  func_0x0001052b7ff8(&puStack_30,&puStack_40);
  func_0x00010b10e5d8();
  func_0x00010b10e524();
  puStack_40 = puStack_30 + 0xb;
  uStack_38 = 1;
  __ZNSt3__15mutex4lockEv();
  puStack_60 = puStack_30;
  lStack_58 = lStack_28;
  if (lStack_28 != 0) {
    plVar1 = (long *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10b10e274(puStack_30 + 5,&puStack_40,&puStack_60);
  func_0x00010b10e568();
  if (puStack_30[0x13] == 0) {
    uVar5 = *puStack_30;
    uVar7 = puStack_30[3];
    uVar6 = puStack_30[2];
    param_1[1] = puStack_30[1];
    *param_1 = uVar5;
    param_1[3] = uVar7;
    param_1[2] = uVar6;
    func_0x000107c2798c(&puStack_40);
    func_0x0001052b7ddc(&puStack_30);
    return;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_68);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_68);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10b10e238);
  (*pcVar4)();
}



/* Entry: 10b10e274; end: 10b10e2bb;  */

void FUN_10b10e274(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  while (uVar1 = param_3, FUN_10b10e2bc(), (uVar1 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(param_1,param_2);
  }
  return;
}



/* Entry: 10b10e2bc; end: 10b10e2c3;  */

bool FUN_10b10e2bc(long *param_1)

{
  bool bVar1;
  
  if ((*(byte *)(*param_1 + 0x20) & 1) == 0) {
    bVar1 = *(long *)(*param_1 + 0x98) != 0;
    func_0x00010b10e578();
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 10b10e2c4; end: 10b10e2ef;  */

undefined8 * FUN_10b10e2c4(undefined8 *param_1)

{
  func_0x000107c27b70(param_1 + 1);
  _objc_release(*param_1);
  return param_1;
}



/* Entry: 10b10e2f0; end: 10b10e2ff;  */

void FUN_10b10e2f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbba90;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b10e300; end: 10b10e327;  */

long FUN_10b10e300(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b10e328; end: 10b10e357;  */

void FUN_10b10e328(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}



/* Entry: 10b10e358; end: 10b10e483;  */

undefined8 FUN_10b10e358(void)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x00010b10e58c();
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 8) + 0x30);
  func_0x00010bfc1d60();
  _objc_retainAutoreleasedReturnValue();
  FUN_10b10cb50(auStack_50);
  func_0x0001052b8044(uVar1,auStack_50);
  func_0x00010b10e4a4();
  func_0x00010b10e494();
  return 0;
}



/* Entry: 10b10e484; end: 10b10e66b;  */

void FUN_10b10e484(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b10e66c; end: 10b10e6cf;  */

undefined1  [16] FUN_10b10e66c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c276f80(param_1);
  uVar2 = param_1;
  func_0x00010bf43fa0(param_1);
  _objc_release(param_1);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 10b10e6d0; end: 10b10e6ff;  */

void FUN_10b10e6d0(void)

{
  _objc_alloc(PTR_PTR_1126dfcc8);
  func_0x00010c054960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b10e700; end: 10b10e777; -[SCNNetworkManagerProgressCallbackCppProxy initWithCpp:] */

undefined1 * FUN_10b10e700(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112705de8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10b10ee64();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0001052b81f4(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b10e778; end: 10b10e7eb; -[SCNNetworkManagerProgressCallbackCppProxy onProgress:] */

void FUN_10b10e778(void)

{
  long unaff_x20;
  long *plVar1;
  
  func_0x00010b10eea8();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  FUN_10b10e66c();
  func_0x00010b10eed8(*(undefined8 *)(*plVar1 + 0x10));
  func_0x00010b10ee80();
  return;
}



/* Entry: 10b10e7ec; end: 10b10e883; -[SCNNetworkManagerProgressCallbackCppProxy onError:] */

void FUN_10b10e7ec(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_70 [64];
  
  func_0x00010b10eea8();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x00010bcc1b7c(auStack_70);
  func_0x00010b10eed8(*(undefined8 *)(*plVar1 + 0x18));
  func_0x0001052a03ac(auStack_70);
  func_0x00010b10ee80();
  return;
}



/* Entry: 10b10e884; end: 10b10e9ab;  */

void FUN_10b10e884(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  int extraout_w10;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  if (param_2 == 0) {
    uVar5 = 0x10;
    ___cxa_allocate_exception(0x10);
    func_0x00010527a174();
    ___cxa_throw(uVar5,PTR___ZTISt16invalid_argument_110352248,
                 PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10b10e980);
    (*pcVar2)();
  }
  puVar3 = PTR_PTR_1126dfcd0;
  _objc_opt_class(PTR_PTR_1126dfcd0);
  uVar4 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar3);
  if ((uVar4 & 1) == 0) {
    _objc_retain(param_2);
    ppuStack_48 = &PTR_DAT_110cbbc18;
    uStack_50 = param_2;
    func_0x000107c316f4(&uStack_40,&ppuStack_48,&uStack_50,FUN_10b10eab0);
    uVar1 = uStack_38;
    uVar5 = uStack_40;
    uStack_40 = 0;
    uStack_38 = 0;
    func_0x000107c27d28(&uStack_40);
    _objc_release(uStack_50);
    param_1[1] = uVar1;
    *param_1 = uVar5;
    uStack_60 = 0;
    uStack_58 = 0;
    FUN_10b10ed58(&uStack_60);
  }
  else {
    lVar6 = *(long *)(param_2 + 0x20);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = *(undefined8 *)(param_2 + 0x20);
    *param_1 = uVar5;
    if (lVar6 != 0) {
      do {
        FUN_10b10ee64();
      } while (extraout_w10 != 0);
    }
  }
  func_0x00010b10ee80();
  return;
}



/* Entry: 10b10e9ac; end: 10b10ea1b;  */

void FUN_10b10e9ac(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_110cbbbc0,&PTR_DAT_110cbbbd0,0);
    if (lVar1 == 0) {
      FUN_10b10ed80(param_1);
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



/* Entry: 10b10ea1c; end: 10b10ea6f; -[SCNNetworkManagerProgressCallbackCppProxy .cxx_destruct] */

void FUN_10b10ea1c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cbbcf8;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x0001052b81f4((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b10ea70; end: 10b10eaaf; -[SCNNetworkManagerProgressCallbackCppProxy .cxx_construct] */

undefined8 * FUN_10b10ea70(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10b10ee64();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b10eab0; end: 10b10eba3;  */

void FUN_10b10eab0(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110cbbc58;
  puVar1[3] = &PTR_DAT_110cbbcd8;
  puVar2 = puVar5;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar3 = puVar2;
  func_0x000107c316f8();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_10b10ee64();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  puVar1[3] = &PTR_FUN_110cbbca8;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10b10ed58(&uStack_50);
  return;
}



/* Entry: 10b10eba4; end: 10b10eba7;  */

void FUN_10b10eba4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbbc58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b10eba8; end: 10b10ebbb;  */

void FUN_10b10eba8(void)

{
  FUN_10b10ed48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b10ebbc; end: 10b10ebc7;  */

long FUN_10b10ebbc(long param_1)

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
    ppuStack_38 = &PTR_DAT_110cbbc18;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10b10ebc8; end: 10b10ec03;  */

void FUN_10b10ebc8(void)

{
  func_0x00010b10eef8();
  return;
}



/* Entry: 10b10ec04; end: 10b10ec5b;  */

void FUN_10b10ec04(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar1;
  
  func_0x00010b10eeb8();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  FUN_10b10e6d0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e5ca0(uVar1,param_2,unaff_x20);
  func_0x00010b10ee90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10b10ec5c; end: 10b10ecb3;  */

void FUN_10b10ec5c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar1;
  
  func_0x00010b10eeb8();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  func_0x00010bcc1ca8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e3f00(uVar1,param_2,unaff_x20);
  func_0x00010b10ee90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10b10ecb4; end: 10b10ed47;  */

long FUN_10b10ecb4(long param_1)

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
    ppuStack_38 = &PTR_DAT_110cbbc18;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10b10ed48; end: 10b10ed57;  */

void FUN_10b10ed48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbbc58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b10ed58; end: 10b10ed7f;  */

long FUN_10b10ed58(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b10ed80; end: 10b10edf3;  */

void FUN_10b10ed80(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110cbbcf8;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10b10ee64();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b10edf4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b10eeec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b10edf4; end: 10b10ee63;  */

void FUN_10b10edf4(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dfcd0;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10b10ee64();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x0001052b81f4(&uStack_30);
  return;
}



/* Entry: 10b10ee64; end: 10b10ef03;  */

void FUN_10b10ee64(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}


