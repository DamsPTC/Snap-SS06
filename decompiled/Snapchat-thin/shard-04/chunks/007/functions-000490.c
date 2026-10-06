/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1038350bc; end: 1038350c7;  */

void FUN_1038350bc(long *param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c3e060();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 1038350c8; end: 10383547f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038350c8(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113034ff0);
  uVar5 = *(undefined8 *)(param_3 + _DAT_113038550);
  uVar6 = *(undefined8 *)(param_8 + _DAT_112fa41f8);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = param_9;
  func_0x000107c4ae78();
  func_0x000107c61180();
  func_0x0001000d224c(auStack_88);
  func_0x0001000a8868(auStack_88,uStack_70);
  uVar3 = uStack_70;
  (**(code **)(lStack_68 + 0x40))(uStack_70,lStack_68);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_9);
  lVar4 = 0x112fa15c0;
  func_0x0001000285a8(0x112fa15c0,&UNK_10dc15cb0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x90) = 0;
  *(undefined8 *)(lVar4 + 0x98) = 0;
  *(undefined8 *)(lVar4 + 0x10) = uVar1;
  *(undefined8 *)(lVar4 + 0x18) = uVar5;
  *(undefined8 *)(lVar4 + 0x20) = param_4;
  *(undefined8 *)(lVar4 + 0x28) = param_5;
  *(undefined8 *)(lVar4 + 0x30) = param_6;
  *(undefined8 *)(lVar4 + 0x38) = param_7;
  *(undefined8 *)(lVar4 + 0x40) = uVar6;
  *(undefined8 *)(lVar4 + 0x48) = uVar2;
  *(undefined8 *)(lVar4 + 0x50) = param_10;
  *(undefined8 *)(lVar4 + 0x58) = param_11;
  *(code **)(lVar4 + 0x60) = FUN_103835480;
  *(undefined8 *)(lVar4 + 0x68) = 0;
  *(undefined8 *)(lVar4 + 0x70) = 0x1038354ac;
  *(undefined8 *)(lVar4 + 0x78) = 0;
  *(undefined8 *)(lVar4 + 0x80) = param_12;
  *(byte *)(lVar4 + 0x88) = (byte)uVar3 & 1;
  func_0x0001000834e4(auStack_88);
  *(long *)(unaff_x20 + 0x10) = lVar4;
  return unaff_x20;
}



/* Entry: 103835480; end: 10383552f;  */

void FUN_103835480(void)

{
  func_0x000107c610f8(PTR_PTR_1126ad7b0);
                    /* WARNING: Could not recover jumptable at 0x00010bff3ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 103835530; end: 103835553;  */

void FUN_103835530(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103835554; end: 103835577;  */

void FUN_103835554(void)

{
  func_0x00010382a0ac();
  return;
}



/* Entry: 103835578; end: 10383557f;  */

undefined8 FUN_103835578(void)

{
  return 0;
}



/* Entry: 103835580; end: 10383559f;  */

void FUN_103835580(void)

{
  func_0x000107c61168(&PTR_PTR_112fa1608);
  return;
}



/* Entry: 1038355a0; end: 103836d8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038355a0(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,long param_7,long param_8,undefined8 param_9,long param_10)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  code *pcVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 *puVar31;
  long lVar32;
  long lVar33;
  code *pcVar34;
  code *pcVar35;
  code *pcVar36;
  undefined *puVar37;
  code *pcVar38;
  undefined *puVar39;
  long lVar40;
  undefined *puVar41;
  undefined *puVar42;
  code *pcVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  long lVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined *puVar51;
  long lVar52;
  long lVar53;
  undefined8 uVar54;
  undefined *puVar55;
  long unaff_x20;
  long lVar56;
  undefined8 uVar57;
  undefined *puVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined *puStack_510;
  undefined8 uStack_420;
  undefined1 auStack_328 [40];
  undefined *apuStack_300 [3];
  undefined *puStack_2e8;
  undefined **ppuStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long *aplStack_2c8 [3];
  long lStack_2b0;
  undefined **ppuStack_2a8;
  undefined8 uStack_2a0;
  undefined1 uStack_298;
  undefined8 uStack_288;
  undefined **ppuStack_280;
  undefined8 uStack_278;
  char cStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  long lStack_248;
  undefined1 uStack_240;
  code *pcStack_238;
  code *pcStack_230;
  undefined1 uStack_228;
  undefined1 auStack_220 [88];
  long lStack_1c8;
  undefined1 uStack_1c0;
  undefined8 uStack_1b8;
  undefined **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined1 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x000107c613fc();
  uVar2 = param_6;
  func_0x000107c3e0a8();
  func_0x000107c61180();
  lVar3 = *(long *)(param_7 + _DAT_112f9fbc8);
  func_0x000107c61174();
  uVar4 = param_5;
  func_0x000107c4ae78();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(param_8 + _DAT_11307cf58);
  lVar53 = *(long *)(param_10 + _DAT_112fe94e8);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x0001000d224c(&lStack_1c8);
  func_0x0001000a8868(&lStack_1c8,ppuStack_1b0);
  ppuVar12 = ppuStack_1b0;
  (**(code **)((long)puStack_1a8 + 0x40))(ppuStack_1b0,puStack_1a8);
  func_0x0001000834e4(&lStack_1c8);
  if ((((ulong)ppuVar12 & 1) != 0) && (lVar6 = *(long *)(param_2 + _DAT_113071fd0), lVar6 != 0)) {
    func_0x000107c61174();
    lVar7 = lVar6;
    func_0x000107c42548();
    if ((int)lVar7 != 0) {
      lVar7 = 0;
      func_0x000103822894();
      func_0x000107c61534();
      *(long *)(lVar7 + 0x10) = param_2;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(undefined1 *)(lVar7 + 0x20) = 0;
      uVar54 = *(undefined8 *)(param_2 + _DAT_113071fc8);
      func_0x000107c61174();
      func_0x000107c3e6c8();
      func_0x000107c61180();
      uVar8 = uVar54;
      func_0x000107c5b3f0();
      func_0x000107c61170(uVar54);
      FUN_103822094();
      plVar9 = (long *)(param_3 + _DAT_112fa2d40);
      func_0x0001000a8868(plVar9,plVar9[3]);
      uVar50 = *(undefined8 *)(param_1 + _DAT_112fa56f8);
      puVar58 = &UNK_10d923f50;
      func_0x0001000285a8(0x112d5d810);
      uVar54 = uVar4;
      func_0x000107c4ac68();
      func_0x000107c61180();
      uVar10 = uVar54;
      func_0x0001000bda74();
      func_0x000107c61170(uVar54);
      uVar11 = uVar4;
      func_0x000107c4aeb4();
      func_0x000107c61180();
      ppuVar12 = &PTR____CFConstantStringClassReference_110f30b98;
      func_0x000107c5faec();
      func_0x0001000285a8(0x112d382e8,&UNK_10d902020);
      func_0x000107c61534();
      pcVar13 = FUN_103840f7c;
      func_0x0001000bdd8c(FUN_103840f7c,0);
      puVar55 = &UNK_11069c580;
      func_0x000107c613fc(&UNK_11069c580,0x18,7);
      func_0x000107c61614(puVar55 + 0x10,uVar5);
      puVar14 = &UNK_11069c5a8;
      func_0x000107c613fc(&UNK_11069c5a8,0x18,7);
      *(undefined8 *)(puVar14 + 0x10) = param_4;
      func_0x0001000285a8(0x112fa03c8,&UNK_10dc15780);
      func_0x000107c61534();
      func_0x000107c61174();
      uVar54 = 0x103836ed8;
      func_0x0001000bdd8c(0x103836ed8,puVar14);
      uStack_140 = 0;
      uStack_148 = 0;
      uStack_130 = 0;
      uStack_138 = 0;
      uStack_128 = 0;
      lStack_1c8 = 1;
      uStack_1c0 = 1;
      uStack_1b8 = 7;
      uStack_190 = 1;
      pcStack_188 = FUN_103836ed0;
      uStack_170 = 0;
      uStack_168 = 0;
      uStack_158 = 0;
      uStack_160 = 1;
      uStack_150 = 0;
      lVar56 = *plVar9;
      uVar16 = *(undefined8 *)(lVar56 + 0x10);
      lVar17 = *(long *)(lVar56 + 0x18);
      lVar7 = *(long *)(lVar56 + 0x20);
      puVar14 = *(undefined **)(lVar56 + 0x28);
      uVar18 = *(undefined8 *)(lVar56 + 0x30);
      uVar19 = *(undefined8 *)(lVar56 + 0x38);
      uVar20 = *(undefined8 *)(lVar56 + 0x40);
      uVar21 = *(undefined8 *)(lVar56 + 0x48);
      uVar22 = *(undefined8 *)(lVar56 + 0x50);
      uVar23 = *(undefined8 *)(lVar56 + 0x58);
      uVar24 = *(undefined8 *)(lVar56 + 0x60);
      lVar25 = *(long *)(lVar56 + 0x68);
      puVar51 = *(undefined **)(lVar56 + 0x70);
      ppuStack_1b0 = ppuVar12;
      puStack_1a8 = puVar58;
      uStack_1a0 = uVar8;
      pcStack_198 = pcVar13;
      puStack_180 = puVar55;
      uStack_178 = uVar54;
      FUN_103825850(&lStack_1c8,&uStack_2a0);
      lVar52 = *(long *)(lVar56 + 0x78);
      lVar15 = 0;
      func_0x00010384c030();
      lVar56 = lVar15;
      func_0x000107c613fc();
      func_0x000107c6157c(uVar8);
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c6157c(uVar10);
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x0001000d224c(&uStack_98);
      uVar54 = 0;
      uVar45 = 0;
      uVar46 = 0;
      lVar48 = 0;
      uVar47 = 0;
      uVar49 = 0;
      if ((char)uStack_98 == '\x01') {
        puVar58 = puVar14;
        func_0x000107c4b100(puVar14);
        func_0x000107c61180();
        FUN_1038233a8(&uStack_f8);
        func_0x000107c61170(puVar58);
        uVar54 = uStack_e0;
        uVar45 = uStack_d8;
        uVar46 = uStack_f8;
        lVar48 = lStack_f0;
        uVar47 = uStack_e8;
        uVar49 = uStack_d0;
      }
      uStack_c8 = uVar46;
      lStack_c0 = lVar48;
      uStack_b8 = uVar47;
      uStack_b0 = uVar54;
      uStack_a8 = uVar45;
      uStack_a0 = uVar49;
      if (cStack_268 == '\x01') {
        puVar58 = puVar14;
        func_0x000107c4b100();
        func_0x000107c61180();
        puVar26 = puVar58;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(puVar58);
        puVar55 = puVar26;
        if (puVar26 != (undefined *)0x0) {
          puVar58 = puVar26;
          func_0x000107c4daf8();
          func_0x000107c615e8(puVar26);
          if ((int)puVar58 == 0) {
            puVar55 = (undefined *)0x0;
            puVar58 = puVar26;
          }
          else {
            puVar55 = puVar51;
            FUN_10384c71c();
            puVar58 = puVar55;
            if (puVar55 != (undefined *)0x0) {
              func_0x000107c615f0(puVar55);
              func_0x000107c5bc1c();
            }
          }
        }
        *(undefined **)(lVar56 + 0x28) = puVar55;
        uStack_420 = uStack_278;
        if (puVar55 == (undefined *)0x0) {
          FUN_103822e30();
        }
        else {
          puVar58 = puVar55;
          func_0x000107c615f0(puVar55);
          FUN_103823038();
        }
        func_0x000107c6157c();
        func_0x0001000285a8(0x112da9c48,&UNK_10dc15350);
        uVar27 = *(undefined8 *)(lVar7 + _DAT_113080ad0);
        func_0x0001000bda74(uVar27);
        func_0x000107c6157c();
        uVar29 = uStack_260;
        uVar30 = uStack_258;
        uVar1 = uStack_228;
      }
      else {
        puVar55 = (undefined *)0x0;
        uVar27 = 0;
        puVar58 = (undefined *)0x0;
        *(undefined8 *)(lVar56 + 0x28) = 0;
        uStack_420 = uStack_278;
        uVar29 = uStack_260;
        uVar30 = uStack_258;
        uVar1 = uStack_228;
      }
      if (lStack_250 == 0) {
        uVar57 = 0;
      }
      else {
        func_0x0001000d224c(&uStack_98);
        uVar57 = uStack_98;
      }
      FUN_1038796f4(0);
      func_0x000107c610f8();
      func_0x000107c6157c(uVar10);
      func_0x000107c6157c(uVar30);
      func_0x00010382597c(uVar46,lVar48,uVar47,uVar54,uVar45,uVar49);
      func_0x000107c6157c(uStack_420);
      uVar28 = uVar10;
      func_0x000103878a74(uVar10,uVar29,uVar30,uStack_420,puVar58,&uStack_c8,uVar27,uVar57,uVar1);
      func_0x000107c615e8(puVar55);
      func_0x000107c61574(uVar27);
      func_0x000107c61574(puVar58);
      uVar29 = uVar16;
      func_0x000107c41284();
      func_0x000107c61180();
      uVar30 = uVar29;
      func_0x000107c4f750();
      func_0x000107c61180();
      func_0x000107c615e8(uVar29);
      uVar29 = uVar18;
      func_0x000107c4b2f8();
      func_0x000107c61180();
      if (lStack_248 == 0) {
        puVar58 = &UNK_11069c5d0;
        func_0x000107c613fc(&UNK_11069c5d0,0x18,7);
        *(undefined8 *)(puVar58 + 0x10) = uVar29;
        func_0x0001000285a8(0x112fa03d0,&UNK_10dc15ff0);
        func_0x000107c613fc();
        pcVar13 = (code *)0x103836ee0;
        func_0x0001000bdd8c(0x103836ee0,puVar58);
      }
      else {
        func_0x000107c6157c(lStack_248);
        uVar27 = 0x112fa0410;
        func_0x0001000285a8(0x112fa0410,&UNK_10dc15370);
        pcVar13 = FUN_10384bf80;
        func_0x0001000cb480(FUN_10384bf80,0,uVar27);
        func_0x000107c61574(lStack_248);
        func_0x000107c61170(uVar29);
      }
      puVar58 = &UNK_11069c5f8;
      func_0x000107c613fc(&UNK_11069c5f8,0x18,7);
      func_0x000107c61614(puVar58 + 0x10,uVar2);
      puVar26 = &UNK_11069c620;
      func_0x000107c613fc(&UNK_11069c620,0x28,7);
      *(undefined **)(puVar26 + 0x10) = puVar58;
      *(code **)(puVar26 + 0x18) = pcVar13;
      *(undefined8 *)(puVar26 + 0x20) = uVar11;
      func_0x0001000285a8(0x112fa03d8,&UNK_10dc15310);
      func_0x000107c613fc();
      func_0x000107c61174();
      uVar29 = 0x103836ee8;
      func_0x0001000bdd8c(0x103836ee8,puVar26);
      puVar31 = (undefined8 *)0x0;
      if (lVar48 != 0) {
        uStack_98 = uVar46;
        lStack_90 = lVar48;
        uStack_88 = uVar47;
        uStack_80 = uVar54;
        uStack_78 = uVar45;
        uStack_70 = uVar49;
        FUN_103883920(0);
        func_0x000107c610f8();
        uVar27 = uVar11;
        func_0x000107c61174(uVar11);
        func_0x000107c61434(lVar48);
        func_0x000107c61434(uVar54);
        func_0x000107c61434(uVar49);
        puVar31 = &uStack_98;
        FUN_1038831fc(puVar31,uVar27);
      }
      puVar58 = &UNK_11069c5f8;
      func_0x000107c613fc(&UNK_11069c5f8,0x18,7);
      func_0x000107c61614(puVar58 + 0x10,uVar2);
      func_0x0001000285a8(0x112fa03e0,&UNK_10dc15a80);
      func_0x000107c613fc();
      uVar27 = 0x103836ef4;
      func_0x0001000bdd8c(0x103836ef4,puVar58);
      uVar57 = *(undefined8 *)(lVar53 + _DAT_112fe95f8);
      uVar59 = *(undefined8 *)(lVar3 + _DAT_112f9f6e0);
      lVar32 = 0;
      FUN_10381fe7c();
      lVar33 = lVar32;
      func_0x000107c610f8();
      *(undefined8 *)(lVar33 + _DAT_112f9ffa0) = 0;
      *(undefined8 *)(lVar33 + _DAT_112f9ffa8) = 1;
      *(undefined8 *)(lVar33 + _DAT_112f9ffb0) = 0;
      *(undefined8 *)(lVar33 + _DAT_112f9ff88) = uVar57;
      *(undefined8 *)(lVar33 + _DAT_112f9ff90) = uVar27;
      *(undefined8 *)(lVar33 + _DAT_112f9ff98) = uVar59;
      puVar58 = PTR_s_init_1125d9248;
      lStack_2d8 = lVar33;
      lStack_2d0 = lVar32;
      func_0x000107c6157c(uVar57);
      func_0x000107c6157c(uVar27);
      func_0x000107c6157c(uVar59);
      plVar9 = &lStack_2d8;
      func_0x000107c61154(plVar9,puVar58);
      ppuStack_2a8 = &PTR_DAT_11069a800;
      lStack_2b0 = lVar32;
      func_0x000107c61574(uVar27);
      uVar27 = *(undefined8 *)(lVar17 + _DAT_113071300);
      aplStack_2c8[0] = plVar9;
      func_0x000103836f58(aplStack_2c8,apuStack_300);
      puVar58 = &UNK_11069c648;
      func_0x000107c613fc(&UNK_11069c648,0x62,7);
      *(undefined8 *)(puVar58 + 0x10) = uVar27;
      *(undefined8 *)(puVar58 + 0x18) = uVar29;
      func_0x000100d5fc20(apuStack_300,puVar58 + 0x20);
      *(undefined8 *)(puVar58 + 0x48) = uVar30;
      *(undefined8 **)(puVar58 + 0x50) = puVar31;
      *(undefined8 *)(puVar58 + 0x58) = uStack_2a0;
      puVar58[0x60] = uStack_298;
      puVar58[0x61] = uStack_240;
      func_0x0001000285a8(0x112fa03e8,&UNK_10dc15320);
      func_0x000107c613fc();
      func_0x000107c61174(uVar27);
      func_0x000107c6157c(uVar29);
      func_0x000107c61174();
      func_0x000107c61174();
      puVar26 = (undefined *)0x103836efc;
      func_0x0001000bdd8c(0x103836efc,puVar58);
      pcVar34 = pcStack_230;
      pcVar13 = pcStack_238;
      if (pcStack_238 == (code *)0x1) {
        func_0x0001000285a8(0x112f6cf68,&UNK_10dbcadf0);
        uVar27 = uVar22;
        func_0x000107c3ee24(uVar22);
        func_0x000107c61180();
        uVar57 = uVar27;
        func_0x0001000bda74();
        func_0x000107c61170(uVar27);
        uVar27 = 0x112d3b7d8;
        func_0x0001000285a8(0x112d3b7d8,&UNK_10d920690);
        pcVar13 = FUN_10384c61c;
        func_0x0001000cb480(FUN_10384c61c,0,uVar27);
        pcVar34 = FUN_10384c65c;
        func_0x0001000cb480(FUN_10384c65c,0,uVar27);
        func_0x000107c61574(uVar57);
      }
      func_0x0001000285a8(0x112e5b730,&UNK_10dc15a90);
      FUN_1038259d8(pcStack_238,pcStack_230);
      uVar27 = uVar20;
      func_0x000107c4c974(uVar20);
      func_0x000107c61180();
      uVar57 = uVar27;
      func_0x0001000bda74();
      func_0x000107c61170(uVar27);
      uVar27 = 0x112e5b738;
      func_0x0001000285a8(0x112e5b738,&UNK_10da61720);
      pcVar35 = FUN_10384b8d8;
      func_0x0001000cb480(FUN_10384b8d8,0,uVar27);
      func_0x000107c61574(uVar57);
      pcVar36 = FUN_10384b914;
      func_0x0001000cb480(FUN_10384b914,0,&UNK_11077ec38);
      puVar58 = &UNK_11069c670;
      func_0x000107c613fc(&UNK_11069c670,0x18,7);
      func_0x000107c61614(puVar58 + 0x10,uVar19);
      func_0x0001000285a8(0x112d53a70,&UNK_10d91a680);
      func_0x000107c613fc();
      uVar27 = 0x103836f00;
      func_0x0001000bdd8c(0x103836f00,puVar58);
      puVar58 = puVar14;
      func_0x000107c4b100();
      func_0x000107c61180();
      puVar37 = puVar58;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(puVar58);
      if (puVar37 == (undefined *)0x0) {
        puStack_510 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        puVar58 = puVar37;
        func_0x000107c5b458();
        func_0x000107c61180();
        puStack_510 = puVar58;
        func_0x000107c5fc54();
        func_0x000107c61170(puVar58);
      }
      func_0x0001000285a8(0x112d4f8d0,&UNK_10dc15330);
      uVar57 = uVar23;
      func_0x000107c5c360(uVar23);
      func_0x000107c61180();
      uVar59 = uVar57;
      func_0x0001000bda74();
      func_0x000107c61170(uVar57);
      uVar57 = 0x112d5ba30;
      func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
      pcVar38 = FUN_10384ba24;
      func_0x0001000cb480(FUN_10384ba24,0,uVar57);
      func_0x000107c61574(uVar59);
      puVar58 = &UNK_11069c698;
      func_0x000107c613fc(&UNK_11069c698,0x20,7);
      *(undefined8 *)(puVar58 + 0x10) = uVar24;
      *(undefined8 *)(puVar58 + 0x18) = uVar21;
      func_0x0001000285a8(0x112fa03f0,&UNK_10dc15340);
      func_0x000107c613fc();
      func_0x000107c61174();
      func_0x000107c61174();
      uVar57 = 0x103836f08;
      func_0x0001000bdd8c(0x103836f08,puVar58);
      puVar39 = (undefined *)0x0;
      FUN_1038806d8();
      puVar58 = puVar39;
      func_0x000107c613fc();
      func_0x000103836f10(auStack_220,apuStack_300,0x112fa03f8,&UNK_10dc15aa0);
      if (puStack_2e8 == (undefined *)0x0) {
        FUN_103819ed4();
      }
      else {
        func_0x000100d5fc20(apuStack_300,auStack_328);
        lVar33 = 0x112fa0408;
        func_0x0001000285a8(0x112fa0408,&UNK_10dc15360);
        func_0x000107c613fc();
        *(undefined8 *)(lVar33 + 0x18) = 2;
        *(undefined8 *)(lVar33 + 0x10) = 1;
        *(undefined8 *)(lVar33 + 0x20) = uStack_288;
        *(undefined ***)(lVar33 + 0x28) = ppuStack_280;
        func_0x000103836f58(auStack_328,lVar33 + 0x30);
        func_0x000107c61434(ppuStack_280);
        FUN_103819ed4();
        func_0x000107c61588(lVar33);
        FUN_103837030((undefined8 *)(lVar33 + 0x20),0x112f9f310,&UNK_10dc15ac0);
        func_0x000107c6145c(lVar33,0x20,7);
        func_0x0001000834e4(auStack_328);
      }
      lVar33 = lVar25;
      func_0x000107c4b3b8();
      func_0x000107c61180();
      lVar32 = lVar33;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar33);
      func_0x0001000285a8(0x112eb17c0,&UNK_10dac6140);
      if (lVar32 == 0) {
        puVar42 = PTR__OBJC_CLASS___NSSet_1126ae870;
        func_0x000107c610f8();
        func_0x000107c453e4();
        ppuVar12 = apuStack_300;
        apuStack_300[0] = puVar42;
        func_0x000100854cb0(ppuVar12);
        func_0x000107c61170(puVar42);
      }
      else {
        lVar33 = lVar32;
        func_0x000107c5006c(lVar32);
        func_0x000107c61180();
        lVar40 = lVar33;
        func_0x0001000b637c();
        func_0x000107c61170(lVar33);
        func_0x0001000d224c(apuStack_300);
        puVar42 = apuStack_300[0];
        func_0x000100471e0c(apuStack_300[0],1);
        func_0x000107c61574(lVar40);
        func_0x000107c615e8(apuStack_300[0]);
        puVar41 = PTR__OBJC_CLASS___NSSet_1126ae870;
        func_0x000107c610f8();
        func_0x000107c453e4();
        ppuVar12 = apuStack_300;
        apuStack_300[0] = puVar41;
        func_0x0001006c71a4(ppuVar12);
        func_0x000107c61170(puVar41);
        func_0x000107c615e8(lVar32);
        func_0x000107c61574(puVar42);
      }
      func_0x000107c61434(ppuStack_280);
      func_0x000107c6157c(ppuVar12);
      func_0x000107c6157c(pcVar35);
      func_0x000107c6157c(pcVar38);
      func_0x000107c6157c(pcVar36);
      func_0x000107c6157c(uVar27);
      func_0x000107c6157c(uVar57);
      pcVar43 = FUN_10384bbe4;
      func_0x0001000cb480(FUN_10384bbe4,0,&UNK_11077ebd0);
      ppuStack_2e0 = &PTR_DAT_1106a0c40;
      apuStack_300[0] = puVar58;
      puStack_2e8 = puVar39;
      func_0x000107c6157c(puVar58);
      uVar59 = 0x10384bc2c;
      func_0x0001000cb480(0x10384bc2c,0,PTR___sSbN_11034dd40);
      uVar60 = *(undefined8 *)(lVar52 + _DAT_112fa6450);
      uVar44 = 0;
      FUN_10388ac54();
      func_0x000107c613fc();
      func_0x000107c61174();
      func_0x00010382597c(uVar46,lVar48,uVar47,uVar54,uVar45,uVar49);
      func_0x000107c6157c(pcVar34);
      func_0x000107c6157c(uStack_420);
      func_0x000107c61174();
      func_0x000107c6157c(uVar60);
      func_0x000107c6157c(puVar26);
      func_0x000107c6157c(pcVar13);
      puVar39 = puVar26;
      func_0x000103888844(puVar26,pcVar35,uVar30,puStack_510,uVar11,pcVar13,pcVar34,ppuVar12,pcVar38
                          ,pcVar36,uVar27,uVar57,uStack_288,ppuStack_280,pcVar43,apuStack_300,uVar59
                          ,uStack_420,&uStack_c8,uVar60,uVar1);
      ppuStack_2e0 = &PTR_DAT_1106a1598;
      puStack_2e8 = (undefined *)uVar44;
      func_0x000107c61574(puVar58);
      func_0x000107c61574(uVar57);
      func_0x000107c61574(uVar27);
      func_0x000107c61574(pcVar36);
      func_0x000107c61574(pcVar38);
      func_0x000107c61574(pcVar35);
      func_0x000107c615e8(puVar37);
      func_0x000107c61574(ppuVar12);
      func_0x000103825a6c(uVar46,lVar48,uVar47,uVar54,uVar45,uVar49);
      apuStack_300[0] = puVar39;
      func_0x0001000285a8(0x112fa0400,&UNK_10dc15ab0);
      uVar54 = uVar30;
      func_0x000107c3f6e8();
      func_0x000107c61180();
      uVar45 = uVar54;
      func_0x0001000bda74();
      func_0x000107c61170(uVar54);
      func_0x0001000285a8(0x112da9c48,&UNK_10dc15350);
      uVar46 = *(undefined8 *)(lVar7 + _DAT_113080ad0);
      func_0x000107c61174(uVar46);
      uVar54 = uVar46;
      func_0x0001000bda74();
      func_0x000107c61170(uVar46);
      func_0x000103836f58(apuStack_300,auStack_328);
      uVar47 = 0;
      FUN_103872568();
      uVar46 = uVar47;
      func_0x000107c610f8();
      FUN_1038714fc(uVar45,uVar54,auStack_328,uVar46);
      *(undefined8 *)(lVar56 + 0x10) = uVar50;
      *(undefined8 *)(lVar56 + 0x18) = uVar45;
      func_0x0001000285a8(0x112f421e0,&UNK_10db8f110);
      func_0x000107c61174(uVar50);
      func_0x000107c61174(uVar45);
      uVar54 = uVar2;
      func_0x000107c3e060();
      func_0x000107c61180();
      uVar46 = uVar54;
      func_0x0001000bda74();
      func_0x000107c61170();
      FUN_1038714a4();
      lVar48 = 0;
      func_0x00010384cca8();
      func_0x000107c613fc();
      uVar49 = 0;
      func_0x0001005f60b4();
      func_0x000107c613fc();
      func_0x0001005f60d4();
      func_0x000107c61170(uVar28);
      func_0x000107c61170(uVar11);
      func_0x000107c61170(puVar31);
      func_0x000107c61574(uVar29);
      func_0x000107c61170(uVar30);
      func_0x000107c61170(uVar24);
      func_0x000107c61574(pcVar34);
      func_0x000107c61574(pcVar13);
      func_0x000107c61170(uVar50);
      func_0x000107c61170(uVar45);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar53);
      func_0x000107c61170(lVar17);
      func_0x000107c61170(uVar21);
      func_0x000107c61170(uVar19);
      func_0x000107c61170(lVar52);
      func_0x000107c61170(uVar16);
      func_0x000107c61170(puVar14);
      func_0x000107c61170(uVar18);
      func_0x000107c61170(uVar20);
      func_0x000107c61170(uVar22);
      func_0x000107c61170(uVar23);
      func_0x000107c61170(lVar25);
      func_0x000107c61170(puVar51);
      func_0x000107c615e8(puVar55);
      *(undefined8 *)(lVar48 + 0x10) = uVar46;
      *(undefined8 *)(lVar48 + 0x18) = uVar54;
      *(undefined **)(lVar48 + 0x20) = puVar26;
      *(undefined8 *)(lVar48 + 0x28) = uVar49;
      func_0x0001000834e4(apuStack_300);
      func_0x0001000834e4(aplStack_2c8);
      func_0x000103825aa8(&uStack_2a0);
      *(long *)(lVar56 + 0x20) = lVar48;
      func_0x000107c61574(uVar10);
      *(long *)(unaff_x20 + 0x28) = lVar15;
      *(undefined ***)(unaff_x20 + 0x30) = &PTR_DAT_11069df40;
      func_0x000107c61574(uVar10);
      func_0x000107c61170(uVar11);
      *(long *)(unaff_x20 + 0x10) = lVar56;
      func_0x000103825aa8(&lStack_1c8);
      func_0x000103836f10((long *)(unaff_x20 + 0x10),&lStack_1c8,0x112fa0bd0,&UNK_10dc15d00);
      if (ppuStack_1b0 != (undefined **)0x0) {
        plVar9 = &lStack_1c8;
        func_0x0001000a8868();
        lVar7 = *plVar9;
        FUN_103871654();
        uVar54 = *(undefined8 *)(lVar7 + 0x10);
        uVar16 = *(undefined8 *)(lVar7 + 0x18);
        ppuStack_280 = &PTR_DAT_11069f880;
        uStack_2a0 = uVar16;
        uStack_288 = uVar47;
        FUN_10388af40(0);
        func_0x000107c610f8();
        func_0x000107c61174(uVar16);
        puVar31 = &uStack_2a0;
        func_0x00010388ae60(puVar31);
        func_0x000107c4fba8(uVar54);
        func_0x000107c61170(puVar31);
        FUN_10384c9b0();
        func_0x000107c61170(param_7);
        func_0x000107c61170(param_8);
        func_0x000107c61170(param_10);
        func_0x000107c61170(param_9);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_1);
        func_0x000107c61170(uVar2);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(param_4);
        func_0x000107c61170(param_5);
        func_0x000107c61170(param_6);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(lVar53);
        func_0x000107c61170(lVar6);
        func_0x000107c61170(param_2);
        func_0x000107c61170(param_2);
        func_0x000107c61574(uVar8);
        func_0x0001000834e4(&lStack_1c8);
        return unaff_x20;
      }
      func_0x000107c61170(param_7);
      func_0x000107c61170(param_8);
      func_0x000107c61170(param_10);
      func_0x000107c61170(param_9);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_1);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_5);
      func_0x000107c61170(param_6);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(lVar53);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_2);
      func_0x000107c61574(uVar8);
      FUN_103837030(&lStack_1c8,0x112fa0bd0,&UNK_10dc15d00);
      return unaff_x20;
    }
    func_0x000107c61170(lVar6);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar53);
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  return unaff_x20;
}



/* Entry: 103836d8c; end: 103836e73;  */

undefined8 FUN_103836d8c(void)

{
  long unaff_x20;
  undefined1 auStack_80 [24];
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  long lStack_40;
  
  FUN_103836f10(unaff_x20 + 0x10,auStack_58,0x112fa0bd0,&UNK_10dc15d00);
  if (lStack_40 == 0) {
    FUN_103837030(auStack_58,0x112fa0bd0,&UNK_10dc15d00);
  }
  else {
    func_0x0001000a8868();
    func_0x000100c82230();
    func_0x000104875e28(auStack_80);
    if (lStack_68 == 0) {
      FUN_103837030(auStack_80,0x112fa0418,&UNK_10dc15790);
    }
    else {
      func_0x0001000a8868(auStack_80,lStack_68);
      (**(code **)(lStack_60 + 0x30))(lStack_68,lStack_60);
      func_0x0001000834e4(auStack_80);
    }
    func_0x0001000834e4(auStack_58);
  }
  return 0;
}



/* Entry: 103836e74; end: 103836ea7;  */

void FUN_103836e74(void)

{
  long unaff_x20;
  
  FUN_103837030(unaff_x20 + 0x10,0x112fa0bd0,&UNK_10dc15d00);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103836ea8; end: 103836eab;  */

void FUN_103836ea8(void)

{
  return;
}



/* Entry: 103836eac; end: 103836ecf;  */

undefined8 FUN_103836eac(void)

{
  FUN_103836d8c();
  return 0;
}



/* Entry: 103836ed0; end: 103836f0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103836ed0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_11307d050);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    lVar1 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c40f70(lVar1);
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
      func_0x000107c431f4(lVar2);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 103836f10; end: 103836f9b;  */

undefined8 FUN_103836f10(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103836f9c; end: 103837013;  */

void FUN_103836f9c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103837014; end: 10383702f;  */

void FUN_103837014(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 auStack_88 [40];
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x60);
  uVar4 = *(undefined1 *)(unaff_x20 + 0x61);
  uVar6 = 0x112f9f1c8;
  func_0x0001000285a8(0x112f9f1c8,&UNK_10dc14750);
  func_0x0001000bda74(uVar5,uVar6);
  FUN_10384c884(unaff_x20 + 0x20,auStack_88);
  uVar6 = 0;
  FUN_1038746d0();
  func_0x000107c610f8();
  func_0x000107c615f0(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c61174(uVar7);
  func_0x000103872c28(uVar5,uVar1,auStack_88,uVar7,uVar2,uVar8,uVar3,uVar4);
  param_1[3] = uVar6;
  param_1[4] = &PTR_DAT_11069fa20;
  *param_1 = uVar5;
  return;
}



/* Entry: 103837030; end: 10383706f;  */

undefined8 FUN_103837030(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103837070; end: 10383708f;  */

void FUN_103837070(void)

{
  func_0x000107c61168(&PTR_PTR_112fa16a8);
  return;
}



/* Entry: 103837090; end: 10383824f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103837090(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8,long param_9,
                  long param_10)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined *apuStack_140 [4];
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  
  uStack_c0 = param_4;
  lStack_b0 = param_6;
  uStack_a8 = param_8;
  lStack_a0 = param_5;
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  uVar2 = param_2;
  lStack_b8 = unaff_x20;
  func_0x000107c3e0a8();
  func_0x000107c61180();
  func_0x0001000d224c(&puStack_98);
  ppuVar12 = ppuStack_78;
  puVar3 = puStack_80;
  func_0x0001000a8868(&puStack_98,puStack_80);
  (**(code **)((long)ppuVar12 + 0x40))(puVar3,ppuVar12);
  func_0x0001000834e4(&puStack_98);
  lVar8 = lStack_a0;
  lVar1 = lStack_b0;
  if (((ulong)puVar3 & 1) == 0) {
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(uStack_c0);
    func_0x000107c61170(lStack_a0);
    func_0x000107c61170(lStack_b0);
    func_0x000107c61170(uStack_a8);
  }
  else {
    uVar4 = *(ulong *)(param_1 + _DAT_113071fd0);
    uStack_d8 = param_7;
    uStack_d0 = uVar2;
    uStack_c8 = param_3;
    if (uVar4 != 0) {
      func_0x000107c61174();
      uVar5 = uVar4;
      func_0x000107c42548();
      if ((uVar5 & 1) != 0) {
        lVar16 = *(long *)(param_9 + _DAT_1130818e8);
        lVar20 = *(long *)(param_10 + _DAT_112fa4158);
        lVar6 = 0;
        uStack_f8 = param_2;
        uStack_f0 = uVar4;
        lStack_e8 = param_1;
        FUN_103842094();
        func_0x000107c613fc();
        *(undefined8 *)(lVar6 + 0x10) = 0;
        func_0x0001000285a8(0x112fa04c0,&UNK_10dc153d0);
        func_0x000107c61174();
        func_0x000107c61174();
        uVar2 = uStack_c8;
        uVar13 = uStack_c8;
        func_0x000107c4b4a8();
        func_0x000107c61180();
        lVar8 = lStack_a0;
        uVar14 = uVar13;
        func_0x0001000bda74();
        uStack_e0 = uVar14;
        func_0x000107c61170(uVar13);
        lVar7 = lVar8;
        func_0x000107c4b2ec();
        func_0x000107c61180();
        lVar15 = lVar7;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar7);
        if (lVar15 == 0) {
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar20);
          func_0x000107c61170(lVar16);
          func_0x000107c61170(uStack_d0);
          func_0x000107c61170(uVar2);
          func_0x000107c61170(uStack_c0);
          func_0x000107c61170(lVar8);
          func_0x000107c61170(uStack_d8);
          func_0x000107c61170(uStack_a8);
          func_0x000107c61574(uStack_e0);
          func_0x000107c61170(lStack_e8);
          func_0x000107c61170(param_9);
          func_0x000107c61170(param_10);
          func_0x000107c61170(uStack_f8);
          func_0x000107c61170(uStack_f0);
        }
        else {
          lStack_110 = param_9;
          lStack_108 = param_10;
          lVar8 = lVar15;
          lStack_118 = lVar16;
          lStack_100 = lVar6;
          func_0x000107c4c020();
          func_0x000107c61180();
          func_0x000107c615e8(lVar15);
          puVar3 = &UNK_11069c6e0;
          func_0x000107c613fc(&UNK_11069c6e0,0x18,7);
          uVar13 = uStack_c0;
          *(undefined8 *)(puVar3 + 0x10) = uStack_c0;
          func_0x0001000285a8(0x112fa04c8,&UNK_10dc15b10);
          func_0x000107c613fc();
          func_0x000107c61174();
          uVar2 = 0x1038382f0;
          uStack_c0 = uVar13;
          func_0x0001000bdd8c(0x1038382f0,puVar3);
          puVar3 = PTR_PTR_1126aeea8;
          func_0x000107c610f8();
          func_0x000107c453e4();
          uVar17 = *(undefined8 *)(lVar1 + _DAT_113083868);
          func_0x0001000285a8(0x112d5a608,&UNK_10d921390);
          func_0x000107c61174();
          func_0x000107c615f0(lVar8);
          uVar13 = uStack_a8;
          func_0x000107c4af30();
          func_0x000107c61180();
          uVar14 = uVar13;
          func_0x0001000bda74();
          func_0x000107c61170(uVar13);
          uVar18 = *(undefined8 *)(lVar20 + _DAT_112fa40c8);
          puVar9 = (undefined *)0x0;
          lStack_120 = lVar20;
          func_0x0001007dbb4c();
          apuStack_140[2] = puVar9;
          func_0x000107c613fc();
          *(undefined8 *)(puVar9 + 0x10) = 0;
          *(undefined8 *)(puVar9 + 0x18) = 0;
          puVar9[0x20] = 1;
          *(undefined8 *)(puVar9 + 0x28) = 0;
          puVar10 = PTR_PTR_1126ae810;
          func_0x000107c610f8();
          uVar13 = uStack_e0;
          func_0x000107c6157c(uStack_e0);
          func_0x000107c6157c(uVar2);
          func_0x000107c6157c(uVar18);
          func_0x000107c453e4();
          *(undefined8 *)(puVar9 + 0x40) = uVar17;
          *(undefined **)(puVar9 + 0x48) = puVar3;
          *(undefined **)(puVar9 + 0x30) = puVar10;
          *(long *)(puVar9 + 0x38) = lVar8;
          *(undefined8 *)(puVar9 + 0x50) = uVar14;
          *(undefined8 *)(puVar9 + 0x58) = uVar13;
          *(undefined8 *)(puVar9 + 0x60) = uVar2;
          *(undefined8 *)(puVar9 + 0x68) = uVar18;
          func_0x000107c61174(uVar17);
          func_0x000107c615f0(lVar8);
          func_0x000107c6157c(uVar13);
          func_0x000107c6157c(uVar2);
          func_0x000107c6157c(uVar18);
          func_0x000107c61174(puVar3);
          func_0x000107c6157c(uVar14);
          func_0x0001000d224c(&puStack_98);
          apuStack_140[3] = (undefined *)uVar2;
          if (puStack_98 != (undefined *)0x0) {
            puVar10 = puStack_98;
            func_0x000107c4b3fc(puStack_98);
            func_0x000107c61180();
            func_0x000107c615e8(puStack_98);
            puVar11 = puVar10;
            func_0x000107c4da88(puVar10);
            func_0x000107c61180();
            func_0x000107c61170(puVar10);
            puVar10 = &UNK_11069c708;
            func_0x000107c613fc(&UNK_11069c708,0x18,7);
            func_0x000107c61644(puVar10 + 0x10,puVar9);
            ppuStack_78 = (undefined **)0x1038382f8;
            puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_90 = 0x42000000;
            pcStack_88 = FUN_1038263e8;
            puStack_80 = &UNK_11069c720;
            ppuVar12 = &puStack_98;
            puStack_70 = puVar10;
            func_0x000107c60bc4(ppuVar12);
            func_0x000107c61574(puStack_70);
            puVar10 = puVar11;
            func_0x000107c5c320(puVar11);
            func_0x000107c61180();
            func_0x000107c60bd0(ppuVar12);
            func_0x000107c61170(puVar11);
            uVar13 = *(undefined8 *)(puVar9 + 0x30);
            func_0x000107c61174(uVar13);
            func_0x000107c3e924(puVar10);
            func_0x000107c61170(puVar10);
            func_0x000107c61170(uVar13);
          }
          func_0x000107c61170(puVar3);
          func_0x000107c61170(uVar17);
          func_0x000107c615e8(lVar8);
          func_0x000107c61574(uVar14);
          func_0x000107c61574(uStack_e0);
          func_0x000107c61574(uVar2);
          func_0x000107c61574(uVar18);
          uVar2 = uStack_d0;
          lVar7 = lStack_118;
          func_0x0001000285a8(0x112fa04d0,&UNK_10dc16a90);
          uVar13 = uVar2;
          func_0x000107c3e088();
          func_0x000107c61180();
          uVar14 = uVar13;
          func_0x0001000b637c();
          uStack_d0 = uVar14;
          func_0x000107c61170(uVar13);
          func_0x0001000285a8(0x112ee5898,&UNK_10db10a50);
          uVar14 = *(undefined8 *)(lVar7 + _DAT_113081858);
          func_0x000107c61174();
          uVar13 = uVar14;
          func_0x0001000bda74();
          lStack_118 = uVar13;
          func_0x000107c61170(uVar14);
          lVar1 = lStack_120;
          puVar3 = apuStack_140[2];
          uVar14 = *(undefined8 *)(lStack_120 + _DAT_112fa40c0);
          puStack_80 = apuStack_140[2];
          ppuStack_78 = &PTR_DAT_11069db28;
          lVar15 = 0;
          puStack_98 = puVar9;
          func_0x0001007dbb94();
          func_0x000107c613fc();
          func_0x0001000c6518(&puStack_98,puVar3);
          apuStack_140[1] = (undefined *)apuStack_140;
          (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
          puVar19 = (undefined8 *)((long)apuStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
          (**(code **)(extraout_x12 + 0x10))(puVar19);
          uVar13 = *puVar19;
          *(undefined **)(lVar15 + 0x38) = puVar3;
          *(undefined ***)(lVar15 + 0x40) = &PTR_DAT_11069db28;
          *(undefined8 *)(lVar15 + 0x20) = uVar13;
          func_0x0001000c6560(0);
          func_0x000107c613fc();
          func_0x000107c6157c(uVar14);
          puVar3 = puVar9;
          func_0x000107c6157c();
          func_0x0001000c6580();
          func_0x000107c61574(puVar9);
          func_0x000107c61170(uStack_c0);
          func_0x000107c615e8(lVar8);
          func_0x000107c61574(apuStack_140[3]);
          func_0x000107c61170(uVar2);
          func_0x000107c61170(lStack_b0);
          func_0x000107c61170(lVar7);
          func_0x000107c61170(lVar1);
          func_0x000107c61170(uStack_c8);
          func_0x000107c61170(lStack_a0);
          func_0x000107c61170(uStack_d8);
          func_0x000107c61170(uStack_a8);
          func_0x000107c61170(lStack_e8);
          func_0x000107c61170(lStack_110);
          func_0x000107c61170(lStack_108);
          func_0x000107c61170(uStack_f8);
          func_0x000107c61170(uStack_f0);
          *(undefined8 *)(lVar15 + 0x10) = uStack_d0;
          *(undefined8 *)(lVar15 + 0x18) = uStack_e0;
          *(long *)(lVar15 + 0x50) = lStack_118;
          *(undefined **)(lVar15 + 0x58) = puVar3;
          *(undefined8 *)(lVar15 + 0x48) = uVar14;
          func_0x0001000834e4(&puStack_98);
          *(long *)(lStack_100 + 0x10) = lVar15;
          lVar6 = lStack_100;
        }
        *(long *)(lStack_b8 + 0x10) = lVar6;
        return lStack_b8;
      }
      func_0x000107c61170(uVar4);
    }
    func_0x000107c61170(uStack_d8);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_2);
    func_0x000107c61170(uStack_c8);
    func_0x000107c61170(uStack_c0);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uStack_a8);
    uVar2 = uStack_d0;
  }
  func_0x000107c61170(uVar2);
  return lStack_b8;
}



/* Entry: 103838250; end: 1038382a3;  */

/* WARNING: Possible PIC construction at 0x000103838284: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103838288) */

void FUN_103838250(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if ((lVar1 != 0) && (lVar2 = *(long *)(lVar1 + 0x10), lVar2 != 0)) {
    func_0x000107c6157c(lVar1);
    func_0x000107c6157c(lVar2);
    func_0x0001007dbc08();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1038382a4; end: 1038382c7;  */

void FUN_1038382a4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038382c8; end: 1038382e7;  */

void FUN_1038382c8(void)

{
  FUN_103838250();
  return;
}



/* Entry: 1038382e8; end: 10383831b;  */

undefined8 FUN_1038382e8(void)

{
  return 0;
}



/* Entry: 10383831c; end: 10383833b;  */

void FUN_10383831c(void)

{
  func_0x000107c61168(&PTR_PTR_112fa1748);
  return;
}



/* Entry: 10383833c; end: 10383834b;  */

void FUN_10383833c(long param_1,long param_2)

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



/* Entry: 10383834c; end: 1038386db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10383834c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [24];
  ulong uStack_70;
  long lStack_68;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  func_0x0001000d224c(auStack_88);
  func_0x0001000a8868(auStack_88,uStack_70);
  uVar1 = uStack_70;
  (**(code **)(lStack_68 + 0x40))(uStack_70,lStack_68);
  func_0x0001000834e4(auStack_88);
  if ((uVar1 & 1) == 0) {
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
  }
  else {
    uVar1 = *(ulong *)(param_2 + _DAT_113071fd0);
    if (uVar1 == 0) {
      func_0x000107c61170(param_7);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_1);
    }
    else {
      func_0x000107c61174();
      uVar2 = uVar1;
      func_0x000107c42548();
      if ((uVar2 & 1) != 0) {
        lVar3 = 0;
        FUN_103842494();
        func_0x000107c613fc();
        func_0x0001000285a8(0x112ee3e90,&UNK_10db0ef60);
        uVar4 = param_3;
        func_0x000107c4aeb4(param_3);
        func_0x000107c61180();
        uVar10 = uVar4;
        func_0x000100759c94();
        func_0x000107c61170(uVar4);
        uVar4 = 0x112ee3e98;
        func_0x0001000285a8(0x112ee3e98,&UNK_10db20590);
        uVar5 = 0;
        func_0x000100759f5c(0,1,FUN_1038421c0,0,uVar4);
        func_0x000107c61574(uVar10);
        uVar11 = *(undefined8 *)(param_1 + _DAT_1130352b8);
        func_0x0001000285a8(0x112f9f1c8,&UNK_10dc14750);
        uVar10 = *(undefined8 *)(param_6 + _DAT_113071300);
        func_0x000107c615f0(uVar11);
        func_0x000107c6157c(uVar5);
        func_0x000107c61174();
        uVar4 = uVar10;
        func_0x0001000bda74();
        func_0x000107c61170(uVar10);
        func_0x0001000285a8(0x112f9f1d0,&UNK_10dc14758);
        uVar10 = param_4;
        func_0x000107c4b080();
        func_0x000107c61180();
        uVar6 = uVar10;
        func_0x0001000bda74();
        func_0x000107c61170(uVar10);
        lVar7 = 0;
        func_0x000100777f50();
        lVar8 = lVar7;
        func_0x000107c610f8();
        *(undefined8 *)(lVar8 + _DAT_112f9f948) = uVar11;
        *(undefined8 *)(lVar8 + _DAT_112f9f938) = uVar5;
        *(undefined8 *)(lVar8 + _DAT_112f9f930) = uVar4;
        *(undefined8 *)(lVar8 + _DAT_112f9f940) = uVar6;
        plVar9 = &lStack_98;
        lStack_98 = lVar8;
        lStack_90 = lVar7;
        func_0x000107c61154(plVar9,PTR_s_init_1125d9248);
        *(long **)(lVar3 + 0x10) = plVar9;
        func_0x000107c4fba8(*(undefined8 *)(param_1 + _DAT_1130352a8));
        func_0x000107c61170(param_7);
        func_0x000107c61170(param_2);
        func_0x000107c61170(uVar1);
        func_0x000107c61170(param_1);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_4);
        func_0x000107c61170(param_5);
        func_0x000107c61170(param_6);
        func_0x000107c61574(uVar5);
        *(long *)(unaff_x20 + 0x10) = lVar3;
        return unaff_x20;
      }
      func_0x000107c61170(uVar1);
      func_0x000107c61170(param_7);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_1);
    }
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  return unaff_x20;
}



/* Entry: 1038386dc; end: 1038386ff;  */

void FUN_1038386dc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103838700; end: 10383870b;  */

void FUN_103838700(void)

{
  return;
}



/* Entry: 10383870c; end: 10383872b;  */

void FUN_10383870c(void)

{
  func_0x000107c61168(&PTR_PTR_112fa17e8);
  return;
}



/* Entry: 10383872c; end: 103838a27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10383872c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  undefined1 auStack_88 [24];
  ulong uStack_70;
  long lStack_68;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  uVar2 = param_3;
  func_0x000107c3e0a8();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_4 + _DAT_112f9fbc8);
  func_0x000107c61174();
  uVar4 = param_7;
  func_0x000107c4ae78();
  func_0x000107c61180();
  func_0x0001000d224c(auStack_88);
  lVar8 = lStack_68;
  uVar5 = uStack_70;
  func_0x0001000a8868(auStack_88,uStack_70);
  (**(code **)(lVar8 + 0x40))(uVar5,lVar8);
  func_0x0001000834e4(auStack_88);
  if ((uVar5 & 1) == 0) {
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_7);
  }
  else {
    uVar5 = *(ulong *)(param_2 + _DAT_113071fd0);
    if (uVar5 == 0) {
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_5);
      func_0x000107c61170(param_7);
    }
    else {
      func_0x000107c61174();
      uVar6 = uVar5;
      func_0x000107c42548();
      if ((uVar6 & 1) != 0) {
        uVar7 = uVar4;
        func_0x000107c4ac68();
        func_0x000107c61180();
        func_0x0001000d224c(auStack_88);
        func_0x0001000a8868(auStack_88,uStack_70);
        uVar6 = uStack_70;
        (**(code **)(lStack_68 + 0x40))(uStack_70,lStack_68);
        lVar8 = 0;
        FUN_103843fd8();
        func_0x000107c613fc();
        func_0x000107c61170(param_4);
        func_0x000107c61170(param_2);
        func_0x000107c61170(param_6);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_7);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar4);
        puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
        *(undefined8 *)(lVar8 + 0x10) = param_1;
        *(undefined8 *)(lVar8 + 0x18) = uVar2;
        *(undefined8 *)(lVar8 + 0x20) = uVar3;
        *(undefined8 *)(lVar8 + 0x28) = param_5;
        *(undefined8 *)(lVar8 + 0x38) = uVar7;
        *(undefined **)(lVar8 + 0x40) = puVar1;
        *(undefined8 *)(lVar8 + 0x30) = param_8;
        *(byte *)(lVar8 + 0x48) = (byte)uVar6 & 1;
        func_0x0001000834e4(auStack_88);
        *(long *)(unaff_x20 + 0x10) = lVar8;
        return unaff_x20;
      }
      func_0x000107c61170(uVar5);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_5);
      func_0x000107c61170(param_7);
    }
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  return unaff_x20;
}



/* Entry: 103838a28; end: 103838a4b;  */

void FUN_103838a28(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103838a4c; end: 103838a8b;  */

void FUN_103838a4c(void)

{
  long *unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(*unaff_x20 + 0x10);
  if (lVar1 != 0) {
    func_0x000107c6157c(lVar1);
    FUN_103843818();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar1);
    return;
  }
  return;
}



/* Entry: 103838a8c; end: 103838a93;  */

undefined8 FUN_103838a8c(void)

{
  return 0;
}



/* Entry: 103838a94; end: 103838ab3;  */

void FUN_103838a94(void)

{
  func_0x000107c61168(&PTR_PTR_112fa1888);
  return;
}



/* Entry: 103838ab4; end: 1038399b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103838ab4(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined **ppuVar18;
  long unaff_x20;
  undefined8 uVar19;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [24];
  ulong uStack_78;
  long lStack_70;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  func_0x0001000d224c(&puStack_c0);
  lVar5 = lStack_a0;
  puVar1 = puStack_a8;
  func_0x0001000a8868(&puStack_c0,puStack_a8);
  (**(code **)(lVar5 + 0x40))(puVar1,lVar5);
  if (((ulong)puVar1 & 1) == 0) {
    func_0x0001000d224c(auStack_90);
    func_0x0001000a8868(auStack_90,uStack_78);
    uVar2 = uStack_78;
    (**(code **)(lStack_70 + 0xf0))(uStack_78,lStack_70);
    func_0x0001000834e4(auStack_90);
    func_0x0001000834e4(&puStack_c0);
    if ((uVar2 & 1) == 0) {
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_4);
      goto LAB_103839168;
    }
  }
  else {
    func_0x0001000834e4(&puStack_c0);
  }
  uVar2 = *(ulong *)(param_1 + _DAT_113071fd0);
  if (uVar2 == 0) {
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
  }
  else {
    func_0x000107c61174();
    uVar17 = uVar2;
    func_0x000107c42548();
    if ((uVar17 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_2 + _DAT_113038550);
      func_0x000107c61174();
      uVar4 = param_3;
      func_0x000107c4ae78();
      func_0x000107c61180();
      uVar19 = *(undefined8 *)(param_4 + _DAT_113035af8);
      lVar5 = 0;
      func_0x0001007dd35c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar5 + 0x10) = 0;
      func_0x0001000285a8(0x112ee3e90,&UNK_10db0ef60);
      func_0x000107c61174();
      uVar6 = uVar4;
      func_0x000107c4aeb4(uVar4);
      func_0x000107c61180();
      uVar16 = uVar6;
      func_0x000100759c94();
      func_0x000107c61170(uVar6);
      uVar6 = 0x112ee3e98;
      func_0x0001000285a8(0x112ee3e98,&UNK_10db20590);
      uVar7 = 0;
      func_0x000100759f5c(0,1,&UNK_100b61bd4,0,uVar6);
      func_0x000107c61574(uVar16);
      puVar1 = &UNK_11069c808;
      func_0x000107c613fc(&UNK_11069c808,0x18,7);
      *(undefined8 *)(puVar1 + 0x10) = param_7;
      func_0x0001000285a8(0x112d53a70,&UNK_10d91a680);
      func_0x000107c613fc();
      func_0x000107c61174();
      pcVar8 = FUN_1038399b4;
      func_0x0001000bdd8c(FUN_1038399b4,puVar1);
      puVar1 = &UNK_11069c830;
      func_0x000107c613fc(&UNK_11069c830,0x18,7);
      *(undefined8 *)(puVar1 + 0x10) = param_7;
      func_0x0001000285a8(0x112d54e08,&UNK_10d91bfb0);
      func_0x000107c613fc();
      func_0x000107c61174();
      uVar6 = 0x1038399bc;
      func_0x0001000bdd8c(0x1038399bc,puVar1);
      puVar1 = &UNK_11069c858;
      func_0x000107c613fc(&UNK_11069c858,0x18,7);
      *(undefined8 *)(puVar1 + 0x10) = uVar19;
      func_0x0001000285a8(0x112fa0578,&UNK_10dc15410);
      func_0x000107c613fc();
      func_0x000107c61174();
      func_0x000107c6157c(uVar7);
      uVar16 = 0x1038399c4;
      func_0x0001000bdd8c(0x1038399c4,puVar1);
      puVar1 = &UNK_11069c880;
      func_0x000107c613fc(&UNK_11069c880,0x18,7);
      *(undefined8 *)(puVar1 + 0x10) = param_5;
      func_0x0001000285a8(0x112d5c4b8,&UNK_10d923250);
      func_0x000107c613fc();
      func_0x000107c61174();
      uVar9 = 0x1038399cc;
      func_0x0001000bdd8c(0x1038399cc,puVar1);
      puVar1 = &UNK_11069c8a8;
      func_0x000107c613fc(&UNK_11069c8a8,0x18,7);
      *(undefined8 *)(puVar1 + 0x10) = uVar3;
      func_0x0001000285a8(0x112fa0580,&UNK_10dc15420);
      func_0x000107c613fc();
      func_0x000107c61174();
      uVar10 = 0x1038399d4;
      func_0x0001000bdd8c(0x1038399d4,puVar1);
      lVar11 = 0;
      func_0x0001007dd37c();
      func_0x000107c613fc();
      func_0x0001000c6560(0);
      func_0x000107c613fc();
      func_0x000107c6157c(pcVar8);
      uVar12 = uVar6;
      func_0x000107c6157c();
      func_0x0001000c6580();
      *(undefined8 *)(lVar11 + 0x38) = uVar6;
      *(undefined8 *)(lVar11 + 0x40) = uVar12;
      *(undefined8 *)(lVar11 + 0x10) = uVar7;
      *(undefined8 *)(lVar11 + 0x18) = uVar16;
      *(undefined8 *)(lVar11 + 0x20) = uVar9;
      *(undefined8 *)(lVar11 + 0x28) = uVar10;
      *(code **)(lVar11 + 0x30) = pcVar8;
      *(long *)(lVar5 + 0x10) = lVar11;
      lVar13 = *(long *)(param_8 + _DAT_113093a90);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar13 == 0) {
        func_0x000107c61170(param_8);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar19);
        func_0x000107c61170(param_5);
        func_0x000107c61170(param_7);
        func_0x000107c61574(uVar6);
        func_0x000107c61574(pcVar8);
        func_0x000107c61574(uVar7);
        func_0x000107c61170(param_6);
        func_0x000107c61170(param_1);
        func_0x000107c61170(param_2);
      }
      else {
        func_0x000100079360(0);
        func_0x0001007dd39c(0);
        lVar14 = 0;
        func_0x0001007dd3bc(0);
        func_0x0001007dd3dc();
        lVar15 = lVar14;
        func_0x0001007dd440();
        func_0x000107c61170(lVar14);
        lVar14 = lVar15;
        func_0x0001007dd4e0(lVar15);
        func_0x000107c61170(lVar15);
        uVar16 = 0;
        func_0x0001000aad1c(0);
        func_0x0001007dd748();
        uVar17 = 0;
        func_0x0001000295c4(0);
        func_0x000107c5ffdc();
        puVar1 = &UNK_11069c8d0;
        func_0x000107c613fc(&UNK_11069c8d0,0x18,7);
        func_0x000107c61644(puVar1 + 0x10,lVar11);
        lStack_a0 = 0x1038399dc;
        puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b8 = 0x42000000;
        puStack_b0 = &UNK_1000f6b44;
        puStack_a8 = &UNK_11069c8e8;
        ppuVar18 = &puStack_c0;
        puStack_98 = puVar1;
        func_0x000107c60bc4(ppuVar18);
        func_0x000107c61574(puStack_98);
        func_0x000107c5e08c(lVar13);
        func_0x000107c61180();
        func_0x000107c615e8();
        func_0x000107c61170(param_8);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar19);
        func_0x000107c61170(param_5);
        func_0x000107c61170(param_7);
        func_0x000107c61170(param_6);
        func_0x000107c61170(param_1);
        func_0x000107c61170(param_2);
        func_0x000107c61170(param_4);
        func_0x000107c61170(param_3);
        func_0x000107c61170(uVar2);
        func_0x000107c60bd0(ppuVar18);
        func_0x000107c61574(uVar7);
        func_0x000107c61574(pcVar8);
        func_0x000107c61574(uVar6);
        func_0x000107c615e8(lVar13);
        param_4 = lVar14;
        uVar2 = uVar17;
        param_3 = uVar16;
      }
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_3);
      func_0x000107c61170(uVar2);
      *(long *)(unaff_x20 + 0x10) = lVar5;
      return unaff_x20;
    }
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
  }
  func_0x000107c61170(param_4);
LAB_103839168:
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  return unaff_x20;
}



/* Entry: 1038399b4; end: 1038399ff;  */

void FUN_1038399b4(undefined8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long unaff_x20;
  
  pcVar2 = *(char **)(unaff_x20 + 0x10);
  func_0x000107c4b2ec();
  func_0x000107c61180();
  pcVar1 = pcVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(pcVar2);
  if (pcVar1 == (char *)0x0) {
    pcVar2 = 
    "init(cameraUIServices:lensCarouselFeatureServices:miniCameraActivationStateServices:lensContentServices:lensPerformerServices:taskManagmentServices:)"
    ;
    func_0x0001000c10c0();
    func_0x000107c61180();
  }
  else {
    pcVar2 = pcVar1;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000107c615e8(pcVar1);
  }
  *param_1 = pcVar2;
  return;
}



/* Entry: 103839a00; end: 103839a23;  */

void FUN_103839a00(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103839a24; end: 103839a2f;  */

void FUN_103839a24(void)

{
  return;
}



/* Entry: 103839a30; end: 103839a4f;  */

void FUN_103839a30(void)

{
  func_0x000107c61168(&PTR_PTR_112fa1928);
  return;
}



/* Entry: 103839a50; end: 103839a6f;  */

void FUN_103839a50(long param_1,long param_2)

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



/* Entry: 103839a70; end: 103839f53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103839a70(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5,
                  long *param_6,long *param_7)

{
  long *plVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long *plVar12;
  long unaff_x20;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  ulong uStack_78;
  long lStack_70;
  
  func_0x000107c613fc();
  plVar1 = *(long **)((long)param_5 + _DAT_112f9fbc8);
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  func_0x000107c61174();
  func_0x0001000d224c(&puStack_c0);
  pcVar5 = pcStack_a0;
  puVar2 = puStack_a8;
  func_0x0001000a8868(&puStack_c0,puStack_a8);
  (**(code **)(pcVar5 + 0x40))(puVar2,pcVar5);
  plStack_d8 = param_6;
  if (((ulong)puVar2 & 1) == 0) {
    func_0x0001000d224c(auStack_90);
    func_0x0001000a8868(auStack_90,uStack_78);
    uVar3 = uStack_78;
    (**(code **)(lStack_70 + 0xf0))(uStack_78,lStack_70);
    func_0x0001000834e4(auStack_90);
    func_0x0001000834e4(&puStack_c0);
    if ((uVar3 & 1) == 0) goto LAB_103839ef0;
  }
  else {
    func_0x0001000834e4(&puStack_c0);
  }
  lVar4 = *(long *)((long)param_2 + _DAT_113071fd0);
  if (lVar4 != 0) {
    func_0x000107c61174();
    lVar9 = lVar4;
    func_0x000107c42548();
    plVar12 = param_5;
    plVar15 = param_4;
    plVar16 = param_1;
    plVar17 = param_7;
    if ((int)lVar9 != 0) {
      puVar2 = &UNK_11069ca30;
      func_0x000107c613fc(&UNK_11069ca30,0x18,7);
      *(long **)(puVar2 + 0x10) = param_6;
      func_0x0001000285a8(0x112d53a70,&UNK_10d91a680);
      func_0x000107c613fc();
      func_0x000107c61174();
      pcVar5 = FUN_103839fe0;
      func_0x0001000bdd8c(FUN_103839fe0,puVar2);
      uVar13 = *(undefined8 *)((long)plVar1 + _DAT_112f9f6d8);
      pcStack_a0 = FUN_103839fe8;
      uStack_98 = 0;
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0x42000000;
      uStack_b0 = 0x1038272c8;
      puStack_a8 = &UNK_11069ca48;
      ppuVar6 = &puStack_c0;
      func_0x000107c60bc4(ppuVar6);
      func_0x000107c61174();
      uVar7 = uVar13;
      func_0x000107c4c280();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(uVar13);
      puVar2 = &UNK_11069ca80;
      func_0x000107c613fc(&UNK_11069ca80,0x18,7);
      *(long **)(puVar2 + 0x10) = param_4;
      func_0x0001000285a8(0x112fa0578,&UNK_10dc15410);
      func_0x000107c613fc();
      func_0x000107c61174();
      pcVar8 = FUN_10383a0c8;
      func_0x0001000bdd8c(FUN_10383a0c8,puVar2);
      lVar9 = 0;
      func_0x00010384e7a4();
      func_0x000107c613fc();
      func_0x0001000c6560(0);
      func_0x000107c613fc();
      func_0x000107c61174();
      pcVar10 = pcVar5;
      func_0x000107c6157c();
      func_0x0001000c6580();
      *(code **)(lVar9 + 0x28) = pcVar5;
      *(code **)(lVar9 + 0x30) = pcVar10;
      *(code **)(lVar9 + 0x10) = pcVar8;
      *(undefined8 *)(lVar9 + 0x18) = 0;
      *(undefined8 *)(lVar9 + 0x20) = uVar7;
      *(long *)(unaff_x20 + 0x10) = lVar9;
      func_0x000107c6157c(lVar9);
      FUN_10384e440();
      func_0x000107c61574(lVar9);
      puVar2 = &UNK_11069caa8;
      func_0x000107c613fc(&UNK_11069caa8,0x18,7);
      func_0x000107c61614(puVar2 + 0x10,param_3);
      uVar13 = 0x112ef06f8;
      func_0x0001000285a8(0x112ef06f8,&UNK_10db8f890);
      func_0x000107c613fc();
      pcVar8 = FUN_10383a16c;
      func_0x0001000bdd8c(FUN_10383a16c,puVar2,uVar13);
      lVar14 = *(long *)((long)param_1 + _DAT_112fe9630);
      lVar11 = 0;
      FUN_10381e9ec();
      lVar9 = lVar11;
      func_0x000107c610f8();
      *(code **)(lVar9 + _DAT_112f9ff50) = pcVar8;
      *(undefined8 *)(lVar9 + _DAT_112f9ff58) = uVar7;
      puVar2 = PTR_s_init_1125d9248;
      lStack_d0 = lVar9;
      lStack_c8 = lVar11;
      func_0x000107c61174(uVar7);
      func_0x000107c61174(lVar14);
      func_0x000107c6157c(pcVar8);
      plVar12 = &lStack_d0;
      func_0x000107c61154(plVar12,puVar2);
      uVar13 = 0;
      func_0x000103af2e4c(0);
      func_0x000107c610f8();
      func_0x000103af2d80(plVar12,&PTR_DAT_11069a798,uVar13);
      func_0x000107c4fba8(lVar14);
      func_0x000107c61170(plVar1);
      func_0x000107c61170(lVar4);
      func_0x000107c61574(pcVar5);
      func_0x000107c61170(uVar7);
      func_0x000107c61574(pcVar8);
      lVar4 = lVar14;
      plVar15 = param_3;
      plVar16 = param_2;
      plVar17 = param_5;
      param_2 = param_7;
      param_3 = param_1;
      plVar1 = param_6;
      plStack_d8 = param_4;
    }
    func_0x000107c61170(lVar4);
    param_5 = plVar12;
    param_4 = plVar15;
    param_1 = plVar16;
    param_7 = plVar17;
  }
LAB_103839ef0:
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(plStack_d8);
  func_0x000107c61170(plVar1);
  return unaff_x20;
}



/* Entry: 103839f54; end: 103839fdf;  */

void FUN_103839f54(undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  func_0x000107c4b2ec();
  func_0x000107c61180();
  pcVar1 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (pcVar1 == (char *)0x0) {
    pcVar2 = 
    "init(conditionalBeginIn:cameraScope:cameraUIServices:miniCameraActivationStateServices:arBarIntegrationServices:lensPerformerServices:lensConfigurationServices:)"
    ;
    func_0x0001000c10c0();
    func_0x000107c61180();
  }
  else {
    pcVar2 = pcVar1;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000107c615e8(pcVar1);
  }
  *param_1 = pcVar2;
  return;
}



/* Entry: 103839fe0; end: 103839fe7;  */

void FUN_103839fe0(undefined8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long unaff_x20;
  
  pcVar2 = *(char **)(unaff_x20 + 0x10);
  func_0x000107c4b2ec();
  func_0x000107c61180();
  pcVar1 = pcVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(pcVar2);
  if (pcVar1 == (char *)0x0) {
    pcVar2 = 
    "init(conditionalBeginIn:cameraScope:cameraUIServices:miniCameraActivationStateServices:arBarIntegrationServices:lensPerformerServices:lensConfigurationServices:)"
    ;
    func_0x0001000c10c0();
    func_0x000107c61180();
  }
  else {
    pcVar2 = pcVar1;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000107c615e8(pcVar1);
  }
  *param_1 = pcVar2;
  return;
}



/* Entry: 103839fe8; end: 10383a06f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103839fe8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x112fa0768;
  func_0x0001000285a8(0x112fa0768,&UNK_10dc15ee0);
  param_1[3] = lVar1;
  lVar1 = *(long *)(param_2 + _DAT_113035438);
  func_0x000107c3f268();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c42e38();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 10383a070; end: 10383a08b;  */

void FUN_10383a070(long param_1,long param_2)

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



/* Entry: 10383a08c; end: 10383a0c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10383a08c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_113035b60);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 10383a0c8; end: 10383a0cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10383a0c8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113035b60);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 10383a0cc; end: 10383a16b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10383a0cc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + _DAT_1130385c0);
    func_0x000107c61174();
    func_0x000107c61170(param_2);
    uVar2 = uVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 10383a16c; end: 10383a173;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10383a16c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_1130385c0);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    uVar3 = uVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
  }
  *param_1 = uVar3;
  return;
}



/* Entry: 10383a174; end: 10383a1b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10383a174(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113035b60);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 10383a1b4; end: 10383a1d7;  */

void FUN_10383a1b4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10383a1d8; end: 10383a1e3;  */

void FUN_10383a1d8(void)

{
  return;
}



/* Entry: 10383a1e4; end: 10383a203;  */

void FUN_10383a1e4(void)

{
  func_0x000107c61168(&PTR_PTR_112fa19c8);
  return;
}



/* Entry: 10383a204; end: 10383a773;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10383a204(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  code *pcVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  ulong uVar18;
  long unaff_x20;
  ulong uVar19;
  undefined *apuStack_d0 [3];
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  long alStack_88 [2];
  code *pcStack_78;
  undefined8 uStack_70;
  
  func_0x000107c613fc();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112fa5728);
  func_0x000107c61174();
  uVar4 = param_3;
  func_0x000107c3e0b0();
  func_0x000107c61180();
  lVar5 = param_5;
  func_0x000107c4aeb0();
  func_0x000107c61180();
  lVar6 = 0;
  func_0x000103827548();
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x10) = param_4;
  *(undefined8 *)(lVar6 + 0x18) = param_6;
  *(undefined2 *)(lVar6 + 0x20) = 0x101;
  lVar7 = 0;
  func_0x0001038841ac();
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar8 = 0;
  alStack_88[0] = lVar7;
  func_0x000103884510();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar11 = &UNK_11069caf0;
  alStack_88[1] = uVar8;
  func_0x000107c613fc(&UNK_11069caf0,0x18,7);
  *(undefined8 *)(puVar11 + 0x10) = param_6;
  func_0x0001000285a8(0x112fa09d0,&UNK_10dc15640);
  func_0x000107c613fc();
  func_0x000107c61174(param_6);
  pcVar2 = FUN_10383a774;
  func_0x0001000bdd8c(FUN_10383a774,puVar11);
  FUN_103884924(0);
  func_0x000107c610f8();
  func_0x0001038847f4();
  uVar8 = 0;
  pcStack_78 = pcVar2;
  FUN_103883e50();
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar19 = 0;
  uStack_70 = uVar8;
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uVar1 = uVar19;
    if (uVar19 < 5) {
      uVar1 = 4;
    }
    do {
      if (uVar19 == 4) {
        uVar8 = 0x112fa09d8;
        func_0x0001000285a8(0x112fa09d8,&UNK_10dc15648);
        func_0x000107c61408(alStack_88,4,uVar8);
        lVar7 = lVar5;
        func_0x000107c4aeb4();
        func_0x000107c61180();
        lVar12 = lVar7;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar7);
        if (lVar12 == 0) {
          func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
          apuStack_d0[0] = (undefined *)((ulong)apuStack_d0[0] & 0xffffffffffffff00);
          ppuVar13 = apuStack_d0;
          func_0x000100854cb0(ppuVar13);
        }
        else {
          lVar7 = lVar12;
          func_0x000107c3d14c(lVar12);
          func_0x000107c61180();
          func_0x000107c615e8(lVar12);
          func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
          func_0x000107c61174(lVar7);
          lVar12 = lVar7;
          func_0x0001000b637c();
          pcVar2 = FUN_10382782c;
          func_0x0001000bfde0(FUN_10382782c,0,PTR___sSbN_11034dd40);
          func_0x000107c61574(lVar12);
          ppuVar13 = (undefined **)PTR___sSbSQsWP_11034dd50;
          func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
          func_0x000107c61574(pcVar2);
          func_0x000107c61170(lVar7);
          func_0x000107c61170(lVar7);
        }
        func_0x0001000285a8(0x112fa04d0,&UNK_10dc16a90);
        uVar8 = uVar4;
        func_0x000107c3e088(uVar4);
        func_0x000107c61180();
        uVar14 = uVar8;
        func_0x0001000b637c();
        func_0x000107c61170(uVar8);
        uVar8 = 0x112f9fad8;
        func_0x0001000285a8(0x112f9fad8,&UNK_10dc15650);
        pcVar2 = FUN_103827568;
        func_0x0001000d5158(FUN_103827568,0,uVar8);
        uVar8 = 0;
        func_0x0001007b706c(0);
        pcVar15 = FUN_10382777c;
        func_0x00010068b194(FUN_10382777c,0,uVar8);
        func_0x000107c61574(pcVar2);
        apuStack_d0[0] = (undefined *)0x0;
        ppuVar16 = apuStack_d0;
        func_0x0001006c71a4(ppuVar16);
        func_0x000107c61574(pcVar15);
        func_0x000107c61574(uVar14);
        uVar8 = 0;
        FUN_1038851c8();
        func_0x000107c610f8();
        func_0x000107c6157c(ppuVar16);
        func_0x000107c6157c(ppuVar13);
        func_0x0001038849e0(puVar11,ppuVar16,1,ppuVar13,1);
        ppuStack_b0 = &PTR_DAT_1106a10b0;
        apuStack_d0[0] = puVar11;
        uStack_b8 = uVar8;
        FUN_10388af40(0);
        func_0x000107c610f8();
        func_0x000107c61174(puVar11);
        ppuVar17 = apuStack_d0;
        func_0x00010388ae60(ppuVar17);
        func_0x000107c4fba8(uVar3);
        func_0x000107c61170(param_1);
        func_0x000107c61170(param_2);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_5);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(lVar5);
        func_0x000107c61574(ppuVar13);
        func_0x000107c61574(ppuVar16);
        func_0x000107c61170(puVar11);
        func_0x000107c61170(ppuVar17);
        *(long *)(unaff_x20 + 0x10) = lVar6;
        return unaff_x20;
      }
      if (uVar1 == uVar19) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10383a774);
        (*pcVar2)();
      }
      lVar7 = alStack_88[uVar19];
      uVar19 = uVar19 + 1;
    } while (lVar7 == 0);
    func_0x000107c615f0(lVar7);
    puVar10 = puVar11;
    func_0x000107c61550();
    if ((((int)puVar10 == 0) || ((long)puVar11 < 0)) ||
       (puVar10 = puVar11, ((ulong)puVar11 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar11 >> 0x3e == 0) {
        puVar9 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar9 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar11) {
          puVar9 = puVar11;
        }
        func_0x000107c60480(puVar9);
      }
      puVar10 = (undefined *)0x0;
      FUN_10383a990(0,puVar9 + 1,1,puVar11);
    }
    uVar18 = (ulong)puVar10 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar18 + 0x10);
    puVar11 = puVar10;
    if (*(ulong *)(uVar18 + 0x18) >> 1 <= uVar1) {
      puVar11 = (undefined *)(ulong)(1 < *(ulong *)(uVar18 + 0x18));
      FUN_10383a990(puVar11,uVar1 + 1,1,puVar10);
      uVar18 = (ulong)puVar11 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar18 + 0x10) = uVar1 + 1;
    *(long *)(uVar18 + uVar1 * 8 + 0x20) = lVar7;
  } while( true );
}



/* Entry: 10383a774; end: 10383a77b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10383a774(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113071300);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 10383a77c; end: 10383a79f;  */

void FUN_10383a77c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10383a7a0; end: 10383a7ab;  */

void FUN_10383a7a0(void)

{
  return;
}



/* Entry: 10383a7ac; end: 10383a82b;  */

undefined * FUN_10383a7ac(undefined *param_1,undefined *param_2,code *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    (*param_3)();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 10383a82c; end: 10383a847;  */

ulong FUN_10383a82c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10383a990);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_10383a7ac(uVar2,uVar4,FUN_1038200c0);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10383a98c);
      (*pcVar1)();
    }
    func_0x00010383ac20(0,uVar2,uVar3 + 0x20,param_4,0x112f9fac0,&UNK_10dc14d00);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 10383a848; end: 10383a98f;  */

ulong FUN_10383a848(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10383a990);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_10383a7ac(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10383a98c);
      (*pcVar1)();
    }
    func_0x00010383ac20(0,uVar2,uVar3 + 0x20,param_4,param_6,param_7);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 10383a990; end: 10383aabf;  */

ulong FUN_10383a990(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10383aac0);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_10383a7ac(uVar2,uVar4,0x1038200e4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10383aabc);
      (*pcVar1)();
    }
    FUN_10383aafc(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 10383aac0; end: 10383aadf;  */

void FUN_10383aac0(void)

{
  func_0x000107c61168(&PTR_PTR_112fa1a68);
  return;
}



/* Entry: 10383aae0; end: 10383aafb;  */

ulong FUN_10383aae0(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10383a990);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_10383a7ac(uVar2,uVar4,&SUB_102b4cefc);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10383a98c);
      (*pcVar1)();
    }
    func_0x00010383ac20(0,uVar2,uVar3 + 0x20,param_4,0x112d5ba30,&UNK_10d929a50);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 10383aafc; end: 10383ad9b;  */

long FUN_10383aafc(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10383ac1c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10383ac20);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112f9fad8;
        func_0x0001000285a8(0x112f9fad8,&UNK_10dc15650);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112f9fad8;
      func_0x0001000285a8(0x112f9fad8,&UNK_10dc15650);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10383ac18);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 10383ad9c; end: 10383adb3;  */

void FUN_10383ad9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  return;
}



/* Entry: 10383adb4; end: 10383b4d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10383adb4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  code *pcVar14;
  code *pcVar15;
  code *pcVar16;
  undefined *puVar17;
  long lVar18;
  long *plVar19;
  long unaff_x20;
  undefined8 uVar20;
  undefined8 uVar21;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x0001000285a8(0x112d5a5f8,&UNK_10d921380);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c4b2ec();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  func_0x0001000285a8(0x112f9f198,&UNK_10dc14d10);
  func_0x000107c613fc();
  uVar3 = 1;
  func_0x00010008747c();
  func_0x0001000285a8(0x112d53b48,&UNK_10d925340);
  func_0x000107c613fc();
  uVar4 = 1;
  func_0x00010008747c();
  uVar1 = 0x112fa0248;
  func_0x0001000285a8(0x112fa0248,&UNK_10dc151e0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  puVar5 = &UNK_11069cb38;
  func_0x000107c613fc(&UNK_11069cb38,0x18,7);
  func_0x000107c61644(puVar5 + 0x10);
  uVar9 = 0x112d53a70;
  func_0x0001000285a8(0x112d53a70,&UNK_10d91a680);
  func_0x000107c613fc();
  pcVar6 = FUN_10383b5bc;
  func_0x0001000bdd8c(FUN_10383b5bc,puVar5,uVar9);
  puVar5 = &UNK_11069cb60;
  func_0x000107c613fc(&UNK_11069cb60,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar3;
  *(code **)(puVar5 + 0x18) = pcVar6;
  func_0x0001000285a8(0x112fa0250,&UNK_10dc151f0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(pcVar6);
  pcVar7 = FUN_10383b62c;
  func_0x0001000bdd8c(FUN_10383b62c,puVar5);
  uVar9 = 0x112f9fad8;
  func_0x0001000285a8(0x112f9fad8,&UNK_10dc15650);
  pcVar8 = FUN_103827568;
  func_0x0001000d5158(FUN_103827568,0,uVar9);
  uVar9 = 0;
  func_0x0001007b706c(0);
  pcVar10 = FUN_10382777c;
  func_0x00010068b194(FUN_10382777c,0,uVar9);
  func_0x000107c61574(pcVar8);
  uStack_90 = 0;
  puVar11 = &uStack_90;
  func_0x0001006c71a4();
  func_0x000107c61574(pcVar10);
  func_0x0001000285a8(0x112d382e8,&UNK_10d902020);
  func_0x000107c613fc();
  uVar9 = 0x10383130c;
  func_0x0001000bdd8c(0x10383130c,0);
  puVar5 = &UNK_11069cb88;
  func_0x000107c613fc(&UNK_11069cb88,0x40,7);
  *(code **)(puVar5 + 0x10) = pcVar7;
  *(undefined2 *)(puVar5 + 0x18) = 1;
  puVar5[0x1a] = 0;
  *(undefined8 *)(puVar5 + 0x20) = 1;
  puVar5[0x28] = 0;
  *(undefined8 *)(puVar5 + 0x30) = uVar9;
  *(undefined8 **)(puVar5 + 0x38) = puVar11;
  func_0x0001000285a8(0x112fa03b0,&UNK_10dc152f0);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar7);
  func_0x000107c6157c(puVar11);
  uVar9 = 0x10383bbe8;
  func_0x0001000bdd8c(0x10383bbe8,puVar5);
  puVar5 = &UNK_11069cbb0;
  func_0x000107c613fc(&UNK_11069cbb0,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(undefined8 *)(puVar5 + 0x18) = uVar4;
  func_0x0001000285a8(0x112fa03a0,&UNK_10dc152e0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar4);
  pcVar8 = FUN_10383bc54;
  func_0x0001000bdd8c(FUN_10383bc54,puVar5);
  func_0x0001000285a8(0x112fa0258,&UNK_10dc15200);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar9);
  uVar12 = 0x10383bc5c;
  func_0x0001000bdd8c(0x10383bc5c,uVar9);
  uVar20 = 0x112fa0260;
  func_0x0001000285a8(0x112fa0260,&UNK_10dc15208);
  uVar13 = 0x10383b6b8;
  func_0x0001000cb480(0x10383b6b8,0,uVar20);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar18 = 0x112fa1ac8;
  func_0x0001000285a8(0x112fa1ac8,&UNK_10dc15f40);
  func_0x000107c613fc();
  func_0x0001000c6560(0);
  func_0x000107c613fc();
  func_0x000107c61174();
  uVar20 = uVar21;
  func_0x0001000c6580();
  *(undefined8 *)(lVar18 + 0x10) = uVar21;
  *(undefined8 *)(lVar18 + 0x18) = uVar3;
  *(undefined8 *)(lVar18 + 0x20) = uVar2;
  *(code **)(lVar18 + 0x28) = FUN_10383b770;
  *(undefined8 *)(lVar18 + 0x30) = 0;
  *(undefined8 *)(lVar18 + 0x38) = uVar20;
  uVar20 = *(undefined8 *)(unaff_x20 + 0x40);
  *(long *)(unaff_x20 + 0x40) = lVar18;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(lVar18);
  func_0x000107c61574(uVar20);
  puVar5 = &UNK_11069cbd8;
  func_0x000107c613fc(&UNK_11069cbd8,0x40,7);
  *(long *)(puVar5 + 0x10) = lVar18;
  *(code **)(puVar5 + 0x18) = pcVar7;
  *(undefined8 *)(puVar5 + 0x20) = uVar13;
  *(undefined8 *)(puVar5 + 0x28) = uVar4;
  *(undefined8 *)(puVar5 + 0x30) = uVar1;
  *(undefined8 *)(puVar5 + 0x38) = uVar2;
  func_0x0001000285a8(0x112f421e0,&UNK_10db8f110);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar7);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  uVar20 = 0x10383bc64;
  func_0x0001000bdd8c(0x10383bc64,puVar5);
  uVar13 = 0;
  func_0x0001002ed07c();
  pcVar10 = FUN_10383b898;
  func_0x0001000bfde0(FUN_10383b898,0,uVar13);
  pcVar14 = pcVar10;
  func_0x0001004575f0();
  func_0x000107c61574();
  func_0x0001004575f0();
  pcVar15 = pcVar10;
  func_0x0001003a5b88();
  pcVar16 = pcVar15;
  func_0x0001003a5b88();
  puVar17 = PTR_PTR_1126ad778;
  func_0x000107c610f8();
  func_0x000107c45778();
  func_0x000107c61170(pcVar14);
  func_0x000107c61170(pcVar10);
  func_0x000107c61170(pcVar15);
  func_0x000107c61170(pcVar16);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar5 = PTR_PTR_1126ad7b8;
  func_0x000107c610f8();
  func_0x000107c45774();
  func_0x000107c42c20(uVar13);
  func_0x000107c61170(puVar5);
  puVar5 = PTR_PTR_1126ae558;
  func_0x000107c61168();
  func_0x000107c451b0();
  func_0x000107c61180();
  uVar13 = 0x112fa0268;
  func_0x0001000285a8(0x112fa0268,&UNK_10dc159f0);
  uVar21 = 0x10383b71c;
  func_0x0001000cb480(0x10383b71c,0,uVar13);
  lVar18 = 0;
  func_0x00010381b9d0();
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = 0;
  func_0x000107c610f8();
  *(undefined **)(lVar18 + _DAT_112f9f6d8) = puVar5;
  *(undefined8 *)(lVar18 + _DAT_112f9f6e0) = uVar21;
  func_0x0001007b7bf0(&uStack_90,lVar18 + _DAT_112f9f6e8);
  uVar13 = 0;
  func_0x0001005b7104();
  plVar19 = &lStack_a0;
  lStack_a0 = lVar18;
  uStack_98 = uVar13;
  func_0x000107c61154(plVar19,PTR_s_init_1125d9248);
  func_0x0001007b7c40(&uStack_90);
  func_0x000107c42c20(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(puVar11);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(uVar20);
  func_0x000107c61170(puVar17);
  func_0x000107c61170(plVar19);
  return;
}



/* Entry: 10383b4d8; end: 10383b5bb;  */

void FUN_10383b4d8(undefined8 *param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    pcVar2 = *(char **)(param_2 + 0x18);
    func_0x000107c61174();
    func_0x000107c61574(param_2);
    pcVar1 = pcVar2;
    func_0x000107c4b2ec();
    func_0x000107c61180();
    func_0x000107c61170(pcVar2);
    pcVar2 = pcVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(pcVar1);
    if (pcVar2 != (char *)0x0) {
      pcVar1 = pcVar2;
      func_0x000107c4c18c();
      func_0x000107c61180();
      func_0x000107c615e8(pcVar2);
      goto LAB_10383b5a4;
    }
  }
  pcVar1 = "begin()";
  func_0x0001000c10c0();
  func_0x000107c61180();
LAB_10383b5a4:
  *param_1 = pcVar1;
  return;
}



/* Entry: 10383b5bc; end: 10383b5c3;  */

void FUN_10383b5bc(undefined8 *param_1)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    pcVar3 = *(char **)(lVar1 + 0x18);
    func_0x000107c61174();
    func_0x000107c61574(lVar1);
    pcVar2 = pcVar3;
    func_0x000107c4b2ec();
    func_0x000107c61180();
    func_0x000107c61170(pcVar3);
    pcVar3 = pcVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(pcVar2);
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3;
      func_0x000107c4c18c();
      func_0x000107c61180();
      func_0x000107c615e8(pcVar3);
      goto LAB_10383b5a4;
    }
  }
  pcVar2 = "begin()";
  func_0x0001000c10c0();
  func_0x000107c61180();
LAB_10383b5a4:
  *param_1 = pcVar2;
  return;
}



/* Entry: 10383b5c4; end: 10383b62b;  */

void FUN_10383b5c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001007b6e3c(0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x00010388ced4(param_2,param_3);
  *param_1 = param_2;
  return;
}



/* Entry: 10383b62c; end: 10383b633;  */

void FUN_10383b62c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001007b6e3c(0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x00010388ced4(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 10383b634; end: 10383b76f;  */

void FUN_10383b634(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112fa0398,&UNK_10dc15fd0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  pcVar1 = FUN_10383bc94;
  func_0x0001000bdd8c(FUN_10383bc94,param_2);
  func_0x000103894904(0);
  func_0x000107c610f8();
  func_0x0001038948c8();
  *param_1 = pcVar1;
  return;
}



/* Entry: 10383b770; end: 10383b7a7;  */

void FUN_10383b770(undefined8 param_1)

{
  FUN_10388b170(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x00010388b0b4();
  return;
}



/* Entry: 10383b7a8; end: 10383b883;  */

void FUN_10383b7a8(undefined8 *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined1 auStack_78 [40];
  
  func_0x000103844ad4();
  uVar1 = 0x112fa0390;
  func_0x0001000285a8(0x112fa0390,&UNK_10dc152d0);
  pcVar2 = FUN_10383b884;
  func_0x0001000cb480(FUN_10383b884,0,uVar1);
  func_0x0001000d224c(auStack_78);
  FUN_103893e40(0);
  func_0x000107c610f8();
  func_0x000107c6157c(in_x3);
  func_0x000107c6157c(in_x4);
  func_0x000107c6157c(in_x5);
  func_0x000103890d38(pcVar2,auStack_78,in_x3,in_x4,in_x5,0);
  *param_1 = pcVar2;
  return;
}



/* Entry: 10383b884; end: 10383b897;  */

void FUN_10383b884(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = &PTR_DAT_1106a1938;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 10383b898; end: 10383b8cf;  */

void FUN_10383b898(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  *param_1 = puVar1;
  return;
}



/* Entry: 10383b8d0; end: 10383b9ef;  */

void FUN_10383b8d0(undefined8 *param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  uVar3 = param_4;
  uVar4 = param_5;
  func_0x0001000d224c(&uStack_68);
  uVar1 = 0x112f9fdd0;
  uStack_80 = 0xe0;
  func_0x0001000285a8();
  FUN_1038a5554();
  puVar2 = &uStack_88;
  uStack_88 = uVar1;
  uStack_78 = uVar3;
  uStack_70 = uVar4;
  func_0x000100854cb0(puVar2);
  func_0x000107c61170(uVar1);
  FUN_10381e510(uVar3,uVar4);
  FUN_1038a4550(0);
  func_0x000107c610f8();
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001038a159c(uStack_68,&PTR_DAT_1106a18f8,param_3 & 0x10101,param_4,param_5 & 0xffffffff,
                      param_6,puVar2,0,param_7);
  *param_1 = uStack_68;
  param_1[1] = &PTR_DAT_1106a2208;
  return;
}



/* Entry: 10383b9f0; end: 10383bb23;  */

void FUN_10383b9f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar2 = &uStack_70;
  func_0x0001000285a8(0x112fa03a8,&UNK_10dc15a70);
  uVar4 = 7;
  func_0x000107c613fc();
  pcVar1 = FUN_10383bb24;
  func_0x0001000bdd8c(FUN_10383bb24,0);
  uVar3 = 0x112f9fdd0;
  uStack_68 = 0xe0;
  func_0x0001000285a8();
  FUN_1038a5554();
  uStack_70 = uVar3;
  uStack_60 = uVar4;
  uStack_58 = param_5;
  func_0x000100854cb0(&uStack_70);
  func_0x000107c61170(uVar3);
  FUN_10381e510(uVar4,param_5);
  uVar3 = 0;
  FUN_10388caa4();
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x00010388bee8(pcVar1,param_2,param_3,puVar2,0);
  param_1[3] = uVar3;
  param_1[4] = &PTR_DAT_1106a17d8;
  param_1[5] = &PTR_DAT_1106a1800;
  *param_1 = pcVar1;
  return;
}



/* Entry: 10383bb24; end: 10383bb53;  */

void FUN_10383bb24(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b40c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = puVar1;
  return;
}



/* Entry: 10383bb54; end: 10383bbbf;  */

void FUN_10383bb54(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 10383bbc0; end: 10383bbdf;  */

void FUN_10383bbc0(void)

{
  FUN_10383adb4();
  return;
}



/* Entry: 10383bbe0; end: 10383bc27;  */

undefined8 FUN_10383bbe0(void)

{
  return 0;
}



/* Entry: 10383bc28; end: 10383bc53;  */

void FUN_10383bc28(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10383bc54; end: 10383bc73;  */

void FUN_10383bc54(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_x3;
  long unaff_x20;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar4 = &uStack_70;
  func_0x0001000285a8(0x112fa03a8,&UNK_10dc15a70);
  uVar6 = 7;
  func_0x000107c613fc();
  pcVar3 = FUN_10383bb24;
  func_0x0001000bdd8c(FUN_10383bb24,0);
  uVar5 = 0x112f9fdd0;
  uStack_68 = 0xe0;
  func_0x0001000285a8();
  FUN_1038a5554();
  uStack_70 = uVar5;
  uStack_60 = uVar6;
  uStack_58 = in_x3;
  func_0x000100854cb0(&uStack_70);
  func_0x000107c61170(uVar5);
  FUN_10381e510(uVar6,in_x3);
  uVar5 = 0;
  FUN_10388caa4();
  func_0x000107c613fc();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x00010388bee8(pcVar3,uVar1,uVar2,puVar4,0);
  param_1[3] = uVar5;
  param_1[4] = &PTR_DAT_1106a17d8;
  param_1[5] = &PTR_DAT_1106a1800;
  *param_1 = pcVar3;
  return;
}



/* Entry: 10383bc74; end: 10383bc93;  */

void FUN_10383bc74(void)

{
  func_0x000107c61168(&PTR_PTR_112fa1b10);
  return;
}



/* Entry: 10383bc94; end: 10383bcdf;  */

void FUN_10383bc94(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(&uStack_40);
  uVar1 = uStack_40;
  func_0x000107c614f0();
  uVar2 = *(undefined8 *)(lStack_38 + 8);
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  *param_1 = uStack_40;
  return;
}



/* Entry: 10383bce0; end: 10383d27b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10383bce0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,undefined8 param_8,undefined8 param_9
                  )

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined **ppuVar10;
  code *pcVar11;
  undefined *puVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  long lVar31;
  long lVar32;
  code *pcVar33;
  undefined *puVar34;
  code *pcVar35;
  undefined *puVar36;
  long lVar37;
  undefined *puVar38;
  undefined *puVar39;
  code *pcVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  long lVar46;
  undefined8 uVar47;
  long *plVar48;
  undefined *puVar49;
  long lVar50;
  long lVar51;
  undefined8 *puVar52;
  long unaff_x20;
  undefined8 uVar53;
  undefined *puVar54;
  long lVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined *puStack_528;
  undefined *puStack_400;
  undefined1 auStack_300 [40];
  undefined *apuStack_2d8 [3];
  undefined *puStack_2c0;
  undefined **ppuStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long *aplStack_2a0 [3];
  long lStack_288;
  undefined **ppuStack_280;
  undefined8 uStack_278;
  undefined1 uStack_270;
  undefined8 uStack_260;
  undefined **ppuStack_258;
  undefined8 uStack_250;
  char cStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long lStack_220;
  undefined1 uStack_218;
  code *pcStack_210;
  code *pcStack_208;
  undefined1 uStack_200;
  undefined1 auStack_1f8 [88];
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined1 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  code *pcStack_148;
  undefined1 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x000107c613fc();
  uVar3 = param_4;
  func_0x000107c4aeb0();
  func_0x000107c61180();
  uVar4 = param_5;
  func_0x000107c3e0b0();
  func_0x000107c61180();
  lVar5 = *(long *)(param_7 + _DAT_112fe9500);
  func_0x000107c61174();
  uVar6 = param_8;
  func_0x000107c4b09c();
  func_0x000107c61180();
  puVar7 = &UNK_11069cc20;
  func_0x000107c613fc(&UNK_11069cc20,0x18,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar6;
  uVar8 = 0x112fa03d0;
  func_0x0001000285a8(0x112fa03d0,&UNK_10dc15ff0);
  func_0x000107c613fc();
  func_0x000107c61174();
  pcVar9 = FUN_10383d2d4;
  func_0x0001000bdd8c();
  ppuVar10 = &PTR____CFConstantStringClassReference_110f310f8;
  func_0x000107c5faec();
  func_0x0001000285a8(0x112d382e8,&UNK_10d902020);
  func_0x000107c61534();
  pcVar11 = FUN_10383d3cc;
  func_0x0001000bdd8c(FUN_10383d3cc,0);
  puVar12 = &UNK_11069cc48;
  func_0x000107c613fc(&UNK_11069cc48,0x18,7);
  *(undefined8 *)(puVar12 + 0x10) = param_9;
  func_0x0001000285a8(0x112fa03c8,&UNK_10dc15780);
  func_0x000107c61534();
  func_0x000107c61174();
  pcVar13 = FUN_10383d448;
  func_0x0001000bdd8c(FUN_10383d448,puVar12);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_100 = 0;
  uStack_1a0 = 3;
  uStack_198 = 0;
  uStack_190 = 1;
  uStack_178 = 0;
  uStack_168 = 1;
  uStack_160 = 0x10383d3d4;
  uStack_158 = 0;
  uStack_140 = 1;
  uStack_130 = 0;
  uStack_138 = 1;
  uStack_128 = 0;
  plVar48 = (long *)(param_3 + _DAT_112fa2d40);
  ppuStack_188 = ppuVar10;
  puStack_180 = puVar7;
  pcStack_170 = pcVar11;
  pcStack_150 = pcVar13;
  pcStack_148 = pcVar9;
  func_0x0001000a8868(plVar48,plVar48[3]);
  uVar53 = *(undefined8 *)(param_1 + _DAT_112fa5728);
  func_0x0001000285a8(0x112d5d810,&UNK_10d923f50);
  func_0x000107c61174();
  uVar14 = uVar3;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  uVar15 = uVar14;
  func_0x0001000bda74();
  func_0x000107c61170(uVar14);
  puVar12 = PTR_PTR_1126ae558;
  func_0x000107c61168();
  uVar14 = uVar3;
  func_0x000107c4aeb4(uVar3);
  func_0x000107c61180();
  func_0x000107c451b0();
  func_0x000107c61180();
  func_0x000107c61170(uVar14);
  lVar51 = *plVar48;
  uVar14 = *(undefined8 *)(lVar51 + 0x10);
  lVar17 = *(long *)(lVar51 + 0x18);
  lVar55 = *(long *)(lVar51 + 0x20);
  puVar7 = *(undefined **)(lVar51 + 0x28);
  uVar18 = *(undefined8 *)(lVar51 + 0x30);
  uVar19 = *(undefined8 *)(lVar51 + 0x38);
  uVar20 = *(undefined8 *)(lVar51 + 0x40);
  uVar21 = *(undefined8 *)(lVar51 + 0x48);
  uVar22 = *(undefined8 *)(lVar51 + 0x50);
  uVar23 = *(undefined8 *)(lVar51 + 0x58);
  uVar24 = *(undefined8 *)(lVar51 + 0x60);
  lVar25 = *(long *)(lVar51 + 0x68);
  puVar49 = *(undefined **)(lVar51 + 0x70);
  FUN_103825850(&uStack_1a0,&uStack_278);
  lVar50 = *(long *)(lVar51 + 0x78);
  lVar16 = 0;
  func_0x00010384c030();
  lVar51 = lVar16;
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(uVar15);
  func_0x000107c61174();
  func_0x0001000d224c(&uStack_98);
  uVar42 = 0;
  uVar43 = 0;
  lVar46 = 0;
  uVar44 = 0;
  uVar45 = 0;
  uVar47 = 0;
  if ((char)uStack_98 == '\x01') {
    puVar54 = puVar7;
    func_0x000107c4b100(puVar7);
    func_0x000107c61180();
    FUN_1038233a8(&uStack_f8);
    func_0x000107c61170(puVar54);
    uVar42 = uStack_e0;
    uVar43 = uStack_f8;
    lVar46 = lStack_f0;
    uVar44 = uStack_e8;
    uVar45 = uStack_d0;
    uVar47 = uStack_d8;
  }
  uStack_c8 = uVar43;
  lStack_c0 = lVar46;
  uStack_b8 = uVar44;
  uStack_b0 = uVar42;
  uStack_a8 = uVar47;
  uStack_a0 = uVar45;
  if (cStack_240 == '\x01') {
    puVar54 = puVar7;
    func_0x000107c4b100();
    func_0x000107c61180();
    puVar26 = puVar54;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(puVar54);
    puStack_400 = puVar26;
    if (puVar26 != (undefined *)0x0) {
      puVar54 = puVar26;
      func_0x000107c4daf8();
      func_0x000107c615e8(puVar26);
      if ((int)puVar54 == 0) {
        puStack_400 = (undefined *)0x0;
        puVar54 = puVar26;
      }
      else {
        puStack_400 = puVar49;
        FUN_10384c71c();
        puVar54 = puStack_400;
        if (puStack_400 != (undefined *)0x0) {
          func_0x000107c615f0(puStack_400);
          func_0x000107c5bc1c();
        }
      }
    }
    *(undefined **)(lVar51 + 0x28) = puStack_400;
    if (puStack_400 == (undefined *)0x0) {
      FUN_103822e30();
      puStack_400 = (undefined *)0x0;
    }
    else {
      puVar54 = puStack_400;
      func_0x000107c615f0(puStack_400);
      FUN_103823038();
    }
    func_0x000107c6157c(puVar54);
    func_0x0001000285a8(0x112da9c48,&UNK_10dc15350);
    uVar27 = *(undefined8 *)(lVar55 + _DAT_113080ad0);
    func_0x0001000bda74(uVar27);
    func_0x000107c6157c();
    uVar1 = uStack_250;
    uVar29 = uStack_238;
    uVar30 = uStack_230;
    uVar2 = uStack_200;
  }
  else {
    puStack_400 = (undefined *)0x0;
    uVar27 = 0;
    puVar54 = (undefined *)0x0;
    *(undefined8 *)(lVar51 + 0x28) = 0;
    uVar1 = uStack_250;
    uVar29 = uStack_238;
    uVar30 = uStack_230;
    uVar2 = uStack_200;
  }
  if (lStack_228 == 0) {
    uVar56 = 0;
  }
  else {
    func_0x0001000d224c(&uStack_98);
    uVar56 = uStack_98;
  }
  FUN_1038796f4(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(uVar30);
  func_0x00010382597c(uVar43,lVar46,uVar44,uVar42,uVar47,uVar45);
  func_0x000107c6157c(uVar1);
  uVar28 = uVar15;
  func_0x000103878a74(uVar15,uVar29,uVar30,uVar1,puVar54,&uStack_c8,uVar27,uVar56,uVar2);
  func_0x000107c615e8(puStack_400);
  func_0x000107c61574(uVar27);
  func_0x000107c61574(puVar54);
  uVar27 = uVar14;
  func_0x000107c41284();
  func_0x000107c61180();
  uVar29 = uVar27;
  func_0x000107c4f750();
  func_0x000107c61180();
  func_0x000107c615e8(uVar27);
  uVar27 = uVar18;
  func_0x000107c4b2f8();
  func_0x000107c61180();
  if (lStack_220 == 0) {
    puVar54 = &UNK_11069cc70;
    func_0x000107c613fc(&UNK_11069cc70,0x18,7);
    *(undefined8 *)(puVar54 + 0x10) = uVar27;
    func_0x000107c613fc(uVar8,0x18,7);
    pcVar9 = (code *)0x10383d450;
    func_0x0001000bdd8c(0x10383d450,puVar54,uVar8);
  }
  else {
    func_0x000107c6157c(lStack_220);
    uVar8 = 0x112fa0410;
    func_0x0001000285a8(0x112fa0410,&UNK_10dc15370);
    pcVar9 = FUN_10384bf80;
    func_0x0001000cb480(FUN_10384bf80,0,uVar8);
    func_0x000107c61574(lStack_220);
    func_0x000107c61170(uVar27);
  }
  puVar54 = &UNK_11069cc98;
  func_0x000107c613fc(&UNK_11069cc98,0x18,7);
  func_0x000107c61614(puVar54 + 0x10,uVar4);
  puVar26 = &UNK_11069ccc0;
  func_0x000107c613fc(&UNK_11069ccc0,0x28,7);
  *(undefined **)(puVar26 + 0x10) = puVar54;
  *(code **)(puVar26 + 0x18) = pcVar9;
  *(undefined **)(puVar26 + 0x20) = puVar12;
  func_0x0001000285a8(0x112fa03d8,&UNK_10dc15310);
  func_0x000107c613fc();
  func_0x000107c61174();
  uVar8 = 0x10383d458;
  func_0x0001000bdd8c(0x10383d458,puVar26);
  if (lVar46 == 0) {
    puVar52 = (undefined8 *)0x0;
  }
  else {
    uStack_98 = uVar43;
    lStack_90 = lVar46;
    uStack_88 = uVar44;
    uStack_80 = uVar42;
    uStack_78 = uVar47;
    uStack_70 = uVar45;
    FUN_103883920(0);
    func_0x000107c610f8();
    puVar54 = puVar12;
    func_0x000107c61174(puVar12);
    func_0x000107c61434(lVar46);
    func_0x000107c61434(uVar42);
    func_0x000107c61434(uVar45);
    puVar52 = &uStack_98;
    FUN_1038831fc(puVar52,puVar54);
  }
  puVar54 = &UNK_11069cc98;
  func_0x000107c613fc(&UNK_11069cc98,0x18,7);
  func_0x000107c61614(puVar54 + 0x10,uVar4);
  uVar27 = 0x112fa03e0;
  func_0x0001000285a8(0x112fa03e0,&UNK_10dc15a80);
  func_0x000107c613fc();
  uVar30 = 0x10383d464;
  func_0x0001000bdd8c(0x10383d464,puVar54,uVar27);
  uVar27 = *(undefined8 *)(lVar5 + _DAT_112fe95f8);
  uVar56 = *(undefined8 *)(param_6 + _DAT_112f9f6e0);
  lVar31 = 0;
  FUN_10381fe7c();
  lVar32 = lVar31;
  func_0x000107c610f8();
  *(undefined8 *)(lVar32 + _DAT_112f9ffa0) = 0;
  *(undefined8 *)(lVar32 + _DAT_112f9ffa8) = 1;
  *(undefined8 *)(lVar32 + _DAT_112f9ffb0) = 0;
  *(undefined8 *)(lVar32 + _DAT_112f9ff88) = uVar27;
  *(undefined8 *)(lVar32 + _DAT_112f9ff90) = uVar30;
  *(undefined8 *)(lVar32 + _DAT_112f9ff98) = uVar56;
  puVar54 = PTR_s_init_1125d9248;
  lStack_2b0 = lVar32;
  lStack_2a8 = lVar31;
  func_0x000107c6157c(uVar27);
  func_0x000107c6157c(uVar30);
  func_0x000107c6157c(uVar56);
  plVar48 = &lStack_2b0;
  func_0x000107c61154(plVar48,puVar54);
  ppuStack_280 = &PTR_DAT_11069a800;
  lStack_288 = lVar31;
  func_0x000107c61574(uVar30);
  uVar27 = *(undefined8 *)(lVar17 + _DAT_113071300);
  aplStack_2a0[0] = plVar48;
  FUN_10383d480(aplStack_2a0,apuStack_2d8);
  puVar54 = &UNK_11069cce8;
  func_0x000107c613fc(&UNK_11069cce8,0x62,7);
  *(undefined8 *)(puVar54 + 0x10) = uVar27;
  *(undefined8 *)(puVar54 + 0x18) = uVar8;
  func_0x000100d5fe70(apuStack_2d8,puVar54 + 0x20);
  *(undefined8 *)(puVar54 + 0x48) = uVar29;
  *(undefined8 **)(puVar54 + 0x50) = puVar52;
  *(undefined8 *)(puVar54 + 0x58) = uStack_278;
  puVar54[0x60] = uStack_270;
  puVar54[0x61] = uStack_218;
  func_0x0001000285a8(0x112fa03e8,&UNK_10dc15320);
  func_0x000107c613fc();
  func_0x000107c61174(uVar27);
  func_0x000107c6157c(uVar8);
  func_0x000107c61174();
  func_0x000107c61174();
  puVar26 = (undefined *)0x10383d46c;
  func_0x0001000bdd8c(0x10383d46c,puVar54);
  pcVar11 = pcStack_208;
  pcVar9 = pcStack_210;
  if (pcStack_210 == (code *)0x1) {
    func_0x0001000285a8(0x112f6cf68,&UNK_10dbcadf0);
    uVar27 = uVar22;
    func_0x000107c3ee24(uVar22);
    func_0x000107c61180();
    uVar30 = uVar27;
    func_0x0001000bda74();
    func_0x000107c61170(uVar27);
    uVar27 = 0x112d3b7d8;
    func_0x0001000285a8(0x112d3b7d8,&UNK_10d920690);
    pcVar9 = FUN_10384c61c;
    func_0x0001000cb480(FUN_10384c61c,0,uVar27);
    pcVar11 = FUN_10384c65c;
    func_0x0001000cb480(FUN_10384c65c,0,uVar27);
    func_0x000107c61574(uVar30);
  }
  func_0x0001000285a8(0x112e5b730,&UNK_10dc15a90);
  FUN_1038259d8(pcStack_210,pcStack_208);
  uVar27 = uVar20;
  func_0x000107c4c974(uVar20);
  func_0x000107c61180();
  uVar30 = uVar27;
  func_0x0001000bda74();
  func_0x000107c61170(uVar27);
  uVar27 = 0x112e5b738;
  func_0x0001000285a8(0x112e5b738,&UNK_10da61720);
  pcVar13 = FUN_10384b8d8;
  func_0x0001000cb480(FUN_10384b8d8,0,uVar27);
  func_0x000107c61574(uVar30);
  pcVar33 = FUN_10384b914;
  func_0x0001000cb480(FUN_10384b914,0,&UNK_11077ec38);
  puVar54 = &UNK_11069cd10;
  func_0x000107c613fc(&UNK_11069cd10,0x18,7);
  func_0x000107c61614(puVar54 + 0x10,uVar19);
  func_0x0001000285a8(0x112d53a70,&UNK_10d91a680);
  func_0x000107c613fc();
  uVar27 = 0x10383d470;
  func_0x0001000bdd8c(0x10383d470,puVar54);
  puVar54 = puVar7;
  func_0x000107c4b100();
  func_0x000107c61180();
  puVar34 = puVar54;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar54);
  if (puVar34 == (undefined *)0x0) {
    puStack_528 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar54 = puVar34;
    func_0x000107c5b458();
    func_0x000107c61180();
    puStack_528 = puVar54;
    func_0x000107c5fc54();
    func_0x000107c61170(puVar54);
  }
  func_0x0001000285a8(0x112d4f8d0,&UNK_10dc15330);
  uVar30 = uVar23;
  func_0x000107c5c360(uVar23);
  func_0x000107c61180();
  uVar56 = uVar30;
  func_0x0001000bda74();
  func_0x000107c61170(uVar30);
  uVar30 = 0x112d5ba30;
  func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
  pcVar35 = FUN_10384ba24;
  func_0x0001000cb480(FUN_10384ba24,0,uVar30);
  func_0x000107c61574(uVar56);
  puVar54 = &UNK_11069cd38;
  func_0x000107c613fc(&UNK_11069cd38,0x20,7);
  *(undefined8 *)(puVar54 + 0x10) = uVar24;
  *(undefined8 *)(puVar54 + 0x18) = uVar21;
  func_0x0001000285a8(0x112fa03f0,&UNK_10dc15340);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar30 = 0x10383d478;
  func_0x0001000bdd8c(0x10383d478,puVar54);
  puVar36 = (undefined *)0x0;
  FUN_1038806d8();
  puVar54 = puVar36;
  func_0x000107c613fc();
  FUN_103825a1c(auStack_1f8,apuStack_2d8);
  if (puStack_2c0 == (undefined *)0x0) {
    FUN_103819ed4();
  }
  else {
    func_0x000100d5fe70(apuStack_2d8,auStack_300);
    lVar32 = 0x112fa0408;
    func_0x0001000285a8(0x112fa0408,&UNK_10dc15360);
    func_0x000107c61534();
    *(undefined8 *)(lVar32 + 0x18) = 2;
    *(undefined8 *)(lVar32 + 0x10) = 1;
    *(undefined8 *)(lVar32 + 0x20) = uStack_260;
    *(undefined ***)(lVar32 + 0x28) = ppuStack_258;
    FUN_10383d480(auStack_300,lVar32 + 0x30);
    func_0x000107c61434(ppuStack_258);
    FUN_103819ed4();
    func_0x000107c61588(lVar32);
    FUN_10383d558((undefined8 *)(lVar32 + 0x20),0x112f9f310,&UNK_10dc15ac0);
    func_0x0001000834e4(auStack_300);
  }
  lVar32 = lVar25;
  func_0x000107c4b3b8();
  func_0x000107c61180();
  lVar31 = lVar32;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar32);
  func_0x0001000285a8(0x112eb17c0,&UNK_10dac6140);
  if (lVar31 == 0) {
    puVar39 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x000107c610f8();
    func_0x000107c453e4();
    ppuVar10 = apuStack_2d8;
    apuStack_2d8[0] = puVar39;
    func_0x000100854cb0();
    func_0x000107c61170(puVar39);
  }
  else {
    lVar32 = lVar31;
    func_0x000107c5006c(lVar31);
    func_0x000107c61180();
    lVar37 = lVar32;
    func_0x0001000b637c();
    func_0x000107c61170(lVar32);
    func_0x0001000d224c(apuStack_2d8);
    puVar39 = apuStack_2d8[0];
    func_0x000100471e0c(apuStack_2d8[0],1);
    func_0x000107c61574(lVar37);
    func_0x000107c615e8(apuStack_2d8[0]);
    puVar38 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x000107c610f8();
    func_0x000107c453e4();
    ppuVar10 = apuStack_2d8;
    apuStack_2d8[0] = puVar38;
    func_0x0001006c71a4();
    func_0x000107c61170(puVar38);
    func_0x000107c615e8(lVar31);
    func_0x000107c61574(puVar39);
  }
  func_0x000107c61434(ppuStack_258);
  func_0x000107c6157c(ppuVar10);
  func_0x000107c6157c(pcVar13);
  func_0x000107c6157c(pcVar35);
  func_0x000107c6157c(pcVar33);
  func_0x000107c6157c(uVar27);
  func_0x000107c6157c(uVar30);
  pcVar40 = FUN_10384bbe4;
  func_0x0001000cb480(FUN_10384bbe4,0,&UNK_11077ebd0);
  ppuStack_2b8 = &PTR_DAT_1106a0c40;
  apuStack_2d8[0] = puVar54;
  puStack_2c0 = puVar36;
  func_0x000107c6157c();
  uVar56 = 0x10384bc2c;
  func_0x0001000cb480(0x10384bc2c,0,PTR___sSbN_11034dd40);
  uVar57 = *(undefined8 *)(lVar50 + _DAT_112fa6450);
  uVar41 = 0;
  FUN_10388ac54();
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x00010382597c(uVar43,lVar46,uVar44,uVar42,uVar47,uVar45);
  func_0x000107c6157c(pcVar11);
  func_0x000107c6157c(uVar1);
  func_0x000107c61174();
  func_0x000107c6157c(uVar57);
  func_0x000107c6157c(puVar26);
  func_0x000107c6157c(pcVar9);
  puVar36 = puVar26;
  func_0x000103888844(puVar26,pcVar13,uVar29,puStack_528,puVar12,pcVar9,pcVar11,ppuVar10,pcVar35,
                      pcVar33,uVar27,uVar30,uStack_260,ppuStack_258,pcVar40,apuStack_2d8,uVar56,
                      uVar1,&uStack_c8,uVar57,uVar2);
  ppuStack_2b8 = &PTR_DAT_1106a1598;
  puStack_2c0 = (undefined *)uVar41;
  func_0x000107c61574(puVar54);
  func_0x000107c61574(uVar30);
  func_0x000107c61574(uVar27);
  func_0x000107c61574(pcVar33);
  func_0x000107c61574(pcVar35);
  func_0x000107c61574(pcVar13);
  func_0x000107c615e8(puVar34);
  func_0x000107c61574(ppuVar10);
  func_0x000103825a6c(uVar43,lVar46,uVar44,uVar42,uVar47,uVar45);
  apuStack_2d8[0] = puVar36;
  func_0x0001000285a8(0x112fa0400,&UNK_10dc15ab0);
  uVar42 = uVar29;
  func_0x000107c3f6e8();
  func_0x000107c61180();
  uVar43 = uVar42;
  func_0x0001000bda74();
  func_0x000107c61170(uVar42);
  func_0x0001000285a8(0x112da9c48,&UNK_10dc15350);
  uVar44 = *(undefined8 *)(lVar55 + _DAT_113080ad0);
  func_0x000107c61174(uVar44);
  uVar42 = uVar44;
  func_0x0001000bda74();
  func_0x000107c61170(uVar44);
  FUN_10383d480(apuStack_2d8,auStack_300);
  uVar45 = 0;
  FUN_103872568();
  uVar44 = uVar45;
  func_0x000107c610f8();
  FUN_1038714fc(uVar43,uVar42,auStack_300,uVar44);
  *(undefined8 *)(lVar51 + 0x10) = uVar53;
  *(undefined8 *)(lVar51 + 0x18) = uVar43;
  func_0x0001000285a8(0x112f421e0,&UNK_10db8f110);
  func_0x000107c61174(uVar53);
  func_0x000107c61174(uVar43);
  uVar42 = uVar4;
  func_0x000107c3e060();
  func_0x000107c61180();
  uVar44 = uVar42;
  func_0x0001000bda74();
  func_0x000107c61170();
  FUN_1038714a4();
  lVar46 = 0;
  func_0x00010384cca8();
  func_0x000107c613fc();
  uVar47 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  func_0x000107c61170(uVar28);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar52);
  func_0x000107c61574(uVar8);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar24);
  func_0x000107c61574(pcVar11);
  func_0x000107c61574(pcVar9);
  func_0x000107c61170(uVar53);
  func_0x000107c61170(uVar43);
  func_0x000107c61170(lVar55);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(lVar50);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(puVar49);
  func_0x000107c615e8(puStack_400);
  *(undefined8 *)(lVar46 + 0x10) = uVar44;
  *(undefined8 *)(lVar46 + 0x18) = uVar42;
  *(undefined **)(lVar46 + 0x20) = puVar26;
  *(undefined8 *)(lVar46 + 0x28) = uVar47;
  func_0x0001000834e4(apuStack_2d8);
  func_0x0001000834e4(aplStack_2a0);
  func_0x000103825aa8(&uStack_278);
  *(long *)(lVar51 + 0x20) = lVar46;
  func_0x000107c61574(uVar15);
  *(long *)(unaff_x20 + 0x28) = lVar16;
  *(undefined ***)(unaff_x20 + 0x30) = &PTR_DAT_11069df40;
  func_0x000107c61170(uVar53);
  func_0x000107c61574(uVar15);
  func_0x000107c61170(puVar12);
  plVar48 = (long *)(unaff_x20 + 0x10);
  *plVar48 = lVar51;
  func_0x0001000a8868(plVar48,lVar16);
  lVar55 = *plVar48;
  FUN_103871654();
  uVar8 = *(undefined8 *)(lVar55 + 0x10);
  uVar14 = *(undefined8 *)(lVar55 + 0x18);
  ppuStack_258 = &PTR_DAT_11069f880;
  uStack_278 = uVar14;
  uStack_260 = uVar45;
  FUN_10388af40(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar14);
  puVar52 = &uStack_278;
  func_0x00010388ae60(puVar52);
  func_0x000107c4fba8(uVar8);
  func_0x000107c61170(puVar52);
  FUN_10384c9b0();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar3);
  func_0x000103825aa8(&uStack_1a0);
  return unaff_x20;
}



/* Entry: 10383d27c; end: 10383d2d3;  */

void FUN_10383d27c(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  func_0x00010381dc70();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11069a700;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 10383d2d4; end: 10383d2db;  */

void FUN_10383d2d4(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = 0;
  func_0x00010381dc70();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11069a700;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar3);
  return;
}



/* Entry: 10383d2dc; end: 10383d37f;  */

undefined8 FUN_10383d2dc(void)

{
  long unaff_x20;
  undefined1 auStack_58 [24];
  long lStack_40;
  long lStack_38;
  
  func_0x0001000a8868(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100c82230();
  func_0x000104875e28(auStack_58);
  if (lStack_40 == 0) {
    FUN_10383d558(auStack_58,0x112fa0418,&UNK_10dc15790);
  }
  else {
    func_0x0001000a8868(auStack_58,lStack_40);
    (**(code **)(lStack_38 + 0x30))(lStack_40,lStack_38);
    func_0x0001000834e4(auStack_58);
  }
  return 0;
}



/* Entry: 10383d380; end: 10383d3a3;  */

void FUN_10383d380(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10383d3a4; end: 10383d3a7;  */

void FUN_10383d3a4(void)

{
  return;
}



/* Entry: 10383d3a8; end: 10383d3cb;  */

undefined8 FUN_10383d3a8(void)

{
  FUN_10383d2dc();
  return 0;
}



/* Entry: 10383d3cc; end: 10383d3d7;  */

void FUN_10383d3cc(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10383d3d8; end: 10383d447;  */

void FUN_10383d3d8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c4b100();
  func_0x000107c61180();
  lVar1 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c4db00();
    func_0x000107c615e8(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 10383d448; end: 10383d47f;  */

void FUN_10383d448(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4b100();
  func_0x000107c61180();
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c4db00();
    func_0x000107c615e8(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 10383d480; end: 10383d4c3;  */

long FUN_10383d480(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10383d4c4; end: 10383d53b;  */

void FUN_10383d4c4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10383d53c; end: 10383d557;  */

void FUN_10383d53c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 auStack_88 [40];
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x60);
  uVar4 = *(undefined1 *)(unaff_x20 + 0x61);
  uVar6 = 0x112f9f1c8;
  func_0x0001000285a8(0x112f9f1c8,&UNK_10dc14750);
  func_0x0001000bda74(uVar5,uVar6);
  FUN_10384c884(unaff_x20 + 0x20,auStack_88);
  uVar6 = 0;
  FUN_1038746d0();
  func_0x000107c610f8();
  func_0x000107c615f0(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c61174(uVar7);
  func_0x000103872c28(uVar5,uVar1,auStack_88,uVar7,uVar2,uVar8,uVar3,uVar4);
  param_1[3] = uVar6;
  param_1[4] = &PTR_DAT_11069fa20;
  *param_1 = uVar5;
  return;
}



/* Entry: 10383d558; end: 10383d597;  */

undefined8 FUN_10383d558(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10383d598; end: 10383d5b7;  */

void FUN_10383d598(void)

{
  func_0x000107c61168(&PTR_PTR_112fa1be0);
  return;
}


