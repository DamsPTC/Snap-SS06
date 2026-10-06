/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105631e90; end: 105631eeb; -[SCNCupsContentUploadCallbackCppProxy .cxx_destruct] */

void FUN_105631e90(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1108a1300;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x000105632298((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 105631eec; end: 105631f2b; -[SCNCupsContentUploadCallbackCppProxy .cxx_construct] */

undefined8 * FUN_105631eec(undefined8 *param_1)

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
      func_0x0001056322d0();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 105631f2c; end: 105632023;  */

void FUN_105631f2c(undefined8 *param_1,long *param_2)

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
  *puVar1 = &PTR_FUN_1108a1260;
  puVar1[3] = &PTR_DAT_1108a12e0;
  puVar2 = puVar5;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar3 = puVar2;
  func_0x0001000de520();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      func_0x0001056322d0();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  puVar1[3] = &PTR_FUN_1108a12b0;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_105632270(&uStack_50);
  return;
}



/* Entry: 105632024; end: 105632027;  */

void FUN_105632024(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a1260;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105632028; end: 10563203b;  */

void FUN_105632028(void)

{
  FUN_105632260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10563203c; end: 105632047;  */

long FUN_10563203c(long param_1)

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
    ppuStack_38 = &PTR_DAT_1108a1220;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    func_0x0001056322c8();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 105632048; end: 105632083;  */

void FUN_105632048(void)

{
  func_0x000105632308();
  return;
}



/* Entry: 105632084; end: 105632147;  */

void FUN_105632084(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x19;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 uVar1;
  
  func_0x0001056322f0();
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x0001001011a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100837700();
  _objc_retainAutoreleasedReturnValue();
  FUN_10563275c(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e6d40(uVar1,param_2,unaff_x19,unaff_x21,param_4);
  _objc_release(param_4);
  func_0x0001056322c8();
  func_0x0001056322c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 105632148; end: 1056321cf;  */

void FUN_105632148(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x19;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 uVar1;
  
  func_0x0001056322f0();
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x00010bcc1ca8();
  _objc_retainAutoreleasedReturnValue();
  FUN_10563275c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e4100(uVar1,param_2,unaff_x19,unaff_x21);
  func_0x0001056322c8();
  func_0x0001056322c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 1056321d0; end: 10563225f;  */

long FUN_1056321d0(long param_1)

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
    ppuStack_38 = &PTR_DAT_1108a1220;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    func_0x0001056322c8();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 105632260; end: 10563226f;  */

void FUN_105632260(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a1260;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105632270; end: 1056322bf;  */

long FUN_105632270(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1056322c0; end: 10563231f;  */

void FUN_1056322c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105632320; end: 105632693;  */

void FUN_105632320(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_228 [168];
  undefined1 auStack_180 [32];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [40];
  undefined1 auStack_108 [32];
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [72];
  undefined1 auStack_80 [32];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010bf0b7a0();
  uVar2 = param_2;
  func_0x00010bf4db80();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(auStack_80);
  uVar3 = param_2;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_105632694(auStack_c8);
  uVar4 = param_2;
  func_0x00010bf9fd20();
  uVar5 = param_2;
  func_0x00010bfad060(param_2);
  func_0x00010bfb23c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100114864(auStack_e8);
  func_0x00010bfb23e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100114864(auStack_108);
  func_0x00010bfe4da0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100626d7c(auStack_130);
  uVar6 = param_2;
  func_0x00010bfe4dc0();
  func_0x00010c08ae60();
  func_0x00010c0c5180(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(auStack_148);
  func_0x00010c0c59e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(auStack_160);
  func_0x00010c0c6800();
  func_0x00010c0c6c20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100114864(auStack_180);
  func_0x00010c28e0a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_1056326f8(auStack_228);
  func_0x00010c28e560();
  FUN_105632aa4(param_1,uVar1 & 0xffffffff,auStack_80,auStack_c8,uVar4,uVar5,auStack_e8,auStack_108,
                auStack_130,(int)uVar6);
  FUN_1056319a4(auStack_228);
  func_0x000105632d90();
  func_0x0001001148fc(auStack_180);
  func_0x000105632d88();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_160);
  func_0x000105632d58();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_148);
  func_0x000105632d80();
  func_0x00010028ad98(auStack_130);
  func_0x000105632d60();
  func_0x0001001148fc(auStack_108);
  func_0x000105632d78();
  func_0x0001001148fc(auStack_e8);
  func_0x000105632d70();
  FUN_1052a038c(auStack_c8);
  _objc_release(uVar3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  _objc_release(uVar2);
  func_0x000100626e9c();
  return;
}



/* Entry: 105632694; end: 1056326f7;  */

void FUN_105632694(void)

{
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_60 [64];
  
  func_0x000100626d70();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[0x40] = 0;
  }
  else {
    func_0x00010bcc1b7c(auStack_60);
    FUN_1052b8c70();
    FUN_1052a03ac(auStack_60);
  }
  func_0x000100626e9c();
  return;
}



/* Entry: 1056326f8; end: 10563275b;  */

void FUN_1056326f8(void)

{
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_c0 [160];
  
  func_0x000100626d70();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[0xa0] = 0;
  }
  else {
    FUN_105634f30(auStack_c0);
    FUN_105632d34();
    FUN_1056319c4(auStack_c0);
  }
  func_0x000100626e9c();
  return;
}



/* Entry: 10563275c; end: 10563299b;  */

void FUN_10563275c(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  
  puVar5 = PTR_PTR_1126bc6f0;
  _objc_alloc(PTR_PTR_1126bc6f0);
  puVar7 = param_1 + 8;
  uVar3 = *param_1;
  puVar6 = param_1 + 2;
  func_0x0001001011a4();
  _objc_retainAutoreleasedReturnValue();
  FUN_10563299c();
  _objc_retainAutoreleasedReturnValue();
  iVar4 = param_1[0x1a];
  uVar12 = *(undefined8 *)(param_1 + 0x1c);
  puVar8 = param_1 + 0x1e;
  func_0x0001006a7df8();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = param_1 + 0x26;
  func_0x0001006a7df8();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = param_1 + 0x2e;
  FUN_1056329cc();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1[0x38];
  func_0x0001001011a4();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = param_1 + 0x42;
  func_0x0001001011a4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1[0x48];
  func_0x0001006a7df8();
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x7a) == '\x01') {
    FUN_1056350d0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bff4620(puVar5,param_2,uVar3,puVar6,puVar7,(long)iVar4,uVar12,puVar8,puVar9,puVar10,
                      uVar1);
  func_0x000105632d98();
  func_0x000105632d58();
  _objc_release(puVar11);
  func_0x000105632d60();
  func_0x000105632d90();
  func_0x000105632d80();
  func_0x000105632d68();
  _objc_release(puVar7);
  func_0x000105632d88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10563299c; end: 1056329cb;  */

void FUN_10563299c(long param_1)

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



/* Entry: 1056329cc; end: 105632aa3;  */

void FUN_1056329cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71fe0(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,
                      *(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  plVar4 = (long *)(param_1 + 0x10);
  while (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0) {
    lVar2 = (long)(plVar4 + 5);
    func_0x0001001011a4(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = (long)(plVar4 + 2);
    func_0x0001001011a4(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar1,param_2,lVar2,lVar3);
    func_0x000105632d58();
    func_0x000105632d68();
  }
  func_0x00010bf51e00(puVar1);
  func_0x000100626e9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105632aa4; end: 105632c47;  */

undefined4 *
FUN_105632aa4(undefined4 *param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
             undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
             undefined8 *param_13,undefined8 *param_14,undefined4 param_15,undefined4 param_16,
             undefined8 *param_17,undefined8 param_18,undefined4 param_19)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 6) = param_3[2];
  *(undefined8 *)(param_1 + 4) = uVar2;
  *(undefined8 *)(param_1 + 2) = uVar1;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  FUN_1052a07e8(param_1 + 8,param_4);
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x1a] = param_5;
  *(undefined8 *)(param_1 + 0x1c) = param_6;
  *(undefined1 *)(param_1 + 0x24) = 0;
  if (*(char *)(param_7 + 3) == '\x01') {
    uVar2 = param_7[1];
    uVar1 = *param_7;
    *(undefined8 *)(param_1 + 0x22) = param_7[2];
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(undefined8 *)(param_1 + 0x1e) = uVar1;
    param_7[1] = 0;
    param_7[2] = 0;
    *param_7 = 0;
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  if (*(char *)(param_8 + 3) == '\x01') {
    uVar2 = param_8[1];
    uVar1 = *param_8;
    *(undefined8 *)(param_1 + 0x2a) = param_8[2];
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    *(undefined8 *)(param_1 + 0x26) = uVar1;
    param_8[1] = 0;
    param_8[2] = 0;
    *param_8 = 0;
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
  func_0x00010028acf0(param_1 + 0x2e,param_9);
  param_1[0x38] = param_10;
  *(undefined8 *)(param_1 + 0x3a) = param_12;
  uVar2 = param_13[1];
  uVar1 = *param_13;
  *(undefined8 *)(param_1 + 0x40) = param_13[2];
  *(undefined8 *)(param_1 + 0x3e) = uVar2;
  *(undefined8 *)(param_1 + 0x3c) = uVar1;
  param_13[1] = 0;
  param_13[2] = 0;
  *param_13 = 0;
  uVar2 = param_14[1];
  uVar1 = *param_14;
  *(undefined8 *)(param_1 + 0x46) = param_14[2];
  *(undefined8 *)(param_1 + 0x44) = uVar2;
  *(undefined8 *)(param_1 + 0x42) = uVar1;
  param_14[1] = 0;
  param_14[2] = 0;
  *param_14 = 0;
  param_1[0x48] = param_15;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  if (*(char *)(param_17 + 3) == '\x01') {
    uVar2 = param_17[1];
    uVar1 = *param_17;
    *(undefined8 *)(param_1 + 0x4e) = param_17[2];
    *(undefined8 *)(param_1 + 0x4c) = uVar2;
    *(undefined8 *)(param_1 + 0x4a) = uVar1;
    param_17[1] = 0;
    param_17[2] = 0;
    *param_17 = 0;
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  FUN_105632c48(param_1 + 0x52,param_18);
  param_1[0x7c] = param_19;
  return param_1;
}



/* Entry: 105632c48; end: 105632c77;  */

undefined1 * FUN_105632c48(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0xa0] = 0;
  FUN_105632c78();
  return param_1;
}



/* Entry: 105632c78; end: 105632c8b;  */

void FUN_105632c78(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_105632ca8();
    *(undefined1 *)(param_1 + 0xa0) = 1;
    return;
  }
  return;
}



/* Entry: 105632c8c; end: 105632ca7;  */

void FUN_105632c8c(long param_1)

{
  FUN_105632ca8();
  *(undefined1 *)(param_1 + 0xa0) = 1;
  return;
}



/* Entry: 105632ca8; end: 105632d1f;  */

void FUN_105632ca8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_1052a07e8();
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  uVar1 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x90);
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  return;
}



/* Entry: 105632d20; end: 105632d33;  */

void FUN_105632d20(long param_1,long param_2)

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



/* Entry: 105632d34; end: 105632d4f;  */

void FUN_105632d34(long param_1)

{
  FUN_105632ca8();
  *(undefined1 *)(param_1 + 0xa0) = 1;
  return;
}



/* Entry: 105632d50; end: 105632da3;  */

void FUN_105632d50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 105632da4; end: 105632ee3;  */

void FUN_105632da4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [24];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010bf641a0(param_2);
  func_0x00010bfeb700(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000feea4(auStack_58);
  uVar2 = param_2;
  func_0x00010c09d8e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100114864(auStack_78);
  func_0x00010c25c620(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_105632ee4(auStack_88);
  FUN_105632f2c(param_1,uVar1,auStack_58,auStack_78,auStack_88);
  FUN_1052bb074(auStack_88);
  _objc_release(param_2);
  func_0x0001001148fc(auStack_78);
  _objc_release(uVar2);
  func_0x0001000ff348(auStack_58);
  FUN_105632fac();
  func_0x0001000ff25c();
  return;
}



/* Entry: 105632ee4; end: 105632f2b;  */

void FUN_105632ee4(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001000fee98();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
  }
  else {
    func_0x00010b49a03c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105632f2c; end: 105632fab;  */

undefined4 *
FUN_105632f2c(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  func_0x0001000ff320(param_1 + 2,param_3);
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  if (*(char *)(param_4 + 3) == '\x01') {
    uVar2 = param_4[1];
    uVar1 = *param_4;
    *(undefined8 *)(param_1 + 0xc) = param_4[2];
    *(undefined8 *)(param_1 + 10) = uVar2;
    *(undefined8 *)(param_1 + 8) = uVar1;
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  uVar1 = *param_5;
  *(undefined8 *)(param_1 + 0x12) = param_5[1];
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *param_5 = 0;
  param_5[1] = 0;
  return param_1;
}



/* Entry: 105632fac; end: 105632fb3;  */

void FUN_105632fac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105632fb4; end: 1056331ef;  */

void FUN_105632fb4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_130 [32];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [32];
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [88];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010bf0b7a0(param_2);
  uVar2 = param_2;
  func_0x00010bf4c200(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_105632da4(auStack_b8);
  uVar3 = param_2;
  func_0x00010bfb23c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100114864(auStack_d8);
  uVar4 = param_2;
  func_0x00010bfb23e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100114864(auStack_f8);
  uVar5 = param_2;
  func_0x00010c0c5180(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(auStack_110);
  uVar6 = param_2;
  func_0x00010c0c67e0(param_2);
  uVar7 = param_2;
  func_0x00010c0c6c20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100114864(auStack_130);
  uVar8 = param_2;
  func_0x00010c235140();
  uVar9 = param_2;
  func_0x00010c28e580();
  FUN_1056331f0(param_1,uVar1,auStack_b8,auStack_d8,auStack_f8,auStack_110,uVar6,auStack_130,
                (char)uVar8,(int)uVar9);
  func_0x0001001148fc(auStack_130);
  _objc_release(uVar7);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_110);
  _objc_release(uVar5);
  func_0x0001001148fc(auStack_f8);
  _objc_release(uVar4);
  func_0x0001001148fc(auStack_d8);
  _objc_release(uVar3);
  func_0x000105633388(auStack_b8);
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 1056331f0; end: 105633313;  */

undefined4 *
FUN_1056331f0(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined4 param_7,undefined8 *param_8,
             undefined1 param_9,undefined4 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  FUN_105633314(param_1 + 2,param_3);
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  if (*(char *)(param_4 + 3) == '\x01') {
    uVar2 = param_4[1];
    uVar1 = *param_4;
    *(undefined8 *)(param_1 + 0x1a) = param_4[2];
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    *(undefined8 *)(param_1 + 0x16) = uVar1;
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  if (*(char *)(param_5 + 3) == '\x01') {
    uVar2 = param_5[1];
    uVar1 = *param_5;
    *(undefined8 *)(param_1 + 0x22) = param_5[2];
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(undefined8 *)(param_1 + 0x1e) = uVar1;
    param_5[1] = 0;
    param_5[2] = 0;
    *param_5 = 0;
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
  uVar2 = param_6[1];
  uVar1 = *param_6;
  *(undefined8 *)(param_1 + 0x2a) = param_6[2];
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(undefined8 *)(param_1 + 0x26) = uVar1;
  param_6[1] = 0;
  param_6[2] = 0;
  *param_6 = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x2c] = param_7;
  *(undefined1 *)(param_1 + 0x34) = 0;
  if (*(char *)(param_8 + 3) == '\x01') {
    uVar2 = param_8[1];
    uVar1 = *param_8;
    *(undefined8 *)(param_1 + 0x32) = param_8[2];
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    *(undefined8 *)(param_1 + 0x2e) = uVar1;
    param_8[1] = 0;
    param_8[2] = 0;
    *param_8 = 0;
    *(undefined1 *)(param_1 + 0x34) = 1;
  }
  *(undefined1 *)(param_1 + 0x36) = param_9;
  param_1[0x37] = param_10;
  return param_1;
}



/* Entry: 105633314; end: 1056333bf;  */

undefined4 * FUN_105633314(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x0001000ff320(param_1 + 2,param_2 + 2);
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  if (*(char *)(param_2 + 0xe) == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 10);
    uVar1 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 10) = uVar2;
    *(undefined8 *)(param_1 + 8) = uVar1;
    *(undefined8 *)(param_2 + 10) = 0;
    *(undefined8 *)(param_2 + 0xc) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  return param_1;
}



/* Entry: 1056333c0; end: 10563348b;  */

void FUN_1056333c0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c0c5180(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(&uStack_48);
  uVar2 = param_2;
  func_0x00010c0c67e0();
  uVar3 = param_2;
  func_0x00010bf0b7a0();
  param_1[1] = uStack_40;
  *param_1 = uStack_48;
  param_1[2] = uStack_38;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  *(int *)(param_1 + 3) = (int)uVar2;
  *(int *)((long)param_1 + 0x1c) = (int)uVar3;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_48);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10563348c; end: 105633503; -[SCNCupsContentUploader initWithCpp:] */

undefined1 * FUN_10563348c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126e9728;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000105634640();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_105631a70(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105633504; end: 1056336a3; +[SCNCupsContentUploader create:tweaks:dbPath:] */

void FUN_105633504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int extraout_w10;
  undefined ***pppuVar1;
  undefined **appuStack_a8 [3];
  long lStack_90;
  long lStack_88;
  undefined1 auStack_60 [16];
  long lStack_50;
  long lStack_48;
  
  func_0x0001056346e0();
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010b10d504(auStack_60,param_3);
  FUN_1056336a4(&lStack_90,param_4);
  func_0x0001000fbca4(appuStack_a8,param_5);
  FUN_105640600(&lStack_50,auStack_60,&lStack_90,appuStack_a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appuStack_a8);
  FUN_105633af4(&lStack_90);
  func_0x0001052a9ef8(auStack_60);
  if (lStack_50 == 0) {
    pppuVar1 = (undefined ***)0x0;
  }
  else {
    appuStack_a8[0] = &PTR_DAT_1108a1340;
    lStack_90 = lStack_50;
    lStack_88 = lStack_48;
    if (lStack_48 != 0) {
      do {
        func_0x000105634640();
      } while (extraout_w10 != 0);
    }
    pppuVar1 = appuStack_a8;
    func_0x00010015c218(pppuVar1,&lStack_90,FUN_105633bf4);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001000df524(&lStack_90);
  }
  FUN_105631a70(&lStack_50);
  func_0x0001056346d0();
  func_0x0001056346d8();
  func_0x000105634638();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar1);
  return;
}



/* Entry: 1056336a4; end: 105633707;  */

void FUN_1056336a4(void)

{
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_48 [40];
  
  func_0x00010563466c();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[0x28] = 0;
  }
  else {
    FUN_105633c64(auStack_48);
    FUN_10563461c();
    FUN_105633b14(auStack_48);
  }
  func_0x000105634638();
  return;
}



/* Entry: 105633708; end: 10563395f; -[SCNCupsContentUploader uploadContentWithUploadLocation:uploadHeaders:contentURL:contentObject:uploadUrlExpiryTimeMs:contentUploadRequest:uploadLocationCallbackMetrics:callback:] */

void FUN_105633708(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long *plVar1;
  undefined1 auStack_268 [16];
  undefined1 auStack_258 [168];
  undefined1 auStack_1b0 [224];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [32];
  
  func_0x0001056346e0();
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x0001000fbca4(auStack_80,param_3);
  func_0x000100626d7c(auStack_a8,param_4);
  func_0x0001000fbca4(auStack_c0,param_5);
  func_0x0001000fef20(auStack_d0,param_6);
  FUN_105632fb4(auStack_1b0,param_8);
  FUN_1056326f8(auStack_258,param_9);
  FUN_105631da8(auStack_268,param_10);
  (**(code **)(*plVar1 + 0x10))
            (plVar1,auStack_80,auStack_a8,auStack_c0,auStack_d0,param_7,auStack_1b0,auStack_258,
             auStack_268);
  func_0x000105632298(auStack_268);
  FUN_1056319a4(auStack_258);
  FUN_105633bb0(auStack_1b0);
  func_0x0001000ff1ac(auStack_d0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
  func_0x00010028ad98(auStack_a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  func_0x0001056346d0();
  func_0x0001056346d8();
  func_0x000105634638();
  return;
}



/* Entry: 105633960; end: 105633a17; -[SCNCupsContentUploader getUploadContentStatus:] */

long FUN_105633960(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_50 [32];
  
  func_0x0001056346e0();
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_1056333c0(auStack_50,param_3);
  (**(code **)(*plVar1 + 0x18))(plVar1,auStack_50);
  func_0x0001056346e8();
  func_0x000105634638();
  return (long)(int)plVar1;
}



/* Entry: 105633a18; end: 105633a5f;  */

void FUN_105633a18(void)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  func_0x00010563466c();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
  }
  else {
    lVar1 = *(long *)(unaff_x19 + 0x20);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x18);
    unaff_x20[1] = *(undefined8 *)(unaff_x19 + 0x20);
    *unaff_x20 = uVar2;
    if (lVar1 != 0) {
      do {
        func_0x000105634640();
      } while (extraout_w10 != 0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105633a60; end: 105633ab3; -[SCNCupsContentUploader .cxx_destruct] */

void FUN_105633a60(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1108a1340;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  FUN_105631a70((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 105633ab4; end: 105633af3; -[SCNCupsContentUploader .cxx_construct] */

undefined8 * FUN_105633ab4(undefined8 *param_1)

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
      func_0x000105634640();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 105633af4; end: 105633b13;  */

void FUN_105633af4(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_105633b14();
  }
  return;
}



/* Entry: 105633b14; end: 105633b97;  */

long FUN_105633b14(long param_1)

{
  func_0x000105633b3c(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_105633b98(param_1,0);
  return param_1;
}



/* Entry: 105633b98; end: 105633baf;  */

void FUN_105633b98(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 105633bb0; end: 105633bf3;  */

long FUN_105633bb0(long param_1)

{
  func_0x0001001148fc(param_1 + 0xb8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x98);
  func_0x0001001148fc(param_1 + 0x78);
  func_0x0001001148fc(param_1 + 0x58);
  func_0x000105633388(param_1 + 8);
  return param_1;
}



/* Entry: 105633bf4; end: 105633c63;  */

void FUN_105633bf4(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126bc5c8;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000105634640();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_105631a70(&uStack_30);
  return;
}



/* Entry: 105633c64; end: 105633d63;  */

void FUN_105633c64(void)

{
  undefined8 unaff_x19;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  char *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  func_0x00010563466c();
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x5812000000;
  pcStack_70 = FUN_105633d64;
  uStack_68 = 0x105633d70;
  pcStack_60 = "";
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_38 = 0x3f800000;
  func_0x00010bf529e0();
  func_0x000105633e84(&uStack_58,unaff_x19);
  func_0x00010bf97ce0();
  FUN_105634354();
  func_0x000105634754();
  FUN_105633b14(&uStack_58);
  func_0x000105634638();
  return;
}



/* Entry: 105633d64; end: 105633d77;  */

void FUN_105633d64(long param_1,long param_2)

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



/* Entry: 105633d78; end: 105633dfb;  */

void FUN_105633d78(long param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_50 [28];
  undefined4 uStack_34;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x0001056346e0();
  uStack_34 = param_2;
  FUN_10563431c();
  func_0x0001000fbca4(auStack_50,param_3);
  func_0x000105634638();
  FUN_105633dfc(lVar1 + 0x30,&uStack_34,auStack_50);
  func_0x0001056346e8();
  return;
}



/* Entry: 105633dfc; end: 105633e13;  */

void FUN_105633dfc(void)

{
  func_0x000105634090();
  return;
}



/* Entry: 105633e14; end: 105633e97;  */

void FUN_105633e14(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
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
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 105633e98; end: 105633f5f;  */

void FUN_105633e98(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (param_2 <= uVar7) {
    if (param_2 < uVar7) {
      uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar4) {
        uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
      }
      if (param_2 <= uVar4) {
        param_2 = uVar4;
      }
      if (param_2 < uVar7) goto LAB_105633ee0;
    }
    return;
  }
LAB_105633ee0:
  if (param_2 == 0) {
    FUN_10563405c(param_1);
    param_1[1] = 0;
  }
  else {
    plVar2 = param_1 + 1;
    FUN_105634074(plVar2);
    FUN_10563405c(param_1,plVar2);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar7 = 0; param_2 != uVar7; uVar7 = uVar7 + 1) {
      *(undefined8 *)(lVar1 + uVar7 * 8) = 0;
    }
    plVar2 = (long *)param_1[2];
    if (plVar2 != (long *)0x0) {
      uVar5 = plVar2[1];
      uVar4 = param_2 - 1;
      uVar7 = 0;
      if (param_2 != 0) {
        uVar7 = uVar5 / param_2;
      }
      uVar6 = uVar5;
      if (param_2 <= uVar5) {
        uVar6 = uVar5 - uVar7 * param_2;
      }
      if ((param_2 & uVar4) == 0) {
        uVar6 = uVar5 & uVar4;
      }
      *(long **)(lVar1 + uVar6 * 8) = param_1 + 2;
      while (plVar3 = plVar2, plVar2 = (long *)*plVar3, plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        if ((param_2 & uVar4) == 0) {
          uVar7 = uVar7 & uVar4;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        if (uVar7 != uVar6) {
          if (*(long *)(lVar1 + uVar7 * 8) == 0) {
            *(long **)(lVar1 + uVar7 * 8) = plVar3;
            uVar6 = uVar7;
          }
          else {
            *plVar3 = *plVar2;
            *plVar2 = **(undefined8 **)(lVar1 + uVar7 * 8);
            **(long **)(lVar1 + uVar7 * 8) = (long)plVar2;
            plVar2 = plVar3;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 105633f60; end: 10563405b;  */

void FUN_105633f60(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_10563405c(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_105634074(plVar3);
    FUN_10563405c(param_1,plVar3);
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



/* Entry: 10563405c; end: 105634073;  */

void FUN_10563405c(long *param_1,long param_2)

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



/* Entry: 105634074; end: 1056340af;  */

void FUN_105634074(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  FUN_1056340b0();
  return;
}



/* Entry: 1056340b0; end: 105634227;  */

undefined1  [16] FUN_1056340b0(float param_1,float param_2,long *param_3,int *param_4)

{
  int iVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 uVar3;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar4;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar5;
  ulong uVar6;
  ulong extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  ulong uVar7;
  long *unaff_x21;
  long *plVar8;
  ulong uVar9;
  ulong unaff_x23;
  undefined1 auVar10 [16];
  undefined1 auStack_58 [24];
  
  iVar1 = *param_4;
  uVar7 = (ulong)iVar1;
  uVar9 = param_3[1];
  if (uVar9 != 0) {
    func_0x000105634780();
    if ((bool)in_ZR) {
      unaff_x23 = extraout_x8 & uVar7;
    }
    else {
      unaff_x23 = uVar7;
      if (uVar9 <= uVar7) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar7 / uVar9;
        }
        unaff_x23 = uVar7 - uVar4 * uVar9;
      }
    }
    plVar8 = *(long **)(*param_3 + unaff_x23 * 8);
    unaff_x21 = (long *)0x0;
    uVar4 = extraout_x8;
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*plVar8;
          if (unaff_x21 == (long *)0x0) goto LAB_105634154;
          uVar6 = unaff_x21[1];
          plVar8 = unaff_x21;
          if (uVar6 != uVar7) break;
          if (*(int *)(unaff_x21 + 2) == iVar1) {
            uVar3 = 0;
            goto LAB_105634214;
          }
        }
        if ((uVar9 & uVar4) == 0) {
          uVar6 = uVar6 & uVar4;
        }
        else if (uVar9 <= uVar6) {
          func_0x000105634774();
          uVar4 = extraout_x8_00;
          uVar6 = extraout_x9;
        }
      } while (uVar6 == unaff_x23);
    }
  }
LAB_105634154:
  FUN_105634228(auStack_58,param_3,uVar7);
  func_0x00010563478c();
  if ((uVar9 == 0) || (param_2 * (float)uVar9 < param_1)) {
    func_0x000105634708();
    uVar2 = uVar9 == 3;
    func_0x0001056346f0();
    FUN_105633e98(param_3);
    uVar9 = param_3[1];
    func_0x000105634780();
    if ((bool)uVar2) {
      unaff_x23 = extraout_x8_01 & uVar7;
    }
    else {
      unaff_x23 = uVar7;
      if (uVar9 <= uVar7) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar7 / uVar9;
        }
        unaff_x23 = uVar7 - uVar4 * uVar9;
      }
    }
  }
  if (*(long *)(*param_3 + unaff_x23 * 8) == 0) {
    func_0x0001056346b0();
    if (extraout_x9_00 != 0) {
      uVar7 = *(ulong *)(extraout_x9_00 + 8);
      lVar5 = extraout_x8_02;
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar7 = uVar7 & uVar9 - 1;
      }
      else if (uVar9 <= uVar7) {
        func_0x000105634774();
        lVar5 = extraout_x8_03;
        uVar7 = extraout_x9_01;
      }
      *(long **)(lVar5 + uVar7 * 8) = unaff_x21;
    }
  }
  else {
    func_0x000105634760();
  }
  func_0x000105634678();
  uVar3 = 1;
LAB_105634214:
  auVar10._8_8_ = uVar3;
  auVar10._0_8_ = unaff_x21;
  return auVar10;
}



/* Entry: 105634228; end: 10563429b;  */

void FUN_105634228(undefined8 *param_1,long param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 1;
  *puVar1 = 0;
  puVar1[1] = param_3;
  *(undefined4 *)(puVar1 + 2) = *param_4;
  uVar2 = *param_5;
  puVar1[4] = param_5[1];
  puVar1[3] = uVar2;
  puVar1[5] = param_5[2];
  param_5[1] = 0;
  param_5[2] = 0;
  *param_5 = 0;
  return;
}



/* Entry: 10563429c; end: 1056342bf;  */

undefined8 FUN_10563429c(undefined8 param_1)

{
  FUN_1056342c0(param_1,0);
  return param_1;
}



/* Entry: 1056342c0; end: 1056342d7;  */

void FUN_1056342c0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x18);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 1056342d8; end: 10563431b;  */

void FUN_1056342d8(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2 + 0x18);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10563431c; end: 105634353;  */

undefined8 FUN_10563431c(undefined8 param_1)

{
  _objc_retain();
  func_0x00010c067fc0(param_1);
  FUN_105634638();
  return param_1;
}



/* Entry: 105634354; end: 1056343ab;  */

undefined8 * FUN_105634354(undefined8 *param_1,long param_2)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_105633e98(param_1,*(undefined8 *)(param_2 + 8));
  FUN_1056343ac(param_1,*(undefined8 *)(param_2 + 0x10),0);
  return param_1;
}



/* Entry: 1056343ac; end: 1056343eb;  */

void FUN_1056343ac(undefined8 param_1,long *param_2,long param_3)

{
  for (; param_2 != (long *)param_3; param_2 = (long *)*param_2) {
    FUN_1056343ec(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 1056343ec; end: 10563441f;  */

void FUN_1056343ec(void)

{
  func_0x000105634404();
  return;
}



/* Entry: 105634420; end: 105634597;  */

undefined1  [16] FUN_105634420(float param_1,float param_2,long *param_3,int *param_4)

{
  int iVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 uVar3;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar4;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar5;
  ulong uVar6;
  ulong extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  ulong uVar7;
  long *unaff_x21;
  long *plVar8;
  ulong uVar9;
  ulong unaff_x23;
  undefined1 auVar10 [16];
  undefined1 auStack_58 [24];
  
  iVar1 = *param_4;
  uVar7 = (ulong)iVar1;
  uVar9 = param_3[1];
  if (uVar9 != 0) {
    func_0x000105634780();
    if ((bool)in_ZR) {
      unaff_x23 = extraout_x8 & uVar7;
    }
    else {
      unaff_x23 = uVar7;
      if (uVar9 <= uVar7) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar7 / uVar9;
        }
        unaff_x23 = uVar7 - uVar4 * uVar9;
      }
    }
    plVar8 = *(long **)(*param_3 + unaff_x23 * 8);
    unaff_x21 = (long *)0x0;
    uVar4 = extraout_x8;
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*plVar8;
          if (unaff_x21 == (long *)0x0) goto LAB_1056344c4;
          uVar6 = unaff_x21[1];
          plVar8 = unaff_x21;
          if (uVar6 != uVar7) break;
          if (*(int *)(unaff_x21 + 2) == iVar1) {
            uVar3 = 0;
            goto LAB_105634584;
          }
        }
        if ((uVar9 & uVar4) == 0) {
          uVar6 = uVar6 & uVar4;
        }
        else if (uVar9 <= uVar6) {
          func_0x000105634774();
          uVar4 = extraout_x8_00;
          uVar6 = extraout_x9;
        }
      } while (uVar6 == unaff_x23);
    }
  }
LAB_1056344c4:
  FUN_105634598(auStack_58,param_3,uVar7);
  func_0x00010563478c();
  if ((uVar9 == 0) || (param_2 * (float)uVar9 < param_1)) {
    func_0x000105634708();
    uVar2 = uVar9 == 3;
    func_0x0001056346f0();
    FUN_105633e98(param_3);
    uVar9 = param_3[1];
    func_0x000105634780();
    if ((bool)uVar2) {
      unaff_x23 = extraout_x8_01 & uVar7;
    }
    else {
      unaff_x23 = uVar7;
      if (uVar9 <= uVar7) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar7 / uVar9;
        }
        unaff_x23 = uVar7 - uVar4 * uVar9;
      }
    }
  }
  if (*(long *)(*param_3 + unaff_x23 * 8) == 0) {
    func_0x0001056346b0();
    if (extraout_x9_00 != 0) {
      uVar7 = *(ulong *)(extraout_x9_00 + 8);
      lVar5 = extraout_x8_02;
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar7 = uVar7 & uVar9 - 1;
      }
      else if (uVar9 <= uVar7) {
        func_0x000105634774();
        lVar5 = extraout_x8_03;
        uVar7 = extraout_x9_01;
      }
      *(long **)(lVar5 + uVar7 * 8) = unaff_x21;
    }
  }
  else {
    func_0x000105634760();
  }
  func_0x000105634678();
  uVar3 = 1;
LAB_105634584:
  auVar10._8_8_ = uVar3;
  auVar10._0_8_ = unaff_x21;
  return auVar10;
}



/* Entry: 105634598; end: 1056345f3;  */

void FUN_105634598(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_1056345f4(puVar1 + 2,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 1056345f4; end: 10563461b;  */

undefined4 * FUN_1056345f4(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 10563461c; end: 105634637;  */

void FUN_10563461c(long param_1)

{
  FUN_105633e14();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 105634638; end: 10563479f;  */

void FUN_105634638(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1056347a0; end: 105634817; -[SCNCupsUploadLocationCallbackCppProxy initWithCpp:] */

undefined1 * FUN_1056347a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126e9730;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000105634ea4();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000105634e74(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105634818; end: 1056348f7; -[SCNCupsUploadLocationCallbackCppProxy onSuccess:metrics:] */

void FUN_105634818(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_e8 [160];
  undefined1 auStack_48 [24];
  
  func_0x000105634ebc();
  _objc_retain();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  FUN_105635760(auStack_48);
  FUN_105634f30(auStack_e8);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_48,auStack_e8);
  FUN_1056319c4(auStack_e8);
  func_0x000100100fec(auStack_48);
  func_0x000105634ed0();
  func_0x000105634e9c();
  return;
}



/* Entry: 1056348f8; end: 1056349df; -[SCNCupsUploadLocationCallbackCppProxy onFailure:metrics:] */

void FUN_1056348f8(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_120 [160];
  undefined1 auStack_80 [64];
  
  func_0x000105634ebc();
  _objc_retain();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x00010bcc1b7c(auStack_80);
  FUN_105634f30(auStack_120);
  (**(code **)(*plVar1 + 0x18))(plVar1,auStack_80,auStack_120);
  FUN_1056319c4(auStack_120);
  FUN_1052a03ac(auStack_80);
  func_0x000105634ed0();
  func_0x000105634e9c();
  return;
}



/* Entry: 1056349e0; end: 105634acf;  */

void FUN_1056349e0(undefined8 *param_1,ulong param_2)

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
    puVar2 = PTR_PTR_1126bc6f8;
    _objc_opt_class(PTR_PTR_1126bc6f8);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_2);
      ppuStack_38 = &PTR_DAT_1108a13a8;
      uStack_40 = param_2;
      func_0x0001000de59c(&uStack_30,&ppuStack_38,&uStack_40,FUN_105634b6c);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      func_0x0001000df524(&uStack_30);
      _objc_release(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_105634e4c(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          func_0x000105634ea4();
        } while (extraout_w10 != 0);
      }
    }
  }
  func_0x000105634e9c();
  return;
}



/* Entry: 105634ad0; end: 105634b2b; -[SCNCupsUploadLocationCallbackCppProxy .cxx_destruct] */

void FUN_105634ad0(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1108a1488;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x000105634e74((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 105634b2c; end: 105634b6b; -[SCNCupsUploadLocationCallbackCppProxy .cxx_construct] */

undefined8 * FUN_105634b2c(undefined8 *param_1)

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
      func_0x000105634ea4();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 105634b6c; end: 105634c63;  */

void FUN_105634b6c(undefined8 *param_1,long *param_2)

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
  *puVar1 = &PTR_FUN_1108a13e8;
  puVar1[3] = &PTR_DAT_1108a1468;
  puVar2 = puVar5;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar3 = puVar2;
  func_0x0001000de520();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      func_0x000105634ea4();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  puVar1[3] = &PTR_FUN_1108a1438;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_105634e4c(&uStack_50);
  return;
}



/* Entry: 105634c64; end: 105634c67;  */

void FUN_105634c64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a13e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105634c68; end: 105634c7b;  */

void FUN_105634c68(void)

{
  FUN_105634e3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105634c7c; end: 105634c87;  */

long FUN_105634c7c(long param_1)

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
    ppuStack_38 = &PTR_DAT_1108a13a8;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    func_0x000105634eb4();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 105634c88; end: 105634cc3;  */

void FUN_105634c88(void)

{
  func_0x000105634efc();
  return;
}



/* Entry: 105634cc4; end: 105634d37;  */

void FUN_105634cc4(undefined8 param_1)

{
  func_0x000105634eec();
  FUN_1056357d0();
  _objc_retainAutoreleasedReturnValue();
  FUN_1056350d0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105634f1c();
  func_0x00010c0e6ce0();
  func_0x000105634eb4();
  func_0x000105634e9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 105634d38; end: 105634dab;  */

void FUN_105634d38(undefined8 param_1)

{
  func_0x000105634eec();
  func_0x00010bcc1ca8();
  _objc_retainAutoreleasedReturnValue();
  FUN_1056350d0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105634f1c();
  func_0x00010c0e4140();
  func_0x000105634eb4();
  func_0x000105634e9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 105634dac; end: 105634e3b;  */

long FUN_105634dac(long param_1)

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
    ppuStack_38 = &PTR_DAT_1108a13a8;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    func_0x000105634eb4();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 105634e3c; end: 105634e4b;  */

void FUN_105634e3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a13e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105634e4c; end: 105634e9b;  */

long FUN_105634e4c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 105634e9c; end: 105634f2f;  */

void FUN_105634e9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105634f30; end: 1056350cf;  */

void FUN_105634f30(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [72];
  
  _objc_retain();
  func_0x00010bf987e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_105632694(auStack_98);
  uVar1 = param_2;
  func_0x00010c08ae60(param_2);
  func_0x00010c28e080(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(auStack_b0);
  uVar2 = param_2;
  func_0x00010c28e100(param_2);
  uVar3 = param_2;
  func_0x00010c28f340(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(auStack_c8);
  func_0x00010bf4c700(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(auStack_e0);
  FUN_1056351d0(param_1,auStack_98,uVar1,auStack_b0,uVar2,auStack_c8,auStack_e0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e0);
  _objc_release(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
  _objc_release(uVar3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
  func_0x000105635270();
  FUN_1052a038c(auStack_98);
  func_0x000105635268();
  func_0x000105635260();
  return;
}



/* Entry: 1056350d0; end: 1056351cf;  */

void FUN_1056350d0(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_PTR_1126bc700;
  _objc_alloc(PTR_PTR_1126bc700);
  lVar3 = param_1;
  FUN_10563299c(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  lVar4 = param_1 + 0x50;
  func_0x0001001011a4(lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined4 *)(param_1 + 0x68);
  lVar5 = param_1 + 0x70;
  func_0x0001001011a4(lVar5);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x88;
  func_0x0001001011a4(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0107a0(puVar2,param_2,lVar3,uVar6,lVar4,uVar1,lVar5,param_1);
  func_0x000105635278();
  func_0x000105635270();
  func_0x000105635268();
  func_0x000105635260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1056351d0; end: 10563525f;  */

void FUN_1056351d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined4 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_1052a07e8();
  *(undefined8 *)(param_1 + 0x48) = param_3;
  uVar2 = param_4[1];
  uVar1 = *param_4;
  *(undefined8 *)(param_1 + 0x60) = param_4[2];
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  *(undefined4 *)(param_1 + 0x68) = param_5;
  uVar2 = param_6[1];
  uVar1 = *param_6;
  *(undefined8 *)(param_1 + 0x80) = param_6[2];
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  param_6[1] = 0;
  param_6[2] = 0;
  *param_6 = 0;
  uVar2 = param_7[1];
  uVar1 = *param_7;
  *(undefined8 *)(param_1 + 0x98) = param_7[2];
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  param_7[1] = 0;
  param_7[2] = 0;
  *param_7 = 0;
  return;
}



/* Entry: 105635260; end: 105635283;  */

void FUN_105635260(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105635284; end: 1056352fb; -[SCNCupsUploadLocationProvider initWithCpp:] */

undefined1 * FUN_105635284(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126e9738;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_105635730();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_105635704(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1056352fc; end: 1056354a3; +[SCNCupsUploadLocationProvider create:cronetPointer:tweaks:] */

void FUN_1056352fc(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int extraout_w10;
  undefined8 uVar1;
  long lStack_90;
  long lStack_88;
  undefined **appuStack_60 [2];
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x000100459fd0(appuStack_60,param_3);
  uVar1 = param_4;
  func_0x00010011b600(param_4);
  FUN_1056336a4(&lStack_90,param_5);
  FUN_1056362c4(&lStack_50,appuStack_60,uVar1,param_2 & 0xff,&lStack_90);
  FUN_105633af4(&lStack_90);
  func_0x00010048b850(appuStack_60);
  if (lStack_50 == 0) {
    uVar1 = 0;
  }
  else {
    appuStack_60[0] = &PTR_DAT_1108a1498;
    lStack_90 = lStack_50;
    lStack_88 = lStack_48;
    if (lStack_48 != 0) {
      do {
        FUN_105635730();
      } while (extraout_w10 != 0);
    }
    func_0x00010015c218(appuStack_60,&lStack_90,FUN_105635690);
    _objc_retainAutoreleasedReturnValue();
    func_0x000105635754();
  }
  FUN_105635704(&lStack_50);
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x000105635740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056354a4; end: 105635597; -[SCNCupsUploadLocationProvider getUploadLocation:assetTypeInt:uploadSizeInBytes:estimatedTimeToUploadMs:chunkUploadSupportRequired:callback:] */

void FUN_1056354a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined1 auStack_60 [16];
  
  _objc_retain(param_8);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_1056349e0(auStack_60,param_8);
  (**(code **)(*plVar1 + 0x10))(plVar1,param_3,param_4,param_5,param_6,param_7,auStack_60);
  func_0x000105634e74(auStack_60);
  func_0x000105635740();
  return;
}



/* Entry: 105635598; end: 1056355f7; -[SCNCupsUploadLocationProvider warmup] */

void FUN_105635598(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 1056355f8; end: 10563564b; -[SCNCupsUploadLocationProvider .cxx_destruct] */

void FUN_1056355f8(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1108a1498;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  FUN_105635704((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 10563564c; end: 10563568f; -[SCNCupsUploadLocationProvider .cxx_construct] */

undefined8 * FUN_10563564c(undefined8 *param_1)

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
      FUN_105635730();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 105635690; end: 105635703;  */

void FUN_105635690(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126bc4f0;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_105635730();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_105635704(&uStack_30);
  return;
}



/* Entry: 105635704; end: 10563572f;  */

long FUN_105635704(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}


