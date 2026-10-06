/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1062d8e28; end: 1062d8edf;  */

void FUN_1062d8e28(undefined8 *param_1,long param_2)

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
    ppuStack_38 = &PTR_DAT_11091b040;
    lStack_40 = param_2;
    func_0x0001000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_1062d8ee0);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x0001000df524(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_1062d9194(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1062d8ee0; end: 1062d8fdb;  */

void FUN_1062d8ee0(undefined8 *param_1,long *param_2)

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
  *puVar4 = &PTR_FUN_11091b080;
  puVar4[3] = &PTR_DAT_11091b100;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x0001000de520();
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
  puVar4[3] = &PTR_FUN_11091b0d0;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_1062d9194(&uStack_50);
  return;
}



/* Entry: 1062d8fdc; end: 1062d8fdf;  */

void FUN_1062d8fdc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11091b080;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1062d8fe0; end: 1062d8ff3;  */

void FUN_1062d8fe0(void)

{
  FUN_1062d9184();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1062d8ff4; end: 1062d8fff;  */

long FUN_1062d8ff4(long param_1)

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
    ppuStack_38 = &PTR_DAT_11091b040;
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



/* Entry: 1062d9000; end: 1062d903f;  */

void FUN_1062d9000(void)

{
  func_0x0001062d91e8();
  return;
}



/* Entry: 1062d9040; end: 1062d9097;  */

void FUN_1062d9040(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar1;
  
  func_0x0001062d91dc();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  FUN_1062d9330();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e3080(uVar1,param_2,unaff_x20);
  func_0x0001062d91c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 1062d9098; end: 1062d90ef;  */

void FUN_1062d9098(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar1;
  
  func_0x0001062d91dc();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  func_0x0001001011a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e5320(uVar1,param_2,unaff_x20);
  func_0x0001062d91c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 1062d90f0; end: 1062d9183;  */

long FUN_1062d90f0(long param_1)

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
    ppuStack_38 = &PTR_DAT_11091b040;
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



/* Entry: 1062d9184; end: 1062d9193;  */

void FUN_1062d9184(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11091b080;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1062d9194; end: 1062d91bf;  */

long FUN_1062d9194(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1062d91c0; end: 1062d91f3;  */

void FUN_1062d91c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1062d91f4; end: 1062d926b; -[SCNInspectorInspectorChannelConnection initWithCpp:] */

undefined1 * FUN_1062d91f4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126f0d08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_1062d950c();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_1062d94e0(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1062d926c; end: 1062d932f; -[SCNInspectorInspectorChannelConnection send:] */

void FUN_1062d926c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_48 [24];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x0001000fbca4(auStack_48,param_3);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1062d9330; end: 1062d935b;  */

void FUN_1062d9330(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1062d93f4();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062d935c; end: 1062d93af; -[SCNInspectorInspectorChannelConnection .cxx_destruct] */

void FUN_1062d935c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_11091b120;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  FUN_1062d94e0((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 1062d93b0; end: 1062d93f3; -[SCNInspectorInspectorChannelConnection .cxx_construct] */

undefined8 * FUN_1062d93b0(undefined8 *param_1)

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
      FUN_1062d950c();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 1062d93f4; end: 1062d946b;  */

void FUN_1062d93f4(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_11091b120;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_1062d950c();
    } while (extraout_w10 != 0);
  }
  func_0x00010015c218(&ppuStack_28,&uStack_40,FUN_1062d946c);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001062d9528();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062d946c; end: 1062d94df;  */

void FUN_1062d946c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126c97a8;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_1062d950c();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_1062d94e0(&uStack_30);
  return;
}



/* Entry: 1062d94e0; end: 1062d950b;  */

long FUN_1062d94e0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1062d950c; end: 1062d9533;  */

void FUN_1062d950c(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1062d9534; end: 1062d95ab; -[SCNInspectorInspectorManager initWithCpp:] */

undefined1 * FUN_1062d9534(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126f0d10;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x0001062d9d0c();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_1062d9c90(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1062d95ac; end: 1062d9623; +[SCNInspectorInspectorManager create] */

void FUN_1062d95ac(void)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010b215f4c(&uStack_30);
  FUN_1062d9a88(uStack_30,uStack_28);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001062d9d1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062d9624; end: 1062d96f7; +[SCNInspectorInspectorManager createWithOptions:] */

void FUN_1062d9624(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [184];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  FUN_1062d9db8(auStack_f8,param_3);
  func_0x00010b2160b0(&uStack_40,auStack_f8);
  func_0x0001062d9b94(auStack_f8);
  FUN_1062d9a88(uStack_40,uStack_38);
  uVar1 = uStack_40;
  _objc_retainAutoreleasedReturnValue();
  FUN_1062d9c90(&uStack_40);
  FUN_1062d9cfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062d96f8; end: 1062d97cb; -[SCNInspectorInspectorManager enable:observer:] */

void FUN_1062d96f8(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [88];
  
  func_0x0001062d9d30();
  _objc_retain();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  FUN_1062d88c0(auStack_88);
  FUN_1062da198(auStack_98);
  func_0x0001062d9d58(*(undefined8 *)(*plVar1 + 0x10));
  func_0x0001062d9cb4(auStack_98);
  func_0x0001062d9bfc(auStack_88);
  func_0x0001062d9d50();
  func_0x0001062d9cfc();
  return;
}



/* Entry: 1062d97cc; end: 1062d987f; -[SCNInspectorInspectorManager start:] */

void FUN_1062d97cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_40 [16];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_1062da198(auStack_40,param_3);
  (**(code **)(*plVar1 + 0x18))(plVar1,auStack_40);
  func_0x0001062d9cb4(auStack_40);
  FUN_1062d9cfc();
  return;
}



/* Entry: 1062d9880; end: 1062d98d7; -[SCNInspectorInspectorManager disable] */

void FUN_1062d9880(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  return;
}



/* Entry: 1062d98d8; end: 1062d992f; -[SCNInspectorInspectorManager tick] */

void FUN_1062d98d8(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x28))();
  return;
}



/* Entry: 1062d9930; end: 1062d9a03; -[SCNInspectorInspectorManager connect:channel:] */

void FUN_1062d9930(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [24];
  
  func_0x0001062d9d30();
  _objc_retain();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x0001000fbca4(auStack_48);
  FUN_1062d8e28(auStack_58);
  func_0x0001062d9d58(*(undefined8 *)(*plVar1 + 0x30));
  func_0x0001062d9cd8(auStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  func_0x0001062d9d50();
  func_0x0001062d9cfc();
  return;
}



/* Entry: 1062d9a04; end: 1062d9a87; -[SCNInspectorInspectorManager getConnectionParamsQrCode] */

void FUN_1062d9a04(long param_1)

{
  undefined1 auStack_30 [16];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x38))(auStack_30);
  func_0x000100837700(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001062d9d88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1062d9a88; end: 1062d9aff;  */

void FUN_1062d9a88(long param_1,long param_2)

{
  int extraout_w10;
  undefined8 unaff_x19;
  long lStack_38;
  long lStack_30;
  undefined **ppuStack_28;
  
  if (param_1 == 0) {
    unaff_x19 = 0;
  }
  else {
    ppuStack_28 = &PTR_DAT_11091b130;
    lStack_38 = param_1;
    lStack_30 = param_2;
    if (param_2 != 0) {
      do {
        func_0x0001062d9d0c();
      } while (extraout_w10 != 0);
    }
    func_0x00010015c218(&ppuStack_28,&lStack_38,FUN_1062d9c28);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001062d9d7c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 1062d9b00; end: 1062d9b53; -[SCNInspectorInspectorManager .cxx_destruct] */

void FUN_1062d9b00(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_11091b130;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  FUN_1062d9c90((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 1062d9b54; end: 1062d9c27; -[SCNInspectorInspectorManager .cxx_construct] */

undefined8 * FUN_1062d9b54(undefined8 *param_1)

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
      func_0x0001062d9d0c();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 1062d9c28; end: 1062d9c8f;  */

void FUN_1062d9c28(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126c97b0;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x0001062d9d0c();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_1062d9c90(&uStack_30);
  return;
}



/* Entry: 1062d9c90; end: 1062d9cfb;  */

void FUN_1062d9c90(long param_1)

{
  func_0x0001062d9dac();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1062d9cfc; end: 1062d9db7;  */

void FUN_1062d9cfc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1062d9db8; end: 1062da083;  */

void FUN_1062d9db8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [40];
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [40];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c0cfd40(param_2);
  uVar2 = param_2;
  func_0x00010c104060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001004a2160();
  uVar4 = param_2;
  func_0x00010c087500();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100114864(auStack_88);
  uVar5 = param_2;
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100114864(auStack_a8);
  uVar6 = param_2;
  func_0x00010c2908c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010011c84c();
  uVar8 = param_2;
  func_0x00010bfb22e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100114864(auStack_c8);
  uVar9 = param_2;
  func_0x00010bf107c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100626d7c(auStack_f0);
  uVar10 = param_2;
  func_0x00010bf107e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (uVar10 == 0) {
    uStack_100 = 0;
    uStack_f8 = 0;
  }
  else {
    FUN_1062d8ac4(&uStack_100,uVar10);
  }
  FUN_1062da190();
  uVar10 = param_2;
  func_0x00010c298260();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010011c84c();
  FUN_1062da084(param_1,uVar1,uVar3 & 0xffffffffff,auStack_88,auStack_a8,uVar7 & 0xffff,auStack_c8,
                auStack_f0,&uStack_100,uVar11 & 0xffff);
  _objc_release(uVar10);
  func_0x0001062d9bd8(&uStack_100);
  FUN_1062da190();
  func_0x00010028ad98(auStack_f0);
  _objc_release(uVar9);
  func_0x0001001148fc(auStack_c8);
  _objc_release(uVar8);
  _objc_release(uVar6);
  func_0x0001001148fc(auStack_a8);
  _objc_release(uVar5);
  func_0x0001001148fc(auStack_88);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 1062da084; end: 1062da093;  */

undefined4 *
FUN_1062da084(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5,undefined2 param_6,undefined8 *param_7,undefined8 param_8,
             undefined8 *param_9,undefined2 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 1) = param_3;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  if (*(char *)(param_4 + 3) == '\x01') {
    uVar2 = param_4[1];
    uVar1 = *param_4;
    *(undefined8 *)(param_1 + 8) = param_4[2];
    *(undefined8 *)(param_1 + 6) = uVar2;
    *(undefined8 *)(param_1 + 4) = uVar1;
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  if (*(char *)(param_5 + 3) == '\x01') {
    uVar2 = param_5[1];
    uVar1 = *param_5;
    *(undefined8 *)(param_1 + 0x10) = param_5[2];
    *(undefined8 *)(param_1 + 0xe) = uVar2;
    *(undefined8 *)(param_1 + 0xc) = uVar1;
    param_5[1] = 0;
    param_5[2] = 0;
    *param_5 = 0;
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined2 *)(param_1 + 0x14) = param_6;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  if (*(char *)(param_7 + 3) == '\x01') {
    uVar2 = param_7[1];
    uVar1 = *param_7;
    *(undefined8 *)(param_1 + 0x1a) = param_7[2];
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    *(undefined8 *)(param_1 + 0x16) = uVar1;
    param_7[1] = 0;
    param_7[2] = 0;
    *param_7 = 0;
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  func_0x00010028acf0(param_1 + 0x1e,param_8);
  uVar1 = *param_9;
  *(undefined8 *)(param_1 + 0x2a) = param_9[1];
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *param_9 = 0;
  param_9[1] = 0;
  *(undefined2 *)(param_1 + 0x2c) = param_10;
  return param_1;
}



/* Entry: 1062da094; end: 1062da18f;  */

undefined4 *
FUN_1062da094(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5,undefined2 param_6,undefined8 *param_7,undefined8 param_8,
             undefined8 *param_9,undefined2 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 1) = param_3;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  if (*(char *)(param_4 + 3) == '\x01') {
    uVar2 = param_4[1];
    uVar1 = *param_4;
    *(undefined8 *)(param_1 + 8) = param_4[2];
    *(undefined8 *)(param_1 + 6) = uVar2;
    *(undefined8 *)(param_1 + 4) = uVar1;
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  if (*(char *)(param_5 + 3) == '\x01') {
    uVar2 = param_5[1];
    uVar1 = *param_5;
    *(undefined8 *)(param_1 + 0x10) = param_5[2];
    *(undefined8 *)(param_1 + 0xe) = uVar2;
    *(undefined8 *)(param_1 + 0xc) = uVar1;
    param_5[1] = 0;
    param_5[2] = 0;
    *param_5 = 0;
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined2 *)(param_1 + 0x14) = param_6;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  if (*(char *)(param_7 + 3) == '\x01') {
    uVar2 = param_7[1];
    uVar1 = *param_7;
    *(undefined8 *)(param_1 + 0x1a) = param_7[2];
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    *(undefined8 *)(param_1 + 0x16) = uVar1;
    param_7[1] = 0;
    param_7[2] = 0;
    *param_7 = 0;
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  func_0x00010028acf0(param_1 + 0x1e,param_8);
  uVar1 = *param_9;
  *(undefined8 *)(param_1 + 0x2a) = param_9[1];
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *param_9 = 0;
  param_9[1] = 0;
  *(undefined2 *)(param_1 + 0x2c) = param_10;
  return param_1;
}



/* Entry: 1062da190; end: 1062da197;  */

void FUN_1062da190(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1062da198; end: 1062da24f;  */

void FUN_1062da198(undefined8 *param_1,long param_2)

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
    ppuStack_38 = &PTR_DAT_11091b198;
    lStack_40 = param_2;
    func_0x0001000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_1062da250);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x0001000df524(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_1062da520(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1062da250; end: 1062da34f;  */

void FUN_1062da250(undefined8 *param_1,long *param_2)

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
  *puVar4 = &PTR_FUN_11091b1d8;
  puVar4[3] = &PTR_DAT_11091b260;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x0001000de520();
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
  puVar4[3] = &PTR_FUN_11091b228;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_1062da520(&uStack_50);
  return;
}



/* Entry: 1062da350; end: 1062da353;  */

void FUN_1062da350(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11091b1d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1062da354; end: 1062da367;  */

void FUN_1062da354(void)

{
  FUN_1062da510();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1062da368; end: 1062da373;  */

void FUN_1062da368(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  FUN_1062da54c(param_1);
  lVar2 = *(long *)(unaff_x19 + 0x10);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    _objc_retain(lVar2);
    func_0x0001005f2030();
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x10);
  }
  _objc_release(uVar1);
  func_0x0001005f2294();
  _objc_autoreleasePoolPop(param_1);
  return;
}



/* Entry: 1062da374; end: 1062da3b3;  */

void FUN_1062da374(void)

{
  func_0x0001062da554();
  return;
}



/* Entry: 1062da3b4; end: 1062da427;  */

void FUN_1062da3b4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x0001001011a4(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e6380(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 1062da428; end: 1062da47f;  */

void FUN_1062da428(undefined8 param_1)

{
  long unaff_x19;
  
  FUN_1062da54c();
  func_0x00010c0e30c0(*(undefined8 *)(unaff_x19 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 1062da480; end: 1062da50f;  */

void FUN_1062da480(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  
  FUN_1062da54c();
  lVar2 = *(long *)(unaff_x19 + 0x10);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    _objc_retain(lVar2);
    func_0x0001005f2030();
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x10);
  }
  _objc_release(uVar1);
  func_0x0001005f2294();
  _objc_autoreleasePoolPop(param_1);
  return;
}



/* Entry: 1062da510; end: 1062da51f;  */

void FUN_1062da510(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11091b1d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1062da520; end: 1062da54b;  */

long FUN_1062da520(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1062da54c; end: 1062da55f;  */

void FUN_1062da54c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPush_11034d1d8)();
  return;
}



/* Entry: 1062da560; end: 1062da6b3; -[SCNInspectorEnableInspectorRequest initWithMode:port:label:host:useSecurityKey:] */

undefined1 *
FUN_1062da560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f0d18;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1062da6b4; end: 1062da6bb; -[SCNInspectorEnableInspectorRequest mode] */

undefined8 FUN_1062da6b4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1062da6bc; end: 1062da6c3; -[SCNInspectorEnableInspectorRequest port] */

undefined8 FUN_1062da6bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1062da6c4; end: 1062da6cb; -[SCNInspectorEnableInspectorRequest label] */

undefined8 FUN_1062da6c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1062da6cc; end: 1062da6d3; -[SCNInspectorEnableInspectorRequest host] */

undefined8 FUN_1062da6cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1062da6d4; end: 1062da6db; -[SCNInspectorEnableInspectorRequest useSecurityKey] */

undefined8 FUN_1062da6d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1062da6dc; end: 1062da717; -[SCNInspectorEnableInspectorRequest .cxx_destruct] */

void FUN_1062da6dc(long param_1)

{
  FUN_1062da718(param_1 + 0x28);
  FUN_1062da718(param_1 + 0x20);
  FUN_1062da718(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1062da718; end: 1062da71f;  */

void FUN_1062da718(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 1062da720; end: 1062da93b; -[SCNInspectorInspectorOptions initWithMode:port:label:host:useSecurityKey:fixedSecurityKey:authHeaders:authHeadersProvider:verboseLogging:] */

undefined8 *
FUN_1062da720(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f0d20;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_3;
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    func_0x0001062da9e8(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    func_0x0001062da9e8(uVar3);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    func_0x0001062da9e8(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    func_0x0001062da9e8(uVar3);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 1062da93c; end: 1062da943; -[SCNInspectorInspectorOptions mode] */

undefined8 FUN_1062da93c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1062da944; end: 1062da94b; -[SCNInspectorInspectorOptions port] */

undefined8 FUN_1062da944(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1062da94c; end: 1062da953; -[SCNInspectorInspectorOptions label] */

undefined8 FUN_1062da94c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1062da954; end: 1062da95b; -[SCNInspectorInspectorOptions host] */

undefined8 FUN_1062da954(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1062da95c; end: 1062da963; -[SCNInspectorInspectorOptions useSecurityKey] */

undefined8 FUN_1062da95c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1062da964; end: 1062da96b; -[SCNInspectorInspectorOptions fixedSecurityKey] */

undefined8 FUN_1062da964(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1062da96c; end: 1062da973; -[SCNInspectorInspectorOptions authHeaders] */

undefined8 FUN_1062da96c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1062da974; end: 1062da97b; -[SCNInspectorInspectorOptions authHeadersProvider] */

undefined8 FUN_1062da974(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1062da97c; end: 1062da983; -[SCNInspectorInspectorOptions verboseLogging] */

undefined8 FUN_1062da97c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1062da984; end: 1062da9df; -[SCNInspectorInspectorOptions .cxx_destruct] */

void FUN_1062da984(long param_1)

{
  FUN_1062da9e0(param_1 + 0x48);
  FUN_1062da9e0(param_1 + 0x40);
  FUN_1062da9e0(param_1 + 0x38);
  FUN_1062da9e0(param_1 + 0x30);
  FUN_1062da9e0(param_1 + 0x28);
  FUN_1062da9e0(param_1 + 0x20);
  FUN_1062da9e0(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1062da9e0; end: 1062da9ef;  */

void FUN_1062da9e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 1062da9f0; end: 1062da9fb; -[SCFeatureSettingsService hasSeenHelperTooltipForStory] */

void FUN_1062da9f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e492d8);
  return;
}



/* Entry: 1062da9fc; end: 1062daa07; -[SCFeatureSettingsService seenHelperTooltipForStoryServerParam] */

undefined ** FUN_1062da9fc(void)

{
  return &PTR____CFConstantStringClassReference_110e492d8;
}



/* Entry: 1062daa08; end: 1062daa17; -[SCFeatureSettingsService setSeenHelperTooltipForStory:] */

void FUN_1062daa08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e492d8,param_3);
  return;
}



/* Entry: 1062daa18; end: 1062daa1f; -[SCFeatureSettingsService pay_to_promote_button_tooltip_highlight_seen_client_value:] */

undefined * FUN_1062daa18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 1062daa20; end: 1062daa27; -[SCFeatureSettingsService pay_to_promote_button_tooltip_highlight_seen_server_value:] */

void FUN_1062daa20(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1062daa28; end: 1062daa37; -[SCFeatureSettingsService seenHelperTooltipForStory] */

void FUN_1062daa28(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e492d8,0);
  return;
}



/* Entry: 1062daa38; end: 1062daa43; -[SCFeatureSettingsService hasSeenHelperTooltipForHighlight] */

void FUN_1062daa38(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e492f8);
  return;
}



/* Entry: 1062daa44; end: 1062daa4f; -[SCFeatureSettingsService seenHelperTooltipForHighlightServerParam] */

undefined ** FUN_1062daa44(void)

{
  return &PTR____CFConstantStringClassReference_110e492f8;
}



/* Entry: 1062daa50; end: 1062daa5f; -[SCFeatureSettingsService setSeenHelperTooltipForHighlight:] */

void FUN_1062daa50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e492f8,param_3);
  return;
}



/* Entry: 1062daa60; end: 1062daa67; -[SCFeatureSettingsService pay_to_promote_button_tooltip_story_seen_client_value:] */

undefined * FUN_1062daa60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 1062daa68; end: 1062daa6f; -[SCFeatureSettingsService pay_to_promote_button_tooltip_story_seen_server_value:] */

void FUN_1062daa68(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1062daa70; end: 1062daa7f; -[SCFeatureSettingsService seenHelperTooltipForHighlight] */

void FUN_1062daa70(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e492f8,0);
  return;
}



/* Entry: 1062daa80; end: 1062daa8b; -[SCFeatureSettingsService hasSeenHelperTooltipForSpotlight] */

void FUN_1062daa80(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e49318);
  return;
}



/* Entry: 1062daa8c; end: 1062daa97; -[SCFeatureSettingsService seenHelperTooltipForSpotlightServerParam] */

undefined ** FUN_1062daa8c(void)

{
  return &PTR____CFConstantStringClassReference_110e49318;
}



/* Entry: 1062daa98; end: 1062daaa7; -[SCFeatureSettingsService setSeenHelperTooltipForSpotlight:] */

void FUN_1062daa98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e49318,param_3);
  return;
}



/* Entry: 1062daaa8; end: 1062daaaf; -[SCFeatureSettingsService pay_to_promote_button_tooltip_spotlight_seen_client_value:] */

undefined * FUN_1062daaa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 1062daab0; end: 1062daab7; -[SCFeatureSettingsService pay_to_promote_button_tooltip_spotlight_seen_server_value:] */

void FUN_1062daab0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1062daab8; end: 1062daac7; -[SCFeatureSettingsService seenHelperTooltipForSpotlight] */

void FUN_1062daab8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e49318,0);
  return;
}



/* Entry: 1062daac8; end: 1062dac1b; -[SCOperaPayToPromoteButtonLayerView init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1062daac8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f0d28;
  uStack_50 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_50,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_11274534c;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c219b60(uVar4);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    FUN_1062df300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(uVar5);
    _objc_release(uVar4);
    func_0x00010c20eaa0(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar6));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112745350) = 0;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112745354) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1062dac1c; end: 1062dadcb; -[SCOperaPayToPromoteButtonLayerView setupViewForLayer:page:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062dac1c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c2bec60(param_4);
  *(undefined8 *)(param_2 + _DAT_112745358) = param_1;
  uVar1 = param_4;
  func_0x00010c08ce40();
  *(char *)(param_2 + _DAT_11274535c) = (char)uVar1;
  lVar5 = param_5;
  func_0x00010c1070e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  *(bool *)(param_2 + _DAT_112745360) = lVar5 != 0;
  _objc_release(lVar5);
  uVar1 = param_4;
  func_0x00010c07b480();
  *(char *)(param_2 + _DAT_112745364) = (char)uVar1;
  uVar1 = param_4;
  func_0x00010bf021e0();
  *(char *)(param_2 + _DAT_112745368) = (char)uVar1;
  func_0x00010c2747c0(param_4);
  *(undefined8 *)(param_2 + _DAT_11274536c) = param_1;
  uVar1 = param_4;
  func_0x00010c262fa0();
  *(char *)(param_2 + _DAT_112745370) = (char)uVar1;
  uVar1 = param_4;
  func_0x00010c07f420();
  *(char *)(param_2 + _DAT_112745374) = (char)uVar1;
  uVar1 = param_4;
  func_0x00010c06b5c0();
  *(char *)(param_2 + _DAT_112745378) = (char)uVar1;
  uVar1 = param_4;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11274537c;
  uVar4 = *(undefined8 *)(param_2 + lVar5);
  *(undefined8 *)(param_2 + lVar5) = uVar1;
  _objc_release(uVar4);
  uVar1 = param_4;
  func_0x00010beff960();
  _objc_release(param_4);
  *(char *)(param_2 + _DAT_112745380) = (char)uVar1;
  puVar2 = *(undefined **)(param_2 + lVar5);
  if (puVar2 == (undefined *)0x0) {
    *(undefined1 *)(param_2 + _DAT_112745384) = 0;
  }
  else {
    func_0x00010c247520();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == PTR_PTR_1133e0b78) {
      bVar3 = 0;
    }
    else {
      lVar5 = param_2;
      func_0x00010c073920();
      bVar3 = (byte)lVar5 ^ 1;
    }
    *(byte *)(param_2 + _DAT_112745384) = bVar3;
    _objc_release(puVar2);
  }
  func_0x00010bed4640(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 1062dadcc; end: 1062daebf; -[SCOperaPayToPromoteButtonLayerView updateViewYOffset:animated:] */

void FUN_1062dadcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_80;
  _objc_initWeak(auStack_48,param_2);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1062daec0;
  puStack_68 = &UNK_11085da78;
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_50 = (undefined1)param_4;
  uStack_58 = param_1;
  _objc_retainBlock();
  if (param_4 == 0) {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  }
  else {
    func_0x00010bf03400(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20);
  }
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1062daec0; end: 1062daf1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062daec0(long param_1)

{
  char cVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + _DAT_112745358) = *(undefined8 *)(param_1 + 0x28);
    cVar1 = *(char *)(param_1 + 0x30);
    func_0x00010c1cbe20(lVar2);
    if (cVar1 == '\x01') {
      func_0x00010c08cdc0(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1062daf1c; end: 1062dafab; -[SCOperaPayToPromoteButtonLayerView animateVisibility:duration:] */

void FUN_1062daf1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  func_0x00010c21e900(param_2,param_3,param_4 ^ 1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1062dafac;
  puStack_48 = &UNK_110845ce0;
  uStack_38 = (undefined1)param_4;
  uStack_40 = param_2;
  func_0x00010bf03440(param_1,0,PTR__OBJC_CLASS___UIView_1126aec20,param_3,4,&puStack_60,0);
  return;
}



/* Entry: 1062dafac; end: 1062dafc7;  */

void FUN_1062dafac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar1 = 0x3ff0000000000000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1062dafc8; end: 1062db097; -[SCOperaPayToPromoteButtonLayerView updateYOffset:] */

void FUN_1062dafc8(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = param_5;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar2 = param_4;
  _objc_release(uVar1);
  if ((param_1 != 0.0) && (param_4 != 0.0)) {
    uVar1 = param_5;
    func_0x00010c262ca0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    param_1 = param_1 / dVar2;
    _objc_release(uVar1);
    func_0x00010c1677c0(param_5);
    func_0x00010bf01b40(param_5);
    if (param_1 < 0.1) {
      param_1 = 0.0;
      func_0x00010c1677c0(param_5);
    }
    func_0x00010bf01b40(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010c21e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_5,PTR_s_setUserInteractionEnabled__112665468,0.0 < param_1);
    return;
  }
  return;
}



/* Entry: 1062db098; end: 1062db3f3; -[SCOperaPayToPromoteButtonLayerView showTooltipWithMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062db098(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf84780(param_1);
  func_0x00010bee6800();
  puVar1 = PTR_PTR_1126b09c0;
  _objc_alloc();
  func_0x00010c051640();
  _objc_release(param_3);
  lVar13 = (long)_DAT_112745388;
  uVar2 = *(undefined8 *)(param_1 + lVar13);
  *(undefined **)(param_1 + lVar13) = puVar1;
  _objc_release(uVar2);
  func_0x00010c1798c0(*(undefined8 *)(param_1 + lVar13),param_2,1);
  lVar10 = (long)_DAT_11274538c;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      *(undefined8 *)(param_1 + lVar10));
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar14 = (long)_DAT_11274534c;
  func_0x00010c10c740(0x4014000000000000,*(undefined8 *)(param_1 + lVar13),param_2,
                      *(undefined8 *)(param_1 + lVar14));
  lVar11 = param_1;
  func_0x00010bee6800();
  uVar2 = *(undefined8 *)(param_1 + lVar13);
  if ((int)lVar11 == 0) {
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar14);
    func_0x00010c1408a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf49520(0,uVar2,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = 0;
    puVar9 = &uStack_78;
    uStack_78 = uVar4;
  }
  else {
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar14);
    func_0x00010c08e400(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf49480(0,uVar2,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = &uStack_70;
    uVar12 = 2;
    uStack_70 = uVar4;
  }
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,puVar9,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar13),param_2,uVar12);
  uVar12 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010bf1ff80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar12;
  func_0x00010bf493c0(0x4028000000000000,uVar12,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar13);
  uStack_88 = uVar2;
  func_0x00010bf323c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010bf34860(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar3);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar12);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,puVar1);
  puVar5 = puVar1;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar5;
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = (long)_DAT_112745388;
  if (*(long *)(puVar1 + lVar11) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                        *(undefined8 *)(puVar1 + _DAT_11274538c));
    func_0x00010bf82f40(*(undefined8 *)(puVar1 + lVar11));
    uVar2 = *(undefined8 *)(puVar1 + lVar11);
    *(undefined8 *)(puVar1 + lVar11) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1062db3f4; end: 1062db453; -[SCOperaPayToPromoteButtonLayerView dismissTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062db3f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112745388;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                        *(undefined8 *)(param_1 + _DAT_11274538c));
    func_0x00010bf82f40(*(undefined8 *)(param_1 + lVar2));
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1062db454; end: 1062db61f; -[SCOperaPayToPromoteButtonLayerView updateViewModelWithP2pOptions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062db454(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar1 = PTR_PTR_1126c97b8;
  _objc_retain(param_3);
  _objc_alloc();
  lVar10 = (long)_DAT_11274537c;
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c241220(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c242440(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c242460(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010c247520(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_3;
  func_0x00010c124a40(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_3;
  func_0x00010bf68780();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_3;
  func_0x00010bf68600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03b040();
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar1;
  _objc_release(uVar2);
  lVar6 = param_3;
  func_0x00010c233400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  *(bool *)(param_1 + _DAT_112745384) = lVar6 != 0;
  _objc_release(lVar6);
  func_0x00010bed4640(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}


