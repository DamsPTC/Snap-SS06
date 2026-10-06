/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10324b4c8; end: 10324b543;  */

uint FUN_10324b4c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [64];
  
  uVar1 = 0;
  uVar2 = *param_1;
  func_0x000107c614bc(auStack_70,param_2,uVar2);
  func_0x000107c614bc(auStack_b0,param_3,uVar2);
  FUN_10324b564(auStack_b0);
  FUN_10324b7e0(auStack_b0);
  FUN_10324b7e0(auStack_70);
  return uVar1 & 1;
}



/* Entry: 10324b544; end: 10324b563;  */

uint FUN_10324b544(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10324b4c8(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return (uint)param_1 & 1;
}



/* Entry: 10324b564; end: 10324b637;  */

uint FUN_10324b564(undefined8 param_1)

{
  uint uVar1;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_ff;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_bf;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_7f;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_3f;
  
  uVar1 = 0;
  func_0x00010324b828();
  func_0x00010324b828(param_1,&uStack_70);
  if (lStack_98 == 0) {
    if (lStack_58 == 0) {
      uVar1 = 1;
      goto LAB_10324b620;
    }
    func_0x00010324b7e0(&uStack_70);
  }
  else {
    if (lStack_58 != 0) {
      uStack_e8 = uStack_a8;
      uStack_f0 = uStack_b0;
      lStack_d8 = lStack_98;
      uStack_e0 = uStack_a0;
      uStack_d0 = uStack_90;
      uStack_bf = uStack_7f;
      uStack_128 = uStack_68;
      uStack_130 = uStack_70;
      lStack_118 = lStack_58;
      uStack_120 = uStack_60;
      uStack_110 = uStack_50;
      uStack_ff = uStack_3f;
      FUN_10324e5f4(&uStack_130);
      FUN_10322b438(&uStack_130);
      FUN_10322b438(&uStack_f0);
      goto LAB_10324b620;
    }
    FUN_10322b438(&uStack_b0);
  }
  uVar1 = 0;
LAB_10324b620:
  return uVar1 & 1;
}



/* Entry: 10324b638; end: 10324b63b;  */

void FUN_10324b638(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4ebe8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba17e8;
  func_0x000107c61520(&UNK_10dba17e8,&UNK_11062b5a0);
  puRam0000000112f4ebe8 = puVar1;
  return;
}



/* Entry: 10324b63c; end: 10324b67b;  */

void FUN_10324b63c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4ebe8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba17e8;
  func_0x000107c61520(&UNK_10dba17e8,&UNK_11062b5a0);
  puRam0000000112f4ebe8 = puVar1;
  return;
}



/* Entry: 10324b67c; end: 10324b7df;  */

int FUN_10324b67c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10324b6f8;
        goto LAB_10324b6dc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10324b6dc:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10324b6f8:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10324b7e0; end: 10324b877;  */

undefined8 FUN_10324b7e0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f4da60;
  func_0x0001000285a8(0x112f4da60,&UNK_10db9feb0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10324b878; end: 10324c6df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_10324b878(undefined8 param_1,double param_2,double param_3,double param_4,long param_5,
             undefined8 param_6,ulong param_7,long param_8)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  ulong *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  code *pcVar19;
  ulong uVar20;
  undefined **ppuVar21;
  ulong uVar22;
  undefined2 uVar23;
  ushort uVar24;
  undefined2 uVar25;
  undefined2 uVar26;
  undefined2 uVar27;
  undefined1 auVar28 [16];
  undefined *puStack_830;
  ulong uStack_828;
  long lStack_820;
  code *pcStack_818;
  long lStack_810;
  long lStack_808;
  ulong uStack_800;
  undefined8 uStack_7f8;
  undefined1 auStack_7e8 [24];
  undefined8 uStack_7d0;
  ulong uStack_7c8;
  undefined1 auStack_7c0 [24];
  undefined1 auStack_7a8 [208];
  ulong uStack_6d8;
  undefined1 auStack_6d0 [208];
  ulong uStack_600;
  undefined1 auStack_5f8 [208];
  ulong uStack_528;
  undefined1 auStack_520 [24];
  ulong uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  double dStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  double dStack_4a8;
  undefined8 uStack_4a0;
  double dStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_467;
  undefined1 auStack_448 [24];
  undefined8 uStack_430;
  ulong uStack_428;
  undefined *puStack_378;
  undefined1 auStack_370 [24];
  undefined8 uStack_358;
  ulong uStack_350;
  ulong uStack_2a0;
  undefined *puStack_298;
  ulong uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  double dStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  double dStack_230;
  undefined8 uStack_228;
  double dStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1ef;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  double dStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  double dStack_180;
  undefined8 uStack_178;
  double dStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_13f;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  double dStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_8f;
  
  uVar27 = (undefined2)((ulong)param_1 >> 0x30);
  uVar26 = (undefined2)((ulong)param_1 >> 0x20);
  uVar25 = (undefined2)((ulong)param_1 >> 0x10);
  uVar23 = (undefined2)param_1;
  uVar7 = *(undefined8 *)(param_5 + 0x18);
  lVar5 = *(long *)(param_5 + 0x20);
  lStack_808 = param_8;
  uStack_800 = param_7;
  uStack_7f8 = param_6;
  func_0x0001000a8868(param_5,uVar7);
  lVar4 = 0;
  func_0x000107c614b8(0,lVar5,uVar7,&UNK_10e804840,&UNK_10e804858);
  lVar18 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar22 = (long)&puStack_830 - extraout_x8;
  (**(code **)(lVar5 + 0x28))(uVar22,uVar7,lVar5);
  func_0x000107c614b4(lVar5,uVar7,lVar4,&UNK_10e804840,&UNK_10e804850);
  lVar6 = lVar5;
  func_0x00010322b060();
  uVar16 = uVar22;
  FUN_10322b46c(uVar22,lVar4,&UNK_11076af50,lVar5,lVar6);
  lStack_810 = param_5;
  if ((uVar16 & 1) == 0) {
    (**(code **)(lVar18 + 8))(uVar22,lVar4);
LAB_10324ba3c:
    uVar7 = *(undefined8 *)(param_5 + 0x18);
    lVar5 = *(long *)(param_5 + 0x20);
    func_0x0001000a8868(param_5,uVar7);
    lVar4 = 0;
    func_0x000107c614b8(0,lVar5,uVar7,&UNK_10e804840,&UNK_10e804858);
    lVar18 = *(long *)(lVar4 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
    uVar20 = uVar22 - extraout_x8_00;
    (**(code **)(lVar5 + 0x28))(uVar20,uVar7,lVar5);
    func_0x000107c614b4(lVar5,uVar7,lVar4,&UNK_10e804840,&UNK_10e804850);
    lVar6 = lVar5;
    func_0x00010322b260();
    uVar16 = uVar20;
    FUN_10322b46c(uVar20,lVar4,&UNK_11076b850,lVar5,lVar6);
    if ((uVar16 & 1) == 0) {
      (**(code **)(lVar18 + 8))(uVar20,lVar4);
    }
    else {
      uVar7 = *(undefined8 *)(param_5 + 0x18);
      lVar5 = *(long *)(param_5 + 0x20);
      func_0x0001000a8868(param_5,uVar7);
      (**(code **)(lVar5 + 0x30))(auStack_5f8,uVar7,lVar5);
      FUN_103202330(uStack_528);
      func_0x00010322ed34(auStack_5f8);
      uVar16 = uStack_528;
      func_0x0001044109f4(uStack_528,3);
      func_0x00010321d6b8(uStack_528);
      (**(code **)(lVar18 + 8))(uVar20,lVar4);
      if ((uVar16 & 1) != 0) goto LAB_10324bb68;
    }
    uVar7 = *(undefined8 *)(param_5 + 0x18);
    lVar5 = *(long *)(param_5 + 0x20);
    func_0x0001000a8868(param_5,uVar7);
    lVar4 = 0;
    func_0x000107c614b8(0,lVar5,uVar7,&UNK_10e804840,&UNK_10e804858);
    lVar18 = *(long *)(lVar4 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
    uVar20 = uVar22 - extraout_x8_01;
    (**(code **)(lVar5 + 0x28))(uVar20,uVar7,lVar5);
    func_0x000107c614b4(lVar5,uVar7,lVar4,&UNK_10e804840,&UNK_10e804850);
    lVar6 = lVar5;
    func_0x00010322b1a0();
    uVar16 = uVar20;
    FUN_10322b46c(uVar20,lVar4,&UNK_11076afd0,lVar5,lVar6);
    (**(code **)(lVar18 + 8))(uVar20,lVar4);
    uVar7 = *(undefined8 *)(param_5 + 0x18);
    lVar5 = *(long *)(param_5 + 0x20);
    func_0x0001000a8868(param_5,uVar7);
    if ((uVar16 & 1) == 0) {
      puVar9 = (undefined1 *)0x0;
      func_0x000107c614b8(0,lVar5,uVar7,&UNK_10e804840,&UNK_10e804858);
      lVar4 = *(long *)(puVar9 + -8);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0)
      ;
      uVar22 = uVar22 - extraout_x8_02;
      (**(code **)(lVar5 + 0x28))(uVar22,uVar7,lVar5);
      func_0x000107c614b4(lVar5,uVar7,puVar9,&UNK_10e804840,&UNK_10e804850);
      lVar6 = lVar5;
      FUN_1032013d4();
      uVar16 = uVar22;
      FUN_10322b46c(uVar22,puVar9,&UNK_11076bad0,lVar5,lVar6);
      (**(code **)(lVar4 + 8))(uVar22);
      if ((uVar16 & 1) != 0) {
        uVar7 = *(undefined8 *)(param_5 + 0x18);
        lVar5 = *(long *)(param_5 + 0x20);
        func_0x0001000a8868(param_5,uVar7);
        (**(code **)(lVar5 + 0x30))(auStack_520,uVar7,lVar5);
        uStack_218 = uStack_490;
        dStack_220 = dStack_498;
        uStack_208 = uStack_480;
        uStack_210 = uStack_488;
        uStack_200 = uStack_478;
        uStack_1ef = uStack_467;
        uStack_248 = uStack_4c0;
        uStack_250 = uStack_4c8;
        uStack_238 = uStack_4b0;
        uStack_240 = uStack_4b8;
        uStack_228 = uStack_4a0;
        dStack_230 = dStack_4a8;
        uStack_288 = uStack_500;
        uStack_290 = uStack_508;
        uStack_278 = uStack_4f0;
        uStack_280 = uStack_4f8;
        uStack_268 = uStack_4e0;
        dStack_270 = dStack_4e8;
        uStack_258 = uStack_4d0;
        uStack_260 = uStack_4d8;
        puVar9 = auStack_370;
        FUN_10324e138(&uStack_290,puVar9,0x112f4d5c8,&UNK_10db9f700);
        func_0x00010322ed34(auStack_520);
        uStack_168 = uStack_218;
        dStack_170 = dStack_220;
        uStack_158 = uStack_208;
        uStack_160 = uStack_210;
        uStack_150 = uStack_200;
        uStack_13f = uStack_1ef;
        uStack_198 = uStack_248;
        uStack_1a0 = uStack_250;
        uStack_188 = uStack_238;
        uStack_190 = uStack_240;
        uStack_178 = uStack_228;
        dStack_180 = dStack_230;
        uStack_1d8 = uStack_288;
        uStack_1e0 = uStack_290;
        uStack_1c8 = uStack_278;
        uStack_1d0 = uStack_280;
        uStack_1b8 = uStack_268;
        dStack_1c0 = dStack_270;
        uStack_1a8 = uStack_258;
        uStack_1b0 = uStack_260;
        iVar3 = (int)&uStack_1e0;
        FUN_103233944();
        if (iVar3 != 1) {
          uStack_b8 = uStack_168;
          dStack_c0 = dStack_170;
          uStack_a8 = uStack_158;
          uStack_b0 = uStack_160;
          uStack_a0 = uStack_150;
          uStack_8f = uStack_13f;
          uStack_e8 = uStack_198;
          uStack_f0 = uStack_1a0;
          uStack_d8 = uStack_188;
          uStack_e0 = uStack_190;
          uStack_c8 = uStack_178;
          dStack_d0 = dStack_180;
          uStack_128 = uStack_1d8;
          uStack_130 = uStack_1e0;
          uStack_118 = uStack_1c8;
          uStack_120 = uStack_1d0;
          uVar23 = (undefined2)uStack_1b0;
          uVar25 = (undefined2)((ulong)uStack_1b0 >> 0x10);
          uVar26 = (undefined2)((ulong)uStack_1b0 >> 0x20);
          uVar27 = (undefined2)((ulong)uStack_1b0 >> 0x30);
          uStack_108 = uStack_1b8;
          dStack_110 = dStack_1c0;
          uStack_f8 = uStack_1a8;
          uStack_100 = uStack_1b0;
          iVar3 = (int)&uStack_130;
          param_2 = dStack_1c0;
          param_3 = dStack_170;
          param_4 = dStack_180;
          FUN_103238538();
          puVar10 = &uStack_130;
          func_0x000100d3e680();
          if (iVar3 == 2) {
            uVar16 = *puVar10;
            puVar9 = (undefined1 *)0x0;
            FUN_1032584ac();
            func_0x000107c610f8();
            func_0x000107c453e4();
            if (uVar16 >> 0x3e == 0) {
              uStack_828 = *(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10);
            }
            else {
              uVar22 = uVar16 & 0xffffffffffffff8;
              if (0x7fffffffffffffff < uVar16) {
                uVar22 = uVar16;
              }
              func_0x000107c60480();
              uStack_828 = uVar22;
            }
            uVar16 = uStack_800;
            func_0x00010324e180(&uStack_290,0x112f4d5c8,&UNK_10db9f700);
            uVar7 = *(undefined8 *)(param_5 + 0x18);
            lVar5 = *(long *)(param_5 + 0x20);
            func_0x0001000a8868(param_5,uVar7);
            (**(code **)(lVar5 + 0x30))(auStack_448,uVar7,lVar5);
            puStack_298 = puStack_378;
            FUN_1032436a4(&puStack_298,auStack_370);
            func_0x00010322ed34(auStack_448);
            puVar11 = puStack_298;
            if (puStack_298 < (undefined *)0xb) {
              FUN_10322b8e8(&puStack_298);
              puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
            }
            uVar13 = uStack_7f8;
            uVar22 = uStack_828;
            if ((long)uStack_828 < 0) {
                    /* WARNING: Does not return */
              pcVar19 = (code *)SoftwareBreakpoint(1,0x10324c6e0);
              (*pcVar19)();
            }
            if (uStack_828 == 0) {
              func_0x000107c6142c();
              ppuVar21 = &PTR_DAT_11062c160;
            }
            else {
              uStack_800 = *(ulong *)(puVar11 + 0x10);
              pcStack_818 = *(code **)(uVar16 + 0x38);
              lStack_820 = _DAT_112f4eec0;
              puStack_830 = puVar11;
              func_0x000107c61428(puVar9 + _DAT_112f4eec0,auStack_7c0,0,0);
              uVar20 = 0;
              do {
                if (uVar20 < uStack_800) {
                  if (*(ulong *)(puStack_830 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
                    pcVar19 = (code *)SoftwareBreakpoint(1,0x10324c6c4);
                    (*pcVar19)();
                  }
                  uVar17 = *(ulong *)(puStack_830 + uVar20 * 8 + 0x20);
                  FUN_103202330(uVar17);
                }
                else {
                  uVar7 = *(undefined8 *)(param_5 + 0x18);
                  lVar5 = *(long *)(param_5 + 0x20);
                  func_0x0001000a8868(param_5,uVar7);
                  uVar22 = uStack_828;
                  (**(code **)(lVar5 + 0x30))(auStack_370,uVar7,lVar5);
                  uVar17 = uStack_2a0;
                  FUN_103202330(uStack_2a0);
                  func_0x00010322ed34(auStack_370);
                }
                uVar20 = uVar20 + 1;
                uVar12 = uVar17;
                FUN_10324e47c(uVar17);
                func_0x00010321d6b8(uVar17);
                uVar7 = uStack_7f8;
                uVar8 = 0;
                func_0x000107c614b8(0,uVar16,uStack_7f8,&UNK_10e75223c,&UNK_10e75226c);
                uVar17 = uVar16;
                uStack_7d0 = uVar8;
                func_0x000107c614b4(uVar16,uVar7,uVar8,&UNK_10e75223c,&UNK_10e75224c);
                puVar14 = auStack_7e8;
                uStack_7c8 = uVar17;
                func_0x0001000c5db4(puVar14);
                (*pcStack_818)(puVar14,uVar7,uVar16);
                func_0x000103254b00(0);
                func_0x000107c610f8();
                param_2 = 0.0;
                param_3 = 0.0;
                param_4 = 0.0;
                uVar7 = 3;
                FUN_1032516ac(0,3,uVar12,0,auStack_7e8,0,0);
                func_0x000107c5a050();
                uVar23 = 0;
                FUN_103253cf0(0,1);
                uVar25 = 0x437a;
                uVar26 = 0;
                uVar27 = 0;
                func_0x000103253e20(1);
                func_0x000107c3d5b4(*(undefined8 *)(puVar9 + lStack_820));
                func_0x000107c61170(uVar7);
              } while (uVar22 != uVar20);
              func_0x000107c6142c(puStack_830);
              ppuVar21 = &PTR_DAT_11062c160;
              uVar13 = uStack_7f8;
            }
            goto LAB_10324c464;
          }
          puVar9 = (undefined1 *)0x112f4d5c8;
          func_0x00010324e180(&uStack_290,0x112f4d5c8,&UNK_10db9f700);
        }
      }
      FUN_10324e4e0();
      if (puVar9 == (undefined1 *)0x0) {
        uVar7 = *(undefined8 *)(param_5 + 0x30);
        FUN_10324e47c(uVar7);
      }
      else {
        func_0x000107c6142c(puVar9);
        uVar7 = 4;
      }
      uVar16 = uStack_800;
      puVar9 = *(undefined1 **)(param_5 + 0x18);
      uVar8 = *(undefined8 *)(param_5 + 0x20);
      lVar5 = param_5;
      func_0x0001000a8868(param_5,puVar9);
      FUN_10324e314(puVar9,uVar8,lVar5);
      uVar8 = uStack_7f8;
      uVar2 = *(undefined1 *)(param_5 + 0x29);
      pcVar19 = *(code **)(uVar16 + 0x38);
      uVar13 = 0;
      func_0x000107c614b8(0,uVar16,uStack_7f8,&UNK_10e75223c,&UNK_10e75226c);
      uVar22 = uVar16;
      uStack_358 = uVar13;
      func_0x000107c614b4(uVar16,uVar8,uVar13,&UNK_10e75223c,&UNK_10e75224c);
      puVar14 = auStack_370;
      uStack_350 = uVar22;
      func_0x0001000c5db4(puVar14);
      (*pcVar19)(puVar14,uVar8,uVar16);
      func_0x000103254b00(0);
      func_0x000107c610f8();
      uVar23 = 0;
      uVar25 = 0;
      uVar26 = 0;
      uVar27 = 0;
      param_2 = 0.0;
      param_3 = 0.0;
      param_4 = 0.0;
      FUN_1032516ac(puVar9,uVar7,uVar2,auStack_370,0,0);
      uVar22 = *(ulong *)(param_5 + 0x30);
      func_0x0001044109f4(uVar22,3);
      if ((uVar22 & 1) != 0) {
        func_0x000107c59c74(*(undefined8 *)(puVar9 + _DAT_112f4ecc0));
      }
      ppuVar21 = &PTR_DAT_11062bac0;
      uVar13 = uStack_7f8;
    }
    else {
      (**(code **)(lVar5 + 0x30))(auStack_370,uVar7,lVar5);
      FUN_103202330(uStack_2a0);
      func_0x00010322ed34(auStack_370);
      uVar22 = uStack_2a0;
      func_0x0001044109f4(uStack_2a0,1);
      func_0x00010321d6b8(uStack_2a0);
      puVar9 = *(undefined1 **)(param_5 + 0x18);
      uVar7 = *(undefined8 *)(param_5 + 0x20);
      lVar5 = param_5;
      func_0x0001000a8868(param_5,puVar9);
      FUN_10324e314(puVar9,uVar7,lVar5);
      uVar13 = uStack_7f8;
      uVar16 = uStack_800;
      uVar2 = *(undefined1 *)(param_5 + 0x29);
      uVar7 = 0;
      func_0x000107c614b8(0,uStack_800,uStack_7f8,&UNK_10e75223c,&UNK_10e75226c);
      uVar20 = uVar16;
      func_0x000107c614b4(uVar16,uVar13,uVar7,&UNK_10e75223c,&UNK_10e75224c);
      bVar1 = (uVar22 & 1) == 0;
      uStack_430 = uVar7;
      uStack_428 = uVar20;
      if (bVar1) {
        pcVar19 = *(code **)(uVar16 + 0x38);
        puVar14 = auStack_448;
        func_0x0001000c5db4(puVar14);
        (*pcVar19)(puVar14,uVar13,uVar16);
        func_0x000103254b00(0);
        func_0x000107c610f8();
      }
      else {
        pcVar19 = *(code **)(uVar16 + 0x38);
        puVar14 = auStack_448;
        func_0x0001000c5db4(puVar14);
        (*pcVar19)(puVar14,uVar13,uVar16);
        func_0x000103254b00(0);
        func_0x000107c610f8();
      }
      param_4 = 0.0;
      param_3 = 0.0;
      param_2 = 0.0;
      uVar27 = 0;
      uVar26 = 0;
      uVar25 = 0;
      uVar23 = 0;
      FUN_1032516ac(puVar9,!bVar1,uVar2,auStack_448,0,0);
      ppuVar21 = &PTR_DAT_11062bac0;
    }
  }
  else {
    uVar7 = *(undefined8 *)(param_5 + 0x18);
    lVar5 = *(long *)(param_5 + 0x20);
    func_0x0001000a8868(param_5,uVar7);
    (**(code **)(lVar5 + 0x30))(auStack_7a8,uVar7,lVar5);
    FUN_103202330(uStack_6d8);
    func_0x00010322ed34(auStack_7a8);
    uVar16 = uStack_6d8;
    func_0x0001044109f4(uStack_6d8,1);
    func_0x00010321d6b8(uStack_6d8);
    (**(code **)(lVar18 + 8))(uVar22,lVar4);
    if ((uVar16 & 1) != 0) goto LAB_10324ba3c;
    uVar7 = *(undefined8 *)(param_5 + 0x18);
    lVar5 = *(long *)(param_5 + 0x20);
    func_0x0001000a8868(param_5,uVar7);
    (**(code **)(lVar5 + 0x30))(auStack_6d0,uVar7,lVar5);
    FUN_103202330(uStack_600);
    func_0x00010322ed34(auStack_6d0);
    uVar16 = uStack_600;
    func_0x0001044109f4(uStack_600,0);
    func_0x00010321d6b8(uStack_600);
    if ((uVar16 & 1) != 0) goto LAB_10324ba3c;
LAB_10324bb68:
    uVar13 = uStack_7f8;
    uVar16 = uStack_800;
    pcVar19 = *(code **)(uStack_800 + 0x38);
    uVar7 = 0;
    func_0x000107c614b8(0,uStack_800,uStack_7f8,&UNK_10e75223c,&UNK_10e75226c);
    uVar22 = uVar16;
    uStack_358 = uVar7;
    func_0x000107c614b4(uVar16,uVar13,uVar7,&UNK_10e75223c,&UNK_10e75224c);
    puVar9 = auStack_370;
    uStack_350 = uVar22;
    func_0x0001000c5db4(puVar9);
    (*pcVar19)(puVar9,uVar13,uVar16);
    uVar7 = *(undefined8 *)(param_5 + 0x18);
    uVar8 = *(undefined8 *)(param_5 + 0x20);
    func_0x0001000a8868(param_5,uVar7);
    FUN_10324e314(uVar7,uVar8,param_5);
    uVar8 = 0;
    FUN_103256bf4(0);
    func_0x000107c610f8();
    puVar9 = auStack_370;
    FUN_1032559a8(puVar9,uVar7,uVar8);
    ppuVar21 = &PTR_DAT_11062bf78;
  }
LAB_10324c464:
  lVar5 = lStack_808;
  pcVar19 = *(code **)(lStack_808 + 8);
  (*pcVar19)(uVar13,lStack_808);
  uVar24 = NEON_uminv(CONCAT26(-(ushort)(param_4 ==
                                        *(double *)
                                         (PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 0x18)),
                               CONCAT24(-(ushort)(param_3 ==
                                                 *(double *)
                                                  (PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 0x10
                                                  )),
                                        CONCAT22(-(ushort)(param_2 ==
                                                          *(double *)
                                                           (
                                                  PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 8)),
                                                 -(ushort)((double)CONCAT26(uVar27,CONCAT24(uVar26,
                                                  CONCAT22(uVar25,uVar23))) ==
                                                  *(double *)
                                                   PTR__NSDirectionalEdgeInsetsZero_1103457d8)))),2)
  ;
  if ((uVar24 & 1) == 0) {
    puVar14 = puVar9;
    func_0x000107c614f0(puVar9);
    (*pcVar19)(uVar13,lVar5);
    (**(code **)(ppuVar21[1] + 0x10))(puVar14);
  }
  uVar7 = uVar13;
  uVar22 = uVar16;
  (**(code **)(uVar16 + 0x40))(uVar13);
  if (((uint)uVar22 & 0xff) != 1) {
    func_0x000107c614f0(puVar9);
    (*(code *)ppuVar21[7])((short)uVar7);
  }
  (**(code **)(uVar16 + 0xb8))(puVar9,ppuVar21,lStack_810,uVar13,uVar16);
  func_0x000107c5a050(puVar9);
  pcVar19 = *(code **)(uVar16 + 0x50);
  uVar7 = uVar13;
  (*pcVar19)(uVar13,uVar16);
  func_0x000107c3d89c();
  func_0x000107c61170(uVar7);
  puVar14 = puVar9;
  func_0x000107c5cbe4(puVar9);
  func_0x000107c61180();
  uVar7 = uVar13;
  (*pcVar19)(uVar13,uVar16);
  uVar8 = uVar7;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  puVar15 = puVar14;
  func_0x000107c40280(puVar14);
  func_0x000107c61180();
  func_0x000107c61170(puVar14);
  func_0x000107c61170(uVar8);
  func_0x000107c521e8(puVar15);
  func_0x000107c61170(puVar15);
  puVar14 = puVar9;
  func_0x000107c3ec1c(puVar9);
  func_0x000107c61180();
  (*pcVar19)(uVar13,uVar16);
  uVar7 = uVar13;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  puVar15 = puVar14;
  func_0x000107c40280(puVar14);
  func_0x000107c61180();
  func_0x000107c61170(puVar14);
  func_0x000107c61170(uVar7);
  func_0x000107c521e8(puVar15);
  func_0x000107c61170(puVar15);
  auVar28._8_8_ = ppuVar21;
  auVar28._0_8_ = puVar9;
  return auVar28;
}



/* Entry: 10324c6e0; end: 10324d55f;  */

/* WARNING: Possible PIC construction at 0x00010324c894: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010324c8fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010324cb18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010324ccb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010324ce84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010324ce08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010324ce6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010324ce0c) */
/* WARNING: Removing unreachable block (ram,0x00010324ce88) */
/* WARNING: Removing unreachable block (ram,0x00010324ccb8) */
/* WARNING: Removing unreachable block (ram,0x00010324cb1c) */
/* WARNING: Removing unreachable block (ram,0x00010324c900) */
/* WARNING: Removing unreachable block (ram,0x00010324c9d0) */
/* WARNING: Removing unreachable block (ram,0x00010324c9a0) */
/* WARNING: Removing unreachable block (ram,0x00010324c9d4) */
/* WARNING: Removing unreachable block (ram,0x00010324cb24) */
/* WARNING: Removing unreachable block (ram,0x00010324cc28) */
/* WARNING: Removing unreachable block (ram,0x00010324ce8c) */
/* WARNING: Removing unreachable block (ram,0x00010324ce90) */
/* WARNING: Removing unreachable block (ram,0x00010324cb3c) */
/* WARNING: Removing unreachable block (ram,0x00010324cc30) */
/* WARNING: Removing unreachable block (ram,0x00010324cc04) */
/* WARNING: Removing unreachable block (ram,0x00010324cc34) */
/* WARNING: Removing unreachable block (ram,0x00010324ccdc) */
/* WARNING: Removing unreachable block (ram,0x00010324ce1c) */
/* WARNING: Removing unreachable block (ram,0x00010324ce24) */
/* WARNING: Removing unreachable block (ram,0x00010324ccec) */
/* WARNING: Removing unreachable block (ram,0x00010324cda8) */
/* WARNING: Removing unreachable block (ram,0x00010324cd98) */
/* WARNING: Removing unreachable block (ram,0x00010324cdf8) */
/* WARNING: Removing unreachable block (ram,0x00010324cc4c) */
/* WARNING: Removing unreachable block (ram,0x00010324ce80) */
/* WARNING: Removing unreachable block (ram,0x00010324cca8) */
/* WARNING: Removing unreachable block (ram,0x00010324ca98) */
/* WARNING: Removing unreachable block (ram,0x00010324c898) */
/* WARNING: Removing unreachable block (ram,0x00010324ce70) */
/* WARNING: Removing unreachable block (ram,0x00010324ce84) */

void FUN_10324c6e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  undefined1 auStack_4c0 [8];
  undefined8 uStack_4b8;
  long lStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined1 auStack_480 [24];
  undefined8 uStack_468;
  long lStack_460;
  
  uVar1 = 0;
  FUN_1032584ac(0);
  lVar2 = param_1;
  func_0x000107c61480(param_1,uVar1);
  if (lVar2 == 0) {
    uStack_4b8 = param_6;
    uStack_4a8 = param_2;
    uStack_4a0 = param_5;
    uStack_498 = param_4;
    FUN_1031ddb84(param_3,auStack_480);
    lVar2 = param_1;
    func_0x000107c614f0();
    lStack_4b0 = lVar2;
    func_0x0001000a8868(auStack_480,uStack_468);
    lVar3 = 0;
    func_0x000107c614b8(0,lStack_460,uStack_468,&UNK_10e804840,&UNK_10e804858);
    lVar5 = *(long *)(lVar3 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lStack_460 + 0x28))(auStack_4c0 + -extraout_x8,uStack_468,lStack_460);
    func_0x000107c614b4(lStack_460,uStack_468,lVar3,&UNK_10e804840,&UNK_10e804850);
    lVar2 = lVar3;
    lVar4 = lStack_460;
    (**(code **)(lStack_460 + 0x18))(lVar3,lStack_460);
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar4);
    (**(code **)(lVar5 + 8))(auStack_4c0 + -extraout_x8,lVar3);
    func_0x000107c520f4(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x00010324ceb8(lVar2,param_3,param_4,param_5,param_6);
    lVar2 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10324d560; end: 10324d63b;  */

void FUN_10324d560(undefined8 param_1,ulong param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_68 [24];
  
  if (param_2 != 0) {
    func_0x000107c61174();
    uVar3 = param_2;
    FUN_103261384();
    func_0x000107c61170(param_2);
    if ((uVar3 & 1) == 0) {
      return;
    }
  }
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  func_0x0001000a8868(param_3,uVar1);
  func_0x000107c61428(param_4 + 0x10,auStack_68,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    (**(code **)(param_6 + 0xd0))(param_3,0,1,param_1,uVar1,uVar2,param_5,param_6);
    func_0x000107c61170(param_4);
  }
  return;
}



/* Entry: 10324d63c; end: 10324d70f;  */

void FUN_10324d63c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  code *pcVar1;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_8f;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_4f;
  
  if (param_1 != 0) {
    FUN_10324e138(param_3,&uStack_c0,0x112f4da60,&UNK_10db9feb0);
    if (lStack_a8 == 0) {
      func_0x00010324e180(&uStack_c0,0x112f4da60,&UNK_10db9feb0);
    }
    else {
      uStack_78 = uStack_b8;
      uStack_80 = uStack_c0;
      lStack_68 = lStack_a8;
      uStack_70 = uStack_b0;
      uStack_60 = uStack_a0;
      uStack_4f = uStack_8f;
      pcVar1 = *(code **)(param_5 + 0xb8);
      func_0x000107c61174(param_1);
      (*pcVar1)();
      func_0x000107c61170(param_1);
      FUN_10322b438(&uStack_80);
    }
  }
  return;
}



/* Entry: 10324d710; end: 10324d7c7;  */

void FUN_10324d710(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [24];
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar1);
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    (**(code **)(param_6 + 0xd0))(param_2,param_4,0,param_1,uVar1,uVar2,param_5,param_6);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 10324d7c8; end: 10324dcc7;  */

void FUN_10324d7c8(undefined8 param_1,long param_2,ulong param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long extraout_x8;
  long lVar7;
  ulong uVar8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x13;
  undefined8 unaff_x20;
  code *pcVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar2 = 0xff;
  func_0x000107c614b8(0xff,param_4,param_3,&UNK_10e75223c,&UNK_10e752264);
  uVar3 = 0;
  func_0x000107c60188(0,lVar2);
  puStack_c0 = *(undefined **)(uVar3 - 8);
  uStack_b8 = uVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(puStack_c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)&lStack_d0 - extraout_x8;
  lVar12 = *(long *)(*(long *)(lVar2 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar11 - (lVar12 + 0xfU & 0xfffffffffffffff0);
  lStack_d0 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar7 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar3 = lVar7 - extraout_x12_00;
  lStack_c8 = param_2;
  uStack_b0 = param_1;
  (**(code **)(param_4 + 0x88))(uVar3,param_1,param_2,param_3,param_4);
  (**(code **)(param_4 + 0x70))(lVar11,param_3,param_4);
  lVar4 = lVar11;
  (**(code **)(extraout_x13 + 0x30))(lVar11,1,lVar2);
  if ((int)lVar4 == 1) {
    (**(code **)(puStack_c0 + 8))(lVar11,uStack_b8);
  }
  else {
    pcVar9 = *(code **)(extraout_x13 + 0x20);
    (*pcVar9)(lVar7,lVar11,lVar2);
    lVar4 = param_4;
    func_0x000107c614b4(param_4,param_3,lVar2,&UNK_10e75223c,&UNK_10e752254);
    uVar8 = uVar3;
    (**(code **)(*(long *)(lVar4 + 8) + 8))(uVar3,lVar2);
    if ((uVar8 & 1) != 0) {
      uVar13 = 0x3ff3333333333333;
      if (*(char *)(lStack_c8 + 0x10) != '\x01') {
        uVar13 = *(undefined8 *)(lStack_c8 + 8);
      }
      lVar4 = lVar7;
      FUN_10324de58(lVar7,uVar3,*(byte *)(lStack_c8 + 0x28) & 1,param_3,param_4);
      uVar1 = (uint)lVar4 & 0xff;
      if (uVar1 == 1) {
        puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
        func_0x000107c61168();
        lVar4 = lStack_d0;
        puStack_c0 = puVar5;
        (**(code **)(extraout_x13 + 0x10))(lStack_d0,uVar3,lVar2);
        uVar8 = (ulong)*(byte *)(extraout_x13 + 0x50);
        uVar10 = uVar8 + 0x28 & (uVar8 ^ 0xffffffffffffffff);
        puVar5 = &UNK_11062b678;
        uStack_b8 = uVar3;
        func_0x000107c613fc(&UNK_11062b678,uVar10 + lVar12,uVar8 | 7);
        uVar3 = uStack_b8;
        *(ulong *)(puVar5 + 0x10) = param_3;
        *(long *)(puVar5 + 0x18) = param_4;
        *(undefined8 *)(puVar5 + 0x20) = unaff_x20;
        (*pcVar9)(puVar5 + uVar10,lVar4,lVar2);
        pcStack_80 = FUN_10324e1c0;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        puStack_90 = &UNK_1000f6b44;
        puStack_88 = &UNK_11062b690;
        ppuVar6 = &puStack_a0;
        puStack_78 = puVar5;
        func_0x000107c60bc4(ppuVar6);
        puVar5 = puStack_78;
        func_0x000107c61174(unaff_x20);
        func_0x000107c61574(puVar5);
        func_0x000107c5cf68(uVar13,puStack_c0);
LAB_10324dc4c:
        func_0x000107c60bd0(ppuVar6);
      }
      else {
        if (uVar1 != 2) {
          puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
          func_0x000107c61168();
          lVar4 = lStack_d0;
          puStack_c0 = puVar5;
          uStack_b8 = param_3;
          (**(code **)(extraout_x13 + 0x10))(lStack_d0,uVar3,lVar2);
          uVar8 = (ulong)*(byte *)(extraout_x13 + 0x50);
          uVar10 = uVar8 + 0x28 & (uVar8 ^ 0xffffffffffffffff);
          puVar5 = &UNK_11062b6c8;
          func_0x000107c613fc(&UNK_11062b6c8,uVar10 + lVar12,uVar8 | 7);
          *(ulong *)(puVar5 + 0x10) = uStack_b8;
          *(long *)(puVar5 + 0x18) = param_4;
          *(undefined8 *)(puVar5 + 0x20) = unaff_x20;
          (*pcVar9)(puVar5 + uVar10,lVar4,lVar2);
          pcStack_80 = (code *)0x10324e310;
          puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_98 = 0x42000000;
          puStack_90 = &UNK_1000f6b44;
          puStack_88 = &UNK_11062b6e0;
          ppuVar6 = &puStack_a0;
          puStack_78 = puVar5;
          func_0x000107c60bc4(ppuVar6);
          puVar5 = puStack_78;
          func_0x000107c61174(unaff_x20);
          func_0x000107c61574(puVar5);
          param_3 = uStack_b8;
          func_0x000107c3dcd4(uVar13,0,puStack_c0);
          goto LAB_10324dc4c;
        }
        (**(code **)(param_4 + 0x98))(uVar3,param_3,param_4);
      }
      uVar13 = uStack_b0;
      (**(code **)(param_4 + 0xa0))(lVar7,uVar3,param_3,param_4);
      pcVar9 = *(code **)(extraout_x13 + 8);
      (*pcVar9)(lVar7,lVar2);
      FUN_10324dcc8(unaff_x20,uVar13,uVar3,param_3,param_4);
      goto LAB_10324dc98;
    }
    (**(code **)(extraout_x13 + 8))(lVar7,lVar2);
  }
  (**(code **)(param_4 + 0xa8))(param_3,param_4);
  (**(code **)(param_4 + 0x90))(uVar3,param_3,param_4);
  FUN_10324dcc8(unaff_x20,uStack_b0,uVar3,param_3,param_4);
  pcVar9 = *(code **)(extraout_x13 + 8);
LAB_10324dc98:
  (*pcVar9)(uVar3,lVar2);
  return;
}



/* Entry: 10324dcc8; end: 10324de57;  */

void FUN_10324dcc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  code *pcVar5;
  long lVar6;
  long lStack_90;
  undefined8 auStack_88 [3];
  long lStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0xff;
  func_0x000107c614b8(0xff,param_6,param_5,&UNK_10e75223c,&UNK_10e752264);
  lVar2 = 0;
  func_0x000107c60188(0,lVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)auStack_88 + (-8 - extraout_x8);
  lVar2 = param_5;
  lVar4 = param_6;
  (**(code **)(param_6 + 0x48))();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c614f0();
    uStack_68 = *(undefined8 *)(param_6 + 8);
    pcVar5 = *(code **)(lVar4 + 0x18);
    lStack_90 = lVar3;
    auStack_88[0] = param_2;
    lStack_70 = param_5;
    func_0x000107c61174(param_2);
    (*pcVar5)(auStack_88,param_3,lStack_90,lVar4);
    func_0x000107c615e8(lVar2);
    func_0x0001000834e4(auStack_88);
  }
  lVar2 = *(long *)(lVar1 + -8);
  (**(code **)(lVar2 + 0x10))(lVar6,param_4,lVar1);
  (**(code **)(lVar2 + 0x38))(lVar6,0,1,lVar1);
  (**(code **)(param_6 + 0x78))(lVar6,param_5,param_6);
  lVar2 = param_6;
  (**(code **)(param_6 + 0x58))(param_5);
  if (((uint)lVar2 & 0xff) == 1) {
    func_0x00010028941c();
    (**(code **)(param_6 + 0x60))(param_1,0,param_5,param_6);
  }
  return;
}



/* Entry: 10324de58; end: 10324df43;  */

void FUN_10324de58(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4,double param_5
                  ,long param_6)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  
  if ((((param_4 & 1) == 0) &&
      (dVar1 = param_5, lVar4 = param_6, (**(code **)(param_6 + 0x58))(), ((uint)lVar4 & 0xff) != 1)
      ) && (func_0x00010028941c(), 1.0 < param_1 - dVar1)) {
    uVar2 = 0xff;
    func_0x000107c614b8(0xff,param_6,param_5,&UNK_10e75223c,&UNK_10e752264);
    func_0x000107c614b4(param_6,param_5,uVar2,&UNK_10e75223c,&UNK_10e752254);
    pcVar5 = *(code **)(param_6 + 0x18);
    uVar3 = 0;
    func_0x000107c6143c(0,uVar2);
    (*pcVar5)(param_2,uVar3,param_6);
  }
  return;
}



/* Entry: 10324df44; end: 10324e0ff;  */

ulong FUN_10324df44(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10324e028);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10324e02c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_10324e2c8(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10324e100);
  (*pcVar2)();
}



/* Entry: 10324e100; end: 10324e137;  */

void FUN_10324e100(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  uVar5 = *(ulong *)(unaff_x20 + 0x28);
  lVar8 = *(long *)(unaff_x20 + 0x58);
  lVar7 = unaff_x20 + 0x30;
  if (uVar5 != 0) {
    func_0x000107c61174();
    uVar6 = uVar5;
    FUN_103261384();
    func_0x000107c61170(uVar5);
    if ((uVar6 & 1) == 0) {
      return;
    }
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
  func_0x0001000a8868(lVar7,uVar1);
  func_0x000107c61428(lVar8 + 0x10,auStack_68,0,0);
  lVar8 = lVar8 + 0x10;
  func_0x000107c61618();
  if (lVar8 != 0) {
    (**(code **)(lVar4 + 0xd0))(lVar7,0,1,param_1,uVar1,uVar3,uVar2,lVar4);
    func_0x000107c61170(lVar8);
  }
  return;
}



/* Entry: 10324e138; end: 10324e1bf;  */

undefined8 FUN_10324e138(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10324e1c0; end: 10324e1df;  */

void FUN_10324e1c0(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar3 = 0;
  func_0x000107c614b8(0,lVar2,uVar1,&UNK_10e75223c,&UNK_10e752264);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  (**(code **)(lVar2 + 0x98))
            (*(undefined8 *)(unaff_x20 + 0x20),
             unaff_x20 + (uVar4 + 0x28 & (uVar4 ^ 0xffffffffffffffff)),uVar1,lVar2);
  return;
}



/* Entry: 10324e1e0; end: 10324e25b;  */

void FUN_10324e1e0(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  func_0x000107c614b8(0,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10),
                      &UNK_10e75223c,&UNK_10e752264);
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10324e25c; end: 10324e2c7;  */

void FUN_10324e25c(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar3 = 0;
  func_0x000107c614b8(0,lVar2,uVar1,&UNK_10e75223c,&UNK_10e752264);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  (**(code **)(lVar2 + 0x98))
            (*(undefined8 *)(unaff_x20 + 0x20),
             unaff_x20 + (uVar4 + 0x28 & (uVar4 ^ 0xffffffffffffffff)),uVar1,lVar2);
  return;
}



/* Entry: 10324e2c8; end: 10324e307;  */

void FUN_10324e2c8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10324e308; end: 10324e313;  */

void FUN_10324e308(long param_1,long param_2)

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



/* Entry: 10324e314; end: 10324e447;  */

uint FUN_10324e314(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long extraout_x8;
  undefined1 *puVar6;
  long lVar7;
  
  lVar2 = 0;
  func_0x000107c614b8(0,param_2,param_1,&UNK_10e804840,&UNK_10e804858);
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffb0 + -extraout_x8;
  (**(code **)(param_2 + 0x28))(puVar6,param_1,param_2);
  lVar3 = param_2;
  func_0x000107c614b4(param_2,param_1,lVar2,&UNK_10e804840,&UNK_10e804850);
  lVar4 = lVar3;
  func_0x00010322b0a0();
  puVar5 = puVar6;
  FUN_10322b46c(puVar6,lVar2,&UNK_11076b050,lVar3,lVar4);
  (**(code **)(lVar7 + 8))(puVar6,lVar2);
  if (((ulong)puVar5 & 1) == 0) {
    (**(code **)(param_2 + 0x48))(param_1);
    if (param_2 - 1U < 3) {
      uVar1 = 0x10200 >> (ulong)((int)(param_2 - 1U) * 8 & 0x18);
    }
    else {
      func_0x0001031e1b60();
      uVar1 = 4;
    }
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 10324e448; end: 10324e47b;  */

bool FUN_10324e448(undefined8 param_1,long param_2)

{
  (**(code **)(param_2 + 0x48))();
  func_0x0001031e1b60();
  return param_2 - 1U < 3;
}



/* Entry: 10324e47c; end: 10324e4df;  */

uint FUN_10324e47c(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 < 0xb) {
    return (uint)(byte)(&UNK_10dba18e2)[param_1];
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    FUN_103202330(uVar2);
    uVar1 = uVar2;
    FUN_10324e47c(uVar2);
    func_0x00010321d6b8(uVar2);
    return (uint)uVar1 & 0xff;
  }
  return 1;
}



/* Entry: 10324e4e0; end: 10324e577;  */

undefined1  [16] FUN_10324e4e0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  undefined1 auStack_108 [16];
  long lStack_f8;
  
  if ((*(byte *)(unaff_x20 + 0x38) & 1) == 0) {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
    lVar1 = *(long *)(unaff_x20 + 0x20);
    func_0x0001000a8868();
    (**(code **)(lVar1 + 0x30))(auStack_108,uVar2,lVar1);
    if ((lStack_f8 != 0) && (*(long *)(lStack_f8 + 0x10) != 0)) {
      uVar2 = *(undefined8 *)(lStack_f8 + 0x20);
      uVar3 = *(undefined8 *)(lStack_f8 + 0x28);
      func_0x000107c61434(uVar3);
      func_0x00010322ed34(auStack_108);
      goto LAB_10324e564;
    }
    func_0x00010322ed34(auStack_108);
  }
  uVar2 = 0;
  uVar3 = 0;
LAB_10324e564:
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 10324e578; end: 10324e5f3;  */

void FUN_10324e578(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined1 param_6,long param_7,undefined8 param_8)

{
  *(long *)(param_1 + 0x18) = param_7;
  *(undefined8 *)(param_1 + 0x20) = param_8;
  func_0x0001000c5db4(param_1);
  (**(code **)(*(long *)(param_7 + -8) + 0x20))();
  *(undefined1 *)(param_1 + 0x28) = param_3;
  *(undefined1 *)(param_1 + 0x29) = param_4;
  *(undefined8 *)(param_1 + 0x30) = param_5;
  *(undefined1 *)(param_1 + 0x38) = param_6;
  return;
}



/* Entry: 10324e5f4; end: 10324e823;  */

uint FUN_10324e5f4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_80 [12];
  uint uStack_74;
  long lStack_70;
  undefined1 *puStack_68;
  
  if (*(char *)(unaff_x20 + 0x29) == *(char *)(param_1 + 0x29)) {
    uVar9 = *(ulong *)(unaff_x20 + 0x30);
    func_0x0001044109f4(uVar9,*(undefined8 *)(param_1 + 0x30));
    if ((uVar9 & 1) != 0) {
      uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
      lVar3 = *(long *)(unaff_x20 + 0x20);
      func_0x0001000a8868();
      lVar2 = 0;
      func_0x000107c614b8(0,lVar3,uVar1,&UNK_10e804840,&UNK_10e804858);
      lStack_70 = *(long *)(lVar2 + -8);
      puStack_68 = auStack_80;
      (*(code *)PTR____chkstk_darwin_11034bd40)
                (*(long *)(lStack_70 + 0x40) + 0xfU & 0xfffffffffffffff0);
      puVar10 = auStack_80 + -extraout_x8;
      (**(code **)(lVar3 + 0x28))(puVar10,uVar1,lVar3);
      func_0x000107c614b4(lVar3,uVar1,lVar2,&UNK_10e804840,&UNK_10e804850);
      lVar4 = lVar3;
      func_0x00010322b060();
      puVar5 = puVar10;
      FUN_10322b46c(puVar10,lVar2,&UNK_11076af50,lVar3,lVar4);
      uStack_74 = (uint)puVar5;
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      lVar3 = *(long *)(param_1 + 0x20);
      func_0x0001000a8868(param_1,uVar1);
      lVar6 = 0;
      func_0x000107c614b8(0,lVar3,uVar1,&UNK_10e804840,&UNK_10e804858);
      lVar11 = *(long *)(lVar6 + -8);
      (*(code *)PTR____chkstk_darwin_11034bd40)
                (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar12 = (long)puVar10 - extraout_x8_00;
      (**(code **)(lVar3 + 0x28))(lVar12,uVar1,lVar3);
      func_0x000107c614b4(lVar3,uVar1,lVar6,&UNK_10e804840,&UNK_10e804850);
      lVar7 = lVar12;
      FUN_10322b46c(lVar12,lVar6,&UNK_11076af50,lVar3,lVar4);
      (**(code **)(lVar11 + 8))(lVar12,lVar6);
      (**(code **)(lStack_70 + 8))(puVar10,lVar2);
      uVar8 = uStack_74 ^ (uint)lVar7 ^ 1;
      goto LAB_10324e800;
    }
  }
  uVar8 = 0;
LAB_10324e800:
  return uVar8 & 1;
}



/* Entry: 10324e824; end: 10324e827;  */

uint FUN_10324e824(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_80 [12];
  uint uStack_74;
  long lStack_70;
  undefined1 *puStack_68;
  
  if (*(char *)(unaff_x20 + 0x29) == *(char *)(param_1 + 0x29)) {
    uVar9 = *(ulong *)(unaff_x20 + 0x30);
    func_0x0001044109f4(uVar9,*(undefined8 *)(param_1 + 0x30));
    if ((uVar9 & 1) != 0) {
      uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
      lVar3 = *(long *)(unaff_x20 + 0x20);
      func_0x0001000a8868();
      lVar2 = 0;
      func_0x000107c614b8(0,lVar3,uVar1,&UNK_10e804840,&UNK_10e804858);
      lStack_70 = *(long *)(lVar2 + -8);
      puStack_68 = auStack_80;
      (*(code *)PTR____chkstk_darwin_11034bd40)
                (*(long *)(lStack_70 + 0x40) + 0xfU & 0xfffffffffffffff0);
      puVar10 = auStack_80 + -extraout_x8;
      (**(code **)(lVar3 + 0x28))(puVar10,uVar1,lVar3);
      func_0x000107c614b4(lVar3,uVar1,lVar2,&UNK_10e804840,&UNK_10e804850);
      lVar4 = lVar3;
      func_0x00010322b060();
      puVar5 = puVar10;
      FUN_10322b46c(puVar10,lVar2,&UNK_11076af50,lVar3,lVar4);
      uStack_74 = (uint)puVar5;
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      lVar3 = *(long *)(param_1 + 0x20);
      func_0x0001000a8868(param_1,uVar1);
      lVar6 = 0;
      func_0x000107c614b8(0,lVar3,uVar1,&UNK_10e804840,&UNK_10e804858);
      lVar11 = *(long *)(lVar6 + -8);
      (*(code *)PTR____chkstk_darwin_11034bd40)
                (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar12 = (long)puVar10 - extraout_x8_00;
      (**(code **)(lVar3 + 0x28))(lVar12,uVar1,lVar3);
      func_0x000107c614b4(lVar3,uVar1,lVar6,&UNK_10e804840,&UNK_10e804850);
      lVar7 = lVar12;
      FUN_10322b46c(lVar12,lVar6,&UNK_11076af50,lVar3,lVar4);
      (**(code **)(lVar11 + 8))(lVar12,lVar6);
      (**(code **)(lStack_70 + 8))(puVar10,lVar2);
      uVar8 = uStack_74 ^ (uint)lVar7 ^ 1;
      goto LAB_10324e800;
    }
  }
  uVar8 = 0;
LAB_10324e800:
  return uVar8 & 1;
}



/* Entry: 10324e828; end: 10324e8eb;  */

long FUN_10324e828(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10324e8ec; end: 10324ea1b;  */

long FUN_10324e8ec(long param_1,long param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  func_0x000100083374();
  puVar2 = (ulong *)(param_1 + 0x30);
  uVar3 = *puVar2;
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(param_2 + 0x29);
  uVar1 = *(ulong *)(param_2 + 0x30);
  if (uVar3 < 0xb) {
    if (uVar1 < 0xb) {
      *puVar2 = uVar1;
    }
    else {
      *puVar2 = uVar1;
      func_0x000107c61434();
    }
  }
  else if (uVar1 < 0xb) {
    FUN_10323b89c(puVar2);
    *puVar2 = *(ulong *)(param_2 + 0x30);
  }
  else {
    *puVar2 = uVar1;
    func_0x000107c61434();
    func_0x000107c6142c(uVar3);
  }
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  return param_1;
}



/* Entry: 10324ea1c; end: 10324eac3;  */

int FUN_10324ea1c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x39) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10324eac4; end: 10324ede7;  */

undefined8 FUN_10324eac4(long param_1)

{
  undefined1 *puVar1;
  long extraout_x8;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  
  lVar4 = *(long *)(param_1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar2 = auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar4 + 0x10))(puVar2);
  puVar1 = auStack_48;
  func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076ac50,0);
  if ((int)puVar1 == 0) {
    puVar1 = auStack_48;
    func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076b450,0);
    if ((int)puVar1 == 0) {
      puVar1 = auStack_48;
      func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076af50,0);
      if ((int)puVar1 == 0) {
        puVar1 = auStack_48;
        func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076ad50,0);
        if ((int)puVar1 == 0) {
          puVar1 = auStack_48;
          func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076b550,0);
          if ((int)puVar1 == 0) {
            puVar1 = auStack_48;
            func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076bbd0,0);
            if ((int)puVar1 == 0) {
              puVar1 = auStack_48;
              func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076b850,0);
              if ((int)puVar1 == 0) {
                puVar1 = auStack_48;
                func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076b650,0);
                if ((int)puVar1 == 0) {
                  puVar1 = auStack_48;
                  func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076b0d0,0);
                  if ((int)puVar1 == 0) {
                    puVar1 = auStack_48;
                    func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076b350,0);
                    if ((int)puVar1 == 0) {
                      puVar1 = auStack_48;
                      func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076b1d0,0);
                      if ((int)puVar1 == 0) {
                        puVar1 = auStack_48;
                        func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076afd0,0);
                        if ((int)puVar1 == 0) {
                          puVar1 = auStack_48;
                          func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076b4d0,0);
                          if ((int)puVar1 == 0) {
                            puVar1 = auStack_48;
                            func_0x000107c6147c(puVar1,puVar2,param_1,&UNK_11076b5d0,0);
                            if ((int)puVar1 == 0) {
                              uVar3 = 0;
                            }
                            else {
                              func_0x000107c6142c(uStack_40);
                              uVar3 = 0x32;
                            }
                          }
                          else {
                            func_0x000107c6142c(uStack_40);
                            uVar3 = 0x46;
                          }
                        }
                        else {
                          func_0x000107c6142c(uStack_40);
                          uVar3 = 0x4b;
                        }
                      }
                      else {
                        func_0x000107c6142c(uStack_40);
                        uVar3 = 0x50;
                      }
                    }
                    else {
                      func_0x000107c6142c(uStack_40);
                      uVar3 = 0x55;
                    }
                  }
                  else {
                    func_0x000107c6142c(uStack_40);
                    uVar3 = 0x5a;
                  }
                }
                else {
                  func_0x000107c6142c(uStack_40);
                  uVar3 = 100;
                }
              }
              else {
                func_0x000107c6142c(uStack_40);
                uVar3 = 400;
              }
            }
            else {
              func_0x000107c6142c(uStack_40);
              uVar3 = 0x1c2;
            }
          }
          else {
            func_0x000107c6142c(uStack_40);
            uVar3 = 0x1e0;
          }
        }
        else {
          func_0x000107c6142c(uStack_40);
          uVar3 = 0x1ea;
        }
      }
      else {
        func_0x000107c6142c(uStack_40);
        uVar3 = 500;
      }
    }
    else {
      func_0x000107c6142c(uStack_40);
      uVar3 = 600;
    }
  }
  else {
    func_0x000107c6142c(uStack_40);
    uVar3 = 1000;
  }
  (**(code **)(lVar4 + 8))(puVar2,param_1);
  return uVar3;
}



/* Entry: 10324ede8; end: 10324ee47;  */

bool FUN_10324ede8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_10324eac4(param_3,param_5);
  FUN_10324eac4(param_4,param_6);
  return param_3 < param_4;
}



/* Entry: 10324ee48; end: 10324f01f;  */

uint FUN_10324ee48(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lStack_70;
  long lStack_68;
  
  lVar3 = *(long *)(param_2 + 0x10);
  lVar9 = *(long *)(lVar3 + -8);
  lStack_68 = param_3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar4 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_70 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar4 - extraout_x12;
  lVar1 = 0;
  func_0x000107c61510();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar4 - extraout_x8_00;
  lVar10 = (long)*(int *)(lVar1 + 0x30);
  lVar6 = *(long *)(param_2 + -8);
  pcVar7 = *(code **)(lVar6 + 0x10);
  (*pcVar7)(lVar8);
  (*pcVar7)(lVar8 + lVar10,param_1,param_2);
  pcVar7 = *(code **)(lVar9 + 0x30);
  lVar2 = lVar8;
  (*pcVar7)(lVar8,1,lVar3);
  lVar1 = lVar8 + lVar10;
  (*pcVar7)(lVar1,1,lVar3);
  if ((int)lVar2 == 1) {
    if ((int)lVar1 == 1) {
      uVar5 = 1;
      goto LAB_10324effc;
    }
    pcVar7 = *(code **)(lVar6 + 8);
    lVar8 = lVar8 + lVar10;
    lVar3 = param_2;
  }
  else {
    if ((int)lVar1 != 1) {
      pcVar7 = *(code **)(lVar9 + 0x20);
      (*pcVar7)(lVar4,lVar8,lVar3);
      lVar1 = lStack_70;
      (*pcVar7)(lStack_70,lVar8 + lVar10,lVar3);
      lVar8 = lVar1;
      (**(code **)(lStack_68 + 8))(lVar1,lVar3);
      uVar5 = (uint)lVar8;
      pcVar7 = *(code **)(lVar9 + 8);
      (*pcVar7)(lVar1,lVar3);
      (*pcVar7)(lVar4,lVar3);
      goto LAB_10324effc;
    }
    pcVar7 = *(code **)(lVar9 + 8);
  }
  (*pcVar7)(lVar8,lVar3);
  uVar5 = 0;
LAB_10324effc:
  return uVar5 & 1;
}



/* Entry: 10324f020; end: 10324f027;  */

uint FUN_10324f020(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)(param_3 + -8);
  lVar3 = *(long *)(param_2 + 0x10);
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar4 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_70 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar4 - extraout_x12;
  lVar1 = 0;
  func_0x000107c61510();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar4 - extraout_x8_00;
  lVar10 = (long)*(int *)(lVar1 + 0x30);
  lVar6 = *(long *)(param_2 + -8);
  pcVar7 = *(code **)(lVar6 + 0x10);
  (*pcVar7)(lVar8);
  (*pcVar7)(lVar8 + lVar10,param_1,param_2);
  pcVar7 = *(code **)(lVar9 + 0x30);
  lVar2 = lVar8;
  (*pcVar7)(lVar8,1,lVar3);
  lVar1 = lVar8 + lVar10;
  (*pcVar7)(lVar1,1,lVar3);
  if ((int)lVar2 == 1) {
    if ((int)lVar1 == 1) {
      uVar5 = 1;
      goto LAB_10324effc;
    }
    pcVar7 = *(code **)(lVar6 + 8);
    lVar8 = lVar8 + lVar10;
    lVar3 = param_2;
  }
  else {
    if ((int)lVar1 != 1) {
      pcVar7 = *(code **)(lVar9 + 0x20);
      (*pcVar7)(lVar4,lVar8,lVar3);
      lVar1 = lStack_70;
      (*pcVar7)(lStack_70,lVar8 + lVar10,lVar3);
      lVar8 = lVar1;
      (**(code **)(lStack_68 + 8))(lVar1,lVar3);
      uVar5 = (uint)lVar8;
      pcVar7 = *(code **)(lVar9 + 8);
      (*pcVar7)(lVar1,lVar3);
      (*pcVar7)(lVar4,lVar3);
      goto LAB_10324effc;
    }
    pcVar7 = *(code **)(lVar9 + 8);
  }
  (*pcVar7)(lVar8,lVar3);
  uVar5 = 0;
LAB_10324effc:
  return uVar5 & 1;
}



/* Entry: 10324f028; end: 10324f06b;  */

undefined8 FUN_10324f028(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x38,auStack_38,0,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  FUN_10324f06c(uVar1);
  return uVar1;
}



/* Entry: 10324f06c; end: 10324f07b;  */

void FUN_10324f06c(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10324f07c; end: 10324f0bf;  */

void FUN_10324f07c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x38,auStack_38,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  FUN_10324f0c0(uVar1);
  return;
}



/* Entry: 10324f0c0; end: 10324f0cf;  */

void FUN_10324f0c0(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10324f0d0; end: 10324f0ff;  */

undefined1  [16] FUN_10324f0d0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000107c61428(unaff_x20 + 0x38,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0x38;
  auVar1._0_8_ = FUN_10324f100;
  return auVar1;
}



/* Entry: 10324f100; end: 10324f103;  */

void FUN_10324f100(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 10324f104; end: 10324f14b;  */

long FUN_10324f104(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x38) = 1;
  FUN_10324f170(param_1,unaff_x20 + 0x10);
  return unaff_x20;
}



/* Entry: 10324f14c; end: 10324f16f;  */

void FUN_10324f14c(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x38) = 1;
  FUN_10324f170(param_1,unaff_x20 + 0x10);
  return;
}



/* Entry: 10324f170; end: 10324f187;  */

undefined8 * FUN_10324f170(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 10324f188; end: 10324f633;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10324f188(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lVar9;
  code *pcVar10;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar9 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,uVar5);
  (**(code **)(lVar9 + 8))(param_1,param_2,param_3,param_4,uVar5,lVar9);
  if (((uint)param_3 & 0xff) == 1) {
    func_0x000107c61428(unaff_x20 + 0x38,auStack_78,0,0);
    lVar9 = *(long *)(unaff_x20 + 0x38);
    if (lVar9 == 1) {
      return;
    }
    FUN_10324f06c(lVar9);
    lVar1 = lVar9;
    func_0x000107c61174();
    FUN_10324f0c0(lVar9);
    if (lVar9 == 0) {
      return;
    }
    if (*(long *)(lVar1 + _DAT_112ff2070) != 0) {
      func_0x000107c52b50(param_1);
    }
    lVar9 = *(long *)(lVar1 + _DAT_112ff2068);
    if (lVar9 != 0) {
      lVar2 = param_1;
      func_0x000107c614f0(param_1);
      pcVar10 = *(code **)(param_2 + 0x10);
      func_0x000107c61174(lVar9);
      (*pcVar10)(lVar2,param_2);
      func_0x000107c61174(lVar9);
      func_0x000107c59c78(lVar2);
      func_0x000107c61170(lVar2);
      lVar2 = param_1;
      func_0x000107c614f0();
      lVar3 = lVar2;
      func_0x000107c61440();
      if ((lVar3 != 0) && (param_1 != 0)) {
        pcVar10 = *(code **)(lVar3 + 0x10);
        lVar4 = param_1;
        func_0x000107c61174(param_1);
        (*pcVar10)(lVar2,lVar3);
        func_0x000107c59e10();
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar2);
      }
      func_0x000107c61170(lVar9);
      func_0x000107c61170(lVar9);
    }
    lStack_80 = *(long *)(lVar1 + _DAT_112ff2060);
    lVar9 = param_1;
    if (lStack_80 == 1) {
      func_0x000107c614f0(param_1);
      pcVar10 = *(code **)(param_2 + 0x50);
      uVar5 = 0x4028000000000000;
      uVar8 = 0;
    }
    else {
      if (lStack_80 != 0) {
        puVar7 = &UNK_1106dd210;
        goto LAB_10324f61c;
      }
      func_0x000107c614f0(param_1);
      pcVar10 = *(code **)(param_2 + 0x50);
      uVar5 = 0;
      uVar8 = 1;
    }
    (*pcVar10)(uVar5,uVar8,lVar9,param_2);
    lStack_80 = *(long *)(lVar1 + _DAT_112ff2078);
    if (lStack_80 != 0) {
      if (lStack_80 != 1) {
        puVar7 = &UNK_1106dd1d0;
        goto LAB_10324f61c;
      }
      lVar9 = param_1;
      func_0x000107c614f0(param_1);
      lVar2 = param_1;
      func_0x000107c4aba4(param_1);
      func_0x000107c61180();
      func_0x000107c59044(0);
      func_0x000107c61170(lVar2);
      lVar2 = param_1;
      func_0x000107c4aba4(param_1);
      func_0x000107c61180();
      func_0x000107c5903c(0x3f800000);
      func_0x000107c61170(lVar2);
      lVar2 = param_1;
      func_0x000107c4aba4(param_1);
      func_0x000107c61180();
      uVar5 = 0;
      func_0x000107c59038(0,0x4010000000000000);
      func_0x000107c61170(lVar2);
      lVar2 = param_1;
      func_0x000107c4aba4(param_1);
      func_0x000107c61180();
      puVar6 = *(undefined **)(lVar1 + _DAT_112ff2080);
      puVar7 = puVar6;
      if (puVar6 == (undefined *)0x0) {
        puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
        func_0x000107c5af88();
        func_0x000107c61180();
        puVar6 = (undefined *)0x0;
      }
      func_0x000107c61174(puVar6);
      puVar6 = puVar7;
      func_0x000107c3ab24(puVar7);
      func_0x000107c61180();
      func_0x000107c61170(puVar7);
      func_0x000107c59030(lVar2);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(puVar6);
      (**(code **)(param_2 + 0x68))(1,lVar9,param_2);
      lVar9 = param_1;
      func_0x000107c4aba4(param_1);
      func_0x000107c61180();
      puVar7 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x000107c4c194();
      func_0x000107c61180();
      func_0x000107c51820();
      func_0x000107c61170(puVar7);
      func_0x000107c538b8(uVar5,lVar9);
      func_0x000107c61170(lVar9);
    }
    lStack_80 = *(long *)(lVar1 + _DAT_112ff2088);
    if (lStack_80 != 0) {
      if (lStack_80 != 1) {
        puVar7 = &UNK_1106dd1f0;
LAB_10324f61c:
        func_0x000107c60614(puVar7,&lStack_80,puVar7,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x10324f634);
        (*pcVar10)();
      }
      lVar9 = param_1;
      func_0x000107c4aba4(param_1);
      func_0x000107c61180();
      puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c5af88();
      func_0x000107c61180();
      puVar6 = puVar7;
      func_0x000107c3ab24();
      func_0x000107c61180();
      func_0x000107c61170(puVar7);
      func_0x000107c52df8(lVar9);
      func_0x000107c61170(lVar9);
      func_0x000107c61170(puVar6);
      func_0x000107c4aba4(param_1);
      func_0x000107c61180();
      func_0x000107c52e0c(0x3ff8000000000000);
      func_0x000107c61170(lVar1);
      lVar1 = param_1;
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10324f634; end: 10324f65f;  */

void FUN_10324f634(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  FUN_10324f0c0(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10324f660; end: 10324f67f;  */

void FUN_10324f660(void)

{
  FUN_10324f188();
  return;
}



/* Entry: 10324f680; end: 10324f69f;  */

void FUN_10324f680(void)

{
  func_0x000107c61168(&PTR_PTR_112f4ec30);
  return;
}



/* Entry: 10324f6a0; end: 10324f6c7;  */

void FUN_10324f6a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  func_0x000103b93014();
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 10324f6c8; end: 10324f74b;  */

long FUN_10324f6c8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  lVar3 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  uVar4 = 0x112f4ecb8;
  func_0x0001000285a8(0x112f4ecb8,&UNK_10dba19b8);
  *(undefined8 *)(lVar3 + 0x38) = uVar4;
  *(undefined ***)(lVar3 + 0x40) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar3 + 0x20) = uVar1;
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
  func_0x000107c61434(uVar2);
  return lVar3;
}



/* Entry: 10324f74c; end: 10324f7ab;  */

/* WARNING: Possible PIC construction at 0x00010324f770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010324f780: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010324f774) */
/* WARNING: Removing unreachable block (ram,0x00010324f784) */

void FUN_10324f74c(long param_1)

{
  func_0x000103b93014();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10324f7ac; end: 10324f88f;  */

long FUN_10324f7ac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar4 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar5 = unaff_x20[3];
  uVar3 = unaff_x20[4];
  uVar6 = unaff_x20[5];
  lVar7 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x18) = 6;
  *(undefined8 *)(lVar7 + 0x10) = 3;
  uVar8 = 0x112f4ecb8;
  func_0x0001000285a8(0x112f4ecb8,&UNK_10dba19b8);
  *(undefined8 *)(lVar7 + 0x38) = uVar8;
  *(undefined ***)(lVar7 + 0x40) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar7 + 0x20) = uVar1;
  *(undefined8 *)(lVar7 + 0x28) = uVar4;
  uVar8 = 0x112f4b520;
  func_0x0001000285a8(0x112f4b520,&UNK_10db9b280);
  *(undefined8 *)(lVar7 + 0x60) = uVar8;
  *(undefined ***)(lVar7 + 0x68) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar7 + 0x48) = uVar2;
  *(undefined8 *)(lVar7 + 0x50) = uVar5;
  uVar8 = 0x112f4c648;
  func_0x0001000285a8(0x112f4c648,&UNK_10db9d6d0);
  *(undefined8 *)(lVar7 + 0x88) = uVar8;
  *(undefined ***)(lVar7 + 0x90) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar7 + 0x70) = uVar3;
  *(undefined8 *)(lVar7 + 0x78) = uVar6;
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar6);
  return lVar7;
}



/* Entry: 10324f890; end: 10324fb27;  */

undefined8 * FUN_10324f890(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar3 = &UNK_10dba19c0;
  func_0x000107c614e0(&UNK_10dba19c0);
  if (param_2 == 0) {
    func_0x000107c61574();
  }
  else {
    func_0x000107c61434(param_2);
    FUN_103250048(param_1,param_2,param_3,puVar3);
    func_0x000107c61574(puVar3);
    func_0x000107c6142c(param_2);
    if (param_1 != (undefined8 *)0x0) {
      func_0x000107c61170(param_3);
      func_0x000107c6142c(param_2);
      FUN_103250158(param_4);
      return param_1;
    }
  }
  puVar3 = &UNK_10dba19e0;
  func_0x000107c614e0(&UNK_10dba19e0);
  lVar6 = param_4[1];
  if (lVar6 == 0) {
    func_0x000107c61574();
  }
  else {
    uStack_70 = param_4[4];
    uVar1 = param_4[5];
    uStack_80 = param_4[2];
    uVar2 = param_4[3];
    uStack_90 = *param_4;
    lStack_88 = lVar6;
    uStack_78 = uVar2;
    uStack_68 = uVar1;
    func_0x000107c61434(lVar6);
    func_0x000107c61434(uVar2);
    func_0x000107c61434(uVar1);
    puVar4 = &uStack_90;
    FUN_10324ff30(puVar4,param_4,puVar3);
    func_0x000107c61574(puVar3);
    func_0x000107c6142c(uVar1);
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(lVar6);
    if (((uint)puVar4 & 0xff) != 2) {
      if (((ulong)puVar4 & 1) != 0) {
        puVar3 = &UNK_10dba1a08;
        func_0x000107c614e0(&UNK_10dba1a08);
        func_0x000107c61434(lVar6);
        func_0x000107c61434(uVar2);
        func_0x000107c61434(uVar1);
        puVar4 = &uStack_90;
        puVar5 = param_4;
        FUN_10324fe14(puVar4,param_4,puVar3);
        func_0x000107c61574(puVar3);
        func_0x000107c6142c(uVar1);
        func_0x000107c6142c(uVar2);
        func_0x000107c6142c(lVar6);
        if (((uint)puVar5 & 0xff) != 1) {
          if (puVar4 == (undefined8 *)0x0) {
            FUN_103250158(param_4);
            func_0x000107c61170(param_3);
            func_0x000107c6142c(param_2);
            return (undefined8 *)0x0;
          }
          if (0 < (long)puVar4) {
            puVar3 = &UNK_10dba1a28;
            func_0x000107c614e0(&UNK_10dba1a28);
            func_0x000107c61434(lVar6);
            func_0x000107c61434(uVar2);
            func_0x000107c61434(uVar1);
            puVar4 = &uStack_90;
            FUN_10324fcf8(puVar4,param_4,puVar3);
            func_0x000107c6142c(uVar1);
            func_0x000107c6142c(uVar2);
            func_0x000107c6142c(lVar6);
            FUN_103250158(param_4);
            func_0x000107c61170(param_3);
            func_0x000107c61574(puVar3);
            func_0x000107c6142c(param_2);
            if (puVar4 == (undefined8 *)0x0) {
              return (undefined8 *)0x0;
            }
            return puVar4;
          }
        }
      }
      FUN_103250158(param_4);
      func_0x000107c61170(param_3);
      func_0x000107c6142c(param_2);
      return (undefined8 *)0x0;
    }
  }
  FUN_103250158(param_4);
  func_0x000107c6142c(param_2);
  func_0x000107c61170(param_3);
  return (undefined8 *)0x0;
}



/* Entry: 10324fb28; end: 10324fb97;  */

void FUN_10324fb28(void)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_68 [72];
  
  lVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  if (lVar1 == 0) {
    func_0x000107c60694(0);
  }
  else {
    func_0x000107c60694(1);
    func_0x000107c61174(lVar1);
    func_0x000107c6011c(auStack_68);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c606a8();
  return;
}



/* Entry: 10324fb98; end: 10324fc03;  */

void FUN_10324fb98(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  if (lVar1 != 0) {
    func_0x000107c60694(1);
    func_0x000107c61174(lVar1);
    func_0x000107c6011c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  func_0x000107c60694(0);
  return;
}



/* Entry: 10324fc04; end: 10324fc6f;  */

void FUN_10324fc04(void)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_68 [72];
  
  lVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  if (lVar1 == 0) {
    func_0x000107c60694(0);
  }
  else {
    func_0x000107c60694(1);
    func_0x000107c61174(lVar1);
    func_0x000107c6011c(auStack_68);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c606a8();
  return;
}



/* Entry: 10324fc70; end: 10324fcf7;  */

undefined8 FUN_10324fc70(ulong *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *param_1;
  lVar3 = *param_2;
  if (uVar2 == 0) {
    if (lVar3 == 0) {
      return 1;
    }
  }
  else if (lVar3 != 0) {
    func_0x000103b94454(0);
    func_0x000107c61174(lVar3);
    func_0x000107c61174();
    uVar1 = uVar2;
    func_0x000107c60118();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(lVar3);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 10324fcf8; end: 10324fe13;  */

undefined8 FUN_10324fcf8(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 auStack_b0 [4];
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
  
  iVar1 = (int)auStack_b0;
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  lVar5 = *(long *)(param_2 + 0x30);
  func_0x000107c614bc(&uStack_70,&uStack_60,param_3);
  uStack_90 = uStack_70;
  uStack_88 = uStack_68;
  func_0x000107c61434(uStack_68);
  puVar2 = &uStack_90;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar5 == 0) {
    func_0x000107c6142c(uStack_68);
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x000107c60234(auStack_b0,lVar5);
    func_0x000107c615e8(lVar5);
    func_0x000107c6142c(uStack_68);
    func_0x000100102924(auStack_b0,&uStack_90);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  uVar4 = 0;
  func_0x000103b94454(0);
  func_0x000107c6147c(auStack_b0,&uStack_90,uVar3,uVar4,6);
  if (iVar1 == 0) {
    auStack_b0[0] = 0;
  }
  return auStack_b0[0];
}



/* Entry: 10324fe14; end: 10324ff2f;  */

undefined1  [16] FUN_10324fe14(undefined8 *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 auStack_b0 [4];
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
  
  uVar1 = (uint)auStack_b0;
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  lVar4 = *(long *)(param_2 + 0x30);
  func_0x000107c614bc(&uStack_70,&uStack_60,param_3);
  uStack_90 = uStack_70;
  uStack_88 = uStack_68;
  func_0x000107c61434(uStack_68);
  puVar2 = &uStack_90;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar4 == 0) {
    func_0x000107c6142c(uStack_68);
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x000107c60234(auStack_b0,lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c6142c(uStack_68);
    func_0x000100102924(auStack_b0,&uStack_90);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  func_0x000107c6147c(auStack_b0,&uStack_90,uVar3,PTR___sSiN_11034deb0,6);
  if (uVar1 == 0) {
    auStack_b0[0] = 0;
  }
  auVar5._8_4_ = uVar1 ^ 1;
  auVar5._0_8_ = auStack_b0[0];
  auVar5._12_4_ = 0;
  return auVar5;
}



/* Entry: 10324ff30; end: 103250047;  */

undefined1 FUN_10324ff30(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_b0 [32];
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
  
  iVar1 = (int)auStack_b0;
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  lVar4 = *(long *)(param_2 + 0x30);
  func_0x000107c614bc(&uStack_70,&uStack_60,param_3);
  uStack_90 = uStack_70;
  uStack_88 = uStack_68;
  func_0x000107c61434(uStack_68);
  puVar2 = &uStack_90;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar4 == 0) {
    func_0x000107c6142c(uStack_68);
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x000107c60234(auStack_b0,lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c6142c(uStack_68);
    func_0x000100102924(auStack_b0,&uStack_90);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  func_0x000107c6147c(auStack_b0,&uStack_90,uVar3,PTR___sSbN_11034dd40,6);
  if (iVar1 == 0) {
    auStack_b0[0] = 2;
  }
  return auStack_b0[0];
}



/* Entry: 103250048; end: 103250157;  */

undefined8 FUN_103250048(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 auStack_90 [4];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)auStack_90;
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c614bc(&uStack_50,&uStack_40,param_4);
  uStack_70 = uStack_50;
  uStack_68 = uStack_48;
  func_0x000107c61434(uStack_48);
  puVar2 = &uStack_70;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (param_3 == 0) {
    func_0x000107c6142c(uStack_48);
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000107c60234(auStack_90,param_3);
    func_0x000107c615e8(param_3);
    func_0x000107c6142c(uStack_48);
    func_0x000100102924(auStack_90,&uStack_70);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  uVar4 = 0;
  func_0x000103b94454(0);
  func_0x000107c6147c(auStack_90,&uStack_70,uVar3,uVar4,6);
  if (iVar1 == 0) {
    auStack_90[0] = 0;
  }
  return auStack_90[0];
}



/* Entry: 103250158; end: 10325019f;  */

undefined8 FUN_103250158(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f4da70;
  func_0x0001000285a8(0x112f4da70,&UNK_10dba0dd0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1032501a0; end: 1032501ab;  */

void FUN_1032501a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4dab0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba1aa4;
  func_0x000107c61520(&UNK_10dba1aa4,&UNK_11062b990);
  puRam0000000112f4dab0 = puVar1;
  return;
}



/* Entry: 1032501ac; end: 10325021b;  */

undefined8 * FUN_1032501ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 10325021c; end: 1032502af;  */

int FUN_10325021c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1032502b0; end: 10325030b;  */

long FUN_1032502b0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10325030c; end: 1032503eb;  */

undefined8 * FUN_10325030c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 1032503ec; end: 10325043f;  */

undefined8 * FUN_1032503ec(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Entry: 103250440; end: 1032504eb;  */

int FUN_103250440(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1032504ec; end: 103250553;  */

undefined8 * FUN_1032504ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 103250554; end: 10325061f;  */

int FUN_103250554(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103250620; end: 103250bc3;  */

void FUN_103250620(undefined8 param_1,undefined8 *param_2,ulong param_3,long param_4,
                  undefined4 param_5,uint param_6,ulong param_7,long param_8)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar6;
  long extraout_x12;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  code *pcVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auStack_260 [8];
  long lStack_258;
  long lStack_250;
  long lStack_248;
  ulong uStack_240;
  code *pcStack_238;
  long lStack_230;
  undefined8 *puStack_228;
  long lStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  ulong uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1df;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_19f;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  undefined1 uStack_158;
  undefined8 uStack_157;
  undefined1 auStack_148 [208];
  long lStack_78;
  
  pcStack_238 = (code *)CONCAT44(pcStack_238._4_4_,param_5);
  lVar9 = *(long *)(param_7 - 8);
  uVar6 = param_7;
  lVar5 = param_8;
  puStack_228 = param_2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar8 = auStack_260 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c614b8(0,lVar5,uVar6,&UNK_10e804840,&UNK_10e804858);
  lStack_220 = *(long *)(lVar1 + -8);
  lStack_230 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_220 + 0x40));
  uVar6 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_240 = uVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = uVar6 - extraout_x12;
  uVar6 = param_7;
  lStack_218 = lVar5;
  FUN_10324e448(param_7,param_8);
  if (((uVar6 & 1) == 0) && ((param_3 & 1) != 0)) {
    return;
  }
  pcVar10 = *(code **)(param_8 + 0x28);
  (*pcVar10)(lStack_218,param_7,param_8);
  (**(code **)(lVar9 + 0x10))(puVar8,param_1,param_7);
  lVar1 = param_4;
  if (param_4 == 0xb) {
    (**(code **)(param_8 + 0x30))(auStack_148,param_7,param_8);
    FUN_103202330(lStack_78);
    func_0x00010322ed34(auStack_148);
    lVar1 = lStack_78;
  }
  FUN_10324e578(&uStack_188,puVar8,0,(ulong)pcStack_238 & 0xffffffff,lVar1,param_6 & 1,param_7,
                param_8);
  puVar7 = puStack_228;
  func_0x00010324b828(puStack_228,&uStack_210);
  if (uStack_1f8 == 0) {
    FUN_10322b5f4(param_4);
    func_0x00010324b7e0(puVar7);
    func_0x00010324b7e0(&uStack_210);
    puVar7[1] = uStack_180;
    *puVar7 = uStack_188;
    puVar7[3] = uStack_170;
    puVar7[2] = uStack_178;
    puVar7[5] = CONCAT71(uStack_15f,uStack_160);
    puVar7[4] = uStack_168;
    *(undefined8 *)((long)puVar7 + 0x31) = uStack_157;
    *(ulong *)((long)puVar7 + 0x29) = CONCAT17(uStack_158,uStack_15f);
    lVar5 = lStack_230;
    goto LAB_103250b94;
  }
  uStack_1b8 = uStack_1f8;
  uStack_1c0 = uStack_200;
  lStack_1b0 = lStack_1f0;
  uStack_1c8 = uStack_208;
  uStack_1d0 = uStack_210;
  uStack_19f = uStack_1df;
  pcStack_238 = pcVar10;
  func_0x0001000a8868(&uStack_1d0,uStack_1f8);
  FUN_10322b5f4(param_4);
  FUN_10324e448(uStack_1f8,lStack_1f0);
  uVar2 = param_7;
  FUN_10324e448(param_7,param_8);
  lVar1 = lStack_1b0;
  uVar6 = uStack_1b8;
  func_0x0001000a8868(&uStack_1d0,uStack_1b8);
  if (((uint)uStack_1f8 & 1) == ((uint)uVar2 & 1)) {
    lVar3 = 0;
    func_0x000107c614b8(0,lVar1,uVar6,&UNK_10e804840,&UNK_10e804858);
    lStack_250 = *(long *)(lVar3 + -8);
    lStack_248 = lVar5;
    (*(code *)PTR____chkstk_darwin_11034bd40)
              (*(long *)(lStack_250 + 0x40) + 0xfU & 0xfffffffffffffff0);
    uVar11 = lVar5 - extraout_x8_01;
    (**(code **)(lVar1 + 0x28))(uVar11,uVar6,lVar1);
    uVar2 = uStack_240;
    (*pcStack_238)(uStack_240,param_7,param_8);
    func_0x000107c614b4(lVar1,uVar6,lVar3,&UNK_10e804840,&UNK_10e804850);
    lVar5 = lStack_230;
    lVar9 = param_8;
    func_0x000107c614b4(param_8,param_7,lStack_230,&UNK_10e804840,&UNK_10e804850);
    uVar4 = uVar11;
    lStack_258 = lVar9;
    FUN_10322b46c(uVar11,lVar3,lVar5,lVar1);
    pcVar10 = *(code **)(lStack_220 + 8);
    (*pcVar10)(uVar2,lVar5);
    (**(code **)(lStack_250 + 8))(uVar11,lVar3);
    lVar9 = lStack_1b0;
    uVar6 = uStack_1b8;
    lVar1 = lStack_248;
    if ((uVar4 & 1) != 0) {
      func_0x0001000a8868(&uStack_1d0,uStack_1b8);
      (**(code **)(lVar9 + 0x40))(uVar6,lVar9);
      (**(code **)(param_8 + 0x40))(param_7,param_8);
      puVar7 = puStack_228;
      if (((uint)param_7 & 0xff) <= ((uint)uVar6 & 0xff)) goto LAB_103250a48;
      func_0x00010324b7e0(puStack_228);
      puVar7[1] = uStack_180;
      *puVar7 = uStack_188;
      puVar7[3] = uStack_170;
      puVar7[2] = uStack_178;
      puVar7[5] = CONCAT71(uStack_15f,uStack_160);
      puVar7[4] = uStack_168;
      uVar13 = CONCAT17(uStack_158,uStack_15f);
      goto LAB_103250a3c;
    }
    (*pcStack_238)(uVar2,param_7,param_8);
    lVar9 = lStack_1b0;
    uVar6 = uStack_1b8;
    pcStack_238 = pcVar10;
    func_0x0001000a8868(&uStack_1d0,uStack_1b8);
    lVar3 = 0;
    func_0x000107c614b8(0,lVar9,uVar6,&UNK_10e804840,&UNK_10e804858);
    lVar12 = *(long *)(lVar3 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar1 = lVar1 - extraout_x8_02;
    (**(code **)(lVar9 + 0x28))(lVar1,uVar6,lVar9);
    func_0x000107c614b4(lVar9,uVar6,lVar3,&UNK_10e804840,&UNK_10e804850);
    uVar6 = uVar2;
    FUN_10324ede8(uVar2,lVar1,lVar5,lVar3,lStack_258,lVar9);
    (**(code **)(lVar12 + 8))(lVar1,lVar3);
    (*pcStack_238)(uVar2,lVar5);
    puVar7 = puStack_228;
    if ((uVar6 & 1) == 0) {
      func_0x00010324b7e0(puStack_228);
      puVar7[1] = uStack_180;
      *puVar7 = uStack_188;
      puVar7[3] = uStack_170;
      puVar7[2] = uStack_178;
      puVar7[5] = CONCAT71(uStack_15f,uStack_160);
      puVar7[4] = uStack_168;
      *(undefined8 *)((long)puVar7 + 0x31) = uStack_157;
      *(ulong *)((long)puVar7 + 0x29) = CONCAT17(uStack_158,uStack_15f);
    }
    else {
      FUN_10322b438(&uStack_188);
    }
  }
  else {
    FUN_10324e448(uVar6,lVar1);
    puVar7 = puStack_228;
    if ((uVar6 & 1) == 0) {
      func_0x00010324b7e0(puStack_228);
      puVar7[1] = uStack_180;
      *puVar7 = uStack_188;
      puVar7[3] = uStack_170;
      puVar7[2] = uStack_178;
      puVar7[5] = CONCAT71(uStack_15f,uStack_160);
      puVar7[4] = uStack_168;
      uVar13 = CONCAT17(uStack_158,uStack_15f);
LAB_103250a3c:
      *(undefined8 *)((long)puVar7 + 0x31) = uStack_157;
      *(undefined8 *)((long)puVar7 + 0x29) = uVar13;
      lVar5 = lStack_230;
    }
    else {
LAB_103250a48:
      FUN_10322b438(&uStack_188);
      lVar5 = lStack_230;
    }
  }
  FUN_10322b438(&uStack_1d0);
LAB_103250b94:
  (**(code **)(lStack_220 + 8))(lStack_218,lVar5);
  return;
}



/* Entry: 103250bc4; end: 103250cdb;  */

uint FUN_103250bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a0 [24];
  long lStack_88;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000107c614bc(auStack_a0,param_1,param_3);
  if (lStack_88 == 0) {
    FUN_10325108c(auStack_a0,0x112f4da60,&UNK_10db9feb0);
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_40 = 0;
  }
  else {
    FUN_1031ddb84(auStack_a0,&uStack_60);
    FUN_10322b438(auStack_a0);
  }
  func_0x000107c614bc(auStack_a0,param_2,param_3);
  if (lStack_88 == 0) {
    FUN_10325108c(auStack_a0,0x112f4da60,&UNK_10db9feb0);
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_b0 = 0;
  }
  else {
    FUN_1031ddb84(auStack_a0,&uStack_d0);
    FUN_10322b438(auStack_a0);
  }
  puVar1 = &uStack_60;
  FUN_103250cdc(puVar1,&uStack_d0);
  FUN_10325108c(&uStack_d0,0x112f4b310,&UNK_10db9fef0);
  FUN_10325108c(&uStack_60,0x112f4b310,&UNK_10db9fef0);
  return (uint)puVar1 & 1;
}



/* Entry: 103250cdc; end: 10325108b;  */

undefined8 FUN_103250cdc(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined1 auStack_510 [24];
  undefined8 uStack_4f8;
  long lStack_4f0;
  undefined1 auStack_4e8 [24];
  ulong uStack_4d0;
  long lStack_4c8;
  undefined1 auStack_4c0 [24];
  long lStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_407;
  undefined1 auStack_3e8 [24];
  long lStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_32f;
  long lStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_26f;
  long lStack_260;
  undefined8 uStack_258;
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
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1bf;
  long lStack_1b0;
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
  undefined8 uStack_10f;
  long lStack_100;
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
  undefined8 uStack_5f;
  
  func_0x0001031e2fb0(param_1,auStack_3e8);
  if (lStack_3d0 == 0) {
    FUN_10325108c(auStack_3e8,0x112f4b310,&UNK_10db9fef0);
    return 0;
  }
  FUN_1031ddc20(auStack_3e8,auStack_4e8);
  func_0x0001031e2fb0(param_2,auStack_3e8);
  if (lStack_3d0 == 0) {
    FUN_10325108c(auStack_3e8,0x112f4b310,&UNK_10db9fef0);
    func_0x0001000834e4(auStack_4e8);
    return 0;
  }
  FUN_1031ddc20(auStack_3e8,auStack_510);
  lVar7 = lStack_4c8;
  uVar5 = uStack_4d0;
  func_0x0001000a8868(auStack_4e8,uStack_4d0);
  (**(code **)(lVar7 + 0x30))(auStack_4c0,uVar5,lVar7);
  uStack_128 = uStack_420;
  uStack_130 = uStack_428;
  uStack_120 = uStack_418;
  uStack_10f = uStack_407;
  uStack_168 = uStack_460;
  uStack_170 = uStack_468;
  uStack_158 = uStack_450;
  uStack_160 = uStack_458;
  uStack_148 = uStack_440;
  uStack_150 = uStack_448;
  uStack_138 = uStack_430;
  uStack_140 = uStack_438;
  uStack_1a8 = uStack_4a0;
  lStack_1b0 = lStack_4a8;
  uStack_198 = uStack_490;
  uStack_1a0 = uStack_498;
  uStack_188 = uStack_480;
  uStack_190 = uStack_488;
  uStack_178 = uStack_470;
  uStack_180 = uStack_478;
  plVar9 = &lStack_1b0;
  FUN_103233944();
  if ((int)plVar9 == 1) {
    plVar9 = (long *)0x0;
  }
  else {
    uStack_1d8 = uStack_128;
    uStack_1e0 = uStack_130;
    uStack_1d0 = uStack_120;
    uStack_1bf = uStack_10f;
    uStack_218 = uStack_168;
    uStack_220 = uStack_170;
    uStack_208 = uStack_158;
    uStack_210 = uStack_160;
    uStack_1f8 = uStack_148;
    uStack_200 = uStack_150;
    uStack_1e8 = uStack_138;
    uStack_1f0 = uStack_140;
    uStack_258 = uStack_1a8;
    lStack_260 = lStack_1b0;
    uStack_248 = uStack_198;
    uStack_250 = uStack_1a0;
    uStack_238 = uStack_188;
    uStack_240 = uStack_190;
    uStack_228 = uStack_178;
    uStack_230 = uStack_180;
    func_0x000104411f90();
  }
  func_0x00010322ed34(auStack_4c0);
  lVar7 = lStack_4f0;
  uVar10 = uStack_4f8;
  func_0x0001000a8868(auStack_510,uStack_4f8);
  (**(code **)(lVar7 + 0x30))(auStack_3e8,uVar10,lVar7);
  uStack_78 = uStack_348;
  uStack_80 = uStack_350;
  uStack_70 = uStack_340;
  uStack_5f = uStack_32f;
  uStack_b8 = uStack_388;
  uStack_c0 = uStack_390;
  uStack_a8 = uStack_378;
  uStack_b0 = uStack_380;
  uStack_98 = uStack_368;
  uStack_a0 = uStack_370;
  uStack_88 = uStack_358;
  uStack_90 = uStack_360;
  uStack_f8 = uStack_3c8;
  lStack_100 = lStack_3d0;
  uStack_e8 = uStack_3b8;
  uStack_f0 = uStack_3c0;
  uStack_d8 = uStack_3a8;
  uStack_e0 = uStack_3b0;
  uStack_c8 = uStack_398;
  uStack_d0 = uStack_3a0;
  plVar1 = &lStack_100;
  FUN_103233944();
  if ((int)plVar1 == 1) {
    func_0x00010322ed34(auStack_3e8);
    if (plVar9 == (long *)0x0) {
      plVar1 = (long *)0x0;
LAB_103250fa4:
      plVar3 = plVar1;
      func_0x0001000a8868(auStack_4e8,uStack_4d0);
      uVar5 = uStack_4d0;
      lVar7 = lStack_4c8;
      (**(code **)(lStack_4c8 + 0x48))(uStack_4d0,lStack_4c8);
      func_0x0001000a8868(auStack_510,uStack_4f8);
      uVar10 = uStack_4f8;
      lVar8 = lStack_4f0;
      (**(code **)(lStack_4f0 + 0x48))(uStack_4f8,lStack_4f0);
      uVar6 = uVar5;
      func_0x00010441542c(uVar5,lVar7,uVar10,lVar8);
      func_0x000107c61170(plVar9);
      func_0x0001031e1b60(uVar10,lVar8);
      func_0x0001031e1b60(uVar5,lVar7);
      if ((uVar6 & 1) == 0) {
        if (plVar3 == (long *)0x0) {
          uVar10 = 0;
          goto LAB_103251054;
        }
        goto LAB_103251044;
      }
      uVar10 = 0;
    }
    else {
LAB_103250f98:
      uVar10 = 1;
      plVar3 = plVar9;
    }
  }
  else {
    uStack_288 = uStack_78;
    uStack_290 = uStack_80;
    uStack_280 = uStack_70;
    uStack_26f = uStack_5f;
    uStack_2c8 = uStack_b8;
    uStack_2d0 = uStack_c0;
    uStack_2b8 = uStack_a8;
    uStack_2c0 = uStack_b0;
    uStack_2a8 = uStack_98;
    uStack_2b0 = uStack_a0;
    uStack_298 = uStack_88;
    uStack_2a0 = uStack_90;
    uStack_308 = uStack_f8;
    lStack_310 = lStack_100;
    uStack_2f8 = uStack_e8;
    uStack_300 = uStack_f0;
    uStack_2e8 = uStack_d8;
    uStack_2f0 = uStack_e0;
    uStack_2d8 = uStack_c8;
    uStack_2e0 = uStack_d0;
    func_0x000104411f90();
    func_0x00010322ed34(auStack_3e8);
    plVar3 = plVar1;
    if (plVar9 == (long *)0x0) {
      if (plVar1 == (long *)0x0) goto LAB_103250fa4;
LAB_103251044:
      uVar10 = 1;
    }
    else {
      if (plVar1 == (long *)0x0) goto LAB_103250f98;
      func_0x000100de1f70(0);
      plVar2 = plVar9;
      func_0x000107c61174();
      func_0x000107c61174(plVar1);
      plVar4 = plVar2;
      func_0x000107c60118(plVar2,plVar3);
      func_0x000107c61170(plVar2);
      func_0x000107c61170(plVar3);
      if (((ulong)plVar4 & 1) != 0) goto LAB_103250fa4;
      func_0x000107c61170(plVar2);
      uVar10 = 1;
    }
  }
  func_0x000107c61170(plVar3);
LAB_103251054:
  func_0x0001000834e4(auStack_510);
  func_0x0001000834e4(auStack_4e8);
  return uVar10;
}



/* Entry: 10325108c; end: 1032510cb;  */

undefined8 FUN_10325108c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1032510cc; end: 1032510df;  */

void FUN_1032510cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1032510e0; end: 103251143;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032510e0(byte param_1)

{
  byte bVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_112f4ecf8;
  func_0x000107c61428(unaff_x20 + _DAT_112f4ecf8,auStack_48,1,0);
  bVar1 = *(byte *)(unaff_x20 + lVar2);
  *(byte *)(unaff_x20 + lVar2) = param_1;
  if ((param_1 & 1) != bVar1) {
    func_0x000107c56a14();
  }
  return;
}



/* Entry: 103251144; end: 1032512c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103251144(char param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_112f4ed00;
  func_0x000107c61428(unaff_x20 + _DAT_112f4ed00,auStack_58,1,0);
  cVar3 = *(char *)(unaff_x20 + lVar1);
  *(char *)(unaff_x20 + lVar1) = param_1;
  if (cVar3 != param_1) {
    lVar1 = unaff_x20 + _DAT_112f4ed10;
    lVar2 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,*(undefined8 *)(lVar1 + 0x18));
    (**(code **)(lVar2 + 8))();
  }
  return;
}



/* Entry: 1032512c8; end: 1032512db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032512c8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  double *pdVar1;
  char cVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *unaff_x20;
  double dVar7;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  pdVar1 = (double *)(unaff_x20 + _DAT_112f4ee08);
  func_0x000107c61428(pdVar1,auStack_78,0,0);
  puVar5 = unaff_x20;
  if (*(char *)(pdVar1 + 1) == '\x01') {
    func_0x000107c4aba4();
    func_0x000107c61180();
    puVar4 = unaff_x20;
    func_0x000107c4aba4();
    func_0x000107c61180();
    func_0x000107c3ec60();
    func_0x000107c61170(puVar4);
    func_0x000107c609b0(param_1,param_2,param_3,param_4);
    param_2 = 0x3fe0000000000000;
    param_1 = param_1 * 0.5;
  }
  else {
    param_1 = *pdVar1;
    func_0x000107c4aba4();
    func_0x000107c61180();
  }
  func_0x000107c539d4(param_1);
  func_0x000107c61170(puVar5);
  lVar3 = _DAT_112f4ee10;
  func_0x000107c61428(unaff_x20 + _DAT_112f4ee10,auStack_90,0,0);
  cVar2 = unaff_x20[lVar3];
  puVar5 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (cVar2 == '\x01') {
    puVar4 = unaff_x20;
    func_0x000107c4aba4();
    func_0x000107c61180();
    func_0x000107c3ec60();
    dVar7 = param_1;
    func_0x000107c61170(puVar4);
    func_0x000107c4aba4();
    func_0x000107c61180();
    func_0x000107c407dc();
    func_0x000107c61170(unaff_x20);
    puVar4 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x000107c61168(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    func_0x000107c3e8b0(param_1,param_2,param_3,param_4,dVar7);
    func_0x000107c61180();
    puVar6 = puVar4;
    func_0x000107c3ab30();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c59040(puVar5);
    func_0x000107c61170(puVar5);
    puVar5 = puVar6;
  }
  else {
    func_0x000107c59040(puVar5);
  }
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 1032512dc; end: 1032514db;  */

void FUN_1032512dc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,long *param_6)

{
  double *pdVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *unaff_x20;
  double dVar7;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  pdVar1 = (double *)(unaff_x20 + *param_5);
  func_0x000107c61428(pdVar1,auStack_78,0,0);
  puVar4 = unaff_x20;
  if (*(char *)(pdVar1 + 1) == '\x01') {
    func_0x000107c4aba4();
    func_0x000107c61180();
    puVar3 = unaff_x20;
    func_0x000107c4aba4();
    func_0x000107c61180();
    func_0x000107c3ec60();
    func_0x000107c61170(puVar3);
    func_0x000107c609b0(param_1,param_2,param_3,param_4);
    param_2 = 0x3fe0000000000000;
    param_1 = param_1 * 0.5;
  }
  else {
    param_1 = *pdVar1;
    func_0x000107c4aba4();
    func_0x000107c61180();
  }
  func_0x000107c539d4(param_1);
  func_0x000107c61170(puVar4);
  lVar6 = *param_6;
  func_0x000107c61428(unaff_x20 + lVar6,auStack_90,0,0);
  cVar2 = unaff_x20[lVar6];
  puVar4 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (cVar2 == '\x01') {
    puVar3 = unaff_x20;
    func_0x000107c4aba4();
    func_0x000107c61180();
    func_0x000107c3ec60();
    dVar7 = param_1;
    func_0x000107c61170(puVar3);
    func_0x000107c4aba4();
    func_0x000107c61180();
    func_0x000107c407dc();
    func_0x000107c61170(unaff_x20);
    puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x000107c61168(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    func_0x000107c3e8b0(param_1,param_2,param_3,param_4,dVar7);
    func_0x000107c61180();
    puVar5 = puVar3;
    func_0x000107c3ab30();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c59040(puVar4);
    func_0x000107c61170(puVar4);
    puVar4 = puVar5;
  }
  else {
    func_0x000107c59040(puVar4);
  }
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 1032514dc; end: 1032514df;  */

void FUN_1032514dc(undefined8 param_1,ulong param_2)

{
  func_0x000107c614a8();
  if ((param_2 & 1) == 0) {
    FUN_1032512dc(&DAT_112f4ed20,&DAT_112f4ed28);
  }
  return;
}



/* Entry: 1032514e0; end: 103251587;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1032514e0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f4ed40;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f4ed40);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f4ecc8);
    func_0x000107c44d9c();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c40290(0x4038000000000000);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174(lVar3);
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 103251588; end: 10325160b;  */

void FUN_103251588(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10325160c; end: 1032516ab;  */

void FUN_10325160c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  func_0x000107c610f8();
  FUN_1032516ac(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}



/* Entry: 1032516ac; end: 1032537a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1032516ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             uint param_5,ulong param_6,char param_7,undefined8 param_8,byte param_9,
             undefined1 param_10)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  bool bVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  uint uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long unaff_x20;
  undefined8 uVar22;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined1 auStack_e0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [32];
  
  uVar19 = (uint)param_6;
  func_0x000107c614f0();
  lVar5 = _DAT_112f4ecc0;
  puVar9 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar5) = puVar9;
  lVar5 = _DAT_112f4ecc8;
  puVar9 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar5) = puVar9;
  *(undefined8 *)(unaff_x20 + _DAT_112f4ecd0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4ecd8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4ece0);
  puVar1[1] = 0xc028000000000000;
  *puVar1 = 0xc028000000000000;
  puVar1[3] = 0xc028000000000000;
  puVar1[2] = 0xc028000000000000;
  lVar5 = _DAT_112f4ece8;
  *(undefined1 *)(unaff_x20 + _DAT_112f4ece8) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4ecf0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lVar6 = _DAT_112f4ecf8;
  *(undefined1 *)(unaff_x20 + _DAT_112f4ecf8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f4ed30) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f4ed18) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4ed20);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_112f4ed28) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f4ed38) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f4ed40) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f4ed48) = 0;
  *(char *)(unaff_x20 + _DAT_112f4ed08) = (char)param_6;
  FUN_1032304d4(param_8,unaff_x20 + _DAT_112f4ed10);
  *(char *)(unaff_x20 + _DAT_112f4ed00) = (char)param_5;
  func_0x000107c61428(unaff_x20 + lVar5,auStack_a0,1,0);
  *(byte *)(unaff_x20 + lVar5) = param_9 | (uVar19 & 0xff) == 7;
  func_0x000107c61428(unaff_x20 + lVar6,auStack_b8,1,0);
  *(undefined1 *)(unaff_x20 + lVar6) = param_10;
  puVar9 = &stack0xffffffffffffff38;
  func_0x000107c61154(param_1,param_2,param_3,param_4,puVar9,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61174();
  func_0x000107c52100();
  func_0x000107c55424(puVar9);
  puVar10 = puVar9;
  func_0x000107c44d9c();
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  puVar11 = puVar10;
  func_0x000107c40290(0x4048000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  lVar5 = _DAT_112f4ed38;
  uVar22 = *(undefined8 *)(puVar9 + _DAT_112f4ed38);
  *(undefined **)(puVar9 + _DAT_112f4ed38) = puVar11;
  func_0x000107c61174();
  func_0x000107c61170(uVar22);
  if (puVar11 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1032537a0);
    (*pcVar7)();
  }
  func_0x000107c521e8(puVar11);
  func_0x000107c61170(puVar11);
  puVar10 = puVar9;
  func_0x000107c61174();
  puVar11 = puVar10;
  func_0x000107c5e308();
  func_0x000107c61180();
  puVar12 = puVar10;
  func_0x000107c44d9c(puVar10);
  func_0x000107c61180();
  if ((param_5 & 0xff) == 3) {
    func_0x000107c61170(puVar10);
    puVar13 = puVar11;
    func_0x000107c40288(0x3ff0000000000000,puVar11);
    func_0x000107c61180();
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar12);
    func_0x000107c521e8(puVar13);
    func_0x000107c61170(puVar13);
    if (*(long *)(puVar9 + lVar5) == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1032537a4);
      (*pcVar7)();
    }
    func_0x000107c5784c(0x437a0000);
    func_0x000107c61174(puVar10);
  }
  else {
    puVar9 = puVar11;
    func_0x000107c4029c(0x3ff0000000000000,puVar11);
    func_0x000107c61180();
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar12);
    func_0x000107c521e8(puVar9);
    func_0x000107c61170(puVar9);
  }
  uVar22 = 0;
  FUN_103257b9c(0);
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
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c610f8(uVar22);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c48c2c(uVar22);
  func_0x000107c3d6fc(puVar10);
  func_0x000107c61170(uVar22);
  puVar1 = (undefined8 *)(puVar10 + _DAT_112f4ecc8);
  func_0x000107c53840(*puVar1);
  func_0x000107c5a050(*puVar1);
  func_0x000107c5381c(0x437a0000,*puVar1);
  func_0x000107c537fc(0x437a0000,*puVar1);
  uVar14 = *puVar1;
  func_0x000107c5e308(uVar14);
  func_0x000107c61180();
  uVar15 = *puVar1;
  func_0x000107c44d9c(uVar15);
  func_0x000107c61180();
  uVar22 = uVar14;
  func_0x000107c40280(uVar14);
  func_0x000107c61180();
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c521e8(uVar22);
  func_0x000107c61170(uVar22);
  FUN_1032514e0();
  func_0x000107c521e8();
  func_0x000107c61170(uVar22);
  puVar2 = (undefined8 *)(puVar10 + _DAT_112f4ecc0);
  func_0x000107c5a050(*puVar2);
  func_0x000107c5251c(*puVar2);
  func_0x000107c5670c(0x3fe0000000000000,*puVar2);
  func_0x000107c5381c(0x437a0000,*puVar2);
  func_0x000107c56ba8(*puVar2);
  func_0x000107c55f80(*puVar2);
  func_0x000107c5a100(*puVar2);
  func_0x000107c5523c(*puVar2);
  if ((uVar19 - 5 & 0xff) < 3) {
    bVar8 = param_7 != '\x01';
    puVar20 = (undefined8 *)&UNK_10dfb0f90;
    if (bVar8) {
      puVar20 = (undefined8 *)&UNK_10dfb0fb0;
    }
    puVar21 = (undefined8 *)&UNK_10dfb0f88;
    if (bVar8) {
      puVar21 = (undefined8 *)&UNK_10dfb0fa8;
    }
    puVar3 = (undefined8 *)&UNK_10dfb0f80;
    if (bVar8) {
      puVar3 = (undefined8 *)&UNK_10dfb0fa0;
    }
    puVar4 = (undefined8 *)&UNK_10dfb0f78;
    if (bVar8) {
      puVar4 = (undefined8 *)&UNK_10dfb0f98;
    }
    func_0x000107c54124(*puVar4,*puVar3,*puVar21,*puVar20,puVar10);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar10);
    func_0x000107c3d89c(puVar10);
    func_0x000107c3d89c(puVar10);
    puVar9 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c3d72c(puVar10);
    puVar20 = puVar1;
    puVar21 = puVar2;
    if (((param_6 & 0xff) == 0) ||
       (((uVar19 & 0xff) != 5 && (puVar20 = puVar2, puVar21 = puVar1, (uVar19 & 0xff) != 7)))) {
      puStack_110 = (undefined *)*puVar21;
      uStack_118 = *puVar20;
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
    }
    else {
      puStack_110 = (undefined *)*puVar2;
      uStack_118 = *puVar1;
      uVar22 = *(undefined8 *)(puVar10 + _DAT_112f4ed40);
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c5378c(0x403c000000000000,uVar22);
    }
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar10);
    if (param_7 == '\0') {
      func_0x000107c61170(puVar10);
      puVar11 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168();
      puVar12 = puVar11;
      func_0x0001008478a8();
      func_0x000107c613fc();
      *(undefined8 *)(puVar12 + 0x18) = 5;
      *(undefined8 *)(puVar12 + 0x10) = 2;
      puVar13 = puVar9;
      func_0x000107c4acb0();
      func_0x000107c61180();
      puVar16 = puVar10;
      func_0x000107c4ac04(puVar10);
      func_0x000107c61180();
      puVar17 = puVar16;
      func_0x000107c4acb0();
      func_0x000107c61180();
      func_0x000107c61170(puVar16);
      puVar16 = puVar13;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar13);
      func_0x000107c61170(puVar17);
      *(undefined **)(puVar12 + 0x20) = puVar16;
      puVar13 = puVar9;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      puVar16 = puVar10;
      func_0x000107c4ac04(puVar10);
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      puVar17 = puVar16;
      func_0x000107c5ce8c(puVar16);
      func_0x000107c61180();
      func_0x000107c61170(puVar16);
      puVar16 = puVar13;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar13);
      func_0x000107c61170(puVar17);
      *(undefined **)(puVar12 + 0x28) = puVar16;
    }
    else {
      puVar11 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168();
      puVar12 = puVar11;
      func_0x0001008478a8();
      func_0x000107c613fc();
      *(undefined8 *)(puVar12 + 0x18) = 7;
      *(undefined8 *)(puVar12 + 0x10) = 3;
      puVar13 = puVar9;
      func_0x000107c3f75c();
      func_0x000107c61180();
      puVar16 = puVar10;
      func_0x000107c3f75c(puVar10);
      func_0x000107c61180();
      puVar17 = puVar13;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar13);
      func_0x000107c61170(puVar16);
      puVar13 = puVar17;
      func_0x000107c517b8(0x437a0000);
      func_0x000107c61180();
      func_0x000107c61170(puVar17);
      *(undefined **)(puVar12 + 0x20) = puVar13;
      puVar13 = puVar9;
      func_0x000107c4acb0();
      func_0x000107c61180();
      puVar16 = puVar10;
      func_0x000107c4ac04(puVar10);
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      puVar17 = puVar16;
      func_0x000107c4acb0(puVar16);
      func_0x000107c61180();
      func_0x000107c61170(puVar16);
      puVar16 = puVar13;
      func_0x000107c40294();
      func_0x000107c61180();
      func_0x000107c61170(puVar13);
      func_0x000107c61170(puVar17);
      *(undefined **)(puVar12 + 0x28) = puVar16;
      puVar13 = puVar9;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      puVar16 = puVar10;
      func_0x000107c4ac04(puVar10);
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      puVar17 = puVar16;
      func_0x000107c5ce8c(puVar16);
      func_0x000107c61180();
      func_0x000107c61170(puVar16);
      puVar16 = puVar13;
      func_0x000107c402a4();
      func_0x000107c61180();
      func_0x000107c61170(puVar13);
      func_0x000107c61170(puVar17);
      *(undefined **)(puVar12 + 0x30) = puVar16;
    }
    uVar14 = 0;
    FUN_103254fe4(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    puVar13 = puVar12;
    func_0x000107c5fc48(puVar12,uVar14);
    func_0x000107c61574(puVar12);
    func_0x000107c3d048(puVar11);
    func_0x000107c61170(puVar13);
    lVar5 = _DAT_112f4ece8;
    uVar22 = 0x4018000000000000;
    if (2 < (uVar19 - 5 & 0xff)) {
      uVar22 = 0x4008000000000000;
    }
    func_0x000107c61428(puVar10 + _DAT_112f4ece8,auStack_e0,0,0);
    uVar15 = 0x4024000000000000;
    if (puVar10[lVar5] == '\0') {
      uVar15 = uVar22;
    }
    puVar11 = puStack_110;
    func_0x000107c4acb0();
    func_0x000107c61180();
    uVar22 = uStack_118;
    func_0x000107c5ce8c(uStack_118);
    func_0x000107c61180();
    puVar12 = puVar11;
    func_0x000107c40284(uVar15);
    func_0x000107c61180();
    func_0x000107c61170(puVar11);
    func_0x000107c61170(uVar22);
    uVar22 = *(undefined8 *)(puVar10 + _DAT_112f4ed48);
    *(undefined **)(puVar10 + _DAT_112f4ed48) = puVar12;
    func_0x000107c61174();
    func_0x000107c61170(uVar22);
    puVar11 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168();
    puVar13 = puVar11;
    func_0x0001008478a8();
    func_0x000107c613fc();
    *(undefined8 *)(puVar13 + 0x18) = 0xd;
    *(undefined8 *)(puVar13 + 0x10) = 6;
    uVar22 = uStack_118;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(uStack_118);
    puVar16 = puVar9;
    func_0x000107c4acb0(puVar9);
    func_0x000107c61180();
    uVar15 = uVar22;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar22);
    func_0x000107c61170(puVar16);
    *(undefined8 *)(puVar13 + 0x20) = uVar15;
    *(undefined **)(puVar13 + 0x28) = puVar12;
    func_0x000107c61174(puVar12);
    puVar16 = puStack_110;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(puStack_110);
    puVar17 = puVar9;
    func_0x000107c5ce8c(puVar9);
    func_0x000107c61180();
    puVar18 = puVar16;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar16);
    func_0x000107c61170(puVar17);
    *(undefined **)(puVar13 + 0x30) = puVar18;
    uVar15 = *puVar2;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar16 = puVar10;
    func_0x000107c4ac04(puVar10);
    func_0x000107c61180();
    puVar17 = puVar16;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(puVar16);
    uVar22 = uVar15;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar15);
    func_0x000107c61170(puVar17);
    uVar15 = uVar22;
    func_0x000107c517b8(0x443b8000);
    func_0x000107c61180();
    func_0x000107c61170(uVar22);
    *(undefined8 *)(puVar13 + 0x38) = uVar15;
    uVar15 = *puVar2;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar16 = puVar10;
    func_0x000107c4ac04(puVar10);
    func_0x000107c61180();
    puVar17 = puVar16;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(puVar16);
    uVar22 = uVar15;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar15);
    func_0x000107c61170(puVar17);
    uVar15 = uVar22;
    func_0x000107c517b8(0x443b8000);
    func_0x000107c61180();
    func_0x000107c61170(uVar22);
    *(undefined8 *)(puVar13 + 0x40) = uVar15;
    uVar15 = *puVar1;
    func_0x000107c3f764();
    func_0x000107c61180();
    puVar16 = puVar10;
    func_0x000107c3f764(puVar10);
    func_0x000107c61180();
    func_0x000107c61170(puVar10);
    uVar22 = uVar15;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar15);
    func_0x000107c61170(puVar16);
    *(undefined8 *)(puVar13 + 0x48) = uVar22;
    puVar16 = puVar13;
    func_0x000107c5fc48(puVar13,uVar14);
    func_0x000107c61574(puVar13);
    func_0x000107c3d048(puVar11);
    func_0x000107c61170(puVar16);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(uStack_118);
  }
  else {
    func_0x000107c54124(0x4020000000000000,0x4034000000000000,0x4020000000000000,0x4034000000000000,
                        puVar10);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar10);
    puVar9 = puVar10;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(param_6 & 0xff) {
    case 8:
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c3d89c(puVar10);
      func_0x000107c5378c(0x4048000000000000,*(undefined8 *)(puVar10 + _DAT_112f4ed40));
      puVar11 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168();
      puVar12 = puVar11;
      func_0x0001008478a8();
      func_0x000107c613fc();
      *(undefined8 *)(puVar12 + 0x18) = 5;
      *(undefined8 *)(puVar12 + 0x10) = 2;
      uVar14 = *puVar1;
      func_0x000107c3f75c();
      func_0x000107c61180();
      puVar13 = puVar10;
      func_0x000107c3f75c(puVar10);
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      uVar22 = uVar14;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar14);
      func_0x000107c61170(puVar13);
      *(undefined8 *)(puVar12 + 0x20) = uVar22;
      uVar14 = *puVar1;
      func_0x000107c3f764();
      func_0x000107c61180();
      func_0x000107c3f764(puVar10);
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      uVar22 = uVar14;
      func_0x000107c40280();
      break;
    case 9:
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c3d89c(puVar10);
      func_0x000107c5378c(0x403c000000000000,*(undefined8 *)(puVar10 + _DAT_112f4ed40));
      puVar11 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168();
      puVar12 = puVar11;
      func_0x0001008478a8();
      func_0x000107c613fc();
      *(undefined8 *)(puVar12 + 0x18) = 5;
      *(undefined8 *)(puVar12 + 0x10) = 2;
      uVar14 = *puVar1;
      func_0x000107c3f75c();
      func_0x000107c61180();
      puVar13 = puVar10;
      func_0x000107c3f75c(puVar10);
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      uVar22 = uVar14;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar14);
      func_0x000107c61170(puVar13);
      *(undefined8 *)(puVar12 + 0x20) = uVar22;
      uVar14 = *puVar1;
      func_0x000107c3f764();
      func_0x000107c61180();
      func_0x000107c3f764(puVar10);
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      uVar22 = uVar14;
      func_0x000107c40280();
      break;
    case 10:
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c3d89c(puVar10);
      func_0x000107c5378c(0x4040000000000000,*(undefined8 *)(puVar10 + _DAT_112f4ed40));
      puVar11 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168();
      puVar12 = puVar11;
      func_0x0001008478a8();
      func_0x000107c613fc();
      *(undefined8 *)(puVar12 + 0x18) = 5;
      *(undefined8 *)(puVar12 + 0x10) = 2;
      uVar14 = *puVar1;
      func_0x000107c3f75c();
      func_0x000107c61180();
      puVar13 = puVar10;
      func_0x000107c3f75c(puVar10);
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      uVar22 = uVar14;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar14);
      func_0x000107c61170(puVar13);
      *(undefined8 *)(puVar12 + 0x20) = uVar22;
      uVar14 = *puVar1;
      func_0x000107c3f764();
      func_0x000107c61180();
      func_0x000107c3f764(puVar10);
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      uVar22 = uVar14;
      func_0x000107c40280();
      break;
    case 0xb:
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c3d89c(puVar10);
      func_0x000107c5378c(0x4042000000000000,*(undefined8 *)(puVar10 + _DAT_112f4ed40));
      puVar11 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168();
      puVar12 = puVar11;
      func_0x0001008478a8();
      func_0x000107c613fc();
      *(undefined8 *)(puVar12 + 0x18) = 5;
      *(undefined8 *)(puVar12 + 0x10) = 2;
      uVar14 = *puVar1;
      func_0x000107c3f75c();
      func_0x000107c61180();
      puVar13 = puVar10;
      func_0x000107c3f75c(puVar10);
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      uVar22 = uVar14;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar14);
      func_0x000107c61170(puVar13);
      *(undefined8 *)(puVar12 + 0x20) = uVar22;
      uVar14 = *puVar1;
      func_0x000107c3f764();
      func_0x000107c61180();
      func_0x000107c3f764(puVar10);
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      uVar22 = uVar14;
      func_0x000107c40280();
      break;
    case 0xc:
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c3d89c(puVar10);
      func_0x000107c5378c(0x403a000000000000,*(undefined8 *)(puVar10 + _DAT_112f4ed40));
      puVar11 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168();
      puVar12 = puVar11;
      func_0x0001008478a8();
      func_0x000107c613fc();
      *(undefined8 *)(puVar12 + 0x18) = 5;
      *(undefined8 *)(puVar12 + 0x10) = 2;
      uVar14 = *puVar1;
      func_0x000107c4acb0();
      func_0x000107c61180();
      puVar13 = puVar10;
      func_0x000107c4acb0(puVar10);
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      uVar22 = uVar14;
      func_0x000107c40284(0x4008000000000000);
      func_0x000107c61180();
      func_0x000107c61170(uVar14);
      func_0x000107c61170(puVar13);
      *(undefined8 *)(puVar12 + 0x20) = uVar22;
      uVar14 = *puVar1;
      func_0x000107c3f764();
      func_0x000107c61180();
      func_0x000107c3f764(puVar10);
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      uVar22 = uVar14;
      func_0x000107c40284(0x4000000000000000);
      break;
    case 0xd:
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      puStack_110 = puVar10;
      goto LAB_103253720;
    }
    func_0x000107c61180();
    func_0x000107c61170(uVar14);
    func_0x000107c61170(puVar9);
    *(undefined8 *)(puVar12 + 0x28) = uVar22;
    uVar22 = 0;
    FUN_103254fe4(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    puStack_110 = puVar12;
    func_0x000107c5fc48(puVar12,uVar22);
    func_0x000107c61574(puVar12);
    func_0x000107c3d048(puVar11);
  }
LAB_103253720:
  func_0x000107c61170(puStack_110);
  puVar9 = puVar10 + _DAT_112f4ed10;
  uVar22 = *(undefined8 *)(puVar9 + 0x18);
  lVar5 = *(long *)(puVar9 + 0x20);
  func_0x0001000a8868(puVar9,uVar22);
  (**(code **)(lVar5 + 8))(puVar10,&PTR_DAT_11062bac0,param_5,param_6,uVar22,lVar5);
  func_0x0001000834e4(param_8);
  return puVar10;
}



/* Entry: 1032537a4; end: 1032537cb; -[_TtC20SCContextActionBarUI15ActionBarButton initWithCoder:] */

void FUN_1032537a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000103254804();
  return;
}



/* Entry: 1032537cc; end: 103253843; -[_TtC20SCContextActionBarUI15ActionBarButton intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1032537cc(undefined8 param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  lVar1 = _DAT_112f4ed38;
  lVar4 = *(long *)(param_2 + _DAT_112f4ed38);
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103253840);
    (*pcVar2)();
  }
  lVar3 = param_2;
  func_0x000107c61174();
  func_0x000107c40268(lVar4);
  if (*(long *)(param_2 + lVar1) != 0) {
    uVar5 = param_1;
    func_0x000107c40268();
    func_0x000107c61170(lVar3);
    auVar6._8_8_ = uVar5;
    auVar6._0_8_ = param_1;
    return auVar6;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103253844);
  (*pcVar2)();
}



/* Entry: 103253844; end: 10325396f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103253844(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar3 = _DAT_112f4ecf8;
  func_0x000107c61428(unaff_x20 + _DAT_112f4ecf8,auStack_48,0,0);
  lVar1 = _DAT_112f4ed30;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f4ed30);
  if (*(char *)(unaff_x20 + lVar3) == '\x01') {
    if (lVar2 == 0) {
      FUN_1036e541c();
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c61180();
      func_0x000107c3ec60();
      func_0x000107c54b80(lVar2);
      lVar3 = unaff_x20;
      func_0x000107c4aba4();
      func_0x000107c61180();
      func_0x000107c49770();
      func_0x000107c61170(lVar3);
      lVar3 = unaff_x20;
      func_0x000107c4aba4();
      func_0x000107c61180();
      func_0x000107c562fc();
      func_0x000107c61170(lVar3);
      FUN_1036e4148(0);
      func_0x000107c61170(lVar2);
      lVar3 = *(long *)(unaff_x20 + lVar1);
      *(long *)(unaff_x20 + lVar1) = lVar2;
    }
    else {
      func_0x000107c61174();
      func_0x000107c3ec60();
      func_0x000107c52e44(lVar2);
      lVar3 = lVar2;
    }
  }
  else {
    lVar3 = lVar2;
    if (lVar2 != 0) {
      func_0x000107c4ff30();
      lVar3 = *(long *)(unaff_x20 + lVar1);
    }
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
  }
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 103253970; end: 1032539df; -[_TtC20SCContextActionBarUI15ActionBarButton layoutSubviews] */

void FUN_103253970(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_layoutSubviews_112600e60;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  FUN_1032512dc(&DAT_112f4ed20,&DAT_112f4ed28);
  FUN_103253844();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1032539e0; end: 103253cef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032539e0(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long unaff_x20;
  long lVar8;
  undefined1 auStack_68 [24];
  
  lVar1 = _DAT_112f4ecd0;
  func_0x000107c61428(unaff_x20 + _DAT_112f4ecd0,auStack_68,1,0);
  if (*(long *)(unaff_x20 + lVar1) != 0) {
    func_0x000107c4ff34();
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c3d89c();
  lVar4 = param_1;
  func_0x000107c5a050();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 0xb;
  *(undefined8 *)(lVar4 + 0x10) = 5;
  lVar5 = param_1;
  func_0x000107c3f75c();
  func_0x000107c61180();
  lVar8 = unaff_x20;
  func_0x000107c3f75c();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar8);
  lVar5 = lVar6;
  func_0x000107c517b8(0x437a0000);
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  *(long *)(lVar4 + 0x20) = lVar5;
  lVar5 = param_1;
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar8 = unaff_x20;
  func_0x000107c4ac04();
  func_0x000107c61180();
  lVar6 = lVar8;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  lVar8 = lVar5;
  func_0x000107c40294();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar6);
  *(long *)(lVar4 + 0x28) = lVar8;
  lVar5 = param_1;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar8 = unaff_x20;
  func_0x000107c4ac04();
  func_0x000107c61180();
  lVar6 = lVar8;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  lVar8 = lVar5;
  func_0x000107c402a4();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar6);
  *(long *)(lVar4 + 0x30) = lVar8;
  lVar5 = param_1;
  func_0x000107c3f764();
  func_0x000107c61180();
  lVar8 = unaff_x20;
  func_0x000107c3f764();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar8);
  *(long *)(lVar4 + 0x38) = lVar6;
  lVar5 = param_1;
  func_0x000107c44d9c();
  func_0x000107c61180();
  lVar8 = *(long *)(unaff_x20 + _DAT_112f4ed38);
  if (lVar8 != 0) {
    puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    func_0x000107c40268(lVar8);
    lVar8 = lVar5;
    func_0x000107c402b0();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    *(long *)(lVar4 + 0x40) = lVar8;
    uVar3 = 0;
    FUN_103254fe4(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar5 = lVar4;
    func_0x000107c5fc48(lVar4,uVar3);
    func_0x000107c61574(lVar4);
    func_0x000107c3d048(puVar7);
    func_0x000107c61170(lVar5);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = param_1;
    func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103253cf0);
  (*pcVar2)();
}



/* Entry: 103253cf0; end: 103253d87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103253cf0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  if ((param_2 != 1) && (*(char *)(unaff_x20 + _DAT_112f4ed08) != '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00010c181f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,*(undefined8 *)(unaff_x20 + _DAT_112f4ecc0),
               PTR_s_setContentHuggingPriority_forAxi_11263e1e0,param_2);
    return;
  }
  func_0x000107c61154(param_1,&stack0xffffffffffffffc0,
                      PTR_s_setContentHuggingPriority_forAxi_11263e1e0,param_2);
  return;
}



/* Entry: 103253d88; end: 103253eb7; -[_TtC20SCContextActionBarUI15ActionBarButton setContentHuggingPriority:forAxis:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103253d88(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_2;
  func_0x000107c614f0();
  if ((param_4 != 1) && (*(char *)(param_2 + _DAT_112f4ed08) != '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00010c181f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,*(undefined8 *)(param_2 + _DAT_112f4ecc0),
               PTR_s_setContentHuggingPriority_forAxi_11263e1e0,param_4);
    return;
  }
  lStack_40 = param_2;
  lStack_38 = lVar1;
  func_0x000107c61154(param_1,&lStack_40,PTR_s_setContentHuggingPriority_forAxi_11263e1e0,param_4);
  return;
}



/* Entry: 103253eb8; end: 103253f4f; -[_TtC20SCContextActionBarUI15ActionBarButton setContentCompressionResistancePriority:forAxis:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103253eb8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_2;
  func_0x000107c614f0();
  if ((param_4 != 1) && (*(char *)(param_2 + _DAT_112f4ed08) != '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00010c181cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,*(undefined8 *)(param_2 + _DAT_112f4ecc0),
               PTR_s_setContentCompressionResistanceP_11263e150,param_4);
    return;
  }
  lStack_40 = param_2;
  lStack_38 = lVar1;
  func_0x000107c61154(param_1,&lStack_40,PTR_s_setContentCompressionResistanceP_11263e150,param_4);
  return;
}



/* Entry: 103253f50; end: 103253f97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103253f50(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  code *pcVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = _DAT_112f4ed38;
  param_2[1] = unaff_x20;
  param_2[2] = lVar1;
  if (*(long *)(unaff_x20 + lVar1) != 0) {
    func_0x000107c40268();
    *param_2 = param_1;
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = FUN_103253f98;
    return auVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103253f98);
  (*pcVar2)();
}



/* Entry: 103253f98; end: 103253fbf;  */

void FUN_103253f98(undefined8 *param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1[1] + param_1[2]);
  if ((param_2 & 1) == 0) {
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103253fc0);
      (*pcVar1)();
    }
  }
  else if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103253fac);
    (*pcVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c181150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*param_1,lVar2,PTR_s_setConstant__11263de70);
  return;
}



/* Entry: 103253fc0; end: 10325408b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103253fc0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  code *pcVar3;
  long lVar4;
  undefined1 auStack_48 [24];
  
  uVar2 = 0;
  FUN_103257b9c(0);
  lVar4 = param_1;
  func_0x000107c61480(param_1,uVar2);
  if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + _DAT_112f4ee60), lVar4 != 0)) {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4ecd8);
    func_0x000107c61428(puVar1,auStack_48,0,0);
    pcVar3 = (code *)*puVar1;
    if (pcVar3 != (code *)0x0) {
      uVar2 = puVar1[1];
      func_0x000107c61174(param_1);
      func_0x000107c61174(lVar4);
      FUN_1032510cc(pcVar3,uVar2);
      (*pcVar3)(lVar4);
      func_0x000107c61170(param_1);
      func_0x000107c61170(lVar4);
      func_0x00010324e128(pcVar3,uVar2);
    }
  }
  return;
}



/* Entry: 10325408c; end: 1032540db; -[_TtC20SCContextActionBarUI15ActionBarButton _didTap:] */

/* WARNING: Possible PIC construction at 0x0001032540c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032540c8) */

void FUN_10325408c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_103253fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1032540dc; end: 10325414b; -[_TtC20SCContextActionBarUI15ActionBarButton pointInside:withEvent:] */

uint FUN_1032540dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_103254964(param_1,param_2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return (uint)uVar1 & 1;
}


