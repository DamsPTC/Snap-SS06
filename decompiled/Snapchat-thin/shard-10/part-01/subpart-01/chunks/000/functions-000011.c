/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10786e114; end: 10786e143;  */

long FUN_10786e114(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x28);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x10);
  return param_1;
}



/* Entry: 10786e848; end: 10786e8eb;  */

void FUN_10786e848(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lStack_40;
  undefined *puStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar2 = ((long *)*param_2)[1];
  for (lVar5 = *(long *)*param_2; lVar5 != lVar2; lVar5 = lVar5 + 0x38) {
    uVar1 = param_1[1];
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    }
    puVar4 = (undefined *)param_3;
    if (uVar1 != 0) {
      puVar4 = &UNK_10f43019c;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(param_1);
    }
    lVar3 = lVar5;
    func_0x000107264c5c();
    param_3 = &lStack_40;
    lStack_40 = lVar3;
    puStack_38 = puVar4;
    func_0x0001073727b8(param_1);
  }
  return;
}



/* Entry: 10786ec7c; end: 10786ecaf;  */

bool FUN_10786ec7c(undefined8 param_1,double param_2)

{
  double unaff_d8;
  
  func_0x000107259180();
  func_0x00010786ed68();
  return param_2 < unaff_d8;
}



/* Entry: 10786f614; end: 10786f6b7;  */

void FUN_10786f614(undefined8 param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  func_0x00010787145c();
  if (*(short *)((long)param_2 + 0x16) != 4) {
    func_0x000107871318();
    func_0x0001078712e0();
    func_0x000107871284();
    func_0x00010787143c();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10786f698);
    (*pcVar1)();
  }
  func_0x00010740ed44(param_1,*param_2);
  uVar2 = *(undefined8 *)(param_2 + 2);
  func_0x00010787158c(*param_2);
  while (param_2 != (undefined4 *)0x0) {
    func_0x00010786ee68(uVar2);
    func_0x000107871568();
    func_0x000104c31a04();
    func_0x0001078714d8();
  }
  return;
}



/* Entry: 107870244; end: 1078702c3;  */

/* WARNING: Possible PIC construction at 0x000107870290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107870404: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x000107870408) */
/* WARNING: Removing unreachable block (ram,0x000107870480) */
/* WARNING: Removing unreachable block (ram,0x0001078705c4) */
/* WARNING: Removing unreachable block (ram,0x0001078705d8) */
/* WARNING: Removing unreachable block (ram,0x0001078705f4) */
/* WARNING: Removing unreachable block (ram,0x0001078705d0) */
/* WARNING: Removing unreachable block (ram,0x0001078704d0) */
/* WARNING: Removing unreachable block (ram,0x0001078704e0) */
/* WARNING: Removing unreachable block (ram,0x000107870514) */
/* WARNING: Removing unreachable block (ram,0x0001078704f8) */
/* WARNING: Removing unreachable block (ram,0x000107870524) */
/* WARNING: Removing unreachable block (ram,0x000107870544) */
/* WARNING: Removing unreachable block (ram,0x00010787052c) */
/* WARNING: Removing unreachable block (ram,0x000107870554) */
/* WARNING: Removing unreachable block (ram,0x000107870574) */
/* WARNING: Removing unreachable block (ram,0x00010787055c) */
/* WARNING: Removing unreachable block (ram,0x000107870580) */
/* WARNING: Removing unreachable block (ram,0x000107870594) */
/* WARNING: Removing unreachable block (ram,0x000107870588) */
/* WARNING: Removing unreachable block (ram,0x000107870564) */
/* WARNING: Removing unreachable block (ram,0x000107870534) */
/* WARNING: Removing unreachable block (ram,0x000107870500) */
/* WARNING: Removing unreachable block (ram,0x000107870294) */
/* WARNING: Removing unreachable block (ram,0x0001078702b8) */
/* WARNING: Removing unreachable block (ram,0x0001078702a4) */
/* WARNING: Removing unreachable block (ram,0x000107870590) */
/* WARNING: Removing unreachable block (ram,0x00010787059c) */
/* WARNING: Removing unreachable block (ram,0x0001078702c4) */
/* WARNING: Removing unreachable block (ram,0x000107870300) */
/* WARNING: Removing unreachable block (ram,0x0001078702f4) */

int * FUN_107870244(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar4;
  undefined1 in_ZR;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined8 extraout_x8;
  undefined8 *puVar9;
  int *extraout_x8_00;
  int *unaff_x19;
  int *unaff_x20;
  int *unaff_x21;
  int *unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar10;
  code *unaff_x30;
  undefined *puVar11;
  undefined1 *puVar3;
  
  do {
    *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(int **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar10 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001078712ac();
    *(undefined8 *)((long)register0x00000008 + -0x28) = extraout_x8;
    iVar1 = param_3[2];
    *(undefined8 *)((long)register0x00000008 + -0x38) = *(undefined8 *)param_3;
    *(undefined8 *)((long)register0x00000008 + -0x30) = 0;
    *(undefined2 *)((long)register0x00000008 + -0x2a) = 0x405;
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
    *(int *)((long)register0x00000008 + -0x40) = iVar1;
    *(undefined8 *)((long)register0x00000008 + -0x50) = *(undefined8 *)param_2;
    *(int *)((long)register0x00000008 + -0x48) = param_2[2];
    param_3 = (int *)((long)register0x00000008 + -0x40);
    puVar11 = (undefined *)0x107870294;
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x50);
    while( true ) {
      puVar3 = puVar4 + -0x40;
      puVar2 = puVar4 + -0x40;
      param_2 = (int *)(puVar4 + -0x40);
      *(int **)(puVar4 + -0x20) = unaff_x20;
      *(int **)(puVar4 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar4 + -0x10) = puVar10;
      *(undefined **)(puVar4 + -8) = puVar11;
      puVar10 = puVar4 + -0x10;
      func_0x0001078712ac();
      func_0x000107871404();
      func_0x000107870de8();
      func_0x0001078712ec();
      func_0x000107871270(*(undefined8 *)(puVar4 + -0x28));
      if ((bool)in_ZR) {
        return unaff_x19;
      }
      ___stack_chk_fail();
      func_0x0001078712ec();
      puVar11 = &UNK_10787075c;
      func_0x00010787135c();
      piVar5 = param_1 + 2;
      piVar8 = extraout_x8_00;
      if (*param_1 == 2) goto code_r0x000107870168;
      piVar6 = extraout_x8_00;
      if (*param_1 == 1) goto code_r0x00010787030c;
      puVar3 = puVar4 + -0xb0;
      *(int **)(puVar4 + -0x70) = unaff_x22;
      *(int **)(puVar4 + -0x68) = unaff_x21;
      *(int **)(puVar4 + -0x60) = unaff_x20;
      *(int **)(puVar4 + -0x58) = unaff_x19;
      *(undefined1 **)(puVar4 + -0x50) = puVar10;
      *(undefined **)(puVar4 + -0x48) = &UNK_10787075c;
      puVar10 = puVar4 + -0x50;
      func_0x000107871298();
      extraout_x8_00[2] = 0;
      extraout_x8_00[3] = 0;
      extraout_x8_00[4] = 0;
      extraout_x8_00[5] = 0;
      extraout_x8_00[0] = 0;
      extraout_x8_00[1] = 0;
      func_0x000107871364();
      *(undefined4 *)(puVar4 + -0x88) = 4;
      *(undefined **)(puVar4 + -0xa8) = &UNK_10f4305cd;
      *(undefined4 *)(puVar4 + -0xa0) = 0x11;
      func_0x0001078713a8();
      *(undefined8 *)(puVar4 + -0x88) = 0;
      *(undefined8 *)(puVar4 + -0x80) = 0;
      *(undefined8 *)(puVar4 + -0x90) = 0;
      *(undefined2 *)(puVar4 + -0x7a) = 4;
      puVar9 = *(undefined8 **)piVar5;
      piVar5 = (int *)*puVar9;
      unaff_x22 = (int *)puVar9[1];
      in_ZR = piVar5 == unaff_x22;
      unaff_x19 = extraout_x8_00;
      unaff_x21 = piVar5;
      if (!(bool)in_ZR) break;
      *(undefined **)(puVar4 + -0xa8) = &UNK_10f4305df;
      *(undefined4 *)(puVar4 + -0xa0) = 8;
      param_3 = (int *)(puVar4 + -0x90);
      puVar11 = &UNK_1078706cc;
      puVar4 = puVar4 + -0xb0;
      param_1 = extraout_x8_00;
      unaff_x20 = param_2;
    }
    piVar6 = (int *)(puVar4 + -0xa8);
    puVar11 = &UNK_107870684;
    unaff_x20 = param_2;
code_r0x00010787030c:
    puVar2 = puVar3 + -0x70;
    *(int **)(puVar3 + -0x30) = unaff_x22;
    *(int **)(puVar3 + -0x28) = unaff_x21;
    *(int **)(puVar3 + -0x20) = unaff_x20;
    *(int **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar10;
    *(undefined **)(puVar3 + -8) = puVar11;
    puVar10 = puVar3 + -0x10;
    func_0x000107871298();
    piVar6[2] = 0;
    piVar6[3] = 0;
    piVar6[4] = 0;
    piVar6[5] = 0;
    piVar6[0] = 0;
    piVar6[1] = 0;
    func_0x000107871364();
    *(undefined4 *)(puVar3 + -0x48) = 4;
    *(undefined **)(puVar3 + -0x60) = &DAT_10f35070a;
    *(undefined4 *)(puVar3 + -0x58) = 7;
    param_3 = (int *)(puVar3 + -0x60);
    func_0x0001078713a8();
    iVar1 = piVar5[0xc];
    if (iVar1 != 4) {
      *(int **)(puVar3 + -0x68) = param_2;
      *(char **)(puVar3 + -0x60) = "id";
      *(undefined4 *)(puVar3 + -0x58) = 2;
      if (iVar1 == 3) {
        func_0x000107871308();
        func_0x0001078707c8();
      }
      else if (iVar1 == 2) {
        func_0x000107871308();
        func_0x0001078707ec();
      }
      else if (iVar1 == 1) {
        func_0x000107871308(*(undefined8 *)(piVar5 + 0xe));
        func_0x000107870810();
      }
      else {
        param_3 = piVar5 + 0xe;
        func_0x000107870840(puVar3 + -0x50,puVar3 + -0x68);
      }
      func_0x0001078712cc();
      func_0x000107871354();
    }
    *(undefined **)(puVar3 + -0x60) = &DAT_10f3005c3;
    *(undefined4 *)(puVar3 + -0x58) = 8;
    piVar8 = (int *)(puVar3 + -0x50);
    puVar11 = &UNK_107870408;
    unaff_x19 = piVar6;
    unaff_x20 = param_2;
    unaff_x21 = piVar5;
code_r0x000107870168:
    register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x70);
    *(int **)(puVar2 + -0x30) = unaff_x22;
    *(int **)(puVar2 + -0x28) = unaff_x21;
    *(int **)(puVar2 + -0x20) = unaff_x20;
    *(int **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar10;
    *(undefined **)(puVar2 + -8) = puVar11;
    unaff_x29 = puVar2 + -0x10;
    func_0x000107871298();
    iVar1 = *piVar5;
    piVar8[2] = 0;
    piVar8[3] = 0;
    piVar8[4] = 0;
    piVar8[5] = 0;
    piVar8[0] = 0;
    piVar8[1] = 0;
    in_ZR = iVar1 == 7;
    unaff_x20 = piVar5;
    if (!(bool)in_ZR) {
      piVar6 = piVar5;
      func_0x000107871364();
      *(undefined4 *)(puVar2 + -0x48) = 4;
      func_0x000107870ecc();
      *(int **)(puVar2 + -0x60) = piVar6;
      _strlen();
      *(int *)(puVar2 + -0x58) = (int)piVar6;
      param_3 = (int *)(puVar2 + -0x60);
      func_0x0001078713a8();
      in_ZR = *piVar5 == 0;
      puVar11 = &UNK_10f4303a6;
      if (!(bool)in_ZR) {
        puVar11 = &UNK_10f43041c;
      }
      *(int **)(puVar2 + -0x68) = param_2;
      *(undefined **)(puVar2 + -0x60) = puVar11;
      uVar7 = 10;
      if (!(bool)in_ZR) {
        uVar7 = 0xb;
      }
      *(undefined4 *)(puVar2 + -0x58) = uVar7;
      param_2 = (int *)(puVar2 + -0x68);
      func_0x000107870f70(puVar2 + -0x50);
      func_0x0001078712cc();
      func_0x000107871354();
      unaff_x21 = piVar5;
    }
    func_0x000107871270(*(undefined8 *)(puVar2 + -0x38));
    if ((bool)in_ZR) {
      return unaff_x20;
    }
    ___stack_chk_fail();
    param_1 = unaff_x20;
    func_0x000107871354();
    func_0x000107871384();
    unaff_x30 = FUN_107870244;
    func_0x000107871338();
    unaff_x19 = piVar8;
  } while( true );
}



/* Entry: 107870794; end: 10787080f;  */

void FUN_107870794(undefined8 *param_1,int param_2)

{
  undefined2 uVar1;
  
  func_0x000107326ddc();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar1 = 9;
  if (param_2 != 0) {
    uVar1 = 10;
  }
  *(undefined2 *)((long)param_1 + 0x16) = uVar1;
  return;
}



/* Entry: 107870cac; end: 107870de7;  */

long * FUN_107870cac(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107269a64();
  }
  lVar1 = param_4 + param_3 * 0x20;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x20;
  return param_1;
}



/* Entry: 107871018; end: 1078710bf;  */

/* WARNING: Possible PIC construction at 0x000107871050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107870290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107870404: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x000107870408) */
/* WARNING: Removing unreachable block (ram,0x000107870480) */
/* WARNING: Removing unreachable block (ram,0x0001078705c4) */
/* WARNING: Removing unreachable block (ram,0x0001078705d8) */
/* WARNING: Removing unreachable block (ram,0x0001078705f4) */
/* WARNING: Removing unreachable block (ram,0x0001078705d0) */
/* WARNING: Removing unreachable block (ram,0x0001078704d0) */
/* WARNING: Removing unreachable block (ram,0x0001078704e0) */
/* WARNING: Removing unreachable block (ram,0x000107870514) */
/* WARNING: Removing unreachable block (ram,0x0001078704f8) */
/* WARNING: Removing unreachable block (ram,0x000107870524) */
/* WARNING: Removing unreachable block (ram,0x000107870544) */
/* WARNING: Removing unreachable block (ram,0x00010787052c) */
/* WARNING: Removing unreachable block (ram,0x000107870554) */
/* WARNING: Removing unreachable block (ram,0x000107870574) */
/* WARNING: Removing unreachable block (ram,0x00010787055c) */
/* WARNING: Removing unreachable block (ram,0x000107870580) */
/* WARNING: Removing unreachable block (ram,0x000107870594) */
/* WARNING: Removing unreachable block (ram,0x000107870588) */
/* WARNING: Removing unreachable block (ram,0x000107870564) */
/* WARNING: Removing unreachable block (ram,0x000107870534) */
/* WARNING: Removing unreachable block (ram,0x000107870500) */
/* WARNING: Removing unreachable block (ram,0x000107870294) */
/* WARNING: Removing unreachable block (ram,0x0001078702b8) */
/* WARNING: Removing unreachable block (ram,0x0001078702a4) */
/* WARNING: Removing unreachable block (ram,0x000107871054) */
/* WARNING: Removing unreachable block (ram,0x000107871068) */
/* WARNING: Removing unreachable block (ram,0x000107870590) */
/* WARNING: Removing unreachable block (ram,0x00010787059c) */
/* WARNING: Removing unreachable block (ram,0x0001078702c4) */
/* WARNING: Removing unreachable block (ram,0x000107870300) */
/* WARNING: Removing unreachable block (ram,0x0001078702f4) */

int * FUN_107871018(int *param_1,undefined8 param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar4;
  undefined1 uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined8 extraout_x8;
  int *piVar12;
  undefined8 *puVar13;
  int *extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  int *extraout_x8_03;
  undefined8 extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  int *extraout_x9;
  int *unaff_x21;
  int *unaff_x22;
  undefined1 **ppuVar14;
  undefined *puVar15;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int *piStack_70;
  int *piStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  int aiStack_48 [2];
  int aiStack_40 [6];
  undefined8 uStack_28;
  undefined1 *puVar3;
  
  piVar8 = param_4;
  func_0x0001078712ac();
  piStack_70 = param_1;
  if (*param_3 == 5) {
    piVar8 = aiStack_48;
    puVar15 = (undefined *)0x107871054;
  }
  else {
    uVar5 = *(long *)PTR____stack_chk_guard_11034bdc0 == extraout_x8_01;
    if (!(bool)uVar5) {
      ___stack_chk_fail();
      piVar9 = param_3;
      func_0x000107871444();
      func_0x00010787135c();
      puVar2 = &uStack_90;
      piVar6 = (int *)&uStack_90;
      puStack_58 = &UNK_1078710c0;
      ppuVar14 = &puStack_60;
      piStack_68 = param_3;
      puStack_60 = &stack0xfffffffffffffff0;
      func_0x0001078712ac();
      uStack_88 = 0;
      uStack_80 = 0x216000000000000;
      uStack_90 = param_2;
      uStack_78 = extraout_x8_02;
      func_0x000107870d3c();
      func_0x0001078712ec();
      func_0x000107871270(uStack_78);
      if ((bool)uVar5) {
        return param_3;
      }
      ___stack_chk_fail();
      func_0x0001078712ec();
      puVar15 = &UNK_10787111c;
      func_0x00010787135c();
      piVar9 = *(int **)piVar9;
      piVar11 = extraout_x8_03;
code_r0x000107870168:
      do {
        *(int **)((long)puVar2 + -0x30) = unaff_x22;
        *(int **)((long)puVar2 + -0x28) = unaff_x21;
        *(int **)((long)puVar2 + -0x20) = param_1;
        *(int **)((long)puVar2 + -0x18) = param_3;
        *(undefined1 ***)((long)puVar2 + -0x10) = ppuVar14;
        *(undefined **)((long)puVar2 + -8) = puVar15;
        func_0x000107871298();
        iVar1 = *piVar6;
        piVar11[2] = 0;
        piVar11[3] = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
        piVar11[0] = 0;
        piVar11[1] = 0;
        uVar5 = iVar1 == 7;
        param_1 = piVar6;
        if (!(bool)uVar5) {
          piVar8 = piVar6;
          func_0x000107871364();
          *(undefined4 *)((long)puVar2 + -0x48) = 4;
          func_0x000107870ecc();
          *(int **)((long)puVar2 + -0x60) = piVar8;
          _strlen();
          *(int *)((long)puVar2 + -0x58) = (int)piVar8;
          piVar8 = (int *)((long)puVar2 + -0x60);
          func_0x0001078713a8();
          uVar5 = *piVar6 == 0;
          puVar15 = &UNK_10f4303a6;
          if (!(bool)uVar5) {
            puVar15 = &UNK_10f43041c;
          }
          *(int **)((long)puVar2 + -0x68) = piVar9;
          *(undefined **)((long)puVar2 + -0x60) = puVar15;
          uVar10 = 10;
          if (!(bool)uVar5) {
            uVar10 = 0xb;
          }
          *(undefined4 *)((long)puVar2 + -0x58) = uVar10;
          piVar9 = (int *)((long)puVar2 + -0x68);
          func_0x000107870f70((undefined1 *)((long)puVar2 + -0x50));
          func_0x0001078712cc();
          func_0x000107871354();
          unaff_x21 = piVar6;
        }
        func_0x000107871270(*(undefined8 *)((long)puVar2 + -0x38));
        if ((bool)uVar5) {
          return param_1;
        }
        ___stack_chk_fail();
        piVar7 = param_1;
        func_0x000107871354();
        func_0x000107871384();
        func_0x000107871338();
        *(int **)((long)puVar2 + -0x90) = param_1;
        *(int **)((long)puVar2 + -0x88) = piVar11;
        *(undefined1 **)((long)puVar2 + -0x80) = (undefined1 *)((long)puVar2 + -0x10);
        *(code **)((long)puVar2 + -0x78) = FUN_107870244;
        ppuVar14 = (undefined1 **)((long)puVar2 + -0x80);
        func_0x0001078712ac();
        *(undefined8 *)((long)puVar2 + -0x98) = extraout_x8;
        iVar1 = piVar8[2];
        *(undefined8 *)((long)puVar2 + -0xa8) = *(undefined8 *)piVar8;
        *(undefined8 *)((long)puVar2 + -0xa0) = 0;
        *(undefined2 *)((long)puVar2 + -0x9a) = 0x405;
        *(undefined8 *)((long)puVar2 + -0xb0) = 0;
        *(int *)((long)puVar2 + -0xb0) = iVar1;
        *(undefined8 *)((long)puVar2 + -0xc0) = *(undefined8 *)piVar9;
        *(int *)((long)puVar2 + -0xb8) = piVar9[2];
        piVar8 = (int *)((long)puVar2 + -0xb0);
        puVar15 = (undefined *)0x107870294;
        puVar4 = (undefined1 *)((long)puVar2 + -0xc0);
        param_3 = piVar11;
        while( true ) {
          puVar3 = puVar4 + -0x40;
          puVar2 = (undefined8 *)(puVar4 + -0x40);
          piVar9 = (int *)(puVar4 + -0x40);
          *(int **)(puVar4 + -0x20) = param_1;
          *(int **)(puVar4 + -0x18) = param_3;
          *(undefined1 ***)(puVar4 + -0x10) = ppuVar14;
          *(undefined **)(puVar4 + -8) = puVar15;
          ppuVar14 = (undefined1 **)(puVar4 + -0x10);
          func_0x0001078712ac();
          func_0x000107871404();
          func_0x000107870de8();
          func_0x0001078712ec();
          func_0x000107871270(*(undefined8 *)(puVar4 + -0x28));
          if ((bool)uVar5) {
            return param_3;
          }
          ___stack_chk_fail();
          func_0x0001078712ec();
          puVar15 = &UNK_10787075c;
          func_0x00010787135c();
          piVar6 = piVar7 + 2;
          piVar11 = extraout_x8_00;
          if (*piVar7 == 2) goto code_r0x000107870168;
          piVar12 = extraout_x8_00;
          if (*piVar7 == 1) goto code_r0x00010787030c;
          puVar3 = puVar4 + -0xb0;
          *(int **)(puVar4 + -0x70) = unaff_x22;
          *(int **)(puVar4 + -0x68) = unaff_x21;
          *(int **)(puVar4 + -0x60) = param_1;
          *(int **)(puVar4 + -0x58) = param_3;
          *(undefined1 ***)(puVar4 + -0x50) = ppuVar14;
          *(undefined **)(puVar4 + -0x48) = &UNK_10787075c;
          ppuVar14 = (undefined1 **)(puVar4 + -0x50);
          func_0x000107871298();
          extraout_x8_00[2] = 0;
          extraout_x8_00[3] = 0;
          extraout_x8_00[4] = 0;
          extraout_x8_00[5] = 0;
          extraout_x8_00[0] = 0;
          extraout_x8_00[1] = 0;
          func_0x000107871364();
          *(undefined4 *)(puVar4 + -0x88) = 4;
          *(undefined **)(puVar4 + -0xa8) = &UNK_10f4305cd;
          *(undefined4 *)(puVar4 + -0xa0) = 0x11;
          func_0x0001078713a8();
          *(undefined8 *)(puVar4 + -0x88) = 0;
          *(undefined8 *)(puVar4 + -0x80) = 0;
          *(undefined8 *)(puVar4 + -0x90) = 0;
          *(undefined2 *)(puVar4 + -0x7a) = 4;
          puVar13 = *(undefined8 **)piVar6;
          piVar6 = (int *)*puVar13;
          unaff_x22 = (int *)puVar13[1];
          uVar5 = piVar6 == unaff_x22;
          param_3 = extraout_x8_00;
          unaff_x21 = piVar6;
          if (!(bool)uVar5) break;
          *(undefined **)(puVar4 + -0xa8) = &UNK_10f4305df;
          *(undefined4 *)(puVar4 + -0xa0) = 8;
          piVar8 = (int *)(puVar4 + -0x90);
          puVar15 = &UNK_1078706cc;
          puVar4 = puVar4 + -0xb0;
          piVar7 = extraout_x8_00;
          param_1 = piVar9;
        }
        piVar12 = (int *)(puVar4 + -0xa8);
        puVar15 = &UNK_107870684;
        param_1 = piVar9;
code_r0x00010787030c:
        puVar2 = (undefined8 *)(puVar3 + -0x70);
        *(int **)(puVar3 + -0x30) = unaff_x22;
        *(int **)(puVar3 + -0x28) = unaff_x21;
        *(int **)(puVar3 + -0x20) = param_1;
        *(int **)(puVar3 + -0x18) = param_3;
        *(undefined1 ***)(puVar3 + -0x10) = ppuVar14;
        *(undefined **)(puVar3 + -8) = puVar15;
        ppuVar14 = (undefined1 **)(puVar3 + -0x10);
        func_0x000107871298();
        piVar12[2] = 0;
        piVar12[3] = 0;
        piVar12[4] = 0;
        piVar12[5] = 0;
        piVar12[0] = 0;
        piVar12[1] = 0;
        func_0x000107871364();
        *(undefined4 *)(puVar3 + -0x48) = 4;
        *(undefined **)(puVar3 + -0x60) = &DAT_10f35070a;
        *(undefined4 *)(puVar3 + -0x58) = 7;
        piVar8 = (int *)(puVar3 + -0x60);
        func_0x0001078713a8();
        iVar1 = piVar6[0xc];
        if (iVar1 != 4) {
          *(int **)(puVar3 + -0x68) = piVar9;
          *(char **)(puVar3 + -0x60) = "id";
          *(undefined4 *)(puVar3 + -0x58) = 2;
          if (iVar1 == 3) {
            func_0x000107871308();
            func_0x0001078707c8();
          }
          else if (iVar1 == 2) {
            func_0x000107871308();
            func_0x0001078707ec();
          }
          else if (iVar1 == 1) {
            func_0x000107871308(*(undefined8 *)(piVar6 + 0xe));
            func_0x000107870810();
          }
          else {
            piVar8 = piVar6 + 0xe;
            func_0x000107870840(puVar3 + -0x50,puVar3 + -0x68);
          }
          func_0x0001078712cc();
          func_0x000107871354();
        }
        *(undefined **)(puVar3 + -0x60) = &DAT_10f3005c3;
        *(undefined4 *)(puVar3 + -0x58) = 8;
        piVar11 = (int *)(puVar3 + -0x50);
        puVar15 = &UNK_107870408;
        param_3 = piVar12;
        param_1 = piVar9;
        unaff_x21 = piVar6;
      } while( true );
    }
    piVar8 = extraout_x9;
    func_0x0001078712ac();
    uVar5 = *piVar8 + -1 == 3;
    uStack_28 = extraout_x8_04;
    switch(*piVar8 + -1) {
    case 0:
      func_0x000107871580(1);
      param_4 = (int *)(extraout_x8_05 + 8);
      func_0x00010726982c();
      func_0x0001078712bc();
      break;
    case 1:
      func_0x000107871580(2);
      param_4 = (int *)(extraout_x8_08 + 8);
      func_0x0001072696bc();
      func_0x0001078712bc();
      break;
    case 2:
      func_0x000107871580(3);
      param_4 = (int *)(extraout_x8_06 + 8);
      func_0x000107269434();
      func_0x0001078712bc();
      break;
    case 3:
      func_0x000107871580(4);
      param_4 = (int *)(extraout_x8_07 + 8);
      func_0x000107269534();
      func_0x0001078712bc();
      break;
    default:
      aiStack_48[0] = 0;
      param_4 = aiStack_40;
      func_0x00010726998c(param_4,piVar8 + 2);
      func_0x0001078712bc();
    }
    func_0x000107871444();
    func_0x000107871270(uStack_28);
    if ((bool)uVar5) {
      return param_4;
    }
    ___stack_chk_fail();
    piVar8 = param_4;
    func_0x000107871444();
    puVar15 = &SUB_107871230;
    func_0x00010787135c();
  }
  puStack_60 = &stack0xfffffffffffffff0;
  *piVar8 = 5;
  piStack_68 = param_4;
  puStack_58 = puVar15;
  func_0x000107269434(piVar8 + 2);
  return piVar8;
}



/* Entry: 107871794; end: 107871847;  */

bool FUN_107871794(ulong param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_58;
  long lStack_50;
  
  lVar3 = *param_3;
  lVar1 = param_3[1];
  do {
    if (lVar3 == lVar1) {
LAB_107871818:
      return lVar3 != lVar1;
    }
    func_0x0001074b354c(&lStack_58,lVar3);
    lVar4 = 0;
    lVar5 = lStack_50 - lStack_58 >> 4;
    while (lVar5 = lVar5 + -1, lVar5 != 0) {
      uVar2 = param_1;
      func_0x000107871640(param_1,param_2,lStack_58 + lVar4,lStack_58 + lVar4 + 0x10);
      lVar4 = lVar4 + 0x10;
      if ((uVar2 & 1) != 0) {
        func_0x000107871cc0();
        goto LAB_107871818;
      }
    }
    func_0x000107871cc0();
    lVar3 = lVar3 + 0x18;
  } while( true );
}



/* Entry: 107871b04; end: 107871b6b;  */

uint FUN_107871b04(ulong param_1)

{
  uint unaff_w19;
  uint unaff_w21;
  uint uVar1;
  long unaff_x22;
  long unaff_x23;
  long unaff_x25;
  
  func_0x000107871cc8();
  for (; uVar1 = unaff_w21, unaff_x22 != unaff_x23; unaff_x22 = unaff_x22 + 0x18) {
    func_0x000107871c9c();
    for (; unaff_x25 != 0; unaff_x25 = unaff_x25 + -1) {
      func_0x000107871c14();
      func_0x000107871b6c();
      uVar1 = unaff_w19;
      if ((param_1 & 1) != 0) goto LAB_107871b60;
      func_0x000107871c14();
      func_0x000107871bbc();
      unaff_w21 = unaff_w21 ^ (uint)param_1;
    }
  }
LAB_107871b60:
  return uVar1 & 1;
}



/* Entry: 107872a4c; end: 107872a8f;  */

void FUN_107872a4c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x23df68;
  __Znwm();
  _bzero();
  FUN_107873068(uVar1);
  *param_1 = uVar1;
  return;
}



/* Entry: 107872d48; end: 107872d9f;  */

void FUN_107872d48(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1[2] != 0) {
    plVar1 = (long *)param_1[1];
    plVar2 = *(long **)(*param_1 + 8);
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      plVar1 = (long *)plVar1[1];
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 107872edc; end: 107872f0f;  */

undefined8 FUN_107872edc(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  
  if (param_2 >> 0x3c == 0) {
    func_0x0001078733c0();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  func_0x000107872da0();
  func_0x000107873348();
  func_0x000107873218();
  func_0x0001078731b0();
  return param_1;
}



/* Entry: 107873068; end: 1078730a7;  */

void FUN_107873068(undefined8 *param_1)

{
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
  return;
}



/* Entry: 1078733e8; end: 107873827;  */

undefined1  [16] FUN_1078733e8(byte *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  byte bVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  bool bVar6;
  bool bVar7;
  ulong **ppuVar8;
  undefined1 *puVar9;
  ulong **ppuVar10;
  ulong *puVar11;
  byte *pbVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 uStack_1c9;
  undefined *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined1 uStack_1b1;
  undefined1 *puStack_1b0;
  undefined *puStack_1a8;
  undefined1 **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined1 ***pppuStack_190;
  undefined1 uStack_182;
  undefined1 uStack_181;
  ulong *puStack_180;
  ulong *puStack_178;
  ulong *puStack_170;
  ulong *puStack_168;
  ulong *puStack_160;
  ulong *puStack_158;
  byte *pbStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  byte *pbStack_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  byte *pbStack_118;
  undefined8 auStack_110 [2];
  undefined2 uStack_100;
  undefined2 uStack_fe;
  undefined2 uStack_fc;
  undefined1 uStack_fa;
  undefined1 uStack_f9;
  undefined2 uStack_f7;
  undefined1 uStack_f5;
  undefined1 uStack_e8;
  undefined1 auStack_e7 [4];
  undefined1 auStack_e3 [2];
  undefined1 auStack_e1 [3];
  undefined1 uStack_de;
  undefined1 auStack_dd [5];
  undefined1 auStack_d8 [8];
  ulong *puStack_d0;
  byte *pbStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [64];
  undefined1 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  param_1[8] = 0;
  pbStack_c8 = param_1 + 0x10;
  *pbStack_c8 = 0;
  uVar2 = param_2[1];
  puVar11 = (ulong *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar11 = param_2;
  }
  puVar1 = (ulong *)((long)puVar11 + uVar2);
  uStack_181 = 0x3d;
  uStack_148 = 0;
  puStack_140 = &UNK_10f4306df;
  uStack_182 = 0x22;
  uStack_1b1 = 0x5c;
  puStack_1b0 = &uStack_1b1;
  puStack_1a8 = &UNK_10deaf980;
  uStack_1c9 = 0x22;
  puStack_1c0 = &uStack_1c9;
  puStack_1c8 = &UNK_10deaf980;
  ppuStack_1a0 = &puStack_1b0;
  ppuStack_198 = &puStack_1c8;
  pppuStack_190 = &ppuStack_1a0;
  pbStack_130 = &UNK_10f4306df;
  uStack_128 = 0x3d;
  auStack_110[0] = 0;
  uStack_100 = 0x5c22;
  uStack_fc = 0x2200;
  uStack_f9 = 0x22;
  uStack_f5 = 0x2c;
  uStack_f7 = 0x2200;
  puStack_d0 = (ulong *)&UNK_10f4306cf;
  uStack_c0 = 1;
  puStack_180 = puVar11;
  puStack_178 = puVar1;
  pbStack_150 = param_1;
  pbStack_118 = param_1;
  func_0x000107873998(auStack_b8,&pbStack_130);
  func_0x000107873b74();
  func_0x000107873960(&puStack_d0,&pbStack_130);
  uStack_78 = 0x2c;
  func_0x000107873b74();
  pbVar5 = pbStack_130;
  auStack_d8[0] = 0x2c;
  puStack_170 = puVar11;
LAB_10787352c:
  func_0x000107873b54(&puStack_170);
  puVar14 = puStack_170;
  puVar11 = puStack_170;
  pbVar12 = pbVar5;
  puVar15 = puStack_170;
  while( true ) {
    if (*pbVar12 == 0) break;
    if ((puVar15 == puVar1) || (*pbVar12 != (byte)*puVar15)) {
      puStack_158 = puStack_170;
      func_0x000107873b54(&puStack_158);
      pbVar12 = pbStack_118;
      puVar11 = puStack_158;
      puVar13 = puStack_158;
      goto LAB_107873580;
    }
    puVar11 = (ulong *)((long)puVar11 + 1);
    pbVar12 = pbVar12 + 1;
    puVar15 = (ulong *)((long)puVar15 + 1);
  }
  *(undefined1 *)CONCAT71(uStack_127,uStack_128) = uStack_120;
  goto LAB_10787378c;
LAB_107873580:
  puVar15 = puVar1;
  if (*pbVar12 == 0) goto LAB_1078735b8;
  if ((puVar13 == puVar1) || (*pbVar12 != (byte)*puVar13)) goto LAB_1078736b8;
  puVar11 = (ulong *)((long)puVar11 + 1);
  pbVar12 = pbVar12 + 1;
  puVar13 = (ulong *)((long)puVar13 + 1);
  goto LAB_107873580;
LAB_1078735b8:
  ppuVar8 = &puStack_158;
  puStack_158 = puVar11;
  func_0x000107873a80(ppuVar8,&puStack_178,auStack_110);
  if (((ulong)ppuVar8 & 1) == 0) {
    ppuVar8 = &puStack_158;
    func_0x000107873b54();
    if (puStack_158 != puVar1) {
      lVar16 = 0;
      for (puVar11 = puStack_158; puVar11 != puVar1; puVar11 = (ulong *)((long)puVar11 + 1)) {
        bVar3 = (byte)*puVar11;
        if (bVar3 != 0x30) {
          if (bVar3 - 0x30 < 10) {
            lVar16 = 0;
            puStack_d0 = (ulong *)((ulong)bVar3 - 0x30);
            goto LAB_107873628;
          }
          if (lVar16 == 0) goto LAB_1078736b8;
          puVar13 = (ulong *)0x0;
          puVar15 = puVar11;
          goto LAB_1078737cc;
        }
        lVar16 = lVar16 + 1;
      }
      puVar13 = (ulong *)0x0;
LAB_1078737cc:
      puVar4 = (undefined8 *)
               CONCAT17(uStack_f9,
                        CONCAT16(uStack_fa,CONCAT24(uStack_fc,CONCAT22(uStack_fe,uStack_100))));
      *puVar4 = puVar13;
      *(undefined1 *)(puVar4 + 1) = 1;
      puVar11 = puVar15;
LAB_10787378c:
      puStack_170 = puVar11;
      puVar9 = auStack_d8;
      ppuVar8 = &puStack_170;
      func_0x000107873b5c(puVar9,ppuVar8);
      if (((ulong)puVar9 & 1) == 0) {
        ppuVar10 = &puStack_180;
        puStack_180 = puVar15;
        func_0x000107873b54();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
          auVar17._8_8_ = ppuVar8;
          auVar17._0_8_ = ppuVar10;
          return auVar17;
        }
        ___stack_chk_fail();
        if (*(char *)(ppuVar10 + 1) == '\x01') {
          ppuVar8 = ppuVar10;
          func_0x00010789a00c();
          auVar18._8_8_ = 1;
          auVar18._0_8_ = (long)*ppuVar10 + (long)ppuVar8;
          return auVar18;
        }
        return ZEXT816(0);
      }
      goto LAB_10787352c;
    }
  }
LAB_1078736b8:
  puVar15 = puVar14;
  ppuVar8 = &puStack_160;
  puStack_168 = puVar15;
  puStack_160 = puVar15;
  func_0x000107873a80(ppuVar8,&puStack_178,&uStack_e8);
  puVar11 = puStack_160;
  if (((ulong)ppuVar8 & 1) == 0) goto LAB_1078736d8;
  goto LAB_107873748;
  while( true ) {
    puVar13 = (ulong *)((long)puVar11 + lVar16 + 2);
    bVar6 = puVar1 <= puVar13;
    bVar7 = puVar13 == puVar1;
    puVar13 = puStack_d0;
    if (bVar7) goto LAB_1078737cc;
    func_0x000107873b64();
    if (bVar6 && !bVar7) {
      puVar13 = puStack_d0;
      puVar15 = (ulong *)((long)puVar11 + lVar16 + 2);
      goto LAB_1078737cc;
    }
    func_0x000107873b80();
    if ((int)ppuVar8 == 0) break;
    puVar13 = (ulong *)((long)puVar11 + lVar16 + 3);
    bVar6 = puVar1 <= puVar13;
    bVar7 = puVar13 == puVar1;
    puVar13 = puStack_d0;
    if (bVar7) goto LAB_1078737cc;
    func_0x000107873b64();
    if (bVar6 && !bVar7) {
      puVar13 = puStack_d0;
      puVar15 = (ulong *)((long)puVar11 + lVar16 + 3);
      goto LAB_1078737cc;
    }
    FUN_107873aa8();
    lVar16 = lVar16 + 3;
    if (((ulong)ppuVar8 & 1) == 0) break;
LAB_107873628:
    puVar13 = (ulong *)((long)puVar11 + lVar16 + 1);
    bVar6 = puVar1 <= puVar13;
    bVar7 = puVar13 == puVar1;
    puVar13 = puStack_d0;
    if (bVar7) goto LAB_1078737cc;
    func_0x000107873b64();
    if (bVar6 && !bVar7) {
      puVar13 = puStack_d0;
      puVar15 = (ulong *)((long)puVar11 + lVar16 + 1);
      goto LAB_1078737cc;
    }
    func_0x000107873b80();
    if ((int)ppuVar8 == 0) break;
  }
  goto LAB_1078736b8;
LAB_1078736d8:
  do {
    puStack_158 = puVar11;
    puVar14 = puStack_158;
    ppuVar8 = &puStack_d0;
    puStack_d0 = puStack_158;
    func_0x000107873a80(ppuVar8,&puStack_178,auStack_e7);
    if (((ulong)ppuVar8 & 1) == 0) {
      ppuVar8 = &puStack_d0;
      func_0x000107873b10(ppuVar8,&puStack_178);
      puVar11 = puStack_d0;
      if ((int)ppuVar8 != 0) goto LAB_1078736d8;
    }
    puVar9 = auStack_e3;
    func_0x000107873b5c(puVar9,&puStack_158);
    if (((ulong)puVar9 & 1) != 0) break;
    ppuVar8 = &puStack_158;
    func_0x000107873b10(ppuVar8,&puStack_178);
    puVar14 = puStack_158;
    puVar11 = puStack_158;
  } while (((ulong)ppuVar8 & 1) != 0);
  ppuVar8 = &puStack_160;
  puStack_160 = puVar14;
  func_0x000107873a80(ppuVar8,&puStack_178,auStack_e1);
  puVar14 = puStack_160;
  if (((ulong)ppuVar8 & 1) != 0) {
LAB_107873748:
    puVar9 = auStack_dd;
    func_0x000107873b5c(puVar9,&puStack_168);
    puVar14 = puStack_168;
    puVar11 = puVar15;
    if (((ulong)puVar9 & 1) == 0) {
      puVar9 = &uStack_de;
      func_0x000107873b5c(puVar9,&puStack_168);
      puVar15 = puVar14;
      puVar11 = puVar14;
      if ((((ulong)puVar9 & 1) != 0) ||
         (func_0x000107873b54(&puStack_168), puVar15 = puVar1, puVar11 = puVar1,
         puStack_168 == puVar1)) goto LAB_10787378c;
      puVar14 = (ulong *)((long)puStack_168 + 1);
      goto LAB_1078736b8;
    }
    goto LAB_10787378c;
  }
  goto LAB_1078736b8;
}



/* Entry: 107873aa8; end: 107873b0f;  */

undefined8 FUN_107873aa8(int param_1,ulong param_2,ulong *param_3)

{
  long lVar1;
  ulong uVar2;
  
  if (param_2 < 0x12) {
    lVar1 = *param_3 * 10 + (long)param_1;
  }
  else {
    if ((0x1999999999999999 < *param_3) ||
       (uVar2 = *param_3 * 10,
       0x2fU - (long)param_1 <= uVar2 && uVar2 - (0x2fU - (long)param_1) != 0)) {
      return 0;
    }
    lVar1 = (long)param_1 + uVar2;
  }
  *param_3 = lVar1 - 0x30;
  return 1;
}



/* Entry: 107873f80; end: 107874227;  */

uint FUN_107873f80(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)param_1;
  if ((uVar2 & 0xfffe) != 0x2ea) {
    if (uVar2 >> 8 < 0x11) {
      uVar3 = 0;
      goto LAB_107873fa4;
    }
    if (0x2f < uVar2 - 0x3100) {
      uVar3 = 1;
      if (((uVar2 & 0xffe0) == 0x31a0) || (0xffe6 < (uVar2 + 0x1b7 & 0xffff))) goto LAB_107873fa4;
      uVar1 = uVar2 & 0xff00;
      uVar3 = 1;
      if (((uVar2 - 0x31c0 < 0x30 || (uVar2 & 0xff80) == 0x2e80) || uVar1 == 0x3300) ||
         ((uVar2 + 0x700 & 0xffff) < 0x200)) goto LAB_107873fa4;
      if ((uVar2 & 0xffc0) == 0x3000 && 9 < (uVar2 - 0x3008 & 0xffff)) {
        if ((uVar2 != 0x3030) && ((uVar2 - 0x3020 & 0xffff) < 0xfff4)) goto LAB_107873f8c;
      }
      else {
        uVar3 = 1;
        if ((uVar1 == 0x3200) ||
           (((uVar2 - 0x4e00 >> 9 & 0x7f) < 0x29 || ((uVar2 - 0x3400 >> 6 & 0x3ff) < 0x67))))
        goto LAB_107873fa4;
      }
      uVar3 = 1;
      if (((uVar2 - 0x3040 < 0x60 || (uVar2 + 0x5400 >> 10 & 0x3f) < 0xb) ||
           (uVar2 & 0xffe0) == 0xa960) || ((uVar2 - 0x3130 & 0xffff) < 0x60 || uVar1 == 0x1100))
      goto LAB_107873fa4;
      uVar1 = uVar2 & 0xfff0;
      if ((uVar1 != 0x2ff0 && uVar1 != 0x3190) && (0xdf < uVar2 - 0x2f00)) {
        uVar3 = 1;
        if ((uVar1 == 0x31f0) || (uVar2 != 0x30fc && uVar2 - 0x30a0 < 0x60)) goto LAB_107873fa4;
        if ((uVar2 + 0x100 & 0xffff) < 0xf0) {
          if ((((uVar2 & 0xff) < 0x40) && ((1L << (param_1 & 0x3f) & 0xa80000007c002300U) != 0)) ||
             (((uVar2 & 0xfff8) == 0xffe8 || uVar2 == 0xffe3 || (0xff7a < (uVar2 + 0x20 & 0xffff))))
             ) {
LAB_1078741f8:
            uVar3 = (uint)((uVar2 + 0x5b70 & 0xffc0) == 0);
            goto LAB_107873fa4;
          }
        }
        else {
          if ((uVar2 + 400 >> 5 & 0x7ff) < 0x7ff) {
            uVar3 = 1;
            if (((((uVar2 + 0x6000 & 0xffff) < 0x490 || (uVar2 & 0xffc0) == 0x4dc0) ||
                  uVar1 == 0xfe10) || ((uVar2 - 0x1400 & 0xffff) < 0x280)) ||
               ((uVar2 - 0x18b0 & 0xffff) < 0x50)) goto LAB_107873fa4;
            goto LAB_1078741f8;
          }
          if ((uVar2 + 0x1a8 & 0xffff) < 0xf) {
            uVar3 = 0x780 >> (ulong)(uVar2 + 0x1a8 & 0x1f);
            goto LAB_107873fa4;
          }
        }
      }
    }
  }
LAB_107873f8c:
  uVar3 = 1;
LAB_107873fa4:
  return uVar3 & 1;
}



/* Entry: 107874750; end: 10787479f;  */

undefined1  [16] FUN_107874750(long param_1,undefined2 *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined2 uStack_22;
  
  uStack_22 = *param_2;
  func_0x0001078747a0(param_1,param_1 + 0x14c,&uStack_22);
  lVar1 = param_1;
  func_0x0001078747dc();
  auVar2._8_8_ = lVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 107874bd8; end: 107874bff;  */

long FUN_107874bd8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107874d9c; end: 107874dbf;  */

void FUN_107874d9c(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x000107874dc0(param_1,&uStack_11);
  return;
}



/* Entry: 1078751e0; end: 10787526b;  */

uint FUN_1078751e0(undefined8 *param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  uint uVar4;
  short *psVar5;
  short *psVar6;
  
  uVar4 = 0;
  sVar1 = param_2[1];
  psVar3 = (short *)*param_1;
  psVar6 = (short *)param_1[1] + -2;
  while (psVar5 = psVar3, psVar5 != (short *)param_1[1]) {
    sVar2 = psVar5[1];
    if ((sVar1 < sVar2 == (int)psVar6[1] <= (int)sVar1) &&
       ((float)(int)*param_2 <
        ((float)((int)sVar1 - (int)sVar2) * (float)((int)*psVar6 - (int)*psVar5)) /
        (float)((int)psVar6[1] - (int)sVar2) + (float)(int)*psVar5)) {
      uVar4 = uVar4 ^ 1;
    }
    psVar6 = psVar5;
    psVar3 = psVar5 + 2;
  }
  return uVar4;
}



/* Entry: 107875988; end: 107875a17;  */

uint FUN_107875988(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1;
  func_0x000107875b2c(param_1,param_3,param_4);
  uVar3 = param_2;
  func_0x000107875b2c(param_2,param_3,param_4);
  if ((int)uVar2 == (int)uVar3) {
    uVar1 = 0;
  }
  else {
    uVar2 = param_1;
    func_0x000107875b2c(param_1,param_2,param_3);
    func_0x000107875b2c(param_1,param_2,param_4);
    uVar1 = (uint)uVar2 ^ (uint)param_1;
  }
  return uVar1;
}



/* Entry: 107875ee0; end: 107875f23;  */

void FUN_107875ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001000671d4();
  uVar1 = param_4;
  uStack_30 = param_1;
  uStack_28 = param_2;
  _strlen(param_4);
  func_0x000100067218(&uStack_30,param_4,uVar1);
  return;
}



/* Entry: 107876488; end: 1078764b7;  */

long * FUN_107876488(long *param_1,long *param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined1 **ppuVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *plStack_e0;
  ulong uStack_d8;
  undefined1 **ppuStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined1 auStack_a8 [24];
  long alStack_90 [6];
  long *plStack_60;
  ulong uStack_58;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  uVar2 = param_2[1] - param_3;
  if (param_3 <= (ulong)param_2[1]) {
    if (param_4 <= uVar2) {
      uVar2 = param_4;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)
              (param_1,*param_2 + param_3,uVar2);
    return param_1;
  }
  func_0x000104c03f14();
  puStack_18 = &UNK_1078764b8;
  uStack_58 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = param_1;
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x000107876624();
  if ((int)plVar5 != 0) {
    lVar1 = param_1[1];
    for (lVar6 = *param_1; lVar6 != lVar1; lVar6 = lVar6 + 0x38) {
      func_0x00010724ef84(&puStack_c0,lVar6);
      uVar2 = uStack_b8;
      ppuVar3 = (undefined1 **)puStack_c0;
      if (-1 < (char)bStack_a9) {
        uVar2 = (ulong)bStack_a9;
        ppuVar3 = &puStack_c0;
      }
      param_3 = param_4;
      func_0x0001078762e8(auStack_a8,ppuVar3,uVar2,param_4,param_5);
      func_0x0001072625b4(alStack_90,auStack_a8);
      param_2 = alStack_90;
      func_0x000104c2f1f0(lVar6);
      plVar5 = alStack_90;
      func_0x000104c2f714(plVar5);
      func_0x000107876664();
      func_0x00010787665c();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != uStack_58) {
    ___stack_chk_fail();
    func_0x000107876654();
    iVar4 = (int)&plStack_e0;
    puStack_c8 = &UNK_1078765b0;
    plStack_e0 = param_2;
    uStack_d8 = param_3;
    ppuStack_d0 = &puStack_20;
    plStack_60 = param_2;
    uStack_58 = param_3;
    FUN_107875ee0(&plStack_e0,0,9,&UNK_10f430926);
    return (long *)(ulong)(iVar4 == 0);
  }
  return plVar5;
}



/* Entry: 107876d6c; end: 107876e37;  */

void FUN_107876d6c(double param_1,double param_2,double param_3,double *param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar1 = *param_5;
  dVar2 = param_5[1];
  dVar3 = param_5[2];
  dVar4 = param_5[3];
  dVar5 = param_5[4];
  dVar6 = param_5[5];
  dVar7 = param_5[6];
  dVar8 = param_5[7];
  dVar9 = param_5[8];
  dVar10 = param_5[9];
  dVar11 = param_5[10];
  dVar12 = param_5[0xb];
  *param_4 = dVar1;
  param_4[1] = dVar2;
  param_4[2] = dVar3;
  param_4[3] = dVar4;
  param_4[4] = dVar5;
  param_4[5] = dVar6;
  param_4[6] = dVar7;
  param_4[7] = dVar8;
  param_4[8] = dVar9;
  param_4[9] = dVar10;
  param_4[10] = dVar11;
  param_4[0xb] = dVar12;
  param_4[0xc] = param_2 * dVar5 + param_1 * dVar1 + param_3 * dVar9 + param_5[0xc];
  param_4[0xd] = param_2 * dVar6 + param_1 * dVar2 + param_3 * dVar10 + param_5[0xd];
  param_4[0xe] = param_2 * dVar7 + param_1 * dVar3 + param_3 * dVar11 + param_5[0xe];
  param_4[0xf] = param_2 * dVar8 + param_1 * dVar4 + param_3 * dVar12 + param_5[0xf];
  return;
}



/* Entry: 1078776b4; end: 107877717;  */

long FUN_1078776b4(long param_1,ulong param_2,char *param_3,ulong param_4,long param_5)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  lVar3 = -1;
  if ((param_4 < param_2) && (param_5 != 0)) {
    pcVar1 = (char *)(param_1 + param_2);
    for (pcVar4 = (char *)(param_1 + param_4); pcVar5 = pcVar1, lVar3 = param_5, pcVar6 = param_3,
        pcVar4 != pcVar1; pcVar4 = pcVar4 + 1) {
      while (lVar3 != 0) {
        cVar2 = *pcVar6;
        pcVar5 = pcVar4;
        lVar3 = lVar3 + -1;
        pcVar6 = pcVar6 + 1;
        if (*pcVar4 == cVar2) goto LAB_107877704;
      }
    }
LAB_107877704:
    lVar3 = (long)pcVar5 - param_1;
    if (pcVar5 == pcVar1) {
      lVar3 = -1;
    }
  }
  return lVar3;
}



/* Entry: 107877ad4; end: 10787812f;  */

void FUN_107877ad4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  long lVar10;
  ulong uVar11;
  undefined8 extraout_x8;
  long lVar12;
  long lVar13;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_170 [72];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_f0 [56];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_78;
  
  lVar6 = param_2;
  func_0x0001078786b4();
  puStack_1b0 = &UNK_10e52b660;
  lStack_1a8 = 0;
  uStack_1a0 = 0;
  uStack_198 = 0;
  lVar10 = lVar6;
  uStack_78 = extraout_x8;
  func_0x00010bd2b4f4();
  func_0x0001078786d0();
  lVar13 = 0;
  do {
    uVar3 = lVar13 == *(int *)(lVar6 + 4);
    if (*(int *)(lVar6 + 4) <= lVar13) {
      func_0x000104c33260(param_1);
      func_0x000104c33548(&puStack_1b0);
      func_0x000107878660(uStack_78);
      if ((bool)uVar3) {
        return;
      }
      ___stack_chk_fail();
      func_0x000104c33548(&puStack_1b0);
      func_0x000107878674();
      func_0x00010787797c();
      return;
    }
    if (*(long *)(lVar6 + 0x38) != 0) {
      lVar12 = *(long *)(lVar6 + 0x38) + lVar13 * 0x58;
      uVar5 = (uint)*(byte *)(lVar12 + 1);
      if (((*(byte *)(lVar12 + 1) >> 4 & 1) != 0) && (*(long *)(lVar12 + 0x28) != 0)) {
        lVar7 = lVar10;
        func_0x00010bd20a9c(lVar10,param_2);
        if (lVar7 != lVar12) goto LAB_107878004;
        uVar5 = (uint)*(byte *)(lVar12 + 1);
      }
      if ((uVar5 >> 5 & 1) == 0) {
        lVar7 = lVar10;
        func_0x00010bd1d188(lVar10,param_2);
        iVar4 = (int)lVar7;
        if (iVar4 != 0) {
          puVar8 = &uStack_128;
          func_0x000107262e9c(puVar8,*(undefined8 *)(lVar12 + 8));
          iVar4 = (int)puVar8;
          func_0x0001078786d0();
          func_0x0001078786ac();
                    /* WARNING: Could not recover jumptable at 0x000107877bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_10deafc30)[iVar4 - 1] * 4 + 0x107877bd0))();
          return;
        }
        func_0x0001078786ac();
        if (iVar4 - 0xdU < 0xfffffffd) {
          puVar8 = &uStack_128;
          func_0x000107262e9c(puVar8,*(undefined8 *)(lVar12 + 8));
          iVar4 = (int)puVar8;
          func_0x0001078786ac();
                    /* WARNING: Could not recover jumptable at 0x000107877e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_10deafc1e)[iVar4 - 1] * 4 + 0x107877e70))();
          return;
        }
      }
      else {
        uStack_128 = 0;
        uStack_120 = 0;
        uStack_118 = 0;
        lVar7 = lVar10;
        func_0x00010bd1d250(lVar10,param_2);
        uVar5 = (uint)lVar7;
        puVar8 = &uStack_128;
        func_0x0001072ac134(puVar8,(long)(int)uVar5);
        iVar4 = (int)puVar8;
        if ((uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)) != 0) {
          func_0x0001078786d0();
          func_0x0001078786ac();
                    /* WARNING: Could not recover jumptable at 0x000107877c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_10deafc0c)[iVar4 - 1] * 4 + 0x107877c34))();
          return;
        }
        func_0x000107262e9c(auStack_170,*(undefined8 *)(lVar12 + 8));
        func_0x000107327958(&uStack_1c0,&uStack_128);
        func_0x000104c318bc(auStack_f0,auStack_170);
        uStack_b0 = uStack_1b8;
        uStack_b8 = uStack_1c0;
        uStack_1c0 = 0;
        uStack_1b8 = 0;
        ppuVar9 = &puStack_1b0;
        uVar11 = 0;
        func_0x000104c32bd8();
        if ((uVar11 & 1) != 0) {
          lVar12 = lStack_1a8 + (long)ppuVar9 * 0x78;
          func_0x000104c318bc(lVar12,auStack_f0);
          uVar2 = uStack_b0;
          uVar1 = uStack_b8;
          uStack_b8 = 0;
          uStack_b0 = 0;
          *(undefined4 *)(lVar12 + 0x38) = 0;
          *(undefined8 *)(lVar12 + 0x48) = uVar2;
          *(undefined8 *)(lVar12 + 0x40) = uVar1;
          uStack_190 = 0;
          uStack_188 = 0;
          func_0x000104c33108(&uStack_190);
        }
        FUN_10787860c(auStack_f0);
        func_0x000104c33108(&uStack_1c0);
        func_0x000104c2f714(auStack_170);
        func_0x000107269124(&uStack_128);
      }
    }
LAB_107878004:
    lVar13 = lVar13 + 1;
  } while( true );
}



/* Entry: 10787860c; end: 10787863b;  */

long FUN_10787860c(long param_1)

{
  func_0x000104c33108(param_1 + 0x38);
  func_0x000104c2f714(param_1);
  return param_1;
}



/* Entry: 107878a14; end: 107878b1b;  */

void FUN_107878a14(double param_1,double *param_2,double *param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  ulong uVar4;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  
  dVar2 = param_1;
  func_0x0001078789f0();
  pdVar1 = param_3 + 2;
  uVar4 = -(ulong)(dVar2 < 0.0);
  dVar3 = -dVar2;
  if (0.0 <= dVar2) {
    dVar3 = dVar2;
  }
  if (dVar3 <= 0.9995) {
    _acos();
    _sin();
    _sin((1.0 - param_1) * dVar3);
    _sin(param_1 * dVar3);
  }
  else {
    dStack_50 = *param_2 +
                ((double)((ulong)-*param_3 ^ ((ulong)-*param_3 ^ (ulong)*param_3) & ~uVar4) -
                *param_2) * param_1;
    dStack_48 = param_2[1] +
                ((double)((ulong)-param_3[1] ^ ((ulong)-param_3[1] ^ (ulong)param_3[1]) & ~uVar4) -
                param_2[1]) * param_1;
    dStack_40 = param_2[2] +
                ((double)((ulong)*pdVar1 ^ ((ulong)*pdVar1 ^ (ulong)-*pdVar1) & uVar4) - param_2[2])
                * param_1;
    dStack_38 = param_2[3] +
                ((double)((ulong)param_3[3] ^ ((ulong)param_3[3] ^ (ulong)-param_3[3]) & uVar4) -
                param_2[3]) * param_1;
    func_0x0001078788fc(&dStack_50);
  }
  return;
}



/* Entry: 107878e84; end: 107878f5f;  */

undefined8 * FUN_107878e84(undefined8 *param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  *(undefined1 *)((long)param_1 + 0x19) = param_2;
  puVar1 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  param_1[4] = puVar1;
  return param_1;
}



/* Entry: 107879210; end: 10787922f;  */

void FUN_107879210(void)

{
  func_0x000107879208();
  func_0x000107879284();
  return;
}



/* Entry: 107879a18; end: 107879a73;  */

void FUN_107879a18(void)

{
  return;
}



/* Entry: 107879cb0; end: 107879cf7;  */

long FUN_107879cb0(long param_1)

{
  func_0x000107879cf8(param_1);
  func_0x000107879d18(param_1 + 0x10,&UNK_10f430970,param_1);
  return param_1;
}



/* Entry: 10787a560; end: 10787a5ff;  */

void FUN_10787a560(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [8];
  long lStack_50;
  
  func_0x00010787be84();
  if (lStack_50 != 0) {
    func_0x00010787bd04(auStack_58,*param_1,param_2,param_3,param_4);
    func_0x0001073ae140(lStack_50,auStack_58);
    func_0x00010787bea4();
    if (lStack_50 != 0) {
      func_0x00010787bdc0();
    }
  }
  func_0x00010787be1c();
  return;
}



/* Entry: 10787a928; end: 10787a92b;  */

undefined8 * FUN_10787a928(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e3d48;
  func_0x00010787a900(param_1 + 2);
  return param_1;
}



/* Entry: 10787abfc; end: 10787ac33;  */

void FUN_10787abfc(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_1109e3d48;
  uVar5 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar5;
  lVar4 = param_2[2];
  param_1[3] = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 10787ad74; end: 10787ad87;  */

void FUN_10787ad74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10787af74; end: 10787af7f;  */

undefined ** FUN_10787af74(void)

{
  return &PTR_DAT_1109e3e78;
}



/* Entry: 10787b488; end: 10787b677;  */

undefined1  [16] FUN_10787b488(long *param_1,ulong *param_2)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  long lVar6;
  ulong uVar7;
  undefined8 extraout_x9;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong unaff_x23;
  undefined1 auVar12 [16];
  long *aplStack_58 [3];
  
  uVar9 = *param_2;
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar5 = uVar11 - 1;
    if ((uVar11 & uVar5) == 0) {
      unaff_x23 = uVar5 & uVar9;
    }
    else {
      unaff_x23 = uVar9;
      if (uVar11 <= uVar9) {
        uVar7 = 0;
        if (uVar11 != 0) {
          uVar7 = uVar9 / uVar11;
        }
        unaff_x23 = uVar9 - uVar7 * uVar11;
      }
    }
    plVar10 = *(long **)(*param_1 + unaff_x23 * 8);
    if (plVar10 != (long *)0x0) {
      do {
        while( true ) {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_10787b534;
          uVar7 = plVar10[1];
          if (uVar7 != uVar9) break;
          if (plVar10[2] == uVar9) {
            uVar4 = 0;
            goto LAB_10787b650;
          }
        }
        if ((uVar11 & uVar5) == 0) {
          uVar7 = uVar7 & uVar5;
        }
        else if (uVar11 <= uVar7) {
          uVar1 = 0;
          if (uVar11 != 0) {
            uVar1 = uVar7 / uVar11;
          }
          uVar7 = uVar7 - uVar1 * uVar11;
        }
      } while (uVar7 == unaff_x23);
    }
  }
LAB_10787b534:
  func_0x00010787b678(aplStack_58,param_1,uVar9);
  if ((uVar11 == 0) || (*(float *)(param_1 + 4) * (float)uVar11 < (float)(param_1[3] + 1))) {
    bVar2 = 2 < uVar11;
    bVar3 = uVar11 == 3;
    func_0x00010787beb0(uVar11 << 1);
    uVar4 = extraout_x8;
    if (!bVar2 || bVar3) {
      uVar4 = extraout_x9;
    }
    func_0x00010787b6c0(param_1,uVar4);
    uVar11 = param_1[1];
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x23 = uVar11 - 1 & uVar9;
    }
    else {
      unaff_x23 = uVar9;
      if (uVar11 <= uVar9) {
        uVar5 = 0;
        if (uVar11 != 0) {
          uVar5 = uVar9 / uVar11;
        }
        unaff_x23 = uVar9 - uVar5 * uVar11;
      }
    }
  }
  plVar10 = aplStack_58[0];
  lVar6 = *param_1;
  plVar8 = *(long **)(lVar6 + unaff_x23 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *aplStack_58[0] = *plVar8;
    *plVar8 = (long)aplStack_58[0];
    *(long **)(lVar6 + unaff_x23 * 8) = plVar8;
    if (*aplStack_58[0] != 0) {
      uVar9 = *(ulong *)(*aplStack_58[0] + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar9 = uVar9 & uVar11 - 1;
      }
      else if (uVar11 <= uVar9) {
        uVar5 = 0;
        if (uVar11 != 0) {
          uVar5 = uVar9 / uVar11;
        }
        uVar9 = uVar9 - uVar5 * uVar11;
      }
      *(long **)(lVar6 + uVar9 * 8) = aplStack_58[0];
    }
  }
  else {
    *aplStack_58[0] = *plVar8;
    *plVar8 = (long)aplStack_58[0];
  }
  aplStack_58[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  func_0x00010787be68();
  uVar4 = 1;
LAB_10787b650:
  auVar12._8_8_ = uVar4;
  auVar12._0_8_ = plVar10;
  return auVar12;
}



/* Entry: 10787b954; end: 10787b9c3;  */

void FUN_10787b954(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x22;
  
  func_0x00010787be90();
  uVar1 = 0x58;
  __Znwm();
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  func_0x00010787b9f8();
  *unaff_x22 = uVar1;
  func_0x00010787be50();
  return;
}



/* Entry: 10787bbb4; end: 10787bbe7;  */

undefined8 FUN_10787bbb4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  func_0x00010787bbe8(auStack_38);
  func_0x00010787be68();
  return uVar1;
}



/* Entry: 10787bf58; end: 10787bf63;  */

undefined ** FUN_10787bf58(void)

{
  return &PTR_DAT_1109e3f78;
}



/* Entry: 10787c37c; end: 10787c3c7;  */

void FUN_10787c37c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  
  func_0x00010787c638();
  FUN_1077b18ac(unaff_x19 + 0x80,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 8);
  return;
}



/* Entry: 10787c780; end: 10787c947;  */

/* WARNING: Possible PIC construction at 0x00010787c7dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010787c7e0) */
/* WARNING: Removing unreachable block (ram,0x00010787c7f4) */
/* WARNING: Removing unreachable block (ram,0x00010787c84c) */
/* WARNING: Removing unreachable block (ram,0x00010787c850) */
/* WARNING: Removing unreachable block (ram,0x00010787c864) */
/* WARNING: Removing unreachable block (ram,0x00010787c878) */
/* WARNING: Removing unreachable block (ram,0x00010787c884) */
/* WARNING: Removing unreachable block (ram,0x00010787c890) */
/* WARNING: Removing unreachable block (ram,0x00010787c904) */
/* WARNING: Removing unreachable block (ram,0x00010787c898) */
/* WARNING: Removing unreachable block (ram,0x00010787c8b0) */
/* WARNING: Removing unreachable block (ram,0x00010787c8c8) */
/* WARNING: Removing unreachable block (ram,0x00010787c8cc) */
/* WARNING: Removing unreachable block (ram,0x000107881394) */
/* WARNING: Removing unreachable block (ram,0x00010787c858) */
/* WARNING: Removing unreachable block (ram,0x00010787c7fc) */

void FUN_10787c780(undefined1 *param_1,undefined8 param_2,long param_3,ulong param_4,byte *param_5)

{
  undefined1 *puVar1;
  undefined1 (*pauVar2) [16];
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  undefined1 *puVar17;
  ulong uVar18;
  double *pdVar19;
  ulong *puVar20;
  long lVar21;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar22;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 uVar23;
  uint uVar24;
  undefined1 *unaff_x19;
  uint uVar25;
  ulong unaff_x20;
  long unaff_x21;
  uint uVar26;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  ulong uVar27;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long lVar28;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  double dVar29;
  double extraout_d0;
  double dVar30;
  undefined8 extraout_d0_00;
  undefined8 extraout_d0_01;
  undefined8 extraout_d0_02;
  undefined8 extraout_d0_03;
  double extraout_d0_04;
  double extraout_d1;
  undefined8 extraout_d1_00;
  undefined8 extraout_d1_01;
  undefined8 extraout_d1_02;
  undefined8 extraout_d1_03;
  double extraout_d1_04;
  double extraout_d2;
  undefined8 extraout_d2_00;
  undefined8 extraout_d2_01;
  undefined8 extraout_d2_02;
  undefined8 extraout_d2_03;
  double extraout_d2_04;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  double dVar36;
  undefined1 auVar35 [16];
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  double dVar37;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  double dVar38;
  undefined8 unaff_d15;
  undefined1 auVar39 [16];
  byte abStack_810 [288];
  byte abStack_6f0 [176];
  byte abStack_640 [2];
  short sStack_63e;
  uint uStack_638;
  uint uStack_634;
  double dStack_630;
  char cStack_5e0;
  uint uStack_5dc;
  int iStack_5d8;
  short sStack_5d4;
  byte bStack_5d2;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  ulong *puStack_5b0;
  byte bStack_570;
  uint uStack_56c;
  uint uStack_568;
  short sStack_564;
  byte bStack_562;
  ulong uStack_560;
  ulong uStack_558;
  ulong uStack_550;
  double dStack_548;
  double dStack_540;
  undefined1 auStack_c8 [16];
  undefined8 uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  
  puVar1 = &stack0xfffffffffffffff0;
  uVar22 = param_2;
  lVar21 = param_3;
  uVar18 = param_4;
  func_0x000107418388();
  if ((((int)uVar22 == 0) || (uVar22 = param_2, func_0x000107417d68(), (int)uVar22 == 0)) ||
     (dVar29 = (double)func_0x0001074163dc(param_2), dVar29 == 0.0)) {
    func_0x000107417d68();
    if ((int)param_2 == 0) {
      func_0x0001078813ac(param_1);
      dVar29 = (double)func_0x0001078817d4();
      dVar37 = *(double *)(lVar21 + 0x78);
      uVar25 = (uint)uVar18;
      uVar24 = (uint)param_5[2];
      if (param_5[3] == 0) {
        uVar24 = uVar25;
      }
      uVar4 = (uint)*param_5;
      if (param_5[1] == 0) {
        uVar4 = uVar25;
      }
      iVar16 = *(int *)(lVar21 + 0x58);
      dStack_548 = (double)*(uint *)(lVar21 + 0x4c) / 2.0;
      dStack_540 = (double)*(uint *)(lVar21 + 0x50) / 2.0;
      auStack_c8 = func_0x0001073c2238(lVar21,uVar18,&dStack_548);
      uStack_b8 = 0;
      func_0x000107416bf8(lVar21);
      func_0x00010785c1dc(&dStack_548,dVar37 * 512.0,(double)(uVar18 & 0xffffffff),lVar21 + 0x200,
                          iVar16 == 1);
      dVar37 = *(double *)(param_5 + 8);
      uStack_560 = 0;
      uStack_558 = 0;
      uStack_550 = 0;
      func_0x000107881970();
      uVar18 = 0x3800;
      puStack_5b0 = &uStack_550;
      __Znwm();
      uStack_550 = uVar18 + 0x3800;
      uStack_5c8 = 0;
      uStack_5d0 = 0;
      uStack_5b8 = 0;
      uStack_5c0 = 0;
      uStack_560 = uVar18;
      uStack_558 = uVar18;
      func_0x00010787eb70(&uStack_5d0);
      for (iVar16 = 1; iVar16 != 4; iVar16 = iVar16 + 1) {
        func_0x00010787e968(dVar29,&uStack_5d0,(int)(short)-(short)iVar16);
        func_0x000107881388();
        func_0x00010787e968(dVar29,&uStack_5d0,iVar16);
        func_0x000107881388();
      }
      func_0x00010787e968(dVar29,&uStack_5d0,0);
      func_0x000107881388();
LAB_10787dc54:
      if (uStack_560 == uStack_558) {
        func_0x00010787eafc(&uStack_560);
        return;
      }
      uVar18 = uStack_558 - 0x70;
      func_0x0001078811b8(&uStack_5d0,uVar18);
      uStack_558 = uVar18;
      if ((bStack_562 & 1) == 0) goto code_r0x00010787dc7c;
      goto LAB_10787dc98;
    }
    func_0x0001078813ac();
    puVar17 = param_1;
  }
  else {
    func_0x0001078813ac(&stack0xffffffffffffffa8);
    FUN_10787dadc();
    puVar17 = &stack0xffffffffffffff90;
    func_0x0001078813ac();
    unaff_x30 = 0x10787c7e0;
    register0x00000008 = (BADSPACEBASE *)&uStack_a0;
    unaff_x19 = param_1;
    unaff_x20 = param_4;
    unaff_x21 = param_3;
    unaff_x22 = param_2;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_d15;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_d14;
  *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_d13;
  *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_d12;
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_d11;
  *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_d10;
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  dVar29 = (double)func_0x0001078817d4();
  uVar24 = (uint)*param_5;
  if (param_5[1] == 0) {
    uVar24 = (uint)uVar18;
  }
  *(uint *)((long)register0x00000008 + -0x78c) = uVar24;
  uVar24 = *(uint *)(lVar21 + 0x50);
  *(double *)((long)register0x00000008 + -0x628) = (double)*(uint *)(lVar21 + 0x4c) / 2.0;
  *(double *)((long)register0x00000008 + -0x620) = (double)uVar24 / 2.0;
  *(uint *)((long)register0x00000008 + -0x774) = (uint)uVar18;
  auVar39 = func_0x0001073c2238(lVar21,uVar18,(undefined1 *)((long)register0x00000008 + -0x628));
  *(undefined1 (*) [16])((long)register0x00000008 + -0x1a8) = auVar39;
  *(undefined8 *)((long)register0x00000008 + -0x198) = 0;
  func_0x000107416bf8(lVar21);
  *(long *)((long)register0x00000008 + -0x788) = lVar21;
  func_0x00010785c1dc((undefined1 *)((long)register0x00000008 + -0x628),0x3ff0000000000000,0,
                      lVar21 + 0xd30,1);
  dVar37 = *(double *)(param_5 + 8);
  *(undefined8 *)((long)register0x00000008 + -0x640) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x638) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x630) = 0;
  puVar1 = (undefined1 *)((long)register0x00000008 + -0x630);
  func_0x000107881970();
  *(undefined1 **)((long)register0x00000008 + -0x780) = puVar17;
  *(undefined1 **)((long)register0x00000008 + -0x750) = puVar1;
  lVar21 = 0x3800;
  __Znwm();
  *(long *)((long)register0x00000008 + -0x640) = lVar21;
  *(long *)((long)register0x00000008 + -0x638) = lVar21;
  *(long *)((long)register0x00000008 + -0x630) = lVar21 + 0x3800;
  *(undefined8 *)((long)register0x00000008 + -0x768) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x770) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x758) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x760) = 0;
  FUN_10787eda4((undefined1 *)((long)register0x00000008 + -0x770));
  *(undefined8 *)((long)register0x00000008 + -0x6a0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x6a8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x6b0) = 0;
  *(double *)((long)register0x00000008 + -0x130) = dVar29;
  *(double *)((long)register0x00000008 + -0x128) = dVar29;
  *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
  func_0x000107429dc8((undefined1 *)((long)register0x00000008 + -0x770),
                      (undefined1 *)((long)register0x00000008 + -0x6b0),
                      (undefined1 *)((long)register0x00000008 + -0x130));
  *(undefined1 *)((long)register0x00000008 + -0x710) = 0;
  *(undefined4 *)((long)register0x00000008 + -0x70c) = 0;
  *(undefined4 *)((long)register0x00000008 + -0x708) = 0;
  *(undefined4 *)((long)register0x00000008 + -0x704) = 1;
  uVar18 = *(ulong *)((long)register0x00000008 + -0x638);
  if (uVar18 < *(ulong *)((long)register0x00000008 + -0x630)) {
    func_0x0001078811ac();
    lVar21 = uVar18 + 0x70;
  }
  else {
    lVar21 = *(long *)((long)register0x00000008 + -0x640);
    func_0x00010787ede4(lVar21,*(ulong *)((long)register0x00000008 + -0x630),
                        (long)(uVar18 - lVar21) / 0x70 + 1);
    func_0x00010787ed60((undefined1 *)((long)register0x00000008 + -0x6b0),lVar21,
                        (*(long *)((long)register0x00000008 + -0x638) -
                        *(long *)((long)register0x00000008 + -0x640)) / 0x70,puVar1);
    lVar21 = *(long *)((long)register0x00000008 + -0x6a0);
    func_0x0001078811ac();
    lVar21 = lVar21 + 0x70;
    func_0x00010788197c(*(undefined8 *)((long)register0x00000008 + -0x6a8));
    lVar28 = extraout_x8 + extraout_x9 * 0x70;
    _memcpy(lVar28);
    uVar22 = *(undefined8 *)((long)register0x00000008 + -0x640);
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x630);
    *(long *)((long)register0x00000008 + -0x640) = lVar28;
    *(long *)((long)register0x00000008 + -0x638) = lVar21;
    *(undefined8 *)((long)register0x00000008 + -0x630) =
         *(undefined8 *)((long)register0x00000008 + -0x698);
    *(undefined8 *)((long)register0x00000008 + -0x6a0) = uVar22;
    *(undefined8 *)((long)register0x00000008 + -0x698) = uVar23;
    *(undefined8 *)((long)register0x00000008 + -0x6b0) = uVar22;
    *(undefined8 *)((long)register0x00000008 + -0x6a8) = uVar22;
    FUN_10787eda4((undefined1 *)((long)register0x00000008 + -0x6b0));
  }
  *(long *)((long)register0x00000008 + -0x638) = lVar21;
  *(undefined8 *)((long)register0x00000008 + -0x798) = 0xbff0000000000000;
  *(undefined8 *)((long)register0x00000008 + -0x7a0) = 0x3ff0000000000000;
  *(undefined8 *)((long)register0x00000008 + -0x7b8) = 0x40c0000000000000;
  *(undefined8 *)((long)register0x00000008 + -0x7c0) = 0x40c0000000000000;
  *(undefined8 *)((long)register0x00000008 + -0x7a8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x7b0) = 0x40c0000000000000;
  auVar39 = NEON_fmov(0x3ff0000000000000,8);
  *(long *)((long)register0x00000008 + -0x7d8) = auVar39._8_8_;
  *(long *)((long)register0x00000008 + -0x7e0) = auVar39._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x7c8) = 0x40c0000000000000;
  *(undefined8 *)((long)register0x00000008 + -2000) = 0;
  auVar39 = NEON_fmov(0xbff0000000000000,8);
  *(long *)((long)register0x00000008 + -0x7e8) = auVar39._8_8_;
  *(long *)((long)register0x00000008 + -0x7f0) = auVar39._0_8_;
  do {
    if (*(long *)((long)register0x00000008 + -0x640) == lVar21) {
      func_0x00010787ed30((undefined1 *)((long)register0x00000008 + -0x640));
      return;
    }
    func_0x0001078811b8((undefined1 *)((long)register0x00000008 + -0x6b0),lVar21 + -0x70);
    *(long *)((long)register0x00000008 + -0x638) = lVar21 + -0x70;
    iVar16 = *(int *)((long)register0x00000008 + -0x644);
    if (iVar16 == 2) {
code_r0x00010787e250:
      func_0x00010787e9c8((undefined1 *)((long)register0x00000008 + -0x6b0),
                          (undefined1 *)((long)register0x00000008 + -0x1a8));
      bVar7 = *(byte *)((long)register0x00000008 + -0x650);
      uVar24 = (uint)bVar7;
      if ((uint)bVar7 != *(uint *)((long)register0x00000008 + -0x774)) {
        dVar30 = extraout_d2_04;
        if (extraout_d2_04 <= extraout_d1_04) {
          dVar30 = extraout_d1_04;
        }
        dVar31 = dVar37 + (double)(1 << (ulong)(*(uint *)((long)register0x00000008 + -0x774) -
                                                (uint)bVar7 & 0x1f)) + -2.0;
        if (dVar30 <= extraout_d0_04) {
          dVar30 = extraout_d0_04;
        }
        bVar13 = false;
        bVar14 = true;
        bVar15 = false;
        if (*(uint *)((long)register0x00000008 + -0x774) <= uVar24) {
          bVar13 = false;
          bVar14 = false;
          bVar15 = true;
          if (!NAN(dVar30) && !NAN(dVar31)) {
            bVar13 = dVar30 < dVar31;
            bVar14 = dVar30 == dVar31;
            bVar15 = false;
          }
        }
        if (bVar14 || bVar13 != bVar15) {
          iVar5 = *(int *)((long)register0x00000008 + -0x64c);
          iVar6 = *(int *)((long)register0x00000008 + -0x648);
          for (uVar24 = 0; uVar24 != 4; uVar24 = uVar24 + 1) {
            func_0x00010787ea4c((undefined1 *)((long)register0x00000008 + -0x770),
                                (undefined1 *)((long)register0x00000008 + -0x6b0),uVar24);
            *(byte *)((long)register0x00000008 + -0x710) = bVar7 + 1;
            *(uint *)((long)register0x00000008 + -0x70c) = iVar5 << 1 | uVar24 & 1;
            *(uint *)((long)register0x00000008 + -0x708) = iVar6 * 2 + (uVar24 >> 1);
            *(int *)((long)register0x00000008 + -0x704) = iVar16;
            uVar18 = *(ulong *)((long)register0x00000008 + -0x638);
            if (uVar18 < *(ulong *)((long)register0x00000008 + -0x630)) {
              func_0x0001078811b8(uVar18,(undefined1 *)((long)register0x00000008 + -0x770));
              lVar21 = uVar18 + 0x70;
            }
            else {
              lVar21 = *(long *)((long)register0x00000008 + -0x640);
              func_0x00010787ede4(lVar21,*(ulong *)((long)register0x00000008 + -0x630),
                                  (long)(uVar18 - lVar21) / 0x70 + 1);
              func_0x00010787ed60((undefined1 *)((long)register0x00000008 + -0x130),lVar21,
                                  (*(long *)((long)register0x00000008 + -0x638) -
                                  *(long *)((long)register0x00000008 + -0x640)) / 0x70,puVar1);
              lVar21 = *(long *)((long)register0x00000008 + -0x120);
              func_0x0001078811b8(lVar21,(undefined1 *)((long)register0x00000008 + -0x770));
              lVar21 = lVar21 + 0x70;
              func_0x00010788197c(*(undefined8 *)((long)register0x00000008 + -0x128));
              lVar28 = extraout_x8_00 + extraout_x9_00 * 0x70;
              _memcpy(lVar28);
              uVar22 = *(undefined8 *)((long)register0x00000008 + -0x640);
              uVar23 = *(undefined8 *)((long)register0x00000008 + -0x630);
              *(long *)((long)register0x00000008 + -0x640) = lVar28;
              *(long *)((long)register0x00000008 + -0x638) = lVar21;
              *(undefined8 *)((long)register0x00000008 + -0x630) =
                   *(undefined8 *)((long)register0x00000008 + -0x118);
              *(undefined8 *)((long)register0x00000008 + -0x120) = uVar22;
              *(undefined8 *)((long)register0x00000008 + -0x118) = uVar23;
              *(undefined8 *)((long)register0x00000008 + -0x128) = uVar22;
              *(undefined8 *)((long)register0x00000008 + -0x130) = uVar22;
              FUN_10787eda4((undefined1 *)((long)register0x00000008 + -0x130));
            }
            *(long *)((long)register0x00000008 + -0x638) = lVar21;
          }
          goto code_r0x00010787e49c;
        }
      }
      dVar38 = *(double *)((long)register0x00000008 + -0x1a8);
      uVar25 = *(uint *)((long)register0x00000008 + -0x64c);
      iVar16 = (int)*(undefined8 *)((long)register0x00000008 + -0x788);
      func_0x000107418388();
      dVar30 = 1.0 / (double)(1 << (ulong)(uVar24 & 0x1f));
      dVar31 = (double)uVar25;
      dVar32 = dVar30 * dVar31;
      dVar38 = dVar30 * dVar38;
      dVar33 = (dVar32 + *(double *)((long)register0x00000008 + -0x7a0)) - dVar38;
      dVar36 = (dVar32 + *(double *)((long)register0x00000008 + -0x798)) - dVar38;
      auVar35._0_8_ = dVar33 - dVar30;
      auVar35._8_8_ = dVar36 - dVar30;
      auVar39 = NEON_fmaxnm(auVar35,ZEXT216(0),8);
      auVar9._8_8_ = -dVar36;
      auVar9._0_8_ = -dVar33;
      auVar8._8_8_ = -(ulong)(dVar36 < 0.0);
      auVar8._0_8_ = -(ulong)(dVar33 < 0.0);
      auVar39 = auVar39 ^ (auVar39 ^ auVar9) & auVar8;
      dVar32 = dVar32 - dVar38;
      dVar30 = dVar32 - dVar30;
      if (dVar30 <= 0.0) {
        dVar30 = 0.0;
      }
      dVar38 = -dVar32;
      if (0.0 <= dVar32) {
        dVar38 = dVar30;
      }
      dVar33 = auVar39._8_8_;
      dVar32 = auVar39._0_8_;
      dVar30 = dVar32;
      if (dVar33 <= dVar32) {
        dVar30 = dVar33;
      }
      if (dVar38 <= dVar30) {
        dVar30 = dVar38;
      }
      iVar5 = -(uint)(dVar30 == dVar33);
      if (dVar30 == dVar32) {
        iVar5 = 1;
      }
      bVar3 = (byte)*(undefined4 *)((long)register0x00000008 + -0x78c);
      if (uVar24 != *(uint *)((long)register0x00000008 + -0x774)) {
        bVar3 = bVar7;
      }
      iVar6 = iVar5;
      if (iVar16 == 0) {
        iVar6 = 0;
      }
      dVar30 = (dVar31 + dVar29 * (double)iVar5 + 0.5) -
               *(double *)((long)register0x00000008 + -0x1a8);
      dVar31 = ((double)*(uint *)((long)register0x00000008 + -0x648) + 0.5) -
               *(double *)((long)register0x00000008 + -0x1a0);
      *(byte *)((long)register0x00000008 + -0x770) = bVar3;
      *(short *)((long)register0x00000008 + -0x76e) = (short)iVar6;
      *(byte *)((long)register0x00000008 + -0x76c) = bVar7;
      *(uint *)((long)register0x00000008 + -0x768) = uVar25;
      *(uint *)((long)register0x00000008 + -0x764) = *(uint *)((long)register0x00000008 + -0x648);
      *(double *)((long)register0x00000008 + -0x760) = dVar31 * dVar31 + dVar30 * dVar30;
      func_0x00010787ec10(*(undefined8 *)((long)register0x00000008 + -0x780),
                          (undefined1 *)((long)register0x00000008 + -0x770));
    }
    else {
      if (1 < *(byte *)((long)register0x00000008 + -0x650)) {
        dVar30 = (double)(1 << (ulong)(*(byte *)((long)register0x00000008 + -0x650) & 0x1f));
        auVar39._0_8_ = *(ulong *)((long)register0x00000008 + -0x64c) & 0xffffffff;
        auVar39._8_8_ = *(ulong *)((long)register0x00000008 + -0x64c) >> 0x20;
        auVar39 = NEON_ucvtf(auVar39,8);
        *(double *)((long)register0x00000008 + -200) = auVar39._8_8_ / dVar30;
        *(double *)((long)register0x00000008 + -0xd0) = auVar39._0_8_ / dVar30;
        dVar30 = (1.0 / dVar30) * 0.0001220703125;
        *(double *)((long)register0x00000008 + -0xc0) = dVar30;
        *(double *)((long)register0x00000008 + -0xb8) = dVar30;
        *(undefined8 *)((long)register0x00000008 + -0x168) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x170) = 0;
        func_0x000107881588((undefined1 *)((long)register0x00000008 + -0x170));
        *(undefined8 *)((long)register0x00000008 + -0x130) = extraout_d0_00;
        *(undefined8 *)((long)register0x00000008 + -0x128) = extraout_d1_00;
        *(undefined8 *)((long)register0x00000008 + -0x120) = extraout_d2_00;
        *(undefined8 *)((long)register0x00000008 + -0x188) =
             *(undefined8 *)((long)register0x00000008 + -0x7a8);
        *(undefined8 *)((long)register0x00000008 + -400) =
             *(undefined8 *)((long)register0x00000008 + -0x7b0);
        func_0x000107881588((undefined1 *)((long)register0x00000008 + -400));
        *(undefined8 *)((long)register0x00000008 + -0x118) = extraout_d0_01;
        *(undefined8 *)((long)register0x00000008 + -0x110) = extraout_d1_01;
        *(undefined8 *)((long)register0x00000008 + -0x108) = extraout_d2_01;
        *(undefined8 *)((long)register0x00000008 + -0x138) =
             *(undefined8 *)((long)register0x00000008 + -0x7b8);
        *(undefined8 *)((long)register0x00000008 + -0x140) =
             *(undefined8 *)((long)register0x00000008 + -0x7c0);
        func_0x000107881588((undefined1 *)((long)register0x00000008 + -0x140));
        *(undefined8 *)((long)register0x00000008 + -0x100) = extraout_d0_02;
        *(undefined8 *)((long)register0x00000008 + -0xf8) = extraout_d1_02;
        *(undefined8 *)((long)register0x00000008 + -0xf0) = extraout_d2_02;
        *(undefined8 *)((long)register0x00000008 + -0x148) =
             *(undefined8 *)((long)register0x00000008 + -0x7c8);
        *(undefined8 *)((long)register0x00000008 + -0x150) =
             *(undefined8 *)((long)register0x00000008 + -2000);
        func_0x000107881588((undefined1 *)((long)register0x00000008 + -0x150));
        lVar21 = 0;
        *(undefined8 *)((long)register0x00000008 + -0xe8) = extraout_d0_03;
        *(undefined8 *)((long)register0x00000008 + -0xe0) = extraout_d1_03;
        *(undefined8 *)((long)register0x00000008 + -0xd8) = extraout_d2_03;
        auVar39 = *(undefined1 (*) [16])((long)register0x00000008 + -0x7f0);
        dVar30 = *(double *)((long)register0x00000008 + -0x7e0);
        dVar31 = *(double *)((long)register0x00000008 + -0x7d8);
        dVar32 = 1.0;
        dVar38 = -1.0;
        while( true ) {
          if (lVar21 == 0x60) break;
          pauVar2 = (undefined1 (*) [16])((long)register0x00000008 + lVar21 + -0x130);
          auVar34._0_8_ = -(ulong)(auVar39._0_8_ < *(double *)*pauVar2);
          auVar34._8_8_ = -(ulong)(auVar39._8_8_ < *(double *)(*pauVar2 + 8));
          dVar30 = (double)((ulong)dVar30 ^
                           ((ulong)dVar30 ^ *(ulong *)*pauVar2) &
                           -(ulong)(*(double *)*pauVar2 < dVar30));
          dVar31 = (double)((ulong)dVar31 ^
                           ((ulong)dVar31 ^ *(ulong *)(*pauVar2 + 8)) &
                           -(ulong)(*(double *)(*pauVar2 + 8) < dVar31));
          auVar39 = auVar39 ^ (auVar39 ^ *pauVar2) & auVar34;
          dVar33 = *(double *)pauVar2[1];
          dVar36 = dVar33;
          if (dVar32 <= dVar33) {
            dVar36 = dVar32;
          }
          if (dVar33 <= dVar38) {
            dVar33 = dVar38;
          }
          lVar21 = lVar21 + 0x18;
          dVar32 = dVar36;
          dVar38 = dVar33;
        }
        *(double *)((long)register0x00000008 + -0x188) = auVar39._8_8_;
        *(double *)((long)register0x00000008 + -400) = auVar39._0_8_;
        *(double *)((long)register0x00000008 + -0x180) = dVar38;
        *(double *)((long)register0x00000008 + -0x160) = dVar32;
        *(double *)((long)register0x00000008 + -0x168) = dVar31;
        *(double *)((long)register0x00000008 + -0x170) = dVar30;
        func_0x000107429dc8((undefined1 *)((long)register0x00000008 + -0x770),
                            (undefined1 *)((long)register0x00000008 + -0x170),
                            (undefined1 *)((long)register0x00000008 + -400));
        _memcpy((undefined1 *)((long)register0x00000008 + -0x710),
                (undefined1 *)((long)register0x00000008 + -0x130),0x60);
        puVar17 = (undefined1 *)((long)register0x00000008 + -0x628);
        func_0x00010785c710(puVar17,(undefined1 *)((long)register0x00000008 + -0x770));
        iVar16 = (int)puVar17;
        *(int *)((long)register0x00000008 + -0x644) = iVar16;
      }
      if (iVar16 != 0) goto code_r0x00010787e250;
    }
code_r0x00010787e49c:
    lVar21 = *(long *)((long)register0x00000008 + -0x638);
  } while( true );
code_r0x00010787dc7c:
  pdVar19 = &dStack_548;
  func_0x00010785c5f8(pdVar19,&uStack_5d0);
  if ((int)pdVar19 != 0) {
    bStack_562 = (int)pdVar19 == 2;
LAB_10787dc98:
    func_0x00010787e9c8(&uStack_5d0,auStack_c8);
    if (bStack_570 != uVar25) {
      dVar30 = extraout_d2;
      if (extraout_d2 <= extraout_d1) {
        dVar30 = extraout_d1;
      }
      if (dVar30 <= extraout_d0) {
        dVar30 = extraout_d0;
      }
      if ((dVar30 <= dVar37 + (double)(1 << (ulong)(uVar25 - bStack_570 & 0x1f)) + -2.0) ||
         ((uint)bStack_570 < (uVar24 & 0xff))) {
        for (uVar26 = 0; uVar11 = uStack_568, uVar10 = uStack_56c, uVar26 != 4; uVar26 = uVar26 + 1)
        {
          func_0x00010787ea4c(abStack_640,&uStack_5d0,uVar26);
          uVar18 = uStack_558;
          iStack_5d8 = uVar11 * 2 + (uVar26 >> 1);
          uStack_5dc = uVar26 & 1 | uVar10 << 1;
          cStack_5e0 = bStack_570 + 1;
          sStack_5d4 = sStack_564;
          bStack_5d2 = bStack_562;
          if (uStack_558 < uStack_550) {
            func_0x0001078811ac();
            uVar18 = uVar18 + 0x70;
          }
          else {
            puVar20 = &uStack_560;
            func_0x00010787ebb0(puVar20,(long)(uStack_558 - uStack_560) / 0x70 + 1);
            FUN_10787eb2c(&uStack_b0,puVar20,(long)(uStack_558 - uStack_560) / 0x70,&uStack_550);
            uVar18 = uStack_a0;
            func_0x0001078811ac();
            uVar18 = uVar18 + 0x70;
            uVar27 = uStack_a8 + ((long)(uStack_558 - uStack_560) / -0x70) * 0x70;
            _memcpy(uVar27);
            uVar12 = uStack_550;
            uStack_550 = uStack_98;
            uStack_a0 = uStack_560;
            uStack_98 = uVar12;
            uStack_b0 = uStack_560;
            uStack_a8 = uStack_560;
            uStack_560 = uVar27;
            uStack_558 = uVar18;
            func_0x00010787eb70(&uStack_b0);
          }
          uStack_558 = uVar18;
        }
        goto LAB_10787dc54;
      }
    }
    if ((bStack_562 & 1) == 0) {
      pdVar19 = &dStack_548;
      FUN_10785c83c(pdVar19,&uStack_5d0,1);
      if ((int)pdVar19 == 0) goto LAB_10787dc54;
    }
    abStack_640[0] = (byte)uVar4;
    if (bStack_570 != uVar25) {
      abStack_640[0] = bStack_570;
    }
    dVar30 = ((double)uStack_56c + dVar29 * (double)(int)sStack_564 + 0.5) -
             (double)auStack_c8._0_8_;
    dVar31 = ((double)uStack_568 + 0.5) - (double)auStack_c8._8_8_;
    sStack_63e = sStack_564;
    uStack_638 = uStack_56c;
    uStack_634 = uStack_568;
    dStack_630 = dVar31 * dVar31 + dVar30 * dVar30;
    func_0x00010787ec10(param_1,abStack_640);
  }
  goto LAB_10787dc54;
}



/* Entry: 10787dadc; end: 10787deaf;  */

void FUN_10787dadc(double param_1,undefined8 param_2,double param_3,undefined8 param_4,long param_5,
                  ulong param_6,byte *param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  double *pdVar7;
  ulong *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  byte abStack_640 [2];
  short sStack_63e;
  uint uStack_638;
  uint uStack_634;
  double dStack_630;
  char cStack_5e0;
  uint uStack_5dc;
  int iStack_5d8;
  short sStack_5d4;
  byte bStack_5d2;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  ulong *puStack_5b0;
  byte bStack_570;
  uint uStack_56c;
  uint uStack_568;
  short sStack_564;
  byte bStack_562;
  ulong uStack_560;
  ulong uStack_558;
  ulong uStack_550;
  double dStack_548;
  double dStack_540;
  double dStack_c8;
  double dStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  
  dVar17 = (double)(param_6 & 0xffffffff);
  func_0x0001078817d4();
  dVar13 = *(double *)(param_5 + 0x78);
  uVar9 = (uint)param_6;
  uVar1 = (uint)param_7[2];
  if (param_7[3] == 0) {
    uVar1 = uVar9;
  }
  uVar2 = (uint)*param_7;
  if (param_7[1] == 0) {
    uVar2 = uVar9;
  }
  iVar10 = *(int *)(param_5 + 0x58);
  dVar14 = (double)*(uint *)(param_5 + 0x4c) / 2.0;
  dVar15 = (double)*(uint *)(param_5 + 0x50) / 2.0;
  dStack_548 = dVar14;
  dStack_540 = dVar15;
  func_0x0001073c2238(param_5,param_6,&dStack_548);
  uStack_b8 = 0;
  dStack_c8 = dVar14;
  dStack_c0 = dVar15;
  func_0x000107416bf8(param_5);
  func_0x00010785c1dc(&dStack_548,dVar13 * 512.0,param_5 + 0x200,iVar10 == 1);
  dVar13 = *(double *)(param_7 + 8);
  uStack_560 = 0;
  uStack_558 = 0;
  uStack_550 = 0;
  func_0x000107881970();
  uVar6 = 0x3800;
  puStack_5b0 = &uStack_550;
  __Znwm();
  uStack_550 = uVar6 + 0x3800;
  uStack_5c8 = 0;
  uStack_5d0 = 0;
  uStack_5b8 = 0;
  uStack_5c0 = 0;
  uStack_560 = uVar6;
  uStack_558 = uVar6;
  func_0x00010787eb70(&uStack_5d0);
  for (iVar10 = 1; iVar10 != 4; iVar10 = iVar10 + 1) {
    func_0x00010787e968(param_1,&uStack_5d0,(int)(short)-(short)iVar10);
    func_0x000107881388();
    func_0x00010787e968(param_1,&uStack_5d0,iVar10);
    func_0x000107881388();
  }
  dVar14 = param_1;
  func_0x00010787e968(&uStack_5d0,0);
  func_0x000107881388();
LAB_10787dc54:
  if (uStack_560 == uStack_558) {
    func_0x00010787eafc(&uStack_560);
    return;
  }
  uVar6 = uStack_558 - 0x70;
  func_0x0001078811b8(&uStack_5d0,uVar6);
  dVar15 = dVar14;
  dVar16 = dVar17;
  uStack_558 = uVar6;
  if ((bStack_562 & 1) == 0) goto code_r0x00010787dc7c;
  goto LAB_10787dc98;
code_r0x00010787dc7c:
  pdVar7 = &dStack_548;
  func_0x00010785c5f8(pdVar7,&uStack_5d0);
  if ((int)pdVar7 != 0) {
    bStack_562 = (int)pdVar7 == 2;
    dVar15 = dVar14;
    dVar16 = dVar17;
LAB_10787dc98:
    func_0x00010787e9c8(&uStack_5d0,&dStack_c8);
    dVar14 = dVar15;
    dVar17 = dVar16;
    if (bStack_570 != uVar9) {
      dVar17 = param_3;
      if (param_3 <= dVar16) {
        dVar17 = dVar16;
      }
      param_3 = dVar13 + (double)(1 << (ulong)(uVar9 - bStack_570 & 0x1f)) + -2.0;
      dVar14 = dVar17;
      if (dVar17 <= dVar15) {
        dVar14 = dVar15;
      }
      if ((dVar14 <= param_3) || ((uint)bStack_570 < (uVar1 & 0xff))) {
        for (uVar11 = 0; uVar4 = uStack_568, uVar3 = uStack_56c, uVar11 != 4; uVar11 = uVar11 + 1) {
          func_0x00010787ea4c(abStack_640,&uStack_5d0,uVar11);
          uVar6 = uStack_558;
          iStack_5d8 = uVar4 * 2 + (uVar11 >> 1);
          uStack_5dc = uVar11 & 1 | uVar3 << 1;
          cStack_5e0 = bStack_570 + 1;
          sStack_5d4 = sStack_564;
          bStack_5d2 = bStack_562;
          if (uStack_558 < uStack_550) {
            func_0x0001078811ac();
            uVar6 = uVar6 + 0x70;
          }
          else {
            puVar8 = &uStack_560;
            func_0x00010787ebb0(puVar8,(long)(uStack_558 - uStack_560) / 0x70 + 1);
            FUN_10787eb2c(&uStack_b0,puVar8,(long)(uStack_558 - uStack_560) / 0x70,&uStack_550);
            uVar6 = uStack_a0;
            func_0x0001078811ac();
            uVar6 = uVar6 + 0x70;
            uVar12 = uStack_a8 + ((long)(uStack_558 - uStack_560) / -0x70) * 0x70;
            _memcpy(uVar12);
            uVar5 = uStack_550;
            uStack_550 = uStack_98;
            uStack_a0 = uStack_560;
            uStack_98 = uVar5;
            uStack_b0 = uStack_560;
            uStack_a8 = uStack_560;
            uStack_560 = uVar12;
            uStack_558 = uVar6;
            func_0x00010787eb70(&uStack_b0);
          }
          uStack_558 = uVar6;
        }
        goto LAB_10787dc54;
      }
    }
    if ((bStack_562 & 1) == 0) {
      pdVar7 = &dStack_548;
      FUN_10785c83c(pdVar7,&uStack_5d0,1);
      if ((int)pdVar7 == 0) goto LAB_10787dc54;
    }
    abStack_640[0] = (byte)uVar2;
    if (bStack_570 != uVar9) {
      abStack_640[0] = bStack_570;
    }
    dVar14 = ((double)uStack_56c + param_1 * (double)(int)sStack_564 + 0.5) - dStack_c8;
    dVar17 = ((double)uStack_568 + 0.5) - dStack_c0;
    sStack_63e = sStack_564;
    uStack_638 = uStack_56c;
    uStack_634 = uStack_568;
    dVar17 = dVar17 * dVar17;
    dVar14 = dVar17 + dVar14 * dVar14;
    param_3 = dStack_c0;
    dStack_630 = dVar14;
    func_0x00010787ec10(param_4,abStack_640);
  }
  goto LAB_10787dc54;
}



/* Entry: 10787eb2c; end: 10787eb6f;  */

long * FUN_10787eb2c(long *param_1,long param_2,undefined8 param_3,long param_4)

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



/* Entry: 10787eda4; end: 10787ede3;  */

long * FUN_10787eda4(long *param_1)

{
  long lVar1;
  
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



/* Entry: 10787f460; end: 10787f4a3;  */

void FUN_10787f460(void)

{
  undefined1 in_NG;
  long unaff_x22;
  
  func_0x000107881134();
  func_0x00010787f3b4();
  func_0x0001078815a0(*(undefined8 *)(unaff_x22 + 0x10));
  if ((((bool)in_NG) && (func_0x0001078810e0(), (bool)in_NG)) &&
     (func_0x0001078810b0(), (bool)in_NG)) {
    func_0x000107881110();
  }
  return;
}



/* Entry: 10787fc34; end: 10787fd47;  */

void FUN_10787fc34(void)

{
  bool bVar1;
  undefined1 uVar2;
  undefined8 extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x10;
  long extraout_x10_00;
  long lVar4;
  long extraout_x12;
  long unaff_x19;
  long unaff_x20;
  double dVar5;
  
  func_0x0001078814d8();
  func_0x0001078813ec();
  switch(extraout_x8) {
  case 0:
  case 1:
    break;
  case 2:
    if (*(double *)(unaff_x20 + -8) < *(double *)(unaff_x19 + 0x10)) {
      func_0x000107881448();
    }
    break;
  case 3:
    func_0x00010787faec();
    break;
  case 4:
    func_0x00010788182c();
    func_0x00010787fb98();
    break;
  case 5:
    func_0x0001078816ec(1);
    func_0x00010787fbdc();
    break;
  default:
    func_0x0001078818cc();
    func_0x00010787faec();
    lVar3 = 0;
    lVar4 = unaff_x19 + 0x48;
    while( true ) {
      bVar1 = lVar4 - unaff_x20 < 0;
      uVar2 = lVar4 == unaff_x20;
      if ((bool)uVar2) break;
      dVar5 = *(double *)(lVar4 + 0x10);
      func_0x0001078815a0(lVar3);
      lVar3 = extraout_x8_00;
      lVar4 = extraout_x10;
      if (bVar1) {
        do {
          func_0x00010788156c();
          if ((bool)uVar2) {
            uVar2 = true;
            break;
          }
          uVar2 = dVar5 == *(double *)(extraout_x12 + 0x28);
        } while (dVar5 < *(double *)(extraout_x12 + 0x28));
        func_0x0001078816d4();
        lVar3 = extraout_x8_01;
        lVar4 = extraout_x10_00;
        if ((bool)uVar2) {
          return;
        }
      }
      lVar4 = lVar4 + 0x18;
      lVar3 = lVar3 + 0x18;
    }
  }
  return;
}



/* Entry: 107880318; end: 10788034f;  */

long FUN_107880318(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109e4068);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107880ce0; end: 107880cef;  */

void FUN_107880ce0(short *param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  short sVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = (long)param_3;
  uVar5 = (ulong)(param_2 & 0xff);
  lVar2 = lVar6 + 1 + (-1L << (uVar5 & 0x3f));
  if (lVar6 + 1 != 0 && -2 < lVar6) {
    lVar2 = lVar6;
  }
  lVar6 = 1L << (uVar5 & 0x3f);
  sVar3 = 0;
  if (lVar6 != 0) {
    sVar3 = (short)(lVar2 / lVar6);
  }
  *param_1 = sVar3;
  uVar4 = (int)lVar6 - 1;
  if (param_4 <= uVar4) {
    uVar4 = param_4;
  }
  uVar1 = 0;
  if (-1 < (int)param_4) {
    uVar1 = uVar4;
  }
  *(char *)(param_1 + 2) = (char)param_2;
  *(int *)(param_1 + 4) = param_3 - (int)((long)sVar3 << (uVar5 & 0x3f));
  *(uint *)(param_1 + 6) = uVar1;
  return;
}



/* Entry: 107880e50; end: 107880e93;  */

long * FUN_107880e50(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  func_0x000107880e94();
  puVar1 = (undefined8 *)param_1[2];
  for (puVar2 = (undefined8 *)param_1[1]; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    __ZdlPv(*puVar2);
  }
  func_0x000107880f84();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1078810b0; end: 107881a07;  */

void FUN_1078810b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = unaff_x19[2];
  uVar4 = unaff_x19[1];
  uVar3 = *unaff_x19;
  uVar2 = unaff_x21[2];
  uVar5 = *unaff_x21;
  unaff_x19[1] = unaff_x21[1];
  *unaff_x19 = uVar5;
  unaff_x19[2] = uVar2;
  unaff_x21[1] = uVar4;
  *unaff_x21 = uVar3;
  unaff_x21[2] = uVar1;
  return;
}



/* Entry: 107882528; end: 1078825d3;  */

void FUN_107882528(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  long lVar3;
  
  func_0x00010788440c();
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  if (param_1 != param_2) {
    lVar1 = *unaff_x20;
    lVar2 = unaff_x20[1] - lVar1;
    if (lVar2 == 0) {
      *(undefined8 *)(unaff_x19 + 8) = 0;
    }
    else {
      func_0x0001078825d4();
      func_0x000104c31a9c();
      func_0x0001072694c4();
      lVar3 = *(long *)(unaff_x19 + 8);
      _memmove(lVar3,lVar1,lVar2);
      *(long *)(unaff_x19 + 8) = lVar3 + lVar2;
    }
  }
  *(long *)(unaff_x19 + 0x18) = unaff_x20[3];
  *(char *)(unaff_x19 + 0x20) = (char)unaff_x20[4];
  return;
}



/* Entry: 10788285c; end: 1078828b7;  */

long * FUN_10788285c(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  ulong unaff_x20;
  
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



/* Entry: 1078835f4; end: 107883953;  */

/* WARNING: Possible PIC construction at 0x000107883890: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107883894) */

void FUN_1078835f4(long *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  long *plStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  
  plVar10 = param_1 + 5;
  puVar15 = (undefined8 *)param_1[1];
  puVar14 = (undefined8 *)param_1[2];
  uVar2 = (long)puVar14 - (long)puVar15;
  lVar9 = 0;
  if (uVar2 != 0) {
    lVar9 = ((long)puVar14 - (long)puVar15) * 0x40 + -1;
  }
  uVar6 = param_1[4];
  if (lVar9 == *plVar10 + uVar6) {
    if (uVar6 < 0x200) {
      plVar11 = param_1 + 3;
      puVar12 = (undefined8 *)*plVar11;
      puVar13 = (undefined8 *)*param_1;
      if (uVar2 < (ulong)((long)puVar12 - (long)puVar13)) {
        uVar5 = 0x1000;
        __Znwm();
        if (puVar12 == puVar14) {
          if (puVar15 == puVar13) {
            lVar9 = (long)puVar12 - (long)puVar15 >> 2;
            if (puVar14 == puVar15) {
              lVar9 = 1;
            }
            plStack_70 = plVar11;
            func_0x000107883a58();
            func_0x00010788448c(lVar9 * 2 + 6);
            func_0x000107883a30(&puStack_90,param_1[1],param_1[2]);
            puVar14 = (undefined8 *)param_1[1];
            puVar15 = (undefined8 *)*param_1;
            puVar13 = (undefined8 *)param_1[3];
            puVar12 = (undefined8 *)param_1[2];
            param_1[1] = (long)puStack_88;
            *param_1 = (long)puStack_90;
            param_1[3] = (long)puStack_78;
            param_1[2] = (long)puStack_80;
            puStack_90 = puVar15;
            puStack_88 = puVar14;
            puStack_80 = puVar12;
            puStack_78 = puVar13;
            func_0x0001078844cc();
            puVar15 = (undefined8 *)param_1[1];
          }
          puVar15[-1] = uVar5;
          param_1[1] = (long)puVar15;
          func_0x000107883954(param_1,uVar5);
        }
        else {
          *puVar14 = uVar5;
          param_1[2] = (long)(puVar14 + 1);
        }
      }
      else {
        puVar7 = (undefined8 *)((long)puVar12 - (long)puVar13 >> 2);
        if (puVar12 == puVar13) {
          puVar7 = (undefined8 *)0x1;
        }
        plStack_98 = plVar11;
        func_0x000107883a58();
        puVar12 = (undefined8 *)((long)puVar7 + uVar2);
        puVar13 = puVar7 + param_2;
        uVar5 = 0x1000;
        lVar9 = param_2;
        puStack_b8 = puVar7;
        puStack_b0 = puVar12;
        puStack_a8 = puVar12;
        puStack_a0 = puVar13;
        __Znwm();
        uStack_c0 = 0x200;
        puVar8 = puVar12;
        plStack_c8 = plVar10;
        if (uVar2 == param_2 * 8) {
          if (puVar14 == puVar15) {
            puVar15 = (undefined8 *)0x1;
            uStack_d0 = uVar5;
            plStack_70 = plVar11;
            func_0x000107883a58();
            puStack_78 = puVar15 + lVar9;
            puStack_90 = puVar15;
            puStack_88 = puVar15;
            puStack_80 = puVar15;
            func_0x000107883a30(&puStack_90,puVar12,puVar12);
            puVar1 = puStack_78;
            puVar8 = puStack_80;
            puVar14 = puStack_88;
            puVar15 = puStack_90;
            puStack_b8 = puStack_90;
            puStack_b0 = puStack_88;
            puStack_a0 = puStack_78;
            puStack_90 = puVar7;
            puStack_88 = puVar12;
            puStack_80 = puVar12;
            puStack_78 = puVar13;
            func_0x0001078844cc();
            puVar7 = puVar15;
            puVar12 = puVar14;
            puVar13 = puVar1;
          }
          else {
            puVar12 = puVar12 + (((long)puVar12 - (long)puVar7 >> 3) + 1) / -2;
            puVar8 = puVar12;
            puStack_b0 = puVar12;
          }
        }
        puVar15 = puVar8 + 1;
        *puVar8 = uVar5;
        uStack_d0 = 0;
        puVar14 = (undefined8 *)param_1[2];
        puStack_a8 = puVar15;
        while (puVar8 = (undefined8 *)param_1[1], puVar14 != puVar8) {
          puVar8 = puVar12;
          if (puVar12 == puVar7) {
            if (puVar15 < puVar13) {
              lVar9 = (long)puVar15 - (long)puVar7;
              puVar1 = puVar15 + (((long)puVar13 - (long)puVar15 >> 3) + 1) / 2;
              puVar8 = (undefined8 *)((long)puVar1 - ((long)puVar15 - (long)puVar7));
              puVar15 = puVar1;
              if (lVar9 != 0) {
                _memmove(puVar8,puVar12,lVar9);
              }
            }
            else {
              lVar9 = (long)puVar13 - (long)puVar7 >> 2;
              if ((long)puVar13 - (long)puVar7 == 0) {
                lVar9 = 1;
              }
              plStack_70 = plVar11;
              func_0x000107883a58(lVar9);
              func_0x00010788448c(lVar9 * 2 + 6);
              func_0x000107883a30(&puStack_90,puVar7,puVar15);
              puVar4 = puStack_78;
              puVar3 = puStack_80;
              puVar8 = puStack_88;
              puVar1 = puStack_90;
              puStack_90 = puVar7;
              puStack_88 = puVar12;
              puStack_80 = puVar15;
              puStack_78 = puVar13;
              func_0x0001078844cc();
              puVar7 = puVar1;
              puVar15 = puVar3;
              puVar13 = puVar4;
            }
          }
          puVar14 = puVar14 + -1;
          puVar12 = puVar8 + -1;
          *puVar12 = *puVar14;
        }
        puStack_b8 = (undefined8 *)*param_1;
        *param_1 = (long)puVar7;
        param_1[1] = (long)puVar12;
        puStack_a0 = (undefined8 *)param_1[3];
        puStack_a8 = (undefined8 *)param_1[2];
        param_1[2] = (long)puVar15;
        param_1[3] = (long)puVar13;
        puStack_b0 = puVar8;
        func_0x000107883a8c(&uStack_d0);
        func_0x000107883ab8(&puStack_b8);
      }
    }
    else {
      param_1[4] = uVar6 - 0x200;
      uVar5 = *puVar15;
      param_1[1] = (long)(puVar15 + 1);
      func_0x000107883954(param_1,uVar5);
    }
  }
  if (param_1[2] != param_1[1]) {
    return;
  }
  return;
}



/* Entry: 107884238; end: 107884283;  */

void FUN_107884238(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x18) {
    func_0x000107883d20(param_1,param_2,param_4,1);
  }
  return;
}



/* Entry: 107884b38; end: 107884b67;  */

long FUN_107884b38(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x000107466e50(param_1);
  }
  return param_1;
}



/* Entry: 107885088; end: 107885417;  */

void FUN_107885088(undefined8 *param_1,char *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  char *pcVar1;
  ulong uVar2;
  byte bVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 **ppuVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 *puStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  char cStack_e8;
  undefined1 auStack_d8 [24];
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined8 uStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_78;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uStack_110 = param_4;
  uStack_108 = param_5;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(param_1);
  pcVar1 = param_2 + param_3;
LAB_1078850e8:
  do {
    do {
      if (param_2 == pcVar1) {
        if (1 < (ulong)param_6[1]) {
          puVar8 = param_1;
          __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm(param_1,0x3f,0);
          if (puVar8 == (undefined8 *)0xffffffffffffffff) {
            uVar11 = 0xffffffffffffffff;
          }
          else {
            uVar11 = (ulong)*(char *)((long)param_1 + 0x17);
            if ((long)uVar11 < 0) {
              uVar11 = param_1[1];
            }
          }
          FUN_107876488(param_1,&uStack_110,*param_6,param_6[1]);
          bVar3 = *(byte *)((long)param_1 + 0x17);
          uVar2 = param_1[1];
          if (-1 < (char)bVar3) {
            uVar2 = (ulong)bVar3;
          }
          if (uVar11 < uVar2) {
            puVar8 = (undefined8 *)*param_1;
            if (-1 < (char)bVar3) {
              puVar8 = param_1;
            }
            *(undefined1 *)((long)puVar8 + uVar11) = 0x26;
          }
        }
        return;
      }
      puStack_98 = (undefined1 *)CONCAT71(puStack_98._1_7_,0x7b);
      pcVar4 = param_2;
      func_0x00010061f9f8(param_2,pcVar1,&puStack_98);
      func_0x0001000da738(param_1,param_2,pcVar4);
      param_2 = pcVar4;
    } while (pcVar4 == pcVar1);
    for (param_2 = pcVar4 + 1; param_2 != pcVar1; param_2 = param_2 + 1) {
      puVar5 = &UNK_10deb03a8;
      __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm
                (&UNK_10deb03a8,(long)*param_2,0);
      if (puVar5 != (undefined *)0xffffffffffffffff) {
        if (*param_2 == '}') {
          func_0x00010533b3bc(auStack_d8,pcVar4 + 1,param_2);
          puVar6 = auStack_d8;
          func_0x000100152bb8(puVar6,"path");
          if ((int)puVar6 == 0) {
            puVar6 = auStack_d8;
            func_0x000100152bb8(puVar6,"domain");
            if ((int)puVar6 != 0) {
              uVar9 = param_6[4];
              func_0x000107885444();
              puStack_b0 = puVar6;
              uStack_a8 = uVar9;
              func_0x00010788542c();
              goto LAB_1078851f4;
            }
            puVar6 = auStack_d8;
            func_0x000100152bb8(puVar6,"scheme");
            if ((int)puVar6 != 0) {
              uVar9 = param_6[2];
              func_0x000107885444();
              puStack_b0 = puVar6;
              uStack_a8 = uVar9;
              func_0x00010788542c();
              goto LAB_1078851f4;
            }
            puVar6 = auStack_d8;
            func_0x000100152bb8(puVar6,&UNK_10f430a0b);
            if ((int)puVar6 != 0) {
              func_0x00010788545c();
              puVar10 = puStack_98;
              func_0x000107885444();
              puStack_c0 = puVar6;
              puStack_b8 = puVar10;
              func_0x000107885438();
LAB_107885310:
              uStack_f8 = uStack_a8;
              puStack_100 = puStack_b0;
              puStack_f0 = puStack_a0;
              uStack_a8 = 0;
              puStack_a0 = (undefined1 *)0x0;
              puStack_b0 = (undefined1 *)0x0;
              ppuVar7 = &puStack_b0;
              goto LAB_107885214;
            }
            puVar6 = auStack_d8;
            func_0x000100152bb8(puVar6,&DAT_10f3eb489);
            if ((int)puVar6 != 0) {
              func_0x00010788545c();
              puVar10 = puStack_78;
              func_0x000107885444();
              puStack_c0 = puVar6;
              puStack_b8 = puVar10;
              func_0x000107885438();
              goto LAB_107885310;
            }
            puVar6 = auStack_d8;
            func_0x000100152bb8(puVar6,&DAT_10f430a15);
            if ((int)puVar6 != 0) {
              func_0x00010788545c();
              puVar10 = puStack_88;
              func_0x000107885444();
              puStack_c0 = puVar6;
              puStack_b8 = puVar10;
              func_0x000107885438();
              goto LAB_107885310;
            }
            puStack_100 = (undefined1 *)((ulong)puStack_100 & 0xffffffffffffff00);
            cStack_e8 = '\0';
          }
          else {
            uVar9 = param_6[6];
            func_0x000107885444();
            puStack_b0 = puVar6;
            uStack_a8 = uVar9;
            func_0x00010788542c();
LAB_1078851f4:
            uStack_f8 = uStack_90;
            puStack_100 = puStack_98;
            puStack_f0 = puStack_88;
            uStack_90 = 0;
            puStack_88 = (undefined1 *)0x0;
            puStack_98 = (undefined1 *)0x0;
            ppuVar7 = &puStack_98;
LAB_107885214:
            cStack_e8 = '\x01';
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppuVar7);
          }
          if (cStack_e8 == '\x01') {
            func_0x0001004c3ca0(param_1,&puStack_100);
          }
          else {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                      (param_1,&DAT_10f2da0fd);
            func_0x0001004c3ca0(param_1,auStack_d8);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                      (param_1,&DAT_10f2da10d);
          }
          func_0x0001001148fc(&puStack_100);
          param_2 = param_2 + 1;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
          goto LAB_1078850e8;
        }
        break;
      }
    }
    func_0x0001000da738(param_1,pcVar4,param_2);
  } while( true );
}



/* Entry: 107886760; end: 10788679f;  */

long FUN_107886760(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010788893c();
    _objc_msgSend(lVar2,lVar1);
  }
  func_0x000107887ccc(param_1 + 0x30);
  return param_1;
}



/* Entry: 107886950; end: 107886c0f;  */

void FUN_107886950(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  
  func_0x00010788abec();
  func_0x000107887ed4();
  _objc_msgSend();
  lVar1 = *(long *)(param_1 + 0x30) + (param_4 & 0xffffffff) * 0x10;
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined4 *)(lVar1 + 0xe8) = 0;
  return;
}



/* Entry: 10788717c; end: 1078871ff;  */

void FUN_10788717c(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x30);
  lVar2 = *(long *)(lVar1 + 0x6f0);
  if ((lVar2 != 0) && (*(int *)(lVar1 + 0x2e0) != param_2)) {
    lVar4 = 0xe0;
    for (uVar3 = 0; uVar3 < (ulong)(*(long *)(lVar2 + 0x178) - *(long *)(lVar2 + 0x170) >> 3);
        uVar3 = uVar3 + 1) {
      if (*(long *)(lVar1 + lVar4) != 0) {
        func_0x0001078869ac(param_1,*(long *)(lVar1 + lVar4),
                            param_2 * (int)*(undefined8 *)(*(long *)(lVar2 + 0x170) + uVar3 * 8),
                            uVar3);
        lVar1 = *(long *)(param_1 + 0x30);
        lVar2 = *(long *)(lVar1 + 0x6f0);
      }
      lVar4 = lVar4 + 0x10;
    }
    *(int *)(lVar1 + 0x2e0) = param_2;
  }
  return;
}



/* Entry: 107887580; end: 1078875b3;  */

void FUN_107887580(long param_1)

{
  if (*(long *)(*(long *)(param_1 + 0x30) + 0x6f0) != 0) {
    func_0x000107887d9c();
    func_0x000107887e40();
  }
  return;
}



/* Entry: 10788780c; end: 107887863;  */

void FUN_10788780c(long param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  uint uVar2;
  
  if (*(long *)(*(long *)(param_1 + 0x30) + 0x6f0) != 0) {
    func_0x000107887d9c();
    uVar2 = (uint)param_2;
    if ((((uint)param_4 == uVar2 >> 0x18) && ((param_2 >> 0x20 & 1) != 0)) &&
       (((uint)(param_2 >> 0x10) & 0xff) == 1)) {
      if ((~uVar2 & 0xff) != 0) {
        FUN_107886950(param_1,param_3,(param_4 & 0xffffffff) << 2,uVar2 & 0xff);
      }
      if ((~uVar2 & 0xff00) != 0) {
        FUN_107889c50();
        func_0x000107887ed4();
        _objc_msgSend();
        lVar1 = *(long *)(param_1 + 0x30) + (param_2 >> 8 & 0xff) * 0x10;
        *(undefined8 *)(lVar1 + 1000) = 0;
        *(undefined4 *)(lVar1 + 0x3f0) = 0;
      }
    }
    return;
  }
  return;
}



/* Entry: 107887b5c; end: 107887c93;  */

void FUN_107887b5c(long param_1,char *param_2,uint param_3,int param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  if (*(long *)(lVar2 + 0x6f0) == 0) {
    return;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 8);
  *(ulong *)(lVar1 + 0x6c) =
       CONCAT44((int)((ulong)*(undefined8 *)(lVar1 + 0x6c) >> 0x20) + param_4,
                (int)*(undefined8 *)(lVar1 + 0x6c) + 1);
  if (*param_2 == '\x04') {
    *(uint *)(lVar1 + 0x68) = *(int *)(lVar1 + 0x68) + param_3 / 3;
  }
  func_0x0001078868a8(param_2);
  if (*(long *)(lVar2 + 200) == 0) {
    func_0x0001078888cc();
    func_0x000107887ed4();
  }
  else {
    func_0x00010788885c();
    func_0x000107887ed4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 107887ee8; end: 107887efb;  */

void FUN_107887ee8(void)

{
  func_0x000107887efc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107888084; end: 1078880f3;  */

undefined * FUN_107888084(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113823e90 & 1) == 0) {
    iVar1 = 0x13823e90;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430a65;
      _objc_lookUpClass();
      puRam0000000113823e88 = puVar2;
      ___cxa_guard_release(0x113823e90);
    }
  }
  return puRam0000000113823e88;
}



/* Entry: 1078883fc; end: 10788846b;  */

undefined * FUN_1078883fc(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113823ef0 & 1) == 0) {
    iVar1 = 0x13823ef0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430b27;
      _sel_registerName();
      puRam0000000113823ee8 = puVar2;
      ___cxa_guard_release(0x113823ef0);
    }
  }
  return puRam0000000113823ee8;
}



/* Entry: 10788877c; end: 1078887eb;  */

undefined * FUN_10788877c(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113823f70 & 1) == 0) {
    iVar1 = 0x13823f70;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430c03;
      _sel_registerName();
      puRam0000000113823f68 = puVar2;
      ___cxa_guard_release(0x113823f70);
    }
  }
  return puRam0000000113823f68;
}



/* Entry: 107888af8; end: 107888b67;  */

undefined * FUN_107888af8(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113823fe0 & 1) == 0) {
    iVar1 = 0x13823fe0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430cfc;
      _sel_registerName();
      puRam0000000113823fd8 = puVar2;
      ___cxa_guard_release(0x113823fe0);
    }
  }
  return puRam0000000113823fd8;
}



/* Entry: 107888e70; end: 107888edb;  */

undefined8 FUN_107888e70(void)

{
  int iVar1;
  
  if ((bRam0000000113726448 & 1) == 0) {
    iVar1 = 0x13726448;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _sel_registerName(&UNK_10f430dca);
      func_0x0001078902dc(0x113726440);
    }
  }
  return uRam0000000113726440;
}



/* Entry: 1078891e4; end: 107889253;  */

undefined * FUN_1078891e4(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824090 & 1) == 0) {
    iVar1 = 0x13824090;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430ea4;
      _sel_registerName();
      puRam0000000113824088 = puVar2;
      ___cxa_guard_release(0x113824090);
    }
  }
  return puRam0000000113824088;
}



/* Entry: 107889560; end: 1078895cf;  */

undefined * FUN_107889560(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824100 & 1) == 0) {
    iVar1 = 0x13824100;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430fb1;
      _sel_registerName();
      puRam00000001138240f8 = puVar2;
      ___cxa_guard_release(0x113824100);
    }
  }
  return puRam00000001138240f8;
}



/* Entry: 1078898d8; end: 107889943;  */

undefined8 FUN_1078898d8(void)

{
  int iVar1;
  
  if ((bRam00000001137264b8 & 1) == 0) {
    iVar1 = 0x137264b8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _sel_registerName(&UNK_10f431073);
      func_0x0001078902dc(0x1137264b0);
    }
  }
  return uRam00000001137264b0;
}



/* Entry: 107889c50; end: 107889cbf;  */

undefined * FUN_107889c50(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam00000001138241c0 & 1) == 0) {
    iVar1 = 0x138241c0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f431149;
      _sel_registerName();
      puRam00000001138241b8 = puVar2;
      ___cxa_guard_release(0x1138241c0);
    }
  }
  return puRam00000001138241b8;
}



/* Entry: 107889fcc; end: 10788a03b;  */

undefined * FUN_107889fcc(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824230 & 1) == 0) {
    iVar1 = 0x13824230;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f4311fd;
      _sel_registerName();
      puRam0000000113824228 = puVar2;
      ___cxa_guard_release(0x113824230);
    }
  }
  return puRam0000000113824228;
}



/* Entry: 10788a33c; end: 10788a3ab;  */

undefined * FUN_10788a33c(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824270 & 1) == 0) {
    iVar1 = 0x13824270;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f431273;
      _sel_registerName();
      puRam0000000113824268 = puVar2;
      ___cxa_guard_release(0x113824270);
    }
  }
  return puRam0000000113824268;
}



/* Entry: 10788a6b0; end: 10788a71f;  */

undefined * FUN_10788a6b0(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam00000001138242c0 & 1) == 0) {
    iVar1 = 0x138242c0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f43133e;
      _sel_registerName();
      puRam00000001138242b8 = puVar2;
      ___cxa_guard_release(0x1138242c0);
    }
  }
  return puRam00000001138242b8;
}



/* Entry: 10788aa2c; end: 10788aa9b;  */

undefined * FUN_10788aa2c(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824330 & 1) == 0) {
    iVar1 = 0x13824330;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f4313be;
      _sel_registerName();
      puRam0000000113824328 = puVar2;
      ___cxa_guard_release(0x113824330);
    }
  }
  return puRam0000000113824328;
}



/* Entry: 10788adac; end: 10788ae1b;  */

undefined * FUN_10788adac(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam00000001138243b0 & 1) == 0) {
    iVar1 = 0x138243b0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f43146b;
      _sel_registerName();
      puRam00000001138243a8 = puVar2;
      ___cxa_guard_release(0x1138243b0);
    }
  }
  return puRam00000001138243a8;
}



/* Entry: 10788b128; end: 10788b197;  */

undefined * FUN_10788b128(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824420 & 1) == 0) {
    iVar1 = 0x13824420;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f4314c6;
      _objc_lookUpClass();
      puRam0000000113824418 = puVar2;
      ___cxa_guard_release(0x113824420);
    }
  }
  return puRam0000000113824418;
}



/* Entry: 10788b4a0; end: 10788b50f;  */

undefined * FUN_10788b4a0(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824480 & 1) == 0) {
    iVar1 = 0x13824480;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f431529;
      _sel_registerName();
      puRam0000000113824478 = puVar2;
      ___cxa_guard_release(0x113824480);
    }
  }
  return puRam0000000113824478;
}



/* Entry: 10788c46c; end: 10788c4bf;  */

void FUN_10788c46c(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  uVar1 = 8;
  __Znwm(8);
  func_0x000107877718();
  uStack_28 = 0;
  func_0x00010788f734(param_1 + 0x80,uVar1);
  FUN_10788f710(&uStack_28);
  return;
}



/* Entry: 10788d150; end: 10788d223;  */

void FUN_10788d150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  long lStack_48;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_39 = param_5;
  func_0x000107890558();
  uStack_38 = param_2;
  func_0x00010788c678(&uStack_60);
  func_0x00010788d224(&lStack_48,&uStack_38,&uStack_39,&uStack_60);
  func_0x000107887f60(&uStack_60);
  func_0x0001073da214(param_4,0,uStack_39,1);
  uStack_5c = (undefined1)((ulong)param_4 >> 0x20);
  uStack_60 = (undefined4)param_4;
  *(undefined4 *)(lStack_48 + 0x19) = uStack_60;
  *(undefined1 *)(lStack_48 + 0x1d) = uStack_5c;
  func_0x00010788cd4c();
  *(undefined8 *)(lStack_48 + 0x20) = unaff_x20;
  *unaff_x19 = lStack_48;
  return;
}



/* Entry: 10788d728; end: 10788d7cb;  */

void FUN_10788d728(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  do {
    func_0x0001078903c8();
  } while (extraout_w10 != 0);
  uVar1 = 0x240;
  __Znwm();
  uStack_48 = param_4[1];
  uStack_50 = *param_4;
  if (param_4[1] != 0) {
    do {
      func_0x000107890504();
    } while (extraout_w10_00 != 0);
  }
  func_0x000107893f50(uVar1,param_3,param_2,&uStack_50);
  func_0x00010725afe8(&uStack_50);
  *param_1 = uVar1;
  return;
}



/* Entry: 10788e16c; end: 10788e413;  */

void FUN_10788e16c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 auStack_b0 [6];
  undefined4 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined4 uStack_68;
  undefined1 uStack_64;
  
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  auStack_b0[0] = 0x9d;
  uStack_98 = 0;
  lVar1 = param_1;
  func_0x000107890348();
  uStack_64 = 1;
  func_0x00010789053c();
  func_0x0001078902fc(*(undefined4 *)(lVar1 + 0x6c));
  uStack_c8 = 3;
  func_0x00010743fa44(puVar2,auStack_b0,&uStack_c0,&uStack_d0,7);
  func_0x000107890430();
  func_0x000107890378(0x9e);
  func_0x0001078902c0();
  func_0x0001078902fc(*(undefined4 *)(param_1 + 0x70));
  uStack_c8 = 3;
  func_0x0001078902a8();
  func_0x000107890430();
  func_0x000107890378(0xa1);
  func_0x0001078902c0();
  func_0x0001078902fc(*(undefined4 *)(param_1 + 0x68));
  uStack_c8 = 3;
  func_0x0001078902a8();
  func_0x000107890430();
  func_0x000107890378(0xeb);
  func_0x0001078902c0();
  func_0x0001078902fc(*(undefined4 *)(param_1 + 0x74));
  uStack_c8 = 3;
  func_0x0001078902a8();
  func_0x000107890430();
  func_0x000107890378(0xec);
  func_0x0001078902c0();
  func_0x0001078902fc(*(undefined4 *)(param_1 + 0x78));
  uStack_c8 = 3;
  func_0x0001078902a8();
  func_0x000107890430();
  func_0x000107890378(0xa2);
  func_0x0001078902c0();
  func_0x0001078902fc(*(undefined4 *)(param_1 + 0x34));
  uStack_c8 = 3;
  func_0x0001078902a8();
  func_0x000107890430();
  func_0x000107890378(0xa3);
  func_0x0001078902c0();
  func_0x0001078902fc(*(undefined4 *)(param_1 + 0x3c));
  uStack_c8 = 3;
  func_0x0001078902a8();
  func_0x000107890430();
  func_0x000107890378(0xa4);
  func_0x0001078902c0();
  uStack_c0 = *(undefined8 *)(param_1 + 0x50);
  uStack_b8 = 3;
  uStack_d0 = *puVar2;
  uStack_c8 = 3;
  func_0x0001078902a8();
  func_0x000107890430();
  auStack_b0[0] = 0xa5;
  uStack_98 = 0;
  func_0x000107890348();
  uStack_64 = 1;
  func_0x00010789053c();
  uStack_c0 = *(undefined8 *)(param_1 + 0x48);
  func_0x0001078908cc();
  func_0x0001078902a8();
  func_0x000107890430();
  func_0x000107890378(0xa7);
  ppuStack_90 = &PTR_DAT_110996720;
  uStack_88 = 0;
  uStack_68 = 0;
  uStack_64 = 1;
  func_0x00010789053c();
  uStack_c0 = *(undefined8 *)(param_1 + 0x58);
  func_0x0001078908cc();
  func_0x0001078902a8();
  func_0x000107890430();
  func_0x000107890378(0xa9);
  ppuStack_90 = &PTR_DAT_110996720;
  uStack_88 = 0;
  uStack_68 = 0;
  uStack_64 = 1;
  func_0x00010789053c();
  func_0x0001078902fc(*(undefined4 *)(param_1 + 0x38));
  uStack_c8 = 3;
  func_0x0001078902a8();
  func_0x000107890430();
  func_0x000107890378(0xaa);
  ppuStack_90 = &PTR_DAT_110996720;
  uStack_88 = 0;
  uStack_68 = 0;
  uStack_64 = 1;
  func_0x00010789053c();
  func_0x0001078902fc(*(undefined4 *)(param_1 + 0x30));
  uStack_c8 = 3;
  func_0x0001078902a8();
  func_0x000107890430();
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}



/* Entry: 10788f14c; end: 10788f153;  */

void FUN_10788f14c(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001078907a8(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -4;
    func_0x00010788f614();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10788f324; end: 10788f33f;  */

void FUN_10788f324(long param_1)

{
  if (*(int *)(param_1 + 4) != -1) {
    return;
  }
  func_0x00010563ab98();
  func_0x0001078906dc();
  func_0x000107890530();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 10788f4f0; end: 10788f53f;  */

long FUN_10788f4f0(long param_1,long param_2)

{
  long lVar1;
  code *extraout_x8;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    func_0x0001078908a4();
    (*extraout_x8)();
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 10788f710; end: 10788f733;  */

undefined8 FUN_10788f710(undefined8 param_1)

{
  func_0x00010788f734(param_1,0);
  return param_1;
}



/* Entry: 10788f82c; end: 10788f853;  */

void FUN_10788f82c(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000107890670();
  if (param_1 != 0) {
    func_0x000107250860();
  }
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  func_0x0001072508cc(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 10788fa08; end: 10788fab3;  */

undefined8 * FUN_10788fa08(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e4448;
  func_0x000107276ba4(param_1 + 0x4d6);
  func_0x00010750828c(param_1 + 0x4d1);
  func_0x00010788f184(param_1 + 0x39);
  func_0x00010788f1bc(param_1 + 1);
  return param_1;
}



/* Entry: 10788fd00; end: 10788fd2f;  */

void FUN_10788fd00(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107890504();
    } while (extraout_w10 != 0);
  }
  param_1[2] = param_2[2];
  return;
}



/* Entry: 1078900c0; end: 10789010f;  */

void FUN_1078900c0(undefined8 *param_1)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x0001078907c8();
  *param_1 = &PTR_DAT_1109e4508;
  FUN_10788fd00(param_1 + 1);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107890504();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x20 + 0x28);
  return;
}



/* Entry: 1078902a8; end: 107890907;  */

void FUN_1078902a8(void)

{
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  long unaff_x20;
  
  func_0x00010743fe30();
  if (extraout_x8 != 0) {
    do {
      func_0x00010743fe20();
    } while (extraout_w10 != 0);
  }
  if (unaff_x20 != 0) {
    func_0x00010743fe78();
    func_0x00010743fe70(*(undefined8 *)(extraout_x8_00 + 0x20));
  }
  func_0x00010743fe58();
  return;
}



/* Entry: 107890ad0; end: 107890c17;  */

void FUN_107890ad0(long param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010724cbe8(auStack_b0);
  uStack_78 = 0;
  uVar1 = 0x28;
  __Znwm();
  func_0x000107890d70();
  func_0x000105302f48();
  uStack_70 = 0;
  uStack_60 = 0x4802000000;
  puStack_58 = &UNK_107890c24;
  puStack_50 = &UNK_107890c30;
  puVar2 = auStack_48;
  uStack_78 = uVar1;
  puStack_68 = &uStack_70;
  func_0x00010788f540(puVar2,auStack_90);
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0x42000000;
  puStack_c8 = &UNK_107890c38;
  puStack_c0 = &UNK_1109e4688;
  puStack_b8 = &uStack_70;
  func_0x00010788831c();
  _objc_msgSend(uVar3,puVar2,&puStack_d8);
  func_0x000107890d98();
  func_0x00010788f648(auStack_48);
  func_0x00010788f648(auStack_90);
  func_0x0001006393ec(auStack_b0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010788f648(auStack_90);
  func_0x0001006393ec(auStack_b0);
  func_0x000107890d68();
  return;
}



/* Entry: 107890d3c; end: 107890d5f;  */

undefined8 FUN_107890d3c(undefined8 param_1)

{
  func_0x000107890d70();
  func_0x00010724cbe8();
  return param_1;
}



/* Entry: 10789112c; end: 1078916c3;  */

void FUN_10789112c(long param_1,undefined8 *param_2,long *param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  long unaff_x19;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  
  func_0x0001078919d4();
  uVar6 = *param_2;
  plVar13 = (long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *plVar13 = 0;
  *(undefined8 *)(param_1 + 8) = uVar6;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_107888084();
  lVar10 = param_1;
  func_0x00010788b198();
  _objc_msgSend(param_1,lVar10);
  lVar10 = param_1;
  func_0x00010788b208();
  _objc_msgSend(param_1,lVar10);
  if (*plVar13 == param_1) {
    func_0x00010788b354();
    func_0x0001078919a4();
  }
  else {
    lVar10 = param_1;
    if (*plVar13 != 0) {
      func_0x00010788b354();
      func_0x00010789198c();
    }
    *plVar13 = param_1;
    param_1 = lVar10;
  }
  lVar10 = 0x18;
  for (plVar13 = param_3; (lVar10 != 0x38 && ((char)plVar13[2] == '\x01')); plVar13 = plVar13 + 3) {
    func_0x0001078884dc();
    func_0x000107891984();
    lVar9 = param_1;
    func_0x000107889094();
    _objc_msgSend(param_1,lVar9,0);
    lVar9 = param_1;
    FUN_107889fcc();
    _objc_msgSend(param_1,lVar9,2);
    plVar11 = plVar13;
    func_0x0001078916c4();
    uVar6 = *(undefined8 *)(*(long *)(*plVar11 + 0x10) + 0x30);
    plVar4 = plVar11;
    func_0x00010788a9bc();
    lVar2 = param_1;
    _objc_msgSend(param_1,plVar4,uVar6);
    lVar9 = plVar11[1];
    func_0x000107889f5c();
    lVar3 = param_1;
    _objc_msgSend(param_1,lVar2,(int)lVar9);
    func_0x00010788a870();
    _objc_msgSend(param_1,lVar3,1);
    func_0x00010788b430();
    func_0x000107891984();
    lVar9 = *(long *)(unaff_x19 + lVar10);
    if (lVar9 == param_1) {
      func_0x00010788b354();
      func_0x00010789198c();
    }
    else {
      lVar2 = param_1;
      if (lVar9 != 0) {
        func_0x00010788b354();
        _objc_msgSend(lVar9,lVar2);
        lVar2 = lVar9;
      }
      *(long *)(unaff_x19 + lVar10) = param_1;
      param_1 = lVar2;
    }
    *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
    lVar10 = lVar10 + 8;
  }
  if ((char)param_3[0xf] != '\x01') {
    return;
  }
  plVar13 = param_3 + 0xc;
  func_0x0001078916dc();
  if ((int)plVar13[2] == 0) {
    lVar10 = *(long *)(*plVar13 + 0x10);
    func_0x00010788b430();
    func_0x000107891984();
    plVar11 = *(long **)(unaff_x19 + 0x40);
    if (plVar11 == plVar13) {
      func_0x00010788b354();
      func_0x00010789198c();
    }
    else {
      plVar4 = plVar13;
      if (plVar11 != (long *)0x0) {
        func_0x00010788b354();
        _objc_msgSend(plVar11,plVar4);
        plVar4 = plVar11;
      }
      *(long **)(unaff_x19 + 0x40) = plVar13;
      plVar13 = plVar4;
    }
    func_0x000107889104();
    func_0x000107891984();
    uVar7 = (long)plVar13 - 0xfa;
    bVar1 = (1L << (uVar7 & 0x3f) & 0x425U) == 0;
    if (10 < uVar7 || bVar1) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = *(long **)(lVar10 + 0x30);
    }
    bVar1 = 10 >= uVar7 && !bVar1;
    func_0x000107889104();
    func_0x000107891984();
    if ((long)plVar13 - 0xfdU < 10 && (1L << ((long)plVar13 - 0xfdU & 0x3f) & 0x385U) != 0) {
      plVar13 = *(long **)(lVar10 + 0x30);
      uVar6 = 1;
    }
    else {
      plVar13 = (long *)0x0;
      uVar6 = 0;
    }
  }
  else {
    plVar13 = (long *)0x0;
    uVar6 = 0;
    bVar1 = false;
    plVar11 = (long *)0x0;
  }
  param_3 = param_3 + 0xc;
  func_0x0001078916dc();
  plVar4 = param_3;
  if ((int)param_3[2] != 1) goto LAB_1078914c4;
  lVar10 = *(long *)(*param_3 + 0x10);
  uVar8 = (uint)*(byte *)(*param_3 + 8);
  if (uVar8 - 0xc < 2) {
    plVar11 = *(long **)(lVar10 + 8);
    func_0x00010788b430();
    plVar4 = plVar11;
    _objc_msgSend(plVar11,param_3);
    plVar12 = *(long **)(unaff_x19 + 0x40);
    if (plVar12 == plVar4) {
      func_0x00010788b354();
      func_0x000107891994();
      goto LAB_1078914c4;
    }
    param_3 = plVar4;
    if (plVar12 != (long *)0x0) {
      func_0x00010788b354();
      _objc_msgSend(plVar12,plVar4);
      plVar4 = plVar12;
    }
  }
  else {
    if (1 < uVar8 - 0xe) goto LAB_1078914c4;
    plVar13 = *(long **)(lVar10 + 8);
    func_0x00010788b430();
    func_0x000107891984();
    plVar12 = *(long **)(unaff_x19 + 0x40);
    plVar11 = plVar13;
    if (plVar12 == param_3) {
      func_0x00010788b354();
      func_0x000107891994();
      plVar4 = param_3;
      goto LAB_1078914c4;
    }
    plVar4 = param_3;
    if (plVar12 != (long *)0x0) {
      func_0x00010788b354();
      _objc_msgSend(plVar12,plVar4);
      plVar4 = plVar12;
    }
  }
  *(long **)(unaff_x19 + 0x40) = param_3;
LAB_1078914c4:
  if (plVar11 != (long *)0x0) {
    func_0x00010788870c();
    func_0x00010789197c();
    plVar12 = plVar4;
    FUN_107889fcc();
    func_0x0001078919bc();
    func_0x00010788a870();
    plVar5 = plVar4;
    _objc_msgSend(plVar4,plVar12,bVar1);
    func_0x00010788a9bc();
    _objc_msgSend(plVar4,plVar5,plVar11);
    func_0x000107889f5c();
    func_0x0001078919c8();
  }
  if (plVar13 != (long *)0x0) {
    func_0x00010788aefc();
    func_0x00010789197c();
    plVar11 = plVar4;
    FUN_107889fcc();
    func_0x0001078919bc();
    func_0x00010788a870();
    plVar12 = plVar4;
    _objc_msgSend(plVar4,plVar11,uVar6);
    func_0x00010788a9bc();
    _objc_msgSend(plVar4,plVar12,plVar13);
    func_0x000107889f5c();
    func_0x0001078919c8();
  }
  return;
}



/* Entry: 1078918ac; end: 1078918c3;  */

undefined8 FUN_1078918ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107891af4; end: 107891af7;  */

long FUN_107891af4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010788893c();
    _objc_msgSend(lVar2,lVar1);
  }
  func_0x0001074996e0(param_1 + 0x28);
  return param_1;
}


