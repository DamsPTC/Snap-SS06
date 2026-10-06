/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00167570; end: 001675c7;  */

undefined1  [16]
FUN_00167570(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (*param_1 != -1) {
    _swift_once(param_1,param_4);
  }
  uVar1 = *param_2;
  uVar2 = *param_3;
  _swift_bridgeObjectRetain(uVar2);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 001675c8; end: 00167687;  */

void FUN_001675c8(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007df8a9,0xd,&uStack_48,&lStack_40);
  puRam0000000000b64cf8 = puStack_38;
  lRam0000000000b64cf0 = lStack_40;
  puRam0000000000b64d08 = puStack_28;
  puRam0000000000b64d00 = puStack_30;
  puRam0000000000b64d18 = puStack_18;
  puRam0000000000b64d10 = puStack_20;
  return;
}



/* Entry: 00167688; end: 00167727;  */

void FUN_00167688(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0da8 != -1) {
    _swift_once(0xaf0da8,FUN_001675c8);
  }
  uVar5 = uRam0000000000b64d18;
  uVar4 = uRam0000000000b64d10;
  uVar3 = uRam0000000000b64d08;
  uVar2 = uRam0000000000b64d00;
  uVar1 = uRam0000000000b64cf8;
  *param_1 = uRam0000000000b64cf0;
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



/* Entry: 00167728; end: 00167777;  */

void FUN_00167728(void)

{
  FUN_0016c678();
  return;
}



/* Entry: 00167778; end: 001677bf;  */

void FUN_00167778(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  FUN_0014d5bc(auStack_78,param_1,param_2,param_3 & 0xffffffffff,param_4 & 0xffffffffff);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001677c0; end: 0016784b;  */

undefined1  [16]
FUN_001677c0(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
            undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (*param_3 != -1) {
    _swift_once(param_3,param_6);
  }
  uVar1 = *param_4;
  uVar2 = *param_5;
  _swift_bridgeObjectRetain(uVar2);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 0016784c; end: 0016787f;  */

void FUN_0016784c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_00023358(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 00167880; end: 00167893;  */

undefined8 FUN_00167880(void)

{
  return 0x167890;
}



/* Entry: 00167894; end: 001678c3;  */

void FUN_00167894(void)

{
  FUN_00167728();
  return;
}



/* Entry: 001678c4; end: 00167963;  */

void FUN_001678c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0da8 != -1) {
    _swift_once(0xaf0da8,FUN_001675c8);
  }
  uVar5 = uRam0000000000b64d18;
  uVar4 = uRam0000000000b64d10;
  uVar3 = uRam0000000000b64d08;
  uVar2 = uRam0000000000b64d00;
  uVar1 = uRam0000000000b64cf8;
  *param_1 = uRam0000000000b64cf0;
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



/* Entry: 00167964; end: 001679af;  */

void FUN_00167964(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2290;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2290,&UNK_007dec70);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 001679b0; end: 00167a6f;  */

void FUN_001679b0(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007dfb40,0x40,&uStack_48,&lStack_40);
  puRam0000000000b64d28 = puStack_38;
  lRam0000000000b64d20 = lStack_40;
  puRam0000000000b64d38 = puStack_28;
  puRam0000000000b64d30 = puStack_30;
  puRam0000000000b64d48 = puStack_18;
  puRam0000000000b64d40 = puStack_20;
  return;
}



/* Entry: 00167a70; end: 00167b0f;  */

void FUN_00167a70(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0db0 != -1) {
    _swift_once(0xaf0db0,FUN_001679b0);
  }
  uVar5 = uRam0000000000b64d48;
  uVar4 = uRam0000000000b64d40;
  uVar3 = uRam0000000000b64d38;
  uVar2 = uRam0000000000b64d30;
  uVar1 = uRam0000000000b64d28;
  *param_1 = uRam0000000000b64d20;
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



/* Entry: 00167b10; end: 00167b17;  */

bool FUN_00167b10(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  uVar5 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar7 = ~(-1L << (uVar5 & 0x3f));
  }
  uVar7 = uVar7 & *(ulong *)(param_3 + 0x40);
  uVar5 = uVar5 + 0x3f >> 6;
  _swift_bridgeObjectRetain();
  lVar3 = 0;
  lVar6 = lVar3;
  if (uVar7 == 0) goto LAB_000e1b04;
LAB_000e1b30:
  uVar4 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
  uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
  uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  uVar7 = uVar7 - 1 & uVar7;
  uVar4 = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) | lVar6 << 6;
  uStack_c0 = *(undefined8 *)(*(long *)(param_3 + 0x30) + uVar4 * 8);
  FUN_000e1304(*(long *)(param_3 + 0x38) + uVar4 * 0x28,&uStack_b8);
  lVar3 = lVar6;
  do {
    lVar6 = lStack_a0;
    uStack_78 = uStack_a8;
    uStack_80 = uStack_b0;
    uStack_68 = uStack_98;
    lStack_70 = lStack_a0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    if (lStack_a0 == 0) {
      _swift_release(param_3);
LAB_000e1bf8:
      return lVar6 == 0;
    }
    FUN_000e1450(&uStack_88,&uStack_c0);
    lVar1 = lStack_a0;
    uVar4 = uStack_a8;
    FUN_0001393c(&uStack_c0,uStack_a8);
    (**(code **)(lVar1 + 0x38))(uVar4,lVar1);
    if ((uVar4 & 1) == 0) {
      _swift_release(param_3);
      FUN_00011670(&uStack_c0);
      goto LAB_000e1bf8;
    }
    FUN_00011670(&uStack_c0);
    lVar6 = lVar3;
    if (uVar7 != 0) goto LAB_000e1b30;
LAB_000e1b04:
    uVar4 = uVar5;
    if ((long)uVar5 <= lVar3 + 1) {
      uVar4 = lVar3 + 1;
    }
    while( true ) {
      lVar6 = lVar3 + 1;
      if (SCARRY8(lVar3,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xe1c24);
        (*pcVar2)();
      }
      if ((long)uVar5 <= lVar6) break;
      uVar7 = ((ulong *)(param_3 + 0x40))[lVar6];
      lVar3 = lVar3 + 1;
      if (uVar7 != 0) goto LAB_000e1b30;
    }
    uVar7 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    lStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    lVar3 = uVar4 - 1;
  } while( true );
}



/* Entry: 00167b18; end: 00167c9f;  */

/* WARNING: Removing unreachable block (ram,0x00167c7c) */

void FUN_00167b18(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 0x32) {
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x1a0);
          func_0x001871d0();
          goto LAB_00167ba4;
        }
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x188);
          func_0x001925b0();
          goto LAB_00167ba4;
        }
LAB_00167c38:
        if (lVar1 - 1000U < 0x1ffffc18) {
          lVar2 = lVar1;
          FUN_00187724();
          (**(code **)(param_3 + 0x1d0))(unaff_x20 + 0x20,&UNK_009b1ac8,lVar2,lVar1,param_2,param_3)
          ;
        }
      }
      else {
        if (lVar1 == 0x32) {
          pcVar3 = *(code **)(param_3 + 0x198);
          FUN_00188ae8();
        }
        else {
          if (lVar1 != 999) goto LAB_00167c38;
          pcVar3 = *(code **)(param_3 + 0x1a0);
          func_0x00187210();
        }
LAB_00167ba4:
        (*pcVar3)();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 00167ca0; end: 00167e47;  */

void FUN_00167ca0(undefined8 *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *unaff_x20;
  long unaff_x21;
  long lVar5;
  long lVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if ((*(long *)(unaff_x20[1] + 0x10) != 0) && (FUN_0019fb88(unaff_x20[1],2), unaff_x21 != 0)) {
    return;
  }
  lVar5 = unaff_x20[9];
  if ((char)lVar5 != '\x02') {
    __ss6HasherV8_combineyySuF(3);
    __ss6HasherV8_combineyySuF((char)lVar5);
  }
  lVar5 = unaff_x20[7];
  if (lVar5 != 0) {
    lVar4 = unaff_x20[5];
    lVar1 = unaff_x20[6];
    lVar6 = unaff_x20[8];
    __ss6HasherV8_combineyySuF(0x32);
    uStack_78 = param_1[5];
    uStack_80 = param_1[4];
    uStack_68 = param_1[7];
    uStack_70 = param_1[6];
    uStack_60 = param_1[8];
    uStack_98 = param_1[1];
    uStack_a0 = *param_1;
    uStack_88 = param_1[3];
    uStack_90 = param_1[2];
    func_0x00023304(lVar4,lVar1);
    _swift_bridgeObjectRetain(lVar5);
    FUN_0017c428(&uStack_a0,lVar4,lVar1,lVar5,lVar6);
    if (unaff_x21 != 0) {
      _swift_errorRelease(unaff_x21);
      unaff_x21 = 0;
    }
    FUN_00116294(lVar4,lVar1,lVar5,lVar6);
    param_1[5] = uStack_78;
    param_1[4] = uStack_80;
    param_1[7] = uStack_68;
    param_1[6] = uStack_70;
    param_1[8] = uStack_60;
    param_1[1] = uStack_98;
    *param_1 = uStack_a0;
    param_1[3] = uStack_88;
    param_1[2] = uStack_90;
  }
  if ((*(long *)(*unaff_x20 + 0x10) != 0) && (FUN_0019d040(*unaff_x20,999), unaff_x21 != 0)) {
    return;
  }
  FUN_0013bd14(param_1,1000,0x20000000,unaff_x20[4]);
  if (unaff_x21 != 0) {
    return;
  }
  lVar5 = unaff_x20[2];
  uVar2 = (uint)((ulong)unaff_x20[3] >> 0x20);
  uVar3 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar3 == 0) {
      if ((unaff_x20[3] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_00167e34;
    }
    lVar4 = (long)(int)lVar5;
    lVar5 = lVar5 >> 0x20;
  }
  else {
    if (uVar3 != 2) {
      return;
    }
    lVar4 = *(long *)(lVar5 + 0x10);
    lVar5 = *(long *)(lVar5 + 0x18);
  }
  if (lVar4 == lVar5) {
    return;
  }
LAB_00167e34:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 00167e48; end: 00167f9b;  */

void FUN_00167e48(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  long lVar3;
  code *pcVar4;
  char cStack_41;
  
  lVar2 = unaff_x20[1];
  lVar3 = param_1;
  if (*(long *)(lVar2 + 0x10) != 0) {
    pcVar4 = *(code **)(param_3 + 0x118);
    func_0x001871d0();
    (*pcVar4)(lVar2,2,&UNK_009b1be8,lVar3,param_2,param_3);
    lVar3 = lVar2;
    if (unaff_x21 != 0) {
      return;
    }
  }
  if ((char)unaff_x20[9] != '\x02') {
    pcVar4 = *(code **)(param_3 + 0x80);
    cStack_41 = (char)unaff_x20[9];
    func_0x001925b0();
    (*pcVar4)(&cStack_41,3,&UNK_009b1b70,lVar3,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    plVar1 = unaff_x20;
    FUN_00167f9c();
    lVar3 = *unaff_x20;
    if (*(long *)(lVar3 + 0x10) != 0) {
      pcVar4 = *(code **)(param_3 + 0x118);
      func_0x00187210();
      (*pcVar4)(lVar3,999,&UNK_009b2a70,plVar1,param_2,param_3);
    }
    (**(code **)(param_3 + 0x1b0))(unaff_x20[4],1000,0x20000000,param_2,param_3);
    FUN_0013ad2c(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 00167f9c; end: 0016801f;  */

void FUN_00167f9c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lStack_50 = *(long *)(param_1 + 0x38);
  if (lStack_50 != 0) {
    uStack_48 = *(undefined8 *)(param_1 + 0x40);
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_00188ae8();
    (*pcVar1)(&uStack_60,0x32,&UNK_009b2b90,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 00168020; end: 00168023;  */

uint FUN_00168020(long *param_1,long *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_220 [32];
  ulong uStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
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
  
  lVar6 = *param_1;
  lVar5 = *param_2;
  lVar7 = *(long *)(lVar6 + 0x10);
  if (lVar7 == *(long *)(lVar5 + 0x10)) {
    if (lVar7 != 0 && lVar6 != lVar5) {
      puVar8 = (undefined8 *)(lVar6 + 0x20);
      puVar9 = (undefined8 *)(lVar5 + 0x20);
      do {
        uStack_158 = puVar8[1];
        uStack_160 = *puVar8;
        uStack_148 = puVar8[3];
        uStack_150 = puVar8[2];
        uStack_138 = puVar8[5];
        uStack_140 = puVar8[4];
        uStack_128 = puVar8[7];
        uStack_130 = puVar8[6];
        uStack_118 = puVar8[9];
        uStack_120 = puVar8[8];
        uStack_108 = puVar8[0xb];
        uStack_110 = puVar8[10];
        uStack_f8 = puVar8[0xd];
        uStack_100 = puVar8[0xc];
        uStack_f0 = puVar8[0xe];
        uStack_88 = puVar9[0xb];
        uStack_90 = puVar9[10];
        uStack_78 = puVar9[0xd];
        uStack_80 = puVar9[0xc];
        uStack_70 = puVar9[0xe];
        uStack_98 = puVar9[9];
        uStack_a0 = puVar9[8];
        uStack_d8 = puVar9[1];
        uStack_e0 = *puVar9;
        uStack_c8 = puVar9[3];
        uStack_d0 = puVar9[2];
        uStack_b8 = puVar9[5];
        uStack_c0 = puVar9[4];
        uStack_a8 = puVar9[7];
        uStack_b0 = puVar9[6];
        func_0x00192650(&uStack_160,&uStack_200);
        func_0x00192650(&uStack_e0,&uStack_200);
        puVar2 = &uStack_160;
        FUN_00182920(puVar2,&uStack_e0);
        func_0x00192684(&uStack_e0);
        func_0x00192684(&uStack_160);
        if (((ulong)puVar2 & 1) == 0) goto LAB_001851b4;
        puVar9 = puVar9 + 0xf;
        puVar8 = puVar8 + 0xf;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    uVar3 = param_1[1];
    FUN_00149920(uVar3,param_2[1]);
    if ((uVar3 & 1) != 0) {
      lVar5 = param_1[6];
      uVar3 = param_1[5];
      lVar12 = param_1[8];
      lVar10 = param_1[7];
      lVar6 = param_2[6];
      lVar7 = param_2[5];
      lVar13 = param_2[8];
      lVar11 = param_2[7];
      uStack_200 = uVar3;
      lStack_1f8 = lVar5;
      lStack_1f0 = lVar10;
      lStack_1e8 = lVar12;
      lStack_180 = lVar7;
      lStack_178 = lVar6;
      lStack_170 = lVar11;
      lStack_168 = lVar13;
      if (lVar10 == 0) {
        if (lVar11 != 0) goto LAB_00185154;
        func_0x00187028(&uStack_200,auStack_220,0xaf07c8,&UNK_007daf88);
        func_0x00187028(&lStack_180,auStack_220,0xaf07c8,&UNK_007daf88);
        FUN_00116294(uVar3,lVar5,0,lVar12);
LAB_00185234:
        if ((char)param_1[9] == '\x02') {
          if ((char)param_2[9] == '\x02') {
LAB_00185258:
            uVar3 = param_1[2];
            FUN_00038814(uVar3,param_1[3],param_2[2],param_2[3]);
            if ((uVar3 & 1) != 0) {
              lVar7 = param_1[4];
              FUN_000e17c0(lVar7,param_2[4]);
              uVar1 = (uint)lVar7;
              goto LAB_001851b8;
            }
          }
        }
        else if ((char)param_1[9] == (char)param_2[9]) goto LAB_00185258;
      }
      else if (lVar11 == 0) {
LAB_00185154:
        func_0x00187028(&uStack_200,auStack_220,0xaf07c8,&UNK_007daf88);
        func_0x00187028(&lStack_180,auStack_220,0xaf07c8,&UNK_007daf88);
        FUN_00116294(uVar3,lVar5,lVar10,lVar12);
        FUN_00116294(lVar7,lVar6,lVar11,lVar13);
      }
      else {
        func_0x00187028(&uStack_200,auStack_220,0xaf07c8,&UNK_007daf88);
        func_0x00187028(&lStack_180,auStack_220,0xaf07c8,&UNK_007daf88);
        uVar4 = uVar3;
        FUN_00186180(uVar3,lVar5,lVar10,lVar12,lVar7,lVar6,lVar11,lVar13);
        FUN_00116294(lVar7,lVar6,lVar11,lVar13);
        FUN_00116294(uVar3,lVar5,lVar10,lVar12);
        if ((uVar4 & 1) != 0) goto LAB_00185234;
      }
    }
  }
LAB_001851b4:
  uVar1 = 0;
LAB_001851b8:
  return uVar1 & 1;
}



/* Entry: 00168024; end: 001680b3;  */

/* WARNING: Removing unreachable block (ram,0x00168074) */

void FUN_00168024(void)

{
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_80,0);
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_90 = uStack_40;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  FUN_00167ca0(&uStack_d0);
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  uStack_40 = uStack_90;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001680b4; end: 0016810b;  */

void FUN_001680b4(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *param_1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  param_1[1] = puVar1;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  param_1[4] = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 9) = 2;
  return;
}



/* Entry: 0016810c; end: 001681af;  */

undefined8 FUN_0016810c(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = *unaff_x20;
  uVar4 = unaff_x20[4];
  uVar2 = unaff_x20[5];
  uVar1 = unaff_x20[6];
  uVar3 = unaff_x20[7];
  uVar5 = unaff_x20[8];
  FUN_000e1a94();
  if ((uVar4 & 1) != 0) {
    func_0x0014be00();
    uVar4 = uVar6;
    FUN_000f846c();
    _swift_bridgeObjectRelease(uVar6);
    if ((uVar4 & 1) != 0) {
      if (uVar3 != 0) {
        func_0x00023304(uVar2,uVar1);
        uVar4 = uVar3;
        _swift_bridgeObjectRetain();
        FUN_000e1a94();
        FUN_00116294(uVar2,uVar1,uVar3,uVar5);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}



/* Entry: 001681b0; end: 001681df;  */

undefined1  [16] FUN_001681b0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                  *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 001681e0; end: 00168213;  */

void FUN_001681e0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 00168214; end: 00168227;  */

undefined1  [16] FUN_00168214(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x168224;
  return auVar1;
}



/* Entry: 00168228; end: 0016823b;  */

void FUN_00168228(void)

{
  FUN_00167b18();
  return;
}



/* Entry: 0016823c; end: 0016827b;  */

void FUN_0016823c(void)

{
  FUN_00167e48();
  return;
}



/* Entry: 0016827c; end: 0016831b;  */

void FUN_0016827c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0db0 != -1) {
    _swift_once(0xaf0db0,FUN_001679b0);
  }
  uVar5 = uRam0000000000b64d48;
  uVar4 = uRam0000000000b64d40;
  uVar3 = uRam0000000000b64d38;
  uVar2 = uRam0000000000b64d30;
  uVar1 = uRam0000000000b64d28;
  *param_1 = uRam0000000000b64d20;
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



/* Entry: 0016831c; end: 00168357;  */

void FUN_0016831c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2288;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2288,&UNK_007dec68);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 00168358; end: 00168543;  */

/* WARNING: Removing unreachable block (ram,0x001683c4) */

void FUN_00168358(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_50 = unaff_x20[6];
  uStack_48 = (undefined1)unaff_x20[7];
  uStack_3f = *(undefined8 *)((long)unaff_x20 + 0x41);
  uStack_47 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x39);
  uStack_40 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x39) >> 0x38);
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(&uStack_d0,0);
  uStack_f8 = uStack_a8;
  uStack_100 = uStack_b0;
  uStack_e8 = uStack_98;
  uStack_f0 = uStack_a0;
  uStack_e0 = uStack_90;
  uStack_118 = uStack_c8;
  uStack_120 = uStack_d0;
  uStack_108 = uStack_b8;
  uStack_110 = uStack_c0;
  FUN_00167ca0(&uStack_120);
  uStack_98 = uStack_e8;
  uStack_a0 = uStack_f0;
  uStack_90 = uStack_e0;
  uStack_b8 = uStack_108;
  uStack_c0 = uStack_110;
  uStack_a8 = uStack_f8;
  uStack_b0 = uStack_100;
  uStack_c8 = uStack_118;
  uStack_d0 = uStack_120;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00168544; end: 0016865b;  */

uint FUN_00168544(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_80 = param_1[6];
  uStack_78 = (undefined1)param_1[7];
  uStack_6f = *(undefined8 *)((long)param_1 + 0x41);
  uStack_77 = (undefined7)*(undefined8 *)((long)param_1 + 0x39);
  uStack_70 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x39) >> 0x38);
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_30 = param_2[6];
  uStack_28 = (undefined1)param_2[7];
  uStack_1f = *(undefined8 *)((long)param_2 + 0x41);
  uStack_27 = (undefined7)*(undefined8 *)((long)param_2 + 0x39);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x39) >> 0x38);
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_00168020(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 0016865c; end: 0016879b;  */

void FUN_0016865c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0dc8 != -1) {
    _swift_once(0xaf0dc8,0x16859c);
  }
  uVar5 = uRam0000000000b64d78;
  uVar4 = uRam0000000000b64d70;
  uVar3 = uRam0000000000b64d68;
  uVar2 = uRam0000000000b64d60;
  uVar1 = uRam0000000000b64d58;
  *param_1 = uRam0000000000b64d50;
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



/* Entry: 0016879c; end: 0016880b;  */

void FUN_0016879c(void)

{
  __sSS6appendyySSF(0x6172616c6365442e,0xec0000006e6f6974);
  uRam0000000000b64d80 = 0xd000000000000025;
  uRam0000000000b64d88 = 0x80000000008b91f0;
  return;
}



/* Entry: 0016880c; end: 0016884b;  */

undefined8 FUN_0016880c(void)

{
  if (lRam0000000000af0dd0 != -1) {
    _swift_once(0xaf0dd0,FUN_0016879c);
  }
  return 0xb64d80;
}



/* Entry: 0016884c; end: 0016886b;  */

undefined1  [16] FUN_0016884c(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000000af0dd0 != -1) {
    _swift_once(0xaf0dd0,FUN_0016879c);
  }
  auVar1._8_8_ = uRam0000000000b64d88;
  auVar1._0_8_ = uRam0000000000b64d80;
  _swift_bridgeObjectRetain(uRam0000000000b64d88);
  return auVar1;
}



/* Entry: 0016886c; end: 0016892b;  */

void FUN_0016886c(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007dfae0,0x32,&uStack_48,&lStack_40);
  puRam0000000000b64d98 = puStack_38;
  lRam0000000000b64d90 = lStack_40;
  puRam0000000000b64da8 = puStack_28;
  puRam0000000000b64da0 = puStack_30;
  puRam0000000000b64db8 = puStack_18;
  puRam0000000000b64db0 = puStack_20;
  return;
}



/* Entry: 0016892c; end: 001689cb;  */

void FUN_0016892c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0dd8 != -1) {
    _swift_once(0xaf0dd8,FUN_0016886c);
  }
  uVar5 = uRam0000000000b64db8;
  uVar4 = uRam0000000000b64db0;
  uVar3 = uRam0000000000b64da8;
  uVar2 = uRam0000000000b64da0;
  uVar1 = uRam0000000000b64d98;
  *param_1 = uRam0000000000b64d90;
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



/* Entry: 001689cc; end: 00168aab;  */

void FUN_001689cc(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x50);
          lVar1 = unaff_x20 + 0x10;
          goto LAB_00168a78;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x158);
          lVar1 = unaff_x20 + 0x18;
          goto LAB_00168a78;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x158);
          lVar1 = unaff_x20 + 0x28;
        }
        else if (lVar1 == 5) {
          pcVar3 = *(code **)(param_3 + 0x140);
          lVar1 = unaff_x20 + 0x38;
        }
        else {
          if (lVar1 != 6) goto LAB_00168a88;
          pcVar3 = *(code **)(param_3 + 0x140);
          lVar1 = unaff_x20 + 0x39;
        }
LAB_00168a78:
        (*pcVar3)(lVar1,param_2,param_3);
      }
LAB_00168a88:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 00168aac; end: 00168bcb;  */

void FUN_00168aac(undefined8 param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  if (*(char *)((long)unaff_x20 + 0x14) != '\x01') {
    lVar4 = unaff_x20[2];
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyys6UInt64VF((long)(int)lVar4);
  }
  lVar4 = unaff_x20[4];
  if (lVar4 != 0) {
    lVar5 = unaff_x20[3];
    __ss6HasherV8_combineyySuF(2);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar5,lVar4);
  }
  lVar4 = unaff_x20[6];
  if (lVar4 != 0) {
    lVar5 = unaff_x20[5];
    __ss6HasherV8_combineyySuF(3);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar5,lVar4);
  }
  bVar1 = *(byte *)(unaff_x20 + 7);
  if (bVar1 != 2) {
    __ss6HasherV8_combineyySuF(5);
    __ss6HasherV8_combineyys5UInt8VF(bVar1 & 1);
  }
  bVar1 = *(byte *)((long)unaff_x20 + 0x39);
  if (bVar1 != 2) {
    __ss6HasherV8_combineyySuF(6);
    __ss6HasherV8_combineyys5UInt8VF(bVar1 & 1);
  }
  lVar4 = *unaff_x20;
  uVar2 = (uint)((ulong)unaff_x20[1] >> 0x20);
  uVar3 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar3 == 0) {
      if ((unaff_x20[1] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_00168bac;
    }
    lVar5 = (long)(int)lVar4;
    lVar4 = lVar4 >> 0x20;
  }
  else {
    if (uVar3 != 2) {
      return;
    }
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar4 = *(long *)(lVar4 + 0x18);
  }
  if (lVar5 == lVar4) {
    return;
  }
LAB_00168bac:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 00168bcc; end: 00168cd3;  */

void FUN_00168bcc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  if (*(char *)((long)unaff_x20 + 0x14) != '\x01') {
    (**(code **)(param_3 + 0x18))(*(undefined4 *)(unaff_x20 + 2),1,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    if (unaff_x20[4] != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[3],unaff_x20[4],2,param_2,param_3);
    }
    if (unaff_x20[6] != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[5],unaff_x20[6],3,param_2,param_3);
    }
    if (*(byte *)(unaff_x20 + 7) != 2) {
      (**(code **)(param_3 + 0x68))(*(byte *)(unaff_x20 + 7) & 1,5,param_2,param_3);
    }
    if (*(byte *)((long)unaff_x20 + 0x39) != 2) {
      (**(code **)(param_3 + 0x68))(*(byte *)((long)unaff_x20 + 0x39) & 1,6,param_2,param_3);
    }
    FUN_0013ad2c(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 00168cd4; end: 00168cd7;  */

ulong FUN_00168cd4(long *param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  ulong *unaff_x20;
  ulong uVar20;
  long lVar21;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  if (*(char *)((long)param_1 + 0x14) == '\x01') {
    if (*(char *)((long)param_2 + 0x14) != '\x01') {
      return 0;
    }
  }
  else if (*(char *)((long)param_2 + 0x14) == '\x01' || (int)param_1[2] != (int)param_2[2]) {
    return 0;
  }
  lVar14 = param_1[4];
  lVar12 = param_2[4];
  if (lVar14 == 0) {
    if (lVar12 != 0) {
      return 0;
    }
  }
  else {
    if (lVar12 == 0) {
      return 0;
    }
    uVar17 = param_1[3];
    if (((uVar17 != param_2[3]) || (lVar14 != lVar12)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar17,lVar14,param_2[3],lVar12,0), (uVar17 & 1) == 0)) {
      return 0;
    }
  }
  lVar14 = param_1[6];
  lVar12 = param_2[6];
  if (lVar14 == 0) {
    if (lVar12 != 0) {
      return 0;
    }
  }
  else {
    if (lVar12 == 0) {
      return 0;
    }
    uVar17 = param_1[5];
    if (((uVar17 != param_2[5]) || (lVar14 != lVar12)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar17,lVar14,param_2[5],lVar12,0), (uVar17 & 1) == 0)) {
      return 0;
    }
  }
  bVar1 = *(byte *)(param_2 + 7);
  if (*(byte *)(param_1 + 7) == 2) {
    if (bVar1 != 2) {
      return 0;
    }
  }
  else {
    if (bVar1 == 2) {
      return 0;
    }
    if (((*(byte *)(param_1 + 7) ^ bVar1) & 1) != 0) {
      return 0;
    }
  }
  bVar1 = *(byte *)((long)param_2 + 0x39);
  if (*(byte *)((long)param_1 + 0x39) == 2) {
    if (bVar1 != 2) {
      return 0;
    }
  }
  else {
    if (bVar1 == 2) {
      return 0;
    }
    if (((*(byte *)((long)param_1 + 0x39) ^ bVar1) & 1) != 0) {
      return 0;
    }
  }
  lVar12 = *param_1;
  pbVar10 = (byte *)param_1[1];
  lVar14 = *param_2;
  uVar17 = param_2[1];
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar3 = (uint)((ulong)pbVar10 >> 0x20);
  uVar13 = uVar3 >> 0x1e;
  uVar4 = (uint)(uVar17 >> 0x20);
  uVar18 = uVar4 >> 0x1e;
  iVar6 = (int)lVar12;
  if ((ulong)pbVar10 >> 0x3e == 3) {
    uVar16 = 0;
    if (((lVar12 != 0) || (pbVar10 != (byte *)0xc000000000000000)) ||
       ((uVar17 >> 0x3e < 3 || ((uVar16 = 0, lVar14 != 0 || (uVar17 != 0xc000000000000000))))))
    goto joined_r0x000389b8;
  }
  else {
    if (uVar3 >> 0x1e < 2) {
      if (uVar13 == 0) {
        uVar16 = (ulong)pbVar10 >> 0x30 & 0xff;
      }
      else {
        iVar15 = (int)((ulong)lVar12 >> 0x20);
        if (SBORROW4(iVar15,iVar6)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar5)();
        }
        uVar16 = (ulong)(iVar15 - iVar6);
      }
joined_r0x000389b8:
      if (1 < uVar4 >> 0x1e) goto LAB_00038898;
LAB_000388cc:
      if (uVar18 == 0) {
        uVar19 = uVar17 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar15 = (int)((ulong)lVar14 >> 0x20);
      if (SBORROW4(iVar15,(int)lVar14)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar5)();
      }
      if (uVar16 != (long)(iVar15 - (int)lVar14)) goto LAB_0003899c;
    }
    else {
      if (uVar13 == 2) {
        uVar16 = *(long *)(lVar12 + 0x18) - *(long *)(lVar12 + 0x10);
        if (SBORROW8(*(long *)(lVar12 + 0x18),*(long *)(lVar12 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar5)();
        }
        goto joined_r0x000389b8;
      }
      uVar16 = 0;
      if (uVar18 < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar18 != 2) {
        uVar17 = (ulong)(uVar16 == 0);
        goto LAB_00038af8;
      }
      uVar19 = *(long *)(lVar14 + 0x18) - *(long *)(lVar14 + 0x10);
      if (SBORROW8(*(long *)(lVar14 + 0x18),*(long *)(lVar14 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar5)();
      }
LAB_000388d4:
      if (uVar16 != uVar19) {
LAB_0003899c:
        uVar17 = 0;
        goto LAB_00038af8;
      }
    }
    if (0 < (long)uVar16) {
      if (uVar13 < 2) {
        if (uVar13 == 0) {
          abStack_70[0] = (byte)lVar12;
          abStack_70[1] = (byte)((ulong)lVar12 >> 8);
          abStack_70[2] = (byte)((ulong)lVar12 >> 0x10);
          abStack_70[3] = (byte)((ulong)lVar12 >> 0x18);
          abStack_70[4] = (byte)((ulong)lVar12 >> 0x20);
          abStack_70[5] = (byte)((ulong)lVar12 >> 0x28);
          abStack_70[6] = (byte)((ulong)lVar12 >> 0x30);
          abStack_70[7] = (byte)((ulong)lVar12 >> 0x38);
          abStack_70[8] = (byte)pbVar10;
          abStack_70[9] = (byte)((ulong)pbVar10 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar10 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar10 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar10 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar10 >> 0x28);
          pbVar10 = abStack_70 + ((ulong)pbVar10 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar17 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar21 = (long)iVar6;
        lVar7 = (lVar12 >> 0x20) - lVar21;
        if (lVar12 >> 0x20 < lVar21) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar5)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (lVar12 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          lVar12 = 0;
        }
        else {
          lVar8 = lVar12;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar21,lVar8)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar5)();
          }
          lVar12 = (lVar21 - lVar8) + lVar12;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (lVar12 != 0) {
            if (lVar7 <= lVar8) {
              lVar8 = lVar7;
            }
            pbVar11 = (byte *)(lVar8 + lVar12);
            goto LAB_00038aec;
          }
        }
        pbVar11 = (byte *)0x0;
      }
      else {
        if (uVar13 != 2) {
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
          pbVar10 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar21 = *(long *)(lVar12 + 0x10);
        lVar8 = *(long *)(lVar12 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar7 = lVar12;
        if (lVar12 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar21,lVar7)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar5)();
          }
          lVar12 = (lVar21 - lVar7) + lVar12;
        }
        lVar2 = lVar8 - lVar21;
        if (SBORROW8(lVar8,lVar21)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar5)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (lVar12 == 0) {
          pbVar11 = (byte *)0x0;
        }
        else {
          if (lVar2 <= lVar7) {
            lVar7 = lVar2;
          }
          pbVar11 = (byte *)(lVar7 + lVar12);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar10 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,lVar12,pbVar11,lVar14,uVar17);
      uVar17 = (ulong)abStack_70[0];
      pbVar10 = pbVar11;
      goto LAB_00038af8;
    }
  }
  uVar17 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar17;
  }
  ___stack_chk_fail();
  lVar12 = (long)pbVar10 - uVar17;
  if (SBORROW8((long)pbVar10,uVar17)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar5)();
  }
  uVar20 = *unaff_x20;
  uVar19 = uVar20 & 0xffffffffffffff8;
  uVar17 = uVar19 + 0x20 + uVar17 * 8;
  uVar9 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar16 = uVar17;
  _swift_arrayDestroy(uVar17,lVar12,uVar9);
  lVar7 = lVar14 - lVar12;
  if (SBORROW8(lVar14,lVar12)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar5)();
  }
  if (lVar7 != 0) {
    if (uVar20 >> 0x3e == 0) {
      uVar16 = *(ulong *)(uVar19 + 0x10);
      lVar12 = uVar16 - (long)pbVar10;
    }
    else {
      uVar16 = uVar19;
      if ((uVar20 & 0x8000000000000000) != 0) {
        uVar16 = uVar20;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar12 = uVar16 - (long)pbVar10;
    }
    if (SBORROW8(uVar16,(long)pbVar10)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar5)();
    }
    uVar17 = uVar17 + lVar14 * 8;
    uVar16 = uVar19 + 0x20 + (long)pbVar10 * 8;
    if (uVar17 != uVar16 || uVar16 + lVar12 * 8 <= uVar17) {
      _memmove(uVar17,uVar16,lVar12 << 3);
    }
    if (uVar20 >> 0x3e == 0) {
      uVar16 = *(ulong *)(uVar19 + 0x10);
    }
    else {
      uVar16 = uVar19;
      if ((uVar20 & 0x8000000000000000) != 0) {
        uVar16 = uVar20;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar16,lVar7)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar5)();
    }
    *(ulong *)(uVar19 + 0x10) = uVar16 + lVar7;
  }
  if (lVar14 < 1) {
    return uVar16;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x38c58);
  (*pcVar5)();
}



/* Entry: 00168cd8; end: 00168d67;  */

/* WARNING: Removing unreachable block (ram,0x00168d28) */

void FUN_00168cd8(void)

{
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_80,0);
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_90 = uStack_40;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  FUN_00168aac(&uStack_d0);
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  uStack_40 = uStack_90;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00168d68; end: 00168db7;  */

void FUN_00168d68(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((long)param_1 + 0x14) = 1;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 7) = 0x202;
  return;
}



/* Entry: 00168db8; end: 00168de7;  */

undefined1  [16] FUN_00168db8(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00023304(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 00168de8; end: 00168e1b;  */

void FUN_00168de8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_00023358(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 00168e1c; end: 00168e2f;  */

undefined8 FUN_00168e1c(void)

{
  return 0x168e2c;
}



/* Entry: 00168e30; end: 00168e57;  */

void FUN_00168e30(void)

{
  FUN_001689cc();
  return;
}



/* Entry: 00168e58; end: 00168ef7;  */

void FUN_00168e58(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0dd8 != -1) {
    _swift_once(0xaf0dd8,FUN_0016886c);
  }
  uVar5 = uRam0000000000b64db8;
  uVar4 = uRam0000000000b64db0;
  uVar3 = uRam0000000000b64da8;
  uVar2 = uRam0000000000b64da0;
  uVar1 = uRam0000000000b64d98;
  *param_1 = uRam0000000000b64d90;
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



/* Entry: 00168ef8; end: 00168f33;  */

void FUN_00168ef8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2280;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2280,&UNK_007dec60);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 00168f34; end: 00169117;  */

/* WARNING: Removing unreachable block (ram,0x00168fa0) */

void FUN_00168f34(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined2 uStack_48;
  undefined6 uStack_46;
  undefined2 uStack_40;
  undefined8 uStack_3e;
  
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_50 = unaff_x20[4];
  uStack_48 = (undefined2)unaff_x20[5];
  uStack_3e = *(undefined8 *)((long)unaff_x20 + 0x32);
  uStack_46 = (undefined6)*(undefined8 *)((long)unaff_x20 + 0x2a);
  uStack_40 = (undefined2)((ulong)*(undefined8 *)((long)unaff_x20 + 0x2a) >> 0x30);
  __ss6HasherV5_seedABSi_tcfC(&uStack_c0,0);
  uStack_e8 = uStack_98;
  uStack_f0 = uStack_a0;
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_d0 = uStack_80;
  uStack_108 = uStack_b8;
  uStack_110 = uStack_c0;
  uStack_f8 = uStack_a8;
  uStack_100 = uStack_b0;
  FUN_00168aac(&uStack_110);
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  uStack_80 = uStack_d0;
  uStack_a8 = uStack_f8;
  uStack_b0 = uStack_100;
  uStack_98 = uStack_e8;
  uStack_a0 = uStack_f0;
  uStack_b8 = uStack_108;
  uStack_c0 = uStack_110;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00169118; end: 0016916f;  */

uint FUN_00169118(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined2 uStack_68;
  undefined6 uStack_66;
  undefined2 uStack_60;
  undefined8 uStack_5e;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined2 uStack_28;
  undefined6 uStack_26;
  undefined2 uStack_20;
  undefined8 uStack_1e;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_70 = param_1[4];
  uStack_68 = (undefined2)param_1[5];
  uStack_5e = *(undefined8 *)((long)param_1 + 0x32);
  uStack_66 = (undefined6)*(undefined8 *)((long)param_1 + 0x2a);
  uStack_60 = (undefined2)((ulong)*(undefined8 *)((long)param_1 + 0x2a) >> 0x30);
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_30 = param_2[4];
  uStack_28 = (undefined2)param_2[5];
  uStack_1e = *(undefined8 *)((long)param_2 + 0x32);
  uStack_26 = (undefined6)*(undefined8 *)((long)param_2 + 0x2a);
  uStack_20 = (undefined2)((ulong)*(undefined8 *)((long)param_2 + 0x2a) >> 0x30);
  func_0x00183294(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 00169170; end: 00169197;  */

undefined * FUN_00169170(void)

{
  return &UNK_009afb40;
}



/* Entry: 00169198; end: 00169257;  */

void FUN_00169198(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007dfa60,0x73,&uStack_48,&lStack_40);
  puRam0000000000b64dc8 = puStack_38;
  lRam0000000000b64dc0 = lStack_40;
  puRam0000000000b64dd8 = puStack_28;
  puRam0000000000b64dd0 = puStack_30;
  puRam0000000000b64de8 = puStack_18;
  puRam0000000000b64de0 = puStack_20;
  return;
}



/* Entry: 00169258; end: 001692f7;  */

void FUN_00169258(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0de0 != -1) {
    _swift_once(0xaf0de0,FUN_00169198);
  }
  uVar5 = uRam0000000000b64de8;
  uVar4 = uRam0000000000b64de0;
  uVar3 = uRam0000000000b64dd8;
  uVar2 = uRam0000000000b64dd0;
  uVar1 = uRam0000000000b64dc8;
  *param_1 = uRam0000000000b64dc0;
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



/* Entry: 001692f8; end: 00169433;  */

uint FUN_001692f8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar5 = *(ulong *)(unaff_x20 + 0x80);
  if (uVar5 == 0) {
    uVar9 = 1;
    goto LAB_00169410;
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x78);
  lVar8 = *(long *)(unaff_x20 + 0x88);
  func_0x00023304(uVar1,uVar2);
  _swift_bridgeObjectRetain(uVar5);
  _swift_retain(lVar8);
  uVar10 = uVar5;
  FUN_000e1a94();
  if ((uVar10 & 1) == 0) {
LAB_001693f0:
    uVar9 = 0;
  }
  else {
    _swift_beginAccess(lVar8 + 0x30,auStack_78,0,0);
    uVar10 = *(ulong *)(lVar8 + 0x40);
    if (uVar10 != 0) {
      uVar6 = *(undefined8 *)(lVar8 + 0x48);
      uVar4 = *(undefined8 *)(lVar8 + 0x30);
      uVar7 = *(undefined8 *)(lVar8 + 0x38);
      func_0x00023304(uVar4,uVar7);
      uVar3 = uVar10;
      _swift_bridgeObjectRetain();
      FUN_000e1a94();
      FUN_00116294(uVar4,uVar7,uVar10,uVar6);
      if ((uVar3 & 1) == 0) goto LAB_001693f0;
    }
    _swift_beginAccess(lVar8 + 0x80,auStack_90,0,0);
    uVar7 = *(undefined8 *)(lVar8 + 0x80);
    uVar4 = uVar7;
    _swift_bridgeObjectRetain(uVar7);
    func_0x0014be00();
    _swift_bridgeObjectRelease(uVar7);
    uVar7 = uVar4;
    FUN_000f846c(uVar4);
    uVar9 = (uint)uVar7;
    _swift_bridgeObjectRelease(uVar4);
  }
  func_0x00186ac4(uVar1,uVar2,uVar5,lVar8);
LAB_00169410:
  return uVar9 & 1;
}



/* Entry: 00169434; end: 0016951b;  */

uint FUN_00169434(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  FUN_000e1a94();
  if ((param_3 & 1) == 0) {
LAB_001694fc:
    uVar3 = 0;
  }
  else {
    _swift_beginAccess(param_4 + 0x30,auStack_58,0,0);
    uVar5 = *(ulong *)(param_4 + 0x40);
    if (uVar5 != 0) {
      uVar6 = *(undefined8 *)(param_4 + 0x48);
      uVar2 = *(undefined8 *)(param_4 + 0x30);
      uVar4 = *(undefined8 *)(param_4 + 0x38);
      func_0x00023304(uVar2,uVar4);
      uVar1 = uVar5;
      _swift_bridgeObjectRetain();
      FUN_000e1a94();
      FUN_00116294(uVar2,uVar4,uVar5,uVar6);
      if ((uVar1 & 1) == 0) goto LAB_001694fc;
    }
    _swift_beginAccess(param_4 + 0x80,auStack_70,0,0);
    uVar4 = *(undefined8 *)(param_4 + 0x80);
    uVar2 = uVar4;
    _swift_bridgeObjectRetain(uVar4);
    func_0x0014be00();
    _swift_bridgeObjectRelease(uVar4);
    uVar4 = uVar2;
    FUN_000f846c(uVar2);
    uVar3 = (uint)uVar4;
    _swift_bridgeObjectRelease(uVar2);
  }
  return uVar3 & 1;
}



/* Entry: 0016951c; end: 0016969f;  */

/* WARNING: Removing unreachable block (ram,0x00169684) */

void FUN_0016951c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  long unaff_x21;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_3 + 0x10);
  uVar1 = param_2;
  lVar2 = param_3;
  (*pcVar5)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        pcVar4 = *(code **)(param_3 + 0x158);
        lVar2 = unaff_x20 + 0x10;
        break;
      case 2:
        pcVar4 = *(code **)(param_3 + 0x158);
        lVar2 = unaff_x20 + 0x38;
        break;
      case 3:
        pcVar4 = *(code **)(param_3 + 0x50);
        lVar2 = unaff_x20 + 0x20;
        break;
      case 4:
        pcVar4 = *(code **)(param_3 + 0x188);
        func_0x00192570();
        lVar2 = unaff_x20 + 0x25;
        puVar3 = &UNK_009b1dc8;
        goto code_r0x00169670;
      case 5:
        pcVar4 = *(code **)(param_3 + 0x188);
        func_0x00192530();
        lVar2 = unaff_x20 + 0x26;
        puVar3 = &UNK_009b1d38;
        goto code_r0x00169670;
      case 6:
        pcVar4 = *(code **)(param_3 + 0x158);
        lVar2 = unaff_x20 + 0x28;
        break;
      case 7:
        pcVar4 = *(code **)(param_3 + 0x158);
        lVar2 = unaff_x20 + 0x48;
        break;
      case 8:
        pcVar4 = *(code **)(param_3 + 0x198);
        FUN_00187f6c();
        lVar2 = unaff_x20 + 0x70;
        puVar3 = &UNK_009b2328;
code_r0x00169670:
        (*pcVar4)(lVar2,puVar3,uVar1,param_2,param_3);
        goto LAB_001695a4;
      case 9:
        pcVar4 = *(code **)(param_3 + 0x50);
        lVar2 = unaff_x20 + 0x58;
        break;
      case 10:
        pcVar4 = *(code **)(param_3 + 0x158);
        lVar2 = unaff_x20 + 0x60;
        break;
      default:
        goto LAB_001695a4;
      case 0x11:
        pcVar4 = *(code **)(param_3 + 0x140);
        lVar2 = unaff_x20 + 0x90;
      }
      (*pcVar4)(lVar2,param_2,param_3);
LAB_001695a4:
      uVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 001696a0; end: 00169977;  */

void FUN_001696a0(undefined8 *param_1)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *unaff_x20;
  long unaff_x21;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar7 = unaff_x20[3];
  if (lVar7 != 0) {
    lVar8 = unaff_x20[2];
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar8,lVar7);
  }
  lVar7 = unaff_x20[8];
  if (lVar7 != 0) {
    lVar8 = unaff_x20[7];
    __ss6HasherV8_combineyySuF(2);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar8,lVar7);
  }
  if (*(char *)((long)unaff_x20 + 0x24) != '\x01') {
    lVar7 = unaff_x20[4];
    __ss6HasherV8_combineyySuF(3);
    __ss6HasherV8_combineyys6UInt64VF((long)(int)lVar7);
  }
  bVar2 = *(byte *)((long)unaff_x20 + 0x25);
  if ((ulong)bVar2 != 3) {
    __ss6HasherV8_combineyySuF(4);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(&UNK_007dfe28 + (ulong)bVar2 * 8));
  }
  bVar2 = *(byte *)((long)unaff_x20 + 0x26);
  if ((ulong)bVar2 != 0x12) {
    __ss6HasherV8_combineyySuF(5);
    __ss6HasherV8_combineyySuF((ulong)bVar2 + 1);
  }
  lVar7 = unaff_x20[6];
  if (lVar7 != 0) {
    lVar8 = unaff_x20[5];
    __ss6HasherV8_combineyySuF(6);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar8,lVar7);
  }
  lVar7 = unaff_x20[10];
  if (lVar7 != 0) {
    lVar8 = unaff_x20[9];
    __ss6HasherV8_combineyySuF(7);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar8,lVar7);
  }
  lVar7 = unaff_x20[0x10];
  if (lVar7 != 0) {
    lVar8 = unaff_x20[0xe];
    uVar1 = unaff_x20[0xf];
    lVar9 = unaff_x20[0x11];
    __ss6HasherV8_combineyySuF(8);
    uStack_78 = param_1[5];
    uStack_80 = param_1[4];
    uStack_68 = param_1[7];
    uStack_70 = param_1[6];
    uStack_60 = param_1[8];
    uStack_98 = param_1[1];
    uStack_a0 = *param_1;
    uStack_88 = param_1[3];
    uStack_90 = param_1[2];
    func_0x00023304(lVar8,uVar1);
    _swift_bridgeObjectRetain(lVar7);
    _swift_retain(lVar9);
    FUN_00174228();
    if (unaff_x21 == 0) {
      uVar3 = (uint)(uVar1 >> 0x20);
      uVar4 = uVar3 >> 0x1e;
      if (uVar3 >> 0x1e < 2) {
        if (uVar4 == 0) {
          if ((uVar1 & 0xff000000000000) == 0) goto LAB_00169834;
        }
        else {
          lVar5 = (long)(int)lVar8;
          lVar6 = lVar8 >> 0x20;
LAB_0016995c:
          if (lVar5 == lVar6) goto LAB_00169834;
        }
        __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_a0,lVar8,uVar1);
      }
      else if (uVar4 == 2) {
        lVar5 = *(long *)(lVar8 + 0x10);
        lVar6 = *(long *)(lVar8 + 0x18);
        goto LAB_0016995c;
      }
    }
    else {
      _swift_errorRelease();
    }
LAB_00169834:
    func_0x00186ac4(lVar8,uVar1,lVar7,lVar9);
    param_1[5] = uStack_78;
    param_1[4] = uStack_80;
    param_1[7] = uStack_68;
    param_1[6] = uStack_70;
    param_1[8] = uStack_60;
    param_1[1] = uStack_98;
    *param_1 = uStack_a0;
    param_1[3] = uStack_88;
    param_1[2] = uStack_90;
  }
  if (*(char *)((long)unaff_x20 + 0x5c) != '\x01') {
    lVar7 = unaff_x20[0xb];
    __ss6HasherV8_combineyySuF(9);
    __ss6HasherV8_combineyys6UInt64VF((long)(int)lVar7);
  }
  lVar7 = unaff_x20[0xd];
  if (lVar7 != 0) {
    lVar8 = unaff_x20[0xc];
    __ss6HasherV8_combineyySuF(10);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar8,lVar7);
  }
  bVar2 = *(byte *)(unaff_x20 + 0x12);
  if (bVar2 != 2) {
    __ss6HasherV8_combineyySuF(0x11);
    __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
  }
  lVar7 = *unaff_x20;
  uVar3 = (uint)((ulong)unaff_x20[1] >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 == 0) {
      if ((unaff_x20[1] & 0xff000000000000U) == 0) {
        return;
      }
      goto LAB_00169900;
    }
    lVar8 = (long)(int)lVar7;
    lVar7 = lVar7 >> 0x20;
  }
  else {
    if (uVar4 != 2) {
      return;
    }
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar7 = *(long *)(lVar7 + 0x18);
  }
  if (lVar8 == lVar7) {
    return;
  }
LAB_00169900:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 00169978; end: 00169b6f;  */

void FUN_00169978(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  char cStack_41;
  
  uVar1 = param_1;
  if (unaff_x20[3] != 0) {
    uVar1 = unaff_x20[2];
    (**(code **)(param_3 + 0x70))(uVar1,unaff_x20[3],1,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    if (unaff_x20[8] != 0) {
      uVar1 = unaff_x20[7];
      (**(code **)(param_3 + 0x70))(uVar1,unaff_x20[8],2,param_2,param_3);
    }
    if (*(char *)((long)unaff_x20 + 0x24) != '\x01') {
      uVar1 = (ulong)*(uint *)(unaff_x20 + 4);
      (**(code **)(param_3 + 0x18))(uVar1,3,param_2,param_3);
    }
    if (*(char *)((long)unaff_x20 + 0x25) != '\x03') {
      pcVar2 = *(code **)(param_3 + 0x80);
      cStack_41 = *(char *)((long)unaff_x20 + 0x25);
      func_0x00192570();
      (*pcVar2)(&cStack_41,4,&UNK_009b1dc8,uVar1,param_2,param_3);
    }
    FUN_00169b70();
    if (unaff_x20[6] != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[5],unaff_x20[6],6,param_2,param_3);
    }
    if (unaff_x20[10] != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[9],unaff_x20[10],7,param_2,param_3);
    }
    FUN_00169be4();
    if (*(char *)((long)unaff_x20 + 0x5c) != '\x01') {
      (**(code **)(param_3 + 0x18))(*(undefined4 *)(unaff_x20 + 0xb),9,param_2,param_3);
    }
    if (unaff_x20[0xd] != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[0xc],unaff_x20[0xd],10,param_2,param_3);
    }
    if (*(byte *)(unaff_x20 + 0x12) != 2) {
      (**(code **)(param_3 + 0x68))(*(byte *)(unaff_x20 + 0x12) & 1,0x11,param_2,param_3);
    }
    FUN_0013ad2c(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 00169b70; end: 00169be3;  */

void FUN_00169b70(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  char cStack_31;
  
  cStack_31 = *(char *)(param_1 + 0x26);
  if (cStack_31 != '\x12') {
    pcVar1 = *(code **)(param_4 + 0x80);
    func_0x00192530();
    (*pcVar1)(&cStack_31,5,&UNK_009b1d38,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 00169be4; end: 00169c67;  */

void FUN_00169be4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lStack_50 = *(long *)(param_1 + 0x80);
  if (lStack_50 != 0) {
    uStack_48 = *(undefined8 *)(param_1 + 0x88);
    uStack_58 = *(undefined8 *)(param_1 + 0x78);
    uStack_60 = *(undefined8 *)(param_1 + 0x70);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_00187f6c();
    (*pcVar1)(&uStack_60,8,&UNK_009b2328,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 00169c68; end: 00169c6b;  */

uint FUN_00169c68(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_c0 [32];
  ulong uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  lVar5 = param_1[3];
  lVar3 = param_2[3];
  if (lVar5 == 0) {
    if (lVar3 == 0) {
LAB_00184b1c:
      if (*(char *)((long)param_1 + 0x24) == '\x01') {
        if (*(char *)((long)param_2 + 0x24) == '\x01') {
LAB_00184b4c:
          if (*(char *)((long)param_1 + 0x25) == '\x03') {
            if (*(char *)((long)param_2 + 0x25) == '\x03') {
LAB_00184b70:
              if (*(char *)((long)param_1 + 0x26) == '\x12') {
                if (*(char *)((long)param_2 + 0x26) == '\x12') {
LAB_00184b94:
                  lVar5 = param_1[6];
                  lVar3 = param_2[6];
                  if (lVar5 == 0) {
                    if (lVar3 == 0) {
LAB_00184bec:
                      lVar5 = param_1[8];
                      lVar3 = param_2[8];
                      if (lVar5 == 0) {
                        if (lVar3 == 0) {
LAB_00184c44:
                          lVar5 = param_1[10];
                          lVar3 = param_2[10];
                          if (lVar5 == 0) {
                            if (lVar3 == 0) {
LAB_00184c9c:
                              if (*(char *)((long)param_1 + 0x5c) == '\x01') {
                                if (*(char *)((long)param_2 + 0x5c) != '\x01') goto LAB_00184ecc;
                              }
                              else {
                                uVar4 = 0;
                                if ((*(char *)((long)param_2 + 0x5c) == '\x01') ||
                                   (*(int *)(param_1 + 0xb) != *(int *)(param_2 + 0xb)))
                                goto LAB_00184ed0;
                              }
                              lVar5 = param_1[0xd];
                              lVar3 = param_2[0xd];
                              if (lVar5 == 0) {
                                if (lVar3 == 0) {
LAB_00184d2c:
                                  uVar8 = param_1[0xf];
                                  uVar7 = param_1[0xe];
                                  uVar12 = param_1[0x11];
                                  uVar10 = param_1[0x10];
                                  uVar9 = param_2[0xf];
                                  uVar6 = param_2[0xe];
                                  uVar13 = param_2[0x11];
                                  uVar11 = param_2[0x10];
                                  uStack_a0 = uVar6;
                                  uStack_98 = uVar9;
                                  uStack_90 = uVar11;
                                  uStack_88 = uVar13;
                                  uStack_80 = uVar7;
                                  uStack_78 = uVar8;
                                  uStack_70 = uVar10;
                                  uStack_68 = uVar12;
                                  if (uVar10 == 0) {
                                    if (uVar11 != 0) goto LAB_00184da0;
                                    func_0x00187028(&uStack_80,auStack_c0,0xaf0818,&UNK_007daf98);
                                    func_0x00187028(&uStack_a0,auStack_c0,0xaf0818,&UNK_007daf98);
                                    func_0x00186ac4(uVar7,uVar8,0,uVar12);
LAB_00184f44:
                                    bVar1 = *(byte *)(param_2 + 0x12);
                                    if (*(byte *)(param_1 + 0x12) == 2) {
                                      if (bVar1 != 2) goto LAB_00184ecc;
                                    }
                                    else {
                                      uVar4 = 0;
                                      if ((bVar1 == 2) ||
                                         (((*(byte *)(param_1 + 0x12) ^ bVar1) & 1) != 0))
                                      goto LAB_00184ed0;
                                    }
                                    uVar9 = *param_1;
                                    FUN_00038814(uVar9,param_1[1],*param_2,param_2[1]);
                                    uVar4 = (uint)uVar9;
                                    goto LAB_00184ed0;
                                  }
                                  if (uVar11 == 0) {
LAB_00184da0:
                                    func_0x00187028(&uStack_80,auStack_c0,0xaf0818,&UNK_007daf98);
                                    func_0x00187028(&uStack_a0,auStack_c0,0xaf0818,&UNK_007daf98);
                                    func_0x00186ac4(uVar7,uVar8,uVar10,uVar12);
                                  }
                                  else {
                                    if (uVar12 == uVar13) {
                                      func_0x00187028(&uStack_80,auStack_c0,0xaf0818,&UNK_007daf98);
                                      func_0x00187028(&uStack_a0,auStack_c0,0xaf0818,&UNK_007daf98);
LAB_00184e4c:
                                      uVar2 = uVar7;
                                      FUN_00038814(uVar7,uVar8,uVar6,uVar9);
                                      if ((uVar2 & 1) != 0) {
                                        uVar2 = uVar10;
                                        FUN_000e17c0(uVar10,uVar11);
                                        func_0x00186ac4(uVar6,uVar9,uVar11,uVar13);
                                        func_0x00186ac4(uVar7,uVar8,uVar10,uVar12);
                                        if ((uVar2 & 1) == 0) goto LAB_00184ecc;
                                        goto LAB_00184f44;
                                      }
                                    }
                                    else {
                                      func_0x00187028(&uStack_80,auStack_c0,0xaf0818,&UNK_007daf98);
                                      func_0x00187028(&uStack_a0,auStack_c0,0xaf0818,&UNK_007daf98);
                                      _swift_retain(uVar12);
                                      _swift_retain(uVar13);
                                      uVar2 = uVar12;
                                      func_0x0017514c(uVar12,uVar13);
                                      _swift_release(uVar13);
                                      _swift_release(uVar12);
                                      if ((uVar2 & 1) != 0) goto LAB_00184e4c;
                                    }
                                    func_0x00186ac4(uVar6,uVar9,uVar11,uVar13);
                                    uVar6 = uVar7;
                                    uVar9 = uVar8;
                                    uVar11 = uVar10;
                                    uVar13 = uVar12;
                                  }
                                  func_0x00186ac4(uVar6,uVar9,uVar11,uVar13);
                                }
                              }
                              else if (lVar3 != 0) {
                                uVar6 = param_1[0xc];
                                if (((uVar6 == param_2[0xc]) && (lVar5 == lVar3)) ||
                                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                              (uVar6,lVar5,param_2[0xc],lVar3,0), (uVar6 & 1) != 0))
                                goto LAB_00184d2c;
                              }
                            }
                          }
                          else if (lVar3 != 0) {
                            uVar6 = param_1[9];
                            if (((uVar6 == param_2[9]) && (lVar5 == lVar3)) ||
                               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                          (uVar6,lVar5,param_2[9],lVar3,0), (uVar6 & 1) != 0))
                            goto LAB_00184c9c;
                          }
                        }
                      }
                      else if (lVar3 != 0) {
                        uVar6 = param_1[7];
                        if (((uVar6 == param_2[7]) && (lVar5 == lVar3)) ||
                           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                      (uVar6,lVar5,param_2[7],lVar3,0), (uVar6 & 1) != 0))
                        goto LAB_00184c44;
                      }
                    }
                  }
                  else if (lVar3 != 0) {
                    uVar6 = param_1[5];
                    if (((uVar6 == param_2[5]) && (lVar5 == lVar3)) ||
                       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (uVar6,lVar5,param_2[5],lVar3,0), (uVar6 & 1) != 0))
                    goto LAB_00184bec;
                  }
                }
              }
              else if (*(char *)((long)param_1 + 0x26) == *(char *)((long)param_2 + 0x26))
              goto LAB_00184b94;
            }
          }
          else if (*(char *)((long)param_1 + 0x25) == *(char *)((long)param_2 + 0x25))
          goto LAB_00184b70;
        }
      }
      else if (*(char *)((long)param_2 + 0x24) != '\x01' &&
               *(int *)(param_1 + 4) == *(int *)(param_2 + 4)) goto LAB_00184b4c;
    }
  }
  else if (lVar3 != 0) {
    uVar6 = param_1[2];
    if ((uVar6 == param_2[2] && lVar5 == lVar3) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar6,lVar5,param_2[2],lVar3,0), (uVar6 & 1) != 0)) goto LAB_00184b1c;
  }
LAB_00184ecc:
  uVar4 = 0;
LAB_00184ed0:
  return uVar4 & 1;
}



/* Entry: 00169c6c; end: 00169cfb;  */

/* WARNING: Removing unreachable block (ram,0x00169cbc) */

void FUN_00169c6c(void)

{
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_80,0);
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_90 = uStack_40;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  FUN_001696a0(&uStack_d0);
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  uStack_40 = uStack_90;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00169cfc; end: 00169d6f;  */

void FUN_00169cfc(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined2 *)((long)param_1 + 0x24) = 0x301;
  *(undefined1 *)((long)param_1 + 0x26) = 0x12;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((long)param_1 + 0x5c) = 1;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x12) = 2;
  return;
}



/* Entry: 00169d70; end: 00169d9f;  */

undefined1  [16] FUN_00169d70(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00023304(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 00169da0; end: 00169dd3;  */

void FUN_00169da0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_00023358(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 00169dd4; end: 00169de7;  */

undefined8 FUN_00169dd4(void)

{
  return 0x169de4;
}



/* Entry: 00169de8; end: 00169dfb;  */

void FUN_00169de8(void)

{
  FUN_0016951c();
  return;
}



/* Entry: 00169dfc; end: 00169e53;  */

void FUN_00169dfc(void)

{
  FUN_00169978();
  return;
}



/* Entry: 00169e54; end: 00169ef3;  */

void FUN_00169e54(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0de0 != -1) {
    _swift_once(0xaf0de0,FUN_00169198);
  }
  uVar5 = uRam0000000000b64de8;
  uVar4 = uRam0000000000b64de0;
  uVar3 = uRam0000000000b64dd8;
  uVar2 = uRam0000000000b64dd0;
  uVar1 = uRam0000000000b64dc8;
  *param_1 = uRam0000000000b64dc0;
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



/* Entry: 00169ef4; end: 00169f2f;  */

void FUN_00169ef4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2278;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2278,&UNK_007dec58);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 00169f30; end: 0016a15f;  */

/* WARNING: Removing unreachable block (ram,0x00169fb4) */

void FUN_00169f30(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  undefined1 uStack_40;
  
  uStack_68 = unaff_x20[0xd];
  uStack_70 = unaff_x20[0xc];
  uStack_58 = unaff_x20[0xf];
  uStack_60 = unaff_x20[0xe];
  uStack_48 = unaff_x20[0x11];
  uStack_50 = unaff_x20[0x10];
  uStack_40 = *(undefined1 *)(unaff_x20 + 0x12);
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
  __ss6HasherV5_seedABSi_tcfC(&uStack_120,0);
  uStack_148 = uStack_f8;
  uStack_150 = uStack_100;
  uStack_138 = uStack_e8;
  uStack_140 = uStack_f0;
  uStack_130 = uStack_e0;
  uStack_168 = uStack_118;
  uStack_170 = uStack_120;
  uStack_158 = uStack_108;
  uStack_160 = uStack_110;
  FUN_001696a0(&uStack_170);
  uStack_e8 = uStack_138;
  uStack_f0 = uStack_140;
  uStack_e0 = uStack_130;
  uStack_108 = uStack_158;
  uStack_110 = uStack_160;
  uStack_f8 = uStack_148;
  uStack_100 = uStack_150;
  uStack_118 = uStack_168;
  uStack_120 = uStack_170;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0016a160; end: 0016a1ef;  */

uint FUN_0016a160(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  undefined1 uStack_d0;
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
  undefined1 uStack_30;
  
  uVar1 = 0;
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_d8 = param_1[0x11];
  uStack_e0 = param_1[0x10];
  uStack_d0 = *(undefined1 *)(param_1 + 0x12);
  uStack_138 = param_1[5];
  uStack_140 = param_1[4];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_118 = param_1[9];
  uStack_120 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_158 = param_1[1];
  uStack_160 = *param_1;
  uStack_148 = param_1[3];
  uStack_150 = param_1[2];
  uStack_58 = param_2[0xd];
  uStack_60 = param_2[0xc];
  uStack_48 = param_2[0xf];
  uStack_50 = param_2[0xe];
  uStack_38 = param_2[0x11];
  uStack_40 = param_2[0x10];
  uStack_30 = *(undefined1 *)(param_2 + 0x12);
  uStack_98 = param_2[5];
  uStack_a0 = param_2[4];
  uStack_88 = param_2[7];
  uStack_90 = param_2[6];
  uStack_78 = param_2[9];
  uStack_80 = param_2[8];
  uStack_68 = param_2[0xb];
  uStack_70 = param_2[10];
  uStack_b8 = param_2[1];
  uStack_c0 = *param_2;
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  FUN_00169c68(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 0016a1f0; end: 0016a2af;  */

void FUN_0016a1f0(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007df970,0xe9,&uStack_48,&lStack_40);
  puRam0000000000b64df8 = puStack_38;
  lRam0000000000b64df0 = lStack_40;
  puRam0000000000b64e08 = puStack_28;
  puRam0000000000b64e00 = puStack_30;
  puRam0000000000b64e18 = puStack_18;
  puRam0000000000b64e10 = puStack_20;
  return;
}



/* Entry: 0016a2b0; end: 0016a3ef;  */

void FUN_0016a2b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0de8 != -1) {
    _swift_once(0xaf0de8,FUN_0016a1f0);
  }
  uVar5 = uRam0000000000b64e18;
  uVar4 = uRam0000000000b64e10;
  uVar3 = uRam0000000000b64e08;
  uVar2 = uRam0000000000b64e00;
  uVar1 = uRam0000000000b64df8;
  *param_1 = uRam0000000000b64df0;
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



/* Entry: 0016a3f0; end: 0016a4af;  */

void FUN_0016a3f0(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007df930,0x31,&uStack_48,&lStack_40);
  puRam0000000000b64e28 = puStack_38;
  lRam0000000000b64e20 = lStack_40;
  puRam0000000000b64e38 = puStack_28;
  puRam0000000000b64e30 = puStack_30;
  puRam0000000000b64e48 = puStack_18;
  puRam0000000000b64e40 = puStack_20;
  return;
}



/* Entry: 0016a4b0; end: 0016a5ef;  */

void FUN_0016a4b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0df0 != -1) {
    _swift_once(0xaf0df0,FUN_0016a3f0);
  }
  uVar5 = uRam0000000000b64e48;
  uVar4 = uRam0000000000b64e40;
  uVar3 = uRam0000000000b64e38;
  uVar2 = uRam0000000000b64e30;
  uVar1 = uRam0000000000b64e28;
  *param_1 = uRam0000000000b64e20;
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



/* Entry: 0016a5f0; end: 0016a617;  */

undefined * FUN_0016a5f0(void)

{
  return &UNK_009afb50;
}



/* Entry: 0016a618; end: 0016a6d7;  */

void FUN_0016a618(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007df910,0x10,&uStack_48,&lStack_40);
  puRam0000000000b64e58 = puStack_38;
  lRam0000000000b64e50 = lStack_40;
  puRam0000000000b64e68 = puStack_28;
  puRam0000000000b64e60 = puStack_30;
  puRam0000000000b64e78 = puStack_18;
  puRam0000000000b64e70 = puStack_20;
  return;
}



/* Entry: 0016a6d8; end: 0016a777;  */

void FUN_0016a6d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0df8 != -1) {
    _swift_once(0xaf0df8,FUN_0016a618);
  }
  uVar5 = uRam0000000000b64e78;
  uVar4 = uRam0000000000b64e70;
  uVar3 = uRam0000000000b64e68;
  uVar2 = uRam0000000000b64e60;
  uVar1 = uRam0000000000b64e58;
  *param_1 = uRam0000000000b64e50;
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



/* Entry: 0016a778; end: 0016a8a7;  */

undefined8 FUN_0016a778(void)

{
  undefined8 uVar1;
  long unaff_x20;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar5 = *(ulong *)(unaff_x20 + 0x50);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(ulong *)(unaff_x20 + 0x20);
  uVar8 = *(ulong *)(unaff_x20 + 0x38);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  if (uVar2 == 0) {
LAB_0016a868:
    uVar1 = 1;
  }
  else {
    uStack_90 = uVar2;
    uStack_88 = uVar4;
    uStack_80 = uVar6;
    uStack_78 = uVar8;
    uStack_70 = uVar1;
    uStack_68 = uVar3;
    uStack_60 = uVar5;
    uStack_58 = uVar7;
    _swift_bridgeObjectRetain(uVar2);
    func_0x00023304(uVar4,uVar6);
    _swift_bridgeObjectRetain(uVar8);
    func_0x001869f8(uVar1,uVar3,uVar5,uVar7);
    FUN_000e1a94();
    if ((uVar8 & 1) == 0) {
LAB_0016a870:
      func_0x00191ff4(&uStack_90,0xaefe58,&UNK_007d9c30);
    }
    else {
      if (uVar5 != 0) {
        func_0x00023304(uVar1,uVar3);
        uVar8 = uVar5;
        _swift_bridgeObjectRetain();
        FUN_000e1a94();
        FUN_00116294(uVar1,uVar3,uVar5,uVar7);
        if ((uVar8 & 1) == 0) goto LAB_0016a870;
      }
      func_0x0014be00();
      uVar8 = uVar2;
      FUN_000f846c();
      func_0x00191ff4(&uStack_90,0xaefe58,&UNK_007d9c30);
      _swift_bridgeObjectRelease(uVar2);
      if ((uVar8 & 1) != 0) goto LAB_0016a868;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 0016a8a8; end: 0016a947;  */

uint FUN_0016a8a8(void)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  
  uVar2 = unaff_x20[3];
  FUN_000e1a94();
  if ((uVar2 & 1) == 0) {
LAB_0016a930:
    uVar1 = 0;
  }
  else {
    uVar2 = unaff_x20[6];
    if (uVar2 != 0) {
      uVar6 = unaff_x20[7];
      uVar5 = unaff_x20[4];
      uVar4 = unaff_x20[5];
      func_0x00023304(uVar5,uVar4);
      uVar3 = uVar2;
      _swift_bridgeObjectRetain();
      FUN_000e1a94();
      FUN_00116294(uVar5,uVar4,uVar2,uVar6);
      if ((uVar3 & 1) == 0) goto LAB_0016a930;
    }
    uVar4 = *unaff_x20;
    func_0x0014be00(uVar4);
    uVar5 = uVar4;
    FUN_000f8814();
    _swift_bridgeObjectRelease(uVar4);
    uVar1 = (uint)uVar5 & 1;
  }
  return uVar1;
}



/* Entry: 0016a948; end: 0016aa1b;  */

/* WARNING: Removing unreachable block (ram,0x0016aa18) */

void FUN_0016a948(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        (**(code **)(param_3 + 0x158))(unaff_x20 + 0x10,param_2,param_3);
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x198);
        FUN_00187fd0();
        (*pcVar4)(unaff_x20 + 0x20,&UNK_009b2708,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 0016aa1c; end: 0016aa9b;  */

void FUN_0016aa1c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  if (unaff_x20[3] != 0) {
    (**(code **)(param_3 + 0x70))(unaff_x20[2],unaff_x20[3],1,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    FUN_0016aa9c();
    FUN_0013ad2c(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 0016aa9c; end: 0016ab2f;  */

void FUN_0016aa9c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_80 = *(long *)(param_1 + 0x20);
  if (lStack_80 != 0) {
    uStack_70 = *(undefined8 *)(param_1 + 0x30);
    uStack_78 = *(undefined8 *)(param_1 + 0x28);
    uStack_60 = *(undefined8 *)(param_1 + 0x40);
    uStack_68 = *(undefined8 *)(param_1 + 0x38);
    uStack_50 = *(undefined8 *)(param_1 + 0x50);
    uStack_58 = *(undefined8 *)(param_1 + 0x48);
    uStack_48 = *(undefined8 *)(param_1 + 0x58);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_00187fd0();
    (*pcVar1)(&lStack_80,2,&UNK_009b2708,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 0016ab30; end: 0016ab33;  */

uint FUN_0016ab30(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_280 [64];
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  
  lVar5 = param_2[3];
  if (param_1[3] == 0) {
    if (lVar5 == 0) goto LAB_0018345c;
  }
  else if ((lVar5 != 0) &&
          ((uVar2 = param_1[2], uVar2 == param_2[2] && param_1[3] == lVar5 ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar2 & 1) != 0)))) {
LAB_0018345c:
    uStack_b8 = param_1[5];
    uStack_c0 = param_1[4];
    uStack_a8 = param_1[7];
    uStack_b0 = param_1[6];
    uStack_98 = param_1[9];
    uStack_a0 = param_1[8];
    uStack_88 = param_1[0xb];
    uStack_90 = param_1[10];
    uStack_178 = param_1[5];
    lStack_180 = param_1[4];
    uStack_168 = param_1[7];
    uStack_170 = param_1[6];
    uStack_f8 = param_2[5];
    uStack_100 = param_2[4];
    uStack_e8 = param_2[7];
    uStack_f0 = param_2[6];
    uStack_d8 = param_2[9];
    uStack_e0 = param_2[8];
    uStack_c8 = param_2[0xb];
    uStack_d0 = param_2[10];
    uStack_1b8 = param_2[5];
    lStack_1c0 = param_2[4];
    uStack_1a8 = param_2[7];
    uStack_1b0 = param_2[6];
    uStack_158 = param_1[9];
    uStack_160 = param_1[8];
    uStack_148 = param_1[0xb];
    uStack_150 = param_1[10];
    uStack_198 = param_2[9];
    uStack_1a0 = param_2[8];
    uStack_188 = param_2[0xb];
    uStack_190 = param_2[10];
    lStack_140 = lStack_1c0;
    uStack_138 = uStack_1b8;
    uStack_130 = uStack_1b0;
    uStack_128 = uStack_1a8;
    uStack_120 = uStack_1a0;
    uStack_118 = uStack_198;
    uStack_110 = uStack_190;
    uStack_108 = uStack_188;
    if (lStack_180 == 0) {
      if (lStack_1c0 == 0) {
        uStack_1f8 = param_1[5];
        lStack_200 = param_1[4];
        uStack_1e8 = param_1[7];
        uStack_1f0 = param_1[6];
        uStack_1d8 = param_1[9];
        uStack_1e0 = param_1[8];
        uStack_1c8 = param_1[0xb];
        uStack_1d0 = param_1[10];
        func_0x00187028(&uStack_c0,&uStack_80,0xaefe58,&UNK_007d9c30);
        func_0x00187028(&uStack_100,&uStack_80,0xaefe58,&UNK_007d9c30);
        func_0x00191ff4(&lStack_200,0xaefe58,&UNK_007d9c30);
LAB_0018361c:
        uVar4 = *param_1;
        FUN_00038814(uVar4,param_1[1],*param_2,param_2[1]);
        uVar1 = (uint)uVar4;
        goto LAB_00183628;
      }
    }
    else if (lStack_1c0 != 0) {
      uStack_238 = param_2[5];
      lStack_240 = param_2[4];
      uStack_228 = param_2[7];
      uStack_230 = param_2[6];
      uStack_218 = param_2[9];
      uStack_220 = param_2[8];
      uStack_208 = param_2[0xb];
      uStack_210 = param_2[10];
      uStack_78 = param_1[5];
      uStack_80 = param_1[4];
      uStack_68 = param_1[7];
      uStack_70 = param_1[6];
      uStack_58 = param_1[9];
      uStack_60 = param_1[8];
      uStack_48 = param_1[0xb];
      uStack_50 = param_1[10];
      lStack_200 = lStack_240;
      uStack_1f8 = uStack_238;
      uStack_1f0 = uStack_230;
      uStack_1e8 = uStack_228;
      uStack_1e0 = uStack_220;
      uStack_1d8 = uStack_218;
      uStack_1d0 = uStack_210;
      uStack_1c8 = uStack_208;
      func_0x00187028(&uStack_c0,auStack_280,0xaefe58,&UNK_007d9c30);
      func_0x00187028(&uStack_100,auStack_280,0xaefe58,&UNK_007d9c30);
      puVar3 = &uStack_80;
      func_0x00185ce0(puVar3,&lStack_200);
      func_0x00191ff4(&lStack_240,0xaefe58,&UNK_007d9c30);
      func_0x00191ff4(&lStack_180,0xaefe58,&UNK_007d9c30);
      if (((ulong)puVar3 & 1) != 0) goto LAB_0018361c;
      goto LAB_00183540;
    }
    lStack_200 = lStack_180;
    uStack_1f8 = uStack_178;
    uStack_1f0 = uStack_170;
    uStack_1e8 = uStack_168;
    uStack_1e0 = uStack_160;
    uStack_1d8 = uStack_158;
    uStack_1d0 = uStack_150;
    uStack_1c8 = uStack_148;
    func_0x00187028(&uStack_c0,&uStack_80,0xaefe58,&UNK_007d9c30);
    func_0x00187028(&uStack_100,&uStack_80,0xaefe58,&UNK_007d9c30);
    func_0x00191ff4(&lStack_200,0xaf08a0,&UNK_007dafb8);
    uVar1 = 0;
    goto LAB_00183628;
  }
LAB_00183540:
  uVar1 = 0;
LAB_00183628:
  return uVar1 & 1;
}



/* Entry: 0016ab34; end: 0016ab6f;  */

void FUN_0016ab34(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_0014d6d4(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0016ab70; end: 0016abab;  */

void FUN_0016ab70(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  return;
}



/* Entry: 0016abac; end: 0016abdb;  */

undefined1  [16] FUN_0016abac(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00023304(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 0016abdc; end: 0016ac0f;  */

void FUN_0016abdc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_00023358(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 0016ac10; end: 0016ac23;  */

undefined8 FUN_0016ac10(void)

{
  return 0x16ac20;
}



/* Entry: 0016ac24; end: 0016ac37;  */

void FUN_0016ac24(void)

{
  FUN_0016a948();
  return;
}



/* Entry: 0016ac38; end: 0016ac77;  */

void FUN_0016ac38(void)

{
  FUN_0016aa1c();
  return;
}



/* Entry: 0016ac78; end: 0016ad17;  */

void FUN_0016ac78(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0df8 != -1) {
    _swift_once(0xaf0df8,FUN_0016a618);
  }
  uVar5 = uRam0000000000b64e78;
  uVar4 = uRam0000000000b64e70;
  uVar3 = uRam0000000000b64e68;
  uVar2 = uRam0000000000b64e60;
  uVar1 = uRam0000000000b64e58;
  *param_1 = uRam0000000000b64e50;
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



/* Entry: 0016ad18; end: 0016ad53;  */

void FUN_0016ad18(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2270;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2270,&UNK_007dec50);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 0016ad54; end: 0016ae47;  */

void FUN_0016ad54(void)

{
  undefined8 *unaff_x20;
  undefined1 auStack_c8 [72];
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
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_38 = unaff_x20[9];
  uStack_40 = unaff_x20[8];
  uStack_28 = unaff_x20[0xb];
  uStack_30 = unaff_x20[10];
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_c8,0);
  FUN_0014d6d4(auStack_c8);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0016ae48; end: 0016ae9f;  */

uint FUN_0016ae48(undefined8 *param_1,undefined8 *param_2)

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
  FUN_00183404(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 0016aea0; end: 0016aec7;  */

undefined * FUN_0016aea0(void)

{
  return &UNK_009afb60;
}



/* Entry: 0016aec8; end: 0016af87;  */

void FUN_0016aec8(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007df8c0,0x42,&uStack_48,&lStack_40);
  puRam0000000000b64e88 = puStack_38;
  lRam0000000000b64e80 = lStack_40;
  puRam0000000000b64e98 = puStack_28;
  puRam0000000000b64e90 = puStack_30;
  puRam0000000000b64ea8 = puStack_18;
  puRam0000000000b64ea0 = puStack_20;
  return;
}



/* Entry: 0016af88; end: 0016b027;  */

void FUN_0016af88(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0e00 != -1) {
    _swift_once(0xaf0e00,FUN_0016aec8);
  }
  uVar5 = uRam0000000000b64ea8;
  uVar4 = uRam0000000000b64ea0;
  uVar3 = uRam0000000000b64e98;
  uVar2 = uRam0000000000b64e90;
  uVar1 = uRam0000000000b64e88;
  *param_1 = uRam0000000000b64e80;
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


