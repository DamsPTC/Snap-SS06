/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108c453c4; end: 108c453ff;  */

void FUN_108c453c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
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
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  return;
}



/* Entry: 108c45400; end: 108c4548b;  */

long FUN_108c45400(long param_1)

{
  long lStack_28;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x000108c45454(&lStack_28);
  return param_1;
}



/* Entry: 108c4548c; end: 108c454ff;  */

void FUN_108c4548c(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110ab9888;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_108c45968();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_108c45500);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108c45a84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c45500; end: 108c4556f;  */

void FUN_108c45500(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126db378;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_108c45968();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x000108c3e454(&uStack_30);
  return;
}



/* Entry: 108c45570; end: 108c455b7;  */

bool FUN_108c45570(long param_1)

{
  bool bVar1;
  
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    bVar1 = *(long *)(param_1 + 0xa8) != 0;
    func_0x000108c459f8();
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 108c455b8; end: 108c458a7;  */

void FUN_108c455b8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar4;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_88 [8];
  undefined8 *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  long lStack_48;
  
  if (param_3 != 0) {
    do {
      FUN_108c45968();
    } while (extraout_w10 != 0);
    do {
      FUN_108c45968();
    } while (extraout_w10_00 != 0);
  }
  uVar4 = *param_1;
  puStack_50 = (undefined8 *)0x0;
  lStack_48 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_d0 = param_2;
  lStack_c8 = param_3;
  FUN_108c450fc(&puStack_60,&uStack_d0,&uStack_70);
  FUN_108c45154(&puStack_50,&puStack_60);
  func_0x000108c45a7c();
  func_0x000108c44bd4(&uStack_70);
  puStack_60 = puStack_50 + 0xd;
  uStack_58 = 1;
  __ZNSt3__15mutex4lockEv();
  puVar1 = puStack_50;
  puStack_80 = puStack_50;
  lStack_78 = lStack_48;
  if (lStack_48 != 0) {
    do {
      FUN_108c45968();
    } while (extraout_w10_01 != 0);
  }
  while (puVar3 = puVar1, FUN_108c45570(), ((ulong)puVar3 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(puVar1 + 7,&puStack_60);
  }
  func_0x000108c44bd4(&puStack_80);
  if (puStack_50[0x15] != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_88);
    __ZSt17rethrow_exceptionSt13exception_ptr(auStack_88);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x108c45730);
    (*pcVar2)();
  }
  uStack_b8 = puStack_50[1];
  uStack_c0 = *puStack_50;
  uStack_b0 = puStack_50[2];
  *puStack_50 = 0;
  puStack_50[1] = 0;
  puStack_50[2] = 0;
  uStack_a0 = puStack_50[4];
  uStack_a8 = puStack_50[3];
  uStack_98 = puStack_50[5];
  puStack_50[4] = 0;
  puStack_50[5] = 0;
  puStack_50[3] = 0;
  func_0x000107c2798c(&puStack_60);
  func_0x000108c45a90();
  FUN_108c46ffc(&uStack_c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160(uVar4);
  func_0x000108c45a30();
  FUN_108c45400(&uStack_c0);
  func_0x000108c459c8();
  func_0x000108c45a38();
  func_0x000107c27b68(param_1[1]);
  return;
}



/* Entry: 108c458a8; end: 108c458ab;  */

undefined8 * FUN_108c458a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab98a8;
  func_0x000108c4593c(param_1 + 1);
  return param_1;
}



/* Entry: 108c458ac; end: 108c458bf;  */

void FUN_108c458ac(void)

{
  FUN_108c45910();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c458c0; end: 108c4590f;  */

void FUN_108c458c0(long param_1,long param_2)

{
  int extraout_w10;
  
  if (*(long *)(param_2 + 8) != 0) {
    do {
      FUN_108c45968();
    } while (extraout_w10 != 0);
  }
  FUN_108c455b8(param_1 + 8);
  func_0x000108c459a8();
  return;
}



/* Entry: 108c45910; end: 108c45967;  */

undefined8 * FUN_108c45910(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab98a8;
  func_0x000108c4593c(param_1 + 1);
  return param_1;
}



/* Entry: 108c45968; end: 108c45ac7;  */

void FUN_108c45968(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 108c45ac8; end: 108c45b3f; -[SCNAtlasAtlasRegistry initWithCpp:] */

undefined1 * FUN_108c45ac8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126fde90;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_108c45fdc();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_108c45fb0(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108c45b40; end: 108c45c5f; +[SCNAtlasAtlasRegistry make:] */

void FUN_108c45b40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int extraout_w10;
  undefined ***pppuVar1;
  long lStack_70;
  long lStack_68;
  long lStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  
  _objc_retain(param_3);
  FUN_108c3deac(&lStack_70,param_3);
  FUN_108c4d92c(&lStack_48,&lStack_70);
  func_0x000108c45f1c(&lStack_70);
  if (lStack_48 == 0) {
    pppuVar1 = (undefined ***)0x0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110ab98e8;
    lStack_70 = lStack_48;
    lStack_68 = lStack_40;
    if (lStack_40 != 0) {
      do {
        FUN_108c45fdc();
      } while (extraout_w10 != 0);
    }
    pppuVar1 = &ppuStack_38;
    func_0x000107c31700(pppuVar1,&lStack_70,FUN_108c45f44);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c27d28(&lStack_70);
  }
  FUN_108c45fb0(&lStack_48);
  func_0x000108c45fec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar1);
  return;
}



/* Entry: 108c45c60; end: 108c45ceb; -[SCNAtlasAtlasRegistry getFactory] */

void FUN_108c45c60(long param_1)

{
  undefined1 auStack_30 [16];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(auStack_30);
  FUN_108c3e21c(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108c4600c();
  FUN_108c3e3c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c45cec; end: 108c45d77; -[SCNAtlasAtlasRegistry getCleanupManager] */

void FUN_108c45cec(long param_1)

{
  undefined1 auStack_30 [16];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(auStack_30);
  FUN_108c3d7d0(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108c4600c();
  FUN_108c3d99c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c45d78; end: 108c45e2b; -[SCNAtlasAtlasRegistry setDuplexClient:] */

void FUN_108c45d78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_40 [16];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000107c2a848(auStack_40,param_3);
  (**(code **)(*plVar1 + 0x20))(plVar1,auStack_40);
  func_0x000107c28254(auStack_40);
  func_0x000108c45fec();
  return;
}



/* Entry: 108c45e2c; end: 108c45e83; -[SCNAtlasAtlasRegistry dispose] */

void FUN_108c45e2c(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x28))();
  return;
}



/* Entry: 108c45e84; end: 108c45ed7; -[SCNAtlasAtlasRegistry .cxx_destruct] */

void FUN_108c45e84(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110ab98e8;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_108c45fb0((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 108c45ed8; end: 108c45f43; -[SCNAtlasAtlasRegistry .cxx_construct] */

undefined8 * FUN_108c45ed8(undefined8 *param_1)

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
      FUN_108c45fdc();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 108c45f44; end: 108c45faf;  */

void FUN_108c45f44(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126bed18;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_108c45fdc();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_108c45fb0(&uStack_30);
  return;
}



/* Entry: 108c45fb0; end: 108c45fdb;  */

long FUN_108c45fb0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108c45fdc; end: 108c46037;  */

void FUN_108c45fdc(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 108c46038; end: 108c460af; -[SCNAtlasAtlasUserIdProviderCppProxy initWithCpp:] */

undefined1 * FUN_108c46038(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126fde98;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000108c46ce0();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000108c3e430(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108c460b0; end: 108c461b3; -[SCNAtlasAtlasUserIdProviderCppProxy getUserIdByUsername:source:] */

void FUN_108c460b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  plVar2 = *(long **)(param_1 + 0x18);
  func_0x000107c27f20(auStack_58,param_3);
  (**(code **)(*plVar2 + 0x10))(&uStack_40,plVar2,auStack_58,param_4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_108c461b4(&uStack_70);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108c46cf8();
  func_0x0001052b22bc(&uStack_40);
  func_0x000108c46cf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c461b4; end: 108c46253;  */

void FUN_108c461b4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined1 auStack_40 [16];
  
  puVar1 = PTR_PTR_1126b8058;
  _objc_alloc_init();
  puVar2 = puVar1;
  func_0x00010bfc5fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  puStack_48 = puVar1;
  FUN_108c46744(auStack_40,param_1,&puStack_48);
  func_0x000107c27b58(auStack_40);
  _objc_release(puStack_48);
  func_0x000108c46cf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108c46254; end: 108c462c3;  */

void FUN_108c46254(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_110ab98f8,&PTR_DAT_110ab9908,0);
    if (lVar1 == 0) {
      FUN_108c46660(param_1);
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



/* Entry: 108c462c4; end: 108c46317; -[SCNAtlasAtlasUserIdProviderCppProxy .cxx_destruct] */

void FUN_108c462c4(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110ab9950;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000108c3e430((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 108c46318; end: 108c46357; -[SCNAtlasAtlasUserIdProviderCppProxy .cxx_construct] */

undefined8 * FUN_108c46318(undefined8 *param_1)

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
      func_0x000108c46ce0();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 108c46358; end: 108c4646f;  */

void FUN_108c46358(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
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
  long lStack_38;
  
  _objc_retain();
  puStack_60 = &uStack_68;
  uStack_68 = 0;
  uStack_58 = 0x3812000000;
  pcStack_50 = FUN_108c46470;
  uStack_48 = 0x108c46480;
  pcStack_40 = "";
  FUN_108c46488(&lStack_38);
  func_0x0001052b2514(param_1,puStack_60[6]);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_108c464d4;
  puStack_78 = &UNK_11093e260;
  puStack_70 = &uStack_68;
  func_0x00010c26d0c0(param_2,param_3,&puStack_90);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000108c46d40();
  lVar1 = lStack_38;
  lStack_38 = 0;
  if (lVar1 != 0) {
    func_0x000108c46cd4();
  }
  func_0x000108c46cf0();
  return;
}



/* Entry: 108c46470; end: 108c46487;  */

void FUN_108c46470(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}



/* Entry: 108c46488; end: 108c464d3;  */

void FUN_108c46488(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  func_0x0001052b2590();
  *param_1 = puVar1;
  return;
}



/* Entry: 108c464d4; end: 108c46633;  */

undefined8 FUN_108c464d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_60 [32];
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x30);
  func_0x00010bfc1d60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28248(auStack_60);
  func_0x0001052b29c8(uVar1,auStack_60);
  func_0x000107c279c4(auStack_60);
  _objc_release(param_2);
  func_0x000108c46cf0();
  return 0;
}



/* Entry: 108c46634; end: 108c4665f;  */

long * FUN_108c46634(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_108c46cd4();
  }
  return param_1;
}



/* Entry: 108c46660; end: 108c466d3;  */

void FUN_108c46660(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110ab9950;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x000108c46ce0();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_108c466d4);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108c46d4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c466d4; end: 108c46743;  */

void FUN_108c466d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126db380;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000108c46ce0();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x000108c3e430(&uStack_30);
  return;
}



/* Entry: 108c46744; end: 108c4691b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_108c46744(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long alStack_58 [7];
  
  alStack_58[5] = 0;
  alStack_58[6] = 0;
  alStack_58[1] = 0;
  alStack_58[2] = 0;
  func_0x0001052b21e8(alStack_58 + 3,param_2,alStack_58 + 1);
  func_0x0001052b223c(alStack_58 + 5,alStack_58 + 3);
  func_0x0001052b22bc(alStack_58 + 3);
  func_0x0001052b22bc(alStack_58 + 1);
  func_0x000107c27b48(alStack_58);
  func_0x000107c27b4c(alStack_58 + 3,alStack_58[0]);
  uStack_68 = *param_3;
  *param_3 = 0;
  lStack_60 = alStack_58[0];
  alStack_58[0] = 0;
  lStack_70 = 0;
  lStack_78 = 0;
  lStack_88 = alStack_58[5] + 0x58;
  uStack_80 = 1;
  __ZNSt3__15mutex4lockEv();
  lVar1 = alStack_58[5];
  func_0x0001052b2274();
  if ((int)lVar1 == 0) {
    FUN_108c46a1c(&lStack_90,&uStack_68);
    lVar1 = lStack_90;
    lStack_90 = 0;
    lVar2 = *(long *)(alStack_58[5] + 0xa0);
    *(long *)(alStack_58[5] + 0xa0) = lVar1;
    if (lVar2 != 0) {
      func_0x000108c46cd4();
      lVar1 = lStack_90;
      lStack_90 = 0;
      if (lVar1 != 0) {
        func_0x000108c46cd4();
      }
    }
  }
  else {
    func_0x0001052b223c(&lStack_78,alStack_58 + 5);
  }
  func_0x000107c2798c(&lStack_88);
  if (lStack_78 != 0) {
    lStack_a0 = lStack_78;
    lStack_98 = lStack_70;
    if (lStack_70 != 0) {
      do {
        func_0x000108c46ce0();
      } while (extraout_w10 != 0);
    }
    FUN_108c4691c(&uStack_68,&lStack_a0);
    func_0x000108c46cf8();
  }
  param_1[1] = alStack_58[4];
  *param_1 = alStack_58[3];
  alStack_58[3] = 0;
  alStack_58[4] = 0;
  func_0x0001052b22bc(&lStack_78);
  FUN_108c46c88(&uStack_68);
  func_0x000107c27b58(alStack_58 + 3);
  lVar1 = alStack_58[0];
  alStack_58[0] = 0;
  if (lVar1 != 0) {
    func_0x000108c46cd4();
  }
  func_0x0001052b22bc(alStack_58 + 5);
  return;
}



/* Entry: 108c4691c; end: 108c46a1b;  */

void FUN_108c4691c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uStack_50 = *param_2;
  lStack_48 = param_2[1];
  if (lStack_48 == 0) {
    lStack_38 = 0;
  }
  else {
    plVar1 = (long *)(lStack_48 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      lStack_38 = lStack_48;
    } while (cVar2 != '\0');
  }
  uStack_40 = uStack_50;
  FUN_108c46af4(param_1,&uStack_40);
  func_0x0001052b22bc(&uStack_40);
  func_0x0001052b22bc(&uStack_50);
  func_0x000107c27b68(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 108c46a1c; end: 108c46a5f;  */

void FUN_108c46a1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_FUN_110ab9970;
  uVar3 = param_2[1];
  uVar2 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 108c46a60; end: 108c46a63;  */

undefined8 * FUN_108c46a60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab9970;
  FUN_108c46c88(param_1 + 1);
  return param_1;
}



/* Entry: 108c46a64; end: 108c46a77;  */

void FUN_108c46a64(void)

{
  FUN_108c46ac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c46a78; end: 108c46ac7;  */

void FUN_108c46a78(long param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000108c46ce0();
    } while (extraout_w10 != 0);
  }
  FUN_108c4691c(param_1 + 8,&uStack_30);
  func_0x000108c46cf8();
  return;
}



/* Entry: 108c46ac8; end: 108c46af3;  */

undefined8 * FUN_108c46ac8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab9970;
  FUN_108c46c88(param_1 + 1);
  return param_1;
}



/* Entry: 108c46af4; end: 108c46c57;  */

void FUN_108c46af4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  uVar1 = *param_1;
  func_0x0001052b22e4(auStack_50,param_2);
  FUN_108c46c58(auStack_50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160(uVar1);
  func_0x000108c46d38();
  func_0x000107c279c4(auStack_50);
  return;
}



/* Entry: 108c46c58; end: 108c46c87;  */

void FUN_108c46c58(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000107c28044();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c46c88; end: 108c46cd3;  */

undefined8 * FUN_108c46c88(undefined8 *param_1)

{
  func_0x000107c27b70(param_1 + 1);
  _objc_release(*param_1);
  return param_1;
}



/* Entry: 108c46cd4; end: 108c46d57;  */

void FUN_108c46cd4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108c46cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 108c46d58; end: 108c46eaf;  */

void FUN_108c46d58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126db388;
  _objc_alloc(PTR_PTR_1126db388);
  lVar2 = param_1;
  func_0x000107c28044(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x18;
  func_0x000107c27f28(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x30;
  func_0x000107c27f28(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + 0x48;
  func_0x000107c27f28(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + 0x60;
  func_0x000107c27f28(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + 0x78;
  func_0x000107c27f28(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05b640(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,lVar6,lVar7,
                      *(undefined8 *)(param_1 + 0x90));
  func_0x000108c46f68();
  func_0x000108c46f58();
  func_0x000108c46f50();
  func_0x000108c46f78();
  func_0x000108c46f70();
  func_0x000108c46f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c46eb0; end: 108c46f7f;  */

void FUN_108c46eb0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
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
  uVar2 = param_3[1];
  uVar1 = *param_3;
  param_1[5] = param_3[2];
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  uVar2 = param_4[1];
  uVar1 = *param_4;
  param_1[8] = param_4[2];
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  uVar2 = param_5[1];
  uVar1 = *param_5;
  param_1[0xb] = param_5[2];
  param_1[10] = uVar2;
  param_1[9] = uVar1;
  param_5[1] = 0;
  param_5[2] = 0;
  *param_5 = 0;
  uVar2 = param_6[1];
  uVar1 = *param_6;
  param_1[0xe] = param_6[2];
  param_1[0xd] = uVar2;
  param_1[0xc] = uVar1;
  param_6[1] = 0;
  param_6[2] = 0;
  *param_6 = 0;
  uVar2 = param_7[1];
  uVar1 = *param_7;
  param_1[0x11] = param_7[2];
  param_1[0x10] = uVar2;
  param_1[0xf] = uVar1;
  param_7[1] = 0;
  param_7[2] = 0;
  *param_7 = 0;
  param_1[0x12] = param_8;
  return;
}



/* Entry: 108c46f80; end: 108c46fef;  */

void FUN_108c46f80(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010bf610c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f20(&uStack_38);
  param_1[1] = uStack_30;
  *param_1 = uStack_38;
  param_1[2] = uStack_28;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 108c46ff0; end: 108c46ffb;  */

void FUN_108c46ff0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108c46ffc; end: 108c47113;  */

void FUN_108c46ffc(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR_PTR_1126db390;
  _objc_alloc(PTR_PTR_1126db390);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      (param_1[1] - *param_1) / 0x98);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1[1];
  for (lVar5 = *param_1; lVar5 != lVar1; lVar5 = lVar5 + 0x98) {
    lVar4 = lVar5;
    FUN_108c46d58(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3,param_2,lVar4);
    func_0x000108c476a8();
  }
  func_0x00010bf51e00(puVar3);
  func_0x000108c476a0();
  param_1 = param_1 + 3;
  func_0x000107c27f28(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c013a20(puVar2,param_2,puVar3,param_1);
  func_0x000108c476a0();
  func_0x000108c476dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108c47114; end: 108c4719f;  */

void FUN_108c47114(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [40];
  
  if ((undefined8 *)((param_1[2] - *param_1) / 0x98) < param_2) {
    if ((undefined8 *)0x1af286bca1af286 < param_2) {
      FUN_108c471a0();
      func_0x000108c476c0();
      func_0x000108c476d4();
      plVar1 = (long *)&DAT_10f62a4d8;
      func_0x000104bd47e8();
      lVar2 = param_2[1] + ((plVar1[1] - *plVar1) / -0x98) * 0x98;
      FUN_108c472e0(plVar1 + 2,*plVar1,plVar1[1],lVar2);
      param_2[1] = lVar2;
      lVar2 = *plVar1;
      plVar1[1] = lVar2;
      *plVar1 = param_2[1];
      param_2[1] = lVar2;
      lVar2 = plVar1[1];
      plVar1[1] = param_2[2];
      param_2[2] = lVar2;
      lVar2 = plVar1[2];
      plVar1[2] = param_2[3];
      param_2[3] = lVar2;
      *param_2 = param_2[1];
      return;
    }
    FUN_108c47240(auStack_48,param_2,(param_1[1] - *param_1) / 0x98);
    func_0x000108c476c8();
    func_0x000108c476c0();
  }
  return;
}



/* Entry: 108c471a0; end: 108c471b3;  */

void FUN_108c471a0(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar2 = param_2[1] + ((plVar1[1] - *plVar1) / -0x98) * 0x98;
  FUN_108c472e0(plVar1 + 2,*plVar1,plVar1[1],lVar2);
  param_2[1] = lVar2;
  lVar2 = *plVar1;
  plVar1[1] = lVar2;
  *plVar1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = plVar1[2];
  plVar1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 108c471b4; end: 108c4723f;  */

void FUN_108c471b4(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x98) * 0x98;
  FUN_108c472e0(param_1 + 2,*param_1,param_1[1],lVar1);
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



/* Entry: 108c47240; end: 108c472af;  */

long * FUN_108c47240(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000108c4728c();
  }
  lVar1 = param_4 + param_3 * 0x98;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x98;
  return param_1;
}



/* Entry: 108c472b0; end: 108c472df;  */

void FUN_108c472b0(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x1af286bca1af287) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x98);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x98) {
    FUN_108c473b4(param_4,uVar1);
    param_4 = lStack_48 + 0x98;
  }
  uStack_58 = 1;
  FUN_108c47384(param_1,param_2,param_3);
  FUN_108c47458(&uStack_70);
  return;
}



/* Entry: 108c472e0; end: 108c47383;  */

void FUN_108c472e0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x98) {
    FUN_108c473b4(param_4,lVar1);
    param_4 = lStack_38 + 0x98;
  }
  uStack_48 = 1;
  FUN_108c47384(param_1,param_2,param_3);
  FUN_108c47458(&uStack_60);
  return;
}



/* Entry: 108c47384; end: 108c473b3;  */

void FUN_108c47384(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x98) {
    func_0x000108c4537c();
  }
  return;
}



/* Entry: 108c473b4; end: 108c47457;  */

void FUN_108c473b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
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
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  param_1[8] = param_2[8];
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[6] = 0;
  uVar2 = param_2[10];
  uVar1 = param_2[9];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar2;
  param_1[9] = uVar1;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  uVar2 = param_2[0xd];
  uVar1 = param_2[0xc];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar2;
  param_1[0xc] = uVar1;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  uVar2 = param_2[0x10];
  uVar1 = param_2[0xf];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar2;
  param_1[0xf] = uVar1;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_1[0x12] = param_2[0x12];
  return;
}



/* Entry: 108c47458; end: 108c47487;  */

long FUN_108c47458(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_108c47488(param_1);
  }
  return param_1;
}



/* Entry: 108c47488; end: 108c474a7;  */

void FUN_108c47488(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x98;
    func_0x000108c4537c();
  }
  return;
}



/* Entry: 108c474a8; end: 108c47503;  */

void FUN_108c474a8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x98;
    func_0x000108c4537c();
  }
  return;
}



/* Entry: 108c47504; end: 108c4750b;  */

void FUN_108c47504(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x98;
    func_0x000108c4537c();
  }
  return;
}



/* Entry: 108c4750c; end: 108c475a7;  */

void FUN_108c4750c(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x98;
    func_0x000108c4537c();
  }
  return;
}



/* Entry: 108c475a8; end: 108c4763f;  */

long FUN_108c475a8(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  FUN_108c47640(param_1,(param_1[1] - *param_1) / 0x98 + 1);
  FUN_108c47240(auStack_58,plVar1,(param_1[1] - *param_1) / 0x98,param_1 + 2);
  FUN_108c473b4(lStack_48,param_2);
  lStack_48 = lStack_48 + 0x98;
  func_0x000108c476c8();
  lVar2 = param_1[1];
  func_0x000108c476c0();
  return lVar2;
}



/* Entry: 108c47640; end: 108c4769f;  */

ulong FUN_108c47640(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong unaff_x19;
  
  if (0x1af286bca1af286 < param_2) {
    FUN_108c471a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return unaff_x19;
  }
  uVar1 = (param_1[2] - *param_1) / 0x98;
  uVar2 = uVar1 * 2;
  if (uVar2 < param_2 || uVar2 - param_2 == 0) {
    uVar2 = param_2;
  }
  if (0xd79435e50d7942 < uVar1) {
    uVar2 = 0x1af286bca1af286;
  }
  return uVar2;
}



/* Entry: 108c476a0; end: 108c476e3;  */

void FUN_108c476a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108c476e4; end: 108c47747;  */

undefined1  [16] FUN_108c476e4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c252440(param_1);
  uVar2 = param_1;
  func_0x00010c298be0(param_1);
  _objc_release(param_1);
  auVar3._0_8_ = uVar1 & 0xffffffff;
  auVar3._8_8_ = uVar2;
  return auVar3;
}



/* Entry: 108c47748; end: 108c4777b;  */

void FUN_108c47748(void)

{
  _objc_alloc(PTR_PTR_1126db398);
  func_0x00010c04c020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c4777c; end: 108c4781b;  */

void FUN_108c4777c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b4a30;
  _objc_alloc(PTR_PTR_1126b4a30);
  lVar2 = param_1;
  func_0x000107c27f28(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x18;
  func_0x000107c27f28(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052f40(puVar1,param_2,lVar2,lVar3,*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  FUN_108c4781c();
  func_0x000108c47824();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c4781c; end: 108c4782b;  */

void FUN_108c4781c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108c4782c; end: 108c478a3; -[SCNDuplexBackgroundNetworkTaskDelegateCppProxy initWithCpp:] */

undefined1 * FUN_108c4782c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126fdea0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000107c34c28();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c2a844(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108c478a4; end: 108c478ff; -[SCNDuplexBackgroundNetworkTaskDelegateCppProxy beginBackgroundTask] */

void FUN_108c478a4(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 108c47900; end: 108c4795b; -[SCNDuplexBackgroundNetworkTaskDelegateCppProxy endBackgroundTask] */

void FUN_108c47900(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 108c4795c; end: 108c479b7; -[SCNDuplexBackgroundNetworkTaskDelegateCppProxy .cxx_destruct] */

void FUN_108c4795c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110ab9ad8;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000107c2a844((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 108c479b8; end: 108c479f7; -[SCNDuplexBackgroundNetworkTaskDelegateCppProxy .cxx_construct] */

undefined8 * FUN_108c479b8(undefined8 *param_1)

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
      func_0x000107c34c28();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 108c479f8; end: 108c479fb;  */

void FUN_108c479f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab9a38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c479fc; end: 108c47a0f;  */

void FUN_108c479fc(void)

{
  FUN_108c47b40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c47a10; end: 108c47a1b;  */

void FUN_108c47a10(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  func_0x000108c47b50(param_1);
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
  _objc_autoreleasePoolPop(param_1);
  return;
}



/* Entry: 108c47a1c; end: 108c47aaf;  */

void FUN_108c47a1c(void)

{
  func_0x000108c47b58();
  return;
}



/* Entry: 108c47ab0; end: 108c47b3f;  */

void FUN_108c47ab0(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  
  func_0x000108c47b50();
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
  _objc_autoreleasePoolPop(param_1);
  return;
}



/* Entry: 108c47b40; end: 108c47b6b;  */

void FUN_108c47b40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab9a38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c47b6c; end: 108c47be3; -[SCNDuplexDisposeCallbackCppProxy initWithCpp:] */

undefined1 * FUN_108c47b6c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126fdea8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_108c4819c();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_108c48174(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108c47be4; end: 108c47c3f; -[SCNDuplexDisposeCallbackCppProxy onComplete] */

void FUN_108c47be4(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 108c47c40; end: 108c47d3b;  */

void FUN_108c47c40(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_1126db3a8;
    _objc_opt_class(PTR_PTR_1126db3a8);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_2);
      ppuStack_38 = &PTR_DAT_110ab9b40;
      uStack_40 = param_2;
      func_0x000107c316f4(&uStack_30,&ppuStack_38,&uStack_40,FUN_108c47e40);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      func_0x000107c27d28(&uStack_30);
      _objc_release(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_108c48068(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_108c4819c();
        } while (extraout_w10 != 0);
      }
    }
  }
  _objc_release(param_2);
  return;
}



/* Entry: 108c47d3c; end: 108c47dab;  */

void FUN_108c47d3c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_110ab9ae8,&PTR_DAT_110ab9af8,0);
    if (lVar1 == 0) {
      FUN_108c48090(param_1);
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



/* Entry: 108c47dac; end: 108c47dff; -[SCNDuplexDisposeCallbackCppProxy .cxx_destruct] */

void FUN_108c47dac(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110ab9c10;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_108c48174((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 108c47e00; end: 108c47e3f; -[SCNDuplexDisposeCallbackCppProxy .cxx_construct] */

undefined8 * FUN_108c47e00(undefined8 *param_1)

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
      FUN_108c4819c();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 108c47e40; end: 108c47f33;  */

void FUN_108c47e40(undefined8 *param_1,long *param_2)

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
  *puVar1 = &PTR_FUN_110ab9b80;
  puVar1[3] = &PTR_DAT_110ab9bf8;
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
      FUN_108c4819c();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  puVar1[3] = &PTR_FUN_110ab9bd0;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_108c48068(&uStack_50);
  return;
}



/* Entry: 108c47f34; end: 108c47f37;  */

void FUN_108c47f34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab9b80;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c47f38; end: 108c47f4b;  */

void FUN_108c47f38(void)

{
  FUN_108c48058();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c47f4c; end: 108c47f57;  */

long FUN_108c47f4c(long param_1)

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
    ppuStack_38 = &PTR_DAT_110ab9b40;
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



/* Entry: 108c47f58; end: 108c47fc3;  */

void FUN_108c47f58(void)

{
  func_0x000108c481c8();
  return;
}



/* Entry: 108c47fc4; end: 108c48057;  */

long FUN_108c47fc4(long param_1)

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
    ppuStack_38 = &PTR_DAT_110ab9b40;
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



/* Entry: 108c48058; end: 108c48067;  */

void FUN_108c48058(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab9b80;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c48068; end: 108c4808f;  */

long FUN_108c48068(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108c48090; end: 108c48103;  */

void FUN_108c48090(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110ab9c10;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_108c4819c();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_108c48104);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108c481d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c48104; end: 108c48173;  */

void FUN_108c48104(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126db3a8;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_108c4819c();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_108c48174(&uStack_30);
  return;
}



/* Entry: 108c48174; end: 108c4819b;  */

long FUN_108c48174(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108c4819c; end: 108c481df;  */

void FUN_108c4819c(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}


