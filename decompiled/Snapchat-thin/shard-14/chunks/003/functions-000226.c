/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b10ef04; end: 10b10ef7b; -[SCNNetworkManagerProgressiveDownloadCallbackCppProxy initWithCpp:] */

undefined1 * FUN_10b10ef04(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112705df0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10b10f888();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0001052b81d0(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b10ef7c; end: 10b10f097; -[SCNNetworkManagerProgressiveDownloadCallbackCppProxy onUpdate:chunkData:error:] */

void FUN_10b10ef7c(void)

{
  long unaff_x22;
  long *plVar1;
  undefined1 auStack_f0 [72];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [88];
  
  func_0x00010b10f8a8();
  _objc_retain();
  func_0x00010b10f910();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  FUN_10b10f958(auStack_98);
  FUN_10b10f098(auStack_a8);
  func_0x000105632694(auStack_f0);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_98,auStack_a8,auStack_f0);
  func_0x0001052a038c(auStack_f0);
  func_0x000107c27f10(auStack_a8);
  func_0x0001052b8c8c(auStack_98);
  func_0x00010b10f8a0();
  func_0x00010b10f8f0();
  func_0x00010b10f898();
  return;
}



/* Entry: 10b10f098; end: 10b10f0db;  */

void FUN_10b10f098(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b10f930();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
  }
  else {
    func_0x000107c31308();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b10f0dc; end: 10b10f1ff; -[SCNNetworkManagerProgressiveDownloadCallbackCppProxy onUpdateDataRef:chunkData:error:] */

long * FUN_10b10f0dc(void)

{
  long unaff_x22;
  long *plVar1;
  undefined1 auStack_f8 [72];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [88];
  
  func_0x00010b10f8a8();
  _objc_retain();
  func_0x00010b10f910();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  FUN_10b10f958(auStack_98);
  func_0x000107c281cc(auStack_b0);
  func_0x000105632694(auStack_f8);
  (**(code **)(*plVar1 + 0x18))(plVar1,auStack_98,auStack_b0,auStack_f8);
  func_0x0001052a038c(auStack_f8);
  func_0x000107c27f18(auStack_b0);
  func_0x0001052b8c8c(auStack_98);
  func_0x00010b10f8a0();
  func_0x00010b10f8f0();
  func_0x00010b10f898();
  return plVar1;
}



/* Entry: 10b10f200; end: 10b10f32b;  */

void FUN_10b10f200(void)

{
  undefined8 uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  int extraout_w10;
  ulong unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010b10f930();
  if (unaff_x19 == 0) {
    uVar4 = 0x10;
    ___cxa_allocate_exception(0x10);
    func_0x00010527a174();
    ___cxa_throw(uVar4,PTR___ZTISt16invalid_argument_110352248,
                 PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10b10f300);
    (*pcVar2)();
  }
  _objc_opt_class(PTR_PTR_1126dfcd8);
  uVar3 = unaff_x19;
  _objc_opt_isKindOfClass();
  if ((uVar3 & 1) == 0) {
    _objc_retain();
    ppuStack_48 = &PTR_DAT_110cbbd60;
    func_0x000107c316f4(&uStack_40,&ppuStack_48,&stack0xffffffffffffffb0,FUN_10b10f430);
    uVar1 = uStack_38;
    uVar4 = uStack_40;
    uStack_40 = 0;
    uStack_38 = 0;
    func_0x000107c27d28(&uStack_40);
    _objc_release(unaff_x19);
    unaff_x20[1] = uVar1;
    *unaff_x20 = uVar4;
    uStack_60 = 0;
    uStack_58 = 0;
    FUN_10b10f77c(&uStack_60);
  }
  else {
    lVar5 = *(long *)(unaff_x19 + 0x20);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x18);
    unaff_x20[1] = *(undefined8 *)(unaff_x19 + 0x20);
    *unaff_x20 = uVar4;
    if (lVar5 != 0) {
      do {
        func_0x00010b10f888();
      } while (extraout_w10 != 0);
    }
  }
  func_0x00010b10f898();
  return;
}



/* Entry: 10b10f32c; end: 10b10f39b;  */

void FUN_10b10f32c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_110cbbd08,&PTR_DAT_110cbbd18,0);
    if (lVar1 == 0) {
      FUN_10b10f7a4(param_1);
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



/* Entry: 10b10f39c; end: 10b10f3ef; -[SCNNetworkManagerProgressiveDownloadCallbackCppProxy .cxx_destruct] */

void FUN_10b10f39c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cbbe40;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x0001052b81d0((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b10f3f0; end: 10b10f42f; -[SCNNetworkManagerProgressiveDownloadCallbackCppProxy .cxx_construct] */

undefined8 * FUN_10b10f3f0(undefined8 *param_1)

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
      FUN_10b10f888();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b10f430; end: 10b10f523;  */

void FUN_10b10f430(undefined8 *param_1,long *param_2)

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
  *puVar1 = &PTR_FUN_110cbbda0;
  puVar1[3] = &PTR_DAT_110cbbe20;
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
      FUN_10b10f888();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  puVar1[3] = &PTR_FUN_110cbbdf0;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10b10f77c(&uStack_50);
  return;
}



/* Entry: 10b10f524; end: 10b10f527;  */

void FUN_10b10f524(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbbda0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b10f528; end: 10b10f53b;  */

void FUN_10b10f528(void)

{
  FUN_10b10f76c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b10f53c; end: 10b10f547;  */

long FUN_10b10f53c(long param_1)

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
    ppuStack_38 = &PTR_DAT_110cbbd60;
    func_0x00010b10f910();
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    func_0x00010b10f8a0();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10b10f548; end: 10b10f583;  */

void FUN_10b10f548(void)

{
  func_0x00010b10f924();
  return;
}



/* Entry: 10b10f584; end: 10b10f62b;  */

void FUN_10b10f584(undefined8 param_1)

{
  func_0x00010b10f8cc();
  FUN_10b10fac8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcc07c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010563299c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b10f8f8();
  func_0x00010c0e7520();
  func_0x00010b10f8e0();
  func_0x00010b10f8a0();
  func_0x00010b10f898();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10b10f62c; end: 10b10f6df;  */

undefined8 FUN_10b10f62c(undefined8 param_1)

{
  undefined8 unaff_x23;
  
  func_0x00010b10f8cc();
  FUN_10b10fac8();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c281d0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010563299c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b10f8f8();
  func_0x00010c0e7580();
  func_0x00010b10f8e0();
  func_0x00010b10f8a0();
  func_0x00010b10f898();
  _objc_autoreleasePoolPop(param_1);
  return unaff_x23;
}



/* Entry: 10b10f6e0; end: 10b10f76b;  */

long FUN_10b10f6e0(long param_1)

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
    ppuStack_38 = &PTR_DAT_110cbbd60;
    func_0x00010b10f910();
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    func_0x00010b10f8a0();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10b10f76c; end: 10b10f77b;  */

void FUN_10b10f76c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbbda0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b10f77c; end: 10b10f7a3;  */

long FUN_10b10f77c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b10f7a4; end: 10b10f817;  */

void FUN_10b10f7a4(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110cbbe40;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10b10f888();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b10f818);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b10f93c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b10f818; end: 10b10f887;  */

void FUN_10b10f818(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dfcd8;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10b10f888();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x0001052b81d0(&uStack_30);
  return;
}



/* Entry: 10b10f888; end: 10b10f957;  */

void FUN_10b10f888(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b10f958; end: 10b10fa57;  */

void FUN_10b10f958(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [40];
  undefined1 auStack_60 [32];
  
  _objc_retain();
  func_0x00010c135700(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64(auStack_60);
  uVar1 = param_2;
  func_0x00010c252ee0(param_2);
  uVar2 = param_2;
  func_0x00010bf4c940(param_2);
  func_0x00010bf9ff80(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b10fa58(auStack_88);
  func_0x0001052b8f7c(param_1,auStack_60,uVar1,uVar2,auStack_88);
  func_0x000107c27f14(auStack_88);
  _objc_release(param_2);
  func_0x000107c279a4(auStack_60);
  func_0x00010b10fb80();
  func_0x00010b10fb78();
  return;
}



/* Entry: 10b10fa58; end: 10b10fac7;  */

void FUN_10b10fa58(undefined1 *param_1,long param_2)

{
  undefined1 auStack_40 [32];
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[0x20] = 0;
  }
  else {
    FUN_10b49ab5c(auStack_40,param_2);
    func_0x0001052b902c(param_1,auStack_40);
    func_0x000107c278a8(auStack_40);
  }
  FUN_10b10fb78();
  return;
}



/* Entry: 10b10fac8; end: 10b10fb77;  */

void FUN_10b10fac8(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_PTR_1126dfce0;
  _objc_alloc(PTR_PTR_1126dfce0);
  lVar3 = param_1;
  func_0x000107c27f68(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  param_1 = param_1 + 0x30;
  func_0x000107c2be08(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03ef80(puVar2,param_2,lVar3,uVar1,uVar4,param_1);
  func_0x00010b10fb80();
  func_0x00010b10fb78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b10fb78; end: 10b10fb87;  */

void FUN_10b10fb78(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b10fb88; end: 10b10fd0b;  */

void FUN_10b10fb88(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  
  _objc_retain();
  func_0x00010bfe5d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64(auStack_70);
  func_0x00010c27dd80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64(auStack_90);
  uVar1 = param_2;
  func_0x00010c0c6c20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64(auStack_b0);
  uVar2 = param_2;
  func_0x00010bf4d300(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000107c28134();
  func_0x00010bf9c780(param_2);
  func_0x0001052b933c(param_1,auStack_70,auStack_90,auStack_b0,uVar3,param_3 & 0xff,param_2);
  _objc_release(uVar2);
  func_0x000107c279a4(auStack_b0);
  _objc_release(uVar1);
  func_0x000107c279a4(auStack_90);
  func_0x00010b10fe04();
  func_0x000107c279a4(auStack_70);
  func_0x00010b10fe0c();
  func_0x00010b10fdfc();
  return;
}



/* Entry: 10b10fd0c; end: 10b10fdef;  */

void FUN_10b10fd0c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b1058;
  _objc_alloc(PTR_PTR_1126b1058);
  lVar2 = param_1;
  func_0x000107c27f68(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x20;
  func_0x000107c27f68(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x40;
  func_0x000107c27f68(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + 0x60;
  func_0x000107c28138(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b360(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,*(undefined8 *)(param_1 + 0x70));
  FUN_10b10fdf0();
  func_0x00010b10fe04();
  func_0x00010b10fe0c();
  func_0x00010b10fdfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b10fdf0; end: 10b10fe13;  */

void FUN_10b10fdf0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b10fe14; end: 10b10fe63; -[SCNNetworkManagerUrlRequestCppProxy initWithCpp:] */

undefined1 * FUN_10b10fe14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112705df8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_10b110dec((undefined1 *)((long)puVar1 + 0x18),param_3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b10fe64; end: 10b10fedf; -[SCNNetworkManagerUrlRequestCppProxy getUrl] */

void FUN_10b10fe64(void)

{
  undefined1 auStack_38 [24];
  
  func_0x00010b110edc();
  func_0x00010b110f28();
  func_0x000107c27f28(auStack_38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b110eac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b10fee0; end: 10b10ff2b; -[SCNNetworkManagerUrlRequestCppProxy getIsRelativePath] */

void FUN_10b10fee0(void)

{
  long extraout_x8;
  
  func_0x00010b110edc();
  (**(code **)(extraout_x8 + 0x18))();
  return;
}



/* Entry: 10b10ff2c; end: 10b10ff7b; -[SCNNetworkManagerUrlRequestCppProxy getRequestMethod] */

long FUN_10b10ff2c(int param_1)

{
  long extraout_x8;
  
  func_0x00010b110edc();
  (**(code **)(extraout_x8 + 0x20))();
  return (long)param_1;
}



/* Entry: 10b10ff7c; end: 10b10ffcb; -[SCNNetworkManagerUrlRequestCppProxy getRequestType] */

long FUN_10b10ff7c(int param_1)

{
  long extraout_x8;
  
  func_0x00010b110edc();
  (**(code **)(extraout_x8 + 0x28))();
  return (long)param_1;
}



/* Entry: 10b10ffcc; end: 10b110043; -[SCNNetworkManagerUrlRequestCppProxy getHeaders] */

void FUN_10b10ffcc(void)

{
  undefined1 auStack_50 [48];
  
  func_0x00010b110edc();
  func_0x00010b110ef4();
  func_0x00010595bb18(auStack_50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b110ec4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b110044; end: 10b1100bf; -[SCNNetworkManagerUrlRequestCppProxy getPayloadDeprecated] */

void FUN_10b110044(void)

{
  undefined1 auStack_30 [16];
  
  func_0x00010b110edc();
  func_0x00010b110ef4();
  func_0x00010bcc07c0(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b110ed0();
  func_0x000107c27f10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b1100c0; end: 10b110143; -[SCNNetworkManagerUrlRequestCppProxy getPayloadDataRef] */

void FUN_10b1100c0(void)

{
  undefined1 *puVar1;
  undefined1 auStack_38 [24];
  
  func_0x00010b110edc();
  func_0x00010b110f28();
  puVar1 = auStack_38;
  func_0x000107c281d0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f18(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b110144; end: 10b1101bb; -[SCNNetworkManagerUrlRequestCppProxy getPayloadLocalUrl] */

void FUN_10b110144(void)

{
  undefined1 auStack_40 [32];
  
  func_0x00010b110edc();
  func_0x00010b110ef4();
  func_0x000107c27f68(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b110eb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b1101bc; end: 10b110237; -[SCNNetworkManagerUrlRequestCppProxy getPayloadStream] */

void FUN_10b1101bc(void)

{
  undefined1 auStack_30 [16];
  
  func_0x00010b110edc();
  func_0x00010b110ef4();
  FUN_10b49a130(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b110ed0();
  func_0x0001052bb074();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b110238; end: 10b1102af; -[SCNNetworkManagerUrlRequestCppProxy getParameters] */

void FUN_10b110238(void)

{
  undefined1 auStack_50 [48];
  
  func_0x00010b110edc();
  func_0x00010b110ef4();
  func_0x00010595bb18(auStack_50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b110ec4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b1102b0; end: 10b11032b; -[SCNNetworkManagerUrlRequestCppProxy getKey] */

void FUN_10b1102b0(void)

{
  undefined1 auStack_38 [24];
  
  func_0x00010b110edc();
  func_0x00010b110f28();
  func_0x000107c27f28(auStack_38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b110eac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b11032c; end: 10b110377; -[SCNNetworkManagerUrlRequestCppProxy getIsAuthenticated] */

void FUN_10b11032c(void)

{
  long extraout_x8;
  
  func_0x00010b110edc();
  (**(code **)(extraout_x8 + 0x68))();
  return;
}



/* Entry: 10b110378; end: 10b110403; -[SCNNetworkManagerUrlRequestCppProxy getTrackingInfo] */

void FUN_10b110378(void)

{
  undefined1 *puVar1;
  undefined1 auStack_98 [120];
  
  func_0x00010b110edc();
  func_0x00010b110f28();
  puVar1 = auStack_98;
  FUN_10b10fd0c(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001052bb09c(auStack_98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b110404; end: 10b11047b; -[SCNNetworkManagerUrlRequestCppProxy getSwitchboardConfigKey] */

void FUN_10b110404(void)

{
  undefined1 auStack_40 [32];
  
  func_0x00010b110edc();
  func_0x00010b110ef4();
  func_0x000107c27f68(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b110eb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b11047c; end: 10b1104f7; -[SCNNetworkManagerUrlRequestCppProxy getFallbackUrlProvider] */

void FUN_10b11047c(void)

{
  undefined1 auStack_30 [16];
  
  func_0x00010b110edc();
  func_0x00010b110ef4();
  func_0x000107c2ffd0(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b110ed0();
  func_0x000107c27f1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b1104f8; end: 10b110627;  */

void FUN_10b1104f8(void)

{
  undefined8 uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  int extraout_w10;
  ulong unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c350a4();
  if (unaff_x19 == 0) {
    uVar4 = 0x10;
    ___cxa_allocate_exception(0x10);
    func_0x00010527a174();
    ___cxa_throw(uVar4,PTR___ZTISt16invalid_argument_110352248,
                 PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10b1105f8);
    (*pcVar2)();
  }
  _objc_opt_class(PTR_PTR_1126dfce8);
  uVar3 = unaff_x19;
  _objc_opt_isKindOfClass();
  if ((uVar3 & 1) == 0) {
    _objc_retain();
    ppuStack_48 = &PTR_DAT_110cbbe98;
    func_0x000107c316f4(&uStack_40,&ppuStack_48,&stack0xffffffffffffffb0,FUN_10b11072c);
    uVar1 = uStack_38;
    uVar4 = uStack_40;
    uStack_40 = 0;
    uStack_38 = 0;
    func_0x000107c27d28(&uStack_40);
    _objc_release(unaff_x19);
    unaff_x20[1] = uVar1;
    *unaff_x20 = uVar4;
    uStack_60 = 0;
    uStack_58 = 0;
    FUN_10b110ce4(&uStack_60);
  }
  else {
    lVar5 = *(long *)(unaff_x19 + 0x20);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x18);
    unaff_x20[1] = *(undefined8 *)(unaff_x19 + 0x20);
    *unaff_x20 = uVar4;
    if (lVar5 != 0) {
      do {
        func_0x00010b110e88();
      } while (extraout_w10 != 0);
    }
  }
  func_0x00010b110f54();
  return;
}



/* Entry: 10b110628; end: 10b110697;  */

void FUN_10b110628(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_110874d60,&PTR_DAT_110cbbe50,0);
    if (lVar1 == 0) {
      FUN_10b110d0c(param_1);
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



/* Entry: 10b110698; end: 10b1106eb; -[SCNNetworkManagerUrlRequestCppProxy .cxx_destruct] */

void FUN_10b110698(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cbc048;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x0001052ac684((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b1106ec; end: 10b11072b; -[SCNNetworkManagerUrlRequestCppProxy .cxx_construct] */

undefined8 * FUN_10b1106ec(undefined8 *param_1)

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
      func_0x00010b110e88();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b11072c; end: 10b11081f;  */

void FUN_10b11072c(undefined8 *param_1,long *param_2)

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
  *puVar1 = &PTR_FUN_110cbbed8;
  puVar1[3] = &PTR_DAT_110cbbfc0;
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
      func_0x00010b110e88();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  puVar1[3] = &PTR_FUN_110cbbf28;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10b110ce4(&uStack_50);
  return;
}



/* Entry: 10b110820; end: 10b110823;  */

void FUN_10b110820(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbbed8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b110824; end: 10b110837;  */

void FUN_10b110824(void)

{
  FUN_10b110cd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b110838; end: 10b110843;  */

void FUN_10b110838(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  
  func_0x00010b110f20(param_1 + 0x20);
  lVar2 = *(long *)(unaff_x19 + 0x10);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    _objc_retain(lVar2);
    func_0x000107c316fc();
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x10);
  }
  _objc_release(uVar1);
  func_0x000107c27f24();
  func_0x00010b110f18();
  return;
}



/* Entry: 10b110844; end: 10b11087f;  */

void FUN_10b110844(void)

{
  func_0x00010b110f5c();
  return;
}



/* Entry: 10b110880; end: 10b1108c7;  */

void FUN_10b110880(void)

{
  func_0x00010b110e44();
  func_0x00010b110ee8();
  func_0x00010bfcbc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f20();
  func_0x00010b110e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10b1108c8; end: 10b11094b;  */

undefined8 FUN_10b1108c8(undefined8 param_1)

{
  func_0x00010b110f20();
  func_0x00010b110f68();
  func_0x00010bfc6880();
  func_0x00010b110f18();
  return param_1;
}



/* Entry: 10b11094c; end: 10b110993;  */

void FUN_10b11094c(void)

{
  func_0x00010b110e44();
  func_0x00010b110ee8();
  func_0x00010bfc62a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28250();
  func_0x00010b110e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10b110994; end: 10b1109db;  */

void FUN_10b110994(void)

{
  func_0x00010b110e44();
  func_0x00010b110ee8();
  func_0x00010bfc89a0();
  _objc_retainAutoreleasedReturnValue();
  FUN_10b10f098();
  func_0x00010b110e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10b1109dc; end: 10b110a23;  */

void FUN_10b1109dc(void)

{
  func_0x00010b110e44();
  func_0x00010b110ee8();
  func_0x00010bfc8980();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c281cc();
  func_0x00010b110e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10b110a24; end: 10b110a6b;  */

void FUN_10b110a24(void)

{
  func_0x00010b110e44();
  func_0x00010b110ee8();
  func_0x00010bfc89e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64();
  func_0x00010b110e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10b110a6c; end: 10b110ab3;  */

void FUN_10b110a6c(void)

{
  func_0x00010b110e44();
  func_0x00010b110ee8();
  func_0x00010bfc8a20();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105632ee4();
  func_0x00010b110e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10b110ab4; end: 10b110afb;  */

void FUN_10b110ab4(void)

{
  func_0x00010b110e44();
  func_0x00010b110ee8();
  func_0x00010bfc8800();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28250();
  func_0x00010b110e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10b110afc; end: 10b110b43;  */

void FUN_10b110afc(void)

{
  func_0x00010b110e44();
  func_0x00010b110ee8();
  func_0x00010bfc6a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f20();
  func_0x00010b110e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10b110b44; end: 10b110b6f;  */

undefined8 FUN_10b110b44(undefined8 param_1)

{
  func_0x00010b110f20();
  func_0x00010b110f68();
  func_0x00010bfc67e0();
  func_0x00010b110f18();
  return param_1;
}



/* Entry: 10b110b70; end: 10b110bb7;  */

void FUN_10b110b70(void)

{
  func_0x00010b110e44();
  func_0x00010b110ee8();
  func_0x00010bfcb680();
  _objc_retainAutoreleasedReturnValue();
  FUN_10b10fb88();
  func_0x00010b110e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10b110bb8; end: 10b110bff;  */

void FUN_10b110bb8(void)

{
  func_0x00010b110e44();
  func_0x00010b110ee8();
  func_0x00010bfcaf80();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64();
  func_0x00010b110e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10b110c00; end: 10b110c47;  */

void FUN_10b110c00(void)

{
  func_0x00010b110e44();
  func_0x00010b110ee8();
  func_0x00010bfc55a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c2be0c();
  func_0x00010b110e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10b110c48; end: 10b110cd3;  */

void FUN_10b110c48(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  
  func_0x00010b110f20();
  lVar2 = *(long *)(unaff_x19 + 0x10);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    _objc_retain(lVar2);
    func_0x000107c316fc();
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x10);
  }
  _objc_release(uVar1);
  func_0x000107c27f24();
  func_0x00010b110f18();
  return;
}



/* Entry: 10b110cd4; end: 10b110ce3;  */

void FUN_10b110cd4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbbed8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b110ce4; end: 10b110d0b;  */

long FUN_10b110ce4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b110d0c; end: 10b110d7f;  */

void FUN_10b110d0c(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110cbc048;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x00010b110e88();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b110d80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b110ed0();
  func_0x000107c27d28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b110d80; end: 10b110deb;  */

void FUN_10b110d80(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dfce8;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010b110e88();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x0001052ac684(&uStack_30);
  return;
}



/* Entry: 10b110dec; end: 10b110e37;  */

undefined8 * FUN_10b110dec(undefined8 *param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010b110e88();
    } while (extraout_w10 != 0);
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x0001052ac684(&uStack_30);
  return param_1;
}



/* Entry: 10b110e38; end: 10b110f7f;  */

void FUN_10b110e38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10b110f80; end: 10b110ff7; -[SCNNetworkManagerUrlRequestCallbackCppProxy initWithCpp:] */

undefined1 * FUN_10b110f80(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112705e00;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10b111a20();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0001052b81ac(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b110ff8; end: 10b11110f; -[SCNNetworkManagerUrlRequestCallbackCppProxy OnSuccessDeprecated:responseInfo:responseData:] */

long * FUN_10b110ff8(void)

{
  long unaff_x22;
  long *plVar1;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  func_0x00010b111a58();
  func_0x00010b111abc();
  func_0x00010b111aac();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  func_0x00010b111af0(auStack_50);
  func_0x00010b111ab4(auStack_60);
  func_0x000107c31308(auStack_70);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_50,auStack_60,auStack_70);
  func_0x000107c27f10(auStack_70);
  func_0x0001052bc108(auStack_60);
  func_0x0001052ac684(auStack_50);
  func_0x00010b111a48();
  func_0x00010b111a50();
  func_0x00010b111a30();
  return plVar1;
}



/* Entry: 10b111110; end: 10b11121f; -[SCNNetworkManagerUrlRequestCallbackCppProxy onSuccess:responseInfo:responseData:] */

void FUN_10b111110(void)

{
  long unaff_x22;
  long *plVar1;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  func_0x00010b111a58();
  func_0x00010b111abc();
  func_0x00010b111aac();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  func_0x00010b111af0(auStack_50);
  func_0x00010b111ab4(auStack_60);
  func_0x000107c281cc(auStack_78);
  (**(code **)(*plVar1 + 0x18))(plVar1,auStack_50,auStack_60,auStack_78);
  func_0x000107c27f18(auStack_78);
  func_0x0001052bc108(auStack_60);
  func_0x0001052ac684(auStack_50);
  func_0x00010b111a48();
  func_0x00010b111a50();
  func_0x00010b111a30();
  return;
}



/* Entry: 10b111220; end: 10b11130f; -[SCNNetworkManagerUrlRequestCallbackCppProxy OnFailure:responseInfo:] */

void FUN_10b111220(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  _objc_retain(param_3);
  func_0x00010b111abc();
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010b111af0(auStack_40);
  func_0x00010b111ab4(auStack_50);
  (**(code **)(*plVar1 + 0x20))(plVar1,auStack_40,auStack_50);
  func_0x0001052bc108(auStack_50);
  func_0x0001052ac684(auStack_40);
  func_0x00010b111a50();
  func_0x00010b111a30();
  return;
}



/* Entry: 10b111310; end: 10b111443;  */

void FUN_10b111310(undefined8 *param_1,ulong param_2)

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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10b111418);
    (*pcVar2)();
  }
  puVar3 = PTR_PTR_1126dfcf0;
  _objc_opt_class(PTR_PTR_1126dfcf0);
  uVar4 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar3);
  if ((uVar4 & 1) == 0) {
    _objc_retain(param_2);
    ppuStack_48 = &PTR_DAT_110cbc0a0;
    uStack_50 = param_2;
    func_0x000107c316f4(&uStack_40,&ppuStack_48,&uStack_50,FUN_10b111548);
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
    FUN_10b111914(&uStack_60);
  }
  else {
    lVar6 = *(long *)(param_2 + 0x20);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = *(undefined8 *)(param_2 + 0x20);
    *param_1 = uVar5;
    if (lVar6 != 0) {
      do {
        FUN_10b111a20();
      } while (extraout_w10 != 0);
    }
  }
  func_0x00010b111a30();
  return;
}



/* Entry: 10b111444; end: 10b1114b3;  */

void FUN_10b111444(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_1108a2f20,&PTR_DAT_110cbc058,0);
    if (lVar1 == 0) {
      FUN_10b11193c(param_1);
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



/* Entry: 10b1114b4; end: 10b111507; -[SCNNetworkManagerUrlRequestCallbackCppProxy .cxx_destruct] */

void FUN_10b1114b4(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cbc190;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x0001052b81ac((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b111508; end: 10b111547; -[SCNNetworkManagerUrlRequestCallbackCppProxy .cxx_construct] */

undefined8 * FUN_10b111508(undefined8 *param_1)

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
      FUN_10b111a20();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b111548; end: 10b11163b;  */

void FUN_10b111548(undefined8 *param_1,long *param_2)

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
  *puVar1 = &PTR_FUN_110cbc0e0;
  puVar1[3] = &PTR_DAT_110cbc168;
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
      FUN_10b111a20();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  puVar1[3] = &PTR_FUN_110cbc130;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10b111914(&uStack_50);
  return;
}



/* Entry: 10b11163c; end: 10b11163f;  */

void FUN_10b11163c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbc0e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b111640; end: 10b111653;  */

void FUN_10b111640(void)

{
  FUN_10b111904();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b111654; end: 10b11165f;  */

long FUN_10b111654(long param_1)

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
    ppuStack_38 = &PTR_DAT_110cbc0a0;
    func_0x00010b111aac();
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    func_0x00010b111a48();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10b111660; end: 10b11169b;  */

void FUN_10b111660(void)

{
  func_0x00010b111ad0();
  return;
}



/* Entry: 10b11169c; end: 10b111753;  */

undefined8 FUN_10b11169c(void)

{
  undefined8 in_x3;
  
  func_0x00010b111a38();
  func_0x00010b111a8c();
  FUN_10b110628();
  _objc_retainAutoreleasedReturnValue();
  FUN_10b111fe8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcc07c0(in_x3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b111a9c();
  func_0x00010bdc1dc0();
  func_0x00010b111a84();
  func_0x00010b111a48();
  func_0x00010b111a30();
  _objc_autoreleasePoolPop();
  return in_x3;
}



/* Entry: 10b111754; end: 10b1117ff;  */

void FUN_10b111754(void)

{
  undefined8 in_x3;
  
  func_0x00010b111a38();
  func_0x00010b111a8c();
  FUN_10b110628();
  _objc_retainAutoreleasedReturnValue();
  FUN_10b111fe8();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c281d0(in_x3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b111a9c();
  func_0x00010c0e6d20();
  func_0x00010b111a84();
  func_0x00010b111a48();
  func_0x00010b111a30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10b111800; end: 10b111877;  */

void FUN_10b111800(void)

{
  func_0x00010b111a38();
  func_0x00010b111a8c();
  FUN_10b110628();
  _objc_retainAutoreleasedReturnValue();
  FUN_10b111fe8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b111a9c();
  func_0x00010bdc1da0();
  func_0x00010b111a48();
  func_0x00010b111a30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10b111878; end: 10b111903;  */

long FUN_10b111878(long param_1)

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
    ppuStack_38 = &PTR_DAT_110cbc0a0;
    func_0x00010b111aac();
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    func_0x00010b111a48();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10b111904; end: 10b111913;  */

void FUN_10b111904(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbc0e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b111914; end: 10b11193b;  */

long FUN_10b111914(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b11193c; end: 10b1119af;  */

void FUN_10b11193c(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110cbc190;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10b111a20();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b1119b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b111adc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b1119b0; end: 10b111a1f;  */

void FUN_10b1119b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dfcf0;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10b111a20();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x0001052b81ac(&uStack_30);
  return;
}



/* Entry: 10b111a20; end: 10b111aff;  */

void FUN_10b111a20(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b111b00; end: 10b111b77; -[SCNNetworkManagerUrlResponseInfoCppProxy initWithCpp:] */

undefined1 * FUN_10b111b00(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112705e08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x00010b1125d4();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0001052bc108(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b111b78; end: 10b111bcb; -[SCNNetworkManagerUrlResponseInfoCppProxy getResponseCode] */

void FUN_10b111b78(void)

{
  long extraout_x8;
  
  func_0x00010b112628();
  (**(code **)(extraout_x8 + 0x10))();
  return;
}



/* Entry: 10b111bcc; end: 10b111c4b; -[SCNNetworkManagerUrlResponseInfoCppProxy getFinalRespondingUrl] */

void FUN_10b111bcc(void)

{
  undefined1 auStack_38 [24];
  
  func_0x00010b112628();
  func_0x00010b112634();
  func_0x000107c27f28(auStack_38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b112614();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b111c4c; end: 10b111ccb; -[SCNNetworkManagerUrlResponseInfoCppProxy getResponseHeaders] */

void FUN_10b111c4c(void)

{
  undefined1 auStack_48 [40];
  
  func_0x00010b112628();
  func_0x00010b112634();
  func_0x0001056329cc(auStack_48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b112614();
  func_0x000107c278e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b111ccc; end: 10b111d1b; -[SCNNetworkManagerUrlResponseInfoCppProxy getContentLength] */

void FUN_10b111ccc(void)

{
  long extraout_x8;
  
  func_0x00010b112628();
  (**(code **)(extraout_x8 + 0x28))();
  return;
}


