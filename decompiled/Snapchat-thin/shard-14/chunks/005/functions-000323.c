/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b28c898; end: 10b28c8a3;  */

long FUN_10b28c898(long param_1)

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
    ppuStack_38 = &PTR_DAT_110cd0168;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    func_0x00010b28cc90();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10b28c8a4; end: 10b28c8e3;  */

void FUN_10b28c8a4(void)

{
  func_0x00010b28ccb0();
  return;
}



/* Entry: 10b28c8e4; end: 10b28ca43;  */

void FUN_10b28c8e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c27f28(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106e4daa8(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f28(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f28(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001053a21d8(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c281d0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7b60(uVar2);
  _objc_release(param_7);
  func_0x00010b28cca8();
  func_0x00010b28cca0();
  func_0x00010b28cc90();
  func_0x00010b28cc98();
  func_0x00010b28cc88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10b28ca44; end: 10b28cbbb;  */

void FUN_10b28ca44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c27f28(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106e4daa8(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f28(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f28(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001053a21d8(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c281d0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7b00(uVar2);
  func_0x00010b28cca8();
  _objc_release(param_7);
  func_0x00010b28cca0();
  func_0x00010b28cc90();
  func_0x00010b28cc98();
  func_0x00010b28cc88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10b28cbbc; end: 10b28cc4b;  */

long FUN_10b28cbbc(long param_1)

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
    ppuStack_38 = &PTR_DAT_110cd0168;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    func_0x00010b28cc90();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10b28cc4c; end: 10b28cc5b;  */

void FUN_10b28cc4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd01a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b28cc5c; end: 10b28cc87;  */

long FUN_10b28cc5c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b28cc88; end: 10b28ccbb;  */

void FUN_10b28cc88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b28ccbc; end: 10b28cd3b; -[SCNGrpcFlipperLoggerFactory initWithCpp:] */

undefined1 * FUN_10b28ccbc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1127060b8;
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
    func_0x00010b28ce94(&uStack_30);
  }
  return (undefined1 *)puVar4;
}



/* Entry: 10b28cd3c; end: 10b28cdeb; +[SCNGrpcFlipperLoggerFactory setEventLoggerDelegate:] */

void FUN_10b28cd3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  
  _objc_retain(param_3);
  FUN_10b28c6d0(auStack_40,param_3);
  FUN_10b2819dc(auStack_40);
  func_0x00010b2854bc(auStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 10b28cdec; end: 10b28ce47; -[SCNGrpcFlipperLoggerFactory .cxx_destruct] */

void FUN_10b28cdec(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cd0248;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x00010b28ce94((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b28ce48; end: 10b28cebf; -[SCNGrpcFlipperLoggerFactory .cxx_construct] */

undefined8 * FUN_10b28ce48(undefined8 *param_1)

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



/* Entry: 10b28cec0; end: 10b28cf1b; -[SCNGrpcGrpcCallHandle cancel] */

void FUN_10b28cec0(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 10b28cf1c; end: 10b28cf23;  */

void FUN_10b28cf1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10b28cf24; end: 10b28cfa3; -[SCNGrpcGrpcManager initWithCpp:] */

undefined1 * FUN_10b28cf24(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1127060c8;
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
    func_0x00010b28d0a0(&uStack_30);
  }
  return (undefined1 *)puVar4;
}



/* Entry: 10b28cfa4; end: 10b28cff7; +[SCNGrpcGrpcManager enableMetrics] */

void FUN_10b28cfa4(void)

{
  func_0x000107c2c004();
  return;
}



/* Entry: 10b28cff8; end: 10b28d053; -[SCNGrpcGrpcManager .cxx_destruct] */

void FUN_10b28cff8(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cd0268;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x00010b28d0a0((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b28d054; end: 10b28d0cb; -[SCNGrpcGrpcManager .cxx_construct] */

undefined8 * FUN_10b28d054(undefined8 *param_1)

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



/* Entry: 10b28d0cc; end: 10b28d26b;  */

void FUN_10b28d0cc(long param_1,undefined8 param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar3 = PTR_PTR_1126de910;
  _objc_alloc(PTR_PTR_1126de910);
  lVar4 = param_1;
  func_0x000107c27f28();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + 0x18;
  func_0x000107c28138(lVar5);
  _objc_retainAutoreleasedReturnValue();
  iVar2 = *(int *)(param_1 + 0x28);
  lVar6 = param_1 + 0x30;
  func_0x000107c27f68(lVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x50);
  lVar7 = param_1 + 0x58;
  func_0x000107c27f68(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + 0x78;
  func_0x000107c28138();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + 0x88;
  func_0x000107c27f68();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined2 *)(param_1 + 0xa8);
  func_0x000107c28138();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00fe80(puVar3,param_2,lVar4,lVar5,(long)iVar2,lVar6,uVar10,lVar7,lVar8,lVar9,uVar1);
  func_0x000107c35524();
  _objc_release(lVar9);
  func_0x000107c35528();
  _objc_release(lVar7);
  func_0x000107c3552c();
  _objc_release(lVar5);
  func_0x000107c35530();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b28d26c; end: 10b28d2e3; -[SCNGrpcGrpcParametersBuilderCppProxy initWithCpp:] */

undefined1 * FUN_10b28d26c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1127060d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000107c35534();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c27e7c(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b28d2e4; end: 10b28d373; -[SCNGrpcGrpcParametersBuilderCppProxy build] */

void FUN_10b28d2e4(long param_1)

{
  undefined1 auStack_e0 [192];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(auStack_e0);
  FUN_10b28d0cc(auStack_e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b28d480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b28d374; end: 10b28d3cf; -[SCNGrpcGrpcParametersBuilderCppProxy .cxx_destruct] */

void FUN_10b28d374(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cd0390;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000107c27e7c((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b28d3d0; end: 10b28d40f; -[SCNGrpcGrpcParametersBuilderCppProxy .cxx_construct] */

undefined8 * FUN_10b28d3d0(undefined8 *param_1)

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
      func_0x000107c35534();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b28d410; end: 10b28d413;  */

void FUN_10b28d410(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd0300;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b28d414; end: 10b28d427;  */

void FUN_10b28d414(void)

{
  FUN_10b28d464();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b28d428; end: 10b28d463;  */

void FUN_10b28d428(void)

{
  func_0x00010b28d474();
  return;
}



/* Entry: 10b28d464; end: 10b28d493;  */

void FUN_10b28d464(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd0300;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b28d494; end: 10b28d52b;  */

void FUN_10b28d494(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b4ea0;
  _objc_alloc(PTR_PTR_1126b4ea0);
  lVar2 = param_1;
  func_0x000107c27f28(param_1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x18;
  func_0x000107c27f28(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020de0(puVar1,param_2,lVar2,param_1);
  func_0x000107c35540();
  func_0x000107c35544();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b28d52c; end: 10b28d5e3;  */

void FUN_10b28d52c(undefined8 *param_1,long param_2)

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
    ppuStack_38 = &PTR_DAT_110cd03f8;
    lStack_40 = param_2;
    func_0x000107c316f4(&uStack_30,&ppuStack_38,&lStack_40,FUN_10b28d5e4);
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
    FUN_10b28d860(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10b28d5e4; end: 10b28d6e3;  */

void FUN_10b28d5e4(undefined8 *param_1,long *param_2)

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
  *puVar4 = &PTR_FUN_110cd0438;
  puVar4[3] = &PTR_DAT_110cd04b0;
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
  puVar4[3] = &PTR_FUN_110cd0488;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10b28d860(&uStack_50);
  return;
}



/* Entry: 10b28d6e4; end: 10b28d6e7;  */

void FUN_10b28d6e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd0438;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b28d6e8; end: 10b28d6fb;  */

void FUN_10b28d6e8(void)

{
  FUN_10b28d850();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b28d6fc; end: 10b28d707;  */

long FUN_10b28d6fc(long param_1)

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
    ppuStack_38 = &PTR_DAT_110cd03f8;
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



/* Entry: 10b28d708; end: 10b28d747;  */

void FUN_10b28d708(void)

{
  FUN_10b28d88c();
  return;
}



/* Entry: 10b28d748; end: 10b28d7bb;  */

void FUN_10b28d748(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_10b28dd58(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e64e0(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10b28d7bc; end: 10b28d84f;  */

long FUN_10b28d7bc(long param_1)

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
    ppuStack_38 = &PTR_DAT_110cd03f8;
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



/* Entry: 10b28d850; end: 10b28d85f;  */

void FUN_10b28d850(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd0438;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b28d860; end: 10b28d88b;  */

long FUN_10b28d860(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b28d88c; end: 10b28d897;  */

long FUN_10b28d88c(long param_1)

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
    ppuStack_38 = &PTR_DAT_110cd03f8;
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



/* Entry: 10b28d898; end: 10b28d947;  */

void FUN_10b28d898(undefined8 *param_1,long param_2)

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
    ppuStack_38 = &PTR_DAT_110cd0510;
    lStack_40 = param_2;
    func_0x000107c316f4(&uStack_30,&ppuStack_38,&lStack_40,FUN_10b28d948);
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
    FUN_10b28dc64(&uStack_50);
  }
  FUN_10b28dc90();
  return;
}



/* Entry: 10b28d948; end: 10b28da3f;  */

void FUN_10b28d948(undefined8 *param_1,long *param_2)

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
  *puVar4 = &PTR_FUN_110cd0550;
  puVar4[3] = &PTR_DAT_110cd05d0;
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
  func_0x00010b28dc98();
  puVar4[3] = &PTR_FUN_110cd05a0;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10b28dc64(&uStack_50);
  return;
}



/* Entry: 10b28da40; end: 10b28da43;  */

void FUN_10b28da40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd0550;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b28da44; end: 10b28da57;  */

void FUN_10b28da44(void)

{
  FUN_10b28dc54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b28da58; end: 10b28da63;  */

long FUN_10b28da58(long param_1)

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
    ppuStack_38 = &PTR_DAT_110cd0510;
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



/* Entry: 10b28da64; end: 10b28daa3;  */

void FUN_10b28da64(void)

{
  func_0x00010b28dca0();
  return;
}



/* Entry: 10b28daa4; end: 10b28db4b;  */

void FUN_10b28daa4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c281d0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c2c4b0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e3f80(uVar2);
  func_0x00010b28dc98();
  func_0x00010b28dc90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10b28db4c; end: 10b28dbbf;  */

void FUN_10b28db4c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_10b28dd58(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e6120(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10b28dbc0; end: 10b28dc53;  */

long FUN_10b28dbc0(long param_1)

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
    ppuStack_38 = &PTR_DAT_110cd0510;
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



/* Entry: 10b28dc54; end: 10b28dc63;  */

void FUN_10b28dc54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd0550;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b28dc64; end: 10b28dc8f;  */

long FUN_10b28dc64(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b28dc90; end: 10b28dcab;  */

void FUN_10b28dc90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b28dcac; end: 10b28dd57;  */

void FUN_10b28dcac(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c252ee0();
  func_0x00010bf98fc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f20(&uStack_48);
  *param_1 = (int)uVar1;
  *(undefined8 *)(param_1 + 4) = uStack_40;
  *(undefined8 *)(param_1 + 2) = uStack_48;
  *(undefined8 *)(param_1 + 6) = uStack_38;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_48);
  _objc_release(param_2);
  FUN_10b28ddd0();
  return;
}



/* Entry: 10b28dd58; end: 10b28ddcf;  */

void FUN_10b28dd58(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  
  puVar2 = PTR_PTR_1126e0068;
  _objc_alloc(PTR_PTR_1126e0068);
  piVar3 = param_1 + 2;
  iVar1 = *param_1;
  func_0x000107c27f28(piVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04c420(puVar2,param_2,(long)iVar1,piVar3);
  FUN_10b28ddd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b28ddd0; end: 10b28ddd7;  */

void FUN_10b28ddd0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b28ddd8; end: 10b28dff7;  */

void FUN_10b28ddd8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  puVar9 = PTR_PTR_1126e0070;
  _objc_alloc();
  lVar10 = param_1;
  func_0x000107c2c4ac();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  uVar5 = *(undefined8 *)(param_1 + 0xa0);
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  uVar6 = *(undefined8 *)(param_1 + 0xb0);
  uVar17 = *(undefined8 *)(param_1 + 0xb8);
  uVar8 = *(undefined1 *)(param_1 + 0xc0);
  uVar7 = *(undefined4 *)(param_1 + 0xc4);
  lVar11 = param_1 + 200;
  func_0x000107c27f28();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + 0xe0;
  func_0x000107c27f28();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + 0xf8;
  func_0x000107c27f68();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + 0x118;
  func_0x000107c28308();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + 0x120);
  lVar15 = param_1 + 0x128;
  func_0x000107c28308();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + 0x130);
  lVar16 = param_1 + 0x138;
  func_0x000107c27f68();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040a40(puVar9,param_2,lVar10,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar17,uVar8,uVar7,
                      lVar11,lVar12,lVar13,lVar14,uVar18,lVar15,uVar19,lVar16,
                      *(undefined8 *)(param_1 + 0x158),(long)*(int *)(param_1 + 0x160),
                      *(undefined8 *)(param_1 + 0x168));
  FUN_10b28dff8();
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b28dff8; end: 10b28e003;  */

void FUN_10b28dff8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b28e004; end: 10b28e07b; -[SCNGrpcUnaryEventHandlerCppProxy initWithCpp:] */

undefined1 * FUN_10b28e004(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1127060d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000107c35548();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c27e88(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b28e07c; end: 10b28e1cb; -[SCNGrpcUnaryEventHandlerCppProxy onEvent:status:] */

void FUN_10b28e07c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  uint auStack_90 [2];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [24];
  uint auStack_50 [2];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000107c281cc(auStack_68,param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    auStack_90[0] = auStack_90[0] & 0xffffff00;
    uStack_70 = 0;
  }
  else {
    FUN_10b28dcac(auStack_50,param_4);
    auStack_90[0] = auStack_50[0];
    uStack_80 = uStack_40;
    uStack_88 = uStack_48;
    uStack_78 = uStack_38;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_70 = 1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_48);
  }
  func_0x00010b28e2cc();
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_68,auStack_90);
  func_0x000107c2c018(auStack_90);
  func_0x000107c27f18(auStack_68);
  func_0x00010b28e2cc();
  func_0x000107c3554c();
  return;
}



/* Entry: 10b28e1cc; end: 10b28e227; -[SCNGrpcUnaryEventHandlerCppProxy .cxx_destruct] */

void FUN_10b28e1cc(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cd0708;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000107c27e88((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b28e228; end: 10b28e267; -[SCNGrpcUnaryEventHandlerCppProxy .cxx_construct] */

undefined8 * FUN_10b28e228(undefined8 *param_1)

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
      func_0x000107c35548();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b28e268; end: 10b28e26b;  */

void FUN_10b28e268(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd0678;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b28e26c; end: 10b28e27f;  */

void FUN_10b28e26c(void)

{
  FUN_10b28e2bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b28e280; end: 10b28e2bb;  */

void FUN_10b28e280(void)

{
  func_0x00010b28e2d4();
  return;
}



/* Entry: 10b28e2bc; end: 10b28e2df;  */

void FUN_10b28e2bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd0678;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b28e2e0; end: 10b28e3eb; -[SCNGrpcUnifiedGrpcService serverStreamingCall:request:callOptionsBuilder:handler:] */

void FUN_10b28e2e0(void)

{
  long unaff_x23;
  undefined8 uVar1;
  undefined1 auStack_98 [72];
  undefined1 auStack_50 [16];
  
  func_0x000107c3556c();
  func_0x000107c35588();
  func_0x000107c35584();
  func_0x000107c35598();
  uVar1 = *(undefined8 *)(unaff_x23 + 0x18);
  func_0x000107c35574();
  func_0x000107c35594();
  func_0x000107c3559c();
  FUN_10b28d898(auStack_98);
  func_0x000107c35570();
  func_0x00010b28e59c();
  func_0x000107c3557c();
  func_0x000107c3558c();
  func_0x000107c35580();
  func_0x000107c2c4a4(auStack_50);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c35558();
  func_0x000107c35578();
  func_0x000107c35564();
  func_0x000107c35568();
  func_0x000107c35560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b28e3ec; end: 10b28e53b; -[SCNGrpcUnifiedGrpcService bidiStreamingCall:callOptionsBuilder:handler:] */

void FUN_10b28e3ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [16];
  
  _objc_retain(param_3);
  func_0x000107c35588();
  func_0x000107c35584();
  plVar2 = *(long **)(param_1 + 0x18);
  func_0x000107c27f20(auStack_68,param_3);
  func_0x000107c2c4bc(auStack_78,param_4);
  FUN_10b28d898(auStack_88,param_5);
  (**(code **)(*plVar2 + 0x20))(auStack_50,plVar2,auStack_68,auStack_78,auStack_88);
  func_0x00010b28e59c();
  func_0x000107c3557c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  puVar1 = auStack_50;
  FUN_10b28c34c(puVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b28c4f4(auStack_50);
  func_0x000107c35564();
  func_0x000107c35568();
  func_0x000107c35560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b28e53c; end: 10b28e58f; -[SCNGrpcUnifiedGrpcService .cxx_destruct] */

void FUN_10b28e53c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cd0718;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000107c27e90((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b28e590; end: 10b28e5bf;  */

void FUN_10b28e590(void)

{
  return;
}



/* Entry: 10b28e5c0; end: 10b28e673; -[SCNativeDispatchQueue submitWithDelay:delayMs:] */

void FUN_10b28e5c0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10b28e674;
    puStack_50 = &UNK_110842e18;
    _objc_retain(param_3);
    lStack_48 = param_3;
    func_0x00010c0f7fe0((double)param_4 / 1000.0,uVar1,param_2,&puStack_68);
    _objc_release(lStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10b28e674; end: 10b28e67b;  */

void FUN_10b28e674(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c142690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_run_11262e3c0);
  return;
}



/* Entry: 10b28e67c; end: 10b28e687; -[SCNativeDispatchQueue .cxx_destruct] */

void FUN_10b28e67c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b28e688; end: 10b28e6ff; -[SCNativeDispatchTaskWrapper initWithCallback:] */

undefined1 * FUN_10b28e688(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127060f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b28e700; end: 10b28e70b; -[SCNativeDispatchTaskWrapper run] */

void FUN_10b28e700(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b28e708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 10b28e70c; end: 10b28e71b; -[SCNativeDispatchTaskWrapper .cxx_destruct] */

void FUN_10b28e70c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b28e71c; end: 10b28e7e3; +[SCLogViewer sharedManager] */

void FUN_10b28e71c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  uStack_38 = 0x10b28e7a4;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001137f4778 != -1) {
    func_0x000107c27d9c(0x1137f4778,&puStack_48);
  }
  uVar1 = uRam00000001137f4770;
  _objc_retain(uRam00000001137f4770);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b28e7e4; end: 10b28e7ef; +[SCLogViewer isInitialized] */

undefined1 FUN_10b28e7e4(void)

{
  return uRam00000001137f4768;
}



/* Entry: 10b28e7f0; end: 10b28e823; -[SCLogViewer init] */

void FUN_10b28e7f0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127060f8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b28e824; end: 10b28e827; -[SCLogViewer show] */

void FUN_10b28e824(void)

{
  return;
}



/* Entry: 10b28e828; end: 10b28e82f; -[SCLogViewer hidden] */

undefined8 FUN_10b28e828(void)

{
  return 0;
}



/* Entry: 10b28e830; end: 10b28e833; -[SCLogViewer hide] */

void FUN_10b28e830(void)

{
  return;
}



/* Entry: 10b28e834; end: 10b28e837; -[SCLogViewer addLogType:] */

void FUN_10b28e834(void)

{
  return;
}



/* Entry: 10b28e838; end: 10b28e83b; -[SCLogViewer removeLogType:] */

void FUN_10b28e838(void)

{
  return;
}



/* Entry: 10b28e83c; end: 10b28e843; -[SCLogViewer containsLogType:] */

undefined8 FUN_10b28e83c(void)

{
  return 0;
}



/* Entry: 10b28e844; end: 10b28e847; -[SCLogViewer appendLog:logType:] */

void FUN_10b28e844(void)

{
  return;
}



/* Entry: 10b28e848; end: 10b28e84b; -[SCLogViewer appendLog:parameters:logType:] */

void FUN_10b28e848(void)

{
  return;
}



/* Entry: 10b28e84c; end: 10b28e84f; -[SCLogViewer appendLog:parameters:logType:textColor:] */

void FUN_10b28e84c(void)

{
  return;
}



/* Entry: 10b28e850; end: 10b28e853; -[SCLogViewer updateLog:parameters:logType:] */

void FUN_10b28e850(void)

{
  return;
}



/* Entry: 10b28e854; end: 10b28e857; -[SCLogViewer updateLog:parameters:logType:textColor:] */

void FUN_10b28e854(void)

{
  return;
}



/* Entry: 10b28e858; end: 10b28e85b; -[SCLogViewer setUnits:forLogType:] */

void FUN_10b28e858(void)

{
  return;
}



/* Entry: 10b28e85c; end: 10b28e863; -[SCLogViewer appendNewLineGraphPoint:logType:] */

void FUN_10b28e85c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendNewLineGraphPoint_logType__11259f518,param_3,param_4,0);
  return;
}



/* Entry: 10b28e864; end: 10b28e867; -[SCLogViewer appendNewLineGraphPoint:logType:series:] */

void FUN_10b28e864(void)

{
  return;
}



/* Entry: 10b28e868; end: 10b28e86b; -[SCLogViewer appendNewLineGraphDiscreteEvent:logType:] */

void FUN_10b28e868(void)

{
  return;
}



/* Entry: 10b28e86c; end: 10b28e86f; -[SCLogViewer clear] */

void FUN_10b28e86c(void)

{
  return;
}



/* Entry: 10b28e870; end: 10b28e96b; -[SCLogViewer _topViewControllerFromViewController:] */

void FUN_10b28e870(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  do {
    if (param_3 == 0) {
LAB_10b28e958:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
      return;
    }
    uVar1 = param_3;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar3 = param_3;
    if (uVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
      _objc_opt_class(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
      uVar1 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar2);
      if ((uVar1 & 1) == 0) {
        puVar2 = PTR__OBJC_CLASS___UITabBarController_1126d5098;
        _objc_opt_class(PTR__OBJC_CLASS___UITabBarController_1126d5098);
        uVar1 = param_3;
        _objc_opt_isKindOfClass(param_3,puVar2);
        if ((uVar1 & 1) == 0) goto LAB_10b28e958;
        func_0x00010c15a480();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c2a0180();
        _objc_retainAutoreleasedReturnValue();
      }
      if (uVar3 == param_3) {
        _objc_retain(param_3);
        _objc_release(uVar3);
        _objc_release(param_3);
        goto LAB_10b28e958;
      }
    }
    else {
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(param_3);
    param_3 = uVar3;
  } while( true );
}



/* Entry: 10b28e96c; end: 10b28e973; -[SCLogViewer _presentingViewControllerForAlert] */

undefined8 FUN_10b28e96c(void)

{
  return 0;
}



/* Entry: 10b28e974; end: 10b28e977; -[SCLogViewer _presentAlertWithTitle:message:] */

void FUN_10b28e974(void)

{
  return;
}



/* Entry: 10b28e978; end: 10b28e97b; -[SCLogViewer setMinimizedText:] */

void FUN_10b28e978(void)

{
  return;
}



/* Entry: 10b28e97c; end: 10b28e97f; -[SCLogViewer handleFavoriteButtonClick] */

void FUN_10b28e97c(void)

{
  return;
}



/* Entry: 10b28e980; end: 10b28e983; -[SCLogViewer updateFavoriteButtonOnTextChange] */

void FUN_10b28e980(void)

{
  return;
}



/* Entry: 10b28e984; end: 10b28e987; -[SCLogViewer togglePicker:] */

void FUN_10b28e984(void)

{
  return;
}


