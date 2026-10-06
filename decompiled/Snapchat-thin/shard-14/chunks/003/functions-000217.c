/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b0f1e2c; end: 10b0f1e7b;  */

void FUN_10b0f1e2c(long param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010b0f202c();
    } while (extraout_w10 != 0);
  }
  FUN_10b0f1d10(param_1 + 8,&uStack_30);
  func_0x00010b0f2164();
  return;
}



/* Entry: 10b0f1e7c; end: 10b0f1ea7;  */

undefined8 * FUN_10b0f1e7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cb9df8;
  FUN_10b0f1fe4(param_1 + 1);
  return param_1;
}



/* Entry: 10b0f1ea8; end: 10b0f1fb3;  */

void FUN_10b0f1ea8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_78 [72];
  
  func_0x0001052a5804(auStack_78,param_2);
  FUN_10b0f1fb4(auStack_78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f2144();
  func_0x00010c220160();
  func_0x00010b0f20a8();
  func_0x0001052a038c(auStack_78);
  return;
}



/* Entry: 10b0f1fb4; end: 10b0f1fe3;  */

void FUN_10b0f1fb4(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x00010bcc1ca8();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0f1fe4; end: 10b0f201f;  */

undefined8 FUN_10b0f1fe4(void)

{
  undefined8 unaff_x19;
  
  func_0x00010b0f2084();
  func_0x00010b0f2350();
  return unaff_x19;
}



/* Entry: 10b0f2020; end: 10b0f23f7;  */

void FUN_10b0f2020(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b0f2028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 10b0f23f8; end: 10b0f246f; -[SCNContentManagerCacheController initWithCpp:] */

undefined1 * FUN_10b0f23f8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112705ca8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10b0f2ff0();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0001052a712c(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b0f2470; end: 10b0f25c7; +[SCNContentManagerCacheController create:rootDirectory:] */

void FUN_10b0f2470(void)

{
  undefined8 in_x3;
  int extraout_w10;
  undefined8 unaff_x21;
  long lStack_88;
  long lStack_80;
  undefined **appuStack_58 [3];
  long lStack_40;
  long lStack_38;
  
  func_0x00010b0f305c();
  _objc_retain(in_x3);
  func_0x00010b0f308c(appuStack_58);
  FUN_10b0f38c4(&lStack_88,in_x3);
  FUN_10b1babdc(&lStack_40,appuStack_58,&lStack_88);
  func_0x0001052a71ac(&lStack_88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appuStack_58);
  if (lStack_40 == 0) {
    unaff_x21 = 0;
  }
  else {
    appuStack_58[0] = &PTR_DAT_110cb9e28;
    lStack_88 = lStack_40;
    lStack_80 = lStack_38;
    if (lStack_38 != 0) {
      do {
        func_0x00010b0f2ff0();
      } while (extraout_w10 != 0);
    }
    func_0x000107c31700(appuStack_58,&lStack_88,FUN_10b0f2cec);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b0f3078();
  }
  func_0x0001052a712c(&lStack_40);
  func_0x00010b0f3044();
  func_0x00010b0f300c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x21);
  return;
}



/* Entry: 10b0f25c8; end: 10b0f266f; -[SCNContentManagerCacheController clearAllCachedContent:] */

void FUN_10b0f25c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_40 [16];
  
  func_0x00010b0f305c();
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10b104510(auStack_40,param_3);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_40);
  func_0x0001052a6df8(auStack_40);
  func_0x00010b0f300c();
  return;
}



/* Entry: 10b0f2670; end: 10b0f26c7; -[SCNContentManagerCacheController estimateTotalDiskUsage] */

void FUN_10b0f2670(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 10b0f26c8; end: 10b0f2817; -[SCNContentManagerCacheController getDiskSizeInBytes] */

void FUN_10b0f26c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))(auStack_68);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71fe0(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,uStack_50);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = &uStack_58;
  while (puVar4 = (undefined8 *)*puVar4, puVar4 != (undefined8 *)0x0) {
    puVar2 = puVar4 + 3;
    FUN_10b0fccf0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)*(int *)(puVar4 + 2));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar1,param_2,puVar2,puVar3);
    _objc_release(puVar3);
    func_0x00010b0f3044();
  }
  func_0x00010bf51e00(puVar1);
  func_0x00010b0f300c();
  func_0x0001052a6e20(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0f2818; end: 10b0f28c3; -[SCNContentManagerCacheController evictLRUBy:bytesToEvict:] */

void FUN_10b0f2818(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_48 [24];
  
  func_0x00010b0f305c();
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010b0f308c(auStack_48);
  (**(code **)(*plVar1 + 0x28))(plVar1,auStack_48,param_4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  func_0x00010b0f300c();
  return;
}



/* Entry: 10b0f28c4; end: 10b0f2bcf; -[SCNContentManagerCacheController evictUntilHaving:mediaContextType:freeDiskSpace:] */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b0f28c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  int extraout_w10;
  long *plVar5;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long alStack_d8 [3];
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
  long alStack_68 [5];
  
  func_0x00010b0f305c();
  plVar5 = *(long **)(param_1 + 0x18);
  func_0x00010b0f308c(alStack_d8);
  (**(code **)(*plVar5 + 0x30))(&uStack_c0,plVar5,alStack_d8,param_4,param_5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_d8);
  uStack_e8 = uStack_b8;
  uStack_f0 = uStack_c0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  puVar1 = PTR_PTR_1126b8058;
  _objc_alloc_init();
  puVar2 = puVar1;
  func_0x00010bfc5fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  alStack_d8[0] = 0;
  alStack_d8[1] = 0;
  alStack_68[1] = 0;
  alStack_68[2] = 0;
  func_0x0001052a6eb0(alStack_68 + 3,&uStack_f0,alStack_68 + 1);
  func_0x0001052a6f04(alStack_d8,alStack_68 + 3);
  func_0x0001052a6f94(alStack_68 + 3);
  func_0x0001052a6f94(alStack_68 + 1);
  func_0x000107c27b48(alStack_68);
  func_0x000107c27b4c(alStack_68 + 3,alStack_68[0]);
  lStack_78 = alStack_68[0];
  alStack_68[0] = 0;
  lStack_90 = 0;
  lStack_88 = 0;
  lStack_a0 = alStack_d8[0] + 0x40;
  lStack_98 = CONCAT71(lStack_98._1_7_,1);
  puStack_80 = puVar1;
  __ZNSt3__15mutex4lockEv();
  lVar3 = alStack_d8[0];
  func_0x0001052a6f48();
  if ((int)lVar3 == 0) {
    puVar4 = (undefined8 *)0x18;
    __Znwm();
    lVar3 = lStack_78;
    puVar1 = puStack_80;
    *puVar4 = &PTR_FUN_110cb9e48;
    puStack_80 = (undefined *)0x0;
    lStack_78 = 0;
    puVar4[2] = lVar3;
    puVar4[1] = puVar1;
    plVar5 = *(long **)(alStack_d8[0] + 0x88);
    *(undefined8 **)(alStack_d8[0] + 0x88) = puVar4;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
  else {
    func_0x0001052a6f04(&lStack_90,alStack_d8);
  }
  func_0x000107c2798c(&lStack_a0);
  if (lStack_90 != 0) {
    lStack_a0 = lStack_90;
    lStack_98 = lStack_88;
    if (lStack_88 != 0) {
      do {
        func_0x00010b0f2ff0();
      } while (extraout_w10 != 0);
    }
    FUN_10b0f2d5c(&puStack_80);
    func_0x0001052a6f94(&lStack_a0);
  }
  uStack_a8 = alStack_68[4];
  uStack_b0 = alStack_68[3];
  alStack_68[3] = 0;
  alStack_68[4] = 0;
  func_0x0001052a6f94(&lStack_90);
  func_0x00010b0f2fc4(&puStack_80);
  func_0x000107c27b58(alStack_68 + 3);
  lVar3 = alStack_68[0];
  alStack_68[0] = 0;
  if (lVar3 != 0) {
    func_0x00010b0f306c();
  }
  func_0x00010b0f3064();
  func_0x000107c27b58(&uStack_b0);
  _objc_release(0);
  func_0x00010b0f3044();
  func_0x00010b0f3054();
  func_0x0001052a6f94(&uStack_c0);
  func_0x00010b0f300c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0f2bd0; end: 10b0f2c57;  */

void FUN_10b0f2bd0(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int extraout_w10;
  undefined8 uVar4;
  undefined **ppuStack_48;
  long lStack_40;
  long lStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    lVar1 = 0x10;
    ___cxa_allocate_exception();
    func_0x00010527a174();
    lVar3 = lVar1;
    ___cxa_throw(lVar1,PTR___ZTISt16invalid_argument_110352248,
                 PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
    lVar2 = lVar1;
    ___cxa_free_exception();
    func_0x00010b0f303c();
    pcStack_28 = FUN_10b0f2c58;
    lStack_40 = lVar3;
    lStack_38 = lVar1;
    puStack_30 = &stack0xfffffffffffffff0;
    if (*(long *)(lVar2 + 0x18) != 0) {
      ppuStack_48 = &PTR_DAT_110cb9e28;
      func_0x000107c31708(lVar2 + 8,&ppuStack_48);
    }
    func_0x0001052a712c((long *)(lVar2 + 0x18));
    func_0x000107c27e30(lVar2 + 8);
    return;
  }
  lVar3 = *(long *)(param_2 + 0x20);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  param_1[1] = *(undefined8 *)(param_2 + 0x20);
  *param_1 = uVar4;
  if (lVar3 != 0) {
    do {
      FUN_10b0f2ff0();
    } while (extraout_w10 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0f2c58; end: 10b0f2cab; -[SCNContentManagerCacheController .cxx_destruct] */

void FUN_10b0f2c58(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cb9e28;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x0001052a712c((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b0f2cac; end: 10b0f2ceb; -[SCNContentManagerCacheController .cxx_construct] */

undefined8 * FUN_10b0f2cac(undefined8 *param_1)

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
      FUN_10b0f2ff0();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b0f2cec; end: 10b0f2d5b;  */

void FUN_10b0f2cec(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dfb30;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10b0f2ff0();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x0001052a712c(&uStack_30);
  return;
}



/* Entry: 10b0f2d5c; end: 10b0f2f2f;  */

void FUN_10b0f2d5c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar1;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  uStack_78 = param_2;
  lStack_70 = param_3;
  if (param_3 != 0) {
    do {
      FUN_10b0f2ff0();
    } while (extraout_w10 != 0);
    do {
      FUN_10b0f2ff0();
    } while (extraout_w10_00 != 0);
  }
  uVar1 = *param_1;
  uStack_68 = param_2;
  lStack_60 = param_3;
  func_0x0001052a6fbc(&uStack_68);
  func_0x000107c28140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160(uVar1);
  func_0x00010b0f302c();
  func_0x00010b0f3064();
  func_0x0001052a6f94(&uStack_78);
  func_0x000107c27b68(param_1[1]);
  return;
}



/* Entry: 10b0f2f30; end: 10b0f2f33;  */

undefined8 * FUN_10b0f2f30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cb9e48;
  func_0x00010b0f2fc4(param_1 + 1);
  return param_1;
}



/* Entry: 10b0f2f34; end: 10b0f2f47;  */

void FUN_10b0f2f34(void)

{
  FUN_10b0f2f98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b0f2f48; end: 10b0f2f97;  */

void FUN_10b0f2f48(long param_1,long param_2)

{
  int extraout_w10;
  
  if (*(long *)(param_2 + 8) != 0) {
    do {
      FUN_10b0f2ff0();
    } while (extraout_w10 != 0);
  }
  FUN_10b0f2d5c(param_1 + 8);
  func_0x00010b0f3054();
  return;
}



/* Entry: 10b0f2f98; end: 10b0f2fef;  */

undefined8 * FUN_10b0f2f98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cb9e48;
  func_0x00010b0f2fc4(param_1 + 1);
  return param_1;
}



/* Entry: 10b0f2ff0; end: 10b0f3093;  */

void FUN_10b0f2ff0(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b0f3094; end: 10b0f30c3;  */

void FUN_10b0f3094(void)

{
  _objc_alloc(PTR_PTR_1126dfb38);
  func_0x00010bffa940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0f30c4; end: 10b0f314b;  */

void FUN_10b0f30c4(undefined1 *param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010bf10e40();
  uVar2 = param_2;
  func_0x00010bf9c6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_10b0f314c();
  *param_1 = (char)uVar1;
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(ulong *)(param_1 + 0x10) = param_3 & 0xff;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0f314c; end: 10b0f31b7;  */

undefined1  [16] FUN_10b0f314c(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  _objc_retain();
  bVar1 = param_1 == 0;
  if (bVar1) {
    param_1 = 0;
    uVar2 = 0;
  }
  else {
    func_0x000106e4d99c(param_1);
    uVar2 = param_1 & 0xffffffffffffff00;
    param_1 = param_1 & 0xff;
  }
  FUN_10b0f31b8();
  auVar3._0_8_ = uVar2 | param_1;
  auVar3[8] = !bVar1;
  auVar3._9_7_ = 0;
  return auVar3;
}



/* Entry: 10b0f31b8; end: 10b0f31bf;  */

void FUN_10b0f31b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b0f31c0; end: 10b0f3237; -[SCNContentManagerCachePolicyManager initWithCpp:] */

undefined1 * FUN_10b0f31c0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112705cb0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x00010b0f3848();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0001052a0348(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b0f3238; end: 10b0f3373; +[SCNContentManagerCachePolicyManager create:userId:contentResolver:] */

void FUN_10b0f3238(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  func_0x00010b0f387c();
  func_0x00010b0f389c();
  _objc_retain(param_5);
  FUN_10b0f2bd0(auStack_60,param_3);
  func_0x000107c27f20(auStack_78,param_4);
  FUN_10b10ae30(auStack_88,param_5);
  FUN_10b151208(auStack_50,auStack_60,auStack_78,auStack_88);
  func_0x0001052a1398(auStack_88);
  func_0x00010b0f386c();
  func_0x0001052a712c(auStack_60);
  puVar1 = auStack_50;
  FUN_10b0f3690(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001052a0348(auStack_50);
  func_0x00010b0f3874();
  func_0x00010b0f3858();
  func_0x00010b0f3840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0f3374; end: 10b0f34af; -[SCNContentManagerCachePolicyManager setCachePolicy:contentBundle:cachePolicy:] */

void FUN_10b0f3374(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [72];
  
  func_0x00010b0f387c();
  func_0x00010b0f389c();
  _objc_retain(param_5);
  plVar2 = *(long **)(param_1 + 0x18);
  func_0x00010b0f38bc(auStack_a8);
  FUN_10b1088f8(auStack_b8,param_4);
  FUN_10b0f30c4(auStack_d0,param_5);
  (**(code **)(*plVar2 + 0x10))(auStack_88,plVar2,auStack_a8,auStack_b8,auStack_d0);
  func_0x00010529fde0(auStack_b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
  puVar1 = auStack_88;
  func_0x00010563299c(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001052a038c(auStack_88);
  func_0x00010b0f3874();
  func_0x00010b0f3858();
  func_0x00010b0f3840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0f34b0; end: 10b0f35b3; -[SCNContentManagerCachePolicyManager removeCachePolicy:contentBundle:] */

void FUN_10b0f34b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [72];
  
  func_0x00010b0f387c();
  func_0x00010b0f389c();
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010b0f38bc(auStack_98);
  FUN_10b1088f8(auStack_a8,param_4);
  (**(code **)(*plVar1 + 0x18))(auStack_78,plVar1,auStack_98,auStack_a8);
  func_0x00010529fde0(auStack_a8);
  func_0x00010b0f386c();
  func_0x00010563299c(auStack_78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f38a4();
  func_0x00010b0f3858();
  func_0x00010b0f3840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar1);
  return;
}



/* Entry: 10b0f35b4; end: 10b0f368f; -[SCNContentManagerCachePolicyManager lookupContent:] */

void FUN_10b0f35b4(long param_1)

{
  long *plVar1;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [48];
  
  func_0x00010b0f387c();
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010b0f38bc(auStack_80);
  (**(code **)(*plVar1 + 0x20))(auStack_60,plVar1,auStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  FUN_10b0fe9b0(auStack_60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f3890();
  func_0x00010b0f3840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar1);
  return;
}



/* Entry: 10b0f3690; end: 10b0f36bb;  */

void FUN_10b0f3690(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10b0f3754();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0f36bc; end: 10b0f370f; -[SCNContentManagerCachePolicyManager .cxx_destruct] */

void FUN_10b0f36bc(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cb9e78;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x0001052a0348((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b0f3710; end: 10b0f3753; -[SCNContentManagerCachePolicyManager .cxx_construct] */

undefined8 * FUN_10b0f3710(undefined8 *param_1)

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
      func_0x00010b0f3848();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b0f3754; end: 10b0f37cb;  */

void FUN_10b0f3754(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110cb9e78;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x00010b0f3848();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b0f37cc);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f38b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0f37cc; end: 10b0f383f;  */

void FUN_10b0f37cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126b9ed0;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010b0f3848();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x0001052a0348(&uStack_30);
  return;
}



/* Entry: 10b0f3840; end: 10b0f38c3;  */

void FUN_10b0f3840(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b0f38c4; end: 10b0f39c7;  */

void FUN_10b0f38c4(undefined8 *param_1,undefined8 param_2)

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
  func_0x00010c141500(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f20(&uStack_48);
  uVar2 = param_2;
  func_0x00010c141660(param_2);
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



/* Entry: 10b0f39c8; end: 10b0f3a8f;  */

void FUN_10b0f39c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126dfb40;
  _objc_alloc(PTR_PTR_1126dfb40);
  lVar2 = param_1;
  FUN_10b0f57d4(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x20;
  func_0x000107c28044(lVar3);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x38;
  func_0x000107c28044(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003740(puVar1,param_2,lVar2,lVar3,param_1);
  FUN_10b0f3a90();
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0f3a90; end: 10b0f3a9b;  */

void FUN_10b0f3a90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b0f3a9c; end: 10b0f3b13; -[SCNContentManagerCachedContentMetadataIterator initWithCpp:] */

undefined1 * FUN_10b0f3a9c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112705cb8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10b0f3f0c();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_10b0f3ee0(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b0f3b14; end: 10b0f3c47; -[SCNContentManagerCachedContentMetadataIterator next:] */

void FUN_10b0f3b14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_48;
  long lStack_40;
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(&lStack_48,*(long **)(param_1 + 0x18),param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  for (; lStack_48 != lStack_40; lStack_48 = lStack_48 + 0x50) {
    lVar2 = lStack_48;
    FUN_10b0f39c8(lStack_48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(lVar2);
  }
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  func_0x00010b0f3d0c(&lStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b0f3c48; end: 10b0f3c73;  */

void FUN_10b0f3c48(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10b0f3df4();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0f3c74; end: 10b0f3cc7; -[SCNContentManagerCachedContentMetadataIterator .cxx_destruct] */

void FUN_10b0f3c74(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cb9e88;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_10b0f3ee0((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b0f3cc8; end: 10b0f3d7f; -[SCNContentManagerCachedContentMetadataIterator .cxx_construct] */

undefined8 * FUN_10b0f3cc8(undefined8 *param_1)

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
      FUN_10b0f3f0c();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b0f3d80; end: 10b0f3d87;  */

void FUN_10b0f3d80(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x50;
    func_0x00010b0f3dc4();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10b0f3d88; end: 10b0f3df3;  */

void FUN_10b0f3d88(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x50;
    func_0x00010b0f3dc4();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10b0f3df4; end: 10b0f3e6b;  */

void FUN_10b0f3df4(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110cb9e88;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10b0f3f0c();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b0f3e6c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f3f28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0f3e6c; end: 10b0f3edf;  */

void FUN_10b0f3e6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dfb48;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10b0f3f0c();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_10b0f3ee0(&uStack_30);
  return;
}



/* Entry: 10b0f3ee0; end: 10b0f3f0b;  */

long FUN_10b0f3ee0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b0f3f0c; end: 10b0f3f3f;  */

void FUN_10b0f3f0c(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b0f3f40; end: 10b0f3fbf; -[SCNContentManagerContentBundleFactory initWithCpp:] */

undefined1 * FUN_10b0f3f40(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112705cc0;
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
    func_0x0001052a9318(&uStack_30);
  }
  return (undefined1 *)puVar4;
}



/* Entry: 10b0f3fc0; end: 10b0f406b; +[SCNContentManagerContentBundleFactory createFromContentObject:] */

void FUN_10b0f3fc0(void)

{
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [16];
  
  func_0x00010b0f45c0();
  func_0x000107c28040(auStack_58);
  FUN_10b151eb0(auStack_40,auStack_58);
  func_0x000107c27914(auStack_58);
  FUN_10b108948(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f45a4();
  func_0x00010b0f45cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0f406c; end: 10b0f417b; +[SCNContentManagerContentBundleFactory createWithStreamingProtocolAllowlist:allowlist:] */

void FUN_10b0f406c(void)

{
  undefined8 in_x3;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [16];
  
  func_0x00010b0f45c0();
  _objc_retain(in_x3);
  func_0x000107c28040(auStack_58);
  FUN_10b0f417c(auStack_70,in_x3);
  FUN_10b151eec(auStack_40,auStack_58,auStack_70);
  func_0x0001052a92cc(auStack_70);
  func_0x000107c27914(auStack_58);
  FUN_10b108948(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f4618();
  _objc_release(in_x3);
  func_0x00010b0f45cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0f417c; end: 10b0f42df;  */

void FUN_10b0f417c(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong unaff_x22;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [16];
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  ulong uStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined4 uStack_124;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar1 = param_2;
  func_0x00010bf529e0(param_2);
  func_0x0001052a8fe8(param_1,uVar1);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uVar1 = param_2;
  _objc_retain();
  func_0x00010b0f45e0();
  if (uVar1 != 0) {
    lVar4 = *plStack_110;
    do {
      uVar5 = 0;
      do {
        if (*plStack_110 != lVar4) {
          _objc_enumerationMutation(param_2);
        }
        unaff_x22 = *(ulong *)(lStack_118 + uVar5 * 8);
        _objc_retain(unaff_x22);
        uVar2 = unaff_x22;
        FUN_10b0f456c();
        uStack_124 = (undefined4)uVar2;
        func_0x0001052a91c0(param_1,&uStack_124);
        uVar2 = unaff_x22;
        _objc_release();
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar1);
      func_0x00010b0f45e0();
      uVar1 = uVar2;
    } while (uVar2 != 0);
  }
  uVar3 = 0;
  func_0x00010b0f45cc();
  func_0x00010b0f45cc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b0f45cc();
  func_0x0001052a92cc(param_1);
  func_0x00010b0f45cc();
  __Unwind_Resume(uVar3);
  pcStack_138 = FUN_10b0f42e0;
  uStack_160 = unaff_x22;
  uStack_158 = uVar3;
  puStack_150 = param_1;
  uStack_148 = param_2;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010b0f45c0();
  func_0x00010b0f460c();
  FUN_10b152000(auStack_170,auStack_188);
  func_0x00010b0f4604();
  FUN_10b108948(auStack_170);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f45a4();
  func_0x00010b0f45cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b0f42e0; end: 10b0f437b; +[SCNContentManagerContentBundleFactory createFromURL:] */

void FUN_10b0f42e0(void)

{
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [16];
  
  func_0x00010b0f45c0();
  func_0x00010b0f460c();
  FUN_10b152000(auStack_40,auStack_58);
  func_0x00010b0f4604();
  FUN_10b108948(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f45a4();
  func_0x00010b0f45cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0f437c; end: 10b0f4427; +[SCNContentManagerContentBundleFactory createFromLocalContent:] */

void FUN_10b0f437c(void)

{
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [16];
  
  func_0x00010b0f45c0();
  FUN_10b0f571c(auStack_60);
  FUN_10b15218c(auStack_40,auStack_60);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
  FUN_10b108948(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f45a4();
  func_0x00010b0f45cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0f4428; end: 10b0f44c3; +[SCNContentManagerContentBundleFactory createFromLocalCacheKey:] */

void FUN_10b0f4428(void)

{
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [16];
  
  func_0x00010b0f45c0();
  func_0x00010b0f460c();
  FUN_10b152260(auStack_40,auStack_58);
  func_0x00010b0f4604();
  FUN_10b108948(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f45a4();
  func_0x00010b0f45cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0f44c4; end: 10b0f451f; -[SCNContentManagerContentBundleFactory .cxx_destruct] */

void FUN_10b0f44c4(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cb9e98;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x0001052a9318((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b0f4520; end: 10b0f456b; -[SCNContentManagerContentBundleFactory .cxx_construct] */

undefined8 * FUN_10b0f4520(undefined8 *param_1)

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



/* Entry: 10b0f456c; end: 10b0f45a3;  */

undefined8 FUN_10b0f456c(undefined8 param_1)

{
  _objc_retain();
  func_0x00010c067fc0(param_1);
  func_0x00010b0f45cc();
  return param_1;
}



/* Entry: 10b0f45a4; end: 10b0f4623;  */

void FUN_10b0f45a4(void)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0x00000020;
  func_0x0001005f1e70();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10b0f4624; end: 10b0f4727;  */

void FUN_10b0f4624(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  if (param_2 != 0) {
    _objc_retain(param_2);
    ppuStack_48 = &PTR_DAT_110cb9f00;
    lStack_50 = param_2;
    func_0x000107c316f4(&uStack_40,&ppuStack_48,&lStack_50,FUN_10b0f4728);
    uVar1 = uStack_38;
    uVar3 = uStack_40;
    uStack_40 = 0;
    uStack_38 = 0;
    func_0x000107c27d28(&uStack_40);
    _objc_release(lStack_50);
    param_1[1] = uVar1;
    *param_1 = uVar3;
    uStack_60 = 0;
    uStack_58 = 0;
    FUN_10b0f49a4(&uStack_60);
    _objc_release(param_2);
    return;
  }
  uVar3 = 0x10;
  ___cxa_allocate_exception(0x10);
  func_0x00010527a174();
  ___cxa_throw(uVar3,PTR___ZTISt16invalid_argument_110352248,
               PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10b0f46f4);
  (*pcVar2)();
}



/* Entry: 10b0f4728; end: 10b0f4827;  */

void FUN_10b0f4728(undefined8 *param_1,long *param_2)

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
  *puVar4 = &PTR_FUN_110cb9f40;
  puVar4[3] = &PTR_DAT_110cb9fb8;
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
  puVar4[3] = &PTR_FUN_110cb9f90;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10b0f49a4(&uStack_50);
  return;
}



/* Entry: 10b0f4828; end: 10b0f482b;  */

void FUN_10b0f4828(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cb9f40;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b0f482c; end: 10b0f483f;  */

void FUN_10b0f482c(void)

{
  FUN_10b0f4994();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b0f4840; end: 10b0f484b;  */

long FUN_10b0f4840(long param_1)

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
    ppuStack_38 = &PTR_DAT_110cb9f00;
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



/* Entry: 10b0f484c; end: 10b0f488b;  */

void FUN_10b0f484c(void)

{
  FUN_10b0f49d0();
  return;
}



/* Entry: 10b0f488c; end: 10b0f48ff;  */

void FUN_10b0f488c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_10b0fae60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0920(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10b0f4900; end: 10b0f4993;  */

long FUN_10b0f4900(long param_1)

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
    ppuStack_38 = &PTR_DAT_110cb9f00;
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



/* Entry: 10b0f4994; end: 10b0f49a3;  */

void FUN_10b0f4994(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cb9f40;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b0f49a4; end: 10b0f49cf;  */

long FUN_10b0f49a4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b0f49d0; end: 10b0f49db;  */

long FUN_10b0f49d0(long param_1)

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
    ppuStack_38 = &PTR_DAT_110cb9f00;
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



/* Entry: 10b0f49dc; end: 10b0f4a53; -[SCNContentManagerContentFetcher initWithCpp:] */

undefined1 * FUN_10b0f49dc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112705cc8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10b0f5668();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0001052a1374(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b0f4a54; end: 10b0f4c17; +[SCNContentManagerContentFetcher create:contentResolver:cacheController:streamingManifestParser:userId:] */

void FUN_10b0f4a54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  func_0x00010b0f56f4();
  func_0x00010b0f56ec();
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  FUN_10b10d504(auStack_70,param_3);
  FUN_10b10ae30(auStack_80,param_4);
  FUN_10b0f2bd0(auStack_90,param_5);
  FUN_10b103a04(auStack_a0,param_6);
  func_0x000107c27f20(auStack_b8,param_7);
  FUN_10b152954(auStack_60,auStack_70,auStack_80,auStack_90,auStack_a0,auStack_b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
  func_0x0001052a9ed0(auStack_a0);
  func_0x0001052a712c(auStack_90);
  func_0x0001052a1398(auStack_80);
  func_0x0001052a9ef8(auStack_70);
  puVar1 = auStack_60;
  FUN_10b0f5188(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001052a1374(auStack_60);
  func_0x00010b0f569c();
  func_0x00010b0f56bc();
  func_0x00010b0f56a4();
  func_0x00010b0f56ac();
  func_0x00010b0f56b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0f4c18; end: 10b0f4d57; -[SCNContentManagerContentFetcher prefetchContent:requestContext:prefetchSignals:] */

void FUN_10b0f4c18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined1 auStack_118 [64];
  undefined1 auStack_d8 [120];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  func_0x00010b0f56f4();
  func_0x00010b0f56ec();
  _objc_retain(param_5);
  plVar2 = *(long **)(param_1 + 0x18);
  FUN_10b1088f8(auStack_60,param_3);
  FUN_10b49b094(auStack_d8,param_4);
  FUN_10b0efa8c(auStack_118,param_5);
  (**(code **)(*plVar2 + 0x10))(auStack_50,plVar2,auStack_60,auStack_d8,auStack_118);
  func_0x00010529fe04(auStack_d8);
  func_0x00010529fde0(auStack_60);
  puVar1 = auStack_50;
  FUN_10b1006f8(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001052a00dc(auStack_50);
  func_0x00010b0f56a4();
  func_0x00010b0f56ac();
  func_0x00010b0f56b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0f4d58; end: 10b0f504f; -[SCNContentManagerContentFetcher getStreamingVariantCacheStatus:] */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b0f4d58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  int extraout_w10;
  long *plVar5;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  long lStack_88;
  long alStack_78 [7];
  
  func_0x00010b0f56f4();
  plVar5 = *(long **)(param_1 + 0x18);
  FUN_10b1088f8(alStack_78 + 5,param_3);
  (**(code **)(*plVar5 + 0x18))(&uStack_d0,plVar5,alStack_78 + 5);
  func_0x00010529fde0(alStack_78 + 5);
  uStack_d8 = uStack_c8;
  uStack_e0 = uStack_d0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  puVar1 = PTR_PTR_1126b8058;
  _objc_alloc_init();
  puVar2 = puVar1;
  func_0x00010bfc5fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f56ec();
  alStack_78[5] = 0;
  alStack_78[6] = 0;
  alStack_78[1] = 0;
  alStack_78[2] = 0;
  func_0x0001052a9b74(alStack_78 + 3,&uStack_e0,alStack_78 + 1);
  func_0x0001052a9bc8(alStack_78 + 5,alStack_78 + 3);
  func_0x0001052a9c3c(alStack_78 + 3);
  func_0x0001052a9c3c(alStack_78 + 1);
  func_0x000107c27b48(alStack_78);
  func_0x000107c27b4c(alStack_78 + 3,alStack_78[0]);
  lStack_88 = alStack_78[0];
  alStack_78[0] = 0;
  lStack_a0 = 0;
  lStack_98 = 0;
  lStack_b0 = alStack_78[5] + 0x50;
  lStack_a8 = CONCAT71(lStack_a8._1_7_,1);
  puStack_90 = puVar1;
  __ZNSt3__15mutex4lockEv();
  lVar3 = alStack_78[5];
  func_0x0001052a9c04();
  if ((int)lVar3 == 0) {
    puVar4 = (undefined8 *)0x18;
    __Znwm();
    lVar3 = lStack_88;
    puVar1 = puStack_90;
    *puVar4 = &PTR_FUN_110cb9ff0;
    puStack_90 = (undefined *)0x0;
    lStack_88 = 0;
    puVar4[2] = lVar3;
    puVar4[1] = puVar1;
    plVar5 = *(long **)(alStack_78[5] + 0x98);
    *(undefined8 **)(alStack_78[5] + 0x98) = puVar4;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
  else {
    func_0x0001052a9bc8(&lStack_a0,alStack_78 + 5);
  }
  func_0x000107c2798c(&lStack_b0);
  if (lStack_a0 != 0) {
    lStack_b0 = lStack_a0;
    lStack_a8 = lStack_98;
    if (lStack_98 != 0) {
      do {
        func_0x00010b0f5668();
      } while (extraout_w10 != 0);
    }
    FUN_10b0f5328(&puStack_90);
    func_0x0001052a9c3c(&lStack_b0);
  }
  uStack_b8 = alStack_78[4];
  uStack_c0 = alStack_78[3];
  alStack_78[3] = 0;
  alStack_78[4] = 0;
  func_0x0001052a9c3c(&lStack_a0);
  func_0x00010b0f563c(&puStack_90);
  func_0x000107c27b58(alStack_78 + 3);
  lVar3 = alStack_78[0];
  alStack_78[0] = 0;
  if (lVar3 != 0) {
    func_0x00010b0f56fc();
  }
  func_0x0001052a9c3c(alStack_78 + 5);
  func_0x000107c27b58(&uStack_c0);
  _objc_release(0);
  func_0x00010b0f56ac();
  func_0x00010b0f56d0();
  func_0x0001052a9c3c(&uStack_d0);
  func_0x00010b0f56b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0f5050; end: 10b0f50fb; -[SCNContentManagerContentFetcher shutdown] */

void FUN_10b0f5050(long param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))(&uStack_30);
  uStack_38 = uStack_28;
  uStack_40 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000108646b18(&uStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f56c4();
  func_0x000107c27b58();
  func_0x000107c27b58(&uStack_30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0f50fc; end: 10b0f5187;  */

void FUN_10b0f50fc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int extraout_w10;
  undefined8 uVar4;
  
  _objc_retain();
  if (param_2 == 0) {
    plVar1 = (long *)0x10;
    ___cxa_allocate_exception();
    func_0x00010527a174();
    plVar2 = plVar1;
    ___cxa_throw(plVar1,PTR___ZTISt16invalid_argument_110352248,
                 PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
    ___cxa_free_exception(plVar1);
    __Unwind_Resume();
    if (*plVar2 != 0) {
      FUN_10b0f5248();
      _objc_retainAutoreleasedReturnValue();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  lVar3 = *(long *)(param_2 + 0x20);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  param_1[1] = *(undefined8 *)(param_2 + 0x20);
  *param_1 = uVar4;
  if (lVar3 != 0) {
    do {
      FUN_10b0f5668();
    } while (extraout_w10 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0f5188; end: 10b0f51b3;  */

void FUN_10b0f5188(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10b0f5248();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0f51b4; end: 10b0f5207; -[SCNContentManagerContentFetcher .cxx_destruct] */

void FUN_10b0f51b4(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cb9fd0;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x0001052a1374((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b0f5208; end: 10b0f5247; -[SCNContentManagerContentFetcher .cxx_construct] */

undefined8 * FUN_10b0f5208(undefined8 *param_1)

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
      FUN_10b0f5668();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b0f5248; end: 10b0f52bb;  */

void FUN_10b0f5248(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110cb9fd0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10b0f5668();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b0f52bc);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b0f56c4();
  func_0x000107c27d28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0f52bc; end: 10b0f5327;  */

void FUN_10b0f52bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126b7f88;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10b0f5668();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x0001052a1374(&uStack_30);
  return;
}



/* Entry: 10b0f5328; end: 10b0f55a7;  */

void FUN_10b0f5328(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  
  uStack_78 = param_2;
  lStack_70 = param_3;
  if (param_3 != 0) {
    do {
      FUN_10b0f5668();
    } while (extraout_w10 != 0);
    do {
      FUN_10b0f5668();
    } while (extraout_w10_00 != 0);
  }
  uVar2 = *param_1;
  uStack_68 = param_2;
  lStack_60 = param_3;
  func_0x0001052a9c64(&lStack_58,&uStack_68);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  for (; lStack_58 != lStack_50; lStack_58 = lStack_58 + 0x30) {
    FUN_10b1043b8(lStack_58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    func_0x00010b0f569c();
  }
  func_0x00010bf51e00(puVar1);
  func_0x00010b0f56bc();
  func_0x00010c220160(uVar2);
  func_0x00010b0f56a4();
  func_0x0001052a9de8(&lStack_58);
  func_0x0001052a9c3c(&uStack_68);
  func_0x0001052a9c3c(&uStack_78);
  func_0x000107c27b68(param_1[1]);
  return;
}



/* Entry: 10b0f55a8; end: 10b0f55ab;  */

undefined8 * FUN_10b0f55a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cb9ff0;
  func_0x00010b0f563c(param_1 + 1);
  return param_1;
}



/* Entry: 10b0f55ac; end: 10b0f55bf;  */

void FUN_10b0f55ac(void)

{
  FUN_10b0f5610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b0f55c0; end: 10b0f560f;  */

void FUN_10b0f55c0(long param_1,long param_2)

{
  int extraout_w10;
  
  if (*(long *)(param_2 + 8) != 0) {
    do {
      FUN_10b0f5668();
    } while (extraout_w10 != 0);
  }
  FUN_10b0f5328(param_1 + 8);
  func_0x00010b0f56d0();
  return;
}



/* Entry: 10b0f5610; end: 10b0f5667;  */

undefined8 * FUN_10b0f5610(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cb9ff0;
  func_0x00010b0f563c(param_1 + 1);
  return param_1;
}



/* Entry: 10b0f5668; end: 10b0f571b;  */

void FUN_10b0f5668(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b0f571c; end: 10b0f57d3;  */

void FUN_10b0f571c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c0c5180(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f20(&uStack_48);
  func_0x00010c0c46a0();
  param_1[1] = uStack_40;
  *param_1 = uStack_48;
  param_1[2] = uStack_38;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  *(int *)(param_1 + 3) = (int)param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_48);
  _objc_release(uVar1);
  FUN_10b0f5848();
  return;
}



/* Entry: 10b0f57d4; end: 10b0f5847;  */

void FUN_10b0f57d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b08b8;
  _objc_alloc(PTR_PTR_1126b08b8);
  lVar2 = param_1;
  func_0x000107c27f28(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0295e0(puVar1,param_2,lVar2,(long)*(int *)(param_1 + 0x18));
  FUN_10b0f5848();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0f5848; end: 10b0f584f;  */

void FUN_10b0f5848(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b0f5850; end: 10b0f58c7; -[SCNContentManagerContentManager initWithCpp:] */

undefined1 * FUN_10b0f5850(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112705cd0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x00010b0f8114();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c2789c(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b0f58c8; end: 10b0f59bf; +[SCNContentManagerContentManager createWithCacheController:cacheController:] */

void FUN_10b0f58c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  func_0x00010b0f8088();
  func_0x00010b0f8090();
  func_0x000107c2bdf8(auStack_50,param_3);
  func_0x00010b0f81cc();
  FUN_10b0f2bd0();
  FUN_10b112688(auStack_40,auStack_50,auStack_60);
  func_0x0001052a712c(auStack_60);
  func_0x000107c2bdf4(auStack_50);
  puVar1 = auStack_40;
  FUN_10b0f78cc(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c2789c(auStack_40);
  func_0x00010b0f8060();
  func_0x00010b0f8038();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0f59c0; end: 10b0f5b1b; +[SCNContentManagerContentManager createWithGRPC:cacheController:authContextDelegate:cronetPointer:] */

void FUN_10b0f59c0(undefined8 param_1,ulong param_2)

{
  undefined1 *puVar1;
  undefined8 in_x5;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  func_0x00010b0f8040();
  func_0x00010b0f8088();
  func_0x00010b0f8090();
  func_0x00010b0f8134();
  func_0x00010b0f812c();
  func_0x000107c2bdf8(auStack_60);
  FUN_10b0f2bd0(auStack_70);
  func_0x000107c2c49c(auStack_80);
  func_0x000107c28134(in_x5);
  FUN_10b1127f8(auStack_50,auStack_60,auStack_70,auStack_80,in_x5,param_2 & 0xff);
  func_0x000107c278a4(auStack_80);
  func_0x0001052a712c(auStack_70);
  func_0x000107c2bdf4(auStack_60);
  puVar1 = auStack_50;
  FUN_10b0f78cc(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c2789c(auStack_50);
  func_0x00010b0f80a8();
  func_0x00010b0f80b0();
  func_0x00010b0f8060();
  func_0x00010b0f8038();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0f5b1c; end: 10b0f5b9f; -[SCNContentManagerContentManager defineBlizzardProtoLogger:] */

void FUN_10b0f5b1c(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_40 [16];
  
  func_0x00010b0f8028();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x00010b0f81d8();
  FUN_10b107564();
  func_0x00010b0f82bc(*(undefined8 *)(*plVar1 + 0x10));
  func_0x0001052b61cc(auStack_40);
  func_0x00010b0f8038();
  return;
}



/* Entry: 10b0f5ba0; end: 10b0f5c23; -[SCNContentManagerContentManager defineBoltNetworkRulesProvider:] */

void FUN_10b0f5ba0(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_40 [16];
  
  func_0x00010b0f8028();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x00010b0f81d8();
  FUN_10b10804c();
  func_0x00010b0f82bc(*(undefined8 *)(*plVar1 + 0x18));
  func_0x0001052b2f08(auStack_40);
  func_0x00010b0f8038();
  return;
}



/* Entry: 10b0f5c24; end: 10b0f5cbf; -[SCNContentManagerContentManager refreshContentAvailability:] */

void FUN_10b0f5c24(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_48 [24];
  
  func_0x00010b0f8028();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  FUN_10b0f5cc0(auStack_48);
  (**(code **)(*plVar1 + 0x20))(plVar1,auStack_48);
  func_0x00010b0f79e0(auStack_48);
  func_0x00010b0f8038();
  return;
}


