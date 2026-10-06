/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10086aa78; end: 10086aac7;  */

void FUN_10086aa78(void)

{
  func_0x00010065cc54();
  func_0x00010086aa9c();
  return;
}



/* Entry: 10086aac8; end: 10086ab1f;  */

void FUN_10086aac8(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  func_0x0001006354c4();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x000100635530();
  }
  else {
    func_0x0001086db228();
  }
  func_0x000100635544();
  func_0x00010063554c();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x000100635558();
  }
  else {
    func_0x0001086db210();
  }
  func_0x000100635568();
  func_0x000100635574();
  return;
}



/* Entry: 10086ab20; end: 10086ab33;  */

void FUN_10086ab20(void)

{
  return;
}



/* Entry: 10086ab34; end: 10086ab63;  */

long FUN_10086ab34(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_1001148fc(param_1 + 0x10);
  }
  return param_1;
}



/* Entry: 10086ab64; end: 10086ab73;  */

undefined8 FUN_10086ab64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10086ab74; end: 10086abd3;  */

void FUN_10086ab74(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  FUN_10086ab64();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  FUN_10086abd4(uVar1);
  return;
}



/* Entry: 10086abd4; end: 10086abf7;  */

void FUN_10086abd4(long param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010086abdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + param_1))();
  return;
}



/* Entry: 10086abf8; end: 10086ac47;  */

long FUN_10086abf8(long param_1)

{
  FUN_10086ab74(param_1 + 0x18);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10086ac48; end: 10086ac5b;  */

void FUN_10086ac48(void)

{
  func_0x00010086ac1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10086ac5c; end: 10086ac73;  */

void FUN_10086ac5c(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010086abf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



/* Entry: 10086ac74; end: 10086acbb;  */

void FUN_10086ac74(void)

{
  long unaff_x19;
  
  func_0x00010086ac68();
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10086acbc; end: 10086accf;  */

void FUN_10086acbc(void)

{
  func_0x00010086ac90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10086acd0; end: 10086acf7;  */

long FUN_10086acd0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10086acf8; end: 10086acff;  */

long FUN_10086acf8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10086ad00; end: 10086ad6f;  */

void FUN_10086ad00(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    func_0x0001086b1550();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10086ad70; end: 10086ad93;  */

void FUN_10086ad70(void)

{
  return;
}



/* Entry: 10086ad94; end: 10086adaf;  */

void FUN_10086ad94(void)

{
  long unaff_x19;
  
  func_0x00010086ac68();
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10086adb0; end: 10086af07;  */

void FUN_10086adb0(long param_1,uint *param_2)

{
  char *pcVar1;
  long lVar2;
  undefined1 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  char *pcVar7;
  uint *puVar8;
  undefined8 extraout_x8;
  ulong uVar9;
  int extraout_w10;
  long *plVar10;
  uint *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1d8 [24];
  undefined1 uStack_1c0;
  undefined1 auStack_1b8 [56];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [32];
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  long *aplStack_b8 [2];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [24];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar8 = param_2;
  func_0x00010086a224();
  puVar11 = puVar8 + 10;
  uVar3 = *(long *)puVar11 == *(long *)(puVar8 + 0xc);
  uStack_38 = extraout_x8;
  if ((bool)uVar3) {
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    puVar8 = (uint *)&uStack_a8;
    FUN_10086a66c(param_2 + 2);
    FUN_10086aa78();
  }
  else {
    func_0x0001086e5330(aplStack_b8,param_1 + 0x28);
    if (aplStack_b8[0] != (long *)0x0) {
      uStack_88 = *(undefined8 *)(param_1 + 0x10);
      uStack_90 = *(undefined8 *)(param_1 + 8);
      if (*(long *)(param_1 + 0x10) != 0) {
        do {
          FUN_100565610();
        } while (extraout_w10 != 0);
      }
      FUN_10086a184(auStack_80,param_2 + 2);
      puVar6 = (undefined8 *)0x38;
      func_0x000107c60e20();
      *puVar6 = &PTR_DAT_110a65eb0;
      puVar6[2] = uStack_88;
      puVar6[1] = uStack_90;
      uStack_90 = 0;
      uStack_88 = 0;
      FUN_10086a184(puVar6 + 3,auStack_80);
      puStack_40 = puVar6;
      func_0x0001086e6710(&uStack_90);
      puVar8 = (uint *)(ulong)*param_2;
      (**(code **)(*aplStack_b8[0] + 0x80))(aplStack_b8[0],puVar8,puVar11,auStack_58);
      func_0x0001086e8408(auStack_58);
    }
    FUN_1005640e4();
  }
  FUN_10086ab20(uStack_38);
  if ((bool)uVar3) {
    return;
  }
  func_0x000107c60e78();
  puVar6 = &uStack_a8;
  FUN_10086aa78();
  func_0x0001086e92c8();
  pcVar7 = (char *)puVar6[3];
  lVar5 = *(long *)puVar8;
  lVar2 = *(long *)(puVar8 + 2);
  *pcVar7 = '\x01';
  plVar10 = (long *)(pcVar7 + 8);
  lVar15 = lVar2 - lVar5;
  if (0 < lVar15) {
    lVar12 = *(long *)(pcVar7 + 0x10);
    plVar13 = (long *)(pcVar7 + 0x18);
    if (*plVar13 - lVar12 < lVar15) {
      plVar4 = plVar10;
      func_0x0001086e8294(plVar10,(lVar12 - *plVar10) / 0x38 + lVar15 / 0x38);
      func_0x0001086e7fac(&plStack_148,plVar4,(lVar12 - *plVar10) / 0x38,plVar13);
      pcVar1 = (char *)((long)plStack_138 + lVar15);
      for (; lVar15 != 0; lVar15 = lVar15 + -0x38) {
        func_0x0001086d48a8(plStack_138,lVar5);
        plStack_138 = plStack_138 + 7;
        lVar5 = lVar5 + 0x38;
      }
      plStack_138 = (long *)pcVar1;
      func_0x0001086e803c(plVar13,lVar12,*(undefined8 *)(pcVar7 + 0x10),pcVar1);
      lVar5 = *(long *)(pcVar7 + 8);
      plStack_138 = (long *)((long)plStack_138 + (*(long *)(pcVar7 + 0x10) - lVar12));
      *(long *)(pcVar7 + 0x10) = lVar12;
      func_0x0001086e803c(plVar13,lVar5,lVar12,plStack_140 + ((lVar12 - lVar5) / -0x38) * 7);
      plStack_148 = *(long **)(pcVar7 + 8);
      *(long **)(pcVar7 + 8) = plStack_140 + ((lVar12 - lVar5) / -0x38) * 7;
      uVar9 = *(ulong *)(pcVar7 + 0x18);
      *(ulong *)(pcVar7 + 0x18) = uStack_130;
      *(long **)(pcVar7 + 0x10) = plStack_138;
      plStack_140 = plStack_148;
      plStack_138 = plStack_148;
      uStack_130 = uVar9;
      func_0x0001086e8160(&plStack_148);
    }
    else {
      plStack_140 = &lStack_120;
      plStack_138 = &lStack_118;
      uStack_130 = uStack_130 & 0xffffffffffffff00;
      plStack_148 = plVar13;
      lStack_120 = lVar12;
      for (; lStack_118 = lVar12, lVar5 != lVar2; lVar5 = lVar5 + 0x38) {
        func_0x0001086d48a8(lVar12,lVar5);
        lVar12 = lStack_118 + 0x38;
      }
      uStack_130 = CONCAT71(uStack_130._1_7_,1);
      func_0x0001086e80e0(&plStack_148);
      *(long *)(pcVar7 + 0x10) = lVar12;
    }
  }
  if ((*pcVar7 == '\x01') && (pcVar7[1] == '\x01')) {
    lVar5 = *(long *)(pcVar7 + 0x20);
    if (*(long *)(lVar5 + 0x58) != 0) {
      func_0x0001008659a8();
    }
    uStack_128 = 0;
    lStack_120 = 0;
    lStack_118 = 0;
    if (*(long *)(pcVar7 + 0x30) != *(long *)(pcVar7 + 0x38)) {
      uVar14 = *(undefined8 *)(*(long *)(lVar5 + 0x30) + 0x18);
      FUN_10002b838(auStack_180,&UNK_10f4b1e35);
      FUN_10054b97c(auStack_168,uVar14,auStack_180);
      func_0x000107c60ca0(auStack_180);
      auStack_1d8[0] = 0;
      uStack_1c0 = 0;
      uStack_1f8 = 0;
      uStack_200 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      uStack_208 = 0;
      uStack_210 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_248 = 0;
      uStack_250 = 0;
      plVar13 = *(long **)(*(long *)(lVar5 + 0x20) + 0x10);
      (**(code **)(*plVar13 + 0xb8))
                (auStack_1b8,plVar13,*(undefined4 *)(lVar5 + 0x54),pcVar7 + 0x30,auStack_1d8,
                 auStack_168,&uStack_250,0);
      FUN_1006a25b4(&uStack_128,auStack_1b8);
      FUN_100867bf0(auStack_1b8);
      FUN_100868e10(&uStack_250);
      FUN_1001148fc(auStack_1d8);
      FUN_10054cbac(auStack_168);
      FUN_10054d120(auStack_168);
    }
    FUN_10086b104(&uStack_250,*plVar10,*(undefined8 *)(pcVar7 + 0x10));
    (**(code **)(pcVar7 + 0x48))(&uStack_128,&uStack_250,pcVar7 + 0x48);
    func_0x000100870590(&uStack_250);
    func_0x00010063350c(&uStack_128);
    return;
  }
  return;
}



/* Entry: 10086af08; end: 10086af1f;  */

void FUN_10086af08(long param_1,long *param_2)

{
  char *pcVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
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
  undefined1 auStack_118 [24];
  undefined1 uStack_100;
  undefined1 auStack_f8 [56];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [32];
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  pcVar5 = *(char **)(param_1 + 0x18);
  lVar4 = *param_2;
  lVar2 = param_2[1];
  *pcVar5 = '\x01';
  plVar7 = (long *)(pcVar5 + 8);
  lVar11 = lVar2 - lVar4;
  if (0 < lVar11) {
    lVar8 = *(long *)(pcVar5 + 0x10);
    plVar9 = (long *)(pcVar5 + 0x18);
    if (*plVar9 - lVar8 < lVar11) {
      plVar3 = plVar7;
      func_0x0001086e8294(plVar7,(lVar8 - *plVar7) / 0x38 + lVar11 / 0x38);
      func_0x0001086e7fac(&plStack_88,plVar3,(lVar8 - *plVar7) / 0x38,plVar9);
      pcVar1 = (char *)((long)plStack_78 + lVar11);
      for (; lVar11 != 0; lVar11 = lVar11 + -0x38) {
        func_0x0001086d48a8(plStack_78,lVar4);
        plStack_78 = plStack_78 + 7;
        lVar4 = lVar4 + 0x38;
      }
      plStack_78 = (long *)pcVar1;
      func_0x0001086e803c(plVar9,lVar8,*(undefined8 *)(pcVar5 + 0x10),pcVar1);
      lVar4 = *(long *)(pcVar5 + 8);
      plStack_78 = (long *)((long)plStack_78 + (*(long *)(pcVar5 + 0x10) - lVar8));
      *(long *)(pcVar5 + 0x10) = lVar8;
      func_0x0001086e803c(plVar9,lVar4,lVar8,plStack_80 + ((lVar8 - lVar4) / -0x38) * 7);
      plStack_88 = *(long **)(pcVar5 + 8);
      *(long **)(pcVar5 + 8) = plStack_80 + ((lVar8 - lVar4) / -0x38) * 7;
      uVar6 = *(ulong *)(pcVar5 + 0x18);
      *(ulong *)(pcVar5 + 0x18) = uStack_70;
      *(long **)(pcVar5 + 0x10) = plStack_78;
      plStack_80 = plStack_88;
      plStack_78 = plStack_88;
      uStack_70 = uVar6;
      func_0x0001086e8160(&plStack_88);
    }
    else {
      plStack_80 = &lStack_60;
      plStack_78 = &lStack_58;
      uStack_70 = uStack_70 & 0xffffffffffffff00;
      plStack_88 = plVar9;
      lStack_60 = lVar8;
      for (; lStack_58 = lVar8, lVar4 != lVar2; lVar4 = lVar4 + 0x38) {
        func_0x0001086d48a8(lVar8,lVar4);
        lVar8 = lStack_58 + 0x38;
      }
      uStack_70 = CONCAT71(uStack_70._1_7_,1);
      func_0x0001086e80e0(&plStack_88);
      *(long *)(pcVar5 + 0x10) = lVar8;
    }
  }
  if ((*pcVar5 == '\x01') && (pcVar5[1] == '\x01')) {
    lVar4 = *(long *)(pcVar5 + 0x20);
    if (*(long *)(lVar4 + 0x58) != 0) {
      func_0x0001008659a8();
    }
    uStack_68 = 0;
    lStack_60 = 0;
    lStack_58 = 0;
    if (*(long *)(pcVar5 + 0x30) != *(long *)(pcVar5 + 0x38)) {
      uVar10 = *(undefined8 *)(*(long *)(lVar4 + 0x30) + 0x18);
      FUN_10002b838(auStack_c0,&UNK_10f4b1e35);
      FUN_10054b97c(auStack_a8,uVar10,auStack_c0);
      func_0x000107c60ca0(auStack_c0);
      auStack_118[0] = 0;
      uStack_100 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      plVar9 = *(long **)(*(long *)(lVar4 + 0x20) + 0x10);
      (**(code **)(*plVar9 + 0xb8))
                (auStack_f8,plVar9,*(undefined4 *)(lVar4 + 0x54),pcVar5 + 0x30,auStack_118,
                 auStack_a8,&uStack_190,0);
      FUN_1006a25b4(&uStack_68,auStack_f8);
      FUN_100867bf0(auStack_f8);
      FUN_100868e10(&uStack_190);
      FUN_1001148fc(auStack_118);
      FUN_10054cbac(auStack_a8);
      FUN_10054d120(auStack_a8);
    }
    FUN_10086b104(&uStack_190,*plVar7,*(undefined8 *)(pcVar5 + 0x10));
    (**(code **)(pcVar5 + 0x48))(&uStack_68,&uStack_190,pcVar5 + 0x48);
    func_0x000100870590(&uStack_190);
    func_0x00010063350c(&uStack_68);
    return;
  }
  return;
}



/* Entry: 10086af20; end: 10086b103;  */

void FUN_10086af20(long param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 uVar2;
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
  undefined1 auStack_118 [24];
  undefined1 uStack_100;
  undefined1 auStack_f8 [56];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [64];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x0001008659a8();
  }
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if (*param_2 != param_2[1]) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x18);
    FUN_10002b838(auStack_c0,&UNK_10f4b1e35);
    FUN_10054b97c(auStack_a8,uVar2,auStack_c0);
    func_0x000107c60ca0(auStack_c0);
    auStack_118[0] = 0;
    uStack_100 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 0x10);
    (**(code **)(*plVar1 + 0xb8))
              (auStack_f8,plVar1,*(undefined4 *)(param_1 + 0x54),param_2,auStack_118,auStack_a8,
               &uStack_190,0);
    FUN_1006a25b4(&uStack_68,auStack_f8);
    FUN_100867bf0(auStack_f8);
    FUN_100868e10(&uStack_190);
    FUN_1001148fc(auStack_118);
    FUN_10054cbac(auStack_a8);
    FUN_10054d120(auStack_a8);
  }
  FUN_10086b104(&uStack_190,*param_3,param_3[1]);
  (*(code *)*param_4)(&uStack_68,&uStack_190,param_4);
  func_0x000100870590(&uStack_190);
  func_0x00010063350c(&uStack_68);
  return;
}



/* Entry: 10086b104; end: 10086b223;  */

void FUN_10086b104(undefined8 *param_1,long param_2,char *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar5 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  lStack_88 = 0;
  lStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  for (pcVar3 = (char *)(param_2 + 0x18); uVar1 = uStack_70, pcVar4 = pcVar3 + -0x18,
      pcVar4 != param_3; pcVar3 = pcVar3 + 0x38) {
    if (*(int *)(pcVar3 + 0x18) == 1) {
      pcVar2 = pcVar3;
      func_0x0001086d661c();
      lVar5 = lVar5 + *(int *)(pcVar2 + 8);
      lStack_90 = lStack_90 + (int)*(undefined8 *)(pcVar2 + 0x10);
      lStack_88 = lStack_88 + (int)((ulong)*(undefined8 *)(pcVar2 + 0x10) >> 0x20);
      if (*pcVar2 == '\x01') {
        FUN_10065d008(&uStack_60,pcVar4);
      }
    }
    else {
      FUN_10065d008(&uStack_80,pcVar4);
    }
  }
  param_1[1] = uStack_58;
  *param_1 = uStack_60;
  param_1[2] = uStack_50;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  param_1[4] = uStack_78;
  param_1[3] = uStack_80;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  param_1[5] = uVar1;
  param_1[6] = lVar5;
  param_1[8] = lStack_88;
  param_1[7] = lStack_90;
  func_0x0001005fb56c(&uStack_80);
  func_0x0001005fb56c(&uStack_60);
  return;
}



/* Entry: 10086b224; end: 10086b697;  */

void FUN_10086b224(long *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  undefined1 uVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined **ppuStack_218;
  undefined8 uStack_210;
  long *plStack_208;
  long lStack_200;
  undefined4 uStack_1f8;
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [24];
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined1 auStack_1a8 [24];
  long lStack_190;
  long lStack_188;
  long lStack_180;
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [40];
  uint uStack_f0;
  undefined4 uStack_ec;
  undefined1 uStack_c8;
  undefined1 auStack_90 [48];
  
  lVar10 = *(long *)(param_3 + 0x10);
  plVar9 = *(long **)(lVar10 + 0x10);
  FUN_1006a2668(plVar9[0xb]);
  lVar12 = plVar9[0x11];
  plStack_208 = (long *)0x0;
  lStack_200 = 0;
  ppuStack_218 = &PTR_DAT_110a609a8;
  uStack_210 = 0;
  uStack_1f8 = 0x45;
  func_0x000100864c30();
  FUN_10002b838(auStack_160);
  FUN_1005504ac(&ppuStack_218,auStack_160,(&PTR_DAT_110a6f5e8)[(int)plVar9[0x1a]]);
  FUN_10086b6b4(*(undefined8 *)(param_2 + 8));
  (*extraout_x8)(lVar12);
  func_0x000107c60ca0(auStack_160);
  func_0x00010086b6d0();
  lVar12 = plVar9[0x11];
  plStack_208 = (long *)0x0;
  lStack_200 = 0;
  ppuStack_218 = &PTR_DAT_110a609a8;
  uStack_210 = 0;
  uStack_1f8 = 0x46;
  func_0x000100864c30();
  FUN_10002b838(auStack_178);
  FUN_1005504ac(&ppuStack_218,auStack_178,(&PTR_DAT_110a6f5e8)[(int)plVar9[0x1a]]);
  FUN_10086b6b4(*(undefined8 *)(param_2 + 0x20));
  (*extraout_x8_00)(lVar12);
  func_0x000107c60ca0(auStack_178);
  func_0x00010086b6d0();
  lVar12 = *param_1;
  lVar2 = param_1[1];
  uVar13 = *(ulong *)(lVar10 + 0x18);
  FUN_1006aee80(&ppuStack_218);
  lStack_200 = (*(long *)(lVar10 + 0x30) - *(long *)(lVar10 + 0x28)) / 0x378;
  uStack_1f8 = CONCAT22(uStack_1f8._2_2_,*(undefined2 *)(lVar10 + 0x20));
  plStack_208 = plVar9;
  func_0x00010086b6f4(auStack_1f0,param_2);
  FUN_100632dc0(auStack_1a8,lVar10 + 0x40);
  plVar8 = plStack_208;
  lStack_188 = param_1[1];
  lStack_190 = *param_1;
  lStack_180 = param_1[2];
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  plVar7 = (long *)plStack_208[0xb];
  func_0x00010086b73c(auStack_90,plVar7,1);
  uStack_f0 = 6;
  func_0x00010086bd14();
  FUN_10086bf24();
  uStack_f0 = 7;
  func_0x00010086bd14();
  FUN_10086bf24();
  lVar4 = lStack_200;
  uStack_f0 = 8;
  func_0x00010086bd14();
  *plVar7 = lVar4;
  uStack_f0 = 9;
  func_0x00010086bd14();
  *plVar7 = lStack_1b0;
  uStack_f0 = 10;
  func_0x00010086bd14();
  *plVar7 = lStack_1b8;
  uStack_f0 = 0xb;
  func_0x00010086bd14();
  *plVar7 = lStack_1c0;
  bVar3 = *(byte *)(plVar8 + 0x28);
  bVar6 = lStack_200 == 0;
  puVar11 = (undefined8 *)plVar8[0x25];
  uVar5 = (undefined1)uStack_1f8;
  func_0x00010086bf50(auStack_118,auStack_90);
  func_0x0001005fad5c(auStack_130,auStack_1d8);
  func_0x0001005fad5c(auStack_148,auStack_1f0);
  FUN_10086bfc0(&uStack_f0,auStack_118,auStack_130,auStack_148,bVar6 & (bVar3 ^ 0xff),
                uStack_1f8._1_1_);
  (**(code **)*puVar11)(puVar11,&lStack_190,auStack_1a8,uVar5,&uStack_f0);
  FUN_10086cf88(&uStack_f0);
  func_0x0001005fb56c(auStack_148);
  func_0x0001005fb56c(auStack_130);
  func_0x00010086cfe4(auStack_118);
  func_0x00010086cfe4(auStack_90);
  if (*(long *)(lVar10 + 0x60) != *(long *)(lVar10 + 0x68)) {
    func_0x0001006aee98(&uStack_f0);
    func_0x00010878b180(CONCAT44(uStack_ec,uStack_f0));
    (*extraout_x8_01)();
    FUN_10086fbd8();
  }
  if ((int)plVar9[0x1a] == 0) {
    (**(code **)(*(long *)plVar9[0x17] + 0x50))(auStack_90);
    FUN_1006a6bd0(&uStack_f0,auStack_90);
    func_0x000100572410(auStack_90);
    if ((long *)CONCAT44(uStack_ec,uStack_f0) != (long *)0x0) {
      (**(code **)(*(long *)CONCAT44(uStack_ec,uStack_f0) + 0x2b8))();
    }
    FUN_10057244c(&uStack_f0);
  }
  func_0x0001006aee98(&uStack_f0);
  plVar8 = *(long **)(CONCAT44(uStack_ec,uStack_f0) + 0x130);
  uVar1 = 0x100;
  if (uVar13 <= (ulong)((lVar2 - lVar12) / 0x378)) {
    uVar1 = 0x101;
  }
  (**(code **)(*plVar8 + 0x98))
            (plVar8,*(undefined4 *)((long)plVar9 + 0xd4),(int)plVar9[0x1a],uVar1,0);
  FUN_10086fbd8();
  uStack_f0 = uStack_f0 & 0xffffff00;
  uStack_c8 = 0;
  FUN_1006a2aac(plVar9[0xb],&uStack_f0);
  FUN_1006a5b38(&uStack_f0);
  (**(code **)(*plVar9 + 0x28))(plVar9);
  FUN_10087055c(&ppuStack_218);
  return;
}



/* Entry: 10086b698; end: 10086b6b3;  */

void FUN_10086b698(void)

{
  func_0x000107c61160(PTR_PTR_1126c8e00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10086b6b4; end: 10086b743;  */

void FUN_10086b6b4(void)

{
  return;
}



/* Entry: 10086b744; end: 10086b8af;  */

void FUN_10086b744(undefined8 *param_1,long param_2,int param_3,int param_4)

{
  long lVar1;
  double dVar2;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (*(int *)(param_2 + 0xfc) == 0) {
    dVar2 = 0.0;
    if (param_4 != 0) {
      lVar1 = param_2 + 0x20;
      FUN_1005e3518(0,lVar1);
      dVar2 = (double)lVar1 / 1000000.0;
    }
    FUN_10086b8b0(dVar2,param_1,0);
    dVar2 = 0.0;
    if (param_4 != 0) {
      lVar1 = param_2 + 0x60;
      FUN_1005e3518(0,lVar1);
      dVar2 = (double)lVar1 / 1000000.0;
    }
    FUN_10086b8b0(dVar2,param_1,2);
    dVar2 = 0.0;
    if (param_4 != 0) {
      lVar1 = param_2 + 0x40;
      FUN_1005e3518(0,lVar1);
      dVar2 = (double)lVar1 / 1000000.0;
    }
    FUN_10086b8b0(dVar2,param_1,1);
    dVar2 = 0.0;
    if (param_4 != 0) {
      lVar1 = param_2 + 0x80;
      FUN_1005e3518(0,lVar1);
      dVar2 = (double)lVar1 / 1000000.0;
    }
    FUN_10086b8b0(dVar2,param_1,3);
    if (param_3 != 0) {
      dVar2 = 0.0;
      if (param_4 != 0) {
        lVar1 = param_2 + 0xa0;
        FUN_1005e3518(0,lVar1);
        dVar2 = (double)lVar1 / 1000000.0;
      }
      FUN_10086b8b0(dVar2,param_1,4);
      dVar2 = 0.0;
      if (param_4 != 0) {
        param_2 = param_2 + 0xc0;
        FUN_1005e3518(0,param_2);
        dVar2 = (double)param_2 / 1000000.0;
      }
      FUN_10086b8b0(dVar2,param_1,5);
    }
  }
  return;
}



/* Entry: 10086b8b0; end: 10086bac7;  */

void FUN_10086b8b0(double param_1,long param_2,ulong param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *unaff_x19;
  int unaff_w20;
  ulong uVar7;
  ulong unaff_x23;
  long *plVar8;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  func_0x0001006a5678();
  param_3 = param_3 & 0xffffffff;
  uVar7 = *(ulong *)(param_2 + 8);
  if (uVar7 != 0) {
    uVar3 = uVar7 - 1;
    uVar5 = 0;
    if (uVar7 <= param_3) {
      uVar5 = uVar7;
    }
    unaff_x23 = param_3 - uVar5;
    if ((uVar7 & uVar3) == 0) {
      unaff_x23 = (int)uVar7 + 7 & param_3;
    }
    plVar8 = *(long **)(*unaff_x19 + unaff_x23 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_10086b960;
          uVar5 = plVar8[1];
          if (uVar5 != param_3) break;
          if ((int)plVar8[2] == unaff_w20) goto LAB_10086ba90;
        }
        if ((uVar7 & uVar3) == 0) {
          uVar5 = uVar5 & uVar3;
        }
        else if (uVar7 <= uVar5) {
          uVar2 = 0;
          if (uVar7 != 0) {
            uVar2 = uVar5 / uVar7;
          }
          uVar5 = uVar5 - uVar2 * uVar7;
        }
      } while (uVar5 == unaff_x23);
    }
  }
LAB_10086b960:
  plVar1 = unaff_x19 + 2;
  plVar8 = (long *)0x20;
  func_0x000107c60e20();
  uStack_68 = 1;
  *plVar8 = 0;
  plVar8[1] = param_3;
  *(int *)(plVar8 + 2) = unaff_w20;
  plVar8[3] = 0;
  plStack_78 = plVar8;
  plStack_70 = plVar1;
  if ((uVar7 == 0) || (*(float *)(unaff_x19 + 4) * (float)uVar7 < (float)(unaff_x19[3] + 1))) {
    FUN_10086bac8();
    uVar7 = unaff_x19[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x23 = (int)uVar7 + 7 & param_3;
    }
    else {
      unaff_x23 = param_3;
      if (uVar7 <= param_3) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = param_3 / uVar7;
        }
        unaff_x23 = param_3 - uVar5 * uVar7;
      }
    }
  }
  plVar8 = plStack_78;
  lVar4 = *unaff_x19;
  plVar6 = *(long **)(lVar4 + unaff_x23 * 8);
  if (plVar6 == (long *)0x0) {
    *plStack_78 = *plVar1;
    *plVar1 = (long)plStack_78;
    *(long **)(lVar4 + unaff_x23 * 8) = plVar1;
    if (*plStack_78 != 0) {
      uVar5 = *(ulong *)(*plStack_78 + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar5 = uVar5 & uVar7 - 1;
      }
      else if (uVar7 <= uVar5) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar5 / uVar7;
        }
        uVar5 = uVar5 - uVar3 * uVar7;
      }
      *(long **)(lVar4 + uVar5 * 8) = plStack_78;
    }
  }
  else {
    *plStack_78 = *plVar6;
    *plVar6 = (long)plStack_78;
  }
  plStack_78 = (long *)0x0;
  unaff_x19[3] = unaff_x19[3] + 1;
  FUN_10086bce8(&plStack_78);
LAB_10086ba90:
  plVar8[3] = (long)param_1;
  return;
}



/* Entry: 10086bac8; end: 10086bb97;  */

void FUN_10086bac8(long *param_1,ulong param_2)

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
    func_0x000107c60c44();
  }
  uVar7 = param_1[1];
  if (param_2 <= uVar7) {
    if (param_2 < uVar7) {
      uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
        func_0x000107c60c44();
      }
      else if (1 < uVar4) {
        uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
      }
      if (param_2 <= uVar4) {
        param_2 = uVar4;
      }
      if (param_2 < uVar7) goto LAB_10086bb10;
    }
    return;
  }
LAB_10086bb10:
  if (param_2 == 0) {
    FUN_10086bcb0(param_1);
    param_1[1] = 0;
  }
  else {
    plVar2 = param_1 + 1;
    FUN_10086bb98(plVar2);
    FUN_10086bcb0(param_1,plVar2);
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



/* Entry: 10086bb98; end: 10086bbb3;  */

void FUN_10086bb98(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 >> 0x3d != 0) {
    func_0x000104bd35f4();
    if (param_2 == 0) {
      FUN_10086bcb0(param_1);
      param_1[1] = 0;
    }
    else {
      plVar3 = param_1 + 1;
      FUN_10086bb98(plVar3);
      FUN_10086bcb0(param_1,plVar3);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 << 3);
  return;
}



/* Entry: 10086bbb4; end: 10086bcaf;  */

void FUN_10086bbb4(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_10086bcb0(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_10086bb98(plVar3);
    FUN_10086bcb0(param_1,plVar3);
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



/* Entry: 10086bcb0; end: 10086bce7;  */

void FUN_10086bcb0(long *param_1,long param_2)

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



/* Entry: 10086bce8; end: 10086bd0b;  */

undefined8 FUN_10086bce8(undefined8 param_1)

{
  func_0x00010086bcd0(param_1,0);
  return param_1;
}



/* Entry: 10086bd0c; end: 10086bd1f;  */

void FUN_10086bd0c(void)

{
  return;
}



/* Entry: 10086bd20; end: 10086bf23;  */

long * FUN_10086bd20(long *param_1,int *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  long lVar8;
  ulong uVar9;
  undefined8 extraout_x9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x22;
  long *plVar13;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  iVar3 = *param_2;
  uVar12 = (ulong)iVar3;
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar7 = uVar11 - 1;
    if ((uVar11 & uVar7) == 0) {
      unaff_x22 = uVar7 & uVar12;
    }
    else {
      unaff_x22 = uVar12;
      if (uVar11 <= uVar12) {
        uVar9 = 0;
        if (uVar11 != 0) {
          uVar9 = uVar12 / uVar11;
        }
        unaff_x22 = uVar12 - uVar9 * uVar11;
      }
    }
    plVar13 = *(long **)(*param_1 + unaff_x22 * 8);
    if (plVar13 != (long *)0x0) {
      do {
        while( true ) {
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) goto LAB_10086bdd4;
          uVar9 = plVar13[1];
          if (uVar9 != uVar12) break;
          if ((int)plVar13[2] == iVar3) goto LAB_10086bef4;
        }
        if ((uVar11 & uVar7) == 0) {
          uVar9 = uVar9 & uVar7;
        }
        else if (uVar11 <= uVar9) {
          uVar4 = 0;
          if (uVar11 != 0) {
            uVar4 = uVar9 / uVar11;
          }
          uVar9 = uVar9 - uVar4 * uVar11;
        }
      } while (uVar9 == unaff_x22);
    }
  }
LAB_10086bdd4:
  plVar1 = param_1 + 2;
  plVar13 = (long *)0x20;
  func_0x000107c60e20();
  uStack_58 = 1;
  *plVar13 = 0;
  plVar13[1] = uVar12;
  *(int *)(plVar13 + 2) = iVar3;
  plVar13[3] = 0;
  plStack_68 = plVar13;
  plStack_60 = plVar1;
  if ((uVar11 == 0) || (*(float *)(param_1 + 4) * (float)uVar11 < (float)(param_1[3] + 1))) {
    bVar5 = 2 < uVar11;
    bVar6 = uVar11 == 3;
    func_0x00010086bf3c(uVar11 << 1);
    uVar2 = extraout_x8;
    if (!bVar5 || bVar6) {
      uVar2 = extraout_x9;
    }
    FUN_10086bac8(param_1,uVar2);
    uVar11 = param_1[1];
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x22 = uVar11 - 1 & uVar12;
    }
    else {
      unaff_x22 = uVar12;
      if (uVar11 <= uVar12) {
        uVar7 = 0;
        if (uVar11 != 0) {
          uVar7 = uVar12 / uVar11;
        }
        unaff_x22 = uVar12 - uVar7 * uVar11;
      }
    }
  }
  plVar13 = plStack_68;
  lVar8 = *param_1;
  plVar10 = *(long **)(lVar8 + unaff_x22 * 8);
  if (plVar10 == (long *)0x0) {
    *plStack_68 = *plVar1;
    *plVar1 = (long)plStack_68;
    *(long **)(lVar8 + unaff_x22 * 8) = plVar1;
    if (*plStack_68 != 0) {
      uVar12 = *(ulong *)(*plStack_68 + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar12 = uVar12 & uVar11 - 1;
      }
      else if (uVar11 <= uVar12) {
        uVar7 = 0;
        if (uVar11 != 0) {
          uVar7 = uVar12 / uVar11;
        }
        uVar12 = uVar12 - uVar7 * uVar11;
      }
      *(long **)(lVar8 + uVar12 * 8) = plStack_68;
    }
  }
  else {
    *plStack_68 = *plVar10;
    *plVar10 = (long)plStack_68;
  }
  plStack_68 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_10086bce8(&plStack_68);
LAB_10086bef4:
  return plVar13 + 3;
}



/* Entry: 10086bf24; end: 10086bfbf;  */

void FUN_10086bf24(long *param_1)

{
  long unaff_x22;
  long unaff_x25;
  
  *param_1 = (long)(int)((unaff_x22 - unaff_x25) / 0x18);
  return;
}



/* Entry: 10086bfc0; end: 10086c03b;  */

void FUN_10086bfc0(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  
  func_0x00010086bf50();
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x30) = param_3[1];
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined8 *)(param_1 + 0x38) = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  uVar1 = *param_4;
  *(undefined8 *)(param_1 + 0x48) = param_4[1];
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  *(undefined1 *)(param_1 + 0x58) = param_5;
  *(undefined1 *)(param_1 + 0x59) = param_6;
  return;
}



/* Entry: 10086c03c; end: 10086c04f;  */

void FUN_10086c03c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    func_0x00010086c044();
    FUN_10086c3a0();
    (**(code **)**(undefined8 **)(param_1 + 0x40))
              (*(undefined8 **)(param_1 + 0x40),param_2,param_3,param_4,param_5);
  }
  return;
}



/* Entry: 10086c050; end: 10086c0d3;  */

void FUN_10086c050(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    func_0x00010086c044();
    FUN_10086c3a0();
    (**(code **)**(undefined8 **)(param_1 + 0x98))
              (*(undefined8 **)(param_1 + 0x98),param_2,param_3,param_4,param_5);
  }
  return;
}



/* Entry: 10086c0d4; end: 10086c2bb;  */

undefined1 * FUN_10086c0d4(undefined1 *param_1,code **param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long lVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  code *extraout_x8;
  int extraout_w10;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_120 [24];
  undefined1 *puStack_108;
  undefined1 uStack_100;
  undefined1 auStack_f8 [104];
  code *pcStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  undefined1 *puStack_60;
  
  puVar4 = auStack_120;
  puVar5 = auStack_120;
  func_0x0001006ac6c0();
  if ((param_1[0x38] & 1) == 0) {
    puVar6 = *(undefined8 **)(param_1 + 0x28);
    func_0x0001006ac9e8(auStack_120,param_1 + 8);
    uStack_100 = SUB81(param_2,0);
    puVar1 = auStack_f8;
    FUN_10086c2bc(puVar1,param_3);
    FUN_10028c49c();
    lVar7 = puVar6[2];
    func_0x000107c60d88(lVar7 + 8);
    lVar8 = *(long *)(lVar7 + 0x70);
    pcStack_90 = FUN_100871238;
    ppuStack_88 = &PTR_FUN_110a685f0;
    lVar2 = 0x90;
    func_0x000107c60e20();
    if (puStack_108 == (undefined1 *)0x0) {
      *(undefined8 *)(lVar2 + 0x18) = 0;
    }
    else {
      in_ZR = puStack_108 == auStack_120;
      if ((bool)in_ZR) {
        *(long *)(lVar2 + 0x18) = lVar2;
        func_0x000108708250();
        (*extraout_x8)();
      }
      else {
        *(undefined1 **)(lVar2 + 0x18) = puStack_108;
        puStack_108 = (undefined1 *)0x0;
      }
    }
    *(undefined1 *)(lVar2 + 0x20) = uStack_100;
    FUN_10086c2bc(lVar2 + 0x28,auStack_f8);
    param_2 = &pcStack_90;
    lStack_80 = lVar2;
    puStack_60 = puVar1;
    FUN_1005760fc(lVar7 + 0x48);
    func_0x00010086c328();
    func_0x000107c60d8c(lVar7 + 8);
    if (lVar8 == 0) {
      plVar3 = (long *)*puVar6;
      ppuStack_88 = (undefined **)puVar6[3];
      pcStack_90 = (code *)puVar6[2];
      if (puVar6[3] != 0) {
        do {
          FUN_100574708();
        } while (extraout_w10 != 0);
      }
      param_2 = &pcStack_90;
      (**(code **)(*plVar3 + 0x10))();
      FUN_100576684(&pcStack_90);
    }
    FUN_10086c378();
    param_1[0x38] = 1;
    param_1 = puVar4;
  }
  FUN_1006b3a90();
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    if ((int)param_2 != 0) {
      func_0x000108708280();
      FUN_100576684(&pcStack_90);
      FUN_10086c378();
      param_1 = puVar5;
    }
    func_0x000108708204();
    *param_1 = 0;
    param_1[0x60] = 0;
    if (*(char *)(param_2 + 0xc) == '\x01') {
      FUN_10086cb40(param_1);
      param_1[0x60] = 1;
    }
    return param_1;
  }
  return param_1;
}



/* Entry: 10086c2bc; end: 10086c30f;  */

undefined1 * FUN_10086c2bc(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x60] = 0;
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_10086cb40(param_1);
    param_1[0x60] = 1;
  }
  return param_1;
}



/* Entry: 10086c310; end: 10086c337;  */

void FUN_10086c310(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10086c338; end: 10086c377;  */

void FUN_10086c338(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10086c378();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10086c378; end: 10086c39f;  */

long * FUN_10086c378(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  func_0x00010086c358(param_1 + 5);
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 10086c3a0; end: 10086c3a7;  */

void FUN_10086c3a0(void)

{
  char in_stack_00000068;
  
  if (in_stack_00000068 == '\x01') {
    FUN_10086cf88();
  }
  return;
}



/* Entry: 10086c3a8; end: 10086c74b;  */

void FUN_10086c3a8(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  code *extraout_x8;
  code *extraout_x9;
  ulong uVar5;
  long *plVar6;
  undefined1 auStack_2e8 [8];
  ulong uStack_2e0;
  ulong uStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  undefined4 uStack_2c0;
  undefined1 auStack_2b8 [24];
  undefined1 auStack_2a0 [24];
  undefined2 uStack_288;
  undefined4 uStack_280;
  undefined1 uStack_27c;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [96];
  undefined1 auStack_170 [8];
  undefined8 *puStack_168;
  ulong uStack_160;
  long lStack_158;
  long lStack_150;
  undefined4 uStack_148;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined2 uStack_110;
  undefined4 uStack_108;
  undefined1 uStack_104;
  char cStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [4];
  undefined4 uStack_d4;
  undefined1 uStack_d0;
  undefined1 auStack_c8 [32];
  undefined1 uStack_a8;
  byte bStack_a0;
  undefined1 auStack_98 [136];
  long alStack_10 [2];
  
  func_0x0001006349a8();
  FUN_1006ad7fc(alStack_10,param_1 + 8);
  if ((alStack_10[0] != 0) && ((*(byte *)(alStack_10[0] + 0xb8) & 1) == 0)) {
    lVar4 = *param_2;
    lVar1 = param_2[1];
    uVar5 = alStack_10[0] + 0x30;
    FUN_1008645bc(uVar5);
    FUN_1005f08fc(*(undefined8 *)(alStack_10[0] + 0x160));
    (*extraout_x8)();
    uStack_e0 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    func_0x0001006327cc(auStack_d8,&uStack_f0);
    func_0x0001005fb56c(&uStack_f0);
    uStack_d4 = 0;
    uStack_d0 = 1;
    if (*(char *)(param_1 + 0x38) == '\x01') {
      FUN_10086ca80(auStack_c8,param_1 + 0x20);
    }
    FUN_100632964(auStack_170);
    FUN_10086cb40(auStack_1d0,param_5);
    FUN_10086cef0(auStack_2e8,param_4,auStack_1d0,*(undefined4 *)(param_1 + 0x18),
                  uVar5 <= (ulong)((lVar1 - lVar4) / 0x378));
    if (cStack_100 == '\x01') {
      auStack_170[0] = auStack_2e8[0];
      if (lStack_150 != 0) {
        func_0x00010086cfb8(&puStack_168,lStack_158);
        lStack_158 = 0;
        puVar3 = puStack_168;
        for (; uStack_160 != 0; uStack_160 = uStack_160 - 1) {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        }
        lStack_150 = 0;
      }
      uVar5 = uStack_2e0;
      uStack_2e0 = 0;
      FUN_10086bcb0(&puStack_168,uVar5);
      uStack_160 = uStack_2d8;
      uStack_2d8 = 0;
      lStack_158 = lStack_2d0;
      lStack_150 = lStack_2c8;
      uStack_148 = uStack_2c0;
      if (lStack_2c8 != 0) {
        uVar5 = *(ulong *)(lStack_2d0 + 8);
        if ((uStack_160 & uStack_160 - 1) == 0) {
          uVar5 = uVar5 & uStack_160 - 1;
        }
        else if (uStack_160 <= uVar5) {
          uVar2 = 0;
          if (uStack_160 != 0) {
            uVar2 = uVar5 / uStack_160;
          }
          uVar5 = uVar5 - uVar2 * uStack_160;
        }
        puStack_168[uVar5] = &lStack_158;
        lStack_2d0 = 0;
        lStack_2c8 = 0;
      }
      FUN_10065ad64(auStack_140,auStack_2b8);
      FUN_10065ad64(auStack_128,auStack_2a0);
      uStack_110 = uStack_288;
      uStack_108 = uStack_280;
      uStack_104 = uStack_27c;
    }
    else {
      FUN_10086cf6c(auStack_170,auStack_2e8);
    }
    func_0x00010086cf88(&uStack_2e0);
    func_0x00010086cf88(auStack_1d0);
    func_0x0001006329ec(auStack_98,auStack_170);
    FUN_10086d0a8(*(undefined8 *)(alStack_10[0] + 0x160));
    (*extraout_x9)(auStack_2e8);
    uVar5 = uStack_2e0;
    FUN_1006ada28();
    if (((uVar5 & 1) != 0) &&
       (uStack_a8 = *(int *)(alStack_10[0] + 0x7c) != 2, (bStack_a0 & 1) == 0)) {
      bStack_a0 = 1;
    }
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    plVar6 = *(long **)(*(long *)(alStack_10[0] + 0xb0) + 0x180);
    lVar4 = alStack_10[0];
    FUN_1006a27b0(alStack_10[0],param_2,&uStack_1e8);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    FUN_100632b18(auStack_2e8,auStack_d8);
    (**(code **)(*plVar6 + 0x10))(plVar6,lVar4,&uStack_200,param_3,&uStack_218,auStack_2e8);
    FUN_100633354(auStack_2e8);
    func_0x0001006333b4(&uStack_218);
    func_0x000100633408(&uStack_200);
    func_0x00010063350c(&uStack_1e8);
    func_0x0001006329bc(auStack_170);
    func_0x000100633328(auStack_d8);
  }
  func_0x0001005749b0(alStack_10);
  return;
}



/* Entry: 10086c74c; end: 10086c75f;  */

void FUN_10086c74c(void)

{
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  return;
}



/* Entry: 10086c760; end: 10086c7fb;  */

void FUN_10086c760(long param_1,int param_2)

{
  undefined1 in_ZR;
  
  FUN_10086c74c();
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x7c) = 1;
  FUN_10086c7fc();
  while( true ) {
    FUN_10086ca3c();
    func_0x00010086ca60();
    if ((bool)in_ZR) break;
    func_0x000107c60e78();
    while( true ) {
      func_0x0001086f4754();
      in_ZR = param_2 == 1;
      if ((bool)in_ZR) break;
      FUN_10086ca3c();
    }
    func_0x000107c60e38(param_1);
    func_0x000107c60e3c();
  }
  return;
}



/* Entry: 10086c7fc; end: 10086ca3b;  */

void FUN_10086c7fc(undefined8 *param_1,long *param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long extraout_x8;
  long *unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_d8 [24];
  long alStack_c0 [4];
  undefined4 uStack_a0;
  undefined1 auStack_98 [40];
  undefined1 auStack_70 [32];
  
  if (*param_2 == param_2[1]) {
    if (param_3 == 0) {
      return;
    }
    func_0x0001086f43a4(param_1);
    func_0x0001086f47b4();
    alStack_c0[2] = 0;
    alStack_c0[3] = 0;
    alStack_c0[0] = extraout_x8 + 0x10;
    alStack_c0[1] = 0;
    uStack_a0 = 0x6a;
    func_0x0001086f47c4();
    func_0x0001086f4744((long)*(int *)(param_1 + 4));
    plVar5 = alStack_c0;
    FUN_1005504ac(plVar5,auStack_d8);
    func_0x0001086f4794();
    func_0x0001086f4734();
    func_0x0001086f4400();
    func_0x0001086f478c();
    func_0x0001005505a0(auStack_98,plVar5);
    func_0x0001086f47e0(*(undefined8 *)(*unaff_x20 + 0x50));
    FUN_1005505e4(auStack_98);
    func_0x000107c60ca0(auStack_d8);
    FUN_1005505e4(alStack_c0);
    return;
  }
  puVar4 = param_1;
  FUN_10086d0c4();
  lVar7 = *param_2;
  lVar2 = param_2[1];
  lVar1 = lVar7;
  lVar3 = lVar7;
  if (lVar7 != lVar2) {
    while (lVar7 = lVar3, lVar6 = lVar1, lVar1 = lVar6 + 0x378, lVar1 != lVar2) {
      lVar3 = lVar7;
      if ((*(byte *)(lVar6 + 0x5b0) & 1) == 0) {
        uVar8 = *(undefined8 *)(lVar6 + 0x390);
        func_0x000108691254(alStack_c0,lVar1);
        uVar9 = *(undefined8 *)(lVar7 + 0x18);
        func_0x0001086f47d8(auStack_70);
        func_0x0001086f7e6c(uVar8,alStack_c0,uVar9,auStack_70);
        FUN_1005fce88(auStack_70);
        func_0x0001086f475c();
        lVar3 = lVar1;
        if ((int)uVar8 == 0) {
          lVar3 = lVar7;
        }
      }
    }
  }
  if (*(char *)(lVar7 + 0x238) == '\x01') {
LAB_10086c8c0:
    func_0x0001086f3fe8(param_1,0x5901ef);
  }
  else {
    if (((param_3 & 1) == 0) && ((*(byte *)(puVar4 + 1) & 1) != 0)) {
      uVar8 = *(undefined8 *)(lVar7 + 0x18);
      func_0x0001086f47d8(alStack_c0);
      func_0x0001086f7e6c(uVar8,alStack_c0,*puVar4,puVar4 + 2);
      func_0x0001086f475c();
      if ((int)uVar8 == 0) goto LAB_10086c8c0;
    }
    uVar8 = *(undefined8 *)(lVar7 + 0x18);
    func_0x0001086f47d8(alStack_c0);
    func_0x0001086f4114(param_1,uVar8,alStack_c0);
    func_0x0001086f475c();
  }
  return;
}



/* Entry: 10086ca3c; end: 10086ca7f;  */

undefined8 * FUN_10086ca3c(void)

{
  code *in_stack_00000008;
  undefined8 *in_stack_00000010;
  
  (*in_stack_00000008)();
  (*(code *)*in_stack_00000010)();
  return &stack0x00000008;
}



/* Entry: 10086ca80; end: 10086cab3;  */

long FUN_10086ca80(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010054e4a4();
  if ((bool)in_CY) {
    FUN_10086cab4();
  }
  else {
    func_0x0001086ff304();
    param_1 = unaff_x20 + 0x18;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x18;
}



/* Entry: 10086cab4; end: 10086cb2f;  */

void FUN_10086cab4(void)

{
  undefined8 uStack_48;
  
  FUN_10054e4e8();
  FUN_10054e584();
  FUN_100656674();
  FUN_10054e5d0();
  func_0x00010054e5e0();
  func_0x000100656718();
  FUN_10054f8dc(uStack_48);
  func_0x00010054e68c();
  FUN_1006567dc();
  func_0x00010054e72c();
  FUN_100656978();
  return;
}



/* Entry: 10086cb30; end: 10086cb3f;  */

void FUN_10086cb30(void)

{
  return;
}



/* Entry: 10086cb40; end: 10086cb9b;  */

void FUN_10086cb40(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100632ab0();
  FUN_10086cb9c();
  func_0x0001005fad5c(param_1 + 0x28,unaff_x20 + 0x28);
  FUN_100632b34();
  func_0x0001005fad5c();
  *(undefined2 *)(unaff_x19 + 0x58) = *(undefined2 *)(unaff_x20 + 0x58);
  return;
}



/* Entry: 10086cb9c; end: 10086cbfb;  */

undefined8 * FUN_10086cb9c(undefined8 *param_1,long param_2)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10086bac8(param_1,*(undefined8 *)(param_2 + 8));
  FUN_10086ce28(param_1,*(undefined8 *)(param_2 + 0x10),0);
  return param_1;
}



/* Entry: 10086cbfc; end: 10086cdf3;  */

undefined1  [16] FUN_10086cbfc(long *param_1,int *param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x24;
  undefined1 auVar10 [16];
  long *plStack_68;
  
  uVar9 = (ulong)*param_2;
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    uVar4 = uVar8 - 1;
    if ((uVar8 & uVar4) == 0) {
      unaff_x24 = uVar4 & uVar9;
    }
    else {
      unaff_x24 = uVar9;
      if (uVar8 <= uVar9) {
        uVar5 = 0;
        if (uVar8 != 0) {
          uVar5 = uVar9 / uVar8;
        }
        unaff_x24 = uVar9 - uVar5 * uVar8;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_10086ccb0;
          uVar5 = plVar7[1];
          if (uVar5 != uVar9) break;
          if ((int)plVar7[2] == *param_2) {
            uVar3 = 0;
            plStack_68 = plVar7;
            goto LAB_10086cdc8;
          }
        }
        if ((uVar8 & uVar4) == 0) {
          uVar5 = uVar5 & uVar4;
        }
        else if (uVar8 <= uVar5) {
          uVar1 = 0;
          if (uVar8 != 0) {
            uVar1 = uVar5 / uVar8;
          }
          uVar5 = uVar5 - uVar1 * uVar8;
        }
      } while (uVar5 == unaff_x24);
    }
  }
LAB_10086ccb0:
  plVar7 = param_1 + 2;
  lVar2 = 0x20;
  func_0x000107c60e20();
  FUN_10086ce70();
  uVar3 = *param_3;
  *(undefined8 *)(lVar2 + 0x18) = param_3[1];
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  if ((uVar8 == 0) || (*(float *)(param_1 + 4) * (float)uVar8 < (float)(param_1[3] + 1))) {
    func_0x000108640784(uVar8 << 1);
    FUN_10086bac8(param_1);
    uVar8 = param_1[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x24 = uVar8 - 1 & uVar9;
    }
    else {
      unaff_x24 = uVar9;
      if (uVar8 <= uVar9) {
        uVar4 = 0;
        if (uVar8 != 0) {
          uVar4 = uVar9 / uVar8;
        }
        unaff_x24 = uVar9 - uVar4 * uVar8;
      }
    }
  }
  lVar2 = *param_1;
  plVar6 = *(long **)(lVar2 + unaff_x24 * 8);
  if (plVar6 == (long *)0x0) {
    *plStack_68 = *plVar7;
    *plVar7 = (long)plStack_68;
    *(long **)(lVar2 + unaff_x24 * 8) = plVar7;
    if (*plStack_68 != 0) {
      uVar9 = *(ulong *)(*plStack_68 + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar9 = uVar9 & uVar8 - 1;
      }
      else if (uVar8 <= uVar9) {
        uVar4 = 0;
        if (uVar8 != 0) {
          uVar4 = uVar9 / uVar8;
        }
        uVar9 = uVar9 - uVar4 * uVar8;
      }
      *(long **)(lVar2 + uVar9 * 8) = plStack_68;
    }
  }
  else {
    *plStack_68 = *plVar6;
    *plVar6 = (long)plStack_68;
  }
  param_1[3] = param_1[3] + 1;
  func_0x00010086ce84();
  uVar3 = 1;
LAB_10086cdc8:
  auVar10._8_8_ = uVar3;
  auVar10._0_8_ = plStack_68;
  return auVar10;
}



/* Entry: 10086cdf4; end: 10086ce27;  */

void FUN_10086cdf4(undefined8 param_1,undefined8 param_2)

{
  FUN_10086cbfc(param_1,param_2,param_2);
  return;
}



/* Entry: 10086ce28; end: 10086ce6f;  */

void FUN_10086ce28(undefined8 param_1,long *param_2,long param_3)

{
  for (; param_2 != (long *)param_3; param_2 = (long *)*param_2) {
    func_0x00010086ce10(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 10086ce70; end: 10086ce8b;  */

void FUN_10086ce70(undefined8 *param_1)

{
  undefined8 unaff_x23;
  
  *param_1 = 0;
  param_1[1] = unaff_x23;
  return;
}



/* Entry: 10086ce8c; end: 10086ceef;  */

void FUN_10086ce8c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x00010086bf50();
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_2 + 0x58);
  return;
}



/* Entry: 10086cef0; end: 10086cf33;  */

undefined1 *
FUN_10086cef0(undefined1 *param_1,undefined1 param_2,undefined8 param_3,undefined4 param_4,
             undefined1 param_5)

{
  *param_1 = param_2;
  FUN_10086ce8c(param_1 + 8,param_3);
  *(undefined4 *)(param_1 + 0x68) = param_4;
  param_1[0x6c] = param_5;
  return param_1;
}



/* Entry: 10086cf34; end: 10086cf6b;  */

void FUN_10086cf34(undefined1 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_10066df1c();
  *param_1 = *param_2;
  FUN_10086ce8c(param_1 + 8,param_2 + 8);
  uVar1 = *(undefined4 *)(unaff_x19 + 0x68);
  *(undefined1 *)(unaff_x20 + 0x6c) = *(undefined1 *)(unaff_x19 + 0x6c);
  *(undefined4 *)(unaff_x20 + 0x68) = uVar1;
  return;
}



/* Entry: 10086cf6c; end: 10086cf87;  */

void FUN_10086cf6c(long param_1)

{
  FUN_10086cf34();
  *(undefined1 *)(param_1 + 0x70) = 1;
  return;
}



/* Entry: 10086cf88; end: 10086d00b;  */

long FUN_10086cf88(long param_1)

{
  func_0x0001005fb56c(param_1 + 0x40);
  func_0x0001005fb56c(param_1 + 0x28);
  func_0x00010086cfb8(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_10086d00c(param_1,0);
  return param_1;
}



/* Entry: 10086d00c; end: 10086d023;  */

void FUN_10086d00c(long *param_1)

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



/* Entry: 10086d024; end: 10086d047;  */

undefined8 FUN_10086d024(undefined8 param_1)

{
  FUN_10086d00c(param_1,0);
  return param_1;
}



/* Entry: 10086d048; end: 10086d053;  */

void FUN_10086d048(void)

{
  return;
}



/* Entry: 10086d054; end: 10086d08b;  */

void FUN_10086d054(undefined1 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_10086d048();
  *param_1 = *param_2;
  FUN_10086cb40(param_1 + 8,param_2 + 8);
  uVar1 = *(undefined4 *)(unaff_x19 + 0x68);
  *(undefined1 *)(unaff_x20 + 0x6c) = *(undefined1 *)(unaff_x19 + 0x6c);
  *(undefined4 *)(unaff_x20 + 0x68) = uVar1;
  return;
}



/* Entry: 10086d08c; end: 10086d0a7;  */

void FUN_10086d08c(long param_1)

{
  FUN_10086d054();
  *(undefined1 *)(param_1 + 0x70) = 1;
  return;
}



/* Entry: 10086d0a8; end: 10086d0c3;  */

void FUN_10086d0a8(void)

{
  return;
}



/* Entry: 10086d0c4; end: 10086d293;  */

long FUN_10086d0c4(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x20;
  undefined1 auStack_4b8 [32];
  long alStack_498 [4];
  undefined4 uStack_478;
  undefined4 uStack_474;
  char cStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  byte bStack_70;
  undefined1 auStack_68 [48];
  char cStack_38;
  
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    func_0x00010086d0b4(*(undefined4 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    FUN_100630c40(auStack_80);
    if ((cStack_38 == '\x01') && ((bStack_70 & 1) != 0)) {
      *(undefined8 *)(param_1 + 0x48) = uStack_78;
      *(byte *)(param_1 + 0x50) = bStack_70;
      func_0x000100620418(param_1 + 0x58,auStack_68);
    }
    else {
      func_0x0001086f47b4();
      alStack_498[2] = 0;
      alStack_498[3] = 0;
      alStack_498[0] = extraout_x8 + 0x10;
      alStack_498[1] = 0;
      uStack_478 = 0x6a;
      FUN_10002b838(auStack_c0,&DAT_10f3811b7);
      func_0x0001086f4744((long)*(int *)(param_1 + 0x20));
      plVar2 = alStack_498;
      FUN_1005504ac(plVar2,auStack_c0);
      func_0x0001086f4794();
      func_0x0001086f4734();
      func_0x0001086f4400();
      func_0x0001086f478c();
      func_0x0001005505a0(auStack_a8,plVar2);
      func_0x0001086f47e0(*(undefined8 *)(*unaff_x20 + 0x50));
      FUN_1005505e4(auStack_a8);
      func_0x000107c60ca0(auStack_c0);
      FUN_1005505e4(alStack_498);
      func_0x000107c2a05c(alStack_498,*(undefined8 *)(param_1 + 0x28),0);
      if (cStack_c8 == '\x01') {
        uVar1 = CONCAT44(uStack_474,uStack_478);
        func_0x00010868ca64(auStack_4b8,alStack_498);
        func_0x0001086f4114(param_1,uVar1,auStack_4b8);
        FUN_1005fce88(auStack_4b8);
      }
      FUN_10065cac8(alStack_498);
    }
    FUN_100631e3c(auStack_80);
  }
  return param_1 + 0x48;
}



/* Entry: 10086d294; end: 10086d2ff;  */

void FUN_10086d294(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_10086d0c4();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  FUN_100606fd8(param_1 + 2,param_2 + 2);
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    *param_1 = 0x7ffffffffffffffe;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}



/* Entry: 10086d300; end: 10086d337;  */

void FUN_10086d300(void)

{
  func_0x000107c61160(PTR_PTR_1126c8e00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10086d338; end: 10086d35f;  */

void FUN_10086d338(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  param_1[1] = *(undefined8 *)(param_2 + 0x20);
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_100565610(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10086d360; end: 10086d55b;  */

void FUN_10086d360(long param_1)

{
  undefined **ppuVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  code *extraout_x8_00;
  undefined1 auStack_7b0 [24];
  undefined1 auStack_798 [32];
  undefined1 auStack_778 [464];
  char cStack_5a8;
  undefined1 auStack_5a0 [44];
  byte bStack_574;
  long alStack_570 [54];
  byte bStack_3c0;
  long alStack_3b8 [54];
  byte bStack_208;
  undefined1 auStack_200 [448];
  
  if ((*(byte *)(param_1 + 0x110) & 1) == 0) {
    func_0x0001006b444c();
    FUN_10086d55c(auStack_200);
    func_0x00010068e2b8(alStack_3b8,auStack_200);
    func_0x00010086e188(alStack_570);
    while ((((bStack_208 & 1) != 0 || ((bStack_3c0 & 1) != 0)) && (alStack_3b8[0] != alStack_570[0])
           )) {
      plVar2 = alStack_3b8;
      FUN_10068e438();
      ppuVar1 = &PTR_PTR_113280c30;
      if ((undefined **)plVar2[0xf] != (undefined **)0x0) {
        ppuVar1 = (undefined **)plVar2[0xf];
      }
      func_0x0001086dafe8(ppuVar1[0xd]);
      if (*(int *)(extraout_x8 + 0x1c) == 3) {
        func_0x0001006b457c();
        func_0x00010885edd8(auStack_778);
        func_0x000108655080(auStack_5a0,auStack_778);
        func_0x0001086da718();
        if (((bStack_574 & 1) == 0) && ((char)plVar2[5] == '\x01')) {
          func_0x0001006b457c();
          func_0x0001086da598(auStack_778);
          uVar3 = *(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x30);
          FUN_100671198(uVar3);
          if (cStack_5a8 == '\x01') {
            func_0x0001086da3cc(auStack_7b0);
            func_0x0001086d9c48();
            puVar4 = auStack_778;
            func_0x0001086a1f74(puVar4,plVar2,uVar3,auStack_798);
            func_0x0001086da134();
            func_0x0001086da03c();
            if (((ulong)puVar4 & 1) == 0) {
              func_0x0001005f67e4(*(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x70));
              (*extraout_x8_00)();
            }
          }
          func_0x0001086dabcc();
        }
        FUN_100100fec(auStack_5a0);
      }
      FUN_100678cb8(alStack_3b8);
    }
    func_0x00010086e190(alStack_570);
    func_0x00010086e190(alStack_3b8);
    FUN_1006928f0(auStack_200);
  }
  return;
}



/* Entry: 10086d55c; end: 10086d5db;  */

void FUN_10086d55c(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x0001005f39b8();
  if ((bool)in_ZR) {
    FUN_1005ed91c();
    func_0x0001005ecc7c();
    if (!(bool)in_ZR) {
      func_0x000100458ae4();
      func_0x000107c3417c();
      func_0x000107c341b0();
      func_0x000107c34218();
      FUN_10054f908();
      func_0x000107c3415c();
      func_0x000107c3422c();
      func_0x000107c3436c();
      FUN_100678270();
      func_0x0001005eb600();
    }
  }
  FUN_1005f3a4c(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_10086d5dc();
  return;
}



/* Entry: 10086d5dc; end: 10086d5ff;  */

void FUN_10086d5dc(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_28 [8];
  
  FUN_1006b7fbc();
  func_0x0001005ec788(param_1);
  FUN_100678c64(param_2,auStack_28);
  return;
}



/* Entry: 10086d600; end: 10086d64b;  */

void FUN_10086d600(undefined8 param_1)

{
  undefined1 auStack_28 [8];
  
  func_0x0001005ec788();
  FUN_100678c64(param_1,auStack_28);
  return;
}



/* Entry: 10086d64c; end: 10086d683;  */

void FUN_10086d64c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10086d684; end: 10086d68f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10086d684(void)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lStack_38;
  
  uVar1 = *(undefined1 *)(unaff_x20 + 0x10);
  FUN_1000d224c(&lStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
               );
  lVar3 = lStack_38;
  func_0x000107c45174();
  func_0x000107c615e8(lStack_38);
  lVar2 = 0;
  FUN_10086d808();
  func_0x000107c61534();
  *(undefined1 *)(lVar2 + 0x10) = uVar1;
  *(bool *)(lVar2 + 0x11) = lVar3 - 4U < 3;
  FUN_10086dacc();
  lVar3 = 0;
  FUN_100870a98();
  func_0x000107c613fc();
  *(long *)(lVar3 + 0x10) = lVar2;
  return;
}



/* Entry: 10086d690; end: 10086d733;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10086d690(undefined1 param_1)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  FUN_1000d224c(&lStack_38);
  lVar2 = lStack_38;
  func_0x000107c45174();
  func_0x000107c615e8(lStack_38);
  lVar1 = 0;
  FUN_10086d808();
  func_0x000107c61534();
  *(undefined1 *)(lVar1 + 0x10) = param_1;
  *(bool *)(lVar1 + 0x11) = lVar2 - 4U < 3;
  FUN_10086dacc();
  lVar2 = 0;
  FUN_100870a98();
  func_0x000107c613fc();
  *(long *)(lVar2 + 0x10) = lVar1;
  return;
}



/* Entry: 10086d734; end: 10086d7c3; -[_TtC32SCLensPlusServicesImplementation22LensPlusCofServiceImpl imagineLensARBarTreatment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10086d734(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + _DAT_112f87bd8);
  func_0x000107c61174();
  uVar4 = 0xf159fd0;
  uVar2 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d);
  func_0x000107c4980c(uVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  lVar3 = (long)(int)uVar5;
  FUN_10086d7f8(lVar3);
  lVar1 = 0;
  if ((uVar4 & 0xff) != 1) {
    lVar1 = lVar3;
  }
  return lVar1;
}



/* Entry: 10086d7c4; end: 10086d7f7;  */

void FUN_10086d7c4(void)

{
  func_0x000107c610f4(PTR_PTR_1126daa28);
  func_0x000107c48d30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10086d7f8; end: 10086d807;  */

undefined1  [16] FUN_10086d7f8(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 7) {
    uVar1 = param_1;
  }
  auVar2[8] = 6 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 10086d808; end: 10086d827;  */

void FUN_10086d808(void)

{
  func_0x000107c61168(&PTR_PTR_112f84078);
  return;
}



/* Entry: 10086d828; end: 10086d877; -[SCNMessagingFeedPaginationUpdate initWithTimestamp:hasMore:] */

void FUN_10086d828(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112706f50;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  return;
}



/* Entry: 10086d878; end: 10086d8f7;  */

void FUN_10086d878(undefined1 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  
  puVar2 = PTR_PTR_1126dac60;
  func_0x000107c610f4(PTR_PTR_1126dac60);
  uVar1 = *param_1;
  puVar3 = param_1 + 8;
  FUN_10086d8f8(puVar3);
  func_0x000107c61180();
  func_0x000107c483c0(puVar2,param_2,uVar1,puVar3,(long)*(int *)(param_1 + 0x68),param_1[0x6c]);
  FUN_10086ddf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10086d8f8; end: 10086da4f;  */

void FUN_10086d8f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  puVar1 = PTR_PTR_1126dac58;
  func_0x000107c610f4(PTR_PTR_1126dac58);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c41998(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,
                      *(undefined8 *)(param_1 + 0x18));
  func_0x000107c61180();
  plVar6 = (long *)(param_1 + 0x10);
  while (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0) {
    lVar4 = (long)(plVar6 + 3);
    FUN_10086dbe4(lVar4);
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)*(int *)(plVar6 + 2));
    func_0x000107c61180();
    func_0x000107c56bcc(puVar2,param_2,lVar4,puVar3);
    func_0x00010086dbec();
    func_0x00010086dbf4();
  }
  func_0x000107c40794(puVar2);
  func_0x00010086dbfc();
  lVar4 = param_1 + 0x28;
  FUN_10060ab28(lVar4);
  func_0x000107c61180();
  lVar5 = param_1 + 0x40;
  FUN_10060ab28(lVar5);
  func_0x000107c61180();
  func_0x000107c477e8(puVar1,param_2,puVar2,lVar4,lVar5,*(undefined1 *)(param_1 + 0x58),
                      *(undefined1 *)(param_1 + 0x59));
  func_0x00010086dd34();
  func_0x00010086dbfc();
  func_0x00010086dbf4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10086da50; end: 10086dacb;  */

void FUN_10086da50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR_PTR_1126ddef8;
  func_0x000107c61158(PTR_PTR_1126ddef8);
  func_0x000107c3ee00(puVar2,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c450d0(puVar3,param_2,&PTR____CFConstantStringClassReference_110f2d058,puVar2,0);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10086dacc; end: 10086dbe3;  */

void FUN_10086dacc(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
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
  
  uVar1 = 0x402c000000000000;
  if (*(char *)(unaff_x20 + 0x10) == '\x01') {
    uVar1 = 0x4010000000000000;
    if (*(char *)(unaff_x20 + 0x11) == '\0') {
      uVar1 = 0;
    }
  }
  FUN_10086da50();
  func_0x000107c61180();
  uStack_158 = 0x4024000000000000;
  uStack_160 = 0x4049000000000000;
  uStack_148 = 0x402c000000000000;
  uStack_150 = 0x4053000000000000;
  uStack_140 = 0;
  uStack_128 = 0x4049000000000000;
  uStack_130 = 0;
  uStack_118 = 0x4039000000000000;
  uStack_120 = 0x4049000000000000;
  uStack_108 = 0x3ff5c28f5c28f5c3;
  uStack_110 = 0x3ff3333333333333;
  uStack_100 = 0x4022000000000001;
  uStack_f8 = 1;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_d8 = 0x4044000000000000;
  uStack_e0 = 0x4044000000000000;
  uStack_c8 = 0x3ff0000000000000;
  uStack_d0 = 0;
  uStack_b8 = 0x4022000000000001;
  uStack_c0 = 0x3ff5c28f5c28f5c3;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_b0 = 1;
  uStack_68 = 2;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0x101;
  uStack_138 = uVar1;
  uStack_48 = param_1;
  func_0x00010086fc38(0);
  func_0x000107c610f8();
  FUN_1008700a0(&uStack_160);
  return;
}



/* Entry: 10086dbe4; end: 10086dc03;  */

void FUN_10086dbe4(undefined8 *param_1,undefined8 param_2)

{
  func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*param_1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10086dc04; end: 10086dd2b; -[SCNMessagingSyncFeedMetadata initWithMetrics:conversationsSyncFailed:conversationsSyncSuccess:paginationWindowIsEmpty:paginateFullFeed:] */

undefined1 *
FUN_10086dc04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_58 = PTR_PTR_112707228;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    FUN_10086dd2c(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_10086dd2c(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    FUN_10086dd2c(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10086dd2c; end: 10086dd3f;  */

void FUN_10086dd2c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10086dd40; end: 10086ddef; -[SCNMessagingSyncFeedUpdateMetadata initWithResetFeed:syncMetadata:analyticsScenario:queryTriggered:] */

undefined1 *
FUN_10086dd40(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_112707238;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
  }
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10086ddf0; end: 10086ddf7;  */

void FUN_10086ddf0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10086ddf8; end: 10086dfc3; -[SCNativeFeedManager _didSyncFeedUpdateFeedEntries:multiRecipientFeedEntries:deletedFeedEntries:multiRecipientFeedEntriesDeleted:updateMetadata:] */

/* WARNING: Possible PIC construction at 0x00010086de9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010086dec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010086deec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010086df0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010086df78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010086df88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010086df98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010086df8c) */
/* WARNING: Removing unreachable block (ram,0x00010086df7c) */
/* WARNING: Removing unreachable block (ram,0x00010086df10) */
/* WARNING: Removing unreachable block (ram,0x00010086def0) */
/* WARNING: Removing unreachable block (ram,0x00010086decc) */
/* WARNING: Removing unreachable block (ram,0x00010086df9c) */

void FUN_10086ddf8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  uVar2 = param_7;
  FUN_10086dfc4(param_7,0);
  iVar1 = (int)uVar2;
  func_0x000107c61180();
  FUN_10060dccc();
  if (iVar1 == 0) {
    func_0x000107c42f60(param_7);
    func_0x000107c61180();
    func_0x000107c5c570();
    func_0x000107c61180();
  }
  else {
    param_7 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c5c734(param_7);
    func_0x000107c61180();
    func_0x000107c40808(param_3);
    func_0x000107c4beec(param_7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 10086dfc4; end: 10086e153;  */

void FUN_10086dfc4(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  func_0x000107c61174();
  if ((param_2 & 1) == 0) {
    lVar1 = param_1;
    func_0x000107c42f60();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5c570();
    func_0x000107c61180();
    if (lVar2 == 0) {
      lVar6 = 9;
    }
    else {
      lVar3 = param_1;
      func_0x000107c42f60(param_1);
      func_0x000107c61180();
      lVar4 = lVar3;
      func_0x000107c5c570();
      func_0x000107c61180();
      lVar6 = lVar4;
      func_0x000107c3dc8c();
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar3);
    }
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    func_0x00010086e164(lVar6);
  }
  lVar1 = param_1;
  func_0x000107c5d59c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c40808();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    FUN_10011df08();
    func_0x000107c61180();
  }
  else {
    lVar2 = param_1;
    func_0x000107c5d59c(param_1);
    func_0x000107c61180();
    lVar6 = lVar2;
    func_0x000107c43638();
    func_0x000107c61180();
    lVar3 = lVar6;
    func_0x000107c5cb4c();
    func_0x000107c61180();
    lVar1 = lVar3;
    func_0x000107c5d798();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar2);
  }
  puVar5 = PTR_PTR_1126ba4d0;
  func_0x000107c610f4(PTR_PTR_1126ba4d0);
  func_0x000107c46d80();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10086e154; end: 10086e15b; -[SCNMessagingFeedUpdateTypeMetadata syncMetadata] */

undefined8 FUN_10086e154(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10086e15c; end: 10086e197; -[SCNMessagingSyncFeedUpdateMetadata analyticsScenario] */

undefined8 FUN_10086e15c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10086e198; end: 10086e1ef;  */

void FUN_10086e198(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_100606f6c();
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  for (puVar2 = *(undefined8 **)(param_1 + 0x18); puVar2 != puVar1; puVar2 = puVar2 + 2) {
    (**(code **)(*(long *)*puVar2 + 0x98))((long *)*puVar2,param_2);
  }
  return;
}



/* Entry: 10086e1f0; end: 10086e223;  */

void FUN_10086e1f0(void)

{
  return;
}



/* Entry: 10086e224; end: 10086e2ef;  */

void FUN_10086e224(long param_1,int param_2,int param_3,uint param_4,ulong param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
  func_0x00010086e218();
  if ((param_2 == iVar1) && ((param_3 != 4 || (*(char *)(param_1 + 0xe0) == '\x01')))) {
    if (((param_5 >> 0x20 & 1) == 0) && ((*(byte *)(param_1 + 0x90) & 1) == 0)) {
      *(undefined1 *)(param_1 + 0x90) = 1;
      FUN_100630a50(param_1);
    }
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    FUN_10054ea0c(uVar2,0x9b);
    if ((int)uVar2 != 0) {
      *(bool *)(param_1 + 0x91) = (~param_4 & 0x101) == 0;
    }
    if (*(char *)(param_1 + 0x90) == '\x01') {
      FUN_10086e2f0(param_1 + 0x88);
    }
  }
  return;
}


