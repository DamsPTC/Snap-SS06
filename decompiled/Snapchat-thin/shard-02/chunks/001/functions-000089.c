/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10191d208; end: 10191d20b;  */

void FUN_10191d208(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    lVar5 = *(long *)(lVar2 + 0x10);
    func_0x000107c61174();
    func_0x000107c61574(lVar2);
    lVar2 = lVar5;
    func_0x000107c444a4();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    lVar5 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar5 != 0) {
      lVar3 = 0;
      func_0x000100b90e4c();
      lVar2 = lVar3;
      func_0x000107c613fc();
      func_0x000107c61174();
      lVar4 = lVar5;
      func_0x000107c3d9dc();
      func_0x000107c61180();
      if (lVar4 != 0) {
        func_0x000107c61170(lVar5);
        *(long *)(lVar2 + 0x10) = lVar4;
        *(undefined1 *)(lVar2 + 0x18) = 2;
        param_1[3] = lVar3;
        param_1[4] = (long)&PTR_DAT_110412c58;
        func_0x000107c61170(lVar5);
        *param_1 = lVar2;
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10191c148);
      (*pcVar1)();
    }
  }
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10191d20c; end: 10191d4ab;  */

void FUN_10191d20c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lStack_70;
  undefined8 uStack_68;
  
  puVar4 = PTR_PTR_1126a7dd8;
  func_0x000107c610f8(PTR_PTR_1126a7dd8);
  func_0x000107c453e4();
  uVar5 = param_1;
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c522e0(puVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c52990(puVar4);
  func_0x000107c61170(param_3);
  lStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x41);
  func_0x000107c5fb78(0xd000000000000027,0x800000010efc0b10);
  func_0x000107c5fb78(param_1,param_2);
  func_0x000107c5fb78(0x6449736e654c202c,0xea0000000000203a);
  func_0x000107c5fb78(param_5,param_6);
  func_0x000107c5fb78(0x6567617373654d20,0xea0000000000203a);
  func_0x000107c5fb78(param_9,param_10);
  uVar5 = uStack_68;
  lVar6 = lStack_70;
  func_0x000107c5fadc(lStack_70,uStack_68);
  func_0x000107c6142c(uVar5);
  func_0x000107c5662c(puVar4);
  func_0x000107c61170(lVar6);
  func_0x000107c5fadc(param_7,param_8);
  func_0x000107c54714(puVar4);
  func_0x000107c61170(param_7);
  bVar3 = *(byte *)(unaff_x20 + 0x18);
  uVar7 = 0x5241435f534e454c;
  uVar5 = 0x5241435f4b4c4154;
  if (bVar3 != 2) {
    uVar5 = 0x545845544e4f43;
  }
  uVar1 = 0xed00004c4553554f;
  if (bVar3 != 2) {
    uVar1 = 0xe700000000000000;
  }
  uVar2 = 0xed00004c4553554f;
  if (bVar3 != 0) {
    uVar7 = 0xd000000000000010;
    uVar2 = 0x800000010efc07b0;
  }
  if (bVar3 < 2) {
    uVar1 = uVar2;
    uVar5 = uVar7;
  }
  func_0x000107c5fadc(uVar5,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c52f84(puVar4);
  func_0x000107c61170(uVar5);
  func_0x0001000d224c(&lStack_70);
  lVar6 = lStack_70;
  if (lStack_70 != 0) {
    func_0x000107c4bfb0(lStack_70);
    func_0x000107c615e8(lVar6);
  }
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 10191d4ac; end: 10191d4ef;  */

void FUN_10191d4ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10191d4f0; end: 10191d51f;  */

void FUN_10191d4f0(void)

{
  FUN_10191d20c();
  return;
}



/* Entry: 10191d520; end: 10191d6fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10191d520(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lStack_c8;
  long lStack_c0;
  long alStack_b8 [3];
  long lStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x0001000d224c(alStack_b8);
  if (lStack_a0 == 0) {
    func_0x00010191d7a0(alStack_b8,0x112dd4238,&UNK_10d996eb0);
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x0001000a8868(alStack_b8,lStack_a0);
    (**(code **)((long)ppuStack_98 + 8))(&uStack_90,param_1,lStack_a0,ppuStack_98);
    func_0x0001000834e4(alStack_b8);
  }
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = 0;
  func_0x00010191d4d0();
  lVar5 = lVar4;
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = uVar8;
  *(char *)(lVar5 + 0x18) = (char)param_1;
  ppuStack_98 = &PTR_DAT_110412ed0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar6 = 0;
  alStack_b8[0] = lVar5;
  lStack_a0 = lVar4;
  FUN_10191f4ec();
  lVar5 = lVar6;
  func_0x000107c610f8();
  func_0x00010191d758(&uStack_90,lVar5 + _DAT_112dd4250,0x112dd4240,&UNK_10d996f00);
  func_0x00010191d758(alStack_b8,lVar5 + _DAT_112dd4258,0x112dd4248,&UNK_10d996ec0);
  *(undefined8 *)(lVar5 + _DAT_112dd4260) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112dd4268) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_c8 = lVar5;
  lStack_c0 = lVar6;
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61174(uVar2);
  plVar7 = &lStack_c8;
  func_0x000107c61154(plVar7,puVar3);
  func_0x00010191d7a0(&uStack_90,0x112dd4240,&UNK_10d996f00);
  func_0x00010191d7a0(alStack_b8,0x112dd4248,&UNK_10d996ec0);
  return plVar7;
}



/* Entry: 10191d6fc; end: 10191d737;  */

void FUN_10191d6fc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10191d738; end: 10191d7df;  */

void FUN_10191d738(void)

{
  FUN_10191d520();
  return;
}



/* Entry: 10191d7e0; end: 10191e567;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10191d7e0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                   undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong uVar11;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long unaff_x20;
  undefined8 *puVar12;
  undefined *unaff_x21;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uVar17;
  code *pcVar18;
  long lVar19;
  long alStack_1c0 [4];
  ulong auStack_1a0 [4];
  ulong uStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 *puStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_120;
  undefined8 uStack_118;
  char cStack_110;
  undefined *puStack_108;
  int aiStack_100 [6];
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 *puStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  
  lVar3 = 0;
  lStack_170 = param_5;
  uStack_148 = param_6;
  uStack_140 = param_2;
  func_0x000100b915bc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar14 = (long)auStack_1a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000100b919a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar19 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000100b91790();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar10 = lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112d3b130;
  puVar15 = (undefined8 *)&UNK_10d904950;
  auStack_1a0[2] = lVar10;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar13 = (undefined8 *)(lVar10 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = 0;
  puStack_158 = (undefined *)((long)puVar13 - extraout_x12);
  func_0x000100b91584();
  puStack_150 = *(undefined **)(lVar3 + -8);
  lStack_160 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)((long)puStack_150 + 0x40));
  uVar11 = ((long)puVar13 - extraout_x12) - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  uStack_180 = uVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = uVar11 - extraout_x12_00;
  auStack_1a0[3] = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = lVar3 - extraout_x12_01;
  lStack_178 = lVar3;
  func_0x000107c614f0();
  func_0x000101924a50();
  uVar11 = *(ulong *)(param_1 + _DAT_112dd4498);
  puStack_168 = puVar13;
  if (param_4 == 0) {
    func_0x000107c61174(uVar11);
    lVar16 = 0;
    lVar10 = 0;
    puVar13 = (undefined8 *)0xe000000000000000;
    puVar12 = (undefined8 *)0xe000000000000000;
  }
  else {
    func_0x000107c61174(uVar11);
    lVar16 = param_4;
    func_0x000107c3d470();
    func_0x000107c61180();
    if (lVar16 == 0) {
      lVar10 = 0;
      puVar12 = (undefined8 *)0xe000000000000000;
      puVar13 = puVar15;
    }
    else {
      lVar10 = lVar16;
      func_0x000107c5faec();
      puVar13 = puVar15;
      func_0x000107c61170(lVar16);
      puVar12 = puVar15;
    }
    lVar4 = param_4;
    func_0x000107c3d474();
    func_0x000107c61180();
    if (lVar4 == 0) {
      lVar16 = 0;
      puVar13 = (undefined8 *)0xe000000000000000;
    }
    else {
      lVar16 = lVar4;
      func_0x000107c5faec();
      func_0x000107c61170(lVar4);
    }
  }
  uVar5 = uVar11;
  func_0x000107c3d3e4();
  if ((int)uVar5 == 4) {
    uVar5 = uVar11;
    func_0x000107c51a84();
    func_0x000107c61180();
    if (uVar5 != 0) {
      uVar6 = uVar5;
      func_0x000107c3e2e0();
      func_0x000107c61180();
      puVar7 = puStack_158;
      lVar4 = lStack_160;
      if (uVar6 != 0) {
        uStack_d8 = uStack_140;
        uStack_a0 = 0x13;
        uStack_a8 = 9;
        uStack_90 = 0;
        uStack_98 = 0;
        uStack_80 = 0;
        uStack_88 = 0;
        uStack_78 = 1;
        uStack_70 = 0;
        pcVar18 = *(code **)((long)puStack_150 + 0x38);
        uVar9 = 1;
        auStack_1a0[0] = uVar5;
        auStack_1a0[1] = uVar6;
        uStack_d0 = param_3;
        lStack_c8 = lVar10;
        puStack_c0 = puVar12;
        lStack_b8 = lVar16;
        puStack_b0 = puVar13;
        (*pcVar18)(puStack_158,1,1,lStack_160);
        uVar5 = auStack_1a0[1];
        func_0x000107c61434(param_3);
        uVar6 = uVar5;
        func_0x000107c3e318();
        iVar2 = (int)uVar6;
        if (iVar2 == 1) {
          uVar6 = uVar5;
          func_0x000107c3dde0();
          func_0x000107c61180();
          if (uVar6 == 0) goto LAB_10191e354;
          if (param_4 == 0) {
LAB_10191e09c:
            lVar10 = 0;
            uVar9 = 0;
          }
          else {
            func_0x000107c5b0ac();
            func_0x000107c61180();
            if (param_4 == 0) goto LAB_10191e09c;
            lVar10 = param_4;
            func_0x000107c5faec();
            uVar5 = auStack_1a0[1];
            func_0x000107c61170(param_4);
          }
          uVar1 = auStack_1a0[2];
          if (lStack_170 == 0) {
            uVar17 = 0;
          }
          else {
            uVar17 = *(undefined8 *)(lStack_170 + _DAT_113012d60);
            func_0x000107c61174(uVar17);
          }
          FUN_10191f50c(uVar1,uStack_148,param_7,uVar6,lVar10,uVar9,&uStack_d8,uVar17);
          puVar7 = puStack_158;
          if (unaff_x21 != (undefined *)0x0) {
            func_0x000107c61170(auStack_1a0[0]);
            func_0x000107c61170(uVar6);
            func_0x000107c61170(uVar17);
            func_0x000107c6142c(uVar9);
LAB_10191e1e4:
            FUN_10192246c(&uStack_d8);
            func_0x000107c61170(uVar5);
            puVar7 = puStack_158;
LAB_10191e2dc:
            puVar13 = (undefined8 *)0x112d3b130;
            func_0x000101922538(puVar7,0x112d3b130,&UNK_10d904950);
            goto LAB_10191dc4c;
          }
          func_0x000101922538(puStack_158,0x112d3b130,&UNK_10d904950);
          func_0x000107c61170(uVar6);
          func_0x000107c61170(uVar17);
          func_0x000107c6142c(uVar9);
          func_0x0001019225b4(uVar1,puVar7,&SUB_100b91790);
          uVar9 = 1;
LAB_10191e32c:
          lVar4 = lStack_160;
          func_0x000107c6159c(puVar7,lStack_160,uVar9);
          (*pcVar18)(puVar7,0,1,lVar4);
        }
        else {
          if (iVar2 == 3) {
            uVar6 = uVar5;
            func_0x000107c5e284();
            func_0x000107c61180();
            if (uVar6 == 0) goto LAB_10191e354;
            if (lStack_170 == 0) {
              uVar9 = 0;
            }
            else {
              uVar9 = *(undefined8 *)(lStack_170 + _DAT_113012d50);
              func_0x000107c61174(uVar9);
            }
            FUN_101920eb8(lVar14,uVar6,param_4,&uStack_d8,uVar9);
            puVar7 = puStack_158;
            if (unaff_x21 != (undefined *)0x0) {
              func_0x000107c61170(auStack_1a0[0]);
              func_0x000107c61170(uVar6);
              func_0x000107c61170(uVar9);
              goto LAB_10191e1e4;
            }
            func_0x000101922538(puStack_158,0x112d3b130,&UNK_10d904950);
            func_0x000107c61170(uVar6);
            func_0x000107c61170(uVar9);
            func_0x0001019225b4(lVar14,puVar7,&SUB_100b915bc);
            uVar9 = 0;
            goto LAB_10191e32c;
          }
          if (iVar2 == 4) {
            uVar6 = uVar5;
            func_0x000107c414c4();
            func_0x000107c61180();
            if (uVar6 != 0) {
              if (lStack_170 == 0) {
                uVar9 = 0;
              }
              else {
                uVar9 = *(undefined8 *)(lStack_170 + _DAT_113012d58);
                func_0x000107c61174(uVar9);
              }
              FUN_10191fde0(lVar19,uVar6,param_4,&uStack_d8,uVar9);
              if (unaff_x21 == (undefined *)0x0) {
                func_0x000101922538(puVar7,0x112d3b130,&UNK_10d904950);
                func_0x000107c61170(uVar6);
                func_0x000107c61170(uVar9);
                func_0x0001019225b4(lVar19,puVar7,&SUB_100b919a8);
                uVar9 = 2;
                goto LAB_10191e32c;
              }
              func_0x000107c61170(auStack_1a0[0]);
              func_0x000107c61170(uVar6);
              func_0x000107c61170(uVar9);
              FUN_10192246c(&uStack_d8);
              func_0x000107c61170(uVar5);
              goto LAB_10191e2dc;
            }
          }
        }
LAB_10191e354:
        puVar15 = puStack_168;
        func_0x0001019224f0(puVar7,puStack_168,0x112d3b130,&UNK_10d904950);
        puVar13 = puVar15;
        (**(code **)((long)puStack_150 + 0x30))(puVar15,1,lVar4);
        if ((int)puVar13 != 1) {
          FUN_10192246c(&uStack_d8);
          func_0x000101922538(puVar7,0x112d3b130,&UNK_10d904950);
          uVar5 = auStack_1a0[3];
          func_0x0001019225b4(puVar15,auStack_1a0[3],&SUB_100b91584);
          lVar3 = lStack_178;
          func_0x0001019225b4(uVar5,lStack_178,&SUB_100b91584);
          func_0x0001019224f0(unaff_x20 + _DAT_112dd4250,aiStack_100,0x112dd4240,&UNK_10d996f00);
          if (lStack_e8 == 0) {
            func_0x000101922538(aiStack_100,0x112dd4240,&UNK_10d996f00);
          }
          else {
            func_0x0001000a8868(aiStack_100,lStack_e8);
            (**(code **)(lStack_e0 + 8))(lVar3,lStack_e8,lStack_e0);
            FUN_101922fd0(aiStack_100);
          }
          func_0x0001041bb118(0);
          uVar5 = uStack_180;
          func_0x000100e3aef4(lVar3,uStack_180);
          func_0x0001041b84d4(uVar5);
          func_0x000107c61170(uVar11);
          func_0x000107c61170(auStack_1a0[1]);
          func_0x000107c61170(auStack_1a0[0]);
          func_0x000101922578(lVar3,&SUB_100b91584);
          return uVar5;
        }
        puVar13 = (undefined8 *)0x112d3b130;
        func_0x000101922538(puVar15,0x112d3b130,&UNK_10d904950);
        FUN_1019223f8();
        unaff_x21 = &UNK_1107154a0;
        func_0x000107c613f8(&UNK_1107154a0,puVar15,0,0);
        puVar15[1] = 0;
        *puVar15 = 2;
        *(undefined1 *)(puVar15 + 2) = 2;
        func_0x000107c61654();
        func_0x000107c61170(auStack_1a0[0]);
        FUN_10192246c(&uStack_d8);
        func_0x000107c61170(auStack_1a0[1]);
        func_0x000101922538(puVar7,0x112d3b130,&UNK_10d904950);
        goto LAB_10191dc4c;
      }
      func_0x000107c61170(uVar5);
    }
    func_0x000107c6142c(puVar12);
    func_0x000107c6142c();
    FUN_1019223f8();
    unaff_x21 = &UNK_1107154a0;
    func_0x000107c613f8(&UNK_1107154a0,puVar13,0,0);
    uVar9 = 2;
  }
  else {
    func_0x000107c6142c(puVar12);
    func_0x000107c6142c();
    FUN_1019223f8();
    unaff_x21 = &UNK_1107154a0;
    func_0x000107c613f8(&UNK_1107154a0,puVar13,0,0);
    uVar9 = 1;
  }
  puVar13[1] = 0;
  *puVar13 = uVar9;
  *(undefined1 *)(puVar13 + 2) = 2;
  func_0x000107c61654();
LAB_10191dc4c:
  uVar5 = uVar11;
  func_0x000107c61174();
  FUN_101923500();
  iVar2 = (int)uVar11;
  if ((uVar11 & 0xff00000000) == 0x100000000) {
    if (iVar2 < 2) {
      puVar15 = (undefined8 *)0xe700000000000000;
      if (iVar2 == 0) {
        puStack_150 = (undefined *)0x4e574f4e4b4e55;
      }
      else {
        puStack_150 = (undefined *)0x57454956424557;
      }
    }
    else if (iVar2 == 2) {
      puVar15 = (undefined8 *)0xeb000000004c4c41;
      puStack_150 = (undefined *)0x54534e495f505041;
    }
    else if (iVar2 == 3) {
      puVar15 = (undefined8 *)0xe800000000000000;
      puStack_150 = (undefined *)0x4b4e494c50454544;
    }
    else {
      puVar15 = (undefined8 *)0xee004f454449565f;
      puStack_150 = (undefined *)0x4d524f46474e4f4c;
    }
  }
  else {
    puVar7 = PTR___ss5Int32VN_11034ee20;
    puVar13 = (undefined8 *)PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
    aiStack_100[0] = iVar2;
    func_0x000107c6057c(PTR___ss5Int32VN_11034ee20,
                        PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
    puVar15 = puVar13;
    puStack_150 = puVar7;
  }
  puVar7 = unaff_x21;
  FUN_101923604();
  puVar8 = puVar7;
  puVar12 = puVar13;
  func_0x000103e16228();
  puStack_158 = puVar8;
  func_0x0001019224f0(unaff_x20 + _DAT_112dd4250,aiStack_100,0x112dd4240,&UNK_10d996f00);
  lVar14 = lStack_e0;
  lVar10 = lStack_e8;
  if (lStack_e8 == 0) {
    FUN_101922438(puVar7,puVar13);
    func_0x000101922538(aiStack_100,0x112dd4240,&UNK_10d996f00);
  }
  else {
    func_0x0001000a8868(aiStack_100,lStack_e8);
    (**(code **)(lVar14 + 0x18))(uVar11 & 0xffffffffff,puVar7,puVar13,lVar10,lVar14);
    FUN_101922438(puVar7,puVar13);
    FUN_101922fd0(aiStack_100);
  }
  func_0x0001019224f0(unaff_x20 + _DAT_112dd4258,aiStack_100,0x112dd4248,&UNK_10d996ec0);
  if (lStack_e8 == 0) {
    func_0x000107c6142c(puVar12);
    func_0x000107c6142c(puVar15);
    func_0x000107c61170(uVar5);
    func_0x000101922538(aiStack_100,0x112dd4248,&UNK_10d996ec0);
  }
  else {
    func_0x0001000a8868(aiStack_100,lStack_e8);
    puStack_108 = unaff_x21;
    func_0x000107c61434(param_3);
    func_0x000107c61434(param_7);
    func_0x000107c614b0(unaff_x21);
    uVar9 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar13 = &uStack_120;
    func_0x000107c6147c(puVar13,&puStack_108,uVar9,&UNK_1107154a0,6);
    if ((int)puVar13 == 0) {
      uStack_118 = 0x800000010efc0b40;
      uStack_120 = 0xd000000000000014;
    }
    else if (cStack_110 != '\x01') {
      func_0x00010192244c(uStack_120,uStack_118);
      uStack_118 = 0xe300000000000000;
      uStack_120 = 0x412f4e;
    }
    pcVar18 = *(code **)(lStack_e0 + 8);
    *(long *)(lVar3 + -0x10) = lStack_e8;
    *(long *)(lVar3 + -8) = lStack_e0;
    *(undefined8 *)(lVar3 + -0x20) = uStack_120;
    *(undefined8 *)(lVar3 + -0x18) = uStack_118;
    (*pcVar18)(uStack_140,param_3,puStack_150,puVar15,uStack_148,param_7,puStack_158,puVar12);
    func_0x000107c6142c(puVar12);
    func_0x000107c6142c(puVar15);
    func_0x000107c6142c(param_3);
    func_0x000107c6142c(param_7);
    func_0x000107c6142c(uStack_118);
    func_0x000107c61170(uVar5);
    FUN_101922fd0(aiStack_100);
  }
  func_0x000107c61654();
  func_0x000107c61170(uVar5);
  return uVar5;
}



/* Entry: 10191e568; end: 10191ec0b; -[_TtC32AdRenderDataMapperImplementation32AdRenderDataMapperImplementation adAttachmentModelFrom:adId:unlockableTrackInfo:callbacks:lensId:error:] */

/* WARNING: Removing unreachable block (ram,0x00010191e64c) */
/* WARNING: Removing unreachable block (ram,0x00010191e684) */
/* WARNING: Removing unreachable block (ram,0x00010191e654) */

void FUN_10191e568(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c5faec(param_4);
  uVar4 = param_2;
  func_0x000107c5faec(param_7);
  func_0x000107c615f0(param_3);
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  uVar2 = param_6;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_1);
  uVar3 = param_3;
  FUN_10191d7e0(param_3,param_4,param_2,param_5,param_6,param_7,uVar4);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10191ec0c; end: 10191ecd3; -[_TtC32AdRenderDataMapperImplementation32AdRenderDataMapperImplementation adPlayableModelFrom:adId:unlockableTrackInfo:lensId:] */

void FUN_10191ec0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_4);
  uVar2 = param_2;
  func_0x000107c5faec(param_6);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101922a1c(param_3,param_4,param_2,param_6,uVar2);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10191ecd4; end: 10191f07b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10191ecd4(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long unaff_x20;
  long unaff_x21;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  char cStack_90;
  undefined1 auStack_88 [24];
  long lStack_70;
  long lStack_68;
  undefined *puStack_58;
  
  uVar1 = (uint)(param_2 >> 0x20);
  uVar10 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar10 == 0) {
      if ((param_2 & 0xff000000000000) != 0) {
LAB_10191ed38:
        func_0x000107c610f8(PTR_PTR_1126bd4d8);
        func_0x00010006c00c(param_1,param_2);
        plVar2 = param_1;
        FUN_101922db0(param_1,param_2);
        func_0x00010006c090(param_1,param_2);
        if (unaff_x21 == 0) {
          lVar8 = 0;
          func_0x000101924a30();
          lVar9 = lVar8;
          func_0x000107c610f8();
          *(long **)(lVar9 + _DAT_112dd4498) = plVar2;
          lStack_b0 = lVar9;
          lStack_a8 = lVar8;
          func_0x000107c61154(&lStack_b0,PTR_s_init_1125d9248);
          return;
        }
        FUN_1019223f8();
        puVar3 = &UNK_1107154a0;
        func_0x000107c613f8(&UNK_1107154a0,param_1,0,0);
        *param_1 = unaff_x21;
        param_1[1] = 0;
        *(undefined1 *)(param_1 + 2) = 0;
        goto LAB_10191edf4;
      }
    }
    else if ((long)(int)param_1 != (long)param_1 >> 0x20) goto LAB_10191ed38;
  }
  else if ((uVar10 == 2) && (param_1[2] != param_1[3])) goto LAB_10191ed38;
  FUN_1019223f8();
  puVar3 = &UNK_1107154a0;
  func_0x000107c613f8(&UNK_1107154a0,param_1,0,0);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 2;
LAB_10191edf4:
  func_0x000107c61654();
  func_0x000107c61654();
  puVar4 = puVar3;
  FUN_101923604();
  puVar5 = puVar4;
  plVar2 = param_1;
  func_0x000103e16228();
  func_0x0001019224f0(unaff_x20 + _DAT_112dd4250,auStack_88,0x112dd4240,&UNK_10d996f00);
  lVar8 = lStack_68;
  lVar9 = lStack_70;
  if (lStack_70 == 0) {
    FUN_101922438(puVar4,param_1);
    func_0x000101922538(auStack_88,0x112dd4240,&UNK_10d996f00);
  }
  else {
    func_0x0001000a8868(auStack_88,lStack_70);
    (**(code **)(lVar8 + 0x18))(0x100000000,puVar4,param_1,lVar9,lVar8);
    FUN_101922438(puVar4,param_1);
    FUN_101922fd0(auStack_88);
  }
  func_0x0001019224f0(unaff_x20 + _DAT_112dd4258,auStack_88,0x112dd4248,&UNK_10d996ec0);
  if (lStack_70 == 0) {
    func_0x000107c6142c(plVar2);
    func_0x000101922538(auStack_88,0x112dd4248,&UNK_10d996ec0);
  }
  else {
    func_0x0001000a8868(auStack_88,lStack_70);
    puStack_58 = puVar3;
    func_0x000107c61434(param_4);
    func_0x000107c61434(param_6);
    func_0x000107c614b0(puVar3);
    uVar6 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar7 = &uStack_a0;
    func_0x000107c6147c(puVar7,&puStack_58,uVar6,&UNK_1107154a0,6);
    if ((int)puVar7 == 0) {
      uStack_98 = 0x800000010efc0b40;
      uStack_a0 = 0xd000000000000014;
    }
    else if (cStack_90 != '\x01') {
      func_0x00010192244c(uStack_a0,uStack_98);
      uStack_98 = 0xe300000000000000;
      uStack_a0 = 0x412f4e;
    }
    (**(code **)(lStack_68 + 8))
              (param_3,param_4,0x4e574f4e4b4e55,0xe700000000000000,param_5,param_6,puVar5,plVar2,
               uStack_a0,uStack_98,lStack_70,lStack_68);
    func_0x000107c6142c(plVar2);
    func_0x000107c6142c(param_4);
    func_0x000107c6142c(param_6);
    func_0x000107c6142c(uStack_98);
    FUN_101922fd0(auStack_88);
  }
  func_0x000107c61654();
  return;
}



/* Entry: 10191f07c; end: 10191f2cb; -[_TtC32AdRenderDataMapperImplementation32AdRenderDataMapperImplementation adAttachmentModelWithAdRenderData:adId:callbacks:lensId:error:] */

void FUN_10191f07c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_1);
  func_0x000107c5ee30();
  uVar7 = param_2;
  func_0x000107c61170(puVar1);
  uVar2 = param_4;
  func_0x000107c5faec(param_4);
  uVar8 = uVar7;
  func_0x000107c61170(param_4);
  uVar3 = param_6;
  func_0x000107c5faec(param_6);
  func_0x000107c61170(param_6);
  puVar1 = param_3;
  FUN_10191ecd4(param_3,param_2,uVar2,uVar7,uVar3,uVar8);
  puVar5 = puVar1;
  func_0x000107c61494();
  if (puVar5 == (undefined8 *)0x0) {
    func_0x000107c615e8();
    FUN_1019223f8();
    puVar6 = &UNK_1107154a0;
    func_0x000107c613f8(&UNK_1107154a0,puVar1,0,0);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 2;
    func_0x000107c61654();
    func_0x000107c6142c(uVar7);
    func_0x000107c6142c(uVar8);
    func_0x00010006c090(param_3,param_2);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_1);
    if (param_7 == (undefined8 *)0x0) {
      func_0x000107c614ac(puVar6);
      puVar5 = (undefined8 *)0x0;
    }
    else {
      puVar4 = puVar6;
      func_0x000107c5ed2c();
      func_0x000107c614ac(puVar6);
      func_0x000107c61104(puVar4);
      puVar5 = (undefined8 *)0x0;
      *param_7 = puVar4;
    }
  }
  else {
    func_0x000107c615f0(puVar1);
    FUN_10191d7e0(puVar5,uVar2,uVar7,0,param_5,uVar3,uVar8);
    func_0x000107c6142c(uVar7);
    func_0x000107c6142c(uVar8);
    func_0x000107c615ec(puVar1,2);
    func_0x00010006c090(param_3,param_2);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10191f2cc; end: 10191f2d7; -[_TtC32AdRenderDataMapperImplementation32AdRenderDataMapperImplementation extensionKey] */

void FUN_10191f2cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (&PTR____CFConstantStringClassReference_110da03f8);
  return;
}



/* Entry: 10191f2d8; end: 10191f417; -[_TtC32AdRenderDataMapperImplementation32AdRenderDataMapperImplementation lensExtensionFromData:error:] */

/* WARNING: Removing unreachable block (ram,0x00010191f340) */
/* WARNING: Removing unreachable block (ram,0x00010191f3f4) */
/* WARNING: Removing unreachable block (ram,0x00010191f360) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10191f2d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lStack_58;
  long lStack_50;
  
  uVar2 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c5ee30();
  func_0x000107c61170(uVar2);
  uVar2 = param_3;
  FUN_101922e70(param_3,param_2);
  lVar3 = 0;
  func_0x000101924a30();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112dd4498) = uVar2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_58 = lVar4;
  lStack_50 = lVar3;
  func_0x000107c61174(uVar2);
  plVar5 = &lStack_58;
  func_0x000107c61154(plVar5,puVar1);
  func_0x000107c61170(param_1);
  func_0x00010006c090(param_3,param_2);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar5);
  return;
}



/* Entry: 10191f418; end: 10191f473; -[_TtC32AdRenderDataMapperImplementation32AdRenderDataMapperImplementation init] */

void FUN_10191f418(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdRenderDataMapperImplementation.AdRenderDataMapperImplementation",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10191f444);
  (*pcVar1)();
}



/* Entry: 10191f474; end: 10191f4eb; -[_TtC32AdRenderDataMapperImplementation32AdRenderDataMapperImplementation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10191f474(long param_1)

{
  func_0x000101922538(param_1 + _DAT_112dd4250,0x112dd4240,&UNK_10d996f00);
  func_0x000101922538(param_1 + _DAT_112dd4258,0x112dd4248,&UNK_10d996ec0);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dd4260));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dd4268));
  return;
}



/* Entry: 10191f4ec; end: 10191f50b;  */

void FUN_10191f4ec(void)

{
  func_0x000107c61168(&PTR_PTR_1127ec7c8);
  return;
}



/* Entry: 10191f50c; end: 10191fddf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10191f50c(long *param_1,undefined8 param_2,undefined8 param_3,byte *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long extraout_x8;
  undefined8 *puVar10;
  undefined *puVar11;
  code *pcVar12;
  byte *pbVar13;
  byte **ppbVar14;
  long lVar15;
  code *pcVar16;
  long unaff_x20;
  ulong unaff_x21;
  undefined8 uVar17;
  byte *pbVar18;
  undefined8 uVar19;
  uint uVar20;
  undefined1 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long alStack_180 [4];
  undefined1 auStack_160 [8];
  undefined8 uStack_158;
  code *pcStack_150;
  undefined8 uStack_148;
  byte *pbStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  char cStack_e0;
  byte *pbStack_d8;
  ulong uStack_d0;
  long lStack_c0;
  long lStack_b8;
  undefined1 auStack_58 [8];
  
  lVar3 = 0x112dd42a0;
  puVar8 = (undefined8 *)&UNK_10dcdf270;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = -extraout_x8;
  puVar21 = auStack_160 + lVar3;
  pbVar18 = param_4;
  func_0x000107c4995c();
  func_0x000107c61180();
  puVar4 = (undefined8 *)0x0;
  if (pbVar18 == (byte *)0x0) goto LAB_10191f89c;
  pbVar13 = pbVar18;
  puVar4 = puVar8;
  func_0x000107c5faec();
  func_0x000107c61170(pbVar18);
  puVar9 = (undefined8 *)((ulong)pbVar13 & 0xffffffffffff);
  puVar10 = (undefined8 *)((ulong)puVar4 >> 0x38 & 0xf);
  puVar8 = puVar9;
  if (((ulong)puVar4 & 0x2000000000000000) != 0) {
    puVar8 = puVar10;
  }
  if (puVar8 == (undefined8 *)0x0) {
    func_0x000107c6142c();
    goto LAB_10191f89c;
  }
  if (((ulong)puVar4 >> 0x3c & 1) == 0) {
    if (((ulong)puVar4 >> 0x3d & 1) == 0) {
      if (((ulong)pbVar13 >> 0x3c & 1) == 0) {
        puVar9 = puVar4;
        func_0x000107c60358();
      }
      else {
        pbVar13 = (byte *)(((ulong)puVar4 & 0xfffffffffffffff) + 0x20);
      }
      if (*pbVar13 == 0x2b) {
        if ((long)puVar9 < 1) {
                    /* WARNING: Does not return */
          pcVar16 = (code *)SoftwareBreakpoint(1,0x10191fddc);
          (*pcVar16)();
        }
        puVar11 = (undefined *)((long)puVar9 + -1);
        if (puVar11 == (undefined *)0x0) goto LAB_10191f87c;
        pbVar18 = (byte *)0x0;
        do {
          pbVar13 = pbVar13 + 1;
          if (((9 < *pbVar13 - 0x30) ||
              (lVar15 = (long)pbVar18 * 10,
              SUB168(SEXT816((long)pbVar18) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
             (uVar7 = (ulong)(byte)(*pbVar13 - 0x30), pbVar18 = (byte *)(lVar15 + uVar7),
             SCARRY8(lVar15,uVar7))) goto LAB_10191f87c;
          uVar20 = 0;
          puVar11 = puVar11 + -1;
        } while (puVar11 != (undefined *)0x0);
      }
      else if (*pbVar13 == 0x2d) {
        if ((long)puVar9 < 1) {
                    /* WARNING: Does not return */
          pcVar16 = (code *)SoftwareBreakpoint(1,0x10191fdd4);
          (*pcVar16)();
        }
        puVar11 = (undefined *)((long)puVar9 + -1);
        if (puVar11 == (undefined *)0x0) {
LAB_10191f87c:
          uVar20 = 1;
          pbVar18 = (byte *)0x0;
        }
        else {
          pbVar18 = (byte *)0x0;
          do {
            pbVar13 = pbVar13 + 1;
            if (((9 < *pbVar13 - 0x30) ||
                (lVar15 = (long)pbVar18 * 10,
                SUB168(SEXT816((long)pbVar18) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
               (uVar7 = (ulong)(byte)(*pbVar13 - 0x30), pbVar18 = (byte *)(lVar15 - uVar7),
               SBORROW8(lVar15,uVar7))) goto LAB_10191f87c;
            uVar20 = 0;
            puVar11 = puVar11 + -1;
          } while (puVar11 != (undefined *)0x0);
        }
      }
      else {
        if (puVar9 == (undefined8 *)0x0) goto LAB_10191f87c;
        if (pbVar13 == (byte *)0x0) {
          uVar20 = 0;
          pbVar18 = (byte *)0x0;
        }
        else {
          pbVar18 = (byte *)0x0;
          do {
            if (((9 < *pbVar13 - 0x30) ||
                (lVar15 = (long)pbVar18 * 10,
                SUB168(SEXT816((long)pbVar18) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
               (uVar7 = (ulong)(byte)(*pbVar13 - 0x30), pbVar18 = (byte *)(lVar15 + uVar7),
               SCARRY8(lVar15,uVar7))) goto LAB_10191f87c;
            uVar20 = 0;
            puVar9 = (undefined8 *)((long)puVar9 + -1);
            pbVar13 = pbVar13 + 1;
          } while (puVar9 != (undefined8 *)0x0);
        }
      }
    }
    else {
      pbStack_d8 = pbVar13;
      uStack_d0 = (ulong)puVar4 & 0xffffffffffffff;
      uVar20 = (uint)pbVar13 & 0xff;
      if (uVar20 == 0x2b) {
        if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar16 = (code *)SoftwareBreakpoint(1,0x10191fde0);
          (*pcVar16)();
        }
        puVar11 = (undefined *)((long)puVar10 + -1);
        if (puVar11 == (undefined *)0x0) goto LAB_10191f87c;
        pbVar18 = (byte *)0x0;
        pbVar13 = (byte *)((ulong)&pbStack_d8 | 1);
        do {
          if (((9 < *pbVar13 - 0x30) ||
              (lVar15 = (long)pbVar18 * 10,
              SUB168(SEXT816((long)pbVar18) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
             (uVar7 = (ulong)(byte)(*pbVar13 - 0x30), pbVar18 = (byte *)(lVar15 + uVar7),
             SCARRY8(lVar15,uVar7))) goto LAB_10191f87c;
          uVar20 = 0;
          puVar11 = puVar11 + -1;
          pbVar13 = pbVar13 + 1;
        } while (puVar11 != (undefined *)0x0);
      }
      else if (uVar20 == 0x2d) {
        if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar16 = (code *)SoftwareBreakpoint(1,0x10191fdd8);
          (*pcVar16)();
        }
        puVar11 = (undefined *)((long)puVar10 + -1);
        if (puVar11 == (undefined *)0x0) goto LAB_10191f87c;
        pbVar18 = (byte *)0x0;
        pbVar13 = (byte *)((ulong)&pbStack_d8 | 1);
        do {
          if (((9 < *pbVar13 - 0x30) ||
              (lVar15 = (long)pbVar18 * 10,
              SUB168(SEXT816((long)pbVar18) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
             (uVar7 = (ulong)(byte)(*pbVar13 - 0x30), pbVar18 = (byte *)(lVar15 - uVar7),
             SBORROW8(lVar15,uVar7))) goto LAB_10191f87c;
          uVar20 = 0;
          puVar11 = puVar11 + -1;
          pbVar13 = pbVar13 + 1;
        } while (puVar11 != (undefined *)0x0);
      }
      else {
        if (puVar10 == (undefined8 *)0x0) goto LAB_10191f87c;
        pbVar18 = (byte *)0x0;
        ppbVar14 = &pbStack_d8;
        do {
          if (((9 < *(byte *)ppbVar14 - 0x30) ||
              (lVar15 = (long)pbVar18 * 10,
              SUB168(SEXT816((long)pbVar18) * SEXT816(10),8) != lVar15 >> 0x3f)) ||
             (uVar7 = (ulong)(byte)(*(byte *)ppbVar14 - 0x30), pbVar18 = (byte *)(lVar15 + uVar7),
             SCARRY8(lVar15,uVar7))) goto LAB_10191f87c;
          uVar20 = 0;
          puVar10 = (undefined8 *)((long)puVar10 + -1);
          ppbVar14 = (byte **)((long)ppbVar14 + 1);
        } while (puVar10 != (undefined8 *)0x0);
      }
    }
  }
  else {
    puVar8 = puVar4;
    func_0x000100edba6c(pbVar13,puVar4,10);
    uVar20 = (uint)puVar8;
    pbVar18 = pbVar13;
  }
  func_0x000107c6142c();
  if ((uVar20 & 0xff) != 1) {
    lVar5 = 0;
    pbStack_140 = pbVar18;
    uStack_128 = param_8;
    func_0x000100b91790();
    lVar15 = (long)*(int *)(lVar5 + 0x18);
    lVar6 = 0;
    lStack_138 = lVar5;
    func_0x000100b918b4();
    pcStack_150 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
    (*pcStack_150)((long)param_1 + lVar15,1,1,lVar6);
    lVar5 = param_7[1];
    uStack_148 = 0;
    if (lVar5 != 0) {
      uStack_148 = *param_7;
    }
    lVar1 = -0x2000000000000000;
    if (lVar5 != 0) {
      lVar1 = lVar5;
    }
    puStack_130 = param_7;
    func_0x000107c61438(lVar5,2);
    FUN_101921630(puVar21,uStack_148,lVar1,param_2,param_3,param_5,param_6);
    if (unaff_x21 == 0) {
      func_0x000107c6142c(lVar5);
      func_0x000107c6142c(lVar1);
      func_0x000101922538((long)param_1 + lVar15,0x112dd42a0,&UNK_10dcdf270);
      (*pcStack_150)(puVar21,0,1,lVar6);
      lVar15 = (long)param_1 + lVar15;
      func_0x0001019224a0(puVar21);
      uVar17 = uStack_128;
      pbVar18 = pbStack_140;
    }
    else {
      uVar19 = 0xd000000000000014;
      func_0x000107c6142c(lVar1);
      uVar7 = unaff_x21;
      FUN_101923388();
      uVar20 = (uint)uVar7 & 0xff;
      pcVar16 = (code *)0x800000010efc07d0;
      uVar17 = uVar19;
      if (uVar20 != 3) {
        pcVar16 = (code *)0xe500000000000000;
        uVar17 = 0x524548544f;
      }
      pcStack_150 = (code *)0x800000010efc07f0;
      uStack_158 = 0xd000000000000018;
      if (uVar20 != 2) {
        pcStack_150 = pcVar16;
        uStack_158 = uVar17;
      }
      pcVar2 = "UNSUPPORTED_BROWSER_TYPE";
      uVar17 = 0xd00000000000001d;
      if ((uVar7 & 0xff) != 0) {
        pcVar2 = "INVALID_SKAN_ATTRIBUTION";
        uVar17 = 0xd000000000000018;
      }
      if (uVar20 == 1 || (uVar7 & 0xff) == 0) {
        uStack_158 = uVar17;
      }
      if (uVar20 == 1 || (uVar7 & 0xff) == 0) {
        pcStack_150 = (code *)((ulong)pcVar2 | 0x8000000000000000);
      }
      func_0x0001019224f0(unaff_x20 + _DAT_112dd4250,&pbStack_d8,0x112dd4240,&UNK_10d996f00);
      lVar5 = lStack_b8;
      lVar15 = lStack_c0;
      uVar17 = uStack_128;
      pbVar18 = pbStack_140;
      if (lStack_c0 == 0) {
        func_0x000101922538(&pbStack_d8,0x112dd4240,&UNK_10d996f00);
      }
      else {
        func_0x0001000a8868(&pbStack_d8,lStack_c0);
        (**(code **)(lVar5 + 0x28))(uVar7,lVar15,lVar5);
        FUN_101922fd0(&pbStack_d8);
      }
      func_0x0001019224f0(unaff_x20 + _DAT_112dd4258,&pbStack_d8,0x112dd4248,&UNK_10d996ec0);
      if (lStack_c0 == 0) {
        func_0x000107c614ac(unaff_x21);
        func_0x000107c6142c(pcStack_150);
        func_0x000107c6142c(lVar1);
        lVar15 = 0x112dd4248;
        func_0x000101922538(&pbStack_d8,0x112dd4248,&UNK_10d996ec0);
      }
      else {
        func_0x0001000a8868(&pbStack_d8,lStack_c0);
        func_0x000107c61434(lVar1);
        func_0x000107c61434(param_3);
        func_0x000107c614b0(unaff_x21);
        uVar22 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        puVar8 = &uStack_f0;
        func_0x000107c6147c(puVar8,auStack_58,uVar22,&UNK_1107154a0,6);
        if ((int)puVar8 == 0) {
          uStack_e8 = 0x800000010efc0b40;
        }
        else {
          uVar19 = uStack_f0;
          if (cStack_e0 != '\x01') {
            func_0x00010192244c(uStack_f0,uStack_e8);
            uStack_e8 = 0xe300000000000000;
            uVar19 = 0x412f4e;
          }
        }
        pcVar12 = *(code **)(lStack_b8 + 8);
        *(long *)((long)alStack_180 + lVar3 + 0x10) = lStack_c0;
        *(long *)((long)alStack_180 + lVar3 + 0x18) = lStack_b8;
        *(undefined8 *)((long)alStack_180 + lVar3) = uVar19;
        *(undefined8 *)((long)alStack_180 + lVar3 + 8) = uStack_e8;
        pcVar16 = pcStack_150;
        (*pcVar12)(uStack_148,lVar1,0x4e574f4e4b4e55,0xe700000000000000,param_2,param_3,uStack_158,
                   pcStack_150);
        func_0x000107c614ac(unaff_x21);
        func_0x000107c6142c(pcVar16);
        func_0x000107c6142c(param_3);
        func_0x000107c6142c(uStack_e8);
        lVar15 = 2;
        func_0x000107c61430(lVar1);
        FUN_101922fd0(&pbStack_d8);
      }
    }
    func_0x000107c4f32c();
    func_0x000107c61180();
    if (param_4 == (byte *)0x0) {
      pbVar13 = (byte *)0x0;
      lVar15 = 0;
    }
    else {
      pbVar13 = param_4;
      func_0x000107c5faec();
      func_0x000107c61170(param_4);
    }
    *param_1 = (long)pbVar18;
    param_1[1] = (long)pbVar13;
    param_1[2] = lVar15;
    *(undefined8 *)((long)param_1 + (long)*(int *)(lStack_138 + 0x1c)) = uVar17;
    *(undefined8 *)((long)param_1 + (long)*(int *)(lStack_138 + 0x20)) = 0;
    puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(lStack_138 + 0x24));
    uVar19 = puStack_130[8];
    uVar23 = puStack_130[0xb];
    uVar22 = puStack_130[10];
    puVar8[9] = puStack_130[9];
    puVar8[8] = uVar19;
    puVar8[0xb] = uVar23;
    puVar8[10] = uVar22;
    uVar19 = puStack_130[0xc];
    puVar8[0xd] = puStack_130[0xd];
    puVar8[0xc] = uVar19;
    uVar19 = *puStack_130;
    uVar23 = puStack_130[3];
    uVar22 = puStack_130[2];
    puVar8[1] = puStack_130[1];
    *puVar8 = uVar19;
    puVar8[3] = uVar23;
    puVar8[2] = uVar22;
    uVar23 = puStack_130[4];
    uVar22 = puStack_130[7];
    uVar19 = puStack_130[6];
    puVar8[5] = puStack_130[5];
    puVar8[4] = uVar23;
    puVar8[7] = uVar22;
    puVar8[6] = uVar19;
    *(undefined8 *)((long)param_1 + (long)*(int *)(lStack_138 + 0x28)) = 0;
    func_0x000100e3eca0(puStack_130,&pbStack_d8);
    func_0x000107c61174(uVar17);
    return;
  }
LAB_10191f89c:
  FUN_1019223f8();
  func_0x000107c613f8(&UNK_1107154a0,puVar4,0,0);
  puVar4[1] = 0;
  *puVar4 = 6;
  *(undefined1 *)(puVar4 + 2) = 2;
  func_0x000107c61654();
  return;
}



/* Entry: 10191fde0; end: 101920eb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10191fde0(long param_1,byte *param_2,long param_3,undefined8 *param_4,undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long extraout_x8;
  long lVar13;
  long extraout_x8_00;
  long lVar14;
  long extraout_x8_01;
  long lVar15;
  long extraout_x8_02;
  long *plVar16;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  byte *pbVar21;
  byte **ppbVar22;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  byte *pbVar23;
  long unaff_x20;
  code *pcVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined8 *puVar29;
  long lVar30;
  long lVar31;
  code *pcVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  code *pcStack_1a0;
  long lStack_198;
  code *pcStack_190;
  long lStack_188;
  long lStack_180;
  undefined8 uStack_178;
  long *plStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  byte *pbStack_d8;
  ulong uStack_d0;
  long lStack_c0;
  long lStack_b8;
  
  lVar3 = 0;
  lStack_148 = param_3;
  func_0x000100b91acc();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar13 = (long)&pcStack_1a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar27 = 0x112dd42b0;
  func_0x0001000285a8(0x112dd42b0,&UNK_10d996f10);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar27 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar13 - extraout_x8_00;
  lVar4 = 0x112d3b128;
  func_0x0001000285a8(0x112d3b128,&UNK_10d996bb0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  uVar19 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = uVar19 - extraout_x12;
  lVar4 = 0;
  func_0x000100b91790();
  lStack_168 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  plVar16 = (long *)(lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  lVar4 = 0;
  plStack_170 = plVar16;
  func_0x000100b915bc();
  lStack_140 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar20 = (long)plVar16 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  lStack_158 = lVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = lVar20 - extraout_x12_00;
  lVar4 = 0x112d36580;
  puVar9 = &UNK_10d9016d0;
  lStack_150 = lVar20;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar20 = lVar20 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar30 = lVar20 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar29 = (undefined8 *)(lVar30 - extraout_x12_02);
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar31 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar31 + 0x40));
  lVar28 = (long)puVar29 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_160 = lVar28 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = (lVar28 - extraout_x12_03) - extraout_x12_04;
  pbVar23 = param_2;
  func_0x000107c49964();
  func_0x000107c61180();
  puVar5 = (undefined8 *)0x0;
  if (pbVar23 == (byte *)0x0) {
LAB_101920144:
    FUN_1019223f8();
    func_0x000107c613f8(&UNK_1107154a0,puVar5,0,0);
    puVar5[1] = 0;
    *puVar5 = 5;
    *(undefined1 *)(puVar5 + 2) = 2;
    func_0x000107c61654();
    return;
  }
  pbVar21 = pbVar23;
  uStack_178 = param_5;
  func_0x000107c5faec();
  func_0x000107c61170(pbVar23);
  func_0x000107c5edd0(puVar29,pbVar21,puVar9);
  func_0x000107c6142c(puVar9);
  pcVar32 = *(code **)(lVar31 + 0x30);
  puVar5 = puVar29;
  (*pcVar32)(puVar29,1,lVar4);
  if ((int)puVar5 == 1) {
    func_0x000101922538(puVar29,0x112d36580,&UNK_10d9016d0);
    puVar5 = puVar29;
    goto LAB_101920144;
  }
  pcStack_190 = *(code **)(lVar31 + 0x20);
  (*pcStack_190)(lVar17,puVar29,lVar4);
  lVar6 = 0;
  func_0x000100b919a8();
  lStack_188 = (long)*(int *)(lVar6 + 0x14);
  pcVar24 = *(code **)(lVar12 + 0x38);
  uVar10 = 1;
  lStack_198 = lVar6;
  (*pcVar24)(param_1 + lStack_188,1,1,lVar3);
  pbVar23 = param_2;
  func_0x000107c414dc();
  iVar2 = (int)pbVar23;
  lStack_180 = lVar4;
  if (iVar2 == 3) {
    func_0x000107c41510();
    func_0x000107c61180();
    if (param_2 != (byte *)0x0) {
      pbVar23 = param_2;
      pcStack_1a0 = pcVar24;
      func_0x000107c5faec();
      func_0x000107c61170(param_2);
      pbVar21 = PTR_PTR_1126c7d48;
      func_0x000107c61168();
      pbVar7 = pbVar23;
      func_0x000107c5fadc(pbVar23,uVar10);
      pbVar8 = pbVar21;
      func_0x000107c4a678();
      func_0x000107c61170(pbVar7);
      if ((int)pbVar8 != 0) {
        pbVar7 = pbVar23;
        uVar25 = uVar10;
        func_0x000107c5fadc(pbVar23,uVar10);
        func_0x000107c42750();
        func_0x000107c61180();
        func_0x000107c61170(pbVar7);
        if (pbVar21 != (byte *)0x0) {
          pbVar23 = pbVar21;
          func_0x000107c5faec(pbVar21);
          func_0x000107c6142c(uVar10);
          func_0x000107c61170(pbVar21);
          uVar10 = uVar25;
        }
      }
      func_0x000107c5edd0(lVar20,pbVar23,uVar10);
      func_0x000107c6142c(uVar10);
      lVar4 = lStack_180;
      lVar30 = lVar20;
      (*pcVar32)(lVar20,1,lStack_180);
      if ((int)lVar30 == 1) {
        func_0x000101922538(lVar20,0x112d36580,&UNK_10d9016d0);
        pcVar24 = pcStack_1a0;
      }
      else {
        (*pcStack_190)(lVar28,lVar20,lVar4);
        lVar20 = lStack_158;
        lVar30 = lVar28;
        (**(code **)(lVar31 + 0x10))(lStack_158,lVar28,lVar4);
        if (lStack_148 == 0) {
LAB_101920694:
          lVar26 = 0;
          lVar30 = 0;
        }
        else {
          lVar6 = lStack_148;
          func_0x000107c4e79c();
          func_0x000107c61180();
          if (lVar6 == 0) goto LAB_101920694;
          lVar26 = lVar6;
          func_0x000107c5faec();
          lVar4 = lStack_180;
          func_0x000107c61170(lVar6);
        }
        (**(code **)(lVar31 + 8))(lVar28,lVar4);
        lVar4 = lStack_188;
        func_0x000101922538(param_1 + lStack_188,0x112d3b128,&UNK_10d996bb0);
        *(undefined8 *)(lVar20 + *(int *)(lStack_140 + 0x14)) = 1;
        puVar5 = (undefined8 *)(lVar20 + *(int *)(lStack_140 + 0x18));
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 1;
        puVar5[4] = 0;
        puVar5[3] = 0;
        puVar5[6] = 0;
        puVar5[5] = 0;
        *(undefined8 *)((long)puVar5 + 0x39) = 0;
        *(undefined8 *)((long)puVar5 + 0x31) = 0;
        *(undefined8 *)(lVar20 + *(int *)(lStack_140 + 0x1c)) = 0;
        puVar5 = (undefined8 *)(lVar20 + *(int *)(lStack_140 + 0x20));
        uVar33 = param_4[8];
        uVar35 = param_4[0xb];
        uVar34 = param_4[10];
        puVar5[9] = param_4[9];
        puVar5[8] = uVar33;
        puVar5[0xb] = uVar35;
        puVar5[10] = uVar34;
        uVar33 = param_4[0xc];
        puVar5[0xd] = param_4[0xd];
        puVar5[0xc] = uVar33;
        uVar33 = *param_4;
        uVar35 = param_4[3];
        uVar34 = param_4[2];
        puVar5[1] = param_4[1];
        *puVar5 = uVar33;
        puVar5[3] = uVar35;
        puVar5[2] = uVar34;
        uVar35 = param_4[4];
        uVar34 = param_4[7];
        uVar33 = param_4[6];
        puVar5[5] = param_4[5];
        puVar5[4] = uVar35;
        puVar5[7] = uVar34;
        puVar5[6] = uVar33;
        puVar5 = (undefined8 *)(lVar20 + *(int *)(lStack_140 + 0x24));
        puVar5[1] = 0;
        *puVar5 = 0;
        puVar5[3] = 0;
        puVar5[2] = 0;
        plVar16 = (long *)(lVar20 + *(int *)(lStack_140 + 0x28));
        *plVar16 = lVar26;
        plVar16[1] = lVar30;
        *(undefined1 *)(lVar20 + *(int *)(lStack_140 + 0x2c)) = 0;
        puVar5 = (undefined8 *)(lVar20 + *(int *)(lStack_140 + 0x30));
        *puVar5 = 0;
        puVar5[1] = 0;
        *(undefined1 *)(lVar20 + *(int *)(lStack_140 + 0x34)) = 0;
        func_0x0001019225b4(lVar20,param_1 + lVar4,&SUB_100b915bc);
        func_0x000107c6159c(param_1 + lVar4,lVar3,0);
        pcVar24 = pcStack_1a0;
        (*pcStack_1a0)(param_1 + lVar4,0,1,lVar3);
LAB_101920b4c:
        func_0x000100e3eca0(param_4,&pbStack_d8);
      }
    }
  }
  else if (iVar2 == 2) {
    pbVar23 = param_2;
    func_0x000107c4995c();
    func_0x000107c61180();
    if (pbVar23 != (byte *)0x0) {
      pbVar21 = pbVar23;
      pcStack_1a0 = pcVar24;
      func_0x000107c5faec();
      func_0x000107c61170(pbVar23);
      uVar11 = (ulong)pbVar21 & 0xffffffffffff;
      uVar18 = uVar10 >> 0x38 & 0xf;
      uVar25 = uVar11;
      if ((uVar10 & 0x2000000000000000) != 0) {
        uVar25 = uVar18;
      }
      if (uVar25 == 0) {
        func_0x000107c6142c(uVar10);
        pcVar24 = pcStack_1a0;
      }
      else {
        if ((uVar10 >> 0x3c & 1) == 0) {
          if ((uVar10 >> 0x3d & 1) == 0) {
            if (((ulong)pbVar21 >> 0x3c & 1) == 0) {
              uVar11 = uVar10;
              func_0x000107c60358();
            }
            else {
              pbVar21 = (byte *)((uVar10 & 0xfffffffffffffff) + 0x20);
            }
            if (*pbVar21 == 0x2b) {
              if ((long)uVar11 < 1) {
                    /* WARNING: Does not return */
                pcVar32 = (code *)SoftwareBreakpoint(1,0x101920eb4);
                (*pcVar32)();
              }
              lVar4 = uVar11 - 1;
              if (lVar4 == 0) goto LAB_101920a04;
              pbVar23 = (byte *)0x0;
              do {
                pbVar21 = pbVar21 + 1;
                if (((9 < *pbVar21 - 0x30) ||
                    (lVar20 = (long)pbVar23 * 10,
                    SUB168(SEXT816((long)pbVar23) * SEXT816(10),8) != lVar20 >> 0x3f)) ||
                   (uVar25 = (ulong)(byte)(*pbVar21 - 0x30), pbVar23 = (byte *)(lVar20 + uVar25),
                   SCARRY8(lVar20,uVar25))) goto LAB_101920a04;
                uVar25 = 0;
                lVar4 = lVar4 + -1;
              } while (lVar4 != 0);
            }
            else if (*pbVar21 == 0x2d) {
              if ((long)uVar11 < 1) {
                    /* WARNING: Does not return */
                pcVar32 = (code *)SoftwareBreakpoint(1,0x101920eac);
                (*pcVar32)();
              }
              lVar4 = uVar11 - 1;
              if (lVar4 == 0) {
LAB_101920a04:
                pbVar23 = (byte *)0x0;
                uVar25 = 1;
              }
              else {
                pbVar23 = (byte *)0x0;
                do {
                  pbVar21 = pbVar21 + 1;
                  if (((9 < *pbVar21 - 0x30) ||
                      (lVar20 = (long)pbVar23 * 10,
                      SUB168(SEXT816((long)pbVar23) * SEXT816(10),8) != lVar20 >> 0x3f)) ||
                     (uVar25 = (ulong)(byte)(*pbVar21 - 0x30), pbVar23 = (byte *)(lVar20 - uVar25),
                     SBORROW8(lVar20,uVar25))) goto LAB_101920a04;
                  uVar25 = 0;
                  lVar4 = lVar4 + -1;
                } while (lVar4 != 0);
              }
            }
            else {
              if (uVar11 == 0) goto LAB_101920a04;
              if (pbVar21 == (byte *)0x0) {
                pbVar23 = (byte *)0x0;
                uVar25 = 0;
              }
              else {
                pbVar23 = (byte *)0x0;
                do {
                  if (((9 < *pbVar21 - 0x30) ||
                      (lVar4 = (long)pbVar23 * 10,
                      SUB168(SEXT816((long)pbVar23) * SEXT816(10),8) != lVar4 >> 0x3f)) ||
                     (uVar25 = (ulong)(byte)(*pbVar21 - 0x30), pbVar23 = (byte *)(lVar4 + uVar25),
                     SCARRY8(lVar4,uVar25))) goto LAB_101920a04;
                  uVar25 = 0;
                  uVar11 = uVar11 - 1;
                  pbVar21 = pbVar21 + 1;
                } while (uVar11 != 0);
              }
            }
          }
          else {
            pbStack_d8 = pbVar21;
            uStack_d0 = uVar10 & 0xffffffffffffff;
            uVar1 = (uint)pbVar21 & 0xff;
            if (uVar1 == 0x2b) {
              if (uVar18 == 0) {
                    /* WARNING: Does not return */
                pcVar32 = (code *)SoftwareBreakpoint(1,0x101920eb8);
                (*pcVar32)();
              }
              lVar4 = uVar18 - 1;
              if (lVar4 == 0) goto LAB_101920a04;
              pbVar23 = (byte *)0x0;
              pbVar21 = (byte *)((ulong)&pbStack_d8 | 1);
              do {
                if (((9 < *pbVar21 - 0x30) ||
                    (lVar20 = (long)pbVar23 * 10,
                    SUB168(SEXT816((long)pbVar23) * SEXT816(10),8) != lVar20 >> 0x3f)) ||
                   (uVar25 = (ulong)(byte)(*pbVar21 - 0x30), pbVar23 = (byte *)(lVar20 + uVar25),
                   SCARRY8(lVar20,uVar25))) goto LAB_101920a04;
                uVar25 = 0;
                lVar4 = lVar4 + -1;
                pbVar21 = pbVar21 + 1;
              } while (lVar4 != 0);
            }
            else if (uVar1 == 0x2d) {
              if (uVar18 == 0) {
                    /* WARNING: Does not return */
                pcVar32 = (code *)SoftwareBreakpoint(1,0x101920eb0);
                (*pcVar32)();
              }
              lVar4 = uVar18 - 1;
              if (lVar4 == 0) goto LAB_101920a04;
              pbVar23 = (byte *)0x0;
              pbVar21 = (byte *)((ulong)&pbStack_d8 | 1);
              do {
                if (((9 < *pbVar21 - 0x30) ||
                    (lVar20 = (long)pbVar23 * 10,
                    SUB168(SEXT816((long)pbVar23) * SEXT816(10),8) != lVar20 >> 0x3f)) ||
                   (uVar25 = (ulong)(byte)(*pbVar21 - 0x30), pbVar23 = (byte *)(lVar20 - uVar25),
                   SBORROW8(lVar20,uVar25))) goto LAB_101920a04;
                uVar25 = 0;
                lVar4 = lVar4 + -1;
                pbVar21 = pbVar21 + 1;
              } while (lVar4 != 0);
            }
            else {
              if (uVar18 == 0) goto LAB_101920a04;
              pbVar23 = (byte *)0x0;
              ppbVar22 = &pbStack_d8;
              do {
                if (((9 < *(byte *)ppbVar22 - 0x30) ||
                    (lVar4 = (long)pbVar23 * 10,
                    SUB168(SEXT816((long)pbVar23) * SEXT816(10),8) != lVar4 >> 0x3f)) ||
                   (uVar25 = (ulong)(byte)(*(byte *)ppbVar22 - 0x30),
                   pbVar23 = (byte *)(lVar4 + uVar25), SCARRY8(lVar4,uVar25))) goto LAB_101920a04;
                uVar25 = 0;
                uVar18 = uVar18 - 1;
                ppbVar22 = (byte **)((long)ppbVar22 + 1);
              } while (uVar18 != 0);
            }
          }
        }
        else {
          uVar11 = uVar10;
          func_0x000100edba6c(pbVar21,uVar10,10);
          pbVar23 = pbVar21;
          uVar25 = uVar11;
        }
        func_0x000107c6142c(uVar10);
        pcVar24 = pcStack_1a0;
        if (((uint)uVar25 & 0xff) != 1) {
          func_0x000107c4f32c();
          func_0x000107c61180();
          if (param_2 == (byte *)0x0) {
            pbVar21 = (byte *)0x0;
            uVar11 = 0;
          }
          else {
            pbVar21 = param_2;
            func_0x000107c5faec();
            func_0x000107c61170(param_2);
          }
          lVar4 = lStack_188;
          func_0x000101922538(param_1 + lStack_188,0x112d3b128,&UNK_10d996bb0);
          lVar20 = lStack_168;
          iVar2 = *(int *)(lStack_168 + 0x18);
          lVar28 = 0;
          func_0x000100b918b4();
          plVar16 = plStack_170;
          (**(code **)(*(long *)(lVar28 + -8) + 0x38))((long)plStack_170 + (long)iVar2,1,1,lVar28);
          *plVar16 = (long)pbVar23;
          plVar16[1] = (long)pbVar21;
          plVar16[2] = uVar11;
          *(undefined8 *)((long)plVar16 + (long)*(int *)(lVar20 + 0x1c)) = 0;
          *(undefined8 *)((long)plVar16 + (long)*(int *)(lVar20 + 0x20)) = 0;
          puVar5 = (undefined8 *)((long)plVar16 + (long)*(int *)(lVar20 + 0x24));
          uVar33 = param_4[8];
          uVar35 = param_4[0xb];
          uVar34 = param_4[10];
          puVar5[9] = param_4[9];
          puVar5[8] = uVar33;
          puVar5[0xb] = uVar35;
          puVar5[10] = uVar34;
          uVar33 = param_4[0xc];
          puVar5[0xd] = param_4[0xd];
          puVar5[0xc] = uVar33;
          uVar33 = *param_4;
          uVar35 = param_4[3];
          uVar34 = param_4[2];
          puVar5[1] = param_4[1];
          *puVar5 = uVar33;
          puVar5[3] = uVar35;
          puVar5[2] = uVar34;
          uVar35 = param_4[4];
          uVar34 = param_4[7];
          uVar33 = param_4[6];
          puVar5[5] = param_4[5];
          puVar5[4] = uVar35;
          puVar5[7] = uVar34;
          puVar5[6] = uVar33;
          *(undefined8 *)((long)plVar16 + (long)*(int *)(lVar20 + 0x28)) = 0;
          func_0x0001019225b4(plVar16,param_1 + lVar4,&SUB_100b91790);
          func_0x000107c6159c(param_1 + lVar4,lVar3,1);
          goto LAB_101920b2c;
        }
      }
    }
  }
  else if (iVar2 == 1) {
    func_0x000107c41510();
    func_0x000107c61180();
    if (param_2 != (byte *)0x0) {
      pbVar23 = param_2;
      pcStack_1a0 = pcVar24;
      func_0x000107c5faec();
      func_0x000107c61170(param_2);
      pbVar21 = PTR_PTR_1126c7d48;
      func_0x000107c61168();
      pbVar7 = pbVar23;
      func_0x000107c5fadc(pbVar23,uVar10);
      pbVar8 = pbVar21;
      func_0x000107c4a678();
      func_0x000107c61170(pbVar7);
      if ((int)pbVar8 != 0) {
        pbVar7 = pbVar23;
        uVar25 = uVar10;
        func_0x000107c5fadc(pbVar23,uVar10);
        func_0x000107c42750();
        func_0x000107c61180();
        func_0x000107c61170(pbVar7);
        if (pbVar21 != (byte *)0x0) {
          pbVar23 = pbVar21;
          func_0x000107c5faec(pbVar21);
          func_0x000107c6142c(uVar10);
          func_0x000107c61170(pbVar21);
          uVar10 = uVar25;
        }
      }
      lVar4 = lStack_180;
      func_0x000107c5edd0(lVar30,pbVar23,uVar10);
      func_0x000107c6142c(uVar10);
      lVar28 = lVar30;
      (*pcVar32)(lVar30,1,lVar4);
      lVar20 = lStack_160;
      if ((int)lVar28 != 1) {
        (*pcStack_190)(lStack_160,lVar30,lVar4);
        lVar28 = lStack_150;
        lVar30 = lVar20;
        (**(code **)(lVar31 + 0x10))(lStack_150,lVar20,lVar4);
        if (lStack_148 == 0) {
LAB_1019207bc:
          lVar26 = 0;
          lVar30 = 0;
        }
        else {
          lVar6 = lStack_148;
          func_0x000107c4e79c();
          func_0x000107c61180();
          if (lVar6 == 0) goto LAB_1019207bc;
          lVar26 = lVar6;
          func_0x000107c5faec();
          func_0x000107c61170(lVar6);
        }
        (**(code **)(lVar31 + 8))(lVar20,lVar4);
        lVar4 = lStack_188;
        func_0x000101922538(param_1 + lStack_188,0x112d3b128,&UNK_10d996bb0);
        *(undefined8 *)(lVar28 + *(int *)(lStack_140 + 0x14)) = 0;
        puVar5 = (undefined8 *)(lVar28 + *(int *)(lStack_140 + 0x18));
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 1;
        puVar5[4] = 0;
        puVar5[3] = 0;
        puVar5[6] = 0;
        puVar5[5] = 0;
        *(undefined8 *)((long)puVar5 + 0x39) = 0;
        *(undefined8 *)((long)puVar5 + 0x31) = 0;
        *(undefined8 *)(lVar28 + *(int *)(lStack_140 + 0x1c)) = 0;
        puVar5 = (undefined8 *)(lVar28 + *(int *)(lStack_140 + 0x20));
        uVar33 = param_4[8];
        uVar35 = param_4[0xb];
        uVar34 = param_4[10];
        puVar5[9] = param_4[9];
        puVar5[8] = uVar33;
        puVar5[0xb] = uVar35;
        puVar5[10] = uVar34;
        uVar33 = param_4[0xc];
        puVar5[0xd] = param_4[0xd];
        puVar5[0xc] = uVar33;
        uVar33 = *param_4;
        uVar35 = param_4[3];
        uVar34 = param_4[2];
        puVar5[1] = param_4[1];
        *puVar5 = uVar33;
        puVar5[3] = uVar35;
        puVar5[2] = uVar34;
        uVar35 = param_4[4];
        uVar34 = param_4[7];
        uVar33 = param_4[6];
        puVar5[5] = param_4[5];
        puVar5[4] = uVar35;
        puVar5[7] = uVar34;
        puVar5[6] = uVar33;
        puVar5 = (undefined8 *)(lVar28 + *(int *)(lStack_140 + 0x24));
        puVar5[1] = 0;
        *puVar5 = 0;
        puVar5[3] = 0;
        puVar5[2] = 0;
        plVar16 = (long *)(lVar28 + *(int *)(lStack_140 + 0x28));
        *plVar16 = lVar26;
        plVar16[1] = lVar30;
        *(undefined1 *)(lVar28 + *(int *)(lStack_140 + 0x2c)) = 0;
        puVar5 = (undefined8 *)(lVar28 + *(int *)(lStack_140 + 0x30));
        *puVar5 = 0;
        puVar5[1] = 0;
        *(undefined1 *)(lVar28 + *(int *)(lStack_140 + 0x34)) = 0;
        func_0x0001019225b4(lVar28,param_1 + lVar4,&SUB_100b915bc);
        func_0x000107c6159c(param_1 + lVar4,lVar3,0);
LAB_101920b2c:
        pcVar24 = pcStack_1a0;
        (*pcStack_1a0)(param_1 + lVar4,0,1,lVar3);
        goto LAB_101920b4c;
      }
      func_0x000101922538(lVar30,0x112d36580,&UNK_10d9016d0);
      pcVar24 = pcStack_1a0;
    }
  }
  (*pcVar24)(lVar15,1,1,lVar3);
  lVar27 = (long)*(int *)(lVar27 + 0x30);
  func_0x0001019224f0(param_1 + lStack_188,lVar14,0x112d3b128,&UNK_10d996bb0);
  func_0x0001019224f0(lVar15,lVar14 + lVar27,0x112d3b128,&UNK_10d996bb0);
  pcVar32 = *(code **)(lVar12 + 0x30);
  lVar4 = lVar14;
  (*pcVar32)(lVar14,1,lVar3);
  if ((int)lVar4 == 1) {
    func_0x000101922538(lVar15,0x112d3b128,&UNK_10d996bb0);
    lVar27 = lVar14 + lVar27;
    (*pcVar32)(lVar27,1,lVar3);
    lVar4 = lStack_198;
    if ((int)lVar27 != 1) {
LAB_101920ca8:
      lVar4 = lStack_198;
      func_0x000101922538(lVar14,0x112dd42b0,&UNK_10d996f10);
      goto LAB_101920dd8;
    }
    func_0x000101922538(lVar14,0x112d3b128,&UNK_10d996bb0);
  }
  else {
    func_0x0001019224f0(lVar14,uVar19,0x112d3b128,&UNK_10d996bb0);
    lVar4 = lVar14 + lVar27;
    (*pcVar32)(lVar4,1,lVar3);
    if ((int)lVar4 == 1) {
      func_0x000101922538(lVar15,0x112d3b128,&UNK_10d996bb0);
      func_0x000101922578(uVar19,&SUB_100b91acc);
      goto LAB_101920ca8;
    }
    func_0x0001019225b4(lVar14 + lVar27,lVar13,&SUB_100b91acc);
    uVar10 = uVar19;
    func_0x00010419fb70(uVar19,lVar13);
    func_0x000101922578(lVar13,&SUB_100b91acc);
    func_0x000101922538(lVar15,0x112d3b128,&UNK_10d996bb0);
    func_0x000101922578(uVar19,&SUB_100b91acc);
    func_0x000101922538(lVar14,0x112d3b128,&UNK_10d996bb0);
    lVar4 = lStack_198;
    if ((uVar10 & 1) == 0) goto LAB_101920dd8;
  }
  func_0x0001019224f0(unaff_x20 + _DAT_112dd4250,&pbStack_d8,0x112dd4240,&UNK_10d996f00);
  if (lStack_c0 == 0) {
    func_0x000101922538(&pbStack_d8,0x112dd4240,&UNK_10d996f00);
  }
  else {
    func_0x0001000a8868(&pbStack_d8,lStack_c0);
    (**(code **)(lStack_b8 + 0x28))(0,lStack_c0,lStack_b8);
    FUN_101922fd0(&pbStack_d8);
  }
LAB_101920dd8:
  (*pcStack_190)(param_1,lVar17,lStack_180);
  uVar33 = uStack_178;
  *(undefined8 *)(param_1 + *(int *)(lVar4 + 0x18)) = uStack_178;
  puVar5 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x1c));
  uVar34 = param_4[8];
  uVar36 = param_4[0xb];
  uVar35 = param_4[10];
  puVar5[9] = param_4[9];
  puVar5[8] = uVar34;
  puVar5[0xb] = uVar36;
  puVar5[10] = uVar35;
  uVar34 = param_4[0xc];
  puVar5[0xd] = param_4[0xd];
  puVar5[0xc] = uVar34;
  uVar34 = *param_4;
  uVar36 = param_4[3];
  uVar35 = param_4[2];
  puVar5[1] = param_4[1];
  *puVar5 = uVar34;
  puVar5[3] = uVar36;
  puVar5[2] = uVar35;
  uVar36 = param_4[4];
  uVar35 = param_4[7];
  uVar34 = param_4[6];
  puVar5[5] = param_4[5];
  puVar5[4] = uVar36;
  puVar5[7] = uVar35;
  puVar5[6] = uVar34;
  func_0x000100e3eca0(param_4,&pbStack_d8);
  func_0x000107c61174(uVar33);
  return;
}



/* Entry: 101920eb8; end: 10192162f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101920eb8(long param_1,undefined8 *param_2,code *param_3,undefined8 *param_4,code *param_5)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  code *pcVar8;
  undefined *puVar9;
  code *pcVar10;
  undefined *puVar11;
  long lVar12;
  long extraout_x8;
  long lVar13;
  long extraout_x8_00;
  long lVar14;
  undefined8 uVar15;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar16;
  undefined8 *puVar17;
  code *pcVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auStack_160 [16];
  code *apcStack_150 [4];
  code *pcStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  long lStack_110;
  undefined8 *puStack_108;
  long lStack_100;
  code *pcStack_f8;
  undefined8 auStack_d8 [3];
  long lStack_c0;
  long lStack_b8;
  
  lVar2 = 0x112d36580;
  puVar9 = &UNK_10d9016d0;
  pcVar1 = param_5;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar17 = (undefined8 *)((long)apcStack_150 - extraout_x8);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar16 = (long)puVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = (lVar16 - extraout_x12) - extraout_x12_00;
  puVar3 = param_2;
  func_0x000107c44c30();
  if ((int)puVar3 == 0) {
    FUN_1019223f8();
    func_0x000107c613f8(&UNK_1107154a0,puVar3,0,0);
    uVar15 = 3;
  }
  else {
    puVar3 = param_2;
    lStack_100 = lVar16 - extraout_x12;
    pcStack_f8 = (code *)lVar2;
    func_0x000107c5e280();
    func_0x000107c61180();
    if (puVar3 != (undefined8 *)0x0) {
      puVar4 = puVar3;
      func_0x000107c3abfc();
      func_0x000107c61180();
      func_0x000107c61170();
      if (puVar4 != (undefined8 *)0x0) {
        puVar3 = puVar4;
        pcStack_118 = param_5;
        lStack_110 = param_1;
        puStack_108 = param_4;
        func_0x000107c5faec(puVar4);
        func_0x000107c61170(puVar4);
        puVar4 = (undefined8 *)PTR_PTR_1126c7d48;
        func_0x000107c61168();
        puVar5 = puVar3;
        func_0x000107c5fadc(puVar3,puVar9);
        puVar6 = puVar4;
        func_0x000107c4a678();
        func_0x000107c61170(puVar5);
        if ((int)puVar6 != 0) {
          puVar5 = puVar3;
          puVar11 = puVar9;
          func_0x000107c5fadc(puVar3,puVar9);
          func_0x000107c42750();
          func_0x000107c61180();
          func_0x000107c61170(puVar5);
          if (puVar4 != (undefined8 *)0x0) {
            puVar3 = puVar4;
            func_0x000107c5faec(puVar4);
            func_0x000107c6142c(puVar9);
            func_0x000107c61170(puVar4);
            puVar9 = puVar11;
          }
        }
        puVar4 = puStack_108;
        func_0x000107c5edd0(puVar17,puVar3,puVar9);
        func_0x000107c6142c(puVar9);
        pcVar7 = pcStack_f8;
        puVar3 = puVar17;
        (**(code **)(lVar13 + 0x30))(puVar17,1,pcStack_f8);
        if ((int)puVar3 != 1) {
          pcStack_128 = *(code **)(lVar13 + 0x20);
          (*pcStack_128)(lVar14,puVar17,pcVar7);
          puVar3 = param_2;
          func_0x000107c5e1bc();
          if ((int)puVar3 == 1) {
            uStack_120 = 0;
          }
          else if ((int)puVar3 == 3) {
            uStack_120 = 1;
          }
          else {
            pcVar1 = (code *)&UNK_10d996f00;
            func_0x0001019224f0(unaff_x20 + _DAT_112dd4250,auStack_d8,0x112dd4240);
            if (lStack_c0 == 0) {
              func_0x000101922538(auStack_d8,0x112dd4240,&UNK_10d996f00);
            }
            else {
              func_0x0001000a8868(auStack_d8,lStack_c0);
              (**(code **)(lStack_b8 + 0x28))(1,lStack_c0,lStack_b8);
              FUN_101922fd0(auStack_d8);
            }
            uStack_120 = 0;
          }
          lVar2 = lStack_100;
          pcVar18 = *(code **)(lVar13 + 0x10);
          (*pcVar18)(lStack_100,lVar14,pcVar7);
          if (param_3 != (code *)0x0) {
            pcVar1 = param_3;
            func_0x000107c61174();
            pcVar7 = pcVar1;
            func_0x000107c5ed90();
            pcVar8 = pcVar1;
            pcStack_130 = pcVar7;
            func_0x000107c40c88();
            func_0x000107c61180();
            apcStack_150[1] = pcVar18;
            apcStack_150[3] = pcVar8;
            if (puVar4[1] == 0) {
              apcStack_150[2] = (code *)0x0;
            }
            else {
              uVar15 = *puVar4;
              func_0x000107c5fadc();
              apcStack_150[2] = (code *)uVar15;
            }
            puVar9 = PTR_PTR_1126ca688;
            func_0x000107c61168();
            pcVar10 = pcVar1;
            func_0x000107c3d470(pcVar1);
            func_0x000107c61180();
            uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112dd4268);
            func_0x000107c5c734(uVar15);
            func_0x000107c61180();
            func_0x0001000d224c(auStack_d8);
            puVar3 = param_2;
            apcStack_150[0] = pcVar1;
            func_0x000107c3dbf0();
            *(char *)(lVar14 + -0x10) = (char)puVar3;
            pcVar8 = pcStack_130;
            pcVar18 = apcStack_150[3];
            pcVar7 = apcStack_150[2];
            pcVar1 = apcStack_150[3];
            func_0x000107c4e1b4();
            func_0x000107c61180();
            func_0x000107c61170(pcVar8);
            func_0x000107c61170(pcVar18);
            func_0x000107c61170(pcVar7);
            func_0x000107c61170(pcVar10);
            func_0x000107c61170(uVar15);
            func_0x000107c615e8(auStack_d8[0]);
            if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x101921630);
              (*pcVar1)();
            }
            func_0x000107c5edb4(lVar16,puVar9);
            func_0x000107c61170(puVar9);
            func_0x000107c61170(apcStack_150[0]);
            pcVar7 = pcStack_f8;
            lVar2 = lStack_100;
            (**(code **)(lVar13 + 8))(lStack_100,pcStack_f8);
            (*pcStack_128)(lVar2,lVar16,pcVar7);
            pcVar18 = apcStack_150[1];
            puVar4 = puStack_108;
          }
          lVar12 = (long)pcVar7;
          (*pcVar18)(lStack_110);
          puVar3 = param_2;
          FUN_10192341c();
          lVar16 = lVar2;
          if (param_3 != (code *)0x0) {
            func_0x000107c4e79c();
            func_0x000107c61180();
            if (param_3 != (code *)0x0) {
              pcVar18 = param_3;
              func_0x000107c5faec();
              puStack_108 = (undefined8 *)lVar16;
              pcStack_f8 = pcVar18;
              func_0x000107c61170(param_3);
              goto LAB_101921484;
            }
          }
          pcStack_f8 = (code *)0x0;
          puStack_108 = (undefined8 *)0x0;
LAB_101921484:
          puVar17 = param_2;
          func_0x000107c4a3fc();
          pcStack_128 = (code *)CONCAT44(pcStack_128._4_4_,(int)puVar17);
          puVar17 = param_2;
          func_0x000107c423b8();
          func_0x000107c61180();
          if (puVar17 != (undefined8 *)0x0) {
            puVar5 = puVar17;
            pcStack_130 = (code *)lVar2;
            func_0x000107c41214();
            func_0x000107c61180();
            func_0x000107c61170(puVar17);
            if (puVar5 == (undefined8 *)0x0) {
              puVar17 = (undefined8 *)0x0;
              uVar15 = 0;
            }
            else {
              puVar6 = puVar5;
              func_0x000107c5ee30();
              func_0x000107c61170(puVar5);
              uVar15 = 1;
              puVar17 = puVar6;
              func_0x000107c5ee24(1,puVar6,lVar16);
              func_0x00010006c090(puVar6,lVar16);
            }
            func_0x000107c42680();
            pcVar18 = *(code **)(lVar13 + 8);
            (*pcVar18)(lStack_100,pcVar7);
            (*pcVar18)(lVar14,pcVar7);
            lVar2 = 0;
            func_0x000100b915bc();
            pcVar7 = pcStack_118;
            *(undefined8 *)(lStack_110 + *(int *)(lVar2 + 0x14)) = uStack_120;
            puVar5 = (undefined8 *)(lStack_110 + *(int *)(lVar2 + 0x18));
            *puVar5 = 0;
            puVar5[1] = 0;
            puVar5[2] = 1;
            puVar5[4] = 0;
            puVar5[3] = 0;
            puVar5[6] = 0;
            puVar5[5] = 0;
            *(undefined8 *)((long)puVar5 + 0x39) = 0;
            *(undefined8 *)((long)puVar5 + 0x31) = 0;
            *(code **)(lStack_110 + *(int *)(lVar2 + 0x1c)) = pcStack_118;
            puVar5 = (undefined8 *)(lStack_110 + *(int *)(lVar2 + 0x20));
            uVar19 = puVar4[8];
            uVar21 = puVar4[0xb];
            uVar20 = puVar4[10];
            puVar5[9] = puVar4[9];
            puVar5[8] = uVar19;
            puVar5[0xb] = uVar21;
            puVar5[10] = uVar20;
            uVar19 = puVar4[0xc];
            puVar5[0xd] = puVar4[0xd];
            puVar5[0xc] = uVar19;
            uVar19 = *puVar4;
            uVar21 = puVar4[3];
            uVar20 = puVar4[2];
            puVar5[1] = puVar4[1];
            *puVar5 = uVar19;
            puVar5[3] = uVar21;
            puVar5[2] = uVar20;
            uVar21 = puVar4[4];
            uVar20 = puVar4[7];
            uVar19 = puVar4[6];
            puVar5[5] = puVar4[5];
            puVar5[4] = uVar21;
            puVar5[7] = uVar20;
            puVar5[6] = uVar19;
            puVar5 = (undefined8 *)(lStack_110 + *(int *)(lVar2 + 0x24));
            *puVar5 = puVar3;
            puVar5[1] = pcStack_130;
            puVar5[2] = lVar12;
            puVar5[3] = pcVar1;
            puVar3 = (undefined8 *)(lStack_110 + *(int *)(lVar2 + 0x28));
            *puVar3 = pcStack_f8;
            puVar3[1] = puStack_108;
            *(char *)(lStack_110 + *(int *)(lVar2 + 0x2c)) = (char)pcStack_128;
            puVar3 = (undefined8 *)(lStack_110 + *(int *)(lVar2 + 0x30));
            *puVar3 = uVar15;
            puVar3[1] = puVar17;
            *(char *)(lStack_110 + *(int *)(lVar2 + 0x34)) = (char)param_2;
            func_0x000100e3eca0(puVar4,auStack_d8);
            func_0x000107c61174(pcVar7);
            return;
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10192162c);
          (*pcVar1)();
        }
        func_0x000101922538(puVar17,0x112d36580,&UNK_10d9016d0);
        puVar3 = puVar17;
      }
    }
    FUN_1019223f8();
    func_0x000107c613f8(&UNK_1107154a0,puVar3,0,0);
    uVar15 = 4;
  }
  *puVar3 = uVar15;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 2;
  func_0x000107c61654();
  return;
}



/* Entry: 101921630; end: 10192207f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101921630(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  ulong uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  byte *pbVar13;
  byte *pbVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  byte **ppbVar19;
  undefined8 *puVar20;
  long extraout_x8;
  long lVar21;
  long extraout_x8_00;
  undefined8 *puVar22;
  long extraout_x8_01;
  undefined8 *puVar23;
  undefined8 *puVar24;
  code *pcVar25;
  long extraout_x12;
  long lVar26;
  undefined8 *puVar27;
  long unaff_x20;
  byte *pbVar28;
  undefined8 *puVar29;
  code *pcVar30;
  long lVar31;
  long lVar32;
  undefined8 *puVar33;
  undefined8 uVar34;
  undefined8 *puVar35;
  long lVar36;
  long alStack_160 [4];
  undefined *apuStack_140 [5];
  long lStack_118;
  undefined8 *apuStack_110 [6];
  byte *pbStack_a0;
  ulong uStack_98;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_58;
  
  lVar12 = 0x112d3bc20;
  apuStack_110[2] = (undefined8 *)param_2;
  apuStack_110[3] = (undefined8 *)param_3;
  apuStack_110[4] = (undefined8 *)param_4;
  apuStack_110[5] = (undefined8 *)param_5;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar27 = (undefined8 *)((long)apuStack_140 - extraout_x8);
  puVar11 = (undefined8 *)0x0;
  func_0x000107c5eec8();
  lVar21 = puVar11[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar21 + 0x40));
  puVar22 = (undefined8 *)((long)puVar27 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  lVar12 = 0;
  func_0x000100b91fbc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  puVar33 = (undefined8 *)((long)puVar22 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar23 = (undefined8 *)((long)puVar33 - extraout_x12);
  func_0x0001000d224c(&pbStack_a0);
  pbVar28 = pbStack_a0;
  pbVar13 = pbStack_a0;
  func_0x000100873628();
  func_0x000107c61180();
  func_0x000107c615e8(pbVar28);
  if (pbVar13 == (byte *)0x0) {
LAB_101921888:
    pbStack_a0 = (byte *)0x0;
    uStack_98 = -0x2000000000000000;
    func_0x000107c602fc(0x2e);
    func_0x000107c5fb78(0xd000000000000011,0x800000010efc0b60);
    func_0x0001000d224c(&lStack_78);
    lStack_58 = lStack_78;
    uVar34 = 0x112dd42a8;
    func_0x0001000285a8(0x112dd42a8,&UNK_10d996f08);
    puVar18 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
    puVar17 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
    func_0x000107c603d0(&lStack_58,&pbStack_a0,uVar34,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c615e8(lStack_78);
    func_0x000107c5fb78(0xd000000000000019,0x800000010efc0b80);
    uVar34 = 0x112d35ff8;
    lStack_78 = param_6;
    lStack_70 = param_7;
    func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
    plVar15 = &lStack_78;
    func_0x000107c603d0(plVar15,&pbStack_a0,uVar34,puVar17,puVar18);
    uVar1 = uStack_98;
    pbVar28 = pbStack_a0;
    FUN_1019223f8();
    func_0x000107c613f8(&UNK_1107154a0,plVar15,0,0);
    *plVar15 = (long)pbVar28;
    plVar15[1] = uVar1;
    *(undefined1 *)(plVar15 + 2) = 1;
    func_0x000107c61654();
    return;
  }
  if (param_7 == 0) {
    lVar36 = 0;
  }
  else {
    lVar36 = param_6;
    func_0x000107c5fadc(param_6,param_7);
  }
  func_0x0001000d224c(&pbStack_a0);
  pbVar28 = pbStack_a0;
  pbVar14 = pbStack_a0;
  func_0x000107c5b0b0(pbStack_a0);
  func_0x000107c61180();
  func_0x000107c615e8(pbVar28);
  lVar32 = lVar36;
  func_0x0001084c1688(lVar36,pbVar14,pbVar13);
  func_0x000107c61180();
  func_0x000107c61170(lVar36);
  func_0x000107c61170(pbVar14);
  func_0x000107c61170(pbVar13);
  if (lVar32 == 0) goto LAB_101921888;
  func_0x000104846048(puVar33,lVar32);
  puVar16 = puVar23;
  func_0x0001019225b4(puVar33,puVar23,&SUB_100b91fbc);
  puVar35 = (undefined8 *)puVar23[1];
  if (puVar35 == (undefined8 *)0x0) goto LAB_101921cb0;
  uVar34 = *puVar23;
  func_0x0001019224f0((long)puVar23 + (long)*(int *)(lVar12 + 0x28),puVar27,0x112d3bc20,
                      &UNK_10d904ef0);
  puVar33 = puVar27;
  (**(code **)(lVar21 + 0x30))(puVar27,1,puVar11);
  if ((int)puVar33 == 1) {
    puVar16 = (undefined8 *)0x112d3bc20;
    func_0x000101922538(puVar27,0x112d3bc20,&UNK_10d904ef0);
    puVar33 = puVar27;
    goto LAB_101921cb0;
  }
  pcVar30 = *(code **)(lVar21 + 0x20);
  (*pcVar30)(puVar22,puVar27,puVar11);
  puVar27 = (undefined8 *)((long)puVar23 + (long)*(int *)(lVar12 + 0x2c));
  lVar36 = puVar27[1];
  if (lVar36 == 0) {
    (**(code **)(lVar21 + 8))();
    puVar33 = puVar22;
    puVar16 = puVar11;
    goto LAB_101921cb0;
  }
  puVar16 = (undefined8 *)puVar23[6];
  if (puVar16 == (undefined8 *)0x0) {
    pbVar28 = (byte *)0x0;
    puVar33 = (undefined8 *)0xe000000000000000;
  }
  else {
    pbVar28 = (byte *)puVar23[5];
    puVar33 = puVar16;
  }
  puVar20 = (undefined8 *)((ulong)pbVar28 & 0xffffffffffff);
  puVar24 = (undefined8 *)((ulong)puVar33 >> 0x38 & 0xf);
  puVar29 = puVar20;
  if (((ulong)puVar33 & 0x2000000000000000) != 0) {
    puVar29 = puVar24;
  }
  if (puVar29 == (undefined8 *)0x0) {
    pcVar30 = *(code **)(lVar21 + 8);
    func_0x000107c61434();
    (*pcVar30)(puVar22);
  }
  else {
    puVar27 = (undefined8 *)*puVar27;
    if (((ulong)puVar33 >> 0x3c & 1) == 0) {
      if (((ulong)puVar33 >> 0x3d & 1) == 0) {
        if (((ulong)pbVar28 >> 0x3c & 1) == 0) {
          puVar20 = puVar33;
          apuStack_110[1] = puVar27;
          func_0x000107c60358();
          puVar27 = apuStack_110[1];
        }
        else {
          pbVar28 = (byte *)(((ulong)puVar33 & 0xfffffffffffffff) + 0x20);
        }
        if (*pbVar28 == 0x2b) {
          if ((long)puVar20 < 1) {
                    /* WARNING: Does not return */
            pcVar30 = (code *)SoftwareBreakpoint(1,0x10192207c);
            (*pcVar30)();
          }
          lVar32 = (long)puVar20 + -1;
          if (lVar32 == 0) goto LAB_101921c5c;
          lVar31 = 0;
          do {
            pbVar28 = pbVar28 + 1;
            if (((9 < *pbVar28 - 0x30) ||
                (lVar26 = lVar31 * 10, SUB168(SEXT816(lVar31) * SEXT816(10),8) != lVar26 >> 0x3f))
               || (uVar1 = (ulong)(byte)(*pbVar28 - 0x30), lVar31 = lVar26 + uVar1,
                  SCARRY8(lVar26,uVar1))) goto LAB_101921c5c;
            puVar29 = (undefined8 *)0x0;
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
        }
        else if (*pbVar28 == 0x2d) {
          if ((long)puVar20 < 1) {
                    /* WARNING: Does not return */
            pcVar30 = (code *)SoftwareBreakpoint(1,0x101922074);
            (*pcVar30)();
          }
          lVar32 = (long)puVar20 + -1;
          if (lVar32 == 0) {
LAB_101921c5c:
            puVar29 = (undefined8 *)0x1;
          }
          else {
            lVar31 = 0;
            do {
              pbVar28 = pbVar28 + 1;
              if (((9 < *pbVar28 - 0x30) ||
                  (lVar26 = lVar31 * 10, SUB168(SEXT816(lVar31) * SEXT816(10),8) != lVar26 >> 0x3f))
                 || (uVar1 = (ulong)(byte)(*pbVar28 - 0x30), lVar31 = lVar26 - uVar1,
                    SBORROW8(lVar26,uVar1))) goto LAB_101921c5c;
              puVar29 = (undefined8 *)0x0;
              lVar32 = lVar32 + -1;
            } while (lVar32 != 0);
          }
        }
        else {
          if (puVar20 == (undefined8 *)0x0) goto LAB_101921c5c;
          if (pbVar28 == (byte *)0x0) {
            puVar29 = (undefined8 *)0x0;
          }
          else {
            lVar32 = 0;
            do {
              if (((9 < *pbVar28 - 0x30) ||
                  (lVar31 = lVar32 * 10, SUB168(SEXT816(lVar32) * SEXT816(10),8) != lVar31 >> 0x3f))
                 || (uVar1 = (ulong)(byte)(*pbVar28 - 0x30), lVar32 = lVar31 + uVar1,
                    SCARRY8(lVar31,uVar1))) goto LAB_101921c5c;
              puVar29 = (undefined8 *)0x0;
              puVar20 = (undefined8 *)((long)puVar20 + -1);
              pbVar28 = pbVar28 + 1;
            } while (puVar20 != (undefined8 *)0x0);
          }
        }
      }
      else {
        pbStack_a0 = pbVar28;
        uStack_98 = (ulong)puVar33 & 0xffffffffffffff;
        uVar2 = (uint)pbVar28 & 0xff;
        if (uVar2 == 0x2b) {
          if (puVar24 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
            pcVar30 = (code *)SoftwareBreakpoint(1,0x101922080);
            (*pcVar30)();
          }
          lVar32 = (long)puVar24 + -1;
          if (lVar32 == 0) goto LAB_101921c5c;
          lVar31 = 0;
          pbVar28 = (byte *)((ulong)&pbStack_a0 | 1);
          do {
            if (((9 < *pbVar28 - 0x30) ||
                (lVar26 = lVar31 * 10, SUB168(SEXT816(lVar31) * SEXT816(10),8) != lVar26 >> 0x3f))
               || (uVar1 = (ulong)(byte)(*pbVar28 - 0x30), lVar31 = lVar26 + uVar1,
                  SCARRY8(lVar26,uVar1))) goto LAB_101921c5c;
            puVar29 = (undefined8 *)0x0;
            lVar32 = lVar32 + -1;
            pbVar28 = pbVar28 + 1;
          } while (lVar32 != 0);
        }
        else if (uVar2 == 0x2d) {
          if (puVar24 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
            pcVar30 = (code *)SoftwareBreakpoint(1,0x101922078);
            (*pcVar30)();
          }
          lVar32 = (long)puVar24 + -1;
          if (lVar32 == 0) goto LAB_101921c5c;
          lVar31 = 0;
          pbVar28 = (byte *)((ulong)&pbStack_a0 | 1);
          do {
            if (((9 < *pbVar28 - 0x30) ||
                (lVar26 = lVar31 * 10, SUB168(SEXT816(lVar31) * SEXT816(10),8) != lVar26 >> 0x3f))
               || (uVar1 = (ulong)(byte)(*pbVar28 - 0x30), lVar31 = lVar26 - uVar1,
                  SBORROW8(lVar26,uVar1))) goto LAB_101921c5c;
            puVar29 = (undefined8 *)0x0;
            lVar32 = lVar32 + -1;
            pbVar28 = pbVar28 + 1;
          } while (lVar32 != 0);
        }
        else {
          if (puVar24 == (undefined8 *)0x0) goto LAB_101921c5c;
          lVar32 = 0;
          ppbVar19 = &pbStack_a0;
          do {
            if (((9 < *(byte *)ppbVar19 - 0x30) ||
                (lVar31 = lVar32 * 10, SUB168(SEXT816(lVar32) * SEXT816(10),8) != lVar31 >> 0x3f))
               || (uVar1 = (ulong)(byte)(*(byte *)ppbVar19 - 0x30), lVar32 = lVar31 + uVar1,
                  SCARRY8(lVar31,uVar1))) goto LAB_101921c5c;
            puVar29 = (undefined8 *)0x0;
            puVar24 = (undefined8 *)((long)puVar24 + -1);
            ppbVar19 = (byte **)((long)ppbVar19 + 1);
          } while (puVar24 != (undefined8 *)0x0);
        }
      }
      func_0x000107c61434(puVar16);
      func_0x000107c61434(puVar35);
      func_0x000107c61434(lVar36);
    }
    else {
      func_0x000107c61434();
      func_0x000107c61434(puVar35);
      func_0x000107c61434(lVar36);
      puVar20 = puVar33;
      apuStack_110[1] = puVar27;
      func_0x000100edba6c(pbVar28,puVar33,10);
      puVar27 = apuStack_110[1];
      puVar29 = puVar20;
    }
    func_0x000107c6142c(puVar33);
    if (((uint)puVar29 & 0xff) != 1) {
      apuStack_110[1] = puVar27;
      puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c46ed0();
      apuStack_140[4] = puVar17;
      puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c46ed0();
      apuStack_140[3] = puVar17;
      puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c46ed0();
      puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      apuStack_140[2] = puVar17;
      func_0x000107c610f8();
      func_0x000107c46ed0();
      puVar17 = puVar18;
      FUN_101922ff0();
      func_0x0001019224f0(unaff_x20 + _DAT_112dd4258,&pbStack_a0,0x112dd4248,&UNK_10d996ec0);
      apuStack_140[1] = puVar18;
      lStack_118 = lVar36;
      apuStack_110[0] = puVar35;
      if (lStack_88 == 0) {
        func_0x000107c6142c(puVar20);
        func_0x000101922538(&pbStack_a0,0x112dd4248,&UNK_10d996ec0);
      }
      else {
        ppbVar19 = &pbStack_a0;
        func_0x0001000a8868(ppbVar19,lStack_88);
        pcVar25 = *(code **)(lStack_80 + 8);
        puVar23[-1] = lStack_80;
        puVar23[-3] = puVar20;
        puVar23[-2] = lStack_88;
        puVar23[-4] = puVar17;
        (*pcVar25)(ppbVar19,apuStack_110[2],apuStack_110[3],0x54534e495f505041,0xeb000000004c4c41,
                   apuStack_110[4],apuStack_110[5],0x4f5252455f4e4f4e,0xe900000000000052);
        func_0x000107c6142c(puVar20);
        FUN_101922fd0(&pbStack_a0);
      }
      lVar21 = 0;
      func_0x000100b918b4();
      (*pcVar30)((long)param_1 + (long)*(int *)(lVar21 + 0x1c),puVar22,puVar11);
      uVar3 = puVar23[7];
      uVar7 = puVar23[8];
      puVar33 = (undefined8 *)((long)puVar23 + (long)*(int *)(lVar12 + 0x30));
      uVar4 = *puVar33;
      uVar8 = puVar33[1];
      func_0x0001019224f0((long)puVar23 + (long)*(int *)(lVar12 + 0x34),
                          (long)param_1 + (long)*(int *)(lVar21 + 0x34),0x112d3bc20,&UNK_10d904ef0);
      puVar33 = (undefined8 *)((long)puVar23 + (long)*(int *)(lVar12 + 0x38));
      uVar5 = *puVar33;
      uVar9 = puVar33[1];
      puVar33 = (undefined8 *)((long)puVar23 + (long)*(int *)(lVar12 + 0x3c));
      uVar6 = *puVar33;
      uVar10 = puVar33[1];
      func_0x000107c61434(uVar10);
      func_0x000107c61434(uVar7);
      func_0x000107c61434(uVar8);
      func_0x000107c61434(uVar9);
      func_0x000101922578(puVar23,&SUB_100b91fbc);
      *param_1 = uVar34;
      param_1[1] = apuStack_110[0];
      param_1[2] = apuStack_140[4];
      param_1[3] = apuStack_140[3];
      puVar33 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar21 + 0x20));
      *puVar33 = apuStack_110[1];
      puVar33[1] = lStack_118;
      *(undefined **)((long)param_1 + (long)*(int *)(lVar21 + 0x24)) = apuStack_140[1];
      puVar33 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar21 + 0x28));
      *puVar33 = uVar3;
      puVar33[1] = uVar7;
      *(undefined **)((long)param_1 + (long)*(int *)(lVar21 + 0x2c)) = apuStack_140[2];
      puVar33 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar21 + 0x30));
      *puVar33 = uVar4;
      puVar33[1] = uVar8;
      puVar33 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar21 + 0x38));
      *puVar33 = uVar5;
      puVar33[1] = uVar9;
      param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar21 + 0x3c));
      *param_1 = uVar6;
      param_1[1] = uVar10;
      return;
    }
    (**(code **)(lVar21 + 8))(puVar22);
    func_0x000107c6142c(lVar36);
    puVar33 = puVar35;
  }
  func_0x000107c6142c();
  puVar16 = puVar11;
LAB_101921cb0:
  FUN_101922ff0();
  puVar11 = puVar33;
  FUN_1019223f8();
  func_0x000107c613f8(&UNK_1107154a0,puVar11,0,0);
  *puVar11 = puVar33;
  puVar11[1] = puVar16;
  *(undefined1 *)(puVar11 + 2) = 1;
  func_0x000107c61654();
  func_0x000101922578(puVar23,&SUB_100b91fbc);
  return;
}



/* Entry: 101922080; end: 1019223f7;  */

void FUN_101922080(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  long extraout_x8_02;
  code *pcVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined1 *puStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [24];
  long lStack_70;
  
  lVar4 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)&lStack_100 - extraout_x8;
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar14 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5fb10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar10 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_e8 = lVar10;
  func_0x000107c5ed50();
  lVar15 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar10 = lVar10 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c4c9c8();
  func_0x000107c61180();
  if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x1019223f4);
    (*pcVar11)();
  }
  func_0x000107c600f4(lVar10);
  func_0x000107c61170(unaff_x20);
  func_0x000107c5ed4c(auStack_88);
  puVar1 = PTR___sypN_11034f1a8;
  if (lStack_70 == 0) {
    (**(code **)(lVar15 + 8))(lVar10,lVar4);
  }
  else {
    lStack_e0 = 0;
    puStack_d8 = (undefined1 *)0x0;
    do {
      func_0x000100102924(auStack_88,auStack_a8);
      func_0x0001000bb420(auStack_a8,auStack_c8);
      uVar5 = 0;
      FUN_101922f8c(0);
      plVar6 = &lStack_d0;
      puVar8 = auStack_c8;
      func_0x000107c6147c(plVar6,puVar8,puVar1 + 8,uVar5,6);
      lVar2 = lStack_d0;
      if ((int)plVar6 == 0) {
        FUN_101922fd0(auStack_a8);
      }
      else {
        lVar7 = lStack_d0;
        func_0x000107c4c9c4();
        if (((int)lVar7 == 4) || (lVar7 = lVar2, func_0x000107c4c9c4(), (int)lVar7 == 3)) {
          lVar7 = lVar2;
          lStack_100 = lVar15;
          lStack_f8 = lVar4;
          lStack_f0 = lVar14;
          func_0x000107c4c9a4();
          func_0x000107c61180();
          if (lVar7 == 0) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x1019223f8);
            (*pcVar11)();
          }
          lVar14 = lVar7;
          func_0x000107c5ee30();
          func_0x000107c61170(lVar7);
          lVar4 = lStack_e8;
          func_0x000107c5fb04(lStack_e8);
          lVar15 = lVar14;
          puVar9 = puVar8;
          func_0x000107c5faf0(lVar14,puVar8,lVar4);
          lStack_e0 = lVar15;
          func_0x000107c61170(lVar2);
          func_0x00010006c090(lVar14,puVar8);
          func_0x000107c6142c(puStack_d8);
          FUN_101922fd0(auStack_a8);
          lVar4 = lStack_f8;
          lVar14 = lStack_f0;
          lVar15 = lStack_100;
          puStack_d8 = puVar9;
        }
        else {
          FUN_101922fd0(auStack_a8);
          func_0x000107c61170(lVar2);
        }
      }
      func_0x000107c5ed4c(auStack_88);
    } while (lStack_70 != 0);
    (**(code **)(lVar15 + 8))(lVar10,lVar4);
    puVar8 = puStack_d8;
    if (puStack_d8 != (undefined1 *)0x0) {
      func_0x000107c5edd0(lVar13,lStack_e0,puStack_d8);
      func_0x000107c6142c(puVar8);
      lVar4 = lVar13;
      (**(code **)(lVar12 + 0x30))(lVar13,1,lVar3);
      if ((int)lVar4 == 1) {
        func_0x000101922538(lVar13,0x112d36580,&UNK_10d9016d0);
        uVar5 = 1;
      }
      else {
        pcVar11 = *(code **)(lVar12 + 0x20);
        (*pcVar11)(lVar14,lVar13,lVar3);
        (*pcVar11)(param_1,lVar14,lVar3);
        uVar5 = 0;
      }
      goto LAB_1019223bc;
    }
  }
  uVar5 = 1;
LAB_1019223bc:
  (**(code **)(lVar12 + 0x38))(param_1,uVar5,1,lVar3);
  return;
}



/* Entry: 1019223f8; end: 101922437;  */

void FUN_1019223f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd4298 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc99d10;
  func_0x000107c61520(&UNK_10dc99d10,&UNK_1107154a0);
  puRam0000000112dd4298 = puVar1;
  return;
}



/* Entry: 101922438; end: 10192246b;  */

void FUN_101922438(undefined8 param_1,ulong param_2)

{
  if (param_2 < 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10192246c; end: 1019225f7;  */

undefined8 FUN_10192246c(undefined8 param_1)

{
  (*(code *)&DAT_1041912d8)();
  return param_1;
}



/* Entry: 1019225f8; end: 101922a1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1019225f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  int iVar9;
  undefined *puStack_d0;
  undefined8 *puStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  char cStack_90;
  int aiStack_88 [6];
  long lStack_70;
  long lStack_68;
  undefined *puStack_58;
  
  puVar3 = param_1;
  func_0x000107c3d3e4();
  if ((int)puVar3 == 4) {
    puVar3 = param_1;
    func_0x000107c51a84();
    func_0x000107c61180();
    if (puVar3 != (undefined8 *)0x0) {
      puVar4 = puVar3;
      func_0x000107c3e2e0();
      func_0x000107c61180();
      func_0x000107c61170();
      if (puVar4 != (undefined8 *)0x0) {
        return puVar4;
      }
    }
    uVar8 = 2;
  }
  else {
    uVar8 = 1;
  }
  FUN_1019223f8();
  puVar5 = &UNK_1107154a0;
  func_0x000107c613f8(&UNK_1107154a0,puVar3,0,0);
  *puVar3 = uVar8;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 2;
  func_0x000107c61654();
  FUN_101923500();
  iVar9 = (int)param_1;
  if (((ulong)param_1 & 0xff00000000) == 0x100000000) {
    if (iVar9 < 2) {
      if (iVar9 == 0) {
        puStack_b0 = (undefined8 *)0xe700000000000000;
        puStack_d0 = (undefined *)0x4e574f4e4b4e55;
      }
      else {
        puStack_b0 = (undefined8 *)0xe700000000000000;
        puStack_d0 = (undefined *)0x57454956424557;
      }
    }
    else if (iVar9 == 2) {
      puStack_b0 = (undefined8 *)0xeb000000004c4c41;
      puStack_d0 = (undefined *)0x54534e495f505041;
    }
    else if (iVar9 == 3) {
      puStack_b0 = (undefined8 *)0xe800000000000000;
      puStack_d0 = (undefined *)0x4b4e494c50454544;
    }
    else {
      puStack_b0 = (undefined8 *)0xee004f454449565f;
      puStack_d0 = (undefined *)0x4d524f46474e4f4c;
    }
  }
  else {
    puStack_d0 = PTR___ss5Int32VN_11034ee20;
    puVar3 = (undefined8 *)PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
    aiStack_88[0] = iVar9;
    func_0x000107c6057c();
    puStack_b0 = puVar3;
  }
  puVar6 = puVar5;
  FUN_101923604();
  puVar7 = puVar6;
  puVar4 = puVar3;
  func_0x000103e16228();
  func_0x0001019224f0(unaff_x20 + _DAT_112dd4250,aiStack_88,0x112dd4240,&UNK_10d996f00);
  lVar2 = lStack_68;
  lVar1 = lStack_70;
  if (lStack_70 == 0) {
    FUN_101922438(puVar6,puVar3);
    func_0x000101922538(aiStack_88,0x112dd4240,&UNK_10d996f00);
  }
  else {
    func_0x0001000a8868(aiStack_88,lStack_70);
    (**(code **)(lVar2 + 0x18))((ulong)param_1 & 0xffffffffff,puVar6,puVar3,lVar1,lVar2);
    FUN_101922438(puVar6,puVar3);
    FUN_101922fd0(aiStack_88);
  }
  func_0x0001019224f0(unaff_x20 + _DAT_112dd4258,aiStack_88,0x112dd4248,&UNK_10d996ec0);
  if (lStack_70 == 0) {
    func_0x000107c6142c(puVar4);
    func_0x000107c6142c(puStack_b0);
    func_0x000101922538(aiStack_88,0x112dd4248,&UNK_10d996ec0);
  }
  else {
    func_0x0001000a8868(aiStack_88,lStack_70);
    puStack_58 = puVar5;
    func_0x000107c61434(param_3);
    func_0x000107c61434(param_5);
    func_0x000107c614b0(puVar5);
    uVar8 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar3 = &uStack_a0;
    func_0x000107c6147c(puVar3,&puStack_58,uVar8,&UNK_1107154a0,6);
    if ((int)puVar3 == 0) {
      uStack_98 = 0x800000010efc0b40;
      uStack_a0 = 0xd000000000000014;
    }
    else if (cStack_90 != '\x01') {
      func_0x00010192244c(uStack_a0,uStack_98);
      uStack_98 = 0xe300000000000000;
      uStack_a0 = 0x412f4e;
    }
    (**(code **)(lStack_68 + 8))
              (param_2,param_3,puStack_d0,puStack_b0,param_4,param_5,puVar7,puVar4,uStack_a0,
               uStack_98,lStack_70,lStack_68);
    func_0x000107c6142c(puVar4);
    func_0x000107c6142c(puStack_b0);
    func_0x000107c6142c(param_3);
    func_0x000107c6142c(param_5);
    func_0x000107c6142c(uStack_98);
    FUN_101922fd0(aiStack_88);
    puVar3 = puStack_b0;
  }
  func_0x000107c61654();
  return puVar3;
}



/* Entry: 101922a1c; end: 101922daf;  */

/* WARNING: Removing unreachable block (ram,0x000101922a90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101922a1c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  undefined1 auStack_90 [24];
  long lStack_78;
  long lStack_70;
  
  func_0x000107c614f0();
  func_0x000101924a50();
  lVar2 = *(long *)(param_1 + _DAT_112dd4498);
  func_0x000107c61174();
  lVar3 = lVar2;
  FUN_1019225f8();
  lVar4 = lVar3;
  func_0x000107c3e318();
  lVar5 = lVar3;
  if ((int)lVar4 == 1) {
    func_0x000107c3dde0();
    func_0x000107c61180();
    if (lVar5 == 0) goto LAB_101922d0c;
    lVar4 = lVar5;
    func_0x000107c4e8c0();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar6 = lVar5;
      func_0x000107c44fa8();
      func_0x000107c61180();
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101922da8);
        (*pcVar1)();
      }
      lVar7 = lVar5;
      func_0x000107c3deb0();
      func_0x000107c61180();
      if (lVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101922db0);
        (*pcVar1)();
      }
      lVar8 = lVar7;
      func_0x000107c5faec();
      func_0x000107c61170(lVar7);
      lVar7 = lVar4;
      func_0x00010191e6b0(lVar4,lVar6,lVar8,param_2);
      func_0x000107c61170(lVar6);
      func_0x000107c6142c(param_2);
      lVar6 = lVar5;
      if (lVar7 != 0) {
        func_0x0001019224f0(unaff_x20 + _DAT_112dd4250,auStack_90,0x112dd4240,&UNK_10d996f00);
        if (lStack_78 == 0) {
          func_0x000107c61170(lVar2);
          func_0x000107c61170(lVar3);
          func_0x000107c61170(lVar4);
LAB_101922d7c:
          func_0x000107c61170(lVar5);
          func_0x000101922538(auStack_90,0x112dd4240,&UNK_10d996f00);
          return lVar7;
        }
        func_0x0001000a8868(auStack_90,lStack_78);
        (**(code **)(lStack_70 + 0x10))(8,lStack_78,lStack_70);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar4);
LAB_101922ce4:
        func_0x000107c61170(lVar5);
        FUN_101922fd0(auStack_90);
        return lVar7;
      }
LAB_101922cfc:
      lVar5 = lVar4;
      func_0x000107c61170(lVar6);
    }
  }
  else {
    if ((int)lVar4 != 4) goto LAB_101922d0c;
    func_0x000107c414c4();
    func_0x000107c61180();
    if (lVar5 == 0) goto LAB_101922d0c;
    lVar4 = lVar5;
    func_0x000107c4e8c0();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar6 = lVar5;
      func_0x000107c44fa8();
      func_0x000107c61180();
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101922da4);
        (*pcVar1)();
      }
      lVar7 = lVar5;
      func_0x000107c3deb0();
      func_0x000107c61180();
      if (lVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101922dac);
        (*pcVar1)();
      }
      lVar8 = lVar7;
      func_0x000107c5faec();
      func_0x000107c61170(lVar7);
      lVar7 = lVar4;
      func_0x00010191e6b0(lVar4,lVar6,lVar8,param_2);
      func_0x000107c61170(lVar6);
      func_0x000107c6142c(param_2);
      lVar6 = lVar5;
      if (lVar7 != 0) {
        func_0x0001019224f0(unaff_x20 + _DAT_112dd4250,auStack_90,0x112dd4240,&UNK_10d996f00);
        if (lStack_78 == 0) {
          func_0x000107c61170(lVar4);
          func_0x000107c61170(lVar5);
          func_0x000107c61170(lVar2);
          lVar5 = lVar3;
          goto LAB_101922d7c;
        }
        func_0x0001000a8868(auStack_90,lStack_78);
        (**(code **)(lStack_70 + 0x10))(9,lStack_78,lStack_70);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar5);
        func_0x000107c61170(lVar2);
        lVar5 = lVar3;
        goto LAB_101922ce4;
      }
      goto LAB_101922cfc;
    }
  }
  func_0x000107c61170(lVar5);
LAB_101922d0c:
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  return 0;
}



/* Entry: 101922db0; end: 101922e6f;  */

undefined8 * FUN_101922db0(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  puVar2 = (undefined8 *)0x0;
  if (unaff_x20 == (undefined8 *)0x0) {
    puVar3 = puVar2;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170();
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
    puVar3 = puVar2;
    puVar2 = unaff_x21;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  uVar1 = (uint)(param_2 >> 0x20);
  uVar4 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar4 == 0) {
      if ((param_2 & 0xff000000000000) != 0) {
LAB_101922eb0:
        func_0x000107c610f8(PTR_PTR_1126bd4d8);
        func_0x00010006c00c(puVar3,param_2);
        unaff_x20 = puVar3;
        FUN_101922db0(puVar3,param_2);
        func_0x00010006c090(puVar3,param_2);
        if (puVar2 == (undefined8 *)0x0) {
          return unaff_x20;
        }
        FUN_1019223f8();
        func_0x000107c613f8(&UNK_1107154a0,puVar3,0,0);
        *puVar3 = puVar2;
        puVar3[1] = 0;
        *(undefined1 *)(puVar3 + 2) = 0;
        goto LAB_101922f6c;
      }
    }
    else if ((long)(int)puVar3 != (long)puVar3 >> 0x20) goto LAB_101922eb0;
  }
  else if ((uVar4 == 2) && (puVar3[2] != puVar3[3])) goto LAB_101922eb0;
  FUN_1019223f8();
  func_0x000107c613f8(&UNK_1107154a0,puVar3,0,0);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 2;
LAB_101922f6c:
  func_0x000107c61654();
  return unaff_x20;
}



/* Entry: 101922e70; end: 101922f8b;  */

long * FUN_101922e70(long *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  long *unaff_x20;
  long unaff_x21;
  
  uVar1 = (uint)(param_2 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 == 0) {
      if ((param_2 & 0xff000000000000) != 0) {
LAB_101922eb0:
        func_0x000107c610f8(PTR_PTR_1126bd4d8);
        func_0x00010006c00c(param_1,param_2);
        unaff_x20 = param_1;
        FUN_101922db0(param_1,param_2);
        func_0x00010006c090(param_1,param_2);
        if (unaff_x21 == 0) {
          return unaff_x20;
        }
        FUN_1019223f8();
        func_0x000107c613f8(&UNK_1107154a0,param_1,0,0);
        *param_1 = unaff_x21;
        param_1[1] = 0;
        *(undefined1 *)(param_1 + 2) = 0;
        goto LAB_101922f6c;
      }
    }
    else if ((long)(int)param_1 != (long)param_1 >> 0x20) goto LAB_101922eb0;
  }
  else if ((uVar2 == 2) && (param_1[2] != param_1[3])) goto LAB_101922eb0;
  FUN_1019223f8();
  func_0x000107c613f8(&UNK_1107154a0,param_1,0,0);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 2;
LAB_101922f6c:
  func_0x000107c61654();
  return unaff_x20;
}



/* Entry: 101922f8c; end: 101922fcf;  */

void FUN_101922f8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd42b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126e1528;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112dd42b8 = puVar1;
  return;
}



/* Entry: 101922fd0; end: 101922fef;  */

void FUN_101922fd0(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000101922fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 101922ff0; end: 101923387;  */

undefined1  [16] FUN_101922ff0(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0xde);
  func_0x000107c5fb78(0xd000000000000014,0x800000010efc0c10);
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uVar7 = 0x112d35ff8;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  puVar6 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
  puVar5 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
  func_0x000107c603d0(&uStack_80,&uStack_70,uVar7,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0xd000000000000014,0x800000010efc0c30);
  puVar11 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puVar4 = PTR___sSiN_11034deb0;
  puVar10 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar10);
  func_0x000107c5fb78(0xd000000000000011,0x800000010efc0c50);
  puVar10 = puVar11;
  func_0x000107c6057c(puVar4,puVar11);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar10);
  func_0x000107c5fb78(0x617473656d697420,0xef20734d6e49706d);
  func_0x000107c6057c(puVar4,puVar11);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar11);
  func_0x000107c5fb78(0xd00000000000001a,0x800000010efc0c70);
  uStack_78 = unaff_x20[6];
  uStack_80 = unaff_x20[5];
  func_0x000107c603d0(&uStack_80,&uStack_70,uVar7,puVar5,puVar6);
  func_0x000107c5fb78(0x65566b63696c6320,0xee00206e6f697372);
  uStack_78 = unaff_x20[8];
  uStack_80 = unaff_x20[7];
  func_0x000107c603d0(&uStack_80,&uStack_70,uVar7,puVar5,puVar6);
  func_0x000107c5fb78(0x6f4e6b63696c6320,0xec0000002065636e);
  lVar8 = 0;
  func_0x000100b91fbc();
  iVar1 = *(int *)(lVar8 + 0x28);
  uVar9 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  func_0x000107c603d0((long)unaff_x20 + (long)iVar1,&uStack_70,uVar9,puVar5,puVar6);
  func_0x000107c5fb78(0xd000000000000010,0x800000010efc0c90);
  puVar2 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x2c));
  uStack_78 = puVar2[1];
  uStack_80 = *puVar2;
  func_0x000107c603d0(&uStack_80,&uStack_70,uVar7,puVar5,puVar6);
  func_0x000107c5fb78(0xd000000000000014,0x800000010efc0cb0);
  puVar2 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x30));
  uStack_78 = puVar2[1];
  uStack_80 = *puVar2;
  func_0x000107c603d0(&uStack_80,&uStack_70,uVar7,puVar5,puVar6);
  func_0x000107c5fb78(0xd000000000000012,0x800000010efc0cd0);
  func_0x000107c603d0((long)unaff_x20 + (long)*(int *)(lVar8 + 0x34),&uStack_70,uVar9,puVar5,puVar6)
  ;
  func_0x000107c5fb78(0xd000000000000016,0x800000010efc0cf0);
  puVar2 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar8 + 0x38));
  uStack_78 = puVar2[1];
  uStack_80 = *puVar2;
  func_0x000107c603d0(&uStack_80,&uStack_70,uVar7,puVar5,puVar6);
  auVar3._8_8_ = uStack_68;
  auVar3._0_8_ = uStack_70;
  return auVar3;
}



/* Entry: 101923388; end: 10192341b;  */

undefined8 FUN_101923388(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lStack_30;
  long lStack_28;
  char cStack_20;
  undefined8 uStack_18;
  
  iVar1 = (int)&lStack_30;
  uStack_18 = param_1;
  func_0x000107c614b0();
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(&lStack_30,&uStack_18,uVar2,&UNK_1107154a0,6);
  if (iVar1 != 0) {
    if (cStack_20 == '\x01') {
      func_0x00010192244c();
      return 2;
    }
    if (((cStack_20 == '\x02') && (lStack_30 == 7)) && (lStack_28 == 0)) {
      return 3;
    }
    func_0x00010192244c();
  }
  return 4;
}



/* Entry: 10192341c; end: 1019234ff;  */

void FUN_10192341c(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107c428c8();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c428cc();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c51a34();
      func_0x000107c61180();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1019234fc);
        (*pcVar1)();
      }
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
      lVar3 = lVar2;
      func_0x000107c51a2c();
      func_0x000107c61180();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101923500);
        (*pcVar1)();
      }
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
    }
  }
  return;
}



/* Entry: 101923500; end: 101923603;  */

ulong FUN_101923500(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_1 == 0) {
    return 0x100000000;
  }
  func_0x000107c51a84();
  func_0x000107c61180();
  if (param_1 != 0) {
    uVar2 = param_1;
    func_0x000107c3e2e0();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (uVar2 != 0) {
      uVar3 = uVar2;
      func_0x000107c3e318();
      iVar1 = (int)uVar3;
      if (iVar1 < 3) {
        if (iVar1 == 1) {
          func_0x000107c61170(uVar2);
          uVar2 = 0x100000000;
          uVar3 = 2;
          goto LAB_10192357c;
        }
        if (iVar1 == 2) {
          func_0x000107c61170(uVar2);
          uVar2 = 0x100000000;
          uVar3 = 4;
          goto LAB_10192357c;
        }
      }
      else {
        if (iVar1 == 4) {
          func_0x000107c61170(uVar2);
          uVar2 = 0x100000000;
          uVar3 = 3;
          goto LAB_10192357c;
        }
        if (iVar1 == 3) {
          func_0x000107c61170(uVar2);
          uVar2 = 0x100000000;
          uVar3 = 1;
          goto LAB_10192357c;
        }
      }
      uVar3 = uVar2;
      func_0x000107c3e318(uVar2);
      func_0x000107c61170(uVar2);
      uVar2 = 0;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_10192357c;
    }
  }
  uVar3 = 0;
  uVar2 = 0x100000000;
LAB_10192357c:
  return uVar2 | uVar3;
}



/* Entry: 101923604; end: 1019236ef;  */

undefined1  [16] FUN_101923604(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  long lStack_50;
  long lStack_48;
  byte bStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)&lStack_50;
  uStack_38 = param_1;
  func_0x000107c614b0();
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(&lStack_50,&uStack_38,uVar2,&UNK_1107154a0,6);
  if (iVar1 == 0) {
    lVar3 = 0;
    lVar4 = 0;
  }
  else if ((bStack_40 < 2) || (lStack_50 != 2 || lStack_48 != 0)) {
    lVar3 = lStack_50;
    lVar4 = lStack_48;
    func_0x000103e17dec(lStack_50,lStack_48,bStack_40);
    if (lVar4 == 0) {
      func_0x00010192244c(lStack_50,lStack_48,bStack_40);
      lVar4 = -0x1d00000000000000;
      lVar3 = 0x6c696e;
    }
    else {
      func_0x00010192244c(lStack_50,lStack_48,bStack_40);
    }
  }
  else {
    lVar3 = 0;
    lVar4 = 1;
  }
  auVar5._8_8_ = lVar4;
  auVar5._0_8_ = lVar3;
  return auVar5;
}



/* Entry: 1019236f0; end: 101923743;  */

void FUN_1019236f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  return;
}



/* Entry: 101923744; end: 10192376f;  */

/* WARNING: Possible PIC construction at 0x000101923750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101923760: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101923754) */
/* WARNING: Removing unreachable block (ram,0x000101923764) */

void FUN_101923744(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101923770; end: 1019237cb;  */

void FUN_101923770(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019237cc; end: 1019238a3;  */

void FUN_1019237cc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar4 = &UNK_110412f30;
  func_0x000107c613fc(&UNK_110412f30,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  *(undefined8 *)(puVar4 + 0x18) = uVar1;
  *(undefined8 *)(puVar4 + 0x20) = uVar6;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  func_0x0001000285a8(0x112dd42c0,&UNK_10d996f20);
  func_0x000107c613fc();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar3);
  pcVar5 = FUN_1019238a4;
  func_0x0001000bdd8c(FUN_1019238a4,puVar4);
  uVar6 = 0;
  func_0x00010022e7d0(0);
  func_0x000107c610f8();
  func_0x000100b8b160(pcVar5,uVar6);
  *param_1 = pcVar5;
  return;
}



/* Entry: 1019238a4; end: 1019238a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019238a4(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = 0x112d39420;
  func_0x0001000285a8(0x112d39420,&UNK_10d979900);
  uVar2 = *(undefined8 *)(lVar5 + _DAT_113083868);
  func_0x0001000bda74(uVar2,uVar6);
  uVar7 = *(undefined8 *)(lVar1 + _DAT_113012cf0);
  uVar6 = *(undefined8 *)(lVar4 + _DAT_113043d30);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar6);
  func_0x000107c4ec80();
  func_0x000107c61180();
  lVar4 = 0;
  func_0x000100b91220();
  lVar5 = lVar4;
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = uVar7;
  *(undefined8 *)(lVar5 + 0x18) = uVar2;
  *(undefined8 *)(lVar5 + 0x20) = uVar6;
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  param_1[3] = lVar4;
  param_1[4] = (long)&PTR_DAT_110412ee0;
  *param_1 = lVar5;
  return;
}



/* Entry: 1019238a8; end: 1019238fb;  */

void FUN_1019238a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_4;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  return;
}



/* Entry: 1019238fc; end: 101923ad3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019238fc(undefined8 *param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lStack_c0;
  long lStack_b8;
  long alStack_b0 [3];
  long lStack_98;
  undefined **ppuStack_90;
  undefined1 auStack_88 [40];
  
  plVar6 = &lStack_c0;
  uVar7 = 0x112d39420;
  func_0x0001000285a8(0x112d39420,&UNK_10d979900);
  uVar2 = *(undefined8 *)(param_2 + _DAT_113083868);
  func_0x0001000bda74(uVar2,uVar7);
  lVar3 = 0;
  func_0x00010191d4d0();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar2;
  *(undefined1 *)(lVar4 + 0x18) = 0;
  func_0x000107c6157c(uVar2);
  func_0x0001000d224c(auStack_88);
  ppuStack_90 = &PTR_DAT_110412ed0;
  uVar7 = *(undefined8 *)(param_4 + _DAT_113043d30);
  lVar5 = 0;
  alStack_b0[0] = lVar4;
  lStack_98 = lVar3;
  FUN_10191f4ec();
  lVar4 = lVar5;
  func_0x000107c610f8();
  func_0x000101923b8c(auStack_88,lVar4 + _DAT_112dd4250,0x112dd4240,&UNK_10d996f00);
  func_0x000101923b8c(alStack_b0,lVar4 + _DAT_112dd4258,0x112dd4248,&UNK_10d996ec0);
  *(undefined8 *)(lVar4 + _DAT_112dd4260) = uVar7;
  *(undefined8 *)(lVar4 + _DAT_112dd4268) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_c0 = lVar4;
  lStack_b8 = lVar5;
  func_0x000107c6157c(uVar7);
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_c0,puVar1);
  func_0x000107c61574(uVar2);
  func_0x000101923bd4(auStack_88,0x112dd4240,&UNK_10d996f00);
  func_0x000101923bd4(alStack_b0,0x112dd4248,&UNK_10d996ec0);
  *param_1 = plVar6;
  return;
}



/* Entry: 101923ad4; end: 101923adf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101923ad4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_c0;
  long lStack_b8;
  long alStack_b0 [3];
  long lStack_98;
  undefined **ppuStack_90;
  undefined1 auStack_88 [40];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar7 = &lStack_c0;
  uVar8 = 0x112d39420;
  func_0x0001000285a8(0x112d39420,&UNK_10d979900);
  uVar3 = *(undefined8 *)(lVar5 + _DAT_113083868);
  func_0x0001000bda74(uVar3,uVar8);
  lVar4 = 0;
  func_0x00010191d4d0();
  lVar5 = lVar4;
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = uVar3;
  *(undefined1 *)(lVar5 + 0x18) = 0;
  func_0x000107c6157c(uVar3);
  func_0x0001000d224c(auStack_88);
  ppuStack_90 = &PTR_DAT_110412ed0;
  uVar8 = *(undefined8 *)(lVar6 + _DAT_113043d30);
  lVar6 = 0;
  alStack_b0[0] = lVar5;
  lStack_98 = lVar4;
  FUN_10191f4ec();
  lVar5 = lVar6;
  func_0x000107c610f8();
  func_0x000101923b8c(auStack_88,lVar5 + _DAT_112dd4250,0x112dd4240,&UNK_10d996f00);
  func_0x000101923b8c(alStack_b0,lVar5 + _DAT_112dd4258,0x112dd4248,&UNK_10d996ec0);
  *(undefined8 *)(lVar5 + _DAT_112dd4260) = uVar8;
  *(undefined8 *)(lVar5 + _DAT_112dd4268) = uVar1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_c0 = lVar5;
  lStack_b8 = lVar6;
  func_0x000107c6157c(uVar8);
  func_0x000107c61174(uVar1);
  func_0x000107c61154(&lStack_c0,puVar2);
  func_0x000107c61574(uVar3);
  func_0x000101923bd4(auStack_88,0x112dd4240,&UNK_10d996f00);
  func_0x000101923bd4(alStack_b0,0x112dd4248,&UNK_10d996ec0);
  *param_1 = plVar7;
  return;
}



/* Entry: 101923ae0; end: 101923b0b;  */

/* WARNING: Possible PIC construction at 0x000101923aec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101923afc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101923af0) */
/* WARNING: Removing unreachable block (ram,0x000101923b00) */

void FUN_101923ae0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101923b0c; end: 101923c5f;  */

void FUN_101923b0c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101923c60; end: 101923c6b; -[_TtC32AdRenderDataMapperImplementation26SponsoredLensExtensionImpl attachmentType] */

void FUN_101923c60(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101923c6c();
  func_0x000107c61170(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5fadc(uVar1,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101923c6c; end: 101923cd3;  */

void FUN_101923c6c(long param_1)

{
  undefined **ppuVar1;
  
  FUN_101923cd4();
  if (param_1 < 2) {
    if (param_1 == 0) {
      return;
    }
    ppuVar1 = &PTR_PTR_110d5ab08;
  }
  else if (param_1 == 2) {
    ppuVar1 = &PTR_PTR_110d5ab18;
  }
  else if (param_1 == 3) {
    ppuVar1 = &PTR_PTR_110d5ab20;
  }
  else {
    ppuVar1 = &PTR_PTR_110d5ab10;
  }
  func_0x000107c5faec(*ppuVar1);
  return;
}



/* Entry: 101923cd4; end: 101923e37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101923cd4(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112dd4498);
  lVar2 = lVar4;
  func_0x000107c3d3e4();
  if ((int)lVar2 == 4) {
    func_0x000107c51a84();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar2 = lVar4;
      func_0x000107c44730();
      if ((int)lVar2 != 0) {
        lVar2 = lVar4;
        func_0x000107c3e2e0();
        func_0x000107c61180();
        if (lVar2 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101923e34);
          (*pcVar1)();
        }
        lVar3 = lVar2;
        func_0x000107c3e318();
        func_0x000107c61170(lVar2);
        iVar5 = (int)lVar3;
        if (iVar5 < 2) {
          if (((iVar5 != -0x4524111) && (iVar5 != 0)) && (iVar5 == 1)) {
            func_0x000107c61170(lVar4);
            return;
          }
        }
        else if (iVar5 != 2) {
          if (iVar5 == 4) {
            func_0x000107c61170(lVar4);
            return;
          }
          if (iVar5 == 3) {
            lVar2 = lVar4;
            func_0x000107c3e2e0();
            func_0x000107c61180();
            if (lVar2 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x101923e38);
              (*pcVar1)();
            }
            lVar3 = lVar2;
            func_0x000107c5e284();
            func_0x000107c61180();
            func_0x000107c61170(lVar2);
            if (lVar3 != 0) {
              func_0x000107c5e1bc();
              func_0x000107c61170(lVar3);
              func_0x000107c61170(lVar4);
              return;
            }
            func_0x000107c61170(lVar4);
            return;
          }
        }
      }
      func_0x000107c61170(lVar4);
    }
  }
  return;
}



/* Entry: 101923e38; end: 101923e6b; -[_TtC32AdRenderDataMapperImplementation26SponsoredLensExtensionImpl hasExcludedDeepLink] */

uint FUN_101923e38(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101923e6c();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101923e6c; end: 101924173;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101923e6c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar11;
  long lVar12;
  
  lVar1 = 0x112d36580;
  puVar9 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = *(long *)(unaff_x20 + _DAT_112dd4498);
  func_0x000107c51a84();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c3e2e0();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      lVar2 = lVar3;
      func_0x000107c414c4();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar2 != 0) {
        lVar3 = lVar2;
        func_0x000107c49964();
        func_0x000107c61180();
        if (lVar3 == 0) {
          func_0x000107c61170(lVar2);
        }
        else {
          lVar4 = lVar3;
          func_0x000107c5faec();
          func_0x000107c61170(lVar3);
          func_0x000107c5edd0(puVar10,lVar4,puVar9);
          func_0x000107c6142c(puVar9);
          puVar5 = puVar10;
          (**(code **)(lVar12 + 0x30))(puVar10,1,lVar1);
          if ((int)puVar5 == 1) {
            func_0x000107c61170(lVar2);
            FUN_1019249ac(puVar10,0x112d36580,&UNK_10d9016d0);
          }
          else {
            (**(code **)(lVar12 + 0x20))(lVar11,puVar10,lVar1);
            ppuVar6 = (undefined **)PTR_PTR_1126b1068;
            func_0x000107c610f8();
            ppuVar8 = ppuVar6;
            func_0x000107c5ed90();
            func_0x000107c48fe4();
            func_0x000107c61170(ppuVar8);
            ppuVar8 = ppuVar6;
            func_0x000107c42e38();
            func_0x000107c61180();
            if (ppuVar8 == (undefined **)0x0) {
              func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e437f8);
              puVar5 = puVar10;
            }
            else {
              ppuVar7 = ppuVar8;
              func_0x000107c5faec();
              puVar5 = puVar10;
              func_0x000107c61170(ppuVar8);
              ppuVar8 = &PTR____CFConstantStringClassReference_110e437f8;
              func_0x000107c5faec();
              if (puVar10 != (undefined1 *)0x0) {
                if ((ppuVar7 == ppuVar8) && (puVar10 == puVar5)) {
                  func_0x000107c6142c(puVar10);
                  func_0x000107c6142c(puVar5);
                  func_0x000107c61170(ppuVar6);
                  func_0x000107c61170(lVar2);
                  (**(code **)(lVar12 + 8))(lVar11,lVar1);
                  return;
                }
                func_0x000107c605b8(ppuVar7,puVar10,ppuVar8,puVar5,0);
                func_0x000107c6142c(puVar10);
                func_0x000107c6142c(puVar5);
                func_0x000107c61170(ppuVar6);
                func_0x000107c61170(lVar2);
                (**(code **)(lVar12 + 8))(lVar11,lVar1);
                return;
              }
            }
            func_0x000107c61170(ppuVar6);
            func_0x000107c61170(lVar2);
            (**(code **)(lVar12 + 8))(lVar11,lVar1);
            func_0x000107c6142c(puVar5);
          }
        }
      }
    }
  }
  return;
}



/* Entry: 101924174; end: 1019241a7; -[_TtC32AdRenderDataMapperImplementation26SponsoredLensExtensionImpl sponsoredAttachmentType] */

undefined8 FUN_101924174(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101923cd4();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1019241a8; end: 1019241db; -[_TtC32AdRenderDataMapperImplementation26SponsoredLensExtensionImpl ctaColorConfig] */

void FUN_1019241a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1019241dc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1019241dc; end: 10192442b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019241dc(float param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined1 uStack_88;
  ulong uStack_80;
  undefined1 uStack_78;
  
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112dd4498);
  func_0x000107c51a84();
  func_0x000107c61180();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000107c44800();
    if ((int)uVar2 != 0) {
      uVar2 = uVar1;
      func_0x000107c40df0();
      func_0x000107c61180();
      if (uVar2 != 0) {
        uVar3 = uVar2;
        func_0x000107c44ba4();
        if (((uVar3 & 1) != 0) && (uVar3 = uVar2, func_0x000107c44754(), (int)uVar3 != 0)) {
          uVar3 = uVar2;
          func_0x000107c5c838();
          func_0x000107c61180();
          if (uVar3 == 0) {
            uVar4 = 0;
          }
          else {
            func_0x000107c61174();
            func_0x000107c4faf4();
            dVar8 = (double)param_1;
            func_0x000107c444b0(uVar3);
            dVar9 = (double)param_1;
            func_0x000107c3eb5c(uVar3);
            uVar4 = 0;
            func_0x0001047b3ccc();
            func_0x000107c610f8();
            func_0x0001047b34b8(dVar8,dVar9,(double)param_1,0x3ff0000000000000);
            param_1 = SUB84(dVar8,0);
            func_0x000107c61170(uVar3);
            func_0x000107c61170(uVar3);
          }
          uVar3 = uVar2;
          func_0x000107c3e5a0();
          func_0x000107c61180();
          if (uVar3 == 0) {
            uVar5 = 0;
          }
          else {
            func_0x000107c61174();
            func_0x000107c4faf4();
            dVar8 = (double)param_1;
            func_0x000107c444b0(uVar3);
            dVar9 = (double)param_1;
            func_0x000107c3eb5c(uVar3);
            uVar5 = 0;
            func_0x0001047b3ccc();
            func_0x000107c610f8();
            func_0x0001047b34b8(dVar8,dVar9,(double)param_1,0x3ff0000000000000);
            func_0x000107c61170(uVar3);
            func_0x000107c61170(uVar3);
          }
          uVar3 = uVar2;
          func_0x000107c40de0();
          func_0x000107c61180();
          if (uVar3 == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = uVar3;
            func_0x000107c5dc0c();
            func_0x000107c61170(uVar3);
          }
          uVar3 = uVar2;
          func_0x000107c40de4();
          func_0x000107c61180();
          if (uVar3 == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = uVar3;
            func_0x000107c5dc0c();
            func_0x000107c61170(uVar3);
          }
          uStack_88 = 0;
          uStack_78 = 0;
          uStack_a0 = uVar4;
          uStack_98 = uVar5;
          uStack_90 = uVar6;
          uStack_80 = uVar7;
          func_0x000103e1aee0(0);
          func_0x000107c610f8();
          func_0x000103e1a064(&uStack_a0);
          func_0x000107c61170(uVar1);
          func_0x000107c61170(uVar2);
          return;
        }
        func_0x000107c61170(uVar2);
      }
    }
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 10192442c; end: 1019244ab; -[_TtC32AdRenderDataMapperImplementation26SponsoredLensExtensionImpl hasAttachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10192442c(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107c61174();
  FUN_101923c6c();
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c6142c(param_2);
    lVar2 = *(long *)(param_1 + _DAT_112dd4498);
    func_0x000107c51a84();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1019244ac);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c44730();
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61170(param_1);
  return lVar3;
}



/* Entry: 1019244ac; end: 10192455f; -[_TtC32AdRenderDataMapperImplementation26SponsoredLensExtensionImpl brandName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019244ac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_112dd4498);
  func_0x000107c61174();
  func_0x000107c51a84();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c3ec78();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c5faec(lVar1);
      func_0x000107c61170(param_1);
      func_0x000107c61170(lVar1);
      func_0x000107c5fadc(lVar2,param_2);
      func_0x000107c6142c(param_2);
      goto LAB_101924550;
    }
  }
  func_0x000107c61170(param_1);
  lVar2 = 0;
LAB_101924550:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 101924560; end: 10192456b; -[_TtC32AdRenderDataMapperImplementation26SponsoredLensExtensionImpl ctaText] */

void FUN_101924560(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  (*(code *)0x1019245d8)();
  func_0x000107c61170(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5fadc(uVar1,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10192456c; end: 10192467f;  */

void FUN_10192456c(undefined8 param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  (*param_3)();
  func_0x000107c61170(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5fadc(uVar1,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101924680; end: 101924743; -[_TtC32AdRenderDataMapperImplementation26SponsoredLensExtensionImpl encodeWithCoder:] */

/* WARNING: Possible PIC construction at 0x0001019246dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101924724: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019246e0) */
/* WARNING: Removing unreachable block (ram,0x000101924728) */

void FUN_101924680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = 0x6e6f6973726576;
  func_0x000107c5fadc(0x6e6f6973726576,0xe700000000000000);
  func_0x000107c42740(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101924744; end: 101924773;  */

void FUN_101924744(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_101924774(param_1);
  return;
}



/* Entry: 101924774; end: 10192490f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101924774(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000107c614f0();
  uVar1 = 0x6e6f6973726576;
  func_0x000107c5fadc(0x6e6f6973726576,0xe700000000000000);
  lVar2 = param_1;
  func_0x000107c41470();
  func_0x000107c61170(uVar1);
  if (lVar2 == 1) {
    uVar1 = 0x7265646e65526461;
    func_0x000107c5fadc(0x7265646e65526461,0xec00000061746144);
    lVar2 = param_1;
    func_0x000107c41478();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    if (lVar2 == 0) {
      uStack_78 = 0;
      uStack_80 = 0;
      lStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x000107c60234(&uStack_80,lVar2);
      func_0x000107c615e8(lVar2);
    }
    uStack_58 = uStack_78;
    uStack_60 = uStack_80;
    lStack_48 = lStack_68;
    uStack_50 = uStack_70;
    if (lStack_68 == 0) {
      func_0x000107c61170(param_1);
      FUN_1019249ac(&uStack_60,0x112d387f8,&UNK_10d902650);
      goto LAB_1019248e0;
    }
    uVar1 = 0;
    FUN_1019249ec(0);
    puVar3 = &uStack_88;
    func_0x000107c6147c(puVar3,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar1,6);
    if (((ulong)puVar3 & 1) != 0) {
      *(undefined8 *)(unaff_x20 + _DAT_112dd4498) = uStack_88;
      puVar4 = &stack0xffffffffffffff68;
      func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
      func_0x000107c61170(param_1);
      return puVar4;
    }
  }
  func_0x000107c61170(param_1);
LAB_1019248e0:
  func_0x000107c61464();
  return (undefined1 *)0x0;
}



/* Entry: 101924910; end: 101924937; -[_TtC32AdRenderDataMapperImplementation26SponsoredLensExtensionImpl initWithCoder:] */

void FUN_101924910(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_101924774();
  return;
}



/* Entry: 101924938; end: 10192493b; -[_TtC32AdRenderDataMapperImplementation26SponsoredLensExtensionImpl copyWithZone:] */

void FUN_101924938(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10192493c; end: 10192499b; -[_TtC32AdRenderDataMapperImplementation26SponsoredLensExtensionImpl init] */

void FUN_10192493c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdRenderDataMapperImplementation.SponsoredLensExtensionImpl",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101924968);
  (*pcVar1)();
}



/* Entry: 10192499c; end: 1019249ab; -[_TtC32AdRenderDataMapperImplementation26SponsoredLensExtensionImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10192499c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dd4498));
  return;
}



/* Entry: 1019249ac; end: 1019249eb;  */

undefined8 FUN_1019249ac(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1019249ec; end: 101924acb;  */

void FUN_1019249ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd44a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126bd4d8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112dd44a0 = puVar1;
  return;
}



/* Entry: 101924acc; end: 101924c5b;  */

/* WARNING: Possible PIC construction at 0x000101924b80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101924b90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101924c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101924c10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101924c04) */
/* WARNING: Removing unreachable block (ram,0x000101924b94) */
/* WARNING: Removing unreachable block (ram,0x000101924b84) */
/* WARNING: Removing unreachable block (ram,0x000101924c14) */

void FUN_101924acc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar3 = (undefined8 *)PTR_PTR_1126b94f8;
  func_0x000107c61168();
  func_0x000107c3d3cc();
  func_0x000107c61180();
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61174();
    puVar4 = puVar3;
    func_0x000103e1af48();
    uVar5 = *puVar4;
    puVar4 = (undefined8 *)puVar4[1];
    func_0x000107c61434(puVar4);
    func_0x000107c5fadc(uVar5,puVar4);
    func_0x000107c6142c();
    func_0x000103e1af54();
    uVar1 = *puVar4;
    uVar2 = puVar4[1];
    func_0x000107c61434(uVar2);
    func_0x000107c5fadc(uVar1,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c5e508(puVar3);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar5);
    return;
  }
  return;
}



/* Entry: 101924c5c; end: 101924caf; -[_TtC21DpaLensGrapheneLogger21DpaLensGrapheneLogger logAdPresentArDataExistsWithButtonTypes:] */

void FUN_101924c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c6157c(param_1);
  FUN_101924acc(param_3,param_2);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101924cb0; end: 101924efb;  */

/* WARNING: Possible PIC construction at 0x000101924d90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101924da0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101924e90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101924ea0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101924e94) */
/* WARNING: Removing unreachable block (ram,0x000101924da4) */
/* WARNING: Removing unreachable block (ram,0x000101924dfc) */
/* WARNING: Removing unreachable block (ram,0x000101924e38) */
/* WARNING: Removing unreachable block (ram,0x000101924e40) */
/* WARNING: Removing unreachable block (ram,0x000101924e04) */
/* WARNING: Removing unreachable block (ram,0x000101924de8) */
/* WARNING: Removing unreachable block (ram,0x000101924e1c) */
/* WARNING: Removing unreachable block (ram,0x000101924ed8) */
/* WARNING: Removing unreachable block (ram,0x000101924e24) */
/* WARNING: Removing unreachable block (ram,0x000101924dec) */
/* WARNING: Removing unreachable block (ram,0x000101924e5c) */
/* WARNING: Removing unreachable block (ram,0x000101924d94) */
/* WARNING: Removing unreachable block (ram,0x000101924ea4) */

void FUN_101924cb0(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar3 = (undefined8 *)PTR_PTR_1126b94f8;
  func_0x000107c61168();
  func_0x000107c5d080();
  func_0x000107c61180();
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61174();
    puVar4 = puVar3;
    if ((param_1 & 1) == 0) {
      func_0x000103e1af60();
    }
    else {
      func_0x000103e1af54();
    }
    uVar1 = *puVar4;
    puVar4 = (undefined8 *)puVar4[1];
    puVar5 = puVar4;
    func_0x000107c61434();
    func_0x000103e1af48();
    uVar6 = *puVar5;
    uVar2 = puVar5[1];
    func_0x000107c61434(uVar2);
    func_0x000107c5fadc(uVar6,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c5fadc(uVar1,puVar4);
    func_0x000107c6142c(puVar4);
    func_0x000107c5e508(puVar3);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar6);
    return;
  }
  return;
}



/* Entry: 101924efc; end: 101924f07; -[_TtC21DpaLensGrapheneLogger21DpaLensGrapheneLogger logTryOnShouldShowWithShouldShow:buttonType:] */

void FUN_101924efc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c6157c();
  FUN_101924cb0(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101924f08; end: 101925143;  */

/* WARNING: Possible PIC construction at 0x000101924fbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101924fcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019250d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019250e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019250dc) */
/* WARNING: Removing unreachable block (ram,0x000101924fd0) */
/* WARNING: Removing unreachable block (ram,0x000101925044) */
/* WARNING: Removing unreachable block (ram,0x000101925080) */
/* WARNING: Removing unreachable block (ram,0x000101925088) */
/* WARNING: Removing unreachable block (ram,0x00010192504c) */
/* WARNING: Removing unreachable block (ram,0x000101925014) */
/* WARNING: Removing unreachable block (ram,0x000101925064) */
/* WARNING: Removing unreachable block (ram,0x000101925120) */
/* WARNING: Removing unreachable block (ram,0x00010192506c) */
/* WARNING: Removing unreachable block (ram,0x000101925018) */
/* WARNING: Removing unreachable block (ram,0x0001019250a4) */
/* WARNING: Removing unreachable block (ram,0x000101924fc0) */
/* WARNING: Removing unreachable block (ram,0x0001019250ec) */

void FUN_101924f08(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar3 = (undefined8 *)PTR_PTR_1126b94f8;
  func_0x000107c61168();
  func_0x000107c5d084();
  func_0x000107c61180();
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61174();
    puVar4 = puVar3;
    func_0x000103e1af54();
    uVar1 = *puVar4;
    puVar4 = (undefined8 *)puVar4[1];
    puVar5 = puVar4;
    func_0x000107c61434();
    func_0x000103e1af48();
    uVar6 = *puVar5;
    uVar2 = puVar5[1];
    func_0x000107c61434(uVar2);
    func_0x000107c5fadc(uVar6,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c5fadc(uVar1,puVar4);
    func_0x000107c6142c(puVar4);
    func_0x000107c5e508(puVar3);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar6);
    return;
  }
  return;
}



/* Entry: 101925144; end: 10192514f; -[_TtC21DpaLensGrapheneLogger21DpaLensGrapheneLogger logTryOnTappedWithButtonType:] */

void FUN_101925144(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c6157c();
  FUN_101924f08(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101925150; end: 101925393;  */

void FUN_101925150(long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lStack_48;
  
  if ((*(byte *)(unaff_x20 + 0x19) & 1) == 0) {
    if (*(char *)(unaff_x20 + 0x18) == '\x01') {
      puVar2 = (undefined8 *)PTR_PTR_1126b94f8;
      func_0x000107c61168();
      func_0x000107c5d07c();
      func_0x000107c61180();
      if (puVar2 != (undefined8 *)0x0) {
        func_0x000107c61174();
        puVar3 = puVar2;
        func_0x000103e1af48();
        uVar4 = *puVar3;
        puVar3 = (undefined8 *)puVar3[1];
        func_0x000107c61434(puVar3);
        func_0x000107c5fadc(uVar4,puVar3);
        func_0x000107c6142c();
        func_0x000103e1af54();
        uVar5 = *puVar3;
        uVar6 = puVar3[1];
        func_0x000107c61434(uVar6);
        func_0x000107c5fadc(uVar5,uVar6);
        func_0x000107c6142c(uVar6);
        puVar3 = puVar2;
        func_0x000107c5e508();
        func_0x000107c61180();
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(puVar2);
        func_0x000107c61170(puVar2);
        func_0x000107c61174();
        puVar2 = puVar3;
        func_0x000103e1af6c();
        uVar4 = *puVar2;
        uVar5 = puVar2[1];
        func_0x000107c61434(uVar5);
        func_0x000107c5fadc(uVar4,uVar5);
        func_0x000107c6142c(uVar5);
        if (param_1 < 2) {
          if (param_1 == 0) {
            uVar6 = 0xe400000000000000;
            uVar5 = 0x656e6f6e;
          }
          else {
            if (param_1 != 1) {
LAB_101925370:
              lStack_48 = param_1;
              func_0x000107c60614(&UNK_110715778,&lStack_48,&UNK_110715778,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x101925394);
              (*pcVar1)();
            }
            uVar6 = 0xe600000000000000;
            uVar5 = 0x6e6f74747562;
          }
        }
        else if (param_1 == 2) {
          uVar6 = 0xe700000000000000;
          uVar5 = 0x72656b63697473;
        }
        else {
          if (param_1 != 3) goto LAB_101925370;
          uVar6 = 0xeb00000000647261;
          uVar5 = 0x635f646e655f7261;
        }
        func_0x000107c5fadc(uVar5,uVar6);
        func_0x000107c6142c(uVar6);
        puVar2 = puVar3;
        func_0x000107c5e508(puVar3);
        func_0x000107c61180();
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar3);
        func_0x000107c45314(*(undefined8 *)(unaff_x20 + 0x10));
        func_0x000107c61170(puVar2);
        *(undefined1 *)(unaff_x20 + 0x19) = 1;
      }
    }
    else {
      *(undefined1 *)(unaff_x20 + 0x1a) = 1;
    }
  }
  return;
}



/* Entry: 101925394; end: 10192539f; -[_TtC21DpaLensGrapheneLogger21DpaLensGrapheneLogger logTryOnDidShowWithButtonType:] */

void FUN_101925394(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c6157c();
  FUN_101925150(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1019253a0; end: 1019253df;  */

void FUN_1019253a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c6157c();
  (*param_4)(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1019253e0; end: 101925403;  */

void FUN_1019253e0(byte param_1,long param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lStack_48;
  
  *(byte *)(unaff_x20 + 0x18) = param_1;
  if ((param_1 & 1) == 0) {
    *(undefined2 *)(unaff_x20 + 0x19) = 0;
  }
  else if (*(char *)(unaff_x20 + 0x1a) == '\x01') {
    if ((*(byte *)(unaff_x20 + 0x19) & 1) == 0) {
      if (*(char *)(unaff_x20 + 0x18) == '\x01') {
        puVar2 = (undefined8 *)PTR_PTR_1126b94f8;
        func_0x000107c61168();
        func_0x000107c5d07c();
        func_0x000107c61180();
        if (puVar2 != (undefined8 *)0x0) {
          func_0x000107c61174();
          puVar3 = puVar2;
          func_0x000103e1af48();
          uVar4 = *puVar3;
          puVar3 = (undefined8 *)puVar3[1];
          func_0x000107c61434(puVar3);
          func_0x000107c5fadc(uVar4,puVar3);
          func_0x000107c6142c();
          func_0x000103e1af54();
          uVar5 = *puVar3;
          uVar6 = puVar3[1];
          func_0x000107c61434(uVar6);
          func_0x000107c5fadc(uVar5,uVar6);
          func_0x000107c6142c(uVar6);
          puVar3 = puVar2;
          func_0x000107c5e508();
          func_0x000107c61180();
          func_0x000107c61170(uVar4);
          func_0x000107c61170(uVar5);
          func_0x000107c61170(puVar2);
          func_0x000107c61170(puVar2);
          func_0x000107c61174();
          puVar2 = puVar3;
          func_0x000103e1af6c();
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          func_0x000107c61434(uVar5);
          func_0x000107c5fadc(uVar4,uVar5);
          func_0x000107c6142c(uVar5);
          if (param_2 < 2) {
            if (param_2 == 0) {
              uVar6 = 0xe400000000000000;
              uVar5 = 0x656e6f6e;
            }
            else {
              if (param_2 != 1) {
LAB_101925370:
                lStack_48 = param_2;
                func_0x000107c60614(&UNK_110715778,&lStack_48,&UNK_110715778,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x101925394);
                (*pcVar1)();
              }
              uVar6 = 0xe600000000000000;
              uVar5 = 0x6e6f74747562;
            }
          }
          else if (param_2 == 2) {
            uVar6 = 0xe700000000000000;
            uVar5 = 0x72656b63697473;
          }
          else {
            if (param_2 != 3) goto LAB_101925370;
            uVar6 = 0xeb00000000647261;
            uVar5 = 0x635f646e655f7261;
          }
          func_0x000107c5fadc(uVar5,uVar6);
          func_0x000107c6142c(uVar6);
          puVar2 = puVar3;
          func_0x000107c5e508(puVar3);
          func_0x000107c61180();
          func_0x000107c61170(uVar4);
          func_0x000107c61170(uVar5);
          func_0x000107c61170(puVar3);
          func_0x000107c61170(puVar3);
          func_0x000107c45314(*(undefined8 *)(unaff_x20 + 0x10));
          func_0x000107c61170(puVar2);
          *(undefined1 *)(unaff_x20 + 0x19) = 1;
        }
      }
      else {
        *(undefined1 *)(unaff_x20 + 0x1a) = 1;
      }
    }
    return;
  }
  return;
}



/* Entry: 101925404; end: 10192540f; -[_TtC21DpaLensGrapheneLogger21DpaLensGrapheneLogger setDpaAdShownWithIsShown:buttonType:] */

void FUN_101925404(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c6157c();
  FUN_1019253e0(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101925410; end: 101925457;  */

void FUN_101925410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  func_0x000107c6157c();
  (*param_5)(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101925458; end: 10192549b;  */

void FUN_101925458(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10192549c; end: 1019255eb;  */

long FUN_10192549c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170(param_2);
  func_0x000107c613fc();
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  return unaff_x20;
}



/* Entry: 1019255ec; end: 1019255fb;  */

void FUN_1019255ec(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    lVar4 = *(long *)(lVar2 + 0x10);
    func_0x000107c61174();
    func_0x000107c61574(lVar2);
    lVar2 = lVar4;
    func_0x000107c444a4();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    lVar4 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar4 != 0) {
      lVar2 = 0;
      func_0x00010192547c();
      func_0x000107c613fc();
      *(undefined2 *)(lVar2 + 0x18) = 0;
      *(undefined1 *)(lVar2 + 0x1a) = 0;
      lVar3 = lVar4;
      func_0x000107c3e0c8();
      func_0x000107c61180();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1019255ec);
        (*pcVar1)();
      }
      func_0x000107c61170(lVar4);
      *(long *)(lVar2 + 0x10) = lVar3;
      goto LAB_1019255d0;
    }
  }
  lVar2 = 0;
LAB_1019255d0:
  *param_1 = lVar2;
  return;
}



/* Entry: 1019255fc; end: 10192561f;  */

void FUN_1019255fc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101925620; end: 1019256bf;  */

void FUN_101925620(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_110413048;
  func_0x000107c613fc(&UNK_110413048,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  func_0x0001000285a8(0x112dd45f8,&UNK_10d997070);
  func_0x000107c613fc();
  pcVar2 = FUN_1019256c0;
  func_0x0001000bdd8c(FUN_1019256c0,puVar1);
  uVar3 = 0;
  func_0x0001001b8238(0);
  func_0x000107c610f8();
  func_0x00010072afa4(pcVar2,uVar3);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1019256c0; end: 1019256d7;  */

void FUN_1019256c0(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    lVar4 = *(long *)(lVar2 + 0x10);
    func_0x000107c61174();
    func_0x000107c61574(lVar2);
    lVar2 = lVar4;
    func_0x000107c444a4();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    lVar4 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar4 != 0) {
      lVar2 = 0;
      func_0x00010192547c();
      func_0x000107c613fc();
      *(undefined2 *)(lVar2 + 0x18) = 0;
      *(undefined1 *)(lVar2 + 0x1a) = 0;
      lVar3 = lVar4;
      func_0x000107c3e0c8();
      func_0x000107c61180();
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1019255ec);
        (*pcVar1)();
      }
      func_0x000107c61170(lVar4);
      *(long *)(lVar2 + 0x10) = lVar3;
      goto LAB_1019255d0;
    }
  }
  lVar2 = 0;
LAB_1019255d0:
  *param_1 = lVar2;
  return;
}



/* Entry: 1019256d8; end: 101925723;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019256d8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dd46d0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101925724; end: 10192572b; -[_TtC37SCSponsoredLensStudyConfigurationImpl38SponsoredLensCTAStudyConfigurationImpl arBarCtaFontSize] */

undefined8 FUN_101925724(void)

{
  return 0x4030000000000000;
}



/* Entry: 10192572c; end: 101925737; -[_TtC37SCSponsoredLensStudyConfigurationImpl38SponsoredLensCTAStudyConfigurationImpl arBarCtaHeight] */

undefined8 FUN_10192572c(void)

{
  return 0x4041000000000000;
}



/* Entry: 101925738; end: 10192573f; -[_TtC37SCSponsoredLensStudyConfigurationImpl38SponsoredLensCTAStudyConfigurationImpl arBarCtaRoundedCorner] */

undefined8 FUN_101925738(void)

{
  return 1;
}



/* Entry: 101925740; end: 1019258ff;  */

/* WARNING: Removing unreachable block (ram,0x000101925884) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101925740(void)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 == 0) {
    return 1;
  }
  uVar7 = 0x800000010efc0e80;
  uVar2 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019);
  lVar3 = lStack_48;
  func_0x000107c4f558();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (lVar3 == 0) {
LAB_101925810:
    func_0x000107c615e8(lStack_48);
    return 1;
  }
  lVar4 = lVar3;
  func_0x000107c5dc0c();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x000107c61170(lVar3);
    goto LAB_101925810;
  }
  lVar5 = lVar4;
  func_0x000107c5ee30();
  func_0x000107c61170(lVar4);
  uVar1 = (uint)(uVar7 >> 0x20);
  uVar8 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar8 == 0) {
      if ((uVar7 & 0xff000000000000) == 0) goto LAB_10192588c;
    }
    else if ((long)(int)lVar5 == lVar5 >> 0x20) goto LAB_10192588c;
  }
  else if ((uVar8 != 2) || (*(long *)(lVar5 + 0x10) == *(long *)(lVar5 + 0x18))) goto LAB_10192588c;
  func_0x000107c610f8(PTR_PTR_1126a7de0);
  func_0x00010006c00c(lVar5,uVar7);
  lVar4 = lVar5;
  FUN_101925d7c(lVar5,uVar7);
  func_0x00010006c090(lVar5,uVar7);
  if (lVar4 != 0) {
    lVar6 = lVar4;
    func_0x000107c4b558(lVar4);
    func_0x000107c61170(lVar4);
    func_0x00010006c090(lVar5,uVar7);
    func_0x000107c615e8(lStack_48);
    func_0x000107c61170(lVar3);
    return lVar6;
  }
LAB_10192588c:
  func_0x000107c615e8(lStack_48);
  func_0x00010006c090(lVar5,uVar7);
  func_0x000107c61170(lVar3);
  return 1;
}



/* Entry: 101925900; end: 101925933; -[_TtC37SCSponsoredLensStudyConfigurationImpl38SponsoredLensCTAStudyConfigurationImpl lensWarmupEnabled] */

uint FUN_101925900(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101925740();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101925934; end: 101925cb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101925934(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long extraout_x8;
  ulong *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined *puVar19;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar5 = 0;
  func_0x000107c5eb9c();
  lStack_a8 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  lVar16 = (long)&uStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000d224c(&puStack_a0);
  puVar19 = puStack_a0;
  if (puStack_a0 == (undefined *)0x0) {
    if (lRam0000000112dd46d8 != -1) {
      func_0x000107c61568(0x112dd46d8,0x1019256c4);
    }
    puVar19 = puRam00000001138038e8;
    func_0x000107c61434(puRam00000001138038e8);
    return puVar19;
  }
  uVar6 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010efc0ea0);
  uVar7 = 0;
  uVar12 = 0xe000000000000000;
  func_0x000107c5fadc(0,0xe000000000000000);
  puVar8 = puVar19;
  func_0x000107c5c1dc(puVar19);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  puVar9 = puVar8;
  func_0x000107c5faec(puVar8);
  func_0x000107c61170(puVar8);
  puStack_70 = (undefined *)0x2c;
  uStack_68 = 0xe100000000000000;
  ppuStack_90 = &puStack_70;
  lVar10 = 0x7fffffffffffffff;
  func_0x0001014784b8(0x7fffffffffffffff,1,FUN_101925e3c,&puStack_a0,puVar9,uVar12);
  uStack_c0 = 0;
  lVar18 = *(long *)(lVar10 + 0x10);
  if (lVar18 == 0) {
    func_0x000107c6142c(lVar10);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_b0 = puVar19;
    puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100403514(0,lVar18,0);
    puVar14 = (undefined8 *)(lVar10 + 0x38);
    lStack_b8 = lVar10;
    do {
      puVar19 = puStack_70;
      ppuStack_90 = (undefined **)puVar14[-1];
      uVar6 = *puVar14;
      uStack_98 = puVar14[-2];
      puStack_a0 = (undefined *)puVar14[-3];
      uVar7 = uVar6;
      uStack_88 = uVar6;
      func_0x000107c61434(uVar6);
      func_0x000107c5eb68(lVar16);
      func_0x000101478db0();
      lVar10 = lVar16;
      puVar9 = PTR___sSsN_11034e1d8;
      func_0x000107c601f0(lVar16,PTR___sSsN_11034e1d8,uVar7);
      (**(code **)(lStack_a8 + 8))(lVar16,lVar5);
      func_0x000107c6142c(uVar6);
      uVar15 = *(ulong *)(puVar19 + 0x10);
      puStack_70 = puVar19;
      if (*(ulong *)(puVar19 + 0x18) >> 1 <= uVar15) {
        func_0x000100403514(1 < *(ulong *)(puVar19 + 0x18),uVar15 + 1,1);
      }
      puVar8 = puStack_70;
      puVar14 = puVar14 + 4;
      *(ulong *)(puStack_70 + 0x10) = uVar15 + 1;
      *(long *)(puStack_70 + uVar15 * 0x10 + 0x20) = lVar10;
      *(undefined **)(puStack_70 + uVar15 * 0x10 + 0x28) = puVar9;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    func_0x000107c6142c(lStack_b8);
    puVar19 = puStack_b0;
  }
  uVar15 = 0;
  uVar17 = *(ulong *)(puVar8 + 0x10);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    puVar13 = (ulong *)(puVar8 + uVar15 * 0x10 + 0x28);
    do {
      if (uVar17 == uVar15) {
        func_0x000107c6142c(puVar8);
        puVar8 = puVar9;
        func_0x000100403a6c(puVar9);
        func_0x000107c615e8(puVar19);
        func_0x000107c61574(puVar9);
        return puVar8;
      }
      if (*(ulong *)(puVar8 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101925c9c);
        (*pcVar4)();
      }
      uVar1 = puVar13[-1];
      uVar3 = *puVar13;
      puVar13 = puVar13 + 2;
      uVar15 = uVar15 + 1;
      uVar2 = uVar1 & 0xffffffffffff;
      if ((uVar3 & 0x2000000000000000) != 0) {
        uVar2 = uVar3 >> 0x38 & 0xf;
      }
    } while (uVar2 == 0);
    func_0x000107c61434(uVar3);
    puVar11 = puVar9;
    func_0x000107c61558();
    puStack_a0 = puVar9;
    if (((ulong)puVar11 & 1) == 0) {
      func_0x000100403514(0,*(long *)(puVar9 + 0x10) + 1,1);
    }
    uVar2 = *(ulong *)(puStack_a0 + 0x10);
    if (*(ulong *)(puStack_a0 + 0x18) >> 1 <= uVar2) {
      func_0x000100403514(1 < *(ulong *)(puStack_a0 + 0x18),uVar2 + 1,1);
    }
    *(ulong *)(puStack_a0 + 0x10) = uVar2 + 1;
    *(ulong *)(puStack_a0 + uVar2 * 0x10 + 0x20) = uVar1;
    *(ulong *)(puStack_a0 + uVar2 * 0x10 + 0x28) = uVar3;
    puVar9 = puStack_a0;
  } while( true );
}



/* Entry: 101925cb4; end: 101925d0b; -[_TtC37SCSponsoredLensStudyConfigurationImpl38SponsoredLensCTAStudyConfigurationImpl warmupLockedLensIds] */

void FUN_101925cb4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101925934();
  func_0x000107c61170(param_1);
  uVar2 = uVar1;
  func_0x000107c5fe08(uVar1,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101925d0c; end: 101925d6b; -[_TtC37SCSponsoredLensStudyConfigurationImpl38SponsoredLensCTAStudyConfigurationImpl init] */

void FUN_101925d0c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSponsoredLensStudyConfigurationImpl.SponsoredLensCTAStudyConfigurationImpl"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101925d38);
  (*pcVar1)();
}



/* Entry: 101925d6c; end: 101925d7b; -[_TtC37SCSponsoredLensStudyConfigurationImpl38SponsoredLensCTAStudyConfigurationImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101925d6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dd46d0));
  return;
}



/* Entry: 101925d7c; end: 101925e3b;  */

ulong FUN_101925d7c(undefined8 param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong unaff_x20;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  plVar1 = (long *)0x0;
  if (unaff_x20 == 0) {
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170();
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  lVar3 = *plVar1;
  if (lVar3 == **(long **)(unaff_x20 + 0x10) && plVar1[1] == (*(long **)(unaff_x20 + 0x10))[1]) {
    uVar2 = 1;
  }
  else {
    func_0x000107c605b8();
    uVar2 = (ulong)((uint)lVar3 & 1);
  }
  return uVar2;
}



/* Entry: 101925e3c; end: 101925e8f;  */

uint FUN_101925e3c(long *param_1)

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



/* Entry: 101925e90; end: 101925ec3;  */

void FUN_101925e90(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 101925ec4; end: 101925f57;  */

void FUN_101925ec4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    func_0x000107c61174();
    func_0x000107c61574(param_2);
    uVar2 = uVar1;
    func_0x000107c3fa04();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 101925f58; end: 101925f67;  */

void FUN_101925f58(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    func_0x000107c61174();
    func_0x000107c61574(lVar1);
    uVar3 = uVar2;
    func_0x000107c3fa04();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
  }
  *param_1 = uVar3;
  return;
}


