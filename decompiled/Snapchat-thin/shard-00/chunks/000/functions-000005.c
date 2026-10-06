/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10004e56c; end: 10004e97b;  */

/* WARNING: Possible PIC construction at 0x00010004e8a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010004ea34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010004e8a4) */
/* WARNING: Removing unreachable block (ram,0x00010004e8dc) */
/* WARNING: Removing unreachable block (ram,0x00010004e95c) */
/* WARNING: Removing unreachable block (ram,0x00010004e970) */
/* WARNING: Removing unreachable block (ram,0x00010004e974) */
/* WARNING: Removing unreachable block (ram,0x00010004e8bc) */
/* WARNING: Removing unreachable block (ram,0x00010004ea38) */

void FUN_10004e56c(void)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  char **ppcVar5;
  char **ppcVar6;
  undefined8 *puVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 *puStack_238;
  uint uStack_230;
  undefined8 auStack_228 [20];
  char *apcStack_188 [2];
  ulong uStack_178;
  undefined *puStack_170;
  undefined **ppuStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  apcStack_188[0] = "none";
  apcStack_188[1] = (char *)0x4;
  uStack_178 = uStack_178 & 0xffffffff00000000;
  puStack_170 = &UNK_10f5aebee;
  ppuStack_168 = (undefined **)0x1b;
  puStack_160 = &UNK_10f5aec0a;
  uStack_158 = 10;
  uStack_150 = 1;
  puStack_148 = &UNK_10f5aec15;
  uStack_140 = 0x14;
  puStack_138 = &UNK_10f5aec2a;
  uStack_130 = 0x12;
  uStack_128 = 2;
  puStack_120 = &UNK_10f5aec3d;
  uStack_118 = 0x12;
  puStack_110 = &UNK_10f5aec50;
  uStack_108 = 0xb;
  uStack_100 = 3;
  puStack_f8 = &UNK_10f5aec5c;
  uStack_f0 = 0x19;
  puStack_e8 = &UNK_10f5aec76;
  uStack_e0 = 5;
  uStack_d8 = 4;
  puStack_d0 = &UNK_10f5aec7c;
  uStack_c8 = 0x17;
  puStack_c0 = &UNK_10f5aec94;
  uStack_b8 = 4;
  uStack_b0 = 5;
  puStack_a8 = &UNK_10f5aec99;
  uStack_a0 = 0x12;
  puStack_98 = &UNK_10f5aecac;
  uStack_90 = 0xb;
  uStack_88 = 6;
  puStack_80 = &UNK_10f5aecb8;
  uStack_78 = 0x30;
  FUN_100048910(&puStack_238,apcStack_188,7);
  puVar4 = (undefined8 *)0x1137e5450;
  FUN_100045fdc(0x1137e5450,0,0);
  *(undefined4 *)(puVar4 + 0x10) = 0;
  puVar4[0x11] = &PTR_DAT_110b40c18;
  puVar4[0x12] = 0;
  *puVar4 = &PTR_DAT_110b40b00;
  puVar4[0x13] = &PTR_DAT_110b40bb0;
  puVar4[0x14] = puVar4;
  puVar4[0x15] = puVar4 + 0x17;
  puVar4[0x16] = 0x800000000;
  puVar4[0x47] = &PTR_DAT_110b40ca0;
  puVar4[0x4a] = puVar4 + 0x47;
  FUN_10004687c();
  uRam00000001137e545a = uRam00000001137e545a & 0xffbf | 0x20;
  puRam00000001137e5470 = &UNK_10f5aebd5;
  uRam00000001137e5478 = 0x18;
  uRam00000001137e54d0 = 0;
  uRam00000001137e54e4 = 1;
  uRam00000001137e54e0 = 0;
  if (uStack_230 != 0) {
    puVar7 = puStack_238 + (ulong)uStack_230 * 5;
    puVar4 = puStack_238;
    do {
      ppcVar5 = ppcRam00000001137e54f8;
      pcVar1 = (char *)*puVar4;
      uVar2 = puVar4[1];
      apcStack_188[0] = pcVar1;
      apcStack_188[1] = (char *)uVar2;
      puStack_170 = (undefined *)puVar4[4];
      uStack_178 = puVar4[3];
      ppuStack_168 = &PTR_DAT_110b40c18;
      puStack_160 = (undefined *)CONCAT35(puStack_160._5_3_,0x100000000);
      puStack_160 = (undefined *)CONCAT44(puStack_160._4_4_,*(undefined4 *)(puVar4 + 2));
      if (uRam00000001137e5500 < uRam00000001137e5504) {
LAB_10004e7bc:
        ppcVar5 = apcStack_188;
      }
      else {
        if ((apcStack_188 < ppcRam00000001137e54f8) ||
           (ppcRam00000001137e54f8 + (ulong)uRam00000001137e5500 * 6 <= apcStack_188)) {
          func_0x000107c2afc4((ulong)uRam00000001137e5500 + 1);
          goto LAB_10004e7bc;
        }
        func_0x000107c2afc4((ulong)uRam00000001137e5500 + 1);
        ppcVar5 = (char **)((long)ppcRam00000001137e54f8 + ((long)apcStack_188 - (long)ppcVar5));
      }
      ppcVar6 = ppcRam00000001137e54f8 + (ulong)uRam00000001137e5500 * 6;
      pcVar8 = *ppcVar5;
      pcVar10 = ppcVar5[3];
      pcVar9 = ppcVar5[2];
      ppcVar6[1] = ppcVar5[1];
      *ppcVar6 = pcVar8;
      ppcVar6[3] = pcVar10;
      ppcVar6[2] = pcVar9;
      ppcVar6[4] = (char *)&PTR_DAT_110b40c80;
      uVar3 = *(undefined4 *)(ppcVar5 + 5);
      *(undefined1 *)((long)ppcVar6 + 0x2c) = *(undefined1 *)((long)ppcVar5 + 0x2c);
      *(undefined4 *)(ppcVar6 + 5) = uVar3;
      ppcVar6[4] = (char *)&PTR_DAT_110b40c18;
      uRam00000001137e5500 = uRam00000001137e5500 + 1;
      FUN_100049280(uRam00000001137e54f0,pcVar1,uVar2);
      puVar4 = puVar4 + 5;
    } while (puVar4 != puVar7);
  }
  FUN_100046b10(0x1137e5450);
  if (puStack_238 != auStack_228) {
    func_0x000107c60fd0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&DAT_109d36dd0,0x1137e5450,0x100000000);
  return;
}



/* Entry: 10004e97c; end: 10004eb5b;  */

/* WARNING: Possible PIC construction at 0x00010004ea34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010004ea38) */

void FUN_10004e97c(void)

{
  FUN_100045fdc(0x1137e56a8,0,0);
  uRam00000001137e5728 = 0;
  ppuRam00000001137e5730 = &PTR_DAT_110b3fac8;
  uRam00000001137e5738 = 0;
  ppuRam00000001137e56a8 = &PTR_DAT_110b5be10;
  ppuRam00000001137e5740 = &PTR_DAT_110b5b9a8;
  ppuRam00000001137e5748 = &PTR_DAT_110b3fb30;
  uRam00000001137e5760 = 0x1137e5748;
  FUN_10004687c();
  uRam00000001137e5728 = 0;
  uRam00000001137e5738 = CONCAT62(uRam00000001137e5738._2_6_,0x100);
  uRam00000001137e56b2 = uRam00000001137e56b2 & 0xffbf | 0x20;
  puRam00000001137e56c8 = &UNK_10f5aecfd;
  uRam00000001137e56d0 = 0x1d;
  FUN_100046b10(0x1137e56a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&DAT_109d2f60c,0x1137e56a8,0x100000000);
  return;
}



/* Entry: 10004eb5c; end: 10004ec5f;  */

void FUN_10004eb5c(void)

{
  FUN_100045fdc(0x1138339b8,0,0);
  uRam0000000113833a38 = 0;
  ppuRam0000000113833a40 = &PTR_DAT_110b3fac8;
  uRam0000000113833a48 = 0;
  ppuRam00000001138339b8 = &PTR_DAT_110b5be10;
  ppuRam0000000113833a50 = &PTR_DAT_110b5b9a8;
  ppuRam0000000113833a58 = &PTR_DAT_110b3fb30;
  uRam0000000113833a70 = 0x113833a58;
  FUN_10004687c();
  uRam0000000113833a38 = 1;
  uRam0000000113833a48 = CONCAT62(uRam0000000113833a48._2_6_,0x101);
  uRam00000001138339c2 = uRam00000001138339c2 & 0xffbf | 0x20;
  FUN_100046b10(0x1138339b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&DAT_109d2f60c,0x1138339b8,0x100000000);
  return;
}



/* Entry: 10004ec60; end: 10004ed67;  */

void FUN_10004ec60(void)

{
  FUN_100045fdc(0x1137e5828,0,0);
  uRam00000001137e58a8 = 0;
  ppuRam00000001137e58b0 = &PTR_DAT_110b3fc50;
  uRam00000001137e58b8 = 0;
  ppuRam00000001137e5828 = &PTR_DAT_110b5bec0;
  ppuRam00000001137e58c0 = &PTR_DAT_110b5bfa0;
  ppuRam00000001137e58c8 = &PTR_DAT_110b3fbc0;
  uRam00000001137e58e0 = 0x1137e58c8;
  FUN_10004687c();
  uRam00000001137e5832 = uRam00000001137e5832 & 0xffbf | 0x20;
  uRam00000001137e58a8 = 0x14;
  uRam00000001137e58b8 = CONCAT35(uRam00000001137e58b8._5_3_,0x100000000);
  uRam00000001137e58b8 = CONCAT44(uRam00000001137e58b8._4_4_,0x14);
  FUN_100046b10(0x1137e5828);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&DAT_109d2f8c4,0x1137e5828,0x100000000);
  return;
}



/* Entry: 10004ed68; end: 10004ee7f;  */

void FUN_10004ed68(void)

{
  FUN_100045fdc(0x1137e58e8,0,0);
  uRam00000001137e5968 = 0;
  ppuRam00000001137e5970 = &PTR_DAT_110b3fc50;
  uRam00000001137e5978 = 0;
  ppuRam00000001137e58e8 = &PTR_DAT_110b5bec0;
  ppuRam00000001137e5980 = &PTR_DAT_110b5bfa0;
  ppuRam00000001137e5988 = &PTR_DAT_110b3fbc0;
  uRam00000001137e59a0 = 0x1137e5988;
  FUN_10004687c();
  uRam00000001137e58f2 = uRam00000001137e58f2 & 0xffbf | 0x20;
  puRam00000001137e5908 = &UNK_10f5aedbc;
  uRam00000001137e5910 = 0x3c;
  uRam00000001137e5968 = 8;
  uRam00000001137e5978 = CONCAT35(uRam00000001137e5978._5_3_,0x100000000);
  uRam00000001137e5978 = CONCAT44(uRam00000001137e5978._4_4_,8);
  FUN_100046b10(0x1137e58e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&DAT_109d2f8c4,0x1137e58e8,0x100000000);
  return;
}



/* Entry: 10004ee80; end: 10004f03f;  */

/* WARNING: Possible PIC construction at 0x00010004ef40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010004ef44) */

void FUN_10004ee80(void)

{
  FUN_100045fdc(0x1137e59a8,0,0);
  uRam00000001137e5a28 = 0;
  ppuRam00000001137e5a30 = &PTR_DAT_110b3fac8;
  uRam00000001137e5a38 = 0;
  ppuRam00000001137e59a8 = &PTR_DAT_110b5be10;
  ppuRam00000001137e5a40 = &PTR_DAT_110b5b9a8;
  ppuRam00000001137e5a48 = &PTR_DAT_110b3fb30;
  uRam00000001137e5a60 = 0x1137e5a48;
  FUN_10004687c();
  uRam00000001137e5a28 = 0;
  uRam00000001137e5a38 = CONCAT62(uRam00000001137e5a38._2_6_,0x100);
  uRam00000001137e59b2 = uRam00000001137e59b2 & 0xffbf | 0x20;
  puRam00000001137e59c8 = &UNK_10f5aefe8;
  uRam00000001137e59d0 = 0x42;
  FUN_100046b10(0x1137e59a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&DAT_109d2f60c,0x1137e59a8,0x100000000);
  return;
}



/* Entry: 10004f040; end: 10004f11f;  */

void FUN_10004f040(void)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 uStack_49;
  undefined1 *puStack_48;
  
  uStack_49 = 0;
  uStack_50 = 1;
  puStack_60 = &UNK_10f5af0b3;
  uStack_58 = 0x29;
  puStack_48 = &uStack_49;
  FUN_10004bf5c(0x1137e5b28,&UNK_10f5af096,&puStack_48,&uStack_50,&puStack_60);
  func_0x000107c60e34(&DAT_109d2f60c,0x1137e5b28,0x100000000);
  uStack_49 = 0;
  uStack_50 = 1;
  puStack_60 = &UNK_10f5af0fa;
  uStack_58 = 0x58;
  puStack_48 = &uStack_49;
  FUN_10004bf5c(0x1137e5be8,&UNK_10f5af0dd,&puStack_48,&uStack_50,&puStack_60);
  func_0x000107c60e34(&DAT_109d2f60c,0x1137e5be8,0x100000000);
  return;
}



/* Entry: 10004f120; end: 10004f3bb;  */

/* WARNING: Possible PIC construction at 0x00010004f1e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010004f280: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010004f1ec) */
/* WARNING: Removing unreachable block (ram,0x00010004f284) */

void FUN_10004f120(void)

{
  FUN_100045fdc(0x1137e5ca8,0,0);
  uRam00000001137e5d28 = 0;
  ppuRam00000001137e5d30 = &PTR_DAT_110b3fc50;
  uRam00000001137e5d38 = 0;
  ppuRam00000001137e5ca8 = &PTR_DAT_110b5bec0;
  ppuRam00000001137e5d40 = &PTR_DAT_110b5bfa0;
  ppuRam00000001137e5d48 = &PTR_DAT_110b3fbc0;
  uRam00000001137e5d60 = 0x1137e5d48;
  FUN_10004687c();
  uRam00000001137e5cb2 = uRam00000001137e5cb2 & 0xffbf | 0x20;
  uRam00000001137e5d28 = 0x19;
  uRam00000001137e5d38 = CONCAT35(uRam00000001137e5d38._5_3_,0x100000000);
  uRam00000001137e5d38 = CONCAT44(uRam00000001137e5d38._4_4_,0x19);
  puRam00000001137e5cc8 = &UNK_10f5af16d;
  uRam00000001137e5cd0 = 0x47;
  FUN_100046b10(0x1137e5ca8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&DAT_109d2f8c4,0x1137e5ca8,0x100000000);
  return;
}



/* Entry: 10004f3bc; end: 10004f50f;  */

void FUN_10004f3bc(void)

{
  undefined8 *puVar1;
  
  puRam00000001137e5ee8 = &UNK_10f5af6fd;
  uRam00000001137e5ef0 = 6;
  puRam00000001137e5ef8 = &UNK_10f5af704;
  puRam00000001137e5f08 = &UNK_109d5db94;
  uRam00000001137e5f18 = 0x1137e5ee8;
  puVar1 = (undefined8 *)0x1132fee90;
  if (puRam00000001132fee98 != (undefined8 *)0x0) {
    puVar1 = puRam00000001132fee98;
  }
  *puVar1 = 0x1137e5f10;
  puRam00000001137e5f20 = &UNK_10f5af728;
  uRam00000001137e5f00 = 0x23;
  uRam00000001137e5f28 = 5;
  puRam00000001137e5f30 = &UNK_10f5af72e;
  uRam00000001137e5f38 = 0x18;
  puRam00000001137e5f40 = &UNK_109d5dcd0;
  uRam00000001137e5f50 = 0x1137e5f20;
  uRam00000001137e5f48 = 0x1137e5f80;
  uRam00000001137e5f10 = 0x1137e5f48;
  puRam00000001137e5f58 = &UNK_10f5af747;
  uRam00000001137e5f60 = 0xc;
  puRam00000001137e5f68 = &UNK_10f5af754;
  puRam00000001137e5f90 = &UNK_10f5af787;
  uRam00000001137e5f70 = 0x32;
  puRam00000001137e5f78 = &UNK_109d5dd8c;
  uRam00000001137e5f98 = 0x12;
  puRam00000001137e5fa0 = &UNK_10f5af79a;
  uRam00000001137e5fa8 = 0x22;
  puRam00000001137e5fb0 = &UNK_109d5de44;
  uRam00000001137e5fc0 = 0x1137e5f90;
  puRam00000001137e5fc8 = &UNK_10f5af7bd;
  uRam00000001137e5f80 = 0x1137e5fb8;
  uRam00000001137e5f88 = 0x1137e5f58;
  uRam00000001137e5fd0 = 7;
  puRam00000001137e5fd8 = &UNK_10f5af7c5;
  uRam00000001137e5fe0 = 0x15;
  puRam00000001137e5fe8 = &UNK_109d5df18;
  uRam00000001137e5ff0 = 0;
  uRam00000001137e5ff8 = 0x1137e5fc8;
  uRam00000001137e5fb8 = 0x1137e5ff0;
  puRam00000001132fee98 = (undefined8 *)0x1137e5ff0;
  return;
}



/* Entry: 10004f510; end: 10004f61f;  */

void FUN_10004f510(void)

{
  FUN_100045fdc(0x1137e6000,0,0);
  uRam00000001137e6080 = 0;
  ppuRam00000001137e6088 = &PTR_DAT_110b3fac8;
  uRam00000001137e6090 = 0;
  ppuRam00000001137e6000 = &PTR_DAT_110b5be10;
  ppuRam00000001137e6098 = &PTR_DAT_110b5b9a8;
  ppuRam00000001137e60a0 = &PTR_DAT_110b3fb30;
  uRam00000001137e60b8 = 0x1137e60a0;
  FUN_10004687c();
  puRam00000001137e6020 = &UNK_10f5af7e8;
  uRam00000001137e6028 = 0x29;
  uRam00000001137e6080 = 0;
  uRam00000001137e6090 = CONCAT62(uRam00000001137e6090._2_6_,0x100);
  uRam00000001137e600a = uRam00000001137e600a & 0xffbf | 0x20;
  FUN_100046b10(0x1137e6000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&DAT_109d2f60c,0x1137e6000,0x100000000);
  return;
}



/* Entry: 10004f620; end: 10004f723;  */

void FUN_10004f620(void)

{
  FUN_100045fdc(0x113833a78,0,0);
  uRam0000000113833af8 = 0;
  ppuRam0000000113833b00 = &PTR_DAT_110b3fac8;
  uRam0000000113833b08 = 0;
  ppuRam0000000113833a78 = &PTR_DAT_110b5be10;
  ppuRam0000000113833b10 = &PTR_DAT_110b5b9a8;
  ppuRam0000000113833b18 = &PTR_DAT_110b3fb30;
  uRam0000000113833b30 = 0x113833b18;
  FUN_10004687c();
  uRam0000000113833a82 = uRam0000000113833a82 & 0xffbf | 0x20;
  puRam0000000113833a98 = &UNK_10f5afe2d;
  uRam0000000113833aa0 = 0x2b;
  FUN_100046b10(0x113833a78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&DAT_109d2f60c,0x113833a78,0x100000000);
  return;
}



/* Entry: 10004f724; end: 10004f9cb;  */

/* WARNING: Possible PIC construction at 0x00010004f75c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010004f77c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010004f82c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010004f8bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010004f830) */
/* WARNING: Removing unreachable block (ram,0x00010004f780) */
/* WARNING: Removing unreachable block (ram,0x00010004f760) */
/* WARNING: Removing unreachable block (ram,0x00010004f8c0) */

void FUN_10004f724(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&UNK_109d80eac,0x1137e60c0,0x100000000);
  return;
}



/* Entry: 10004f9cc; end: 10004fa5b;  */

void FUN_10004f9cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ushort param_6,undefined8 param_7,ushort param_8)

{
  long lVar1;
  ushort uVar2;
  undefined *apuStack_48 [4];
  undefined2 uStack_28;
  
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x38) = param_3;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  *(undefined8 *)(param_1 + 0x28) = param_5;
  uVar2 = *(ushort *)(param_1 + 10) & 0xff80 | *(ushort *)(param_1 + 10) & 0x1f | (param_6 & 3) << 5
  ;
  *(ushort *)(param_1 + 10) = uVar2;
  if (*(long *)(param_1 + 0x80) == 0) {
    *(undefined8 *)(param_1 + 0x80) = param_7;
  }
  else {
    apuStack_48[0] = &UNK_10f5ade71;
    uStack_28 = 0x103;
    lVar1 = param_1;
    FUN_1000479bc();
    func_0x000107c2afec(param_1,apuStack_48,0,0,lVar1);
    uVar2 = *(ushort *)(param_1 + 10);
  }
  *(ushort *)(param_1 + 10) = uVar2 & 0xffe7 | (param_8 & 3) << 3;
  return;
}



/* Entry: 10004fa5c; end: 10004fb73;  */

void FUN_10004fa5c(void)

{
  FUN_100045fdc(0x1137e6320,0,0);
  uRam00000001137e63b1 = 0;
  uRam00000001137e63a0 = 0;
  ppuRam00000001137e63a8 = &PTR_DAT_110b3fac8;
  ppuRam00000001137e6320 = &PTR_DAT_110b404a8;
  ppuRam00000001137e63b8 = &PTR_DAT_110b5b9a8;
  ppuRam00000001137e63c0 = &PTR_DAT_110b40558;
  uRam00000001137e63d8 = 0x1137e63c0;
  FUN_10004687c();
  FUN_10004c2a8(0x1137e63a0,0x1137e6320);
  uRam00000001137e632a = uRam00000001137e632a & 0xffbf | 0x20;
  puRam00000001137e6340 = &UNK_10f5affe4;
  uRam00000001137e6348 = 0x26;
  FUN_100046b10(0x1137e6320);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&DAT_109d33e08,0x1137e6320,0x100000000);
  return;
}



/* Entry: 10004fb74; end: 10004fbf7;  */

void FUN_10004fb74(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined4 uStack_34;
  undefined4 *puStack_30;
  undefined4 uStack_24;
  
  uStack_24 = 1;
  uStack_34 = 0x400;
  puStack_30 = &uStack_34;
  puStack_48 = &UNK_10f5b00ba;
  uStack_40 = 0x2f;
  FUN_1000472e8(0x1137e63e0,&UNK_10f5b009b,&uStack_24,&puStack_30,&puStack_48);
  func_0x000107c60e34(&DAT_109d2f8c4,0x1137e63e0,0x100000000);
  return;
}



/* Entry: 10004fbf8; end: 10004fcf7;  */

void FUN_10004fbf8(void)

{
  FUN_100045fdc(0x1137e64a0,0,0);
  uRam00000001137e6520 = 0;
  ppuRam00000001137e6528 = &PTR_DAT_110b3fac8;
  uRam00000001137e6530 = 0;
  ppuRam00000001137e64a0 = &PTR_DAT_110b5be10;
  ppuRam00000001137e6538 = &PTR_DAT_110b5b9a8;
  ppuRam00000001137e6540 = &PTR_DAT_110b3fb30;
  uRam00000001137e6558 = 0x1137e6540;
  FUN_10004687c();
  uRam00000001137e6520 = 0;
  uRam00000001137e6530 = CONCAT62(uRam00000001137e6530._2_6_,0x100);
  puRam00000001137e64c0 = &UNK_10f5f9ba5;
  uRam00000001137e64c8 = 0x31;
  FUN_100046b10(0x1137e64a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&DAT_109d2f60c,0x1137e64a0,0x100000000);
  return;
}



/* Entry: 10004fcf8; end: 10004fdfb;  */

void FUN_10004fcf8(void)

{
  FUN_100045fdc(0x113833b38,0,0);
  uRam0000000113833bb8 = 0;
  ppuRam0000000113833bc0 = &PTR_DAT_110b3fac8;
  uRam0000000113833bc8 = 0;
  ppuRam0000000113833b38 = &PTR_DAT_110b5be10;
  ppuRam0000000113833bd0 = &PTR_DAT_110b5b9a8;
  ppuRam0000000113833bd8 = &PTR_DAT_110b3fb30;
  uRam0000000113833bf0 = 0x113833bd8;
  FUN_10004687c();
  puRam0000000113833b58 = &UNK_10f5f9dd1;
  uRam0000000113833b60 = 0x13;
  uRam0000000113833bb8 = 1;
  uRam0000000113833bc8 = CONCAT62(uRam0000000113833bc8._2_6_,0x101);
  FUN_100046b10(0x113833b38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&DAT_109d2f60c,0x113833b38,0x100000000);
  return;
}



/* Entry: 10004fdfc; end: 1000501bb;  */

void FUN_10004fdfc(void)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  char **ppcVar5;
  char **ppcVar6;
  undefined8 unaff_x20;
  undefined **unaff_x21;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  char **unaff_x27;
  undefined8 unaff_x28;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  long lStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long lStack_270;
  undefined8 uStack_268;
  long lStack_260;
  long lStack_258;
  undefined8 uStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  char **ppcStack_238;
  undefined8 uStack_230;
  undefined8 *puStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined8 *puStack_1e8;
  uint uStack_1e0;
  undefined8 auStack_1d8 [20];
  char *apcStack_138 [2];
  ulong uStack_128;
  undefined *puStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  apcStack_138[0] = "Disabled";
  apcStack_138[1] = (char *)0x8;
  uStack_128 = uStack_128 & 0xffffffff00000000;
  puStack_120 = &UNK_10f5f9e1f;
  ppuStack_118 = (undefined **)0x14;
  puStack_110 = &UNK_10f5f9e34;
  uStack_108 = 9;
  uStack_100 = 1;
  puStack_f8 = &UNK_10f5f9e3e;
  uStack_f0 = 0x25;
  puStack_e8 = &UNK_10f5f9e64;
  uStack_e0 = 9;
  uStack_d8 = 2;
  puStack_d0 = &UNK_10f5f9e6e;
  uStack_c8 = 0x21;
  puStack_c0 = &UNK_10f5f9e90;
  uStack_b8 = 10;
  uStack_b0 = 3;
  puStack_a8 = &UNK_10f5f9e9b;
  uStack_a0 = 0x25;
  puStack_98 = &UNK_10f5f9ec1;
  uStack_90 = 7;
  uStack_88 = 4;
  puStack_80 = &UNK_10f5f9ec9;
  uStack_78 = 0x26;
  FUN_100048910(&puStack_1e8,apcStack_138,5);
  puVar3 = (undefined8 *)0x1137e6560;
  FUN_100045fdc(0x1137e6560,0,0);
  *(undefined4 *)(puVar3 + 0x10) = 0;
  puVar3[0x11] = &PTR_DAT_110b57d20;
  puVar3[0x12] = 0;
  *puVar3 = &PTR_DAT_110b57c08;
  puVar3[0x13] = &PTR_DAT_110b57cb8;
  puVar3[0x14] = puVar3;
  puVar3[0x15] = puVar3 + 0x17;
  puVar3[0x16] = 0x800000000;
  puVar3[0x47] = &PTR_DAT_110b57da8;
  puVar3[0x4a] = puVar3 + 0x47;
  FUN_10004687c();
  uRam00000001137e656a = uRam00000001137e656a & 0xffbf | 0x20;
  puRam00000001137e6580 = &UNK_10f5f9df0;
  uRam00000001137e6588 = 0x2e;
  if (uStack_1e0 != 0) {
    unaff_x24 = 0x1137e6608;
    puVar3 = puStack_1e8 + (ulong)uStack_1e0 * 5;
    unaff_x28 = 0x30;
    unaff_x21 = &PTR_DAT_110b57d88;
    unaff_x23 = puStack_1e8;
    do {
      ppcVar5 = ppcRam00000001137e6608;
      pcVar1 = (char *)*unaff_x23;
      unaff_x20 = unaff_x23[1];
      apcStack_138[0] = pcVar1;
      apcStack_138[1] = (char *)unaff_x20;
      puStack_120 = (undefined *)unaff_x23[4];
      uStack_128 = unaff_x23[3];
      ppuStack_118 = &PTR_DAT_110b57d20;
      puStack_110 = (undefined *)CONCAT35(puStack_110._5_3_,0x100000000);
      puStack_110 = (undefined *)CONCAT44(puStack_110._4_4_,*(undefined4 *)(unaff_x23 + 2));
      if (uRam00000001137e6610 < uRam00000001137e6614) {
LAB_10004fffc:
        ppcVar5 = apcStack_138;
      }
      else {
        if ((apcStack_138 < ppcRam00000001137e6608) ||
           (ppcRam00000001137e6608 + (ulong)uRam00000001137e6610 * 6 <= apcStack_138)) {
          func_0x000107c2afc8((ulong)uRam00000001137e6610 + 1);
          goto LAB_10004fffc;
        }
        func_0x000107c2afc8((ulong)uRam00000001137e6610 + 1);
        ppcVar5 = (char **)((long)ppcRam00000001137e6608 + ((long)apcStack_138 - (long)ppcVar5));
      }
      unaff_x27 = ppcRam00000001137e6608;
      ppcVar6 = ppcRam00000001137e6608 + (ulong)uRam00000001137e6610 * 6;
      pcVar7 = *ppcVar5;
      pcVar9 = ppcVar5[3];
      pcVar8 = ppcVar5[2];
      ppcVar6[1] = ppcVar5[1];
      *ppcVar6 = pcVar7;
      ppcVar6[3] = pcVar9;
      ppcVar6[2] = pcVar8;
      ppcVar6[4] = (char *)&PTR_DAT_110b57d88;
      uVar2 = *(undefined4 *)(ppcVar5 + 5);
      *(undefined1 *)((long)ppcVar6 + 0x2c) = *(undefined1 *)((long)ppcVar5 + 0x2c);
      *(undefined4 *)(ppcVar6 + 5) = uVar2;
      ppcVar6[4] = (char *)&PTR_DAT_110b57d20;
      uRam00000001137e6610 = uRam00000001137e6610 + 1;
      FUN_100049280(uRam00000001137e6600,pcVar1,unaff_x20);
      unaff_x23 = unaff_x23 + 5;
    } while (unaff_x23 != puVar3);
  }
  FUN_100046b10(0x1137e6560);
  if (puStack_1e8 != auStack_1d8) {
    func_0x000107c60fd0();
  }
  puVar4 = &DAT_109d9309c;
  func_0x000107c60e34(&DAT_109d9309c,0x1137e6560,0x100000000);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    if (puStack_1e8 != auStack_1d8) {
      func_0x000107c60fd0();
    }
    func_0x000107c60bd8(puVar4);
    ppuStack_220 = &PTR_DAT_110b57d20;
    pcStack_1f8 = FUN_1000501bc;
    uStack_240 = unaff_x28;
    ppcStack_238 = unaff_x27;
    uStack_230 = unaff_x24;
    puStack_228 = unaff_x23;
    ppuStack_218 = unaff_x21;
    uStack_210 = unaff_x20;
    puStack_208 = puVar4;
    puStack_200 = &stack0xfffffffffffffff0;
    FUN_100045fdc(0x1137e6840,0,0);
    uRam00000001137e68c0 = 0;
    ppuRam00000001137e68c8 = &PTR_DAT_110b3fac8;
    uRam00000001137e68d0 = 0;
    ppuRam00000001137e6840 = &PTR_DAT_110b5be10;
    ppuRam00000001137e68d8 = &PTR_DAT_110b5b9a8;
    ppuRam00000001137e68e0 = &PTR_DAT_110b3fb30;
    uRam00000001137e68f8 = 0x1137e68e0;
    FUN_10004687c();
    uRam00000001137e68c0 = 1;
    uRam00000001137e68d0 = CONCAT62(uRam00000001137e68d0._2_6_,0x101);
    uRam00000001137e684a = uRam00000001137e684a & 0xffbf | 0x20;
    puRam00000001137e6860 = &UNK_10f5f9fb5;
    uRam00000001137e6868 = 0x1d;
    FUN_100046b10(0x1137e6840);
    func_0x000107c60e34(&DAT_109d2f60c,0x1137e6840,0x100000000);
    FUN_100045fdc(0x1137e6900,0,0);
    uRam00000001137e6980 = 0;
    ppuRam00000001137e6988 = &PTR_DAT_110b3fac8;
    uRam00000001137e6990 = 0;
    ppuRam00000001137e6900 = &PTR_DAT_110b5be10;
    ppuRam00000001137e6998 = &PTR_DAT_110b5b9a8;
    ppuRam00000001137e69a0 = &PTR_DAT_110b3fb30;
    uRam00000001137e69b8 = 0x1137e69a0;
    FUN_10004687c(0x1137e6900,&UNK_10f5f9fd3,0x1a);
    uRam00000001137e6980 = 1;
    uRam00000001137e6990 = CONCAT62(uRam00000001137e6990._2_6_,0x101);
    uRam00000001137e690a = uRam00000001137e690a & 0xffbf | 0x20;
    puRam00000001137e6920 = &UNK_10f5f9fee;
    uRam00000001137e6928 = 0x30;
    FUN_100046b10();
    func_0x000107c60e34(&DAT_109d2f60c,0x1137e6900,0x100000000);
    lStack_258 = 0;
    uStack_250 = 0;
    uStack_268 = 0;
    lStack_260 = 0;
    lStack_278 = 0;
    lStack_270 = 0;
    lStack_288 = 0;
    uStack_280 = 0;
    uStack_298 = 0;
    lStack_290 = 0;
    lStack_2a8 = 0;
    lStack_2a0 = 0;
    lStack_2c0 = 0;
    lStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    uStack_308 = 0;
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_320 = 0;
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_328 = 0;
    FUN_10005059c(0x1137e67b8,0xc1,0,0,0,&lStack_260,&lStack_278,&lStack_290,&lStack_2a8,&lStack_2c0
                  ,&uStack_2d8,&uStack_2f0,&uStack_308,&uStack_320,&uStack_338);
    puStack_248 = &uStack_338;
    FUN_100050960(&puStack_248);
    puStack_248 = &uStack_320;
    func_0x0001000509d0(&puStack_248);
    puStack_248 = &uStack_308;
    func_0x000100050a40(&puStack_248);
    puStack_248 = &uStack_2f0;
    FUN_100050ab0(&puStack_248);
    puStack_248 = &uStack_2d8;
    FUN_100050ab0(&puStack_248);
    if (lStack_2c0 != 0) {
      lStack_2b8 = lStack_2c0;
      func_0x000107c60e14();
    }
    if (lStack_2a8 != 0) {
      lStack_2a0 = lStack_2a8;
      func_0x000107c60e14();
    }
    if (lStack_290 != 0) {
      lStack_288 = lStack_290;
      func_0x000107c60e14();
    }
    if (lStack_278 != 0) {
      lStack_270 = lStack_278;
      func_0x000107c60e14();
    }
    if (lStack_260 != 0) {
      lStack_258 = lStack_260;
      func_0x000107c60e14();
    }
    func_0x000107c60e34(&DAT_109d36380,0x1137e67b8,0x100000000);
    return;
  }
  return;
}



/* Entry: 1000501bc; end: 10005059b;  */

void FUN_1000501bc(void)

{
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
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  
  FUN_100045fdc(0x1137e6840,0,0);
  uRam00000001137e68c0 = 0;
  ppuRam00000001137e68c8 = &PTR_DAT_110b3fac8;
  uRam00000001137e68d0 = 0;
  ppuRam00000001137e6840 = &PTR_DAT_110b5be10;
  ppuRam00000001137e68d8 = &PTR_DAT_110b5b9a8;
  ppuRam00000001137e68e0 = &PTR_DAT_110b3fb30;
  uRam00000001137e68f8 = 0x1137e68e0;
  FUN_10004687c();
  uRam00000001137e68c0 = 1;
  uRam00000001137e68d0 = CONCAT62(uRam00000001137e68d0._2_6_,0x101);
  uRam00000001137e684a = uRam00000001137e684a & 0xffbf | 0x20;
  puRam00000001137e6860 = &UNK_10f5f9fb5;
  uRam00000001137e6868 = 0x1d;
  FUN_100046b10(0x1137e6840);
  func_0x000107c60e34(&DAT_109d2f60c,0x1137e6840,0x100000000);
  FUN_100045fdc(0x1137e6900,0,0);
  uRam00000001137e6980 = 0;
  ppuRam00000001137e6988 = &PTR_DAT_110b3fac8;
  uRam00000001137e6990 = 0;
  ppuRam00000001137e6900 = &PTR_DAT_110b5be10;
  ppuRam00000001137e6998 = &PTR_DAT_110b5b9a8;
  ppuRam00000001137e69a0 = &PTR_DAT_110b3fb30;
  uRam00000001137e69b8 = 0x1137e69a0;
  FUN_10004687c(0x1137e6900,&UNK_10f5f9fd3,0x1a);
  uRam00000001137e6980 = 1;
  uRam00000001137e6990 = CONCAT62(uRam00000001137e6990._2_6_,0x101);
  uRam00000001137e690a = uRam00000001137e690a & 0xffbf | 0x20;
  puRam00000001137e6920 = &UNK_10f5f9fee;
  uRam00000001137e6928 = 0x30;
  FUN_100046b10();
  func_0x000107c60e34(&DAT_109d2f60c,0x1137e6900,0x100000000);
  lStack_68 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  lStack_88 = 0;
  lStack_80 = 0;
  lStack_98 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  lStack_a0 = 0;
  lStack_b8 = 0;
  lStack_b0 = 0;
  lStack_d0 = 0;
  lStack_c8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  FUN_10005059c(0x1137e67b8,0xc1,0,0,0,&lStack_70,&lStack_88,&lStack_a0,&lStack_b8,&lStack_d0,
                &uStack_e8,&uStack_100,&uStack_118,&uStack_130,&uStack_148);
  puStack_58 = &uStack_148;
  FUN_100050960(&puStack_58);
  puStack_58 = &uStack_130;
  func_0x0001000509d0(&puStack_58);
  puStack_58 = &uStack_118;
  func_0x000100050a40(&puStack_58);
  puStack_58 = &uStack_100;
  FUN_100050ab0(&puStack_58);
  puStack_58 = &uStack_e8;
  FUN_100050ab0(&puStack_58);
  if (lStack_d0 != 0) {
    lStack_c8 = lStack_d0;
    func_0x000107c60e14();
  }
  if (lStack_b8 != 0) {
    lStack_b0 = lStack_b8;
    func_0x000107c60e14();
  }
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    func_0x000107c60e14();
  }
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    func_0x000107c60e14();
  }
  if (lStack_70 != 0) {
    lStack_68 = lStack_70;
    func_0x000107c60e14();
  }
  func_0x000107c60e34(&DAT_109d36380,0x1137e67b8,0x100000000);
  return;
}



/* Entry: 10005059c; end: 10005095f;  */

undefined8 *
FUN_10005059c(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 *param_7,long *param_8,long *param_9,
             long *param_10,long *param_11,long *param_12,long *param_13,long *param_14,
             long *param_15)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long *aplStack_70 [2];
  
  uVar14 = param_6[2];
  uVar20 = param_6[1];
  uVar19 = *param_6;
  param_6[1] = 0;
  param_6[2] = 0;
  *param_6 = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)((long)param_1 + 0xc) = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[6] = uVar20;
  param_1[5] = uVar19;
  param_1[7] = uVar14;
  *param_1 = &PTR_DAT_110b409a0;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)((long)param_1 + 0x44) = param_4;
  param_1[9] = param_5;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  uVar14 = *param_7;
  param_1[0xb] = param_7[1];
  param_1[10] = uVar14;
  param_1[0xc] = param_7[2];
  *param_7 = 0;
  param_7[1] = 0;
  param_7[2] = 0;
  plVar11 = param_1 + 0xd;
  param_1[0xe] = 0;
  *plVar11 = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  lVar12 = *param_8;
  lVar5 = param_8[1];
  if ((((lVar12 != lVar5) || (*param_9 != param_9[1])) || (*param_10 != param_10[1])) ||
     ((*param_11 != param_11[1] || (*param_12 != param_12[1])))) {
    lVar15 = param_8[2];
    *param_8 = 0;
    param_8[1] = 0;
    param_8[2] = 0;
    lVar1 = *param_9;
    lVar6 = param_9[1];
    lVar16 = param_9[2];
    param_9[1] = 0;
    param_9[2] = 0;
    *param_9 = 0;
    lVar2 = *param_10;
    lVar7 = param_10[1];
    lVar13 = param_10[2];
    param_10[1] = 0;
    param_10[2] = 0;
    *param_10 = 0;
    lVar3 = *param_11;
    lVar8 = param_11[1];
    lVar18 = param_11[2];
    param_11[1] = 0;
    param_11[2] = 0;
    *param_11 = 0;
    lVar4 = *param_12;
    lVar9 = param_12[1];
    lVar17 = param_12[2];
    param_12[1] = 0;
    param_12[2] = 0;
    *param_12 = 0;
    plVar10 = (long *)0x78;
    lStack_e8 = lVar12;
    lStack_e0 = lVar5;
    lStack_d8 = lVar15;
    lStack_d0 = lVar1;
    lStack_c8 = lVar6;
    lStack_c0 = lVar16;
    lStack_b8 = lVar2;
    lStack_b0 = lVar7;
    lStack_a8 = lVar13;
    lStack_a0 = lVar3;
    lStack_98 = lVar8;
    lStack_90 = lVar18;
    lStack_88 = lVar4;
    lStack_80 = lVar9;
    lStack_78 = lVar17;
    func_0x000107c60e20();
    aplStack_70[0] = &lStack_88;
    *plVar10 = lVar12;
    plVar10[1] = lVar5;
    lStack_e0 = 0;
    lStack_d8 = 0;
    lStack_e8 = 0;
    plVar10[2] = lVar15;
    plVar10[3] = lVar1;
    plVar10[4] = lVar6;
    plVar10[5] = lVar16;
    lStack_d0 = 0;
    lStack_c8 = 0;
    plVar10[6] = lVar2;
    plVar10[7] = lVar7;
    lStack_c0 = 0;
    lStack_b8 = 0;
    lStack_b0 = 0;
    lStack_a8 = 0;
    plVar10[8] = lVar13;
    plVar10[9] = lVar3;
    plVar10[10] = lVar8;
    plVar10[0xb] = lVar18;
    lStack_98 = 0;
    lStack_90 = 0;
    lStack_a0 = 0;
    plVar10[0xc] = lVar4;
    plVar10[0xd] = lVar9;
    plVar10[0xe] = lVar17;
    lStack_80 = 0;
    lStack_78 = 0;
    lStack_88 = 0;
    lVar12 = *plVar11;
    *plVar11 = (long)plVar10;
    if (lVar12 != 0) {
      func_0x000107c2afa0(plVar11);
    }
    FUN_100050ab0(aplStack_70);
    aplStack_70[0] = &lStack_a0;
    FUN_100050ab0(aplStack_70);
    if (lStack_b8 != 0) {
      lStack_b0 = lStack_b8;
      func_0x000107c60e14();
    }
    if (lStack_d0 != 0) {
      lStack_c8 = lStack_d0;
      func_0x000107c60e14();
    }
    if (lStack_e8 != 0) {
      lStack_e0 = lStack_e8;
      func_0x000107c60e14();
    }
  }
  lVar12 = *param_13;
  lVar5 = param_13[1];
  if (lVar12 != lVar5) {
    plVar11 = (long *)0x18;
    func_0x000107c60e20();
    *plVar11 = lVar12;
    plVar11[1] = lVar5;
    plVar11[2] = param_13[2];
    *param_13 = 0;
    param_13[1] = 0;
    param_13[2] = 0;
    lStack_e8 = 0;
    func_0x000107c2afa4(param_1 + 0xe);
    func_0x000107c2afa4(&lStack_e8,0);
  }
  lVar12 = *param_14;
  lVar5 = param_14[1];
  if (lVar12 != lVar5) {
    plVar11 = (long *)0x18;
    func_0x000107c60e20();
    *plVar11 = lVar12;
    plVar11[1] = lVar5;
    plVar11[2] = param_14[2];
    *param_14 = 0;
    param_14[1] = 0;
    param_14[2] = 0;
    lStack_e8 = 0;
    func_0x000107c2afa8(param_1 + 0xf);
    func_0x000107c2afa8(&lStack_e8,0);
  }
  lVar12 = *param_15;
  lVar5 = param_15[1];
  if (lVar12 != lVar5) {
    plVar11 = (long *)0x18;
    func_0x000107c60e20();
    *plVar11 = lVar12;
    plVar11[1] = lVar5;
    plVar11[2] = param_15[2];
    *param_15 = 0;
    param_15[1] = 0;
    param_15[2] = 0;
    lStack_e8 = 0;
    func_0x000107c2afac(param_1 + 0x10);
    func_0x000107c2afac(&lStack_e8,0);
  }
  return param_1;
}



/* Entry: 100050960; end: 100050aaf;  */

void FUN_100050960(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x58;
        func_0x000107c2af8c(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 100050ab0; end: 100050aef;  */

void FUN_100050ab0(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    func_0x000107c2afb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 100050af0; end: 100050eb3;  */

void FUN_100050af0(void)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined **appuStack_b8 [3];
  undefined ***pppuStack_a0;
  undefined **appuStack_98 [3];
  undefined ***pppuStack_80;
  undefined **appuStack_78 [3];
  undefined ***pppuStack_60;
  undefined **appuStack_58 [3];
  undefined ***pppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_a0 = appuStack_b8;
  appuStack_b8[0] = &PTR_DAT_110b57ed0;
  appuStack_98[0] = &PTR_DAT_110b57ed0;
  pppuStack_80 = appuStack_98;
  FUN_100045fdc(0x1137e69c0,0,0);
  uRam00000001137e6a40 = 0;
  ppuRam00000001137e6a48 = &PTR_DAT_110b40a98;
  uRam00000001137e6a50 = 0;
  ppuRam00000001137e69c0 = &PTR_DAT_110b5bca8;
  ppuRam00000001137e6a58 = &PTR_DAT_110b5ba68;
  ppuRam00000001137e6a60 = &PTR_DAT_110b40a08;
  plRam00000001137e6a78 = (long *)0x1137e6a60;
  FUN_10004687c(0x1137e69c0,&UNK_10f5fa02f,0x10);
  uRam00000001137e6a40 = 0x7fffffff;
  uRam00000001137e6a50 = CONCAT35(uRam00000001137e6a50._5_3_,0x100000000);
  uRam00000001137e6a50 = CONCAT44(uRam00000001137e6a50._4_4_,0x7fffffff);
  uRam00000001137e69ca = uRam00000001137e69ca & 0xff98 | 0x20;
  if (pppuStack_80 == (undefined ***)0x0) {
    pppuStack_60 = (undefined ***)0x0;
    pppuStack_40 = (undefined ***)0x0;
  }
  else {
    if (pppuStack_80 == appuStack_98) {
      pppuStack_60 = appuStack_78;
      (*(code *)(*pppuStack_80)[3])(pppuStack_80,appuStack_78);
    }
    else {
      pppuVar1 = pppuStack_80;
      (*(code *)(*pppuStack_80)[2])();
      pppuStack_60 = pppuVar1;
    }
    pppuVar1 = pppuStack_60;
    pppuStack_40 = (undefined ***)0x0;
    if (pppuStack_60 != (undefined ***)0x0) {
      pppuVar2 = (undefined ***)0x28;
      func_0x000107c60e20();
      *pppuVar2 = &PTR_DAT_110b57f50;
      if (pppuVar1 == appuStack_78) {
        pppuVar2[4] = (undefined **)(pppuVar2 + 1);
        (*(code *)(*pppuVar1)[3])(pppuVar1);
        pppuStack_40 = pppuVar2;
      }
      else {
        pppuVar2[4] = (undefined **)pppuVar1;
        pppuStack_60 = (undefined ***)0x0;
        pppuStack_40 = pppuVar2;
      }
    }
  }
  func_0x000100050f7c(0x1137e6a60,appuStack_58);
  if (pppuStack_40 == appuStack_58) {
    lVar5 = 0x20;
LAB_100050ca0:
    (**(code **)((long)*pppuStack_40 + lVar5))();
  }
  else if (pppuStack_40 != (undefined ***)0x0) {
    lVar5 = 0x28;
    goto LAB_100050ca0;
  }
  if (pppuStack_60 == appuStack_78) {
    lVar5 = 0x20;
LAB_100050ccc:
    (**(code **)((long)*pppuStack_60 + lVar5))();
  }
  else if (pppuStack_60 != (undefined ***)0x0) {
    lVar5 = 0x28;
    goto LAB_100050ccc;
  }
  puRam00000001137e69e0 = &UNK_10f5fa040;
  uRam00000001137e69e8 = 0x1f;
  FUN_100046b10(0x1137e69c0);
  if (pppuStack_80 == appuStack_98) {
    lVar5 = 0x20;
LAB_100050d10:
    (**(code **)((long)*pppuStack_80 + lVar5))();
  }
  else if (pppuStack_80 != (undefined ***)0x0) {
    lVar5 = 0x28;
    goto LAB_100050d10;
  }
  if (pppuStack_a0 == appuStack_b8) {
    lVar5 = 0x20;
LAB_100050d3c:
    (**(code **)((long)*pppuStack_a0 + lVar5))();
  }
  else if (pppuStack_a0 != (undefined ***)0x0) {
    lVar5 = 0x28;
    goto LAB_100050d3c;
  }
  puVar3 = &DAT_109d36c64;
  puVar4 = (undefined8 *)0x1137e69c0;
  func_0x000107c60e34(&DAT_109d36c64,0x1137e69c0,0x100000000);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  if ((int)puVar4 == 0) goto LAB_100050eac;
  func_0x000104bd46a0(puVar3);
  if (appuStack_58 == appuStack_78) {
    lVar5 = 0x20;
LAB_100050df8:
    (**(code **)((long)appuStack_58[0] + lVar5))(appuStack_58);
  }
  else if (appuStack_58 != (undefined ***)0x0) {
    lVar5 = 0x28;
    goto LAB_100050df8;
  }
  if (plRam00000001137e6a78 == (long *)0x1137e6a60) {
    lVar5 = 0x20;
LAB_100050e3c:
    (**(code **)(*plRam00000001137e6a78 + lVar5))();
  }
  else if (plRam00000001137e6a78 != (long *)0x0) {
    lVar5 = 0x28;
    goto LAB_100050e3c;
  }
  func_0x000107c2af48(0x1137e69c0);
  if (pppuStack_80 == appuStack_98) {
    lVar5 = 0x20;
LAB_100050e74:
    (**(code **)((long)*pppuStack_80 + lVar5))();
  }
  else if (pppuStack_80 != (undefined ***)0x0) {
    lVar5 = 0x28;
    goto LAB_100050e74;
  }
  if (pppuStack_a0 == appuStack_b8) {
    lVar5 = 0x20;
  }
  else {
    if (pppuStack_a0 == (undefined ***)0x0) goto LAB_100050eac;
    lVar5 = 0x28;
  }
  (**(code **)((long)*pppuStack_a0 + lVar5))();
LAB_100050eac:
  func_0x000107c60bd8(puVar3);
  *puVar4 = &PTR_DAT_110b57ed0;
  return;
}



/* Entry: 100050eb4; end: 100050ec3;  */

void FUN_100050eb4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110b57ed0;
  return;
}



/* Entry: 100050ec4; end: 100050f17;  */

undefined8 * FUN_100050ec4(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x28;
  func_0x000107c60e20();
  *puVar1 = &PTR_DAT_110b57f50;
  func_0x000100051010(puVar1 + 1,param_1 + 8);
  return puVar1;
}



/* Entry: 100050f18; end: 100051073;  */

long FUN_100050f18(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (plVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    *(long **)(param_1 + 0x18) = plVar1;
  }
  return param_1;
}



/* Entry: 100051074; end: 1000511df;  */

void FUN_100051074(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long alStack_40 [3];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = param_2;
  if (param_2 != param_1) {
    plVar1 = (long *)param_1[3];
    plVar3 = (long *)param_2[3];
    if (plVar1 == param_1) {
      if (plVar3 == param_2) {
        (**(code **)(*plVar1 + 0x18))(plVar1,alStack_40);
        (**(code **)(*(long *)param_1[3] + 0x20))();
        param_1[3] = 0;
        (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
        (**(code **)(*(long *)param_2[3] + 0x20))();
        param_2[3] = 0;
        param_1[3] = (long)param_1;
        (**(code **)(alStack_40[0] + 0x18))(alStack_40);
        (**(code **)(alStack_40[0] + 0x20))(alStack_40);
      }
      else {
        (**(code **)(*plVar1 + 0x18))();
        (**(code **)(*(long *)param_1[3] + 0x20))();
        param_1[3] = param_2[3];
      }
      param_2[3] = (long)param_2;
    }
    else if (plVar3 == param_2) {
      plVar2 = param_1;
      (**(code **)(*plVar3 + 0x18))(plVar3);
      (**(code **)(*(long *)param_2[3] + 0x20))();
      param_2[3] = param_1[3];
      param_1[3] = (long)param_1;
    }
    else {
      param_1[3] = (long)plVar3;
      param_2[3] = (long)plVar1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  func_0x000107c60e78();
  if ((int)plVar2 == 0) {
    func_0x000107c60bd8();
  }
  func_0x000104bd46a0();
  *plVar2 = (long)&PTR_DAT_110b40a08;
  return;
}



/* Entry: 1000511e0; end: 1000511f3;  */

void FUN_1000511e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110b40a08;
  return;
}



/* Entry: 1000511f4; end: 10005123f;  */

void FUN_1000511f4(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 == (long *)(param_1 + 8)) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_100051230;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_100051230:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 100051240; end: 100051243;  */

void FUN_100051240(void)

{
  return;
}



/* Entry: 100051244; end: 1000515af;  */

void FUN_100051244(void)

{
  undefined ***pppuVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined **appuStack_88 [3];
  undefined ***pppuStack_70;
  undefined **appuStack_68 [3];
  undefined ***pppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_100045fdc(0x1137e6ac0,0,0);
  uRam00000001137e6b51 = 0;
  uRam00000001137e6b40 = 0;
  ppuRam00000001137e6b48 = &PTR_DAT_110b3fac8;
  ppuRam00000001137e6ac0 = &PTR_DAT_110b404a8;
  ppuRam00000001137e6b58 = &PTR_DAT_110b5b9a8;
  ppuRam00000001137e6b60 = &PTR_DAT_110b40558;
  uRam00000001137e6b78 = 0x1137e6b60;
  FUN_10004687c();
  FUN_10004c2a8(0x1137e6b40,0x1137e6ac0,0x113833bf8);
  uRam00000001137e6aca = uRam00000001137e6aca & 0xffbf | 0x20;
  puRam00000001137e6ae0 = &UNK_10f5fa088;
  uRam00000001137e6ae8 = 0x36;
  FUN_100046b10(0x1137e6ac0);
  func_0x000107c60e34(&DAT_109d33e08,0x1137e6ac0,0x100000000);
  pppuStack_70 = appuStack_88;
  appuStack_88[0] = &PTR_DAT_110b58030;
  FUN_100045fdc(0x1137e6b80,0,0);
  uRam00000001137e6c11 = 0;
  uRam00000001137e6c00 = 0;
  ppuRam00000001137e6c08 = &PTR_DAT_110b3fac8;
  ppuRam00000001137e6b80 = &PTR_DAT_110b404a8;
  ppuRam00000001137e6c18 = &PTR_DAT_110b5b9a8;
  ppuRam00000001137e6c20 = &PTR_DAT_110b40558;
  plRam00000001137e6c38 = (long *)0x1137e6c20;
  FUN_10004687c(0x1137e6b80,&UNK_10f5fa0bf,0x13);
  FUN_10004c2a8(0x1137e6c00,0x1137e6b80);
  uRam00000001137e6b8a = uRam00000001137e6b8a & 0xffbf | 0x20;
  puRam00000001137e6ba0 = &UNK_10f5fa0d3;
  uRam00000001137e6ba8 = 0x3e;
  pppuStack_50 = pppuStack_70;
  if (pppuStack_70 != (undefined ***)0x0) {
    if (pppuStack_70 == appuStack_88) {
      pppuStack_50 = appuStack_68;
      (*(code *)(*pppuStack_70)[3])(pppuStack_70,appuStack_68);
    }
    else {
      pppuVar1 = pppuStack_70;
      (*(code *)(*pppuStack_70)[2])();
      pppuStack_50 = pppuVar1;
    }
  }
  func_0x000100051624(0x1137e6c20,appuStack_68);
  if (pppuStack_50 == appuStack_68) {
    lVar4 = 0x20;
LAB_10005142c:
    (**(code **)((long)*pppuStack_50 + lVar4))();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar4 = 0x28;
    goto LAB_10005142c;
  }
  FUN_100046b10(0x1137e6b80);
  if (pppuStack_70 == appuStack_88) {
    lVar4 = 0x20;
LAB_100051464:
    (**(code **)((long)*pppuStack_70 + lVar4))();
  }
  else if (pppuStack_70 != (undefined ***)0x0) {
    lVar4 = 0x28;
    goto LAB_100051464;
  }
  puVar2 = &DAT_109d33e08;
  puVar3 = (undefined8 *)0x1137e6b80;
  func_0x000107c60e34(&DAT_109d33e08,0x1137e6b80,0x100000000);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  if (pppuStack_50 == appuStack_68) {
    lVar4 = 0x20;
LAB_1000514e0:
    (**(code **)((long)*pppuStack_50 + lVar4))();
  }
  else if (pppuStack_50 != (undefined ***)0x0) {
    lVar4 = 0x28;
    goto LAB_1000514e0;
  }
  if (plRam00000001137e6c38 == (long *)0x1137e6c20) {
    lVar4 = 0x20;
LAB_100051564:
    (**(code **)(*plRam00000001137e6c38 + lVar4))();
  }
  else if (plRam00000001137e6c38 != (long *)0x0) {
    lVar4 = 0x28;
    goto LAB_100051564;
  }
  func_0x000107c2af48(0x1137e6b80);
  if (pppuStack_70 == appuStack_88) {
    lVar4 = 0x20;
  }
  else {
    if (pppuStack_70 == (undefined ***)0x0) goto LAB_1000515a8;
    lVar4 = 0x28;
  }
  (**(code **)((long)*pppuStack_70 + lVar4))();
LAB_1000515a8:
  func_0x000107c60bd8(puVar2);
  *puVar3 = &PTR_DAT_110b58030;
  return;
}



/* Entry: 1000515b0; end: 1000515bf;  */

void FUN_1000515b0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110b58030;
  return;
}



/* Entry: 1000515c0; end: 1000516b7;  */

long FUN_1000515c0(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (plVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    *(long **)(param_1 + 0x18) = plVar1;
  }
  return param_1;
}



/* Entry: 1000516b8; end: 100051823;  */

void FUN_1000516b8(long *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long alStack_40 [3];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = param_2;
  if (param_2 != param_1) {
    plVar1 = (long *)param_1[3];
    plVar4 = (long *)param_2[3];
    if (plVar1 == param_1) {
      if (plVar4 == param_2) {
        (**(code **)(*plVar1 + 0x18))(plVar1,alStack_40);
        (**(code **)(*(long *)param_1[3] + 0x20))();
        param_1[3] = 0;
        (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
        (**(code **)(*(long *)param_2[3] + 0x20))();
        param_2[3] = 0;
        param_1[3] = (long)param_1;
        (**(code **)(alStack_40[0] + 0x18))(alStack_40);
        (**(code **)(alStack_40[0] + 0x20))(alStack_40);
      }
      else {
        (**(code **)(*plVar1 + 0x18))();
        (**(code **)(*(long *)param_1[3] + 0x20))();
        param_1[3] = param_2[3];
      }
      param_2[3] = (long)param_2;
    }
    else if (plVar4 == param_2) {
      plVar3 = param_1;
      (**(code **)(*plVar4 + 0x18))(plVar4);
      (**(code **)(*(long *)param_2[3] + 0x20))();
      param_2[3] = param_1[3];
      param_1[3] = (long)param_1;
    }
    else {
      param_1[3] = (long)plVar4;
      param_2[3] = (long)plVar1;
    }
  }
  iVar2 = (int)plVar3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  func_0x000107c60e78();
  if (iVar2 == 0) {
    func_0x000107c60bd8();
  }
  func_0x000104bd46a0();
  return;
}



/* Entry: 100051824; end: 10005183b;  */

void FUN_100051824(void)

{
  return;
}



/* Entry: 10005183c; end: 10005247b;  */

/* WARNING: Possible PIC construction at 0x000100051914: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000519b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100051a5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100051aec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100051e34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100051f28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100051fe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010005208c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100052138: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100052090) */
/* WARNING: Removing unreachable block (ram,0x000100051fe4) */
/* WARNING: Removing unreachable block (ram,0x000100051f2c) */
/* WARNING: Removing unreachable block (ram,0x000100051e38) */
/* WARNING: Removing unreachable block (ram,0x000100051ef0) */
/* WARNING: Removing unreachable block (ram,0x000100051ef8) */
/* WARNING: Removing unreachable block (ram,0x000100051af0) */
/* WARNING: Removing unreachable block (ram,0x000100051cdc) */
/* WARNING: Removing unreachable block (ram,0x000100051d00) */
/* WARNING: Removing unreachable block (ram,0x000100051d8c) */
/* WARNING: Removing unreachable block (ram,0x000100051da4) */
/* WARNING: Removing unreachable block (ram,0x000100051dbc) */
/* WARNING: Removing unreachable block (ram,0x000100051da8) */
/* WARNING: Removing unreachable block (ram,0x000100051d34) */
/* WARNING: Removing unreachable block (ram,0x000100051d38) */
/* WARNING: Removing unreachable block (ram,0x000100051d88) */
/* WARNING: Removing unreachable block (ram,0x000100051ddc) */
/* WARNING: Removing unreachable block (ram,0x000100051e14) */
/* WARNING: Removing unreachable block (ram,0x000100051e18) */
/* WARNING: Removing unreachable block (ram,0x000100051a60) */
/* WARNING: Removing unreachable block (ram,0x0001000519b8) */
/* WARNING: Removing unreachable block (ram,0x000100051918) */
/* WARNING: Removing unreachable block (ram,0x00010005213c) */
/* WARNING: Removing unreachable block (ram,0x000100052174) */
/* WARNING: Removing unreachable block (ram,0x00010005245c) */
/* WARNING: Removing unreachable block (ram,0x000100052470) */
/* WARNING: Removing unreachable block (ram,0x000100052474) */
/* WARNING: Removing unreachable block (ram,0x000100052154) */

void FUN_10005183c(void)

{
  FUN_100045fdc(0x1137e6ea8,1,0);
  uRam00000001137e6f58 = 0;
  uRam00000001137e6f40 = 0;
  uRam00000001137e6f38 = 0;
  uRam00000001137e6f50 = 0;
  uRam00000001137e6f48 = 0;
  uRam00000001137e6f30 = 0;
  uRam00000001137e6f28 = 0;
  ppuRam00000001137e6ea8 = &PTR_DAT_110b580b0;
  uRam00000001137e6f60 = 0;
  uRam00000001137e6f68 = 0;
  uRam00000001137e6f70 = 0;
  ppuRam00000001137e6f78 = &PTR_DAT_110b5bc18;
  ppuRam00000001137e6f80 = &PTR_DAT_110b58300;
  uRam00000001137e6f98 = 0x1137e6f80;
  FUN_10004687c();
  puRam00000001137e6ec8 = &UNK_10f5fa11f;
  uRam00000001137e6ed0 = 0x20;
  uRam00000001137e6eb2 = uRam00000001137e6eb2 & 0xffbf | 0x220;
  FUN_100046b10(0x1137e6ea8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&DAT_109d9ec20,0x1137e6ea8,0x100000000);
  return;
}



/* Entry: 10005247c; end: 10005258f;  */

void FUN_10005247c(void)

{
  FUN_100045fdc(0x1137e73e8,0,0);
  uRam00000001137e7468 = 0;
  ppuRam00000001137e7470 = &PTR_DAT_110b3fc50;
  uRam00000001137e7478 = 0;
  ppuRam00000001137e73e8 = &PTR_DAT_110b5bec0;
  ppuRam00000001137e7480 = &PTR_DAT_110b5bfa0;
  ppuRam00000001137e7488 = &PTR_DAT_110b3fbc0;
  uRam00000001137e74a0 = 0x1137e7488;
  FUN_10004687c();
  uRam00000001137e73f2 = uRam00000001137e73f2 & 0xffbf | 0x20;
  uRam00000001137e7468 = 0;
  uRam00000001137e7478 = CONCAT35(uRam00000001137e7478._5_3_,0x100000000);
  puRam00000001137e7408 = &UNK_10f5fa4e7;
  uRam00000001137e7410 = 0x3c;
  FUN_100046b10(0x1137e73e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&DAT_109d2f8c4,0x1137e73e8,0x100000000);
  return;
}



/* Entry: 100052590; end: 10005269f;  */

void FUN_100052590(void)

{
  FUN_100045fdc(0x1137e74a8,0,0);
  uRam00000001137e7528 = 0;
  ppuRam00000001137e7530 = &PTR_DAT_110b3fac8;
  uRam00000001137e7538 = 0;
  ppuRam00000001137e74a8 = &PTR_DAT_110b5be10;
  ppuRam00000001137e7540 = &PTR_DAT_110b5b9a8;
  ppuRam00000001137e7548 = &PTR_DAT_110b3fb30;
  uRam00000001137e7560 = 0x1137e7548;
  FUN_10004687c();
  uRam00000001137e74b2 = uRam00000001137e74b2 & 0xffbf | 0x20;
  uRam00000001137e7528 = 0;
  uRam00000001137e7538 = CONCAT62(uRam00000001137e7538._2_6_,0x100);
  puRam00000001137e74c8 = &UNK_10f5fa543;
  uRam00000001137e74d0 = 0x58;
  FUN_100046b10(0x1137e74a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&DAT_109d2f60c,0x1137e74a8,0x100000000);
  return;
}



/* Entry: 1000526a0; end: 1000527bf;  */

void FUN_1000526a0(void)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  
  puStack_28 = &uStack_2c;
  uStack_30 = 1;
  uStack_2c = 0x14;
  puStack_40 = &UNK_10f5fef02;
  uStack_38 = 0x36;
  FUN_10004b48c(0x113833db8,&UNK_10f5feee6,&puStack_28,&uStack_30,&puStack_40);
  func_0x000107c60e34(&DAT_109d2f8c4,0x113833db8,0x100000000);
  return;
}



/* Entry: 1000527c0; end: 100052a47;  */

/* WARNING: Possible PIC construction at 0x000100052884: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100052938: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100052888) */
/* WARNING: Removing unreachable block (ram,0x00010005293c) */

void FUN_1000527c0(void)

{
  FUN_100045fdc(0x1137e7630,0,0);
  uRam00000001137e76b0 = 0;
  ppuRam00000001137e76b8 = &PTR_DAT_110b3fac8;
  uRam00000001137e76c0 = 0;
  ppuRam00000001137e7630 = &PTR_DAT_110b5be10;
  ppuRam00000001137e76c8 = &PTR_DAT_110b5b9a8;
  ppuRam00000001137e76d0 = &PTR_DAT_110b3fb30;
  uRam00000001137e76e8 = 0x1137e76d0;
  FUN_10004687c();
  uRam00000001137e76b0 = 1;
  uRam00000001137e76c0 = CONCAT62(uRam00000001137e76c0._2_6_,0x101);
  uRam00000001137e763a = uRam00000001137e763a & 0xffbf | 0x20;
  puRam00000001137e7650 = &UNK_10f601665;
  uRam00000001137e7658 = 0x4e;
  FUN_100046b10(0x1137e7630);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&DAT_109d2f60c,0x1137e7630,0x100000000);
  return;
}



/* Entry: 100052a48; end: 100052faf;  */

void FUN_100052a48(void)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined4 uStack_44;
  
  uStack_44 = 1;
  puStack_58 = &UNK_10f6017bc;
  uStack_50 = 0x35;
  FUN_100049c9c(0x1137e7870,&UNK_10f6017a0,&uStack_44,&puStack_58);
  func_0x000107c60e34(&DAT_109d2f60c,0x1137e7870,0x100000000);
  FUN_100045fdc(0x113833e78,0,0);
  uRam0000000113833ef8 = 0;
  ppuRam0000000113833f00 = &PTR_DAT_110b40a98;
  uRam0000000113833f08 = 0;
  ppuRam0000000113833e78 = &PTR_DAT_110b5bca8;
  ppuRam0000000113833f10 = &PTR_DAT_110b5ba68;
  ppuRam0000000113833f18 = &PTR_DAT_110b40a08;
  uRam0000000113833f30 = 0x113833f18;
  FUN_10004687c();
  uRam0000000113833e82 = uRam0000000113833e82 & 0xffbf | 0x20;
  uRam0000000113833ef8 = 990000;
  uRam0000000113833f08 = CONCAT35(uRam0000000113833f08._5_3_,0x100000000);
  uRam0000000113833f08 = CONCAT44(uRam0000000113833f08._4_4_,990000);
  puRam0000000113833e98 = &UNK_10f60180d;
  uRam0000000113833ea0 = 0x58;
  FUN_100046b10(0x113833e78);
  func_0x000107c60e34(&DAT_109d36c64,0x113833e78,0x100000000);
  FUN_100045fdc(0x113833f38,0,0);
  uRam0000000113833fb8 = 0;
  ppuRam0000000113833fc0 = &PTR_DAT_110b40a98;
  uRam0000000113833fc8 = 0;
  ppuRam0000000113833f38 = &PTR_DAT_110b5bca8;
  ppuRam0000000113833fd0 = &PTR_DAT_110b5ba68;
  ppuRam0000000113833fd8 = &PTR_DAT_110b40a08;
  uRam0000000113833ff0 = 0x113833fd8;
  FUN_10004687c();
  uRam0000000113833f42 = uRam0000000113833f42 & 0xffbf | 0x20;
  uRam0000000113833fb8 = 999999;
  uRam0000000113833fc8 = CONCAT35(uRam0000000113833fc8._5_3_,0x100000000);
  uRam0000000113833fc8 = CONCAT44(uRam0000000113833fc8._4_4_,999999);
  puRam0000000113833f58 = &UNK_10f601882;
  uRam0000000113833f60 = 0x5a;
  FUN_100046b10(0x113833f38);
  func_0x000107c60e34(&DAT_109d36c64,0x113833f38,0x100000000);
  FUN_100045fdc(0x113833ff8,0,0);
  uRam0000000113834078 = 0;
  ppuRam0000000113834080 = &PTR_DAT_110b3fc50;
  uRam0000000113834088 = 0;
  ppuRam0000000113833ff8 = &PTR_DAT_110b5bec0;
  ppuRam0000000113834090 = &PTR_DAT_110b5bfa0;
  ppuRam0000000113834098 = &PTR_DAT_110b3fbc0;
  uRam00000001138340b0 = 0x113834098;
  FUN_10004687c();
  uRam0000000113834002 = uRam0000000113834002 & 0xffbf | 0x20;
  uRam0000000113834078 = 15000;
  uRam0000000113834088 = CONCAT35(uRam0000000113834088._5_3_,0x100000000);
  uRam0000000113834088 = CONCAT44(uRam0000000113834088._4_4_,15000);
  puRam0000000113834018 = &UNK_10f60190d;
  uRam0000000113834020 = 0x95;
  FUN_100046b10(0x113833ff8);
  func_0x000107c60e34(&DAT_109d2f8c4,0x113833ff8,0x100000000);
  FUN_100045fdc(0x1138340b8,0,0);
  uRam0000000113834138 = 0;
  ppuRam0000000113834140 = &PTR_DAT_110b3fc50;
  uRam0000000113834148 = 0;
  ppuRam00000001138340b8 = &PTR_DAT_110b5bec0;
  ppuRam0000000113834150 = &PTR_DAT_110b5bfa0;
  ppuRam0000000113834158 = &PTR_DAT_110b3fbc0;
  uRam0000000113834170 = 0x113834158;
  FUN_10004687c();
  uRam00000001138340c2 = uRam00000001138340c2 & 0xffbf | 0x20;
  uRam0000000113834138 = 0x30d4;
  uRam0000000113834148 = CONCAT35(uRam0000000113834148._5_3_,0x100000000);
  uRam0000000113834148 = CONCAT44(uRam0000000113834148._4_4_,0x30d4);
  puRam00000001138340d8 = &UNK_10f6019d4;
  uRam00000001138340e0 = 0x96;
  FUN_100046b10(0x1138340b8);
  func_0x000107c60e34(&DAT_109d2f8c4,0x1138340b8,0x100000000);
  FUN_100045fdc(0x113834178,0,0);
  uRam00000001138341f8 = 0;
  uRam0000000113834210 = 0;
  uRam0000000113834208 = 0;
  ppuRam0000000113834200 = &PTR_DAT_110b5b6a0;
  ppuRam0000000113834178 = &PTR_DAT_110b5b5f0;
  ppuRam0000000113834218 = &PTR_DAT_110b5baf8;
  ppuRam0000000113834220 = &PTR_DAT_110b5b708;
  uRam0000000113834238 = 0x113834220;
  FUN_10004687c();
  uRam0000000113834182 = uRam0000000113834182 & 0xff9f | 0x40;
  puRam0000000113834198 = &UNK_10f601a85;
  uRam00000001138341a0 = 0x52;
  FUN_100046b10(0x113834178);
  func_0x000107c60e34(&DAT_109de7328,0x113834178,0x100000000);
  FUN_100045fdc(0x113834240,0,0);
  uRam00000001138342c0 = 0;
  uRam00000001138342d8 = 0;
  uRam00000001138342d0 = 0;
  ppuRam00000001138342c8 = &PTR_DAT_110b5b6a0;
  ppuRam0000000113834240 = &PTR_DAT_110b5b5f0;
  ppuRam00000001138342e0 = &PTR_DAT_110b5baf8;
  ppuRam00000001138342e8 = &PTR_DAT_110b5b708;
  uRam0000000113834300 = 0x1138342e8;
  FUN_10004687c();
  uRam000000011383424a = uRam000000011383424a & 0xff9f | 0x40;
  puRam0000000113834260 = &UNK_10f601af3;
  uRam0000000113834268 = 0x54;
  FUN_100046b10(0x113834240);
  func_0x000107c60e34(&DAT_109de7328,0x113834240,0x100000000);
  return;
}



/* Entry: 100052fb0; end: 100053183;  */

/* WARNING: Possible PIC construction at 0x00010005307c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100053080) */

void FUN_100052fb0(void)

{
  FUN_100045fdc(0x1137e79f0,0,0);
  uRam00000001137e7a70 = 0;
  uRam00000001137e7a88 = 0;
  uRam00000001137e7a80 = 0;
  ppuRam00000001137e7a78 = &PTR_DAT_110b5b6a0;
  ppuRam00000001137e79f0 = &PTR_DAT_110b5b5f0;
  ppuRam00000001137e7a90 = &PTR_DAT_110b5baf8;
  ppuRam00000001137e7a98 = &PTR_DAT_110b5b708;
  uRam00000001137e7ab0 = 0x1137e7a98;
  FUN_10004687c();
  uRam00000001137e79fa = uRam00000001137e79fa & 0xffbf | 0x20;
  uRam00000001137e7a70 = 0xffffffffffffffff;
  uRam00000001137e7a88 = CONCAT71(uRam00000001137e7a88._1_7_,1);
  uRam00000001137e7a80 = 0xffffffffffffffff;
  puRam00000001137e7a10 = &UNK_10f601b63;
  uRam00000001137e7a18 = 0x76;
  FUN_100046b10(0x1137e79f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&DAT_109de7328,0x1137e79f0,0x100000000);
  return;
}



/* Entry: 100053184; end: 100053293;  */

void FUN_100053184(void)

{
  FUN_100045fdc(0x1137e7ab8,0,0);
  uRam00000001137e7b38 = 0;
  ppuRam00000001137e7b40 = &PTR_DAT_110b3fac8;
  uRam00000001137e7b48 = 0;
  ppuRam00000001137e7ab8 = &PTR_DAT_110b5be10;
  ppuRam00000001137e7b50 = &PTR_DAT_110b5b9a8;
  ppuRam00000001137e7b58 = &PTR_DAT_110b3fb30;
  uRam00000001137e7b70 = 0x1137e7b58;
  FUN_10004687c();
  uRam00000001137e7ac2 = uRam00000001137e7ac2 & 0xffbf | 0x20;
  uRam00000001137e7b38 = 0;
  uRam00000001137e7b48 = CONCAT62(uRam00000001137e7b48._2_6_,0x100);
  puRam00000001137e7ad8 = &UNK_10f601c9d;
  uRam00000001137e7ae0 = 0x2a;
  FUN_100046b10(0x1137e7ab8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&DAT_109d2f60c,0x1137e7ab8,0x100000000);
  return;
}



/* Entry: 100053294; end: 1000533a7;  */

void FUN_100053294(void)

{
  FUN_100045fdc(0x1137e7b78,0,0);
  uRam00000001137e7bf8 = 0;
  ppuRam00000001137e7c00 = &PTR_DAT_110b5b8e8;
  uRam00000001137e7c08 = 0;
  ppuRam00000001137e7b78 = &PTR_DAT_110b5b798;
  ppuRam00000001137e7c10 = &PTR_DAT_110b5ba08;
  ppuRam00000001137e7c18 = &PTR_DAT_110b5b848;
  uRam00000001137e7c30 = 0x1137e7c18;
  FUN_10004687c();
  puRam00000001137e7b98 = &UNK_10f601cdd;
  uRam00000001137e7ba0 = 0x85;
  uRam00000001137e7bf8 = 0;
  uRam00000001137e7c08 = CONCAT35(uRam00000001137e7c08._5_3_,0x100000000);
  uRam00000001137e7b82 = uRam00000001137e7b82 & 0xffbf | 0x20;
  FUN_100046b10(0x1137e7b78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&DAT_109de75cc,0x1137e7b78,0x100000000);
  return;
}



/* Entry: 1000533a8; end: 1000533f3;  */

/* WARNING: Possible PIC construction at 0x0001000533d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000533d8) */

void FUN_1000533a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(PTR___ZNSt3__15mutexD1Ev_110346798,0x1132fef28,0x100000000)
  ;
  return;
}



/* Entry: 1000533f4; end: 100053413;  */

void FUN_1000533f4(void)

{
  uRam0000000113834718 = 0;
  uRam0000000113834720 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&UNK_109e26928,0x113834718,0x100000000);
  return;
}



/* Entry: 100053414; end: 100053603;  */

void FUN_100053414(void)

{
  undefined8 *puVar1;
  mach_header *pmVar2;
  mach_header *pmVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uStack_8038;
  undefined8 uStack_8030;
  undefined8 uStack_8028;
  undefined1 auStack_4038 [16384];
  long lStack_38;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uRam00000001137e92e0 = 0;
  uRam00000001137e92e8 = 0;
  uStack_8038 = CONCAT53(uStack_8038._3_5_,0x40201);
  uRam00000001137e9348 = 0;
  uRam00000001137e9350 = 0;
  uRam00000001137e9340 = 0;
  FUN_100053640(0x1137e9340,&uStack_8038,(long)&uStack_8038 + 3,3);
  func_0x000107c60e34(&UNK_10a00f5e4,0x1137e9340,0x100000000);
  func_0x000107c610b4(&uStack_8038,&UNK_10e482e54,0x8000);
  uRam00000001137e9358 = 0;
  uRam00000001137e9360 = 0;
  uRam00000001137e9368 = 0;
  FUN_1000536ec(0x1137e9358,&uStack_8038,&lStack_38,0x8000);
  func_0x000107c60e34(&UNK_10a0101c0,0x1137e9358,0x100000000);
  func_0x000107c610b4(&uStack_8038,&UNK_10e48ae54,0x4000);
  uRam00000001137e9370 = 0;
  uRam00000001137e9378 = 0;
  uRam00000001137e9380 = 0;
  lVar4 = 0x4000;
  FUN_1000536ec(0x1137e9370,&uStack_8038,auStack_4038);
  func_0x000107c60e34(&UNK_10a0101c0,0x1137e9370,0x100000000);
  FUN_10005375c(&uStack_8038,&UNK_10f633264);
  pmVar3 = (mach_header *)0x1138347a0;
  uRam00000001138347b7 = 0x12;
  uRam00000001138347b0 = 0x454c;
  uRam00000001138347a8 = 0x5954535f50414d5f;
  uRam00000001138347a0 = 0x45524f43534e454c;
  uRam00000001138347b2 = 0;
  uRam00000001138347c0 = uStack_8030;
  uRam00000001138347b8 = uStack_8038;
  uRam00000001138347c8 = uStack_8028;
  uStack_8038 = 0;
  uStack_8030 = 0;
  uStack_8028 = 0;
  uRam00000001138347d0 = 0;
  uRam00000001138347e8 = 0;
  uRam00000001138347f0 = 0;
  puRam00000001138347f8 = &UNK_10a080f80;
  ppuRam0000000113834800 = &PTR_DAT_110b9f408;
  puVar1 = (undefined8 *)&UNK_10a03d294;
  pmVar2 = &MACH_HEADER;
  func_0x000107c60e34();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  if (-1 < (long)pmVar3) {
    pmVar2 = pmVar3;
    func_0x000107c60e20();
    *puVar1 = pmVar2;
    puVar1[1] = pmVar2;
    puVar1[2] = (long)&pmVar3->magic + (long)&pmVar2->magic;
    return;
  }
  func_0x000107c2b078();
  if (lVar4 != 0) {
    FUN_100053604();
    puVar5 = (undefined1 *)puVar1[1];
    for (; pmVar3 != pmVar2; pmVar3 = (mach_header *)((long)&pmVar3->magic + 1)) {
      *puVar5 = (char)pmVar3->magic;
      puVar5 = puVar5 + 1;
    }
    puVar1[1] = puVar5;
  }
  return;
}



/* Entry: 100053604; end: 10005363f;  */

void FUN_100053604(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,long param_4)

{
  undefined1 *puVar1;
  
  if (-1 < (long)param_2) {
    puVar1 = param_2;
    func_0x000107c60e20();
    *param_1 = puVar1;
    param_1[1] = puVar1;
    param_1[2] = puVar1 + (long)param_2;
    return;
  }
  func_0x000107c2b078();
  if (param_4 != 0) {
    FUN_100053604();
    puVar1 = (undefined1 *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    param_1[1] = puVar1;
  }
  return;
}



/* Entry: 100053640; end: 1000536af;  */

void FUN_100053640(long param_1,undefined1 *param_2,undefined1 *param_3,long param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    FUN_100053604(param_1,param_4);
    puVar1 = *(undefined1 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined1 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 1000536b0; end: 1000536eb;  */

void FUN_1000536b0(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,long param_4)

{
  undefined1 *puVar1;
  
  if (-1 < (long)param_2) {
    puVar1 = param_2;
    func_0x000107c60e20();
    *param_1 = puVar1;
    param_1[1] = puVar1;
    param_1[2] = puVar1 + (long)param_2;
    return;
  }
  func_0x000107c2b050();
  if (param_4 != 0) {
    FUN_1000536b0();
    puVar1 = (undefined1 *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    param_1[1] = puVar1;
  }
  return;
}



/* Entry: 1000536ec; end: 10005375b;  */

void FUN_1000536ec(long param_1,undefined1 *param_2,undefined1 *param_3,long param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    FUN_1000536b0(param_1,param_4);
    puVar1 = *(undefined1 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined1 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10005375c; end: 1000537ff;  */

ulong * FUN_10005375c(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  
  puVar2 = param_2;
  func_0x000107c613d0();
  if ((ulong *)0x7ffffffffffffff7 < puVar2) {
    func_0x000107c2b040();
    if ((bRam00000001132ffc88 & 1) == 0) {
      puVar2 = (ulong *)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)puVar2 != 0) {
        puVar4 = (undefined8 *)0x30;
        func_0x000107c60e20();
        uRam00000001132ffc38 = 0x8000000000000030;
        uRam00000001132ffc30 = 0x2c;
        puRam00000001132ffc28 = puVar4;
        puVar4[1] = 0x434948504152475f;
        *puVar4 = 0x45524f43534e454c;
        puVar4[3] = 0x525f595a414c5f54;
        puVar4[2] = 0x5845544e4f435f53;
        *(undefined8 *)((long)puVar4 + 0x24) = 0x54494e495f454352;
        *(undefined8 *)((long)puVar4 + 0x1c) = 0x554f5345525f595a;
        *(undefined1 *)((long)puVar4 + 0x2c) = 0;
        uRam00000001132ffc40 = 0;
        puRam00000001132ffc48 = &UNK_10a09e854;
        ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
        func_0x000107c60e34(&UNK_10a08e670,0x1132ffc28,0x100000000);
        puVar2 = (ulong *)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return puVar2;
      }
    }
    return puVar2;
  }
  if (puVar2 < (ulong *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar2;
    puVar3 = param_1;
    if (puVar2 == (ulong *)0x0) goto LAB_1000537e0;
  }
  else {
    puVar1 = (ulong *)0x19;
    if (((ulong)puVar2 | 7) != 0x17) {
      puVar1 = (ulong *)(((ulong)puVar2 | 7) + 1);
    }
    puVar3 = puVar1;
    func_0x000107c60e20();
    param_1[1] = (ulong)puVar2;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = (ulong)puVar3;
  }
  func_0x000107c610b8(puVar3,param_2,puVar2);
LAB_1000537e0:
  *(undefined1 *)((long)puVar3 + (long)puVar2) = 0;
  return param_1;
}



/* Entry: 100053800; end: 1000538cb;  */

void FUN_100053800(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((bRam00000001132ffc88 & 1) == 0) {
    iVar1 = 0x132ffc88;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      puVar2 = (undefined8 *)0x30;
      func_0x000107c60e20();
      uRam00000001132ffc38 = 0x8000000000000030;
      uRam00000001132ffc30 = 0x2c;
      puRam00000001132ffc28 = puVar2;
      puVar2[1] = 0x434948504152475f;
      *puVar2 = 0x45524f43534e454c;
      puVar2[3] = 0x525f595a414c5f54;
      puVar2[2] = 0x5845544e4f435f53;
      *(undefined8 *)((long)puVar2 + 0x24) = 0x54494e495f454352;
      *(undefined8 *)((long)puVar2 + 0x1c) = 0x554f5345525f595a;
      *(undefined1 *)((long)puVar2 + 0x2c) = 0;
      uRam00000001132ffc40 = 0;
      puRam00000001132ffc48 = &UNK_10a09e854;
      ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
      func_0x000107c60e34(&UNK_10a08e670,0x1132ffc28,0x100000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
      return;
    }
  }
  return;
}



/* Entry: 1000538cc; end: 100053c9f;  */

undefined8 * FUN_1000538cc(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  char cStack_89;
  undefined *puStack_88;
  undefined **appuStack_80 [7];
  long lStack_48;
  
  puVar5 = (undefined8 *)&uStack_a0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uRam00000001137e9400 = 0;
  uRam00000001137e9408 = 0;
  puVar2 = (undefined8 *)0x28;
  func_0x000107c60e20();
  uRam0000000113834848 = 0x8000000000000028;
  uRam0000000113834840 = 0x25;
  puRam0000000113834838 = puVar2;
  puVar2[1] = 0x53415f485449575f;
  *puVar2 = 0x45524f43534e454c;
  puVar2[3] = 0x45434f52505f5245;
  puVar2[2] = 0x444148535f434e59;
  *(undefined8 *)((long)puVar2 + 0x1d) = 0x474e49535345434f;
  *(undefined1 *)((long)puVar2 + 0x25) = 0;
  uRam0000000113834850 = 0;
  puRam0000000113834858 = &UNK_10a09e854;
  ppuRam0000000113834860 = &PTR_DAT_110ba0fe0;
  uVar4 = 0x100000000;
  func_0x000107c60e34(&UNK_10a08e670,0x113834838,0x100000000);
  uRam00000001137e9480 = 0;
  uRam00000001137e9484 = 0;
  uRam00000001137e9488 = 0;
  puVar2 = (undefined8 *)0x20;
  func_0x000107c60e20();
  uRam00000001137e94a0 = 0x8000000000000020;
  uRam00000001137e9498 = 0x1c;
  puRam00000001137e9490 = puVar2;
  puVar2[1] = 0x4c475f485449575f;
  *puVar2 = 0x45524f43534e454c;
  *(undefined8 *)((long)puVar2 + 0x14) = 0x52455a494d495450;
  *(undefined8 *)((long)puVar2 + 0xc) = 0x4f5f4c534c475f48;
  *(undefined1 *)((long)puVar2 + 0x1c) = 0;
  uRam00000001137e94a8 = 0;
  uRam00000001137e94ac = 0;
  uRam00000001137e94b0 = 0;
  uRam00000001137e94b4 = 0;
  puRam00000001137e94b8 = &UNK_10a0a027c;
  ppuRam00000001137e94c0 = &PTR_DAT_110ba0c08;
  puRam00000001137e94f8 = &UNK_10a0a0260;
  ppuRam00000001137e9500 = &PTR_DAT_110ba09b0;
  func_0x000107c60e34(&UNK_10a08f82c,0x1137e9480,0x100000000);
  uRam00000001138348af = 0x11;
  uRam00000001138348a8 = 0x47;
  uRam00000001138348a0 = 0x554245445f53475f;
  uRam0000000113834898 = 0x45524f43534e454c;
  uRam00000001138348b0 = 0;
  uRam00000001138348b4 = 0;
  uRam00000001138348b8 = 0;
  uRam00000001138348bc = 0;
  puRam00000001138348c0 = &UNK_10a0a027c;
  ppuRam00000001138348c8 = &PTR_DAT_110ba0c08;
  func_0x000107c60e34(&UNK_10a08fdec,0x113834898,0x100000000);
  puVar2 = (undefined8 *)0x20;
  func_0x000107c60e20();
  uRam00000001137e9428 = 0x8000000000000020;
  uRam00000001137e9420 = 0x19;
  puRam00000001137e9418 = puVar2;
  puVar2[1] = 0x5f5550475f53475f;
  *puVar2 = 0x45524f43534e454c;
  *(undefined8 *)((long)puVar2 + 0x11) = 0x45444f4d5f54524f;
  *(undefined8 *)((long)puVar2 + 9) = 0x535f5550475f5347;
  *(undefined1 *)((long)puVar2 + 0x19) = 0;
  uRam00000001137e9430 = 0;
  uRam00000001137e9434 = 0;
  uRam00000001137e9438 = 0;
  uRam00000001137e943c = 0;
  puRam00000001137e9440 = &UNK_10a0a027c;
  ppuRam00000001137e9448 = &PTR_DAT_110ba0c08;
  func_0x000107c60e34(&UNK_10a08fdec,0x1137e9418,0x100000000);
  puVar2 = (undefined8 *)0x28;
  func_0x000107c60e20();
  puRam0000000113834900 = puVar2;
  *(undefined4 *)(puVar2 + 4) = 0x4c4c4143;
  uRam0000000113834910 = 0x8000000000000028;
  uRam0000000113834908 = 0x24;
  puVar2[1] = 0x5f58414d5f53475f;
  *puVar2 = 0x45524f43534e454c;
  puVar2[3] = 0x5f574152445f5245;
  puVar2[2] = 0x505f5354414c5053;
  *(undefined1 *)((long)puVar2 + 0x24) = 0;
  uRam0000000113834918 = 0;
  uRam000000011383491c = 0;
  uRam0000000113834920 = 0;
  uRam0000000113834924 = 0;
  puRam0000000113834928 = &UNK_10a0a027c;
  ppuRam0000000113834930 = &PTR_DAT_110ba0c08;
  func_0x000107c60e34(&UNK_10a08fdec,0x113834900,0x100000000);
  uRam0000000113834968 = 0;
  uRam000000011383496c = 0;
  uRam0000000113834970 = 0;
  puVar2 = (undefined8 *)0x20;
  func_0x000107c60e20();
  uRam0000000113834988 = 0x8000000000000020;
  uRam0000000113834980 = 0x1d;
  puRam0000000113834978 = puVar2;
  puVar2[1] = 0x455255545845545f;
  *puVar2 = 0x45524f43534e454c;
  *(undefined8 *)((long)puVar2 + 0x15) = 0x45444f4d5f504f52;
  *(undefined8 *)((long)puVar2 + 0xd) = 0x45544e495f455255;
  *(undefined1 *)((long)puVar2 + 0x1d) = 0;
  uRam0000000113834990 = 0;
  uRam0000000113834994 = 0;
  uRam0000000113834998 = 0;
  uRam000000011383499c = 0;
  puRam00000001138349a0 = &UNK_10a0a027c;
  ppuRam00000001138349a8 = &PTR_DAT_110ba0c08;
  puRam00000001138349e0 = &UNK_10a0a0298;
  ppuRam00000001138349e8 = &PTR_DAT_110ba09c8;
  func_0x000107c60e34(&UNK_10a0904c8,0x113834968,0x100000000);
  cStack_89 = '\0';
  uStack_a0 = 0;
  puStack_88 = &UNK_10a080f80;
  appuStack_80[0] = &PTR_DAT_110b9f408;
  ppuVar6 = &puStack_88;
  FUN_100053ca0(0x113834a20,&UNK_10f636caf,0x2b);
  (*(code *)*appuStack_80[0])(appuStack_80);
  if (cStack_89 < '\0') {
    func_0x000107c60e14(CONCAT71(uStack_9f,uStack_a0));
  }
  func_0x000107c60e34(&UNK_10a03d294,0x113834a20,0x100000000);
  puVar2 = (undefined8 *)&UNK_10a097024;
  uVar7 = 0x113834ab8;
  func_0x000107c60e34(&UNK_10a097024,0x113834ab8);
  uRam0000000113834ad8 = 0x32aaaba7;
  uRam0000000113834ae8 = 0;
  uRam0000000113834ae0 = 0;
  uRam0000000113834af8 = 0;
  uRam0000000113834af0 = 0;
  uRam0000000113834b08 = 0;
  uRam0000000113834b00 = 0;
  uRam0000000113834b10 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar2;
  }
  func_0x000107c60e78();
  (*(code *)*appuStack_80[0])(appuStack_80);
  if (cStack_89 < '\0') {
    func_0x000107c60e14(CONCAT71(uStack_9f,uStack_a0));
  }
  func_0x000107c60bd8();
  if (0x7ffffffffffffff7 < uVar4) {
    func_0x000107c2b040();
    *puVar2 = &PTR_DAT_110b9f408;
    return puVar2;
  }
  if (uVar4 < 0x17) {
    *(char *)((long)puVar2 + 0x17) = (char)uVar4;
    puVar3 = puVar2;
    if (uVar4 == 0) goto LAB_100053d28;
  }
  else {
    puVar1 = (undefined8 *)0x19;
    if ((uVar4 | 7) != 0x17) {
      puVar1 = (undefined8 *)((uVar4 | 7) + 1);
    }
    puVar3 = puVar1;
    func_0x000107c60e20();
    puVar2[1] = uVar4;
    puVar2[2] = (ulong)puVar1 | 0x8000000000000000;
    *puVar2 = puVar3;
  }
  func_0x000107c610b8(puVar3,uVar7,uVar4);
LAB_100053d28:
  *(undefined1 *)((long)puVar3 + uVar4) = 0;
  uVar8 = puVar5[1];
  uVar7 = *puVar5;
  puVar2[5] = puVar5[2];
  puVar2[4] = uVar8;
  puVar2[3] = uVar7;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  *(undefined1 *)(puVar2 + 6) = 0;
  *(undefined1 *)(puVar2 + 9) = 0;
  *(undefined1 *)(puVar2 + 10) = 0;
  puVar2[0xb] = *ppuVar6;
  (**(code **)(ppuVar6[1] + 0x10))(puVar2 + 0xc,ppuVar6 + 1);
  return puVar2;
}



/* Entry: 100053ca0; end: 100053d8b;  */

ulong * FUN_100053ca0(ulong *param_1,undefined8 param_2,ulong param_3,ulong *param_4,ulong *param_5)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000107c2b040();
    *param_1 = (ulong)&PTR_DAT_110b9f408;
    return param_1;
  }
  if (param_3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)param_3;
    puVar2 = param_1;
    if (param_3 == 0) goto LAB_100053d28;
  }
  else {
    puVar1 = (ulong *)0x19;
    if ((param_3 | 7) != 0x17) {
      puVar1 = (ulong *)((param_3 | 7) + 1);
    }
    puVar2 = puVar1;
    func_0x000107c60e20();
    param_1[1] = param_3;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = (ulong)puVar2;
  }
  func_0x000107c610b8(puVar2,param_2,param_3);
LAB_100053d28:
  *(undefined1 *)((long)puVar2 + param_3) = 0;
  uVar4 = param_4[1];
  uVar3 = *param_4;
  param_1[5] = param_4[2];
  param_1[4] = uVar4;
  param_1[3] = uVar3;
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = *param_5;
  (**(code **)(param_5[1] + 0x10))(param_1 + 0xc,param_5 + 1);
  return param_1;
}



/* Entry: 100053d8c; end: 100053d9f;  */

void FUN_100053d8c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b9f408;
  return;
}



/* Entry: 100053da0; end: 1000552cf;  */

ulong FUN_100053da0(void)

{
  ulong uVar1;
  uint uVar2;
  bool bVar3;
  undefined1 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong unaff_x26;
  ulong uVar23;
  long lVar24;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  long alStack_e0 [2];
  long lStack_d0;
  char cStack_c9;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 auStack_a0 [2];
  undefined8 uStack_90;
  char cStack_89;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  uVar19 = 0;
  uVar22 = 0;
  lVar20 = 0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uRam00000001137e9540 = 0;
  uRam00000001137e9548 = 0;
  uRam00000001137e9628 = 0;
  lRam00000001137e9620 = 0;
  uRam00000001137e9638 = 0;
  plRam00000001137e9630 = (long *)0x0;
  fRam00000001137e9640 = 1.0;
  do {
    uVar21 = (ulong)*(int *)(&UNK_10e494408 + lVar20);
    uVar23 = *(ulong *)(&UNK_10e494408 + lVar20);
    if (uVar22 != 0) {
      uVar10 = uVar22 - 1;
      if ((uVar22 & uVar10) == 0) {
        unaff_x26 = uVar10 & uVar21;
      }
      else {
        unaff_x26 = uVar21;
        if (uVar22 <= uVar21) {
          uVar13 = 0;
          if (uVar22 != 0) {
            uVar13 = uVar21 / uVar22;
          }
          unaff_x26 = uVar21 - uVar13 * uVar22;
        }
      }
      plVar12 = *(long **)(lRam00000001137e9620 + unaff_x26 * 8);
      if (plVar12 != (long *)0x0) {
        do {
          while( true ) {
            plVar12 = (long *)*plVar12;
            if (plVar12 == (long *)0x0) goto LAB_100053e94;
            uVar13 = plVar12[1];
            if (uVar13 != uVar21) break;
            if (*(int *)(plVar12 + 2) == *(int *)(&UNK_10e494408 + lVar20)) goto LAB_100054134;
          }
          if ((uVar22 & uVar10) == 0) {
            uVar13 = uVar13 & uVar10;
          }
          else if (uVar22 <= uVar13) {
            uVar18 = 0;
            if (uVar22 != 0) {
              uVar18 = uVar13 / uVar22;
            }
            uVar13 = uVar13 - uVar18 * uVar22;
          }
        } while (uVar13 == unaff_x26);
      }
    }
LAB_100053e94:
    plVar12 = (long *)0x18;
    func_0x000107c60e20();
    *plVar12 = 0;
    plVar12[1] = uVar21;
    plVar12[2] = uVar23;
    if ((uVar22 == 0) || (fRam00000001137e9640 * (float)uVar22 < (float)(uVar19 + 1))) {
      uVar10 = 1;
      if (2 < uVar22) {
        uVar10 = (ulong)((uVar22 & uVar22 - 1) != 0);
      }
      uVar10 = uVar10 | uVar22 << 1;
      uVar19 = (ulong)((float)(uVar19 + 1) / fRam00000001137e9640);
      if (uVar10 <= uVar19) {
        uVar10 = uVar19;
      }
      uVar19 = uVar22;
      if (uVar10 - 1 == 0) {
        uVar10 = 2;
      }
      else if ((uVar10 & uVar10 - 1) != 0) {
        func_0x000107c60c44();
        uVar19 = uRam00000001137e9628;
      }
      if (uVar19 < uVar10) {
LAB_100053f30:
        if (uVar10 >> 0x3d != 0) {
          func_0x000107c2b044();
          goto LAB_1000551ac;
        }
        lVar24 = uVar10 << 3;
        func_0x000107c60e20();
        bVar3 = lRam00000001137e9620 != 0;
        lRam00000001137e9620 = lVar24;
        if (bVar3) {
          func_0x000107c60e14();
        }
        uVar19 = 0;
        uRam00000001137e9628 = uVar10;
        do {
          *(undefined8 *)(lRam00000001137e9620 + uVar19 * 8) = 0;
          plVar11 = plRam00000001137e9630;
          uVar19 = uVar19 + 1;
        } while (uVar10 != uVar19);
        uVar22 = uVar10;
        if (plRam00000001137e9630 != (long *)0x0) {
          uVar19 = plRam00000001137e9630[1];
          uVar13 = uVar10 - 1;
          if ((uVar10 & uVar13) == 0) {
            uVar19 = uVar19 & uVar13;
          }
          else if (uVar10 <= uVar19) {
            uVar18 = 0;
            if (uVar10 != 0) {
              uVar18 = uVar19 / uVar10;
            }
            uVar19 = uVar19 - uVar18 * uVar10;
          }
          *(undefined8 *)(lRam00000001137e9620 + uVar19 * 8) = 0x1137e9630;
          plVar14 = (long *)*plVar11;
          lVar24 = lRam00000001137e9620;
          while (lRam00000001137e9620 = lVar24, plVar14 != (long *)0x0) {
            uVar18 = plVar14[1];
            if ((uVar10 & uVar13) == 0) {
              uVar18 = uVar18 & uVar13;
            }
            else if (uVar10 <= uVar18) {
              uVar1 = 0;
              if (uVar10 != 0) {
                uVar1 = uVar18 / uVar10;
              }
              uVar18 = uVar18 - uVar1 * uVar10;
            }
            plVar15 = plVar14;
            if (uVar18 != uVar19) {
              if (*(long *)(lVar24 + uVar18 * 8) == 0) {
                *(long **)(lVar24 + uVar18 * 8) = plVar11;
                uVar19 = uVar18;
              }
              else {
                *plVar11 = *plVar14;
                *plVar14 = **(long **)(lVar24 + uVar18 * 8);
                **(undefined8 **)(lVar24 + uVar18 * 8) = plVar14;
                plVar15 = plVar11;
              }
            }
            lVar24 = lRam00000001137e9620;
            plVar11 = plVar15;
            plVar14 = (long *)*plVar15;
          }
        }
      }
      else {
        uVar22 = uVar19;
        if (uVar10 < uVar19) {
          uVar22 = (ulong)((float)uRam00000001137e9638 / fRam00000001137e9640);
          if ((uVar19 < 3) || ((uVar19 & uVar19 - 1) != 0)) {
            func_0x000107c60c44();
          }
          else if (1 < uVar22) {
            uVar22 = 1L << (-LZCOUNT(uVar22 - 1) & 0x3fU);
          }
          lVar24 = lRam00000001137e9620;
          if (uVar10 <= uVar22) {
            uVar10 = uVar22;
          }
          uVar22 = uRam00000001137e9628;
          if (uVar10 < uVar19) {
            if (uVar10 != 0) goto LAB_100053f30;
            lRam00000001137e9620 = 0;
            if (lVar24 != 0) {
              func_0x000107c60e14();
            }
            uRam00000001137e9628 = 0;
            uVar22 = 0;
          }
        }
      }
      if ((uVar22 & uVar22 - 1) == 0) {
        unaff_x26 = uVar22 - 1 & uVar21;
      }
      else {
        unaff_x26 = uVar21;
        if (uVar22 <= uVar21) {
          uVar19 = 0;
          if (uVar22 != 0) {
            uVar19 = uVar21 / uVar22;
          }
          unaff_x26 = uVar21 - uVar19 * uVar22;
        }
      }
    }
    lVar24 = lRam00000001137e9620;
    plVar11 = *(long **)(lRam00000001137e9620 + unaff_x26 * 8);
    if (plVar11 == (long *)0x0) {
      *plVar12 = (long)plRam00000001137e9630;
      plRam00000001137e9630 = plVar12;
      *(undefined8 *)(lVar24 + unaff_x26 * 8) = 0x1137e9630;
      if (*plVar12 != 0) {
        uVar19 = *(ulong *)(*plVar12 + 8);
        if ((uVar22 & uVar22 - 1) == 0) {
          uVar19 = uVar19 & uVar22 - 1;
        }
        else if (uVar22 <= uVar19) {
          uVar21 = 0;
          if (uVar22 != 0) {
            uVar21 = uVar19 / uVar22;
          }
          uVar19 = uVar19 - uVar21 * uVar22;
        }
        plVar11 = (long *)(lRam00000001137e9620 + uVar19 * 8);
        goto LAB_100054124;
      }
    }
    else {
      *plVar12 = *plVar11;
LAB_100054124:
      *plVar11 = (long)plVar12;
    }
    uVar19 = uRam00000001137e9638 + 1;
    uRam00000001137e9638 = uVar19;
LAB_100054134:
    lVar20 = lVar20 + 8;
  } while (lVar20 != 0x30);
  uVar19 = 0;
  uVar22 = 0;
  lVar20 = 0;
  uRam00000001137e9650 = 0;
  lRam00000001137e9648 = 0;
  uRam00000001137e9660 = 0;
  plRam00000001137e9658 = (long *)0x0;
  fRam00000001137e9668 = 1.0;
  do {
    uVar21 = (ulong)*(int *)(&UNK_10e494438 + lVar20);
    lVar24 = *(long *)(&UNK_10e494438 + lVar20);
    if (uVar22 != 0) {
      uVar10 = uVar22 - 1;
      if ((uVar22 & uVar10) == 0) {
        uVar23 = uVar10 & uVar21;
      }
      else {
        uVar23 = uVar21;
        if (uVar22 <= uVar21) {
          uVar23 = 0;
          if (uVar22 != 0) {
            uVar23 = uVar21 / uVar22;
          }
          uVar23 = uVar21 - uVar23 * uVar22;
        }
      }
      plVar12 = *(long **)(lRam00000001137e9648 + uVar23 * 8);
      if (plVar12 != (long *)0x0) {
        do {
          while( true ) {
            plVar12 = (long *)*plVar12;
            if (plVar12 == (long *)0x0) goto LAB_100054248;
            uVar13 = plVar12[1];
            if (uVar13 != uVar21) break;
            if (*(int *)(plVar12 + 2) == *(int *)(&UNK_10e494438 + lVar20)) goto LAB_1000544e8;
          }
          if ((uVar22 & uVar10) == 0) {
            uVar13 = uVar13 & uVar10;
          }
          else if (uVar22 <= uVar13) {
            uVar18 = 0;
            if (uVar22 != 0) {
              uVar18 = uVar13 / uVar22;
            }
            uVar13 = uVar13 - uVar18 * uVar22;
          }
        } while (uVar13 == uVar23);
      }
    }
LAB_100054248:
    plVar12 = (long *)0x18;
    func_0x000107c60e20();
    *plVar12 = 0;
    plVar12[1] = uVar21;
    plVar12[2] = lVar24;
    if ((uVar22 == 0) || (fRam00000001137e9668 * (float)uVar22 < (float)(uVar19 + 1))) {
      uVar23 = 1;
      if (2 < uVar22) {
        uVar23 = (ulong)((uVar22 & uVar22 - 1) != 0);
      }
      uVar23 = uVar23 | uVar22 << 1;
      uVar19 = (ulong)((float)(uVar19 + 1) / fRam00000001137e9668);
      if (uVar23 <= uVar19) {
        uVar23 = uVar19;
      }
      uVar19 = uVar22;
      if (uVar23 - 1 == 0) {
        uVar23 = 2;
      }
      else if ((uVar23 & uVar23 - 1) != 0) {
        func_0x000107c60c44();
        uVar19 = uRam00000001137e9650;
      }
      if (uVar19 < uVar23) {
LAB_1000542e4:
        if (uVar23 >> 0x3d != 0) {
          func_0x000107c2b044();
          goto LAB_1000551ac;
        }
        lVar24 = uVar23 << 3;
        func_0x000107c60e20();
        bVar3 = lRam00000001137e9648 != 0;
        lRam00000001137e9648 = lVar24;
        if (bVar3) {
          func_0x000107c60e14();
        }
        uVar19 = 0;
        uRam00000001137e9650 = uVar23;
        do {
          *(undefined8 *)(lRam00000001137e9648 + uVar19 * 8) = 0;
          plVar11 = plRam00000001137e9658;
          uVar19 = uVar19 + 1;
        } while (uVar23 != uVar19);
        uVar22 = uVar23;
        if (plRam00000001137e9658 != (long *)0x0) {
          uVar19 = plRam00000001137e9658[1];
          uVar10 = uVar23 - 1;
          if ((uVar23 & uVar10) == 0) {
            uVar19 = uVar19 & uVar10;
          }
          else if (uVar23 <= uVar19) {
            uVar13 = 0;
            if (uVar23 != 0) {
              uVar13 = uVar19 / uVar23;
            }
            uVar19 = uVar19 - uVar13 * uVar23;
          }
          *(undefined8 *)(lRam00000001137e9648 + uVar19 * 8) = 0x1137e9658;
          plVar14 = (long *)*plVar11;
          lVar24 = lRam00000001137e9648;
          while (lRam00000001137e9648 = lVar24, plVar14 != (long *)0x0) {
            uVar13 = plVar14[1];
            if ((uVar23 & uVar10) == 0) {
              uVar13 = uVar13 & uVar10;
            }
            else if (uVar23 <= uVar13) {
              uVar18 = 0;
              if (uVar23 != 0) {
                uVar18 = uVar13 / uVar23;
              }
              uVar13 = uVar13 - uVar18 * uVar23;
            }
            plVar15 = plVar14;
            if (uVar13 != uVar19) {
              if (*(long *)(lVar24 + uVar13 * 8) == 0) {
                *(long **)(lVar24 + uVar13 * 8) = plVar11;
                uVar19 = uVar13;
              }
              else {
                *plVar11 = *plVar14;
                *plVar14 = **(long **)(lVar24 + uVar13 * 8);
                **(undefined8 **)(lVar24 + uVar13 * 8) = plVar14;
                plVar15 = plVar11;
              }
            }
            lVar24 = lRam00000001137e9648;
            plVar11 = plVar15;
            plVar14 = (long *)*plVar15;
          }
        }
      }
      else {
        uVar22 = uVar19;
        if (uVar23 < uVar19) {
          uVar22 = (ulong)((float)uRam00000001137e9660 / fRam00000001137e9668);
          if ((uVar19 < 3) || ((uVar19 & uVar19 - 1) != 0)) {
            func_0x000107c60c44();
          }
          else if (1 < uVar22) {
            uVar22 = 1L << (-LZCOUNT(uVar22 - 1) & 0x3fU);
          }
          lVar24 = lRam00000001137e9648;
          if (uVar23 <= uVar22) {
            uVar23 = uVar22;
          }
          uVar22 = uRam00000001137e9650;
          if (uVar23 < uVar19) {
            if (uVar23 != 0) goto LAB_1000542e4;
            lRam00000001137e9648 = 0;
            if (lVar24 != 0) {
              func_0x000107c60e14();
            }
            uRam00000001137e9650 = 0;
            uVar22 = 0;
          }
        }
      }
      if ((uVar22 & uVar22 - 1) == 0) {
        uVar23 = uVar22 - 1 & uVar21;
      }
      else {
        uVar23 = uVar21;
        if (uVar22 <= uVar21) {
          uVar19 = 0;
          if (uVar22 != 0) {
            uVar19 = uVar21 / uVar22;
          }
          uVar23 = uVar21 - uVar19 * uVar22;
        }
      }
    }
    lVar24 = lRam00000001137e9648;
    plVar11 = *(long **)(lRam00000001137e9648 + uVar23 * 8);
    if (plVar11 == (long *)0x0) {
      *plVar12 = (long)plRam00000001137e9658;
      plRam00000001137e9658 = plVar12;
      *(undefined8 *)(lVar24 + uVar23 * 8) = 0x1137e9658;
      if (*plVar12 != 0) {
        uVar19 = *(ulong *)(*plVar12 + 8);
        if ((uVar22 & uVar22 - 1) == 0) {
          uVar19 = uVar19 & uVar22 - 1;
        }
        else if (uVar22 <= uVar19) {
          uVar21 = 0;
          if (uVar22 != 0) {
            uVar21 = uVar19 / uVar22;
          }
          uVar19 = uVar19 - uVar21 * uVar22;
        }
        plVar11 = (long *)(lRam00000001137e9648 + uVar19 * 8);
        goto LAB_1000544d8;
      }
    }
    else {
      *plVar12 = *plVar11;
LAB_1000544d8:
      *plVar11 = (long)plVar12;
    }
    uVar19 = uRam00000001137e9660 + 1;
    uRam00000001137e9660 = uVar19;
LAB_1000544e8:
    lVar20 = lVar20 + 8;
  } while (lVar20 != 0x18);
  uVar19 = 0;
  uVar22 = 0;
  lVar20 = 0;
  uRam00000001137e9678 = 0;
  lRam00000001137e9670 = 0;
  uRam00000001137e9688 = 0;
  plRam00000001137e9680 = (long *)0x0;
  fRam00000001137e9690 = 1.0;
  do {
    uVar21 = (ulong)*(int *)(&UNK_10e494450 + lVar20);
    lVar24 = *(long *)(&UNK_10e494450 + lVar20);
    if (uVar22 != 0) {
      uVar10 = uVar22 - 1;
      if ((uVar22 & uVar10) == 0) {
        uVar23 = uVar10 & uVar21;
      }
      else {
        uVar23 = uVar21;
        if (uVar22 <= uVar21) {
          uVar23 = 0;
          if (uVar22 != 0) {
            uVar23 = uVar21 / uVar22;
          }
          uVar23 = uVar21 - uVar23 * uVar22;
        }
      }
      plVar12 = *(long **)(lRam00000001137e9670 + uVar23 * 8);
      if (plVar12 != (long *)0x0) {
        do {
          while( true ) {
            plVar12 = (long *)*plVar12;
            if (plVar12 == (long *)0x0) goto LAB_1000545fc;
            uVar13 = plVar12[1];
            if (uVar13 != uVar21) break;
            if (*(int *)(plVar12 + 2) == *(int *)(&UNK_10e494450 + lVar20)) goto LAB_10005489c;
          }
          if ((uVar22 & uVar10) == 0) {
            uVar13 = uVar13 & uVar10;
          }
          else if (uVar22 <= uVar13) {
            uVar18 = 0;
            if (uVar22 != 0) {
              uVar18 = uVar13 / uVar22;
            }
            uVar13 = uVar13 - uVar18 * uVar22;
          }
        } while (uVar13 == uVar23);
      }
    }
LAB_1000545fc:
    plVar12 = (long *)0x18;
    func_0x000107c60e20();
    *plVar12 = 0;
    plVar12[1] = uVar21;
    plVar12[2] = lVar24;
    if ((uVar22 == 0) || (fRam00000001137e9690 * (float)uVar22 < (float)(uVar19 + 1))) {
      uVar23 = 1;
      if (2 < uVar22) {
        uVar23 = (ulong)((uVar22 & uVar22 - 1) != 0);
      }
      uVar23 = uVar23 | uVar22 << 1;
      uVar19 = (ulong)((float)(uVar19 + 1) / fRam00000001137e9690);
      if (uVar23 <= uVar19) {
        uVar23 = uVar19;
      }
      uVar19 = uVar22;
      if (uVar23 - 1 == 0) {
        uVar23 = 2;
      }
      else if ((uVar23 & uVar23 - 1) != 0) {
        func_0x000107c60c44();
        uVar19 = uRam00000001137e9678;
      }
      if (uVar19 < uVar23) {
LAB_100054698:
        if (uVar23 >> 0x3d != 0) {
          func_0x000107c2b044();
          goto LAB_1000551ac;
        }
        lVar24 = uVar23 << 3;
        func_0x000107c60e20();
        bVar3 = lRam00000001137e9670 != 0;
        lRam00000001137e9670 = lVar24;
        if (bVar3) {
          func_0x000107c60e14();
        }
        uVar19 = 0;
        uRam00000001137e9678 = uVar23;
        do {
          *(undefined8 *)(lRam00000001137e9670 + uVar19 * 8) = 0;
          plVar11 = plRam00000001137e9680;
          uVar19 = uVar19 + 1;
        } while (uVar23 != uVar19);
        uVar22 = uVar23;
        if (plRam00000001137e9680 != (long *)0x0) {
          uVar19 = plRam00000001137e9680[1];
          uVar10 = uVar23 - 1;
          if ((uVar23 & uVar10) == 0) {
            uVar19 = uVar19 & uVar10;
          }
          else if (uVar23 <= uVar19) {
            uVar13 = 0;
            if (uVar23 != 0) {
              uVar13 = uVar19 / uVar23;
            }
            uVar19 = uVar19 - uVar13 * uVar23;
          }
          *(undefined8 *)(lRam00000001137e9670 + uVar19 * 8) = 0x1137e9680;
          plVar14 = (long *)*plVar11;
          lVar24 = lRam00000001137e9670;
          while (lRam00000001137e9670 = lVar24, plVar14 != (long *)0x0) {
            uVar13 = plVar14[1];
            if ((uVar23 & uVar10) == 0) {
              uVar13 = uVar13 & uVar10;
            }
            else if (uVar23 <= uVar13) {
              uVar18 = 0;
              if (uVar23 != 0) {
                uVar18 = uVar13 / uVar23;
              }
              uVar13 = uVar13 - uVar18 * uVar23;
            }
            plVar15 = plVar14;
            if (uVar13 != uVar19) {
              if (*(long *)(lVar24 + uVar13 * 8) == 0) {
                *(long **)(lVar24 + uVar13 * 8) = plVar11;
                uVar19 = uVar13;
              }
              else {
                *plVar11 = *plVar14;
                *plVar14 = **(long **)(lVar24 + uVar13 * 8);
                **(undefined8 **)(lVar24 + uVar13 * 8) = plVar14;
                plVar15 = plVar11;
              }
            }
            lVar24 = lRam00000001137e9670;
            plVar11 = plVar15;
            plVar14 = (long *)*plVar15;
          }
        }
      }
      else {
        uVar22 = uVar19;
        if (uVar23 < uVar19) {
          uVar22 = (ulong)((float)uRam00000001137e9688 / fRam00000001137e9690);
          if ((uVar19 < 3) || ((uVar19 & uVar19 - 1) != 0)) {
            func_0x000107c60c44();
          }
          else if (1 < uVar22) {
            uVar22 = 1L << (-LZCOUNT(uVar22 - 1) & 0x3fU);
          }
          lVar24 = lRam00000001137e9670;
          if (uVar23 <= uVar22) {
            uVar23 = uVar22;
          }
          uVar22 = uRam00000001137e9678;
          if (uVar23 < uVar19) {
            if (uVar23 != 0) goto LAB_100054698;
            lRam00000001137e9670 = 0;
            if (lVar24 != 0) {
              func_0x000107c60e14();
            }
            uRam00000001137e9678 = 0;
            uVar22 = 0;
          }
        }
      }
      if ((uVar22 & uVar22 - 1) == 0) {
        uVar23 = uVar22 - 1 & uVar21;
      }
      else {
        uVar23 = uVar21;
        if (uVar22 <= uVar21) {
          uVar19 = 0;
          if (uVar22 != 0) {
            uVar19 = uVar21 / uVar22;
          }
          uVar23 = uVar21 - uVar19 * uVar22;
        }
      }
    }
    lVar24 = lRam00000001137e9670;
    plVar11 = *(long **)(lRam00000001137e9670 + uVar23 * 8);
    if (plVar11 == (long *)0x0) {
      *plVar12 = (long)plRam00000001137e9680;
      plRam00000001137e9680 = plVar12;
      *(undefined8 *)(lVar24 + uVar23 * 8) = 0x1137e9680;
      if (*plVar12 != 0) {
        uVar19 = *(ulong *)(*plVar12 + 8);
        if ((uVar22 & uVar22 - 1) == 0) {
          uVar19 = uVar19 & uVar22 - 1;
        }
        else if (uVar22 <= uVar19) {
          uVar21 = 0;
          if (uVar22 != 0) {
            uVar21 = uVar19 / uVar22;
          }
          uVar19 = uVar19 - uVar21 * uVar22;
        }
        plVar11 = (long *)(lRam00000001137e9670 + uVar19 * 8);
        goto LAB_10005488c;
      }
    }
    else {
      *plVar12 = *plVar11;
LAB_10005488c:
      *plVar11 = (long)plVar12;
    }
    uVar19 = uRam00000001137e9688 + 1;
    uRam00000001137e9688 = uVar19;
LAB_10005489c:
    lVar20 = lVar20 + 8;
  } while (lVar20 != 0x28);
  FUN_10005375c(alStack_e0,&UNK_10f636fa8);
  uStack_c8 = CONCAT71(uStack_c8._1_7_,6);
  FUN_10005375c(&uStack_c0,&UNK_10f4150e9);
  uStack_a8 = CONCAT71(uStack_a8._1_7_,0x10);
  FUN_10005375c(auStack_a0,&UNK_10f4150e4);
  lVar20 = 0;
  uStack_88 = CONCAT71(uStack_88._1_7_,8);
  uRam00000001137e96a0 = 0;
  lRam00000001137e9698 = 0;
  uRam00000001137e96b0 = 0;
  plRam00000001137e96a8 = (long *)0x0;
  fRam00000001137e96b8 = 1.0;
  do {
    plVar12 = (long *)((long)alStack_e0 + lVar20);
    uVar23 = 0x1137e9698;
    FUN_1000554d8(0x1137e9698,plVar12);
    uVar22 = uRam00000001137e96a0;
    if (uRam00000001137e96a0 != 0) {
      uVar21 = uRam00000001137e96a0 - 1;
      if ((uRam00000001137e96a0 & uVar21) == 0) {
        uVar19 = uVar21 & uVar23;
      }
      else {
        uVar19 = uVar23;
        if (uRam00000001137e96a0 <= uVar23) {
          uVar19 = 0;
          if (uRam00000001137e96a0 != 0) {
            uVar19 = uVar23 / uRam00000001137e96a0;
          }
          uVar19 = uVar23 - uVar19 * uRam00000001137e96a0;
        }
      }
      plVar11 = *(long **)(lRam00000001137e9698 + uVar19 * 8);
      if (plVar11 != (long *)0x0) {
        for (plVar11 = (long *)*plVar11; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
          uVar10 = plVar11[1];
          if (uVar10 == uVar23) {
            uVar10 = 0x1137e9698;
            FUN_1001a6960(0x1137e9698,plVar11 + 2,plVar12);
            if ((uVar10 & 1) != 0) goto LAB_100054ce4;
          }
          else {
            if ((uVar22 & uVar21) == 0) {
              uVar10 = uVar10 & uVar21;
            }
            else if (uVar22 <= uVar10) {
              uVar13 = 0;
              if (uVar22 != 0) {
                uVar13 = uVar10 / uVar22;
              }
              uVar10 = uVar10 - uVar13 * uVar22;
            }
            if (uVar10 != uVar19) break;
          }
        }
      }
    }
    plVar11 = (long *)0x30;
    func_0x000107c60e20();
    *plVar11 = 0;
    plVar11[1] = uVar23;
    if ((&cStack_c9)[lVar20] < '\0') {
      FUN_100033dac(plVar11 + 2,*plVar12,*(undefined8 *)((long)alStack_e0 + lVar20 + 8));
    }
    else {
      lVar24 = *plVar12;
      plVar11[3] = *(long *)((long)alStack_e0 + lVar20 + 8);
      plVar11[2] = lVar24;
      plVar11[4] = *(long *)((long)&stack0xffffffffffffff30 + lVar20);
    }
    *(undefined1 *)(plVar11 + 5) = *(undefined1 *)((long)&uStack_c8 + lVar20);
    if ((uVar22 == 0) || (fRam00000001137e96b8 * (float)uVar22 < (float)(uRam00000001137e96b0 + 1)))
    {
      uVar19 = 1;
      if (2 < uVar22) {
        uVar19 = (ulong)((uVar22 & uVar22 - 1) != 0);
      }
      uVar19 = uVar19 | uVar22 << 1;
      uVar22 = (ulong)((float)(uRam00000001137e96b0 + 1) / fRam00000001137e96b8);
      if (uVar19 <= uVar22) {
        uVar19 = uVar22;
      }
      if (uVar19 - 1 == 0) {
        uVar19 = 2;
      }
      else if ((uVar19 & uVar19 - 1) != 0) {
        func_0x000107c60c44();
      }
      uVar21 = uRam00000001137e96a0;
      if (uRam00000001137e96a0 < uVar19) {
LAB_100054ae8:
        if (uVar19 >> 0x3d != 0) {
          func_0x000107c2b044();
          goto LAB_1000551ac;
        }
        lVar24 = uVar19 << 3;
        func_0x000107c60e20();
        bVar3 = lRam00000001137e9698 != 0;
        lRam00000001137e9698 = lVar24;
        if (bVar3) {
          func_0x000107c60e14();
        }
        uVar22 = 0;
        uRam00000001137e96a0 = uVar19;
        do {
          *(undefined8 *)(lRam00000001137e9698 + uVar22 * 8) = 0;
          plVar12 = plRam00000001137e96a8;
          uVar22 = uVar22 + 1;
        } while (uVar19 != uVar22);
        uVar22 = uVar19;
        if (plRam00000001137e96a8 != (long *)0x0) {
          uVar21 = plRam00000001137e96a8[1];
          uVar10 = uVar19 - 1;
          if ((uVar19 & uVar10) == 0) {
            uVar21 = uVar21 & uVar10;
          }
          else if (uVar19 <= uVar21) {
            uVar13 = 0;
            if (uVar19 != 0) {
              uVar13 = uVar21 / uVar19;
            }
            uVar21 = uVar21 - uVar13 * uVar19;
          }
          *(undefined8 *)(lRam00000001137e9698 + uVar21 * 8) = 0x1137e96a8;
          plVar14 = (long *)*plVar12;
          lVar24 = lRam00000001137e9698;
          while (lRam00000001137e9698 = lVar24, plVar14 != (long *)0x0) {
            uVar13 = plVar14[1];
            if ((uVar19 & uVar10) == 0) {
              uVar13 = uVar13 & uVar10;
            }
            else if (uVar19 <= uVar13) {
              uVar18 = 0;
              if (uVar19 != 0) {
                uVar18 = uVar13 / uVar19;
              }
              uVar13 = uVar13 - uVar18 * uVar19;
            }
            plVar15 = plVar14;
            if (uVar13 != uVar21) {
              if (*(long *)(lVar24 + uVar13 * 8) == 0) {
                *(long **)(lVar24 + uVar13 * 8) = plVar12;
                uVar21 = uVar13;
              }
              else {
                *plVar12 = *plVar14;
                *plVar14 = **(long **)(lVar24 + uVar13 * 8);
                **(undefined8 **)(lVar24 + uVar13 * 8) = plVar14;
                plVar15 = plVar12;
              }
            }
            lVar24 = lRam00000001137e9698;
            plVar12 = plVar15;
            plVar14 = (long *)*plVar15;
          }
        }
      }
      else {
        uVar22 = uRam00000001137e96a0;
        if (uVar19 < uRam00000001137e96a0) {
          uVar22 = (ulong)((float)uRam00000001137e96b0 / fRam00000001137e96b8);
          if ((uRam00000001137e96a0 < 3) || ((uRam00000001137e96a0 & uRam00000001137e96a0 - 1) != 0)
             ) {
            func_0x000107c60c44();
          }
          else if (1 < uVar22) {
            uVar22 = 1L << (-LZCOUNT(uVar22 - 1) & 0x3fU);
          }
          lVar24 = lRam00000001137e9698;
          if (uVar19 <= uVar22) {
            uVar19 = uVar22;
          }
          uVar22 = uRam00000001137e96a0;
          if (uVar19 < uVar21) {
            if (uVar19 != 0) goto LAB_100054ae8;
            lRam00000001137e9698 = 0;
            if (lVar24 != 0) {
              func_0x000107c60e14();
            }
            uRam00000001137e96a0 = 0;
            uVar22 = 0;
          }
        }
      }
      if ((uVar22 & uVar22 - 1) == 0) {
        uVar19 = uVar22 - 1 & uVar23;
      }
      else {
        uVar19 = uVar23;
        if (uVar22 <= uVar23) {
          uVar19 = 0;
          if (uVar22 != 0) {
            uVar19 = uVar23 / uVar22;
          }
          uVar19 = uVar23 - uVar19 * uVar22;
        }
      }
    }
    lVar24 = lRam00000001137e9698;
    plVar12 = *(long **)(lRam00000001137e9698 + uVar19 * 8);
    if (plVar12 == (long *)0x0) {
      *plVar11 = (long)plRam00000001137e96a8;
      plRam00000001137e96a8 = plVar11;
      *(undefined8 *)(lVar24 + uVar19 * 8) = 0x1137e96a8;
      if (*plVar11 != 0) {
        uVar23 = *(ulong *)(*plVar11 + 8);
        if ((uVar22 & uVar22 - 1) == 0) {
          uVar23 = uVar23 & uVar22 - 1;
        }
        else if (uVar22 <= uVar23) {
          uVar21 = 0;
          if (uVar22 != 0) {
            uVar21 = uVar23 / uVar22;
          }
          uVar23 = uVar23 - uVar21 * uVar22;
        }
        *(long **)(lRam00000001137e9698 + uVar23 * 8) = plVar11;
      }
    }
    else {
      *plVar11 = *plVar12;
      *plVar12 = (long)plVar11;
    }
    uRam00000001137e96b0 = uRam00000001137e96b0 + 1;
LAB_100054ce4:
    lVar20 = lVar20 + 0x20;
  } while (lVar20 != 0x60);
  lVar20 = 0;
  do {
    if ((&cStack_89)[lVar20] < '\0') {
      func_0x000107c60e14(*(undefined8 *)((long)auStack_a0 + lVar20));
    }
    lVar20 = lVar20 + -0x20;
  } while (lVar20 != -0x60);
  auStack_a0[1] = 4;
  auStack_a0[0] = 0x22;
  uStack_88 = 9;
  uStack_90 = 0x23;
  uStack_78 = 0x10;
  uStack_80 = 0x24;
  alStack_e0[1] = 1;
  alStack_e0[0] = 0x41;
  uStack_c8 = 2;
  lStack_d0 = 2;
  uStack_b8 = 3;
  uStack_c0 = 3;
  uStack_a8 = 4;
  uStack_b0 = 4;
  FUN_10005560c(0x1137e96c0,alStack_e0,7);
  uStack_b8 = 2;
  uStack_c0 = 0x1402;
  uStack_a8 = 2;
  uStack_b0 = 0x1403;
  auStack_a0[1] = 4;
  auStack_a0[0] = 0x1405;
  uStack_88 = 4;
  uStack_90 = 0x1406;
  alStack_e0[1] = 1;
  alStack_e0[0] = 0x1400;
  uStack_c8 = 1;
  lStack_d0 = 0x1401;
  uVar6 = 0x1137e96e8;
  FUN_10005560c(0x1137e96e8,alStack_e0,6);
  uRam00000001137e9550 = 0x1137e9648;
  uRam00000001137e9558 = 0x1137e9698;
  uRam00000001137e9560 = 0x1137e96c0;
  uRam00000001137e9568 = uVar6;
  FUN_10005375c(alStack_e0,&DAT_10f68f20c);
  FUN_10005375c(auStack_f8,&DAT_10f41503b);
  FUN_1000559f0(0x1137e9710,alStack_e0,auStack_f8);
  if (cStack_e1 < '\0') {
    func_0x000107c60e14(auStack_f8[0]);
  }
  if (lStack_d0 < 0) {
    func_0x000107c60e14(alStack_e0[0]);
  }
  FUN_10005375c(alStack_e0,"normal");
  FUN_10005375c(auStack_f8,"NORMAL");
  FUN_1000559f0(0x1137e9740,alStack_e0,auStack_f8);
  if (cStack_e1 < '\0') {
    func_0x000107c60e14(auStack_f8[0]);
  }
  if (lStack_d0 < 0) {
    func_0x000107c60e14(alStack_e0[0]);
  }
  FUN_10005375c(alStack_e0,&UNK_10f636fb2);
  FUN_10005375c(auStack_f8,&UNK_10f636fba);
  FUN_1000559f0(0x1137e9770,alStack_e0,auStack_f8);
  if (cStack_e1 < '\0') {
    func_0x000107c60e14(auStack_f8[0]);
  }
  if (lStack_d0 < 0) {
    func_0x000107c60e14(alStack_e0[0]);
  }
  FUN_10005375c(alStack_e0,&DAT_10f68f0f0);
  FUN_10005375c(auStack_f8,&UNK_10f636fc8);
  FUN_1000559f0(0x1137e97a0,alStack_e0,auStack_f8);
  if (cStack_e1 < '\0') {
    func_0x000107c60e14(auStack_f8[0]);
  }
  if (lStack_d0 < 0) {
    func_0x000107c60e14(alStack_e0[0]);
  }
  FUN_10005375c(alStack_e0,&DAT_10f636fd0);
  FUN_10005375c(auStack_f8,&UNK_10f636fd8);
  puVar9 = auStack_f8;
  FUN_1000559f0(0x1137e97d0,alStack_e0);
  if (cStack_e1 < '\0') {
    func_0x000107c60e14(auStack_f8[0]);
  }
  if (lStack_d0 < 0) {
    func_0x000107c60e14(alStack_e0[0]);
  }
  uRam00000001137e9570 = 0x1137e9710;
  uRam00000001137e9578 = 0x1137e9740;
  uRam00000001137e9580 = 0x1137e9770;
  uRam00000001137e9588 = 0x1137e97a0;
  uRam00000001137e9590 = 0x1137e97d0;
  lVar20 = 0x1137e96c0;
  FUN_100055a84(0x1137e96c0,0x41);
  if (lVar20 == 0) {
    func_0x000107c2b03c(&UNK_10f639994);
  }
  else {
    uRam00000001137e9598 = *(undefined8 *)(lVar20 + 0x18);
    lVar20 = 0x1137e96c0;
    FUN_100055a84(0x1137e96c0,2);
    if (lVar20 == 0) {
      func_0x000107c2b03c(&UNK_10f639994);
    }
    else {
      uRam00000001137e95a0 = *(undefined8 *)(lVar20 + 0x18);
      lVar20 = 0x1137e96c0;
      FUN_100055a84(0x1137e96c0,3);
      if (lVar20 == 0) {
        func_0x000107c2b03c(&UNK_10f639994);
      }
      else {
        uRam00000001137e95a8 = *(undefined8 *)(lVar20 + 0x18);
        lVar20 = 0x1137e96c0;
        FUN_100055a84(0x1137e96c0,4);
        if (lVar20 == 0) {
          func_0x000107c2b03c(&UNK_10f639994);
        }
        else {
          uRam00000001137e95b0 = *(undefined8 *)(lVar20 + 0x18);
          lVar20 = 0x1137e96c0;
          FUN_100055a84(0x1137e96c0,0x22);
          if (lVar20 == 0) {
            func_0x000107c2b03c(&UNK_10f639994);
          }
          else {
            uRam00000001137e95b8 = *(undefined8 *)(lVar20 + 0x18);
            lVar20 = 0x1137e96c0;
            FUN_100055a84(0x1137e96c0,0x23);
            if (lVar20 == 0) {
              func_0x000107c2b03c(&UNK_10f639994);
            }
            else {
              uRam00000001137e95c0 = *(undefined8 *)(lVar20 + 0x18);
              uVar19 = 0x1137e96c0;
              puVar7 = (ulong *)0x24;
              FUN_100055a84();
              if (uVar19 != 0) {
                lVar20 = 0;
                uRam00000001137e95c8 = *(undefined8 *)(uVar19 + 0x18);
                do {
                  lVar24 = 0;
                  iVar17 = 0;
                  do {
                    uVar2 = (uint)lVar20 >> (ulong)((uint)lVar24 & 0x1f) & 1;
                    uVar4 = 0x80;
                    if (uVar2 != 0) {
                      uVar4 = (char)iVar17;
                    }
                    *(undefined1 *)((long)alStack_e0 + lVar24) = uVar4;
                    iVar17 = iVar17 + uVar2;
                    lVar24 = lVar24 + 1;
                  } while (lVar24 != 8);
                  *(long *)(lVar20 * 8 + 0x1137e99f0) = alStack_e0[0];
                  *(char *)(lVar20 + 0x1137e98f0) = (char)iVar17;
                  lVar20 = lVar20 + 1;
                } while (lVar20 != 0x100);
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                  return uVar19;
                }
                func_0x000107c60e78();
                if (cStack_e1 < '\0') {
                  func_0x000107c60e14(auStack_f8[0]);
                }
                if (lStack_d0 < 0) {
                  func_0x000107c60e14(alStack_e0[0]);
                }
                func_0x000107c60bd8(uVar19);
                if ((undefined8 *)0x20 < puVar9) {
                  if ((undefined8 *)0x40 < puVar9) {
                    lVar20 = (long)puVar7 + (long)puVar9;
                    lVar16 = *(long *)(lVar20 + -0x28);
                    uVar10 = *(ulong *)(lVar20 + -0x18);
                    uVar22 = (uVar10 ^ *(long *)(lVar20 + -0x30) + (long)puVar9) *
                             -0x622015f714c7d297;
                    lVar24 = *(long *)(lVar20 + -0x40);
                    uVar19 = *(long *)(lVar20 + -0x38) + *(long *)(lVar20 + -0x10);
                    uVar22 = (uVar10 ^ uVar22 >> 0x2f ^ uVar22) * -0x622015f714c7d297;
                    uVar18 = (uVar22 ^ uVar22 >> 0x2f) * -0x622015f714c7d297;
                    uVar22 = (long)puVar9 +
                             *(long *)(lVar20 + -0x30) + *(long *)(lVar20 + -0x38) + lVar24;
                    uVar23 = (long)puVar9 + uVar18 + lVar16 + lVar24;
                    uVar21 = uVar22 + lVar16;
                    uVar22 = (long)puVar9 +
                             (uVar23 >> 0x15 | uVar23 << 0x2b) +
                             (uVar22 >> 0x2c | uVar22 * 0x100000) + lVar24;
                    lVar24 = uVar19 + *(long *)(lVar20 + -0x20) + -0x4b6d499041670d8d;
                    uVar23 = lVar24 + lVar16 + *(long *)(lVar20 + -8);
                    uVar10 = uVar10 + *(long *)(lVar20 + -0x10) + lVar24;
                    uVar13 = uVar10 + *(long *)(lVar20 + -8);
                    uVar23 = (uVar10 >> 0x2c | uVar10 * 0x100000) + lVar24 +
                             (uVar23 >> 0x15 | uVar23 << 0x2b);
                    puVar8 = puVar7 + 4;
                    lVar24 = *puVar7 + lVar16 * -0x4b6d499041670d8d;
                    lVar20 = -((long)puVar9 - 1U & 0xffffffffffffffc0);
                    do {
                      uVar10 = lVar24 + uVar21 + uVar19 + puVar8[-3];
                      uVar19 = uVar19 + uVar22 + puVar8[2];
                      uVar19 = puVar8[1] + uVar21 +
                               (uVar19 >> 0x2a | uVar19 * 0x400000) * -0x4b6d499041670d8d;
                      uVar1 = uVar18 + uVar13;
                      lVar16 = puVar8[-4] + uVar22 * -0x4b6d499041670d8d;
                      uVar22 = lVar16 + puVar8[-3] + puVar8[-2];
                      uVar21 = uVar22 + puVar8[-1];
                      uVar18 = (uVar10 >> 0x25 | uVar10 * 0x8000000) * -0x4b6d499041670d8d ^ uVar23;
                      lVar24 = (uVar1 >> 0x21 | uVar1 * 0x80000000) * -0x4b6d499041670d8d;
                      uVar10 = lVar16 + uVar13 + puVar8[-1] + uVar18;
                      uVar22 = (uVar22 >> 0x2c | uVar22 * 0x100000) + lVar16 +
                               (uVar10 >> 0x15 | uVar10 << 0x2b);
                      lVar16 = lVar24 + uVar23 + *puVar8;
                      uVar23 = uVar19 + puVar8[-2] + lVar16 + puVar8[3];
                      uVar10 = puVar8[1] + puVar8[2] + lVar16;
                      uVar13 = uVar10 + puVar8[3];
                      uVar23 = (uVar10 >> 0x2c | uVar10 * 0x100000) + lVar16 +
                               (uVar23 >> 0x15 | uVar23 << 0x2b);
                      puVar8 = puVar8 + 8;
                      lVar20 = lVar20 + 0x40;
                    } while (lVar20 != 0);
                    uVar21 = (uVar13 ^ uVar21) * -0x622015f714c7d297;
                    uVar21 = (uVar13 ^ uVar21 >> 0x2f ^ uVar21) * -0x622015f714c7d297;
                    uVar22 = (uVar23 ^ uVar22) * -0x622015f714c7d297;
                    uVar22 = (uVar23 ^ uVar22 >> 0x2f ^ uVar22) * -0x622015f714c7d297;
                    uVar22 = lVar24 + (uVar22 ^ uVar22 >> 0x2f) * -0x622015f714c7d297;
                    uVar19 = (uVar22 ^ uVar18 + (uVar19 ^ uVar19 >> 0x2f) * -0x4b6d499041670d8d +
                                       (uVar21 ^ uVar21 >> 0x2f) * -0x622015f714c7d297) *
                             -0x622015f714c7d297;
                    uVar19 = (uVar22 ^ uVar19 >> 0x2f ^ uVar19) * -0x622015f714c7d297;
                    return (uVar19 ^ uVar19 >> 0x2f) * -0x622015f714c7d297;
                  }
                  lVar20 = (long)puVar7 + (long)puVar9;
                  uVar10 = *puVar7 + (*(long *)(lVar20 + -0x10) + (long)puVar9) *
                                     -0x3c5a37a36834ced9;
                  uVar13 = puVar7[3];
                  uVar19 = uVar10 + puVar7[1];
                  uVar22 = uVar19 + puVar7[2];
                  uVar23 = *(long *)(lVar20 + -0x20) + puVar7[2];
                  lVar24 = *(long *)(lVar20 + -8) + uVar13;
                  uVar21 = lVar24 + uVar23;
                  lVar16 = (uVar19 >> 7 | uVar19 << 0x39) + (uVar10 >> 0x25 | uVar10 * 0x8000000) +
                           (uVar10 + uVar13 >> 0x34 | (uVar10 + uVar13) * 0x1000) +
                           (uVar22 >> 0x1f | uVar22 << 0x21);
                  uVar19 = *(long *)(lVar20 + -0x18) + uVar23;
                  uVar10 = uVar19 + *(long *)(lVar20 + -0x10);
                  uVar19 = (uVar10 + lVar24 + lVar16) * -0x3c5a37a36834ced9 +
                           (uVar22 + uVar13 + (uVar23 >> 0x25 | uVar23 * 0x8000000) +
                                     (uVar19 >> 7 | uVar19 << 0x39) +
                                     (uVar21 >> 0x34 | uVar21 * 0x1000) +
                                     (uVar10 >> 0x1f | uVar10 << 0x21)) * -0x651e95c4d06fbfb1;
                  uVar19 = lVar16 + (uVar19 ^ uVar19 >> 0x2f) * -0x3c5a37a36834ced9;
                  return (uVar19 ^ uVar19 >> 0x2f) * -0x651e95c4d06fbfb1;
                }
                if ((undefined8 *)0x10 < puVar9) {
                  lVar20 = *(long *)((long)puVar7 + (long)puVar9 + -8);
                  uVar22 = lVar20 * -0x651e95c4d06fbfb1;
                  uVar23 = *puVar7 * -0x4b6d499041670d8d - puVar7[1];
                  uVar19 = puVar7[1] ^ 0xc949d7c7509e6557;
                  uVar19 = (long)puVar9 +
                           lVar20 * 0x651e95c4d06fbfb1 +
                           *puVar7 * -0x4b6d499041670d8d + (uVar19 >> 0x14 | uVar19 << 0x2c);
                  uVar22 = ((uVar22 >> 0x1e | uVar22 << 0x22) + (uVar23 >> 0x2b | uVar23 * 0x200000)
                            + *(long *)((long)puVar7 + (long)puVar9 + -0x10) * -0x3c5a37a36834ced9 ^
                           uVar19) * -0x622015f714c7d297;
                  uVar19 = (uVar19 ^ uVar22 >> 0x2f ^ uVar22) * -0x622015f714c7d297;
                  return (uVar19 ^ uVar19 >> 0x2f) * -0x622015f714c7d297;
                }
                if (puVar9 < (undefined8 *)0x9) {
                  if (puVar9 < (undefined8 *)0x4) {
                    uVar19 = 0x9ae16a3b2f90404f;
                    if (puVar9 != (undefined8 *)0x0) {
                      uVar19 = ((ulong)puVar9 |
                               (ulong)*(byte *)((long)puVar7 + (long)puVar9 + -1) << 2) *
                               -0x36b62838af619aa9 ^
                               (ulong)CONCAT11(*(undefined1 *)((long)puVar7 + ((ulong)puVar9 >> 1)),
                                               (char)*puVar7) * -0x651e95c4d06fbfb1;
                      uVar19 = (uVar19 ^ uVar19 >> 0x2f) * -0x651e95c4d06fbfb1;
                    }
                    return uVar19;
                  }
                  uVar19 = (ulong)*(uint *)((long)puVar7 + (long)puVar9 + -4);
                  uVar22 = ((long)puVar9 + (ulong)(uint)((int)*puVar7 << 3) ^ uVar19) *
                           -0x622015f714c7d297;
                  uVar19 = (uVar19 ^ uVar22 >> 0x2f ^ uVar22) * -0x622015f714c7d297;
                  return (uVar19 ^ uVar19 >> 0x2f) * -0x622015f714c7d297;
                }
                uVar22 = *(ulong *)((long)puVar7 + (long)puVar9 + -8);
                uVar19 = uVar22 + (long)puVar9;
                uVar23 = uVar19 >> ((ulong)puVar9 & 0x3f) | uVar19 << 0x40 - ((ulong)puVar9 & 0x3f);
                uVar19 = (uVar23 ^ *puVar7) * -0x622015f714c7d297;
                uVar19 = (uVar23 ^ uVar19 >> 0x2f ^ uVar19) * -0x622015f714c7d297;
                return (uVar19 ^ uVar19 >> 0x2f) * -0x622015f714c7d297 ^ uVar22;
              }
              func_0x000107c2b03c(&UNK_10f639994);
            }
          }
        }
      }
    }
  }
LAB_1000551ac:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1000551b0);
  (*pcVar5)();
}



/* Entry: 1000552d0; end: 1000554d7;  */

ulong FUN_1000552d0(undefined8 param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  
  if (0x20 < param_3) {
    if (param_3 < 0x41) {
      lVar9 = *(long *)((long)param_2 + (param_3 - 0x10));
      uVar10 = *param_2 + (lVar9 + param_3) * -0x3c5a37a36834ced9;
      uVar13 = param_2[3];
      uVar7 = uVar10 + param_2[1];
      uVar6 = uVar7 + param_2[2];
      uVar8 = *(long *)((long)param_2 + (param_3 - 0x20)) + param_2[2];
      lVar12 = *(long *)((long)param_2 + (param_3 - 8)) + uVar13;
      uVar11 = lVar12 + uVar8;
      lVar15 = (uVar7 >> 7 | uVar7 << 0x39) + (uVar10 >> 0x25 | uVar10 * 0x8000000) +
               (uVar10 + uVar13 >> 0x34 | (uVar10 + uVar13) * 0x1000) +
               (uVar6 >> 0x1f | uVar6 << 0x21);
      uVar7 = *(long *)((long)param_2 + (param_3 - 0x18)) + uVar8;
      uVar10 = uVar7 + lVar9;
      uVar7 = (uVar10 + lVar12 + lVar15) * -0x3c5a37a36834ced9 +
              (uVar6 + uVar13 + (uVar8 >> 0x25 | uVar8 * 0x8000000) + (uVar7 >> 7 | uVar7 << 0x39) +
                       (uVar11 >> 0x34 | uVar11 * 0x1000) + (uVar10 >> 0x1f | uVar10 << 0x21)) *
              -0x651e95c4d06fbfb1;
      uVar7 = lVar15 + (uVar7 ^ uVar7 >> 0x2f) * -0x3c5a37a36834ced9;
      return (uVar7 ^ uVar7 >> 0x2f) * -0x651e95c4d06fbfb1;
    }
    lVar15 = *(long *)((long)param_2 + (param_3 - 0x30));
    lVar2 = *(long *)((long)param_2 + (param_3 - 0x28));
    uVar10 = *(ulong *)((long)param_2 + (param_3 - 0x18));
    uVar6 = (uVar10 ^ lVar15 + param_3) * -0x622015f714c7d297;
    lVar3 = *(long *)((long)param_2 + (param_3 - 0x38));
    lVar9 = *(long *)((long)param_2 + (param_3 - 0x10));
    lVar4 = *(long *)((long)param_2 + (param_3 - 8));
    uVar7 = lVar3 + lVar9;
    uVar6 = (uVar10 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
    uVar14 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    lVar12 = *(long *)((long)param_2 + (param_3 - 0x40)) + param_3;
    uVar6 = lVar15 + lVar3 + lVar12;
    uVar8 = lVar12 + lVar2 + uVar14;
    uVar11 = uVar6 + lVar2;
    uVar6 = (uVar6 >> 0x2c | uVar6 * 0x100000) + lVar12 + (uVar8 >> 0x15 | uVar8 << 0x2b);
    lVar12 = uVar7 + *(long *)((long)param_2 + (param_3 - 0x20)) + -0x4b6d499041670d8d;
    uVar8 = lVar12 + lVar2 + lVar4;
    uVar10 = uVar10 + lVar9 + lVar12;
    uVar13 = uVar10 + lVar4;
    uVar8 = (uVar10 >> 0x2c | uVar10 * 0x100000) + lVar12 + (uVar8 >> 0x15 | uVar8 << 0x2b);
    puVar5 = param_2 + 4;
    lVar15 = *param_2 + lVar2 * -0x4b6d499041670d8d;
    lVar12 = -(param_3 - 1 & 0xffffffffffffffc0);
    do {
      uVar10 = lVar15 + uVar11 + uVar7 + puVar5[-3];
      uVar7 = uVar7 + uVar6 + puVar5[2];
      uVar7 = puVar5[1] + uVar11 + (uVar7 >> 0x2a | uVar7 * 0x400000) * -0x4b6d499041670d8d;
      uVar1 = uVar14 + uVar13;
      lVar9 = puVar5[-4] + uVar6 * -0x4b6d499041670d8d;
      uVar6 = lVar9 + puVar5[-3] + puVar5[-2];
      uVar11 = uVar6 + puVar5[-1];
      uVar14 = (uVar10 >> 0x25 | uVar10 * 0x8000000) * -0x4b6d499041670d8d ^ uVar8;
      lVar15 = (uVar1 >> 0x21 | uVar1 * 0x80000000) * -0x4b6d499041670d8d;
      uVar10 = lVar9 + uVar13 + puVar5[-1] + uVar14;
      uVar6 = (uVar6 >> 0x2c | uVar6 * 0x100000) + lVar9 + (uVar10 >> 0x15 | uVar10 << 0x2b);
      lVar9 = lVar15 + uVar8 + *puVar5;
      uVar8 = uVar7 + puVar5[-2] + lVar9 + puVar5[3];
      uVar10 = puVar5[1] + puVar5[2] + lVar9;
      uVar13 = uVar10 + puVar5[3];
      uVar8 = (uVar10 >> 0x2c | uVar10 * 0x100000) + lVar9 + (uVar8 >> 0x15 | uVar8 << 0x2b);
      puVar5 = puVar5 + 8;
      lVar12 = lVar12 + 0x40;
    } while (lVar12 != 0);
    uVar11 = (uVar13 ^ uVar11) * -0x622015f714c7d297;
    uVar11 = (uVar13 ^ uVar11 >> 0x2f ^ uVar11) * -0x622015f714c7d297;
    uVar6 = (uVar8 ^ uVar6) * -0x622015f714c7d297;
    uVar6 = (uVar8 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
    uVar6 = lVar15 + (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    uVar7 = (uVar6 ^ uVar14 + (uVar7 ^ uVar7 >> 0x2f) * -0x4b6d499041670d8d +
                     (uVar11 ^ uVar11 >> 0x2f) * -0x622015f714c7d297) * -0x622015f714c7d297;
    uVar7 = (uVar6 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
    return (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  }
  if (0x10 < param_3) {
    lVar12 = *(long *)((long)param_2 + (param_3 - 8));
    uVar6 = lVar12 * -0x651e95c4d06fbfb1;
    uVar8 = *param_2 * -0x4b6d499041670d8d - param_2[1];
    uVar7 = param_2[1] ^ 0xc949d7c7509e6557;
    uVar7 = *param_2 * -0x4b6d499041670d8d + param_3 + (uVar7 >> 0x14 | uVar7 << 0x2c) +
            lVar12 * 0x651e95c4d06fbfb1;
    uVar6 = ((uVar6 >> 0x1e | uVar6 << 0x22) + (uVar8 >> 0x2b | uVar8 * 0x200000) +
             *(long *)((long)param_2 + (param_3 - 0x10)) * -0x3c5a37a36834ced9 ^ uVar7) *
            -0x622015f714c7d297;
    uVar7 = (uVar7 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
    return (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  }
  if (8 < param_3) {
    uVar6 = *(ulong *)((long)param_2 + (param_3 - 8));
    uVar7 = uVar6 + param_3;
    uVar8 = uVar7 >> (param_3 & 0x3f) | uVar7 << 0x40 - (param_3 & 0x3f);
    uVar7 = (uVar8 ^ *param_2) * -0x622015f714c7d297;
    uVar7 = (uVar8 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
    return (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297 ^ uVar6;
  }
  if (3 < param_3) {
    uVar7 = (ulong)*(uint *)((long)param_2 + (param_3 - 4));
    uVar6 = (param_3 + (uint)((int)*param_2 << 3) ^ uVar7) * -0x622015f714c7d297;
    uVar7 = (uVar7 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
    return (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  }
  uVar7 = 0x9ae16a3b2f90404f;
  if (param_3 != 0) {
    uVar7 = (param_3 | (ulong)*(byte *)((long)param_2 + (param_3 - 1)) << 2) * -0x36b62838af619aa9 ^
            (ulong)CONCAT11(*(undefined1 *)((long)param_2 + (param_3 >> 1)),(char)*param_2) *
            -0x651e95c4d06fbfb1;
    uVar7 = (uVar7 ^ uVar7 >> 0x2f) * -0x651e95c4d06fbfb1;
  }
  return uVar7;
}



/* Entry: 1000554d8; end: 100055513;  */

void FUN_1000554d8(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 uStack_11;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  FUN_1000552d0(&uStack_11,puVar2,uVar1);
  return;
}



/* Entry: 100055514; end: 10005560b;  */

ulong FUN_100055514(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (8 < param_2) {
    uVar1 = *(ulong *)((long)param_1 + (param_2 - 8));
    uVar2 = uVar1 + param_2;
    uVar3 = uVar2 >> (param_2 & 0x3f) | uVar2 << 0x40 - (param_2 & 0x3f);
    uVar2 = (uVar3 ^ *param_1) * -0x622015f714c7d297;
    uVar2 = (uVar3 ^ uVar2 >> 0x2f ^ uVar2) * -0x622015f714c7d297;
    return (uVar2 ^ uVar2 >> 0x2f) * -0x622015f714c7d297 ^ uVar1;
  }
  if (3 < param_2) {
    uVar2 = (ulong)*(uint *)((long)param_1 + (param_2 - 4));
    uVar1 = (param_2 + (uint)((int)*param_1 << 3) ^ uVar2) * -0x622015f714c7d297;
    uVar2 = (uVar2 ^ uVar1 >> 0x2f ^ uVar1) * -0x622015f714c7d297;
    return (uVar2 ^ uVar2 >> 0x2f) * -0x622015f714c7d297;
  }
  uVar2 = 0x9ae16a3b2f90404f;
  if (param_2 != 0) {
    uVar2 = (param_2 | (ulong)*(byte *)((long)param_1 + (param_2 - 1)) << 2) * -0x36b62838af619aa9 ^
            (ulong)CONCAT11(*(undefined1 *)((long)param_1 + (param_2 >> 1)),(char)*param_1) *
            -0x651e95c4d06fbfb1;
    uVar2 = (uVar2 ^ uVar2 >> 0x2f) * -0x651e95c4d06fbfb1;
  }
  return uVar2;
}



/* Entry: 10005560c; end: 1000559ef;  */

long * FUN_10005560c(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong unaff_x28;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (param_3 != 0) {
    lVar14 = 0;
    uVar16 = 0;
    plVar1 = param_1 + 2;
    plVar2 = param_2 + param_3 * 2;
    do {
      uVar15 = (ulong)(int)*param_2;
      if (uVar16 != 0) {
        uVar6 = uVar16 - 1;
        if ((uVar16 & uVar6) == 0) {
          unaff_x28 = uVar6 & uVar15;
        }
        else {
          unaff_x28 = uVar15;
          if (uVar16 <= uVar15) {
            uVar10 = 0;
            if (uVar16 != 0) {
              uVar10 = uVar15 / uVar16;
            }
            unaff_x28 = uVar15 - uVar10 * uVar16;
          }
        }
        plVar8 = *(long **)(*param_1 + unaff_x28 * 8);
        if (plVar8 != (long *)0x0) {
          do {
            while( true ) {
              plVar8 = (long *)*plVar8;
              if (plVar8 == (long *)0x0) goto LAB_1000556e0;
              uVar10 = plVar8[1];
              if (uVar10 != uVar15) break;
              if (*(int *)(plVar8 + 2) == (int)*param_2) goto LAB_100055954;
            }
            if ((uVar16 & uVar6) == 0) {
              uVar10 = uVar10 & uVar6;
            }
            else if (uVar16 <= uVar10) {
              uVar7 = 0;
              if (uVar16 != 0) {
                uVar7 = uVar10 / uVar16;
              }
              uVar10 = uVar10 - uVar7 * uVar16;
            }
          } while (uVar10 == unaff_x28);
        }
      }
LAB_1000556e0:
      plVar8 = (long *)0x20;
      func_0x000107c60e20();
      *plVar8 = 0;
      plVar8[1] = uVar15;
      lVar5 = *param_2;
      plVar8[3] = param_2[1];
      plVar8[2] = lVar5;
      if ((uVar16 == 0) || (*(float *)(param_1 + 4) * (float)uVar16 < (float)(lVar14 + 1))) {
        uVar6 = 1;
        if (2 < uVar16) {
          uVar6 = (ulong)((uVar16 & uVar16 - 1) != 0);
        }
        uVar6 = uVar6 | uVar16 << 1;
        uVar10 = (ulong)((float)(lVar14 + 1) / *(float *)(param_1 + 4));
        if (uVar6 <= uVar10) {
          uVar6 = uVar10;
        }
        if (uVar6 - 1 == 0) {
          uVar6 = 2;
        }
        else if ((uVar6 & uVar6 - 1) != 0) {
          func_0x000107c60c44();
          uVar16 = param_1[1];
        }
        if (uVar16 < uVar6) {
LAB_100055774:
          if (uVar6 >> 0x3d != 0) {
            func_0x000107c2b044();
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1000559c8);
            (*pcVar4)();
          }
          lVar14 = uVar6 << 3;
          func_0x000107c60e20();
          lVar5 = *param_1;
          *param_1 = lVar14;
          if (lVar5 != 0) {
            func_0x000107c60e14();
          }
          uVar16 = 0;
          param_1[1] = uVar6;
          do {
            *(undefined8 *)(*param_1 + uVar16 * 8) = 0;
            uVar16 = uVar16 + 1;
          } while (uVar6 != uVar16);
          plVar9 = (long *)*plVar1;
          uVar16 = uVar6;
          if (plVar9 != (long *)0x0) {
            uVar10 = plVar9[1];
            uVar7 = uVar6 - 1;
            if ((uVar6 & uVar7) == 0) {
              uVar10 = uVar10 & uVar7;
            }
            else if (uVar6 <= uVar10) {
              uVar13 = 0;
              if (uVar6 != 0) {
                uVar13 = uVar10 / uVar6;
              }
              uVar10 = uVar10 - uVar13 * uVar6;
            }
            *(long **)(*param_1 + uVar10 * 8) = plVar1;
            plVar11 = (long *)*plVar9;
            while (plVar11 != (long *)0x0) {
              uVar13 = plVar11[1];
              if ((uVar6 & uVar7) == 0) {
                uVar13 = uVar13 & uVar7;
              }
              else if (uVar6 <= uVar13) {
                uVar3 = 0;
                if (uVar6 != 0) {
                  uVar3 = uVar13 / uVar6;
                }
                uVar13 = uVar13 - uVar3 * uVar6;
              }
              plVar12 = plVar11;
              if (uVar13 != uVar10) {
                lVar14 = *param_1;
                if (*(long *)(lVar14 + uVar13 * 8) == 0) {
                  *(long **)(lVar14 + uVar13 * 8) = plVar9;
                  uVar10 = uVar13;
                }
                else {
                  *plVar9 = *plVar11;
                  *plVar11 = **(undefined8 **)(lVar14 + uVar13 * 8);
                  **(long **)(lVar14 + uVar13 * 8) = (long)plVar11;
                  plVar12 = plVar9;
                }
              }
              plVar9 = plVar12;
              plVar11 = (long *)*plVar12;
            }
          }
        }
        else if (uVar6 < uVar16) {
          uVar10 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
          if ((uVar16 < 3) || ((uVar16 & uVar16 - 1) != 0)) {
            func_0x000107c60c44();
          }
          else if (1 < uVar10) {
            uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
          }
          if (uVar6 <= uVar10) {
            uVar6 = uVar10;
          }
          if (uVar6 < uVar16) {
            if (uVar6 != 0) goto LAB_100055774;
            lVar14 = *param_1;
            *param_1 = 0;
            if (lVar14 != 0) {
              func_0x000107c60e14();
            }
            param_1[1] = 0;
            uVar16 = 0;
          }
          else {
            uVar16 = param_1[1];
          }
        }
        if ((uVar16 & uVar16 - 1) == 0) {
          unaff_x28 = uVar16 - 1 & uVar15;
        }
        else {
          unaff_x28 = uVar15;
          if (uVar16 <= uVar15) {
            uVar6 = 0;
            if (uVar16 != 0) {
              uVar6 = uVar15 / uVar16;
            }
            unaff_x28 = uVar15 - uVar6 * uVar16;
          }
        }
      }
      lVar14 = *param_1;
      plVar9 = *(long **)(lVar14 + unaff_x28 * 8);
      if (plVar9 == (long *)0x0) {
        *plVar8 = *plVar1;
        *plVar1 = (long)plVar8;
        *(long **)(lVar14 + unaff_x28 * 8) = plVar1;
        if (*plVar8 != 0) {
          uVar15 = *(ulong *)(*plVar8 + 8);
          if ((uVar16 & uVar16 - 1) == 0) {
            uVar15 = uVar15 & uVar16 - 1;
          }
          else if (uVar16 <= uVar15) {
            uVar6 = 0;
            if (uVar16 != 0) {
              uVar6 = uVar15 / uVar16;
            }
            uVar15 = uVar15 - uVar6 * uVar16;
          }
          plVar9 = (long *)(*param_1 + uVar15 * 8);
          goto LAB_100055944;
        }
      }
      else {
        *plVar8 = *plVar9;
LAB_100055944:
        *plVar9 = (long)plVar8;
      }
      lVar14 = param_1[3] + 1;
      param_1[3] = lVar14;
LAB_100055954:
      param_2 = param_2 + 2;
    } while (param_2 != plVar2);
  }
  return param_1;
}



/* Entry: 1000559f0; end: 100055a83;  */

undefined8 * FUN_1000559f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_100033dac(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    FUN_100033dac(param_1 + 3,*param_3,param_3[1]);
  }
  else {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    param_1[5] = param_3[2];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
  }
  return param_1;
}



/* Entry: 100055a84; end: 100055b23;  */

long * FUN_100055a84(long *param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = (ulong)param_2;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (*(int *)(plVar6 + 2) == param_2) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 100055b24; end: 100055fa3;  */

void FUN_100055b24(undefined4 *param_1,int param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined5 *puVar4;
  uint uVar5;
  long lVar6;
  undefined7 uStack_130;
  undefined1 uStack_129;
  undefined7 uStack_128;
  undefined1 uStack_121;
  long lStack_120;
  long lStack_118;
  undefined4 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined5 uStack_e0;
  undefined3 uStack_db;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  lVar6 = 0x100;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  puVar3 = (undefined8 *)(param_1 + 0x14);
  do {
    puVar3[-1] = 0;
    puVar3[-2] = 0;
    puVar3[-3] = 0;
    *puVar3 = 0xffffffff;
    lVar6 = lVar6 + -0x20;
    puVar3 = puVar3 + 4;
  } while (lVar6 != 0);
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  uStack_d8 = (undefined5 *)0x0;
  uStack_e0 = 0;
  uStack_db = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  puStack_a8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  uStack_98 = 0;
  puStack_a0 = (undefined8 *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  puStack_78 = (undefined8 *)0x0;
  uStack_80 = 0;
  uStack_e8 = 0;
  puStack_70 = (undefined8 *)0x0;
  lStack_120 = 0;
  uStack_128 = 0;
  uStack_121 = 0;
  uStack_130 = 0;
  uStack_129 = 0;
  lStack_118 = 0xffffffff;
  puVar1 = &UNK_10f63a91f;
  if (param_2 == 0) {
    puVar1 = &UNK_10f63a92f;
  }
  uStack_110 = 1;
  FUN_100042ef0(&uStack_130,puVar1);
  puVar3 = puStack_a8;
  uVar5 = 0xb;
  if (param_2 == 0) {
    uVar5 = 2;
  }
  lStack_118 = (ulong)uVar5 << 0x20;
  if (puStack_a8 < puStack_a0) {
    if (lStack_120 < 0) {
      FUN_100033dac(puStack_a8,CONCAT17(uStack_129,uStack_130),CONCAT17(uStack_121,uStack_128));
    }
    else {
      puStack_a8[2] = lStack_120;
      puStack_a8[1] = CONCAT17(uStack_121,uStack_128);
      *puStack_a8 = CONCAT17(uStack_129,uStack_130);
    }
    *(undefined4 *)(puVar3 + 4) = uStack_110;
    puVar3[3] = lStack_118;
    puVar3 = puVar3 + 5;
  }
  else {
    puVar3 = &uStack_b0;
    FUN_100056054(&uStack_b0,&uStack_130);
  }
  puStack_a8 = puVar3;
  if (lStack_120 < 0) {
    func_0x000107c60e14(CONCAT17(uStack_129,uStack_130));
  }
  lStack_120 = 0x1000000000000000;
  uStack_110 = 1;
  uStack_128 = 0x656c706d615330;
  uStack_121 = 0x72;
  uStack_130 = 0x78655465736162;
  uStack_129 = 0x5f;
  lStack_118 = 0x100000001;
  if (puStack_78 < puStack_70) {
    puStack_78[2] = 0x1000000000000000;
    puStack_78[1] = 0x72656c706d615330;
    *puStack_78 = 0x5f78655465736162;
    *(undefined4 *)(puStack_78 + 4) = 1;
    puStack_78[3] = 0x100000001;
    puVar3 = puStack_78 + 5;
  }
  else {
    puVar3 = &uStack_80;
    FUN_100056374(&uStack_80,&uStack_130);
  }
  puStack_78 = puVar3;
  if (lStack_120 < 0) {
    func_0x000107c60e14(CONCAT17(uStack_129,uStack_130));
  }
  uStack_128 = 0x100000000;
  uStack_121 = 0;
  uStack_130 = 0;
  uStack_129 = 0;
  FUN_100056650(param_1 + 0x60,&uStack_130);
  uVar2 = (ulong)uStack_d8;
  lStack_120 = 0xf00000000000000;
  uStack_110 = 1;
  uStack_108 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_130 = 0x6d726f66696e75;
  uStack_129 = 0x42;
  uStack_128 = 0x305f7265666675;
  uStack_121 = 0;
  lStack_118 = 0x7000000002;
  if (uStack_d8 < uStack_d0) {
    func_0x000107c2b0b8(uStack_d8,&uStack_130);
    puVar4 = (undefined5 *)(uVar2 + 0x40);
  }
  else {
    puVar4 = &uStack_e0;
    FUN_100056780(&uStack_e0,&uStack_130);
  }
  puStack_68 = &uStack_108;
  uStack_d8 = puVar4;
  func_0x000100056a90(&puStack_68);
  if (lStack_120 < 0) {
    func_0x000107c60e14(CONCAT17(uStack_129,uStack_130));
  }
  FUN_100056ad0(param_1 + 2,&uStack_e8);
  uStack_130 = SUB87(&uStack_80,0);
  uStack_129 = (undefined1)((ulong)&uStack_80 >> 0x38);
  FUN_1000574d8(&uStack_130);
  uStack_130 = SUB87(&uStack_98,0);
  uStack_129 = (undefined1)((ulong)&uStack_98 >> 0x38);
  func_0x000100057518(&uStack_130);
  uStack_130 = SUB87(&uStack_b0,0);
  uStack_129 = (undefined1)((ulong)&uStack_b0 >> 0x38);
  FUN_1000575a4(&uStack_130);
  uStack_130 = SUB87(&uStack_c8,0);
  uStack_129 = (undefined1)((ulong)&uStack_c8 >> 0x38);
  FUN_1000575e4(&uStack_130);
  uStack_130 = SUB87(&uStack_e0,0);
  uStack_129 = (undefined1)((ulong)&uStack_e0 >> 0x38);
  FUN_100057698(&uStack_130);
  uStack_db = 0;
  uStack_d8._0_7_ = 0;
  uStack_d8._7_1_ = '\r';
  uStack_e8 = 0x50627461;
  uStack_e4 = 0x7469736f;
  uStack_e0 = 0x305f6e6f69;
  uStack_d0 = 0x1d00000000;
  FUN_100057708(param_1 + 8,&uStack_e8);
  if (uStack_d8._7_1_ < '\0') {
    func_0x000107c60e14(CONCAT44(uStack_e4,uStack_e8));
  }
  uStack_db = 0;
  uStack_d8._0_7_ = 0;
  uStack_d8._7_1_ = '\r';
  uStack_e8 = 0x54627461;
  uStack_e4 = 0x6f437865;
  uStack_e0 = 0x315f64726f;
  uStack_d0 = 0x1d00000001;
  FUN_100057708(param_1 + 8,&uStack_e8);
  if (uStack_d8._7_1_ < '\0') {
    func_0x000107c60e14(CONCAT44(uStack_e4,uStack_e8));
  }
  return;
}



/* Entry: 100055fa4; end: 10005600f;  */

void FUN_100055fa4(void)

{
  uRam00000001137ea1f0 = 0;
  FUN_100055b24(0x1137ea1f8,0);
  FUN_100055b24(0x1137ea390,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&UNK_10a0e3e2c,0x1137ea1f8,0x100000000);
  return;
}



/* Entry: 100056010; end: 100056053;  */

undefined1  [16]
FUN_100056010(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long *plVar2;
  long **pplVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  long *plStack_e0;
  undefined8 **ppuStack_d8;
  undefined8 **ppuStack_d0;
  undefined1 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  if (param_2 < (undefined8 *)0x666666666666667) {
    lVar1 = (long)param_2 * 0x28;
    func_0x000107c60e20(lVar1);
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = lVar1;
    return auVar10;
  }
  func_0x000104c4f740();
  lVar1 = param_1[1] - *param_1;
  uVar6 = (lVar1 >> 3) * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar6) {
    func_0x000107c2abac();
    func_0x0001000562fc(&plStack_78);
    func_0x000107c60bd8();
    pplVar3 = &plStack_e0;
    ppuStack_d8 = &puStack_c0;
    ppuStack_d0 = &puStack_b8;
    puStack_b8 = param_4;
    puVar4 = param_2;
    plStack_e0 = param_1;
    puStack_c0 = param_4;
    if (param_2 == param_3) {
      uStack_c8 = 1;
    }
    else {
      do {
        uVar9 = puVar4[1];
        uVar7 = *puVar4;
        puStack_b8[2] = puVar4[2];
        puStack_b8[1] = uVar9;
        *puStack_b8 = uVar7;
        puVar4[1] = 0;
        puVar4[2] = 0;
        *puVar4 = 0;
        uVar7 = puVar4[3];
        *(undefined4 *)(puStack_b8 + 4) = *(undefined4 *)(puVar4 + 4);
        puStack_b8[3] = uVar7;
        puVar4 = puVar4 + 5;
        puStack_b8 = puStack_b8 + 5;
      } while (puVar4 != param_3);
      uStack_c8 = 1;
      puVar4 = param_2;
      do {
        if (*(char *)((long)puVar4 + 0x17) < '\0') {
          func_0x000107c60e14(*puVar4);
        }
        puVar4 = puVar4 + 5;
      } while (puVar4 != param_3);
    }
    FUN_100056274(&plStack_e0);
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = pplVar3;
    return auVar12;
  }
  lVar5 = param_1[2] - *param_1 >> 3;
  uVar8 = lVar5 * -0x6666666666666666;
  if (uVar8 < uVar6 || uVar8 - uVar6 == 0) {
    uVar8 = uVar6;
  }
  if (0x333333333333332 < (ulong)(lVar5 * -0x3333333333333333)) {
    uVar8 = 0x666666666666666;
  }
  plStack_58 = param_1;
  if (uVar8 == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = param_1;
    FUN_100056010();
  }
  puVar4 = (undefined8 *)((long)plVar2 + lVar1);
  plStack_60 = plVar2 + uVar8 * 5;
  plStack_68 = puVar4;
  plStack_78 = plVar2;
  plStack_70 = puVar4;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_100033dac(puVar4,*param_2,param_2[1]);
  }
  else {
    uVar9 = param_2[1];
    uVar7 = *param_2;
    puVar4[2] = param_2[2];
    puVar4[1] = uVar9;
    *puVar4 = uVar7;
  }
  uVar7 = param_2[3];
  *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(param_2 + 4);
  puVar4[3] = uVar7;
  plStack_68 = plStack_68 + 5;
  lVar5 = *param_1;
  lVar1 = (long)plStack_70 + (lVar5 - param_1[1]);
  FUN_1000561b4(param_1,lVar5,param_1[1],lVar1);
  plVar2 = plStack_68;
  plStack_78 = (long *)*param_1;
  *param_1 = lVar1;
  lVar1 = param_1[2];
  param_1[2] = (long)plStack_60;
  param_1[1] = (long)plStack_68;
  plStack_70 = plStack_78;
  plStack_68 = plStack_78;
  plStack_60 = (long *)lVar1;
  func_0x0001000562fc(&plStack_78);
  auVar11._8_8_ = lVar5;
  auVar11._0_8_ = plVar2;
  return auVar11;
}



/* Entry: 100056054; end: 1000561b3;  */

undefined8 *
FUN_100056054(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  long **pplVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 **ppuStack_b0;
  undefined1 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar8 = param_1[1] - *param_1;
  uVar5 = (lVar8 >> 3) * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar5) {
    func_0x000107c2abac();
    func_0x0001000562fc(&plStack_58);
    func_0x000107c60bd8();
    pplVar2 = &plStack_c0;
    ppuStack_b8 = &puStack_a0;
    ppuStack_b0 = &puStack_98;
    puStack_98 = param_4;
    puVar3 = param_2;
    plStack_c0 = param_1;
    puStack_a0 = param_4;
    if (param_2 == param_3) {
      uStack_a8 = 1;
    }
    else {
      do {
        uVar9 = puVar3[1];
        uVar6 = *puVar3;
        puStack_98[2] = puVar3[2];
        puStack_98[1] = uVar9;
        *puStack_98 = uVar6;
        puVar3[1] = 0;
        puVar3[2] = 0;
        *puVar3 = 0;
        uVar6 = puVar3[3];
        *(undefined4 *)(puStack_98 + 4) = *(undefined4 *)(puVar3 + 4);
        puStack_98[3] = uVar6;
        puVar3 = puVar3 + 5;
        puStack_98 = puStack_98 + 5;
      } while (puVar3 != param_3);
      uStack_a8 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          func_0x000107c60e14(*param_2);
        }
        param_2 = param_2 + 5;
      } while (param_2 != param_3);
    }
    FUN_100056274(&plStack_c0);
    return pplVar2;
  }
  lVar4 = param_1[2] - *param_1 >> 3;
  uVar7 = lVar4 * -0x6666666666666666;
  if (uVar7 < uVar5 || uVar7 - uVar5 == 0) {
    uVar7 = uVar5;
  }
  if (0x333333333333332 < (ulong)(lVar4 * -0x3333333333333333)) {
    uVar7 = 0x666666666666666;
  }
  plStack_38 = param_1;
  if (uVar7 == 0) {
    plVar1 = (long *)0x0;
  }
  else {
    plVar1 = param_1;
    FUN_100056010();
  }
  puVar3 = (undefined8 *)((long)plVar1 + lVar8);
  plStack_40 = plVar1 + uVar7 * 5;
  plStack_48 = puVar3;
  plStack_58 = plVar1;
  plStack_50 = puVar3;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_100033dac(puVar3,*param_2,param_2[1]);
  }
  else {
    uVar9 = param_2[1];
    uVar6 = *param_2;
    puVar3[2] = param_2[2];
    puVar3[1] = uVar9;
    *puVar3 = uVar6;
  }
  uVar6 = param_2[3];
  *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(param_2 + 4);
  puVar3[3] = uVar6;
  plStack_48 = plStack_48 + 5;
  lVar8 = (long)plStack_50 + (*param_1 - param_1[1]);
  FUN_1000561b4(param_1,*param_1,param_1[1],lVar8);
  plVar1 = plStack_48;
  plStack_58 = (long *)*param_1;
  *param_1 = lVar8;
  lVar8 = param_1[2];
  param_1[2] = (long)plStack_40;
  param_1[1] = (long)plStack_48;
  plStack_50 = plStack_58;
  plStack_48 = plStack_58;
  plStack_40 = (long *)lVar8;
  func_0x0001000562fc(&plStack_58);
  return plVar1;
}



/* Entry: 1000561b4; end: 100056273;  */

void FUN_1000561b4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puStack_28 = param_4;
  puVar1 = param_2;
  uStack_50 = param_1;
  puStack_30 = param_4;
  if (param_2 == param_3) {
    uStack_38 = 1;
  }
  else {
    do {
      uVar3 = puVar1[1];
      uVar2 = *puVar1;
      puStack_28[2] = puVar1[2];
      puStack_28[1] = uVar3;
      *puStack_28 = uVar2;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = 0;
      uVar2 = puVar1[3];
      *(undefined4 *)(puStack_28 + 4) = *(undefined4 *)(puVar1 + 4);
      puStack_28[3] = uVar2;
      puVar1 = puVar1 + 5;
      puStack_28 = puStack_28 + 5;
    } while (puVar1 != param_3);
    uStack_38 = 1;
    do {
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000107c60e14(*param_2);
      }
      param_2 = param_2 + 5;
    } while (param_2 != param_3);
  }
  FUN_100056274(&uStack_50);
  return;
}



/* Entry: 100056274; end: 1000562a7;  */

long FUN_100056274(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    func_0x000107c2abb8(param_1);
  }
  return param_1;
}



/* Entry: 1000562a8; end: 100056373;  */

/* WARNING: Removing unreachable block (ram,0x0001000562d8) */

void FUN_1000562a8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x28;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 100056374; end: 1000564d3;  */

undefined8 *
FUN_100056374(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  long **pplVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 **ppuStack_b0;
  undefined1 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar8 = param_1[1] - *param_1;
  uVar5 = (lVar8 >> 3) * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar5) {
    func_0x000107c2abc0();
    func_0x00010005661c(&plStack_58);
    func_0x000107c60bd8();
    pplVar2 = &plStack_c0;
    ppuStack_b8 = &puStack_a0;
    ppuStack_b0 = &puStack_98;
    puStack_98 = param_4;
    puVar3 = param_2;
    plStack_c0 = param_1;
    puStack_a0 = param_4;
    if (param_2 == param_3) {
      uStack_a8 = 1;
    }
    else {
      do {
        uVar9 = puVar3[1];
        uVar6 = *puVar3;
        puStack_98[2] = puVar3[2];
        puStack_98[1] = uVar9;
        *puStack_98 = uVar6;
        puVar3[1] = 0;
        puVar3[2] = 0;
        *puVar3 = 0;
        uVar6 = puVar3[3];
        *(undefined4 *)(puStack_98 + 4) = *(undefined4 *)(puVar3 + 4);
        puStack_98[3] = uVar6;
        puVar3 = puVar3 + 5;
        puStack_98 = puStack_98 + 5;
      } while (puVar3 != param_3);
      uStack_a8 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          func_0x000107c60e14(*param_2);
        }
        param_2 = param_2 + 5;
      } while (param_2 != param_3);
    }
    FUN_100056594(&plStack_c0);
    return pplVar2;
  }
  lVar4 = param_1[2] - *param_1 >> 3;
  uVar7 = lVar4 * -0x6666666666666666;
  if (uVar7 < uVar5 || uVar7 - uVar5 == 0) {
    uVar7 = uVar5;
  }
  if (0x333333333333332 < (ulong)(lVar4 * -0x3333333333333333)) {
    uVar7 = 0x666666666666666;
  }
  plStack_38 = param_1;
  if (uVar7 == 0) {
    plVar1 = (long *)0x0;
  }
  else {
    plVar1 = param_1;
    func_0x000100056330();
  }
  puVar3 = (undefined8 *)((long)plVar1 + lVar8);
  plStack_40 = plVar1 + uVar7 * 5;
  plStack_48 = puVar3;
  plStack_58 = plVar1;
  plStack_50 = puVar3;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_100033dac(puVar3,*param_2,param_2[1]);
  }
  else {
    uVar9 = param_2[1];
    uVar6 = *param_2;
    puVar3[2] = param_2[2];
    puVar3[1] = uVar9;
    *puVar3 = uVar6;
  }
  uVar6 = param_2[3];
  *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(param_2 + 4);
  puVar3[3] = uVar6;
  plStack_48 = plStack_48 + 5;
  lVar8 = (long)plStack_50 + (*param_1 - param_1[1]);
  FUN_1000564d4(param_1,*param_1,param_1[1],lVar8);
  plVar1 = plStack_48;
  plStack_58 = (long *)*param_1;
  *param_1 = lVar8;
  lVar8 = param_1[2];
  param_1[2] = (long)plStack_40;
  param_1[1] = (long)plStack_48;
  plStack_50 = plStack_58;
  plStack_48 = plStack_58;
  plStack_40 = (long *)lVar8;
  func_0x00010005661c(&plStack_58);
  return plVar1;
}



/* Entry: 1000564d4; end: 100056593;  */

void FUN_1000564d4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puStack_28 = param_4;
  puVar1 = param_2;
  uStack_50 = param_1;
  puStack_30 = param_4;
  if (param_2 == param_3) {
    uStack_38 = 1;
  }
  else {
    do {
      uVar3 = puVar1[1];
      uVar2 = *puVar1;
      puStack_28[2] = puVar1[2];
      puStack_28[1] = uVar3;
      *puStack_28 = uVar2;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = 0;
      uVar2 = puVar1[3];
      *(undefined4 *)(puStack_28 + 4) = *(undefined4 *)(puVar1 + 4);
      puStack_28[3] = uVar2;
      puVar1 = puVar1 + 5;
      puStack_28 = puStack_28 + 5;
    } while (puVar1 != param_3);
    uStack_38 = 1;
    do {
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000107c60e14(*param_2);
      }
      param_2 = param_2 + 5;
    } while (param_2 != param_3);
  }
  FUN_100056594(&uStack_50);
  return;
}



/* Entry: 100056594; end: 1000565c7;  */

long FUN_100056594(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    func_0x000107c2abcc(param_1);
  }
  return param_1;
}



/* Entry: 1000565c8; end: 10005664f;  */

/* WARNING: Removing unreachable block (ram,0x0001000565f8) */

void FUN_1000565c8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x28;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 100056650; end: 100056717;  */

/* WARNING: Possible PIC construction at 0x0001000567e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000567e8) */

undefined1  [16] FUN_100056650(long *param_1,long *param_2)

{
  long *plVar1;
  long **pplVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 unaff_x22;
  undefined1 **ppuVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  long *plStack_50;
  long *plStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  plVar10 = (long *)param_1[1];
  if (plVar10 < (long *)param_1[2]) {
    lVar11 = *param_2;
    plVar10[1] = param_2[1];
    *plVar10 = lVar11;
    plVar10 = plVar10 + 2;
    plVar4 = param_1;
  }
  else {
    lVar11 = (long)plVar10 - *param_1;
    uVar6 = (lVar11 >> 4) + 1;
    if (uVar6 >> 0x3c != 0) {
      plVar4 = param_1;
      plVar10 = param_2;
      func_0x000107c2b0dc();
      pcStack_38 = FUN_100056718;
      ppuVar12 = &puStack_40;
      plStack_50 = param_2;
      plStack_48 = param_1;
      puStack_40 = &stack0xfffffffffffffff0;
      if ((ulong)plVar10 >> 0x3c == 0) {
        lVar11 = (long)plVar10 << 4;
        func_0x000107c60e20(lVar11);
        auVar16._8_8_ = plVar10;
        auVar16._0_8_ = lVar11;
        return auVar16;
      }
      uVar13 = 0x10005674c;
      func_0x000107c2b044();
      pplVar2 = &plStack_50;
      while( true ) {
        plVar3 = plVar10;
        *(long **)((long)pplVar2 + -0x20) = param_2;
        *(long **)((long)pplVar2 + -0x18) = param_1;
        *(undefined1 ***)((long)pplVar2 + -0x10) = ppuVar12;
        *(undefined8 *)((long)pplVar2 + -8) = uVar13;
        if ((ulong)plVar3 >> 0x3a == 0) {
          lVar11 = (long)plVar3 << 6;
          func_0x000107c60e20(lVar11);
          auVar17._8_8_ = plVar3;
          auVar17._0_8_ = lVar11;
          return auVar17;
        }
        func_0x000104c4f740();
        *(undefined8 *)((long)pplVar2 + -0x50) = unaff_x22;
        *(long *)((long)pplVar2 + -0x48) = lVar11;
        *(long **)((long)pplVar2 + -0x40) = param_2;
        *(long **)((long)pplVar2 + -0x38) = param_1;
        *(undefined1 **)((long)pplVar2 + -0x30) = (undefined1 *)((long)pplVar2 + -0x10);
        *(code **)((long)pplVar2 + -0x28) = FUN_100056780;
        ppuVar12 = (undefined1 **)((long)pplVar2 + -0x30);
        lVar11 = plVar4[1] - *plVar4;
        plVar1 = (long *)((lVar11 >> 6) + 1);
        if ((ulong)plVar1 >> 0x3a != 0) break;
        uVar6 = plVar4[2] - *plVar4;
        plVar10 = (long *)((long)uVar6 >> 5);
        if (plVar10 <= plVar1) {
          plVar10 = plVar1;
        }
        if (0x7fffffffffffffbf < uVar6) {
          plVar10 = (long *)0x3ffffffffffffff;
        }
        *(long **)((long)pplVar2 + -0x58) = plVar4;
        if (plVar10 == (long *)0x0) {
          *(undefined8 *)((long)pplVar2 + -0x78) = 0;
          *(long *)((long)pplVar2 + -0x70) = lVar11;
          *(long *)((long)pplVar2 + -0x68) = lVar11;
          *(undefined8 *)((long)pplVar2 + -0x60) = 0;
          FUN_100056888(lVar11,plVar3);
          *(long *)((long)pplVar2 + -0x68) = lVar11 + 0x40;
          lVar8 = *plVar4;
          lVar11 = lVar11 + (lVar8 - plVar4[1]);
          FUN_1000569ac(plVar4,lVar8,plVar4[1],lVar11);
          lVar7 = *plVar4;
          *plVar4 = lVar11;
          lVar11 = plVar4[2];
          lVar14 = *(long *)((long)pplVar2 + -0x68);
          *(long *)((long)pplVar2 + -0x88) = *(long *)((long)pplVar2 + -0x60);
          *(long *)((long)pplVar2 + -0x90) = lVar14;
          plVar4[2] = *(long *)((long)pplVar2 + -0x60);
          plVar4[1] = lVar14;
          *(long *)((long)pplVar2 + -0x68) = lVar7;
          *(long *)((long)pplVar2 + -0x60) = lVar11;
          *(long *)((long)pplVar2 + -0x78) = lVar7;
          *(long *)((long)pplVar2 + -0x70) = lVar7;
          func_0x000100056a44((undefined1 *)((long)pplVar2 + -0x78));
          auVar18._8_8_ = lVar8;
          auVar18._0_8_ = *(undefined8 *)((long)pplVar2 + -0x90);
          return auVar18;
        }
        uVar13 = 0x1000567e8;
        pplVar2 = (long **)((long)pplVar2 + -0x90);
        param_1 = plVar4;
        param_2 = plVar3;
      }
      func_0x000107c2abec();
      func_0x000100056a44((undefined1 *)((long)pplVar2 + -0x78));
      plVar10 = plVar4;
      func_0x000107c60bd8();
      *(long **)((long)pplVar2 + -0xb0) = param_2;
      *(long **)((long)pplVar2 + -0xa8) = plVar4;
      *(undefined1 ***)((long)pplVar2 + -0xa0) = ppuVar12;
      *(code **)((long)pplVar2 + -0x98) = FUN_100056888;
      if (*(char *)((long)plVar3 + 0x17) < '\0') {
        FUN_100033dac(plVar10,*plVar3,plVar3[1]);
      }
      else {
        lVar8 = plVar3[1];
        lVar11 = *plVar3;
        plVar10[2] = plVar3[2];
        plVar10[1] = lVar8;
        *plVar10 = lVar11;
      }
      lVar8 = plVar3[3];
      lVar11 = plVar3[4];
      plVar10[5] = 0;
      *(int *)(plVar10 + 4) = (int)lVar11;
      plVar10[3] = lVar8;
      plVar10[6] = 0;
      plVar10[7] = 0;
      lVar11 = plVar3[5];
      FUN_100056928();
      auVar19._8_8_ = lVar11;
      auVar19._0_8_ = plVar10;
      return auVar19;
    }
    uVar5 = param_1[2] - *param_1;
    uVar9 = (long)uVar5 >> 3;
    if (uVar9 <= uVar6) {
      uVar9 = uVar6;
    }
    if (0x7fffffffffffffef < uVar5) {
      uVar9 = 0xfffffffffffffff;
    }
    plVar3 = param_1;
    FUN_100056718();
    plVar4 = (long *)((long)plVar3 + lVar11);
    lVar11 = *param_2;
    plVar4[1] = param_2[1];
    *plVar4 = lVar11;
    plVar10 = plVar4 + 2;
    param_2 = (long *)*param_1;
    lVar11 = (long)plVar4 - (param_1[1] - (long)param_2);
    func_0x000107c610b4(lVar11);
    plVar4 = (long *)*param_1;
    *param_1 = lVar11;
    param_1[1] = (long)plVar10;
    param_1[2] = (long)(plVar3 + uVar9 * 2);
    if (plVar4 != (long *)0x0) {
      func_0x000107c60e14();
    }
  }
  param_1[1] = (long)plVar10;
  auVar15._8_8_ = param_2;
  auVar15._0_8_ = plVar4;
  return auVar15;
}



/* Entry: 100056718; end: 10005677f;  */

/* WARNING: Possible PIC construction at 0x0001000567e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000567e8) */

undefined1  [16] FUN_100056718(long *param_1,long *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  puVar8 = &stack0xfffffffffffffff0;
  if ((ulong)param_2 >> 0x3c == 0) {
    lVar2 = (long)param_2 << 4;
    func_0x000107c60e20(lVar2);
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = lVar2;
    return auVar11;
  }
  uVar9 = 0x10005674c;
  func_0x000107c2b044();
  puVar1 = &stack0xffffffffffffffe0;
  while( true ) {
    plVar4 = param_2;
    *(long **)(puVar1 + -0x20) = unaff_x20;
    *(long **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = puVar8;
    *(undefined8 *)(puVar1 + -8) = uVar9;
    if ((ulong)plVar4 >> 0x3a == 0) {
      lVar2 = (long)plVar4 << 6;
      func_0x000107c60e20(lVar2);
      auVar12._8_8_ = plVar4;
      auVar12._0_8_ = lVar2;
      return auVar12;
    }
    func_0x000104c4f740();
    *(undefined8 *)(puVar1 + -0x50) = unaff_x22;
    *(long *)(puVar1 + -0x48) = unaff_x21;
    *(long **)(puVar1 + -0x40) = unaff_x20;
    *(long **)(puVar1 + -0x38) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
    *(code **)(puVar1 + -0x28) = FUN_100056780;
    puVar8 = puVar1 + -0x30;
    unaff_x21 = param_1[1] - *param_1;
    plVar3 = (long *)((unaff_x21 >> 6) + 1);
    if ((ulong)plVar3 >> 0x3a != 0) break;
    uVar5 = param_1[2] - *param_1;
    param_2 = (long *)((long)uVar5 >> 5);
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (0x7fffffffffffffbf < uVar5) {
      param_2 = (long *)0x3ffffffffffffff;
    }
    *(long **)(puVar1 + -0x58) = param_1;
    if (param_2 == (long *)0x0) {
      *(undefined8 *)(puVar1 + -0x78) = 0;
      *(long *)(puVar1 + -0x70) = unaff_x21;
      *(long *)(puVar1 + -0x68) = unaff_x21;
      *(undefined8 *)(puVar1 + -0x60) = 0;
      FUN_100056888(unaff_x21,plVar4);
      *(long *)(puVar1 + -0x68) = unaff_x21 + 0x40;
      lVar7 = *param_1;
      lVar2 = unaff_x21 + (lVar7 - param_1[1]);
      FUN_1000569ac(param_1,lVar7,param_1[1],lVar2);
      lVar6 = *param_1;
      *param_1 = lVar2;
      lVar2 = param_1[2];
      lVar10 = *(long *)(puVar1 + -0x68);
      *(long *)(puVar1 + -0x88) = *(long *)(puVar1 + -0x60);
      *(long *)(puVar1 + -0x90) = lVar10;
      param_1[2] = *(long *)(puVar1 + -0x60);
      param_1[1] = lVar10;
      *(long *)(puVar1 + -0x68) = lVar6;
      *(long *)(puVar1 + -0x60) = lVar2;
      *(long *)(puVar1 + -0x78) = lVar6;
      *(long *)(puVar1 + -0x70) = lVar6;
      func_0x000100056a44(puVar1 + -0x78);
      auVar13._8_8_ = lVar7;
      auVar13._0_8_ = *(undefined8 *)(puVar1 + -0x90);
      return auVar13;
    }
    uVar9 = 0x1000567e8;
    puVar1 = puVar1 + -0x90;
    unaff_x19 = param_1;
    unaff_x20 = plVar4;
  }
  func_0x000107c2abec();
  func_0x000100056a44(puVar1 + -0x78);
  plVar3 = param_1;
  func_0x000107c60bd8();
  *(long **)(puVar1 + -0xb0) = unaff_x20;
  *(long **)(puVar1 + -0xa8) = param_1;
  *(undefined1 **)(puVar1 + -0xa0) = puVar8;
  *(code **)(puVar1 + -0x98) = FUN_100056888;
  if (*(char *)((long)plVar4 + 0x17) < '\0') {
    FUN_100033dac(plVar3,*plVar4,plVar4[1]);
  }
  else {
    lVar7 = plVar4[1];
    lVar2 = *plVar4;
    plVar3[2] = plVar4[2];
    plVar3[1] = lVar7;
    *plVar3 = lVar2;
  }
  lVar7 = plVar4[3];
  lVar2 = plVar4[4];
  plVar3[5] = 0;
  *(int *)(plVar3 + 4) = (int)lVar2;
  plVar3[3] = lVar7;
  plVar3[6] = 0;
  plVar3[7] = 0;
  lVar2 = plVar4[5];
  FUN_100056928();
  auVar14._8_8_ = lVar2;
  auVar14._0_8_ = plVar3;
  return auVar14;
}



/* Entry: 100056780; end: 100056887;  */

long * FUN_100056780(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar6 = param_1[1] - *param_1;
  uVar1 = (lVar6 >> 6) + 1;
  if (uVar1 >> 0x3a == 0) {
    uVar3 = param_1[2] - *param_1;
    uVar5 = (long)uVar3 >> 5;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7fffffffffffffbf < uVar3) {
      uVar5 = 0x3ffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar5 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      func_0x00010005674c();
    }
    lVar6 = (long)plVar2 + lVar6;
    plStack_40 = plVar2 + uVar5 * 8;
    plStack_58 = plVar2;
    plStack_50 = (long *)lVar6;
    plStack_48 = (long *)lVar6;
    FUN_100056888(lVar6,param_2);
    plStack_48 = (long *)(lVar6 + 0x40);
    lVar6 = lVar6 + (*param_1 - param_1[1]);
    FUN_1000569ac(param_1,*param_1,param_1[1],lVar6);
    plVar2 = plStack_48;
    plStack_58 = (long *)*param_1;
    *param_1 = lVar6;
    lVar6 = param_1[2];
    param_1[2] = (long)plStack_40;
    param_1[1] = (long)plStack_48;
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    plStack_40 = (long *)lVar6;
    func_0x000100056a44(&plStack_58);
    return plVar2;
  }
  func_0x000107c2abec();
  func_0x000100056a44(&plStack_58);
  func_0x000107c60bd8();
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_100033dac(param_1,*param_2,param_2[1]);
  }
  else {
    lVar4 = param_2[1];
    lVar6 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = lVar4;
    *param_1 = lVar6;
  }
  lVar4 = param_2[3];
  lVar6 = param_2[4];
  param_1[5] = 0;
  *(int *)(param_1 + 4) = (int)lVar6;
  param_1[3] = lVar4;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_100056928();
  return param_1;
}



/* Entry: 100056888; end: 100056927;  */

undefined8 * FUN_100056888(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_100033dac(param_1,*param_2,param_2[1]);
  }
  else {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar3;
    *param_1 = uVar2;
  }
  uVar2 = param_2[3];
  uVar1 = *(undefined4 *)(param_2 + 4);
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 4) = uVar1;
  param_1[3] = uVar2;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_100056928();
  return param_1;
}



/* Entry: 100056928; end: 1000569ab;  */

void FUN_100056928(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    func_0x000107c2abe4(param_1,param_4);
    lVar1 = param_1;
    func_0x000107c2abe8(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 1000569ac; end: 100056acf;  */

void FUN_1000569ac(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = param_2;
  if (param_2 != param_3) {
    do {
      uVar3 = puVar1[1];
      uVar2 = *puVar1;
      param_4[2] = puVar1[2];
      param_4[1] = uVar3;
      *param_4 = uVar2;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = 0;
      uVar2 = puVar1[3];
      *(undefined4 *)(param_4 + 4) = *(undefined4 *)(puVar1 + 4);
      param_4[3] = uVar2;
      param_4[6] = 0;
      param_4[7] = 0;
      param_4[5] = 0;
      uVar2 = puVar1[5];
      param_4[6] = puVar1[6];
      param_4[5] = uVar2;
      param_4[7] = puVar1[7];
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1 = puVar1 + 8;
      param_4 = param_4 + 8;
    } while (puVar1 != param_3);
    do {
      func_0x000107c2ab84(param_2);
      param_2 = param_2 + 8;
    } while (param_2 != param_3);
  }
  return;
}



/* Entry: 100056ad0; end: 100056b1f;  */

void FUN_100056ad0(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_100056d18(uVar1);
    lVar2 = uVar1 + 0x80;
    *(long *)(param_1 + 8) = lVar2;
  }
  else {
    lVar2 = param_1;
    FUN_100056b54();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 100056b20; end: 100056b53;  */

undefined1  [16] FUN_100056b20(long *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  if (param_2 >> 0x39 == 0) {
    lVar2 = param_2 << 7;
    func_0x000107c60e20(lVar2);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  func_0x000104c4f740();
  lVar2 = param_1[1] - *param_1;
  uVar1 = (lVar2 >> 7) + 1;
  if (uVar1 >> 0x39 == 0) {
    uVar4 = param_1[2] - *param_1;
    uVar6 = (long)uVar4 >> 6;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffff7f < uVar4) {
      uVar6 = 0x1ffffffffffffff;
    }
    plStack_58 = param_1;
    if (uVar6 == 0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = param_1;
      FUN_100056b20();
    }
    lVar2 = (long)plVar5 + lVar2;
    plStack_60 = plVar5 + uVar6 * 0x10;
    plStack_78 = plVar5;
    plStack_70 = (long *)lVar2;
    plStack_68 = (long *)lVar2;
    FUN_100056d18(lVar2,param_2);
    plStack_68 = (long *)(lVar2 + 0x80);
    lVar3 = *param_1;
    lVar2 = lVar2 + (lVar3 - param_1[1]);
    FUN_1000573d8(param_1,lVar3,param_1[1],lVar2);
    plVar5 = plStack_68;
    plStack_78 = (long *)*param_1;
    *param_1 = lVar2;
    lVar2 = param_1[2];
    param_1[2] = (long)plStack_60;
    param_1[1] = (long)plStack_68;
    plStack_70 = plStack_78;
    plStack_68 = plStack_78;
    plStack_60 = (long *)lVar2;
    FUN_100057440(&plStack_78);
    auVar8._8_8_ = lVar3;
    auVar8._0_8_ = plVar5;
    return auVar8;
  }
  func_0x000107c2abfc();
  FUN_100057440(&plStack_78);
  func_0x000107c60bd8();
  if (param_2 >> 0x3a == 0) {
    plVar5 = param_1;
    func_0x00010005674c();
    *param_1 = (long)plVar5;
    param_1[1] = (long)plVar5;
    param_1[2] = (long)(plVar5 + param_2 * 8);
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = plVar5;
    return auVar9;
  }
  func_0x000107c2abec();
  plVar5 = param_1;
  if (param_4 != 0) {
    FUN_100056c5c();
    FUN_100056f14(param_1,param_2,param_3,param_1[1]);
    param_1[1] = (long)plVar5;
  }
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = plVar5;
  return auVar10;
}



/* Entry: 100056b54; end: 100056c5b;  */

long * FUN_100056b54(long *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar5 = param_1[1] - *param_1;
  uVar1 = (lVar5 >> 7) + 1;
  if (uVar1 >> 0x39 == 0) {
    uVar2 = param_1[2] - *param_1;
    uVar4 = (long)uVar2 >> 6;
    if (uVar4 <= uVar1) {
      uVar4 = uVar1;
    }
    if (0x7fffffffffffff7f < uVar2) {
      uVar4 = 0x1ffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar4 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_100056b20();
    }
    lVar5 = (long)plVar3 + lVar5;
    plStack_40 = plVar3 + uVar4 * 0x10;
    plStack_58 = plVar3;
    plStack_50 = (long *)lVar5;
    plStack_48 = (long *)lVar5;
    FUN_100056d18(lVar5,param_2);
    plStack_48 = (long *)(lVar5 + 0x80);
    lVar5 = lVar5 + (*param_1 - param_1[1]);
    FUN_1000573d8(param_1,*param_1,param_1[1],lVar5);
    plVar3 = plStack_48;
    plStack_58 = (long *)*param_1;
    *param_1 = lVar5;
    lVar5 = param_1[2];
    param_1[2] = (long)plStack_40;
    param_1[1] = (long)plStack_48;
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    plStack_40 = (long *)lVar5;
    FUN_100057440(&plStack_58);
    return plVar3;
  }
  func_0x000107c2abfc();
  FUN_100057440(&plStack_58);
  func_0x000107c60bd8();
  if (param_2 >> 0x3a == 0) {
    plVar3 = param_1;
    func_0x00010005674c();
    *param_1 = (long)plVar3;
    param_1[1] = (long)plVar3;
    param_1[2] = (long)(plVar3 + param_2 * 8);
    return plVar3;
  }
  func_0x000107c2abec();
  plVar3 = param_1;
  if (param_4 != 0) {
    FUN_100056c5c();
    FUN_100056f14(param_1,param_2,param_3,param_1[1]);
    param_1[1] = (long)plVar3;
  }
  return plVar3;
}



/* Entry: 100056c5c; end: 100056c93;  */

void FUN_100056c5c(long *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  
  if (param_2 >> 0x3a == 0) {
    plVar1 = param_1;
    func_0x00010005674c();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 8);
    return;
  }
  func_0x000107c2abec();
  if (param_4 != 0) {
    FUN_100056c5c();
    plVar1 = param_1;
    FUN_100056f14(param_1,param_2,param_3,param_1[1]);
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 100056c94; end: 100056d17;  */

void FUN_100056c94(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_100056c5c(param_1,param_4);
    lVar1 = param_1;
    FUN_100056f14(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 100056d18; end: 100056e73;  */

undefined4 * FUN_100056d18(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  FUN_100056c94(param_1 + 2,*(long *)(param_2 + 2),*(long *)(param_2 + 4),
                *(long *)(param_2 + 4) - *(long *)(param_2 + 2) >> 6);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  FUN_100056f98(param_1 + 8,*(long *)(param_2 + 8),*(long *)(param_2 + 10),
                *(long *)(param_2 + 10) - *(long *)(param_2 + 8) >> 6);
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  FUN_100057064(param_1 + 0xe,*(long *)(param_2 + 0xe),*(long *)(param_2 + 0x10),
                (*(long *)(param_2 + 0x10) - *(long *)(param_2 + 0xe) >> 3) * -0x3333333333333333);
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_1000571b8(param_1 + 0x14,*(long *)(param_2 + 0x14),*(long *)(param_2 + 0x16),
                (*(long *)(param_2 + 0x16) - *(long *)(param_2 + 0x14) >> 3) * -0x3333333333333333);
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  FUN_100057284();
  return param_1;
}



/* Entry: 100056e74; end: 100056f13;  */

undefined8 * FUN_100056e74(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_100033dac(param_1,*param_2,param_2[1]);
  }
  else {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar3;
    *param_1 = uVar2;
  }
  uVar2 = param_2[3];
  uVar1 = *(undefined4 *)(param_2 + 4);
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 4) = uVar1;
  param_1[3] = uVar2;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_100056928();
  return param_1;
}



/* Entry: 100056f14; end: 100056f97;  */

long FUN_100056f14(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x40) {
    FUN_100056e74(param_4,param_2);
    param_4 = param_4 + 0x40;
  }
  return param_4;
}



/* Entry: 100056f98; end: 10005701b;  */

void FUN_100056f98(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    func_0x000107c2ac20(param_1,param_4);
    lVar1 = param_1;
    func_0x000107c2ac24(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10005701c; end: 100057063;  */

void FUN_10005701c(long *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  
  if (param_2 < 0x666666666666667) {
    plVar1 = param_1;
    FUN_100056010();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 5);
    return;
  }
  func_0x000107c2abac();
  if (param_4 != 0) {
    FUN_10005701c();
    plVar1 = param_1;
    FUN_1000570e8(param_1,param_2,param_3,param_1[1]);
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 100057064; end: 1000570e7;  */

void FUN_100057064(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10005701c(param_1,param_4);
    lVar1 = param_1;
    FUN_1000570e8(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 1000570e8; end: 1000571b7;  */

undefined8 *
FUN_1000570e8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_48 = 0;
  puStack_40 = param_4;
  uStack_60 = param_1;
  for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 5) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      FUN_100033dac(param_4,*param_2,param_2[1]);
    }
    else {
      uVar2 = param_2[1];
      uVar1 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar2;
      *param_4 = uVar1;
    }
    uVar1 = param_2[3];
    *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_2 + 4);
    param_4[3] = uVar1;
    param_4 = puStack_38 + 5;
  }
  uStack_48 = 1;
  FUN_100056274(&uStack_60);
  return param_4;
}



/* Entry: 1000571b8; end: 10005723b;  */

void FUN_1000571b8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    func_0x000107c2ac30(param_1,param_4);
    lVar1 = param_1;
    func_0x000107c2ac34(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10005723c; end: 100057283;  */

void FUN_10005723c(long *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  
  if (param_2 < 0x666666666666667) {
    plVar1 = param_1;
    func_0x000100056330();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 5);
    return;
  }
  func_0x000107c2abc0();
  if (param_4 != 0) {
    FUN_10005723c();
    plVar1 = param_1;
    FUN_100057308(param_1,param_2,param_3,param_1[1]);
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 100057284; end: 100057307;  */

void FUN_100057284(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10005723c(param_1,param_4);
    lVar1 = param_1;
    FUN_100057308(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 100057308; end: 1000573d7;  */

undefined8 *
FUN_100057308(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_48 = 0;
  puStack_40 = param_4;
  uStack_60 = param_1;
  for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 5) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      FUN_100033dac(param_4,*param_2,param_2[1]);
    }
    else {
      uVar2 = param_2[1];
      uVar1 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar2;
      *param_4 = uVar1;
    }
    uVar1 = param_2[3];
    *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_2 + 4);
    param_4[3] = uVar1;
    param_4 = puStack_38 + 5;
  }
  uStack_48 = 1;
  FUN_100056594(&uStack_60);
  return param_4;
}



/* Entry: 1000573d8; end: 10005743f;  */

void FUN_1000573d8(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  lVar1 = param_2;
  if (param_2 != param_3) {
    do {
      func_0x000107c2ac08(param_4,lVar1);
      lVar1 = lVar1 + 0x80;
      param_4 = param_4 + 0x80;
    } while (lVar1 != param_3);
    do {
      func_0x000107c2ab68(param_2);
      param_2 = param_2 + 0x80;
    } while (param_2 != param_3);
  }
  return;
}



/* Entry: 100057440; end: 10005748b;  */

long * FUN_100057440(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x80;
    func_0x000107c2ab68();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 10005748c; end: 1000574d7;  */

/* WARNING: Removing unreachable block (ram,0x0001000574b8) */

void FUN_10005748c(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x28) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 1000574d8; end: 100057557;  */

void FUN_1000574d8(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_10005748c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}


