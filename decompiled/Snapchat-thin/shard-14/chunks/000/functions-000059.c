/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10af896a8; end: 10af8975f; -[SCNProfilingClientTrace .cxx_construct] */

undefined8 * FUN_10af896a8(undefined8 *param_1)

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
      FUN_10af898c4();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10af89760; end: 10af89767;  */

void FUN_10af89760(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x38) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar2 + -0x30);
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10af89768; end: 10af897b3;  */

void FUN_10af89768(long param_1,long param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != param_2; lVar1 = lVar1 + -0x38) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + -0x30);
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10af897b4; end: 10af89827;  */

void FUN_10af897b4(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110c9b9e8;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10af898c4();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10af89828);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af898d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af89828; end: 10af89897;  */

void FUN_10af89828(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dedb0;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10af898c4();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_10af89898(&uStack_30);
  return;
}



/* Entry: 10af89898; end: 10af898c3;  */

long FUN_10af89898(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10af898c4; end: 10af898ff;  */

void FUN_10af898c4(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10af89900; end: 10af8997f; -[SCNProfilingClientTraceProvider initWithCpp:] */

undefined1 * FUN_10af89900(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112703050;
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
    func_0x00010af89ab0(&uStack_30);
  }
  return (undefined1 *)puVar4;
}



/* Entry: 10af89980; end: 10af89a07; +[SCNProfilingClientTraceProvider get] */

void FUN_10af89980(void)

{
  undefined1 auStack_30 [16];
  
  FUN_10b21424c(auStack_30);
  FUN_10af89628(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  FUN_10af89adc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af89a08; end: 10af89a63; -[SCNProfilingClientTraceProvider .cxx_destruct] */

void FUN_10af89a08(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110c9b9f8;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x00010af89ab0((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10af89a64; end: 10af89adb; -[SCNProfilingClientTraceProvider .cxx_construct] */

undefined8 * FUN_10af89a64(undefined8 *param_1)

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



/* Entry: 10af89adc; end: 10af89ae7;  */

void FUN_10af89adc(void)

{
  long in_stack_00000008;
  
  if (in_stack_00000008 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10af89ae8; end: 10af89b67; -[SCNProfilingTimelineRecorder initWithCpp:] */

undefined1 * FUN_10af89ae8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112703058;
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
    func_0x00010af89da0(&uStack_30);
  }
  return (undefined1 *)puVar4;
}



/* Entry: 10af89b68; end: 10af89bf7; +[SCNProfilingTimelineRecorder recordStart:row:label:] */

undefined8 FUN_10af89b68(void)

{
  undefined8 unaff_x21;
  
  func_0x00010af89df8();
  func_0x00010af89de4();
  FUN_10b214dd4();
  func_0x00010af89ddc();
  func_0x00010af89df0();
  return unaff_x21;
}



/* Entry: 10af89bf8; end: 10af89c7b; +[SCNProfilingTimelineRecorder recordEnd:label:] */

void FUN_10af89bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  _objc_retain(param_4);
  func_0x00010af89de4();
  FUN_10b214e94(param_3,auStack_48);
  func_0x00010af89ddc();
  func_0x00010af89df0();
  return;
}



/* Entry: 10af89c7c; end: 10af89cf7; +[SCNProfilingTimelineRecorder recordInstant:row:label:] */

void FUN_10af89c7c(void)

{
  func_0x00010af89df8();
  func_0x00010af89de4();
  FUN_10b214eec();
  func_0x00010af89ddc();
  func_0x00010af89df0();
  return;
}



/* Entry: 10af89cf8; end: 10af89d53; -[SCNProfilingTimelineRecorder .cxx_destruct] */

void FUN_10af89cf8(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110c9ba08;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x00010af89da0((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10af89d54; end: 10af89dcb; -[SCNProfilingTimelineRecorder .cxx_construct] */

undefined8 * FUN_10af89d54(undefined8 *param_1)

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



/* Entry: 10af89dcc; end: 10af89e2b;  */

void FUN_10af89dcc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000008);
  return;
}



/* Entry: 10af89e2c; end: 10af89ea3;  */

void FUN_10af89e2c(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  
  puVar2 = PTR_PTR_1126dedb8;
  _objc_alloc(PTR_PTR_1126dedb8);
  iVar1 = *param_1;
  piVar3 = param_1 + 2;
  func_0x000107c27f28(piVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c055dc0(puVar2,param_2,(long)iVar1,piVar3,*(undefined8 *)(param_1 + 8),
                      *(undefined8 *)(param_1 + 10),*(undefined8 *)(param_1 + 0xc));
  FUN_10af89ea4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10af89ea4; end: 10af89eaf;  */

void FUN_10af89ea4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10af89eb0; end: 10af89f67;  */

void FUN_10af89eb0(undefined8 *param_1,long param_2)

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
    ppuStack_38 = &PTR_DAT_110c9ba70;
    lStack_40 = param_2;
    func_0x000107c316f4(&uStack_30,&ppuStack_38,&lStack_40,FUN_10af89f68);
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
    FUN_10af8a2fc(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10af89f68; end: 10af8a063;  */

void FUN_10af89f68(undefined8 *param_1,long *param_2)

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
  *puVar4 = &PTR_FUN_110c9bab0;
  puVar4[3] = &PTR_DAT_110c9bb48;
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
  puVar4[3] = &PTR_FUN_110c9bb00;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10af8a2fc(&uStack_50);
  return;
}



/* Entry: 10af8a064; end: 10af8a067;  */

void FUN_10af8a064(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c9bab0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10af8a068; end: 10af8a07b;  */

void FUN_10af8a068(void)

{
  FUN_10af8a2ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10af8a07c; end: 10af8a087;  */

long FUN_10af8a07c(long param_1)

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
    ppuStack_38 = &PTR_DAT_110c9ba70;
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



/* Entry: 10af8a088; end: 10af8a0c7;  */

void FUN_10af8a088(void)

{
  func_0x00010af8a35c();
  return;
}



/* Entry: 10af8a0c8; end: 10af8a12b;  */

undefined8 FUN_10af8a0c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar1;
  
  func_0x00010af8a350();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  func_0x000107c27f28();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0(uVar1,param_2,unaff_x20);
  func_0x00010af8a334();
  _objc_autoreleasePoolPop(param_1);
  return uVar1;
}



/* Entry: 10af8a12c; end: 10af8a15b;  */

void FUN_10af8a12c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x00010af8a368();
  func_0x00010bf95660(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10af8a15c; end: 10af8a1bf;  */

undefined8 FUN_10af8a15c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar1;
  
  func_0x00010af8a350();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  func_0x000107c27f28();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17b60(uVar1,param_2,unaff_x20);
  func_0x00010af8a334();
  _objc_autoreleasePoolPop(param_1);
  return uVar1;
}



/* Entry: 10af8a1c0; end: 10af8a1ef;  */

void FUN_10af8a1c0(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x00010af8a368();
  func_0x00010bf941e0(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10af8a1f0; end: 10af8a257;  */

void FUN_10af8a1f0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c27f28(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c277600(uVar2);
  func_0x00010af8a334();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10af8a258; end: 10af8a2eb;  */

long FUN_10af8a258(long param_1)

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
    ppuStack_38 = &PTR_DAT_110c9ba70;
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



/* Entry: 10af8a2ec; end: 10af8a2fb;  */

void FUN_10af8a2ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c9bab0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10af8a2fc; end: 10af8a327;  */

long FUN_10af8a2fc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10af8a328; end: 10af8a373;  */

void FUN_10af8a328(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10af8a374; end: 10af8a3f3; -[SCNProfilingTraceSdkProvider initWithCpp:] */

undefined1 * FUN_10af8a374(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112703060;
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
    func_0x00010af8a55c(&uStack_30);
  }
  return (undefined1 *)puVar4;
}



/* Entry: 10af8a3f4; end: 10af8a4b7; +[SCNProfilingTraceSdkProvider initialize:] */

void FUN_10af8a3f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  if (param_3 == 0) {
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    FUN_10af89eb0(&uStack_40,param_3);
  }
  FUN_10af8a5ac();
  FUN_10b214898(&uStack_40);
  func_0x00010af8a584(&uStack_40);
  FUN_10af8a5ac();
  return;
}



/* Entry: 10af8a4b8; end: 10af8a513; -[SCNProfilingTraceSdkProvider .cxx_destruct] */

void FUN_10af8a4b8(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110c9bb80;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x00010af8a55c((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10af8a514; end: 10af8a5ab; -[SCNProfilingTraceSdkProvider .cxx_construct] */

undefined8 * FUN_10af8a514(undefined8 *param_1)

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



/* Entry: 10af8a5ac; end: 10af8a5bb;  */

void FUN_10af8a5ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10af8a5bc; end: 10af8a68b; -[SCNProfilingTraceEvent initWithType:name:startUs:endUs:threadId:] */

undefined1 *
FUN_10af8a5bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_112703068;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10af8a68c; end: 10af8a693; -[SCNProfilingTraceEvent type] */

undefined8 FUN_10af8a68c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af8a694; end: 10af8a69b; -[SCNProfilingTraceEvent name] */

undefined8 FUN_10af8a694(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af8a69c; end: 10af8a6a3; -[SCNProfilingTraceEvent startUs] */

undefined8 FUN_10af8a69c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af8a6a4; end: 10af8a6ab; -[SCNProfilingTraceEvent endUs] */

undefined8 FUN_10af8a6a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af8a6ac; end: 10af8a6b3; -[SCNProfilingTraceEvent threadId] */

undefined8 FUN_10af8a6ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10af8a6b4; end: 10af8a6bf; -[SCNProfilingTraceEvent .cxx_destruct] */

void FUN_10af8a6b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af8a6c0; end: 10af8a743; -[SCNSDataWriterImpl writeData:path:context:atomically:] */

undefined8
FUN_10af8a6c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_3);
  func_0x00010bfad320(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x000107c3128c(param_3,puVar1,param_6,0);
  _objc_release(param_3);
  _objc_release(puVar1);
  return uVar2;
}



/* Entry: 10af8a744; end: 10af8a74f; -[SCNSDataWriterServices .cxx_destruct] */

void FUN_10af8a744(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af8a750; end: 10af8a75b; -[SCDirectoriesImpl .cxx_destruct] */

void FUN_10af8a750(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af8a75c; end: 10af8a767; -[SCSKAdServices .cxx_destruct] */

void FUN_10af8a75c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af8a768; end: 10af8a76f; -[SCCommerceShowcaseServices legacyShowcaseFetcher] */

undefined8 FUN_10af8a768(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af8a770; end: 10af8a777; -[SCCommerceShowcaseServices showcaseFetcher] */

undefined8 FUN_10af8a770(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af8a778; end: 10af8a77f; -[SCCommerceShowcaseServices imageSourceProvider] */

undefined8 FUN_10af8a778(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af8a780; end: 10af8a787; -[SCCommerceShowcaseServices composerShowcaseGrpcService] */

undefined8 FUN_10af8a780(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af8a788; end: 10af8a7cf; -[SCCommerceShowcaseServices .cxx_destruct] */

void FUN_10af8a788(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af8a7d0; end: 10af8a853; -[SCAdShowcaseProductInteraction initWithIndex:productId:] */

undefined1 *
FUN_10af8a7d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112703090;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10af8a854; end: 10af8a877; -[SCAdShowcaseProductInteraction copyWithZone:] */

undefined8 FUN_10af8a854(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af8a878; end: 10af8a87f; -[SCAdShowcaseProductInteraction index] */

undefined8 FUN_10af8a878(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af8a880; end: 10af8a887; -[SCAdShowcaseProductInteraction productId] */

undefined8 FUN_10af8a880(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af8a888; end: 10af8a893; -[SCAdShowcaseProductInteraction .cxx_destruct] */

void FUN_10af8a888(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af8a894; end: 10af8a93b; -[SCAdShowcaseTrackInfo initWithTotalCatalogViewTime:totalShowcaseWebviewTime:totalStoreViewTime:productsViewed:productInteractions:] */

undefined1 *
FUN_10af8a894(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_112703098;
  uStack_60 = param_4;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 10af8a93c; end: 10af8a95f; -[SCAdShowcaseTrackInfo copyWithZone:] */

undefined8 FUN_10af8a93c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af8a960; end: 10af8a967; -[SCAdShowcaseTrackInfo totalCatalogViewTime] */

undefined8 FUN_10af8a960(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af8a968; end: 10af8a96f; -[SCAdShowcaseTrackInfo totalShowcaseWebviewTime] */

undefined8 FUN_10af8a968(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af8a970; end: 10af8a977; -[SCAdShowcaseTrackInfo totalStoreViewTime] */

undefined8 FUN_10af8a970(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af8a978; end: 10af8a97f; -[SCAdShowcaseTrackInfo productsViewed] */

undefined8 FUN_10af8a978(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af8a980; end: 10af8a987; -[SCAdShowcaseTrackInfo productInteractions] */

undefined8 FUN_10af8a980(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10af8a988; end: 10af8a993; -[SCAdShowcaseTrackInfo .cxx_destruct] */

void FUN_10af8a988(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 10af8a994; end: 10af8a99f; +[SCCAdFormatCreateAdReminderCountdown modulePath] */

undefined ** FUN_10af8a994(void)

{
  return &PTR____CFConstantStringClassReference_110f3ed38;
}



/* Entry: 10af8a9a0; end: 10af8a9a3; +[SCCAdFormatCreateAdReminderCountdown asyncStrictMode] */

undefined8 FUN_10af8a9a0(void)

{
  return 0;
}



/* Entry: 10af8a9a4; end: 10af8aa03; -[SCCAdFormatCreateAdReminderCountdown createAdReminderCountdownWithGrpcFactory:request:cofStore:] */

void FUN_10af8a9a4(void)

{
  code *extraout_x8;
  undefined8 unaff_x22;
  
  func_0x00010af8bb54();
  func_0x00010af8bc08();
  func_0x00010af8bc38();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af8bc18();
  (*extraout_x8)();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af8bb8c();
  func_0x00010af8bc48();
  func_0x00010af8bc00();
  func_0x00010af8bbf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x22);
  return;
}



/* Entry: 10af8aa04; end: 10af8aaa3; +[SCCAdFormatCreateAdReminderCountdown invokeWithJSRuntimeProvider:grpcFactory:request:cofStore:completionHandler:] */

void FUN_10af8aa04(void)

{
  long unaff_x23;
  
  func_0x00010af8bb2c();
  func_0x00010af8bc08();
  func_0x00010af8bc38();
  func_0x00010af8bc64();
  (**(code **)(unaff_x23 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af8bb7c();
  func_0x00010af8bb0c(FUN_10af8aaa4);
  func_0x00010af8bc38();
  func_0x00010af8bc08();
  func_0x00010af8bc30();
  func_0x00010af8bca0();
  func_0x00010af8bc6c();
  func_0x00010af8bcc8();
  func_0x00010af8bcc0();
  func_0x00010af8bcb8();
  func_0x00010af8bcb0();
  func_0x00010af8bc40();
  func_0x00010af8bbf8();
  func_0x00010af8bc00();
  func_0x00010af8bc48();
  func_0x00010af8bb8c();
  func_0x00010af8bca8();
  return;
}



/* Entry: 10af8aaa4; end: 10af8ab0f;  */

void FUN_10af8aaa4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *extraout_x8;
  
  puVar1 = PTR_PTR_1126dedc0;
  func_0x00010bfbc0e0(PTR_PTR_1126dedc0,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af8bc50();
  (*extraout_x8)();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af8bba0(*(undefined8 *)(param_1 + 0x40));
  func_0x00010af8bbf8();
  func_0x00010af8bc00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af8ab10; end: 10af8ab23; +[SCCAdFormatCreateAdReminderCountdown valdiMarshallableObjectDescriptor] */

void FUN_10af8ab10(undefined8 *param_1)

{
  *param_1 = &PTR_s_createAdReminderCountdown_110c9bb90;
  param_1[1] = &PTR_s_SCComposerNetworkingGrpcServiceF_110c9bbc0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10af8ab24; end: 10af8ab2f; +[SCCAdFormatGetLocalRulesDescription modulePath] */

undefined ** FUN_10af8ab24(void)

{
  return &PTR____CFConstantStringClassReference_110f3ed58;
}



/* Entry: 10af8ab30; end: 10af8ab33; +[SCCAdFormatGetLocalRulesDescription asyncStrictMode] */

undefined8 FUN_10af8ab30(void)

{
  return 0;
}



/* Entry: 10af8ab34; end: 10af8ab6f; -[SCCAdFormatGetLocalRulesDescription getLocalRulesDescription] */

void FUN_10af8ab34(long param_1)

{
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af8bacc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af8ab70; end: 10af8abe7; +[SCCAdFormatGetLocalRulesDescription invokeWithJSRuntimeProvider:completionHandler:] */

void FUN_10af8ab70(void)

{
  long unaff_x20;
  
  func_0x00010af8bc80();
  (**(code **)(unaff_x20 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af8bce8();
  func_0x00010af8bc30();
  func_0x00010af8bc08();
  func_0x00010af8bcdc();
  func_0x00010af8bc40();
  _objc_release(unaff_x20);
  func_0x00010af8bb8c();
  func_0x00010af8bc48();
  return;
}



/* Entry: 10af8abe8; end: 10af8ac57;  */

void FUN_10af8abe8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bdd20;
  func_0x00010bfbc0e0(PTR_PTR_1126bdd20,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(puVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af8bba0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010af8bbf8();
  func_0x00010af8bc00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af8ac58; end: 10af8ac73; +[SCCAdFormatGetLocalRulesDescription valdiMarshallableObjectDescriptor] */

void FUN_10af8ac58(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_getLocalRulesDescription_110c9bbe0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10af8ac74; end: 10af8ac7f; +[SCCAdFormatMakeMultiSegmentSessionManager modulePath] */

undefined ** FUN_10af8ac74(void)

{
  return &PTR____CFConstantStringClassReference_110f3ed78;
}



/* Entry: 10af8ac80; end: 10af8ac83; +[SCCAdFormatMakeMultiSegmentSessionManager asyncStrictMode] */

undefined8 FUN_10af8ac80(void)

{
  return 0;
}



/* Entry: 10af8ac84; end: 10af8acbf; -[SCCAdFormatMakeMultiSegmentSessionManager makeMultiSegmentSessionManager] */

void FUN_10af8ac84(long param_1)

{
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af8bacc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af8acc0; end: 10af8ad37; +[SCCAdFormatMakeMultiSegmentSessionManager invokeWithJSRuntimeProvider:completionHandler:] */

void FUN_10af8acc0(void)

{
  long unaff_x20;
  
  func_0x00010af8bc80();
  (**(code **)(unaff_x20 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af8bce8();
  func_0x00010af8bc30();
  func_0x00010af8bc08();
  func_0x00010af8bcdc();
  func_0x00010af8bc40();
  _objc_release(unaff_x20);
  func_0x00010af8bb8c();
  func_0x00010af8bc48();
  return;
}



/* Entry: 10af8ad38; end: 10af8ada7;  */

void FUN_10af8ad38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126dedc8;
  func_0x00010bfbc0e0(PTR_PTR_1126dedc8,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(puVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af8bba0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010af8bbf8();
  func_0x00010af8bc00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af8ada8; end: 10af8adbb; +[SCCAdFormatMakeMultiSegmentSessionManager valdiMarshallableObjectDescriptor] */

void FUN_10af8ada8(undefined8 *param_1)

{
  *param_1 = &PTR_s_makeMultiSegmentSessionManager_110c9bc10;
  param_1[1] = &PTR_DAT_110c9bc40;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10af8adbc; end: 10af8adc7; +[SCCAdFormatOverrideAdFormat modulePath] */

undefined ** FUN_10af8adbc(void)

{
  return &PTR____CFConstantStringClassReference_110f3ed98;
}



/* Entry: 10af8adc8; end: 10af8adcb; +[SCCAdFormatOverrideAdFormat asyncStrictMode] */

undefined8 FUN_10af8adc8(void)

{
  return 0;
}



/* Entry: 10af8adcc; end: 10af8ae2b; -[SCCAdFormatOverrideAdFormat overrideAdFormatWithEncodedAdRenderData:adFormatCategory:nativeDeps:] */

void FUN_10af8adcc(void)

{
  code *extraout_x8;
  undefined8 unaff_x22;
  
  func_0x00010af8bb54();
  func_0x00010af8bc08();
  func_0x00010af8bc38();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af8bc18();
  (*extraout_x8)();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af8bb8c();
  func_0x00010af8bc48();
  func_0x00010af8bc00();
  func_0x00010af8bbf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x22);
  return;
}



/* Entry: 10af8ae2c; end: 10af8aecb; +[SCCAdFormatOverrideAdFormat invokeWithJSRuntimeProvider:encodedAdRenderData:adFormatCategory:nativeDeps:completionHandler:] */

void FUN_10af8ae2c(void)

{
  long unaff_x23;
  
  func_0x00010af8bb2c();
  func_0x00010af8bc08();
  func_0x00010af8bc38();
  func_0x00010af8bc64();
  (**(code **)(unaff_x23 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af8bb7c();
  func_0x00010af8bb0c(FUN_10af8aecc);
  func_0x00010af8bc38();
  func_0x00010af8bc08();
  func_0x00010af8bc30();
  func_0x00010af8bca0();
  func_0x00010af8bc6c();
  func_0x00010af8bcc8();
  func_0x00010af8bcc0();
  func_0x00010af8bcb8();
  func_0x00010af8bcb0();
  func_0x00010af8bc40();
  func_0x00010af8bbf8();
  func_0x00010af8bc00();
  func_0x00010af8bc48();
  func_0x00010af8bb8c();
  func_0x00010af8bca8();
  return;
}



/* Entry: 10af8aecc; end: 10af8af37;  */

void FUN_10af8aecc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *extraout_x8;
  
  puVar1 = PTR_PTR_1126dedd0;
  func_0x00010bfbc0e0(PTR_PTR_1126dedd0,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af8bc50();
  (*extraout_x8)();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af8bba0(*(undefined8 *)(param_1 + 0x40));
  func_0x00010af8bbf8();
  func_0x00010af8bc00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af8af38; end: 10af8af4b; +[SCCAdFormatOverrideAdFormat valdiMarshallableObjectDescriptor] */

void FUN_10af8af38(undefined8 *param_1)

{
  *param_1 = &PTR_s_overrideAdFormat_110c9bc50;
  param_1[1] = &PTR_DAT_110c9bc80;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10af8af4c; end: 10af8af57; +[SCCAdFormatPopulateValdiAdTrackEvents modulePath] */

undefined ** FUN_10af8af4c(void)

{
  return &PTR____CFConstantStringClassReference_110f3edb8;
}



/* Entry: 10af8af58; end: 10af8af5b; +[SCCAdFormatPopulateValdiAdTrackEvents asyncStrictMode] */

undefined8 FUN_10af8af58(void)

{
  return 0;
}



/* Entry: 10af8af5c; end: 10af8afbb; -[SCCAdFormatPopulateValdiAdTrackEvents populateValdiAdTrackEventsWithEncodedCommonSnapAdImpressionTrack:adTrackEventWrappers:adTrackAnalyticsInfo:] */

void FUN_10af8af5c(void)

{
  code *extraout_x8;
  undefined8 unaff_x22;
  
  func_0x00010af8bb54();
  func_0x00010af8bc08();
  func_0x00010af8bc38();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af8bc18();
  (*extraout_x8)();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af8bb8c();
  func_0x00010af8bc48();
  func_0x00010af8bc00();
  func_0x00010af8bbf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x22);
  return;
}



/* Entry: 10af8afbc; end: 10af8b05b; +[SCCAdFormatPopulateValdiAdTrackEvents invokeWithJSRuntimeProvider:encodedCommonSnapAdImpressionTrack:adTrackEventWrappers:adTrackAnalyticsInfo:completionHandler:] */

void FUN_10af8afbc(void)

{
  long unaff_x23;
  
  func_0x00010af8bb2c();
  func_0x00010af8bc08();
  func_0x00010af8bc38();
  func_0x00010af8bc64();
  (**(code **)(unaff_x23 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af8bb7c();
  func_0x00010af8bb0c(FUN_10af8b05c);
  func_0x00010af8bc38();
  func_0x00010af8bc08();
  func_0x00010af8bc30();
  func_0x00010af8bca0();
  func_0x00010af8bc6c();
  func_0x00010af8bcc8();
  func_0x00010af8bcc0();
  func_0x00010af8bcb8();
  func_0x00010af8bcb0();
  func_0x00010af8bc40();
  func_0x00010af8bbf8();
  func_0x00010af8bc00();
  func_0x00010af8bc48();
  func_0x00010af8bb8c();
  func_0x00010af8bca8();
  return;
}



/* Entry: 10af8b05c; end: 10af8b0c7;  */

void FUN_10af8b05c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *extraout_x8;
  
  puVar1 = PTR_PTR_1126dedd8;
  func_0x00010bfbc0e0(PTR_PTR_1126dedd8,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af8bc50();
  (*extraout_x8)();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af8bba0(*(undefined8 *)(param_1 + 0x40));
  func_0x00010af8bbf8();
  func_0x00010af8bc00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af8b0c8; end: 10af8b0db; +[SCCAdFormatPopulateValdiAdTrackEvents valdiMarshallableObjectDescriptor] */

void FUN_10af8b0c8(undefined8 *param_1)

{
  *param_1 = &PTR_s_populateValdiAdTrackEvents_110c9bca0;
  param_1[1] = &PTR_DAT_110c9bcd0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}


