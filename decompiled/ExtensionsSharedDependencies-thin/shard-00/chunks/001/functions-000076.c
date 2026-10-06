/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0017cac0; end: 0017cb6f;  */

/* WARNING: Removing unreachable block (ram,0x0017cb2c) */

void FUN_0017cac0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(&uStack_90,0);
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_a0 = uStack_50;
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  FUN_0017c428(&uStack_e0,uVar1,uVar3,uVar2,uVar4);
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_50 = uStack_a0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0017cb70; end: 0017cbeb;  */

/* WARNING: Removing unreachable block (ram,0x0017cbb8) */

void FUN_0017cb70(undefined8 *param_1)

{
  undefined8 *unaff_x20;
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
  FUN_0017c428(&uStack_80,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
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



/* Entry: 0017cbec; end: 0017cc97;  */

/* WARNING: Removing unreachable block (ram,0x0017cc54) */

void FUN_0017cbec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(&uStack_90);
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_a0 = uStack_50;
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  FUN_0017c428(&uStack_e0,uVar1,uVar3,uVar2,uVar4);
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_50 = uStack_a0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0017cc98; end: 0017ccc3;  */

bool FUN_0017cc98(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_120 [40];
  long alStack_f8 [3];
  undefined8 uStack_e0;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  uVar14 = *param_1;
  uVar1 = param_1[2];
  uVar13 = param_1[3];
  lVar2 = param_2[2];
  uVar12 = param_2[3];
  uVar9 = (uint)uVar13;
  uVar10 = (uint)uVar12;
  if ((uVar13 & 0xff) == 4) {
    if ((uVar12 & 0xff) != 4) {
      return false;
    }
  }
  else {
    if ((uVar12 & 0xff) == 4) {
      return false;
    }
    if (((uVar10 ^ uVar9) & 0xff) != 0) {
      return false;
    }
  }
  if ((uVar13 & 0xff00) == 0x300) {
    if ((uVar12 & 0xff00) != 0x300) {
      return false;
    }
  }
  else {
    if ((uVar12 & 0xff00) == 0x300) {
      return false;
    }
    if (((uVar9 ^ uVar10) & 0xff00) != 0) {
      return false;
    }
  }
  if ((uVar13 & 0xff0000) == 0x30000) {
    if ((uVar12 & 0xff0000) != 0x30000) {
      return false;
    }
  }
  else {
    if ((uVar12 & 0xff0000) == 0x30000) {
      return false;
    }
    if (((uVar9 ^ uVar10) & 0xff0000) != 0) {
      return false;
    }
  }
  if ((uVar13 & 0xff000000) == 0x3000000) {
    if ((uVar12 & 0xff000000) != 0x3000000) {
      return false;
    }
  }
  else {
    if ((uVar12 & 0xff000000) == 0x3000000) {
      return false;
    }
    if (((uVar9 ^ uVar10) & 0xff000000) != 0) {
      return false;
    }
  }
  if ((uVar13 & 0xff00000000) == 0x300000000) {
    if ((uVar12 & 0xff00000000) != 0x300000000) {
      return false;
    }
  }
  else {
    if ((uVar12 & 0xff00000000) == 0x300000000) {
      return false;
    }
    if (((uVar12 ^ uVar13) & 0xff00000000) != 0) {
      return false;
    }
  }
  if ((uVar13 & 0xff0000000000) == 0x30000000000) {
    if ((uVar12 & 0xff0000000000) != 0x30000000000) {
      return false;
    }
  }
  else {
    if ((uVar12 & 0xff0000000000) == 0x30000000000) {
      return false;
    }
    if (((uVar12 ^ uVar13) & 0xff0000000000) != 0) {
      return false;
    }
  }
  if ((uVar13 & 0xff000000000000) == 0x3000000000000) {
    if ((uVar12 & 0xff000000000000) != 0x3000000000000) {
      return false;
    }
  }
  else {
    if ((uVar12 & 0xff000000000000) == 0x3000000000000) {
      return false;
    }
    if (((uVar12 ^ uVar13) & 0xff000000000000) != 0) {
      return false;
    }
  }
  if (uVar13 >> 0x38 == 5) {
    if (uVar12 >> 0x38 != 5) {
      return false;
    }
  }
  else if (uVar13 >> 0x38 != uVar12 >> 0x38) {
    return false;
  }
  FUN_00038814(uVar14,param_1[1],*param_2,param_2[1]);
  if ((uVar14 & 1) == 0) {
    return false;
  }
  if (*(long *)(uVar1 + 0x10) != *(long *)(lVar2 + 0x10)) {
    return false;
  }
  uVar13 = 1L << ((ulong)*(byte *)(uVar1 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(uVar1 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(uVar1 + 0x40);
  uVar13 = uVar13 + 0x3f >> 6;
  _swift_bridgeObjectRetain();
  lVar11 = 0;
  lVar6 = lVar11;
  if (uVar14 == 0) goto LAB_000e2ea0;
LAB_000e2ecc:
  uVar12 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
  uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
  uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
  uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
  uVar14 = uVar14 - 1 & uVar14;
  uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | lVar6 << 6;
  lStack_d0 = *(long *)(*(long *)(uVar1 + 0x30) + uVar12 * 8);
  FUN_000e1304(*(long *)(uVar1 + 0x38) + uVar12 * 0x28,&uStack_c8);
  lVar11 = lVar6;
  do {
    lVar6 = lStack_d0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    uStack_78 = uStack_a8;
    lStack_80 = lStack_b0;
    uStack_98 = uStack_c8;
    lStack_a0 = lStack_d0;
    bVar5 = lStack_b0 == 0;
    if (lStack_b0 == 0) {
      _swift_release(uVar1);
      return true;
    }
    uVar12 = 0;
    FUN_000e1450(&uStack_98);
    if ((*(long *)(lVar2 + 0x10) == 0) || (FUN_000e1d94(lVar6), (uVar12 & 1) == 0)) {
LAB_000e3018:
      _swift_release(uVar1);
LAB_000e3040:
      FUN_00011670(&lStack_d0);
      return bVar5;
    }
    FUN_000e1304(*(long *)(lVar2 + 0x38) + lVar6 * 0x28,auStack_120);
    FUN_000e1450(auStack_120,alStack_f8);
    plVar7 = &lStack_d0;
    FUN_0001393c(plVar7,uStack_b8);
    _swift_getDynamicType();
    plVar8 = alStack_f8;
    FUN_0001393c(plVar8,uStack_e0);
    _swift_getDynamicType();
    lVar6 = lStack_b0;
    uVar3 = uStack_b8;
    if (plVar7 != plVar8) {
      _swift_release(uVar1);
      FUN_00011670(alStack_f8);
      goto LAB_000e3040;
    }
    FUN_0001393c(&lStack_d0,uStack_b8);
    plVar7 = alStack_f8;
    (**(code **)(lVar6 + 0x20))(plVar7,uVar3,lVar6);
    FUN_00011670(alStack_f8);
    if (((ulong)plVar7 & 1) == 0) goto LAB_000e3018;
    FUN_00011670(&lStack_d0);
    lVar6 = lVar11;
    if (uVar14 != 0) goto LAB_000e2ecc;
LAB_000e2ea0:
    uVar12 = uVar13;
    if ((long)uVar13 <= lVar11 + 1) {
      uVar12 = lVar11 + 1;
    }
    while( true ) {
      lVar6 = lVar11 + 1;
      if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0xe3070);
        (*pcVar4)();
      }
      if ((long)uVar13 <= lVar6) break;
      uVar14 = ((ulong *)(uVar1 + 0x40))[lVar6];
      lVar11 = lVar11 + 1;
      if (uVar14 != 0) goto LAB_000e2ecc;
    }
    uVar14 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    lStack_b0 = 0;
    uStack_c8 = 0;
    lStack_d0 = 0;
    lVar11 = uVar12 - 1;
  } while( true );
}



/* Entry: 0017ccc4; end: 0017cd83;  */

void FUN_0017ccc4(void)

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
  FUN_000de3ec(&UNK_007defb0,0x3f,&uStack_48,&lStack_40);
  puRam0000000000b65348 = puStack_38;
  lRam0000000000b65340 = lStack_40;
  puRam0000000000b65358 = puStack_28;
  puRam0000000000b65350 = puStack_30;
  puRam0000000000b65368 = puStack_18;
  puRam0000000000b65360 = puStack_20;
  return;
}



/* Entry: 0017cd84; end: 0017cec3;  */

void FUN_0017cd84(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0ef0 != -1) {
    _swift_once(0xaf0ef0,FUN_0017ccc4);
  }
  uVar5 = uRam0000000000b65368;
  uVar4 = uRam0000000000b65360;
  uVar3 = uRam0000000000b65358;
  uVar2 = uRam0000000000b65350;
  uVar1 = uRam0000000000b65348;
  *param_1 = uRam0000000000b65340;
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



/* Entry: 0017cec4; end: 0017cf83;  */

void FUN_0017cec4(void)

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
  FUN_000de3ec(&UNK_007def80,0x23,&uStack_48,&lStack_40);
  puRam0000000000b65378 = puStack_38;
  lRam0000000000b65370 = lStack_40;
  puRam0000000000b65388 = puStack_28;
  puRam0000000000b65380 = puStack_30;
  puRam0000000000b65398 = puStack_18;
  puRam0000000000b65390 = puStack_20;
  return;
}



/* Entry: 0017cf84; end: 0017d0c3;  */

void FUN_0017cf84(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0ef8 != -1) {
    _swift_once(0xaf0ef8,FUN_0017cec4);
  }
  uVar5 = uRam0000000000b65398;
  uVar4 = uRam0000000000b65390;
  uVar3 = uRam0000000000b65388;
  uVar2 = uRam0000000000b65380;
  uVar1 = uRam0000000000b65378;
  *param_1 = uRam0000000000b65370;
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



/* Entry: 0017d0c4; end: 0017d183;  */

void FUN_0017d0c4(void)

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
  FUN_000de3ec(&UNK_007def40,0x35,&uStack_48,&lStack_40);
  puRam0000000000b653a8 = puStack_38;
  lRam0000000000b653a0 = lStack_40;
  puRam0000000000b653b8 = puStack_28;
  puRam0000000000b653b0 = puStack_30;
  puRam0000000000b653c8 = puStack_18;
  puRam0000000000b653c0 = puStack_20;
  return;
}



/* Entry: 0017d184; end: 0017d2c3;  */

void FUN_0017d184(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0f00 != -1) {
    _swift_once(0xaf0f00,FUN_0017d0c4);
  }
  uVar5 = uRam0000000000b653c8;
  uVar4 = uRam0000000000b653c0;
  uVar3 = uRam0000000000b653b8;
  uVar2 = uRam0000000000b653b0;
  uVar1 = uRam0000000000b653a8;
  *param_1 = uRam0000000000b653a0;
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



/* Entry: 0017d2c4; end: 0017d383;  */

void FUN_0017d2c4(void)

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
  FUN_000de3ec(&UNK_007def10,0x2a,&uStack_48,&lStack_40);
  puRam0000000000b653d8 = puStack_38;
  lRam0000000000b653d0 = lStack_40;
  puRam0000000000b653e8 = puStack_28;
  puRam0000000000b653e0 = puStack_30;
  puRam0000000000b653f8 = puStack_18;
  puRam0000000000b653f0 = puStack_20;
  return;
}



/* Entry: 0017d384; end: 0017d4c3;  */

void FUN_0017d384(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0f08 != -1) {
    _swift_once(0xaf0f08,FUN_0017d2c4);
  }
  uVar5 = uRam0000000000b653f8;
  uVar4 = uRam0000000000b653f0;
  uVar3 = uRam0000000000b653e8;
  uVar2 = uRam0000000000b653e0;
  uVar1 = uRam0000000000b653d8;
  *param_1 = uRam0000000000b653d0;
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



/* Entry: 0017d4c4; end: 0017d583;  */

void FUN_0017d4c4(void)

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
  FUN_000de3ec(&UNK_007deed0,0x38,&uStack_48,&lStack_40);
  puRam0000000000b65408 = puStack_38;
  lRam0000000000b65400 = lStack_40;
  puRam0000000000b65418 = puStack_28;
  puRam0000000000b65410 = puStack_30;
  puRam0000000000b65428 = puStack_18;
  puRam0000000000b65420 = puStack_20;
  return;
}



/* Entry: 0017d584; end: 0017d6c3;  */

void FUN_0017d584(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0f10 != -1) {
    _swift_once(0xaf0f10,FUN_0017d4c4);
  }
  uVar5 = uRam0000000000b65428;
  uVar4 = uRam0000000000b65420;
  uVar3 = uRam0000000000b65418;
  uVar2 = uRam0000000000b65410;
  uVar1 = uRam0000000000b65408;
  *param_1 = uRam0000000000b65400;
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



/* Entry: 0017d6c4; end: 0017d783;  */

void FUN_0017d6c4(void)

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
  FUN_000de3ec(&UNK_007dee90,0x32,&uStack_48,&lStack_40);
  puRam0000000000b65438 = puStack_38;
  lRam0000000000b65430 = lStack_40;
  puRam0000000000b65448 = puStack_28;
  puRam0000000000b65440 = puStack_30;
  puRam0000000000b65458 = puStack_18;
  puRam0000000000b65450 = puStack_20;
  return;
}



/* Entry: 0017d784; end: 0017d8c3;  */

void FUN_0017d784(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0f18 != -1) {
    _swift_once(0xaf0f18,FUN_0017d6c4);
  }
  uVar5 = uRam0000000000b65458;
  uVar4 = uRam0000000000b65450;
  uVar3 = uRam0000000000b65448;
  uVar2 = uRam0000000000b65440;
  uVar1 = uRam0000000000b65438;
  *param_1 = uRam0000000000b65430;
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



/* Entry: 0017d8c4; end: 0017d983;  */

void FUN_0017d8c4(void)

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
  FUN_000de3ec(&UNK_007dee50,0x39,&uStack_48,&lStack_40);
  puRam0000000000b65468 = puStack_38;
  lRam0000000000b65460 = lStack_40;
  puRam0000000000b65478 = puStack_28;
  puRam0000000000b65470 = puStack_30;
  puRam0000000000b65488 = puStack_18;
  puRam0000000000b65480 = puStack_20;
  return;
}



/* Entry: 0017d984; end: 0017dac3;  */

void FUN_0017d984(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0f20 != -1) {
    _swift_once(0xaf0f20,FUN_0017d8c4);
  }
  uVar5 = uRam0000000000b65488;
  uVar4 = uRam0000000000b65480;
  uVar3 = uRam0000000000b65478;
  uVar2 = uRam0000000000b65470;
  uVar1 = uRam0000000000b65468;
  *param_1 = uRam0000000000b65460;
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



/* Entry: 0017dac4; end: 0017db33;  */

void FUN_0017dac4(void)

{
  __sSS6appendyySSF(0xd000000000000012,0x80000000008b9540);
  uRam0000000000b65490 = 0xd00000000000001a;
  uRam0000000000b65498 = 0x80000000008b9480;
  return;
}



/* Entry: 0017db34; end: 0017db73;  */

undefined8 FUN_0017db34(void)

{
  if (lRam0000000000af0f28 != -1) {
    _swift_once(0xaf0f28,FUN_0017dac4);
  }
  return 0xb65490;
}



/* Entry: 0017db74; end: 0017db93;  */

undefined1  [16] FUN_0017db74(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000000af0f28 != -1) {
    _swift_once(0xaf0f28,FUN_0017dac4);
  }
  auVar1._8_8_ = uRam0000000000b65498;
  auVar1._0_8_ = uRam0000000000b65490;
  _swift_bridgeObjectRetain(uRam0000000000b65498);
  return auVar1;
}



/* Entry: 0017db94; end: 0017dc53;  */

void FUN_0017db94(void)

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
  FUN_000de3ec(&UNK_007dee47,8,&uStack_48,&lStack_40);
  puRam0000000000b654a8 = puStack_38;
  lRam0000000000b654a0 = lStack_40;
  puRam0000000000b654b8 = puStack_28;
  puRam0000000000b654b0 = puStack_30;
  puRam0000000000b654c8 = puStack_18;
  puRam0000000000b654c0 = puStack_20;
  return;
}



/* Entry: 0017dc54; end: 0017dcf3;  */

void FUN_0017dc54(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0f30 != -1) {
    _swift_once(0xaf0f30,FUN_0017db94);
  }
  uVar5 = uRam0000000000b654c8;
  uVar4 = uRam0000000000b654c0;
  uVar3 = uRam0000000000b654b8;
  uVar2 = uRam0000000000b654b0;
  uVar1 = uRam0000000000b654a8;
  *param_1 = uRam0000000000b654a0;
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



/* Entry: 0017dcf4; end: 0017dd3f;  */

void FUN_0017dcf4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long unaff_x21;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_3 + 0x10);
  do {
    lVar1 = param_3;
    (*pcVar2)(param_2);
    if (unaff_x21 != 0) {
      return;
    }
  } while (((uint)lVar1 & 0xff) != 1);
  return;
}



/* Entry: 0017dd40; end: 0017dd53;  */

void FUN_0017dd40(void)

{
  FUN_0013ad2c();
  return;
}



/* Entry: 0017dd54; end: 0017dd57;  */

void FUN_0017dd54(long param_1,byte *param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong *unaff_x20;
  ulong uVar16;
  long lVar17;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar3 = (uint)((ulong)param_2 >> 0x20);
  uVar11 = uVar3 >> 0x1e;
  uVar4 = (uint)(param_4 >> 0x20);
  uVar14 = uVar4 >> 0x1e;
  iVar6 = (int)param_1;
  if ((ulong)param_2 >> 0x3e == 3) {
    uVar13 = 0;
    if ((((param_1 != 0) || (param_2 != (byte *)0xc000000000000000)) || (param_4 >> 0x3e < 3)) ||
       ((uVar13 = 0, param_3 != 0 || (param_4 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar3 >> 0x1e < 2) {
      if (uVar11 == 0) {
        uVar13 = (ulong)param_2 >> 0x30 & 0xff;
      }
      else {
        iVar12 = (int)((ulong)param_1 >> 0x20);
        if (SBORROW4(iVar12,iVar6)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar5)();
        }
        uVar13 = (ulong)(iVar12 - iVar6);
      }
joined_r0x000389b8:
      if (uVar4 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar14 != 2) {
        uVar13 = (ulong)(uVar13 == 0);
        goto LAB_00038af8;
      }
      uVar15 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
      if (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar5)();
      }
LAB_000388d4:
      if (uVar13 != uVar15) {
LAB_0003899c:
        uVar13 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar11 == 2) {
        uVar13 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
        if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar5)();
        }
        goto joined_r0x000389b8;
      }
      uVar13 = 0;
      if (1 < uVar14) goto LAB_00038898;
LAB_000388cc:
      if (uVar14 == 0) {
        uVar15 = param_4 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar12 = (int)((ulong)param_3 >> 0x20);
      if (SBORROW4(iVar12,(int)param_3)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar5)();
      }
      if (uVar13 != (long)(iVar12 - (int)param_3)) goto LAB_0003899c;
    }
    if (0 < (long)uVar13) {
      if (uVar11 < 2) {
        if (uVar11 == 0) {
          abStack_70[0] = (byte)param_1;
          abStack_70[1] = (byte)((ulong)param_1 >> 8);
          abStack_70[2] = (byte)((ulong)param_1 >> 0x10);
          abStack_70[3] = (byte)((ulong)param_1 >> 0x18);
          abStack_70[4] = (byte)((ulong)param_1 >> 0x20);
          abStack_70[5] = (byte)((ulong)param_1 >> 0x28);
          abStack_70[6] = (byte)((ulong)param_1 >> 0x30);
          abStack_70[7] = (byte)((ulong)param_1 >> 0x38);
          abStack_70[8] = (byte)param_2;
          abStack_70[9] = (byte)((ulong)param_2 >> 8);
          abStack_70[10] = (byte)((ulong)param_2 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)param_2 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)param_2 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)param_2 >> 0x28);
          param_2 = abStack_70 + ((ulong)param_2 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar13 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar6;
        lVar7 = (param_1 >> 0x20) - lVar17;
        if (param_1 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar5)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (param_1 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          param_1 = 0;
        }
        else {
          lVar8 = param_1;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,lVar8)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar5)();
          }
          param_1 = (lVar17 - lVar8) + param_1;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (param_1 != 0) {
            if (lVar7 <= lVar8) {
              lVar8 = lVar7;
            }
            pbVar10 = (byte *)(lVar8 + param_1);
            goto LAB_00038aec;
          }
        }
        pbVar10 = (byte *)0x0;
      }
      else {
        if (uVar11 != 2) {
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
          param_2 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(param_1 + 0x10);
        lVar8 = *(long *)(param_1 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar7 = param_1;
        if (param_1 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,lVar7)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar5)();
          }
          param_1 = (lVar17 - lVar7) + param_1;
        }
        lVar2 = lVar8 - lVar17;
        if (SBORROW8(lVar8,lVar17)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar5)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (param_1 == 0) {
          pbVar10 = (byte *)0x0;
        }
        else {
          if (lVar2 <= lVar7) {
            lVar7 = lVar2;
          }
          pbVar10 = (byte *)(lVar7 + param_1);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)param_2 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,param_1,pbVar10,param_3,param_4);
      uVar13 = (ulong)abStack_70[0];
      param_2 = pbVar10;
      goto LAB_00038af8;
    }
  }
  uVar13 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = (long)param_2 - uVar13;
  if (SBORROW8((long)param_2,uVar13)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar5)();
  }
  uVar16 = *unaff_x20;
  uVar15 = uVar16 & 0xffffffffffffff8;
  lVar17 = uVar15 + 0x20 + uVar13 * 8;
  uVar9 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  _swift_arrayDestroy(lVar17,lVar7,uVar9);
  lVar8 = param_3 - lVar7;
  if (SBORROW8(param_3,lVar7)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar5)();
  }
  if (lVar8 != 0) {
    if (uVar16 >> 0x3e == 0) {
      uVar13 = *(ulong *)(uVar15 + 0x10);
      lVar7 = uVar13 - (long)param_2;
    }
    else {
      uVar13 = uVar15;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar13 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar7 = uVar13 - (long)param_2;
    }
    if (SBORROW8(uVar13,(long)param_2)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar5)();
    }
    uVar13 = lVar17 + param_3 * 8;
    uVar1 = uVar15 + 0x20 + (long)param_2 * 8;
    if (uVar13 != uVar1 || uVar1 + lVar7 * 8 <= uVar13) {
      _memmove(uVar13,uVar1,lVar7 << 3);
    }
    if (uVar16 >> 0x3e == 0) {
      uVar13 = *(ulong *)(uVar15 + 0x10);
    }
    else {
      uVar13 = uVar15;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar13 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar13,lVar8)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar5)();
    }
    *(ulong *)(uVar15 + 0x10) = uVar13 + lVar8;
  }
  if (0 < param_3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar5)();
  }
  return;
}



/* Entry: 0017dd58; end: 0017de0f;  */

void FUN_0017dd58(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
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
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_70,0);
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_88 = uStack_38;
  uStack_90 = uStack_40;
  uStack_80 = uStack_30;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uVar1 = (uint)(param_2 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar3 = (long)(int)param_1;
      lVar4 = param_1 >> 0x20;
      goto LAB_0017ddc8;
    }
    if ((param_2 & 0xff000000000000) == 0) goto LAB_0017dde0;
  }
  else {
    if (uVar2 != 2) goto LAB_0017dde0;
    lVar3 = *(long *)(param_1 + 0x10);
    lVar4 = *(long *)(param_1 + 0x18);
LAB_0017ddc8:
    if (lVar3 == lVar4) goto LAB_0017dde0;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_c0,param_1,param_2);
LAB_0017dde0:
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  uStack_38 = uStack_88;
  uStack_40 = uStack_90;
  uStack_30 = uStack_80;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0017de10; end: 0017de3f;  */

void FUN_0017de10(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  return;
}



/* Entry: 0017de40; end: 0017de6f;  */

undefined1  [16] FUN_0017de40(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00023304(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 0017de70; end: 0017dea3;  */

void FUN_0017de70(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_00023358(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 0017dea4; end: 0017deb7;  */

undefined8 FUN_0017dea4(void)

{
  return 0x17deb4;
}



/* Entry: 0017deb8; end: 0017deeb;  */

void FUN_0017deb8(void)

{
  FUN_0017dcf4();
  return;
}



/* Entry: 0017deec; end: 0017df8b;  */

void FUN_0017deec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0f30 != -1) {
    _swift_once(0xaf0f30,FUN_0017db94);
  }
  uVar5 = uRam0000000000b654c8;
  uVar4 = uRam0000000000b654c0;
  uVar3 = uRam0000000000b654b8;
  uVar2 = uRam0000000000b654b0;
  uVar1 = uRam0000000000b654a8;
  *param_1 = uRam0000000000b654a0;
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



/* Entry: 0017df8c; end: 0017dfc7;  */

void FUN_0017df8c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf21d8;
  uStack_18 = param_1;
  func_0x000115a8(0xaf21d8,&UNK_007debb8);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 0017dfc8; end: 0017dfcf;  */

void FUN_0017dfc8(void)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *unaff_x20;
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
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  lVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  __ss6HasherV5_seedABSi_tcfC(&uStack_70,0);
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_88 = uStack_38;
  uStack_90 = uStack_40;
  uStack_80 = uStack_30;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 != 0) {
      lVar5 = (long)(int)lVar1;
      lVar6 = lVar1 >> 0x20;
      goto LAB_0017ddc8;
    }
    if ((uVar2 & 0xff000000000000) == 0) goto LAB_0017dde0;
  }
  else {
    if (uVar4 != 2) goto LAB_0017dde0;
    lVar5 = *(long *)(lVar1 + 0x10);
    lVar6 = *(long *)(lVar1 + 0x18);
LAB_0017ddc8:
    if (lVar5 == lVar6) goto LAB_0017dde0;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_c0,lVar1,uVar2);
LAB_0017dde0:
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  uStack_38 = uStack_88;
  uStack_40 = uStack_90;
  uStack_30 = uStack_80;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0017dfd0; end: 0017dfe7;  */

void FUN_0017dfd0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_0014e1b8(param_1,*unaff_x20,unaff_x20[1]);
  return;
}



/* Entry: 0017dfe8; end: 0017e02b;  */

void FUN_0017dfe8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_0014e1b8(auStack_68,uVar1,uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0017e02c; end: 0017e03f;  */

void FUN_0017e02c(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  ulong *unaff_x20;
  long lVar20;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  lVar10 = *param_1;
  pbVar12 = (byte *)param_1[1];
  lVar14 = *param_2;
  uVar9 = param_2[1];
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar3 = (uint)((ulong)pbVar12 >> 0x20);
  uVar15 = uVar3 >> 0x1e;
  uVar4 = (uint)(uVar9 >> 0x20);
  uVar18 = uVar4 >> 0x1e;
  iVar6 = (int)lVar10;
  if ((ulong)pbVar12 >> 0x3e == 3) {
    uVar17 = 0;
    if ((((lVar10 != 0) || (pbVar12 != (byte *)0xc000000000000000)) || (uVar9 >> 0x3e < 3)) ||
       ((uVar17 = 0, lVar14 != 0 || (uVar9 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar3 >> 0x1e < 2) {
      if (uVar15 == 0) {
        uVar17 = (ulong)pbVar12 >> 0x30 & 0xff;
      }
      else {
        iVar16 = (int)((ulong)lVar10 >> 0x20);
        if (SBORROW4(iVar16,iVar6)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar5)();
        }
        uVar17 = (ulong)(iVar16 - iVar6);
      }
joined_r0x000389b8:
      if (uVar4 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar18 != 2) {
        uVar9 = (ulong)(uVar17 == 0);
        goto LAB_00038af8;
      }
      uVar19 = *(long *)(lVar14 + 0x18) - *(long *)(lVar14 + 0x10);
      if (SBORROW8(*(long *)(lVar14 + 0x18),*(long *)(lVar14 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar5)();
      }
LAB_000388d4:
      if (uVar17 != uVar19) {
LAB_0003899c:
        uVar9 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar15 == 2) {
        uVar17 = *(long *)(lVar10 + 0x18) - *(long *)(lVar10 + 0x10);
        if (SBORROW8(*(long *)(lVar10 + 0x18),*(long *)(lVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar5)();
        }
        goto joined_r0x000389b8;
      }
      uVar17 = 0;
      if (1 < uVar18) goto LAB_00038898;
LAB_000388cc:
      if (uVar18 == 0) {
        uVar19 = uVar9 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar16 = (int)((ulong)lVar14 >> 0x20);
      if (SBORROW4(iVar16,(int)lVar14)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar5)();
      }
      if (uVar17 != (long)(iVar16 - (int)lVar14)) goto LAB_0003899c;
    }
    if (0 < (long)uVar17) {
      if (uVar15 < 2) {
        if (uVar15 == 0) {
          abStack_70[0] = (byte)lVar10;
          abStack_70[1] = (byte)((ulong)lVar10 >> 8);
          abStack_70[2] = (byte)((ulong)lVar10 >> 0x10);
          abStack_70[3] = (byte)((ulong)lVar10 >> 0x18);
          abStack_70[4] = (byte)((ulong)lVar10 >> 0x20);
          abStack_70[5] = (byte)((ulong)lVar10 >> 0x28);
          abStack_70[6] = (byte)((ulong)lVar10 >> 0x30);
          abStack_70[7] = (byte)((ulong)lVar10 >> 0x38);
          abStack_70[8] = (byte)pbVar12;
          abStack_70[9] = (byte)((ulong)pbVar12 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar12 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar12 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar12 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar12 >> 0x28);
          pbVar12 = abStack_70 + ((ulong)pbVar12 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar9 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar20 = (long)iVar6;
        lVar7 = (lVar10 >> 0x20) - lVar20;
        if (lVar10 >> 0x20 < lVar20) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar5)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (lVar10 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          lVar10 = 0;
        }
        else {
          lVar8 = lVar10;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar20,lVar8)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar5)();
          }
          lVar10 = (lVar20 - lVar8) + lVar10;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (lVar10 != 0) {
            if (lVar7 <= lVar8) {
              lVar8 = lVar7;
            }
            pbVar13 = (byte *)(lVar8 + lVar10);
            goto LAB_00038aec;
          }
        }
        pbVar13 = (byte *)0x0;
      }
      else {
        if (uVar15 != 2) {
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
          pbVar12 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar20 = *(long *)(lVar10 + 0x10);
        lVar8 = *(long *)(lVar10 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar7 = lVar10;
        if (lVar10 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar20,lVar7)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar5)();
          }
          lVar10 = (lVar20 - lVar7) + lVar10;
        }
        lVar2 = lVar8 - lVar20;
        if (SBORROW8(lVar8,lVar20)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar5)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (lVar10 == 0) {
          pbVar13 = (byte *)0x0;
        }
        else {
          if (lVar2 <= lVar7) {
            lVar7 = lVar2;
          }
          pbVar13 = (byte *)(lVar7 + lVar10);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar12 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,lVar10,pbVar13,lVar14,uVar9);
      uVar9 = (ulong)abStack_70[0];
      pbVar12 = pbVar13;
      goto LAB_00038af8;
    }
  }
  uVar9 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = (long)pbVar12 - uVar9;
  if (SBORROW8((long)pbVar12,uVar9)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar5)();
  }
  uVar19 = *unaff_x20;
  uVar17 = uVar19 & 0xffffffffffffff8;
  lVar7 = uVar17 + 0x20 + uVar9 * 8;
  uVar11 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  _swift_arrayDestroy(lVar7,lVar10,uVar11);
  lVar20 = lVar14 - lVar10;
  if (SBORROW8(lVar14,lVar10)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar5)();
  }
  if (lVar20 != 0) {
    if (uVar19 >> 0x3e == 0) {
      uVar9 = *(ulong *)(uVar17 + 0x10);
      lVar10 = uVar9 - (long)pbVar12;
    }
    else {
      uVar9 = uVar17;
      if ((uVar19 & 0x8000000000000000) != 0) {
        uVar9 = uVar19;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar10 = uVar9 - (long)pbVar12;
    }
    if (SBORROW8(uVar9,(long)pbVar12)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar5)();
    }
    uVar9 = lVar7 + lVar14 * 8;
    uVar1 = uVar17 + 0x20 + (long)pbVar12 * 8;
    if (uVar9 != uVar1 || uVar1 + lVar10 * 8 <= uVar9) {
      _memmove(uVar9,uVar1,lVar10 << 3);
    }
    if (uVar19 >> 0x3e == 0) {
      uVar9 = *(ulong *)(uVar17 + 0x10);
    }
    else {
      uVar9 = uVar17;
      if ((uVar19 & 0x8000000000000000) != 0) {
        uVar9 = uVar19;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar9,lVar20)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar5)();
    }
    *(ulong *)(uVar17 + 0x10) = uVar9 + lVar20;
  }
  if (0 < lVar14) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar5)();
  }
  return;
}



/* Entry: 0017e040; end: 0017e0ff;  */

void FUN_0017e040(void)

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
  FUN_000de3ec(&UNK_007dedf0,0x56,&uStack_48,&lStack_40);
  puRam0000000000b654d8 = puStack_38;
  lRam0000000000b654d0 = lStack_40;
  puRam0000000000b654e8 = puStack_28;
  puRam0000000000b654e0 = puStack_30;
  puRam0000000000b654f8 = puStack_18;
  puRam0000000000b654f0 = puStack_20;
  return;
}



/* Entry: 0017e100; end: 0017e23f;  */

void FUN_0017e100(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0f38 != -1) {
    _swift_once(0xaf0f38,FUN_0017e040);
  }
  uVar5 = uRam0000000000b654f8;
  uVar4 = uRam0000000000b654f0;
  uVar3 = uRam0000000000b654e8;
  uVar2 = uRam0000000000b654e0;
  uVar1 = uRam0000000000b654d8;
  *param_1 = uRam0000000000b654d0;
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



/* Entry: 0017e240; end: 0017e267;  */

undefined * FUN_0017e240(void)

{
  return &UNK_009afc40;
}



/* Entry: 0017e268; end: 0017e327;  */

void FUN_0017e268(void)

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
  FUN_000de3ec(&UNK_007dedc0,0x2e,&uStack_48,&lStack_40);
  puRam0000000000b65508 = puStack_38;
  lRam0000000000b65500 = lStack_40;
  puRam0000000000b65518 = puStack_28;
  puRam0000000000b65510 = puStack_30;
  puRam0000000000b65528 = puStack_18;
  puRam0000000000b65520 = puStack_20;
  return;
}



/* Entry: 0017e328; end: 0017e3c7;  */

void FUN_0017e328(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0f40 != -1) {
    _swift_once(0xaf0f40,FUN_0017e268);
  }
  uVar5 = uRam0000000000b65528;
  uVar4 = uRam0000000000b65520;
  uVar3 = uRam0000000000b65518;
  uVar2 = uRam0000000000b65510;
  uVar1 = uRam0000000000b65508;
  *param_1 = uRam0000000000b65500;
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



/* Entry: 0017e3c8; end: 0017e40b;  */

uint FUN_0017e3c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x0014c8fc(param_1,&UNK_009b31b8,0x1872d0);
  uVar1 = param_1;
  FUN_000f8814();
  _swift_bridgeObjectRelease(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 0017e40c; end: 0017e50f;  */

void FUN_0017e40c(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 == 5) {
        pcVar4 = *(code **)(param_3 + 0x188);
        FUN_00192034();
LAB_0017e494:
        (*pcVar4)();
      }
      else {
        if (lVar1 == 4) {
          pcVar4 = *(code **)(param_3 + 0x188);
          FUN_00192034();
          goto LAB_0017e494;
        }
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x1a0);
          func_0x001872d0();
          goto LAB_0017e494;
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 0017e510; end: 0017e60f;  */

void FUN_0017e510(undefined8 param_1,long param_2,long param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long unaff_x21;
  
  if ((*(long *)(param_2 + 0x10) != 0) && (FUN_0019fda4(param_2,1), unaff_x21 != 0)) {
    return;
  }
  uVar1 = (uint)param_5 >> 8 & 0xff;
  if (((uint)param_5 & 0xff) != 0xc) {
    __ss6HasherV8_combineyySuF(4);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(&UNK_007dfe58 + (param_5 & 0xff) * 8));
  }
  if (uVar1 != 0xc) {
    __ss6HasherV8_combineyySuF(5);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(&UNK_007dfe58 + (ulong)uVar1 * 8));
  }
  uVar1 = (uint)(param_4 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 == 0) {
      if ((param_4 & 0xff000000000000) == 0) {
        return;
      }
      goto LAB_0017e5e0;
    }
    lVar3 = (long)(int)param_3;
    lVar4 = param_3 >> 0x20;
  }
  else {
    if (uVar2 != 2) {
      return;
    }
    lVar3 = *(long *)(param_3 + 0x10);
    lVar4 = *(long *)(param_3 + 0x18);
  }
  if (lVar3 == lVar4) {
    return;
  }
LAB_0017e5e0:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,param_3,param_4);
  return;
}



/* Entry: 0017e610; end: 0017e743;  */

void FUN_0017e610(undefined1 *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5,undefined8 param_6,long param_7)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long unaff_x21;
  code *pcVar3;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  puVar1 = param_1;
  if (*(long *)(param_2 + 0x10) != 0) {
    pcVar3 = *(code **)(param_7 + 0x118);
    func_0x001872d0();
    (*pcVar3)(param_2,1,&UNK_009b31b8,puVar1,param_6,param_7);
    puVar1 = param_2;
    if (unaff_x21 != 0) {
      return;
    }
  }
  puVar2 = puVar1;
  if ((param_5 & 0xff) != 0xc) {
    uStack_52 = (undefined1)param_5;
    pcVar3 = *(code **)(param_7 + 0x80);
    FUN_00192034();
    puVar2 = &uStack_52;
    (*pcVar3)(puVar2,4,&UNK_009b16f0,puVar1,param_6,param_7);
  }
  if (unaff_x21 == 0) {
    if ((param_5 >> 8 & 0xff) != 0xc) {
      uStack_51 = (undefined1)(param_5 >> 8);
      pcVar3 = *(code **)(param_7 + 0x80);
      FUN_00192034();
      (*pcVar3)(&uStack_51,5,&UNK_009b16f0,puVar2,param_6,param_7);
    }
    FUN_0013ad2c(param_1,param_3,param_4,param_6,param_7);
  }
  return;
}



/* Entry: 0017e744; end: 0017e747;  */

ulong FUN_0017e744(ulong param_1,long param_2,byte *param_3,uint param_4,undefined8 param_5,
                  long param_6,ulong param_7,uint param_8)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *unaff_x20;
  ulong uVar16;
  long lVar17;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  FUN_001491f8(param_1,param_5,FUN_0017fab0);
  if ((param_1 & 1) == 0) {
    return 0;
  }
  if ((param_4 & 0xff) == 0xc) {
    if ((param_8 & 0xff) != 0xc) {
      return 0;
    }
  }
  else {
    if ((param_8 & 0xff) == 0xc) {
      return 0;
    }
    if (((param_8 ^ param_4) & 0xff) != 0) {
      return 0;
    }
  }
  uVar2 = param_4 >> 8 & 0xff;
  uVar3 = param_8 >> 8 & 0xff;
  if (uVar2 == 0xc) {
    if (uVar3 != 0xc) {
      return 0;
    }
  }
  else {
    if (uVar3 == 0xc) {
      return 0;
    }
    if (uVar2 != uVar3) {
      return 0;
    }
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)param_3 >> 0x20);
  uVar10 = uVar2 >> 0x1e;
  uVar3 = (uint)(param_7 >> 0x20);
  uVar13 = uVar3 >> 0x1e;
  iVar5 = (int)param_2;
  if ((ulong)param_3 >> 0x3e == 3) {
    uVar12 = 0;
    if ((((param_2 != 0) || (param_3 != (byte *)0xc000000000000000)) || (param_7 >> 0x3e < 3)) ||
       ((uVar12 = 0, param_6 != 0 || (param_7 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar10 == 0) {
        uVar12 = (ulong)param_3 >> 0x30 & 0xff;
      }
      else {
        iVar11 = (int)((ulong)param_2 >> 0x20);
        if (SBORROW4(iVar11,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar12 = (ulong)(iVar11 - iVar5);
      }
joined_r0x000389b8:
      if (1 < uVar3 >> 0x1e) goto LAB_00038898;
LAB_000388cc:
      if (uVar13 == 0) {
        uVar14 = param_7 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar11 = (int)((ulong)param_6 >> 0x20);
      if (SBORROW4(iVar11,(int)param_6)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar12 != (long)(iVar11 - (int)param_6)) goto LAB_0003899c;
    }
    else {
      if (uVar10 == 2) {
        uVar12 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10);
        if (SBORROW8(*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar12 = 0;
      if (uVar13 < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar13 != 2) {
        uVar12 = (ulong)(uVar12 == 0);
        goto LAB_00038af8;
      }
      uVar14 = *(long *)(param_6 + 0x18) - *(long *)(param_6 + 0x10);
      if (SBORROW8(*(long *)(param_6 + 0x18),*(long *)(param_6 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar12 != uVar14) {
LAB_0003899c:
        uVar12 = 0;
        goto LAB_00038af8;
      }
    }
    if (0 < (long)uVar12) {
      if (uVar10 < 2) {
        if (uVar10 == 0) {
          abStack_70[0] = (byte)param_2;
          abStack_70[1] = (byte)((ulong)param_2 >> 8);
          abStack_70[2] = (byte)((ulong)param_2 >> 0x10);
          abStack_70[3] = (byte)((ulong)param_2 >> 0x18);
          abStack_70[4] = (byte)((ulong)param_2 >> 0x20);
          abStack_70[5] = (byte)((ulong)param_2 >> 0x28);
          abStack_70[6] = (byte)((ulong)param_2 >> 0x30);
          abStack_70[7] = (byte)((ulong)param_2 >> 0x38);
          abStack_70[8] = (byte)param_3;
          abStack_70[9] = (byte)((ulong)param_3 >> 8);
          abStack_70[10] = (byte)((ulong)param_3 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)param_3 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)param_3 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)param_3 >> 0x28);
          param_3 = abStack_70 + ((ulong)param_3 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar12 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        lVar6 = (param_2 >> 0x20) - lVar17;
        if (param_2 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (param_2 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          param_2 = 0;
        }
        else {
          lVar7 = param_2;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,lVar7)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          param_2 = (lVar17 - lVar7) + param_2;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (param_2 != 0) {
            if (lVar6 <= lVar7) {
              lVar7 = lVar6;
            }
            pbVar9 = (byte *)(lVar7 + param_2);
            goto LAB_00038aec;
          }
        }
        pbVar9 = (byte *)0x0;
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
          param_3 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(param_2 + 0x10);
        lVar7 = *(long *)(param_2 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar6 = param_2;
        if (param_2 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          param_2 = (lVar17 - lVar6) + param_2;
        }
        lVar1 = lVar7 - lVar17;
        if (SBORROW8(lVar7,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (param_2 == 0) {
          pbVar9 = (byte *)0x0;
        }
        else {
          if (lVar1 <= lVar6) {
            lVar6 = lVar1;
          }
          pbVar9 = (byte *)(lVar6 + param_2);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)param_3 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,param_2,pbVar9,param_6,param_7);
      uVar12 = (ulong)abStack_70[0];
      param_3 = pbVar9;
      goto LAB_00038af8;
    }
  }
  uVar12 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar12;
  }
  ___stack_chk_fail();
  lVar6 = (long)param_3 - uVar12;
  if (SBORROW8((long)param_3,uVar12)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar16 = *unaff_x20;
  uVar15 = uVar16 & 0xffffffffffffff8;
  uVar12 = uVar15 + 0x20 + uVar12 * 8;
  uVar8 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar14 = uVar12;
  _swift_arrayDestroy(uVar12,lVar6,uVar8);
  lVar17 = param_6 - lVar6;
  if (SBORROW8(param_6,lVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar17 != 0) {
    if (uVar16 >> 0x3e == 0) {
      uVar14 = *(ulong *)(uVar15 + 0x10);
      lVar6 = uVar14 - (long)param_3;
    }
    else {
      uVar14 = uVar15;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar14 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar6 = uVar14 - (long)param_3;
    }
    if (SBORROW8(uVar14,(long)param_3)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar12 = uVar12 + param_6 * 8;
    uVar14 = uVar15 + 0x20 + (long)param_3 * 8;
    if (uVar12 != uVar14 || uVar14 + lVar6 * 8 <= uVar12) {
      _memmove(uVar12,uVar14,lVar6 << 3);
    }
    if (uVar16 >> 0x3e == 0) {
      uVar14 = *(ulong *)(uVar15 + 0x10);
    }
    else {
      uVar14 = uVar15;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar14 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar14,lVar17)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar15 + 0x10) = uVar14 + lVar17;
  }
  if (param_6 < 1) {
    return uVar14;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
  (*pcVar4)();
}



/* Entry: 0017e748; end: 0017e7ff;  */

/* WARNING: Removing unreachable block (ram,0x0017e7bc) */

void FUN_0017e748(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_90,0);
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_a0 = uStack_50;
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  FUN_0017e510(&uStack_e0,param_1,param_2,param_3,param_4);
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_50 = uStack_a0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0017e800; end: 0017e83f;  */

void FUN_0017e800(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 3) = 0xc0c;
  return;
}



/* Entry: 0017e840; end: 0017e8b7;  */

uint FUN_0017e840(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x0014c8fc(uVar1,&UNK_009b31b8,0x1872d0);
  uVar2 = uVar1;
  FUN_000f846c();
  _swift_bridgeObjectRelease(uVar1);
  return (uint)uVar2 & 1;
}



/* Entry: 0017e8b8; end: 0017e8eb;  */

void FUN_0017e8b8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 0017e8ec; end: 0017e8ff;  */

undefined1  [16] FUN_0017e8ec(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x17e8fc;
  return auVar1;
}



/* Entry: 0017e900; end: 0017e93b;  */

void FUN_0017e900(void)

{
  FUN_0017e40c();
  return;
}



/* Entry: 0017e93c; end: 0017e9db;  */

void FUN_0017e93c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0f40 != -1) {
    _swift_once(0xaf0f40,FUN_0017e268);
  }
  uVar5 = uRam0000000000b65528;
  uVar4 = uRam0000000000b65520;
  uVar3 = uRam0000000000b65518;
  uVar2 = uRam0000000000b65510;
  uVar1 = uRam0000000000b65508;
  *param_1 = uRam0000000000b65500;
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



/* Entry: 0017e9dc; end: 0017ea17;  */

void FUN_0017e9dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf21d0;
  uStack_18 = param_1;
  func_0x000115a8(0xaf21d0,&UNK_007debb0);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 0017ea18; end: 0017eacb;  */

/* WARNING: Removing unreachable block (ram,0x0017ea88) */

void FUN_0017ea18(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar4 = unaff_x20[2];
  uVar3 = *(undefined2 *)(unaff_x20 + 3);
  __ss6HasherV5_seedABSi_tcfC(&uStack_90,0);
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_a0 = uStack_50;
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  FUN_0017e510(&uStack_e0,uVar1,uVar2,uVar4,uVar3);
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_50 = uStack_a0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0017eacc; end: 0017eb4b;  */

/* WARNING: Removing unreachable block (ram,0x0017eb18) */

void FUN_0017eacc(undefined8 *param_1)

{
  undefined8 *unaff_x20;
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
  FUN_0017e510(&uStack_80,*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined2 *)(unaff_x20 + 3));
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



/* Entry: 0017eb4c; end: 0017ebfb;  */

/* WARNING: Removing unreachable block (ram,0x0017ebb8) */

void FUN_0017eb4c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar4 = unaff_x20[2];
  uVar3 = *(undefined2 *)(unaff_x20 + 3);
  __ss6HasherV5_seedABSi_tcfC(&uStack_90);
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_a0 = uStack_50;
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  FUN_0017e510(&uStack_e0,uVar1,uVar2,uVar4,uVar3);
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_50 = uStack_a0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0017ebfc; end: 0017ec1f;  */

ulong FUN_0017ebfc(ulong *param_1,undefined8 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  byte *pbVar10;
  long lVar11;
  byte *pbVar12;
  ulong uVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  ulong *unaff_x20;
  long lVar19;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  uVar16 = *param_1;
  uVar8 = param_1[1];
  pbVar12 = (byte *)param_1[2];
  lVar11 = param_2[1];
  uVar13 = param_2[2];
  uVar1 = (ushort)param_1[3];
  uVar2 = *(ushort *)(param_2 + 3);
  FUN_001491f8(uVar16,*param_2,FUN_0017fab0);
  if ((uVar16 & 1) == 0) {
    return 0;
  }
  if ((uVar1 & 0xff) == 0xc) {
    if ((uVar2 & 0xff) != 0xc) {
      return 0;
    }
  }
  else {
    if ((uVar2 & 0xff) == 0xc) {
      return 0;
    }
    if (((uVar2 ^ uVar1) & 0xff) != 0) {
      return 0;
    }
  }
  uVar2 = uVar2 >> 8;
  if (uVar1 >> 8 == 0xc) {
    if (uVar2 != 0xc) {
      return 0;
    }
  }
  else {
    if (uVar2 == 0xc) {
      return 0;
    }
    if (uVar1 >> 8 != uVar2) {
      return 0;
    }
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar4 = (uint)((ulong)pbVar12 >> 0x20);
  uVar14 = uVar4 >> 0x1e;
  uVar5 = (uint)(uVar13 >> 0x20);
  uVar17 = uVar5 >> 0x1e;
  iVar7 = (int)uVar8;
  if ((ulong)pbVar12 >> 0x3e == 3) {
    uVar16 = 0;
    if ((((uVar8 != 0) || (pbVar12 != (byte *)0xc000000000000000)) || (uVar13 >> 0x3e < 3)) ||
       ((uVar16 = 0, lVar11 != 0 || (uVar13 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar4 >> 0x1e < 2) {
      if (uVar14 == 0) {
        uVar16 = (ulong)pbVar12 >> 0x30 & 0xff;
      }
      else {
        iVar15 = (int)(uVar8 >> 0x20);
        if (SBORROW4(iVar15,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar6)();
        }
        uVar16 = (ulong)(iVar15 - iVar7);
      }
joined_r0x000389b8:
      if (1 < uVar5 >> 0x1e) goto LAB_00038898;
LAB_000388cc:
      if (uVar17 == 0) {
        uVar18 = uVar13 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar15 = (int)((ulong)lVar11 >> 0x20);
      if (SBORROW4(iVar15,(int)lVar11)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar6)();
      }
      if (uVar16 != (long)(iVar15 - (int)lVar11)) goto LAB_0003899c;
    }
    else {
      if (uVar14 == 2) {
        uVar16 = *(long *)(uVar8 + 0x18) - *(long *)(uVar8 + 0x10);
        if (SBORROW8(*(long *)(uVar8 + 0x18),*(long *)(uVar8 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar6)();
        }
        goto joined_r0x000389b8;
      }
      uVar16 = 0;
      if (uVar17 < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar17 != 2) {
        uVar8 = (ulong)(uVar16 == 0);
        goto LAB_00038af8;
      }
      uVar18 = *(long *)(lVar11 + 0x18) - *(long *)(lVar11 + 0x10);
      if (SBORROW8(*(long *)(lVar11 + 0x18),*(long *)(lVar11 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar6)();
      }
LAB_000388d4:
      if (uVar16 != uVar18) {
LAB_0003899c:
        uVar8 = 0;
        goto LAB_00038af8;
      }
    }
    if (0 < (long)uVar16) {
      if (uVar14 < 2) {
        if (uVar14 == 0) {
          abStack_70[0] = (byte)uVar8;
          abStack_70[1] = (byte)(uVar8 >> 8);
          abStack_70[2] = (byte)(uVar8 >> 0x10);
          abStack_70[3] = (byte)(uVar8 >> 0x18);
          abStack_70[4] = (byte)(uVar8 >> 0x20);
          abStack_70[5] = (byte)(uVar8 >> 0x28);
          abStack_70[6] = (byte)(uVar8 >> 0x30);
          abStack_70[7] = (byte)(uVar8 >> 0x38);
          abStack_70[8] = (byte)pbVar12;
          abStack_70[9] = (byte)((ulong)pbVar12 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar12 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar12 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar12 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar12 >> 0x28);
          pbVar12 = abStack_70 + ((ulong)pbVar12 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar8 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar19 = (long)iVar7;
        uVar16 = ((long)uVar8 >> 0x20) - lVar19;
        if ((long)uVar8 >> 0x20 < lVar19) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar6)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar8 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          uVar8 = 0;
        }
        else {
          uVar18 = uVar8;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar19,uVar18)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar6)();
          }
          uVar8 = (lVar19 - uVar18) + uVar8;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (uVar8 != 0) {
            if ((long)uVar16 <= (long)uVar18) {
              uVar18 = uVar16;
            }
            pbVar10 = (byte *)(uVar18 + uVar8);
            goto LAB_00038aec;
          }
        }
        pbVar10 = (byte *)0x0;
      }
      else {
        if (uVar14 != 2) {
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
          pbVar12 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar19 = *(long *)(uVar8 + 0x10);
        lVar3 = *(long *)(uVar8 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        uVar16 = uVar8;
        if (uVar8 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar19,uVar16)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar6)();
          }
          uVar8 = (lVar19 - uVar16) + uVar8;
        }
        uVar18 = lVar3 - lVar19;
        if (SBORROW8(lVar3,lVar19)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar6)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (uVar8 == 0) {
          pbVar10 = (byte *)0x0;
        }
        else {
          if ((long)uVar18 <= (long)uVar16) {
            uVar16 = uVar18;
          }
          pbVar10 = (byte *)(uVar16 + uVar8);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar12 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,uVar8,pbVar10,lVar11,uVar13);
      uVar8 = (ulong)abStack_70[0];
      pbVar12 = pbVar10;
      goto LAB_00038af8;
    }
  }
  uVar8 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar8;
  }
  ___stack_chk_fail();
  lVar19 = (long)pbVar12 - uVar8;
  if (SBORROW8((long)pbVar12,uVar8)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar6)();
  }
  uVar18 = *unaff_x20;
  uVar13 = uVar18 & 0xffffffffffffff8;
  uVar8 = uVar13 + 0x20 + uVar8 * 8;
  uVar9 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar16 = uVar8;
  _swift_arrayDestroy(uVar8,lVar19,uVar9);
  lVar3 = lVar11 - lVar19;
  if (SBORROW8(lVar11,lVar19)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar6)();
  }
  if (lVar3 != 0) {
    if (uVar18 >> 0x3e == 0) {
      uVar16 = *(ulong *)(uVar13 + 0x10);
      lVar19 = uVar16 - (long)pbVar12;
    }
    else {
      uVar16 = uVar13;
      if ((uVar18 & 0x8000000000000000) != 0) {
        uVar16 = uVar18;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar19 = uVar16 - (long)pbVar12;
    }
    if (SBORROW8(uVar16,(long)pbVar12)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar6)();
    }
    uVar8 = uVar8 + lVar11 * 8;
    uVar16 = uVar13 + 0x20 + (long)pbVar12 * 8;
    if (uVar8 != uVar16 || uVar16 + lVar19 * 8 <= uVar8) {
      _memmove(uVar8,uVar16,lVar19 << 3);
    }
    if (uVar18 >> 0x3e == 0) {
      uVar16 = *(ulong *)(uVar13 + 0x10);
    }
    else {
      uVar16 = uVar13;
      if ((uVar18 & 0x8000000000000000) != 0) {
        uVar16 = uVar18;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar16,lVar3)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar6)();
    }
    *(ulong *)(uVar13 + 0x10) = uVar16 + lVar3;
  }
  if (lVar11 < 1) {
    return uVar16;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x38c58);
  (*pcVar6)();
}



/* Entry: 0017ec20; end: 0017ec8f;  */

void FUN_0017ec20(void)

{
  __sSS6appendyySSF(0xd000000000000019,0x80000000008b9520);
  uRam0000000000b65530 = 0xd000000000000022;
  uRam0000000000b65538 = 0x80000000008b94a0;
  return;
}



/* Entry: 0017ec90; end: 0017eccf;  */

undefined8 FUN_0017ec90(void)

{
  if (lRam0000000000af0f50 != -1) {
    _swift_once(0xaf0f50,FUN_0017ec20);
  }
  return 0xb65530;
}



/* Entry: 0017ecd0; end: 0017ecef;  */

undefined1  [16] FUN_0017ecd0(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000000af0f50 != -1) {
    _swift_once(0xaf0f50,FUN_0017ec20);
  }
  auVar1._8_8_ = uRam0000000000b65538;
  auVar1._0_8_ = uRam0000000000b65530;
  _swift_bridgeObjectRetain(uRam0000000000b65538);
  return auVar1;
}



/* Entry: 0017ecf0; end: 0017edaf;  */

void FUN_0017ecf0(void)

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
  FUN_000de3ec(&UNK_007ded70,0x41,&uStack_48,&lStack_40);
  puRam0000000000b65548 = puStack_38;
  lRam0000000000b65540 = lStack_40;
  puRam0000000000b65558 = puStack_28;
  puRam0000000000b65550 = puStack_30;
  puRam0000000000b65568 = puStack_18;
  puRam0000000000b65560 = puStack_20;
  return;
}



/* Entry: 0017edb0; end: 0017ee4f;  */

void FUN_0017edb0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0f58 != -1) {
    _swift_once(0xaf0f58,FUN_0017ecf0);
  }
  uVar5 = uRam0000000000b65568;
  uVar4 = uRam0000000000b65560;
  uVar3 = uRam0000000000b65558;
  uVar2 = uRam0000000000b65550;
  uVar1 = uRam0000000000b65548;
  *param_1 = uRam0000000000b65540;
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



/* Entry: 0017ee50; end: 0017efd3;  */

void FUN_0017ee50(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  puVar10 = (undefined1 *)(unaff_x20 + 0x10);
  *puVar10 = 0xc;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  puVar8 = (undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *puVar8 = 0;
  puVar11 = (undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *puVar11 = 0;
  _swift_beginAccess(param_1 + 0x10,auStack_80,0,0);
  uVar7 = *(undefined1 *)(param_1 + 0x10);
  _swift_beginAccess(puVar10,auStack_98,1,0);
  *puVar10 = uVar7;
  _swift_beginAccess(param_1 + 0x18,auStack_b0,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _swift_beginAccess(puVar11,auStack_c8,1,0);
  uVar12 = *puVar11;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  *puVar11 = uVar1;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar5;
  func_0x001869f8(uVar1,uVar4,uVar2,uVar5);
  FUN_00116294(uVar12,uVar3,uVar6,uVar9);
  _swift_beginAccess(param_1 + 0x38,auStack_e0,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  func_0x001869f8(uVar1,uVar4,uVar2,uVar5);
  _swift_release(param_1);
  _swift_beginAccess(puVar8,auStack_f8,1,0);
  uVar9 = *puVar8;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x50);
  *puVar8 = uVar1;
  *(undefined8 *)(unaff_x20 + 0x40) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar5;
  FUN_00116294(uVar9,uVar3,uVar6,uVar12);
  return;
}



/* Entry: 0017efd4; end: 0017f007;  */

void FUN_0017efd4(void)

{
  long unaff_x20;
  
  FUN_00116294(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
               *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_00116294(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
               *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 0017f008; end: 0017f0f7;  */

undefined8 FUN_0017f008(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_3 + 0x18,auStack_58,0,0);
  uVar4 = *(ulong *)(param_3 + 0x28);
  if (uVar4 == 0) {
LAB_0017f07c:
    _swift_beginAccess(param_3 + 0x38,auStack_70,0,0);
    uVar4 = *(ulong *)(param_3 + 0x48);
    if (uVar4 != 0) {
      uVar5 = *(undefined8 *)(param_3 + 0x50);
      uVar3 = *(undefined8 *)(param_3 + 0x38);
      uVar1 = *(undefined8 *)(param_3 + 0x40);
      func_0x00023304(uVar3,uVar1);
      uVar2 = uVar4;
      _swift_bridgeObjectRetain();
      FUN_000e1a94();
      FUN_00116294(uVar3,uVar1,uVar4,uVar5);
      if ((uVar2 & 1) == 0) goto LAB_0017f0dc;
    }
    uVar3 = 1;
  }
  else {
    uVar5 = *(undefined8 *)(param_3 + 0x30);
    uVar3 = *(undefined8 *)(param_3 + 0x18);
    uVar1 = *(undefined8 *)(param_3 + 0x20);
    func_0x00023304(uVar3,uVar1);
    uVar2 = uVar4;
    _swift_bridgeObjectRetain();
    FUN_000e1a94();
    FUN_00116294(uVar3,uVar1,uVar4,uVar5);
    if ((uVar2 & 1) != 0) goto LAB_0017f07c;
LAB_0017f0dc:
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 0017f0f8; end: 0017f127;  */

void FUN_0017f0f8(void)

{
  FUN_0017f128();
  return;
}



/* Entry: 0017f128; end: 0017f1db;  */

void FUN_0017f128(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *in_x3;
  code *in_x5;
  code *in_x6;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
    (*in_x3)(0);
    _swift_allocObject();
    (*in_x5)(uVar2,uVar3);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  }
  (*in_x6)();
  return;
}



/* Entry: 0017f1dc; end: 0017f2cf;  */

/* WARNING: Removing unreachable block (ram,0x0017f2b0) */
/* WARNING: Removing unreachable block (ram,0x0017f2cc) */

void FUN_0017f1dc(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_4 + 0x10);
  lVar1 = param_3;
  lVar2 = param_4;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 5) {
        FUN_0017f404(param_2,param_1,param_3,param_4);
      }
      else if (lVar1 == 4) {
        FUN_0017f370(param_2,param_1,param_3,param_4);
      }
      else if (lVar1 == 3) {
        FUN_0017f2d0(param_2,param_1,param_3,param_4,FUN_00192034,&UNK_009b16f0);
      }
      lVar1 = param_3;
      lVar2 = param_4;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 0017f2d0; end: 0017f36f;  */

void FUN_0017f2d0(undefined8 param_1,long param_2,undefined8 param_3,long param_4,code *param_5,
                 undefined8 param_6)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_68 [24];
  
  lVar1 = param_2 + 0x10;
  _swift_beginAccess(lVar1,auStack_68,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x188);
  (*param_5)();
  (*pcVar2)(param_2 + 0x10,param_6,lVar1,param_3,param_4);
  _swift_endAccess(auStack_68);
  return;
}



/* Entry: 0017f370; end: 0017f403;  */

void FUN_0017f370(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x18;
  _swift_beginAccess(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_00188ae8();
  (*pcVar2)(param_2 + 0x18,&UNK_009b2b90,lVar1,param_3,param_4);
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 0017f404; end: 0017f497;  */

void FUN_0017f404(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x38;
  _swift_beginAccess(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_00188ae8();
  (*pcVar2)(param_2 + 0x38,&UNK_009b2b90,lVar1,param_3,param_4);
  _swift_endAccess(auStack_58);
  return;
}



/* Entry: 0017f498; end: 0017f52b;  */

void FUN_0017f498(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,code *param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long unaff_x21;
  
  (*param_5)(param_4,param_1);
  if (unaff_x21 != 0) {
    return;
  }
  uVar1 = (uint)(param_3 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 == 0) {
      if ((param_3 & 0xff000000000000) == 0) {
        return;
      }
      goto LAB_0017f510;
    }
    lVar3 = (long)(int)param_2;
    lVar4 = param_2 >> 0x20;
  }
  else {
    if (uVar2 != 2) {
      return;
    }
    lVar3 = *(long *)(param_2 + 0x10);
    lVar4 = *(long *)(param_2 + 0x18);
  }
  if (lVar3 == lVar4) {
    return;
  }
LAB_0017f510:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,param_2,param_3);
  return;
}



/* Entry: 0017f52c; end: 0017f547;  */

void FUN_0017f52c(void)

{
  FUN_0016b744();
  return;
}



/* Entry: 0017f548; end: 0017f72f;  */

void FUN_0017f548(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  long unaff_x21;
  long lVar4;
  undefined8 uVar5;
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
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
  bVar3 = *(byte *)(param_1 + 0x10);
  if ((ulong)bVar3 != 0xc) {
    __ss6HasherV8_combineyySuF(3);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(&UNK_007dfe58 + (ulong)bVar3 * 8));
  }
  _swift_beginAccess(param_1 + 0x18,auStack_80,0,0);
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    __ss6HasherV8_combineyySuF(4);
    uStack_108 = param_2[5];
    uStack_110 = param_2[4];
    uStack_f8 = param_2[7];
    uStack_100 = param_2[6];
    uStack_f0 = param_2[8];
    uStack_128 = param_2[1];
    uStack_130 = *param_2;
    uStack_118 = param_2[3];
    uStack_120 = param_2[2];
    func_0x00023304(uVar1,uVar2);
    _swift_bridgeObjectRetain(lVar4);
    FUN_0017c428(&uStack_130,uVar1,uVar2,lVar4,uVar5);
    if (unaff_x21 != 0) {
      _swift_errorRelease();
      unaff_x21 = 0;
    }
    FUN_00116294(uVar1,uVar2,lVar4,uVar5);
    param_2[5] = uStack_108;
    param_2[4] = uStack_110;
    param_2[7] = uStack_f8;
    param_2[6] = uStack_100;
    param_2[8] = uStack_f0;
    param_2[1] = uStack_128;
    *param_2 = uStack_130;
    param_2[3] = uStack_118;
    param_2[2] = uStack_120;
  }
  _swift_beginAccess(param_1 + 0x38,auStack_98,0,0);
  lVar4 = *(long *)(param_1 + 0x48);
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    __ss6HasherV8_combineyySuF(5);
    uStack_b8 = param_2[5];
    uStack_c0 = param_2[4];
    uStack_a8 = param_2[7];
    uStack_b0 = param_2[6];
    uStack_a0 = param_2[8];
    uStack_d8 = param_2[1];
    uStack_e0 = *param_2;
    uStack_c8 = param_2[3];
    uStack_d0 = param_2[2];
    func_0x00023304(uVar1,uVar2);
    _swift_bridgeObjectRetain(lVar4);
    FUN_0017c428(&uStack_e0,uVar1,uVar2,lVar4,uVar5);
    if (unaff_x21 != 0) {
      _swift_errorRelease(unaff_x21);
    }
    FUN_00116294(uVar1,uVar2,lVar4,uVar5);
    param_2[5] = uStack_b8;
    param_2[4] = uStack_c0;
    param_2[7] = uStack_a8;
    param_2[6] = uStack_b0;
    param_2[8] = uStack_a0;
    param_2[1] = uStack_d8;
    *param_2 = uStack_e0;
    param_2[3] = uStack_c8;
    param_2[2] = uStack_d0;
  }
  return;
}



/* Entry: 0017f730; end: 0017f793;  */

void FUN_0017f730(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x21;
  
  FUN_0017f794();
  if (unaff_x21 == 0) {
    FUN_0017f830(param_1,param_2,param_3,param_4);
    FUN_0017f910(param_1,param_2,param_3,param_4);
  }
  return;
}



/* Entry: 0017f794; end: 0017f82f;  */

void FUN_0017f794(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  char cStack_31;
  
  lVar1 = param_1 + 0x10;
  _swift_beginAccess(lVar1,auStack_58,0,0);
  cStack_31 = *(char *)(param_1 + 0x10);
  if (cStack_31 != '\f') {
    pcVar2 = *(code **)(param_4 + 0x80);
    FUN_00192034();
    (*pcVar2)(&cStack_31,3,&UNK_009b16f0,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 0017f830; end: 0017f90f;  */

void FUN_0017f830(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x18;
  _swift_beginAccess(lVar1,auStack_58,0,0);
  lStack_70 = *(long *)(param_1 + 0x28);
  if (lStack_70 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uStack_78 = *(undefined8 *)(param_1 + 0x20);
    uStack_80 = *(undefined8 *)(param_1 + 0x18);
    uStack_68 = (undefined1)uVar2;
    uStack_67 = (undefined1)((ulong)uVar2 >> 8);
    uStack_66 = (undefined1)((ulong)uVar2 >> 0x10);
    uStack_65 = (undefined1)((ulong)uVar2 >> 0x18);
    uStack_64 = (undefined1)((ulong)uVar2 >> 0x20);
    uStack_63 = (undefined1)((ulong)uVar2 >> 0x28);
    uStack_62 = (undefined1)((ulong)uVar2 >> 0x30);
    uStack_61 = (undefined1)((ulong)uVar2 >> 0x38);
    pcVar3 = *(code **)(param_4 + 0x88);
    FUN_00188ae8();
    (*pcVar3)(&uStack_80,4,&UNK_009b2b90,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 0017f910; end: 0017f9ef;  */

void FUN_0017f910(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x38;
  _swift_beginAccess(lVar1,auStack_58,0,0);
  lStack_70 = *(long *)(param_1 + 0x48);
  if (lStack_70 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    uStack_78 = *(undefined8 *)(param_1 + 0x40);
    uStack_80 = *(undefined8 *)(param_1 + 0x38);
    uStack_68 = (undefined1)uVar2;
    uStack_67 = (undefined1)((ulong)uVar2 >> 8);
    uStack_66 = (undefined1)((ulong)uVar2 >> 0x10);
    uStack_65 = (undefined1)((ulong)uVar2 >> 0x18);
    uStack_64 = (undefined1)((ulong)uVar2 >> 0x20);
    uStack_63 = (undefined1)((ulong)uVar2 >> 0x28);
    uStack_62 = (undefined1)((ulong)uVar2 >> 0x30);
    uStack_61 = (undefined1)((ulong)uVar2 >> 0x38);
    pcVar3 = *(code **)(param_4 + 0x88);
    FUN_00188ae8();
    (*pcVar3)(&uStack_80,5,&UNK_009b2b90,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 0017f9f0; end: 0017f9fb;  */

ulong FUN_0017f9f0(long param_1,byte *param_2,ulong param_3,long param_4,ulong param_5,ulong param_6
                  )

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *unaff_x20;
  ulong uVar16;
  long lVar17;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  if (param_3 != param_6) {
    _swift_retain(param_3);
    _swift_retain(param_6);
    uVar12 = param_3;
    FUN_0017fab0(param_3,param_6);
    _swift_release(param_6);
    _swift_release(param_3);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)param_2 >> 0x20);
  uVar10 = uVar2 >> 0x1e;
  uVar3 = (uint)(param_5 >> 0x20);
  uVar13 = uVar3 >> 0x1e;
  iVar5 = (int)param_1;
  if ((ulong)param_2 >> 0x3e == 3) {
    uVar12 = 0;
    if ((((param_1 != 0) || (param_2 != (byte *)0xc000000000000000)) || (param_5 >> 0x3e < 3)) ||
       ((uVar12 = 0, param_4 != 0 || (param_5 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar10 == 0) {
        uVar12 = (ulong)param_2 >> 0x30 & 0xff;
      }
      else {
        iVar11 = (int)((ulong)param_1 >> 0x20);
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
        uVar12 = (ulong)(uVar12 == 0);
        goto LAB_00038af8;
      }
      uVar14 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
      if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar12 != uVar14) {
LAB_0003899c:
        uVar12 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar10 == 2) {
        uVar12 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
        if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
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
        uVar14 = param_5 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar11 = (int)((ulong)param_4 >> 0x20);
      if (SBORROW4(iVar11,(int)param_4)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar12 != (long)(iVar11 - (int)param_4)) goto LAB_0003899c;
    }
    if (0 < (long)uVar12) {
      if (uVar10 < 2) {
        if (uVar10 == 0) {
          abStack_70[0] = (byte)param_1;
          abStack_70[1] = (byte)((ulong)param_1 >> 8);
          abStack_70[2] = (byte)((ulong)param_1 >> 0x10);
          abStack_70[3] = (byte)((ulong)param_1 >> 0x18);
          abStack_70[4] = (byte)((ulong)param_1 >> 0x20);
          abStack_70[5] = (byte)((ulong)param_1 >> 0x28);
          abStack_70[6] = (byte)((ulong)param_1 >> 0x30);
          abStack_70[7] = (byte)((ulong)param_1 >> 0x38);
          abStack_70[8] = (byte)param_2;
          abStack_70[9] = (byte)((ulong)param_2 >> 8);
          abStack_70[10] = (byte)((ulong)param_2 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)param_2 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)param_2 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)param_2 >> 0x28);
          param_2 = abStack_70 + ((ulong)param_2 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar12 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        lVar6 = (param_1 >> 0x20) - lVar17;
        if (param_1 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (param_1 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          param_1 = 0;
        }
        else {
          lVar7 = param_1;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,lVar7)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          param_1 = (lVar17 - lVar7) + param_1;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (param_1 != 0) {
            if (lVar6 <= lVar7) {
              lVar7 = lVar6;
            }
            pbVar9 = (byte *)(lVar7 + param_1);
            goto LAB_00038aec;
          }
        }
        pbVar9 = (byte *)0x0;
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
          param_2 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(param_1 + 0x10);
        lVar7 = *(long *)(param_1 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar6 = param_1;
        if (param_1 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          param_1 = (lVar17 - lVar6) + param_1;
        }
        lVar1 = lVar7 - lVar17;
        if (SBORROW8(lVar7,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (param_1 == 0) {
          pbVar9 = (byte *)0x0;
        }
        else {
          if (lVar1 <= lVar6) {
            lVar6 = lVar1;
          }
          pbVar9 = (byte *)(lVar6 + param_1);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)param_2 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,param_1,pbVar9,param_4,param_5);
      uVar12 = (ulong)abStack_70[0];
      param_2 = pbVar9;
      goto LAB_00038af8;
    }
  }
  uVar12 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar12;
  }
  ___stack_chk_fail();
  lVar6 = (long)param_2 - uVar12;
  if (SBORROW8((long)param_2,uVar12)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar16 = *unaff_x20;
  uVar15 = uVar16 & 0xffffffffffffff8;
  uVar12 = uVar15 + 0x20 + uVar12 * 8;
  uVar8 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar14 = uVar12;
  _swift_arrayDestroy(uVar12,lVar6,uVar8);
  lVar17 = param_4 - lVar6;
  if (SBORROW8(param_4,lVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar17 != 0) {
    if (uVar16 >> 0x3e == 0) {
      uVar14 = *(ulong *)(uVar15 + 0x10);
      lVar6 = uVar14 - (long)param_2;
    }
    else {
      uVar14 = uVar15;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar14 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar6 = uVar14 - (long)param_2;
    }
    if (SBORROW8(uVar14,(long)param_2)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar12 = uVar12 + param_4 * 8;
    uVar14 = uVar15 + 0x20 + (long)param_2 * 8;
    if (uVar12 != uVar14 || uVar14 + lVar6 * 8 <= uVar12) {
      _memmove(uVar12,uVar14,lVar6 << 3);
    }
    if (uVar16 >> 0x3e == 0) {
      uVar14 = *(ulong *)(uVar15 + 0x10);
    }
    else {
      uVar14 = uVar15;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar14 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar14,lVar17)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar15 + 0x10) = uVar14 + lVar17;
  }
  if (0 < param_4) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar14;
}



/* Entry: 0017f9fc; end: 0017faaf;  */

ulong FUN_0017f9fc(long param_1,byte *param_2,ulong param_3,long param_4,ulong param_5,ulong param_6
                  ,code *param_7)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *unaff_x20;
  ulong uVar16;
  long lVar17;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  if (param_3 != param_6) {
    _swift_retain(param_3);
    _swift_retain(param_6);
    uVar12 = param_3;
    (*param_7)(param_3,param_6);
    _swift_release(param_6);
    _swift_release(param_3);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)param_2 >> 0x20);
  uVar10 = uVar2 >> 0x1e;
  uVar3 = (uint)(param_5 >> 0x20);
  uVar13 = uVar3 >> 0x1e;
  iVar5 = (int)param_1;
  if ((ulong)param_2 >> 0x3e == 3) {
    uVar12 = 0;
    if ((((param_1 != 0) || (param_2 != (byte *)0xc000000000000000)) || (param_5 >> 0x3e < 3)) ||
       ((uVar12 = 0, param_4 != 0 || (param_5 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar10 == 0) {
        uVar12 = (ulong)param_2 >> 0x30 & 0xff;
      }
      else {
        iVar11 = (int)((ulong)param_1 >> 0x20);
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
        uVar12 = (ulong)(uVar12 == 0);
        goto LAB_00038af8;
      }
      uVar14 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
      if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar12 != uVar14) {
LAB_0003899c:
        uVar12 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar10 == 2) {
        uVar12 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
        if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
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
        uVar14 = param_5 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar11 = (int)((ulong)param_4 >> 0x20);
      if (SBORROW4(iVar11,(int)param_4)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar12 != (long)(iVar11 - (int)param_4)) goto LAB_0003899c;
    }
    if (0 < (long)uVar12) {
      if (uVar10 < 2) {
        if (uVar10 == 0) {
          abStack_70[0] = (byte)param_1;
          abStack_70[1] = (byte)((ulong)param_1 >> 8);
          abStack_70[2] = (byte)((ulong)param_1 >> 0x10);
          abStack_70[3] = (byte)((ulong)param_1 >> 0x18);
          abStack_70[4] = (byte)((ulong)param_1 >> 0x20);
          abStack_70[5] = (byte)((ulong)param_1 >> 0x28);
          abStack_70[6] = (byte)((ulong)param_1 >> 0x30);
          abStack_70[7] = (byte)((ulong)param_1 >> 0x38);
          abStack_70[8] = (byte)param_2;
          abStack_70[9] = (byte)((ulong)param_2 >> 8);
          abStack_70[10] = (byte)((ulong)param_2 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)param_2 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)param_2 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)param_2 >> 0x28);
          param_2 = abStack_70 + ((ulong)param_2 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar12 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        lVar6 = (param_1 >> 0x20) - lVar17;
        if (param_1 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (param_1 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          param_1 = 0;
        }
        else {
          lVar7 = param_1;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,lVar7)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          param_1 = (lVar17 - lVar7) + param_1;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (param_1 != 0) {
            if (lVar6 <= lVar7) {
              lVar7 = lVar6;
            }
            pbVar9 = (byte *)(lVar7 + param_1);
            goto LAB_00038aec;
          }
        }
        pbVar9 = (byte *)0x0;
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
          param_2 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(param_1 + 0x10);
        lVar7 = *(long *)(param_1 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar6 = param_1;
        if (param_1 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          param_1 = (lVar17 - lVar6) + param_1;
        }
        lVar1 = lVar7 - lVar17;
        if (SBORROW8(lVar7,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (param_1 == 0) {
          pbVar9 = (byte *)0x0;
        }
        else {
          if (lVar1 <= lVar6) {
            lVar6 = lVar1;
          }
          pbVar9 = (byte *)(lVar6 + param_1);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)param_2 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,param_1,pbVar9,param_4,param_5);
      uVar12 = (ulong)abStack_70[0];
      param_2 = pbVar9;
      goto LAB_00038af8;
    }
  }
  uVar12 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar12;
  }
  ___stack_chk_fail();
  lVar6 = (long)param_2 - uVar12;
  if (SBORROW8((long)param_2,uVar12)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar16 = *unaff_x20;
  uVar15 = uVar16 & 0xffffffffffffff8;
  uVar12 = uVar15 + 0x20 + uVar12 * 8;
  uVar8 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar14 = uVar12;
  _swift_arrayDestroy(uVar12,lVar6,uVar8);
  lVar17 = param_4 - lVar6;
  if (SBORROW8(param_4,lVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar17 != 0) {
    if (uVar16 >> 0x3e == 0) {
      uVar14 = *(ulong *)(uVar15 + 0x10);
      lVar6 = uVar14 - (long)param_2;
    }
    else {
      uVar14 = uVar15;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar14 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar6 = uVar14 - (long)param_2;
    }
    if (SBORROW8(uVar14,(long)param_2)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar12 = uVar12 + param_4 * 8;
    uVar14 = uVar15 + 0x20 + (long)param_2 * 8;
    if (uVar12 != uVar14 || uVar14 + lVar6 * 8 <= uVar12) {
      _memmove(uVar12,uVar14,lVar6 << 3);
    }
    if (uVar16 >> 0x3e == 0) {
      uVar14 = *(ulong *)(uVar15 + 0x10);
    }
    else {
      uVar14 = uVar15;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar14 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar14,lVar17)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar15 + 0x10) = uVar14 + lVar17;
  }
  if (0 < param_4) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar14;
}



/* Entry: 0017fab0; end: 0017fdbf;  */

undefined8 FUN_0017fab0(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  char cVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  ulong uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  _swift_beginAccess(param_1 + 0x10,auStack_80,0,0);
  cVar5 = *(char *)(param_1 + 0x10);
  _swift_beginAccess(param_2 + 0x10,auStack_98,0,0);
  cVar6 = *(char *)(param_2 + 0x10);
  if (cVar5 == '\f') {
    if (cVar6 != '\f') {
      return 0;
    }
  }
  else if (cVar6 == '\f' || cVar5 != cVar6) {
    return 0;
  }
  _swift_beginAccess(param_1 + 0x18,auStack_b0,0,0);
  _swift_beginAccess(param_2 + 0x18,auStack_c8,0,0);
  uVar1 = *(ulong *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  lVar10 = *(long *)(param_2 + 0x28);
  uVar11 = *(undefined8 *)(param_2 + 0x30);
  if (lVar2 == 0) {
    if (lVar10 == 0) {
      func_0x001869f8(uVar1,uVar3,0);
      func_0x001869f8(uVar8,uVar9,0,uVar11);
      FUN_00116294(uVar1,uVar3,0,uVar4);
      goto LAB_0017fc54;
    }
  }
  else if (lVar10 != 0) {
    func_0x001869f8();
    func_0x001869f8(uVar8,uVar9,lVar10,uVar11);
    uVar7 = uVar1;
    FUN_00186180(uVar1,uVar3,lVar2,uVar4,uVar8,uVar9,lVar10,uVar11);
    FUN_00116294(uVar8,uVar9,lVar10,uVar11);
    FUN_00116294(uVar1,uVar3,lVar2,uVar4);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
LAB_0017fc54:
    _swift_beginAccess(param_1 + 0x38,auStack_120,0,0);
    _swift_beginAccess(param_2 + 0x38,auStack_138,0,0);
    uVar1 = *(ulong *)(param_1 + 0x38);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    lVar2 = *(long *)(param_1 + 0x48);
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    uVar8 = *(undefined8 *)(param_2 + 0x38);
    uVar9 = *(undefined8 *)(param_2 + 0x40);
    lVar10 = *(long *)(param_2 + 0x48);
    uVar11 = *(undefined8 *)(param_2 + 0x50);
    if (lVar2 == 0) {
      if (lVar10 == 0) {
        func_0x001869f8(uVar1,uVar3,0);
        func_0x001869f8(uVar8,uVar9,0,uVar11);
        FUN_00116294(uVar1,uVar3,0,uVar4);
        return 1;
      }
    }
    else if (lVar10 != 0) {
      func_0x001869f8();
      func_0x001869f8(uVar8,uVar9,lVar10,uVar11);
      uVar7 = uVar1;
      FUN_00186180(uVar1,uVar3,lVar2,uVar4,uVar8,uVar9,lVar10,uVar11);
      FUN_00116294(uVar8,uVar9,lVar10,uVar11);
      FUN_00116294(uVar1,uVar3,lVar2,uVar4);
      if ((uVar7 & 1) == 0) {
        return 0;
      }
      return 1;
    }
    uStack_108 = uVar1;
    uStack_100 = uVar3;
    lStack_f8 = lVar2;
    uStack_f0 = uVar4;
    uStack_e8 = uVar8;
    uStack_e0 = uVar9;
    lStack_d8 = lVar10;
    uStack_d0 = uVar11;
    func_0x001869f8();
    goto LAB_0017fd3c;
  }
  uStack_108 = uVar1;
  uStack_100 = uVar3;
  lStack_f8 = lVar2;
  uStack_f0 = uVar4;
  uStack_e8 = uVar8;
  uStack_e0 = uVar9;
  lStack_d8 = lVar10;
  uStack_d0 = uVar11;
  func_0x001869f8();
LAB_0017fd3c:
  func_0x001869f8(uVar8,uVar9,lVar10,uVar11);
  func_0x00191ff4(&uStack_108,0xaf25f8,&UNK_007ded60);
  return 0;
}



/* Entry: 0017fdc0; end: 0017fdcb;  */

/* WARNING: Removing unreachable block (ram,0x0017fe34) */

void FUN_0017fdc0(long param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_90,0);
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_a0 = uStack_50;
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  FUN_0017f548(param_3,&uStack_e0);
  uVar1 = (uint)(param_2 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar3 = (long)(int)param_1;
      lVar4 = param_1 >> 0x20;
      goto LAB_0017feac;
    }
    if ((param_2 & 0xff000000000000) == 0) goto LAB_0017fe3c;
  }
  else {
    if (uVar2 != 2) goto LAB_0017fe3c;
    lVar3 = *(long *)(param_1 + 0x10);
    lVar4 = *(long *)(param_1 + 0x18);
LAB_0017feac:
    if (lVar3 == lVar4) goto LAB_0017fe3c;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_e0,param_1,param_2);
LAB_0017fe3c:
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_50 = uStack_a0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0017fdcc; end: 0017fec7;  */

/* WARNING: Removing unreachable block (ram,0x0017fe34) */

void FUN_0017fdcc(long param_1,ulong param_2,undefined8 param_3,code *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_90,0);
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_a0 = uStack_50;
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  (*param_4)(param_3,&uStack_e0);
  uVar1 = (uint)(param_2 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar3 = (long)(int)param_1;
      lVar4 = param_1 >> 0x20;
      goto LAB_0017feac;
    }
    if ((param_2 & 0xff000000000000) == 0) goto LAB_0017fe3c;
  }
  else {
    if (uVar2 != 2) goto LAB_0017fe3c;
    lVar3 = *(long *)(param_1 + 0x10);
    lVar4 = *(long *)(param_1 + 0x18);
LAB_0017feac:
    if (lVar3 == lVar4) goto LAB_0017fe3c;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_e0,param_1,param_2);
LAB_0017fe3c:
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_50 = uStack_a0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0017fec8; end: 0017fedb;  */

void FUN_0017fec8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_00187070();
  _swift_initStaticObject();
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
  return;
}



/* Entry: 0017fedc; end: 0017ff1b;  */

void FUN_0017fedc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  (*param_4)();
  _swift_initStaticObject();
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
  return;
}



/* Entry: 0017ff1c; end: 0017ff57;  */

undefined1  [16] FUN_0017ff1c(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000000af0f50 != -1) {
    _swift_once(0xaf0f50,FUN_0017ec20);
  }
  auVar1._8_8_ = uRam0000000000b65538;
  auVar1._0_8_ = uRam0000000000b65530;
  _swift_bridgeObjectRetain(uRam0000000000b65538);
  return auVar1;
}



/* Entry: 0017ff58; end: 0017ff8f;  */

void FUN_0017ff58(void)

{
  FUN_0017f0f8();
  return;
}



/* Entry: 0017ff90; end: 0018002f;  */

void FUN_0017ff90(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0f58 != -1) {
    _swift_once(0xaf0f58,FUN_0017ecf0);
  }
  uVar5 = uRam0000000000b65568;
  uVar4 = uRam0000000000b65560;
  uVar3 = uRam0000000000b65558;
  uVar2 = uRam0000000000b65550;
  uVar1 = uRam0000000000b65548;
  *param_1 = uRam0000000000b65540;
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



/* Entry: 00180030; end: 0018004f;  */

void FUN_00180030(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf21c8;
  uStack_18 = param_1;
  func_0x000115a8(0xaf21c8,&UNK_007deba8);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 00180050; end: 0018010b;  */

/* WARNING: Removing unreachable block (ram,0x001800c8) */

void FUN_00180050(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(&uStack_90,0);
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_a0 = uStack_50;
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  (*param_3)(uVar3,&uStack_e0);
  FUN_0014cc4c(&uStack_e0,uVar1,uVar2);
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_50 = uStack_a0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0018010c; end: 00180123;  */

/* WARNING: Removing unreachable block (ram,0x0016c3fc) */

void FUN_0018010c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
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
  FUN_0017f498(&uStack_80,*unaff_x20,unaff_x20[1],unaff_x20[2],FUN_0017f548);
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



/* Entry: 00180124; end: 001801db;  */

/* WARNING: Removing unreachable block (ram,0x00180198) */

void FUN_00180124(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *in_x3;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(&uStack_90);
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_a0 = uStack_50;
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  (*in_x3)(uVar3,&uStack_e0);
  FUN_0014cc4c(&uStack_e0,uVar1,uVar2);
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_50 = uStack_a0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001801dc; end: 001801e7;  */

ulong FUN_001801dc(long *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  ulong *unaff_x20;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  lVar9 = *param_1;
  pbVar11 = (byte *)param_1[1];
  uVar17 = param_1[2];
  lVar13 = *param_2;
  uVar8 = param_2[1];
  uVar20 = param_2[2];
  if (uVar17 != uVar20) {
    _swift_retain(uVar17);
    _swift_retain(uVar20);
    uVar18 = uVar17;
    FUN_0017fab0(uVar17,uVar20);
    _swift_release(uVar20);
    _swift_release(uVar17);
    if ((uVar18 & 1) == 0) {
      return 0;
    }
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar11 >> 0x20);
  uVar14 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar8 >> 0x20);
  uVar16 = uVar3 >> 0x1e;
  iVar5 = (int)lVar9;
  if ((ulong)pbVar11 >> 0x3e == 3) {
    uVar17 = 0;
    if ((((lVar9 != 0) || (pbVar11 != (byte *)0xc000000000000000)) || (uVar8 >> 0x3e < 3)) ||
       ((uVar17 = 0, lVar13 != 0 || (uVar8 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar14 == 0) {
        uVar17 = (ulong)pbVar11 >> 0x30 & 0xff;
      }
      else {
        iVar15 = (int)((ulong)lVar9 >> 0x20);
        if (SBORROW4(iVar15,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar17 = (ulong)(iVar15 - iVar5);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar16 != 2) {
        uVar8 = (ulong)(uVar17 == 0);
        goto LAB_00038af8;
      }
      uVar20 = *(long *)(lVar13 + 0x18) - *(long *)(lVar13 + 0x10);
      if (SBORROW8(*(long *)(lVar13 + 0x18),*(long *)(lVar13 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar17 != uVar20) {
LAB_0003899c:
        uVar8 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar14 == 2) {
        uVar17 = *(long *)(lVar9 + 0x18) - *(long *)(lVar9 + 0x10);
        if (SBORROW8(*(long *)(lVar9 + 0x18),*(long *)(lVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar17 = 0;
      if (1 < uVar16) goto LAB_00038898;
LAB_000388cc:
      if (uVar16 == 0) {
        uVar20 = uVar8 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar15 = (int)((ulong)lVar13 >> 0x20);
      if (SBORROW4(iVar15,(int)lVar13)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar17 != (long)(iVar15 - (int)lVar13)) goto LAB_0003899c;
    }
    if (0 < (long)uVar17) {
      if (uVar14 < 2) {
        if (uVar14 == 0) {
          abStack_70[0] = (byte)lVar9;
          abStack_70[1] = (byte)((ulong)lVar9 >> 8);
          abStack_70[2] = (byte)((ulong)lVar9 >> 0x10);
          abStack_70[3] = (byte)((ulong)lVar9 >> 0x18);
          abStack_70[4] = (byte)((ulong)lVar9 >> 0x20);
          abStack_70[5] = (byte)((ulong)lVar9 >> 0x28);
          abStack_70[6] = (byte)((ulong)lVar9 >> 0x30);
          abStack_70[7] = (byte)((ulong)lVar9 >> 0x38);
          abStack_70[8] = (byte)pbVar11;
          abStack_70[9] = (byte)((ulong)pbVar11 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar11 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar11 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar11 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar11 >> 0x28);
          pbVar11 = abStack_70 + ((ulong)pbVar11 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar8 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar19 = (long)iVar5;
        lVar6 = (lVar9 >> 0x20) - lVar19;
        if (lVar9 >> 0x20 < lVar19) {
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
          if (SBORROW8(lVar19,lVar7)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          lVar9 = (lVar19 - lVar7) + lVar9;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (lVar9 != 0) {
            if (lVar6 <= lVar7) {
              lVar7 = lVar6;
            }
            pbVar12 = (byte *)(lVar7 + lVar9);
            goto LAB_00038aec;
          }
        }
        pbVar12 = (byte *)0x0;
      }
      else {
        if (uVar14 != 2) {
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
          pbVar11 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar19 = *(long *)(lVar9 + 0x10);
        lVar7 = *(long *)(lVar9 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar6 = lVar9;
        if (lVar9 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar19,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          lVar9 = (lVar19 - lVar6) + lVar9;
        }
        lVar1 = lVar7 - lVar19;
        if (SBORROW8(lVar7,lVar19)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (lVar9 == 0) {
          pbVar12 = (byte *)0x0;
        }
        else {
          if (lVar1 <= lVar6) {
            lVar6 = lVar1;
          }
          pbVar12 = (byte *)(lVar6 + lVar9);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar11 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,lVar9,pbVar12,lVar13,uVar8);
      uVar8 = (ulong)abStack_70[0];
      pbVar11 = pbVar12;
      goto LAB_00038af8;
    }
  }
  uVar8 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar8;
  }
  ___stack_chk_fail();
  lVar9 = (long)pbVar11 - uVar8;
  if (SBORROW8((long)pbVar11,uVar8)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar18 = *unaff_x20;
  uVar20 = uVar18 & 0xffffffffffffff8;
  uVar8 = uVar20 + 0x20 + uVar8 * 8;
  uVar10 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar17 = uVar8;
  _swift_arrayDestroy(uVar8,lVar9,uVar10);
  lVar6 = lVar13 - lVar9;
  if (SBORROW8(lVar13,lVar9)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar6 != 0) {
    if (uVar18 >> 0x3e == 0) {
      uVar17 = *(ulong *)(uVar20 + 0x10);
      lVar9 = uVar17 - (long)pbVar11;
    }
    else {
      uVar17 = uVar20;
      if ((uVar18 & 0x8000000000000000) != 0) {
        uVar17 = uVar18;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar9 = uVar17 - (long)pbVar11;
    }
    if (SBORROW8(uVar17,(long)pbVar11)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar8 = uVar8 + lVar13 * 8;
    uVar17 = uVar20 + 0x20 + (long)pbVar11 * 8;
    if (uVar8 != uVar17 || uVar17 + lVar9 * 8 <= uVar8) {
      _memmove(uVar8,uVar17,lVar9 << 3);
    }
    if (uVar18 >> 0x3e == 0) {
      uVar17 = *(ulong *)(uVar20 + 0x10);
    }
    else {
      uVar17 = uVar20;
      if ((uVar18 & 0x8000000000000000) != 0) {
        uVar17 = uVar18;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar17,lVar6)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar20 + 0x10) = uVar17 + lVar6;
  }
  if (0 < lVar13) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar17;
}



/* Entry: 001801e8; end: 00180293;  */

ulong FUN_001801e8(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,code *param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  ulong *unaff_x20;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  lVar9 = *param_1;
  pbVar11 = (byte *)param_1[1];
  uVar17 = param_1[2];
  lVar13 = *param_2;
  uVar8 = param_2[1];
  uVar20 = param_2[2];
  if (uVar17 != uVar20) {
    _swift_retain(uVar17);
    _swift_retain(uVar20);
    uVar18 = uVar17;
    (*param_5)(uVar17,uVar20);
    _swift_release(uVar20);
    _swift_release(uVar17);
    if ((uVar18 & 1) == 0) {
      return 0;
    }
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar11 >> 0x20);
  uVar14 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar8 >> 0x20);
  uVar16 = uVar3 >> 0x1e;
  iVar5 = (int)lVar9;
  if ((ulong)pbVar11 >> 0x3e == 3) {
    uVar17 = 0;
    if ((((lVar9 != 0) || (pbVar11 != (byte *)0xc000000000000000)) || (uVar8 >> 0x3e < 3)) ||
       ((uVar17 = 0, lVar13 != 0 || (uVar8 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar14 == 0) {
        uVar17 = (ulong)pbVar11 >> 0x30 & 0xff;
      }
      else {
        iVar15 = (int)((ulong)lVar9 >> 0x20);
        if (SBORROW4(iVar15,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar17 = (ulong)(iVar15 - iVar5);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar16 != 2) {
        uVar8 = (ulong)(uVar17 == 0);
        goto LAB_00038af8;
      }
      uVar20 = *(long *)(lVar13 + 0x18) - *(long *)(lVar13 + 0x10);
      if (SBORROW8(*(long *)(lVar13 + 0x18),*(long *)(lVar13 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar17 != uVar20) {
LAB_0003899c:
        uVar8 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar14 == 2) {
        uVar17 = *(long *)(lVar9 + 0x18) - *(long *)(lVar9 + 0x10);
        if (SBORROW8(*(long *)(lVar9 + 0x18),*(long *)(lVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar17 = 0;
      if (1 < uVar16) goto LAB_00038898;
LAB_000388cc:
      if (uVar16 == 0) {
        uVar20 = uVar8 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar15 = (int)((ulong)lVar13 >> 0x20);
      if (SBORROW4(iVar15,(int)lVar13)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar17 != (long)(iVar15 - (int)lVar13)) goto LAB_0003899c;
    }
    if (0 < (long)uVar17) {
      if (uVar14 < 2) {
        if (uVar14 == 0) {
          abStack_70[0] = (byte)lVar9;
          abStack_70[1] = (byte)((ulong)lVar9 >> 8);
          abStack_70[2] = (byte)((ulong)lVar9 >> 0x10);
          abStack_70[3] = (byte)((ulong)lVar9 >> 0x18);
          abStack_70[4] = (byte)((ulong)lVar9 >> 0x20);
          abStack_70[5] = (byte)((ulong)lVar9 >> 0x28);
          abStack_70[6] = (byte)((ulong)lVar9 >> 0x30);
          abStack_70[7] = (byte)((ulong)lVar9 >> 0x38);
          abStack_70[8] = (byte)pbVar11;
          abStack_70[9] = (byte)((ulong)pbVar11 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar11 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar11 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar11 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar11 >> 0x28);
          pbVar11 = abStack_70 + ((ulong)pbVar11 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar8 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar19 = (long)iVar5;
        lVar6 = (lVar9 >> 0x20) - lVar19;
        if (lVar9 >> 0x20 < lVar19) {
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
          if (SBORROW8(lVar19,lVar7)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          lVar9 = (lVar19 - lVar7) + lVar9;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (lVar9 != 0) {
            if (lVar6 <= lVar7) {
              lVar7 = lVar6;
            }
            pbVar12 = (byte *)(lVar7 + lVar9);
            goto LAB_00038aec;
          }
        }
        pbVar12 = (byte *)0x0;
      }
      else {
        if (uVar14 != 2) {
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
          pbVar11 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar19 = *(long *)(lVar9 + 0x10);
        lVar7 = *(long *)(lVar9 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar6 = lVar9;
        if (lVar9 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar19,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          lVar9 = (lVar19 - lVar6) + lVar9;
        }
        lVar1 = lVar7 - lVar19;
        if (SBORROW8(lVar7,lVar19)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (lVar9 == 0) {
          pbVar12 = (byte *)0x0;
        }
        else {
          if (lVar1 <= lVar6) {
            lVar6 = lVar1;
          }
          pbVar12 = (byte *)(lVar6 + lVar9);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar11 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,lVar9,pbVar12,lVar13,uVar8);
      uVar8 = (ulong)abStack_70[0];
      pbVar11 = pbVar12;
      goto LAB_00038af8;
    }
  }
  uVar8 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar8;
  }
  ___stack_chk_fail();
  lVar9 = (long)pbVar11 - uVar8;
  if (SBORROW8((long)pbVar11,uVar8)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar18 = *unaff_x20;
  uVar20 = uVar18 & 0xffffffffffffff8;
  uVar8 = uVar20 + 0x20 + uVar8 * 8;
  uVar10 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar17 = uVar8;
  _swift_arrayDestroy(uVar8,lVar9,uVar10);
  lVar6 = lVar13 - lVar9;
  if (SBORROW8(lVar13,lVar9)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar6 != 0) {
    if (uVar18 >> 0x3e == 0) {
      uVar17 = *(ulong *)(uVar20 + 0x10);
      lVar9 = uVar17 - (long)pbVar11;
    }
    else {
      uVar17 = uVar20;
      if ((uVar18 & 0x8000000000000000) != 0) {
        uVar17 = uVar18;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar9 = uVar17 - (long)pbVar11;
    }
    if (SBORROW8(uVar17,(long)pbVar11)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar8 = uVar8 + lVar13 * 8;
    uVar17 = uVar20 + 0x20 + (long)pbVar11 * 8;
    if (uVar8 != uVar17 || uVar17 + lVar9 * 8 <= uVar8) {
      _memmove(uVar8,uVar17,lVar9 << 3);
    }
    if (uVar18 >> 0x3e == 0) {
      uVar17 = *(ulong *)(uVar20 + 0x10);
    }
    else {
      uVar17 = uVar20;
      if ((uVar18 & 0x8000000000000000) != 0) {
        uVar17 = uVar18;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar17,lVar6)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar20 + 0x10) = uVar17 + lVar6;
  }
  if (0 < lVar13) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar17;
}



/* Entry: 00180294; end: 001802bb;  */

undefined * FUN_00180294(void)

{
  return &UNK_009afc50;
}



/* Entry: 001802bc; end: 0018037b;  */

void FUN_001802bc(void)

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
  FUN_000de3ec(&UNK_007ded4f,0xb,&uStack_48,&lStack_40);
  puRam0000000000b65578 = puStack_38;
  lRam0000000000b65570 = lStack_40;
  puRam0000000000b65588 = puStack_28;
  puRam0000000000b65580 = puStack_30;
  puRam0000000000b65598 = puStack_18;
  puRam0000000000b65590 = puStack_20;
  return;
}



/* Entry: 0018037c; end: 0018041b;  */

void FUN_0018037c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af0f60 != -1) {
    _swift_once(0xaf0f60,FUN_001802bc);
  }
  uVar5 = uRam0000000000b65598;
  uVar4 = uRam0000000000b65590;
  uVar3 = uRam0000000000b65588;
  uVar2 = uRam0000000000b65580;
  uVar1 = uRam0000000000b65578;
  *param_1 = uRam0000000000b65570;
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


