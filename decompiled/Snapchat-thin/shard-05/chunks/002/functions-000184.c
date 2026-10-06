/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103c555c4; end: 103c555ff;  */

void FUN_103c555c4(char *param_1)

{
  func_0x0001048969bc();
  uRam0000000112ffb568 = 0x61746542;
  if (*param_1 == '\0') {
    uRam0000000112ffb568 = 0;
  }
  uRam0000000112ffb570 = 0xe400000000000000;
  if (*param_1 == '\0') {
    uRam0000000112ffb570 = 0;
  }
  return;
}



/* Entry: 103c55600; end: 103c5570b;  */

void FUN_103c55600(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (lRam0000000112ffb560 != -1) {
    func_0x000107c61568(0x112ffb560,FUN_103c555c4);
  }
  lVar2 = lRam0000000112ffb570;
  uVar1 = uRam0000000112ffb568;
  if (lRam0000000112ffb570 == 0) {
    if (lRam0000000112ffb578 != -1) {
      func_0x000107c61568(0x112ffb578,FUN_103c55430);
    }
    uVar4 = uRam0000000112ffb580;
    uVar3 = uRam0000000112ffb588;
    func_0x000107c61434();
  }
  else {
    if (lRam0000000112ffb578 != -1) {
      func_0x000107c61568(0x112ffb578,FUN_103c55430);
    }
    uVar3 = uRam0000000112ffb588;
    uVar4 = uRam0000000112ffb580;
    func_0x000107c61434();
    func_0x000107c5fb78(0x20,0xe100000000000000);
    func_0x000107c5fb78(uVar1,lVar2);
  }
  uRam0000000112ffb550 = uVar4;
  uRam0000000112ffb558 = uVar3;
  return;
}



/* Entry: 103c5570c; end: 103c5572b;  */

void FUN_103c5570c(undefined8 param_1,undefined8 param_2)

{
  FUN_103c5572c();
  uRam0000000112ffb520 = param_1;
  uRam0000000112ffb528 = param_2;
  return;
}



/* Entry: 103c5572c; end: 103c558f7;  */

undefined1  [16] FUN_103c5572c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  puVar4 = PTR_PTR_1126b2930;
  func_0x000107c61168(PTR_PTR_1126b2930);
  func_0x000107c40efc();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c446b4();
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c5faec();
  uVar8 = param_2;
  func_0x000107c61170(puVar5);
  puVar5 = puVar4;
  func_0x000107c5c650(puVar4);
  func_0x000107c61180();
  puVar7 = puVar5;
  func_0x000107c5faec();
  func_0x000107c61170(puVar5);
  func_0x000107c602fc(0x18);
  if (lRam0000000112ffb530 != -1) {
    func_0x000107c61568(0x112ffb530,FUN_103c55198);
  }
  uVar3 = uRam0000000112ffb540;
  uVar2 = uRam0000000112ffb538;
  func_0x000107c61434(uRam0000000112ffb540);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(0x2f,0xe100000000000000);
  if (lRam0000000112ffb548 != -1) {
    func_0x000107c61568(0x112ffb548,FUN_103c55600);
  }
  func_0x000107c5fb78(uRam0000000112ffb550,uRam0000000112ffb558);
  func_0x000107c5fb78(0x2820,0xe200000000000000);
  func_0x000107c5fb78(puVar6,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c5fb78(0x20534f69203b,0xe600000000000000);
  func_0x000107c5fb78(puVar7,uVar8);
  func_0x000107c6142c(uVar8);
  func_0x000107c5fb78(0x2970697a67203b,0xe700000000000000);
  func_0x000107c61170(puVar4);
  auVar1._8_8_ = uVar3;
  auVar1._0_8_ = uVar2;
  return auVar1;
}



/* Entry: 103c558f8; end: 103c5593b;  */

undefined * FUN_103c558f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48;
  func_0x000107c610f8(PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48);
  func_0x000107c453e4();
  func_0x000107c53df8();
  func_0x000107c526a4(puVar1,param_2,1);
  return puVar1;
}



/* Entry: 103c5593c; end: 103c5597f; +[_TtC11WebViewUtil11WebViewUtil createDefaultWebViewConfiguration] */

void FUN_103c5593c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48;
  func_0x000107c610f8(PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48);
  func_0x000107c453e4();
  func_0x000107c53df8();
  func_0x000107c526a4(puVar1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 103c55980; end: 103c55987;  */

undefined8 FUN_103c55980(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long lVar7;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong uVar9;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 extraout_x12_01;
  long extraout_x13;
  long lVar10;
  code *pcVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5ebbc();
  lVar10 = *(long *)(lVar1 + -8);
  lStack_78 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar5 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_68 = (long)puVar5 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = ((long)puVar5 - extraout_x12) - extraout_x12_00;
  lVar1 = 0x112d4b5b0;
  lStack_80 = lVar7;
  func_0x0001000285a8(0x112d4b5b0,&UNK_10d912140);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar7 - extraout_x8_00;
  lVar2 = 0;
  func_0x000107c5ec24();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar8 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0x112d36580;
  lStack_70 = lVar8;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar8 - extraout_x8_02;
  lVar1 = 0;
  func_0x000107c5ede0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar12 = lVar8 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  FUN_103c56938(param_1,lVar8,0x112d36580,&UNK_10d9016d0);
  lVar1 = lVar8;
  (**(code **)(extraout_x13 + 0x30))(lVar8,1,extraout_x12_01);
  if ((int)lVar1 == 1) {
    uVar4 = 0x112d36580;
    puVar6 = &UNK_10d9016d0;
    lVar7 = lVar8;
  }
  else {
    (**(code **)(extraout_x13 + 0x20))(lVar12,lVar8,extraout_x12_01);
    func_0x000107c5ebe4(lVar7,lVar12,1);
    lVar8 = lVar7;
    (**(code **)(lVar14 + 0x30))(lVar7,1,lVar2);
    lVar1 = lStack_70;
    if ((int)lVar8 != 1) {
      lVar8 = lStack_70;
      lStack_98 = extraout_x13;
      lStack_90 = lVar12;
      uStack_88 = extraout_x12_01;
      (**(code **)(lVar14 + 0x20))(lStack_70,lVar7,lVar2);
      func_0x000107c5ebc4();
      lVar7 = lStack_78;
      if (lVar8 == 0) {
        (**(code **)(lVar14 + 8))(lVar1,lVar2);
        pcVar11 = *(code **)(lStack_98 + 8);
        lVar1 = lStack_90;
      }
      else {
        uVar9 = *(ulong *)(lVar8 + 0x10);
        lStack_a8 = lVar14;
        lStack_a0 = lVar2;
        if (uVar9 != 0) {
          uVar13 = 0;
          do {
            lVar1 = lStack_68;
            if (*(ulong *)(lVar8 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x103c56310);
              (*pcVar11)();
            }
            (**(code **)(lVar10 + 0x10))
                      (lStack_68,
                       lVar8 + ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff)) +
                       *(long *)(lVar10 + 0x48) * uVar13,lVar7);
            pcVar11 = *(code **)(lVar10 + 0x20);
            puVar3 = puVar5;
            (*pcVar11)(puVar5,lVar1,lVar7);
            func_0x000107c5ebb4();
            lVar2 = lVar1;
            func_0x000107c5fb1c();
            func_0x000107c6142c(lVar1);
            if ((puVar3 == (undefined1 *)0x7461686370616e73) && (lVar2 == -0x14ffffffff9e8aa1)) {
              func_0x000107c6142c(lVar8);
              lVar8 = -0x14ffffffff9e8aa1;
LAB_103c56148:
              lVar1 = lStack_80;
              func_0x000107c6142c(lVar8);
              lVar2 = lVar1;
              (*pcVar11)(lVar1,puVar5,lVar7);
              func_0x000107c5ebb8();
              (**(code **)(lVar10 + 8))(lVar1,lVar7);
              lVar1 = lStack_90;
              if (puVar5 != (undefined1 *)0x0) {
                uVar9 = 0;
                puVar3 = puVar5;
                func_0x000107c5fb24();
                func_0x000107c6142c(puVar5);
                if (((lVar2 != 0x59434147454c) || (puVar3 != (undefined1 *)0xe600000000000000)) &&
                   (func_0x000107c605b8(0x59434147454c,0xe600000000000000,lVar2,puVar3,0),
                   lVar10 = lStack_70, lVar8 = lStack_a0, lVar7 = lStack_a8, (uVar9 & 1) == 0)) {
                  uVar9 = 0;
                  if ((lVar2 == 0x45564954414e) && (puVar3 == (undefined1 *)0xe600000000000000)) {
                    func_0x000107c6142c(0xe600000000000000);
                    (**(code **)(lVar7 + 8))(lVar10,lVar8);
                    (**(code **)(lStack_98 + 8))(lVar1,uStack_88);
                  }
                  else {
                    func_0x000107c605b8(0x45564954414e,0xe600000000000000,lVar2,puVar3,0);
                    func_0x000107c6142c(puVar3);
                    (**(code **)(lVar7 + 8))(lVar10,lVar8);
                    (**(code **)(lStack_98 + 8))(lVar1,uStack_88);
                    if ((uVar9 & 1) == 0) {
                      return 0;
                    }
                  }
                  return 2;
                }
                func_0x000107c6142c(puVar3);
                (**(code **)(lStack_a8 + 8))(lStack_70,lStack_a0);
                (**(code **)(lStack_98 + 8))(lVar1,uStack_88);
                return 1;
              }
              goto LAB_103c56218;
            }
            func_0x000107c605b8(puVar3,lVar2,0x7461686370616e73,0xeb0000000061755f,0);
            func_0x000107c6142c(lVar2);
            if (((ulong)puVar3 & 1) != 0) goto LAB_103c56148;
            uVar13 = uVar13 + 1;
            (**(code **)(lVar10 + 8))(puVar5,lVar7);
          } while (uVar9 != uVar13);
        }
        func_0x000107c6142c(lVar8);
LAB_103c56218:
        lVar1 = lStack_90;
        (**(code **)(lStack_a8 + 8))(lStack_70,lStack_a0);
        pcVar11 = *(code **)(lStack_98 + 8);
      }
      (*pcVar11)(lVar1,uStack_88);
      return 0;
    }
    (**(code **)(extraout_x13 + 8))(lVar12,extraout_x12_01);
    uVar4 = 0x112d4b5b0;
    puVar6 = &UNK_10d912140;
  }
  func_0x000103c56980(lVar7,uVar4,puVar6);
  return 0;
}



/* Entry: 103c55988; end: 103c55b33; +[_TtC11WebViewUtil11WebViewUtil customUserAgentWithIsAd:url:] */

void FUN_103c55988(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffd0 + -extraout_x8;
  if (param_4 == 0) {
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(puVar3,param_4);
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar3,param_4 == 0,1);
  puVar2 = puVar3;
  FUN_103c56310(param_3,puVar3);
  func_0x000103c56980(puVar3,0x112d36580,&UNK_10d9016d0);
  func_0x000107c5fadc(param_3,puVar2);
  func_0x000107c6142c(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103c55b34; end: 103c55bf7; +[_TtC11WebViewUtil11WebViewUtil setupWebView:] */

/* WARNING: Possible PIC construction at 0x000103c55b8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c55bcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c55b90) */
/* WARNING: Removing unreachable block (ram,0x000103c55bd0) */

void FUN_103c55b34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c52690();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(param_3,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 103c55bf8; end: 103c55bfb;  */

undefined1  [16] FUN_103c55bf8(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long extraout_x8;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_210 [8];
  undefined8 auStack_208 [25];
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
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
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  uStack_88 = param_1[0x15];
  uStack_90 = param_1[0x14];
  uStack_78 = param_1[0x17];
  uStack_80 = param_1[0x16];
  uStack_70 = param_1[0x18];
  uStack_c8 = param_1[0xd];
  uStack_d0 = param_1[0xc];
  uStack_b8 = param_1[0xf];
  uStack_c0 = param_1[0xe];
  uStack_a8 = param_1[0x11];
  uStack_b0 = param_1[0x10];
  uStack_98 = param_1[0x13];
  uStack_a0 = param_1[0x12];
  uStack_108 = param_1[5];
  uStack_110 = param_1[4];
  uStack_f8 = param_1[7];
  uStack_100 = param_1[6];
  uStack_e8 = param_1[9];
  puStack_f0 = (undefined8 *)param_1[8];
  uStack_d8 = param_1[0xb];
  uStack_e0 = param_1[10];
  uStack_128 = param_1[1];
  uStack_130 = *param_1;
  uStack_118 = param_1[3];
  uStack_120 = param_1[2];
  puVar2 = &uStack_130;
  func_0x000101424a7c();
  auStack_208[0] = uStack_e0;
  if ((int)puVar2 == 1) {
    func_0x000107c5eec4(auStack_210 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5eeac();
    (**(code **)(lVar4 + 8))(auStack_210 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
    puStack_140 = puVar2;
  }
  else {
    uStack_58 = uStack_e8;
    puStack_60 = puStack_f0;
    uStack_138 = uStack_e8;
    puStack_140 = puStack_f0;
    FUN_103c56938(param_1,auStack_208,0x112d7e768,&UNK_10d93c7c0);
    func_0x000100402194(&puStack_60,auStack_208);
    func_0x000107c5fb78(0x2d,0xe100000000000000);
    puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar3);
    func_0x000103c56980(param_1,0x112d7e768,&UNK_10d93c7c0);
    param_2 = uStack_138;
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = puStack_140;
  return auVar5;
}



/* Entry: 103c55bfc; end: 103c55d0f; +[_TtC11WebViewUtil11WebViewUtil webViewIdForAdConfig:] */

void FUN_103c55bfc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
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
  undefined8 uStack_40;
  
  puVar1 = &uStack_1d0;
  if (param_3 == 0) {
    func_0x000101424ef0(&uStack_100);
  }
  else {
    func_0x000107c61174(param_3);
    func_0x000107c61174();
    func_0x000104657bfc(&uStack_1d0);
    func_0x000101424fac(&uStack_1d0);
    uStack_58 = uStack_128;
    uStack_60 = uStack_130;
    uStack_48 = uStack_118;
    uStack_50 = uStack_120;
    uStack_40 = uStack_110;
    uStack_98 = uStack_168;
    uStack_a0 = uStack_170;
    uStack_88 = uStack_158;
    uStack_90 = uStack_160;
    uStack_78 = uStack_148;
    uStack_80 = uStack_150;
    uStack_68 = uStack_138;
    uStack_70 = uStack_140;
    uStack_d8 = uStack_1a8;
    uStack_e0 = uStack_1b0;
    uStack_c8 = uStack_198;
    uStack_d0 = uStack_1a0;
    uStack_b8 = uStack_188;
    uStack_c0 = uStack_190;
    uStack_a8 = uStack_178;
    uStack_b0 = uStack_180;
    uStack_f8 = uStack_1c8;
    uStack_100 = uStack_1d0;
    uStack_e8 = uStack_1b8;
    uStack_f0 = uStack_1c0;
  }
  uStack_128 = uStack_58;
  uStack_130 = uStack_60;
  uStack_118 = uStack_48;
  uStack_120 = uStack_50;
  uStack_110 = uStack_40;
  uStack_168 = uStack_98;
  uStack_170 = uStack_a0;
  uStack_158 = uStack_88;
  uStack_160 = uStack_90;
  uStack_148 = uStack_78;
  uStack_150 = uStack_80;
  uStack_138 = uStack_68;
  uStack_140 = uStack_70;
  uStack_1a8 = uStack_d8;
  uStack_1b0 = uStack_e0;
  uStack_198 = uStack_c8;
  uStack_1a0 = uStack_d0;
  uStack_188 = uStack_b8;
  uStack_190 = uStack_c0;
  uStack_178 = uStack_a8;
  uStack_180 = uStack_b0;
  uStack_1c8 = uStack_f8;
  uStack_1d0 = uStack_100;
  uStack_1b8 = uStack_e8;
  uStack_1c0 = uStack_f0;
  FUN_103c56790(&uStack_1d0);
  func_0x000103c56980(&uStack_100,0x112d7e768,&UNK_10d93c7c0);
  func_0x000107c61170(param_3);
  func_0x000107c5fadc(puVar1,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 103c55d10; end: 103c55d4b; -[_TtC11WebViewUtil11WebViewUtil init] */

void FUN_103c55d10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103c55d4c; end: 103c55d7f;  */

void FUN_103c55d4c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103c55d80; end: 103c55d83; -[_TtC11WebViewUtil11WebViewUtil .cxx_destruct] */

void FUN_103c55d80(void)

{
  return;
}



/* Entry: 103c55d84; end: 103c5630f;  */

undefined8 FUN_103c55d84(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long lVar7;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong uVar9;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 extraout_x12_01;
  long extraout_x13;
  long lVar10;
  code *pcVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5ebbc();
  lVar10 = *(long *)(lVar1 + -8);
  lStack_78 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar5 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_68 = (long)puVar5 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = ((long)puVar5 - extraout_x12) - extraout_x12_00;
  lVar1 = 0x112d4b5b0;
  lStack_80 = lVar7;
  func_0x0001000285a8(0x112d4b5b0,&UNK_10d912140);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar7 - extraout_x8_00;
  lVar2 = 0;
  func_0x000107c5ec24();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar8 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0x112d36580;
  lStack_70 = lVar8;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar8 - extraout_x8_02;
  lVar1 = 0;
  func_0x000107c5ede0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar12 = lVar8 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  FUN_103c56938(param_1,lVar8,0x112d36580,&UNK_10d9016d0);
  lVar1 = lVar8;
  (**(code **)(extraout_x13 + 0x30))(lVar8,1,extraout_x12_01);
  if ((int)lVar1 == 1) {
    uVar4 = 0x112d36580;
    puVar6 = &UNK_10d9016d0;
    lVar7 = lVar8;
  }
  else {
    (**(code **)(extraout_x13 + 0x20))(lVar12,lVar8,extraout_x12_01);
    func_0x000107c5ebe4(lVar7,lVar12,1);
    lVar8 = lVar7;
    (**(code **)(lVar14 + 0x30))(lVar7,1,lVar2);
    lVar1 = lStack_70;
    if ((int)lVar8 != 1) {
      lVar8 = lStack_70;
      lStack_98 = extraout_x13;
      lStack_90 = lVar12;
      uStack_88 = extraout_x12_01;
      (**(code **)(lVar14 + 0x20))(lStack_70,lVar7,lVar2);
      func_0x000107c5ebc4();
      lVar7 = lStack_78;
      if (lVar8 == 0) {
        (**(code **)(lVar14 + 8))(lVar1,lVar2);
        pcVar11 = *(code **)(lStack_98 + 8);
        lVar1 = lStack_90;
      }
      else {
        uVar9 = *(ulong *)(lVar8 + 0x10);
        lStack_a8 = lVar14;
        lStack_a0 = lVar2;
        if (uVar9 != 0) {
          uVar13 = 0;
          do {
            lVar1 = lStack_68;
            if (*(ulong *)(lVar8 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x103c56310);
              (*pcVar11)();
            }
            (**(code **)(lVar10 + 0x10))
                      (lStack_68,
                       lVar8 + ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff)) +
                       *(long *)(lVar10 + 0x48) * uVar13,lVar7);
            pcVar11 = *(code **)(lVar10 + 0x20);
            puVar3 = puVar5;
            (*pcVar11)(puVar5,lVar1,lVar7);
            func_0x000107c5ebb4();
            lVar2 = lVar1;
            func_0x000107c5fb1c();
            func_0x000107c6142c(lVar1);
            if ((puVar3 == (undefined1 *)0x7461686370616e73) && (lVar2 == -0x14ffffffff9e8aa1)) {
              func_0x000107c6142c(lVar8);
              lVar8 = -0x14ffffffff9e8aa1;
LAB_103c56148:
              lVar1 = lStack_80;
              func_0x000107c6142c(lVar8);
              lVar2 = lVar1;
              (*pcVar11)(lVar1,puVar5,lVar7);
              func_0x000107c5ebb8();
              (**(code **)(lVar10 + 8))(lVar1,lVar7);
              lVar1 = lStack_90;
              if (puVar5 != (undefined1 *)0x0) {
                uVar9 = 0;
                puVar3 = puVar5;
                func_0x000107c5fb24();
                func_0x000107c6142c(puVar5);
                if (((lVar2 != 0x59434147454c) || (puVar3 != (undefined1 *)0xe600000000000000)) &&
                   (func_0x000107c605b8(0x59434147454c,0xe600000000000000,lVar2,puVar3,0),
                   lVar10 = lStack_70, lVar8 = lStack_a0, lVar7 = lStack_a8, (uVar9 & 1) == 0)) {
                  uVar9 = 0;
                  if ((lVar2 == 0x45564954414e) && (puVar3 == (undefined1 *)0xe600000000000000)) {
                    func_0x000107c6142c(0xe600000000000000);
                    (**(code **)(lVar7 + 8))(lVar10,lVar8);
                    (**(code **)(lStack_98 + 8))(lVar1,uStack_88);
                  }
                  else {
                    func_0x000107c605b8(0x45564954414e,0xe600000000000000,lVar2,puVar3,0);
                    func_0x000107c6142c(puVar3);
                    (**(code **)(lVar7 + 8))(lVar10,lVar8);
                    (**(code **)(lStack_98 + 8))(lVar1,uStack_88);
                    if ((uVar9 & 1) == 0) {
                      return 0;
                    }
                  }
                  return 2;
                }
                func_0x000107c6142c(puVar3);
                (**(code **)(lStack_a8 + 8))(lStack_70,lStack_a0);
                (**(code **)(lStack_98 + 8))(lVar1,uStack_88);
                return 1;
              }
              goto LAB_103c56218;
            }
            func_0x000107c605b8(puVar3,lVar2,0x7461686370616e73,0xeb0000000061755f,0);
            func_0x000107c6142c(lVar2);
            if (((ulong)puVar3 & 1) != 0) goto LAB_103c56148;
            uVar13 = uVar13 + 1;
            (**(code **)(lVar10 + 8))(puVar5,lVar7);
          } while (uVar9 != uVar13);
        }
        func_0x000107c6142c(lVar8);
LAB_103c56218:
        lVar1 = lStack_90;
        (**(code **)(lStack_a8 + 8))(lStack_70,lStack_a0);
        pcVar11 = *(code **)(lStack_98 + 8);
      }
      (*pcVar11)(lVar1,uStack_88);
      return 0;
    }
    (**(code **)(extraout_x13 + 8))(lVar12,extraout_x12_01);
    uVar4 = 0x112d4b5b0;
    puVar6 = &UNK_10d912140;
  }
  func_0x000103c56980(lVar7,uVar4,puVar6);
  return 0;
}



/* Entry: 103c56310; end: 103c5678f;  */

undefined1  [16] FUN_103c56310(ulong param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar8 = 0;
  uVar10 = 0;
  FUN_103c55d84();
  if (lRam0000000112ffb508 != -1) {
    func_0x000107c61568(0x112ffb508,0x103c550b0);
  }
  lVar11 = lRam0000000112ffb510;
  if ((lRam0000000112ffb510 != 0) && (*(long *)(lRam0000000112ffb510 + 0x10) != 0)) {
    func_0x000107c61438(lRam0000000112ffb510,2);
    lVar7 = -0x2fffffffffffffe6;
    uVar12 = 0;
    func_0x000100029284(0xd00000000000001a);
    if ((uVar12 & 1) == 0) {
      func_0x000107c61430(lVar11,2);
    }
    else {
      func_0x0001000bb420(*(long *)(lVar11 + 0x38) + lVar7 * 0x20,&uStack_70);
      func_0x000107c6142c(lVar11);
      puVar3 = PTR___sypN_11034f1a8;
      func_0x000107c6147c(&uStack_80,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      lVar7 = lStack_78;
      uVar4 = uStack_80;
      if ((uVar8 & 1) != 0) {
        if (*(long *)(lVar11 + 0x10) == 0) {
LAB_103c56448:
          uStack_68 = 0;
          uStack_70 = 0;
          lStack_58 = 0;
          uStack_60 = 0;
        }
        else {
          func_0x000107c61434(lVar11);
          lVar9 = 0x656c646e75424643;
          uVar8 = 0;
          func_0x000100029284(0x656c646e75424643);
          if ((uVar8 & 1) == 0) {
            func_0x000107c6142c(lVar11);
            goto LAB_103c56448;
          }
          func_0x0001000bb420(*(long *)(lVar11 + 0x38) + lVar9 * 0x20,&uStack_70);
          func_0x000107c6142c(lVar11);
        }
        func_0x000107c6142c(lVar11);
        if (lStack_58 == 0) {
          func_0x000107c6142c(lVar7);
          func_0x000103c56980(&uStack_70,0x112d387f8,&UNK_10d902650);
          goto LAB_103c566b8;
        }
        func_0x000107c6147c(&uStack_80,&uStack_70,puVar3 + 8,PTR___sSSN_11034da80,6);
        lVar11 = lVar7;
        if ((uVar10 & 1) != 0) {
          if (param_2 == 0) {
            bVar6 = (param_1 & 1) == 0;
            uVar1 = 0;
            if (bVar6) {
              uVar1 = 0x61646e6170202c;
            }
            uVar2 = 0xe000000000000000;
            if (bVar6) {
              uVar2 = 0xe700000000000000;
            }
            uStack_70 = 0;
            uStack_68 = 0xe000000000000000;
            func_0x000107c602fc(0x31);
            func_0x000107c6142c(uStack_68);
            uStack_70 = 0x2f6e6f6973726556;
            uStack_68 = 0xe800000000000000;
            func_0x000107c5fb78(uVar4,lVar7);
            func_0x000107c6142c(lVar7);
            func_0x000107c5fb78(0x2f656c69626f4d20,0xef20383431453531);
            if (lRam0000000112ffb530 != -1) {
              func_0x000107c61568(0x112ffb530,FUN_103c55198);
            }
            func_0x000107c5fb78(uRam0000000112ffb538,uRam0000000112ffb540);
            func_0x000107c5fb78(0x2f,0xe100000000000000);
            if (lRam0000000112ffb548 != -1) {
              func_0x000107c61568(0x112ffb548,FUN_103c55600);
            }
            func_0x000107c5fb78(uRam0000000112ffb550,uRam0000000112ffb558);
            func_0x000107c5fb78(0x5320656b696c2820,0xee002f6972616661);
            func_0x000107c5fb78(uStack_80,lStack_78);
            func_0x000107c6142c(lStack_78);
            func_0x000107c5fb78(uVar1,uVar2);
            func_0x000107c6142c(uVar2);
            func_0x000107c5fb78(0x29,0xe100000000000000);
            goto LAB_103c566dc;
          }
          if (param_2 == 2) {
            uStack_70 = 0;
            uStack_68 = 0xe000000000000000;
            func_0x000107c602fc(0x22);
            func_0x000107c6142c(uStack_68);
            uStack_70 = 0x2f6e6f6973726556;
            uStack_68 = 0xe800000000000000;
            func_0x000107c5fb78(uVar4,lVar7);
            func_0x000107c6142c(lVar7);
            func_0x000107c5fb78(0xd000000000000016,0x800000010f1b1810);
            func_0x000107c5fb78(uStack_80,lStack_78);
            func_0x000107c6142c(lStack_78);
            goto LAB_103c566dc;
          }
          if (param_2 != 1) {
            func_0x0001018f7ac0(0);
            uStack_70 = CONCAT44(uStack_70._4_4_,param_2);
            func_0x000107c60614();
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x103c56790);
            (*pcVar5)();
          }
          func_0x000107c6142c(lVar7);
          lVar11 = lStack_78;
        }
      }
      func_0x000107c6142c(lVar11);
    }
  }
LAB_103c566b8:
  if (lRam0000000112ffb518 != -1) {
    func_0x000107c61568(0x112ffb518,FUN_103c5570c);
  }
  uVar1 = uRam0000000112ffb528;
  uVar4 = uRam0000000112ffb520;
  func_0x000107c61434(uRam0000000112ffb528);
  uStack_70 = uVar4;
  uStack_68 = uVar1;
LAB_103c566dc:
  auVar13._8_8_ = uStack_68;
  auVar13._0_8_ = uStack_70;
  return auVar13;
}



/* Entry: 103c56790; end: 103c56917;  */

undefined1  [16] FUN_103c56790(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long extraout_x8;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_210 [8];
  undefined8 auStack_208 [25];
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
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
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  uStack_88 = param_1[0x15];
  uStack_90 = param_1[0x14];
  uStack_78 = param_1[0x17];
  uStack_80 = param_1[0x16];
  uStack_70 = param_1[0x18];
  uStack_c8 = param_1[0xd];
  uStack_d0 = param_1[0xc];
  uStack_b8 = param_1[0xf];
  uStack_c0 = param_1[0xe];
  uStack_a8 = param_1[0x11];
  uStack_b0 = param_1[0x10];
  uStack_98 = param_1[0x13];
  uStack_a0 = param_1[0x12];
  uStack_108 = param_1[5];
  uStack_110 = param_1[4];
  uStack_f8 = param_1[7];
  uStack_100 = param_1[6];
  uStack_e8 = param_1[9];
  puStack_f0 = (undefined8 *)param_1[8];
  uStack_d8 = param_1[0xb];
  uStack_e0 = param_1[10];
  uStack_128 = param_1[1];
  uStack_130 = *param_1;
  uStack_118 = param_1[3];
  uStack_120 = param_1[2];
  puVar2 = &uStack_130;
  func_0x000101424a7c();
  auStack_208[0] = uStack_e0;
  if ((int)puVar2 == 1) {
    func_0x000107c5eec4(auStack_210 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5eeac();
    (**(code **)(lVar4 + 8))(auStack_210 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
    puStack_140 = puVar2;
  }
  else {
    uStack_58 = uStack_e8;
    puStack_60 = puStack_f0;
    uStack_138 = uStack_e8;
    puStack_140 = puStack_f0;
    FUN_103c56938(param_1,auStack_208,0x112d7e768,&UNK_10d93c7c0);
    func_0x000100402194(&puStack_60,auStack_208);
    func_0x000107c5fb78(0x2d,0xe100000000000000);
    puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar3);
    func_0x000103c56980(param_1,0x112d7e768,&UNK_10d93c7c0);
    param_2 = uStack_138;
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = puStack_140;
  return auVar5;
}



/* Entry: 103c56918; end: 103c56937;  */

void FUN_103c56918(void)

{
  func_0x000107c61168(&PTR_PTR_1129493d0);
  return;
}



/* Entry: 103c56938; end: 103c569bf;  */

undefined8 FUN_103c56938(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103c569c0; end: 103c56c9f;  */

/* WARNING: Possible PIC construction at 0x000103c56c64: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c569c0(undefined8 param_1,code *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined *puVar9;
  long lVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined ***pppuVar17;
  undefined ***pppuVar18;
  long lVar19;
  undefined8 uVar20;
  undefined *puVar21;
  long *plVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined *puVar27;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined *puVar28;
  undefined **ppuVar29;
  byte *pbVar30;
  ulong uVar31;
  ulong uVar32;
  undefined **ppuVar33;
  long extraout_x12;
  uint uVar34;
  undefined **ppuVar35;
  undefined *puVar36;
  uint uVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  ulong uVar41;
  ulong auStack_2a0 [4];
  undefined *puStack_280;
  undefined4 uStack_274;
  undefined *puStack_270;
  undefined4 uStack_264;
  undefined **ppuStack_260;
  code *pcStack_258;
  undefined **ppuStack_250;
  undefined *puStack_248;
  code *pcStack_240;
  code *pcStack_238;
  code *pcStack_230;
  undefined **ppuStack_228;
  long lStack_220;
  undefined *puStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined **ppuStack_1e0;
  code *pcStack_1d8;
  undefined **ppuStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined *puStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined ***pppuStack_160;
  ulong uStack_158;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar21 = &UNK_1106ef168;
  func_0x000107c613fc(&UNK_1106ef168,0x20,7);
  *(code **)(puVar21 + 0x10) = param_2;
  *(undefined8 *)(puVar21 + 0x18) = param_3;
  ppuVar33 = (undefined **)PTR__OBJC_CLASS___VNRecognizeTextRequest_1126ada08;
  func_0x000107c610f8();
  pcStack_68 = FUN_103c585dc;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_1013b90ac;
  puStack_70 = &UNK_1106ef180;
  ppuVar11 = &puStack_88;
  puStack_60 = puVar21;
  func_0x000107c60bc4(ppuVar11);
  puVar21 = puStack_60;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar21);
  func_0x000107c45ef8();
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c57bf8(ppuVar33);
  func_0x000107c56714(0x3ca3d70a,ppuVar33);
  func_0x000107c5a450(ppuVar33);
  puVar21 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001013b9140(PTR___swiftEmptyArrayStorage_11034f1c8);
  puVar9 = PTR__OBJC_CLASS___VNImageRequestHandler_1126bcaf0;
  func_0x000107c610f8();
  uVar6 = 0;
  func_0x0001013ae418(0);
  uVar13 = 0x112d797d8;
  FUN_103c58a00(0x112d797d8,&UNK_10da15a00);
  puVar28 = puVar21;
  func_0x000107c5f9dc(puVar21,uVar6,PTR___sypN_11034f1a8 + 8,uVar13);
  func_0x000107c6142c(puVar21);
  func_0x000107c45af8();
  func_0x000107c61170(puVar28);
  pcVar4 = (code *)0x112d79948;
  FUN_103c587bc(0x112d79948,&PTR__OBJC_CLASS___VNRequest_1126a6c80,0x112d79940,&UNK_10daa0590);
  func_0x000107c613fc();
  *(undefined8 *)(pcVar4 + 0x18) = 3;
  *(undefined8 *)(pcVar4 + 0x10) = 1;
  *(undefined ***)(pcVar4 + 0x20) = ppuVar33;
  puVar7 = (undefined *)0x0;
  FUN_103c58a94(0,0x112d79948,&PTR__OBJC_CLASS___VNRequest_1126a6c80);
  func_0x000107c61174();
  pcVar8 = pcVar4;
  func_0x000107c5fc48();
  func_0x000107c61574(pcVar4);
  puStack_88 = (undefined *)0x0;
  ppuVar11 = &puStack_88;
  puVar28 = puVar9;
  pcVar4 = pcVar8;
  func_0x000107c4e5b0();
  func_0x000107c61170(pcVar8);
  puVar21 = puStack_88;
  if ((int)puVar28 == 0) {
    puVar28 = puStack_88;
    func_0x000107c61174(puStack_88);
    func_0x000107c5ed30(puVar21);
    func_0x000107c61170(puVar28);
    func_0x000107c61654();
    (*param_2)(0);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(ppuVar33);
code_r0x000107c614ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(puVar21);
    return;
  }
  func_0x000107c61174(puStack_88);
  func_0x000107c61170(puVar9);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  puVar21 = puVar7;
  func_0x000107c60e78();
  puVar9 = (undefined *)0x0;
  ppuStack_1e0 = ppuVar11;
  pcStack_1d8 = pcVar4;
  ppuStack_198 = ppuVar33;
  func_0x000107c5ef5c();
  puVar36 = *(undefined **)(puVar9 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(puVar36 + 0x40));
  lVar19 = (long)&puStack_280 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0;
  func_0x000107c5ef64();
  lVar38 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar38 + 0x40));
  lVar39 = lVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  ppuVar11 = (undefined **)0x0;
  func_0x000107c5eea4();
  puVar7 = ppuVar11[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(puVar7 + 0x40));
  lVar40 = lVar39 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar12 = 0;
  func_0x000107c5eb9c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  puVar28 = (undefined *)(lVar40 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  if (puVar21 != (undefined *)0x0) {
    func_0x000107c614b0(puVar21);
    (*pcStack_1d8)(0);
    goto code_r0x000107c614ac;
  }
  ppuVar33 = ppuStack_198;
  lStack_220 = lVar40;
  puStack_218 = puVar7;
  lStack_210 = lVar39;
  lStack_208 = lVar38;
  lStack_200 = lVar10;
  lStack_1f8 = lVar19;
  puStack_1f0 = puVar36;
  puStack_1e8 = puVar9;
  ppuStack_1b8 = ppuVar11;
  puStack_190 = puVar28;
  lStack_188 = extraout_x12;
  func_0x000107c50700();
  func_0x000107c61180();
  if (ppuVar33 == (undefined **)0x0) goto LAB_103c58548;
  uVar13 = 0;
  FUN_103c58a94(0,0x112e95260,&PTR__OBJC_CLASS___VNObservation_1126aa788);
  ppuVar11 = ppuVar33;
  func_0x000107c5fc54(ppuVar33,uVar13);
  func_0x000107c61170(ppuVar33);
  ppuVar33 = ppuVar11;
  FUN_103c585e4();
  func_0x000107c6142c(ppuVar11);
  if (ppuVar33 == (undefined **)0x0) goto LAB_103c58548;
  ppuVar11 = (undefined **)((ulong)ppuVar33 & 0xffffffffffffff8);
  if ((ulong)ppuVar33 >> 0x3e == 0) {
    ppuVar35 = (undefined **)ppuVar11[2];
  }
  else {
    ppuVar35 = ppuVar33;
    if (-1 < (long)ppuVar33) {
      ppuVar35 = ppuVar11;
    }
    func_0x000107c60480();
  }
  lStack_1c8 = lVar12;
  if (ppuVar35 == (undefined **)0x0) {
    ppuStack_198 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    ppuStack_198 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
    ppuVar29 = (undefined **)0x0;
    do {
      while( true ) {
        if (((ulong)ppuVar33 & 0xc000000000000001) == 0) {
          if (ppuVar11[2] <= ppuVar29) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103c5858c);
            (*pcVar4)();
          }
          ppuVar14 = (undefined **)ppuVar33[(long)((long)ppuVar29 + 4)];
          func_0x000107c61174();
        }
        else {
          ppuVar14 = ppuVar29;
          func_0x000103c58834(ppuVar29,ppuVar33,
                              &PTR__OBJC_CLASS___VNRecognizedTextObservation_1126ada18,0x112ffb598);
        }
        ppuVar23 = (undefined **)((long)ppuVar29 + 1);
        if (SCARRY8((long)ppuVar29,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103c58588);
          (*pcVar4)();
        }
        ppuVar16 = ppuVar14;
        func_0x000107c5cbf0();
        func_0x000107c61180();
        ppuVar15 = (undefined **)0x0;
        FUN_103c58a94(0,0x112ffb590,&PTR__OBJC_CLASS___VNRecognizedText_1126ada10);
        ppuVar24 = ppuVar16;
        func_0x000107c5fc54();
        func_0x000107c61170(ppuVar16);
        if ((ulong)ppuVar24 >> 0x3e == 0) {
          ppuVar16 = *(undefined ***)(((ulong)ppuVar24 & 0xffffffffffffff8) + 0x10);
        }
        else {
          ppuVar16 = (undefined **)((ulong)ppuVar24 & 0xffffffffffffff8);
          if ((undefined **)0x7fffffffffffffff < ppuVar24) {
            ppuVar16 = ppuVar24;
          }
          func_0x000107c60480();
        }
        if (ppuVar16 != (undefined **)0x0) break;
        func_0x000107c61170(ppuVar14);
        func_0x000107c6142c(ppuVar24);
        ppuVar29 = (undefined **)((long)ppuVar29 + 1);
        if (ppuVar23 == ppuVar35) goto LAB_103c570cc;
      }
      if (((ulong)ppuVar24 & 0xc000000000000001) == 0) {
        if (*(long *)(((ulong)ppuVar24 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103c585dc);
          (*pcVar4)();
        }
        ppuVar29 = (undefined **)ppuVar24[4];
        func_0x000107c61174();
      }
      else {
        ppuVar29 = (undefined **)0x0;
        ppuVar15 = ppuVar24;
        func_0x000103c58834(0,ppuVar24,&PTR__OBJC_CLASS___VNRecognizedText_1126ada10,0x112ffb590);
      }
      func_0x000107c6142c(ppuVar24);
      ppuVar16 = ppuVar29;
      func_0x000107c5c158();
      func_0x000107c61180();
      func_0x000107c61170(ppuVar29);
      ppuVar29 = ppuVar16;
      func_0x000107c5faec();
      ppuStack_1a0 = ppuVar29;
      func_0x000107c61170(ppuVar16);
      func_0x000107c61170(ppuVar14);
      ppuVar29 = ppuStack_198;
      func_0x000107c61558();
      if (((ulong)ppuVar29 & 1) == 0) {
        ppuVar29 = (undefined **)0x0;
        func_0x0001000d182c(0,ppuStack_198[2] + 1,1);
        ppuStack_198 = ppuVar29;
      }
      puVar21 = ppuStack_198[2];
      if ((undefined *)((ulong)ppuStack_198[3] >> 1) <= puVar21) {
        ppuVar29 = (undefined **)(ulong)((undefined *)0x1 < ppuStack_198[3]);
        func_0x0001000d182c(ppuVar29,puVar21 + 1,1,ppuStack_198);
        ppuStack_198 = ppuVar29;
      }
      ppuStack_198[2] = puVar21 + 1;
      ppuStack_198[(long)puVar21 * 2 + 4] = (undefined *)ppuStack_1a0;
      ppuStack_198[(long)puVar21 * 2 + 5] = (undefined *)ppuVar15;
      ppuVar29 = ppuVar23;
    } while (ppuVar23 != ppuVar35);
  }
LAB_103c570cc:
  func_0x000107c6142c();
  puVar21 = PTR___sSSN_11034da80;
  ppuVar11 = (undefined **)ppuStack_198[2];
  ppuVar35 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
  ppuStack_1b0 = ppuVar11;
  if (ppuVar11 != (undefined **)0x0) {
    ppuVar29 = (undefined **)0x0;
    ppuStack_1a0 = ppuStack_198 + 5;
    ppuStack_1a8 = (undefined **)((long)ppuVar11 - 1);
LAB_103c57118:
    ppuVar23 = ppuStack_1a0 + (long)ppuVar29 * 2;
    ppuVar14 = ppuVar29;
    ppuVar11 = ppuStack_1b0;
    do {
      if (ppuStack_198[2] <= ppuVar14) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103c58590);
        (*pcVar4)();
      }
      ppuStack_170 = (undefined **)ppuVar23[-1];
      ppuVar29 = (undefined **)*ppuVar23;
      ppuStack_108 = (undefined **)0x445c;
      uStack_100 = 0xe200000000000000;
      puStack_118 = (undefined *)0x0;
      uStack_110 = 0xe000000000000000;
      ppuStack_168 = ppuVar29;
      func_0x000100e8b654();
      func_0x000107c61434(ppuVar29);
      *(undefined ***)(puVar28 + -0x10) = ppuVar33;
      *(undefined ***)(puVar28 + -8) = ppuVar33;
      pppuVar17 = &ppuStack_108;
      ppuVar15 = &puStack_118;
      *(undefined **)(puVar28 + -0x20) = puVar21;
      *(undefined ***)(puVar28 + -0x18) = ppuVar33;
      func_0x000107c601fc(pppuVar17,ppuVar15,0x400,0,0,1,puVar21,puVar21);
      pppuVar18 = pppuVar17;
      FUN_103c59744();
      if ((((ulong)pppuVar18 & 1) == 0) ||
         (pppuVar18 = pppuVar17, func_0x000107c5fb5c(pppuVar17,ppuVar15), (long)pppuVar18 < 0xd)) {
        func_0x000107c6142c(ppuVar15);
        ppuVar33 = ppuVar29;
      }
      else {
        pppuVar18 = pppuVar17;
        func_0x000107c5fb5c(pppuVar17,ppuVar15);
        func_0x000107c6142c(ppuVar29);
        ppuVar11 = ppuStack_1b0;
        ppuVar33 = ppuVar15;
        if ((long)pppuVar18 < 0x14) goto LAB_103c57208;
      }
      ppuVar14 = (undefined **)((long)ppuVar14 + 1);
      func_0x000107c6142c();
      ppuVar23 = ppuVar23 + 2;
      if (ppuVar11 == ppuVar14) goto LAB_103c5729c;
    } while( true );
  }
  if (*(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10) == 0) goto LAB_103c572d0;
LAB_103c572a4:
  ppuVar33 = ppuStack_198;
  puStack_280 = ppuVar35[4];
  puStack_270 = ppuVar35[5];
  func_0x000107c61434();
  goto LAB_103c572e0;
LAB_103c57208:
  ppuVar33 = ppuVar35;
  func_0x000107c61558();
  if (((ulong)ppuVar33 & 1) == 0) {
    ppuVar33 = (undefined **)0x0;
    func_0x0001000d182c(0,ppuVar35[2] + 1,1,ppuVar35);
    ppuVar35 = ppuVar33;
  }
  puVar9 = ppuVar35[2];
  if ((undefined *)((ulong)ppuVar35[3] >> 1) <= puVar9) {
    ppuVar33 = (undefined **)(ulong)((undefined *)0x1 < ppuVar35[3]);
    func_0x0001000d182c(ppuVar33,puVar9 + 1,1,ppuVar35);
    ppuVar35 = ppuVar33;
  }
  ppuVar29 = (undefined **)((long)ppuVar14 + 1);
  ppuVar35[2] = puVar9 + 1;
  ppuVar35[(long)puVar9 * 2 + 4] = (undefined *)pppuVar17;
  ppuVar35[(long)puVar9 * 2 + 5] = (undefined *)ppuVar15;
  ppuVar11 = ppuStack_1b0;
  if (ppuStack_1a8 == ppuVar14) goto LAB_103c5729c;
  goto LAB_103c57118;
LAB_103c5729c:
  if (ppuVar35[2] != (undefined *)0x0) goto LAB_103c572a4;
LAB_103c572d0:
  puStack_280 = (undefined *)0x0;
  puStack_270 = (undefined *)0x0;
  ppuVar33 = ppuStack_198;
LAB_103c572e0:
  lVar10 = lStack_1c8;
  func_0x000107c6142c(ppuVar35);
  puVar21 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (ppuVar11 == (undefined **)0x0) {
    uStack_1c0 = 0;
  }
  else {
    ppuVar35 = (undefined **)0x0;
    uStack_1c0 = 0;
    ppuVar11 = ppuVar33 + 4;
    ppuStack_1d0 = (undefined **)((ulong)&ppuStack_170 | 1);
    uStack_264 = *(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO4yearyA2EmFWC_110350d88;
    uStack_274 = *(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO5monthyA2EmFWC_110350d90;
    ppuStack_228 = ppuVar11;
    do {
      if (ppuVar33[2] <= ppuVar35) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103c58594);
        (*pcVar4)();
      }
      ppuVar29 = (undefined **)ppuVar11[(long)ppuVar35 * 2];
      ppuVar14 = (undefined **)(ppuVar11 + (long)ppuVar35 * 2)[1];
      func_0x000107c61434(ppuVar14);
      ppuVar23 = ppuVar14;
      FUN_103c59cac();
      puVar9 = puStack_190;
      if (ppuVar23 == (undefined **)0x0) {
        func_0x000107c6142c(ppuVar14);
      }
      else {
        uVar13 = 0x2f;
        ppuStack_170 = ppuVar29;
        ppuStack_168 = ppuVar23;
        func_0x000107c5eb6c(puStack_190,0x2f,0xe100000000000000);
        func_0x000100e8b654();
        puVar28 = puVar9;
        func_0x000107c601d8(puVar9,PTR___sSSN_11034da80,uVar13);
        (**(code **)(lStack_188 + 8))(puVar9,lVar10);
        if (*(long *)(puVar28 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103c5859c);
          (*pcVar4)();
        }
        ppuStack_1a8 = ppuVar29;
        ppuVar33 = *(undefined ***)(puVar28 + 0x20);
        ppuVar15 = *(undefined ***)(puVar28 + 0x28);
        ppuVar24 = (undefined **)((ulong)ppuVar33 & 0xffffffffffff);
        ppuVar16 = (undefined **)((ulong)ppuVar15 >> 0x38 & 0xf);
        ppuVar29 = ppuVar24;
        if (((ulong)ppuVar15 & 0x2000000000000000) != 0) {
          ppuVar29 = ppuVar16;
        }
        if (ppuVar29 == (undefined **)0x0) {
          func_0x000107c6142c(ppuVar23);
          func_0x000107c6142c(ppuVar14);
          func_0x000107c6142c(puVar28);
          ppuVar33 = ppuStack_198;
        }
        else {
          ppuStack_1a0 = ppuVar23;
          if (((ulong)ppuVar15 >> 0x3c & 1) == 0) {
            if (((ulong)ppuVar15 >> 0x3d & 1) != 0) {
              ppuStack_170 = ppuVar33;
              ppuStack_168 = (undefined **)((ulong)ppuVar15 & 0xffffffffffffff);
              uVar34 = (uint)ppuVar33 & 0xff;
              if (uVar34 == 0x2b) {
                if (ppuVar16 == (undefined **)0x0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x103c585ac);
                  (*pcVar4)();
                }
                pbVar30 = (byte *)((long)ppuVar16 + -1);
                if (pbVar30 == (byte *)0x0) goto LAB_103c57668;
                ppuVar29 = (undefined **)0x0;
                ppuVar33 = ppuStack_1d0;
                do {
                  if (((9 < *(byte *)ppuVar33 - 0x30) ||
                      (lVar10 = (long)ppuVar29 * 10,
                      SUB168(SEXT816((long)ppuVar29) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                     (uVar32 = (ulong)(byte)(*(byte *)ppuVar33 - 0x30),
                     ppuVar29 = (undefined **)(lVar10 + uVar32), SCARRY8(lVar10,uVar32)))
                  goto LAB_103c57668;
                  uVar34 = 0;
                  pbVar30 = pbVar30 + -1;
                  ppuVar33 = (undefined **)((long)ppuVar33 + 1);
                } while (pbVar30 != (byte *)0x0);
              }
              else if (uVar34 == 0x2d) {
                if (ppuVar16 == (undefined **)0x0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x103c585b4);
                  (*pcVar4)();
                }
                pbVar30 = (byte *)((long)ppuVar16 + -1);
                if (pbVar30 == (byte *)0x0) {
LAB_103c57668:
                  uVar34 = 1;
                  ppuVar29 = (undefined **)0x0;
                }
                else {
                  ppuVar29 = (undefined **)0x0;
                  ppuVar33 = ppuStack_1d0;
                  do {
                    if (((9 < *(byte *)ppuVar33 - 0x30) ||
                        (lVar10 = (long)ppuVar29 * 10,
                        SUB168(SEXT816((long)ppuVar29) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                       (uVar32 = (ulong)(byte)(*(byte *)ppuVar33 - 0x30),
                       ppuVar29 = (undefined **)(lVar10 - uVar32), SBORROW8(lVar10,uVar32)))
                    goto LAB_103c57668;
                    uVar34 = 0;
                    pbVar30 = pbVar30 + -1;
                    ppuVar33 = (undefined **)((long)ppuVar33 + 1);
                  } while (pbVar30 != (byte *)0x0);
                }
              }
              else {
                if (ppuVar16 == (undefined **)0x0) goto LAB_103c57668;
                ppuVar29 = (undefined **)0x0;
                pppuVar18 = &ppuStack_170;
                do {
                  if (((9 < *(byte *)pppuVar18 - 0x30) ||
                      (lVar10 = (long)ppuVar29 * 10,
                      SUB168(SEXT816((long)ppuVar29) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                     (uVar32 = (ulong)(byte)(*(byte *)pppuVar18 - 0x30),
                     ppuVar29 = (undefined **)(lVar10 + uVar32), SCARRY8(lVar10,uVar32)))
                  goto LAB_103c57668;
                  uVar34 = 0;
                  ppuVar16 = (undefined **)((long)ppuVar16 + -1);
                  pppuVar18 = (undefined ***)((long)pppuVar18 + 1);
                } while (ppuVar16 != (undefined **)0x0);
              }
              goto LAB_103c57670;
            }
            if (((ulong)ppuVar33 >> 0x3c & 1) == 0) {
              func_0x000107c60358();
            }
            else {
              ppuVar33 = (undefined **)(((ulong)ppuVar15 & 0xfffffffffffffff) + 0x20);
              ppuVar15 = ppuVar24;
            }
            if (*(byte *)ppuVar33 != 0x2b) {
              if (*(byte *)ppuVar33 != 0x2d) {
                if (ppuVar15 == (undefined **)0x0) goto LAB_103c57350;
                ppuVar29 = (undefined **)0x0;
                ppuVar23 = ppuVar33;
                while (ppuVar23 != (undefined **)0x0) {
                  if (((9 < *(byte *)ppuVar33 - 0x30) ||
                      (lVar10 = (long)ppuVar29 * 10,
                      SUB168(SEXT816((long)ppuVar29) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                     (uVar32 = (ulong)(byte)(*(byte *)ppuVar33 - 0x30),
                     ppuVar29 = (undefined **)(lVar10 + uVar32), SCARRY8(lVar10,uVar32)))
                  goto LAB_103c57350;
                  ppuVar15 = (undefined **)((long)ppuVar15 - 1);
                  ppuVar33 = (undefined **)((long)ppuVar33 + 1);
                  ppuVar23 = ppuVar15;
                }
                goto LAB_103c57680;
              }
              pbVar30 = (byte *)((long)ppuVar15 - 1);
              if ((long)ppuVar15 < 1) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x103c585a8);
                (*pcVar4)();
              }
              if (pbVar30 != (byte *)0x0) {
                ppuVar29 = (undefined **)0x0;
                do {
                  ppuVar33 = (undefined **)((long)ppuVar33 + 1);
                  if (((9 < *(byte *)ppuVar33 - 0x30) ||
                      (lVar10 = (long)ppuVar29 * 10,
                      SUB168(SEXT816((long)ppuVar29) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                     (uVar32 = (ulong)(byte)(*(byte *)ppuVar33 - 0x30),
                     ppuVar29 = (undefined **)(lVar10 - uVar32), SBORROW8(lVar10,uVar32)))
                  goto LAB_103c57350;
                  pbVar30 = pbVar30 + -1;
                } while (pbVar30 != (byte *)0x0);
                goto LAB_103c57680;
              }
              goto LAB_103c57350;
            }
            pbVar30 = (byte *)((long)ppuVar15 - 1);
            if ((long)ppuVar15 < 1) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x103c585b0);
              (*pcVar4)();
            }
            if (pbVar30 == (byte *)0x0) goto LAB_103c57350;
            ppuVar29 = (undefined **)0x0;
            do {
              ppuVar33 = (undefined **)((long)ppuVar33 + 1);
              if (((9 < *(byte *)ppuVar33 - 0x30) ||
                  (lVar10 = (long)ppuVar29 * 10,
                  SUB168(SEXT816((long)ppuVar29) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                 (uVar32 = (ulong)(byte)(*(byte *)ppuVar33 - 0x30),
                 ppuVar29 = (undefined **)(lVar10 + uVar32), SCARRY8(lVar10,uVar32)))
              goto LAB_103c57350;
              pbVar30 = pbVar30 + -1;
            } while (pbVar30 != (byte *)0x0);
          }
          else {
            func_0x000107c61434(ppuVar15);
            ppuVar29 = ppuVar15;
            func_0x000100edba6c(ppuVar33,ppuVar15,10);
            uVar34 = (uint)ppuVar29;
            func_0x000107c6142c(ppuVar15);
            ppuVar29 = ppuVar33;
LAB_103c57670:
            if ((uVar34 & 0xff) == 1) {
LAB_103c57350:
              ppuVar33 = ppuStack_198;
              func_0x000107c6142c(ppuStack_1a0);
              func_0x000107c6142c(ppuVar14);
              func_0x000107c6142c(puVar28);
              lVar10 = lStack_1c8;
              goto LAB_103c57370;
            }
          }
LAB_103c57680:
          if (*(ulong *)(puVar28 + 0x10) < 2) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103c585a4);
            (*pcVar4)();
          }
          ppuVar33 = *(undefined ***)(puVar28 + 0x30);
          uVar41 = *(ulong *)(puVar28 + 0x38);
          func_0x000107c61434(uVar41);
          func_0x000107c6142c(puVar28);
          uVar25 = (ulong)ppuVar33 & 0xffffffffffff;
          uVar31 = uVar41 >> 0x38 & 0xf;
          uVar32 = uVar25;
          if ((uVar41 & 0x2000000000000000) != 0) {
            uVar32 = uVar31;
          }
          if (uVar32 == 0) {
            func_0x000107c6142c(uVar41);
            func_0x000107c6142c(ppuStack_1a0);
            func_0x000107c6142c(ppuVar14);
            ppuVar33 = ppuStack_198;
            lVar10 = lStack_1c8;
          }
          else {
            if ((uVar41 >> 0x3c & 1) == 0) {
              if ((uVar41 >> 0x3d & 1) == 0) {
                if (((ulong)ppuVar33 >> 0x3c & 1) == 0) {
                  uVar25 = uVar41;
                  func_0x000107c60358();
                }
                else {
                  ppuVar33 = (undefined **)((uVar41 & 0xfffffffffffffff) + 0x20);
                }
                if (*(byte *)ppuVar33 == 0x2b) {
                  if ((long)uVar25 < 1) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x103c585cc);
                    (*pcVar4)();
                  }
                  lVar10 = uVar25 - 1;
                  if (lVar10 == 0) goto LAB_103c578f0;
                  ppuVar11 = (undefined **)0x0;
                  do {
                    ppuVar33 = (undefined **)((long)ppuVar33 + 1);
                    if (((9 < *(byte *)ppuVar33 - 0x30) ||
                        (lVar12 = (long)ppuVar11 * 10,
                        SUB168(SEXT816((long)ppuVar11) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                       (uVar32 = (ulong)(byte)(*(byte *)ppuVar33 - 0x30),
                       ppuVar11 = (undefined **)(lVar12 + uVar32), SCARRY8(lVar12,uVar32)))
                    goto LAB_103c578f0;
                    uVar34 = 0;
                    lVar10 = lVar10 + -1;
                  } while (lVar10 != 0);
                }
                else if (*(byte *)ppuVar33 == 0x2d) {
                  if ((long)uVar25 < 1) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x103c585d4);
                    (*pcVar4)();
                  }
                  lVar10 = uVar25 - 1;
                  if (lVar10 == 0) {
LAB_103c578f0:
                    uVar34 = 1;
                    ppuVar11 = (undefined **)0x0;
                  }
                  else {
                    ppuVar11 = (undefined **)0x0;
                    do {
                      ppuVar33 = (undefined **)((long)ppuVar33 + 1);
                      if (((9 < *(byte *)ppuVar33 - 0x30) ||
                          (lVar12 = (long)ppuVar11 * 10,
                          SUB168(SEXT816((long)ppuVar11) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                         (uVar32 = (ulong)(byte)(*(byte *)ppuVar33 - 0x30),
                         ppuVar11 = (undefined **)(lVar12 - uVar32), SBORROW8(lVar12,uVar32)))
                      goto LAB_103c578f0;
                      uVar34 = 0;
                      lVar10 = lVar10 + -1;
                    } while (lVar10 != 0);
                  }
                }
                else {
                  if (uVar25 == 0) goto LAB_103c578f0;
                  if (ppuVar33 == (undefined **)0x0) {
                    uVar34 = 0;
                    ppuVar11 = (undefined **)0x0;
                  }
                  else {
                    ppuVar11 = (undefined **)0x0;
                    do {
                      if (((9 < *(byte *)ppuVar33 - 0x30) ||
                          (lVar10 = (long)ppuVar11 * 10,
                          SUB168(SEXT816((long)ppuVar11) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                         (uVar32 = (ulong)(byte)(*(byte *)ppuVar33 - 0x30),
                         ppuVar11 = (undefined **)(lVar10 + uVar32), SCARRY8(lVar10,uVar32)))
                      goto LAB_103c578f0;
                      uVar34 = 0;
                      uVar25 = uVar25 - 1;
                      ppuVar33 = (undefined **)((long)ppuVar33 + 1);
                    } while (uVar25 != 0);
                  }
                }
              }
              else {
                ppuStack_170 = ppuVar33;
                ppuStack_168 = (undefined **)(uVar41 & 0xffffffffffffff);
                uVar34 = (uint)ppuVar33 & 0xff;
                if (uVar34 == 0x2b) {
                  if (uVar31 == 0) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x103c585d8);
                    (*pcVar4)();
                  }
                  lVar10 = uVar31 - 1;
                  if (lVar10 == 0) goto LAB_103c578f0;
                  ppuVar11 = (undefined **)0x0;
                  ppuVar33 = ppuStack_1d0;
                  do {
                    if (((9 < *(byte *)ppuVar33 - 0x30) ||
                        (lVar12 = (long)ppuVar11 * 10,
                        SUB168(SEXT816((long)ppuVar11) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                       (uVar32 = (ulong)(byte)(*(byte *)ppuVar33 - 0x30),
                       ppuVar11 = (undefined **)(lVar12 + uVar32), SCARRY8(lVar12,uVar32)))
                    goto LAB_103c578f0;
                    uVar34 = 0;
                    lVar10 = lVar10 + -1;
                    ppuVar33 = (undefined **)((long)ppuVar33 + 1);
                  } while (lVar10 != 0);
                }
                else if (uVar34 == 0x2d) {
                  if (uVar31 == 0) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x103c585d0);
                    (*pcVar4)();
                  }
                  lVar10 = uVar31 - 1;
                  if (lVar10 == 0) goto LAB_103c578f0;
                  ppuVar11 = (undefined **)0x0;
                  ppuVar33 = ppuStack_1d0;
                  do {
                    if (((9 < *(byte *)ppuVar33 - 0x30) ||
                        (lVar12 = (long)ppuVar11 * 10,
                        SUB168(SEXT816((long)ppuVar11) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                       (uVar32 = (ulong)(byte)(*(byte *)ppuVar33 - 0x30),
                       ppuVar11 = (undefined **)(lVar12 - uVar32), SBORROW8(lVar12,uVar32)))
                    goto LAB_103c578f0;
                    uVar34 = 0;
                    lVar10 = lVar10 + -1;
                    ppuVar33 = (undefined **)((long)ppuVar33 + 1);
                  } while (lVar10 != 0);
                }
                else {
                  if (uVar31 == 0) goto LAB_103c578f0;
                  ppuVar11 = (undefined **)0x0;
                  pppuVar18 = &ppuStack_170;
                  do {
                    if (((9 < *(byte *)pppuVar18 - 0x30) ||
                        (lVar10 = (long)ppuVar11 * 10,
                        SUB168(SEXT816((long)ppuVar11) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                       (uVar32 = (ulong)(byte)(*(byte *)pppuVar18 - 0x30),
                       ppuVar11 = (undefined **)(lVar10 + uVar32), SCARRY8(lVar10,uVar32)))
                    goto LAB_103c578f0;
                    uVar34 = 0;
                    uVar31 = uVar31 - 1;
                    pppuVar18 = (undefined ***)((long)pppuVar18 + 1);
                  } while (uVar31 != 0);
                }
              }
            }
            else {
              uVar32 = uVar41;
              func_0x000100edba6c(ppuVar33,uVar41,10);
              uVar34 = (uint)uVar32;
              ppuVar11 = ppuVar33;
            }
            func_0x000107c6142c(uVar41);
            lVar12 = lStack_220;
            if ((uVar34 & 0xff) == 1) {
              func_0x000107c6142c(ppuStack_1a0);
              func_0x000107c6142c(ppuVar14);
              ppuVar33 = ppuStack_198;
              lVar10 = lStack_1c8;
              ppuVar11 = ppuStack_228;
            }
            else {
              ppuStack_250 = ppuVar14;
              puStack_248 = puVar21;
              func_0x000107c5eea0(lStack_220);
              lVar38 = lStack_210;
              func_0x000107c5ef54(lStack_210);
              puVar9 = puStack_1e8;
              puVar21 = puStack_1f0;
              lVar40 = lStack_1f8;
              uVar2 = uStack_264;
              pcStack_240 = *(code **)(puStack_1f0 + 0x68);
              (*pcStack_240)(lStack_1f8,uStack_264,puStack_1e8);
              lVar10 = lVar40;
              func_0x000107c5ef60(lVar40,lVar12);
              pcStack_238 = *(code **)(puVar21 + 8);
              (*pcStack_238)(lVar40,puVar9);
              lVar39 = lStack_200;
              pcStack_230 = *(code **)(lStack_208 + 8);
              (*pcStack_230)(lVar38,lStack_200);
              pcStack_258 = *(code **)(puStack_218 + 8);
              (*pcStack_258)(lVar12,ppuStack_1b8);
              func_0x000107c5eea0(lVar12);
              func_0x000107c5ef54(lVar38);
              ppuStack_260 = ppuVar11;
              if ((undefined **)(lVar10 % 100) == ppuVar11) {
                (*pcStack_240)(lVar40,uStack_274,puVar9);
                lVar19 = lVar40;
                func_0x000107c5ef60(lVar40,lVar12);
                func_0x000107c6142c(ppuStack_250);
                (*pcStack_238)(lVar40,puVar9);
                (*pcStack_230)(lVar38,lVar39);
                (*pcStack_258)(lVar12,ppuStack_1b8);
                lVar10 = lStack_1c8;
                if ((long)ppuVar29 < lVar19) {
LAB_103c57ae4:
                  func_0x000107c6142c(ppuStack_1a0);
                  ppuVar33 = ppuStack_198;
                  ppuVar11 = ppuStack_228;
                  puVar21 = puStack_248;
                }
                else {
LAB_103c57c6c:
                  puVar21 = puStack_248;
                  puVar9 = puStack_248;
                  func_0x000107c61558();
                  ppuVar33 = ppuStack_1a0;
                  ppuVar11 = ppuStack_228;
                  puVar28 = puVar21;
                  if (((ulong)puVar9 & 1) == 0) {
                    puVar28 = (undefined *)0x0;
                    func_0x0001000d182c(0,*(long *)(puVar21 + 0x10) + 1,1,puVar21);
                  }
                  ppuVar29 = ppuStack_1a8;
                  uVar32 = *(ulong *)(puVar28 + 0x10);
                  puVar21 = puVar28;
                  if (*(ulong *)(puVar28 + 0x18) >> 1 <= uVar32) {
                    puVar21 = (undefined *)(ulong)(1 < *(ulong *)(puVar28 + 0x18));
                    func_0x0001000d182c(puVar21,uVar32 + 1,1,puVar28);
                  }
                  *(ulong *)(puVar21 + 0x10) = uVar32 + 1;
                  *(undefined ***)(puVar21 + uVar32 * 0x10 + 0x20) = ppuVar29;
                  *(undefined ***)(puVar21 + uVar32 * 0x10 + 0x28) = ppuVar33;
                  ppuVar33 = ppuStack_198;
                }
              }
              else {
                (*pcStack_240)(lVar40,uVar2,puVar9);
                lVar19 = lVar40;
                func_0x000107c5ef60(lVar40,lVar12);
                (*pcStack_238)(lVar40,puVar9);
                (*pcStack_230)(lVar38,lVar39);
                pcVar4 = pcStack_258;
                (*pcStack_258)(lVar12,ppuStack_1b8);
                lVar10 = lStack_1c8;
                if (lVar19 % 100 < (long)ppuStack_260) {
                  func_0x000107c5eea0(lVar12);
                  func_0x000107c5ef54(lVar38);
                  (*pcStack_240)(lVar40,uVar2,puVar9);
                  lVar19 = lVar40;
                  func_0x000107c5ef60(lVar40,lVar12);
                  func_0x000107c6142c(ppuStack_250);
                  (*pcStack_238)(lVar40,puVar9);
                  (*pcStack_230)(lVar38,lVar39);
                  (*pcVar4)(lVar12,ppuStack_1b8);
                  if (lVar19 % 100 + 0xf <= (long)ppuStack_260) goto LAB_103c57ae4;
                  goto LAB_103c57c6c;
                }
                func_0x000107c6142c(ppuStack_250);
                func_0x000107c6142c(ppuStack_1a0);
                ppuVar33 = ppuStack_198;
                ppuVar11 = ppuStack_228;
                puVar21 = puStack_248;
              }
            }
          }
        }
      }
LAB_103c57370:
      ppuVar35 = (undefined **)((long)ppuVar35 + 1);
    } while (ppuVar35 != ppuStack_1b0);
  }
  if (*(long *)(puVar21 + 0x10) == 0) {
    lStack_1f8 = 0;
    puStack_1f0 = (undefined *)0x0;
  }
  else {
    lStack_1f8 = *(long *)(puVar21 + 0x20);
    puStack_1f0 = *(undefined **)(puVar21 + 0x28);
    func_0x000107c61434();
  }
  ppuVar11 = ppuStack_1b0;
  func_0x000107c6142c(puVar21);
  puStack_118 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (ppuVar11 == (undefined **)0x0) {
    puStack_1e8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    ppuStack_1d0 = ppuVar33 + 4;
    puStack_1e8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    ppuVar11 = (undefined **)0x0;
    do {
      if (ppuVar33[2] <= ppuVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103c58598);
        (*pcVar4)();
      }
      ppuVar33 = (undefined **)ppuStack_1d0[(long)ppuVar11 * 2];
      ppuVar35 = (undefined **)(ppuStack_1d0 + (long)ppuVar11 * 2)[1];
      ppuStack_1b8 = (undefined **)((long)ppuVar11 + 1);
      uStack_158 = (ulong)ppuVar33 & 0xffffffffffff;
      if (((ulong)ppuVar35 & 0x2000000000000000) != 0) {
        uStack_158 = (ulong)ppuVar35 >> 0x38 & 0xf;
      }
      pppuStack_160 = (undefined ***)0x0;
      ppuVar11 = (undefined **)0x2;
      ppuStack_1a8 = ppuVar35;
      ppuStack_170 = ppuVar33;
      ppuStack_168 = ppuVar35;
      func_0x000107c61438();
      func_0x000107c5fb84();
      if (ppuVar11 == (undefined **)0x0) {
        func_0x000107c6142c(ppuStack_168);
LAB_103c57fd8:
        ppuVar11 = ppuStack_1a8;
        ppuStack_108 = (undefined **)0x20;
        uStack_100 = 0xe100000000000000;
        pppuStack_160 = &ppuStack_108;
        func_0x000107c61434(ppuStack_1a8);
        uVar13 = uStack_1c0;
        ppuVar35 = (undefined **)0x7fffffffffffffff;
        func_0x0001014784b8(0x7fffffffffffffff,1,FUN_103c58a40,&ppuStack_170,ppuVar33,ppuVar11);
        ppuVar11 = ppuVar35;
        FUN_103c5acf8();
        uStack_1c0 = uVar13;
        if (ppuVar11 == (undefined **)0x0) {
          func_0x000107c6142c(ppuVar35);
          ppuVar33 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          ppuStack_108 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
          FUN_103c594b0();
          lVar10 = lStack_1c8;
          if ((long)ppuVar11 < 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103c585a0);
            (*pcVar4)();
          }
          ppuVar29 = ppuVar35 + 7;
          ppuVar33 = ppuStack_108;
          ppuStack_1a0 = ppuVar35;
          do {
            ppuVar35 = (undefined **)ppuVar29[-3];
            ppuVar14 = (undefined **)ppuVar29[-2];
            puVar21 = ppuVar29[-1];
            puVar9 = *ppuVar29;
            func_0x000107c61434(puVar9);
            func_0x000107c5fb2c(ppuVar35,ppuVar14,puVar21,puVar9);
            puVar21 = puStack_190;
            ppuStack_170 = ppuVar35;
            ppuStack_168 = ppuVar14;
            func_0x000107c5eb68(puStack_190);
            func_0x000100e8b654();
            puVar28 = puVar21;
            puVar7 = PTR___sSSN_11034da80;
            func_0x000107c601f0(puVar21,PTR___sSSN_11034da80,ppuVar35);
            func_0x000107c6142c(puVar9);
            (**(code **)(lStack_188 + 8))(puVar21,lVar10);
            func_0x000107c6142c(ppuVar14);
            ppuVar35 = ppuVar33;
            func_0x000107c61558();
            if (((ulong)ppuVar35 & 1) == 0) {
              func_0x000100403514(0,ppuVar33[2] + 1,1);
              ppuVar33 = ppuStack_108;
            }
            puVar21 = ppuVar33[2];
            if ((undefined *)((ulong)ppuVar33[3] >> 1) <= puVar21) {
              func_0x000100403514((undefined *)0x1 < ppuVar33[3],puVar21 + 1,1);
              ppuVar33 = ppuStack_108;
            }
            ppuVar29 = ppuVar29 + 4;
            ppuVar33[2] = puVar21 + 1;
            ppuVar33[(long)puVar21 * 2 + 4] = puVar28;
            ppuVar33[(long)puVar21 * 2 + 5] = puVar7;
            ppuVar11 = (undefined **)((long)ppuVar11 - 1);
          } while (ppuVar11 != (undefined **)0x0);
          FUN_103c58e58();
          func_0x000107c6142c(ppuStack_1a0);
        }
        ppuVar11 = ppuVar33;
        func_0x000103c5ad00();
        ppuVar35 = ppuVar33;
        if (ppuVar11 == (undefined **)0x0) {
          bVar5 = true;
        }
        else {
          ppuVar29 = (undefined **)0x0;
          bVar5 = true;
          ppuStack_1a0 = ppuVar33;
          do {
            if (ppuVar35[2] <= ppuVar29) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x103c58584);
              (*pcVar4)();
            }
            if (bVar5) {
              puVar21 = ppuVar33[(long)ppuVar29 * 2 + 4];
              puVar9 = (ppuVar33 + (long)ppuVar29 * 2 + 4)[1];
              puVar28 = puVar9;
              func_0x000107c5fb1c();
              lVar10 = lRam0000000112ffbd38;
              func_0x000107c61434(puVar9);
              if (lVar10 != -1) {
                func_0x000107c61568(0x112ffbd38,0x103c59330);
              }
              lVar10 = lRam000000011380d178;
              if (*(long *)(lRam000000011380d178 + 0x10) == 0) {
                bVar5 = true;
              }
              else {
                func_0x000107c6068c(&ppuStack_170,*(undefined8 *)(lRam000000011380d178 + 0x28));
                pppuVar18 = &ppuStack_170;
                func_0x000107c5fb58(pppuVar18,puVar21,puVar28);
                func_0x000107c606a8();
                uVar32 = -1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
                uVar41 = (ulong)pppuVar18 & (uVar32 ^ 0xffffffffffffffff);
                if ((*(ulong *)(lVar10 + 0x38 + (uVar41 >> 6) * 8) >> (uVar41 & 0x3f) & 1) == 0) {
                  bVar5 = true;
                }
                else {
                  do {
                    plVar22 = (long *)(*(long *)(lVar10 + 0x30) + uVar41 * 0x10);
                    puVar7 = (undefined *)*plVar22;
                    puVar36 = (undefined *)plVar22[1];
                    if ((puVar7 == puVar21 && puVar36 == puVar28) ||
                       (func_0x000107c605b8(puVar7,puVar36,puVar21,puVar28,0),
                       ((ulong)puVar7 & 1) != 0)) {
                      bVar5 = false;
                      ppuVar35 = ppuStack_1a0;
                      goto LAB_103c582c8;
                    }
                    uVar41 = uVar41 + 1 & ~uVar32;
                  } while ((*(ulong *)(lVar10 + 0x38 + (uVar41 >> 6) * 8) >> (uVar41 & 0x3f) & 1) !=
                           0);
                  bVar5 = true;
                  ppuVar35 = ppuStack_1a0;
                }
              }
LAB_103c582c8:
              func_0x000107c6142c(puVar28);
              func_0x000107c6142c(puVar9);
            }
            else {
              bVar5 = false;
            }
            ppuVar29 = (undefined **)((long)ppuVar29 + 1);
          } while (ppuVar29 != ppuVar11);
        }
        ppuVar11 = ppuVar35;
        func_0x000103c5acfc();
        if (((byte *)0x3 < (byte *)((long)ppuVar11 - 2U)) || (!bVar5)) {
          func_0x000107c6142c(ppuVar35);
          goto LAB_103c58318;
        }
        uVar13 = 0x112d38270;
        ppuStack_170 = ppuVar35;
        func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
        uVar6 = uVar13;
        func_0x00010011d734();
        uVar20 = 0x20;
        uVar26 = 0xe100000000000000;
        func_0x000107c5fa80(0x20,0xe100000000000000,uVar13,uVar6);
        func_0x000107c6142c(ppuVar35);
        func_0x000107c6142c(ppuStack_1a8);
        func_0x000102bf7c10();
        puStack_1e8 = puStack_118;
        uVar32 = *(ulong *)(puStack_118 + 0x10);
        if (*(ulong *)(puStack_118 + 0x18) >> 1 <= uVar32) {
          puVar21 = (undefined *)(ulong)(1 < *(ulong *)(puStack_118 + 0x18));
          func_0x0001000d182c(puVar21,uVar32 + 1,1,puStack_118);
          puStack_118 = puVar21;
        }
        *(ulong *)(puStack_118 + 0x10) = uVar32 + 1;
        *(undefined8 *)(puStack_118 + uVar32 * 0x10 + 0x20) = uVar20;
        *(undefined8 *)(puStack_118 + uVar32 * 0x10 + 0x28) = uVar26;
        bVar5 = ppuStack_1b8 == ppuStack_1b0;
        puStack_1e8 = puStack_118;
      }
      else {
        uVar34 = 1;
        do {
          ppuVar29 = ppuVar11;
          if ((ppuVar35 == (undefined **)0x41) && (ppuVar29 == (undefined **)0xe100000000000000)) {
            uVar37 = 0;
            func_0x000107c605b8(0x5a,0xe100000000000000,0x41,0xe100000000000000,1);
            ppuVar35 = (undefined **)0x41;
LAB_103c57f88:
            ppuVar11 = ppuVar29;
            func_0x000107c605b8(ppuVar35,ppuVar29,0x20,0xe100000000000000,0);
            func_0x000107c6142c();
            uVar3 = uVar34 & 1;
            uVar34 = 0;
            if (uVar3 != 0) {
              uVar34 = uVar37 ^ 1 | (uint)ppuVar35;
            }
          }
          else {
            ppuVar14 = ppuVar35;
            ppuVar11 = ppuVar29;
            func_0x000107c605b8(ppuVar35,ppuVar29,0x41,0xe100000000000000,1);
            if (((ulong)ppuVar14 & 1) == 0) {
              if ((ppuVar35 == (undefined **)0x5a) && (ppuVar29 == (undefined **)0xe100000000000000)
                 ) {
                uVar37 = 0;
                ppuVar35 = (undefined **)0x5a;
              }
              else {
                uVar37 = 0;
                ppuVar11 = (undefined **)0xe100000000000000;
                func_0x000107c605b8(0x5a,0xe100000000000000,ppuVar35,ppuVar29,1);
                uVar3 = uVar37;
                if (ppuVar35 == (undefined **)0x20) goto LAB_103c57f34;
              }
              goto LAB_103c57f88;
            }
            uVar37 = 1;
            uVar3 = 1;
            if (ppuVar35 != (undefined **)0x20) goto LAB_103c57f88;
LAB_103c57f34:
            uVar37 = uVar3;
            if (ppuVar29 != (undefined **)0xe100000000000000) goto LAB_103c57f88;
            func_0x000107c6142c();
          }
          func_0x000107c5fb84();
          ppuVar35 = ppuVar29;
        } while (ppuVar11 != (undefined **)0x0);
        func_0x000107c6142c(ppuStack_168);
        if ((uVar34 & 1) != 0) goto LAB_103c57fd8;
LAB_103c58318:
        func_0x000107c6142c(ppuStack_1a8);
        bVar5 = ppuStack_1b8 == ppuStack_1b0;
      }
      ppuVar11 = ppuStack_1b8;
      ppuVar33 = ppuStack_198;
    } while (!bVar5);
  }
  func_0x000107c6142c(ppuVar33);
  puVar21 = puStack_1e8;
  if (*(long *)(puStack_1e8 + 0x10) == 0) {
    uVar13 = 0;
    puVar9 = (undefined *)0x0;
  }
  else {
    uVar13 = *(undefined8 *)(puStack_1e8 + 0x20);
    puVar9 = *(undefined **)(puStack_1e8 + 0x28);
    func_0x000107c61434(puVar9);
  }
  puVar28 = puStack_270;
  func_0x000107c6142c(puVar21);
  puVar7 = puStack_1f0;
  puVar21 = puStack_280;
  puVar36 = puStack_1f0;
  puVar27 = puVar9;
  if ((puVar28 != (undefined *)0x0) &&
     (puVar36 = puVar9, puVar27 = puVar28, puStack_1f0 != (undefined *)0x0)) {
    puVar36 = puStack_280;
    FUN_103c5a0ec();
    lVar12 = 0;
    FUN_103c5bba0();
    lVar10 = lVar12;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar10 + _DAT_112ffbd48);
    *puVar1 = puVar21;
    puVar1[1] = puVar28;
    plVar22 = (long *)(lVar10 + _DAT_112ffbd50);
    *plVar22 = lStack_1f8;
    plVar22[1] = (long)puVar7;
    puVar1 = (undefined8 *)(lVar10 + _DAT_112ffbd58);
    *puVar1 = puVar36;
    puVar1[1] = puVar27;
    puVar1 = (undefined8 *)(lVar10 + _DAT_112ffbd60);
    *puVar1 = uVar13;
    puVar1[1] = puVar9;
    plVar22 = &lStack_180;
    lStack_180 = lVar10;
    lStack_178 = lVar12;
    func_0x000107c61154(plVar22,PTR_s_init_1125d9248);
    (*pcStack_1d8)();
    func_0x000107c61170(plVar22);
    return;
  }
  func_0x000107c6142c(puVar27);
  func_0x000107c6142c(puVar36);
LAB_103c58548:
  (*pcStack_1d8)(0);
  return;
}



/* Entry: 103c56ca0; end: 103c585db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c56ca0(undefined **param_1,long param_2,code *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined ***pppuVar14;
  undefined ***pppuVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  long *plVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined *puVar25;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined *puVar26;
  undefined **ppuVar27;
  byte *pbVar28;
  ulong uVar29;
  ulong uVar30;
  undefined **ppuVar31;
  long extraout_x12;
  uint uVar32;
  undefined *puVar33;
  undefined **ppuVar34;
  undefined *puVar35;
  uint uVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  ulong uVar40;
  ulong auStack_210 [4];
  undefined *puStack_1f0;
  undefined4 uStack_1e4;
  undefined *puStack_1e0;
  undefined4 uStack_1d4;
  undefined **ppuStack_1d0;
  code *pcStack_1c8;
  undefined **ppuStack_1c0;
  undefined *puStack_1b8;
  code *pcStack_1b0;
  code *pcStack_1a8;
  code *pcStack_1a0;
  undefined **ppuStack_198;
  long lStack_190;
  undefined *puStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined **ppuStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined ***pppuStack_d0;
  ulong uStack_c8;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  
  puVar6 = (undefined *)0x0;
  uStack_150 = param_4;
  pcStack_148 = param_3;
  ppuStack_108 = param_1;
  func_0x000107c5ef5c();
  puVar35 = *(undefined **)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(puVar35 + 0x40));
  lVar16 = (long)&puStack_1f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  func_0x000107c5ef64();
  lVar37 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar37 + 0x40));
  lVar38 = lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  ppuVar8 = (undefined **)0x0;
  func_0x000107c5eea4();
  puVar33 = ppuVar8[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(puVar33 + 0x40));
  lVar39 = lVar38 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0;
  func_0x000107c5eb9c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  puVar26 = (undefined *)(lVar39 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  if (param_2 != 0) {
    func_0x000107c614b0(param_2);
    (*pcStack_148)(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_2);
    return;
  }
  ppuVar31 = ppuStack_108;
  lStack_190 = lVar39;
  puStack_188 = puVar33;
  lStack_180 = lVar38;
  lStack_178 = lVar37;
  lStack_170 = lVar7;
  lStack_168 = lVar16;
  puStack_160 = puVar35;
  puStack_158 = puVar6;
  ppuStack_128 = ppuVar8;
  puStack_100 = puVar26;
  lStack_f8 = extraout_x12;
  func_0x000107c50700();
  func_0x000107c61180();
  if (ppuVar31 == (undefined **)0x0) goto LAB_103c58548;
  uVar10 = 0;
  FUN_103c58a94(0,0x112e95260,&PTR__OBJC_CLASS___VNObservation_1126aa788);
  ppuVar8 = ppuVar31;
  func_0x000107c5fc54(ppuVar31,uVar10);
  func_0x000107c61170(ppuVar31);
  ppuVar31 = ppuVar8;
  FUN_103c585e4();
  func_0x000107c6142c(ppuVar8);
  if (ppuVar31 == (undefined **)0x0) goto LAB_103c58548;
  ppuVar8 = (undefined **)((ulong)ppuVar31 & 0xffffffffffffff8);
  if ((ulong)ppuVar31 >> 0x3e == 0) {
    ppuVar34 = (undefined **)ppuVar8[2];
  }
  else {
    ppuVar34 = ppuVar31;
    if (-1 < (long)ppuVar31) {
      ppuVar34 = ppuVar8;
    }
    func_0x000107c60480();
  }
  lStack_138 = lVar9;
  if (ppuVar34 == (undefined **)0x0) {
    ppuStack_108 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    ppuStack_108 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
    ppuVar27 = (undefined **)0x0;
    do {
      while( true ) {
        if (((ulong)ppuVar31 & 0xc000000000000001) == 0) {
          if (ppuVar8[2] <= ppuVar27) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103c5858c);
            (*pcVar4)();
          }
          ppuVar11 = (undefined **)ppuVar31[(long)((long)ppuVar27 + 4)];
          func_0x000107c61174();
        }
        else {
          ppuVar11 = ppuVar27;
          func_0x000103c58834(ppuVar27,ppuVar31,
                              &PTR__OBJC_CLASS___VNRecognizedTextObservation_1126ada18,0x112ffb598);
        }
        ppuVar21 = (undefined **)((long)ppuVar27 + 1);
        if (SCARRY8((long)ppuVar27,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103c58588);
          (*pcVar4)();
        }
        ppuVar13 = ppuVar11;
        func_0x000107c5cbf0();
        func_0x000107c61180();
        ppuVar12 = (undefined **)0x0;
        FUN_103c58a94(0,0x112ffb590,&PTR__OBJC_CLASS___VNRecognizedText_1126ada10);
        ppuVar22 = ppuVar13;
        func_0x000107c5fc54();
        func_0x000107c61170(ppuVar13);
        if ((ulong)ppuVar22 >> 0x3e == 0) {
          ppuVar13 = *(undefined ***)(((ulong)ppuVar22 & 0xffffffffffffff8) + 0x10);
        }
        else {
          ppuVar13 = (undefined **)((ulong)ppuVar22 & 0xffffffffffffff8);
          if ((undefined **)0x7fffffffffffffff < ppuVar22) {
            ppuVar13 = ppuVar22;
          }
          func_0x000107c60480();
        }
        if (ppuVar13 != (undefined **)0x0) break;
        func_0x000107c61170(ppuVar11);
        func_0x000107c6142c(ppuVar22);
        ppuVar27 = (undefined **)((long)ppuVar27 + 1);
        if (ppuVar21 == ppuVar34) goto LAB_103c570cc;
      }
      if (((ulong)ppuVar22 & 0xc000000000000001) == 0) {
        if (*(long *)(((ulong)ppuVar22 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103c585dc);
          (*pcVar4)();
        }
        ppuVar27 = (undefined **)ppuVar22[4];
        func_0x000107c61174();
      }
      else {
        ppuVar27 = (undefined **)0x0;
        ppuVar12 = ppuVar22;
        func_0x000103c58834(0,ppuVar22,&PTR__OBJC_CLASS___VNRecognizedText_1126ada10,0x112ffb590);
      }
      func_0x000107c6142c(ppuVar22);
      ppuVar13 = ppuVar27;
      func_0x000107c5c158();
      func_0x000107c61180();
      func_0x000107c61170(ppuVar27);
      ppuVar27 = ppuVar13;
      func_0x000107c5faec();
      ppuStack_110 = ppuVar27;
      func_0x000107c61170(ppuVar13);
      func_0x000107c61170(ppuVar11);
      ppuVar27 = ppuStack_108;
      func_0x000107c61558();
      if (((ulong)ppuVar27 & 1) == 0) {
        ppuVar27 = (undefined **)0x0;
        func_0x0001000d182c(0,ppuStack_108[2] + 1,1);
        ppuStack_108 = ppuVar27;
      }
      puVar6 = ppuStack_108[2];
      if ((undefined *)((ulong)ppuStack_108[3] >> 1) <= puVar6) {
        ppuVar27 = (undefined **)(ulong)((undefined *)0x1 < ppuStack_108[3]);
        func_0x0001000d182c(ppuVar27,puVar6 + 1,1,ppuStack_108);
        ppuStack_108 = ppuVar27;
      }
      ppuStack_108[2] = puVar6 + 1;
      ppuStack_108[(long)puVar6 * 2 + 4] = (undefined *)ppuStack_110;
      ppuStack_108[(long)puVar6 * 2 + 5] = (undefined *)ppuVar12;
      ppuVar27 = ppuVar21;
    } while (ppuVar21 != ppuVar34);
  }
LAB_103c570cc:
  func_0x000107c6142c();
  puVar6 = PTR___sSSN_11034da80;
  ppuVar8 = (undefined **)ppuStack_108[2];
  ppuVar34 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
  ppuStack_120 = ppuVar8;
  if (ppuVar8 != (undefined **)0x0) {
    ppuVar27 = (undefined **)0x0;
    ppuStack_110 = ppuStack_108 + 5;
    ppuStack_118 = (undefined **)((long)ppuVar8 - 1);
LAB_103c57118:
    ppuVar21 = ppuStack_110 + (long)ppuVar27 * 2;
    ppuVar11 = ppuVar27;
    ppuVar8 = ppuStack_120;
    do {
      if (ppuStack_108[2] <= ppuVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103c58590);
        (*pcVar4)();
      }
      ppuStack_e0 = (undefined **)ppuVar21[-1];
      ppuVar27 = (undefined **)*ppuVar21;
      ppuStack_78 = (undefined **)0x445c;
      uStack_70 = 0xe200000000000000;
      puStack_88 = (undefined *)0x0;
      uStack_80 = 0xe000000000000000;
      ppuStack_d8 = ppuVar27;
      func_0x000100e8b654();
      func_0x000107c61434(ppuVar27);
      *(undefined ***)(puVar26 + -0x10) = ppuVar31;
      *(undefined ***)(puVar26 + -8) = ppuVar31;
      pppuVar14 = &ppuStack_78;
      ppuVar12 = &puStack_88;
      *(undefined **)(puVar26 + -0x20) = puVar6;
      *(undefined ***)(puVar26 + -0x18) = ppuVar31;
      func_0x000107c601fc(pppuVar14,ppuVar12,0x400,0,0,1,puVar6,puVar6);
      pppuVar15 = pppuVar14;
      FUN_103c59744();
      if ((((ulong)pppuVar15 & 1) == 0) ||
         (pppuVar15 = pppuVar14, func_0x000107c5fb5c(pppuVar14,ppuVar12), (long)pppuVar15 < 0xd)) {
        func_0x000107c6142c(ppuVar12);
        ppuVar31 = ppuVar27;
      }
      else {
        pppuVar15 = pppuVar14;
        func_0x000107c5fb5c(pppuVar14,ppuVar12);
        func_0x000107c6142c(ppuVar27);
        ppuVar8 = ppuStack_120;
        ppuVar31 = ppuVar12;
        if ((long)pppuVar15 < 0x14) goto LAB_103c57208;
      }
      ppuVar11 = (undefined **)((long)ppuVar11 + 1);
      func_0x000107c6142c();
      ppuVar21 = ppuVar21 + 2;
      if (ppuVar8 == ppuVar11) goto LAB_103c5729c;
    } while( true );
  }
  if (*(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10) == 0) goto LAB_103c572d0;
LAB_103c572a4:
  ppuVar31 = ppuStack_108;
  puStack_1f0 = ppuVar34[4];
  puStack_1e0 = ppuVar34[5];
  func_0x000107c61434();
LAB_103c572e0:
  lVar7 = lStack_138;
  func_0x000107c6142c(ppuVar34);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (ppuVar8 == (undefined **)0x0) {
    uStack_130 = 0;
  }
  else {
    ppuVar34 = (undefined **)0x0;
    uStack_130 = 0;
    ppuVar8 = ppuVar31 + 4;
    ppuStack_140 = (undefined **)((ulong)&ppuStack_e0 | 1);
    uStack_1d4 = *(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO4yearyA2EmFWC_110350d88;
    uStack_1e4 = *(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO5monthyA2EmFWC_110350d90;
    ppuStack_198 = ppuVar8;
    do {
      if (ppuVar31[2] <= ppuVar34) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103c58594);
        (*pcVar4)();
      }
      ppuVar27 = (undefined **)ppuVar8[(long)ppuVar34 * 2];
      ppuVar11 = (undefined **)(ppuVar8 + (long)ppuVar34 * 2)[1];
      func_0x000107c61434(ppuVar11);
      ppuVar21 = ppuVar11;
      FUN_103c59cac();
      puVar26 = puStack_100;
      if (ppuVar21 == (undefined **)0x0) {
        func_0x000107c6142c(ppuVar11);
      }
      else {
        uVar10 = 0x2f;
        ppuStack_e0 = ppuVar27;
        ppuStack_d8 = ppuVar21;
        func_0x000107c5eb6c(puStack_100,0x2f,0xe100000000000000);
        func_0x000100e8b654();
        puVar33 = puVar26;
        func_0x000107c601d8(puVar26,PTR___sSSN_11034da80,uVar10);
        (**(code **)(lStack_f8 + 8))(puVar26,lVar7);
        if (*(long *)(puVar33 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103c5859c);
          (*pcVar4)();
        }
        ppuStack_118 = ppuVar27;
        ppuVar31 = *(undefined ***)(puVar33 + 0x20);
        ppuVar12 = *(undefined ***)(puVar33 + 0x28);
        ppuVar22 = (undefined **)((ulong)ppuVar31 & 0xffffffffffff);
        ppuVar13 = (undefined **)((ulong)ppuVar12 >> 0x38 & 0xf);
        ppuVar27 = ppuVar22;
        if (((ulong)ppuVar12 & 0x2000000000000000) != 0) {
          ppuVar27 = ppuVar13;
        }
        if (ppuVar27 == (undefined **)0x0) {
          func_0x000107c6142c(ppuVar21);
          func_0x000107c6142c(ppuVar11);
          func_0x000107c6142c(puVar33);
          ppuVar31 = ppuStack_108;
        }
        else {
          ppuStack_110 = ppuVar21;
          if (((ulong)ppuVar12 >> 0x3c & 1) == 0) {
            if (((ulong)ppuVar12 >> 0x3d & 1) != 0) {
              ppuStack_e0 = ppuVar31;
              ppuStack_d8 = (undefined **)((ulong)ppuVar12 & 0xffffffffffffff);
              uVar32 = (uint)ppuVar31 & 0xff;
              if (uVar32 == 0x2b) {
                if (ppuVar13 == (undefined **)0x0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x103c585ac);
                  (*pcVar4)();
                }
                pbVar28 = (byte *)((long)ppuVar13 + -1);
                if (pbVar28 == (byte *)0x0) goto LAB_103c57668;
                ppuVar27 = (undefined **)0x0;
                ppuVar31 = ppuStack_140;
                do {
                  if (((9 < *(byte *)ppuVar31 - 0x30) ||
                      (lVar7 = (long)ppuVar27 * 10,
                      SUB168(SEXT816((long)ppuVar27) * SEXT816(10),8) != lVar7 >> 0x3f)) ||
                     (uVar30 = (ulong)(byte)(*(byte *)ppuVar31 - 0x30),
                     ppuVar27 = (undefined **)(lVar7 + uVar30), SCARRY8(lVar7,uVar30)))
                  goto LAB_103c57668;
                  uVar32 = 0;
                  pbVar28 = pbVar28 + -1;
                  ppuVar31 = (undefined **)((long)ppuVar31 + 1);
                } while (pbVar28 != (byte *)0x0);
              }
              else if (uVar32 == 0x2d) {
                if (ppuVar13 == (undefined **)0x0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x103c585b4);
                  (*pcVar4)();
                }
                pbVar28 = (byte *)((long)ppuVar13 + -1);
                if (pbVar28 == (byte *)0x0) {
LAB_103c57668:
                  uVar32 = 1;
                  ppuVar27 = (undefined **)0x0;
                }
                else {
                  ppuVar27 = (undefined **)0x0;
                  ppuVar31 = ppuStack_140;
                  do {
                    if (((9 < *(byte *)ppuVar31 - 0x30) ||
                        (lVar7 = (long)ppuVar27 * 10,
                        SUB168(SEXT816((long)ppuVar27) * SEXT816(10),8) != lVar7 >> 0x3f)) ||
                       (uVar30 = (ulong)(byte)(*(byte *)ppuVar31 - 0x30),
                       ppuVar27 = (undefined **)(lVar7 - uVar30), SBORROW8(lVar7,uVar30)))
                    goto LAB_103c57668;
                    uVar32 = 0;
                    pbVar28 = pbVar28 + -1;
                    ppuVar31 = (undefined **)((long)ppuVar31 + 1);
                  } while (pbVar28 != (byte *)0x0);
                }
              }
              else {
                if (ppuVar13 == (undefined **)0x0) goto LAB_103c57668;
                ppuVar27 = (undefined **)0x0;
                pppuVar15 = &ppuStack_e0;
                do {
                  if (((9 < *(byte *)pppuVar15 - 0x30) ||
                      (lVar7 = (long)ppuVar27 * 10,
                      SUB168(SEXT816((long)ppuVar27) * SEXT816(10),8) != lVar7 >> 0x3f)) ||
                     (uVar30 = (ulong)(byte)(*(byte *)pppuVar15 - 0x30),
                     ppuVar27 = (undefined **)(lVar7 + uVar30), SCARRY8(lVar7,uVar30)))
                  goto LAB_103c57668;
                  uVar32 = 0;
                  ppuVar13 = (undefined **)((long)ppuVar13 + -1);
                  pppuVar15 = (undefined ***)((long)pppuVar15 + 1);
                } while (ppuVar13 != (undefined **)0x0);
              }
              goto LAB_103c57670;
            }
            if (((ulong)ppuVar31 >> 0x3c & 1) == 0) {
              func_0x000107c60358();
            }
            else {
              ppuVar31 = (undefined **)(((ulong)ppuVar12 & 0xfffffffffffffff) + 0x20);
              ppuVar12 = ppuVar22;
            }
            if (*(byte *)ppuVar31 != 0x2b) {
              if (*(byte *)ppuVar31 != 0x2d) {
                if (ppuVar12 == (undefined **)0x0) goto LAB_103c57350;
                ppuVar27 = (undefined **)0x0;
                ppuVar21 = ppuVar31;
                while (ppuVar21 != (undefined **)0x0) {
                  if (((9 < *(byte *)ppuVar31 - 0x30) ||
                      (lVar7 = (long)ppuVar27 * 10,
                      SUB168(SEXT816((long)ppuVar27) * SEXT816(10),8) != lVar7 >> 0x3f)) ||
                     (uVar30 = (ulong)(byte)(*(byte *)ppuVar31 - 0x30),
                     ppuVar27 = (undefined **)(lVar7 + uVar30), SCARRY8(lVar7,uVar30)))
                  goto LAB_103c57350;
                  ppuVar12 = (undefined **)((long)ppuVar12 - 1);
                  ppuVar31 = (undefined **)((long)ppuVar31 + 1);
                  ppuVar21 = ppuVar12;
                }
                goto LAB_103c57680;
              }
              pbVar28 = (byte *)((long)ppuVar12 - 1);
              if ((long)ppuVar12 < 1) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x103c585a8);
                (*pcVar4)();
              }
              if (pbVar28 != (byte *)0x0) {
                ppuVar27 = (undefined **)0x0;
                do {
                  ppuVar31 = (undefined **)((long)ppuVar31 + 1);
                  if (((9 < *(byte *)ppuVar31 - 0x30) ||
                      (lVar7 = (long)ppuVar27 * 10,
                      SUB168(SEXT816((long)ppuVar27) * SEXT816(10),8) != lVar7 >> 0x3f)) ||
                     (uVar30 = (ulong)(byte)(*(byte *)ppuVar31 - 0x30),
                     ppuVar27 = (undefined **)(lVar7 - uVar30), SBORROW8(lVar7,uVar30)))
                  goto LAB_103c57350;
                  pbVar28 = pbVar28 + -1;
                } while (pbVar28 != (byte *)0x0);
                goto LAB_103c57680;
              }
              goto LAB_103c57350;
            }
            pbVar28 = (byte *)((long)ppuVar12 - 1);
            if ((long)ppuVar12 < 1) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x103c585b0);
              (*pcVar4)();
            }
            if (pbVar28 == (byte *)0x0) goto LAB_103c57350;
            ppuVar27 = (undefined **)0x0;
            do {
              ppuVar31 = (undefined **)((long)ppuVar31 + 1);
              if (((9 < *(byte *)ppuVar31 - 0x30) ||
                  (lVar7 = (long)ppuVar27 * 10,
                  SUB168(SEXT816((long)ppuVar27) * SEXT816(10),8) != lVar7 >> 0x3f)) ||
                 (uVar30 = (ulong)(byte)(*(byte *)ppuVar31 - 0x30),
                 ppuVar27 = (undefined **)(lVar7 + uVar30), SCARRY8(lVar7,uVar30)))
              goto LAB_103c57350;
              pbVar28 = pbVar28 + -1;
            } while (pbVar28 != (byte *)0x0);
          }
          else {
            func_0x000107c61434(ppuVar12);
            ppuVar27 = ppuVar12;
            func_0x000100edba6c(ppuVar31,ppuVar12,10);
            uVar32 = (uint)ppuVar27;
            func_0x000107c6142c(ppuVar12);
            ppuVar27 = ppuVar31;
LAB_103c57670:
            if ((uVar32 & 0xff) == 1) {
LAB_103c57350:
              ppuVar31 = ppuStack_108;
              func_0x000107c6142c(ppuStack_110);
              func_0x000107c6142c(ppuVar11);
              func_0x000107c6142c(puVar33);
              lVar7 = lStack_138;
              goto LAB_103c57370;
            }
          }
LAB_103c57680:
          if (*(ulong *)(puVar33 + 0x10) < 2) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103c585a4);
            (*pcVar4)();
          }
          ppuVar31 = *(undefined ***)(puVar33 + 0x30);
          uVar40 = *(ulong *)(puVar33 + 0x38);
          func_0x000107c61434(uVar40);
          func_0x000107c6142c(puVar33);
          uVar23 = (ulong)ppuVar31 & 0xffffffffffff;
          uVar29 = uVar40 >> 0x38 & 0xf;
          uVar30 = uVar23;
          if ((uVar40 & 0x2000000000000000) != 0) {
            uVar30 = uVar29;
          }
          if (uVar30 == 0) {
            func_0x000107c6142c(uVar40);
            func_0x000107c6142c(ppuStack_110);
            func_0x000107c6142c(ppuVar11);
            ppuVar31 = ppuStack_108;
            lVar7 = lStack_138;
          }
          else {
            if ((uVar40 >> 0x3c & 1) == 0) {
              if ((uVar40 >> 0x3d & 1) == 0) {
                if (((ulong)ppuVar31 >> 0x3c & 1) == 0) {
                  uVar23 = uVar40;
                  func_0x000107c60358();
                }
                else {
                  ppuVar31 = (undefined **)((uVar40 & 0xfffffffffffffff) + 0x20);
                }
                if (*(byte *)ppuVar31 == 0x2b) {
                  if ((long)uVar23 < 1) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x103c585cc);
                    (*pcVar4)();
                  }
                  lVar7 = uVar23 - 1;
                  if (lVar7 == 0) goto LAB_103c578f0;
                  ppuVar8 = (undefined **)0x0;
                  do {
                    ppuVar31 = (undefined **)((long)ppuVar31 + 1);
                    if (((9 < *(byte *)ppuVar31 - 0x30) ||
                        (lVar9 = (long)ppuVar8 * 10,
                        SUB168(SEXT816((long)ppuVar8) * SEXT816(10),8) != lVar9 >> 0x3f)) ||
                       (uVar30 = (ulong)(byte)(*(byte *)ppuVar31 - 0x30),
                       ppuVar8 = (undefined **)(lVar9 + uVar30), SCARRY8(lVar9,uVar30)))
                    goto LAB_103c578f0;
                    uVar32 = 0;
                    lVar7 = lVar7 + -1;
                  } while (lVar7 != 0);
                }
                else if (*(byte *)ppuVar31 == 0x2d) {
                  if ((long)uVar23 < 1) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x103c585d4);
                    (*pcVar4)();
                  }
                  lVar7 = uVar23 - 1;
                  if (lVar7 == 0) {
LAB_103c578f0:
                    uVar32 = 1;
                    ppuVar8 = (undefined **)0x0;
                  }
                  else {
                    ppuVar8 = (undefined **)0x0;
                    do {
                      ppuVar31 = (undefined **)((long)ppuVar31 + 1);
                      if (((9 < *(byte *)ppuVar31 - 0x30) ||
                          (lVar9 = (long)ppuVar8 * 10,
                          SUB168(SEXT816((long)ppuVar8) * SEXT816(10),8) != lVar9 >> 0x3f)) ||
                         (uVar30 = (ulong)(byte)(*(byte *)ppuVar31 - 0x30),
                         ppuVar8 = (undefined **)(lVar9 - uVar30), SBORROW8(lVar9,uVar30)))
                      goto LAB_103c578f0;
                      uVar32 = 0;
                      lVar7 = lVar7 + -1;
                    } while (lVar7 != 0);
                  }
                }
                else {
                  if (uVar23 == 0) goto LAB_103c578f0;
                  if (ppuVar31 == (undefined **)0x0) {
                    uVar32 = 0;
                    ppuVar8 = (undefined **)0x0;
                  }
                  else {
                    ppuVar8 = (undefined **)0x0;
                    do {
                      if (((9 < *(byte *)ppuVar31 - 0x30) ||
                          (lVar7 = (long)ppuVar8 * 10,
                          SUB168(SEXT816((long)ppuVar8) * SEXT816(10),8) != lVar7 >> 0x3f)) ||
                         (uVar30 = (ulong)(byte)(*(byte *)ppuVar31 - 0x30),
                         ppuVar8 = (undefined **)(lVar7 + uVar30), SCARRY8(lVar7,uVar30)))
                      goto LAB_103c578f0;
                      uVar32 = 0;
                      uVar23 = uVar23 - 1;
                      ppuVar31 = (undefined **)((long)ppuVar31 + 1);
                    } while (uVar23 != 0);
                  }
                }
              }
              else {
                ppuStack_e0 = ppuVar31;
                ppuStack_d8 = (undefined **)(uVar40 & 0xffffffffffffff);
                uVar32 = (uint)ppuVar31 & 0xff;
                if (uVar32 == 0x2b) {
                  if (uVar29 == 0) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x103c585d8);
                    (*pcVar4)();
                  }
                  lVar7 = uVar29 - 1;
                  if (lVar7 == 0) goto LAB_103c578f0;
                  ppuVar8 = (undefined **)0x0;
                  ppuVar31 = ppuStack_140;
                  do {
                    if (((9 < *(byte *)ppuVar31 - 0x30) ||
                        (lVar9 = (long)ppuVar8 * 10,
                        SUB168(SEXT816((long)ppuVar8) * SEXT816(10),8) != lVar9 >> 0x3f)) ||
                       (uVar30 = (ulong)(byte)(*(byte *)ppuVar31 - 0x30),
                       ppuVar8 = (undefined **)(lVar9 + uVar30), SCARRY8(lVar9,uVar30)))
                    goto LAB_103c578f0;
                    uVar32 = 0;
                    lVar7 = lVar7 + -1;
                    ppuVar31 = (undefined **)((long)ppuVar31 + 1);
                  } while (lVar7 != 0);
                }
                else if (uVar32 == 0x2d) {
                  if (uVar29 == 0) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x103c585d0);
                    (*pcVar4)();
                  }
                  lVar7 = uVar29 - 1;
                  if (lVar7 == 0) goto LAB_103c578f0;
                  ppuVar8 = (undefined **)0x0;
                  ppuVar31 = ppuStack_140;
                  do {
                    if (((9 < *(byte *)ppuVar31 - 0x30) ||
                        (lVar9 = (long)ppuVar8 * 10,
                        SUB168(SEXT816((long)ppuVar8) * SEXT816(10),8) != lVar9 >> 0x3f)) ||
                       (uVar30 = (ulong)(byte)(*(byte *)ppuVar31 - 0x30),
                       ppuVar8 = (undefined **)(lVar9 - uVar30), SBORROW8(lVar9,uVar30)))
                    goto LAB_103c578f0;
                    uVar32 = 0;
                    lVar7 = lVar7 + -1;
                    ppuVar31 = (undefined **)((long)ppuVar31 + 1);
                  } while (lVar7 != 0);
                }
                else {
                  if (uVar29 == 0) goto LAB_103c578f0;
                  ppuVar8 = (undefined **)0x0;
                  pppuVar15 = &ppuStack_e0;
                  do {
                    if (((9 < *(byte *)pppuVar15 - 0x30) ||
                        (lVar7 = (long)ppuVar8 * 10,
                        SUB168(SEXT816((long)ppuVar8) * SEXT816(10),8) != lVar7 >> 0x3f)) ||
                       (uVar30 = (ulong)(byte)(*(byte *)pppuVar15 - 0x30),
                       ppuVar8 = (undefined **)(lVar7 + uVar30), SCARRY8(lVar7,uVar30)))
                    goto LAB_103c578f0;
                    uVar32 = 0;
                    uVar29 = uVar29 - 1;
                    pppuVar15 = (undefined ***)((long)pppuVar15 + 1);
                  } while (uVar29 != 0);
                }
              }
            }
            else {
              uVar30 = uVar40;
              func_0x000100edba6c(ppuVar31,uVar40,10);
              uVar32 = (uint)uVar30;
              ppuVar8 = ppuVar31;
            }
            func_0x000107c6142c(uVar40);
            lVar9 = lStack_190;
            if ((uVar32 & 0xff) == 1) {
              func_0x000107c6142c(ppuStack_110);
              func_0x000107c6142c(ppuVar11);
              ppuVar31 = ppuStack_108;
              lVar7 = lStack_138;
              ppuVar8 = ppuStack_198;
            }
            else {
              ppuStack_1c0 = ppuVar11;
              puStack_1b8 = puVar6;
              func_0x000107c5eea0(lStack_190);
              lVar37 = lStack_180;
              func_0x000107c5ef54(lStack_180);
              puVar26 = puStack_158;
              puVar6 = puStack_160;
              lVar39 = lStack_168;
              uVar2 = uStack_1d4;
              pcStack_1b0 = *(code **)(puStack_160 + 0x68);
              (*pcStack_1b0)(lStack_168,uStack_1d4,puStack_158);
              lVar7 = lVar39;
              func_0x000107c5ef60(lVar39,lVar9);
              pcStack_1a8 = *(code **)(puVar6 + 8);
              (*pcStack_1a8)(lVar39,puVar26);
              lVar38 = lStack_170;
              pcStack_1a0 = *(code **)(lStack_178 + 8);
              (*pcStack_1a0)(lVar37,lStack_170);
              pcStack_1c8 = *(code **)(puStack_188 + 8);
              (*pcStack_1c8)(lVar9,ppuStack_128);
              func_0x000107c5eea0(lVar9);
              func_0x000107c5ef54(lVar37);
              ppuStack_1d0 = ppuVar8;
              if ((undefined **)(lVar7 % 100) == ppuVar8) {
                (*pcStack_1b0)(lVar39,uStack_1e4,puVar26);
                lVar16 = lVar39;
                func_0x000107c5ef60(lVar39,lVar9);
                func_0x000107c6142c(ppuStack_1c0);
                (*pcStack_1a8)(lVar39,puVar26);
                (*pcStack_1a0)(lVar37,lVar38);
                (*pcStack_1c8)(lVar9,ppuStack_128);
                lVar7 = lStack_138;
                if ((long)ppuVar27 < lVar16) {
LAB_103c57ae4:
                  func_0x000107c6142c(ppuStack_110);
                  ppuVar31 = ppuStack_108;
                  ppuVar8 = ppuStack_198;
                  puVar6 = puStack_1b8;
                }
                else {
LAB_103c57c6c:
                  puVar6 = puStack_1b8;
                  puVar26 = puStack_1b8;
                  func_0x000107c61558();
                  ppuVar31 = ppuStack_110;
                  ppuVar8 = ppuStack_198;
                  puVar33 = puVar6;
                  if (((ulong)puVar26 & 1) == 0) {
                    puVar33 = (undefined *)0x0;
                    func_0x0001000d182c(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
                  }
                  ppuVar27 = ppuStack_118;
                  uVar30 = *(ulong *)(puVar33 + 0x10);
                  puVar6 = puVar33;
                  if (*(ulong *)(puVar33 + 0x18) >> 1 <= uVar30) {
                    puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar33 + 0x18));
                    func_0x0001000d182c(puVar6,uVar30 + 1,1,puVar33);
                  }
                  *(ulong *)(puVar6 + 0x10) = uVar30 + 1;
                  *(undefined ***)(puVar6 + uVar30 * 0x10 + 0x20) = ppuVar27;
                  *(undefined ***)(puVar6 + uVar30 * 0x10 + 0x28) = ppuVar31;
                  ppuVar31 = ppuStack_108;
                }
              }
              else {
                (*pcStack_1b0)(lVar39,uVar2,puVar26);
                lVar16 = lVar39;
                func_0x000107c5ef60(lVar39,lVar9);
                (*pcStack_1a8)(lVar39,puVar26);
                (*pcStack_1a0)(lVar37,lVar38);
                pcVar4 = pcStack_1c8;
                (*pcStack_1c8)(lVar9,ppuStack_128);
                lVar7 = lStack_138;
                if (lVar16 % 100 < (long)ppuStack_1d0) {
                  func_0x000107c5eea0(lVar9);
                  func_0x000107c5ef54(lVar37);
                  (*pcStack_1b0)(lVar39,uVar2,puVar26);
                  lVar16 = lVar39;
                  func_0x000107c5ef60(lVar39,lVar9);
                  func_0x000107c6142c(ppuStack_1c0);
                  (*pcStack_1a8)(lVar39,puVar26);
                  (*pcStack_1a0)(lVar37,lVar38);
                  (*pcVar4)(lVar9,ppuStack_128);
                  if (lVar16 % 100 + 0xf <= (long)ppuStack_1d0) goto LAB_103c57ae4;
                  goto LAB_103c57c6c;
                }
                func_0x000107c6142c(ppuStack_1c0);
                func_0x000107c6142c(ppuStack_110);
                ppuVar31 = ppuStack_108;
                ppuVar8 = ppuStack_198;
                puVar6 = puStack_1b8;
              }
            }
          }
        }
      }
LAB_103c57370:
      ppuVar34 = (undefined **)((long)ppuVar34 + 1);
    } while (ppuVar34 != ppuStack_120);
  }
  if (*(long *)(puVar6 + 0x10) == 0) {
    lStack_168 = 0;
    puStack_160 = (undefined *)0x0;
  }
  else {
    lStack_168 = *(long *)(puVar6 + 0x20);
    puStack_160 = *(undefined **)(puVar6 + 0x28);
    func_0x000107c61434();
  }
  ppuVar8 = ppuStack_120;
  func_0x000107c6142c(puVar6);
  puStack_88 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (ppuVar8 == (undefined **)0x0) {
    puStack_158 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    ppuStack_140 = ppuVar31 + 4;
    puStack_158 = PTR___swiftEmptyArrayStorage_11034f1c8;
    ppuVar8 = (undefined **)0x0;
    do {
      if (ppuVar31[2] <= ppuVar8) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103c58598);
        (*pcVar4)();
      }
      ppuVar31 = (undefined **)ppuStack_140[(long)ppuVar8 * 2];
      ppuVar34 = (undefined **)(ppuStack_140 + (long)ppuVar8 * 2)[1];
      ppuStack_128 = (undefined **)((long)ppuVar8 + 1);
      uStack_c8 = (ulong)ppuVar31 & 0xffffffffffff;
      if (((ulong)ppuVar34 & 0x2000000000000000) != 0) {
        uStack_c8 = (ulong)ppuVar34 >> 0x38 & 0xf;
      }
      pppuStack_d0 = (undefined ***)0x0;
      ppuVar8 = (undefined **)0x2;
      ppuStack_118 = ppuVar34;
      ppuStack_e0 = ppuVar31;
      ppuStack_d8 = ppuVar34;
      func_0x000107c61438();
      func_0x000107c5fb84();
      if (ppuVar8 == (undefined **)0x0) {
        func_0x000107c6142c(ppuStack_d8);
LAB_103c57fd8:
        ppuVar8 = ppuStack_118;
        ppuStack_78 = (undefined **)0x20;
        uStack_70 = 0xe100000000000000;
        pppuStack_d0 = &ppuStack_78;
        func_0x000107c61434(ppuStack_118);
        uVar10 = uStack_130;
        ppuVar34 = (undefined **)0x7fffffffffffffff;
        func_0x0001014784b8(0x7fffffffffffffff,1,FUN_103c58a40,&ppuStack_e0,ppuVar31,ppuVar8);
        ppuVar8 = ppuVar34;
        FUN_103c5acf8();
        uStack_130 = uVar10;
        if (ppuVar8 == (undefined **)0x0) {
          func_0x000107c6142c(ppuVar34);
          ppuVar31 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          ppuStack_78 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
          FUN_103c594b0();
          lVar7 = lStack_138;
          if ((long)ppuVar8 < 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103c585a0);
            (*pcVar4)();
          }
          ppuVar27 = ppuVar34 + 7;
          ppuVar31 = ppuStack_78;
          ppuStack_110 = ppuVar34;
          do {
            ppuVar34 = (undefined **)ppuVar27[-3];
            ppuVar11 = (undefined **)ppuVar27[-2];
            puVar6 = ppuVar27[-1];
            puVar26 = *ppuVar27;
            func_0x000107c61434(puVar26);
            func_0x000107c5fb2c(ppuVar34,ppuVar11,puVar6,puVar26);
            puVar6 = puStack_100;
            ppuStack_e0 = ppuVar34;
            ppuStack_d8 = ppuVar11;
            func_0x000107c5eb68(puStack_100);
            func_0x000100e8b654();
            puVar33 = puVar6;
            puVar35 = PTR___sSSN_11034da80;
            func_0x000107c601f0(puVar6,PTR___sSSN_11034da80,ppuVar34);
            func_0x000107c6142c(puVar26);
            (**(code **)(lStack_f8 + 8))(puVar6,lVar7);
            func_0x000107c6142c(ppuVar11);
            ppuVar34 = ppuVar31;
            func_0x000107c61558();
            if (((ulong)ppuVar34 & 1) == 0) {
              func_0x000100403514(0,ppuVar31[2] + 1,1);
              ppuVar31 = ppuStack_78;
            }
            puVar6 = ppuVar31[2];
            if ((undefined *)((ulong)ppuVar31[3] >> 1) <= puVar6) {
              func_0x000100403514((undefined *)0x1 < ppuVar31[3],puVar6 + 1,1);
              ppuVar31 = ppuStack_78;
            }
            ppuVar27 = ppuVar27 + 4;
            ppuVar31[2] = puVar6 + 1;
            ppuVar31[(long)puVar6 * 2 + 4] = puVar33;
            ppuVar31[(long)puVar6 * 2 + 5] = puVar35;
            ppuVar8 = (undefined **)((long)ppuVar8 - 1);
          } while (ppuVar8 != (undefined **)0x0);
          FUN_103c58e58();
          func_0x000107c6142c(ppuStack_110);
        }
        ppuVar8 = ppuVar31;
        func_0x000103c5ad00();
        ppuVar34 = ppuVar31;
        if (ppuVar8 == (undefined **)0x0) {
          bVar5 = true;
        }
        else {
          ppuVar27 = (undefined **)0x0;
          bVar5 = true;
          ppuStack_110 = ppuVar31;
          do {
            if (ppuVar34[2] <= ppuVar27) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x103c58584);
              (*pcVar4)();
            }
            if (bVar5) {
              puVar6 = ppuVar31[(long)ppuVar27 * 2 + 4];
              puVar26 = (ppuVar31 + (long)ppuVar27 * 2 + 4)[1];
              puVar33 = puVar26;
              func_0x000107c5fb1c();
              lVar7 = lRam0000000112ffbd38;
              func_0x000107c61434(puVar26);
              if (lVar7 != -1) {
                func_0x000107c61568(0x112ffbd38,0x103c59330);
              }
              lVar7 = lRam000000011380d178;
              if (*(long *)(lRam000000011380d178 + 0x10) == 0) {
                bVar5 = true;
              }
              else {
                func_0x000107c6068c(&ppuStack_e0,*(undefined8 *)(lRam000000011380d178 + 0x28));
                pppuVar15 = &ppuStack_e0;
                func_0x000107c5fb58(pppuVar15,puVar6,puVar33);
                func_0x000107c606a8();
                uVar30 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
                uVar40 = (ulong)pppuVar15 & (uVar30 ^ 0xffffffffffffffff);
                if ((*(ulong *)(lVar7 + 0x38 + (uVar40 >> 6) * 8) >> (uVar40 & 0x3f) & 1) == 0) {
                  bVar5 = true;
                }
                else {
                  do {
                    plVar20 = (long *)(*(long *)(lVar7 + 0x30) + uVar40 * 0x10);
                    puVar35 = (undefined *)*plVar20;
                    puVar19 = (undefined *)plVar20[1];
                    if ((puVar35 == puVar6 && puVar19 == puVar33) ||
                       (func_0x000107c605b8(puVar35,puVar19,puVar6,puVar33,0),
                       ((ulong)puVar35 & 1) != 0)) {
                      bVar5 = false;
                      ppuVar34 = ppuStack_110;
                      goto LAB_103c582c8;
                    }
                    uVar40 = uVar40 + 1 & ~uVar30;
                  } while ((*(ulong *)(lVar7 + 0x38 + (uVar40 >> 6) * 8) >> (uVar40 & 0x3f) & 1) !=
                           0);
                  bVar5 = true;
                  ppuVar34 = ppuStack_110;
                }
              }
LAB_103c582c8:
              func_0x000107c6142c(puVar33);
              func_0x000107c6142c(puVar26);
            }
            else {
              bVar5 = false;
            }
            ppuVar27 = (undefined **)((long)ppuVar27 + 1);
          } while (ppuVar27 != ppuVar8);
        }
        ppuVar8 = ppuVar34;
        func_0x000103c5acfc();
        if (((byte *)0x3 < (byte *)((long)ppuVar8 - 2U)) || (!bVar5)) {
          func_0x000107c6142c(ppuVar34);
          goto LAB_103c58318;
        }
        uVar10 = 0x112d38270;
        ppuStack_e0 = ppuVar34;
        func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
        uVar17 = uVar10;
        func_0x00010011d734();
        uVar18 = 0x20;
        uVar24 = 0xe100000000000000;
        func_0x000107c5fa80(0x20,0xe100000000000000,uVar10,uVar17);
        func_0x000107c6142c(ppuVar34);
        func_0x000107c6142c(ppuStack_118);
        func_0x000102bf7c10();
        puStack_158 = puStack_88;
        uVar30 = *(ulong *)(puStack_88 + 0x10);
        if (*(ulong *)(puStack_88 + 0x18) >> 1 <= uVar30) {
          puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puStack_88 + 0x18));
          func_0x0001000d182c(puVar6,uVar30 + 1,1,puStack_88);
          puStack_88 = puVar6;
        }
        *(ulong *)(puStack_88 + 0x10) = uVar30 + 1;
        *(undefined8 *)(puStack_88 + uVar30 * 0x10 + 0x20) = uVar18;
        *(undefined8 *)(puStack_88 + uVar30 * 0x10 + 0x28) = uVar24;
        bVar5 = ppuStack_128 == ppuStack_120;
        puStack_158 = puStack_88;
      }
      else {
        uVar32 = 1;
        do {
          ppuVar27 = ppuVar8;
          if ((ppuVar34 == (undefined **)0x41) && (ppuVar27 == (undefined **)0xe100000000000000)) {
            uVar36 = 0;
            func_0x000107c605b8(0x5a,0xe100000000000000,0x41,0xe100000000000000,1);
            ppuVar34 = (undefined **)0x41;
LAB_103c57f88:
            ppuVar8 = ppuVar27;
            func_0x000107c605b8(ppuVar34,ppuVar27,0x20,0xe100000000000000,0);
            func_0x000107c6142c();
            uVar3 = uVar32 & 1;
            uVar32 = 0;
            if (uVar3 != 0) {
              uVar32 = uVar36 ^ 1 | (uint)ppuVar34;
            }
          }
          else {
            ppuVar11 = ppuVar34;
            ppuVar8 = ppuVar27;
            func_0x000107c605b8(ppuVar34,ppuVar27,0x41,0xe100000000000000,1);
            if (((ulong)ppuVar11 & 1) == 0) {
              if ((ppuVar34 == (undefined **)0x5a) && (ppuVar27 == (undefined **)0xe100000000000000)
                 ) {
                uVar36 = 0;
                ppuVar34 = (undefined **)0x5a;
              }
              else {
                uVar36 = 0;
                ppuVar8 = (undefined **)0xe100000000000000;
                func_0x000107c605b8(0x5a,0xe100000000000000,ppuVar34,ppuVar27,1);
                uVar3 = uVar36;
                if (ppuVar34 == (undefined **)0x20) goto LAB_103c57f34;
              }
              goto LAB_103c57f88;
            }
            uVar36 = 1;
            uVar3 = 1;
            if (ppuVar34 != (undefined **)0x20) goto LAB_103c57f88;
LAB_103c57f34:
            uVar36 = uVar3;
            if (ppuVar27 != (undefined **)0xe100000000000000) goto LAB_103c57f88;
            func_0x000107c6142c();
          }
          func_0x000107c5fb84();
          ppuVar34 = ppuVar27;
        } while (ppuVar8 != (undefined **)0x0);
        func_0x000107c6142c(ppuStack_d8);
        if ((uVar32 & 1) != 0) goto LAB_103c57fd8;
LAB_103c58318:
        func_0x000107c6142c(ppuStack_118);
        bVar5 = ppuStack_128 == ppuStack_120;
      }
      ppuVar8 = ppuStack_128;
      ppuVar31 = ppuStack_108;
    } while (!bVar5);
  }
  func_0x000107c6142c(ppuVar31);
  puVar6 = puStack_158;
  if (*(long *)(puStack_158 + 0x10) == 0) {
    uVar10 = 0;
    puVar26 = (undefined *)0x0;
  }
  else {
    uVar10 = *(undefined8 *)(puStack_158 + 0x20);
    puVar26 = *(undefined **)(puStack_158 + 0x28);
    func_0x000107c61434(puVar26);
  }
  puVar33 = puStack_1e0;
  func_0x000107c6142c(puVar6);
  puVar35 = puStack_160;
  puVar6 = puStack_1f0;
  puVar19 = puStack_160;
  puVar25 = puVar26;
  if ((puVar33 != (undefined *)0x0) &&
     (puVar19 = puVar26, puVar25 = puVar33, puStack_160 != (undefined *)0x0)) {
    puVar19 = puStack_1f0;
    FUN_103c5a0ec();
    lVar9 = 0;
    FUN_103c5bba0();
    lVar7 = lVar9;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar7 + _DAT_112ffbd48);
    *puVar1 = puVar6;
    puVar1[1] = puVar33;
    plVar20 = (long *)(lVar7 + _DAT_112ffbd50);
    *plVar20 = lStack_168;
    plVar20[1] = (long)puVar35;
    puVar1 = (undefined8 *)(lVar7 + _DAT_112ffbd58);
    *puVar1 = puVar19;
    puVar1[1] = puVar25;
    puVar1 = (undefined8 *)(lVar7 + _DAT_112ffbd60);
    *puVar1 = uVar10;
    puVar1[1] = puVar26;
    plVar20 = &lStack_f0;
    lStack_f0 = lVar7;
    lStack_e8 = lVar9;
    func_0x000107c61154(plVar20,PTR_s_init_1125d9248);
    (*pcStack_148)();
    func_0x000107c61170(plVar20);
    return;
  }
  func_0x000107c6142c(puVar25);
  func_0x000107c6142c(puVar19);
LAB_103c58548:
  (*pcStack_148)(0);
  return;
LAB_103c57208:
  ppuVar31 = ppuVar34;
  func_0x000107c61558();
  if (((ulong)ppuVar31 & 1) == 0) {
    ppuVar31 = (undefined **)0x0;
    func_0x0001000d182c(0,ppuVar34[2] + 1,1,ppuVar34);
    ppuVar34 = ppuVar31;
  }
  puVar33 = ppuVar34[2];
  if ((undefined *)((ulong)ppuVar34[3] >> 1) <= puVar33) {
    ppuVar31 = (undefined **)(ulong)((undefined *)0x1 < ppuVar34[3]);
    func_0x0001000d182c(ppuVar31,puVar33 + 1,1,ppuVar34);
    ppuVar34 = ppuVar31;
  }
  ppuVar27 = (undefined **)((long)ppuVar11 + 1);
  ppuVar34[2] = puVar33 + 1;
  ppuVar34[(long)puVar33 * 2 + 4] = (undefined *)pppuVar14;
  ppuVar34[(long)puVar33 * 2 + 5] = (undefined *)ppuVar12;
  ppuVar8 = ppuStack_120;
  if (ppuStack_118 == ppuVar11) goto LAB_103c5729c;
  goto LAB_103c57118;
LAB_103c5729c:
  if (ppuVar34[2] != (undefined *)0x0) goto LAB_103c572a4;
LAB_103c572d0:
  puStack_1f0 = (undefined *)0x0;
  puStack_1e0 = (undefined *)0x0;
  ppuVar31 = ppuStack_108;
  goto LAB_103c572e0;
}



/* Entry: 103c585dc; end: 103c585e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c585dc(undefined **param_1,long param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined ***pppuVar14;
  undefined ***pppuVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  long *plVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined *puVar25;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined *puVar26;
  undefined **ppuVar27;
  byte *pbVar28;
  ulong uVar29;
  ulong uVar30;
  undefined **ppuVar31;
  long extraout_x12;
  uint uVar32;
  undefined *puVar33;
  undefined **ppuVar34;
  long unaff_x20;
  undefined *puVar35;
  uint uVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  ulong uVar40;
  ulong auStack_210 [4];
  undefined *puStack_1f0;
  undefined4 uStack_1e4;
  undefined *puStack_1e0;
  undefined4 uStack_1d4;
  undefined **ppuStack_1d0;
  code *pcStack_1c8;
  undefined **ppuStack_1c0;
  undefined *puStack_1b8;
  code *pcStack_1b0;
  code *pcStack_1a8;
  code *pcStack_1a0;
  undefined **ppuStack_198;
  long lStack_190;
  undefined *puStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined **ppuStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined ***pppuStack_d0;
  ulong uStack_c8;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  
  pcStack_148 = *(code **)(unaff_x20 + 0x10);
  uStack_150 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar6 = (undefined *)0x0;
  ppuStack_108 = param_1;
  func_0x000107c5ef5c();
  puVar35 = *(undefined **)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(puVar35 + 0x40));
  lVar16 = (long)&puStack_1f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  func_0x000107c5ef64();
  lVar37 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar37 + 0x40));
  lVar38 = lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  ppuVar8 = (undefined **)0x0;
  func_0x000107c5eea4();
  puVar33 = ppuVar8[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(puVar33 + 0x40));
  lVar39 = lVar38 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0;
  func_0x000107c5eb9c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  puVar26 = (undefined *)(lVar39 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  if (param_2 != 0) {
    func_0x000107c614b0(param_2);
    (*pcStack_148)(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_2);
    return;
  }
  ppuVar31 = ppuStack_108;
  lStack_190 = lVar39;
  puStack_188 = puVar33;
  lStack_180 = lVar38;
  lStack_178 = lVar37;
  lStack_170 = lVar7;
  lStack_168 = lVar16;
  puStack_160 = puVar35;
  puStack_158 = puVar6;
  ppuStack_128 = ppuVar8;
  puStack_100 = puVar26;
  lStack_f8 = extraout_x12;
  func_0x000107c50700();
  func_0x000107c61180();
  if (ppuVar31 == (undefined **)0x0) goto LAB_103c58548;
  uVar10 = 0;
  FUN_103c58a94(0,0x112e95260,&PTR__OBJC_CLASS___VNObservation_1126aa788);
  ppuVar8 = ppuVar31;
  func_0x000107c5fc54(ppuVar31,uVar10);
  func_0x000107c61170(ppuVar31);
  ppuVar31 = ppuVar8;
  FUN_103c585e4();
  func_0x000107c6142c(ppuVar8);
  if (ppuVar31 == (undefined **)0x0) goto LAB_103c58548;
  ppuVar8 = (undefined **)((ulong)ppuVar31 & 0xffffffffffffff8);
  if ((ulong)ppuVar31 >> 0x3e == 0) {
    ppuVar34 = (undefined **)ppuVar8[2];
  }
  else {
    ppuVar34 = ppuVar31;
    if (-1 < (long)ppuVar31) {
      ppuVar34 = ppuVar8;
    }
    func_0x000107c60480();
  }
  lStack_138 = lVar9;
  if (ppuVar34 == (undefined **)0x0) {
    ppuStack_108 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    ppuStack_108 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
    ppuVar27 = (undefined **)0x0;
    do {
      while( true ) {
        if (((ulong)ppuVar31 & 0xc000000000000001) == 0) {
          if (ppuVar8[2] <= ppuVar27) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103c5858c);
            (*pcVar4)();
          }
          ppuVar11 = (undefined **)ppuVar31[(long)((long)ppuVar27 + 4)];
          func_0x000107c61174();
        }
        else {
          ppuVar11 = ppuVar27;
          func_0x000103c58834(ppuVar27,ppuVar31,
                              &PTR__OBJC_CLASS___VNRecognizedTextObservation_1126ada18,0x112ffb598);
        }
        ppuVar21 = (undefined **)((long)ppuVar27 + 1);
        if (SCARRY8((long)ppuVar27,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103c58588);
          (*pcVar4)();
        }
        ppuVar13 = ppuVar11;
        func_0x000107c5cbf0();
        func_0x000107c61180();
        ppuVar12 = (undefined **)0x0;
        FUN_103c58a94(0,0x112ffb590,&PTR__OBJC_CLASS___VNRecognizedText_1126ada10);
        ppuVar22 = ppuVar13;
        func_0x000107c5fc54();
        func_0x000107c61170(ppuVar13);
        if ((ulong)ppuVar22 >> 0x3e == 0) {
          ppuVar13 = *(undefined ***)(((ulong)ppuVar22 & 0xffffffffffffff8) + 0x10);
        }
        else {
          ppuVar13 = (undefined **)((ulong)ppuVar22 & 0xffffffffffffff8);
          if ((undefined **)0x7fffffffffffffff < ppuVar22) {
            ppuVar13 = ppuVar22;
          }
          func_0x000107c60480();
        }
        if (ppuVar13 != (undefined **)0x0) break;
        func_0x000107c61170(ppuVar11);
        func_0x000107c6142c(ppuVar22);
        ppuVar27 = (undefined **)((long)ppuVar27 + 1);
        if (ppuVar21 == ppuVar34) goto LAB_103c570cc;
      }
      if (((ulong)ppuVar22 & 0xc000000000000001) == 0) {
        if (*(long *)(((ulong)ppuVar22 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103c585dc);
          (*pcVar4)();
        }
        ppuVar27 = (undefined **)ppuVar22[4];
        func_0x000107c61174();
      }
      else {
        ppuVar27 = (undefined **)0x0;
        ppuVar12 = ppuVar22;
        func_0x000103c58834(0,ppuVar22,&PTR__OBJC_CLASS___VNRecognizedText_1126ada10,0x112ffb590);
      }
      func_0x000107c6142c(ppuVar22);
      ppuVar13 = ppuVar27;
      func_0x000107c5c158();
      func_0x000107c61180();
      func_0x000107c61170(ppuVar27);
      ppuVar27 = ppuVar13;
      func_0x000107c5faec();
      ppuStack_110 = ppuVar27;
      func_0x000107c61170(ppuVar13);
      func_0x000107c61170(ppuVar11);
      ppuVar27 = ppuStack_108;
      func_0x000107c61558();
      if (((ulong)ppuVar27 & 1) == 0) {
        ppuVar27 = (undefined **)0x0;
        func_0x0001000d182c(0,ppuStack_108[2] + 1,1);
        ppuStack_108 = ppuVar27;
      }
      puVar6 = ppuStack_108[2];
      if ((undefined *)((ulong)ppuStack_108[3] >> 1) <= puVar6) {
        ppuVar27 = (undefined **)(ulong)((undefined *)0x1 < ppuStack_108[3]);
        func_0x0001000d182c(ppuVar27,puVar6 + 1,1,ppuStack_108);
        ppuStack_108 = ppuVar27;
      }
      ppuStack_108[2] = puVar6 + 1;
      ppuStack_108[(long)puVar6 * 2 + 4] = (undefined *)ppuStack_110;
      ppuStack_108[(long)puVar6 * 2 + 5] = (undefined *)ppuVar12;
      ppuVar27 = ppuVar21;
    } while (ppuVar21 != ppuVar34);
  }
LAB_103c570cc:
  func_0x000107c6142c();
  puVar6 = PTR___sSSN_11034da80;
  ppuVar8 = (undefined **)ppuStack_108[2];
  ppuVar34 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
  ppuStack_120 = ppuVar8;
  if (ppuVar8 != (undefined **)0x0) {
    ppuVar27 = (undefined **)0x0;
    ppuStack_110 = ppuStack_108 + 5;
    ppuStack_118 = (undefined **)((long)ppuVar8 - 1);
LAB_103c57118:
    ppuVar21 = ppuStack_110 + (long)ppuVar27 * 2;
    ppuVar11 = ppuVar27;
    ppuVar8 = ppuStack_120;
    do {
      if (ppuStack_108[2] <= ppuVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103c58590);
        (*pcVar4)();
      }
      ppuStack_e0 = (undefined **)ppuVar21[-1];
      ppuVar27 = (undefined **)*ppuVar21;
      ppuStack_78 = (undefined **)0x445c;
      uStack_70 = 0xe200000000000000;
      puStack_88 = (undefined *)0x0;
      uStack_80 = 0xe000000000000000;
      ppuStack_d8 = ppuVar27;
      func_0x000100e8b654();
      func_0x000107c61434(ppuVar27);
      *(undefined ***)(puVar26 + -0x10) = ppuVar31;
      *(undefined ***)(puVar26 + -8) = ppuVar31;
      pppuVar14 = &ppuStack_78;
      ppuVar12 = &puStack_88;
      *(undefined **)(puVar26 + -0x20) = puVar6;
      *(undefined ***)(puVar26 + -0x18) = ppuVar31;
      func_0x000107c601fc(pppuVar14,ppuVar12,0x400,0,0,1,puVar6,puVar6);
      pppuVar15 = pppuVar14;
      FUN_103c59744();
      if ((((ulong)pppuVar15 & 1) == 0) ||
         (pppuVar15 = pppuVar14, func_0x000107c5fb5c(pppuVar14,ppuVar12), (long)pppuVar15 < 0xd)) {
        func_0x000107c6142c(ppuVar12);
        ppuVar31 = ppuVar27;
      }
      else {
        pppuVar15 = pppuVar14;
        func_0x000107c5fb5c(pppuVar14,ppuVar12);
        func_0x000107c6142c(ppuVar27);
        ppuVar8 = ppuStack_120;
        ppuVar31 = ppuVar12;
        if ((long)pppuVar15 < 0x14) goto LAB_103c57208;
      }
      ppuVar11 = (undefined **)((long)ppuVar11 + 1);
      func_0x000107c6142c();
      ppuVar21 = ppuVar21 + 2;
      if (ppuVar8 == ppuVar11) goto LAB_103c5729c;
    } while( true );
  }
  if (*(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10) == 0) goto LAB_103c572d0;
LAB_103c572a4:
  ppuVar31 = ppuStack_108;
  puStack_1f0 = ppuVar34[4];
  puStack_1e0 = ppuVar34[5];
  func_0x000107c61434();
LAB_103c572e0:
  lVar7 = lStack_138;
  func_0x000107c6142c(ppuVar34);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (ppuVar8 == (undefined **)0x0) {
    uStack_130 = 0;
  }
  else {
    ppuVar34 = (undefined **)0x0;
    uStack_130 = 0;
    ppuVar8 = ppuVar31 + 4;
    ppuStack_140 = (undefined **)((ulong)&ppuStack_e0 | 1);
    uStack_1d4 = *(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO4yearyA2EmFWC_110350d88;
    uStack_1e4 = *(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO5monthyA2EmFWC_110350d90;
    ppuStack_198 = ppuVar8;
    do {
      if (ppuVar31[2] <= ppuVar34) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103c58594);
        (*pcVar4)();
      }
      ppuVar27 = (undefined **)ppuVar8[(long)ppuVar34 * 2];
      ppuVar11 = (undefined **)(ppuVar8 + (long)ppuVar34 * 2)[1];
      func_0x000107c61434(ppuVar11);
      ppuVar21 = ppuVar11;
      FUN_103c59cac();
      puVar26 = puStack_100;
      if (ppuVar21 == (undefined **)0x0) {
        func_0x000107c6142c(ppuVar11);
      }
      else {
        uVar10 = 0x2f;
        ppuStack_e0 = ppuVar27;
        ppuStack_d8 = ppuVar21;
        func_0x000107c5eb6c(puStack_100,0x2f,0xe100000000000000);
        func_0x000100e8b654();
        puVar33 = puVar26;
        func_0x000107c601d8(puVar26,PTR___sSSN_11034da80,uVar10);
        (**(code **)(lStack_f8 + 8))(puVar26,lVar7);
        if (*(long *)(puVar33 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103c5859c);
          (*pcVar4)();
        }
        ppuStack_118 = ppuVar27;
        ppuVar31 = *(undefined ***)(puVar33 + 0x20);
        ppuVar12 = *(undefined ***)(puVar33 + 0x28);
        ppuVar22 = (undefined **)((ulong)ppuVar31 & 0xffffffffffff);
        ppuVar13 = (undefined **)((ulong)ppuVar12 >> 0x38 & 0xf);
        ppuVar27 = ppuVar22;
        if (((ulong)ppuVar12 & 0x2000000000000000) != 0) {
          ppuVar27 = ppuVar13;
        }
        if (ppuVar27 == (undefined **)0x0) {
          func_0x000107c6142c(ppuVar21);
          func_0x000107c6142c(ppuVar11);
          func_0x000107c6142c(puVar33);
          ppuVar31 = ppuStack_108;
        }
        else {
          ppuStack_110 = ppuVar21;
          if (((ulong)ppuVar12 >> 0x3c & 1) == 0) {
            if (((ulong)ppuVar12 >> 0x3d & 1) != 0) {
              ppuStack_e0 = ppuVar31;
              ppuStack_d8 = (undefined **)((ulong)ppuVar12 & 0xffffffffffffff);
              uVar32 = (uint)ppuVar31 & 0xff;
              if (uVar32 == 0x2b) {
                if (ppuVar13 == (undefined **)0x0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x103c585ac);
                  (*pcVar4)();
                }
                pbVar28 = (byte *)((long)ppuVar13 + -1);
                if (pbVar28 == (byte *)0x0) goto LAB_103c57668;
                ppuVar27 = (undefined **)0x0;
                ppuVar31 = ppuStack_140;
                do {
                  if (((9 < *(byte *)ppuVar31 - 0x30) ||
                      (lVar7 = (long)ppuVar27 * 10,
                      SUB168(SEXT816((long)ppuVar27) * SEXT816(10),8) != lVar7 >> 0x3f)) ||
                     (uVar30 = (ulong)(byte)(*(byte *)ppuVar31 - 0x30),
                     ppuVar27 = (undefined **)(lVar7 + uVar30), SCARRY8(lVar7,uVar30)))
                  goto LAB_103c57668;
                  uVar32 = 0;
                  pbVar28 = pbVar28 + -1;
                  ppuVar31 = (undefined **)((long)ppuVar31 + 1);
                } while (pbVar28 != (byte *)0x0);
              }
              else if (uVar32 == 0x2d) {
                if (ppuVar13 == (undefined **)0x0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x103c585b4);
                  (*pcVar4)();
                }
                pbVar28 = (byte *)((long)ppuVar13 + -1);
                if (pbVar28 == (byte *)0x0) {
LAB_103c57668:
                  uVar32 = 1;
                  ppuVar27 = (undefined **)0x0;
                }
                else {
                  ppuVar27 = (undefined **)0x0;
                  ppuVar31 = ppuStack_140;
                  do {
                    if (((9 < *(byte *)ppuVar31 - 0x30) ||
                        (lVar7 = (long)ppuVar27 * 10,
                        SUB168(SEXT816((long)ppuVar27) * SEXT816(10),8) != lVar7 >> 0x3f)) ||
                       (uVar30 = (ulong)(byte)(*(byte *)ppuVar31 - 0x30),
                       ppuVar27 = (undefined **)(lVar7 - uVar30), SBORROW8(lVar7,uVar30)))
                    goto LAB_103c57668;
                    uVar32 = 0;
                    pbVar28 = pbVar28 + -1;
                    ppuVar31 = (undefined **)((long)ppuVar31 + 1);
                  } while (pbVar28 != (byte *)0x0);
                }
              }
              else {
                if (ppuVar13 == (undefined **)0x0) goto LAB_103c57668;
                ppuVar27 = (undefined **)0x0;
                pppuVar15 = &ppuStack_e0;
                do {
                  if (((9 < *(byte *)pppuVar15 - 0x30) ||
                      (lVar7 = (long)ppuVar27 * 10,
                      SUB168(SEXT816((long)ppuVar27) * SEXT816(10),8) != lVar7 >> 0x3f)) ||
                     (uVar30 = (ulong)(byte)(*(byte *)pppuVar15 - 0x30),
                     ppuVar27 = (undefined **)(lVar7 + uVar30), SCARRY8(lVar7,uVar30)))
                  goto LAB_103c57668;
                  uVar32 = 0;
                  ppuVar13 = (undefined **)((long)ppuVar13 + -1);
                  pppuVar15 = (undefined ***)((long)pppuVar15 + 1);
                } while (ppuVar13 != (undefined **)0x0);
              }
              goto LAB_103c57670;
            }
            if (((ulong)ppuVar31 >> 0x3c & 1) == 0) {
              func_0x000107c60358();
            }
            else {
              ppuVar31 = (undefined **)(((ulong)ppuVar12 & 0xfffffffffffffff) + 0x20);
              ppuVar12 = ppuVar22;
            }
            if (*(byte *)ppuVar31 != 0x2b) {
              if (*(byte *)ppuVar31 != 0x2d) {
                if (ppuVar12 == (undefined **)0x0) goto LAB_103c57350;
                ppuVar27 = (undefined **)0x0;
                ppuVar21 = ppuVar31;
                while (ppuVar21 != (undefined **)0x0) {
                  if (((9 < *(byte *)ppuVar31 - 0x30) ||
                      (lVar7 = (long)ppuVar27 * 10,
                      SUB168(SEXT816((long)ppuVar27) * SEXT816(10),8) != lVar7 >> 0x3f)) ||
                     (uVar30 = (ulong)(byte)(*(byte *)ppuVar31 - 0x30),
                     ppuVar27 = (undefined **)(lVar7 + uVar30), SCARRY8(lVar7,uVar30)))
                  goto LAB_103c57350;
                  ppuVar12 = (undefined **)((long)ppuVar12 - 1);
                  ppuVar31 = (undefined **)((long)ppuVar31 + 1);
                  ppuVar21 = ppuVar12;
                }
                goto LAB_103c57680;
              }
              pbVar28 = (byte *)((long)ppuVar12 - 1);
              if ((long)ppuVar12 < 1) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x103c585a8);
                (*pcVar4)();
              }
              if (pbVar28 != (byte *)0x0) {
                ppuVar27 = (undefined **)0x0;
                do {
                  ppuVar31 = (undefined **)((long)ppuVar31 + 1);
                  if (((9 < *(byte *)ppuVar31 - 0x30) ||
                      (lVar7 = (long)ppuVar27 * 10,
                      SUB168(SEXT816((long)ppuVar27) * SEXT816(10),8) != lVar7 >> 0x3f)) ||
                     (uVar30 = (ulong)(byte)(*(byte *)ppuVar31 - 0x30),
                     ppuVar27 = (undefined **)(lVar7 - uVar30), SBORROW8(lVar7,uVar30)))
                  goto LAB_103c57350;
                  pbVar28 = pbVar28 + -1;
                } while (pbVar28 != (byte *)0x0);
                goto LAB_103c57680;
              }
              goto LAB_103c57350;
            }
            pbVar28 = (byte *)((long)ppuVar12 - 1);
            if ((long)ppuVar12 < 1) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x103c585b0);
              (*pcVar4)();
            }
            if (pbVar28 == (byte *)0x0) goto LAB_103c57350;
            ppuVar27 = (undefined **)0x0;
            do {
              ppuVar31 = (undefined **)((long)ppuVar31 + 1);
              if (((9 < *(byte *)ppuVar31 - 0x30) ||
                  (lVar7 = (long)ppuVar27 * 10,
                  SUB168(SEXT816((long)ppuVar27) * SEXT816(10),8) != lVar7 >> 0x3f)) ||
                 (uVar30 = (ulong)(byte)(*(byte *)ppuVar31 - 0x30),
                 ppuVar27 = (undefined **)(lVar7 + uVar30), SCARRY8(lVar7,uVar30)))
              goto LAB_103c57350;
              pbVar28 = pbVar28 + -1;
            } while (pbVar28 != (byte *)0x0);
          }
          else {
            func_0x000107c61434(ppuVar12);
            ppuVar27 = ppuVar12;
            func_0x000100edba6c(ppuVar31,ppuVar12,10);
            uVar32 = (uint)ppuVar27;
            func_0x000107c6142c(ppuVar12);
            ppuVar27 = ppuVar31;
LAB_103c57670:
            if ((uVar32 & 0xff) == 1) {
LAB_103c57350:
              ppuVar31 = ppuStack_108;
              func_0x000107c6142c(ppuStack_110);
              func_0x000107c6142c(ppuVar11);
              func_0x000107c6142c(puVar33);
              lVar7 = lStack_138;
              goto LAB_103c57370;
            }
          }
LAB_103c57680:
          if (*(ulong *)(puVar33 + 0x10) < 2) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103c585a4);
            (*pcVar4)();
          }
          ppuVar31 = *(undefined ***)(puVar33 + 0x30);
          uVar40 = *(ulong *)(puVar33 + 0x38);
          func_0x000107c61434(uVar40);
          func_0x000107c6142c(puVar33);
          uVar23 = (ulong)ppuVar31 & 0xffffffffffff;
          uVar29 = uVar40 >> 0x38 & 0xf;
          uVar30 = uVar23;
          if ((uVar40 & 0x2000000000000000) != 0) {
            uVar30 = uVar29;
          }
          if (uVar30 == 0) {
            func_0x000107c6142c(uVar40);
            func_0x000107c6142c(ppuStack_110);
            func_0x000107c6142c(ppuVar11);
            ppuVar31 = ppuStack_108;
            lVar7 = lStack_138;
          }
          else {
            if ((uVar40 >> 0x3c & 1) == 0) {
              if ((uVar40 >> 0x3d & 1) == 0) {
                if (((ulong)ppuVar31 >> 0x3c & 1) == 0) {
                  uVar23 = uVar40;
                  func_0x000107c60358();
                }
                else {
                  ppuVar31 = (undefined **)((uVar40 & 0xfffffffffffffff) + 0x20);
                }
                if (*(byte *)ppuVar31 == 0x2b) {
                  if ((long)uVar23 < 1) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x103c585cc);
                    (*pcVar4)();
                  }
                  lVar7 = uVar23 - 1;
                  if (lVar7 == 0) goto LAB_103c578f0;
                  ppuVar8 = (undefined **)0x0;
                  do {
                    ppuVar31 = (undefined **)((long)ppuVar31 + 1);
                    if (((9 < *(byte *)ppuVar31 - 0x30) ||
                        (lVar9 = (long)ppuVar8 * 10,
                        SUB168(SEXT816((long)ppuVar8) * SEXT816(10),8) != lVar9 >> 0x3f)) ||
                       (uVar30 = (ulong)(byte)(*(byte *)ppuVar31 - 0x30),
                       ppuVar8 = (undefined **)(lVar9 + uVar30), SCARRY8(lVar9,uVar30)))
                    goto LAB_103c578f0;
                    uVar32 = 0;
                    lVar7 = lVar7 + -1;
                  } while (lVar7 != 0);
                }
                else if (*(byte *)ppuVar31 == 0x2d) {
                  if ((long)uVar23 < 1) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x103c585d4);
                    (*pcVar4)();
                  }
                  lVar7 = uVar23 - 1;
                  if (lVar7 == 0) {
LAB_103c578f0:
                    uVar32 = 1;
                    ppuVar8 = (undefined **)0x0;
                  }
                  else {
                    ppuVar8 = (undefined **)0x0;
                    do {
                      ppuVar31 = (undefined **)((long)ppuVar31 + 1);
                      if (((9 < *(byte *)ppuVar31 - 0x30) ||
                          (lVar9 = (long)ppuVar8 * 10,
                          SUB168(SEXT816((long)ppuVar8) * SEXT816(10),8) != lVar9 >> 0x3f)) ||
                         (uVar30 = (ulong)(byte)(*(byte *)ppuVar31 - 0x30),
                         ppuVar8 = (undefined **)(lVar9 - uVar30), SBORROW8(lVar9,uVar30)))
                      goto LAB_103c578f0;
                      uVar32 = 0;
                      lVar7 = lVar7 + -1;
                    } while (lVar7 != 0);
                  }
                }
                else {
                  if (uVar23 == 0) goto LAB_103c578f0;
                  if (ppuVar31 == (undefined **)0x0) {
                    uVar32 = 0;
                    ppuVar8 = (undefined **)0x0;
                  }
                  else {
                    ppuVar8 = (undefined **)0x0;
                    do {
                      if (((9 < *(byte *)ppuVar31 - 0x30) ||
                          (lVar7 = (long)ppuVar8 * 10,
                          SUB168(SEXT816((long)ppuVar8) * SEXT816(10),8) != lVar7 >> 0x3f)) ||
                         (uVar30 = (ulong)(byte)(*(byte *)ppuVar31 - 0x30),
                         ppuVar8 = (undefined **)(lVar7 + uVar30), SCARRY8(lVar7,uVar30)))
                      goto LAB_103c578f0;
                      uVar32 = 0;
                      uVar23 = uVar23 - 1;
                      ppuVar31 = (undefined **)((long)ppuVar31 + 1);
                    } while (uVar23 != 0);
                  }
                }
              }
              else {
                ppuStack_e0 = ppuVar31;
                ppuStack_d8 = (undefined **)(uVar40 & 0xffffffffffffff);
                uVar32 = (uint)ppuVar31 & 0xff;
                if (uVar32 == 0x2b) {
                  if (uVar29 == 0) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x103c585d8);
                    (*pcVar4)();
                  }
                  lVar7 = uVar29 - 1;
                  if (lVar7 == 0) goto LAB_103c578f0;
                  ppuVar8 = (undefined **)0x0;
                  ppuVar31 = ppuStack_140;
                  do {
                    if (((9 < *(byte *)ppuVar31 - 0x30) ||
                        (lVar9 = (long)ppuVar8 * 10,
                        SUB168(SEXT816((long)ppuVar8) * SEXT816(10),8) != lVar9 >> 0x3f)) ||
                       (uVar30 = (ulong)(byte)(*(byte *)ppuVar31 - 0x30),
                       ppuVar8 = (undefined **)(lVar9 + uVar30), SCARRY8(lVar9,uVar30)))
                    goto LAB_103c578f0;
                    uVar32 = 0;
                    lVar7 = lVar7 + -1;
                    ppuVar31 = (undefined **)((long)ppuVar31 + 1);
                  } while (lVar7 != 0);
                }
                else if (uVar32 == 0x2d) {
                  if (uVar29 == 0) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x103c585d0);
                    (*pcVar4)();
                  }
                  lVar7 = uVar29 - 1;
                  if (lVar7 == 0) goto LAB_103c578f0;
                  ppuVar8 = (undefined **)0x0;
                  ppuVar31 = ppuStack_140;
                  do {
                    if (((9 < *(byte *)ppuVar31 - 0x30) ||
                        (lVar9 = (long)ppuVar8 * 10,
                        SUB168(SEXT816((long)ppuVar8) * SEXT816(10),8) != lVar9 >> 0x3f)) ||
                       (uVar30 = (ulong)(byte)(*(byte *)ppuVar31 - 0x30),
                       ppuVar8 = (undefined **)(lVar9 - uVar30), SBORROW8(lVar9,uVar30)))
                    goto LAB_103c578f0;
                    uVar32 = 0;
                    lVar7 = lVar7 + -1;
                    ppuVar31 = (undefined **)((long)ppuVar31 + 1);
                  } while (lVar7 != 0);
                }
                else {
                  if (uVar29 == 0) goto LAB_103c578f0;
                  ppuVar8 = (undefined **)0x0;
                  pppuVar15 = &ppuStack_e0;
                  do {
                    if (((9 < *(byte *)pppuVar15 - 0x30) ||
                        (lVar7 = (long)ppuVar8 * 10,
                        SUB168(SEXT816((long)ppuVar8) * SEXT816(10),8) != lVar7 >> 0x3f)) ||
                       (uVar30 = (ulong)(byte)(*(byte *)pppuVar15 - 0x30),
                       ppuVar8 = (undefined **)(lVar7 + uVar30), SCARRY8(lVar7,uVar30)))
                    goto LAB_103c578f0;
                    uVar32 = 0;
                    uVar29 = uVar29 - 1;
                    pppuVar15 = (undefined ***)((long)pppuVar15 + 1);
                  } while (uVar29 != 0);
                }
              }
            }
            else {
              uVar30 = uVar40;
              func_0x000100edba6c(ppuVar31,uVar40,10);
              uVar32 = (uint)uVar30;
              ppuVar8 = ppuVar31;
            }
            func_0x000107c6142c(uVar40);
            lVar9 = lStack_190;
            if ((uVar32 & 0xff) == 1) {
              func_0x000107c6142c(ppuStack_110);
              func_0x000107c6142c(ppuVar11);
              ppuVar31 = ppuStack_108;
              lVar7 = lStack_138;
              ppuVar8 = ppuStack_198;
            }
            else {
              ppuStack_1c0 = ppuVar11;
              puStack_1b8 = puVar6;
              func_0x000107c5eea0(lStack_190);
              lVar37 = lStack_180;
              func_0x000107c5ef54(lStack_180);
              puVar26 = puStack_158;
              puVar6 = puStack_160;
              lVar39 = lStack_168;
              uVar2 = uStack_1d4;
              pcStack_1b0 = *(code **)(puStack_160 + 0x68);
              (*pcStack_1b0)(lStack_168,uStack_1d4,puStack_158);
              lVar7 = lVar39;
              func_0x000107c5ef60(lVar39,lVar9);
              pcStack_1a8 = *(code **)(puVar6 + 8);
              (*pcStack_1a8)(lVar39,puVar26);
              lVar38 = lStack_170;
              pcStack_1a0 = *(code **)(lStack_178 + 8);
              (*pcStack_1a0)(lVar37,lStack_170);
              pcStack_1c8 = *(code **)(puStack_188 + 8);
              (*pcStack_1c8)(lVar9,ppuStack_128);
              func_0x000107c5eea0(lVar9);
              func_0x000107c5ef54(lVar37);
              ppuStack_1d0 = ppuVar8;
              if ((undefined **)(lVar7 % 100) == ppuVar8) {
                (*pcStack_1b0)(lVar39,uStack_1e4,puVar26);
                lVar16 = lVar39;
                func_0x000107c5ef60(lVar39,lVar9);
                func_0x000107c6142c(ppuStack_1c0);
                (*pcStack_1a8)(lVar39,puVar26);
                (*pcStack_1a0)(lVar37,lVar38);
                (*pcStack_1c8)(lVar9,ppuStack_128);
                lVar7 = lStack_138;
                if ((long)ppuVar27 < lVar16) {
LAB_103c57ae4:
                  func_0x000107c6142c(ppuStack_110);
                  ppuVar31 = ppuStack_108;
                  ppuVar8 = ppuStack_198;
                  puVar6 = puStack_1b8;
                }
                else {
LAB_103c57c6c:
                  puVar6 = puStack_1b8;
                  puVar26 = puStack_1b8;
                  func_0x000107c61558();
                  ppuVar31 = ppuStack_110;
                  ppuVar8 = ppuStack_198;
                  puVar33 = puVar6;
                  if (((ulong)puVar26 & 1) == 0) {
                    puVar33 = (undefined *)0x0;
                    func_0x0001000d182c(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
                  }
                  ppuVar27 = ppuStack_118;
                  uVar30 = *(ulong *)(puVar33 + 0x10);
                  puVar6 = puVar33;
                  if (*(ulong *)(puVar33 + 0x18) >> 1 <= uVar30) {
                    puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar33 + 0x18));
                    func_0x0001000d182c(puVar6,uVar30 + 1,1,puVar33);
                  }
                  *(ulong *)(puVar6 + 0x10) = uVar30 + 1;
                  *(undefined ***)(puVar6 + uVar30 * 0x10 + 0x20) = ppuVar27;
                  *(undefined ***)(puVar6 + uVar30 * 0x10 + 0x28) = ppuVar31;
                  ppuVar31 = ppuStack_108;
                }
              }
              else {
                (*pcStack_1b0)(lVar39,uVar2,puVar26);
                lVar16 = lVar39;
                func_0x000107c5ef60(lVar39,lVar9);
                (*pcStack_1a8)(lVar39,puVar26);
                (*pcStack_1a0)(lVar37,lVar38);
                pcVar4 = pcStack_1c8;
                (*pcStack_1c8)(lVar9,ppuStack_128);
                lVar7 = lStack_138;
                if (lVar16 % 100 < (long)ppuStack_1d0) {
                  func_0x000107c5eea0(lVar9);
                  func_0x000107c5ef54(lVar37);
                  (*pcStack_1b0)(lVar39,uVar2,puVar26);
                  lVar16 = lVar39;
                  func_0x000107c5ef60(lVar39,lVar9);
                  func_0x000107c6142c(ppuStack_1c0);
                  (*pcStack_1a8)(lVar39,puVar26);
                  (*pcStack_1a0)(lVar37,lVar38);
                  (*pcVar4)(lVar9,ppuStack_128);
                  if (lVar16 % 100 + 0xf <= (long)ppuStack_1d0) goto LAB_103c57ae4;
                  goto LAB_103c57c6c;
                }
                func_0x000107c6142c(ppuStack_1c0);
                func_0x000107c6142c(ppuStack_110);
                ppuVar31 = ppuStack_108;
                ppuVar8 = ppuStack_198;
                puVar6 = puStack_1b8;
              }
            }
          }
        }
      }
LAB_103c57370:
      ppuVar34 = (undefined **)((long)ppuVar34 + 1);
    } while (ppuVar34 != ppuStack_120);
  }
  if (*(long *)(puVar6 + 0x10) == 0) {
    lStack_168 = 0;
    puStack_160 = (undefined *)0x0;
  }
  else {
    lStack_168 = *(long *)(puVar6 + 0x20);
    puStack_160 = *(undefined **)(puVar6 + 0x28);
    func_0x000107c61434();
  }
  ppuVar8 = ppuStack_120;
  func_0x000107c6142c(puVar6);
  puStack_88 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (ppuVar8 == (undefined **)0x0) {
    puStack_158 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    ppuStack_140 = ppuVar31 + 4;
    puStack_158 = PTR___swiftEmptyArrayStorage_11034f1c8;
    ppuVar8 = (undefined **)0x0;
    do {
      if (ppuVar31[2] <= ppuVar8) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103c58598);
        (*pcVar4)();
      }
      ppuVar31 = (undefined **)ppuStack_140[(long)ppuVar8 * 2];
      ppuVar34 = (undefined **)(ppuStack_140 + (long)ppuVar8 * 2)[1];
      ppuStack_128 = (undefined **)((long)ppuVar8 + 1);
      uStack_c8 = (ulong)ppuVar31 & 0xffffffffffff;
      if (((ulong)ppuVar34 & 0x2000000000000000) != 0) {
        uStack_c8 = (ulong)ppuVar34 >> 0x38 & 0xf;
      }
      pppuStack_d0 = (undefined ***)0x0;
      ppuVar8 = (undefined **)0x2;
      ppuStack_118 = ppuVar34;
      ppuStack_e0 = ppuVar31;
      ppuStack_d8 = ppuVar34;
      func_0x000107c61438();
      func_0x000107c5fb84();
      if (ppuVar8 == (undefined **)0x0) {
        func_0x000107c6142c(ppuStack_d8);
LAB_103c57fd8:
        ppuVar8 = ppuStack_118;
        ppuStack_78 = (undefined **)0x20;
        uStack_70 = 0xe100000000000000;
        pppuStack_d0 = &ppuStack_78;
        func_0x000107c61434(ppuStack_118);
        uVar10 = uStack_130;
        ppuVar34 = (undefined **)0x7fffffffffffffff;
        func_0x0001014784b8(0x7fffffffffffffff,1,FUN_103c58a40,&ppuStack_e0,ppuVar31,ppuVar8);
        ppuVar8 = ppuVar34;
        FUN_103c5acf8();
        uStack_130 = uVar10;
        if (ppuVar8 == (undefined **)0x0) {
          func_0x000107c6142c(ppuVar34);
          ppuVar31 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          ppuStack_78 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
          FUN_103c594b0();
          lVar7 = lStack_138;
          if ((long)ppuVar8 < 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103c585a0);
            (*pcVar4)();
          }
          ppuVar27 = ppuVar34 + 7;
          ppuVar31 = ppuStack_78;
          ppuStack_110 = ppuVar34;
          do {
            ppuVar34 = (undefined **)ppuVar27[-3];
            ppuVar11 = (undefined **)ppuVar27[-2];
            puVar6 = ppuVar27[-1];
            puVar26 = *ppuVar27;
            func_0x000107c61434(puVar26);
            func_0x000107c5fb2c(ppuVar34,ppuVar11,puVar6,puVar26);
            puVar6 = puStack_100;
            ppuStack_e0 = ppuVar34;
            ppuStack_d8 = ppuVar11;
            func_0x000107c5eb68(puStack_100);
            func_0x000100e8b654();
            puVar33 = puVar6;
            puVar35 = PTR___sSSN_11034da80;
            func_0x000107c601f0(puVar6,PTR___sSSN_11034da80,ppuVar34);
            func_0x000107c6142c(puVar26);
            (**(code **)(lStack_f8 + 8))(puVar6,lVar7);
            func_0x000107c6142c(ppuVar11);
            ppuVar34 = ppuVar31;
            func_0x000107c61558();
            if (((ulong)ppuVar34 & 1) == 0) {
              func_0x000100403514(0,ppuVar31[2] + 1,1);
              ppuVar31 = ppuStack_78;
            }
            puVar6 = ppuVar31[2];
            if ((undefined *)((ulong)ppuVar31[3] >> 1) <= puVar6) {
              func_0x000100403514((undefined *)0x1 < ppuVar31[3],puVar6 + 1,1);
              ppuVar31 = ppuStack_78;
            }
            ppuVar27 = ppuVar27 + 4;
            ppuVar31[2] = puVar6 + 1;
            ppuVar31[(long)puVar6 * 2 + 4] = puVar33;
            ppuVar31[(long)puVar6 * 2 + 5] = puVar35;
            ppuVar8 = (undefined **)((long)ppuVar8 - 1);
          } while (ppuVar8 != (undefined **)0x0);
          FUN_103c58e58();
          func_0x000107c6142c(ppuStack_110);
        }
        ppuVar8 = ppuVar31;
        func_0x000103c5ad00();
        ppuVar34 = ppuVar31;
        if (ppuVar8 == (undefined **)0x0) {
          bVar5 = true;
        }
        else {
          ppuVar27 = (undefined **)0x0;
          bVar5 = true;
          ppuStack_110 = ppuVar31;
          do {
            if (ppuVar34[2] <= ppuVar27) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x103c58584);
              (*pcVar4)();
            }
            if (bVar5) {
              puVar6 = ppuVar31[(long)ppuVar27 * 2 + 4];
              puVar26 = (ppuVar31 + (long)ppuVar27 * 2 + 4)[1];
              puVar33 = puVar26;
              func_0x000107c5fb1c();
              lVar7 = lRam0000000112ffbd38;
              func_0x000107c61434(puVar26);
              if (lVar7 != -1) {
                func_0x000107c61568(0x112ffbd38,0x103c59330);
              }
              lVar7 = lRam000000011380d178;
              if (*(long *)(lRam000000011380d178 + 0x10) == 0) {
                bVar5 = true;
              }
              else {
                func_0x000107c6068c(&ppuStack_e0,*(undefined8 *)(lRam000000011380d178 + 0x28));
                pppuVar15 = &ppuStack_e0;
                func_0x000107c5fb58(pppuVar15,puVar6,puVar33);
                func_0x000107c606a8();
                uVar30 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
                uVar40 = (ulong)pppuVar15 & (uVar30 ^ 0xffffffffffffffff);
                if ((*(ulong *)(lVar7 + 0x38 + (uVar40 >> 6) * 8) >> (uVar40 & 0x3f) & 1) == 0) {
                  bVar5 = true;
                }
                else {
                  do {
                    plVar20 = (long *)(*(long *)(lVar7 + 0x30) + uVar40 * 0x10);
                    puVar35 = (undefined *)*plVar20;
                    puVar19 = (undefined *)plVar20[1];
                    if ((puVar35 == puVar6 && puVar19 == puVar33) ||
                       (func_0x000107c605b8(puVar35,puVar19,puVar6,puVar33,0),
                       ((ulong)puVar35 & 1) != 0)) {
                      bVar5 = false;
                      ppuVar34 = ppuStack_110;
                      goto LAB_103c582c8;
                    }
                    uVar40 = uVar40 + 1 & ~uVar30;
                  } while ((*(ulong *)(lVar7 + 0x38 + (uVar40 >> 6) * 8) >> (uVar40 & 0x3f) & 1) !=
                           0);
                  bVar5 = true;
                  ppuVar34 = ppuStack_110;
                }
              }
LAB_103c582c8:
              func_0x000107c6142c(puVar33);
              func_0x000107c6142c(puVar26);
            }
            else {
              bVar5 = false;
            }
            ppuVar27 = (undefined **)((long)ppuVar27 + 1);
          } while (ppuVar27 != ppuVar8);
        }
        ppuVar8 = ppuVar34;
        func_0x000103c5acfc();
        if (((byte *)0x3 < (byte *)((long)ppuVar8 - 2U)) || (!bVar5)) {
          func_0x000107c6142c(ppuVar34);
          goto LAB_103c58318;
        }
        uVar10 = 0x112d38270;
        ppuStack_e0 = ppuVar34;
        func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
        uVar17 = uVar10;
        func_0x00010011d734();
        uVar18 = 0x20;
        uVar24 = 0xe100000000000000;
        func_0x000107c5fa80(0x20,0xe100000000000000,uVar10,uVar17);
        func_0x000107c6142c(ppuVar34);
        func_0x000107c6142c(ppuStack_118);
        func_0x000102bf7c10();
        puStack_158 = puStack_88;
        uVar30 = *(ulong *)(puStack_88 + 0x10);
        if (*(ulong *)(puStack_88 + 0x18) >> 1 <= uVar30) {
          puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puStack_88 + 0x18));
          func_0x0001000d182c(puVar6,uVar30 + 1,1,puStack_88);
          puStack_88 = puVar6;
        }
        *(ulong *)(puStack_88 + 0x10) = uVar30 + 1;
        *(undefined8 *)(puStack_88 + uVar30 * 0x10 + 0x20) = uVar18;
        *(undefined8 *)(puStack_88 + uVar30 * 0x10 + 0x28) = uVar24;
        bVar5 = ppuStack_128 == ppuStack_120;
        puStack_158 = puStack_88;
      }
      else {
        uVar32 = 1;
        do {
          ppuVar27 = ppuVar8;
          if ((ppuVar34 == (undefined **)0x41) && (ppuVar27 == (undefined **)0xe100000000000000)) {
            uVar36 = 0;
            func_0x000107c605b8(0x5a,0xe100000000000000,0x41,0xe100000000000000,1);
            ppuVar34 = (undefined **)0x41;
LAB_103c57f88:
            ppuVar8 = ppuVar27;
            func_0x000107c605b8(ppuVar34,ppuVar27,0x20,0xe100000000000000,0);
            func_0x000107c6142c();
            uVar3 = uVar32 & 1;
            uVar32 = 0;
            if (uVar3 != 0) {
              uVar32 = uVar36 ^ 1 | (uint)ppuVar34;
            }
          }
          else {
            ppuVar11 = ppuVar34;
            ppuVar8 = ppuVar27;
            func_0x000107c605b8(ppuVar34,ppuVar27,0x41,0xe100000000000000,1);
            if (((ulong)ppuVar11 & 1) == 0) {
              if ((ppuVar34 == (undefined **)0x5a) && (ppuVar27 == (undefined **)0xe100000000000000)
                 ) {
                uVar36 = 0;
                ppuVar34 = (undefined **)0x5a;
              }
              else {
                uVar36 = 0;
                ppuVar8 = (undefined **)0xe100000000000000;
                func_0x000107c605b8(0x5a,0xe100000000000000,ppuVar34,ppuVar27,1);
                uVar3 = uVar36;
                if (ppuVar34 == (undefined **)0x20) goto LAB_103c57f34;
              }
              goto LAB_103c57f88;
            }
            uVar36 = 1;
            uVar3 = 1;
            if (ppuVar34 != (undefined **)0x20) goto LAB_103c57f88;
LAB_103c57f34:
            uVar36 = uVar3;
            if (ppuVar27 != (undefined **)0xe100000000000000) goto LAB_103c57f88;
            func_0x000107c6142c();
          }
          func_0x000107c5fb84();
          ppuVar34 = ppuVar27;
        } while (ppuVar8 != (undefined **)0x0);
        func_0x000107c6142c(ppuStack_d8);
        if ((uVar32 & 1) != 0) goto LAB_103c57fd8;
LAB_103c58318:
        func_0x000107c6142c(ppuStack_118);
        bVar5 = ppuStack_128 == ppuStack_120;
      }
      ppuVar8 = ppuStack_128;
      ppuVar31 = ppuStack_108;
    } while (!bVar5);
  }
  func_0x000107c6142c(ppuVar31);
  puVar6 = puStack_158;
  if (*(long *)(puStack_158 + 0x10) == 0) {
    uVar10 = 0;
    puVar26 = (undefined *)0x0;
  }
  else {
    uVar10 = *(undefined8 *)(puStack_158 + 0x20);
    puVar26 = *(undefined **)(puStack_158 + 0x28);
    func_0x000107c61434(puVar26);
  }
  puVar33 = puStack_1e0;
  func_0x000107c6142c(puVar6);
  puVar35 = puStack_160;
  puVar6 = puStack_1f0;
  puVar19 = puStack_160;
  puVar25 = puVar26;
  if ((puVar33 != (undefined *)0x0) &&
     (puVar19 = puVar26, puVar25 = puVar33, puStack_160 != (undefined *)0x0)) {
    puVar19 = puStack_1f0;
    FUN_103c5a0ec();
    lVar9 = 0;
    FUN_103c5bba0();
    lVar7 = lVar9;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar7 + _DAT_112ffbd48);
    *puVar1 = puVar6;
    puVar1[1] = puVar33;
    plVar20 = (long *)(lVar7 + _DAT_112ffbd50);
    *plVar20 = lStack_168;
    plVar20[1] = (long)puVar35;
    puVar1 = (undefined8 *)(lVar7 + _DAT_112ffbd58);
    *puVar1 = puVar19;
    puVar1[1] = puVar25;
    puVar1 = (undefined8 *)(lVar7 + _DAT_112ffbd60);
    *puVar1 = uVar10;
    puVar1[1] = puVar26;
    plVar20 = &lStack_f0;
    lStack_f0 = lVar7;
    lStack_e8 = lVar9;
    func_0x000107c61154(plVar20,PTR_s_init_1125d9248);
    (*pcStack_148)();
    func_0x000107c61170(plVar20);
    return;
  }
  func_0x000107c6142c(puVar25);
  func_0x000107c6142c(puVar19);
LAB_103c58548:
  (*pcStack_148)(0);
  return;
LAB_103c57208:
  ppuVar31 = ppuVar34;
  func_0x000107c61558();
  if (((ulong)ppuVar31 & 1) == 0) {
    ppuVar31 = (undefined **)0x0;
    func_0x0001000d182c(0,ppuVar34[2] + 1,1,ppuVar34);
    ppuVar34 = ppuVar31;
  }
  puVar33 = ppuVar34[2];
  if ((undefined *)((ulong)ppuVar34[3] >> 1) <= puVar33) {
    ppuVar31 = (undefined **)(ulong)((undefined *)0x1 < ppuVar34[3]);
    func_0x0001000d182c(ppuVar31,puVar33 + 1,1,ppuVar34);
    ppuVar34 = ppuVar31;
  }
  ppuVar27 = (undefined **)((long)ppuVar11 + 1);
  ppuVar34[2] = puVar33 + 1;
  ppuVar34[(long)puVar33 * 2 + 4] = (undefined *)pppuVar14;
  ppuVar34[(long)puVar33 * 2 + 5] = (undefined *)ppuVar12;
  ppuVar8 = ppuStack_120;
  if (ppuStack_118 == ppuVar11) goto LAB_103c5729c;
  goto LAB_103c57118;
LAB_103c5729c:
  if (ppuVar34[2] != (undefined *)0x0) goto LAB_103c572a4;
LAB_103c572d0:
  puStack_1f0 = (undefined *)0x0;
  puStack_1e0 = (undefined *)0x0;
  ppuVar31 = ppuStack_108;
  goto LAB_103c572e0;
}



/* Entry: 103c585e4; end: 103c5877b;  */

undefined * FUN_103c585e4(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar4 = param_1;
    }
    func_0x000107c60480(uVar4);
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_103c59514(0,uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU),0);
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar4 != 0) {
    uVar8 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103c5876c);
          (*pcVar3)();
        }
        uVar5 = *(ulong *)(param_1 + uVar8 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar8;
        func_0x000103c58834(uVar8,param_1,&PTR__OBJC_CLASS___VNObservation_1126aa788,0x112e95260);
      }
      uVar1 = uVar8 + 1;
      if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103c58768);
        (*pcVar3)();
      }
      puVar6 = PTR__OBJC_CLASS___VNRecognizedTextObservation_1126ada18;
      func_0x000107c61168(PTR__OBJC_CLASS___VNRecognizedTextObservation_1126ada18);
      uVar7 = uVar5;
      func_0x000107c6148c(uVar5,puVar6);
      if (uVar7 == 0) {
        func_0x000107c61574(puVar2);
        func_0x000107c61170(uVar5);
        return (undefined *)0x0;
      }
      uVar5 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar5) {
        FUN_103c59514(1 < *(ulong *)(puVar2 + 0x18),uVar5 + 1,1);
      }
      *(ulong *)(puVar2 + 0x10) = uVar5 + 1;
      *(ulong *)(puVar2 + uVar5 * 8 + 0x20) = uVar7;
      uVar8 = uVar8 + 1;
    } while (uVar1 != uVar4);
  }
  return puVar2;
}



/* Entry: 103c5877c; end: 103c587bb;  */

void FUN_103c5877c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103c587bc; end: 103c589ef;  */

void FUN_103c587bc(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_103c58a94(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 103c589f0; end: 103c589ff;  */

undefined1  [16] FUN_103c589f0(void)

{
  return ZEXT816(0x1106ef1b8);
}



/* Entry: 103c58a00; end: 103c58a3f;  */

void FUN_103c58a00(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    func_0x0001013ae418(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 103c58a40; end: 103c58a93;  */

uint FUN_103c58a40(long *param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *param_1;
  if (lVar2 == **(long **)(unaff_x20 + 0x10) && param_1[1] == (*(long **)(unaff_x20 + 0x10))[1]) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8();
    uVar1 = (uint)lVar2 & 1;
  }
  return uVar1;
}



/* Entry: 103c58a94; end: 103c58be7;  */

void FUN_103c58a94(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 103c58be8; end: 103c58e57;  */

void FUN_103c58be8(void)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  
  lVar10 = 0x112d36020;
  func_0x0001000285a8(0x112d36020,&UNK_10d92f8b0);
  lVar5 = lVar10;
  func_0x000107c613fc();
  lVar12 = lVar5;
  func_0x000107c610a4();
  lVar9 = lVar12 + -0x19;
  if (0x1f < lVar12) {
    lVar9 = lVar12 + -0x20;
  }
  *(undefined8 *)(lVar5 + 0x10) = 6;
  *(long *)(lVar5 + 0x18) = (lVar9 >> 3) << 1;
  *(undefined8 *)(lVar5 + 0x28) = 0x285;
  *(undefined8 *)(lVar5 + 0x20) = 0x284;
  *(undefined8 *)(lVar5 + 0x38) = 0x287;
  *(undefined8 *)(lVar5 + 0x30) = 0x286;
  *(undefined8 *)(lVar5 + 0x48) = 0x289;
  *(undefined8 *)(lVar5 + 0x40) = 0x288;
  func_0x000107c613fc(lVar10,0x1920,7);
  lVar12 = lVar10;
  func_0x000107c610a4();
  lVar9 = lVar12 + -0x19;
  if (0x1f < lVar12) {
    lVar9 = lVar12 + -0x20;
  }
  *(undefined8 *)(lVar10 + 0x10) = 800;
  *(long *)(lVar10 + 0x18) = (lVar9 >> 3) << 1;
  lVar13 = 0x97e2f;
  lVar12 = 0x97e2e;
  lVar9 = -0x18e0;
  do {
    lVar1 = lVar10 + lVar9;
    *(long *)(lVar1 + 0x1908) = lVar13;
    *(long *)(lVar1 + 0x1900) = lVar12;
    *(long *)(lVar1 + 0x1918) = lVar13 + 2;
    *(long *)(lVar1 + 0x1910) = lVar12 + 2;
    lVar12 = lVar12 + 4;
    lVar13 = lVar13 + 4;
    lVar9 = lVar9 + 0x20;
  } while (lVar9 != 0);
  *(undefined8 *)(lVar10 + 0x1900) = 0x9814a;
  *(undefined8 *)(lVar10 + 0x1908) = 0x9814b;
  *(undefined8 *)(lVar10 + 0x1910) = 0x9814c;
  *(undefined8 *)(lVar10 + 0x1918) = 0x9814d;
  func_0x000107c6157c(lVar5);
  func_0x000103c59654(lVar10);
  func_0x000107c61574(lVar5);
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar10 = *(long *)(lVar5 + 0x10);
  if (lVar10 == 0) {
    func_0x000107c6142c(lVar5);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000100403514(0,lVar10,0);
    puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    puVar3 = PTR___sSiN_11034deb0;
    do {
      puVar6 = puVar3;
      puVar8 = puVar4;
      func_0x000107c6057c();
      uVar2 = *(ulong *)(puVar11 + 0x10);
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar2) {
        func_0x000100403514(1 < *(ulong *)(puVar11 + 0x18),uVar2 + 1,1);
      }
      *(ulong *)(puVar11 + 0x10) = uVar2 + 1;
      *(undefined **)(puVar11 + uVar2 * 0x10 + 0x20) = puVar6;
      *(undefined **)(puVar11 + uVar2 * 0x10 + 0x28) = puVar8;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    func_0x000107c6142c(lVar5);
  }
  uVar7 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  func_0x00010109a32c(puVar11);
  uRam0000000112ffb5f8 = uVar7;
  return;
}



/* Entry: 103c58e58; end: 103c58e5b;  */

void FUN_103c58e58(void)

{
  return;
}



/* Entry: 103c58e5c; end: 103c594af;  */

void FUN_103c58e5c(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  
  lVar4 = 0x112d36020;
  func_0x0001000285a8(0x112d36020,&UNK_10d92f8b0);
  func_0x000107c613fc();
  lVar5 = lVar4;
  func_0x000107c610a4();
  lVar8 = lVar5 + -0x19;
  if (0x1f < lVar5) {
    lVar8 = lVar5 + -0x20;
  }
  *(undefined8 *)(lVar4 + 0x10) = 0x3e;
  *(long *)(lVar4 + 0x18) = (lVar8 >> 3) << 1;
  *(undefined8 *)(lVar4 + 0x28) = 0xdc9;
  *(undefined8 *)(lVar4 + 0x20) = 0xdc8;
  *(undefined8 *)(lVar4 + 0x38) = 0xdcb;
  *(undefined8 *)(lVar4 + 0x30) = 0xdca;
  *(undefined8 *)(lVar4 + 0x48) = 0xdcd;
  *(undefined8 *)(lVar4 + 0x40) = 0xdcc;
  *(undefined8 *)(lVar4 + 0x58) = 0xdcf;
  *(undefined8 *)(lVar4 + 0x50) = 0xdce;
  *(undefined8 *)(lVar4 + 0x68) = 0xdd1;
  *(undefined8 *)(lVar4 + 0x60) = 0xdd0;
  *(undefined8 *)(lVar4 + 0x78) = 0xdd3;
  *(undefined8 *)(lVar4 + 0x70) = 0xdd2;
  *(undefined8 *)(lVar4 + 0x88) = 0xdd5;
  *(undefined8 *)(lVar4 + 0x80) = 0xdd4;
  *(undefined8 *)(lVar4 + 0x98) = 0xdd7;
  *(undefined8 *)(lVar4 + 0x90) = 0xdd6;
  *(undefined8 *)(lVar4 + 0xa8) = 0xdd9;
  *(undefined8 *)(lVar4 + 0xa0) = 0xdd8;
  *(undefined8 *)(lVar4 + 0xb8) = 0xddb;
  *(undefined8 *)(lVar4 + 0xb0) = 0xdda;
  *(undefined8 *)(lVar4 + 200) = 0xddd;
  *(undefined8 *)(lVar4 + 0xc0) = 0xddc;
  *(undefined8 *)(lVar4 + 0xd8) = 0xddf;
  *(undefined8 *)(lVar4 + 0xd0) = 0xdde;
  *(undefined8 *)(lVar4 + 0xe8) = 0xde1;
  *(undefined8 *)(lVar4 + 0xe0) = 0xde0;
  *(undefined8 *)(lVar4 + 0xf8) = 0xde3;
  *(undefined8 *)(lVar4 + 0xf0) = 0xde2;
  *(undefined8 *)(lVar4 + 0x108) = 0xde5;
  *(undefined8 *)(lVar4 + 0x100) = 0xde4;
  *(undefined8 *)(lVar4 + 0x118) = 0xde7;
  *(undefined8 *)(lVar4 + 0x110) = 0xde6;
  *(undefined8 *)(lVar4 + 0x128) = 0xde9;
  *(undefined8 *)(lVar4 + 0x120) = 0xde8;
  *(undefined8 *)(lVar4 + 0x138) = 0xdeb;
  *(undefined8 *)(lVar4 + 0x130) = 0xdea;
  *(undefined8 *)(lVar4 + 0x148) = 0xded;
  *(undefined8 *)(lVar4 + 0x140) = 0xdec;
  *(undefined8 *)(lVar4 + 0x158) = 0xdef;
  *(undefined8 *)(lVar4 + 0x150) = 0xdee;
  *(undefined8 *)(lVar4 + 0x168) = 0xdf1;
  *(undefined8 *)(lVar4 + 0x160) = 0xdf0;
  *(undefined8 *)(lVar4 + 0x178) = 0xdf3;
  *(undefined8 *)(lVar4 + 0x170) = 0xdf2;
  *(undefined8 *)(lVar4 + 0x188) = 0xdf5;
  *(undefined8 *)(lVar4 + 0x180) = 0xdf4;
  *(undefined8 *)(lVar4 + 0x198) = 0xdf7;
  *(undefined8 *)(lVar4 + 400) = 0xdf6;
  *(undefined8 *)(lVar4 + 0x1a8) = 0xdf9;
  *(undefined8 *)(lVar4 + 0x1a0) = 0xdf8;
  *(undefined8 *)(lVar4 + 0x1b8) = 0xdfb;
  *(undefined8 *)(lVar4 + 0x1b0) = 0xdfa;
  *(undefined8 *)(lVar4 + 0x1c8) = 0xdfd;
  *(undefined8 *)(lVar4 + 0x1c0) = 0xdfc;
  *(undefined8 *)(lVar4 + 0x1d8) = 0xdff;
  *(undefined8 *)(lVar4 + 0x1d0) = 0xdfe;
  *(undefined8 *)(lVar4 + 0x1e8) = 0xe01;
  *(undefined8 *)(lVar4 + 0x1e0) = 0xe00;
  *(undefined8 *)(lVar4 + 0x1f8) = 0xe03;
  *(undefined8 *)(lVar4 + 0x1f0) = 0xe02;
  *(undefined8 *)(lVar4 + 0x200) = 0xe04;
  *(undefined8 *)(lVar4 + 0x208) = 0xe05;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar8 = *(long *)(lVar4 + 0x10);
  if (lVar8 == 0) {
    func_0x000107c61574(lVar4);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000100403514(0,lVar8,0);
    puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    puVar2 = PTR___sSiN_11034deb0;
    do {
      puVar6 = puVar2;
      puVar7 = puVar3;
      func_0x000107c6057c();
      uVar1 = *(ulong *)(puVar9 + 0x10);
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
        func_0x000100403514(1 < *(ulong *)(puVar9 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
      *(undefined **)(puVar9 + uVar1 * 0x10 + 0x20) = puVar6;
      *(undefined **)(puVar9 + uVar1 * 0x10 + 0x28) = puVar7;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    func_0x000107c61574(lVar4);
  }
  puRam0000000112ffb608 = puVar9;
  return;
}



/* Entry: 103c594b0; end: 103c59513;  */

void FUN_103c594b0(long param_1)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  lVar1 = lVar2;
  func_0x000107c61558();
  *unaff_x20 = lVar2;
  if (((int)lVar1 != 0) && (param_1 <= (long)(*(ulong *)(lVar2 + 0x18) >> 1))) {
    return;
  }
  func_0x000100403400();
  *unaff_x20 = lVar1;
  return;
}



/* Entry: 103c59514; end: 103c5952f;  */

void FUN_103c59514(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103c59530();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 103c59530; end: 103c59743;  */

undefined * FUN_103c59530(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103c59654);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    func_0x000103c58798();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_103c5acb4(0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 103c59744; end: 103c59bff;  */

/* WARNING: Type propagation algorithm not settling */

bool FUN_103c59744(ulong param_1,ulong param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  byte *pbVar9;
  long lVar10;
  byte **ppbVar11;
  long lVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  byte *pbVar16;
  byte *pbStack_70;
  ulong uStack_68;
  
  uVar3 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar3 = param_2 >> 0x38 & 0xf;
  }
  if (uVar3 == 0) {
    bVar2 = false;
  }
  else {
    uVar8 = (uint)(param_1 >> 0x3b) & 1;
    if ((param_2 & 0x1000000000000000) == 0) {
      uVar8 = 1;
    }
    uVar15 = 7;
    if (uVar8 == 0) {
      uVar15 = 0xb;
    }
    uVar15 = uVar15 | uVar3 << 0x10;
    uVar3 = 0xf;
    func_0x000107c5fba0(0xf,uVar15,param_1,param_2);
    pbVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar3 != 0) {
      pbStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100403514(0,uVar3 & ((long)uVar3 >> 0x3f ^ 0xffffffffffffffffU),0);
      pbVar13 = pbStack_70;
      if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103c59be4);
        (*pcVar1)();
      }
      do {
        uVar4 = uVar15;
        func_0x000107c5fb64(uVar15,param_1,param_2);
        uVar7 = param_1;
        func_0x000107c5fbcc();
        uVar6 = *(ulong *)(pbVar13 + 0x10);
        pbStack_70 = pbVar13;
        if (*(ulong *)(pbVar13 + 0x18) >> 1 <= uVar6) {
          func_0x000100403514(1 < *(ulong *)(pbVar13 + 0x18),uVar6 + 1,1);
        }
        pbVar13 = pbStack_70;
        *(ulong *)(pbStack_70 + 0x10) = uVar6 + 1;
        *(ulong *)(pbStack_70 + uVar6 * 0x10 + 0x20) = uVar4;
        *(ulong *)(pbStack_70 + uVar6 * 0x10 + 0x28) = uVar7;
        func_0x000107c5fb64(uVar15,param_1,param_2);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    uVar3 = *(ulong *)(pbVar13 + 0x10);
    if (uVar3 == 0) {
      bVar2 = true;
    }
    else {
      uVar15 = 0;
      pbVar16 = (byte *)0x0;
      do {
        if (*(ulong *)(pbVar13 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103c59be0);
          (*pcVar1)();
        }
        pbVar9 = *(byte **)(pbVar13 + uVar15 * 0x10 + 0x20);
        uVar4 = *(ulong *)((long)(pbVar13 + uVar15 * 0x10 + 0x20) + 8);
        uVar5 = (ulong)pbVar9 & 0xffffffffffff;
        uVar7 = uVar4 >> 0x38 & 0xf;
        uVar6 = uVar5;
        if ((uVar4 & 0x2000000000000000) != 0) {
          uVar6 = uVar7;
        }
        if (uVar6 == 0) goto LAB_103c59b78;
        if ((uVar4 >> 0x3c & 1) == 0) {
          if ((uVar4 >> 0x3d & 1) != 0) {
            pbStack_70 = pbVar9;
            uStack_68 = uVar4 & 0xffffffffffffff;
            uVar8 = (uint)pbVar9 & 0xff;
            if (uVar8 == 0x2b) {
              if (uVar7 == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x103c59bf0);
                (*pcVar1)();
              }
              lVar10 = uVar7 - 1;
              if (lVar10 == 0) goto LAB_103c59ac4;
              pbVar14 = (byte *)0x0;
              pbVar9 = (byte *)((ulong)&pbStack_70 | 1);
              do {
                if (((9 < *pbVar9 - 0x30) ||
                    (lVar12 = (long)pbVar14 * 10,
                    SUB168(SEXT816((long)pbVar14) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                   (uVar6 = (ulong)(byte)(*pbVar9 - 0x30), pbVar14 = (byte *)(lVar12 + uVar6),
                   SCARRY8(lVar12,uVar6))) goto LAB_103c59ac4;
                uVar8 = 0;
                lVar10 = lVar10 + -1;
                pbVar9 = pbVar9 + 1;
              } while (lVar10 != 0);
            }
            else if (uVar8 == 0x2d) {
              if (uVar7 == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x103c59bec);
                (*pcVar1)();
              }
              lVar10 = uVar7 - 1;
              if (lVar10 == 0) {
LAB_103c59ac4:
                uVar8 = 1;
                pbVar14 = (byte *)0x0;
              }
              else {
                pbVar14 = (byte *)0x0;
                pbVar9 = (byte *)((ulong)&pbStack_70 | 1);
                do {
                  if (((9 < *pbVar9 - 0x30) ||
                      (lVar12 = (long)pbVar14 * 10,
                      SUB168(SEXT816((long)pbVar14) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                     (uVar6 = (ulong)(byte)(*pbVar9 - 0x30), pbVar14 = (byte *)(lVar12 - uVar6),
                     SBORROW8(lVar12,uVar6))) goto LAB_103c59ac4;
                  uVar8 = 0;
                  lVar10 = lVar10 + -1;
                  pbVar9 = pbVar9 + 1;
                } while (lVar10 != 0);
              }
            }
            else {
              if (uVar7 == 0) goto LAB_103c59ac4;
              pbVar14 = (byte *)0x0;
              ppbVar11 = &pbStack_70;
              do {
                if (((9 < *(byte *)ppbVar11 - 0x30) ||
                    (lVar10 = (long)pbVar14 * 10,
                    SUB168(SEXT816((long)pbVar14) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                   (uVar6 = (ulong)(byte)(*(byte *)ppbVar11 - 0x30),
                   pbVar14 = (byte *)(lVar10 + uVar6), SCARRY8(lVar10,uVar6))) goto LAB_103c59ac4;
                uVar8 = 0;
                uVar7 = uVar7 - 1;
                ppbVar11 = (byte **)((long)ppbVar11 + 1);
              } while (uVar7 != 0);
            }
            goto LAB_103c59acc;
          }
          if (((ulong)pbVar9 >> 0x3c & 1) == 0) {
            func_0x000107c60358();
          }
          else {
            pbVar9 = (byte *)((uVar4 & 0xfffffffffffffff) + 0x20);
            uVar4 = uVar5;
          }
          if (*pbVar9 == 0x2b) {
            lVar10 = uVar4 - 1;
            if ((long)uVar4 < 1) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x103c59bf4);
              (*pcVar1)();
            }
            if (lVar10 == 0) goto LAB_103c59b78;
            pbVar14 = (byte *)0x0;
            do {
              pbVar9 = pbVar9 + 1;
              if (((9 < *pbVar9 - 0x30) ||
                  (lVar12 = (long)pbVar14 * 10,
                  SUB168(SEXT816((long)pbVar14) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                 (uVar6 = (ulong)(byte)(*pbVar9 - 0x30), pbVar14 = (byte *)(lVar12 + uVar6),
                 SCARRY8(lVar12,uVar6))) goto LAB_103c59b78;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
            goto LAB_103c59ad8;
          }
          if (*pbVar9 == 0x2d) {
            lVar10 = uVar4 - 1;
            if ((long)uVar4 < 1) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x103c59bf8);
              (*pcVar1)();
            }
            if (lVar10 != 0) {
              pbVar14 = (byte *)0x0;
              do {
                pbVar9 = pbVar9 + 1;
                if (((9 < *pbVar9 - 0x30) ||
                    (lVar12 = (long)pbVar14 * 10,
                    SUB168(SEXT816((long)pbVar14) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                   (uVar6 = (ulong)(byte)(*pbVar9 - 0x30), pbVar14 = (byte *)(lVar12 - uVar6),
                   SBORROW8(lVar12,uVar6))) goto LAB_103c59b78;
                lVar10 = lVar10 + -1;
              } while (lVar10 != 0);
              goto LAB_103c59ad8;
            }
            goto LAB_103c59b78;
          }
          if (uVar4 == 0) goto LAB_103c59b78;
          pbVar14 = (byte *)0x0;
          if (pbVar9 != (byte *)0x0) {
            do {
              if (((9 < *pbVar9 - 0x30) ||
                  (lVar10 = (long)pbVar14 * 10,
                  SUB168(SEXT816((long)pbVar14) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                 (uVar6 = (ulong)(byte)(*pbVar9 - 0x30), pbVar14 = (byte *)(lVar10 + uVar6),
                 SCARRY8(lVar10,uVar6))) goto LAB_103c59b78;
              uVar4 = uVar4 - 1;
              pbVar9 = pbVar9 + 1;
            } while (uVar4 != 0);
            goto LAB_103c59ad8;
          }
          if ((uVar15 & 1) != 0) goto LAB_103c59b0c;
LAB_103c59adc:
          bVar2 = SCARRY8((long)pbVar16,(long)pbVar14);
          pbVar16 = pbVar16 + (long)pbVar14;
          if (bVar2) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103c59be8);
            (*pcVar1)();
          }
        }
        else {
          func_0x000107c61434(uVar4);
          uVar6 = uVar4;
          func_0x000100edba6c(pbVar9,uVar4,10);
          uVar8 = (uint)uVar6;
          func_0x000107c6142c(uVar4);
          pbVar14 = pbVar9;
LAB_103c59acc:
          if ((uVar8 & 0xff) == 1) {
LAB_103c59b78:
            bVar2 = false;
            goto LAB_103c59b84;
          }
LAB_103c59ad8:
          if ((uVar15 & 1) == 0) goto LAB_103c59adc;
          if (pbVar14 == (byte *)0x9) {
            bVar2 = SCARRY8((long)pbVar16,9);
            pbVar16 = pbVar16 + 9;
            if (bVar2) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x103c59bfc);
              (*pcVar1)();
            }
          }
          else {
            if ((byte *)0x8 < pbVar14) goto LAB_103c59adc;
LAB_103c59b0c:
            lVar10 = (long)pbVar14 * 2;
            if ((byte *)0x4 < pbVar14) {
              lVar10 = (long)pbVar14 * 2 + -9;
            }
            bVar2 = SCARRY8((long)pbVar16,lVar10);
            pbVar16 = pbVar16 + lVar10;
            if (bVar2) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x103c59c00);
              (*pcVar1)();
            }
          }
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar3);
      bVar2 = ((long)pbVar16 * -0x3333333333333333 + 0x1999999999999998U >> 1 |
              (long)pbVar16 * -0x3333333333333333 << 0x3f) < 0x1999999999999999;
    }
LAB_103c59b84:
    func_0x000107c6142c(pbVar13);
  }
  return bVar2;
}



/* Entry: 103c59c00; end: 103c59cab;  */

void FUN_103c59c00(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103c59ca8);
    (*pcVar3)();
  }
  uVar1 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  uVar5 = (uint)(param_2 >> 0x3b) & 1;
  if ((param_3 & 0x1000000000000000) == 0) {
    uVar5 = 1;
  }
  uVar6 = 7;
  if (uVar5 == 0) {
    uVar6 = 0xb;
  }
  uVar6 = uVar6 | uVar1 << 0x10;
  param_1 = -param_1;
  uVar4 = uVar6;
  func_0x000107c5fb68(uVar6,param_1,0xf,param_2,param_3);
  uVar2 = 0xf;
  if (((uint)param_1 & 0xff) != 1) {
    uVar2 = uVar4;
  }
  if (uVar2 >> 0xe <= uVar1 << 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb7a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sSSySsSnySS5IndexVGcig_11034db08)(uVar2,uVar6,param_2,param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103c59cac);
  (*pcVar3)();
}



/* Entry: 103c59cac; end: 103c5a0eb;  */

/* WARNING: Removing unreachable block (ram,0x000103c59d44) */

undefined1  [16] FUN_103c59cac(ulong param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  long extraout_x8;
  uint uVar14;
  undefined1 *puVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_a0 [8];
  long lStack_98;
  ulong *puStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  lVar2 = 0;
  func_0x000107c5eb9c();
  lVar16 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  puVar15 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c610f8(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8);
  lVar3 = -0x2fffffffffffffde;
  func_0x000102a44580(0xd000000000000022,0x800000010f1b1850,0);
  uVar4 = param_1;
  func_0x000107c5fadc(param_1,param_2);
  uVar12 = param_1;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar12 = param_2 >> 0x38 & 0xf;
  }
  uVar14 = (uint)(param_1 >> 0x3b) & 1;
  if ((param_2 & 0x1000000000000000) == 0) {
    uVar14 = 1;
  }
  uVar1 = 7;
  if (uVar14 == 0) {
    uVar1 = 0xb;
  }
  puStack_90 = (ulong *)(uVar1 | uVar12 << 0x10);
  lStack_98 = 0xf;
  uStack_78 = param_1;
  uStack_70 = param_2;
  func_0x000107c61434(param_2);
  uVar8 = 0x112d483b0;
  func_0x0001000285a8(0x112d483b0,&UNK_10d90f140);
  uVar5 = uVar8;
  func_0x000100eca688();
  uVar6 = uVar5;
  func_0x000100e8b654();
  puVar11 = &uStack_78;
  func_0x000107c60148(&lStack_98,puVar11,uVar8,PTR___sSSN_11034da80,uVar5,uVar6);
  lVar7 = lVar3;
  func_0x000107c43630();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uVar4);
  if (lVar7 != 0) {
    lVar3 = lVar7;
    func_0x000107c4f888();
    uVar12 = param_1;
    func_0x000107c5ff18();
    if (((uint)uVar12 & 0xff) == 1) {
      func_0x000107c61170(lVar7);
    }
    else {
      func_0x000107c5fbd8();
      uVar8 = 0x2f;
      uVar12 = param_2;
      lStack_98 = lVar3;
      puStack_90 = puVar11;
      uStack_88 = param_1;
      uStack_80 = param_2;
      func_0x000107c5eb6c(puVar15,0x2f,0xe100000000000000);
      func_0x000101478db0();
      puVar9 = puVar15;
      func_0x000107c601d8(puVar15,PTR___sSsN_11034e1d8,uVar8);
      (**(code **)(lVar16 + 8))(puVar15,lVar2);
      func_0x000107c6142c(param_2);
      if (*(long *)(puVar9 + 0x10) == 2) {
        lVar2 = *(long *)(puVar9 + 0x20);
        uVar5 = *(undefined8 *)(puVar9 + 0x28);
        uVar8 = *(undefined8 *)(puVar9 + 0x30);
        uVar6 = *(undefined8 *)(puVar9 + 0x38);
        func_0x000107c61434(uVar5);
        func_0x000107c61434(uVar6);
        func_0x000107c6142c(puVar9);
        uVar10 = 2;
        uVar13 = uVar6;
        FUN_103c59c00(2,uVar8,uVar6);
        func_0x000107c6142c(uVar6);
        lStack_98 = lVar2;
        puStack_90 = (ulong *)uVar5;
        func_0x000107c5fb78(0x2f,0xe100000000000000);
        func_0x000107c5fb2c(uVar10,uVar8,uVar13,uVar12);
        func_0x000107c5fb78();
        func_0x000107c61170(lVar7);
        func_0x000107c6142c(uVar12);
        func_0x000107c6142c(uVar8);
        goto LAB_103c59d54;
      }
      func_0x000107c61170(lVar7);
      func_0x000107c6142c(puVar9);
    }
  }
  lStack_98 = 0;
  puStack_90 = (ulong *)0x0;
LAB_103c59d54:
  auVar17._8_8_ = puStack_90;
  auVar17._0_8_ = lStack_98;
  return auVar17;
}



/* Entry: 103c5a0ec; end: 103c5a32b;  */

undefined1  [16] FUN_103c5a0ec(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  uVar3 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  uVar4 = uVar3;
  func_0x000107c61538();
  uVar2 = param_1;
  func_0x000103c59f88(param_1,param_2,uVar4);
  if ((uVar2 & 1) == 0) {
    if (lRam0000000112ffb5f0 != -1) {
      func_0x000107c61568(0x112ffb5f0,FUN_103c58be8);
    }
    uVar2 = param_1;
    func_0x000103c59f88(param_1,param_2,uRam0000000112ffb5f8);
    if ((uVar2 & 1) == 0) {
      if (lRam0000000112ffb600 != -1) {
        func_0x000107c61568(0x112ffb600,FUN_103c58e5c);
      }
      uVar2 = param_1;
      func_0x000103c59f88(param_1,param_2,uRam0000000112ffb608);
      if ((uVar2 & 1) == 0) {
        uVar4 = uVar3;
        func_0x000107c61538(uVar3,0x112ffb618);
        uVar2 = param_1;
        func_0x000103c59f88(param_1,param_2,uVar4);
        if ((uVar2 & 1) == 0) {
          uVar4 = uVar3;
          func_0x000107c61538(uVar3,0x112ffb690);
          uVar2 = param_1;
          func_0x000103c59f88(param_1,param_2,uVar4);
          if ((uVar2 & 1) == 0) {
            if (lRam0000000112ffb6c0 != -1) {
              func_0x000107c61568(0x112ffb6c0,0x103c590fc);
            }
            uVar2 = param_1;
            func_0x000103c59f88(param_1,param_2,uRam0000000112ffb6c8);
            if ((uVar2 & 1) == 0) {
              func_0x000107c61538(uVar3,0x112ffb6d8);
              func_0x000103c59f88(param_1,param_2,uVar3);
              bVar1 = (param_1 & 1) == 0;
              uVar3 = 0x7961506e6f696e55;
              if (bVar1) {
                uVar3 = 0x6e776f6e6b6e55;
              }
              uVar4 = 0xe800000000000000;
              if (bVar1) {
                uVar4 = 0xe700000000000000;
              }
            }
            else {
              uVar4 = 0xea00000000006472;
              uVar3 = 0x614372657473614d;
            }
          }
          else {
            uVar4 = 0xe400000000000000;
            uVar3 = 0x61736956;
          }
        }
        else {
          uVar3 = 0x6c437372656e6944;
          uVar4 = 0xea00000000006275;
        }
      }
      else {
        uVar4 = 0xe300000000000000;
        uVar3 = 0x42434a;
      }
    }
    else {
      uVar4 = 0xe800000000000000;
      uVar3 = 0x7265766f63736944;
    }
  }
  else {
    uVar4 = 0xe400000000000000;
    uVar3 = 0x78656d41;
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Entry: 103c5a32c; end: 103c5aca3;  */

bool FUN_103c5a32c(byte *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long extraout_x8_01;
  long extraout_x8_02;
  byte *pbVar10;
  ulong uVar11;
  byte **ppbVar12;
  long lVar13;
  code *pcVar14;
  uint uVar15;
  byte *pbVar16;
  undefined1 *puVar17;
  long lVar18;
  code *pcVar19;
  byte *pbVar20;
  byte *pbVar21;
  ulong uVar22;
  undefined1 auStack_b0 [12];
  undefined4 uStack_a4;
  long lStack_a0;
  code *pcStack_98;
  long lStack_90;
  long lStack_88;
  code *pcStack_80;
  long lStack_78;
  byte *pbStack_70;
  ulong uStack_68;
  
  lVar1 = 0;
  func_0x000107c5ef5c();
  lVar18 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  puVar17 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ef64();
  pcStack_80 = *(code **)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)((long)pcStack_80 + 0x40));
  lVar9 = (long)puVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_78 = lVar9;
  func_0x000107c5eea4();
  lStack_88 = *(long *)(lVar3 + -8);
  lStack_90 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_88 + 0x40));
  lVar9 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5eb9c();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  uVar22 = lVar9 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0x2f;
  pbStack_70 = param_1;
  uStack_68 = param_2;
  func_0x000107c5eb6c(uVar22,0x2f,0xe100000000000000);
  func_0x000100e8b654();
  uVar5 = uVar22;
  func_0x000107c601d8(uVar22,PTR___sSSN_11034da80,uVar4);
  (**(code **)(lVar13 + 8))(uVar22,lVar3);
  if (*(long *)(uVar5 + 0x10) == 0) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x103c5abfc);
    (*pcVar14)();
  }
  pbVar16 = *(byte **)(uVar5 + 0x20);
  pbVar21 = *(byte **)(uVar5 + 0x28);
  pbVar7 = (byte *)((ulong)pbVar16 & 0xffffffffffff);
  pbVar10 = (byte *)((ulong)pbVar21 >> 0x38 & 0xf);
  pbVar20 = pbVar7;
  if (((ulong)pbVar21 & 0x2000000000000000) != 0) {
    pbVar20 = pbVar10;
  }
  uVar22 = uVar5;
  if (pbVar20 == (byte *)0x0) goto LAB_103c5a6e8;
  if (((ulong)pbVar21 >> 0x3c & 1) == 0) {
    if (((ulong)pbVar21 >> 0x3d & 1) != 0) {
      pbStack_70 = pbVar16;
      uStack_68 = (ulong)pbVar21 & 0xffffffffffffff;
      uVar15 = (uint)pbVar16 & 0xff;
      if (uVar15 == 0x2b) {
        if (pbVar10 == (byte *)0x0) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x103c5ac84);
          (*pcVar14)();
        }
        pbVar10 = pbVar10 + -1;
        if (pbVar10 == (byte *)0x0) goto LAB_103c5a6d4;
        pbVar20 = (byte *)0x0;
        pbVar16 = (byte *)((ulong)&pbStack_70 | 1);
        do {
          if (((9 < *pbVar16 - 0x30) ||
              (lVar3 = (long)pbVar20 * 10,
              SUB168(SEXT816((long)pbVar20) * SEXT816(10),8) != lVar3 >> 0x3f)) ||
             (uVar8 = (ulong)(byte)(*pbVar16 - 0x30), pbVar20 = (byte *)(lVar3 + uVar8),
             SCARRY8(lVar3,uVar8))) goto LAB_103c5a6d4;
          uVar15 = 0;
          pbVar10 = pbVar10 + -1;
          pbVar16 = pbVar16 + 1;
        } while (pbVar10 != (byte *)0x0);
      }
      else if (uVar15 == 0x2d) {
        if (pbVar10 == (byte *)0x0) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x103c5ac7c);
          (*pcVar14)();
        }
        pbVar10 = pbVar10 + -1;
        if (pbVar10 == (byte *)0x0) {
LAB_103c5a6d4:
          uVar15 = 1;
          pbVar20 = (byte *)0x0;
        }
        else {
          pbVar20 = (byte *)0x0;
          pbVar16 = (byte *)((ulong)&pbStack_70 | 1);
          do {
            if (((9 < *pbVar16 - 0x30) ||
                (lVar3 = (long)pbVar20 * 10,
                SUB168(SEXT816((long)pbVar20) * SEXT816(10),8) != lVar3 >> 0x3f)) ||
               (uVar8 = (ulong)(byte)(*pbVar16 - 0x30), pbVar20 = (byte *)(lVar3 - uVar8),
               SBORROW8(lVar3,uVar8))) goto LAB_103c5a6d4;
            uVar15 = 0;
            pbVar10 = pbVar10 + -1;
            pbVar16 = pbVar16 + 1;
          } while (pbVar10 != (byte *)0x0);
        }
      }
      else {
        if (pbVar10 == (byte *)0x0) goto LAB_103c5a6d4;
        pbVar20 = (byte *)0x0;
        ppbVar12 = &pbStack_70;
        do {
          if (((9 < *(byte *)ppbVar12 - 0x30) ||
              (lVar3 = (long)pbVar20 * 10,
              SUB168(SEXT816((long)pbVar20) * SEXT816(10),8) != lVar3 >> 0x3f)) ||
             (uVar8 = (ulong)(byte)(*(byte *)ppbVar12 - 0x30), pbVar20 = (byte *)(lVar3 + uVar8),
             SCARRY8(lVar3,uVar8))) goto LAB_103c5a6d4;
          uVar15 = 0;
          pbVar10 = pbVar10 + -1;
          ppbVar12 = (byte **)((long)ppbVar12 + 1);
        } while (pbVar10 != (byte *)0x0);
      }
      goto LAB_103c5a6dc;
    }
    if (((ulong)pbVar16 >> 0x3c & 1) == 0) {
      func_0x000107c60358();
    }
    else {
      pbVar16 = (byte *)(((ulong)pbVar21 & 0xfffffffffffffff) + 0x20);
      pbVar21 = pbVar7;
    }
    if (*pbVar16 == 0x2b) {
      pbVar10 = pbVar21 + -1;
      if ((long)pbVar21 < 1) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x103c5ac80);
        (*pcVar14)();
      }
      if (pbVar10 == (byte *)0x0) goto LAB_103c5a6e8;
      pbVar20 = (byte *)0x0;
      do {
        pbVar16 = pbVar16 + 1;
        if (((9 < *pbVar16 - 0x30) ||
            (lVar3 = (long)pbVar20 * 10,
            SUB168(SEXT816((long)pbVar20) * SEXT816(10),8) != lVar3 >> 0x3f)) ||
           (uVar8 = (ulong)(byte)(*pbVar16 - 0x30), pbVar20 = (byte *)(lVar3 + uVar8),
           SCARRY8(lVar3,uVar8))) goto LAB_103c5a6e8;
        pbVar10 = pbVar10 + -1;
      } while (pbVar10 != (byte *)0x0);
    }
    else if (*pbVar16 == 0x2d) {
      pbVar10 = pbVar21 + -1;
      if ((long)pbVar21 < 1) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x103c5ac78);
        (*pcVar14)();
      }
      if (pbVar10 == (byte *)0x0) goto LAB_103c5a6e8;
      pbVar20 = (byte *)0x0;
      do {
        pbVar16 = pbVar16 + 1;
        if (((9 < *pbVar16 - 0x30) ||
            (lVar3 = (long)pbVar20 * 10,
            SUB168(SEXT816((long)pbVar20) * SEXT816(10),8) != lVar3 >> 0x3f)) ||
           (uVar8 = (ulong)(byte)(*pbVar16 - 0x30), pbVar20 = (byte *)(lVar3 - uVar8),
           SBORROW8(lVar3,uVar8))) goto LAB_103c5a6e8;
        pbVar10 = pbVar10 + -1;
      } while (pbVar10 != (byte *)0x0);
    }
    else {
      if (pbVar21 == (byte *)0x0) goto LAB_103c5a6e8;
      pbVar20 = (byte *)0x0;
      pbVar10 = pbVar16;
      while (pbVar10 != (byte *)0x0) {
        if (((9 < *pbVar16 - 0x30) ||
            (lVar3 = (long)pbVar20 * 10,
            SUB168(SEXT816((long)pbVar20) * SEXT816(10),8) != lVar3 >> 0x3f)) ||
           (uVar8 = (ulong)(byte)(*pbVar16 - 0x30), pbVar20 = (byte *)(lVar3 + uVar8),
           SCARRY8(lVar3,uVar8))) goto LAB_103c5a6e8;
        pbVar21 = pbVar21 + -1;
        pbVar16 = pbVar16 + 1;
        pbVar10 = pbVar21;
      }
    }
  }
  else {
    func_0x000107c61434(pbVar21);
    pbVar20 = pbVar21;
    func_0x000100edba6c(pbVar16,pbVar21,10);
    uVar15 = (uint)pbVar20;
    func_0x000107c6142c(pbVar21);
    pbVar20 = pbVar16;
LAB_103c5a6dc:
    if ((uVar15 & 0xff) == 1) goto LAB_103c5a6e8;
  }
  if (*(ulong *)(uVar5 + 0x10) < 2) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x103c5ac50);
    (*pcVar14)();
  }
  pbVar16 = *(byte **)(uVar5 + 0x30);
  uVar22 = *(ulong *)(uVar5 + 0x38);
  func_0x000107c61434(uVar22);
  func_0x000107c6142c(uVar5);
  uVar8 = (ulong)pbVar16 & 0xffffffffffff;
  uVar11 = uVar22 >> 0x38 & 0xf;
  uVar5 = uVar8;
  if ((uVar22 & 0x2000000000000000) != 0) {
    uVar5 = uVar11;
  }
  if (uVar5 == 0) {
LAB_103c5a6e8:
    func_0x000107c6142c(uVar22);
    return false;
  }
  if ((uVar22 >> 0x3c & 1) != 0) {
    uVar5 = uVar22;
    func_0x000100edba6c(pbVar16,uVar22,10);
    uVar15 = (uint)uVar5;
    pbVar10 = pbVar16;
    goto LAB_103c5a98c;
  }
  if ((uVar22 >> 0x3d & 1) == 0) {
    if (((ulong)pbVar16 >> 0x3c & 1) == 0) {
      uVar8 = uVar22;
      func_0x000107c60358();
    }
    else {
      pbVar16 = (byte *)((uVar22 & 0xfffffffffffffff) + 0x20);
    }
    if (*pbVar16 == 0x2b) {
      if ((long)uVar8 < 1) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x103c5aca0);
        (*pcVar14)();
      }
      lVar3 = uVar8 - 1;
      if (lVar3 != 0) {
        pbVar10 = (byte *)0x0;
        do {
          pbVar16 = pbVar16 + 1;
          if (((9 < *pbVar16 - 0x30) ||
              (lVar13 = (long)pbVar10 * 10,
              SUB168(SEXT816((long)pbVar10) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
             (uVar5 = (ulong)(byte)(*pbVar16 - 0x30), pbVar10 = (byte *)(lVar13 + uVar5),
             SCARRY8(lVar13,uVar5))) goto LAB_103c5a984;
          uVar15 = 0;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
        goto LAB_103c5a98c;
      }
    }
    else if (*pbVar16 == 0x2d) {
      if ((long)uVar8 < 1) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x103c5ac98);
        (*pcVar14)();
      }
      lVar3 = uVar8 - 1;
      if (lVar3 != 0) {
        pbVar10 = (byte *)0x0;
        do {
          pbVar16 = pbVar16 + 1;
          if (((9 < *pbVar16 - 0x30) ||
              (lVar13 = (long)pbVar10 * 10,
              SUB168(SEXT816((long)pbVar10) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
             (uVar5 = (ulong)(byte)(*pbVar16 - 0x30), pbVar10 = (byte *)(lVar13 - uVar5),
             SBORROW8(lVar13,uVar5))) goto LAB_103c5a984;
          uVar15 = 0;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
        goto LAB_103c5a98c;
      }
    }
    else if (uVar8 != 0) {
      pbVar10 = (byte *)0x0;
      if (pbVar16 == (byte *)0x0) {
        uVar15 = 0;
      }
      else {
        do {
          if (((9 < *pbVar16 - 0x30) ||
              (lVar3 = (long)pbVar10 * 10,
              SUB168(SEXT816((long)pbVar10) * SEXT816(10),8) != lVar3 >> 0x3f)) ||
             (uVar5 = (ulong)(byte)(*pbVar16 - 0x30), pbVar10 = (byte *)(lVar3 + uVar5),
             SCARRY8(lVar3,uVar5))) goto LAB_103c5a984;
          uVar15 = 0;
          uVar8 = uVar8 - 1;
          pbVar16 = pbVar16 + 1;
        } while (uVar8 != 0);
      }
      goto LAB_103c5a98c;
    }
  }
  else {
    pbStack_70 = pbVar16;
    uStack_68 = uVar22 & 0xffffffffffffff;
    uVar15 = (uint)pbVar16 & 0xff;
    if (uVar15 == 0x2b) {
      if (uVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x103c5aca4);
        (*pcVar14)();
      }
      lVar3 = uVar11 - 1;
      if (lVar3 != 0) {
        pbVar10 = (byte *)0x0;
        pbVar16 = (byte *)((ulong)&pbStack_70 | 1);
        do {
          if (((9 < *pbVar16 - 0x30) ||
              (lVar13 = (long)pbVar10 * 10,
              SUB168(SEXT816((long)pbVar10) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
             (uVar5 = (ulong)(byte)(*pbVar16 - 0x30), pbVar10 = (byte *)(lVar13 + uVar5),
             SCARRY8(lVar13,uVar5))) goto LAB_103c5a984;
          uVar15 = 0;
          lVar3 = lVar3 + -1;
          pbVar16 = pbVar16 + 1;
        } while (lVar3 != 0);
        goto LAB_103c5a98c;
      }
    }
    else if (uVar15 == 0x2d) {
      if (uVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x103c5ac9c);
        (*pcVar14)();
      }
      lVar3 = uVar11 - 1;
      if (lVar3 != 0) {
        pbVar10 = (byte *)0x0;
        pbVar16 = (byte *)((ulong)&pbStack_70 | 1);
        do {
          if (((9 < *pbVar16 - 0x30) ||
              (lVar13 = (long)pbVar10 * 10,
              SUB168(SEXT816((long)pbVar10) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
             (uVar5 = (ulong)(byte)(*pbVar16 - 0x30), pbVar10 = (byte *)(lVar13 - uVar5),
             SBORROW8(lVar13,uVar5))) goto LAB_103c5a984;
          uVar15 = 0;
          lVar3 = lVar3 + -1;
          pbVar16 = pbVar16 + 1;
        } while (lVar3 != 0);
        goto LAB_103c5a98c;
      }
    }
    else if (uVar11 != 0) {
      pbVar10 = (byte *)0x0;
      ppbVar12 = &pbStack_70;
      do {
        if (((9 < *(byte *)ppbVar12 - 0x30) ||
            (lVar3 = (long)pbVar10 * 10,
            SUB168(SEXT816((long)pbVar10) * SEXT816(10),8) != lVar3 >> 0x3f)) ||
           (uVar5 = (ulong)(byte)(*(byte *)ppbVar12 - 0x30), pbVar10 = (byte *)(lVar3 + uVar5),
           SCARRY8(lVar3,uVar5))) goto LAB_103c5a984;
        uVar15 = 0;
        uVar11 = uVar11 - 1;
        ppbVar12 = (byte **)((long)ppbVar12 + 1);
      } while (uVar11 != 0);
      goto LAB_103c5a98c;
    }
  }
LAB_103c5a984:
  uVar15 = 1;
  pbVar10 = (byte *)0x0;
LAB_103c5a98c:
  func_0x000107c6142c(uVar22);
  if ((uVar15 & 0xff) == 1) {
    return false;
  }
  func_0x000107c5eea0(lVar9);
  lVar13 = lStack_78;
  func_0x000107c5ef54(lStack_78);
  uStack_a4 = *(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO4yearyA2EmFWC_110350d88;
  pcVar19 = *(code **)(lVar18 + 0x68);
  (*pcVar19)(puVar17,uStack_a4,lVar1);
  puVar6 = puVar17;
  func_0x000107c5ef60(puVar17,lVar9);
  pcVar14 = *(code **)(lVar18 + 8);
  (*pcVar14)(puVar17,lVar1);
  lVar3 = lStack_90;
  pcStack_98 = *(code **)((long)pcStack_80 + 8);
  lStack_a0 = lVar2;
  (*pcStack_98)(lVar13,lVar2);
  pcStack_80 = *(code **)(lStack_88 + 8);
  (*pcStack_80)(lVar9,lVar3);
  func_0x000107c5eea0(lVar9);
  func_0x000107c5ef54(lVar13);
  if ((byte *)((long)puVar6 % 100) != pbVar10) {
    (*pcVar19)(puVar17,uStack_a4,lVar1);
    puVar6 = puVar17;
    func_0x000107c5ef60(puVar17,lVar9);
    (*pcVar14)(puVar17,lVar1);
    lVar2 = lStack_a0;
    (*pcStack_98)(lVar13,lStack_a0);
    (*pcStack_80)(lVar9,lVar3);
    if ((long)pbVar10 <= (long)puVar6 % 100) {
      return false;
    }
    func_0x000107c5eea0(lVar9);
    func_0x000107c5ef54(lVar13);
    (*pcVar19)(puVar17,uStack_a4,lVar1);
    puVar6 = puVar17;
    func_0x000107c5ef60(puVar17,lVar9);
    (*pcVar14)(puVar17,lVar1);
    (*pcStack_98)(lVar13,lVar2);
    (*pcStack_80)(lVar9,lVar3);
    return (long)pbVar10 < (long)puVar6 % 100 + 0xf;
  }
  (*pcVar19)(puVar17,*(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO5monthyA2EmFWC_110350d90
             ,lVar1);
  puVar6 = puVar17;
  func_0x000107c5ef60(puVar17,lVar9);
  (*pcVar14)(puVar17,lVar1);
  (*pcStack_98)(lVar13,lStack_a0);
  (*pcStack_80)(lVar9,lVar3);
  return (long)puVar6 <= (long)pbVar20;
}



/* Entry: 103c5aca4; end: 103c5acb3;  */

undefined1  [16] FUN_103c5aca4(void)

{
  return ZEXT816(0x1106ef1d8);
}



/* Entry: 103c5acb4; end: 103c5acf7;  */

void FUN_103c5acb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffb598 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___VNRecognizedTextObservation_1126ada18;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112ffb598 = puVar1;
  return;
}



/* Entry: 103c5acf8; end: 103c5ad03;  */

undefined8 FUN_103c5acf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 103c5ad04; end: 103c5adc3;  */

void FUN_103c5ad04(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  
  uVar1 = *unaff_x20;
  uVar5 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar6 = unaff_x20[3];
  uVar3 = unaff_x20[4];
  uVar7 = unaff_x20[5];
  uVar4 = unaff_x20[6];
  lVar8 = unaff_x20[7];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fb58(auStack_a8,uVar1,uVar5);
  func_0x000107c5fb58(auStack_a8,uVar2,uVar6);
  func_0x000107c5fb58(auStack_a8,uVar3,uVar7);
  if (lVar8 == 0) {
    func_0x000107c60694(0);
  }
  else {
    func_0x000107c60694(1);
    func_0x000107c5fb58(auStack_a8,uVar4,lVar8);
  }
  func_0x000107c606a8();
  return;
}



/* Entry: 103c5adc4; end: 103c5ae6b;  */

/* WARNING: Possible PIC construction at 0x000103c5adf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c5ae10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c5adf4) */
/* WARNING: Removing unreachable block (ram,0x000103c5ae14) */
/* WARNING: Removing unreachable block (ram,0x000103c5ae48) */
/* WARNING: Removing unreachable block (ram,0x000103c5ae18) */

void FUN_103c5adc4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,*unaff_x20,unaff_x20[1]);
  return;
}



/* Entry: 103c5ae6c; end: 103c5af27;  */

void FUN_103c5ae6c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  
  uVar1 = *unaff_x20;
  uVar5 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar6 = unaff_x20[3];
  uVar3 = unaff_x20[4];
  uVar7 = unaff_x20[5];
  uVar4 = unaff_x20[6];
  lVar8 = unaff_x20[7];
  func_0x000107c6068c(auStack_a8);
  func_0x000107c5fb58(auStack_a8,uVar1,uVar5);
  func_0x000107c5fb58(auStack_a8,uVar2,uVar6);
  func_0x000107c5fb58(auStack_a8,uVar3,uVar7);
  if (lVar8 == 0) {
    func_0x000107c60694(0);
  }
  else {
    func_0x000107c60694(1);
    func_0x000107c5fb58(auStack_a8,uVar4,lVar8);
  }
  func_0x000107c606a8();
  return;
}



/* Entry: 103c5af28; end: 103c5af6f;  */

uint FUN_103c5af28(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  FUN_103c5af70(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103c5af70; end: 103c5b03b;  */

undefined8 FUN_103c5af70(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  if (((uVar1 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar1 & 1) != 0))
     && ((uVar1 = param_1[2], uVar1 == param_2[2] && param_1[3] == param_2[3] ||
         (func_0x000107c605b8(), (uVar1 & 1) != 0)))) {
    uVar1 = param_1[4];
    if (((uVar1 == param_2[4]) && (param_1[5] == param_2[5])) ||
       (func_0x000107c605b8(), (uVar1 & 1) != 0)) {
      uVar1 = param_2[7];
      if (param_1[7] == 0) {
        if (uVar1 == 0) {
          return 1;
        }
      }
      else if ((uVar1 != 0) &&
              (((uVar2 = param_1[6], uVar2 == param_2[6] && (param_1[7] == uVar1)) ||
               (func_0x000107c605b8(), (uVar2 & 1) != 0)))) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 103c5b03c; end: 103c5b03f;  */

void FUN_103c5b03c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffbd40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc69c78;
  func_0x000107c61520(&UNK_10dc69c78,&UNK_1106ef250);
  puRam0000000112ffbd40 = puVar1;
  return;
}



/* Entry: 103c5b040; end: 103c5b07f;  */

void FUN_103c5b040(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffbd40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc69c78;
  func_0x000107c61520(&UNK_10dc69c78,&UNK_1106ef250);
  puRam0000000112ffbd40 = puVar1;
  return;
}



/* Entry: 103c5b080; end: 103c5b0e3;  */

long FUN_103c5b080(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103c5b0e4; end: 103c5b1f3;  */

undefined8 * FUN_103c5b0e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 103c5b1f4; end: 103c5b257;  */

undefined8 * FUN_103c5b1f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 103c5b258; end: 103c5b2ff;  */

int FUN_103c5b258(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103c5b300; end: 103c5b3bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c5b300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ffbd48);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ffbd50);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ffbd58);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ffbd60);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103c5b3bc; end: 103c5b3c7; -[SCCreditCardInfo number] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c5b3bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ffbd48);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ffbd48))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103c5b3c8; end: 103c5b3d3; -[SCCreditCardInfo expirationDate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c5b3c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ffbd50);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ffbd50))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103c5b3d4; end: 103c5b3df; -[SCCreditCardInfo network] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c5b3d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ffbd58);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ffbd58))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103c5b3e0; end: 103c5b427;  */

void FUN_103c5b3e0(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103c5b428; end: 103c5b483; -[SCCreditCardInfo name] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c5b428(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ffbd60))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ffbd60);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103c5b484; end: 103c5b57b; -[SCCreditCardInfo initWithNumber:expirationDate:network:name:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c5b484(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  lVar4 = param_2;
  func_0x000107c5faec();
  lVar5 = lVar4;
  func_0x000107c5faec();
  if (param_6 == 0) {
    param_6 = 0;
    lVar6 = 0;
  }
  else {
    lVar6 = lVar5;
    func_0x000107c5faec();
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112ffbd48);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_112ffbd50);
  *puVar1 = param_4;
  puVar1[1] = lVar4;
  puVar1 = (undefined8 *)(param_1 + _DAT_112ffbd58);
  *puVar1 = param_5;
  puVar1[1] = lVar5;
  plVar2 = (long *)(param_1 + _DAT_112ffbd60);
  *plVar2 = param_6;
  plVar2[1] = lVar6;
  lStack_70 = param_1;
  lStack_68 = lVar3;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103c5b57c; end: 103c5b663;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c5b57c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_90 [8];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c610f8();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ffbd48);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ffbd50);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ffbd58);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  uVar2 = param_1[6];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ffbd60);
  puVar1[1] = param_1[7];
  *puVar1 = uVar2;
  func_0x000100402194(&uStack_40,auStack_80);
  func_0x000100402194(&uStack_50,auStack_80);
  func_0x000100402194(&uStack_60,auStack_80);
  FUN_103c5b9d4(&uStack_70,auStack_80,0x112d35ff8,&UNK_10d900cd0);
  FUN_103c5b664(param_1);
  func_0x000107c61154(auStack_90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103c5b664; end: 103c5b697;  */

undefined8 FUN_103c5b664(undefined8 param_1)

{
  (*(code *)(undefined *)0x103c5b0ac)();
  return param_1;
}



/* Entry: 103c5b698; end: 103c5b6cb; -[SCCreditCardInfo hash] */

undefined8 FUN_103c5b698(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103c5b6cc();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 103c5b6cc; end: 103c5b7e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c5b6cc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c606ac(auStack_78);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ffbd48);
  func_0x000107c5fadc(uVar2,((undefined8 *)(unaff_x20 + _DAT_112ffbd48))[1]);
  uVar1 = uVar2;
  func_0x000107c44c3c();
  func_0x000107c61170(uVar2);
  func_0x000107c60690(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ffbd50);
  func_0x000107c5fadc(uVar2,((undefined8 *)(unaff_x20 + _DAT_112ffbd50))[1]);
  uVar1 = uVar2;
  func_0x000107c44c3c();
  func_0x000107c61170(uVar2);
  func_0x000107c60690(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ffbd58);
  func_0x000107c5fadc(uVar2,((undefined8 *)(unaff_x20 + _DAT_112ffbd58))[1]);
  uVar1 = uVar2;
  func_0x000107c44c3c();
  func_0x000107c61170(uVar2);
  func_0x000107c60690(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_112ffbd60))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ffbd60);
    func_0x000107c5fadc(uVar1);
    uVar2 = uVar1;
    func_0x000107c44c3c();
    func_0x000107c61170(uVar1);
  }
  func_0x000107c60690(uVar2);
  func_0x000107c606a4();
  return;
}



/* Entry: 103c5b7e8; end: 103c5b9d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103c5b7e8(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long unaff_x20;
  long lVar6;
  uint uVar7;
  uint uVar8;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar3 = unaff_x20;
  func_0x000107c614f0();
  FUN_103c5b9d4(param_1,auStack_60,0x112d387f8,&UNK_10d902650);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar1 = &lStack_68;
    func_0x000107c6147c(plVar1,auStack_60,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar3 = *(long *)(unaff_x20 + _DAT_112ffbd48);
      if (lVar3 == *(long *)(lStack_68 + _DAT_112ffbd48) &&
          ((long *)(unaff_x20 + _DAT_112ffbd48))[1] == ((long *)(lStack_68 + _DAT_112ffbd48))[1]) {
        uVar7 = 0;
      }
      else {
        func_0x000107c605b8();
        uVar7 = (uint)lVar3 ^ 1;
      }
      lVar3 = *(long *)(unaff_x20 + _DAT_112ffbd50);
      if (lVar3 == *(long *)(lStack_68 + _DAT_112ffbd50) &&
          ((long *)(unaff_x20 + _DAT_112ffbd50))[1] == ((long *)(lStack_68 + _DAT_112ffbd50))[1]) {
        uVar8 = 0;
      }
      else {
        func_0x000107c605b8();
        uVar8 = (uint)lVar3 ^ 1;
      }
      lVar3 = *(long *)(unaff_x20 + _DAT_112ffbd58);
      if (lVar3 == *(long *)(lStack_68 + _DAT_112ffbd58) &&
          ((long *)(unaff_x20 + _DAT_112ffbd58))[1] == ((long *)(lStack_68 + _DAT_112ffbd58))[1]) {
        uVar4 = 1;
      }
      else {
        func_0x000107c605b8();
        uVar4 = (uint)lVar3;
      }
      lVar3 = ((long *)(unaff_x20 + _DAT_112ffbd60))[1];
      lVar6 = ((long *)(lStack_68 + _DAT_112ffbd60))[1];
      if (lVar3 == 0) {
        func_0x000107c61434(lVar6);
        func_0x000107c61170(lStack_68);
        if (lVar6 == 0) {
LAB_103c5b99c:
          uVar5 = 1;
        }
        else {
          func_0x000107c6142c(lVar6);
          uVar5 = 0;
        }
      }
      else {
        uVar5 = 0;
        if (lVar6 != 0) {
          lVar2 = *(long *)(unaff_x20 + _DAT_112ffbd60);
          if ((lVar2 == *(long *)(lStack_68 + _DAT_112ffbd60)) && (lVar3 == lVar6)) {
            func_0x000107c61170(lStack_68);
            goto LAB_103c5b99c;
          }
          func_0x000107c605b8();
          uVar5 = (uint)lVar2;
        }
        func_0x000107c61170(lStack_68);
      }
      if (((uVar7 | uVar8) & 1) == 0) {
        uVar4 = uVar4 & uVar5;
        goto LAB_103c5b89c;
      }
    }
  }
  uVar4 = 0;
LAB_103c5b89c:
  return uVar4 & 1;
}



/* Entry: 103c5b9d4; end: 103c5ba1b;  */

undefined8 FUN_103c5b9d4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103c5ba1c; end: 103c5ba9b; -[SCCreditCardInfo isEqual:] */

uint FUN_103c5ba1c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_103c5b7e8(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103c5ba9c; end: 103c5ba9f; -[SCCreditCardInfo copyWithZone:] */

void FUN_103c5ba9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103c5baa0; end: 103c5babb; -[SCCreditCardInfo description] */

void FUN_103c5baa0(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103c5babc; end: 103c5bb37; -[SCCreditCardInfo init] */

void FUN_103c5babc(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "CreditCardUtil/CreditCardInfoWrapper.swift",0x2a,2,0x42,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c5bb04);
  (*pcVar1)();
}



/* Entry: 103c5bb38; end: 103c5bb9f; -[SCCreditCardInfo .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103c5bb58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c5bb80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c5bb5c) */
/* WARNING: Removing unreachable block (ram,0x000103c5bb84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c5bb38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ffbd48 + 8))
  ;
  return;
}



/* Entry: 103c5bba0; end: 103c5bbeb;  */

void FUN_103c5bba0(void)

{
  func_0x000107c61168(&PTR_PTR_112949480);
  return;
}



/* Entry: 103c5bbec; end: 103c5bc97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c5bbec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *unaff_x20;
  long lStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(*unaff_x20 + 0x18);
  lVar6 = 0;
  FUN_103c5c480();
  lVar7 = lVar6;
  func_0x000107c610f8();
  lVar4 = _DAT_112ffbe38;
  *(undefined8 *)(lVar7 + _DAT_112ffbe38) = 0;
  lVar5 = _DAT_112ffbe40;
  *(undefined8 *)(lVar7 + _DAT_112ffbe40) = 0;
  *(undefined8 *)(lVar7 + _DAT_112ffbe48) = param_1;
  *(undefined8 *)(lVar7 + _DAT_112ffbe50) = uVar1;
  *(undefined8 *)(lVar7 + lVar4) = 0;
  *(undefined8 *)(lVar7 + lVar5) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar7;
  lStack_38 = lVar6;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_40,puVar3);
  return;
}



/* Entry: 103c5bc98; end: 103c5bd1b; -[_TtC31ValdiWebLauncherServiceProviderP33_2A5B2637615F6017F2E9D0FCA43EC5B616ValdiWebLauncher webBrowserDidDismiss:] */

/* WARNING: Possible PIC construction at 0x000103c5bcd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c5bcf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c5bcd8) */
/* WARNING: Removing unreachable block (ram,0x000103c5bcf4) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c5bc98(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 103c5bd1c; end: 103c5bd3f;  */

/* WARNING: Possible PIC construction at 0x000103c5bfb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c5c0c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c5c158: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c5c1bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c5bfd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c5bff4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c5c1c0) */
/* WARNING: Removing unreachable block (ram,0x000103c5c15c) */
/* WARNING: Removing unreachable block (ram,0x000103c5c0cc) */
/* WARNING: Removing unreachable block (ram,0x000103c5bfbc) */
/* WARNING: Removing unreachable block (ram,0x000103c5bff8) */
/* WARNING: Removing unreachable block (ram,0x000103c5c174) */
/* WARNING: Removing unreachable block (ram,0x000103c5bffc) */
/* WARNING: Removing unreachable block (ram,0x000103c5c194) */
/* WARNING: Removing unreachable block (ram,0x000103c5c00c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c5bd1c(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c41408(param_1,&UNK_1106ef398,0x103c5c4c4,&UNK_1106ef3b0,"openUrl(with:)");
  func_0x000107c61180();
  lVar1 = *(long *)(unaff_x20 + _DAT_112ffbe40);
  if (lVar1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      if (param_1 != 0) {
        func_0x000107c615f0(param_1);
        lVar2 = lVar1;
        func_0x000107c4e864();
        func_0x000107c61180();
        if (lVar2 != 0) {
          func_0x000107c4d06c();
          func_0x000107c61180();
          lVar1 = lVar2;
        }
      }
      goto code_r0x000107c615e8;
    }
  }
  func_0x000107c615f0(*(undefined8 *)(unaff_x20 + _DAT_112ffbe38));
  lVar1 = param_1;
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 103c5bd40; end: 103c5be9b;  */

void FUN_103c5bd40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  
  lVar1 = 0x112d36580;
  puVar5 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5d7e8(param_3);
  func_0x000107c61180();
  uVar2 = param_3;
  func_0x000107c5faec();
  func_0x000107c61170(param_3);
  func_0x000107c5edd0(puVar7,uVar2,puVar5);
  func_0x000107c6142c(puVar5);
  puVar3 = puVar7;
  (**(code **)(lVar8 + 0x30))(puVar7,1,lVar1);
  if ((int)puVar3 == 1) {
    func_0x0001000293e4(puVar7);
  }
  else {
    lVar4 = lVar6;
    (**(code **)(lVar8 + 0x20))(lVar6,puVar7,lVar1);
    if (param_1 != 0) {
      func_0x000107c5ed90();
      func_0x000107c4b788(param_1);
      func_0x000107c61170(lVar4);
    }
    (**(code **)(lVar8 + 8))(lVar6,lVar1);
  }
  return;
}



/* Entry: 103c5be9c; end: 103c5beeb; -[_TtC31ValdiWebLauncherServiceProviderP33_2A5B2637615F6017F2E9D0FCA43EC5B616ValdiWebLauncher openUrlWithUrlRequest:] */

/* WARNING: Possible PIC construction at 0x000103c5bed4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c5bed8) */

void FUN_103c5be9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103c5bd1c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103c5beec; end: 103c5bf0f;  */

/* WARNING: Possible PIC construction at 0x000103c5bfb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c5c0c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c5c158: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c5c1bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c5bfd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c5bff4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c5c1c0) */
/* WARNING: Removing unreachable block (ram,0x000103c5c15c) */
/* WARNING: Removing unreachable block (ram,0x000103c5c0cc) */
/* WARNING: Removing unreachable block (ram,0x000103c5bfbc) */
/* WARNING: Removing unreachable block (ram,0x000103c5bff8) */
/* WARNING: Removing unreachable block (ram,0x000103c5c174) */
/* WARNING: Removing unreachable block (ram,0x000103c5bffc) */
/* WARNING: Removing unreachable block (ram,0x000103c5c194) */
/* WARNING: Removing unreachable block (ram,0x000103c5c00c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c5beec(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c41408(param_1,&UNK_1106ef348,FUN_103c5c4a0,&UNK_1106ef360,"openHtml(with:)");
  func_0x000107c61180();
  lVar1 = *(long *)(unaff_x20 + _DAT_112ffbe40);
  if (lVar1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      if (param_1 != 0) {
        func_0x000107c615f0(param_1);
        lVar2 = lVar1;
        func_0x000107c4e864();
        func_0x000107c61180();
        if (lVar2 != 0) {
          func_0x000107c4d06c();
          func_0x000107c61180();
          lVar1 = lVar2;
        }
      }
      goto code_r0x000107c615e8;
    }
  }
  func_0x000107c615f0(*(undefined8 *)(unaff_x20 + _DAT_112ffbe38));
  lVar1 = param_1;
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 103c5bf10; end: 103c5c1cf;  */

/* WARNING: Possible PIC construction at 0x000103c5bfb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c5c0c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c5c158: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c5c1bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c5bfd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c5bff4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c5c1c0) */
/* WARNING: Removing unreachable block (ram,0x000103c5c15c) */
/* WARNING: Removing unreachable block (ram,0x000103c5c0cc) */
/* WARNING: Removing unreachable block (ram,0x000103c5bfbc) */
/* WARNING: Removing unreachable block (ram,0x000103c5bff8) */
/* WARNING: Removing unreachable block (ram,0x000103c5c174) */
/* WARNING: Removing unreachable block (ram,0x000103c5bffc) */
/* WARNING: Removing unreachable block (ram,0x000103c5c194) */
/* WARNING: Removing unreachable block (ram,0x000103c5c00c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c5bf10(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c41408();
  func_0x000107c61180();
  lVar1 = *(long *)(unaff_x20 + _DAT_112ffbe40);
  if (lVar1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      if (param_1 != 0) {
        func_0x000107c615f0(param_1);
        lVar2 = lVar1;
        func_0x000107c4e864();
        func_0x000107c61180();
        if (lVar2 != 0) {
          func_0x000107c4d06c();
          func_0x000107c61180();
          lVar1 = lVar2;
        }
      }
      goto code_r0x000107c615e8;
    }
  }
  func_0x000107c615f0(*(undefined8 *)(unaff_x20 + _DAT_112ffbe38));
  lVar1 = param_1;
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 103c5c1d0; end: 103c5c36b;  */

void FUN_103c5c1d0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  
  lVar7 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  puVar6 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar6 - extraout_x12;
  if (param_1 != 0) {
    uVar1 = param_1;
    puVar5 = PTR_s_respondsToSelector__11262c7e0;
    func_0x000107c61150(param_1,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_loadHTMLString_baseURL__1126047a0);
    if ((uVar1 & 1) != 0) {
      func_0x000107c615f0(param_1);
      func_0x000107c44f38(param_3);
      func_0x000107c61180();
      uVar2 = param_3;
      func_0x000107c5faec();
      func_0x000107c61170(param_3);
      lVar3 = 0;
      func_0x000107c5ede0();
      lVar9 = *(long *)(lVar3 + -8);
      (**(code **)(lVar9 + 0x38))(lVar7,1,1,lVar3);
      func_0x000107c5fadc(uVar2,puVar5);
      func_0x000100029394(lVar7,puVar6);
      puVar4 = puVar6;
      (**(code **)(lVar9 + 0x30))(puVar6,1,lVar3);
      puVar8 = (undefined1 *)0x0;
      if ((int)puVar4 != 1) {
        func_0x000107c5ed90();
        (**(code **)(lVar9 + 8))(puVar6,lVar3);
        puVar8 = puVar4;
      }
      func_0x000107c4b73c(param_1);
      func_0x000107c615e8(param_1);
      func_0x000107c6142c(puVar5);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(puVar8);
      func_0x0001000293e4(lVar7);
    }
  }
  return;
}



/* Entry: 103c5c36c; end: 103c5c3bb; -[_TtC31ValdiWebLauncherServiceProviderP33_2A5B2637615F6017F2E9D0FCA43EC5B616ValdiWebLauncher openHtmlWithHtmlRequest:] */

/* WARNING: Possible PIC construction at 0x000103c5c3a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c5c3a8) */

void FUN_103c5c36c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103c5beec(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103c5c3bc; end: 103c5c3c7; -[_TtC31ValdiWebLauncherServiceProviderP33_2A5B2637615F6017F2E9D0FCA43EC5B616ValdiWebLauncher pushToValdiMarshaller:] */

undefined8 FUN_103c5c3bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1a28;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  _objc_release(param_1);
  return param_3;
}



/* Entry: 103c5c3c8; end: 103c5c427; -[_TtC31ValdiWebLauncherServiceProviderP33_2A5B2637615F6017F2E9D0FCA43EC5B616ValdiWebLauncher init] */

void FUN_103c5c3c8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ValdiWebLauncherServiceProvider.ValdiWebLauncher",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c5c3f4);
  (*pcVar1)();
}



/* Entry: 103c5c428; end: 103c5c47f; -[_TtC31ValdiWebLauncherServiceProviderP33_2A5B2637615F6017F2E9D0FCA43EC5B616ValdiWebLauncher .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103c5c454: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c5c458) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c5c428(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ffbe38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ffbe40));
  return;
}



/* Entry: 103c5c480; end: 103c5c49f;  */

void FUN_103c5c480(void)

{
  func_0x000107c61168(&PTR_PTR_112949560);
  return;
}



/* Entry: 103c5c4a0; end: 103c5c4d3;  */

void FUN_103c5c4a0(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar7;
  long unaff_x20;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar8 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  puVar7 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)puVar7 - extraout_x12;
  if (param_1 != 0) {
    uVar1 = param_1;
    puVar5 = PTR_s_respondsToSelector__11262c7e0;
    func_0x000107c61150(param_1,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_loadHTMLString_baseURL__1126047a0);
    if ((uVar1 & 1) != 0) {
      func_0x000107c615f0(param_1);
      func_0x000107c44f38(uVar6);
      func_0x000107c61180();
      uVar2 = uVar6;
      func_0x000107c5faec();
      func_0x000107c61170(uVar6);
      lVar3 = 0;
      func_0x000107c5ede0();
      lVar10 = *(long *)(lVar3 + -8);
      (**(code **)(lVar10 + 0x38))(lVar8,1,1,lVar3);
      func_0x000107c5fadc(uVar2,puVar5);
      func_0x000100029394(lVar8,puVar7);
      puVar4 = puVar7;
      (**(code **)(lVar10 + 0x30))(puVar7,1,lVar3);
      puVar9 = (undefined1 *)0x0;
      if ((int)puVar4 != 1) {
        func_0x000107c5ed90();
        (**(code **)(lVar10 + 8))(puVar7,lVar3);
        puVar9 = puVar4;
      }
      func_0x000107c4b73c(param_1);
      func_0x000107c615e8(param_1);
      func_0x000107c6142c(puVar5);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(puVar9);
      func_0x0001000293e4(lVar8);
    }
  }
  return;
}



/* Entry: 103c5c4d4; end: 103c5c4fb;  */

void FUN_103c5c4d4(void)

{
  FUN_103c5c4fc();
  return;
}



/* Entry: 103c5c4fc; end: 103c5c587;  */

void FUN_103c5c4fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c610f8();
  uVar1 = uStack_38;
  func_0x00010017da58(uStack_38,param_3);
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 103c5c588; end: 103c5c5af;  */

void FUN_103c5c588(void)

{
  FUN_103c5c4fc();
  return;
}



/* Entry: 103c5c5b0; end: 103c5c5df;  */

undefined1  [16] FUN_103c5c5b0(void)

{
  return ZEXT816(0x1106ef418);
}



/* Entry: 103c5c5e0; end: 103c5c677; -[SimpleWebBrowserScope url] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c5c5e0(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar3;
  (**(code **)(lVar4 + 0x10))(puVar3,param_1 + _DAT_11380d180,lVar1);
  func_0x000107c5ed90();
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103c5c678; end: 103c5c697; -[SimpleWebBrowserScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c5c678(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_11380d188));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103c5c698; end: 103c5c707; -[SimpleWebBrowserScope injectionScripts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c5c698(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11380d190;
  func_0x000107c61428(param_1 + _DAT_11380d190,auStack_38,0,0);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  func_0x000104848f7c(0);
  uVar2 = uVar3;
  func_0x000107c61434(uVar3);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103c5c708; end: 103c5c777; -[SimpleWebBrowserScope setInjectionScripts:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c5c708(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar2 = 0;
  func_0x000104848f7c(0);
  func_0x000107c5fc54(param_3,uVar2);
  lVar1 = _DAT_11380d190;
  func_0x000107c61428(param_1 + _DAT_11380d190,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 103c5c778; end: 103c5c7bb; -[SimpleWebBrowserScope disableFullscreen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103c5c778(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11380d198;
  func_0x000107c61428(param_1 + _DAT_11380d198,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 103c5c7bc; end: 103c5c80b; -[SimpleWebBrowserScope setDisableFullscreen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c5c7bc(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11380d198;
  func_0x000107c61428(param_1 + _DAT_11380d198,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 103c5c80c; end: 103c5c853; -[SimpleWebBrowserScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c5c80c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11380d1a0;
  func_0x000107c61428(param_1 + _DAT_11380d1a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103c5c854; end: 103c5c8ab; -[SimpleWebBrowserScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c5c854(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11380d1a0;
  func_0x000107c61428(param_1 + _DAT_11380d1a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103c5c8ac; end: 103c5c93b; -[SimpleWebBrowserScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103c5c8ac(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_11380d180;
  lVar2 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_11380d188));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_11380d190));
  param_1 = param_1 + _DAT_11380d1a0;
  func_0x000107c61610();
  return param_1;
}


