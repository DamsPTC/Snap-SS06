/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 000c0150; end: 000c02c7;  */

undefined1  [16] FUN_000c0150(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  lVar8 = *(long *)PTR____stack_chk_guard_00999f88;
  func_0x00738dbc();
  if (param_1 == 0) {
    FUN_000bff44();
    lVar7 = param_2;
    if (param_2 != 0) goto LAB_000c0190;
LAB_000c0290:
    uVar5 = 0;
  }
  else {
    __sSS7cStringSSSPys4Int8VG_tcfC();
    lVar7 = param_2;
LAB_000c0190:
    puVar1 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
    _objc_opt_self();
    puVar2 = puVar1;
    func_0x00781c40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    param_2 = lVar7;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,lVar7);
    puVar4 = puVar2;
    func_0x007833a0();
    _objc_release(puVar2);
    _objc_release(lVar3);
    if ((int)puVar4 == 0) {
      _swift_bridgeObjectRelease(lVar7);
    }
    else {
      func_0x00781c40();
      _objc_retainAutoreleasedReturnValue();
      param_2 = lVar7;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,lVar7);
      _swift_bridgeObjectRelease(lVar7);
      puVar2 = puVar1;
      func_0x0078b3e0();
      _objc_release(puVar1);
      _objc_release(param_1);
      uVar5 = 0;
      if ((int)puVar2 == 0) {
        uVar6 = uVar5;
        _objc_retain();
        __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(0);
        _objc_release(uVar6);
        _swift_willThrow();
        _swift_errorRelease(uVar5);
        goto LAB_000c0290;
      }
      _objc_retain();
    }
    uVar5 = 1;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar8) {
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = uVar5;
    return auVar9;
  }
  ___stack_chk_fail(uVar5);
  return ZEXT816(0x9aa628);
}



/* Entry: 000c02c8; end: 000c02e7;  */

undefined1  [16] FUN_000c02c8(void)

{
  return ZEXT816(0x9aa628);
}



/* Entry: 000c02e8; end: 000c0317;  */

void FUN_000c02e8(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_000c1428();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 000c0318; end: 000c031f;  */

undefined8 FUN_000c0318(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 000c0320; end: 000c0393;  */

void FUN_000c0320(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xaed808;
  func_0x000115a8(0xaed808,&UNK_007d7318);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 000c0394; end: 000c039f;  */

void FUN_000c0394(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 000c03a0; end: 000c044b;  */

void FUN_000c03a0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000c044c; end: 000c0473;  */

bool FUN_000c044c(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 000c0474; end: 000c04bb;  */

void FUN_000c0474(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  FUN_00119fa0(&uStack_40,&UNK_007d7720,0x12a,2);
  uRam0000000000b64a48 = uStack_38;
  uRam0000000000b64a40 = uStack_40;
  uRam0000000000b64a58 = uStack_28;
  uRam0000000000b64a50 = uStack_30;
  uRam0000000000b64a68 = uStack_18;
  uRam0000000000b64a60 = uStack_20;
  return;
}



/* Entry: 000c04bc; end: 000c055b;  */

void FUN_000c04bc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000aed810 != -1) {
    _swift_once(0xaed810,FUN_000c0474);
  }
  uVar5 = uRam0000000000b64a68;
  uVar4 = uRam0000000000b64a60;
  uVar3 = uRam0000000000b64a58;
  uVar2 = uRam0000000000b64a50;
  uVar1 = uRam0000000000b64a48;
  *param_1 = uRam0000000000b64a40;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 000c055c; end: 000c05a3;  */

void FUN_000c055c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  FUN_00119fa0(&uStack_40,&UNK_007d7690,0x88,2);
  uRam0000000000b64a78 = uStack_38;
  uRam0000000000b64a70 = uStack_40;
  uRam0000000000b64a88 = uStack_28;
  uRam0000000000b64a80 = uStack_30;
  uRam0000000000b64a98 = uStack_18;
  uRam0000000000b64a90 = uStack_20;
  return;
}



/* Entry: 000c05a4; end: 000c0707;  */

/* WARNING: Removing unreachable block (ram,0x000c06ec) */

void FUN_000c05a4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 0x15) {
        if (2 < lVar1) {
          if (lVar1 == 3) {
            pcVar3 = *(code **)(param_3 + 0x90);
            lVar1 = unaff_x20 + 0x18;
          }
          else {
            if (lVar1 != 4) goto LAB_000c061c;
            pcVar3 = *(code **)(param_3 + 0x90);
            lVar1 = unaff_x20 + 0x20;
          }
          goto LAB_000c060c;
        }
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x180);
          FUN_000c1434();
          (*pcVar3)();
        }
        else if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x90);
          lVar1 = unaff_x20 + 0x10;
          goto LAB_000c060c;
        }
      }
      else {
        if (lVar1 < 0x66) {
          if (lVar1 == 0x15) {
            pcVar3 = *(code **)(param_3 + 0x78);
            lVar1 = unaff_x20 + 0x28;
          }
          else {
            if (lVar1 != 0x65) goto LAB_000c061c;
            pcVar3 = *(code **)(param_3 + 0x90);
            lVar1 = unaff_x20 + 0x30;
          }
        }
        else if (lVar1 == 0x66) {
          pcVar3 = *(code **)(param_3 + 0x90);
          lVar1 = unaff_x20 + 0x38;
        }
        else {
          if (lVar1 != 0x67) goto LAB_000c061c;
          pcVar3 = *(code **)(param_3 + 0x150);
          lVar1 = unaff_x20 + 0x40;
        }
LAB_000c060c:
        (*pcVar3)(lVar1,param_2,param_3);
      }
LAB_000c061c:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 000c0708; end: 000c0893;  */

void FUN_000c0708(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  long lStack_50;
  undefined1 uStack_48;
  
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar4 = *(code **)(param_3 + 0x80);
    uVar3 = param_1;
    lStack_50 = *unaff_x20;
    FUN_000c1434();
    (*pcVar4)(&lStack_50,1,&UNK_009aa850,uVar3,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if ((((((unaff_x20[2] == 0) ||
         ((**(code **)(param_3 + 0x30))(unaff_x20[2],2,param_2,param_3), unaff_x21 == 0)) &&
        ((unaff_x20[3] == 0 ||
         ((**(code **)(param_3 + 0x30))(unaff_x20[3],3,param_2,param_3), unaff_x21 == 0)))) &&
       ((unaff_x20[4] == 0 ||
        ((**(code **)(param_3 + 0x30))(unaff_x20[4],4,param_2,param_3), unaff_x21 == 0)))) &&
      (((int)unaff_x20[5] == 0 ||
       ((**(code **)(param_3 + 0x28))((int)unaff_x20[5],0x15,param_2,param_3), unaff_x21 == 0)))) &&
     (((unaff_x20[6] == 0 ||
       ((**(code **)(param_3 + 0x30))(unaff_x20[6],0x65,param_2,param_3), unaff_x21 == 0)) &&
      ((unaff_x20[7] == 0 ||
       ((**(code **)(param_3 + 0x30))(unaff_x20[7],0x66,param_2,param_3), unaff_x21 == 0)))))) {
    uVar2 = unaff_x20[9];
    uVar1 = unaff_x20[8] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[8],uVar2,0x67,param_2,param_3), unaff_x21 == 0)) {
      FUN_0013ad2c(param_1,unaff_x20[10],unaff_x20[0xb],param_2,param_3);
    }
  }
  return;
}



/* Entry: 000c0894; end: 000c08eb;  */

void FUN_000c0894(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0xe000000000000000;
  param_1[0xb] = 0xc000000000000000;
  param_1[10] = 0;
  return;
}



/* Entry: 000c08ec; end: 000c091b;  */

undefined1  [16] FUN_000c08ec(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x50);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x50),
                  *(undefined8 *)(unaff_x20 + 0x58));
  return auVar1;
}



/* Entry: 000c091c; end: 000c094f;  */

void FUN_000c091c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  *(undefined8 *)(unaff_x20 + 0x50) = param_1;
  *(undefined8 *)(unaff_x20 + 0x58) = param_2;
  return;
}



/* Entry: 000c0950; end: 000c0963;  */

undefined1  [16] FUN_000c0950(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x50;
  auVar1._0_8_ = 0xc0960;
  return auVar1;
}



/* Entry: 000c0964; end: 000c098b;  */

void FUN_000c0964(void)

{
  FUN_000c05a4();
  return;
}



/* Entry: 000c098c; end: 000c098f;  */

/* WARNING: Removing unreachable block (ram,0x0010f500) */

void FUN_000c098c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_009ad0a0,&PTR_DAT_009ad0b8,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 000c0990; end: 000c09c7;  */

uint FUN_000c0990(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000c1ecc();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_000ea51c(param_1,auStack_88);
  uVar3 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 000c09c8; end: 000c0a1f;  */

uint FUN_000c09c8(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  uStack_28 = param_1[9];
  uStack_30 = param_1[8];
  uStack_18 = param_1[0xb];
  uStack_20 = param_1[10];
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_a8 = unaff_x20[5];
  uStack_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_88 = unaff_x20[9];
  uStack_90 = unaff_x20[8];
  uStack_78 = unaff_x20[0xb];
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  FUN_000c1474(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 000c0a20; end: 000c0abf;  */

void FUN_000c0a20(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000aed818 != -1) {
    _swift_once(0xaed818,FUN_000c055c);
  }
  uVar5 = uRam0000000000b64a98;
  uVar4 = uRam0000000000b64a90;
  uVar3 = uRam0000000000b64a88;
  uVar2 = uRam0000000000b64a80;
  uVar1 = uRam0000000000b64a78;
  *param_1 = uRam0000000000b64a70;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 000c0ac0; end: 000c0afb;  */

void FUN_000c0ac0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaed8a0;
  uStack_18 = param_1;
  func_0x000115a8(0xaed8a0,&UNK_007d7670);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 000c0afc; end: 000c0c17;  */

void FUN_000c0afc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_d8 [72];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  uStack_48 = unaff_x20[9];
  uStack_50 = unaff_x20[8];
  uStack_38 = unaff_x20[0xb];
  uStack_40 = unaff_x20[10];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_d8,0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_d8,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000c0c18; end: 000c0cb7;  */

uint FUN_000c0c18(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_48 = param_2[5];
  uStack_50 = param_2[4];
  uStack_38 = param_2[7];
  uStack_40 = param_2[6];
  uStack_28 = param_2[9];
  uStack_30 = param_2[8];
  uStack_18 = param_2[0xb];
  uStack_20 = param_2[10];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  FUN_000c1474(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 000c0cb8; end: 000c0d6b;  */

/* WARNING: Removing unreachable block (ram,0x000c0d68) */

void FUN_000c0cb8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 6) {
        pcVar4 = *(code **)(param_3 + 0x1a0);
        func_0x000c1634();
        (*pcVar4)();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 000c0d6c; end: 000c0e07;  */

void FUN_000c0d6c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  long unaff_x21;
  code *pcVar2;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    pcVar2 = *(code **)(param_6 + 0x118);
    uVar1 = param_1;
    func_0x000c1634();
    (*pcVar2)(param_2,6,&UNK_009aa8c8,uVar1,param_5,param_6);
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_0013ad2c(param_1,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 000c0e08; end: 000c0e47;  */

void FUN_000c0e08(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  return;
}



/* Entry: 000c0e48; end: 000c0e77;  */

undefined1  [16] FUN_000c0e48(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                  *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 000c0e78; end: 000c0eab;  */

void FUN_000c0e78(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 000c0eac; end: 000c0ebf;  */

undefined1  [16] FUN_000c0eac(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0xc0ebc;
  return auVar1;
}



/* Entry: 000c0ec0; end: 000c0ef7;  */

void FUN_000c0ec0(void)

{
  FUN_000c0cb8();
  return;
}



/* Entry: 000c0ef8; end: 000c0efb;  */

/* WARNING: Removing unreachable block (ram,0x0010f500) */

void FUN_000c0ef8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_009ad0a0,&PTR_DAT_009ad0b8,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 000c0efc; end: 000c0f33;  */

uint FUN_000c0efc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_000c1e8c();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_000ea51c(param_1,auStack_88);
  uVar3 = 0xaeda20;
  func_0x000115a8(0xaeda20,&UNK_007d8100);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 000c0f34; end: 000c103b;  */

ulong FUN_000c0f34(undefined8 *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong *unaff_x20;
  byte *pbVar15;
  ulong uVar16;
  long lVar17;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  lVar9 = param_1[1];
  uVar16 = param_1[2];
  uVar12 = *unaff_x20;
  uVar6 = unaff_x20[1];
  pbVar15 = (byte *)unaff_x20[2];
  FUN_000c11e0(uVar12,*param_1);
  if ((uVar12 & 1) == 0) {
    return 0;
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar15 >> 0x20);
  uVar10 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar16 >> 0x20);
  uVar13 = uVar3 >> 0x1e;
  iVar5 = (int)uVar6;
  if ((ulong)pbVar15 >> 0x3e == 3) {
    uVar12 = 0;
    if ((((uVar6 != 0) || (pbVar15 != (byte *)0xc000000000000000)) || (uVar16 >> 0x3e < 3)) ||
       ((uVar12 = 0, lVar9 != 0 || (uVar16 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar10 == 0) {
        uVar12 = (ulong)pbVar15 >> 0x30 & 0xff;
      }
      else {
        iVar11 = (int)(uVar6 >> 0x20);
        if (SBORROW4(iVar11,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar12 = (ulong)(iVar11 - iVar5);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar13 != 2) {
        uVar6 = (ulong)(uVar12 == 0);
        goto LAB_00038af8;
      }
      uVar14 = *(long *)(lVar9 + 0x18) - *(long *)(lVar9 + 0x10);
      if (SBORROW8(*(long *)(lVar9 + 0x18),*(long *)(lVar9 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar12 != uVar14) {
LAB_0003899c:
        uVar6 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar10 == 2) {
        uVar12 = *(long *)(uVar6 + 0x18) - *(long *)(uVar6 + 0x10);
        if (SBORROW8(*(long *)(uVar6 + 0x18),*(long *)(uVar6 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar12 = 0;
      if (1 < uVar13) goto LAB_00038898;
LAB_000388cc:
      if (uVar13 == 0) {
        uVar14 = uVar16 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar11 = (int)((ulong)lVar9 >> 0x20);
      if (SBORROW4(iVar11,(int)lVar9)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar12 != (long)(iVar11 - (int)lVar9)) goto LAB_0003899c;
    }
    if (0 < (long)uVar12) {
      if (uVar10 < 2) {
        if (uVar10 == 0) {
          abStack_70[0] = (byte)uVar6;
          abStack_70[1] = (byte)(uVar6 >> 8);
          abStack_70[2] = (byte)(uVar6 >> 0x10);
          abStack_70[3] = (byte)(uVar6 >> 0x18);
          abStack_70[4] = (byte)(uVar6 >> 0x20);
          abStack_70[5] = (byte)(uVar6 >> 0x28);
          abStack_70[6] = (byte)(uVar6 >> 0x30);
          abStack_70[7] = (byte)(uVar6 >> 0x38);
          abStack_70[8] = (byte)pbVar15;
          abStack_70[9] = (byte)((ulong)pbVar15 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar15 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar15 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar15 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar15 >> 0x28);
          pbVar15 = abStack_70 + ((ulong)pbVar15 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar6 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        uVar12 = ((long)uVar6 >> 0x20) - lVar17;
        if ((long)uVar6 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar6 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          uVar6 = 0;
        }
        else {
          uVar14 = uVar6;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar14)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar14) + uVar6;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (uVar6 != 0) {
            if ((long)uVar12 <= (long)uVar14) {
              uVar14 = uVar12;
            }
            pbVar8 = (byte *)(uVar14 + uVar6);
            goto LAB_00038aec;
          }
        }
        pbVar8 = (byte *)0x0;
      }
      else {
        if (uVar10 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar15 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(uVar6 + 0x10);
        lVar1 = *(long *)(uVar6 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        uVar12 = uVar6;
        if (uVar6 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar12) + uVar6;
        }
        uVar14 = lVar1 - lVar17;
        if (SBORROW8(lVar1,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (uVar6 == 0) {
          pbVar8 = (byte *)0x0;
        }
        else {
          if ((long)uVar14 <= (long)uVar12) {
            uVar12 = uVar14;
          }
          pbVar8 = (byte *)(uVar12 + uVar6);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar15 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,uVar6,pbVar8,lVar9,uVar16);
      uVar6 = (ulong)abStack_70[0];
      pbVar15 = pbVar8;
      goto LAB_00038af8;
    }
  }
  uVar6 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar6;
  }
  ___stack_chk_fail();
  lVar17 = (long)pbVar15 - uVar6;
  if (SBORROW8((long)pbVar15,uVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar14 = *unaff_x20;
  uVar16 = uVar14 & 0xffffffffffffff8;
  uVar6 = uVar16 + 0x20 + uVar6 * 8;
  uVar7 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar12 = uVar6;
  _swift_arrayDestroy(uVar6,lVar17,uVar7);
  lVar1 = lVar9 - lVar17;
  if (SBORROW8(lVar9,lVar17)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar1 != 0) {
    if (uVar14 >> 0x3e == 0) {
      uVar12 = *(ulong *)(uVar16 + 0x10);
      lVar17 = uVar12 - (long)pbVar15;
    }
    else {
      uVar12 = uVar16;
      if ((uVar14 & 0x8000000000000000) != 0) {
        uVar12 = uVar14;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar17 = uVar12 - (long)pbVar15;
    }
    if (SBORROW8(uVar12,(long)pbVar15)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar6 = uVar6 + lVar9 * 8;
    uVar12 = uVar16 + 0x20 + (long)pbVar15 * 8;
    if (uVar6 != uVar12 || uVar12 + lVar17 * 8 <= uVar6) {
      _memmove(uVar6,uVar12,lVar17 << 3);
    }
    if (uVar14 >> 0x3e == 0) {
      uVar12 = *(ulong *)(uVar16 + 0x10);
    }
    else {
      uVar12 = uVar16;
      if ((uVar14 & 0x8000000000000000) != 0) {
        uVar12 = uVar14;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar12,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar16 + 0x10) = uVar12 + lVar1;
  }
  if (0 < lVar9) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar12;
}



/* Entry: 000c103c; end: 000c1077;  */

void FUN_000c103c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaed890;
  uStack_18 = param_1;
  func_0x000115a8(0xaed890,&UNK_007d7668);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 000c1078; end: 000c11df;  */

void FUN_000c1078(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_90 [72];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = *unaff_x20;
  uStack_38 = unaff_x20[2];
  uStack_40 = unaff_x20[1];
  __ss6HasherV5_seedABSi_tcfC(auStack_90,0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_90,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000c11e0; end: 000c1427;  */

long * FUN_000c11e0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined1 auStack_180 [96];
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  ulong uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar4 = param_1[2];
  if (lVar4 != param_2[2]) {
    return (long *)0x0;
  }
  if ((lVar4 == 0) || (param_1 == param_2)) {
    return (long *)((long)&MACH_HEADER.magic + 1);
  }
  plVar5 = param_1 + 4;
  param_2 = param_2 + 4;
  while( true ) {
    lVar4 = lVar4 + -1;
    lStack_f8 = plVar5[5];
    lStack_100 = plVar5[4];
    lStack_e8 = plVar5[7];
    lStack_f0 = plVar5[6];
    lStack_d8 = plVar5[9];
    uVar6 = plVar5[8];
    lStack_c8 = plVar5[0xb];
    uStack_d0 = plVar5[10];
    lStack_118 = plVar5[1];
    lStack_120 = *plVar5;
    lStack_108 = plVar5[3];
    lStack_110 = plVar5[2];
    lStack_98 = param_2[5];
    lStack_a0 = param_2[4];
    lStack_88 = param_2[7];
    lStack_90 = param_2[6];
    lStack_78 = param_2[9];
    uStack_80 = param_2[8];
    lStack_68 = param_2[0xb];
    lStack_70 = param_2[10];
    lStack_b8 = param_2[1];
    lStack_c0 = *param_2;
    lStack_a8 = param_2[3];
    lStack_b0 = param_2[2];
    uStack_e0 = uVar6;
    if ((char)lStack_b8 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000c1280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_007d7300)[lStack_c0] * 4 + 0xc1284))();
      return param_1;
    }
    if ((((lStack_120 != lStack_c0) || (lStack_110 != lStack_b0)) || (lStack_108 != lStack_a8)) ||
       (lStack_100 != lStack_a0)) {
      return (long *)0x0;
    }
    if ((int)lStack_f8 != (int)lStack_98) {
      return (long *)0x0;
    }
    if (lStack_f0 != lStack_90) {
      return (long *)0x0;
    }
    if (lStack_e8 != lStack_88) {
      return (long *)0x0;
    }
    if (((uVar6 != uStack_80) || (lStack_d8 != lStack_78)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar6 & 1) == 0)) {
      return (long *)0x0;
    }
    lVar3 = lStack_68;
    lVar2 = lStack_70;
    lVar1 = lStack_c8;
    uVar6 = uStack_d0;
    FUN_000b8854(&lStack_120,auStack_180);
    FUN_000b8854(&lStack_c0,auStack_180);
    FUN_00038814(uVar6,lVar1,lVar2,lVar3);
    FUN_000b86a0(&lStack_c0);
    param_1 = &lStack_120;
    FUN_000b86a0(param_1);
    if ((uVar6 & 1) == 0) {
      return (long *)0x0;
    }
    if (lVar4 == 0) break;
    plVar5 = plVar5 + 0xc;
    param_2 = param_2 + 0xc;
  }
  return (long *)((long)&MACH_HEADER.magic + 1);
}



/* Entry: 000c1428; end: 000c1433;  */

void FUN_000c1428(void)

{
  return;
}



/* Entry: 000c1434; end: 000c1473;  */

void FUN_000c1434(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed820 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_007d7320;
  _swift_getWitnessTable(&DAT_007d7320,&UNK_009aa850);
  puRam0000000000aed820 = puVar1;
  return;
}



/* Entry: 000c1474; end: 000c15f3;  */

long * FUN_000c1474(long *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  long *plVar21;
  ulong *unaff_x20;
  long *plVar22;
  long lVar23;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  if ((char)param_2[1] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000c149c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_007d730b)[*param_2] * 4 + 0xc14a0))();
    return param_1;
  }
  if ((((*param_1 != *param_2) || (param_1[2] != param_2[2])) || (param_1[3] != param_2[3])) ||
     (((param_1[4] != param_2[4] || ((int)param_1[5] != (int)param_2[5])) ||
      ((param_1[6] != param_2[6] || (param_1[7] != param_2[7])))))) {
    return (long *)0x0;
  }
  uVar12 = param_1[8];
  if (((uVar12 != param_2[8]) || (param_1[9] != param_2[9])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar12,param_1[9],param_2[8],param_2[9],0), (uVar12 & 1) == 0)) {
    return (long *)0x0;
  }
  lVar9 = param_1[10];
  pbVar13 = (byte *)param_1[0xb];
  lVar15 = param_2[10];
  uVar12 = param_2[0xb];
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar13 >> 0x20);
  uVar16 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar12 >> 0x20);
  uVar19 = uVar3 >> 0x1e;
  iVar5 = (int)lVar9;
  if ((ulong)pbVar13 >> 0x3e == 3) {
    uVar18 = 0;
    if ((((lVar9 != 0) || (pbVar13 != (byte *)0xc000000000000000)) || (uVar12 >> 0x3e < 3)) ||
       ((uVar18 = 0, lVar15 != 0 || (uVar12 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar16 == 0) {
        uVar18 = (ulong)pbVar13 >> 0x30 & 0xff;
      }
      else {
        iVar17 = (int)((ulong)lVar9 >> 0x20);
        if (SBORROW4(iVar17,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar18 = (ulong)(iVar17 - iVar5);
      }
joined_r0x000389b8:
      if (1 < uVar3 >> 0x1e) goto LAB_00038898;
LAB_000388cc:
      if (uVar19 == 0) {
        uVar20 = uVar12 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar17 = (int)((ulong)lVar15 >> 0x20);
      if (SBORROW4(iVar17,(int)lVar15)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar18 != (long)(iVar17 - (int)lVar15)) goto LAB_0003899c;
    }
    else {
      if (uVar16 == 2) {
        uVar18 = *(long *)(lVar9 + 0x18) - *(long *)(lVar9 + 0x10);
        if (SBORROW8(*(long *)(lVar9 + 0x18),*(long *)(lVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar18 = 0;
      if (uVar19 < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar19 != 2) {
        plVar8 = (long *)(ulong)(uVar18 == 0);
        goto LAB_00038af8;
      }
      uVar20 = *(long *)(lVar15 + 0x18) - *(long *)(lVar15 + 0x10);
      if (SBORROW8(*(long *)(lVar15 + 0x18),*(long *)(lVar15 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar18 != uVar20) {
LAB_0003899c:
        plVar8 = (long *)0x0;
        goto LAB_00038af8;
      }
    }
    if (0 < (long)uVar18) {
      if (uVar16 < 2) {
        if (uVar16 == 0) {
          abStack_70[0] = (byte)lVar9;
          abStack_70[1] = (byte)((ulong)lVar9 >> 8);
          abStack_70[2] = (byte)((ulong)lVar9 >> 0x10);
          abStack_70[3] = (byte)((ulong)lVar9 >> 0x18);
          abStack_70[4] = (byte)((ulong)lVar9 >> 0x20);
          abStack_70[5] = (byte)((ulong)lVar9 >> 0x28);
          abStack_70[6] = (byte)((ulong)lVar9 >> 0x30);
          abStack_70[7] = (byte)((ulong)lVar9 >> 0x38);
          abStack_70[8] = (byte)pbVar13;
          abStack_70[9] = (byte)((ulong)pbVar13 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar13 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar13 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar13 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar13 >> 0x28);
          pbVar13 = abStack_70 + ((ulong)pbVar13 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          plVar8 = (long *)(ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar23 = (long)iVar5;
        lVar6 = (lVar9 >> 0x20) - lVar23;
        if (lVar9 >> 0x20 < lVar23) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (lVar9 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          lVar9 = 0;
        }
        else {
          lVar7 = lVar9;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar23,lVar7)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          lVar9 = (lVar23 - lVar7) + lVar9;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (lVar9 != 0) {
            if (lVar6 <= lVar7) {
              lVar7 = lVar6;
            }
            pbVar14 = (byte *)(lVar7 + lVar9);
            goto LAB_00038aec;
          }
        }
        pbVar14 = (byte *)0x0;
      }
      else {
        if (uVar16 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar13 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar23 = *(long *)(lVar9 + 0x10);
        lVar7 = *(long *)(lVar9 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar6 = lVar9;
        if (lVar9 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar23,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          lVar9 = (lVar23 - lVar6) + lVar9;
        }
        lVar1 = lVar7 - lVar23;
        if (SBORROW8(lVar7,lVar23)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (lVar9 == 0) {
          pbVar14 = (byte *)0x0;
        }
        else {
          if (lVar1 <= lVar6) {
            lVar6 = lVar1;
          }
          pbVar14 = (byte *)(lVar6 + lVar9);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar13 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,lVar9,pbVar14,lVar15,uVar12);
      plVar8 = (long *)(ulong)abStack_70[0];
      pbVar13 = pbVar14;
      goto LAB_00038af8;
    }
  }
  plVar8 = (long *)((long)&MACH_HEADER.magic + 1);
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return plVar8;
  }
  ___stack_chk_fail();
  lVar9 = (long)pbVar13 - (long)plVar8;
  if (SBORROW8((long)pbVar13,(long)plVar8)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  plVar22 = (long *)*unaff_x20;
  plVar21 = (long *)((ulong)plVar22 & 0xffffffffffffff8);
  plVar8 = plVar21 + (long)((long)plVar8 + 4);
  uVar10 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  plVar11 = plVar8;
  _swift_arrayDestroy(plVar8,lVar9,uVar10);
  lVar6 = lVar15 - lVar9;
  if (SBORROW8(lVar15,lVar9)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar6 != 0) {
    if ((ulong)plVar22 >> 0x3e == 0) {
      plVar11 = (long *)plVar21[2];
      lVar9 = (long)plVar11 - (long)pbVar13;
    }
    else {
      plVar11 = plVar21;
      if (((ulong)plVar22 & 0x8000000000000000) != 0) {
        plVar11 = plVar22;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar9 = (long)plVar11 - (long)pbVar13;
    }
    if (SBORROW8((long)plVar11,(long)pbVar13)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    plVar8 = plVar8 + lVar15;
    plVar11 = plVar21 + (long)(pbVar13 + 4);
    if (plVar8 != plVar11 || plVar11 + lVar9 <= plVar8) {
      _memmove(plVar8,plVar11,lVar9 << 3);
    }
    if ((ulong)plVar22 >> 0x3e == 0) {
      plVar11 = (long *)plVar21[2];
    }
    else {
      plVar11 = plVar21;
      if (((ulong)plVar22 & 0x8000000000000000) != 0) {
        plVar11 = plVar22;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8((long)plVar11,lVar6)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    plVar21[2] = (long)plVar11 + lVar6;
  }
  if (lVar15 < 1) {
    return plVar11;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
  (*pcVar4)();
}



/* Entry: 000c15f4; end: 000c16b3;  */

void FUN_000c15f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed828 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d74a0;
  _swift_getWitnessTable(&UNK_007d74a0,&UNK_009aa8c8);
  puRam0000000000aed828 = puVar1;
  return;
}



/* Entry: 000c16b4; end: 000c16c7;  */

void FUN_000c16b4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_000c16c8();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0xc1708)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 000c16c8; end: 000c1747;  */

void FUN_000c16c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed848 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d73b8;
  _swift_getWitnessTable(&UNK_007d73b8,&UNK_009aa850);
  puRam0000000000aed848 = puVar1;
  return;
}



/* Entry: 000c1748; end: 000c174b;  */

void FUN_000c1748(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000000aed858 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xaed860;
  FUN_00016c74(0xaed860,&UNK_007d7340);
  puVar2 = PTR___sSayxGSlsMc_0099b208;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_0099b208,uVar1);
  puRam0000000000aed858 = puVar2;
  return;
}



/* Entry: 000c174c; end: 000c179b;  */

void FUN_000c174c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000000aed858 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xaed860;
  FUN_00016c74(0xaed860,&UNK_007d7340);
  puVar2 = PTR___sSayxGSlsMc_0099b208;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_0099b208,uVar1);
  puRam0000000000aed858 = puVar2;
  return;
}



/* Entry: 000c179c; end: 000c179f;  */

void FUN_000c179c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed868 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d73f8;
  _swift_getWitnessTable(&UNK_007d73f8,&UNK_009aa850);
  puRam0000000000aed868 = puVar1;
  return;
}



/* Entry: 000c17a0; end: 000c17df;  */

void FUN_000c17a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed868 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d73f8;
  _swift_getWitnessTable(&UNK_007d73f8,&UNK_009aa850);
  puRam0000000000aed868 = puVar1;
  return;
}



/* Entry: 000c17e0; end: 000c1803;  */

void FUN_000c17e0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_000c1804();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 000c1804; end: 000c1843;  */

void FUN_000c1804(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed870 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d7478;
  _swift_getWitnessTable(&UNK_007d7478,&UNK_009aa8c8);
  puRam0000000000aed870 = puVar1;
  return;
}



/* Entry: 000c1844; end: 000c185b;  */

void FUN_000c1844(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_000c15f4();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0xc1634)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 000c185c; end: 000c189b;  */

void FUN_000c185c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed878 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d74e0;
  _swift_getWitnessTable(&UNK_007d74e0,&UNK_009aa8c8);
  puRam0000000000aed878 = puVar1;
  return;
}



/* Entry: 000c189c; end: 000c18bf;  */

void FUN_000c189c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_000c18c0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 000c18c0; end: 000c18ff;  */

void FUN_000c18c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed880 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d7550;
  _swift_getWitnessTable(&UNK_007d7550,&UNK_009aa968);
  puRam0000000000aed880 = puVar1;
  return;
}



/* Entry: 000c1900; end: 000c1913;  */

void FUN_000c1900(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0xc1674)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_000b8890();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 000c1914; end: 000c1943;  */

void FUN_000c1914(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 000c1944; end: 000c1947;  */

void FUN_000c1944(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed888 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d75b8;
  _swift_getWitnessTable(&UNK_007d75b8,&UNK_009aa968);
  puRam0000000000aed888 = puVar1;
  return;
}



/* Entry: 000c1948; end: 000c1987;  */

void FUN_000c1948(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed888 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d75b8;
  _swift_getWitnessTable(&UNK_007d75b8,&UNK_009aa968);
  puRam0000000000aed888 = puVar1;
  return;
}



/* Entry: 000c1988; end: 000c1a27;  */

int FUN_000c1988(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 000c1a28; end: 000c1a7b;  */

long FUN_000c1a28(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 000c1a7c; end: 000c1b9b;  */

undefined8 * FUN_000c1a7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  param_1[4] = param_2[4];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  uVar2 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  uVar2 = param_2[10];
  uVar1 = param_2[0xb];
  _swift_bridgeObjectRetain();
  func_0x00023304(uVar2,uVar1);
  param_1[10] = uVar2;
  param_1[0xb] = uVar1;
  return param_1;
}



/* Entry: 000c1b9c; end: 000c1bb7;  */

void FUN_000c1b9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  uVar5 = param_2[8];
  uVar7 = param_2[0xb];
  uVar6 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  param_1[0xb] = uVar7;
  param_1[10] = uVar6;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  return;
}



/* Entry: 000c1bb8; end: 000c1c2b;  */

undefined8 * FUN_000c1bb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  param_1[4] = param_2[4];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  uVar2 = param_2[9];
  uVar1 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_1[10];
  uVar1 = param_1[0xb];
  uVar3 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar3;
  FUN_00023358(uVar2,uVar1);
  return param_1;
}



/* Entry: 000c1c2c; end: 000c1cdf;  */

int FUN_000c1c2c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0x12);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 000c1ce0; end: 000c1d07;  */

void FUN_000c1ce0(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _swift_bridgeObjectRelease(*param_1);
  uVar1 = param_1[2];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    _swift_release(param_1[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 000c1d08; end: 000c1daf;  */

undefined8 * FUN_000c1d08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  _swift_bridgeObjectRetain();
  func_0x00023304(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 000c1db0; end: 000c1df3;  */

undefined8 * FUN_000c1db0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[1];
  uVar1 = param_1[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  FUN_00023358(uVar2,uVar1);
  return param_1;
}



/* Entry: 000c1df4; end: 000c1e8b;  */

int FUN_000c1df4(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 000c1e8c; end: 000c1f0b;  */

void FUN_000c1e8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aed898 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_007d7524;
  _swift_getWitnessTable(&DAT_007d7524,&UNK_009aa968);
  puRam0000000000aed898 = puVar1;
  return;
}



/* Entry: 000c1f0c; end: 000c1f13;  */

undefined8 * FUN_000c1f0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  _swift_bridgeObjectRetain();
  func_0x00023304(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 000c1f14; end: 000c23ff;  */

/* WARNING: Removing unreachable block (ram,0x000c20fc) */
/* WARNING: Removing unreachable block (ram,0x000c2178) */
/* WARNING: Removing unreachable block (ram,0x000c2180) */

undefined1  [16] FUN_000c1f14(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x21;
  long lVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 auStack_150 [40];
  undefined1 auStack_128 [24];
  undefined8 uStack_110;
  long lStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_bc;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_6c;
  
  iVar3 = (int)&uStack_180;
  lVar12 = *(long *)(param_1 + 0x18);
  FUN_0001393c(param_1,lVar12);
  _swift_getDynamicType();
  FUN_001058fc(&uStack_b0);
  if (unaff_x21 == 0) {
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    uStack_d0 = uStack_80;
    uStack_bc = uStack_6c;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    FUN_0001393c(param_1,*(undefined8 *)(param_1 + 0x18));
    FUN_00105648();
    uVar10 = uStack_100;
    if (uStack_f8._1_1_ != '\x01') {
      uVar2 = (undefined1)uStack_f8;
      uVar8 = uStack_100;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar7 = uVar10;
      if ((uVar8 & 1) == 0) {
        uVar7 = 0;
        FUN_000540b4(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
      }
      uVar8 = *(ulong *)(uVar7 + 0x10);
      uVar10 = uVar7;
      if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar8) {
        uVar10 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
        FUN_000540b4(uVar10,uVar8 + 1,1,uVar7);
      }
      *(ulong *)(uVar10 + 0x10) = uVar8 + 1;
      *(undefined1 *)(uVar10 + uVar8 + 0x20) = uVar2;
    }
    uVar8 = uVar10;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar7 = uVar10;
    if ((uVar8 & 1) == 0) {
      uVar7 = 0;
      FUN_000540b4(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
    }
    uVar10 = *(ulong *)(uVar7 + 0x10);
    uVar8 = uVar7;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar10) {
      uVar8 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      FUN_000540b4(uVar8,uVar10 + 1,1,uVar7);
    }
    *(ulong *)(uVar8 + 0x10) = uVar10 + 1;
    *(undefined1 *)(uVar8 + uVar10 + 0x20) = 0x22;
    uStack_100 = uVar8;
    func_0x000c79f0(0x6570797440,0xe500000000000000);
    func_0x000c7840("\":",2);
    uStack_f8 = CONCAT62(uStack_f8._2_6_,0x2c);
    FUN_000fdff8(param_2,param_3);
    FUN_000c7184(param_1,auStack_150);
    uVar4 = 0xaeda20;
    func_0x000115a8(0xaeda20,&UNK_007d8100);
    uVar5 = 0xaeda28;
    func_0x000115a8(0xaeda28,&UNK_007d78d0);
    _swift_dynamicCast(&uStack_180,auStack_150,uVar4,uVar5,6);
    if (iVar3 == 0) {
      uStack_160 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      func_0x000c71c8(&uStack_180,0xaeda30,&UNK_007d78d8);
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      lVar12 = *(long *)(param_1 + 0x20);
      FUN_0001393c(param_1,uVar4);
      (**(code **)(lVar12 + 0x48))(&uStack_100,&UNK_009ad8b8,&PTR_DAT_009ad8d8,uVar4,lVar12);
    }
    else {
      FUN_000c70b8(&uStack_180,auStack_128);
      FUN_0001393c(auStack_128,uStack_110);
      uVar6 = (ulong)(param_4 & 0x1010101);
      uVar4 = uStack_110;
      (**(code **)(lStack_108 + 8))(uVar6,uStack_110,lStack_108);
      uVar10 = uStack_100;
      uVar8 = uStack_100;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar7 = uVar10;
      if ((uVar8 & 1) == 0) {
        uVar7 = 0;
        FUN_000540b4(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
      }
      uVar10 = *(ulong *)(uVar7 + 0x10);
      uVar8 = *(ulong *)(uVar7 + 0x18);
      uVar11 = uVar8 >> 1;
      lVar12 = uVar10 + 1;
      uVar9 = uVar7;
      if (uVar11 <= uVar10) {
        uVar9 = (ulong)(1 < uVar8);
        FUN_000540b4(uVar9,lVar12,1,uVar7);
        uVar8 = *(ulong *)(uVar9 + 0x18);
        uVar11 = uVar8 >> 1;
      }
      *(long *)(uVar9 + 0x10) = lVar12;
      *(undefined1 *)(uVar9 + uVar10 + 0x20) = 0x2c;
      lVar1 = uVar10 + 2;
      uVar10 = uVar9;
      if ((long)uVar11 < lVar1) {
        uVar10 = (ulong)(1 < uVar8);
        FUN_000540b4(uVar10,lVar1,1,uVar9);
      }
      *(long *)(uVar10 + 0x10) = lVar1;
      *(undefined1 *)(uVar10 + lVar12 + 0x20) = 0x22;
      uStack_100 = uVar10;
      func_0x000c79f0(0x65756c6176,0xe500000000000000);
      func_0x000c7840("\":",2);
      uStack_f8 = CONCAT62(uStack_f8._2_6_,0x2c);
      func_0x000c79f0(uVar6,uVar4);
      FUN_00011670(auStack_128);
    }
    uVar10 = uStack_100;
    uVar8 = uStack_100;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar7 = uVar10;
    if ((uVar8 & 1) == 0) {
      uVar7 = 0;
      FUN_000540b4(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
    }
    uVar10 = *(ulong *)(uVar7 + 0x10);
    lVar12 = uVar10 + 1;
    uVar8 = uVar7;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar10) {
      uVar8 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      FUN_000540b4(uVar8,lVar12,1,uVar7);
    }
    *(long *)(uVar8 + 0x10) = lVar12;
    unaff_x21 = uVar8 + 0x20;
    *(undefined1 *)(unaff_x21 + uVar10) = 0x7d;
    uStack_f8 = CONCAT62(uStack_f8._2_6_,0x2c);
    uStack_100 = uVar8;
    _swift_bridgeObjectRetain(uVar8);
    __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(unaff_x21,lVar12);
    _swift_bridgeObjectRelease(uVar8);
    func_0x000c7208(&uStack_100);
  }
  auVar13._8_8_ = lVar12;
  auVar13._0_8_ = unaff_x21;
  return auVar13;
}



/* Entry: 000c2400; end: 000c24ef;  */

undefined1  [16] FUN_000c2400(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  uVar2 = 0xae65a8;
  func_0x000115a8(0xae65a8,&UNK_007cd3b0);
  lVar5 = 0xaed9e8;
  _swift_initStaticObject();
  _swift_bridgeObjectRetain(param_1);
  FUN_00053fc4();
  uVar4 = uVar2;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar3 = uVar2;
  if ((uVar4 & 1) == 0) {
    lVar5 = *(long *)(uVar2 + 0x10) + 1;
    uVar3 = 0;
    FUN_000540b4(0,lVar5,1,uVar2);
  }
  uVar2 = *(ulong *)(uVar3 + 0x10);
  lVar1 = uVar2 + 1;
  uVar4 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    lVar5 = lVar1;
    FUN_000540b4(uVar4,lVar1,1,uVar3);
  }
  *(long *)(uVar4 + 0x10) = lVar1;
  *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x7d;
  uVar2 = uVar4;
  func_0x0005374c(uVar4);
  _swift_bridgeObjectRelease(uVar4);
  auVar6._8_8_ = lVar5;
  auVar6._0_8_ = uVar2;
  return auVar6;
}



/* Entry: 000c24f0; end: 000c2a3f;  */

/* WARNING: Removing unreachable block (ram,0x000c27d0) */
/* WARNING: Removing unreachable block (ram,0x000c28a4) */

void FUN_000c24f0(long param_1,long param_2,undefined8 param_3,byte param_4,undefined8 param_5,
                 undefined8 *param_6)

{
  ulong uVar1;
  byte bVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 *puVar7;
  char *pcVar8;
  ulong uVar9;
  byte *pbVar10;
  long lVar11;
  long unaff_x21;
  ulong uVar12;
  char acStack_118 [24];
  long lStack_100;
  char acStack_f0 [40];
  long lStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  byte bStack_a0;
  undefined *apuStack_98 [3];
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == param_1) {
    return;
  }
  FUN_000c7184(param_5,acStack_f0);
  lVar4 = 0;
  func_0x000dfc88();
  _swift_allocObject();
  uVar5 = 0x80;
  _swift_slowAlloc(0x80,0xffffffffffffffff);
  *(undefined8 *)(lVar4 + 0x10) = uVar5;
  *(undefined8 *)(lVar4 + 0x18) = 0x80;
  uStack_b8 = 0;
  bStack_a0 = param_4 & 1;
  lStack_c8 = param_1;
  lStack_c0 = param_2;
  lStack_b0 = lVar4;
  uStack_a8 = param_3;
  uStack_70 = param_3;
  func_0x000c6fb4(acStack_f0,acStack_118);
  if (lStack_100 == 0) {
    ppuStack_78 = &PTR_DAT_009ae850;
    puStack_80 = &UNK_009ae878;
    apuStack_98[0] = PTR___swiftEmptyDictionarySingleton_0099b8f8;
    pcVar6 = (char *)0xaed1d8;
    pcVar8 = acStack_f0;
    func_0x000c71c8(pcVar8,0xaed1d8,&UNK_007d78b0);
    if (lStack_100 != 0) {
      pcVar6 = (char *)0xaed1d8;
      pcVar8 = acStack_118;
      func_0x000c71c8(pcVar8,0xaed1d8,&UNK_007d78b0);
    }
  }
  else {
    func_0x000c71c8(acStack_f0,0xaed1d8,&UNK_007d78b0);
    pcVar8 = acStack_118;
    pcVar6 = (char *)apuStack_98;
    FUN_000c70b8();
  }
  uVar5 = 5;
  while( true ) {
    uVar12 = lStack_c0 - param_1;
    if (uStack_b8 == uVar12) break;
    uVar9 = uStack_b8;
    if (uStack_b8 < uVar12) {
      uVar9 = uVar12;
    }
    while (*(byte *)(param_1 + uStack_b8) < 0x21 &&
           (1L << ((ulong)*(byte *)(param_1 + uStack_b8) & 0x3f) & 0x100002600U) != 0) {
      if (uVar9 == uStack_b8) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xc2804);
        (*pcVar3)();
      }
      uStack_b8 = uStack_b8 + 1;
      if (uVar12 == uStack_b8) goto LAB_000c2914;
    }
    while( true ) {
      if (uVar12 == uStack_b8) {
        uVar5 = 0xd;
        goto LAB_000c27d8;
      }
      bVar2 = *(byte *)(param_1 + uStack_b8);
      if (0x22 < bVar2) goto LAB_000c27d8;
      if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) break;
      if (uVar12 <= uStack_b8) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xc2808);
        (*pcVar3)();
      }
      uStack_b8 = uStack_b8 + 1;
    }
    if (((ulong)bVar2 != 0x22) || (FUN_0010a190(), pcVar6 == (char *)0x0)) {
LAB_000c27d8:
      FUN_000c7004();
      _swift_allocError(&UNK_009ad5a0,pcVar8,0,0);
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8[2] = '\0';
      pcVar8[3] = '\0';
      pcVar8[4] = '\0';
      pcVar8[5] = '\0';
      pcVar8[6] = '\0';
      pcVar8[7] = '\0';
      *(undefined8 *)(pcVar8 + 8) = uVar5;
      goto LAB_000c29b4;
    }
    FUN_0010a6f0(0x3a);
    if (unaff_x21 != 0) {
      FUN_000c7044(&lStack_c8);
      _swift_bridgeObjectRelease(pcVar6);
      return;
    }
    if ((pcVar8 == (char *)0x65756c6176) && (pcVar6 == (char *)0xe500000000000000)) {
      _swift_bridgeObjectRelease(0xe500000000000000);
LAB_000c2828:
      uVar9 = uVar12;
      if (uStack_b8 == uVar12) goto LAB_000c288c;
      uVar1 = uVar12;
      if (uVar12 <= uStack_b8) {
        uVar1 = uStack_b8;
      }
      goto LAB_000c2858;
    }
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (pcVar8,pcVar6,0x65756c6176,0xe500000000000000,0);
    _swift_bridgeObjectRelease();
    if (((ulong)pcVar8 & 1) != 0) goto LAB_000c2828;
    if ((param_4 & 1) == 0) goto LAB_000c298c;
    uVar9 = uVar12;
    if (uStack_b8 != uVar12) {
      uVar1 = uStack_b8;
      if (uStack_b8 <= uVar12) {
        uVar1 = uVar12;
      }
      do {
        uVar9 = uStack_b8;
        if (0x20 < *(byte *)(param_1 + uStack_b8) ||
            (1L << ((ulong)*(byte *)(param_1 + uStack_b8) & 0x3f) & 0x100002600U) == 0) break;
        if (uVar1 == uStack_b8) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0xc2a2c);
          (*pcVar3)();
        }
        uStack_b8 = uStack_b8 + 1;
        uVar9 = uVar12;
      } while (uVar12 != uStack_b8);
    }
    FUN_0010a7bc();
    param_1 = lStack_c8;
    if (lStack_c8 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xc2a3c);
      (*pcVar3)();
    }
    pcVar6 = (char *)(uStack_b8 - uVar9);
    if (SBORROW8(uStack_b8,uVar9)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xc2a30);
      (*pcVar3)();
    }
    puVar7 = (undefined8 *)(lStack_c8 + uVar9);
    FUN_00122abc();
    if (pcVar6 == (char *)0x0) {
      FUN_000c7004();
      _swift_allocError(&UNK_009ad5a0,puVar7,0,0);
      puVar7[1] = 6;
      *puVar7 = 0;
      goto LAB_000c29b4;
    }
    _swift_bridgeObjectRelease(pcVar6);
    pcVar8 = segment_command_00000020.segname + 4;
    FUN_0010a6f0();
  }
LAB_000c2914:
  if (((param_4 & 1) == 0) && (uVar9 = lStack_c0 - param_1, uVar12 != uVar9)) {
    lVar4 = 0;
    if (uVar12 <= uVar9) {
      lVar4 = uVar9 - uVar12;
    }
    lVar11 = (lStack_c0 - uVar12) - param_1;
    pbVar10 = (byte *)(param_1 + uVar12);
    do {
      uVar12 = uVar12 + 1;
      pcVar6 = pcVar8;
      if (0x20 < *pbVar10 || (1L << ((ulong)*pbVar10 & 0x3f) & 0x100002600U) == 0)
      goto LAB_000c298c;
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xc29ec);
        (*pcVar3)();
      }
      lVar4 = lVar4 + -1;
      lVar11 = lVar11 + -1;
      pbVar10 = pbVar10 + 1;
      uStack_b8 = uVar12;
    } while (lVar11 != 0);
  }
  FUN_000c7044(&lStack_c8);
  return;
LAB_000c298c:
  FUN_000c7078();
  _swift_allocError(&UNK_009aab70,pcVar6,0,0);
  *pcVar6 = '\x01';
LAB_000c29b4:
  _swift_willThrow();
  goto LAB_000c29c0;
  while( true ) {
    if (uVar1 == uStack_b8) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xc2a34);
      (*pcVar3)();
    }
    uStack_b8 = uStack_b8 + 1;
    uVar9 = uVar12;
    if (uVar12 == uStack_b8) break;
LAB_000c2858:
    uVar9 = uStack_b8;
    if (0x20 < *(byte *)(param_1 + uStack_b8) ||
        (1L << ((ulong)*(byte *)(param_1 + uStack_b8) & 0x3f) & 0x100002600U) == 0) break;
  }
LAB_000c288c:
  FUN_0010a7bc();
  uVar12 = uStack_b8;
  param_1 = lStack_c8;
  if (lStack_c8 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0xc2a40);
    (*pcVar3)();
  }
  lVar4 = uStack_b8 - uVar9;
  if (SBORROW8(uStack_b8,uVar9)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0xc2a38);
    (*pcVar3)();
  }
  puVar7 = (undefined8 *)(lStack_c8 + uVar9);
  FUN_00122abc();
  if (lVar4 != 0) {
    pcVar8 = (char *)param_6[1];
    *param_6 = puVar7;
    param_6[1] = lVar4;
    _swift_bridgeObjectRelease();
    goto LAB_000c2914;
  }
  FUN_000c7004();
  _swift_allocError(&UNK_009ad5a0,puVar7,0,0);
  puVar7[1] = 6;
  *puVar7 = 0;
  _swift_willThrow();
LAB_000c29c0:
  FUN_000c7044(&lStack_c8);
  return;
}



/* Entry: 000c2a40; end: 000c2f83;  */

/* WARNING: Removing unreachable block (ram,0x000c2f1c) */
/* WARNING: Removing unreachable block (ram,0x000c2c80) */
/* WARNING: Removing unreachable block (ram,0x000c2e50) */
/* WARNING: Removing unreachable block (ram,0x000c2e64) */
/* WARNING: Removing unreachable block (ram,0x000c2af4) */
/* WARNING: Removing unreachable block (ram,0x000c2df0) */
/* WARNING: Removing unreachable block (ram,0x000c2e68) */
/* WARNING: Removing unreachable block (ram,0x000c2e6c) */

void FUN_000c2a40(void)

{
  ulong uVar1;
  uint uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  long unaff_x20;
  long lVar14;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined1 uStack_157;
  undefined1 uStack_156;
  undefined1 uStack_155;
  undefined1 uStack_154;
  undefined1 uStack_153;
  long lStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_110;
  undefined **ppuStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  char cStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  _swift_beginAccess(unaff_x20 + 0x20,auStack_b8,0,0);
  FUN_000c6ee0(unaff_x20 + 0x20,&lStack_a0);
  if (cStack_78 != '\0') {
    if (cStack_78 == '\x01') {
      FUN_000c70b8(&lStack_a0,&lStack_100);
      puVar11 = puStack_e0;
      puVar4 = puStack_e8;
      plVar9 = &lStack_100;
      FUN_0001393c(plVar9,puStack_e8);
      FUN_0010b7b8(&puStack_128,1,0,puVar4,PTR___s10Foundation4DataVN_0099c3c0,puVar11,
                   &PTR_DAT_009ae8f0,plVar9);
    }
    else {
      _swift_beginAccess(unaff_x20 + 0x10,auStack_d0,0,0);
      puVar4 = *(undefined **)(unaff_x20 + 0x10);
      puVar11 = *(undefined **)(unaff_x20 + 0x18);
      _swift_bridgeObjectRetain(puVar11);
      puVar5 = puVar11;
      FUN_000ea9a4();
      puVar10 = puVar5;
      func_0x000eb700();
      _swift_bridgeObjectRelease(puVar11);
      _swift_bridgeObjectRelease(puVar5);
      if (puVar4 == (undefined *)0x0) {
        _swift_bridgeObjectRelease(lStack_a0);
        uStack_120 = 0xc000000000000000;
        puVar4 = (undefined *)0x0;
        goto LAB_000c2f38;
      }
      ppuStack_108 = &PTR_DAT_009ae850;
      puStack_110 = &UNK_009ae878;
      puStack_128 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
      puVar11 = &DAT_00843adc;
      puVar5 = puVar4;
      _swift_conformsToProtocol();
      puStack_e8 = puVar4;
      puStack_e0 = puVar10;
      if (puVar5 == (undefined *)0x0) {
        lVar8 = lStack_a0;
        FUN_000c2400();
        lStack_138 = lVar8;
        puStack_130 = puVar11;
        FUN_000c7184(&puStack_128,&uStack_160);
        plVar9 = &lStack_100;
        func_0x00016cc8(plVar9);
        func_0x00023304(lVar8,puVar11);
        FUN_0010cca0(plVar9,&lStack_138,&uStack_160,uStack_98,uStack_90,puVar4,
                     PTR___s10Foundation4DataVN_0099c3c0,puVar10,&PTR_DAT_009ae8f0);
        _swift_bridgeObjectRelease(lStack_a0);
        FUN_00023358(lVar8,puVar11);
      }
      else {
        lStack_138 = 0;
        puStack_130 = (undefined *)0xe000000000000000;
        FUN_000c24f0(lStack_a0 + 0x20,lStack_a0 + 0x20 + *(long *)(lStack_a0 + 0x10),uStack_98,
                     uStack_90,&puStack_128,&lStack_138);
        puVar11 = puStack_130;
        lVar8 = lStack_138;
        FUN_000c7184(&puStack_128,&uStack_160);
        plVar9 = &lStack_100;
        func_0x00016cc8(plVar9);
        _swift_bridgeObjectRetain(puVar11);
        FUN_0010cdec(plVar9,lVar8,puVar11,&uStack_160,uStack_98,uStack_90,puVar4,puVar10);
        _swift_bridgeObjectRelease(puVar11);
        _swift_bridgeObjectRelease(lStack_a0);
      }
      FUN_00011670(&puStack_128);
      puVar11 = puStack_e0;
      puVar4 = puStack_e8;
      plVar9 = &lStack_100;
      FUN_0001393c(plVar9,puStack_e8);
      FUN_0010b7b8(&puStack_128,1,0,puVar4,PTR___s10Foundation4DataVN_0099c3c0,puVar11,
                   &PTR_DAT_009ae8f0,plVar9);
    }
    puVar4 = puStack_128;
    FUN_00011670(&lStack_100);
    goto LAB_000c2f38;
  }
  puStack_e8 = PTR___s10Foundation4DataVN_0099c3c0;
  puStack_e0 = PTR___s10Foundation4DataVAA15ContiguousBytesAAWP_0099c3b0;
  uStack_f8 = uStack_98;
  lStack_100 = lStack_a0;
  plVar9 = &lStack_100;
  FUN_0001393c();
  lVar8 = *plVar9;
  uVar1 = plVar9[1];
  uVar2 = (uint)(uVar1 >> 0x20);
  uVar13 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar13 == 0) {
      uStack_160._0_1_ = (undefined1)lVar8;
      uStack_160._1_1_ = (undefined1)((ulong)lVar8 >> 8);
      uStack_160._2_1_ = (undefined1)((ulong)lVar8 >> 0x10);
      uStack_160._3_1_ = (undefined1)((ulong)lVar8 >> 0x18);
      uStack_160._4_1_ = (undefined1)((ulong)lVar8 >> 0x20);
      uStack_160._5_1_ = (undefined1)((ulong)lVar8 >> 0x28);
      uStack_160._6_1_ = (undefined1)((ulong)lVar8 >> 0x30);
      uStack_160._7_1_ = (undefined1)((ulong)lVar8 >> 0x38);
      uStack_158 = (undefined1)uVar1;
      uStack_157 = (undefined1)(uVar1 >> 8);
      uStack_156 = (undefined1)(uVar1 >> 0x10);
      uStack_155 = (undefined1)(uVar1 >> 0x18);
      uStack_154 = (undefined1)(uVar1 >> 0x20);
      uStack_153 = (undefined1)(uVar1 >> 0x28);
      puVar12 = (undefined8 *)((long)&uStack_160 + (uVar1 >> 0x30 & 0xff));
      plVar9 = &uStack_160;
    }
    else {
      lVar14 = (long)(int)lVar8;
      plVar6 = (long *)((lVar8 >> 0x20) - lVar14);
      if (lVar8 >> 0x20 < lVar14) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xc2f74);
        (*pcVar3)();
      }
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      if (plVar9 == (long *)0x0) {
        __s10Foundation13__DataStorageC7_lengthSivg();
        plVar9 = (long *)0x0;
      }
      else {
        plVar7 = plVar9;
        __s10Foundation13__DataStorageC7_offsetSivg();
        if (SBORROW8(lVar14,(long)plVar7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0xc2f80);
          (*pcVar3)();
        }
        plVar9 = (long *)((lVar14 - (long)plVar7) + (long)plVar9);
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (plVar9 != (long *)0x0) {
          if ((long)plVar6 <= (long)plVar7) {
            plVar7 = plVar6;
          }
          puVar12 = (undefined8 *)((long)plVar7 + (long)plVar9);
          goto LAB_000c2ea8;
        }
      }
      puVar12 = (undefined8 *)0x0;
    }
  }
  else if (uVar13 == 2) {
    lVar14 = *(long *)(lVar8 + 0x10);
    lVar8 = *(long *)(lVar8 + 0x18);
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    plVar6 = plVar9;
    if (plVar9 != (long *)0x0) {
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(lVar14,(long)plVar6)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xc2f7c);
        (*pcVar3)();
      }
      plVar9 = (long *)((lVar14 - (long)plVar6) + (long)plVar9);
    }
    plVar7 = (long *)(lVar8 - lVar14);
    if (SBORROW8(lVar8,lVar14)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xc2f78);
      (*pcVar3)();
    }
    __s10Foundation13__DataStorageC7_lengthSivg();
    if (plVar9 == (long *)0x0) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      if ((long)plVar7 <= (long)plVar6) {
        plVar6 = plVar7;
      }
      puVar12 = (undefined8 *)((long)plVar6 + (long)plVar9);
    }
  }
  else {
    uStack_158 = 0;
    uStack_157 = 0;
    uStack_156 = 0;
    uStack_155 = 0;
    uStack_154 = 0;
    uStack_153 = 0;
    uStack_160._0_1_ = 0;
    uStack_160._1_1_ = 0;
    uStack_160._2_1_ = 0;
    uStack_160._3_1_ = 0;
    uStack_160._4_1_ = 0;
    uStack_160._5_1_ = 0;
    uStack_160._6_1_ = 0;
    uStack_160._7_1_ = 0;
    plVar9 = &uStack_160;
    puVar12 = &uStack_160;
  }
LAB_000c2ea8:
  func_0x000535e8(&puStack_128,plVar9,puVar12);
  FUN_00011670(&lStack_100);
  puVar4 = puStack_128;
LAB_000c2f38:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return;
  }
  ___stack_chk_fail(puVar4,uStack_120);
  FUN_000c6ae4();
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0xe000000000000000;
  *(undefined8 *)(puVar4 + 0x28) = 0xc000000000000000;
  *(undefined8 *)(puVar4 + 0x20) = 0;
  puVar4[0x48] = 0;
  puRam0000000000b64ad0 = puVar4;
  return;
}



/* Entry: 000c2f84; end: 000c2fc3;  */

void FUN_000c2f84(long param_1)

{
  FUN_000c6ae4();
  _swift_allocObject();
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0xe000000000000000;
  *(undefined8 *)(param_1 + 0x28) = 0xc000000000000000;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  lRam0000000000b64ad0 = param_1;
  return;
}



/* Entry: 000c2fc4; end: 000c3197;  */

void FUN_000c2fc4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x20;
  undefined8 *puVar4;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [48];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  puVar4 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar4 = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0xe000000000000000;
  puVar3 = (undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x28) = 0xc000000000000000;
  *puVar3 = 0;
  *(undefined1 *)(unaff_x20 + 0x48) = 0;
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _swift_beginAccess(puVar4,auStack_70,1,0);
  *puVar4 = uVar1;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  _swift_beginAccess(param_1 + 0x20,auStack_b8,0,0);
  FUN_000c6ee0(param_1 + 0x20,auStack_a0);
  _swift_bridgeObjectRetain(uVar2);
  _swift_release(param_1);
  _swift_beginAccess(puVar3,auStack_d0,0x21,0);
  FUN_000c70d0(auStack_a0,puVar3);
  _swift_endAccess(auStack_d0);
  return;
}



/* Entry: 000c3198; end: 000c3847;  */

/* WARNING: Removing unreachable block (ram,0x000c3788) */

void FUN_000c3198(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,long param_5
                 ,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar8;
  code *pcVar9;
  long unaff_x20;
  long unaff_x21;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined8 auStack_180 [2];
  undefined1 auStack_170 [12];
  uint uStack_164;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *apuStack_128 [3];
  long lStack_110;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  undefined1 auStack_d8 [24];
  long lStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  char cStack_70;
  
  puVar3 = (undefined1 *)0x0;
  uStack_164 = param_4;
  uStack_160 = param_3;
  uStack_158 = param_1;
  uStack_140 = param_2;
  __sSqMa(0,param_5);
  lVar10 = *(long *)(puVar3 + -8);
  puVar4 = puVar3;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = auStack_170 + -extraout_x8;
  lStack_150 = *(long *)(param_5 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_150 + 0x40));
  lVar12 = (long)puVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar11 = lVar12 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar8 = lVar11 - extraout_x12_00;
  uStack_148 = param_6;
  func_0x000c30ac();
  if (((ulong)puVar4 & 1) == 0) {
    FUN_000c7078();
    _swift_allocError(&UNK_009aab70,puVar4,0,0);
    *puVar4 = 0;
    _swift_willThrow();
    return;
  }
  _swift_beginAccess(unaff_x20 + 0x20,auStack_b0,0,0);
  FUN_000c6ee0(unaff_x20 + 0x20,&puStack_98);
  if (cStack_70 == '\0') {
    puStack_100 = puStack_98;
    uStack_f8 = uStack_90;
    func_0x000c6fb4(uStack_140,auStack_d8);
    func_0x00023304(puStack_98,uStack_90);
    *(undefined ***)(lVar8 + -0x10) = &PTR_DAT_009ae8f0;
    FUN_0010b930(lVar8,&puStack_100,auStack_d8,1,uStack_160,uStack_164 & 1,param_5,
                 PTR___s10Foundation4DataVN_0099c3c0,uStack_148);
    lVar10 = lStack_150;
    uVar6 = uStack_158;
    if (unaff_x21 != 0) {
      FUN_00023358(puStack_98,uStack_90);
      return;
    }
    (**(code **)(lStack_150 + 8))(uStack_158,param_5);
    FUN_00023358(puStack_98,uStack_90);
    (**(code **)(lVar10 + 0x20))(uVar6,lVar8,param_5);
    return;
  }
  if (cStack_70 == '\x01') {
    FUN_000c70b8(&puStack_98,auStack_d8);
    FUN_000c7184(auStack_d8,&puStack_100);
    uVar6 = 0xaeda20;
    func_0x000115a8(0xaeda20,&UNK_007d8100);
    puVar4 = puVar13;
    _swift_dynamicCast(puVar13,&puStack_100,uVar6,param_5,6);
    lVar2 = lStack_150;
    if ((int)puVar4 == 0) {
      (**(code **)(lStack_150 + 0x38))(puVar13,1,1,param_5);
      (**(code **)(lVar10 + 8))(puVar13,puVar3);
      FUN_0001393c(auStack_d8,lStack_c0);
      uVar6 = 0xae8230;
      func_0x000115a8(0xae8230,&UNK_007d78c0);
      FUN_0010b7b8(&puStack_100,1,0,lStack_c0,uVar6,uStack_b8,&PTR_DAT_009ae8c0);
      if (unaff_x21 == 0) {
        apuStack_128[0] = puStack_100;
        func_0x000c6fb4(uStack_140,&puStack_100);
        *(undefined ***)(lVar8 + -0x10) = &PTR_DAT_009ae8c0;
        FUN_0010b930(lVar12,apuStack_128,&puStack_100,1,100,0,param_5,uVar6,uStack_148);
        lVar8 = lStack_150;
        uVar6 = uStack_158;
        (**(code **)(lStack_150 + 8))(uStack_158,param_5);
        (**(code **)(lVar8 + 0x20))(uVar6,lVar12,param_5);
      }
    }
    else {
      (**(code **)(lStack_150 + 0x38))(puVar13,0,1,param_5);
      uVar6 = uStack_158;
      (**(code **)(lVar2 + 8))(uStack_158,param_5);
      pcVar9 = *(code **)(lVar2 + 0x20);
      (*pcVar9)(lVar11,puVar13,param_5);
      (*pcVar9)(uVar6,lVar11,param_5);
    }
    FUN_00011670(auStack_d8);
    return;
  }
  func_0x000c6fb4(uStack_140,apuStack_128);
  if (lStack_110 == 0) {
    ppuStack_e0 = &PTR_DAT_009ae850;
    puStack_e8 = &UNK_009ae878;
    puStack_100 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  }
  else {
    FUN_000c70b8(apuStack_128,&puStack_100);
  }
  puVar7 = &DAT_00843adc;
  lVar8 = param_5;
  _swift_conformsToProtocol();
  if (lVar8 == 0) {
    puVar5 = puStack_98;
    FUN_000c2400();
    puStack_138 = puVar5;
    puStack_130 = puVar7;
    FUN_000c7184(&puStack_100,apuStack_128);
    uVar6 = uStack_148;
    uStack_b8 = uStack_148;
    puVar4 = auStack_d8;
    lStack_c0 = param_5;
    func_0x00016cc8(puVar4);
    func_0x00023304(puVar5,puVar7);
    FUN_0010cca0(puVar4,&puStack_138,apuStack_128,uStack_90,uStack_88,param_5,
                 PTR___s10Foundation4DataVN_0099c3c0,uVar6,&PTR_DAT_009ae8f0);
    if (unaff_x21 == 0) {
      _swift_bridgeObjectRelease(puStack_98);
      FUN_00023358(puVar5,puVar7);
      goto LAB_000c37d0;
    }
    _swift_bridgeObjectRelease(puStack_98);
    FUN_00023358(puVar5,puVar7);
    FUN_000c6f54(auStack_d8);
  }
  else {
    puStack_138 = (undefined *)0x0;
    puStack_130 = (undefined *)0xe000000000000000;
    FUN_000c24f0(puStack_98 + 0x20,puStack_98 + 0x20 + *(long *)(puStack_98 + 0x10),uStack_90,
                 uStack_88,&puStack_100,&puStack_138);
    puVar5 = puStack_130;
    puVar7 = puStack_138;
    if (unaff_x21 == 0) {
      FUN_000c7184(&puStack_100,apuStack_128);
      uVar6 = uStack_148;
      uStack_b8 = uStack_148;
      puVar4 = auStack_d8;
      lStack_c0 = param_5;
      func_0x00016cc8(puVar4);
      _swift_bridgeObjectRetain(puVar5);
      FUN_0010cdec(puVar4,puVar7,puVar5,apuStack_128,uStack_90,uStack_88,param_5,uVar6);
      _swift_bridgeObjectRelease(puVar5);
      _swift_bridgeObjectRelease(puStack_98);
LAB_000c37d0:
      uVar1 = uStack_158;
      (**(code **)(lStack_150 + 8))(uStack_158,param_5);
      FUN_00011670(&puStack_100);
      uVar6 = 0xaeda20;
      func_0x000115a8(0xaeda20,&UNK_007d8100);
      _swift_dynamicCast(uVar1,auStack_d8,uVar6,param_5,7);
      return;
    }
    _swift_bridgeObjectRelease(puStack_98);
    _swift_bridgeObjectRelease(puStack_130);
  }
  FUN_00011670(&puStack_100);
  return;
}



/* Entry: 000c3848; end: 000c3b4f;  */

/* WARNING: Removing unreachable block (ram,0x000c3ad0) */

void FUN_000c3848(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_150 [40];
  undefined1 *puStack_128;
  undefined *puStack_120;
  undefined *apuStack_118 [3];
  undefined *puStack_100;
  undefined **ppuStack_f8;
  undefined1 auStack_f0 [24];
  long lStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  char cStack_70;
  
  _swift_beginAccess(unaff_x20 + 0x20,auStack_b0,0,0);
  FUN_000c6ee0(unaff_x20 + 0x20,&puStack_98);
  if ((cStack_70 == '\0') || (cStack_70 == '\x01')) {
    FUN_000c6f88(&puStack_98);
    return;
  }
  _swift_beginAccess(unaff_x20 + 0x10,auStack_c8,0,0);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  _swift_bridgeObjectRetain(uVar1);
  uVar7 = uVar1;
  FUN_000ea9a4();
  uVar8 = uVar7;
  func_0x000eb700();
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar7);
  if (lVar2 == 0) {
    _swift_bridgeObjectRelease();
    FUN_000c6f14();
    _swift_allocError(&UNK_009ab310,puStack_98,0,0);
    *puStack_98 = 0;
    _swift_willThrow();
    return;
  }
  ppuStack_f8 = &PTR_DAT_009ae850;
  puStack_100 = &UNK_009ae878;
  apuStack_118[0] = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puVar9 = &DAT_00843adc;
  lVar3 = lVar2;
  _swift_conformsToProtocol();
  if (lVar3 == 0) {
    puVar4 = puStack_98;
    FUN_000c2400();
    puStack_128 = puVar4;
    puStack_120 = puVar9;
    FUN_000c7184(apuStack_118,auStack_150);
    puVar5 = auStack_f0;
    lStack_d8 = lVar2;
    uStack_d0 = uVar8;
    func_0x00016cc8(puVar5);
    func_0x00023304(puVar4,puVar9);
    FUN_0010cca0(puVar5,&puStack_128,auStack_150,uStack_90,uStack_88,lVar2,
                 PTR___s10Foundation4DataVN_0099c3c0,uVar8,&PTR_DAT_009ae8f0);
    _swift_bridgeObjectRelease(puStack_98);
    FUN_00023358(puVar4,puVar9);
    if (unaff_x21 == 0) goto LAB_000c3b3c;
    FUN_000c6f54(auStack_f0);
  }
  else {
    puStack_128 = (undefined1 *)0x0;
    puStack_120 = (undefined *)0xe000000000000000;
    FUN_000c24f0(puStack_98 + 0x20,puStack_98 + 0x20 + *(long *)(puStack_98 + 0x10),uStack_90,
                 uStack_88,apuStack_118,&puStack_128);
    puVar9 = puStack_120;
    puVar5 = puStack_128;
    if (unaff_x21 == 0) {
      FUN_000c7184(apuStack_118,auStack_150);
      puVar4 = auStack_f0;
      lStack_d8 = lVar2;
      uStack_d0 = uVar8;
      func_0x00016cc8(puVar4);
      _swift_bridgeObjectRetain(puVar9);
      FUN_0010cdec(puVar4,puVar5,puVar9,auStack_150,uStack_90,uStack_88,lVar2,uVar8);
      _swift_bridgeObjectRelease(puVar9);
      _swift_bridgeObjectRelease(puStack_98);
LAB_000c3b3c:
      FUN_00011670(auStack_f0);
      FUN_00011670(apuStack_118);
      return;
    }
    _swift_bridgeObjectRelease(puStack_98);
    _swift_bridgeObjectRelease(puStack_120);
  }
  ppuVar6 = apuStack_118;
  FUN_00011670();
  FUN_000c6f14();
  _swift_allocError(&UNK_009ab310,ppuVar6,0,0);
  *(undefined1 *)ppuVar6 = 0;
  _swift_willThrow();
  _swift_errorRelease(unaff_x21);
  return;
}



/* Entry: 000c3b50; end: 000c3b7b;  */

void FUN_000c3b50(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_000c6f88(unaff_x20 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 000c3b7c; end: 000c3f77;  */

/* WARNING: Removing unreachable block (ram,0x000c3d20) */
/* WARNING: Removing unreachable block (ram,0x000c3e0c) */

void FUN_000c3b7c(undefined *param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  code *pcVar9;
  undefined1 auStack_238 [24];
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined1 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined1 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined1 uStack_197;
  undefined6 uStack_196;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_a8,1,0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined **)(unaff_x20 + 0x10) = param_1;
  *(undefined1 **)(unaff_x20 + 0x18) = param_2;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRelease(uVar8);
  FUN_000ea9a4();
  puVar7 = param_2;
  func_0x000eb700();
  _swift_bridgeObjectRelease();
  if (param_1 == (undefined *)0x0) {
    FUN_000c723c();
    _swift_allocError(&UNK_009aeed8,param_2,0,0);
    *param_2 = 0;
    _swift_willThrow();
  }
  else {
    FUN_00135bd4();
    if (unaff_x21 == 0) {
      uStack_1a0 = 0;
      FUN_000c727c(param_3,&uStack_1f8);
      uStack_198 = SUB81(param_2,0);
      uStack_197 = 0;
      puVar4 = param_1;
      _swift_conformsToProtocol(param_1,&DAT_00844958);
      if (puVar4 == (undefined *)0x0) {
        FUN_000c723c();
        _swift_allocError(&UNK_009aeed8,puVar4,0,0);
        *puVar4 = 6;
        _swift_willThrow();
        func_0x000c72b8(&uStack_1f8);
      }
      else {
        (**(code **)(puVar4 + 8))(&uStack_90,param_1,puVar4);
        uStack_178 = uStack_78;
        uStack_180 = uStack_80;
        uStack_188 = uStack_88;
        uStack_190 = uStack_90;
        uStack_168 = uStack_68;
        uStack_170 = uStack_70;
        uStack_118 = uStack_1c0;
        uStack_120 = uStack_1c8;
        uStack_108 = uStack_1b0;
        uStack_110 = uStack_1b8;
        uStack_f8 = uStack_1a0;
        uStack_100 = uStack_1a8;
        uStack_148 = uStack_1f0;
        uStack_150 = uStack_1f8;
        puStack_138 = puStack_1e0;
        uStack_140 = uStack_1e8;
        puStack_130 = puStack_1d8;
        uStack_c8 = uStack_70;
        uStack_d0 = uStack_78;
        uStack_c0 = uStack_68;
        uStack_f0 = CONCAT62(uStack_196,CONCAT11(uStack_197,uStack_198));
        uStack_e8 = uStack_90;
        uStack_d8 = uStack_80;
        uStack_e0 = uStack_88;
        puStack_160 = param_1;
        puStack_b8 = param_1;
        puStack_b0 = puVar7;
        if (param_1 == &UNK_009af680) {
          uStack_218 = 0xc000000000000000;
          uStack_220 = 0;
          if (lRam0000000000aed8b0 != -1) {
            _swift_once(0xaed8b0,FUN_000c2f84);
          }
          uStack_210 = uRam0000000000b64ad0;
          _swift_retain();
          puVar5 = &uStack_150;
          FUN_000e99b0();
          uVar2 = uStack_210;
          uVar1 = uStack_218;
          uVar8 = uStack_220;
          puStack_1e0 = &UNK_009af680;
          FUN_000c735c();
          uStack_1f8 = uVar8;
          uStack_1f0 = uVar1;
          uStack_1e8 = uVar2;
          puStack_1d8 = puVar5;
          func_0x00023304(uVar8,uVar1);
          _swift_retain(uVar2);
          FUN_00023358(uVar8,uVar1);
          _swift_release(uVar2);
          uStack_1d0 = 1;
          _swift_beginAccess(unaff_x20 + 0x20,auStack_238,0x21,0);
          FUN_000c70d0(&uStack_1f8,unaff_x20 + 0x20);
          _swift_endAccess(auStack_238);
        }
        else {
          pcVar9 = *(code **)(puVar7 + 0x10);
          puVar5 = &uStack_220;
          puStack_208 = param_1;
          puStack_200 = puVar7;
          func_0x00016cc8(puVar5);
          (*pcVar9)(puVar5,param_1,puVar7);
          puVar3 = puStack_200;
          puVar4 = puStack_208;
          FUN_000115f8(&uStack_220,puStack_208);
          (**(code **)(puVar7 + 0x40))(&uStack_150,&UNK_009aec48,&PTR_DAT_009aec70,puVar4,puVar3);
          FUN_000c7184(&uStack_220,&uStack_1f8);
          uStack_1d0 = 1;
          _swift_beginAccess(unaff_x20 + 0x20,auStack_238,0x21,0);
          FUN_000c70d0(&uStack_1f8,unaff_x20 + 0x20);
          _swift_endAccess(auStack_238);
          FUN_00011670(&uStack_220);
        }
        puVar5 = &uStack_150;
        func_0x000c7320();
        uVar6 = (uint)param_3;
        FUN_00125218();
        if ((uVar6 & 0xff) != 1) {
          FUN_000c723c();
          _swift_allocError(&UNK_009aeed8,puVar5,0,0);
          *(undefined1 *)puVar5 = 0;
          _swift_willThrow();
        }
        func_0x000c72ec(&uStack_150);
      }
    }
  }
  return;
}



/* Entry: 000c3f78; end: 000c46a7;  */

/* WARNING: Removing unreachable block (ram,0x000c426c) */
/* WARNING: Removing unreachable block (ram,0x000c43ac) */
/* WARNING: Removing unreachable block (ram,0x000c443c) */
/* WARNING: Removing unreachable block (ram,0x000c444c) */
/* WARNING: Removing unreachable block (ram,0x000c4450) */
/* WARNING: Removing unreachable block (ram,0x000c40f8) */

void FUN_000c3f78(ulong *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  uint uVar12;
  long unaff_x20;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_158 [40];
  long lStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined **ppuStack_100;
  undefined1 auStack_f0 [24];
  long lStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  undefined1 auStack_b0 [24];
  long lStack_98;
  ulong uStack_90;
  undefined1 uStack_88;
  char cStack_70;
  
  _swift_beginAccess(unaff_x20 + 0x20,auStack_b0,0,0);
  FUN_000c6ee0(unaff_x20 + 0x20,&lStack_98);
  if (cStack_70 == '\0') {
    _swift_beginAccess(unaff_x20 + 0x10,auStack_158,0,0);
    lVar3 = *(long *)(unaff_x20 + 0x10);
    uVar5 = *(ulong *)(unaff_x20 + 0x18);
    _swift_bridgeObjectRetain(uVar5);
    uVar10 = uVar5;
    FUN_000ea9a4();
    uVar8 = uVar10;
    func_0x000eb700();
    _swift_bridgeObjectRelease(uVar5);
    _swift_bridgeObjectRelease(uVar10);
    if (lVar3 == 0) {
      uVar10 = *(ulong *)(unaff_x20 + 0x10);
      uVar8 = *(ulong *)(unaff_x20 + 0x18);
      uVar5 = uVar10 & 0xffffffffffff;
      if ((uVar8 & 0x2000000000000000) != 0) {
        uVar5 = uVar8 >> 0x38 & 0xf;
      }
      if (uVar5 != 0) {
        _swift_bridgeObjectRetain(uVar8);
        FUN_0012f564(1);
        FUN_000c7840(": ",2);
        FUN_0012dbd0(uVar10,uVar8);
        uVar13 = *param_1;
        uVar5 = uVar13;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar10 = uVar13;
        if ((uVar5 & 1) == 0) {
          uVar10 = 0;
          FUN_000540b4(0,*(long *)(uVar13 + 0x10) + 1,1,uVar13);
        }
        uVar5 = *(ulong *)(uVar10 + 0x10);
        uVar13 = uVar10;
        if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar5) {
          uVar13 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
          FUN_000540b4(uVar13,uVar5 + 1,1,uVar10);
        }
        *(ulong *)(uVar13 + 0x10) = uVar5 + 1;
        *(undefined1 *)(uVar13 + uVar5 + 0x20) = 10;
        _swift_bridgeObjectRelease(uVar8);
        *param_1 = uVar13;
      }
      uVar2 = (uint)(uStack_90 >> 0x20);
      uVar12 = uVar2 >> 0x1e;
      if (uVar2 >> 0x1e < 2) {
        if (uVar12 == 0) {
          if ((uStack_90 & 0xff000000000000) != 0) {
LAB_000c428c:
            FUN_0012f564(2);
            FUN_000c7840(": ",2);
            FUN_0012e3dc(lStack_98,uStack_90);
            uVar8 = *param_1;
            uVar5 = uVar8;
            _swift_isUniquelyReferenced_nonNull_native();
            uVar10 = uVar8;
            if ((uVar5 & 1) == 0) {
              uVar10 = 0;
              FUN_000540b4(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
            }
            uVar5 = *(ulong *)(uVar10 + 0x10);
            uVar8 = uVar10;
            if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar5) {
              uVar8 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
              FUN_000540b4(uVar8,uVar5 + 1,1,uVar10);
            }
            *(ulong *)(uVar8 + 0x10) = uVar5 + 1;
            *(undefined1 *)(uVar8 + uVar5 + 0x20) = 10;
            FUN_00023358(lStack_98,uStack_90);
            *param_1 = uVar8;
            return;
          }
        }
        else if ((long)(int)lStack_98 != lStack_98 >> 0x20) goto LAB_000c428c;
      }
      else if ((uVar12 == 2) && (*(long *)(lStack_98 + 0x10) != *(long *)(lStack_98 + 0x18)))
      goto LAB_000c428c;
      FUN_00023358(lStack_98,uStack_90);
      return;
    }
    lStack_c8 = lStack_98;
    uStack_c0 = uStack_90;
    ppuStack_100 = (undefined **)0x0;
    uStack_118 = 0;
    puStack_120 = (undefined *)0x0;
    puStack_108 = (undefined *)0x0;
    uStack_110 = 0;
    puVar4 = auStack_f0;
    lStack_d8 = lVar3;
    uStack_d0 = uVar8;
    func_0x00016cc8(puVar4);
    func_0x00023304(lStack_98,uStack_90);
    FUN_0010b930(puVar4,&lStack_c8,&puStack_120,1,100,0,lVar3,PTR___s10Foundation4DataVN_0099c3c0,
                 uVar8,&PTR_DAT_009ae8f0);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
    _swift_bridgeObjectRetain(uVar7);
    FUN_000c69dc(param_1,puVar4,uVar1,uVar7,lVar3,uVar8);
    FUN_00023358(lStack_98,uStack_90);
  }
  else if (cStack_70 == '\x01') {
    FUN_000c70b8(&lStack_98,auStack_f0);
    _swift_beginAccess(unaff_x20 + 0x10,&puStack_120,0,0);
    uVar5 = uStack_d0;
    lVar3 = lStack_d8;
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
    puVar4 = auStack_f0;
    FUN_0001393c(puVar4,lStack_d8);
    _swift_bridgeObjectRetain(uVar7);
    FUN_000c69dc(param_1,puVar4,uVar1,uVar7,lVar3,uVar5);
  }
  else {
    _swift_beginAccess(unaff_x20 + 0x10,&lStack_c8,0,0);
    lVar3 = *(long *)(unaff_x20 + 0x10);
    uVar10 = *(ulong *)(unaff_x20 + 0x18);
    _swift_bridgeObjectRetain(uVar10);
    uVar8 = uVar10;
    FUN_000ea9a4();
    uVar13 = uVar8;
    func_0x000eb700();
    uVar5 = uVar13;
    _swift_bridgeObjectRelease(uVar10);
    _swift_bridgeObjectRelease(uVar8);
    if (lVar3 == 0) {
      uVar8 = *(ulong *)(unaff_x20 + 0x10);
      uVar13 = *(ulong *)(unaff_x20 + 0x18);
      uVar10 = uVar8 & 0xffffffffffff;
      if ((uVar13 & 0x2000000000000000) != 0) {
        uVar10 = uVar13 >> 0x38 & 0xf;
      }
      if (uVar10 != 0) {
        _swift_bridgeObjectRetain(uVar13);
        FUN_0012f564(1);
        FUN_000c7840(": ",2);
        uVar5 = uVar13;
        FUN_0012dbd0(uVar8,uVar13);
        uVar14 = *param_1;
        uVar10 = uVar14;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar8 = uVar14;
        if ((uVar10 & 1) == 0) {
          uVar5 = *(long *)(uVar14 + 0x10) + 1;
          uVar8 = 0;
          FUN_000540b4(0,uVar5,1,uVar14);
        }
        uVar14 = *(ulong *)(uVar8 + 0x10);
        uVar10 = uVar14 + 1;
        uVar9 = uVar8;
        if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar14) {
          uVar9 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
          uVar5 = uVar10;
          FUN_000540b4(uVar9,uVar10,1,uVar8);
        }
        *(ulong *)(uVar9 + 0x10) = uVar10;
        *(undefined1 *)(uVar9 + uVar14 + 0x20) = 10;
        _swift_bridgeObjectRelease(uVar13);
        *param_1 = uVar9;
      }
      lVar3 = lStack_98;
      FUN_000c2400(lStack_98);
      _swift_bridgeObjectRelease(lStack_98);
      _swift_bridgeObjectRetain(param_1[1]);
      FUN_00053fc4();
      FUN_000c7840("#json: ",7);
      FUN_0012e3dc(lVar3,uVar5);
      FUN_000c7840("\n",1);
      FUN_00023358(lVar3,uVar5);
      return;
    }
    ppuStack_100 = &PTR_DAT_009ae850;
    puStack_108 = &UNK_009ae878;
    puStack_120 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
    puVar11 = &DAT_00843adc;
    lVar6 = lVar3;
    _swift_conformsToProtocol();
    lStack_d8 = lVar3;
    uStack_d0 = uVar13;
    if (lVar6 == 0) {
      lVar6 = lStack_98;
      FUN_000c2400();
      lStack_130 = lVar6;
      puStack_128 = puVar11;
      FUN_000c7184(&puStack_120,auStack_158);
      puVar4 = auStack_f0;
      func_0x00016cc8(puVar4);
      func_0x00023304(lVar6,puVar11);
      FUN_0010cca0(puVar4,&lStack_130,auStack_158,uStack_90,uStack_88,lVar3,
                   PTR___s10Foundation4DataVN_0099c3c0,uVar13,&PTR_DAT_009ae8f0);
      _swift_bridgeObjectRelease(lStack_98);
      FUN_00023358(lVar6,puVar11);
    }
    else {
      lStack_130 = 0;
      puStack_128 = (undefined *)0xe000000000000000;
      FUN_000c24f0(lStack_98 + 0x20,lStack_98 + 0x20 + *(long *)(lStack_98 + 0x10),uStack_90,
                   uStack_88,&puStack_120,&lStack_130);
      puVar11 = puStack_128;
      lVar6 = lStack_130;
      FUN_000c7184(&puStack_120,auStack_158);
      puVar4 = auStack_f0;
      func_0x00016cc8(puVar4);
      _swift_bridgeObjectRetain(puVar11);
      FUN_0010cdec(puVar4,lVar6,puVar11,auStack_158,uStack_90,uStack_88,lVar3,uVar13);
      _swift_bridgeObjectRelease(puVar11);
      _swift_bridgeObjectRelease(lStack_98);
    }
    FUN_00011670(&puStack_120);
    uVar5 = uStack_d0;
    lVar3 = lStack_d8;
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
    puVar4 = auStack_f0;
    FUN_0001393c(puVar4,lStack_d8);
    _swift_bridgeObjectRetain(uVar7);
    FUN_000c69dc(param_1,puVar4,uVar1,uVar7,lVar3,uVar5);
  }
  _swift_bridgeObjectRelease(uVar7);
  FUN_00011670(auStack_f0);
  return;
}



/* Entry: 000c46a8; end: 000c497b;  */

uint FUN_000c46a8(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  uint uVar7;
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined8 uStack_e8;
  undefined1 auStack_d8 [24];
  ulong uStack_c0;
  undefined8 uStack_b8;
  char cStack_98;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_68,0,0);
  _swift_beginAccess(param_1 + 0x10,&uStack_c0,0x20,0);
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  if (uVar2 == *(ulong *)(param_1 + 0x10) &&
      *(long *)(unaff_x20 + 0x18) == *(long *)(param_1 + 0x18)) {
    _swift_endAccess(&uStack_c0);
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    _swift_endAccess(&uStack_c0);
    uVar7 = 0;
    if ((uVar2 & 1) == 0) goto LAB_000c48dc;
  }
  _swift_beginAccess(unaff_x20 + 0x20,auStack_d8,0,0);
  FUN_000c6ee0(unaff_x20 + 0x20,&uStack_c0);
  if (cStack_98 == '\x01') {
    FUN_000c70b8(&uStack_c0,auStack_90);
    _swift_beginAccess(param_1 + 0x20,auStack_118,0,0);
    FUN_000c6ee0(param_1 + 0x20,&uStack_c0);
    if (cStack_98 == '\x01') {
      FUN_000c70b8(&uStack_c0,auStack_100);
      puVar3 = auStack_90;
      FUN_0001393c(puVar3,uStack_78);
      _swift_getDynamicType();
      puVar4 = auStack_100;
      FUN_0001393c(puVar4,uStack_e8);
      _swift_getDynamicType();
      if (puVar3 == puVar4) {
        FUN_0001393c(auStack_90,uStack_78);
        puVar4 = auStack_100;
        (**(code **)(lStack_70 + 0x58))(puVar4,uStack_78,lStack_70);
        uVar7 = (uint)puVar4;
        FUN_00011670(auStack_100);
        FUN_00011670(auStack_90);
        goto LAB_000c48dc;
      }
      FUN_00011670(auStack_100);
    }
    else {
      FUN_000c6f88(&uStack_c0);
    }
    FUN_00011670(auStack_90);
  }
  else {
    FUN_000c6f88(&uStack_c0);
  }
  FUN_000c6ee0(unaff_x20 + 0x20,&uStack_c0);
  uVar1 = uStack_b8;
  uVar2 = uStack_c0;
  if (cStack_98 == '\0') {
    _swift_beginAccess(param_1 + 0x20,auStack_100,0,0);
    FUN_000c6ee0(param_1 + 0x20,&uStack_c0);
    uVar5 = uStack_c0;
    if (cStack_98 != '\0') {
      FUN_00023358(uVar2,uVar1);
      goto LAB_000c484c;
    }
    uVar6 = uVar2;
    FUN_00038814(uVar2,uVar1,uStack_c0,uStack_b8);
    FUN_00023358(uVar2,uVar1);
    FUN_00023358(uVar5,uStack_b8);
    if ((uVar6 & 1) == 0) goto LAB_000c4854;
LAB_000c4934:
    uVar7 = 1;
    goto LAB_000c48dc;
  }
LAB_000c484c:
  FUN_000c6f88(&uStack_c0);
LAB_000c4854:
  FUN_000c6ee0(unaff_x20 + 0x20,&uStack_c0);
  uVar2 = uStack_c0;
  if (cStack_98 == '\x02') {
    _swift_beginAccess(param_1 + 0x20,auStack_90,0,0);
    FUN_000c6ee0(param_1 + 0x20,&uStack_c0);
    if (cStack_98 != '\x02') {
      _swift_bridgeObjectRelease(uVar2);
      goto LAB_000c48d0;
    }
    uVar5 = uVar2;
    FUN_001489cc(uVar2,uStack_c0);
    _swift_bridgeObjectRelease(uVar2);
    _swift_bridgeObjectRelease(uStack_c0);
    if ((uVar5 & 1) != 0) goto LAB_000c4934;
  }
  else {
LAB_000c48d0:
    FUN_000c6f88(&uStack_c0);
  }
  uVar7 = 0;
LAB_000c48dc:
  return uVar7 & 1;
}



/* Entry: 000c497c; end: 000c552f;  */

/* WARNING: Removing unreachable block (ram,0x000c53f0) */

undefined1  [16] FUN_000c497c(uint param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  char **ppcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined *puVar10;
  ulong *puVar11;
  undefined1 *puVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  char *unaff_x20;
  long unaff_x21;
  uint uVar21;
  undefined1 auVar22 [16];
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_100;
  ulong uStack_f8;
  char *pcStack_f0;
  ulong uStack_e8;
  ulong uStack_d8;
  undefined8 uStack_d0;
  char *pcStack_c0;
  undefined1 *puStack_b8;
  undefined1 auStack_b0 [24];
  long lStack_98;
  ulong uStack_90;
  char cStack_70;
  
  _swift_beginAccess(unaff_x20 + 0x20,auStack_b0,0,0);
  FUN_000c6ee0(unaff_x20 + 0x20,&lStack_98);
  if (cStack_70 == '\0') {
    uVar5 = (uint)(uStack_90 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    if (uVar5 >> 0x1e < 2) {
      if (uVar21 == 0) {
        if ((uStack_90 & 0xff000000000000) == 0) {
LAB_000c4e70:
          _swift_beginAccess(unaff_x20 + 0x10,&uStack_148,0,0);
          uVar17 = *(ulong *)(unaff_x20 + 0x10) & 0xffffffffffff;
          if ((*(ulong *)(unaff_x20 + 0x18) & 0x2000000000000000) != 0) {
            uVar17 = *(ulong *)(unaff_x20 + 0x18) >> 0x38 & 0xf;
          }
          if (uVar17 == 0) {
            FUN_00023358(lStack_98,uStack_90);
            unaff_x20 = (char *)0xe200000000000000;
            pcVar8 = "";
            goto LAB_000c5370;
          }
        }
      }
      else if ((long)(int)lStack_98 == lStack_98 >> 0x20) goto LAB_000c4e70;
    }
    else if ((uVar21 != 2) || (*(long *)(lStack_98 + 0x10) == *(long *)(lStack_98 + 0x18)))
    goto LAB_000c4e70;
    puVar10 = unaff_x20 + 0x10;
    _swift_beginAccess(puVar10,&pcStack_f0,0,0);
    uStack_d8 = *(ulong *)(unaff_x20 + 0x10);
    uStack_d0 = *(undefined8 *)(unaff_x20 + 0x18);
    uStack_130 = 0x2f;
    uStack_128 = 0xe100000000000000;
    FUN_00033a8c();
    puVar11 = &uStack_130;
    __sSy10FoundationE8containsySbqd__SyRd__lF
              (puVar11,PTR___sSSN_0099b040,PTR___sSSN_0099b040,puVar10,puVar10);
    if (((ulong)puVar11 & 1) == 0) {
      uVar14 = *(ulong *)(unaff_x20 + 0x10);
      uVar19 = *(ulong *)(unaff_x20 + 0x18);
      uVar17 = uVar14 & 0xffffffffffff;
      if ((uVar19 & 0x2000000000000000) != 0) {
        uVar17 = uVar19 >> 0x38 & 0xf;
      }
      unaff_x20 = (char *)0x80000000008b87b0;
      if (uVar17 == 0) {
        pcVar8 = (char *)0x0;
        FUN_00124784();
        _swift_allocObject();
        pcVar8[0x10] = 3;
        *(undefined8 *)(pcVar8 + 0x18) = 0xd000000000000049;
        *(undefined8 *)(pcVar8 + 0x20) = 0x80000000008b8910;
        *(undefined8 *)(pcVar8 + 0x28) = 0xd00000000000001b;
        *(undefined8 *)(pcVar8 + 0x30) = 0x80000000008b88c0;
        *(undefined8 *)(pcVar8 + 0x38) = 0xd000000000000025;
        *(undefined8 *)(pcVar8 + 0x40) = 0x80000000008b87b0;
        uVar18 = 0x1b2;
      }
      else {
        uStack_d8 = 0;
        uStack_d0 = 0xe000000000000000;
        _swift_bridgeObjectRetain(uVar19);
        __ss11_StringGutsV4growyySiF(0x2f);
        _swift_bridgeObjectRelease(uStack_d0);
        uStack_d8 = 0xd00000000000002c;
        uStack_d0 = 0x80000000008b88e0;
        __sSS6appendyySSF(uVar14,uVar19);
        __sSS6appendyySSF(0x2e,0xe100000000000000);
        _swift_bridgeObjectRelease(uVar19);
        uVar18 = uStack_d0;
        uVar17 = uStack_d8;
        pcVar8 = (char *)0x0;
        FUN_00124784();
        _swift_allocObject();
        pcVar8[0x10] = 3;
        *(ulong *)(pcVar8 + 0x18) = uVar17;
        *(undefined8 *)(pcVar8 + 0x20) = uVar18;
        *(undefined8 *)(pcVar8 + 0x28) = 0xd00000000000001b;
        *(undefined8 *)(pcVar8 + 0x30) = 0x80000000008b88c0;
        *(undefined8 *)(pcVar8 + 0x38) = 0xd000000000000025;
        *(undefined8 *)(pcVar8 + 0x40) = 0x80000000008b87b0;
        uVar18 = 0x1b4;
      }
      *(undefined8 *)(pcVar8 + 0x48) = uVar18;
      pcVar13 = pcVar8;
      FUN_000c7104();
      _swift_allocError(&UNK_009ae930,pcVar13,0,0);
      *(char **)pcVar13 = pcVar8;
LAB_000c5224:
      _swift_willThrow();
      FUN_00023358(lStack_98,uStack_90);
      goto LAB_000c5370;
    }
    if (uVar21 < 2) {
      if (uVar21 == 0) {
        if ((uStack_90 & 0xff000000000000) != 0) {
LAB_000c5010:
          pcVar8 = *(char **)(unaff_x20 + 0x10);
          puVar4 = *(undefined1 **)(unaff_x20 + 0x18);
          _swift_bridgeObjectRetain(puVar4);
          puVar12 = puVar4;
          FUN_000ea9a4();
          puVar16 = puVar12;
          func_0x000eb700();
          _swift_bridgeObjectRelease(puVar4);
          _swift_bridgeObjectRelease();
          if (pcVar8 != (char *)0x0) {
            lStack_100 = lStack_98;
            uStack_f8 = uStack_90;
            uStack_110 = 0;
            uStack_128 = 0;
            uStack_130 = 0;
            uStack_118 = 0;
            uStack_120 = 0;
            puVar11 = &uStack_d8;
            pcStack_c0 = pcVar8;
            puStack_b8 = puVar16;
            func_0x00016cc8(puVar11);
            func_0x00023304(lStack_98,uStack_90);
            FUN_0010b930(puVar11,&lStack_100,&uStack_130,1,100,0,pcVar8,
                         PTR___s10Foundation4DataVN_0099c3c0,puVar16,&PTR_DAT_009ae8f0);
            if (unaff_x21 == 0) {
              pcVar13 = *(char **)(unaff_x20 + 0x10);
              uVar18 = *(undefined8 *)(unaff_x20 + 0x18);
              _swift_bridgeObjectRetain(uVar18);
              pcVar8 = (char *)&uStack_d8;
              FUN_000c1f14(pcVar8,pcVar13,uVar18,param_1 & 0x1010101);
              FUN_00023358(lStack_98,uStack_90);
              _swift_bridgeObjectRelease(uVar18);
              FUN_00011670(&uStack_d8);
              unaff_x20 = pcVar13;
            }
            else {
              FUN_00023358(lStack_98,uStack_90);
              FUN_000c6f54(&uStack_d8);
            }
            goto LAB_000c5370;
          }
          func_0x000c7144();
          _swift_allocError(&UNK_009ad758,puVar12,0,0);
          *puVar12 = 0;
          goto LAB_000c5224;
        }
      }
      else if ((long)(int)lStack_98 != lStack_98 >> 0x20) goto LAB_000c5010;
    }
    else if ((uVar21 == 2) && (*(long *)(lStack_98 + 0x10) != *(long *)(lStack_98 + 0x18)))
    goto LAB_000c5010;
    uVar19 = 0;
    FUN_000540b4(0,1,1,PTR___swiftEmptyArrayStorage_0099b8f0);
    uVar17 = *(ulong *)(uVar19 + 0x10);
    uVar14 = *(ulong *)(uVar19 + 0x18);
    uVar15 = uVar14 >> 1;
    lVar1 = uVar17 + 1;
    if (uVar15 <= uVar17) {
      uVar19 = (ulong)(1 < uVar14);
      FUN_000540b4(uVar19,lVar1,1);
      uVar14 = *(ulong *)(uVar19 + 0x18);
      uVar15 = uVar14 >> 1;
    }
    *(long *)(uVar19 + 0x10) = lVar1;
    *(undefined1 *)(uVar19 + uVar17 + 0x20) = 0x7b;
    uStack_d0._0_2_ = 0x100;
    lVar2 = uVar17 + 2;
    if ((long)uVar15 < lVar2) {
      uVar19 = (ulong)(1 < uVar14);
      FUN_000540b4(uVar19,lVar2,1);
    }
    *(long *)(uVar19 + 0x10) = lVar2;
    *(undefined1 *)(uVar19 + lVar1 + 0x20) = 0x22;
    uStack_d8 = uVar19;
    func_0x000c79f0(0x6570797440,0xe500000000000000);
    func_0x000c7840("\":",2);
    uStack_d0 = CONCAT62(uStack_d0._2_6_,0x2c);
    uVar18 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    _swift_bridgeObjectRetain(uVar3);
    FUN_000fdff8(uVar18,uVar3);
    _swift_bridgeObjectRelease(uVar3);
    uVar17 = uStack_d8;
    uVar14 = uStack_d8;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar19 = uVar17;
    if ((uVar14 & 1) == 0) {
      uVar19 = 0;
      FUN_000540b4(0,*(long *)(uVar17 + 0x10) + 1,1,uVar17);
    }
    uVar17 = *(ulong *)(uVar19 + 0x10);
    unaff_x20 = (char *)(uVar17 + 1);
    uVar14 = uVar19;
    if (*(ulong *)(uVar19 + 0x18) >> 1 <= uVar17) {
      uVar14 = (ulong)(1 < *(ulong *)(uVar19 + 0x18));
      FUN_000540b4(uVar14,unaff_x20,1,uVar19);
    }
    *(char **)(uVar14 + 0x10) = unaff_x20;
    pcVar8 = (char *)(uVar14 + 0x20);
    pcVar8[uVar17] = '}';
    _swift_bridgeObjectRetain(uVar14);
    __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(pcVar8,unaff_x20);
    FUN_00023358(lStack_98,uStack_90);
  }
  else {
    if (cStack_70 == '\x01') {
      FUN_000c70b8(&lStack_98,&uStack_d8);
      puVar10 = unaff_x20 + 0x10;
      _swift_beginAccess(puVar10,&uStack_130,0,0);
      pcVar13 = *(char **)(unaff_x20 + 0x10);
      uVar15 = *(ulong *)(unaff_x20 + 0x18);
      uVar17 = uVar15 & 0x2000000000000000;
      uVar19 = (ulong)pcVar13 & 0xffffffffffff;
      uVar20 = uVar15 >> 0x38 & 0xf;
      uVar14 = uVar19;
      if (uVar17 != 0) {
        uVar14 = uVar20;
      }
      pcVar8 = unaff_x20;
      if (uVar14 != 0) {
        uStack_148 = 0x2f;
        uStack_140 = 0xe100000000000000;
        pcStack_f0 = pcVar13;
        uStack_e8 = uVar15;
        FUN_00033a8c();
        puVar6 = &uStack_148;
        pcVar8 = (char *)&pcStack_f0;
        __sSy10FoundationE8containsySbqd__SyRd__lF
                  (puVar6,PTR___sSSN_0099b040,PTR___sSSN_0099b040,puVar10,puVar10);
        pcVar13 = *(char **)(unaff_x20 + 0x10);
        uVar15 = *(ulong *)(unaff_x20 + 0x18);
        if (((ulong)puVar6 & 1) == 0) {
          pcStack_f0 = (char *)0x0;
          uStack_e8 = 0xe000000000000000;
          _swift_bridgeObjectRetain(uVar15);
          __ss11_StringGutsV4growyySiF(0x2f);
          _swift_bridgeObjectRelease(uStack_e8);
          pcStack_f0 = (char *)0xd00000000000002c;
          uStack_e8 = 0x80000000008b88e0;
          __sSS6appendyySSF(pcVar13,uVar15);
          __sSS6appendyySSF(0x2e,0xe100000000000000);
          _swift_bridgeObjectRelease(uVar15);
          uVar17 = uStack_e8;
          pcVar13 = pcStack_f0;
          pcVar8 = (char *)0x0;
          FUN_00124784();
          _swift_allocObject();
          pcVar8[0x10] = 3;
          *(char **)(pcVar8 + 0x18) = pcVar13;
          *(ulong *)(pcVar8 + 0x20) = uVar17;
          *(undefined8 *)(pcVar8 + 0x28) = 0xd00000000000001b;
          *(undefined8 *)(pcVar8 + 0x30) = 0x80000000008b88c0;
          *(undefined8 *)(pcVar8 + 0x38) = 0xd000000000000025;
          *(undefined8 *)(pcVar8 + 0x40) = 0x80000000008b87b0;
          *(undefined8 *)(pcVar8 + 0x48) = 0x1cd;
          pcVar13 = pcVar8;
          FUN_000c7104();
          _swift_allocError(&UNK_009ae930,pcVar13,0,0);
          *(char **)pcVar13 = pcVar8;
          _swift_willThrow();
          unaff_x20 = (char *)0x80000000008b88c0;
          FUN_00011670(&uStack_d8);
          goto LAB_000c5370;
        }
        uVar17 = uVar15 & 0x2000000000000000;
        uVar19 = (ulong)pcVar13 & 0xffffffffffff;
        uVar20 = uVar15 >> 0x38 & 0xf;
      }
      if (uVar17 != 0) {
        uVar19 = uVar20;
      }
      if (uVar19 == 0) {
        pcVar13 = (char *)&uStack_d8;
        FUN_0001393c(pcVar13,pcStack_c0);
        uVar15 = 0xd000000000000013;
        FUN_000eb5a4();
        pcVar8 = pcStack_c0;
      }
      else {
        _swift_bridgeObjectRetain(uVar15);
      }
      pcVar9 = (char *)&uStack_d8;
      FUN_000c1f14(pcVar9,pcVar13,uVar15,param_1 & 0x1010101);
      if (unaff_x21 == 0) {
        FUN_00011670(&uStack_d8);
        _swift_bridgeObjectRelease(uVar15);
        pcVar8 = pcVar9;
        unaff_x20 = pcVar13;
      }
      else {
        FUN_00011670(&uStack_d8);
        _swift_bridgeObjectRelease(uVar15);
      }
      goto LAB_000c5370;
    }
    puVar10 = unaff_x20 + 0x10;
    _swift_beginAccess(puVar10,&uStack_d8,0,0);
    uStack_130 = *(ulong *)(unaff_x20 + 0x10);
    uStack_128 = *(undefined8 *)(unaff_x20 + 0x18);
    pcStack_f0 = segment_command_00000020.segname + 7;
    uStack_e8 = 0xe100000000000000;
    FUN_00033a8c();
    ppcVar7 = &pcStack_f0;
    __sSy10FoundationE8containsySbqd__SyRd__lF
              (ppcVar7,PTR___sSSN_0099b040,PTR___sSSN_0099b040,puVar10,puVar10);
    if (((ulong)ppcVar7 & 1) == 0) {
      _swift_bridgeObjectRelease(lStack_98);
      uVar14 = *(ulong *)(unaff_x20 + 0x10);
      uVar19 = *(ulong *)(unaff_x20 + 0x18);
      uVar17 = uVar14 & 0xffffffffffff;
      if ((uVar19 & 0x2000000000000000) != 0) {
        uVar17 = uVar19 >> 0x38 & 0xf;
      }
      unaff_x20 = (char *)0x80000000008b87b0;
      if (uVar17 == 0) {
        pcVar8 = (char *)0x0;
        FUN_00124784();
        _swift_allocObject();
        pcVar8[0x10] = 3;
        *(undefined8 *)(pcVar8 + 0x18) = 0xd000000000000049;
        *(undefined8 *)(pcVar8 + 0x20) = 0x80000000008b8910;
        *(undefined8 *)(pcVar8 + 0x28) = 0xd00000000000001b;
        *(undefined8 *)(pcVar8 + 0x30) = 0x80000000008b88c0;
        *(undefined8 *)(pcVar8 + 0x38) = 0xd000000000000025;
        *(undefined8 *)(pcVar8 + 0x40) = 0x80000000008b87b0;
        uVar18 = 0x1d6;
      }
      else {
        uStack_130 = 0;
        uStack_128 = 0xe000000000000000;
        _swift_bridgeObjectRetain(uVar19);
        __ss11_StringGutsV4growyySiF(0x2f);
        _swift_bridgeObjectRelease(uStack_128);
        uStack_130 = 0xd00000000000002c;
        uStack_128 = 0x80000000008b88e0;
        __sSS6appendyySSF(uVar14,uVar19);
        __sSS6appendyySSF(0x2e,0xe100000000000000);
        _swift_bridgeObjectRelease(uVar19);
        uVar18 = uStack_128;
        uVar17 = uStack_130;
        pcVar8 = (char *)0x0;
        FUN_00124784();
        _swift_allocObject();
        pcVar8[0x10] = 3;
        *(ulong *)(pcVar8 + 0x18) = uVar17;
        *(undefined8 *)(pcVar8 + 0x20) = uVar18;
        *(undefined8 *)(pcVar8 + 0x28) = 0xd00000000000001b;
        *(undefined8 *)(pcVar8 + 0x30) = 0x80000000008b88c0;
        *(undefined8 *)(pcVar8 + 0x38) = 0xd000000000000025;
        *(undefined8 *)(pcVar8 + 0x40) = 0x80000000008b87b0;
        uVar18 = 0x1d8;
      }
      *(undefined8 *)(pcVar8 + 0x48) = uVar18;
      pcVar13 = pcVar8;
      FUN_000c7104();
      _swift_allocError(&UNK_009ae930,pcVar13,0,0);
      *(char **)pcVar13 = pcVar8;
      _swift_willThrow();
      goto LAB_000c5370;
    }
    uVar19 = 0;
    FUN_000540b4(0,1,1,PTR___swiftEmptyArrayStorage_0099b8f0);
    uVar17 = *(ulong *)(uVar19 + 0x10);
    uVar14 = *(ulong *)(uVar19 + 0x18);
    uVar15 = uVar14 >> 1;
    lVar1 = uVar17 + 1;
    if (uVar15 <= uVar17) {
      uVar19 = (ulong)(1 < uVar14);
      FUN_000540b4(uVar19,lVar1,1);
      uVar14 = *(ulong *)(uVar19 + 0x18);
      uVar15 = uVar14 >> 1;
    }
    *(long *)(uVar19 + 0x10) = lVar1;
    *(undefined1 *)(uVar19 + uVar17 + 0x20) = 0x7b;
    uStack_128._0_2_ = 0x100;
    lVar2 = uVar17 + 2;
    if ((long)uVar15 < lVar2) {
      uVar19 = (ulong)(1 < uVar14);
      FUN_000540b4(uVar19,lVar2,1);
    }
    *(long *)(uVar19 + 0x10) = lVar2;
    *(undefined1 *)(uVar19 + lVar1 + 0x20) = 0x22;
    uStack_130 = uVar19;
    func_0x000c79f0(0x6570797440,0xe500000000000000);
    func_0x000c7840("\":",2);
    uStack_128 = CONCAT62(uStack_128._2_6_,0x2c);
    uVar18 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    _swift_bridgeObjectRetain(uVar3);
    FUN_000fdff8(uVar18,uVar3);
    _swift_bridgeObjectRelease(uVar3);
    if (*(long *)(lStack_98 + 0x10) == 0) {
      _swift_bridgeObjectRelease(lStack_98);
    }
    else {
      func_0x000c7840(",",1);
      FUN_00053fc4(lStack_98);
    }
    uVar17 = uStack_130;
    uVar14 = uStack_130;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar19 = uVar17;
    if ((uVar14 & 1) == 0) {
      uVar19 = 0;
      FUN_000540b4(0,*(long *)(uVar17 + 0x10) + 1,1,uVar17);
    }
    uVar17 = *(ulong *)(uVar19 + 0x10);
    unaff_x20 = (char *)(uVar17 + 1);
    uVar14 = uVar19;
    if (*(ulong *)(uVar19 + 0x18) >> 1 <= uVar17) {
      uVar14 = (ulong)(1 < *(ulong *)(uVar19 + 0x18));
      FUN_000540b4(uVar14,unaff_x20,1,uVar19);
    }
    *(char **)(uVar14 + 0x10) = unaff_x20;
    pcVar8 = (char *)(uVar14 + 0x20);
    pcVar8[uVar17] = '}';
    _swift_bridgeObjectRetain(uVar14);
    __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(pcVar8,unaff_x20);
  }
  _swift_bridgeObjectRelease_n(uVar14,2);
LAB_000c5370:
  auVar22._8_8_ = unaff_x20;
  auVar22._0_8_ = pcVar8;
  return auVar22;
}



/* Entry: 000c5530; end: 000c5c17;  */

/* WARNING: Removing unreachable block (ram,0x000c5ab8) */
/* WARNING: Removing unreachable block (ram,0x000c5940) */
/* WARNING: Removing unreachable block (ram,0x000c5914) */
/* WARNING: Removing unreachable block (ram,0x000c5928) */

void FUN_000c5530(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined *puVar5;
  code *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long unaff_x20;
  long unaff_x21;
  char acStack_c8 [24];
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 uStack_a0;
  undefined1 uStack_88;
  undefined1 auStack_78 [24];
  undefined *puStack_58;
  
  pcVar7 = section_00000068.segname + 3;
  FUN_0010a6f0();
  if (unaff_x21 == 0) {
    lVar16 = param_1[0xb] + -1;
    if (SBORROW8(param_1[0xb],1)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0xc5bb4);
      (*pcVar6)();
    }
    param_1[0xb] = lVar16;
    if (lVar16 < 0) {
      FUN_000c7004();
      _swift_allocError(&UNK_009ad5a0,pcVar7,0,0);
      *(undefined8 *)(pcVar7 + 8) = 0x13;
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7[4] = '\0';
      pcVar7[5] = '\0';
      pcVar7[6] = '\0';
      pcVar7[7] = '\0';
      _swift_willThrow();
    }
    else {
      _swift_beginAccess(unaff_x20 + 0x10,auStack_78,1,0);
      uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
      *(undefined8 *)(unaff_x20 + 0x10) = 0;
      *(undefined8 *)(unaff_x20 + 0x18) = 0xe000000000000000;
      _swift_bridgeObjectRelease(uVar8);
      puStack_a8 = (undefined *)0xc000000000000000;
      puStack_b0 = (undefined *)0x0;
      uStack_88 = 0;
      _swift_beginAccess(unaff_x20 + 0x20,acStack_c8,0x21,0);
      puVar10 = (undefined *)(unaff_x20 + 0x20);
      FUN_000c70d0(&puStack_b0);
      pcVar7 = acStack_c8;
      _swift_endAccess();
      FUN_00106a98();
      puVar5 = PTR___sSSN_0099b040;
      if (((ulong)pcVar7 & 1) == 0) {
        uVar4 = 0;
        puStack_58 = PTR___swiftEmptyArrayStorage_0099b8f0;
        bVar3 = true;
        do {
          FUN_00106a08();
          puVar11 = puVar10;
          FUN_0010a6f0(0x3a);
          if (((pcVar7 == (char *)0x6570797440) && (puVar10 == (undefined *)0xe500000000000000)) ||
             (pcVar9 = pcVar7, puVar11 = puVar10,
             __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (pcVar7,puVar10,0x6570797440,0xe500000000000000,0), ((ulong)pcVar9 & 1) != 0)
             ) {
            _swift_bridgeObjectRelease();
            FUN_00106a08();
            uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
            *(undefined **)(unaff_x20 + 0x10) = puVar10;
            *(undefined **)(unaff_x20 + 0x18) = puVar11;
            _swift_bridgeObjectRetain(puVar11);
            _swift_bridgeObjectRelease(uVar8);
            acStack_c8[0] = '/';
            acStack_c8[1] = '\0';
            acStack_c8[2] = '\0';
            acStack_c8[3] = '\0';
            acStack_c8[4] = '\0';
            acStack_c8[5] = '\0';
            acStack_c8[6] = '\0';
            acStack_c8[7] = '\0';
            acStack_c8[8] = '\0';
            acStack_c8[9] = '\0';
            acStack_c8[10] = '\0';
            acStack_c8[0xb] = '\0';
            acStack_c8[0xc] = '\0';
            acStack_c8[0xd] = '\0';
            acStack_c8[0xe] = '\0';
            acStack_c8[0xf] = -0x1f;
            puStack_b0 = puVar10;
            puStack_a8 = puVar11;
            FUN_00033a8c();
            pcVar7 = acStack_c8;
            puVar10 = puVar5;
            __sSy10FoundationE8containsySbqd__SyRd__lF(pcVar7,puVar5,puVar5,uVar8,uVar8);
            _swift_bridgeObjectRelease(puVar11);
            if (((ulong)pcVar7 & 1) == 0) {
              uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
              uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
              puStack_b0 = (undefined *)0x0;
              puStack_a8 = (undefined *)0xe000000000000000;
              _swift_bridgeObjectRetain(uVar2);
              __ss11_StringGutsV4growyySiF(0x2c);
              _swift_bridgeObjectRelease(puStack_a8);
              puStack_b0 = (undefined *)0xd000000000000029;
              puStack_a8 = (undefined *)0x80000000008b8890;
              __sSS6appendyySSF(uVar8,uVar2);
              __sSS6appendyySSF(0x2e,0xe100000000000000);
              _swift_bridgeObjectRelease(uVar2);
              puVar5 = puStack_a8;
              puVar10 = puStack_b0;
              plVar14 = (long *)0x0;
              FUN_00124784();
              _swift_allocObject();
              *(undefined1 *)(plVar14 + 2) = 2;
              plVar14[3] = (long)puVar10;
              plVar14[4] = (long)puVar5;
              plVar14[5] = -0x2fffffffffffffef;
              plVar14[6] = -0x7fffffffff747870;
              plVar14[7] = -0x2fffffffffffffdb;
              plVar14[8] = -0x7fffffffff747850;
              lVar16 = 0x1ff;
              goto LAB_000c5b70;
            }
          }
          else {
            if (!bVar3) {
              puVar11 = puStack_58;
              _swift_isUniquelyReferenced_nonNull_native();
              puVar13 = puStack_58;
              if (((ulong)puVar11 & 1) == 0) {
                puVar13 = (undefined *)0x0;
                FUN_000540b4(0,*(long *)(puStack_58 + 0x10) + 1,1,puStack_58);
              }
              uVar1 = *(ulong *)(puVar13 + 0x10);
              puStack_58 = puVar13;
              if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar1) {
                puStack_58 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
                FUN_000540b4(puStack_58,uVar1 + 1,1,puVar13);
              }
              *(ulong *)(puStack_58 + 0x10) = uVar1 + 1;
              puStack_58[uVar1 + 0x20] = uVar4;
            }
            puVar11 = puStack_58;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar13 = puStack_58;
            if (((ulong)puVar11 & 1) == 0) {
              puVar13 = (undefined *)0x0;
              FUN_000540b4(0,*(long *)(puStack_58 + 0x10) + 1,1,puStack_58);
            }
            uVar1 = *(ulong *)(puVar13 + 0x10);
            puStack_58 = puVar13;
            if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar1) {
              puStack_58 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
              FUN_000540b4(puStack_58,uVar1 + 1,1,puVar13);
            }
            *(ulong *)(puStack_58 + 0x10) = uVar1 + 1;
            puStack_58[uVar1 + 0x20] = 0x22;
            _swift_bridgeObjectRetain(puVar10);
            func_0x000c79f0(pcVar7,puVar10);
            func_0x000c7840("\":",2);
            _swift_bridgeObjectRelease(puVar10);
            FUN_00109a58();
            lVar16 = param_1[2];
            FUN_0010a7bc();
            if (*param_1 == 0) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0xc5bc4);
              (*pcVar6)();
            }
            puVar10 = (undefined *)(param_1[2] - lVar16);
            if (SBORROW8(param_1[2],lVar16)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0xc5bb8);
              (*pcVar6)();
            }
            puVar12 = (undefined8 *)(*param_1 + lVar16);
            FUN_00122abc();
            if (puVar10 == (undefined *)0x0) {
              FUN_000c7004();
              _swift_allocError(&UNK_009ad5a0,puVar12,0,0);
              puVar12[1] = 6;
              *puVar12 = 0;
              _swift_willThrow();
              _swift_bridgeObjectRelease(puStack_58);
              return;
            }
            func_0x000c79f0();
            bVar3 = false;
            uVar4 = 0x2c;
          }
          FUN_00109a58();
          uVar1 = param_1[2];
          lVar16 = *param_1;
          if (lVar16 == 0) {
            if (uVar1 != 0) goto LAB_000c5678;
          }
          else if (uVar1 != param_1[1] - lVar16) {
LAB_000c5678:
            if (*(char *)(lVar16 + uVar1) == '}') {
              if ((lVar16 == 0) || ((ulong)(param_1[1] - lVar16) <= uVar1)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0xc5bbc);
                (*pcVar6)();
              }
              param_1[2] = uVar1 + 1;
              lVar16 = param_1[0xb] + 1;
              if (SCARRY8(param_1[0xb],1)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0xc5bc0);
                (*pcVar6)();
              }
              param_1[0xb] = lVar16;
              if (param_1[4] < lVar16) {
                __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                          ("Fatal error",0xb,2,0xd000000000000039,0x80000000008b8850,
                           "SwiftProtobuf/JSONScanner.swift",0x1f,2,0x1ab,0);
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0xc5c18);
                (*pcVar6)();
              }
              uVar1 = *(ulong *)(unaff_x20 + 0x10) & 0xffffffffffff;
              if ((*(ulong *)(unaff_x20 + 0x18) & 0x2000000000000000) != 0) {
                uVar1 = *(ulong *)(unaff_x20 + 0x18) >> 0x38 & 0xf;
              }
              if (uVar1 != 0) {
                uStack_a0 = (undefined1)param_1[5];
                puStack_b0 = puStack_58;
                uStack_88 = 2;
                puStack_a8 = (undefined *)lVar16;
                _swift_beginAccess(unaff_x20 + 0x20,acStack_c8,0x21,0);
                _swift_bridgeObjectRetain(puStack_58);
                FUN_000c70d0(&puStack_b0,unaff_x20 + 0x20);
                _swift_endAccess(acStack_c8);
                _swift_bridgeObjectRelease(puStack_58);
                return;
              }
              plVar14 = (long *)0x0;
              FUN_00124784();
              _swift_allocObject();
              *(undefined1 *)(plVar14 + 2) = 2;
              plVar14[3] = -0x2fffffffffffffb2;
              plVar14[4] = -0x7fffffffff747820;
              plVar14[5] = -0x2fffffffffffffef;
              plVar14[6] = -0x7fffffffff747870;
              plVar14[7] = -0x2fffffffffffffdb;
              plVar14[8] = -0x7fffffffff747850;
              lVar16 = 0x208;
LAB_000c5b70:
              plVar14[9] = lVar16;
              plVar15 = plVar14;
              FUN_000c7104();
              _swift_allocError(&UNK_009ae930,plVar15,0,0);
              *plVar15 = (long)plVar14;
              _swift_willThrow();
              _swift_bridgeObjectRelease(puStack_58);
              return;
            }
          }
          pcVar7 = segment_command_00000020.segname + 4;
          FUN_0010a6f0();
        } while( true );
      }
    }
  }
  return;
}



/* Entry: 000c5c18; end: 000c5c6b;  */

void FUN_000c5c18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_2,PTR___sSciTL_0099bfb8,PTR___s13AsyncIteratorSciTl_0099bdc8);
                    /* WARNING: Could not recover jumptable at 0x000c5c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,1,1,lVar1);
  return;
}



/* Entry: 000c5c6c; end: 000c5cdf;  */

undefined8 FUN_000c5c6c(void)

{
  return 100;
}



/* Entry: 000c5ce0; end: 000c5d0f;  */

void FUN_000c5ce0(void)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  return;
}



/* Entry: 000c5d10; end: 000c6177;  */

undefined * FUN_000c5d10(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  
  puVar6 = PTR___swiftEmptyArrayStorage_0099b8f0;
  puVar13 = *(undefined **)(PTR___swiftEmptyArrayStorage_0099b8f0 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  if (puVar13 != (undefined *)0x0) {
    uVar10 = 0;
    func_0x000115a8(0xaf0380);
    puVar8 = puVar13;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    puVar14 = (undefined8 *)(puVar6 + 0x28);
    do {
      uVar1 = puVar14[-1];
      uVar3 = *puVar14;
      uVar15 = puVar14[1];
      uVar5 = *(undefined1 *)(puVar14 + 2);
      uVar2 = puVar14[3];
      uVar4 = puVar14[4];
      uVar9 = uVar1;
      FUN_000e1d94();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x19bf30);
        (*pcVar7)();
      }
      uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar8 + uVar11 + 0x40) = *(ulong *)(puVar8 + uVar11 + 0x40) | 1L << (uVar9 & 0x3f)
      ;
      *(ulong *)(*(long *)(puVar8 + 0x30) + uVar9 * 8) = uVar1;
      puVar12 = (undefined8 *)(*(long *)(puVar8 + 0x38) + uVar9 * 0x28);
      *puVar12 = uVar3;
      puVar12[1] = uVar15;
      *(undefined1 *)(puVar12 + 2) = uVar5;
      puVar12[3] = uVar2;
      puVar12[4] = uVar4;
      if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x19bf34);
        (*pcVar7)();
      }
      puVar14 = puVar14 + 6;
      *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      puVar13 = puVar13 + -1;
    } while (puVar13 != (undefined *)0x0);
  }
  return puVar8;
}



/* Entry: 000c6178; end: 000c6197;  */

void FUN_000c6178(void)

{
  FUN_00186e60(0);
                    /* WARNING: Could not recover jumptable at 0x0077b4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_0099bad0)();
  return;
}



/* Entry: 000c6198; end: 000c633b;  */

undefined * FUN_000c6198(void)

{
  return PTR___swiftEmptyArrayStorage_0099b8f0;
}



/* Entry: 000c633c; end: 000c637b;  */

void FUN_000c633c(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == -1) {
    uVar1 = *param_2;
  }
  else {
    _swift_once(param_1,param_3);
    uVar1 = *param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_0099bb30)(uVar1);
  return;
}



/* Entry: 000c637c; end: 000c65f3;  */

undefined * FUN_000c637c(void)

{
  return PTR___swiftEmptyArrayStorage_0099b8f0;
}



/* Entry: 000c65f4; end: 000c6613;  */

void FUN_000c65f4(void)

{
  FUN_00187070(0);
                    /* WARNING: Could not recover jumptable at 0x0077b4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_0099bad0)();
  return;
}



/* Entry: 000c6614; end: 000c69db;  */

undefined8 FUN_000c6614(void)

{
  return 0xc;
}



/* Entry: 000c69dc; end: 000c6ae3;  */

void FUN_000c69dc(undefined8 param_1,undefined8 param_2,undefined1 *param_3,ulong param_4,
                 long param_5,undefined8 param_6)

{
  ulong uVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_5 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar3 + 0x10))(puVar2);
  uVar1 = (ulong)param_3 & 0xffffffffffff;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar1 = param_4 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    param_4 = 0xd000000000000013;
    param_3 = puVar2;
    FUN_000eb5a4(puVar2,0xd000000000000013,0x80000000008b8960,param_5,param_6);
  }
  else {
    _swift_bridgeObjectRetain(param_4);
  }
  FUN_00134de4(puVar2,param_3,param_4,param_1,param_5,param_6);
  _swift_bridgeObjectRelease(param_4);
  (**(code **)(lVar3 + 8))(puVar2,param_5);
  return;
}



/* Entry: 000c6ae4; end: 000c6b03;  */

void FUN_000c6ae4(void)

{
  _objc_opt_self(&PTR_PTR_00aed8f8);
  return;
}



/* Entry: 000c6b04; end: 000c6b2f;  */

long FUN_000c6b04(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 000c6b30; end: 000c6b6b;  */

void FUN_000c6b30(ulong *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar2 = (uint)(byte)param_1[5];
  if (2 < (byte)param_1[5]) {
    uVar2 = (int)*param_1 + 3;
  }
  if (uVar2 != 2) {
    if (uVar2 == 1) {
      if ((*(byte *)(*(long *)(param_1[3] - 8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00011684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(param_1[3] - 8) + 8))();
        return;
      }
      uVar1 = *param_1;
    }
    else {
      uVar1 = param_1[1];
      uVar2 = (uint)(uVar1 >> 0x3e);
      if (uVar2 != 1) {
        if (uVar2 != 2) {
          return;
        }
        _swift_release(*param_1);
      }
      uVar1 = uVar1 & 0x3fffffffffffffff;
    }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_0099bb20)(uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(*param_1);
  return;
}



/* Entry: 000c6b6c; end: 000c6d23;  */

undefined8 * FUN_000c6b6c(undefined8 *param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = (uint)*(byte *)(param_2 + 10);
  if (2 < *(byte *)(param_2 + 10)) {
    uVar3 = *param_2 + 3;
  }
  if (uVar3 == 2) {
    uVar1 = *(undefined8 *)(param_2 + 2);
    *param_1 = *(undefined8 *)param_2;
    param_1[1] = uVar1;
    *(char *)(param_1 + 2) = (char)param_2[4];
    *(undefined1 *)(param_1 + 5) = 2;
    _swift_bridgeObjectRetain();
  }
  else if (uVar3 == 1) {
    lVar4 = *(long *)(param_2 + 6);
    param_1[4] = *(undefined8 *)(param_2 + 8);
    param_1[3] = lVar4;
    (*(code *)**(undefined8 **)(lVar4 + -8))(param_1);
    *(undefined1 *)(param_1 + 5) = 1;
  }
  else {
    uVar1 = *(undefined8 *)param_2;
    uVar2 = *(undefined8 *)(param_2 + 2);
    func_0x00023304(uVar1,uVar2);
    *param_1 = uVar1;
    param_1[1] = uVar2;
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return param_1;
}



/* Entry: 000c6d24; end: 000c6dff;  */

void FUN_000c6d24(int *param_1,int *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 != param_2) {
    uVar2 = (uint)*(byte *)(param_1 + 10);
    if (2 < *(byte *)(param_1 + 10)) {
      uVar2 = *param_1 + 3;
    }
    if (uVar2 == 2) {
      _swift_bridgeObjectRelease(*(undefined8 *)param_1);
    }
    else if (uVar2 == 1) {
      FUN_00011670();
    }
    else {
      FUN_00023358(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 2));
    }
    uVar2 = (uint)*(byte *)(param_2 + 10);
    if (2 < *(byte *)(param_2 + 10)) {
      uVar2 = *param_2 + 3;
    }
    if (uVar2 == 2) {
      uVar3 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar3;
      *(char *)(param_1 + 4) = (char)param_2[4];
      uVar1 = 2;
    }
    else if (uVar2 == 1) {
      uVar3 = *(undefined8 *)param_2;
      uVar5 = *(undefined8 *)(param_2 + 6);
      uVar4 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar3;
      *(undefined8 *)(param_1 + 6) = uVar5;
      *(undefined8 *)(param_1 + 4) = uVar4;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
      uVar3 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar3;
    }
    *(undefined1 *)(param_1 + 10) = uVar1;
  }
  return;
}


