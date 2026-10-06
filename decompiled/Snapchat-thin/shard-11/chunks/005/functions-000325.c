/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108623150; end: 1086231c3;  */

void FUN_108623150(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110a5c458;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_108623260();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_1086231c4);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108623284();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1086231c4; end: 108623233;  */

void FUN_1086231c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126da9a0;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_108623260();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_108623234(&uStack_30);
  return;
}



/* Entry: 108623234; end: 10862325f;  */

long FUN_108623234(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108623260; end: 10862328f;  */

void FUN_108623260(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 108623290; end: 10862332f;  */

void FUN_108623290(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  puVar1 = PTR_PTR_1126da9a8;
  _objc_alloc(PTR_PTR_1126da9a8);
  uVar2 = (ulong)*(uint *)(param_1 + 4);
  FUN_108623330(uVar2,*(undefined1 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  FUN_108623330(*(undefined4 *)(param_1 + 0xc),*(undefined1 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03d1a0(puVar1);
  FUN_10862336c();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108623330; end: 10862336b;  */

void FUN_108623330(int param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10862336c; end: 108623377;  */

void FUN_10862336c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108623378; end: 1086233e7;  */

void FUN_108623378(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  
  puVar2 = PTR_PTR_1126da9b0;
  _objc_alloc(PTR_PTR_1126da9b0);
  piVar3 = param_1 + 2;
  iVar1 = *param_1;
  FUN_1086249dc(piVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03d1e0(puVar2,param_2,(long)iVar1,piVar3);
  FUN_1086233e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1086233e8; end: 1086233f3;  */

void FUN_1086233e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1086233f4; end: 108623467;  */

void FUN_1086233f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126da9b8;
  _objc_alloc(PTR_PTR_1126da9b8);
  lVar2 = param_1;
  func_0x0001006ab644(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00ba80(puVar1,param_2,lVar2,*(undefined8 *)(param_1 + 0x20));
  FUN_108623468();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108623468; end: 10862346f;  */

void FUN_108623468(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108623470; end: 108623547;  */

void FUN_108623470(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _objc_retain();
  func_0x00010c11a480(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28040(auStack_48);
  func_0x00010c1142a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28040(auStack_60);
  FUN_108623548(param_1,auStack_48,auStack_60);
  func_0x000107c27914(auStack_60);
  _objc_release(param_2);
  func_0x000107c27914(auStack_48);
  func_0x00010862358c();
  func_0x000108623594();
  return;
}



/* Entry: 108623548; end: 10862359b;  */

void FUN_108623548(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar1;
  param_1[5] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return;
}



/* Entry: 10862359c; end: 108623653;  */

void FUN_10862359c(undefined8 *param_1,long param_2)

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
    ppuStack_38 = &PTR_DAT_110a5c4c0;
    lStack_40 = param_2;
    func_0x000107c316f4(&uStack_30,&ppuStack_38,&lStack_40,FUN_108623654);
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
    FUN_108623898(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 108623654; end: 108623757;  */

void FUN_108623654(undefined8 *param_1,long *param_2)

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
  *puVar4 = &PTR_FUN_110a5c500;
  puVar4[3] = &PTR_FUN_110a5c578;
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
  puVar4[3] = &PTR_FUN_110a5c550;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_108623898(&uStack_50);
  return;
}



/* Entry: 108623758; end: 10862375b;  */

void FUN_108623758(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5c500;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10862375c; end: 10862376f;  */

void FUN_10862375c(void)

{
  FUN_108623888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108623770; end: 10862377b;  */

long FUN_108623770(long param_1)

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
    ppuStack_38 = &PTR_DAT_110a5c4c0;
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



/* Entry: 10862377c; end: 1086237eb;  */

void FUN_10862377c(void)

{
  FUN_1086238c4();
  return;
}



/* Entry: 1086237ec; end: 1086237f3;  */

void FUN_1086237ec(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1086237f0);
  (*pcVar1)();
}



/* Entry: 1086237f4; end: 108623887;  */

long FUN_1086237f4(long param_1)

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
    ppuStack_38 = &PTR_DAT_110a5c4c0;
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



/* Entry: 108623888; end: 108623897;  */

void FUN_108623888(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5c500;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108623898; end: 1086238c3;  */

long FUN_108623898(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 1086238c4; end: 1086238cf;  */

long FUN_1086238c4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 8;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5c4c0;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 1086238d0; end: 1086239b7;  */

void FUN_1086238d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [24];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010bf4bc60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28040(auStack_48);
  uVar2 = param_2;
  func_0x00010c0ca4c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28248(auStack_68);
  FUN_1086239b8(param_1,auStack_48,auStack_68);
  func_0x000107c279c4(auStack_68);
  _objc_release(uVar2);
  func_0x000107c27914(auStack_48);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1086239b8; end: 108623a03;  */

undefined8 * FUN_1086239b8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  func_0x0001006b78fc(param_1 + 3,param_3);
  return param_1;
}



/* Entry: 108623a04; end: 108623b7f;  */

void FUN_108623a04(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  puVar5 = PTR_PTR_1126da9c0;
  _objc_alloc(PTR_PTR_1126da9c0);
  lVar6 = param_1;
  func_0x000107c27f28();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + 0x18;
  func_0x000107c27f28(lVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined1 *)(param_1 + 0x38);
  iVar4 = *(int *)(param_1 + 0x3c);
  if (*(char *)(param_1 + 0x44) == '\x01') {
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)*(int *)(param_1 + 0x40))
    ;
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar9 = (undefined *)0x0;
  }
  lVar8 = param_1 + 0x48;
  FUN_108623b80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  param_1 = param_1 + 0x60;
  func_0x000107c27f28();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff2d60(puVar5,param_2,lVar6,lVar7,uVar10,uVar3,(long)iVar4,puVar9,lVar8,uVar1,uVar2,
                      param_1);
  FUN_108623be4();
  _objc_release(lVar8);
  _objc_release(puVar9);
  _objc_release(lVar7);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108623b80; end: 108623bb3;  */

void FUN_108623b80(undefined4 *param_1)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    FUN_108623bb4(*param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108623bb4; end: 108623be3;  */

void FUN_108623bb4(int param_1,undefined8 param_2)

{
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)param_1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108623be4; end: 108623bef;  */

void FUN_108623be4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108623bf0; end: 108623c67; -[SCNMessagingEnsureStoryDestinationsCreatedCallback initWithCpp:] */

undefined1 * FUN_108623bf0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126fd290;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_108623e9c();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_108623e70(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108623c68; end: 108623cc7; -[SCNMessagingEnsureStoryDestinationsCreatedCallback onEnsureStoryDestinationsCreatedComplete:] */

void FUN_108623c68(long param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(*(long **)(param_1 + 0x18),param_3);
  return;
}



/* Entry: 108623cc8; end: 108623cf3;  */

void FUN_108623cc8(long *param_1)

{
  if (*param_1 != 0) {
    FUN_108623d8c();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108623cf4; end: 108623d47; -[SCNMessagingEnsureStoryDestinationsCreatedCallback .cxx_destruct] */

void FUN_108623cf4(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a5c590;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_108623e70((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 108623d48; end: 108623d8b; -[SCNMessagingEnsureStoryDestinationsCreatedCallback .cxx_construct] */

undefined8 * FUN_108623d48(undefined8 *param_1)

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
      FUN_108623e9c();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 108623d8c; end: 108623dff;  */

void FUN_108623d8c(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110a5c590;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_108623e9c();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_108623e00);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108623eb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108623e00; end: 108623e6f;  */

void FUN_108623e00(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126da9d0;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_108623e9c();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_108623e70(&uStack_30);
  return;
}



/* Entry: 108623e70; end: 108623e9b;  */

long FUN_108623e70(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108623e9c; end: 108623ecb;  */

void FUN_108623e9c(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 108623ecc; end: 108623f0b;  */

void FUN_108623ecc(void)

{
  _objc_alloc(PTR_PTR_1126da9d8);
  func_0x00010c04e4e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108623f0c; end: 108623fdf;  */

void FUN_108623f0c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [32];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010bf4d220(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_108623fe0(auStack_50);
  func_0x00010c12a220(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_108624030(auStack_70);
  func_0x000105285768(param_1,auStack_50,auStack_70);
  func_0x000104bee458(auStack_70);
  func_0x000108624484();
  func_0x000104bee588(auStack_50);
  _objc_release(uVar1);
  func_0x00010862447c();
  return;
}



/* Entry: 108623fe0; end: 10862402f;  */

void FUN_108623fe0(void)

{
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_40 [32];
  
  func_0x000108624530();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[0x18] = 0;
  }
  else {
    FUN_108624238(auStack_40);
    func_0x0001086244c0();
    func_0x000104bee5a8();
  }
  func_0x00010862447c();
  return;
}



/* Entry: 108624030; end: 10862407f;  */

void FUN_108624030(void)

{
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_40 [32];
  
  func_0x000108624530();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[0x18] = 0;
  }
  else {
    FUN_108624350(auStack_40);
    func_0x0001086244c0();
    func_0x000104bee478();
  }
  func_0x00010862447c();
  return;
}



/* Entry: 108624080; end: 108624237;  */

void FUN_108624080(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_1126be7b0;
  _objc_alloc(PTR_PTR_1126be7b0);
  if ((char)param_1[3] == '\x01') {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                        param_1[1] - *param_1 >> 5);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1[1];
    for (lVar6 = *param_1; lVar6 != lVar1; lVar6 = lVar6 + 0x20) {
      lVar3 = lVar6;
      FUN_10862460c(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar4,param_2,lVar3);
      _objc_release(lVar3);
    }
    func_0x00010bf51e00(puVar4);
    func_0x00010862447c();
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  if ((char)param_1[7] == '\x01') {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                        (param_1[5] - param_1[4]) / 0x18);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1[5];
    for (lVar6 = param_1[4]; lVar6 != lVar1; lVar6 = lVar6 + 0x18) {
      lVar3 = lVar6;
      FUN_108631614(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar5,param_2,lVar3);
      func_0x000108624544();
    }
    func_0x00010bf51e00(puVar5);
    func_0x000108624484();
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  func_0x00010c003b00(puVar2,param_2,puVar4,puVar5);
  func_0x000108624544();
  func_0x00010862447c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108624238; end: 10862434f;  */

/* WARNING: Possible PIC construction at 0x000108624278: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001086242dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108624390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001086243f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108624394) */
/* WARNING: Removing unreachable block (ram,0x00010862439c) */
/* WARNING: Removing unreachable block (ram,0x0001086242e0) */
/* WARNING: Removing unreachable block (ram,0x00010862427c) */
/* WARNING: Removing unreachable block (ram,0x0001086242e8) */
/* WARNING: Removing unreachable block (ram,0x000108624300) */
/* WARNING: Removing unreachable block (ram,0x000108624314) */
/* WARNING: Removing unreachable block (ram,0x000108624334) */
/* WARNING: Removing unreachable block (ram,0x00010862434c) */
/* WARNING: Removing unreachable block (ram,0x0001086242f8) */
/* WARNING: Removing unreachable block (ram,0x000108624284) */
/* WARNING: Removing unreachable block (ram,0x00010862428c) */
/* WARNING: Removing unreachable block (ram,0x000108624290) */
/* WARNING: Removing unreachable block (ram,0x0001086242a0) */
/* WARNING: Removing unreachable block (ram,0x0001086242a8) */
/* WARNING: Removing unreachable block (ram,0x0001086242dc) */
/* WARNING: Removing unreachable block (ram,0x0001086243f8) */
/* WARNING: Removing unreachable block (ram,0x0001086243a4) */
/* WARNING: Removing unreachable block (ram,0x0001086243a8) */
/* WARNING: Removing unreachable block (ram,0x0001086243b8) */
/* WARNING: Removing unreachable block (ram,0x0001086243c0) */
/* WARNING: Removing unreachable block (ram,0x0001086243f4) */
/* WARNING: Removing unreachable block (ram,0x000108624400) */
/* WARNING: Removing unreachable block (ram,0x000108624418) */
/* WARNING: Removing unreachable block (ram,0x00010862442c) */
/* WARNING: Removing unreachable block (ram,0x00010862444c) */
/* WARNING: Removing unreachable block (ram,0x000108624464) */
/* WARNING: Removing unreachable block (ram,0x000108624410) */
/* WARNING: Removing unreachable block (ram,0x0001086244a8) */

void FUN_108624238(void)

{
  undefined8 *unaff_x20;
  
  func_0x00010862448c();
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  *unaff_x20 = 0;
  func_0x00010bf529e0();
  func_0x0001052858c0();
  func_0x0001086244e8();
                    /* WARNING: Could not recover jumptable at 0x00010bf52a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 108624350; end: 108624467;  */

/* WARNING: Possible PIC construction at 0x000108624390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001086243f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108624394) */
/* WARNING: Removing unreachable block (ram,0x00010862439c) */
/* WARNING: Removing unreachable block (ram,0x0001086243f8) */
/* WARNING: Removing unreachable block (ram,0x0001086243a4) */
/* WARNING: Removing unreachable block (ram,0x0001086243a8) */
/* WARNING: Removing unreachable block (ram,0x0001086243b8) */
/* WARNING: Removing unreachable block (ram,0x0001086243c0) */
/* WARNING: Removing unreachable block (ram,0x0001086243f4) */
/* WARNING: Removing unreachable block (ram,0x000108624400) */
/* WARNING: Removing unreachable block (ram,0x000108624418) */
/* WARNING: Removing unreachable block (ram,0x00010862442c) */
/* WARNING: Removing unreachable block (ram,0x00010862444c) */
/* WARNING: Removing unreachable block (ram,0x000108624464) */
/* WARNING: Removing unreachable block (ram,0x000108624410) */
/* WARNING: Removing unreachable block (ram,0x0001086244a8) */

void FUN_108624350(void)

{
  undefined8 *unaff_x20;
  
  func_0x00010862448c();
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  *unaff_x20 = 0;
  func_0x00010bf529e0();
  func_0x000105285d98();
  func_0x0001086244e8();
                    /* WARNING: Could not recover jumptable at 0x00010bf52a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 108624468; end: 108624553;  */

void FUN_108624468(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf52a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 108624554; end: 10862460b;  */

void FUN_108624554(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c124de0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10862f33c(&uStack_50);
  func_0x00010bf05ce0();
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[2] = uStack_40;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  *(int *)(param_1 + 3) = (int)param_2;
  func_0x000107c27914(&uStack_50);
  _objc_release(uVar1);
  FUN_108624680();
  return;
}



/* Entry: 10862460c; end: 10862467f;  */

void FUN_10862460c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126da9e0;
  _objc_alloc(PTR_PTR_1126da9e0);
  lVar2 = param_1;
  FUN_10862f3ac(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03d8c0(puVar1,param_2,lVar2,(long)*(int *)(param_1 + 0x18));
  FUN_108624680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108624680; end: 108624687;  */

void FUN_108624680(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108624688; end: 10862473f;  */

void FUN_108624688(int *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126da9e8;
  _objc_alloc(PTR_PTR_1126da9e8);
  if ((char)param_1[1] == '\x01') {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)*param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  param_1 = param_1 + 2;
  func_0x0001006d1308(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010780(puVar1,param_2,puVar2,param_1);
  FUN_108624740();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108624740; end: 10862474b;  */

void FUN_108624740(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10862474c; end: 10862478b;  */

ulong FUN_10862474c(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    FUN_10862489c();
    uVar1 = param_1 & 0xffffffff | 0x100000000;
  }
  return uVar1;
}



/* Entry: 10862478c; end: 108624833;  */

void FUN_10862478c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126da9f0;
  _objc_alloc(PTR_PTR_1126da9f0);
  lVar2 = param_1;
  FUN_10862f3ac(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x18;
  FUN_108624834(lVar3);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  func_0x000108624868(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0268e0(puVar1,param_2,lVar2,lVar3,param_1);
  func_0x00010862497c();
  func_0x000108624974();
  func_0x00010862496c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108624834; end: 10862489b;  */

void FUN_108624834(undefined4 *param_1)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    FUN_10862490c(*param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10862489c; end: 1086248d3;  */

undefined8 FUN_10862489c(undefined8 param_1)

{
  _objc_retain();
  func_0x00010c067fc0(param_1);
  FUN_10862496c();
  return param_1;
}



/* Entry: 1086248d4; end: 10862490b;  */

undefined8 FUN_1086248d4(undefined8 param_1)

{
  _objc_retain();
  func_0x00010c067fc0(param_1);
  FUN_10862496c();
  return param_1;
}



/* Entry: 10862490c; end: 10862493b;  */

void FUN_10862490c(int param_1,undefined8 param_2)

{
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)param_1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10862493c; end: 10862496b;  */

void FUN_10862493c(int param_1,undefined8 param_2)

{
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)param_1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10862496c; end: 108624987;  */

void FUN_10862496c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108624988; end: 1086249bb;  */

void FUN_108624988(void)

{
  _objc_alloc(PTR_PTR_1126da9f8);
  func_0x00010c044c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1086249bc; end: 1086249db;  */

void FUN_1086249bc(void)

{
  return;
}



/* Entry: 1086249dc; end: 108624a3b;  */

void FUN_1086249dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126daa10;
  _objc_alloc(PTR_PTR_1126daa10);
  func_0x0001006a7d84(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c004b80(puVar1,param_2,param_1);
  FUN_108624a3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108624a3c; end: 108624a47;  */

void FUN_108624a3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108624a48; end: 108624adf; -[SCNMessagingFeedManager maybeSyncFeedLite:metadata:callback:] */

void FUN_108624a48(void)

{
  long unaff_x22;
  long *plVar1;
  
  func_0x000107c31aa0();
  func_0x000107c31a7c();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  FUN_108631260();
  func_0x000108625ed0();
  func_0x000107c31ab0(*(undefined8 *)(*plVar1 + 0x18));
  func_0x000108625f34();
  func_0x000107c31a74();
  func_0x000107c31a70();
  return;
}



/* Entry: 108624ae0; end: 108624b7f; -[SCNMessagingFeedManager queryFeedAutoPaginated:trackingId:] */

void FUN_108624ae0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_50 [32];
  
  _objc_retain(param_4);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000107c31ab4();
  func_0x000107c285bc();
  (**(code **)(*plVar1 + 0x20))(plVar1,param_3,auStack_50);
  func_0x000107c279dc(auStack_50);
  func_0x000107c31a70();
  return;
}



/* Entry: 108624b80; end: 108624c23; -[SCNMessagingFeedManager fetchAndSyncFeedWithConversationIds:callback:] */

void FUN_108624b80(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_58 [40];
  
  FUN_108625e7c();
  func_0x000107c31a7c();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x000108625f18();
  func_0x000108625f3c();
  FUN_108626194();
  func_0x000108625ea0(*(undefined8 *)(*plVar1 + 0x30));
  func_0x000108625d80(auStack_58);
  func_0x000108625f10();
  func_0x000107c31a74();
  func_0x000107c31a70();
  return;
}



/* Entry: 108624c24; end: 108624cbf; -[SCNMessagingFeedManager clearGroupFeedEntry:callback:] */

void FUN_108624c24(void)

{
  long unaff_x21;
  long *plVar1;
  
  FUN_108625e7c();
  func_0x000107c31a7c();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x000108625f78();
  func_0x000107c2874c();
  func_0x000108625ed0();
  func_0x000108625ea0(*(undefined8 *)(*plVar1 + 0x38));
  func_0x000108625f34();
  func_0x000108625f70();
  func_0x000107c31a74();
  func_0x000107c31a70();
  return;
}



/* Entry: 108624cc0; end: 108624d67; -[SCNMessagingFeedManager onFeedExited:feedSessionId:] */

void FUN_108624cc0(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [16];
  
  FUN_108625e7c();
  func_0x000107c31a7c();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x000108625fcc();
  func_0x000108625fc0();
  (**(code **)(*plVar1 + 0x40))(plVar1,auStack_40,auStack_60);
  func_0x000108625fa0();
  func_0x000108625f98();
  func_0x000107c31a74();
  func_0x000107c31a70();
  return;
}



/* Entry: 108624d68; end: 108624e23; -[SCNMessagingFeedManager onFeedEntered:disableMessagesExpiration:feedSessionId:] */

void FUN_108624d68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [16];
  
  func_0x000108625ee8();
  func_0x000107c31a7c();
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000108625fcc();
  func_0x000108625fc0();
  (**(code **)(*plVar1 + 0x48))(plVar1,auStack_40,param_4,auStack_60);
  func_0x000108625fa0();
  func_0x000108625f98();
  func_0x000107c31a74();
  func_0x000107c31a70();
  return;
}



/* Entry: 108624e24; end: 108624e7b; -[SCNMessagingFeedManager signalFeedEntered] */

void FUN_108624e24(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x50))();
  return;
}



/* Entry: 108624e7c; end: 108624ed3; -[SCNMessagingFeedManager processUnviewedContentExpiry] */

void FUN_108624e7c(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x58))();
  return;
}



/* Entry: 108624ed4; end: 108624f5f; -[SCNMessagingFeedManager getConsumableConversations:] */

void FUN_108624ed4(long param_1)

{
  long *plVar1;
  undefined1 auStack_40 [16];
  
  func_0x000108625ee8();
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000107c31ab4();
  FUN_10861b9b0();
  func_0x000108625f5c(*(undefined8 *)(*plVar1 + 0x60));
  func_0x000108625da4(auStack_40);
  func_0x000107c31a70();
  return;
}



/* Entry: 108624f60; end: 108624ffb; -[SCNMessagingFeedManager retryMultiRecipientCell:callback:] */

void FUN_108624f60(void)

{
  long unaff_x21;
  long *plVar1;
  
  FUN_108625e7c();
  func_0x000107c31a7c();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x000108625f78();
  FUN_1086339f4();
  func_0x000108625ed0();
  func_0x000108625ea0(*(undefined8 *)(*plVar1 + 0x68));
  func_0x000108625f34();
  func_0x000108625f10();
  func_0x000107c31a74();
  func_0x000107c31a70();
  return;
}



/* Entry: 108624ffc; end: 108625097; -[SCNMessagingFeedManager cancelSend:callback:] */

void FUN_108624ffc(void)

{
  long unaff_x21;
  long *plVar1;
  
  FUN_108625e7c();
  func_0x000107c31a7c();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x000108625f78();
  FUN_1086339f4();
  func_0x000108625ed0();
  func_0x000108625ea0(*(undefined8 *)(*plVar1 + 0x70));
  func_0x000108625f34();
  func_0x000108625f10();
  func_0x000107c31a74();
  func_0x000107c31a70();
  return;
}



/* Entry: 108625098; end: 10862513f; -[SCNMessagingFeedManager fetchSaveableSentSnapId:callback:] */

void FUN_108625098(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_58 [40];
  
  FUN_108625e7c();
  func_0x000107c31a7c();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x000108625f78();
  func_0x000107c2874c();
  func_0x000108625f3c();
  FUN_108628c0c();
  func_0x000108625ea0(*(undefined8 *)(*plVar1 + 0x78));
  func_0x000108625dc8(auStack_58);
  func_0x000108625f70();
  func_0x000107c31a74();
  func_0x000107c31a70();
  return;
}



/* Entry: 108625140; end: 1086251fb; -[SCNMessagingFeedManager setPinnedConversationStatus:pinnedStatus:callback:] */

void FUN_108625140(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [24];
  
  func_0x000108625ee8();
  func_0x000107c31a7c();
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000108625f78();
  func_0x000107c2874c();
  func_0x000108625ed0();
  (**(code **)(*plVar1 + 0x80))(plVar1,auStack_48,param_4,auStack_58);
  func_0x000108625f34();
  func_0x000108625f70();
  func_0x000107c31a74();
  func_0x000107c31a70();
  return;
}



/* Entry: 1086251fc; end: 10862529f; -[SCNMessagingFeedManager fetchFeedEntries:callback:] */

void FUN_1086251fc(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_58 [40];
  
  FUN_108625e7c();
  func_0x000107c31a7c();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x000108625f18();
  func_0x000108625f3c();
  FUN_10862709c();
  func_0x000108625ea0(*(undefined8 *)(*plVar1 + 0x88));
  func_0x000108625dec(auStack_58);
  func_0x000108625f10();
  func_0x000107c31a74();
  func_0x000107c31a70();
  return;
}



/* Entry: 1086252a0; end: 108625343; -[SCNMessagingFeedManager fetchLastEventUpdateTimestampsForUsers:callback:] */

void FUN_1086252a0(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_58 [40];
  
  FUN_108625e7c();
  func_0x000107c31a7c();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x000108625f18();
  func_0x000108625f3c();
  FUN_108627878();
  func_0x000108625ea0(*(undefined8 *)(*plVar1 + 0x90));
  func_0x000108625e10(auStack_58);
  func_0x000108625f10();
  func_0x000107c31a74();
  func_0x000107c31a70();
  return;
}



/* Entry: 108625344; end: 1086253e7; -[SCNMessagingFeedManager fetchFeedEntriesForUsers:callback:] */

void FUN_108625344(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_58 [40];
  
  FUN_108625e7c();
  func_0x000107c31a7c();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x000108625f18();
  func_0x000108625f3c();
  FUN_108627444();
  func_0x000108625ea0(*(undefined8 *)(*plVar1 + 0x98));
  func_0x000108625e34(auStack_58);
  func_0x000108625f10();
  func_0x000107c31a74();
  func_0x000107c31a70();
  return;
}



/* Entry: 1086253e8; end: 108625473; -[SCNMessagingFeedManager fetchFeedEntriesWithStreaks:] */

void FUN_1086253e8(long param_1)

{
  long *plVar1;
  undefined1 auStack_40 [16];
  
  func_0x000108625ee8();
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000107c31ab4();
  FUN_10862709c();
  func_0x000108625f5c(*(undefined8 *)(*plVar1 + 0xa0));
  func_0x000108625dec(auStack_40);
  func_0x000107c31a70();
  return;
}



/* Entry: 108625474; end: 1086255db; -[SCNMessagingFeedManager fetchFeedEntriesWithExpiredStreaks:minStreakCount:minExpirationTimeMs:callback:] */

void FUN_108625474(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 auStack_70 [16];
  
  func_0x000108625ee8();
  func_0x000107c31a7c();
  _objc_retain(param_5);
  _objc_retain(param_6);
  plVar4 = *(long **)(param_1 + 0x18);
  uVar1 = param_3;
  func_0x000107c28134(param_3);
  uVar2 = param_2;
  func_0x000107c28134(param_4);
  uVar3 = uVar2;
  func_0x000107c28134(param_5);
  FUN_10862709c(auStack_70,param_6);
  (**(code **)(*plVar4 + 0xa8))
            (plVar4,uVar1,param_2 & 0xff,param_4,uVar2 & 0xff,param_5,uVar3 & 0xff,auStack_70);
  func_0x000108625dec(auStack_70);
  _objc_release(param_6);
  func_0x000108625fd8();
  func_0x000107c31a74();
  _objc_release(param_3);
  return;
}



/* Entry: 1086255dc; end: 108625667; -[SCNMessagingFeedManager fetchUnreadFeedEntryCount:] */

void FUN_1086255dc(long param_1)

{
  long *plVar1;
  undefined1 auStack_40 [16];
  
  func_0x000108625ee8();
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000107c31ab4();
  FUN_108629370();
  func_0x000108625f5c(*(undefined8 *)(*plVar1 + 0xb0));
  func_0x000108625e58(auStack_40);
  func_0x000107c31a70();
  return;
}



/* Entry: 108625668; end: 10862567b;  */

void FUN_108625668(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  lVar2 = *(long *)(param_2 + 0x30);
  *(long *)(param_2 + 0x30) = 0;
  *(long *)(param_1 + 0x30) = lVar2;
  lVar4 = *(long *)(param_2 + 0x40);
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  *(undefined8 *)(param_2 + 0x38) = 0;
  lVar3 = *(long *)(param_2 + 0x48);
  *(long *)(param_1 + 0x48) = lVar3;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = *(ulong *)(param_1 + 0x38);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long *)(lVar2 + uVar5 * 8) = param_1 + 0x40;
    *(long *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
  }
  return;
}



/* Entry: 10862567c; end: 1086258ff;  */

void FUN_10862567c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong unaff_x23;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  char cStack_70;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  lVar10 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x000108625ee8();
  _objc_retain(param_2);
  func_0x00010c067fc0();
  func_0x000108625fd8();
  func_0x000108625f3c();
  FUN_1086407a4();
  func_0x000107c31a74();
  iVar7 = (int)param_2;
  uVar9 = (ulong)iVar7;
  uVar8 = *(ulong *)(lVar10 + 0x38);
  if (uVar8 != 0) {
    uVar3 = uVar8 - 1;
    if ((uVar8 & uVar3) == 0) {
      unaff_x23 = uVar3 & uVar9;
    }
    else {
      unaff_x23 = uVar9;
      if (uVar8 <= uVar9) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = uVar9 / uVar8;
        }
        unaff_x23 = uVar9 - uVar6 * uVar8;
      }
    }
    plVar4 = *(long **)(*(long *)(lVar10 + 0x30) + unaff_x23 * 8);
    if (plVar4 != (long *)0x0) {
      do {
        while( true ) {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_10862575c;
          uVar6 = plVar4[1];
          if (uVar6 != uVar9) break;
          if (*(int *)(plVar4 + 2) == iVar7) goto LAB_1086258b0;
        }
        if ((uVar8 & uVar3) == 0) {
          uVar6 = uVar6 & uVar3;
        }
        else if (uVar8 <= uVar6) {
          uVar1 = 0;
          if (uVar8 != 0) {
            uVar1 = uVar6 / uVar8;
          }
          uVar6 = uVar6 - uVar1 * uVar8;
        }
      } while (uVar6 == unaff_x23);
    }
  }
LAB_10862575c:
  plVar2 = (long *)0x48;
  __Znwm();
  plVar4 = (long *)(lVar10 + 0x40);
  uStack_48 = 1;
  *plVar2 = 0;
  plVar2[1] = uVar9;
  *(int *)(plVar2 + 2) = iVar7;
  *(undefined1 *)(plVar2 + 3) = 0;
  *(undefined1 *)(plVar2 + 6) = 0;
  if (cStack_70 == '\x01') {
    plVar2[4] = lStack_80;
    plVar2[3] = lStack_88;
    plVar2[5] = lStack_78;
    lStack_80 = 0;
    lStack_78 = 0;
    lStack_88 = 0;
    *(undefined1 *)(plVar2 + 6) = 1;
  }
  plVar2[8] = lStack_60;
  plVar2[7] = lStack_68;
  plStack_58 = plVar2;
  plStack_50 = plVar4;
  if ((uVar8 == 0) ||
     (*(float *)(lVar10 + 0x50) * (float)uVar8 < (float)(*(long *)(lVar10 + 0x48) + 1))) {
    func_0x000108625fa8(uVar8 << 1);
    func_0x000107c2860c(lVar10 + 0x30);
    uVar8 = *(ulong *)(lVar10 + 0x38);
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x23 = uVar8 - 1 & uVar9;
    }
    else {
      unaff_x23 = uVar9;
      if (uVar8 <= uVar9) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar9 / uVar8;
        }
        unaff_x23 = uVar9 - uVar3 * uVar8;
      }
    }
  }
  lVar5 = *(long *)(lVar10 + 0x30);
  plVar2 = *(long **)(lVar5 + unaff_x23 * 8);
  if (plVar2 == (long *)0x0) {
    *plStack_58 = *plVar4;
    *plVar4 = (long)plStack_58;
    *(long **)(lVar5 + unaff_x23 * 8) = plVar4;
    if (*plStack_58 != 0) {
      uVar9 = *(ulong *)(*plStack_58 + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar9 = uVar9 & uVar8 - 1;
      }
      else if (uVar8 <= uVar9) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar9 / uVar8;
        }
        uVar9 = uVar9 - uVar3 * uVar8;
      }
      *(long **)(lVar5 + uVar9 * 8) = plStack_58;
    }
  }
  else {
    *plStack_58 = *plVar2;
    *plVar2 = (long)plStack_58;
  }
  plStack_58 = (long *)0x0;
  *(long *)(lVar10 + 0x48) = *(long *)(lVar10 + 0x48) + 1;
  FUN_108625a30(&plStack_58);
LAB_1086258b0:
  func_0x000107c279a4(&lStack_88);
  return;
}



/* Entry: 108625900; end: 1086259fb;  */

void FUN_108625900(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_1086259fc(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_108625a14(plVar3);
    FUN_1086259fc(param_1,plVar3);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
            **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
            plVar3 = plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1086259fc; end: 108625a13;  */

void FUN_1086259fc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108625a14; end: 108625a2f;  */

long FUN_108625a14(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  FUN_108625a54();
  return param_1;
}



/* Entry: 108625a30; end: 108625a53;  */

undefined8 FUN_108625a30(undefined8 param_1)

{
  FUN_108625a54(param_1,0);
  return param_1;
}



/* Entry: 108625a54; end: 108625a6b;  */

void FUN_108625a54(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x000107c279a4(lVar1 + 0x18);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 108625a6c; end: 108625aaf;  */

void FUN_108625a6c(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000107c279a4(param_2 + 0x18);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 108625ab0; end: 108625ae3;  */

void FUN_108625ab0(void)

{
  func_0x000108625ac8();
  return;
}



/* Entry: 108625ae4; end: 108625cd7;  */

undefined1  [16] FUN_108625ae4(long *param_1,int *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong unaff_x23;
  undefined1 auVar10 [16];
  long *aplStack_58 [3];
  
  uVar7 = (ulong)*param_2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    if ((uVar9 & uVar3) == 0) {
      unaff_x23 = uVar3 & uVar7;
    }
    else {
      unaff_x23 = uVar7;
      if (uVar9 <= uVar7) {
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = uVar7 / uVar9;
        }
        unaff_x23 = uVar7 - uVar5 * uVar9;
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x23 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_108625b90;
          uVar5 = plVar8[1];
          if (uVar5 != uVar7) break;
          if ((int)plVar8[2] == *param_2) {
            uVar2 = 0;
            goto LAB_108625cac;
          }
        }
        if ((uVar9 & uVar3) == 0) {
          uVar5 = uVar5 & uVar3;
        }
        else if (uVar9 <= uVar5) {
          uVar1 = 0;
          if (uVar9 != 0) {
            uVar1 = uVar5 / uVar9;
          }
          uVar5 = uVar5 - uVar1 * uVar9;
        }
      } while (uVar5 == unaff_x23);
    }
  }
LAB_108625b90:
  FUN_108625cd8(aplStack_58,param_1,uVar7);
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    func_0x000108625fa8(uVar9 << 1);
    func_0x000107c2860c(param_1);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x23 = uVar9 - 1 & uVar7;
    }
    else {
      unaff_x23 = uVar7;
      if (uVar9 <= uVar7) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar7 / uVar9;
        }
        unaff_x23 = uVar7 - uVar3 * uVar9;
      }
    }
  }
  plVar8 = aplStack_58[0];
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + unaff_x23 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_58[0] = *plVar6;
    *plVar6 = (long)aplStack_58[0];
    *(long **)(lVar4 + unaff_x23 * 8) = plVar6;
    if (*aplStack_58[0] != 0) {
      uVar7 = *(ulong *)(*aplStack_58[0] + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar7 = uVar7 & uVar9 - 1;
      }
      else if (uVar9 <= uVar7) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar7 / uVar9;
        }
        uVar7 = uVar7 - uVar3 * uVar9;
      }
      *(long **)(lVar4 + uVar7 * 8) = aplStack_58[0];
    }
  }
  else {
    *aplStack_58[0] = *plVar6;
    *plVar6 = (long)aplStack_58[0];
  }
  aplStack_58[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_108625a30(aplStack_58);
  uVar2 = 1;
LAB_108625cac:
  auVar10._8_8_ = uVar2;
  auVar10._0_8_ = plVar8;
  return auVar10;
}



/* Entry: 108625cd8; end: 108625d33;  */

void FUN_108625cd8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x48;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_108625d34(puVar1 + 2,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 108625d34; end: 108625e7b;  */

undefined4 * FUN_108625d34(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  func_0x000108625d5c(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 108625e7c; end: 108625fe3;  */

void FUN_108625e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 108625fe4; end: 108625ff7;  */

void FUN_108625fe4(void)

{
  func_0x0001086260b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108625ff8; end: 108626037;  */

void FUN_108625ff8(void)

{
  func_0x0001086260c4();
  return;
}



/* Entry: 108626038; end: 1086260ab;  */

void FUN_108626038(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_1086260d0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e4300(uVar2);
  func_0x00010063e0cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 1086260ac; end: 1086260cf;  */

void FUN_1086260ac(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1086260b0);
  (*pcVar1)();
}


