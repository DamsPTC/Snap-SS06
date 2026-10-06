/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103f1a508; end: 103f1a523; +[SCSpotlightOnFriendsFeedConfigKeys spotlightOnFriendsFeedPlaybackUseNeoPlayer] */

void FUN_103f1a508(void)

{
  if (lRam00000001135ea0b8 != -1) {
    func_0x000107c61568(0x1135ea0b8,FUN_103f1a4b8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113812588);
  return;
}



/* Entry: 103f1a524; end: 103f1a573;  */

void FUN_103f1a524(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  _objc_allocWithZone();
  uVar1 = 0xd00000000000003d;
  func_0x000100442ccc(0xd00000000000003d,0x800000010f1cec90,0);
  uRam0000000113812590 = uVar1;
  return;
}



/* Entry: 103f1a574; end: 103f1a59b; +[SCSpotlightOnFriendsFeedConfigKeys spotlightOnFriendsFeedPlaybackUseContentDescriptorZip] */

void FUN_103f1a574(void)

{
  if (lRam00000001135ea0c0 != -1) {
    func_0x000107c61568(0x1135ea0c0,FUN_103f1a524);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113812590);
  return;
}



/* Entry: 103f1a59c; end: 103f1a5db; +[SCSpotlightOnFriendsFeedConfigKeys defaultSpotlightOnFriendsFeedPlaylistLogic] */

undefined8 FUN_103f1a59c(void)

{
  if (lRam00000001135ea0c8 != -1) {
    _swift_once(0x1135ea0c8,0x103f1a590);
  }
  return uRam0000000113812598;
}



/* Entry: 103f1a5dc; end: 103f1a663;  */

void FUN_103f1a5dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (lRam00000001135ea0c8 != -1) {
    _swift_once(0x1135ea0c8,0x103f1a590);
  }
  uVar1 = uRam0000000113812598;
  func_0x000100bd658c(0);
  _objc_allocWithZone();
  uVar2 = 0xd000000000000028;
  func_0x000100bd65fc(0xd000000000000028,0x800000010f1cec60,uVar1);
  uRam00000001138125a0 = uVar2;
  return;
}



/* Entry: 103f1a664; end: 103f1a67f; +[SCSpotlightOnFriendsFeedConfigKeys spotlightOnFriendsFeedPlaylistLogic] */

void FUN_103f1a664(void)

{
  if (lRam00000001135ea0d0 != -1) {
    func_0x000107c61568(0x1135ea0d0,FUN_103f1a5dc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138125a0);
  return;
}



/* Entry: 103f1a680; end: 103f1a6cf;  */

void FUN_103f1a680(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  _objc_allocWithZone();
  uVar1 = 0xd00000000000002a;
  func_0x000100442ccc(0xd00000000000002a,0x800000010f1cec30,0);
  uRam00000001138125a8 = uVar1;
  return;
}



/* Entry: 103f1a6d0; end: 103f1a6eb; +[SCSpotlightOnFriendsFeedConfigKeys friendsFeedNewStoryReplayIconEnabled] */

void FUN_103f1a6d0(void)

{
  if (lRam00000001135ea0d8 != -1) {
    func_0x000107c61568(0x1135ea0d8,FUN_103f1a680);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138125a8);
  return;
}



/* Entry: 103f1a6ec; end: 103f1a727; -[SCSpotlightOnFriendsFeedConfigKeys init] */

void FUN_103f1a6ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f1a728; end: 103f1a75b;  */

void FUN_103f1a728(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f1a75c; end: 103f1a763; -[SCSpotlightOnFriendsFeedConfigKeys .cxx_destruct] */

void FUN_103f1a75c(void)

{
  return;
}



/* Entry: 103f1a764; end: 103f1a7a3;  */

void FUN_103f1a764(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e548 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaa7f0;
  _swift_getWitnessTable(&UNK_10dcaa7f0,&UNK_1107214b8);
  puRam000000011302e548 = puVar1;
  return;
}



/* Entry: 103f1a7a4; end: 103f1a7b3;  */

undefined1  [16] FUN_103f1a7a4(void)

{
  return ZEXT816(0x1107214b8);
}



/* Entry: 103f1a7b4; end: 103f1a7d3;  */

void FUN_103f1a7b4(void)

{
  _objc_opt_self(&PTR_PTR_112965c88);
  return;
}



/* Entry: 103f1a7d4; end: 103f1a7f3;  */

void FUN_103f1a7d4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 103f1a7f4; end: 103f1a833;  */

void FUN_103f1a7f4(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e578 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaa8f0;
  _swift_getWitnessTable(&UNK_10dcaa8f0,&UNK_1107215b0);
  puRam000000011302e578 = puVar1;
  return;
}



/* Entry: 103f1a834; end: 103f1a837;  */

void FUN_103f1a834(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e580 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaa990;
  _swift_getWitnessTable(&UNK_10dcaa990,&UNK_1107215d0);
  puRam000000011302e580 = puVar1;
  return;
}



/* Entry: 103f1a838; end: 103f1a877;  */

void FUN_103f1a838(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e580 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaa990;
  _swift_getWitnessTable(&UNK_10dcaa990,&UNK_1107215d0);
  puRam000000011302e580 = puVar1;
  return;
}



/* Entry: 103f1a878; end: 103f1a8fb;  */

void FUN_103f1a878(void)

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



/* Entry: 103f1a8fc; end: 103f1a963;  */

void FUN_103f1a8fc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 103f1a964; end: 103f1a9a3;  */

void FUN_103f1a964(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e588 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaab00;
  _swift_getWitnessTable(&UNK_10dcaab00,&UNK_110721648);
  puRam000000011302e588 = puVar1;
  return;
}



/* Entry: 103f1a9a4; end: 103f1a9a7;  */

void FUN_103f1a9a4(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e590 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaab38;
  _swift_getWitnessTable(&UNK_10dcaab38,&UNK_110721648);
  puRam000000011302e590 = puVar1;
  return;
}



/* Entry: 103f1a9a8; end: 103f1a9e7;  */

void FUN_103f1a9a8(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e590 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaab38;
  _swift_getWitnessTable(&UNK_10dcaab38,&UNK_110721648);
  puRam000000011302e590 = puVar1;
  return;
}



/* Entry: 103f1a9e8; end: 103f1aa13;  */

void FUN_103f1a9e8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 103f1aa14; end: 103f1aa53;  */

void FUN_103f1aa14(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e598 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaac00;
  _swift_getWitnessTable(&UNK_10dcaac00,&UNK_110721648);
  puRam000000011302e598 = puVar1;
  return;
}



/* Entry: 103f1aa54; end: 103f1aa57;  */

void FUN_103f1aa54(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e5a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaac28;
  _swift_getWitnessTable(&UNK_10dcaac28,&UNK_110721648);
  puRam000000011302e5a0 = puVar1;
  return;
}



/* Entry: 103f1aa58; end: 103f1aa97;  */

void FUN_103f1aa58(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e5a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaac28;
  _swift_getWitnessTable(&UNK_10dcaac28,&UNK_110721648);
  puRam000000011302e5a0 = puVar1;
  return;
}



/* Entry: 103f1aa98; end: 103f1ac17;  */

void FUN_103f1aa98(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 103f1ac18; end: 103f1acbf;  */

void FUN_103f1ac18(ulong *param_1,long param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined1 auVar25 [16];
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  if (uVar2 == 0) {
    uVar7 = 0;
  }
  else {
    if (uVar2 < 4) {
      uVar4 = 0;
      uVar7 = 0;
    }
    else {
      uVar4 = uVar2 & 0x7ffffffffffffffc;
      puVar6 = (undefined8 *)(param_2 + 0x30);
      bVar8 = 0;
      bVar9 = 0;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = 0;
      bVar13 = 0;
      bVar14 = 0;
      bVar15 = 0;
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      uVar7 = uVar4;
      do {
        uVar42 = puVar6[-1];
        uVar41 = puVar6[-2];
        uVar44 = puVar6[1];
        uVar43 = *puVar6;
        bVar8 = (byte)uVar41 | bVar8;
        bVar9 = (byte)((ulong)uVar41 >> 8) | bVar9;
        bVar10 = (byte)((ulong)uVar41 >> 0x10) | bVar10;
        bVar11 = (byte)((ulong)uVar41 >> 0x18) | bVar11;
        bVar12 = (byte)((ulong)uVar41 >> 0x20) | bVar12;
        bVar13 = (byte)((ulong)uVar41 >> 0x28) | bVar13;
        bVar14 = (byte)((ulong)uVar41 >> 0x30) | bVar14;
        bVar15 = (byte)((ulong)uVar41 >> 0x38) | bVar15;
        bVar16 = (byte)uVar42 | bVar16;
        bVar17 = (byte)((ulong)uVar42 >> 8) | bVar17;
        bVar18 = (byte)((ulong)uVar42 >> 0x10) | bVar18;
        bVar19 = (byte)((ulong)uVar42 >> 0x18) | bVar19;
        bVar20 = (byte)((ulong)uVar42 >> 0x20) | bVar20;
        bVar21 = (byte)((ulong)uVar42 >> 0x28) | bVar21;
        bVar22 = (byte)((ulong)uVar42 >> 0x30) | bVar22;
        bVar23 = (byte)((ulong)uVar42 >> 0x38) | bVar23;
        bVar24 = (byte)uVar43 | bVar24;
        bVar26 = (byte)((ulong)uVar43 >> 8) | bVar26;
        bVar27 = (byte)((ulong)uVar43 >> 0x10) | bVar27;
        bVar28 = (byte)((ulong)uVar43 >> 0x18) | bVar28;
        bVar29 = (byte)((ulong)uVar43 >> 0x20) | bVar29;
        bVar30 = (byte)((ulong)uVar43 >> 0x28) | bVar30;
        bVar31 = (byte)((ulong)uVar43 >> 0x30) | bVar31;
        bVar32 = (byte)((ulong)uVar43 >> 0x38) | bVar32;
        bVar33 = (byte)uVar44 | bVar33;
        bVar34 = (byte)((ulong)uVar44 >> 8) | bVar34;
        bVar35 = (byte)((ulong)uVar44 >> 0x10) | bVar35;
        bVar36 = (byte)((ulong)uVar44 >> 0x18) | bVar36;
        bVar37 = (byte)((ulong)uVar44 >> 0x20) | bVar37;
        bVar38 = (byte)((ulong)uVar44 >> 0x28) | bVar38;
        bVar39 = (byte)((ulong)uVar44 >> 0x30) | bVar39;
        bVar40 = (byte)((ulong)uVar44 >> 0x38) | bVar40;
        puVar6 = puVar6 + 4;
        uVar7 = uVar7 - 4;
      } while (uVar7 != 0);
      bVar24 = bVar24 | bVar8;
      bVar26 = bVar26 | bVar9;
      bVar27 = bVar27 | bVar10;
      bVar28 = bVar28 | bVar11;
      bVar29 = bVar29 | bVar12;
      bVar30 = bVar30 | bVar13;
      bVar31 = bVar31 | bVar14;
      bVar32 = bVar32 | bVar15;
      auVar25[1] = bVar26;
      auVar25[0] = bVar24;
      auVar25[2] = bVar27;
      auVar25[3] = bVar28;
      auVar25[4] = bVar29;
      auVar25[5] = bVar30;
      auVar25[6] = bVar31;
      auVar25[7] = bVar32;
      auVar25[8] = bVar33 | bVar16;
      auVar25[9] = bVar34 | bVar17;
      auVar25[10] = bVar35 | bVar18;
      auVar25[0xb] = bVar36 | bVar19;
      auVar25[0xc] = bVar37 | bVar20;
      auVar25[0xd] = bVar38 | bVar21;
      auVar25[0xe] = bVar39 | bVar22;
      auVar25[0xf] = bVar40 | bVar23;
      auVar1[1] = bVar26;
      auVar1[0] = bVar24;
      auVar1[2] = bVar27;
      auVar1[3] = bVar28;
      auVar1[4] = bVar29;
      auVar1[5] = bVar30;
      auVar1[6] = bVar31;
      auVar1[7] = bVar32;
      auVar1[8] = bVar33 | bVar16;
      auVar1[9] = bVar34 | bVar17;
      auVar1[10] = bVar35 | bVar18;
      auVar1[0xb] = bVar36 | bVar19;
      auVar1[0xc] = bVar37 | bVar20;
      auVar1[0xd] = bVar38 | bVar21;
      auVar1[0xe] = bVar39 | bVar22;
      auVar1[0xf] = bVar40 | bVar23;
      auVar25 = NEON_ext(auVar25,auVar1,8,1);
      uVar7 = CONCAT17(bVar32 | auVar25[7],
                       CONCAT16(bVar31 | auVar25[6],
                                CONCAT15(bVar30 | auVar25[5],
                                         CONCAT14(bVar29 | auVar25[4],
                                                  CONCAT13(bVar28 | auVar25[3],
                                                           CONCAT12(bVar27 | auVar25[2],
                                                                    CONCAT11(bVar26 | auVar25[1],
                                                                             bVar24 | auVar25[0]))))
                                        )));
      if (uVar2 == uVar4) goto LAB_103f1acac;
    }
    lVar3 = uVar2 - uVar4;
    puVar5 = (ulong *)(param_2 + uVar4 * 8 + 0x20);
    do {
      uVar7 = *puVar5 | uVar7;
      lVar3 = lVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
LAB_103f1acac:
  _swift_bridgeObjectRelease();
  *param_1 = uVar7;
  return;
}



/* Entry: 103f1acc0; end: 103f1acd7;  */

undefined1  [16] FUN_103f1acc0(void)

{
  return ZEXT816(0x110721648);
}



/* Entry: 103f1acd8; end: 103f1b0b7;  */

long FUN_103f1acd8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103f1b0b8; end: 103f1b0bb;  */

void FUN_103f1b0b8(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e5a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaad30;
  _swift_getWitnessTable(&UNK_10dcaad30,&UNK_110721950);
  puRam000000011302e5a8 = puVar1;
  return;
}



/* Entry: 103f1b0bc; end: 103f1b0fb;  */

void FUN_103f1b0bc(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e5a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaad30;
  _swift_getWitnessTable(&UNK_10dcaad30,&UNK_110721950);
  puRam000000011302e5a8 = puVar1;
  return;
}



/* Entry: 103f1b0fc; end: 103f1b0ff;  */

void FUN_103f1b0fc(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e5b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaad68;
  _swift_getWitnessTable(&UNK_10dcaad68,&UNK_110721950);
  puRam000000011302e5b0 = puVar1;
  return;
}



/* Entry: 103f1b100; end: 103f1b13f;  */

void FUN_103f1b100(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e5b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaad68;
  _swift_getWitnessTable(&UNK_10dcaad68,&UNK_110721950);
  puRam000000011302e5b0 = puVar1;
  return;
}



/* Entry: 103f1b140; end: 103f1b16b;  */

void FUN_103f1b140(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 103f1b16c; end: 103f1b1ab;  */

void FUN_103f1b16c(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e5b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaae30;
  _swift_getWitnessTable(&UNK_10dcaae30,&UNK_110721950);
  puRam000000011302e5b8 = puVar1;
  return;
}



/* Entry: 103f1b1ac; end: 103f1b1af;  */

void FUN_103f1b1ac(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e5c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaae58;
  _swift_getWitnessTable(&UNK_10dcaae58,&UNK_110721950);
  puRam000000011302e5c0 = puVar1;
  return;
}



/* Entry: 103f1b1b0; end: 103f1b1ef;  */

void FUN_103f1b1b0(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e5c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaae58;
  _swift_getWitnessTable(&UNK_10dcaae58,&UNK_110721950);
  puRam000000011302e5c0 = puVar1;
  return;
}



/* Entry: 103f1b1f0; end: 103f1b36f;  */

void FUN_103f1b1f0(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 103f1b370; end: 103f1b417;  */

void FUN_103f1b370(ulong *param_1,long param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined1 auVar25 [16];
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  if (uVar2 == 0) {
    uVar7 = 0;
  }
  else {
    if (uVar2 < 4) {
      uVar4 = 0;
      uVar7 = 0;
    }
    else {
      uVar4 = uVar2 & 0x7ffffffffffffffc;
      puVar6 = (undefined8 *)(param_2 + 0x30);
      bVar8 = 0;
      bVar9 = 0;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = 0;
      bVar13 = 0;
      bVar14 = 0;
      bVar15 = 0;
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      uVar7 = uVar4;
      do {
        uVar42 = puVar6[-1];
        uVar41 = puVar6[-2];
        uVar44 = puVar6[1];
        uVar43 = *puVar6;
        bVar8 = (byte)uVar41 | bVar8;
        bVar9 = (byte)((ulong)uVar41 >> 8) | bVar9;
        bVar10 = (byte)((ulong)uVar41 >> 0x10) | bVar10;
        bVar11 = (byte)((ulong)uVar41 >> 0x18) | bVar11;
        bVar12 = (byte)((ulong)uVar41 >> 0x20) | bVar12;
        bVar13 = (byte)((ulong)uVar41 >> 0x28) | bVar13;
        bVar14 = (byte)((ulong)uVar41 >> 0x30) | bVar14;
        bVar15 = (byte)((ulong)uVar41 >> 0x38) | bVar15;
        bVar16 = (byte)uVar42 | bVar16;
        bVar17 = (byte)((ulong)uVar42 >> 8) | bVar17;
        bVar18 = (byte)((ulong)uVar42 >> 0x10) | bVar18;
        bVar19 = (byte)((ulong)uVar42 >> 0x18) | bVar19;
        bVar20 = (byte)((ulong)uVar42 >> 0x20) | bVar20;
        bVar21 = (byte)((ulong)uVar42 >> 0x28) | bVar21;
        bVar22 = (byte)((ulong)uVar42 >> 0x30) | bVar22;
        bVar23 = (byte)((ulong)uVar42 >> 0x38) | bVar23;
        bVar24 = (byte)uVar43 | bVar24;
        bVar26 = (byte)((ulong)uVar43 >> 8) | bVar26;
        bVar27 = (byte)((ulong)uVar43 >> 0x10) | bVar27;
        bVar28 = (byte)((ulong)uVar43 >> 0x18) | bVar28;
        bVar29 = (byte)((ulong)uVar43 >> 0x20) | bVar29;
        bVar30 = (byte)((ulong)uVar43 >> 0x28) | bVar30;
        bVar31 = (byte)((ulong)uVar43 >> 0x30) | bVar31;
        bVar32 = (byte)((ulong)uVar43 >> 0x38) | bVar32;
        bVar33 = (byte)uVar44 | bVar33;
        bVar34 = (byte)((ulong)uVar44 >> 8) | bVar34;
        bVar35 = (byte)((ulong)uVar44 >> 0x10) | bVar35;
        bVar36 = (byte)((ulong)uVar44 >> 0x18) | bVar36;
        bVar37 = (byte)((ulong)uVar44 >> 0x20) | bVar37;
        bVar38 = (byte)((ulong)uVar44 >> 0x28) | bVar38;
        bVar39 = (byte)((ulong)uVar44 >> 0x30) | bVar39;
        bVar40 = (byte)((ulong)uVar44 >> 0x38) | bVar40;
        puVar6 = puVar6 + 4;
        uVar7 = uVar7 - 4;
      } while (uVar7 != 0);
      bVar24 = bVar24 | bVar8;
      bVar26 = bVar26 | bVar9;
      bVar27 = bVar27 | bVar10;
      bVar28 = bVar28 | bVar11;
      bVar29 = bVar29 | bVar12;
      bVar30 = bVar30 | bVar13;
      bVar31 = bVar31 | bVar14;
      bVar32 = bVar32 | bVar15;
      auVar25[1] = bVar26;
      auVar25[0] = bVar24;
      auVar25[2] = bVar27;
      auVar25[3] = bVar28;
      auVar25[4] = bVar29;
      auVar25[5] = bVar30;
      auVar25[6] = bVar31;
      auVar25[7] = bVar32;
      auVar25[8] = bVar33 | bVar16;
      auVar25[9] = bVar34 | bVar17;
      auVar25[10] = bVar35 | bVar18;
      auVar25[0xb] = bVar36 | bVar19;
      auVar25[0xc] = bVar37 | bVar20;
      auVar25[0xd] = bVar38 | bVar21;
      auVar25[0xe] = bVar39 | bVar22;
      auVar25[0xf] = bVar40 | bVar23;
      auVar1[1] = bVar26;
      auVar1[0] = bVar24;
      auVar1[2] = bVar27;
      auVar1[3] = bVar28;
      auVar1[4] = bVar29;
      auVar1[5] = bVar30;
      auVar1[6] = bVar31;
      auVar1[7] = bVar32;
      auVar1[8] = bVar33 | bVar16;
      auVar1[9] = bVar34 | bVar17;
      auVar1[10] = bVar35 | bVar18;
      auVar1[0xb] = bVar36 | bVar19;
      auVar1[0xc] = bVar37 | bVar20;
      auVar1[0xd] = bVar38 | bVar21;
      auVar1[0xe] = bVar39 | bVar22;
      auVar1[0xf] = bVar40 | bVar23;
      auVar25 = NEON_ext(auVar25,auVar1,8,1);
      uVar7 = CONCAT17(bVar32 | auVar25[7],
                       CONCAT16(bVar31 | auVar25[6],
                                CONCAT15(bVar30 | auVar25[5],
                                         CONCAT14(bVar29 | auVar25[4],
                                                  CONCAT13(bVar28 | auVar25[3],
                                                           CONCAT12(bVar27 | auVar25[2],
                                                                    CONCAT11(bVar26 | auVar25[1],
                                                                             bVar24 | auVar25[0]))))
                                        )));
      if (uVar2 == uVar4) goto LAB_103f1b404;
    }
    lVar3 = uVar2 - uVar4;
    puVar5 = (ulong *)(param_2 + uVar4 * 8 + 0x20);
    do {
      uVar7 = *puVar5 | uVar7;
      lVar3 = lVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
LAB_103f1b404:
  _swift_bridgeObjectRelease();
  *param_1 = uVar7;
  return;
}



/* Entry: 103f1b418; end: 103f1b42f;  */

undefined1  [16] FUN_103f1b418(void)

{
  return ZEXT816(0x110721950);
}



/* Entry: 103f1b430; end: 103f1b52f;  */

long FUN_103f1b430(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103f1b530; end: 103f1b6d7;  */

undefined * FUN_103f1b530(void)

{
  return &UNK_10dcaaed8;
}



/* Entry: 103f1b6d8; end: 103f1b77f;  */

void FUN_103f1b6d8(ulong *param_1,long param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined1 auVar25 [16];
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  if (uVar2 == 0) {
    uVar7 = 0;
  }
  else {
    if (uVar2 < 4) {
      uVar4 = 0;
      uVar7 = 0;
    }
    else {
      uVar4 = uVar2 & 0x7ffffffffffffffc;
      puVar6 = (undefined8 *)(param_2 + 0x30);
      bVar8 = 0;
      bVar9 = 0;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = 0;
      bVar13 = 0;
      bVar14 = 0;
      bVar15 = 0;
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      uVar7 = uVar4;
      do {
        uVar42 = puVar6[-1];
        uVar41 = puVar6[-2];
        uVar44 = puVar6[1];
        uVar43 = *puVar6;
        bVar8 = (byte)uVar41 | bVar8;
        bVar9 = (byte)((ulong)uVar41 >> 8) | bVar9;
        bVar10 = (byte)((ulong)uVar41 >> 0x10) | bVar10;
        bVar11 = (byte)((ulong)uVar41 >> 0x18) | bVar11;
        bVar12 = (byte)((ulong)uVar41 >> 0x20) | bVar12;
        bVar13 = (byte)((ulong)uVar41 >> 0x28) | bVar13;
        bVar14 = (byte)((ulong)uVar41 >> 0x30) | bVar14;
        bVar15 = (byte)((ulong)uVar41 >> 0x38) | bVar15;
        bVar16 = (byte)uVar42 | bVar16;
        bVar17 = (byte)((ulong)uVar42 >> 8) | bVar17;
        bVar18 = (byte)((ulong)uVar42 >> 0x10) | bVar18;
        bVar19 = (byte)((ulong)uVar42 >> 0x18) | bVar19;
        bVar20 = (byte)((ulong)uVar42 >> 0x20) | bVar20;
        bVar21 = (byte)((ulong)uVar42 >> 0x28) | bVar21;
        bVar22 = (byte)((ulong)uVar42 >> 0x30) | bVar22;
        bVar23 = (byte)((ulong)uVar42 >> 0x38) | bVar23;
        bVar24 = (byte)uVar43 | bVar24;
        bVar26 = (byte)((ulong)uVar43 >> 8) | bVar26;
        bVar27 = (byte)((ulong)uVar43 >> 0x10) | bVar27;
        bVar28 = (byte)((ulong)uVar43 >> 0x18) | bVar28;
        bVar29 = (byte)((ulong)uVar43 >> 0x20) | bVar29;
        bVar30 = (byte)((ulong)uVar43 >> 0x28) | bVar30;
        bVar31 = (byte)((ulong)uVar43 >> 0x30) | bVar31;
        bVar32 = (byte)((ulong)uVar43 >> 0x38) | bVar32;
        bVar33 = (byte)uVar44 | bVar33;
        bVar34 = (byte)((ulong)uVar44 >> 8) | bVar34;
        bVar35 = (byte)((ulong)uVar44 >> 0x10) | bVar35;
        bVar36 = (byte)((ulong)uVar44 >> 0x18) | bVar36;
        bVar37 = (byte)((ulong)uVar44 >> 0x20) | bVar37;
        bVar38 = (byte)((ulong)uVar44 >> 0x28) | bVar38;
        bVar39 = (byte)((ulong)uVar44 >> 0x30) | bVar39;
        bVar40 = (byte)((ulong)uVar44 >> 0x38) | bVar40;
        puVar6 = puVar6 + 4;
        uVar7 = uVar7 - 4;
      } while (uVar7 != 0);
      bVar24 = bVar24 | bVar8;
      bVar26 = bVar26 | bVar9;
      bVar27 = bVar27 | bVar10;
      bVar28 = bVar28 | bVar11;
      bVar29 = bVar29 | bVar12;
      bVar30 = bVar30 | bVar13;
      bVar31 = bVar31 | bVar14;
      bVar32 = bVar32 | bVar15;
      auVar25[1] = bVar26;
      auVar25[0] = bVar24;
      auVar25[2] = bVar27;
      auVar25[3] = bVar28;
      auVar25[4] = bVar29;
      auVar25[5] = bVar30;
      auVar25[6] = bVar31;
      auVar25[7] = bVar32;
      auVar25[8] = bVar33 | bVar16;
      auVar25[9] = bVar34 | bVar17;
      auVar25[10] = bVar35 | bVar18;
      auVar25[0xb] = bVar36 | bVar19;
      auVar25[0xc] = bVar37 | bVar20;
      auVar25[0xd] = bVar38 | bVar21;
      auVar25[0xe] = bVar39 | bVar22;
      auVar25[0xf] = bVar40 | bVar23;
      auVar1[1] = bVar26;
      auVar1[0] = bVar24;
      auVar1[2] = bVar27;
      auVar1[3] = bVar28;
      auVar1[4] = bVar29;
      auVar1[5] = bVar30;
      auVar1[6] = bVar31;
      auVar1[7] = bVar32;
      auVar1[8] = bVar33 | bVar16;
      auVar1[9] = bVar34 | bVar17;
      auVar1[10] = bVar35 | bVar18;
      auVar1[0xb] = bVar36 | bVar19;
      auVar1[0xc] = bVar37 | bVar20;
      auVar1[0xd] = bVar38 | bVar21;
      auVar1[0xe] = bVar39 | bVar22;
      auVar1[0xf] = bVar40 | bVar23;
      auVar25 = NEON_ext(auVar25,auVar1,8,1);
      uVar7 = CONCAT17(bVar32 | auVar25[7],
                       CONCAT16(bVar31 | auVar25[6],
                                CONCAT15(bVar30 | auVar25[5],
                                         CONCAT14(bVar29 | auVar25[4],
                                                  CONCAT13(bVar28 | auVar25[3],
                                                           CONCAT12(bVar27 | auVar25[2],
                                                                    CONCAT11(bVar26 | auVar25[1],
                                                                             bVar24 | auVar25[0]))))
                                        )));
      if (uVar2 == uVar4) goto LAB_103f1b76c;
    }
    lVar3 = uVar2 - uVar4;
    puVar5 = (ulong *)(param_2 + uVar4 * 8 + 0x20);
    do {
      uVar7 = *puVar5 | uVar7;
      lVar3 = lVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
LAB_103f1b76c:
  _swift_bridgeObjectRelease();
  *param_1 = uVar7;
  return;
}



/* Entry: 103f1b780; end: 103f1b783;  */

void FUN_103f1b780(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e5c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaaf18;
  _swift_getWitnessTable(&UNK_10dcaaf18,&UNK_110721b50);
  puRam000000011302e5c8 = puVar1;
  return;
}



/* Entry: 103f1b784; end: 103f1b7c3;  */

void FUN_103f1b784(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e5c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaaf18;
  _swift_getWitnessTable(&UNK_10dcaaf18,&UNK_110721b50);
  puRam000000011302e5c8 = puVar1;
  return;
}



/* Entry: 103f1b7c4; end: 103f1b7c7;  */

void FUN_103f1b7c4(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e5d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaaf50;
  _swift_getWitnessTable(&UNK_10dcaaf50,&UNK_110721b50);
  puRam000000011302e5d0 = puVar1;
  return;
}



/* Entry: 103f1b7c8; end: 103f1b807;  */

void FUN_103f1b7c8(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e5d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaaf50;
  _swift_getWitnessTable(&UNK_10dcaaf50,&UNK_110721b50);
  puRam000000011302e5d0 = puVar1;
  return;
}



/* Entry: 103f1b808; end: 103f1b80b;  */

void FUN_103f1b808(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e5d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcab018;
  _swift_getWitnessTable(&UNK_10dcab018,&UNK_110721b50);
  puRam000000011302e5d8 = puVar1;
  return;
}



/* Entry: 103f1b80c; end: 103f1b84b;  */

void FUN_103f1b80c(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e5d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcab018;
  _swift_getWitnessTable(&UNK_10dcab018,&UNK_110721b50);
  puRam000000011302e5d8 = puVar1;
  return;
}



/* Entry: 103f1b84c; end: 103f1b84f;  */

void FUN_103f1b84c(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e5e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcab040;
  _swift_getWitnessTable(&UNK_10dcab040,&UNK_110721b50);
  puRam000000011302e5e0 = puVar1;
  return;
}



/* Entry: 103f1b850; end: 103f1b88f;  */

void FUN_103f1b850(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e5e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcab040;
  _swift_getWitnessTable(&UNK_10dcab040,&UNK_110721b50);
  puRam000000011302e5e0 = puVar1;
  return;
}



/* Entry: 103f1b890; end: 103f1b8a7;  */

bool FUN_103f1b890(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103f1b8a8; end: 103f1b8e7;  */

void FUN_103f1b8a8(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e5e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcab070;
  _swift_getWitnessTable(&UNK_10dcab070,&UNK_110721b78);
  puRam000000011302e5e8 = puVar1;
  return;
}



/* Entry: 103f1b8e8; end: 103f1b993;  */

void FUN_103f1b8e8(void)

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



/* Entry: 103f1b994; end: 103f1b9f3;  */

void FUN_103f1b994(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 103f1b9f4; end: 103f1bacb;  */

void FUN_103f1b9f4(void)

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



/* Entry: 103f1bacc; end: 103f1baeb;  */

void FUN_103f1bacc(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103f1baec; end: 103f1bb2b;  */

void FUN_103f1baec(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e5f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcab160;
  _swift_getWitnessTable(&UNK_10dcab160,&UNK_110721cd8);
  puRam000000011302e5f0 = puVar1;
  return;
}



/* Entry: 103f1bb2c; end: 103f1bb3b;  */

undefined1  [16] FUN_103f1bb2c(void)

{
  return ZEXT816(0x110721cd8);
}



/* Entry: 103f1bb3c; end: 103f1bbe3;  */

void FUN_103f1bb3c(ulong *param_1,long param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined1 auVar25 [16];
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  if (uVar2 == 0) {
    uVar7 = 0;
  }
  else {
    if (uVar2 < 4) {
      uVar4 = 0;
      uVar7 = 0;
    }
    else {
      uVar4 = uVar2 & 0x7ffffffffffffffc;
      puVar6 = (undefined8 *)(param_2 + 0x30);
      bVar8 = 0;
      bVar9 = 0;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = 0;
      bVar13 = 0;
      bVar14 = 0;
      bVar15 = 0;
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      uVar7 = uVar4;
      do {
        uVar42 = puVar6[-1];
        uVar41 = puVar6[-2];
        uVar44 = puVar6[1];
        uVar43 = *puVar6;
        bVar8 = (byte)uVar41 | bVar8;
        bVar9 = (byte)((ulong)uVar41 >> 8) | bVar9;
        bVar10 = (byte)((ulong)uVar41 >> 0x10) | bVar10;
        bVar11 = (byte)((ulong)uVar41 >> 0x18) | bVar11;
        bVar12 = (byte)((ulong)uVar41 >> 0x20) | bVar12;
        bVar13 = (byte)((ulong)uVar41 >> 0x28) | bVar13;
        bVar14 = (byte)((ulong)uVar41 >> 0x30) | bVar14;
        bVar15 = (byte)((ulong)uVar41 >> 0x38) | bVar15;
        bVar16 = (byte)uVar42 | bVar16;
        bVar17 = (byte)((ulong)uVar42 >> 8) | bVar17;
        bVar18 = (byte)((ulong)uVar42 >> 0x10) | bVar18;
        bVar19 = (byte)((ulong)uVar42 >> 0x18) | bVar19;
        bVar20 = (byte)((ulong)uVar42 >> 0x20) | bVar20;
        bVar21 = (byte)((ulong)uVar42 >> 0x28) | bVar21;
        bVar22 = (byte)((ulong)uVar42 >> 0x30) | bVar22;
        bVar23 = (byte)((ulong)uVar42 >> 0x38) | bVar23;
        bVar24 = (byte)uVar43 | bVar24;
        bVar26 = (byte)((ulong)uVar43 >> 8) | bVar26;
        bVar27 = (byte)((ulong)uVar43 >> 0x10) | bVar27;
        bVar28 = (byte)((ulong)uVar43 >> 0x18) | bVar28;
        bVar29 = (byte)((ulong)uVar43 >> 0x20) | bVar29;
        bVar30 = (byte)((ulong)uVar43 >> 0x28) | bVar30;
        bVar31 = (byte)((ulong)uVar43 >> 0x30) | bVar31;
        bVar32 = (byte)((ulong)uVar43 >> 0x38) | bVar32;
        bVar33 = (byte)uVar44 | bVar33;
        bVar34 = (byte)((ulong)uVar44 >> 8) | bVar34;
        bVar35 = (byte)((ulong)uVar44 >> 0x10) | bVar35;
        bVar36 = (byte)((ulong)uVar44 >> 0x18) | bVar36;
        bVar37 = (byte)((ulong)uVar44 >> 0x20) | bVar37;
        bVar38 = (byte)((ulong)uVar44 >> 0x28) | bVar38;
        bVar39 = (byte)((ulong)uVar44 >> 0x30) | bVar39;
        bVar40 = (byte)((ulong)uVar44 >> 0x38) | bVar40;
        puVar6 = puVar6 + 4;
        uVar7 = uVar7 - 4;
      } while (uVar7 != 0);
      bVar24 = bVar24 | bVar8;
      bVar26 = bVar26 | bVar9;
      bVar27 = bVar27 | bVar10;
      bVar28 = bVar28 | bVar11;
      bVar29 = bVar29 | bVar12;
      bVar30 = bVar30 | bVar13;
      bVar31 = bVar31 | bVar14;
      bVar32 = bVar32 | bVar15;
      auVar25[1] = bVar26;
      auVar25[0] = bVar24;
      auVar25[2] = bVar27;
      auVar25[3] = bVar28;
      auVar25[4] = bVar29;
      auVar25[5] = bVar30;
      auVar25[6] = bVar31;
      auVar25[7] = bVar32;
      auVar25[8] = bVar33 | bVar16;
      auVar25[9] = bVar34 | bVar17;
      auVar25[10] = bVar35 | bVar18;
      auVar25[0xb] = bVar36 | bVar19;
      auVar25[0xc] = bVar37 | bVar20;
      auVar25[0xd] = bVar38 | bVar21;
      auVar25[0xe] = bVar39 | bVar22;
      auVar25[0xf] = bVar40 | bVar23;
      auVar1[1] = bVar26;
      auVar1[0] = bVar24;
      auVar1[2] = bVar27;
      auVar1[3] = bVar28;
      auVar1[4] = bVar29;
      auVar1[5] = bVar30;
      auVar1[6] = bVar31;
      auVar1[7] = bVar32;
      auVar1[8] = bVar33 | bVar16;
      auVar1[9] = bVar34 | bVar17;
      auVar1[10] = bVar35 | bVar18;
      auVar1[0xb] = bVar36 | bVar19;
      auVar1[0xc] = bVar37 | bVar20;
      auVar1[0xd] = bVar38 | bVar21;
      auVar1[0xe] = bVar39 | bVar22;
      auVar1[0xf] = bVar40 | bVar23;
      auVar25 = NEON_ext(auVar25,auVar1,8,1);
      uVar7 = CONCAT17(bVar32 | auVar25[7],
                       CONCAT16(bVar31 | auVar25[6],
                                CONCAT15(bVar30 | auVar25[5],
                                         CONCAT14(bVar29 | auVar25[4],
                                                  CONCAT13(bVar28 | auVar25[3],
                                                           CONCAT12(bVar27 | auVar25[2],
                                                                    CONCAT11(bVar26 | auVar25[1],
                                                                             bVar24 | auVar25[0]))))
                                        )));
      if (uVar2 == uVar4) goto LAB_103f1bbd0;
    }
    lVar3 = uVar2 - uVar4;
    puVar5 = (ulong *)(param_2 + uVar4 * 8 + 0x20);
    do {
      uVar7 = *puVar5 | uVar7;
      lVar3 = lVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
LAB_103f1bbd0:
  _swift_bridgeObjectRelease();
  *param_1 = uVar7;
  return;
}



/* Entry: 103f1bbe4; end: 103f1bbe7;  */

void FUN_103f1bbe4(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e5f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcab258;
  _swift_getWitnessTable(&UNK_10dcab258,&UNK_110721d50);
  puRam000000011302e5f8 = puVar1;
  return;
}



/* Entry: 103f1bbe8; end: 103f1bc27;  */

void FUN_103f1bbe8(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e5f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcab258;
  _swift_getWitnessTable(&UNK_10dcab258,&UNK_110721d50);
  puRam000000011302e5f8 = puVar1;
  return;
}



/* Entry: 103f1bc28; end: 103f1bc2b;  */

void FUN_103f1bc28(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e600 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcab290;
  _swift_getWitnessTable(&UNK_10dcab290,&UNK_110721d50);
  puRam000000011302e600 = puVar1;
  return;
}



/* Entry: 103f1bc2c; end: 103f1bc6b;  */

void FUN_103f1bc2c(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e600 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcab290;
  _swift_getWitnessTable(&UNK_10dcab290,&UNK_110721d50);
  puRam000000011302e600 = puVar1;
  return;
}



/* Entry: 103f1bc6c; end: 103f1bc6f;  */

void FUN_103f1bc6c(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e608 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcab358;
  _swift_getWitnessTable(&UNK_10dcab358,&UNK_110721d50);
  puRam000000011302e608 = puVar1;
  return;
}



/* Entry: 103f1bc70; end: 103f1bcaf;  */

void FUN_103f1bc70(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e608 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcab358;
  _swift_getWitnessTable(&UNK_10dcab358,&UNK_110721d50);
  puRam000000011302e608 = puVar1;
  return;
}



/* Entry: 103f1bcb0; end: 103f1bcb3;  */

void FUN_103f1bcb0(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e610 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcab380;
  _swift_getWitnessTable(&UNK_10dcab380,&UNK_110721d50);
  puRam000000011302e610 = puVar1;
  return;
}



/* Entry: 103f1bcb4; end: 103f1bcf3;  */

void FUN_103f1bcb4(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e610 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcab380;
  _swift_getWitnessTable(&UNK_10dcab380,&UNK_110721d50);
  puRam000000011302e610 = puVar1;
  return;
}



/* Entry: 103f1bcf4; end: 103f1bcf7;  */

void FUN_103f1bcf4(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e618 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcab3e8;
  _swift_getWitnessTable(&UNK_10dcab3e8,&UNK_110721d78);
  puRam000000011302e618 = puVar1;
  return;
}



/* Entry: 103f1bcf8; end: 103f1bd37;  */

void FUN_103f1bcf8(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e618 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcab3e8;
  _swift_getWitnessTable(&UNK_10dcab3e8,&UNK_110721d78);
  puRam000000011302e618 = puVar1;
  return;
}



/* Entry: 103f1bd38; end: 103f1bd3b;  */

void FUN_103f1bd38(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e620 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcab420;
  _swift_getWitnessTable(&UNK_10dcab420,&UNK_110721d78);
  puRam000000011302e620 = puVar1;
  return;
}



/* Entry: 103f1bd3c; end: 103f1bd7b;  */

void FUN_103f1bd3c(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e620 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcab420;
  _swift_getWitnessTable(&UNK_10dcab420,&UNK_110721d78);
  puRam000000011302e620 = puVar1;
  return;
}



/* Entry: 103f1bd7c; end: 103f1bd7f;  */

void FUN_103f1bd7c(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e628 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcab4e8;
  _swift_getWitnessTable(&UNK_10dcab4e8,&UNK_110721d78);
  puRam000000011302e628 = puVar1;
  return;
}



/* Entry: 103f1bd80; end: 103f1bdbf;  */

void FUN_103f1bd80(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e628 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcab4e8;
  _swift_getWitnessTable(&UNK_10dcab4e8,&UNK_110721d78);
  puRam000000011302e628 = puVar1;
  return;
}



/* Entry: 103f1bdc0; end: 103f1bdc3;  */

void FUN_103f1bdc0(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e630 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcab510;
  _swift_getWitnessTable(&UNK_10dcab510,&UNK_110721d78);
  puRam000000011302e630 = puVar1;
  return;
}



/* Entry: 103f1bdc4; end: 103f1be03;  */

void FUN_103f1bdc4(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e630 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcab510;
  _swift_getWitnessTable(&UNK_10dcab510,&UNK_110721d78);
  puRam000000011302e630 = puVar1;
  return;
}



/* Entry: 103f1be04; end: 103f1be1b;  */

bool FUN_103f1be04(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103f1be1c; end: 103f1be5b;  */

void FUN_103f1be1c(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e638 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcab540;
  _swift_getWitnessTable(&UNK_10dcab540,&UNK_110721da0);
  puRam000000011302e638 = puVar1;
  return;
}



/* Entry: 103f1be5c; end: 103f1bf07;  */

void FUN_103f1be5c(void)

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



/* Entry: 103f1bf08; end: 103f1c00f;  */

void FUN_103f1bf08(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 103f1c010; end: 103f1c05b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1c010(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302e640) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f1c05c; end: 103f1c0bb; -[_TtC27SCStoriesExperimentServices27SCStoriesExperimentServices init] */

void FUN_103f1c05c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCStoriesExperimentServices.SCStoriesExperimentServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f1c088);
  (*pcVar1)();
}



/* Entry: 103f1c0bc; end: 103f1c0cb; -[_TtC27SCStoriesExperimentServices27SCStoriesExperimentServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1c0bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302e640));
  return;
}



/* Entry: 103f1c0cc; end: 103f1c0db; -[SCUpNextV2Config isEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103f1c0cc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11302e670);
}



/* Entry: 103f1c0dc; end: 103f1c0eb; -[SCUpNextV2Config pageSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f1c0dc(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302e678);
}



/* Entry: 103f1c0ec; end: 103f1c0fb; -[SCUpNextV2Config nextPageTriggerThreshold] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f1c0ec(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302e680);
}



/* Entry: 103f1c0fc; end: 103f1c10b; -[SCUpNextV2Config shouldStartAfterFriendStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f1c0fc(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302e688);
}



/* Entry: 103f1c10c; end: 103f1c11b; -[SCUpNextV2Config pageSizeInitial] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f1c10c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302e690);
}



/* Entry: 103f1c11c; end: 103f1c12b; -[SCUpNextV2Config enableCustomMediaPrefetch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103f1c11c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11302e698);
}



/* Entry: 103f1c12c; end: 103f1c13b; -[SCUpNextV2Config enableUpnextOnBoosting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103f1c12c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11302e6a0);
}



/* Entry: 103f1c13c; end: 103f1c14b; -[SCUpNextV2Config enableUpNextOnSubscription] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103f1c13c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11302e6a8);
}



/* Entry: 103f1c14c; end: 103f1c15b; -[SCUpNextV2Config defaultPlaylistStoriesCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f1c14c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302e6b0);
}



/* Entry: 103f1c15c; end: 103f1c16b; -[SCUpNextV2Config pageSizeWwan] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f1c15c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302e6b8);
}



/* Entry: 103f1c16c; end: 103f1c17b; -[SCUpNextV2Config nextPageTriggerThresholdWwan] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f1c16c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302e6c0);
}



/* Entry: 103f1c17c; end: 103f1c18b; -[SCUpNextV2Config pageSizeInitialWwan] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f1c17c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302e6c8);
}



/* Entry: 103f1c18c; end: 103f1c19b; -[SCUpNextV2Config enableSeparateDataStore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103f1c18c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11302e6d0);
}



/* Entry: 103f1c19c; end: 103f1c1ab; -[SCUpNextV2Config fsAutoAdvanceTriggeringOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f1c19c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302e6d8);
}



/* Entry: 103f1c1ac; end: 103f1c1bb; -[SCUpNextV2Config enableMixedFeed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103f1c1ac(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11302e6e0);
}


