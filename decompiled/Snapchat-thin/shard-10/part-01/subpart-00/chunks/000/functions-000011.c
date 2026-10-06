/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10786d2bc; end: 10786d307;  */

void FUN_10786d2bc(void)

{
  ulong unaff_x20;
  
  func_0x00010786da40();
  func_0x00010786d308();
  func_0x00010786dba4();
  if ((unaff_x20 & 1) == 0) {
    func_0x00010786dd50();
    func_0x0001073ebdf4();
  }
  else {
    func_0x00010786da60();
    func_0x00010786d37c();
  }
  func_0x00010786deec();
  func_0x00010786da74();
  return;
}



/* Entry: 10786d4c0; end: 10786d4f7;  */

void FUN_10786d4c0(void)

{
  ulong unaff_x20;
  
  func_0x00010786d904();
  func_0x00010786d308();
  func_0x00010786dba4();
  if ((unaff_x20 & 1) != 0) {
    func_0x00010786d99c();
    func_0x00010786dd04();
  }
  func_0x00010786dbc8();
  return;
}



/* Entry: 10786df04; end: 10786e113;  */

void FUN_10786df04(undefined8 param_1,undefined8 param_2,int param_3,undefined1 param_4)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 auStack_168 [2];
  undefined4 uStack_160;
  undefined4 uStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_120;
  undefined1 uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 auStack_f8 [2];
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  if (param_3 == 0) {
    puVar1 = auStack_58;
    func_0x00010002b838(puVar1,"");
  }
  else {
    puVar1 = (undefined1 *)0x3;
    func_0x00010bd3f128(auStack_58,3);
  }
  func_0x000100458ae4();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_70,param_2);
  puVar2 = &uStack_88;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar2,auStack_58);
  func_0x00010054f908();
  uStack_d8 = uStack_60;
  auStack_f8[0] = 0x14;
  uStack_e0 = uStack_68;
  uStack_e8 = uStack_70;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_c8 = uStack_80;
  uStack_d0 = uStack_88;
  uStack_c0 = uStack_78;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_f0 = (long)(int)param_1;
  puStack_b8 = puVar2;
  uStack_b0 = param_4;
  func_0x00010bcc46f8(puVar1,auStack_f8);
  func_0x00010786e114(auStack_f8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_88);
  puVar2 = &uStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  if (lRam0000000113822d00 != 0) {
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    auStack_168[0] = 0x11e;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    ppuStack_148 = &PTR_DAT_110996720;
    uStack_140 = 0;
    uStack_128 = 0x11e;
    uStack_120 = 0;
    uStack_11c = 1;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_118 = 0;
    puVar3 = auStack_168;
    func_0x0001072a0318(puVar3,&UNK_10f430185,param_1);
    func_0x00010726e6c0(auStack_f8,puVar3);
    func_0x000107262330(auStack_168);
    auStack_168[0] = 1;
    uStack_160 = 0;
    uStack_178 = puVar2[1];
    uStack_170 = 3;
    func_0x00010743fa9c(puVar2 + 1,auStack_f8,auStack_168,&uStack_178,7);
    func_0x000107262330(auStack_f8);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  return;
}



/* Entry: 10786e7d8; end: 10786e847;  */

undefined8 * FUN_10786e7d8(void)

{
  long in_stack_00000010;
  long in_stack_00000018;
  
  in_stack_00000010 = in_stack_00000010 + 1;
  in_stack_00000018 = in_stack_00000018 + 0x78;
  func_0x000104c2ddb8();
  return &stack0x00000010;
}



/* Entry: 10786eb98; end: 10786ec7b;  */

bool FUN_10786eb98(double param_1,double param_2,long param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  double unaff_d8;
  undefined1 auStack_50 [16];
  
  if (*(double *)(param_3 + 8) <= param_1) {
    if (param_1 <= *(double *)(param_3 + 0x18) || param_4 == 0) {
      return param_1 <= *(double *)(param_3 + 0x18);
    }
  }
  else if (param_4 == 0) {
    return false;
  }
  func_0x000107259180(param_3);
  func_0x00010786ed68();
  func_0x00010786ed54(0,auStack_50);
  func_0x000107259180(auStack_50);
  func_0x00010786ec7c();
  if ((int)param_3 == 0) {
    bVar1 = unaff_d8 <= param_1 && param_1 <= param_2;
  }
  else {
    bVar1 = false;
    bVar2 = true;
    if (-180.0 <= param_1) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(param_1) && !NAN(param_2)) {
        bVar1 = param_1 == param_2;
        bVar2 = param_2 <= param_1;
      }
    }
    if (!bVar2 || bVar1) {
      bVar1 = true;
    }
    else {
      bVar1 = param_1 <= 180.0 && unaff_d8 <= param_1;
    }
  }
  return bVar1;
}



/* Entry: 10786f598; end: 10786f613;  */

undefined8 FUN_10786f598(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar4 = &uStack_40;
  uVar2 = param_2;
  func_0x0001078712ac();
  uVar3 = (uint)uVar2;
  uStack_28 = extraout_x8;
  _strlen();
  uStack_30 = 0x405000000000000;
  uStack_40 = (ulong)uVar3;
  uStack_38 = param_2;
  func_0x000107870a08();
  uVar2 = param_1;
  func_0x00010787134c();
  func_0x000107871270(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001078712ec();
  func_0x00010787135c();
  func_0x00010787145c();
  if (*(short *)((long)puVar4 + 0x16) != 4) {
    func_0x000107871318();
    func_0x0001078712e0();
    func_0x000107871284();
    func_0x00010787143c();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10786f698);
    (*pcVar1)();
  }
  func_0x00010740ed44(uVar2,*(undefined4 *)puVar4);
  uVar5 = *(undefined8 *)((long)puVar4 + 8);
  func_0x00010787158c(*(undefined4 *)puVar4);
  while (puVar4 != (ulong *)0x0) {
    uVar2 = uVar5;
    func_0x00010786ee68(uVar5);
    func_0x000107871568();
    func_0x000104c31a04();
    func_0x0001078714d8();
  }
  return uVar2;
}



/* Entry: 107870168; end: 107870243;  */

/* WARNING: Possible PIC construction at 0x000107870290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107870430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078705ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107870680: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078706c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010787058c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078706cc) */
/* WARNING: Removing unreachable block (ram,0x0001078706e4) */
/* WARNING: Removing unreachable block (ram,0x0001078706f4) */
/* WARNING: Removing unreachable block (ram,0x000107870708) */
/* WARNING: Removing unreachable block (ram,0x0001078706dc) */
/* WARNING: Removing unreachable block (ram,0x000107870684) */
/* WARNING: Removing unreachable block (ram,0x0001078705b0) */
/* WARNING: Removing unreachable block (ram,0x000107870434) */
/* WARNING: Removing unreachable block (ram,0x000107870450) */
/* WARNING: Removing unreachable block (ram,0x000107870474) */
/* WARNING: Removing unreachable block (ram,0x000107870448) */
/* WARNING: Removing unreachable block (ram,0x000107870294) */
/* WARNING: Removing unreachable block (ram,0x0001078702b8) */
/* WARNING: Removing unreachable block (ram,0x0001078702a4) */
/* WARNING: Removing unreachable block (ram,0x000107870590) */

int * FUN_107870168(int *param_1,int *param_2,int *param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined8 extraout_x8;
  int *extraout_x8_00;
  int *extraout_x8_01;
  undefined8 *puVar14;
  int *extraout_x8_02;
  int *unaff_x19;
  int *unaff_x20;
  int *unaff_x21;
  int *piVar15;
  int *unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined *puVar16;
  
code_r0x000107870168:
  *(int **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(int **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(int **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x000107871298();
  iVar2 = *param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  uVar7 = iVar2 == 7;
  unaff_x20 = param_2;
  if (!(bool)uVar7) {
    piVar9 = param_2;
    func_0x000107871364();
    *(undefined4 *)((long)register0x00000008 + -0x48) = 4;
    func_0x000107870ecc();
    *(int **)((long)register0x00000008 + -0x60) = piVar9;
    _strlen();
    *(int *)((long)register0x00000008 + -0x58) = (int)piVar9;
    param_4 = (undefined8 *)((long)register0x00000008 + -0x60);
    func_0x0001078713a8();
    uVar7 = *param_2 == 0;
    puVar16 = &UNK_10f4303a6;
    if (!(bool)uVar7) {
      puVar16 = &UNK_10f43041c;
    }
    *(int **)((long)register0x00000008 + -0x68) = param_3;
    *(undefined **)((long)register0x00000008 + -0x60) = puVar16;
    uVar13 = 10;
    if (!(bool)uVar7) {
      uVar13 = 0xb;
    }
    *(undefined4 *)((long)register0x00000008 + -0x58) = uVar13;
    param_3 = (int *)((long)register0x00000008 + -0x68);
    func_0x000107870f70((undefined1 *)((long)register0x00000008 + -0x50));
    func_0x0001078712cc();
    func_0x000107871354();
    unaff_x21 = param_2;
  }
  func_0x000107871270(*(undefined8 *)((long)register0x00000008 + -0x38));
  if ((bool)uVar7) {
    return unaff_x20;
  }
  ___stack_chk_fail();
  piVar9 = unaff_x20;
  func_0x000107871354();
  func_0x000107871384();
  func_0x000107871338();
  puVar6 = (undefined1 *)((long)register0x00000008 + -0xc0);
  *(int **)((long)register0x00000008 + -0x90) = unaff_x20;
  *(int **)((long)register0x00000008 + -0x88) = param_1;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x78) = &UNK_107870244;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x80);
  func_0x0001078712ac();
  *(undefined8 *)((long)register0x00000008 + -0x98) = extraout_x8;
  uVar13 = *(undefined4 *)(param_4 + 1);
  *(undefined8 *)((long)register0x00000008 + -0xa8) = *param_4;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
  *(undefined2 *)((long)register0x00000008 + -0x9a) = 0x405;
  *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
  *(undefined4 *)((long)register0x00000008 + -0xb0) = uVar13;
  *(undefined8 *)((long)register0x00000008 + -0xc0) = *(undefined8 *)param_3;
  *(int *)((long)register0x00000008 + -0xb8) = param_3[2];
  param_4 = (undefined8 *)((long)register0x00000008 + -0xb0);
  puVar16 = &UNK_107870294;
  unaff_x19 = param_1;
code_r0x000107870714:
  puVar5 = puVar6 + -0x40;
  puVar3 = puVar6 + -0x40;
  register0x00000008 = (BADSPACEBASE *)(puVar6 + -0x40);
  param_3 = (int *)(puVar6 + -0x40);
  *(int **)(puVar6 + -0x20) = unaff_x20;
  *(int **)(puVar6 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar6 + -0x10) = unaff_x29;
  *(undefined **)(puVar6 + -8) = puVar16;
  unaff_x29 = puVar6 + -0x10;
  func_0x0001078712ac();
  func_0x000107871404();
  func_0x000107870de8();
  func_0x0001078712ec();
  func_0x000107871270(*(undefined8 *)(puVar6 + -0x28));
  if ((bool)uVar7) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  func_0x0001078712ec();
  unaff_x30 = &UNK_10787075c;
  func_0x00010787135c();
  param_2 = piVar9 + 2;
  iVar2 = *piVar9;
  param_1 = extraout_x8_02;
  if (iVar2 != 2) {
    piVar9 = extraout_x8_02;
    if (iVar2 != 1) goto code_r0x000107870600;
code_r0x00010787030c:
    do {
      piVar10 = param_3;
      *(int **)(puVar3 + -0x30) = unaff_x22;
      *(int **)(puVar3 + -0x28) = unaff_x21;
      *(int **)(puVar3 + -0x20) = unaff_x20;
      *(int **)(puVar3 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
      *(undefined **)(puVar3 + -8) = unaff_x30;
      unaff_x29 = puVar3 + -0x10;
      func_0x000107871298();
      piVar9[2] = 0;
      piVar9[3] = 0;
      piVar9[4] = 0;
      piVar9[5] = 0;
      piVar9[0] = 0;
      piVar9[1] = 0;
      func_0x000107871364();
      *(undefined4 *)(puVar3 + -0x48) = 4;
      *(undefined **)(puVar3 + -0x60) = &DAT_10f35070a;
      *(undefined4 *)(puVar3 + -0x58) = 7;
      func_0x0001078713a8();
      iVar2 = param_2[0xc];
      uVar7 = iVar2 == 4;
      if (!(bool)uVar7) {
        *(int **)(puVar3 + -0x68) = piVar10;
        *(char **)(puVar3 + -0x60) = "id";
        *(undefined4 *)(puVar3 + -0x58) = 2;
        uVar7 = iVar2 == 3;
        if ((bool)uVar7) {
          func_0x000107871308();
          func_0x0001078707c8();
        }
        else {
          uVar7 = iVar2 == 2;
          if ((bool)uVar7) {
            func_0x000107871308();
            func_0x0001078707ec();
          }
          else {
            uVar7 = iVar2 == 1;
            if ((bool)uVar7) {
              func_0x000107871308(*(undefined8 *)(param_2 + 0xe));
              func_0x000107870810();
            }
            else {
              func_0x000107870840(puVar3 + -0x50,puVar3 + -0x68,param_2 + 0xe);
            }
          }
        }
        func_0x0001078712cc();
        func_0x000107871354();
      }
      *(undefined **)(puVar3 + -0x60) = &DAT_10f3005c3;
      *(undefined4 *)(puVar3 + -0x58) = 8;
      FUN_107870168(puVar3 + -0x50,param_2,piVar10);
      func_0x0001078712cc();
      func_0x000107871354();
      *(int **)(puVar3 + -0x68) = piVar10;
      *(undefined **)(puVar3 + -0x60) = &DAT_10f2dd3dd;
      *(undefined4 *)(puVar3 + -0x58) = 10;
      piVar8 = (int *)(puVar3 + -0x50);
      param_3 = (int *)(puVar3 + -0x68);
      puVar16 = &UNK_107870434;
      puVar4 = puVar3 + -0x70;
      unaff_x21 = param_2 + 8;
      piVar15 = param_2;
      while( true ) {
        puVar5 = puVar4 + -0x70;
        *(int **)(puVar4 + -0x30) = unaff_x22;
        *(int **)(puVar4 + -0x28) = piVar15;
        *(int **)(puVar4 + -0x20) = piVar10;
        *(int **)(puVar4 + -0x18) = piVar9;
        *(undefined1 **)(puVar4 + -0x10) = unaff_x29;
        *(undefined **)(puVar4 + -8) = puVar16;
        unaff_x29 = puVar4 + -0x10;
        piVar11 = unaff_x21;
        func_0x000107871428();
        func_0x000107871298();
        func_0x00010787145c();
        func_0x000107326ddc();
        piVar8[2] = 0;
        piVar8[3] = 0;
        piVar8[4] = 0;
        piVar8[5] = 0;
        piVar8[0] = 0;
        piVar8[1] = 0;
        *(undefined2 *)((long)piVar8 + 0x16) = 3;
        unaff_x20 = unaff_x21;
        func_0x000104c2db28();
        *(int **)(puVar4 + -0x60) = unaff_x20;
        *(int **)(puVar4 + -0x58) = param_3;
        unaff_x22 = (int *)&UNK_10de374a7;
        unaff_x19 = piVar9;
        if (unaff_x20 == (int *)0x0) break;
        piVar15 = *(int **)(puVar4 + -0x58);
        piVar8 = piVar15;
        func_0x000107264c5c();
        piVar1 = unaff_x22;
        if (piVar8 != (int *)0x0) {
          piVar1 = piVar8;
        }
        *(int **)(puVar4 + -0x70) = piVar1;
        *(int *)(puVar4 + -0x68) = (int)param_3;
        iVar2 = piVar15[0xe];
        uVar7 = iVar2 == 6;
        if ((bool)uVar7) {
          func_0x000107871308();
          func_0x000107870794();
code_r0x00010787059c:
          uVar12 = *(undefined8 *)piVar10;
          puVar3 = puVar4 + -0xb0;
          param_3 = (int *)(puVar4 + -0xb0);
          *(int **)(puVar4 + -0x90) = piVar10;
          *(int **)(puVar4 + -0x88) = piVar9;
          *(undefined1 **)(puVar4 + -0x80) = unaff_x29;
          *(undefined **)(puVar4 + -0x78) = &UNK_1078705b0;
          unaff_x29 = puVar4 + -0x80;
          param_2 = piVar9;
          func_0x0001078712ac(piVar9,puVar4 + -0x70,puVar4 + -0x50,uVar12);
          func_0x000107871404();
          func_0x000107870de8();
          func_0x0001078712ec();
          func_0x000107871270(*(undefined8 *)(puVar4 + -0x98));
          if ((bool)uVar7) {
            return piVar9;
          }
          ___stack_chk_fail();
          func_0x0001078712ec();
          unaff_x30 = &UNK_10787030c;
          func_0x00010787135c();
          piVar9 = extraout_x8_00;
          unaff_x20 = piVar10;
          unaff_x21 = piVar15;
          goto code_r0x00010787030c;
        }
        uVar7 = iVar2 == 7;
        if ((bool)uVar7) {
          *(undefined8 *)(puVar4 + -0x50) = 0;
          *(undefined8 *)(puVar4 + -0x48) = 0;
          *(undefined8 *)(puVar4 + -0x40) = 0;
          FUN_10787077c(puVar4 + -0x50);
          goto code_r0x00010787059c;
        }
        uVar7 = iVar2 == 4;
        if ((bool)uVar7) {
          func_0x000107871308();
          func_0x0001078707ec();
          goto code_r0x00010787059c;
        }
        uVar7 = iVar2 == 5;
        if ((bool)uVar7) {
          func_0x000107871308();
          func_0x0001078707c8();
          goto code_r0x00010787059c;
        }
        uVar7 = iVar2 == 2;
        if ((bool)uVar7) {
          func_0x000107871498();
          func_0x000107870840();
          goto code_r0x00010787059c;
        }
        uVar7 = iVar2 == 3;
        if ((bool)uVar7) {
          func_0x000107871308(*(undefined8 *)(piVar15 + 0x10));
          func_0x000107870810();
          goto code_r0x00010787059c;
        }
        uVar7 = iVar2 == 1;
        if (!(bool)uVar7) {
          func_0x000107871498();
          func_0x0001078708a8();
          goto code_r0x00010787059c;
        }
        func_0x000107871498();
        puVar16 = &UNK_107870590;
        puVar4 = puVar4 + -0x70;
        unaff_x21 = piVar11;
      }
      func_0x000107871270(*(undefined8 *)(puVar4 + -0x38));
      if ((bool)uVar7) {
        return unaff_x20;
      }
      ___stack_chk_fail();
      param_2 = unaff_x20;
      func_0x000107871384();
      unaff_x30 = &UNK_107870600;
      func_0x000107871338();
      piVar9 = extraout_x8_01;
code_r0x000107870600:
      puVar6 = puVar5 + -0x70;
      puVar3 = puVar5 + -0x70;
      *(int **)(puVar5 + -0x30) = unaff_x22;
      *(int **)(puVar5 + -0x28) = unaff_x21;
      *(int **)(puVar5 + -0x20) = unaff_x20;
      *(int **)(puVar5 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar5 + -0x10) = unaff_x29;
      *(undefined **)(puVar5 + -8) = unaff_x30;
      unaff_x29 = puVar5 + -0x10;
      func_0x000107871298();
      piVar9[2] = 0;
      piVar9[3] = 0;
      piVar9[4] = 0;
      piVar9[5] = 0;
      piVar9[0] = 0;
      piVar9[1] = 0;
      func_0x000107871364();
      *(undefined4 *)(puVar5 + -0x48) = 4;
      *(undefined **)(puVar5 + -0x68) = &UNK_10f4305cd;
      *(undefined4 *)(puVar5 + -0x60) = 0x11;
      func_0x0001078713a8();
      *(undefined8 *)(puVar5 + -0x48) = 0;
      *(undefined8 *)(puVar5 + -0x40) = 0;
      *(undefined8 *)(puVar5 + -0x50) = 0;
      *(undefined2 *)(puVar5 + -0x3a) = 4;
      puVar14 = *(undefined8 **)param_2;
      param_2 = (int *)*puVar14;
      unaff_x22 = (int *)puVar14[1];
      unaff_x20 = param_3;
      unaff_x21 = param_2;
      unaff_x19 = piVar9;
      if (param_2 == unaff_x22) goto code_r0x0001078706a4;
      unaff_x30 = &UNK_107870684;
      piVar9 = (int *)(puVar5 + -0x68);
    } while( true );
  }
  goto code_r0x000107870168;
code_r0x0001078706a4:
  *(undefined **)(puVar5 + -0x68) = &UNK_10f4305df;
  *(undefined4 *)(puVar5 + -0x60) = 8;
  param_4 = (undefined8 *)(puVar5 + -0x50);
  puVar16 = &UNK_1078706cc;
  uVar7 = 1;
  goto code_r0x000107870714;
}



/* Entry: 10787077c; end: 107870793;  */

void FUN_10787077c(void)

{
  func_0x000107326ddc();
  func_0x00010787145c();
  return;
}



/* Entry: 107870bb8; end: 107870cab;  */

void FUN_107870bb8(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar4 = *param_1;
  lVar2 = param_1[1];
  lVar1 = param_2[1] + (lVar4 - lVar2);
  plStack_70 = param_1 + 2;
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  lStack_48 = lVar1;
  lStack_50 = lVar1;
  for (lVar3 = lVar4; lVar3 != lVar2; lVar3 = lVar3 + 0x20) {
    func_0x00010726928c(lStack_48,lVar3);
    lStack_48 = lStack_48 + 0x20;
  }
  uStack_58 = 1;
  for (; lVar4 != lVar2; lVar4 = lVar4 + 0x20) {
    func_0x000104c3365c(lVar4);
  }
  func_0x000107269b1c(&plStack_70);
  param_2[1] = lVar1;
  lVar3 = *param_1;
  param_1[1] = lVar3;
  *param_1 = param_2[1];
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return;
}



/* Entry: 107870fb0; end: 107871017;  */

void FUN_107870fb0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x0001078709e4(param_1);
  func_0x0001078710c0(*param_3,param_1,*param_2);
  func_0x0001078710c0(param_3[1],param_1,*param_2);
  return;
}



/* Entry: 1078716a4; end: 107871793;  */

bool FUN_1078716a4(undefined8 param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_4;
  lVar1 = param_4[1];
  lVar2 = (*param_5 - lVar3) * (lVar1 - param_2[1]) + (param_5[1] - lVar1) * (*param_2 - lVar3);
  lVar3 = (*param_5 - lVar3) * (lVar1 - param_3[1]) + (param_5[1] - lVar1) * (*param_3 - lVar3);
  if ((0 < lVar2) && (lVar3 < 0)) {
    return true;
  }
  return (-1 >= lVar2 && lVar3 != 0) && (-1 < lVar2 || -1 < lVar3);
}



/* Entry: 107871aa0; end: 107871b03;  */

bool FUN_107871aa0(undefined8 param_1,double *param_2,double *param_3,double *param_4,
                  double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = *param_4;
  dVar3 = param_4[1];
  dVar1 = -((param_2[1] - dVar3) * (*param_5 - dVar2)) + (param_5[1] - dVar3) * (*param_2 - dVar2);
  dVar2 = -((param_3[1] - dVar3) * (*param_5 - dVar2)) + (param_5[1] - dVar3) * (*param_3 - dVar2);
  if ((0.0 < dVar1) && (dVar2 < 0.0)) {
    return true;
  }
  return 0.0 < dVar2 && dVar1 < 0.0;
}



/* Entry: 1078729ec; end: 107872a4b;  */

void FUN_1078729ec(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = param_3;
  puVar3 = param_2;
  puVar4 = param_1;
  for (lVar1 = 0; lVar1 < (int)(param_4 & 0xfffffffc); lVar1 = lVar1 + 4) {
    uVar5 = *puVar4;
    uVar6 = *puVar3;
    puVar2[1] = CONCAT44((float)((ulong)puVar4[1] >> 0x20) + (float)((ulong)puVar3[1] >> 0x20),
                         (float)puVar4[1] + (float)puVar3[1]);
    *puVar2 = CONCAT44((float)((ulong)uVar5 >> 0x20) + (float)((ulong)uVar6 >> 0x20),
                       (float)uVar5 + (float)uVar6);
    puVar2 = puVar2 + 2;
    puVar3 = puVar3 + 2;
    puVar4 = puVar4 + 2;
  }
  for (; lVar1 < (int)param_4; lVar1 = lVar1 + 1) {
    *(float *)((long)param_3 + lVar1 * 4) =
         *(float *)((long)param_1 + lVar1 * 4) + *(float *)((long)param_2 + lVar1 * 4);
  }
  return;
}



/* Entry: 107872d40; end: 107872d47;  */

void FUN_107872d40(float param_1,float param_2,float param_3,float param_4,float param_5,
                  undefined8 *param_6)

{
  undefined1 (*pauVar1) [12];
  int iVar2;
  long ****pppplVar3;
  uint uVar4;
  long ****pppplVar5;
  float *pfVar6;
  float *pfVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined1 (*pauVar12) [16];
  long *plVar13;
  long *****ppppplVar14;
  long *plVar15;
  int extraout_w8;
  uint uVar16;
  int extraout_w8_00;
  long lVar17;
  ulong uVar18;
  bool bVar19;
  long extraout_x9;
  long extraout_x9_00;
  undefined1 (*pauVar20) [12];
  ulong uVar21;
  long ****pppplVar22;
  undefined1 (*pauVar23) [16];
  long lVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  long lVar28;
  int iVar29;
  long lVar30;
  int iVar31;
  long lVar32;
  float fVar33;
  float fVar34;
  double dVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined4 uVar40;
  float fStack_cc;
  long ****pppplStack_c8;
  long ****pppplStack_c0;
  long lStack_b8;
  float afStack_ac [3];
  
  plVar15 = (long *)*param_6;
  pauVar1 = (undefined1 (*) [12])(plVar15 + 0x27c29);
  pauVar12 = (undefined1 (*) [16])(plVar15 + 0x101);
  dVar35 = (double)NEON_fminnm((double)(float)(int)(param_1 * 270.0),0x407e000000000000);
  *(float *)((long)plVar15 + 0x23c33c) = (float)dVar35;
  if ((*(byte *)(plVar15 + 6) & 1) == 0) {
    *(undefined1 *)(plVar15 + 6) = 1;
    plVar13 = plVar15 + 0x37a39;
    for (uVar18 = 0; uVar18 != 0x1e0; uVar18 = uVar18 + 1) {
      fVar33 = (float)(uVar18 & 0xffffffff) * 0.004166667 + -1.0 + 0.0020833334;
      for (uVar21 = 0; uVar21 != 0x10e; uVar21 = uVar21 + 1) {
        fVar36 = (float)(uVar21 & 0xffffffff) * 0.0074074073 + -1.0 + 0.0037037036;
        *(float *)((long)plVar13 + uVar21 * 4) =
             1.0 - (ABS(fVar33 * fVar33 * fVar33) * 0.5 + ABS(fVar36 * fVar36 * fVar36) * 0.5);
      }
      plVar13 = plVar13 + 0x87;
    }
    for (lVar28 = 0; lVar28 != 0x7d4; lVar28 = lVar28 + 4) {
      *(undefined4 *)((long)plVar15 + lVar28 + 0x34) = 0xbf800000;
    }
  }
  fVar33 = (float)func_0x0001078732d4();
  fVar33 = (float)NEON_fminnm(param_3 * (fVar33 * 2.0 + 1.0),0x433b0000);
  if (fVar33 <= 1.0) {
    fVar33 = 1.0;
  }
  uVar25 = (uint)fVar33;
  func_0x00010787325c(pauVar12);
  func_0x00010787325c(pauVar1);
  lVar28 = 0;
  for (lVar30 = plVar15[1] - *plVar15 >> 4; lVar30 != 0; lVar30 = lVar30 + -1) {
    lVar17 = *plVar15;
    plVar13 = plVar15;
    func_0x000107872514(plVar15,uVar25 << 1);
    if (plVar13 != (long *)0x0) {
      func_0x00010787262c(*(undefined4 *)((long)plVar15 + 0x23c33c),*(undefined4 *)(lVar17 + lVar28)
                         );
    }
    lVar28 = lVar28 + 0x10;
  }
  uVar26 = (uint)(*(float *)((long)plVar15 + 0x23c33c) * 270.0);
  lVar32 = 0x1bd1c8;
  lVar24 = (long)(int)uVar26;
  lVar30 = 0x808;
  lVar17 = 0x1bd1c8;
  for (lVar28 = 0; lVar28 < lVar24; lVar28 = lVar28 + 4) {
    uVar9 = ((undefined8 *)((long)plVar15 + lVar30))[1];
    fVar34 = (float)uVar9;
    fVar37 = (float)((ulong)uVar9 >> 0x20);
    uVar9 = *(undefined8 *)((long)plVar15 + lVar30);
    fVar33 = (float)uVar9;
    fVar36 = (float)((ulong)uVar9 >> 0x20);
    auVar38 = *(undefined1 (*) [16])((long)plVar15 + lVar17);
    auVar39._0_4_ = fVar33 + 1.1754944e-38;
    auVar39._4_4_ = fVar36 + 1.1754944e-38;
    auVar39._8_4_ = fVar34 + 1.1754944e-38;
    auVar39._12_4_ = fVar37 + 1.1754944e-38;
    auVar39 = NEON_frsqrte(auVar39,4);
    ((undefined8 *)((long)plVar15 + lVar30))[1] =
         CONCAT44(auVar38._12_4_ * fVar37 * auVar39._12_4_,auVar38._8_4_ * fVar34 * auVar39._8_4_);
    *(undefined8 *)((long)plVar15 + lVar30) =
         CONCAT44(auVar38._4_4_ * fVar36 * auVar39._4_4_,auVar38._0_4_ * fVar33 * auVar39._0_4_);
    lVar30 = lVar30 + 0x10;
    lVar17 = lVar17 + 0x10;
  }
  param_4 = param_4 * 255.0;
  func_0x00010787271c(pauVar12,afStack_ac,uVar26);
  fVar33 = *(float *)(plVar15 + 0x47867);
  if (*(float *)(plVar15 + 0x47867) <= afStack_ac[0]) {
    fVar33 = afStack_ac[0];
  }
  *(undefined1 *)((long)plVar15 + 0x23c344) = 0;
  if ((*(byte *)(plVar15 + 0x47849) & 1) == 0) {
    for (lVar28 = 0; (int)lVar28 != 0x60; lVar28 = lVar28 + 4) {
      *(float *)((long)plVar15 + lVar28 + 0x23c24c) = param_4;
    }
    dVar35 = (double)(param_4 * 24.0);
    plVar15[0x47856] = (long)dVar35;
    *(byte *)(plVar15 + 0x47849) = 1;
  }
  else {
    func_0x000107873398((int)plVar15[0x47857]);
    dVar35 = (double)plVar15[0x47856] + (double)(fVar33 - *(float *)(extraout_x9 + 0x23c24c));
    plVar15[0x47856] = (long)dVar35;
    *(float *)(extraout_x9 + 0x23c24c) = fVar33;
    *(int *)(plVar15 + 0x47857) = extraout_w8 + 1;
  }
  fVar34 = (float)(dVar35 / 24.0);
  *(float *)(plVar15 + 0x47868) = fVar34;
  fVar36 = param_4 / fVar34;
  if (fVar34 <= 1.0) {
    fVar36 = param_4;
  }
  func_0x000107872788(fVar36,param_4,pauVar12,pauVar12,uVar26);
  lVar28 = 0;
  *(bool *)((long)plVar15 + 0x23c344) = ABS(*(float *)(plVar15 + 0x47868) - fVar33) < 0.0001;
  lStack_b8 = 0;
  pppplStack_c8 = (long ****)&pppplStack_c8;
  pppplStack_c0 = (long ****)&pppplStack_c8;
  for (lVar30 = plVar15[4] - plVar15[3] >> 4; lVar30 != 0; lVar30 = lVar30 + -1) {
    lVar17 = plVar15[3];
    pppplVar3 = (long ****)(lVar17 + lVar28);
    uVar40 = *(undefined4 *)(pppplVar3 + 1);
    uVar16 = uVar25;
    if ((*(float *)((long)pppplVar3 + 0xc) < param_2) &&
       (0.0001 <= *(float *)((long)pppplVar3 + 0xc))) {
      fVar33 = (float)func_0x0001078732d4();
      dVar35 = (double)func_0x000107873324();
      uVar16 = (uint)(param_3 * (fVar33 * 2.0 + 1.0) * (float)dVar35);
    }
    if ((int)uVar16 < 300) {
      uVar4 = uVar16 & 0x7ffffffc;
      if ((int)uVar16 < 0xbc) {
        uVar4 = uVar16;
      }
      plVar13 = plVar15;
      func_0x000107872514(uVar40,plVar15,uVar4 << 1);
      if (plVar13 != (long *)0x0) {
        func_0x00010787262c(*(undefined4 *)((long)plVar15 + 0x23c33c),
                            *(undefined4 *)(lVar17 + lVar28));
      }
    }
    else {
      ppppplVar14 = (long *****)0x18;
      __Znwm();
      ppppplVar14[1] = (long ****)&pppplStack_c8;
      ppppplVar14[2] = pppplVar3;
      *ppppplVar14 = pppplStack_c8;
      pppplStack_c8[1] = (long ***)ppppplVar14;
      lStack_b8 = lStack_b8 + 1;
      pppplStack_c8 = (long ****)ppppplVar14;
    }
    lVar28 = lVar28 + 0x10;
  }
  lVar17 = (long)(int)(uVar26 & 0xfffffffc);
  lVar28 = 0x13e148;
  for (lVar30 = 0; lVar30 < lVar17; lVar30 = lVar30 + 4) {
    pfVar6 = (float *)((long)plVar15 + lVar28);
    fVar33 = *pfVar6;
    fVar36 = pfVar6[1];
    uVar10 = ((undefined8 *)((long)plVar15 + lVar32))[1];
    uVar9 = *(undefined8 *)((long)plVar15 + lVar32);
    pfVar7 = (float *)((long)plVar15 + lVar28);
    pfVar7[2] = pfVar6[2] * (float)uVar10;
    pfVar7[3] = pfVar6[3] * (float)((ulong)uVar10 >> 0x20);
    *pfVar7 = fVar33 * (float)uVar9;
    pfVar7[1] = fVar36 * (float)((ulong)uVar9 >> 0x20);
    lVar28 = lVar28 + 0x10;
    lVar32 = lVar32 + 0x10;
  }
  for (; lVar30 < lVar24; lVar30 = lVar30 + 1) {
    *(float *)((long)*pauVar1 + lVar30 * 4) =
         *(float *)((long)*pauVar1 + lVar30 * 4) * *(float *)((long)plVar15 + lVar30 * 4 + 0x1bd1c8)
    ;
  }
  plVar13 = plVar15 + 0xff11;
  while (lStack_b8 != 0) {
    pppplVar3 = (long ****)pppplStack_c0[1];
    pppplVar5 = (long ****)pppplStack_c0[2];
    pppplVar22 = (long ****)*pppplStack_c0;
    pppplVar22[1] = (long ***)pppplVar3;
    *pppplVar3 = (long ***)pppplVar22;
    lStack_b8 = lStack_b8 + -1;
    __ZdlPv();
    fVar33 = (float)func_0x0001078732d4();
    dVar35 = (double)func_0x000107873324();
    iVar27 = (int)(param_3 * (fVar33 * 2.0 + 1.0) * (float)dVar35);
    iVar29 = (int)(*(float *)pppplVar5 * 270.0);
    fVar33 = *(float *)((long)plVar15 + 0x23c33c);
    iVar31 = (int)(*(float *)((long)pppplVar5 + 4) * fVar33);
    iVar2 = iVar27 + iVar31;
    if (((0 < iVar27 + iVar29) && (iVar29 - iVar27 < 0x10f && 0 < iVar2)) &&
       (uVar25 = iVar31 - iVar27, (float)(int)uVar25 <= fVar33)) {
      uVar40 = *(undefined4 *)(pppplVar5 + 1);
      func_0x00010787325c(plVar13);
      func_0x0001078727ec(uVar40,plVar15,plVar13,iVar29,iVar31,iVar27,0x10e,(int)fVar33);
      uVar25 = uVar25 & ((int)uVar25 >> 0x1f ^ 0xffffffffU);
      if ((int)*(float *)((long)plVar15 + 0x23c33c) <= iVar2) {
        iVar2 = (int)*(float *)((long)plVar15 + 0x23c33c);
      }
      uVar18 = (ulong)(uVar25 * 0x10e);
      lVar28 = (long)*pauVar1 + uVar18 * 4;
      FUN_1078729ec(lVar28,(long)plVar13 + uVar18 * 4,lVar28,(iVar2 - uVar25) * 0x10e);
    }
  }
  pauVar20 = pauVar1;
  for (lVar28 = 0; lVar28 < lVar17; lVar28 = lVar28 + 4) {
    fVar34 = (float)*(long *)((long)*pauVar20 + 8);
    fVar37 = (float)((ulong)*(long *)((long)*pauVar20 + 8) >> 0x20);
    fVar33 = (float)*(long *)*pauVar20;
    fVar36 = (float)((ulong)*(long *)*pauVar20 >> 0x20);
    auVar38._0_4_ = fVar33 + 1.1754944e-38;
    auVar38._4_4_ = fVar36 + 1.1754944e-38;
    auVar38._8_4_ = fVar34 + 1.1754944e-38;
    auVar38._12_4_ = fVar37 + 1.1754944e-38;
    auVar38 = NEON_frsqrte(auVar38,4);
    *(long *)((long)*pauVar20 + 8) = CONCAT44(fVar37 * auVar38._12_4_,fVar34 * auVar38._8_4_);
    *(long *)*pauVar20 = CONCAT44(fVar36 * auVar38._4_4_,fVar33 * auVar38._0_4_);
    pauVar20 = (undefined1 (*) [12])(pauVar20[1] + 4);
  }
  for (; lVar28 < lVar24; lVar28 = lVar28 + 1) {
    *(float *)((long)*pauVar1 + lVar28 * 4) = SQRT(*(float *)((long)*pauVar1 + lVar28 * 4));
  }
  func_0x00010787271c(pauVar1,&fStack_cc,uVar26);
  fVar33 = *(float *)(plVar15 + 0x47867);
  if (*(float *)(plVar15 + 0x47867) <= fStack_cc) {
    fVar33 = fStack_cc;
  }
  if ((*(byte *)(plVar15 + 0x47858) & 1) == 0) {
    for (lVar28 = 0; (int)lVar28 != 0x60; lVar28 = lVar28 + 4) {
      *(float *)((long)plVar15 + lVar28 + 0x23c2c4) = param_5 * 255.0;
    }
    dVar35 = (double)(param_5 * 255.0 * 24.0);
    plVar15[0x47865] = (long)dVar35;
    *(undefined1 *)(plVar15 + 0x47858) = 1;
  }
  else {
    func_0x000107873398((int)plVar15[0x47866]);
    dVar35 = (double)plVar15[0x47865] + (double)(fVar33 - *(float *)(extraout_x9_00 + 0x23c2c4));
    plVar15[0x47865] = (long)dVar35;
    *(float *)(extraout_x9_00 + 0x23c2c4) = fVar33;
    *(int *)(plVar15 + 0x47866) = extraout_w8_00 + 1;
  }
  *(float *)((long)plVar15 + 0x23c2bc) = (float)(dVar35 / 24.0);
  func_0x000107872788(pauVar1,pauVar1,uVar26);
  if (*(char *)((long)plVar15 + 0x23c344) == '\x01') {
    bVar19 = ABS(*(float *)((long)plVar15 + 0x23c2bc) - fVar33) < 0.0001;
  }
  else {
    bVar19 = false;
  }
  *(bool *)((long)plVar15 + 0x23c344) = bVar19;
  pauVar20 = pauVar1;
  pauVar23 = pauVar12;
  for (lVar28 = 0; lVar28 < lVar17; lVar28 = lVar28 + 4) {
    auVar8._12_4_ = (int)((ulong)*(long *)((long)*pauVar20 + 8) >> 0x20);
    auVar8._0_12_ = *pauVar20;
    auVar38 = NEON_fmax(*pauVar23,auVar8,4);
    *(long *)((long)*pauVar23 + 8) = auVar38._8_8_;
    *(long *)*pauVar23 = auVar38._0_8_;
    pauVar20 = (undefined1 (*) [12])(pauVar20[1] + 4);
    pauVar23 = pauVar23 + 1;
  }
  for (; lVar28 < lVar24; lVar28 = lVar28 + 1) {
    fVar33 = *(float *)((long)*pauVar12 + lVar28 * 4);
    fVar36 = *(float *)((long)*pauVar1 + lVar28 * 4);
    if (fVar33 <= fVar36) {
      fVar33 = fVar36;
    }
    *(float *)((long)*pauVar12 + lVar28 * 4) = fVar33;
  }
  if (*(float *)((long)plVar15 + 0x23c33c) != 480.0) {
    uVar26 = ((int)uVar26 / 4) * 4 + 4;
  }
  puVar11 = (undefined1 *)((long)plVar15 + 0xfe909);
  for (uVar18 = (ulong)(uVar26 & ((int)uVar26 >> 0x1f ^ 0xffffffffU)); uVar18 != 0;
      uVar18 = uVar18 - 1) {
    fVar36 = *(float *)*pauVar12;
    puVar11[-1] = 0;
    fVar33 = 255.0;
    if (fVar36 < 255.0) {
      fVar33 = fVar36;
    }
    *puVar11 = (char)(int)fVar33;
    puVar11 = puVar11 + 2;
    pauVar12 = (undefined1 (*) [16])((long)*pauVar12 + 4);
  }
  func_0x000107872d48(&pppplStack_c8);
  return;
}



/* Entry: 107872e94; end: 107872edb;  */

undefined8 FUN_107872e94(void)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x0001078732b8();
  func_0x000107872edc();
  func_0x00010787328c();
  func_0x000107872dcc();
  func_0x000107873270();
  func_0x000107873360();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001078732b0();
  return uVar1;
}



/* Entry: 107873040; end: 107873067;  */

undefined8 * FUN_107873040(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined1 in_CY;
  undefined8 *extraout_x8;
  undefined8 *extraout_x9;
  
  if (param_2 >> 0x3c == 0) {
    func_0x0001078733c0();
    puVar1 = extraout_x9;
    if ((bool)in_CY) {
      puVar1 = extraout_x8;
    }
    return puVar1;
  }
  func_0x000107872f04();
  param_1[0x47856] = 0;
  *(undefined4 *)((long)param_1 + 0x23c2bc) = 0;
  param_1[0x47865] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined8 *)((long)param_1 + 0x23c334) = 0x3e99999a38d1b717;
  *(undefined4 *)(param_1 + 0x47868) = 0;
  *(undefined1 *)((long)param_1 + 0x23c344) = 0;
  return param_1;
}



/* Entry: 107873198; end: 1078733e7;  */

void FUN_107873198(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107873a80; end: 107873aa7;  */

uint FUN_107873a80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107873a18(param_3,param_1,param_2);
  return (uint)param_3 ^ 1;
}



/* Entry: 107873f38; end: 107873f7f;  */

bool FUN_107873f38(ushort *param_1)

{
  long lVar1;
  char in_NG;
  char in_OV;
  uint uVar2;
  long extraout_x8;
  long lVar3;
  ushort *extraout_x10;
  long extraout_x11;
  ushort *puVar4;
  
  func_0x000107874880();
  lVar1 = extraout_x11;
  puVar4 = extraout_x10;
  if (in_NG == in_OV) {
    lVar1 = extraout_x8;
    puVar4 = param_1;
  }
  lVar1 = lVar1 << 1;
  do {
    lVar3 = lVar1;
    if (lVar3 == 0) break;
    uVar2 = (uint)*puVar4;
    func_0x000107873f80();
    lVar1 = lVar3 + -2;
    puVar4 = puVar4 + 1;
  } while (uVar2 == 0);
  return lVar3 != 0;
}



/* Entry: 1078746fc; end: 10787474f;  */

bool FUN_1078746fc(ushort *param_1,ushort *param_2,undefined8 *param_3)

{
  ulong uVar1;
  ushort *puVar2;
  
  do {
    puVar2 = param_1;
    if (puVar2 == param_2) break;
    uVar1 = (ulong)*puVar2;
    (*(code *)*param_3)();
    param_1 = puVar2 + 1;
  } while ((uVar1 & 1) != 0);
  return puVar2 == param_2;
}



/* Entry: 107874b9c; end: 107874bd7;  */

long FUN_107874b9c(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1[1] == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1[1] + 8) + 1;
  }
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 0x28);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return lVar4;
}



/* Entry: 107874d58; end: 107874d9b;  */

void FUN_107874d58(void)

{
  return;
}



/* Entry: 107875080; end: 1078751df;  */

void FUN_107875080(float param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  float *param_9)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  float fStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  func_0x000107409bac(param_7,param_6);
  fStack_5c = param_1;
  uStack_58 = param_2;
  uStack_54 = param_3;
  func_0x000107409bac(param_8,param_6);
  fStack_68 = param_1;
  uStack_64 = param_2;
  uStack_60 = param_3;
  func_0x00010740c840(&fStack_5c,&fStack_68);
  fStack_80 = param_1;
  uStack_7c = param_2;
  uStack_78 = param_3;
  func_0x0001073b5d38(&fStack_80);
  fStack_74 = param_1;
  uStack_70 = param_2;
  uStack_6c = param_3;
  func_0x0001073b5ea8(&fStack_74,param_6);
  uVar1 = param_4;
  func_0x000107874ff4(param_4,param_5,&fStack_74,param_9);
  if ((int)uVar1 != 0) {
    fVar2 = *param_9;
    func_0x0001073b5e8c(param_5);
    fStack_8c = fVar2;
    uStack_88 = param_2;
    uStack_84 = param_3;
    func_0x00010740ba88(param_4,&fStack_8c);
    fStack_80 = fVar2;
    uStack_7c = param_2;
    uStack_78 = param_3;
    func_0x000107875b88();
    fStack_8c = fVar2;
    uStack_88 = param_2;
    uStack_84 = param_3;
    func_0x0001073b5ea8(&fStack_8c,&fStack_5c);
    fVar3 = fVar2;
    func_0x000107875b88();
    fStack_8c = fVar3;
    uStack_88 = param_2;
    uStack_84 = param_3;
    func_0x0001073b5ea8(&fStack_8c,&fStack_68);
    if (((0.0 <= fVar2) &&
        (fVar4 = fVar3, func_0x0001073b5ea8(&fStack_5c,&fStack_5c), fVar2 <= fVar4)) &&
       (0.0 <= fVar3)) {
      func_0x0001073b5ea8(&fStack_68,&fStack_68);
    }
  }
  return;
}



/* Entry: 107875848; end: 107875987;  */

undefined1 FUN_107875848(long *param_1,undefined8 *param_2)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  long lVar8;
  float *pfVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_90;
  float fStack_88;
  float fStack_84;
  undefined8 uStack_80;
  float fStack_78;
  float fStack_74;
  
  lVar8 = 0;
  uStack_90 = *param_2;
  uStack_80 = param_2[1];
  fVar5 = (float)uStack_90;
  fVar12 = *(float *)((long)param_2 + 0xc);
  fVar6 = (float)uStack_80;
  fVar7 = (float)((ulong)uStack_90 >> 0x20);
  plVar4 = param_1;
  fStack_88 = fVar5;
  fStack_84 = fVar12;
  fStack_78 = fVar6;
  fStack_74 = fVar7;
  while (lVar8 != 0x20) {
    plVar4 = param_1;
    func_0x0001078757d4(param_1,(long)&uStack_90 + lVar8);
    lVar8 = lVar8 + 8;
    if (((ulong)plVar4 & 1) != 0) {
      return 1;
    }
  }
  pfVar9 = (float *)*param_1;
  lVar8 = param_1[1] - (long)pfVar9 >> 3;
  lVar10 = 1;
  while( true ) {
    if (lVar10 - lVar8 == 1) {
      return 0;
    }
    fVar11 = *pfVar9;
    bVar2 = false;
    bVar3 = true;
    if (fVar5 <= fVar11) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar11) && !NAN(fVar6)) {
        bVar2 = fVar11 == fVar6;
        bVar3 = fVar6 <= fVar11;
      }
    }
    if (!bVar3 || bVar2) {
      fVar11 = pfVar9[1];
      bVar2 = false;
      bVar3 = true;
      if (fVar7 <= fVar11) {
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fVar11) && !NAN(fVar12)) {
          bVar2 = fVar11 == fVar12;
          bVar3 = fVar12 <= fVar11;
        }
      }
      if (!bVar3 || bVar2) {
        return 1;
      }
    }
    lVar1 = 0;
    if (lVar10 != lVar8) {
      lVar1 = lVar10;
    }
    func_0x000107875b58(lVar1);
    if (((ulong)plVar4 & 1) != 0) {
      return 1;
    }
    func_0x000107875b58();
    if (((ulong)plVar4 & 1) != 0) {
      return 1;
    }
    func_0x000107875b58();
    if (((ulong)plVar4 & 1) != 0) break;
    func_0x000107875b58();
    pfVar9 = pfVar9 + 2;
    lVar10 = lVar10 + 1;
    if ((int)plVar4 != 0) {
      return 1;
    }
  }
  return 1;
}



/* Entry: 107875ea4; end: 107875edf;  */

bool FUN_107875ea4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  iVar1 = (int)&uStack_20;
  uStack_20 = param_1;
  uStack_18 = param_2;
  func_0x000107875ee0(&uStack_20,0,9,&UNK_10f430926);
  return iVar1 == 0;
}



/* Entry: 1078762e8; end: 107876487;  */

void FUN_1078762e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 uVar6;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  ulong uStack_88;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = param_2;
  uStack_48 = param_3;
  func_0x0001078765fc();
  func_0x000107884fa8(auStack_c0,param_2,param_3,uStack_60,uStack_58);
  puVar3 = &uStack_50;
  func_0x000107875ee0(puVar3,uStack_60,4,&UNK_10f430903);
  if ((((int)puVar3 == 0) && (lStack_98 != 0)) && (1 < uStack_a8)) {
    func_0x00010002b838(param_1,&UNK_10f430908);
    func_0x000107876488();
    func_0x000107876488(param_1,&uStack_50,uStack_a0,lStack_98);
    if (param_4 == 1) {
      puVar2 = &UNK_10f41620b;
      if (param_5 != 0x200) {
        puVar2 = &UNK_10f41620f;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(param_1,puVar2);
    }
    func_0x000107876488(param_1,&uStack_50,uStack_b0,uStack_a8);
    if (1 < uStack_88) {
      uVar6 = 0x3f;
      puVar3 = puStack_90;
      while (puVar3 != (undefined8 *)0xffffffffffffffff) {
        lVar1 = (long)puVar3 + 1;
        puVar3 = &uStack_50;
        func_0x0001057fa6dc(puVar3,0x26,lVar1);
        puVar4 = &uStack_50;
        func_0x000107875ee0(puVar4,lVar1,0xd,&UNK_10f430918);
        if ((int)puVar4 != 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEmc
                    (param_1,1,uVar6);
          lVar5 = (long)puVar3 - lVar1;
          if (puVar3 == (undefined8 *)0xffffffffffffffff) {
            lVar5 = -1;
          }
          uVar6 = 0x26;
          func_0x000107876488(param_1,&uStack_50,lVar1,lVar5);
        }
      }
    }
  }
  else {
    func_0x000107876630();
  }
  return;
}



/* Entry: 107876cd0; end: 107876d6b;  */

void FUN_107876cd0(double param_1,double param_2,double param_3,double param_4,double *param_5)

{
  double dVar1;
  
  param_1 = param_1 * 0.5;
  _tan();
  dVar1 = 1.0 / (param_3 - param_4);
  *param_5 = (1.0 / param_1) / param_2;
  param_5[2] = 0.0;
  param_5[1] = 0.0;
  param_5[4] = 0.0;
  param_5[3] = 0.0;
  param_5[5] = 1.0 / param_1;
  param_5[7] = 0.0;
  param_5[6] = 0.0;
  param_5[9] = 0.0;
  param_5[8] = 0.0;
  param_5[0xf] = 0.0;
  param_5[0xc] = 0.0;
  param_5[0xd] = 0.0;
  param_5[0xb] = -1.0;
  param_5[10] = (param_3 + param_4) * dVar1;
  param_5[0xe] = param_3 * (param_4 + param_4) * dVar1;
  return;
}



/* Entry: 10787766c; end: 1078776b3;  */

long FUN_10787766c(long *param_1,char *param_2,ulong param_3)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  char cVar4;
  char *pcVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  
  lVar2 = *param_1;
  uVar3 = param_1[1];
  pcVar5 = param_2;
  _strlen();
  lVar6 = -1;
  if ((param_3 < uVar3) && (pcVar5 != (char *)0x0)) {
    pcVar1 = (char *)(lVar2 + uVar3);
    for (pcVar7 = (char *)(lVar2 + param_3); pcVar8 = pcVar1, pcVar9 = pcVar5, pcVar10 = param_2,
        pcVar7 != pcVar1; pcVar7 = pcVar7 + 1) {
      while (pcVar9 != (char *)0x0) {
        cVar4 = *pcVar10;
        pcVar8 = pcVar7;
        pcVar9 = pcVar9 + -1;
        pcVar10 = pcVar10 + 1;
        if (*pcVar7 == cVar4) goto code_r0x000107877704;
      }
    }
code_r0x000107877704:
    lVar6 = (long)pcVar8 - lVar2;
    if (pcVar8 == pcVar1) {
      lVar6 = -1;
    }
  }
  return lVar6;
}



/* Entry: 10787797c; end: 107877ad3;  */

/* WARNING: Possible PIC construction at 0x000107877a28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107877a2c) */

void FUN_10787797c(undefined1 *param_1,long param_2,undefined ***param_3,undefined ***param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined ***pppuVar12;
  undefined ***pppuVar13;
  ulong uVar14;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined ***pppuVar15;
  long lVar16;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined1 auStack_240 [72];
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1c0 [56];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_148;
  undefined **appuStack_d0 [3];
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_38;
  
  pppuVar7 = appuStack_d0;
  func_0x0001078786b4();
  uVar3 = *(char *)((long)param_4 + 0x17) == '\0';
  pppuVar6 = (undefined ***)*param_4;
  if (-1 < *(char *)((long)param_4 + 0x17)) {
    pppuVar6 = param_4;
  }
  uStack_38 = extraout_x8;
  func_0x00010bcede94();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[0x40] = 0;
  }
  else {
    ppuStack_b8 = &PTR_DAT_110d9cda0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    puStack_a0 = &UNK_10e52b660;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    pppuVar6 = &ppuStack_b8;
    func_0x00010bd18758(pppuVar6,param_2);
    pppuVar12 = (undefined ***)0x0;
    (*(code *)(*pppuVar6)[2])();
    if (pppuVar6 == (undefined ***)0x0) {
      *param_1 = 0;
      param_1[0x40] = 0;
    }
    else {
      pppuVar12 = pppuVar6;
      func_0x00010084f540();
      if (((ulong)pppuVar12 & 1) != 0) goto code_r0x000107877ad4;
      *param_1 = 0;
      param_1[0x40] = 0;
      func_0x00010787869c();
      pppuVar12 = param_3;
    }
    func_0x00010bd18664();
    pppuVar6 = pppuVar12;
  }
  func_0x000107878660(uStack_38);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010787869c();
  pppuVar7 = &ppuStack_b8;
  func_0x00010bd18664();
  func_0x000107878674();
code_r0x000107877ad4:
  pppuVar12 = pppuVar6;
  func_0x0001078786b4();
  puStack_280 = &UNK_10e52b660;
  lStack_278 = 0;
  uStack_270 = 0;
  uStack_268 = 0;
  pppuVar13 = pppuVar12;
  uStack_148 = extraout_x8_00;
  func_0x00010bd2b4f4();
  func_0x0001078786d0();
  lVar16 = 0;
  do {
    uVar3 = lVar16 == *(int *)((long)pppuVar12 + 4);
    if (*(int *)((long)pppuVar12 + 4) <= lVar16) {
      func_0x000104c33260(pppuVar7);
      func_0x000104c33548(&puStack_280);
      func_0x000107878660(uStack_148);
      if ((bool)uVar3) {
        return;
      }
      ___stack_chk_fail();
      func_0x000104c33548(&puStack_280);
      func_0x000107878674();
      FUN_10787797c();
      return;
    }
    if (pppuVar12[7] != (undefined **)0x0) {
      pppuVar15 = (undefined ***)(pppuVar12[7] + lVar16 * 0xb);
      uVar5 = (uint)*(byte *)((long)pppuVar15 + 1);
      if (((*(byte *)((long)pppuVar15 + 1) >> 4 & 1) != 0) && (pppuVar15[5] != (undefined **)0x0)) {
        pppuVar8 = pppuVar13;
        func_0x00010bd20a9c(pppuVar13,pppuVar6);
        if (pppuVar8 != pppuVar15) goto code_r0x000107878004;
        uVar5 = (uint)*(byte *)((long)pppuVar15 + 1);
      }
      if ((uVar5 >> 5 & 1) == 0) {
        pppuVar8 = pppuVar13;
        func_0x00010bd1d188(pppuVar13,pppuVar6);
        iVar4 = (int)pppuVar8;
        if (iVar4 != 0) {
          puVar9 = &uStack_1f8;
          func_0x000107262e9c(puVar9,pppuVar15[1]);
          iVar4 = (int)puVar9;
          func_0x0001078786d0();
          func_0x0001078786ac();
                    /* WARNING: Could not recover jumptable at 0x000107877bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_107877bd0 + (ulong)(byte)(&UNK_10deafc30)[iVar4 - 1] * 4))();
          return;
        }
        func_0x0001078786ac();
        if (iVar4 - 0xdU < 0xfffffffd) {
          puVar9 = &uStack_1f8;
          func_0x000107262e9c(puVar9,pppuVar15[1]);
          iVar4 = (int)puVar9;
          func_0x0001078786ac();
                    /* WARNING: Could not recover jumptable at 0x000107877e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_107877e70 + (ulong)(byte)(&UNK_10deafc1e)[iVar4 - 1] * 4))();
          return;
        }
      }
      else {
        uStack_1f8 = 0;
        uStack_1f0 = 0;
        uStack_1e8 = 0;
        pppuVar8 = pppuVar13;
        func_0x00010bd1d250(pppuVar13,pppuVar6);
        uVar5 = (uint)pppuVar8;
        puVar9 = &uStack_1f8;
        func_0x0001072ac134(puVar9,(long)(int)uVar5);
        iVar4 = (int)puVar9;
        if ((uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)) != 0) {
          func_0x0001078786d0();
          func_0x0001078786ac();
                    /* WARNING: Could not recover jumptable at 0x000107877c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_107877c34 + (ulong)(byte)(&UNK_10deafc0c)[iVar4 - 1] * 4))();
          return;
        }
        func_0x000107262e9c(auStack_240,pppuVar15[1]);
        func_0x000107327958(&uStack_290,&uStack_1f8);
        func_0x000104c318bc(auStack_1c0,auStack_240);
        uStack_180 = uStack_288;
        uStack_188 = uStack_290;
        uStack_290 = 0;
        uStack_288 = 0;
        ppuVar10 = &puStack_280;
        uVar14 = 0;
        func_0x000104c32bd8();
        if ((uVar14 & 1) != 0) {
          lVar11 = lStack_278 + (long)ppuVar10 * 0x78;
          func_0x000104c318bc(lVar11,auStack_1c0);
          uVar2 = uStack_180;
          uVar1 = uStack_188;
          uStack_188 = 0;
          uStack_180 = 0;
          *(undefined4 *)(lVar11 + 0x38) = 0;
          *(undefined8 *)(lVar11 + 0x48) = uVar2;
          *(undefined8 *)(lVar11 + 0x40) = uVar1;
          uStack_260 = 0;
          uStack_258 = 0;
          func_0x000104c33108(&uStack_260);
        }
        func_0x00010787860c(auStack_1c0);
        func_0x000104c33108(&uStack_290);
        func_0x000104c2f714(auStack_240);
        func_0x000107269124(&uStack_1f8);
      }
    }
code_r0x000107878004:
    lVar16 = lVar16 + 1;
  } while( true );
}



/* Entry: 107878390; end: 10787860b;  */

undefined8 FUN_107878390(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = 2;
  if (param_4 != 4) {
    iVar1 = param_4;
  }
  iVar3 = 0;
  if (param_4 != 3) {
    iVar3 = iVar1;
  }
  switch(param_4) {
  case 1:
  case 2:
    if (iVar3 - 1U < 2) {
      iVar1 = *param_2;
      do {
        iVar3 = *param_1;
        if (iVar3 != iVar1) goto LAB_1078785c0;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else if (iVar3 == 5) {
      iVar1 = *param_2;
      do {
        iVar3 = *param_1;
        if (iVar3 != iVar1) goto LAB_1078785c0;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      iVar1 = *param_2;
      do {
        iVar3 = *param_1;
        if (iVar3 != iVar1) goto LAB_1078785c0;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    break;
  case 3:
    if (iVar3 - 1U < 2) {
      iVar1 = *param_2;
      do {
        iVar3 = *param_1;
        if (iVar3 != iVar1) goto LAB_1078785c0;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else if (iVar3 == 5) {
      iVar1 = *param_2;
      do {
        iVar3 = *param_1;
        if (iVar3 != iVar1) goto LAB_1078785c0;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      iVar1 = *param_2;
      do {
        iVar3 = *param_1;
        if (iVar3 != iVar1) goto LAB_1078785c0;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    break;
  case 4:
    if (iVar3 - 1U < 2) {
      iVar1 = *param_2;
      do {
        iVar3 = *param_1;
        if (iVar3 != iVar1) goto LAB_1078785c0;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else if (iVar3 == 5) {
      iVar1 = *param_2;
      do {
        iVar3 = *param_1;
        if (iVar3 != iVar1) goto LAB_1078785c0;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      iVar1 = *param_2;
      do {
        iVar3 = *param_1;
        if (iVar3 != iVar1) goto LAB_1078785c0;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    break;
  case 5:
    if (iVar3 - 1U < 2) {
      iVar1 = *param_2;
      do {
        iVar3 = *param_1;
        if (iVar3 != iVar1) goto LAB_1078785c0;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else if (iVar3 == 5) {
      iVar1 = *param_2;
      do {
        iVar3 = *param_1;
        if (iVar3 != iVar1) goto LAB_1078785c0;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      iVar1 = *param_2;
      do {
        iVar3 = *param_1;
        if (iVar3 != iVar1) goto LAB_1078785c0;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    break;
  default:
    if (iVar3 - 1U < 2) {
      iVar1 = *param_2;
      do {
        iVar3 = *param_1;
        if (iVar3 != iVar1) goto LAB_1078785c0;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      if (iVar3 != 5) {
        iVar1 = *param_2;
        do {
          iVar3 = *param_1;
          if (iVar3 != iVar1) {
            bVar4 = false;
            ClearExclusiveLocal();
            goto LAB_1078785c8;
          }
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar4) {
            *param_1 = param_3;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        bVar4 = true;
        goto LAB_1078785c8;
      }
      iVar1 = *param_2;
      do {
        iVar3 = *param_1;
        if (iVar3 != iVar1) goto LAB_1078785c0;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = param_3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  bVar4 = true;
LAB_1078785c8:
  if (!bVar4) {
    *param_2 = iVar3;
    return 0;
  }
  return 1;
LAB_1078785c0:
  bVar4 = false;
  ClearExclusiveLocal();
  goto LAB_1078785c8;
}



/* Entry: 10787899c; end: 107878a13;  */

double FUN_10787899c(double *param_1,double *param_2)

{
  return (param_2[3] * *param_1 + *param_2 * param_1[3] + param_2[2] * param_1[1]) -
         param_2[1] * param_1[2];
}



/* Entry: 107878e68; end: 107878e83;  */

void FUN_107878e68(void)

{
  return;
}



/* Entry: 107879208; end: 10787920f;  */

void FUN_107879208(long param_1,ulong param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  puVar1 = (undefined2 *)(param_1 + 0x15);
  for (; puVar2 = puVar1 + -1, 99 < param_2; param_2 = param_2 / 100) {
    *puVar2 = *(undefined2 *)(&UNK_10e60d9f4 + (param_2 % 100) * 2);
    puVar1 = puVar2;
  }
  if (9 < param_2) {
    *puVar2 = *(undefined2 *)(&UNK_10e60d9f4 + param_2 * 2);
    return;
  }
  *(byte *)((long)puVar1 + -1) = (byte)param_2 | 0x30;
  return;
}



/* Entry: 107879528; end: 107879a17;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_107879528(long ******param_1,long ******param_2,long param_3,undefined1 *param_4,
                  long ******param_5,long ******param_6,long param_7,undefined1 *param_8)

{
  long *plVar1;
  undefined1 *puVar2;
  long *****ppppplVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  long ******pppppplVar9;
  long *******ppppppplVar10;
  long *******ppppppplVar11;
  long *******ppppppplVar12;
  long ******pppppplVar13;
  long ******pppppplVar14;
  long ******pppppplVar15;
  long ******pppppplVar16;
  long *extraout_x8;
  long *******ppppppplVar17;
  undefined1 *puVar18;
  long extraout_x8_00;
  long *******extraout_x8_01;
  long *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong extraout_x9;
  long *******ppppppplVar19;
  long *******extraout_x9_00;
  ulong extraout_x9_01;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x11;
  long extraout_x11_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar20;
  long *******ppppppplVar21;
  long *******ppppppplVar22;
  long *******ppppppplVar23;
  long ******pppppplStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long *******ppppppplStack_c0;
  long lStack_b8;
  long *******ppppppplStack_a8;
  long *******ppppppplStack_a0;
  long ******pppppplStack_98;
  long ******pppppplStack_90;
  undefined1 uStack_81;
  undefined1 auStack_80 [8];
  long lStack_78;
  
  uStack_c8 = 0;
  lStack_d0 = 0;
  lStack_b8 = 0;
  ppppppplStack_c0 = (long *******)0x0;
  pppppplVar9 = (long ******)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    pppppplVar9 = param_1;
  }
  lStack_d8 = 0;
  pppppplStack_e0 = (long ******)0x0;
  pppppplVar15 = pppppplVar9;
  while (pppppplVar16 = param_6, uVar8 = param_5 == pppppplVar16, !(bool)uVar8) {
    pppppplVar13 = (long ******)&pppppplStack_e0;
    pppppplVar14 = param_1;
    func_0x00010538e7e4(pppppplVar13,param_1,pppppplVar9,pppppplVar15);
    pppppplVar9 = pppppplVar13;
    func_0x000107879a58();
    pppppplStack_98 = pppppplVar9;
    pppppplStack_90 = pppppplVar14;
    func_0x000107879a28();
    if ((bool)uVar8) {
      lStack_78 = 0;
    }
    else {
      lStack_78 = *extraout_x8 + (extraout_x9 & 0xfff);
    }
    ppppppplVar10 = &pppppplStack_98;
    func_0x00010538ef24(ppppppplVar10,auStack_80);
    ppppppplVar23 = (long *******)(param_8 + -param_7);
    if (ppppppplVar10 < (long *******)(lStack_b8 - (long)ppppppplVar10)) {
      if (ppppppplStack_c0 <= ppppppplVar23 && (long)ppppppplVar23 - (long)ppppppplStack_c0 != 0) {
        func_0x00010538ef40(&pppppplStack_e0,(long)ppppppplVar23 - (long)ppppppplStack_c0);
      }
      ppppppplVar11 = (long *******)(lStack_d8 + ((ulong)ppppppplStack_c0 >> 0xc) * 8);
      if (lStack_d0 == lStack_d8) {
        ppppppplVar22 = (long *******)0x0;
      }
      else {
        ppppppplVar22 = (long *******)((long)*ppppppplVar11 + ((ulong)ppppppplStack_c0 & 0xfff));
      }
      cVar6 = SBORROW8((long)ppppppplVar23,(long)ppppppplVar10);
      lVar4 = (long)ppppppplVar23 - (long)ppppppplVar10;
      uVar8 = lVar4 == 0;
      ppppppplStack_a8 = ppppppplVar11;
      lVar5 = param_7;
      ppppppplStack_a0 = ppppppplVar22;
      if (ppppppplVar10 <= ppppppplVar23 && !(bool)uVar8) {
        lVar20 = (long)param_8 - (long)ppppppplVar10;
        lVar5 = (long)param_8 - (long)ppppppplVar10;
        if ((long *******)((ulong)ppppppplVar23 >> 1) <= ppppppplVar10) {
          lVar20 = param_7 + lVar4;
          lVar5 = param_7 + lVar4;
        }
        while( true ) {
          cVar6 = SBORROW8(lVar20,param_7);
          lVar4 = lVar20 - param_7;
          if (lVar20 == param_7) break;
          if (ppppppplVar22 == (long *******)*ppppppplVar11) {
            ppppppplVar11 = ppppppplVar11 + -1;
            ppppppplVar22 = (long *******)(*ppppppplVar11 + 0x200);
          }
          ppppppplVar22 = (long *******)((long)ppppppplVar22 + -1);
          *(undefined1 *)ppppppplVar22 = *(undefined1 *)(lVar20 + -1);
          func_0x000107879a60();
          lVar20 = extraout_x8_00;
        }
        uVar8 = true;
        ppppppplVar23 = ppppppplVar10;
      }
      cVar7 = lVar4 < 0;
      if (ppppppplVar23 != (long *******)0x0) {
        ppppppplVar17 = (long *******)&ppppppplStack_a8;
        ppppppplVar19 = ppppppplVar23;
        func_0x00010538f19c();
        ppppppplVar21 = ppppppplVar17;
        ppppppplVar12 = ppppppplVar19;
        while (ppppppplVar12 != ppppppplStack_a0) {
          if (ppppppplVar22 == (long *******)*ppppppplVar11) {
            ppppppplVar11 = ppppppplVar11 + -1;
            ppppppplVar22 = (long *******)(*ppppppplVar11 + 0x200);
          }
          if (ppppppplVar12 == (long *******)*ppppppplVar21) {
            ppppppplVar12 = (long *******)(ppppppplVar21[-1] + 0x200);
          }
          ppppppplVar22 = (long *******)((long)ppppppplVar22 + -1);
          *(undefined1 *)ppppppplVar22 = *(undefined1 *)((long)ppppppplVar12 + -1);
          func_0x000107879a60();
          ppppppplVar21 = extraout_x8_01;
          ppppppplVar12 = extraout_x9_00;
        }
        cVar6 = SBORROW8((long)ppppppplVar23,(long)ppppppplVar10);
        cVar7 = (long)ppppppplVar23 - (long)ppppppplVar10 < 0;
        uVar8 = ppppppplVar23 == ppppppplVar10;
        if (ppppppplVar23 < ppppppplVar10) {
          ppppppplVar23 = (long *******)&ppppppplStack_a8;
          ppppppplVar11 = ppppppplVar10;
          func_0x00010538f19c(ppppppplVar23,ppppppplVar10);
          func_0x00010538f1c8(ppppppplVar17,ppppppplVar19,ppppppplVar23,ppppppplVar11,
                              ppppppplStack_a8,ppppppplStack_a0);
          ppppppplStack_a8 = ppppppplVar17;
          ppppppplStack_a0 = ppppppplVar19;
        }
        func_0x00010538f7ec(auStack_80,&uStack_81,lVar5,param_8,ppppppplStack_a8,ppppppplStack_a0);
      }
    }
    else {
      lVar4 = 0;
      if (lStack_d0 != lStack_d8) {
        lVar4 = (lStack_d0 - lStack_d8) * 0x200 + -1;
      }
      ppppppplVar17 = (long *******)(lVar4 - ((long)ppppppplStack_c0 + lStack_b8));
      ppppppplVar22 = (long *******)((long)ppppppplVar23 - (long)ppppppplVar17);
      ppppppplVar11 = ppppppplVar10;
      if (ppppppplVar17 <= ppppppplVar23 && ppppppplVar22 != (long *******)0x0) {
        ppppppplVar11 = &pppppplStack_e0;
        func_0x00010538f1ec();
      }
      func_0x000107879a58();
      ppppppplStack_a8 = ppppppplVar11;
      ppppppplStack_a0 = ppppppplVar22;
      ppppppplVar17 = (long *******)(lStack_b8 - (long)ppppppplVar10);
      cVar6 = SBORROW8((long)ppppppplVar17,(long)ppppppplVar23);
      lVar4 = (long)ppppppplVar17 - (long)ppppppplVar23;
      uVar8 = lVar4 == 0;
      puVar2 = param_8;
      if (ppppppplVar17 < ppppppplVar23) {
        puVar18 = (undefined1 *)(param_7 + (long)ppppppplVar17);
        puVar2 = (undefined1 *)(param_7 + (long)ppppppplVar17);
        if ((long *******)((ulong)ppppppplVar23 >> 1) <= ppppppplVar17) {
          puVar18 = param_8 + lVar4;
          puVar2 = param_8 + lVar4;
        }
        while( true ) {
          cVar6 = SBORROW8((long)puVar18,(long)param_8);
          lVar4 = (long)puVar18 - (long)param_8;
          if (puVar18 == param_8) break;
          ppppppplVar23 = (long *******)((long)ppppppplVar22 + 1);
          *(undefined1 *)ppppppplVar22 = *puVar18;
          if ((long)ppppppplVar23 - (long)*ppppppplVar11 == 0x1000) {
            ppppppplVar11 = ppppppplVar11 + 1;
            ppppppplVar23 = (long *******)*ppppppplVar11;
          }
          lStack_b8 = lStack_b8 + 1;
          puVar18 = puVar18 + 1;
          ppppppplVar22 = ppppppplVar23;
        }
        uVar8 = true;
        ppppppplVar23 = ppppppplVar17;
      }
      cVar7 = lVar4 < 0;
      if (ppppppplVar23 != (long *******)0x0) {
        ppppppplVar12 = (long *******)&ppppppplStack_a8;
        ppppppplVar19 = ppppppplVar23;
        func_0x00010538f418();
        while (ppppppplVar19 != ppppppplStack_a0) {
          ppppppplVar21 = (long *******)((long)ppppppplVar22 + 1);
          *(undefined1 *)ppppppplVar22 = *(undefined1 *)ppppppplVar19;
          if ((long)ppppppplVar21 - (long)*ppppppplVar11 == 0x1000) {
            ppppppplVar11 = ppppppplVar11 + 1;
            ppppppplVar21 = (long *******)*ppppppplVar11;
          }
          ppppppplVar19 = (long *******)((long)ppppppplVar19 + 1);
          if ((long)ppppppplVar19 - (long)*ppppppplVar12 == 0x1000) {
            ppppppplVar12 = ppppppplVar12 + 1;
            ppppppplVar19 = (long *******)*ppppppplVar12;
          }
          lStack_b8 = lStack_b8 + 1;
          ppppppplVar22 = ppppppplVar21;
        }
        cVar6 = SBORROW8((long)ppppppplVar23,(long)ppppppplVar17);
        cVar7 = (long)ppppppplVar23 - (long)ppppppplVar17 < 0;
        uVar8 = ppppppplVar23 == ppppppplVar17;
        if (ppppppplVar23 < ppppppplVar17) {
          ppppppplVar23 = (long *******)&ppppppplStack_a8;
          func_0x00010538f418();
          func_0x00010538f444();
          ppppppplStack_a8 = ppppppplVar23;
          ppppppplStack_a0 = ppppppplVar17;
        }
        func_0x00010538fa1c(auStack_80,&uStack_81,param_7,puVar2,ppppppplStack_a8,ppppppplStack_a0);
      }
    }
    func_0x000107879a28();
    if ((bool)uVar8) {
      lStack_78 = 0;
    }
    else {
      lStack_78 = *extraout_x8_02 + (extraout_x9_01 & 0xfff);
    }
    func_0x00010538f19c(auStack_80,ppppppplVar10);
    func_0x000107879a40();
    lVar4 = extraout_x11;
    lVar5 = extraout_x10;
    if (cVar7 == cVar6) {
      lVar4 = extraout_x8_03;
      lVar5 = extraout_x12;
    }
    param_5 = param_2;
    param_6 = pppppplVar16;
    func_0x0001078794c8(param_2,pppppplVar16,lVar5 + lVar4);
    pppppplVar9 = pppppplVar13;
    pppppplVar15 = pppppplVar16;
    if (param_5 != param_6) {
      param_8 = param_4;
      param_7 = param_3;
    }
  }
  cVar6 = (char)*(byte *)((long)param_1 + 0x17) < '\0';
  cVar7 = '\0';
  ppppplVar3 = param_1[1];
  pppppplVar16 = (long ******)*param_1;
  if (!(bool)cVar6) {
    ppppplVar3 = (long *****)(ulong)*(byte *)((long)param_1 + 0x17);
    pppppplVar16 = param_1;
  }
  pppppplVar13 = (long ******)&pppppplStack_e0;
  func_0x00010538e7e4(pppppplVar13,param_1,pppppplVar9,pppppplVar15,
                      (long)pppppplVar16 + (long)ppppplVar3);
  if (lStack_b8 == 0) {
    ppppplVar3 = param_1[1];
    pppppplVar9 = (long ******)*param_1;
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      ppppplVar3 = (long *****)(ulong)*(byte *)((long)param_1 + 0x17);
      pppppplVar9 = param_1;
    }
    func_0x00010015bbdc(param_1,pppppplVar13,(long)pppppplVar9 + (long)ppppplVar3);
  }
  else {
    pppppplVar9 = pppppplVar13;
    func_0x000107879a40();
    lVar4 = extraout_x11_00;
    lVar5 = extraout_x10_00;
    if (cVar6 == cVar7) {
      lVar4 = extraout_x8_04;
      lVar5 = extraout_x12_00;
    }
    plVar1 = (long *)(lStack_d8 + ((ulong)ppppppplStack_c0 >> 0xc) * 8);
    if (lStack_d0 == lStack_d8) {
      lVar20 = 0;
    }
    else {
      lVar20 = *plVar1 + ((ulong)ppppppplStack_c0 & 0xfff);
    }
    func_0x000107879a58();
    func_0x00010538fa94(param_1,lVar5 + lVar4,plVar1,lVar20,pppppplVar13,pppppplVar9);
  }
  func_0x00010538fc94(&pppppplStack_e0);
  return;
}



/* Entry: 107879c44; end: 107879caf;  */

undefined8 FUN_107879c44(void)

{
  int iVar1;
  
  if ((bRam0000000113823e68 & 1) == 0) {
    iVar1 = 0x13823e68;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107879cb0(0x113823e50);
      ___cxa_guard_release(0x113823e68);
    }
  }
  return 0x113823e50;
}



/* Entry: 10787a4a8; end: 10787a55f;  */

void FUN_10787a4a8(long *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar5 = *param_1;
  uStack_28 = param_2;
  __ZNSt3__15mutex4lockEv(lVar5);
  func_0x00010787bae8(*param_1 + 0x40,&uStack_28);
  __ZNSt3__15mutex6unlockEv(lVar5);
  plStack_40 = (long *)param_1[2] + 2;
  puVar4 = *(undefined8 **)param_1[2];
  uStack_30 = puVar4[1];
  uStack_38 = *puVar4;
  if (puVar4[1] != 0) {
    plVar1 = (long *)(puVar4[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x00010787a560(&plStack_40,&UNK_10787a600,0,&uStack_28);
  func_0x00010724ae28(&uStack_38);
  return;
}



/* Entry: 10787a900; end: 10787a927;  */

long FUN_10787a900(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10787abd0; end: 10787abfb;  */

undefined8 * FUN_10787abd0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e3d48;
  FUN_10787a900(param_1 + 2);
  return param_1;
}



/* Entry: 10787ad4c; end: 10787ad73;  */

void FUN_10787ad4c(long param_1)

{
  func_0x00010787ad88(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 0x18);
  return;
}



/* Entry: 10787af3c; end: 10787af73;  */

long FUN_10787af3c(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109e3e78);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10787b438; end: 10787b487;  */

void FUN_10787b438(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    __ZNSt3__17promiseIvED1Ev(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10787b8d0; end: 10787b953;  */

void FUN_10787b8d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9)

{
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
  
  uStack_68 = *param_5;
  uStack_60 = *param_6;
  uStack_50 = param_7[1];
  uStack_58 = *param_7;
  uStack_48 = param_7[2];
  *param_7 = 0;
  param_7[1] = 0;
  param_7[2] = 0;
  uStack_40 = *param_8;
  uStack_38 = *param_9;
  uStack_30 = param_3;
  uStack_28 = param_4;
  func_0x00010787b954(&uStack_70,param_2,&uStack_30,&uStack_68);
  *param_1 = uStack_70;
  func_0x00010787be50();
  return;
}



/* Entry: 10787bb18; end: 10787bbb3;  */

long FUN_10787bb18(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = *param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar7 != uVar4) break;
        if (plVar2[2] == uVar4) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 10787bf1c; end: 10787bf57;  */

long FUN_10787bf1c(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109e3f78);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10787c314; end: 10787c37b;  */

void FUN_10787c314(undefined8 param_1,undefined8 param_2)

{
  long unaff_x19;
  undefined1 auStack_48 [40];
  
  func_0x00010787c638();
  func_0x0001073b04cc(auStack_48,param_2);
  func_0x0001077b1824(unaff_x19 + 0x80,auStack_48);
  func_0x0001073b0514(auStack_48);
  func_0x00010787c644();
  return;
}



/* Entry: 10787c6e8; end: 10787c77f;  */

void FUN_10787c6e8(undefined8 param_1)

{
  long lVar1;
  long lStack_58;
  long lStack_50;
  
  func_0x000107881804();
  lVar1 = lStack_58;
  if (lStack_58 != lStack_50) {
    func_0x0001078813ec();
    func_0x0001078813d8();
    func_0x00010787ef04();
    lVar1 = lStack_50;
  }
  func_0x000107881728(lVar1,lStack_58);
  func_0x00010787c948(param_1);
  for (; lStack_58 != lStack_50; lStack_58 = lStack_58 + 0x18) {
    func_0x0001078817ec();
  }
  func_0x00010788162c();
  return;
}



/* Entry: 10787da84; end: 10787dadb;  */

void FUN_10787da84(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x78;
  __Znwm();
  func_0x000107881b2c();
  *param_1 = uVar1;
  return;
}



/* Entry: 10787eb20; end: 10787eb2b;  */

long * FUN_10787eb20(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined1 in_CY;
  long lVar1;
  
  func_0x0001078811a0();
  func_0x0001078814d8();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    func_0x000107881740();
    if ((bool)in_CY) {
      func_0x000104bd35f4();
      lVar1 = param_1[2];
      while (lVar1 != param_1[1]) {
        lVar1 = lVar1 + -0x70;
        param_1[2] = lVar1;
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    func_0x0001078817f8();
  }
  func_0x000107881644();
  return param_1;
}



/* Entry: 10787ed60; end: 10787eda3;  */

long * FUN_10787ed60(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined1 in_CY;
  long lVar1;
  
  func_0x0001078814d8();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    func_0x000107881740();
    if ((bool)in_CY) {
      func_0x000104bd35f4();
      lVar1 = param_1[2];
      while (lVar1 != param_1[1]) {
        lVar1 = lVar1 + -0x70;
        param_1[2] = lVar1;
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    func_0x0001078817f8();
  }
  func_0x000107881644();
  return param_1;
}



/* Entry: 10787f3b4; end: 10787f45f;  */

void FUN_10787f3b4(double *param_1,long param_2,double *param_3)

{
  double dVar1;
  double extraout_x8;
  double extraout_x8_00;
  double dVar2;
  undefined8 unaff_x30;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = *(double *)(param_2 + 0x10);
  dVar4 = 0.0;
  if (param_1[2] <= dVar3) {
    if (param_3[2] < dVar3) {
      func_0x0001078816b8();
      param_3[1] = dVar4;
      *param_3 = dVar3;
      param_3[2] = extraout_x8;
      if (*(double *)(param_2 + 0x10) < param_1[2]) {
        func_0x00010788132c();
      }
    }
  }
  else {
    if (dVar3 <= param_3[2]) {
      func_0x00010788132c();
      dVar3 = param_3[2];
      dVar4 = 0.0;
      if (*(double *)(param_2 + 0x10) <= dVar3) {
        return;
      }
      func_0x0001078816b8(unaff_x30);
      dVar1 = extraout_x8_00;
    }
    else {
      dVar1 = param_1[2];
      dVar4 = param_1[1];
      dVar3 = *param_1;
      dVar2 = param_3[2];
      dVar5 = *param_3;
      param_1[1] = param_3[1];
      *param_1 = dVar5;
      param_1[2] = dVar2;
    }
    param_3[1] = dVar4;
    *param_3 = dVar3;
    param_3[2] = dVar1;
  }
  return;
}



/* Entry: 10787fbdc; end: 10787fc33;  */

void FUN_10787fbdc(void)

{
  bool bVar1;
  long in_x4;
  long unaff_x22;
  
  func_0x000107881134();
  func_0x00010787fb98();
  bVar1 = *(double *)(in_x4 + 0x10) < *(double *)(unaff_x22 + 0x10);
  if ((((bVar1) && (func_0x00010788125c(), bVar1)) && (func_0x0001078810e0(), bVar1)) &&
     (func_0x0001078810b0(), bVar1)) {
    func_0x000107881110();
  }
  return;
}



/* Entry: 1078801e4; end: 107880317;  */

int * FUN_1078801e4(int *param_1,int *param_2,int *param_3,uint *param_4)

{
  ulong uVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  double dVar14;
  double dVar15;
  
  uVar3 = *param_4;
  piVar6 = param_1;
  if ((-1 < (int)uVar3) && ((int)uVar3 <= **(int **)(param_1 + 2))) {
    iVar4 = *param_3;
    for (iVar12 = *param_2; iVar12 < iVar4; iVar12 = iVar12 + 1) {
      plVar2 = *(long **)(param_1 + 6);
      dVar14 = ((double)iVar12 + 0.5) - **(double **)(param_1 + 4);
      dVar15 = ((double)uVar3 + 0.5) - (*(double **)(param_1 + 4))[1];
      dVar14 = dVar15 * dVar15 + dVar14 * dVar14;
      piVar11 = (int *)plVar2[1];
      if (piVar11 < (int *)plVar2[2]) {
        *piVar11 = iVar12;
        piVar11[1] = uVar3;
        piVar13 = piVar11 + 4;
        *(double *)(piVar11 + 2) = dVar14;
      }
      else {
        piVar9 = (int *)*plVar2;
        lVar10 = (long)piVar11 - (long)piVar9;
        uVar1 = (lVar10 >> 4) + 1;
        if (uVar1 >> 0x3c != 0) {
          func_0x00010788035c();
LAB_107880314:
          func_0x000104bd35f4();
          func_0x0001004a5364(param_2,&PTR_DAT_1109e4068);
          piVar6 = piVar6 + 2;
          if ((int)param_2 == 0) {
            piVar6 = (int *)0x0;
          }
          return piVar6;
        }
        uVar7 = plVar2[2] - (long)piVar9;
        uVar8 = (long)uVar7 >> 3;
        if (uVar8 <= uVar1) {
          uVar8 = uVar1;
        }
        if (0x7fffffffffffffef < uVar7) {
          uVar8 = 0xfffffffffffffff;
        }
        if (uVar8 >> 0x3c != 0) goto LAB_107880314;
        lVar5 = uVar8 << 4;
        __Znwm();
        piVar11 = (int *)(lVar5 + lVar10);
        *piVar11 = iVar12;
        piVar11[1] = uVar3;
        *(double *)(piVar11 + 2) = dVar14;
        piVar13 = piVar11 + 4;
        piVar11 = piVar11 + (lVar10 >> 4) * -4;
        piVar6 = piVar11;
        param_2 = piVar9;
        _memcpy(piVar11,piVar9,lVar10);
        *plVar2 = (long)piVar11;
        plVar2[1] = (long)piVar13;
        plVar2[2] = lVar5 + uVar8 * 0x10;
        if (piVar9 != (int *)0x0) {
          func_0x000107881614();
        }
      }
      plVar2[1] = (long)piVar13;
    }
  }
  return piVar6;
}



/* Entry: 107880af0; end: 107880cdf;  */

void FUN_107880af0(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *in_x4;
  undefined8 *unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x000107881134();
  func_0x000107880aac();
  puVar2 = in_x4;
  func_0x0001078809d8();
  if ((int)puVar2 != 0) {
    uVar4 = unaff_x22[1];
    uVar3 = *unaff_x22;
    uVar5 = *in_x4;
    unaff_x22[1] = in_x4[1];
    *unaff_x22 = uVar5;
    in_x4[1] = uVar4;
    *in_x4 = uVar3;
    func_0x00010788135c();
    iVar1 = (int)unaff_x22;
    if (((iVar1 != 0) && (func_0x0001078812bc(), iVar1 != 0)) && (func_0x0001078812f4(), iVar1 != 0)
       ) {
      func_0x0001078819a4();
    }
  }
  return;
}



/* Entry: 107880e1c; end: 107880e4f;  */

long FUN_107880e1c(long param_1)

{
  func_0x000107880e50(param_1 + 0x40);
  func_0x000107880fa8(param_1 + 0x28);
  func_0x000107881048(param_1 + 8);
  return param_1;
}



/* Entry: 107881014; end: 1078810af;  */

void FUN_107881014(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107881230();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x28;
    func_0x000104c31c5c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107882458; end: 107882527;  */

void FUN_107882458(long param_1)

{
  long *plVar1;
  long *unaff_x19;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x00010788440c();
  uVar3 = *(ulong *)(param_1 + 8);
  if (uVar3 < *(ulong *)(param_1 + 0x10)) {
    func_0x000107882528(uVar3);
    lVar2 = uVar3 + 0x28;
    unaff_x19[1] = lVar2;
  }
  else {
    plVar1 = unaff_x19;
    func_0x000107882608();
    func_0x000107882768(auStack_58,plVar1,(unaff_x19[1] - *unaff_x19) / 0x28,
                        (ulong *)(param_1 + 0x10));
    func_0x000107882528();
    lStack_48 = lStack_48 + 0x28;
    func_0x000107882658();
    lVar2 = unaff_x19[1];
    func_0x000107882808(auStack_58);
  }
  unaff_x19[1] = lVar2;
  return;
}



/* Entry: 107882850; end: 10788285b;  */

long * FUN_107882850(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  ulong unaff_x20;
  
  func_0x0001078844f4();
  func_0x00010788440c();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    plVar1 = (long *)0x0;
  }
  else {
    if (0x1555555555555555 < unaff_x20) {
      func_0x000104bd35f4();
      lVar2 = param_1[2];
      while (lVar2 != param_1[1]) {
        lVar2 = lVar2 + -0xc;
        param_1[2] = lVar2;
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    plVar1 = (long *)(unaff_x20 * 0xc);
    __Znwm(plVar1);
  }
  func_0x000107884474(0xc);
  return plVar1;
}



/* Entry: 1078835c8; end: 1078835f3;  */

long * FUN_1078835c8(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107883d20; end: 107884237;  */

void FUN_107883d20(undefined4 *param_1,long *param_2,undefined8 param_3,int param_4)

{
  double *pdVar1;
  double *pdVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  bool bVar5;
  double **ppdVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  double *pdVar11;
  ulong uVar12;
  double *pdVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  double *pdVar17;
  double dVar18;
  double dVar19;
  double *pdVar20;
  double dVar21;
  double *pdStack_e0;
  double *pdStack_d8;
  undefined8 auStack_d0 [2];
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  double *pdStack_90;
  double *pdStack_88;
  double *pdStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  ppdVar6 = &pdStack_e0;
  pdStack_e0 = (double *)0x0;
  pdStack_d8 = (double *)0x0;
  auStack_d0[0] = 0;
  if (*(char *)(param_1 + 1) == '\x01') {
    func_0x00010740ed44(&pdStack_e0,param_2[1] - *param_2 >> 4);
    puVar3 = (undefined8 *)param_2[1];
    for (puVar16 = (undefined8 *)*param_2; puVar16 != puVar3; puVar16 = puVar16 + 2) {
      pdVar20 = (double *)*puVar16;
      pdVar17 = (double *)puVar16[1];
      func_0x0001078843a4();
      func_0x00010726b794(&lStack_c0,*param_1);
      pdStack_90 = pdVar17;
      pdStack_88 = pdVar20;
      func_0x000104c31a04(&pdStack_e0,&pdStack_90);
    }
  }
  else {
    pdVar17 = (double *)*param_2;
    lVar15 = param_2[1] - (long)pdVar17;
    if (0 < lVar15 >> 4) {
      func_0x000104c31a9c(&pdStack_e0);
      func_0x000104c31af0(&pdStack_90,ppdVar6,-(long)pdStack_e0 >> 4,auStack_d0);
      lVar8 = (long)pdStack_80 + lVar15;
      for (; lVar15 != 0; lVar15 = lVar15 + -0x10) {
        dVar18 = *pdVar17;
        pdStack_80[1] = pdVar17[1];
        *pdStack_80 = dVar18;
        pdVar17 = pdVar17 + 2;
        pdStack_80 = pdStack_80 + 2;
      }
      pdStack_80 = (double *)(lVar8 + (long)pdStack_d8);
      pdStack_d8 = (double *)0x0;
      pdVar17 = (double *)((long)pdStack_88 + (long)pdStack_e0);
      _memcpy(pdVar17,pdStack_e0,-(long)pdStack_e0);
      uVar4 = auStack_d0[0];
      auStack_d0[0] = uStack_78;
      pdStack_d8 = pdStack_80;
      pdStack_80 = pdStack_e0;
      uStack_78 = uVar4;
      pdStack_90 = pdStack_e0;
      pdStack_88 = pdStack_e0;
      pdStack_e0 = pdVar17;
      func_0x000104c31b5c(&pdStack_90);
    }
  }
  pdVar17 = pdStack_e0;
  if (0x10 < (ulong)((long)pdStack_d8 - (long)pdStack_e0)) {
    if (param_4 != 0) {
      uVar7 = 0;
      pdVar20 = pdStack_e0 + 2;
      pdVar11 = pdVar20;
      pdVar13 = pdStack_d8 + -4;
LAB_107883e94:
      pdVar2 = (double *)((long)pdStack_e0 + uVar7);
      if (pdVar2 != pdStack_d8) {
        if ((pdVar13[1] < pdVar2[1]) || (pdVar11[1] <= pdVar2[1])) goto LAB_107883ebc;
        bVar5 = false;
        if ((pdStack_d8[-2] == *pdStack_e0) &&
           (bVar5 = false, !NAN(pdStack_d8[-1]) && !NAN(pdStack_e0[1]))) {
          bVar5 = pdStack_d8[-1] == pdStack_e0[1];
        }
        if (bVar5) {
          pdStack_d8 = pdStack_d8 + -2;
        }
        if ((uVar7 != 0) && (pdVar2 != pdStack_d8)) {
          if (uVar7 == 0x10) {
            pdStack_88 = (double *)pdStack_e0[1];
            pdStack_90 = (double *)*pdStack_e0;
            lVar15 = (long)pdStack_d8 - (long)pdVar2;
            _memmove(pdStack_e0,pdVar20,lVar15);
            puVar16 = (undefined8 *)((long)pdVar17 + lVar15);
            puVar16[1] = pdStack_88;
            *puVar16 = pdStack_90;
          }
          else if (pdVar2 + 2 == pdStack_d8) {
            pdStack_88 = (double *)pdStack_d8[-1];
            pdStack_90 = (double *)pdStack_d8[-2];
            _memmove(pdStack_e0 + 2,pdStack_e0);
            pdVar17[1] = (double)pdStack_88;
            *pdVar17 = (double)pdStack_90;
          }
          else {
            uVar12 = uVar7 >> 4;
            uVar9 = (long)pdStack_d8 - (long)pdVar2 >> 4;
            uVar14 = uVar12;
            if (uVar12 == uVar9) {
              pdVar17 = pdStack_e0;
              for (uVar9 = 0; pdVar20 = (double *)((long)pdVar17 + uVar7),
                  uVar7 != uVar9 && pdVar20 != pdStack_d8; uVar9 = uVar9 + 0x10) {
                dVar19 = pdVar17[1];
                dVar18 = *pdVar17;
                dVar21 = *pdVar20;
                pdVar17[1] = pdVar20[1];
                *pdVar17 = dVar21;
                pdVar20[1] = dVar19;
                *pdVar20 = dVar18;
                pdVar17 = pdVar17 + 2;
              }
            }
            else {
              do {
                uVar10 = uVar9;
                lVar15 = 0;
                if (uVar10 != 0) {
                  lVar15 = (long)uVar14 / (long)uVar10;
                }
                uVar9 = uVar14 - lVar15 * uVar10;
                uVar14 = uVar10;
              } while (uVar9 != 0);
              pdVar17 = pdStack_e0 + uVar10 * 2;
              while (pdVar17 != pdStack_e0) {
                pdVar11 = pdVar17 + -2;
                pdStack_88 = (double *)pdVar17[-1];
                pdStack_90 = (double *)pdVar17[-2];
                pdVar17 = (double *)(uVar7 + (long)pdVar11);
                pdVar20 = pdVar11;
                do {
                  pdVar13 = pdVar17;
                  dVar18 = *pdVar13;
                  pdVar20[1] = pdVar13[1];
                  *pdVar20 = dVar18;
                  lVar15 = (long)pdStack_d8 - (long)pdVar13 >> 4;
                  pdVar17 = (double *)((long)pdVar13 + uVar7);
                  if (lVar15 <= (long)uVar12) {
                    pdVar17 = pdStack_e0 + (uVar12 - lVar15) * 2;
                  }
                  pdVar20 = pdVar13;
                } while (pdVar17 != pdVar11);
                pdVar13[1] = (double)pdStack_88;
                *pdVar13 = (double)pdStack_90;
                pdVar17 = pdVar11;
              }
            }
          }
        }
        func_0x00010750da28(&pdStack_e0,pdStack_e0);
        pdVar17 = pdStack_e0;
      }
    }
    goto LAB_107883fc0;
  }
LAB_107883e58:
  func_0x000104c31c5c(&pdStack_e0);
  return;
LAB_107883ebc:
  uVar7 = uVar7 + 0x10;
  pdVar1 = pdVar11 + 2;
  pdVar11 = pdVar20;
  pdVar13 = pdVar2;
  if (pdVar1 != pdStack_d8) {
    pdVar11 = pdVar1;
  }
  goto LAB_107883e94;
LAB_107883fc0:
  if (pdVar17 == pdStack_d8) goto LAB_107883e58;
  lVar15 = (long)pdStack_d8 - (long)pdVar17;
  pdVar20 = pdVar17;
  if (lVar15 < 0x11) {
LAB_107884030:
    uStack_70 = 0;
    pdStack_88 = (double *)0x0;
    pdStack_90 = (double *)0x0;
    uStack_78 = 0;
    pdStack_80 = (double *)0x0;
  }
  else {
    pdVar20 = pdVar17 + 2;
    lVar8 = 0x10;
    do {
      if (pdVar20[1] < pdVar20[-1]) {
        lVar15 = lVar8;
        pdVar11 = pdVar20;
        pdVar20 = pdVar20 + -2;
        break;
      }
      pdVar20 = pdVar20 + 2;
      lVar8 = lVar8 + 0x10;
      pdVar11 = pdStack_d8;
    } while (pdVar20 != pdStack_d8);
    if (lVar15 >> 4 < 2) goto LAB_107884030;
    uStack_70 = uStack_70 & 0xffffffffffffff00;
    pdStack_88 = (double *)0x0;
    pdStack_90 = (double *)0x0;
    uStack_78 = 0;
    pdStack_80 = (double *)0x0;
    func_0x00010740ed44(&pdStack_90);
    for (; pdVar17 != pdVar11; pdVar17 = pdVar17 + 2) {
      func_0x00010750da28(&pdStack_90,pdVar17);
    }
    uStack_70 = CONCAT71(uStack_70._1_7_,1);
  }
  pdVar17 = pdVar20;
  if ((long)pdStack_d8 - (long)pdVar20 < 0x11) {
LAB_1078840d0:
    uStack_a0 = 0;
    lStack_b8 = 0;
    lStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    pdVar11 = pdVar20 + 2;
    do {
      if (pdVar11[-1] <= pdVar11[1]) {
        pdVar17 = pdVar11 + -2;
        break;
      }
      pdVar11 = pdVar11 + 2;
      pdVar17 = pdVar11;
    } while (pdVar11 != pdStack_d8);
    if ((long)pdVar11 - (long)pdVar20 >> 4 < 2) goto LAB_1078840d0;
    uStack_a0 = uStack_a0 & 0xffffffffffffff00;
    lStack_b8 = 0;
    lStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    func_0x00010740ed44(&lStack_c0);
    while (pdVar11 != pdVar20) {
      pdVar11 = pdVar11 + -2;
      func_0x00010750da28(&lStack_c0,pdVar11);
    }
    uStack_a0 = uStack_a0 & 0xffffffffffffff00;
  }
  if (0x10 < (ulong)((long)pdStack_88 - (long)pdStack_90)) {
    func_0x000107884420(pdStack_90[1]);
    func_0x0001078844b0();
    FUN_107882458();
  }
  if (0x10 < (ulong)(lStack_b8 - lStack_c0)) {
    func_0x000107884420(*(undefined8 *)(lStack_c0 + 8));
    func_0x0001078844b0();
    FUN_107882458();
  }
  func_0x000104c31c5c(&lStack_c0);
  func_0x000104c31c5c(&pdStack_90);
  goto LAB_107883fc0;
}



/* Entry: 107884b14; end: 107884b37;  */

void FUN_107884b14(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar1 = puVar2;
  for (lVar3 = param_2 << 3; lVar3 != 0; lVar3 = lVar3 + -8) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  *(undefined8 **)(param_1 + 8) = puVar2 + param_2;
  return;
}



/* Entry: 107884e08; end: 107885087;  */

ulong * FUN_107884e08(ulong *param_1,byte *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  byte **ppbVar6;
  byte **ppbVar7;
  byte **ppbVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  byte *pbStack_40;
  undefined1 *puStack_38;
  int iVar5;
  
  ppbVar6 = &pbStack_40;
  ppbVar7 = &pbStack_40;
  iVar4 = (int)&pbStack_40;
  ppbVar8 = &pbStack_40;
  iVar5 = (int)&pbStack_40;
  pbStack_40 = param_2;
  puStack_38 = param_3;
  func_0x0001057fa6dc(&pbStack_40,0x23,0);
  func_0x0001057fa6dc(&pbStack_40,0x3f,0);
  puVar11 = puStack_38;
  if (ppbVar6 != (byte **)0xffffffffffffffff) {
    puVar11 = (undefined1 *)ppbVar6;
  }
  puVar1 = puVar11;
  if (ppbVar7 != (byte **)0xffffffffffffffff && ppbVar7 <= ppbVar6) {
    puVar1 = (undefined1 *)ppbVar7;
  }
  uVar2 = 0;
  if (ppbVar7 != (byte **)0xffffffffffffffff && ppbVar7 <= ppbVar6) {
    uVar2 = (long)puVar11 - (long)ppbVar7;
  }
  *param_1 = (ulong)puVar1;
  param_1[1] = uVar2;
  if ((puStack_38 != (undefined1 *)0x0) && ((*pbStack_40 & 0xffffffdf) - 0x41 < 0x1a)) {
    for (puVar11 = (undefined1 *)0x0; puVar9 = puVar1, puVar1 != puVar11; puVar11 = puVar11 + 1) {
      bVar3 = pbStack_40[(long)puVar11];
      if ((9 < bVar3 - 0x30 && 0x19 < (bVar3 & 0xffffffdf) - 0x41) &&
         (puVar9 = puVar11, 0x2e < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x680000000000U) == 0))
      break;
    }
    if (puVar9 < puStack_38) {
      if (pbStack_40[(long)puVar9] != 0x3a) {
        puVar9 = (undefined1 *)0x0;
      }
      goto LAB_107884ef8;
    }
  }
  puVar9 = (undefined1 *)0x0;
LAB_107884ef8:
  param_1[2] = 0;
  param_1[3] = (ulong)puVar9;
  puVar12 = puVar9;
  puVar11 = puVar1;
  if (puVar1 <= puVar9) {
    puVar11 = puVar9;
  }
  for (; (puVar13 = puVar11, puVar12 < puVar1 &&
         ((pbStack_40[(long)puVar12] == 0x3a ||
          (puVar13 = puVar12, pbStack_40[(long)puVar12] == 0x2f)))); puVar12 = puVar12 + 1) {
  }
  func_0x000107875ee0(&pbStack_40,0,puVar9,"data");
  uVar10 = 0x2c;
  if (iVar4 != 0) {
    uVar10 = 0x2f;
  }
  func_0x0001057fa6dc(&pbStack_40,uVar10,puVar13);
  if ((undefined1 *)*param_1 <= ppbVar8) {
    ppbVar8 = (byte **)*param_1;
  }
  param_1[4] = (ulong)puVar13;
  param_1[5] = (long)ppbVar8 - (long)puVar13;
  func_0x000107875ee0(&pbStack_40,param_1[2],param_1[3],"data");
  if (iVar5 == 0) {
    ppbVar8 = (byte **)((long)ppbVar8 + 1);
  }
  param_1[6] = (ulong)ppbVar8;
  param_1[7] = *param_1 - (long)ppbVar8;
  return param_1;
}



/* Entry: 107886748; end: 10788675f;  */

long FUN_107886748(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010788893c();
    _objc_msgSend(lVar2,lVar1);
  }
  func_0x000107887ccc(param_1 + 0x30);
  return param_1;
}



/* Entry: 107886938; end: 10788694f;  */

void FUN_107886938(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  func_0x00010788abec();
  func_0x000107887ed4();
  _objc_msgSend();
  lVar1 = *(long *)(param_1 + 0x30) + (param_4 & 0xffffffff) * 0x10;
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined4 *)(lVar1 + 0xe8) = 0;
  return;
}



/* Entry: 107887138; end: 10788717b;  */

void FUN_107887138(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(*(long *)(param_1 + 0x30) + 0x6f0) != 0) {
    func_0x0001078869ac(param_1,*(undefined8 *)(*(long *)(param_3 + 0x28) + 8),0,param_2);
    *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x2e0) = 0;
  }
  return;
}



/* Entry: 1078874dc; end: 10788757f;  */

void FUN_1078874dc(long param_1,ulong param_2,uint param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = (uint)param_2;
  if (((param_4 == uVar2 >> 0x18) && ((param_2 >> 0x20 & 1) != 0)) &&
     (param_3 == ((uint)(param_2 >> 0x10) & 0xff))) {
    if ((~uVar2 & 0xff) != 0) {
      func_0x000107886950(param_1,param_5,param_6,uVar2 & 0xff);
    }
    if ((~uVar2 & 0xff00) != 0) {
      func_0x000107889c50();
      func_0x000107887ed4();
      _objc_msgSend();
      lVar1 = *(long *)(param_1 + 0x30) + (param_2 >> 8 & 0xff) * 0x10;
      *(undefined8 *)(lVar1 + 1000) = 0;
      *(undefined4 *)(lVar1 + 0x3f0) = 0;
    }
  }
  return;
}



/* Entry: 1078877c8; end: 10788780b;  */

void FUN_1078877c8(long *param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = param_2 << 2;
  if (param_2 >> 0x3e != 0) {
    lVar1 = -1;
  }
  __Znam();
  _bzero();
  *param_1 = lVar1;
  return;
}



/* Entry: 107887b38; end: 107887b5b;  */

void FUN_107887b38(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_3[1];
  uStack_20 = *param_3;
  func_0x000107887b0c(param_1,param_2,&uStack_20);
  return;
}



/* Entry: 107887d9c; end: 107887ee7;  */

void FUN_107887d9c(void)

{
  return;
}



/* Entry: 107888014; end: 107888083;  */

undefined * FUN_107888014(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113823e80 & 1) == 0) {
    iVar1 = 0x13823e80;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430a4b;
      _objc_lookUpClass();
      puRam0000000113823e78 = puVar2;
      ___cxa_guard_release(0x113823e80);
    }
  }
  return puRam0000000113823e78;
}



/* Entry: 10788838c; end: 1078883fb;  */

undefined * FUN_10788838c(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113823ee0 & 1) == 0) {
    iVar1 = 0x13823ee0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430b19;
      _sel_registerName();
      puRam0000000113823ed8 = puVar2;
      ___cxa_guard_release(0x113823ee0);
    }
  }
  return puRam0000000113823ed8;
}



/* Entry: 10788870c; end: 10788877b;  */

undefined * FUN_10788870c(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113823f60 & 1) == 0) {
    iVar1 = 0x13823f60;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430bf3;
      _sel_registerName();
      puRam0000000113823f58 = puVar2;
      ___cxa_guard_release(0x113823f60);
    }
  }
  return puRam0000000113823f58;
}



/* Entry: 107888a88; end: 107888af7;  */

undefined * FUN_107888a88(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113823fd0 & 1) == 0) {
    iVar1 = 0x13823fd0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430ccf;
      _sel_registerName();
      puRam0000000113823fc8 = puVar2;
      ___cxa_guard_release(0x113823fd0);
    }
  }
  return puRam0000000113823fc8;
}



/* Entry: 107888e00; end: 107888e6f;  */

undefined * FUN_107888e00(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824030 & 1) == 0) {
    iVar1 = 0x13824030;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430da0;
      _sel_registerName();
      puRam0000000113824028 = puVar2;
      ___cxa_guard_release(0x113824030);
    }
  }
  return puRam0000000113824028;
}



/* Entry: 107889174; end: 1078891e3;  */

undefined * FUN_107889174(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824080 & 1) == 0) {
    iVar1 = 0x13824080;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430e93;
      _sel_registerName();
      puRam0000000113824078 = puVar2;
      ___cxa_guard_release(0x113824080);
    }
  }
  return puRam0000000113824078;
}



/* Entry: 1078894f0; end: 10788955f;  */

undefined * FUN_1078894f0(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam00000001138240f0 & 1) == 0) {
    iVar1 = 0x138240f0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430fa1;
      _sel_registerName();
      puRam00000001138240e8 = puVar2;
      ___cxa_guard_release(0x1138240f0);
    }
  }
  return puRam00000001138240e8;
}



/* Entry: 10788986c; end: 1078898d7;  */

undefined8 FUN_10788986c(void)

{
  int iVar1;
  
  if ((bRam00000001137264a8 & 1) == 0) {
    iVar1 = 0x137264a8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _sel_registerName(&UNK_10f431059);
      func_0x0001078902dc(0x1137264a0);
    }
  }
  return uRam00000001137264a0;
}



/* Entry: 107889be0; end: 107889c4f;  */

undefined * FUN_107889be0(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam00000001138241b0 & 1) == 0) {
    iVar1 = 0x138241b0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f431128;
      _sel_registerName();
      puRam00000001138241a8 = puVar2;
      ___cxa_guard_release(0x1138241b0);
    }
  }
  return puRam00000001138241a8;
}



/* Entry: 107889f5c; end: 107889fcb;  */

undefined * FUN_107889f5c(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824220 & 1) == 0) {
    iVar1 = 0x13824220;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f4311f3;
      _sel_registerName();
      puRam0000000113824218 = puVar2;
      ___cxa_guard_release(0x113824220);
    }
  }
  return puRam0000000113824218;
}



/* Entry: 10788a2d0; end: 10788a33b;  */

undefined8 FUN_10788a2d0(void)

{
  int iVar1;
  
  if ((bRam0000000113726518 & 1) == 0) {
    iVar1 = 0x13726518;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _sel_registerName(&UNK_10f431266);
      func_0x0001078902dc(0x113726510);
    }
  }
  return uRam0000000113726510;
}



/* Entry: 10788a644; end: 10788a6af;  */

undefined8 FUN_10788a644(void)

{
  int iVar1;
  
  if ((bRam0000000113726548 & 1) == 0) {
    iVar1 = 0x13726548;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _sel_registerName(&UNK_10f431322);
      func_0x0001078902dc(0x113726540);
    }
  }
  return uRam0000000113726540;
}



/* Entry: 10788a9bc; end: 10788aa2b;  */

undefined * FUN_10788a9bc(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824320 & 1) == 0) {
    iVar1 = 0x13824320;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f4313b2;
      _sel_registerName();
      puRam0000000113824318 = puVar2;
      ___cxa_guard_release(0x113824320);
    }
  }
  return puRam0000000113824318;
}



/* Entry: 10788ad3c; end: 10788adab;  */

undefined * FUN_10788ad3c(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam00000001138243a0 & 1) == 0) {
    iVar1 = 0x138243a0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f43145e;
      _sel_registerName();
      puRam0000000113824398 = puVar2;
      ___cxa_guard_release(0x1138243a0);
    }
  }
  return puRam0000000113824398;
}



/* Entry: 10788b0b8; end: 10788b127;  */

undefined * FUN_10788b0b8(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824410 & 1) == 0) {
    iVar1 = 0x13824410;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f4314c0;
      _sel_registerName();
      puRam0000000113824408 = puVar2;
      ___cxa_guard_release(0x113824410);
    }
  }
  return puRam0000000113824408;
}



/* Entry: 10788b430; end: 10788b49f;  */

undefined * FUN_10788b430(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824470 & 1) == 0) {
    iVar1 = 0x13824470;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f431522;
      _sel_registerName();
      puRam0000000113824468 = puVar2;
      ___cxa_guard_release(0x113824470);
    }
  }
  return puRam0000000113824468;
}



/* Entry: 10788c458; end: 10788c46b;  */

void FUN_10788c458(void)

{
  func_0x00010788c38c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10788d110; end: 10788d14f;  */

void FUN_10788d110(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000107890870();
  func_0x00010789112c();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 10788d5e0; end: 10788d727;  */

undefined8 * FUN_10788d5e0(long *param_1,byte param_2,byte param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *unaff_x19;
  
  __ZNSt3__119__shared_mutex_base4lockEv();
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x2760;
    __Znwm();
    *puVar2 = &PTR_DAT_1109e4448;
    _bzero(puVar2 + 1,0x1c0);
    func_0x00010788f090(puVar2 + 0x39);
    puVar2[0x4d2] = 0;
    puVar2[0x4d1] = 0;
    puVar2[0x4d4] = 0;
    puVar2[0x4d3] = 0;
    *(undefined4 *)(puVar2 + 0x4d5) = 0x3f800000;
    __ZNSt3__119__shared_mutex_baseC1Ev(puVar2 + 0x4d6);
    *(byte *)(puVar2 + 0x4eb) = param_2 & 1;
    *(byte *)((long)puVar2 + 0x2759) = param_3 & 1;
    lVar3 = *param_1;
    *param_1 = (long)puVar2;
    if (lVar3 != 0) {
      func_0x00010789036c();
      puVar2 = (undefined8 *)*param_1;
    }
    func_0x0001078908b8();
    unaff_x19 = puVar2;
  }
  else {
    func_0x0001078908b8();
  }
  ___dynamic_cast();
  if (puVar2 != (undefined8 *)0x0) {
    func_0x0001078907d4();
    func_0x000104c305a0();
    return unaff_x19;
  }
  ___cxa_bad_cast();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10788d6e4);
  (*pcVar1)();
}



/* Entry: 10788df0c; end: 10788e16b;  */

void FUN_10788df0c(ulong *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x9;
  ulong extraout_x10;
  undefined8 extraout_x11;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uStack_3e0;
  undefined4 uStack_3d8;
  undefined8 uStack_3d0;
  undefined4 uStack_3c8;
  undefined4 auStack_3c0 [6];
  undefined4 uStack_3a8;
  undefined **ppuStack_3a0;
  undefined8 uStack_398;
  undefined4 uStack_378;
  undefined1 uStack_374;
  long lStack_350;
  long lStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  undefined1 *puStack_320;
  undefined *puStack_318;
  ulong uStack_280;
  undefined1 uStack_278;
  undefined4 uStack_26c;
  long alStack_268 [33];
  ulong uStack_160;
  undefined1 uStack_158;
  undefined8 uStack_58;
  
  uVar3 = param_2;
  uVar6 = param_3;
  func_0x000107890480();
  uStack_26c = (undefined4)uVar6;
  uVar3 = uVar3 + (uVar6 & 0xffffffff) * 0xa8 + 0x298;
  uStack_158 = 1;
  uVar6 = uVar3;
  uStack_160 = uVar3;
  uStack_58 = extraout_x8;
  __ZNSt3__119__shared_mutex_base11lock_sharedEv();
  lVar1 = param_2 + 0xd8;
  lVar9 = *(long *)(lVar1 + (param_3 & 0xffffffff) * 8);
  if (lVar9 != 0) {
    FUN_10788b430();
    uVar8 = uVar6;
    func_0x0001078904d8();
    iVar5 = (int)uVar8;
    *param_1 = uVar6;
    func_0x000107890804();
    uVar8 = uVar3;
    goto LAB_10788e0b4;
  }
  func_0x000107890804();
  uStack_278 = 1;
  uStack_280 = uVar3;
  __ZNSt3__119__shared_mutex_base4lockEv();
  uVar8 = *(ulong *)(lVar1 + (param_3 & 0xffffffff) * 8);
  if (uVar8 == 0) {
    func_0x0001073cafc0(uStack_26c);
    func_0x0001078907f8();
    func_0x000107890490();
    func_0x00010789068c();
    func_0x00010789067c();
    func_0x000107288cd8(alStack_268);
    func_0x000107890760();
    func_0x0001078905c8();
    func_0x00010729d56c(8);
    func_0x000107890650();
    func_0x0001078905b0();
    func_0x0001078907e0();
    uVar2 = extraout_x11;
    uVar8 = extraout_x10;
    if (in_NG == in_OV) {
      uVar2 = extraout_x8_00;
      uVar8 = extraout_x9;
    }
    func_0x00010789080c(uVar8,uVar2);
    alStack_268[0] = 0;
    param_2 = uVar8;
    func_0x000107888e70();
    func_0x000107890748();
    lVar9 = alStack_268[0];
    if ((param_2 == 0) || (alStack_268[0] != 0)) {
      param_3 = param_2;
      func_0x00010788b278();
      func_0x0001078904d8();
      uVar3 = param_3;
      func_0x00010788b580();
      iVar5 = (int)uVar3;
      uVar3 = param_3;
      _objc_msgSend();
      *param_1 = 0;
      if (param_2 != 0) goto LAB_10788e09c;
    }
    else {
      _dispatch_release();
      FUN_10788b430();
      func_0x0001078903f4();
      *param_1 = uVar8;
      uVar6 = *(ulong *)(lVar1 + (param_3 & 0xffffffff) * 8);
      in_ZR = uVar6 == uVar8;
      uVar3 = uVar8;
      if (!(bool)in_ZR) {
        if (uVar6 != 0) {
          func_0x00010788b354();
          func_0x0001078904e8();
        }
        FUN_10788b430();
        func_0x000107890428();
        *(ulong *)(lVar1 + (param_3 & 0xffffffff) * 8) = uVar3;
      }
LAB_10788e09c:
      func_0x00010788b354();
      uVar6 = uVar3;
      func_0x00010789062c();
      iVar5 = (int)uVar6;
    }
    func_0x0001078906c0();
    func_0x000107890718();
  }
  else {
    FUN_10788b430();
    uVar6 = uVar3;
    func_0x000107890428();
    iVar5 = (int)uVar6;
    *param_1 = uVar3;
  }
  func_0x000107890728();
  uVar6 = uVar3;
LAB_10788e0b4:
  func_0x0001078903b4(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (iVar5 == 0) {
      func_0x0001078903e0();
    }
    uVar3 = uVar6;
    func_0x000104bd46a0();
    puStack_318 = &DAT_10788e16c;
    puVar7 = *(undefined8 **)(uVar3 + 0x20);
    auStack_3c0[0] = 0x9d;
    uStack_3a8 = 0;
    uVar4 = uVar3;
    lStack_350 = lVar1;
    lStack_348 = lVar9;
    uStack_340 = uVar8;
    uStack_338 = param_2;
    uStack_330 = param_3;
    uStack_328 = uVar6;
    puStack_320 = &stack0xfffffffffffffff0;
    func_0x000107890348();
    uStack_374 = 1;
    func_0x00010789053c();
    func_0x0001078902fc(*(undefined4 *)(uVar4 + 0x6c));
    uStack_3d8 = 3;
    func_0x00010743fa44(puVar7,auStack_3c0,&uStack_3d0,&uStack_3e0,7);
    func_0x000107890430();
    func_0x000107890378(0x9e);
    func_0x0001078902c0();
    func_0x0001078902fc(*(undefined4 *)(uVar3 + 0x70));
    uStack_3d8 = 3;
    func_0x0001078902a8();
    func_0x000107890430();
    func_0x000107890378(0xa1);
    func_0x0001078902c0();
    func_0x0001078902fc(*(undefined4 *)(uVar3 + 0x68));
    uStack_3d8 = 3;
    func_0x0001078902a8();
    func_0x000107890430();
    func_0x000107890378(0xeb);
    func_0x0001078902c0();
    func_0x0001078902fc(*(undefined4 *)(uVar3 + 0x74));
    uStack_3d8 = 3;
    func_0x0001078902a8();
    func_0x000107890430();
    func_0x000107890378(0xec);
    func_0x0001078902c0();
    func_0x0001078902fc(*(undefined4 *)(uVar3 + 0x78));
    uStack_3d8 = 3;
    func_0x0001078902a8();
    func_0x000107890430();
    func_0x000107890378(0xa2);
    func_0x0001078902c0();
    func_0x0001078902fc(*(undefined4 *)(uVar3 + 0x34));
    uStack_3d8 = 3;
    func_0x0001078902a8();
    func_0x000107890430();
    func_0x000107890378(0xa3);
    func_0x0001078902c0();
    func_0x0001078902fc(*(undefined4 *)(uVar3 + 0x3c));
    uStack_3d8 = 3;
    func_0x0001078902a8();
    func_0x000107890430();
    func_0x000107890378(0xa4);
    func_0x0001078902c0();
    uStack_3d0 = *(undefined8 *)(uVar3 + 0x50);
    uStack_3c8 = 3;
    uStack_3e0 = *puVar7;
    uStack_3d8 = 3;
    func_0x0001078902a8();
    func_0x000107890430();
    auStack_3c0[0] = 0xa5;
    uStack_3a8 = 0;
    func_0x000107890348();
    uStack_374 = 1;
    func_0x00010789053c();
    uStack_3d0 = *(undefined8 *)(uVar3 + 0x48);
    func_0x0001078908cc();
    func_0x0001078902a8();
    func_0x000107890430();
    func_0x000107890378(0xa7);
    ppuStack_3a0 = &PTR_DAT_110996720;
    uStack_398 = 0;
    uStack_378 = 0;
    uStack_374 = 1;
    func_0x00010789053c();
    uStack_3d0 = *(undefined8 *)(uVar3 + 0x58);
    func_0x0001078908cc();
    func_0x0001078902a8();
    func_0x000107890430();
    func_0x000107890378(0xa9);
    ppuStack_3a0 = &PTR_DAT_110996720;
    uStack_398 = 0;
    uStack_378 = 0;
    uStack_374 = 1;
    func_0x00010789053c();
    func_0x0001078902fc(*(undefined4 *)(uVar3 + 0x38));
    uStack_3d8 = 3;
    func_0x0001078902a8();
    func_0x000107890430();
    func_0x000107890378(0xaa);
    ppuStack_3a0 = &PTR_DAT_110996720;
    uStack_398 = 0;
    uStack_378 = 0;
    uStack_374 = 1;
    func_0x00010789053c();
    func_0x0001078902fc(*(undefined4 *)(uVar3 + 0x30));
    uStack_3d8 = 3;
    func_0x0001078902a8();
    func_0x000107890430();
    *(undefined8 *)(uVar3 + 0x68) = 0;
    *(undefined8 *)(uVar3 + 0x70) = 0;
    *(undefined4 *)(uVar3 + 0x78) = 0;
    return;
  }
  return;
}



/* Entry: 10788f0f4; end: 10788f14b;  */

void FUN_10788f0f4(void)

{
  func_0x0001078907b8();
  func_0x00010788f118();
  return;
}



/* Entry: 10788f2f4; end: 10788f323;  */

void FUN_10788f2f4(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001078907a8();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x28;
    func_0x00010788f434();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10788f4cc; end: 10788f4ef;  */

void FUN_10788f4cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  func_0x00010788f594(param_1,&uStack_18);
  return;
}



/* Entry: 10788f6e4; end: 10788f70f;  */

void FUN_10788f6e4(undefined8 *param_1)

{
  if (*(char *)(param_1 + 2) == '\x01') {
    *(undefined1 *)(param_1 + 2) = 0;
    func_0x000107890da4(param_1 + 1,*param_1);
  }
  return;
}



/* Entry: 10788f804; end: 10788f82b;  */

long FUN_10788f804(long param_1)

{
  func_0x00010788f82c();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10788f998; end: 10788fa07;  */

void FUN_10788f998(long param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  if (*(char *)(param_1 + 0x2758) == '\x01') {
    uStack_28 = param_2;
    func_0x00010789069c();
    __ZNSt3__119__shared_mutex_base4lockEv();
    func_0x0001073ca75c(unaff_x20 + 0x2688,&uStack_28);
    func_0x0001073ca790();
    func_0x000104c305a0(auStack_38);
  }
  return;
}



/* Entry: 10788fcc8; end: 10788fcff;  */

undefined8 * FUN_10788fcc8(undefined8 *param_1,long param_2)

{
  *param_1 = &PTR_DAT_1109e4488;
  func_0x00010788fd00(param_1 + 1);
  param_1[4] = *(undefined8 *)(param_2 + 0x18);
  return param_1;
}



/* Entry: 1078900b4; end: 1078900bf;  */

undefined ** FUN_1078900b4(void)

{
  return &PTR_DAT_1109e45e8;
}



/* Entry: 107890258; end: 1078902a7;  */

void FUN_107890258(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000107890670();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    func_0x00010789036c();
  }
  return;
}



/* Entry: 107890a24; end: 107890acf;  */

void FUN_107890a24(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_28;
  
  (**(code **)(**(long **)(param_2 + 8) + 0x20))(&lStack_28);
  param_2 = param_2 + -8;
  func_0x00010789600c(param_2,*(undefined8 *)(param_1 + 0x10));
  lVar1 = lStack_28;
  if (lStack_28 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    FUN_107889174();
    _objc_msgSend(uVar2,param_2,lVar1);
    if (lStack_28 != 0) {
      func_0x00010788b354();
      _objc_msgSend(lStack_28,uVar2);
    }
  }
  return;
}



/* Entry: 107890d30; end: 107890d3b;  */

undefined ** FUN_107890d30(void)

{
  return &PTR_DAT_1109e4728;
}



/* Entry: 1078910cc; end: 10789112b;  */

void FUN_1078910cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}


