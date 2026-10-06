/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10787075c; end: 10787077b;  */

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

int * FUN_10787075c(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined8 extraout_x8;
  undefined8 *puVar8;
  int *extraout_x8_00;
  int *unaff_x19;
  int *unaff_x20;
  int *unaff_x21;
  int *unaff_x22;
  undefined1 *unaff_x29;
  undefined *puVar9;
  code *unaff_x30;
  
  do {
    piVar4 = param_2 + 2;
    piVar7 = param_1;
    if (*param_2 == 2) {
code_r0x000107870168:
      *(int **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(int **)((long)register0x00000008 + -0x28) = unaff_x21;
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(int **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(code **)((long)register0x00000008 + -8) = unaff_x30;
      func_0x000107871298();
      iVar1 = *piVar4;
      piVar7[2] = 0;
      piVar7[3] = 0;
      piVar7[4] = 0;
      piVar7[5] = 0;
      piVar7[0] = 0;
      piVar7[1] = 0;
      uVar3 = iVar1 == 7;
      unaff_x20 = piVar4;
      if (!(bool)uVar3) {
        piVar5 = piVar4;
        func_0x000107871364();
        *(undefined4 *)((long)register0x00000008 + -0x48) = 4;
        func_0x000107870ecc();
        *(int **)((long)register0x00000008 + -0x60) = piVar5;
        _strlen();
        *(int *)((long)register0x00000008 + -0x58) = (int)piVar5;
        param_4 = (int *)((long)register0x00000008 + -0x60);
        func_0x0001078713a8();
        uVar3 = *piVar4 == 0;
        puVar9 = &UNK_10f4303a6;
        if (!(bool)uVar3) {
          puVar9 = &UNK_10f43041c;
        }
        *(int **)((long)register0x00000008 + -0x68) = param_3;
        *(undefined **)((long)register0x00000008 + -0x60) = puVar9;
        uVar6 = 10;
        if (!(bool)uVar3) {
          uVar6 = 0xb;
        }
        *(undefined4 *)((long)register0x00000008 + -0x58) = uVar6;
        param_3 = (int *)((long)register0x00000008 + -0x68);
        func_0x000107870f70((undefined1 *)((long)register0x00000008 + -0x50));
        func_0x0001078712cc();
        func_0x000107871354();
        unaff_x21 = piVar4;
      }
      piVar4 = unaff_x21;
      func_0x000107871270(*(undefined8 *)((long)register0x00000008 + -0x38));
      if ((bool)uVar3) {
        return unaff_x20;
      }
      ___stack_chk_fail();
      param_1 = unaff_x20;
      func_0x000107871354();
      func_0x000107871384();
      func_0x000107871338();
      puVar2 = (undefined1 *)((long)register0x00000008 + -0xc0);
      *(int **)((long)register0x00000008 + -0x90) = unaff_x20;
      *(int **)((long)register0x00000008 + -0x88) = piVar7;
      *(undefined1 **)((long)register0x00000008 + -0x80) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(undefined **)((long)register0x00000008 + -0x78) = &UNK_107870244;
      unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x80);
      func_0x0001078712ac();
      *(undefined8 *)((long)register0x00000008 + -0x98) = extraout_x8;
      iVar1 = param_4[2];
      *(undefined8 *)((long)register0x00000008 + -0xa8) = *(undefined8 *)param_4;
      *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
      *(undefined2 *)((long)register0x00000008 + -0x9a) = 0x405;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
      *(int *)((long)register0x00000008 + -0xb0) = iVar1;
      *(undefined8 *)((long)register0x00000008 + -0xc0) = *(undefined8 *)param_3;
      *(int *)((long)register0x00000008 + -0xb8) = param_3[2];
      param_4 = (int *)((long)register0x00000008 + -0xb0);
      puVar9 = &UNK_107870294;
      unaff_x19 = piVar7;
    }
    else {
      if (*param_2 == 1) {
code_r0x00010787030c:
        *(int **)((long)register0x00000008 + -0x30) = unaff_x22;
        *(int **)((long)register0x00000008 + -0x28) = unaff_x21;
        *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(int **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(code **)((long)register0x00000008 + -8) = unaff_x30;
        unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
        func_0x000107871298();
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[0] = 0;
        param_1[1] = 0;
        func_0x000107871364();
        *(undefined4 *)((long)register0x00000008 + -0x48) = 4;
        *(undefined **)((long)register0x00000008 + -0x60) = &DAT_10f35070a;
        *(undefined4 *)((long)register0x00000008 + -0x58) = 7;
        param_4 = (int *)((long)register0x00000008 + -0x60);
        func_0x0001078713a8();
        iVar1 = piVar4[0xc];
        if (iVar1 != 4) {
          *(int **)((long)register0x00000008 + -0x68) = param_3;
          *(char **)((long)register0x00000008 + -0x60) = "id";
          *(undefined4 *)((long)register0x00000008 + -0x58) = 2;
          if (iVar1 == 3) {
            func_0x000107871308();
            func_0x0001078707c8();
          }
          else if (iVar1 == 2) {
            func_0x000107871308();
            func_0x0001078707ec();
          }
          else if (iVar1 == 1) {
            func_0x000107871308(*(undefined8 *)(piVar4 + 0xe));
            func_0x000107870810();
          }
          else {
            param_4 = piVar4 + 0xe;
            func_0x000107870840((undefined1 *)((long)register0x00000008 + -0x50),
                                (undefined1 *)((long)register0x00000008 + -0x68));
          }
          func_0x0001078712cc();
          func_0x000107871354();
        }
        *(undefined **)((long)register0x00000008 + -0x60) = &DAT_10f3005c3;
        *(undefined4 *)((long)register0x00000008 + -0x58) = 8;
        piVar7 = (int *)((long)register0x00000008 + -0x50);
        unaff_x30 = (code *)&UNK_107870408;
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
        unaff_x19 = param_1;
        unaff_x20 = param_3;
        unaff_x21 = piVar4;
        goto code_r0x000107870168;
      }
      puVar2 = (undefined1 *)((long)register0x00000008 + -0x70);
      *(int **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(int **)((long)register0x00000008 + -0x28) = unaff_x21;
      *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(int **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(code **)((long)register0x00000008 + -8) = unaff_x30;
      unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
      func_0x000107871298();
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      func_0x000107871364();
      *(undefined4 *)((long)register0x00000008 + -0x48) = 4;
      *(undefined **)((long)register0x00000008 + -0x68) = &UNK_10f4305cd;
      *(undefined4 *)((long)register0x00000008 + -0x60) = 0x11;
      func_0x0001078713a8();
      *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
      *(undefined2 *)((long)register0x00000008 + -0x3a) = 4;
      puVar8 = *(undefined8 **)piVar4;
      piVar4 = (int *)*puVar8;
      unaff_x22 = (int *)puVar8[1];
      uVar3 = piVar4 == unaff_x22;
      unaff_x19 = param_1;
      if (!(bool)uVar3) {
        param_1 = (int *)((long)register0x00000008 + -0x68);
        unaff_x30 = (code *)&UNK_107870684;
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
        unaff_x20 = param_3;
        unaff_x21 = piVar4;
        goto code_r0x00010787030c;
      }
      *(undefined **)((long)register0x00000008 + -0x68) = &UNK_10f4305df;
      *(undefined4 *)((long)register0x00000008 + -0x60) = 8;
      param_4 = (int *)((long)register0x00000008 + -0x50);
      puVar9 = &UNK_1078706cc;
      unaff_x20 = param_3;
    }
    register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x40);
    param_3 = (int *)(puVar2 + -0x40);
    *(int **)(puVar2 + -0x20) = unaff_x20;
    *(int **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined **)(puVar2 + -8) = puVar9;
    unaff_x29 = puVar2 + -0x10;
    func_0x0001078712ac();
    func_0x000107871404();
    func_0x000107870de8();
    func_0x0001078712ec();
    func_0x000107871270(*(undefined8 *)(puVar2 + -0x28));
    if ((bool)uVar3) {
      return unaff_x19;
    }
    ___stack_chk_fail();
    func_0x0001078712ec();
    unaff_x30 = FUN_10787075c;
    func_0x00010787135c();
    param_2 = param_1;
    param_1 = extraout_x8_00;
    unaff_x21 = piVar4;
  } while( true );
}



/* Entry: 107870ba0; end: 107870bb7;  */

uint FUN_107870ba0(uint param_1)

{
  func_0x000107870a08();
  return param_1 ^ 1;
}



/* Entry: 107870f8c; end: 107870faf;  */

/* WARNING: Possible PIC construction at 0x000107870fe8: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x000107870fec) */
/* WARNING: Removing unreachable block (ram,0x000107870590) */
/* WARNING: Removing unreachable block (ram,0x00010787059c) */
/* WARNING: Removing unreachable block (ram,0x0001078702c4) */
/* WARNING: Removing unreachable block (ram,0x000107870300) */
/* WARNING: Removing unreachable block (ram,0x0001078702f4) */

int * FUN_107870f8c(int *param_1,undefined8 param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined8 extraout_x8;
  int *piVar13;
  undefined8 *puVar14;
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
  undefined1 *puVar15;
  undefined *puVar16;
  code *pcVar17;
  undefined1 auStack_50 [8];
  int aiStack_48 [2];
  int aiStack_40 [4];
  undefined1 *puVar3;
  
  uVar6 = *param_3 == 6;
  if ((bool)uVar6) {
    unaff_x21 = param_3 + 2;
    puVar5 = &stack0xffffffffffffffd0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    func_0x0001078709e4(param_1);
    param_2 = *(undefined8 *)unaff_x21;
    puVar16 = &UNK_107870fec;
    piVar10 = param_1;
    piVar9 = *(int **)param_4;
    param_3 = param_1;
    param_1 = param_4;
code_r0x0001078710c0:
    puVar2 = puVar5 + -0x40;
    piVar7 = (int *)(puVar5 + -0x40);
    *(int **)(puVar5 + -0x20) = param_1;
    *(int **)(puVar5 + -0x18) = param_3;
    *(undefined1 **)(puVar5 + -0x10) = &stack0xfffffffffffffff0;
    *(undefined **)(puVar5 + -8) = puVar16;
    puVar15 = puVar5 + -0x10;
    func_0x0001078712ac();
    *(undefined8 *)(puVar5 + -0x28) = extraout_x8_02;
    *(undefined8 *)(puVar5 + -0x38) = 0;
    *(undefined8 *)(puVar5 + -0x30) = 0;
    *(undefined8 *)(puVar5 + -0x40) = param_2;
    *(undefined2 *)(puVar5 + -0x2a) = 0x216;
    func_0x000107870d3c();
    func_0x0001078712ec();
    func_0x000107871270(*(undefined8 *)(puVar5 + -0x28));
    if ((bool)uVar6) {
      return param_3;
    }
    ___stack_chk_fail();
    func_0x0001078712ec();
    pcVar17 = (code *)&UNK_10787111c;
    func_0x00010787135c();
    piVar10 = *(int **)piVar10;
    piVar12 = extraout_x8_03;
code_r0x000107870168:
    do {
      *(int **)(puVar2 + -0x30) = unaff_x22;
      *(int **)(puVar2 + -0x28) = unaff_x21;
      *(int **)(puVar2 + -0x20) = param_1;
      *(int **)(puVar2 + -0x18) = param_3;
      *(undefined1 **)(puVar2 + -0x10) = puVar15;
      *(code **)(puVar2 + -8) = pcVar17;
      func_0x000107871298();
      iVar1 = *piVar7;
      piVar12[2] = 0;
      piVar12[3] = 0;
      piVar12[4] = 0;
      piVar12[5] = 0;
      piVar12[0] = 0;
      piVar12[1] = 0;
      uVar6 = iVar1 == 7;
      param_1 = piVar7;
      if (!(bool)uVar6) {
        piVar9 = piVar7;
        func_0x000107871364();
        *(undefined4 *)(puVar2 + -0x48) = 4;
        func_0x000107870ecc();
        *(int **)(puVar2 + -0x60) = piVar9;
        _strlen();
        *(int *)(puVar2 + -0x58) = (int)piVar9;
        piVar9 = (int *)(puVar2 + -0x60);
        func_0x0001078713a8();
        uVar6 = *piVar7 == 0;
        puVar16 = &UNK_10f4303a6;
        if (!(bool)uVar6) {
          puVar16 = &UNK_10f43041c;
        }
        *(int **)(puVar2 + -0x68) = piVar10;
        *(undefined **)(puVar2 + -0x60) = puVar16;
        uVar11 = 10;
        if (!(bool)uVar6) {
          uVar11 = 0xb;
        }
        *(undefined4 *)(puVar2 + -0x58) = uVar11;
        piVar10 = (int *)(puVar2 + -0x68);
        func_0x000107870f70(puVar2 + -0x50);
        func_0x0001078712cc();
        func_0x000107871354();
        unaff_x21 = piVar7;
      }
      func_0x000107871270(*(undefined8 *)(puVar2 + -0x38));
      if ((bool)uVar6) {
        return param_1;
      }
      ___stack_chk_fail();
      piVar8 = param_1;
      func_0x000107871354();
      func_0x000107871384();
      func_0x000107871338();
      *(int **)(puVar2 + -0x90) = param_1;
      *(int **)(puVar2 + -0x88) = piVar12;
      *(undefined1 **)(puVar2 + -0x80) = puVar2 + -0x10;
      *(undefined **)(puVar2 + -0x78) = &UNK_107870244;
      puVar15 = puVar2 + -0x80;
      func_0x0001078712ac();
      *(undefined8 *)(puVar2 + -0x98) = extraout_x8;
      iVar1 = piVar9[2];
      *(undefined8 *)(puVar2 + -0xa8) = *(undefined8 *)piVar9;
      *(undefined8 *)(puVar2 + -0xa0) = 0;
      *(undefined2 *)(puVar2 + -0x9a) = 0x405;
      *(undefined8 *)(puVar2 + -0xb0) = 0;
      *(int *)(puVar2 + -0xb0) = iVar1;
      *(undefined8 *)(puVar2 + -0xc0) = *(undefined8 *)piVar10;
      *(int *)(puVar2 + -0xb8) = piVar10[2];
      piVar9 = (int *)(puVar2 + -0xb0);
      puVar16 = &UNK_107870294;
      puVar4 = puVar2 + -0xc0;
      param_3 = piVar12;
      while( true ) {
        puVar3 = puVar4 + -0x40;
        puVar2 = puVar4 + -0x40;
        piVar10 = (int *)(puVar4 + -0x40);
        *(int **)(puVar4 + -0x20) = param_1;
        *(int **)(puVar4 + -0x18) = param_3;
        *(undefined1 **)(puVar4 + -0x10) = puVar15;
        *(undefined **)(puVar4 + -8) = puVar16;
        puVar15 = puVar4 + -0x10;
        func_0x0001078712ac();
        func_0x000107871404();
        func_0x000107870de8();
        func_0x0001078712ec();
        func_0x000107871270(*(undefined8 *)(puVar4 + -0x28));
        if ((bool)uVar6) {
          return param_3;
        }
        ___stack_chk_fail();
        func_0x0001078712ec();
        pcVar17 = FUN_10787075c;
        func_0x00010787135c();
        piVar7 = piVar8 + 2;
        piVar12 = extraout_x8_00;
        if (*piVar8 == 2) goto code_r0x000107870168;
        piVar13 = extraout_x8_00;
        if (*piVar8 == 1) goto code_r0x00010787030c;
        puVar3 = puVar4 + -0xb0;
        *(int **)(puVar4 + -0x70) = unaff_x22;
        *(int **)(puVar4 + -0x68) = unaff_x21;
        *(int **)(puVar4 + -0x60) = param_1;
        *(int **)(puVar4 + -0x58) = param_3;
        *(undefined1 **)(puVar4 + -0x50) = puVar15;
        *(code **)(puVar4 + -0x48) = FUN_10787075c;
        puVar15 = puVar4 + -0x50;
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
        puVar14 = *(undefined8 **)piVar7;
        piVar7 = (int *)*puVar14;
        unaff_x22 = (int *)puVar14[1];
        uVar6 = piVar7 == unaff_x22;
        param_3 = extraout_x8_00;
        unaff_x21 = piVar7;
        if (!(bool)uVar6) break;
        *(undefined **)(puVar4 + -0xa8) = &UNK_10f4305df;
        *(undefined4 *)(puVar4 + -0xa0) = 8;
        piVar9 = (int *)(puVar4 + -0x90);
        puVar16 = &UNK_1078706cc;
        puVar4 = puVar4 + -0xb0;
        piVar8 = extraout_x8_00;
        param_1 = piVar10;
      }
      piVar13 = (int *)(puVar4 + -0xa8);
      pcVar17 = (code *)&UNK_107870684;
      param_1 = piVar10;
code_r0x00010787030c:
      puVar2 = puVar3 + -0x70;
      *(int **)(puVar3 + -0x30) = unaff_x22;
      *(int **)(puVar3 + -0x28) = unaff_x21;
      *(int **)(puVar3 + -0x20) = param_1;
      *(int **)(puVar3 + -0x18) = param_3;
      *(undefined1 **)(puVar3 + -0x10) = puVar15;
      *(code **)(puVar3 + -8) = pcVar17;
      puVar15 = puVar3 + -0x10;
      func_0x000107871298();
      piVar13[2] = 0;
      piVar13[3] = 0;
      piVar13[4] = 0;
      piVar13[5] = 0;
      piVar13[0] = 0;
      piVar13[1] = 0;
      func_0x000107871364();
      *(undefined4 *)(puVar3 + -0x48) = 4;
      *(undefined **)(puVar3 + -0x60) = &DAT_10f35070a;
      *(undefined4 *)(puVar3 + -0x58) = 7;
      piVar9 = (int *)(puVar3 + -0x60);
      func_0x0001078713a8();
      iVar1 = piVar7[0xc];
      if (iVar1 != 4) {
        *(int **)(puVar3 + -0x68) = piVar10;
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
          func_0x000107871308(*(undefined8 *)(piVar7 + 0xe));
          func_0x000107870810();
        }
        else {
          piVar9 = piVar7 + 0xe;
          func_0x000107870840(puVar3 + -0x50,puVar3 + -0x68);
        }
        func_0x0001078712cc();
        func_0x000107871354();
      }
      *(undefined **)(puVar3 + -0x60) = &DAT_10f3005c3;
      *(undefined4 *)(puVar3 + -0x58) = 8;
      piVar12 = (int *)(puVar3 + -0x50);
      pcVar17 = (code *)&UNK_107870408;
      param_3 = piVar13;
      param_1 = piVar10;
      unaff_x21 = piVar7;
    } while( true );
  }
  puVar5 = auStack_50;
  func_0x0001078712ac();
  if (*param_3 == 5) {
    piVar9 = aiStack_48;
  }
  else {
    uVar6 = *(long *)PTR____stack_chk_guard_11034bdc0 == extraout_x8_01;
    if (!(bool)uVar6) {
      ___stack_chk_fail();
      piVar10 = param_3;
      func_0x000107871444();
      puVar16 = &UNK_1078710c0;
      func_0x00010787135c();
      piVar9 = param_4;
      goto code_r0x0001078710c0;
    }
    piVar10 = extraout_x9;
    func_0x0001078712ac();
    uVar6 = *piVar10 + -1 == 3;
    switch(*piVar10 + -1) {
    case 0:
      func_0x000107871580(1);
      piVar9 = (int *)(extraout_x8_05 + 8);
      func_0x00010726982c();
      func_0x0001078712bc();
      break;
    case 1:
      func_0x000107871580(2);
      piVar9 = (int *)(extraout_x8_08 + 8);
      func_0x0001072696bc();
      func_0x0001078712bc();
      break;
    case 2:
      func_0x000107871580(3);
      piVar9 = (int *)(extraout_x8_06 + 8);
      func_0x000107269434();
      func_0x0001078712bc();
      break;
    case 3:
      func_0x000107871580(4);
      piVar9 = (int *)(extraout_x8_07 + 8);
      func_0x000107269534();
      func_0x0001078712bc();
      break;
    default:
      aiStack_48[0] = 0;
      piVar9 = aiStack_40;
      func_0x00010726998c(piVar9,piVar10 + 2);
      func_0x0001078712bc();
    }
    func_0x000107871444();
    func_0x000107871270(extraout_x8_04);
    if ((bool)uVar6) {
      return piVar9;
    }
    ___stack_chk_fail();
    func_0x000107871444();
    func_0x00010787135c();
  }
  *piVar9 = 5;
  func_0x000107269434(piVar9 + 2);
  return piVar9;
}



/* Entry: 107871640; end: 1078716a3;  */

long * FUN_107871640(long *param_1,long *param_2,long *param_3,long *param_4)

{
  if ((param_3[1] - param_4[1]) * (*param_2 - *param_1) -
      (*param_3 - *param_4) * (param_2[1] - param_1[1]) == 0) {
    return (long *)0x0;
  }
  func_0x000107871c30();
  func_0x0001078716a4();
  if ((int)param_1 != 0) {
    func_0x000107871c84();
    func_0x0001078716a4();
  }
  return param_1;
}



/* Entry: 107871a3c; end: 107871a9f;  */

double * FUN_107871a3c(double *param_1,double *param_2,double *param_3,double *param_4)

{
  if (-((*param_2 - *param_1) * (param_4[1] - param_3[1])) +
      (param_2[1] - param_1[1]) * (*param_4 - *param_3) == 0.0) {
    return (double *)0x0;
  }
  func_0x000107871c30();
  func_0x000107871aa0();
  if ((int)param_1 != 0) {
    func_0x000107871c84();
    func_0x000107871aa0();
  }
  return param_1;
}



/* Entry: 1078727ec; end: 1078729eb;  */

void FUN_1078727ec(float param_1,long param_2,long param_3,int param_4,int param_5,int param_6,
                  uint param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  
  uVar1 = param_4 - param_6 & (param_4 - param_6 >> 0x1f ^ 0xffffffffU);
  uVar5 = (ulong)(param_5 - param_6 & (param_5 - param_6 >> 0x1f ^ 0xffffffffU));
  uVar2 = param_7;
  if (param_6 + param_4 <= (int)param_7) {
    uVar2 = param_6 + param_4;
  }
  if (param_6 + param_5 <= param_8) {
    param_8 = param_6 + param_5;
  }
  param_3 = param_3 + (long)(int)param_7 * uVar5 * 4;
  for (; (long)uVar5 < (long)param_8; uVar5 = uVar5 + 1) {
    fVar7 = (float)(param_5 - (int)uVar5);
    iVar6 = param_4 - uVar1;
    for (uVar3 = (ulong)uVar1; (long)uVar3 < (long)(int)uVar2; uVar3 = uVar3 + 1) {
      fVar11 = SQRT(fVar7 * fVar7 + (float)iVar6 * (float)iVar6) / (float)param_6;
      iVar4 = (int)(fVar11 * 500.0);
      if (iVar4 < 0x1f5) {
        fVar8 = *(float *)(param_2 + 0x34 + (long)iVar4 * 4);
        if (fVar8 < 0.0) {
          dVar9 = (double)(fVar11 * fVar11) / -0.18;
          _exp();
          fVar8 = (float)dVar9;
          if (0.9 < fVar11) {
            fVar10 = 1.0;
            if ((0.9 <= fVar11) && (fVar10 = 0.0, fVar11 < 1.0)) {
              fVar11 = (fVar11 + -0.9) / 0.100000024;
              fVar10 = ((fVar11 * 6.0 + -15.0) * fVar11 + 10.0) * -(fVar11 * fVar11 * fVar11) + 1.0;
            }
            fVar8 = fVar10 * fVar8;
          }
          fVar11 = fVar8 * fVar8;
          if (0.003333 <= fVar8) {
            fVar11 = fVar8;
          }
          fVar8 = 0.0;
          if (0.0003 <= fVar11) {
            fVar8 = fVar11;
          }
          *(float *)(param_2 + 0x34 + (long)iVar4 * 4) = fVar8;
        }
        *(float *)(param_3 + uVar3 * 4) = param_1 * fVar8;
      }
      iVar6 = iVar6 + -1;
    }
    param_3 = param_3 + (-(ulong)(param_7 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_7 << 2);
  }
  return;
}



/* Entry: 107872cfc; end: 107872d3f;  */

undefined8 * FUN_107872cfc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar2 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
    puVar1 = puVar1 + 2;
  }
  else {
    puVar1 = param_1;
    FUN_107872ff8();
  }
  param_1[1] = puVar1;
  return puVar1 + -2;
}



/* Entry: 107872e70; end: 107872e93;  */

void FUN_107872e70(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x10;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 107872ff8; end: 10787303f;  */

undefined8 FUN_107872ff8(void)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x0001078732b8();
  func_0x000107873040();
  func_0x00010787328c();
  func_0x000107872f30();
  func_0x000107873270();
  func_0x000107873354();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001078732a8();
  return uVar1;
}



/* Entry: 10787316c; end: 107873197;  */

undefined8 FUN_10787316c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x000107873198(&uStack_28);
  return param_1;
}



/* Entry: 107873a18; end: 107873a7f;  */

undefined8 FUN_107873a18(char *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  
  func_0x000107873928(param_2,param_3);
  pcVar2 = (char *)*param_2;
  if ((pcVar2 == (char *)*param_3) || (*param_1 != *pcVar2)) {
    uVar1 = 0;
  }
  else {
    *param_2 = pcVar2 + 1;
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 107873d88; end: 107873f37;  */

bool FUN_107873d88(uint param_1)

{
  ushort uVar1;
  byte bVar2;
  
  if (param_1 != 0x2027) {
    if (param_1 >> 7 < 0x5d) {
      return false;
    }
    if (0x2f < param_1 - 0x3100 && (param_1 & 0xffe0) != 0x31a0) {
      uVar1 = (ushort)param_1;
      bVar2 = NEON_umaxv(CONCAT17(-((uVar1 & 0xff00) == 0x3300),
                                  CONCAT16(-((ushort)(uVar1 + 0xcfc0) < 0x60),
                                           CONCAT15(-((ushort)(CONCAT13((char)((ushort)(uVar1 + 
                                                  0x100) >> 8),
                                                  CONCAT12((char)(uVar1 + 0x100),uVar1 + 0xcc00)) >>
                                                  0x10) < 0xf0),
                                                  CONCAT14(-((ushort)(uVar1 + 0xcc00) < 0x19c0),
                                                           CONCAT13(-((ushort)(uVar1 + 0xb200) <
                                                                     0x5200),CONCAT12(-((ushort)(
                                                  uVar1 + 0xce40) < 0x30),
                                                  CONCAT11(-((ushort)(uVar1 + 0x700) < 0x200),
                                                           -((ushort)(uVar1 + 0x1d0) < 0x20)))))))),
                         1);
      if ((bVar2 & 1) != 0) {
        return true;
      }
      if ((param_1 & 0xff80) == 0x2e80) {
        return true;
      }
      if ((param_1 & 0xffc0) == 0x3000) {
        return true;
      }
      if ((param_1 & 0xff00) == 0x3200) {
        return true;
      }
      if (((param_1 + 0x5b70 & 0xffff) < 0x40 || (param_1 & 0xfff0) == 0xfe10) ||
          (param_1 & 0xfff0) == 0x2ff0) {
        return true;
      }
      if ((param_1 - 0x2f00 & 0xffff) < 0xe0) {
        return true;
      }
      return (param_1 + 0x6000 & 0xffff) < 0x490;
    }
  }
  return true;
}



/* Entry: 1078746a8; end: 1078746fb;  */

bool FUN_1078746a8(ushort param_1)

{
  return (ushort)(param_1 + 0x4b0) < 0x2b0 ||
         ((ushort)(param_1 - 0x8a0) < 0x60 ||
         ((param_1 & 0xff00) == 0x600 ||
         ((ushort)(param_1 - 0x750) < 0x30 || (ushort)(param_1 + 400) < 0x90)));
}



/* Entry: 107874b54; end: 107874b9b;  */

void FUN_107874b54(long param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = param_1;
  func_0x000107874b9c();
  if ((lVar1 == 1) && (func_0x000107874d7c(), extraout_x8 != 0)) {
    func_0x000107874d6c();
    func_0x000107874d94();
    func_0x000107874d8c();
  }
  func_0x000107874bd8(param_1);
  return;
}



/* Entry: 107874d30; end: 107874d57;  */

long FUN_107874d30(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107874ff4; end: 10787507f;  */

undefined8
FUN_107874ff4(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_1;
  func_0x0001073b5ea8(param_3,param_4);
  fVar1 = -0.0001;
  if (fVar2 <= -0.0001) {
    func_0x0001073b5ea8(param_4,param_2);
    fVar2 = (param_1 - fVar1) / fVar2;
    if (0.0001 <= fVar2) {
      *param_5 = fVar2;
      return 1;
    }
  }
  return 0;
}



/* Entry: 1078756d8; end: 107875847;  */

bool FUN_1078756d8(float *param_1,float *param_2)

{
  if (((*param_1 <= param_2[2]) && (param_1[1] <= param_2[3])) && (*param_2 <= param_1[2])) {
    return param_2[1] <= param_1[3];
  }
  return false;
}



/* Entry: 107875e4c; end: 107875ea3;  */

void FUN_107875e4c(ulong *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 uStack_21;
  
  puVar1 = &uStack_21;
  func_0x0001000df39c(puVar1,*param_2);
  uVar2 = *param_1;
  *param_1 = (ulong)(puVar1 + (uVar2 >> 4) + uVar2 * 0x1000 + -0x61c8864680b583eb) ^ uVar2;
  return;
}



/* Entry: 107876260; end: 1078762e7;  */

void FUN_107876260(ulong param_1)

{
  ulong uStack_50;
  undefined8 uStack_48;
  
  func_0x0001078765b0();
  if ((param_1 & 1) != 0) {
    func_0x0001078765fc();
    func_0x00010787666c(uStack_50,uStack_48);
    if ((uStack_50 & 1) != 0) {
      func_0x000107876648();
      func_0x0001078765e8();
      func_0x00010787665c();
      func_0x00010787660c();
      func_0x00010787663c();
      func_0x000107876664();
      return;
    }
  }
  func_0x000107876630();
  return;
}



/* Entry: 107876be8; end: 107876ccf;  */

void FUN_107876be8(double param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,double *param_7)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  
  dVar4 = 1.0 / (param_5 - param_6);
  param_7[4] = 0.0;
  param_7[3] = 0.0;
  param_7[2] = 0.0;
  param_7[1] = 0.0;
  param_7[0xb] = 0.0;
  param_7[7] = 0.0;
  param_7[6] = 0.0;
  param_7[9] = 0.0;
  param_7[8] = 0.0;
  auVar2 = NEON_fmov(0x3ff0000000000000,8);
  dVar1 = auVar2._0_8_ / (param_1 - param_2);
  dVar3 = auVar2._8_8_ / (param_3 - param_4);
  *param_7 = dVar1 * -2.0;
  param_7[5] = dVar3 * -2.0;
  param_7[0xd] = (param_3 + param_4) * dVar3;
  param_7[0xc] = (param_1 + param_2) * dVar1;
  param_7[0xf] = 1.0;
  param_7[10] = dVar4 + dVar4;
  param_7[0xe] = (param_5 + param_6) * dVar4;
  return;
}



/* Entry: 10787759c; end: 10787766b;  */

void FUN_10787759c(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ulong uStack_28;
  
  puVar1 = &uStack_30;
  uStack_30 = param_2;
  uStack_28 = param_3;
  func_0x00010787766c(puVar1,&UNK_10f430930,0);
  if (puVar1 != (undefined8 *)0xffffffffffffffff) {
    puVar2 = &uStack_30;
    uVar4 = 0;
    func_0x0001000671d4(puVar2,0,puVar1);
    if ((long)puVar1 + 2U <= uStack_28) {
      puVar3 = &uStack_30;
      puStack_40 = puVar2;
      uStack_38 = uVar4;
      func_0x0001000671d4(puVar3,puVar1,3);
      func_0x0001000633dc();
      if (((ulong)puVar3 & 1) != 0) {
        func_0x000100060b18(&uStack_58,&puStack_40);
        param_1[1] = uStack_50;
        *param_1 = uStack_58;
        param_1[2] = uStack_48;
        uStack_50 = 0;
        uStack_48 = 0;
        uStack_58 = 0;
        *(undefined1 *)(param_1 + 3) = 1;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_58);
        return;
      }
    }
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10787792c; end: 10787797b;  */

void FUN_10787792c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined **ppuStack_30;
  long lStack_28;
  int iStack_20;
  int iStack_1c;
  undefined8 uStack_18;
  
  iStack_20 = (int)param_3[1];
  lStack_28 = *param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    iStack_20 = (int)*(char *)((long)param_3 + 0x17);
    lStack_28 = (long)param_3;
  }
  ppuStack_30 = &PTR_DAT_110cf0f18;
  uStack_18 = 0;
  iStack_1c = iStack_20;
  func_0x0001078777b8(param_1,param_2,&ppuStack_30);
  return;
}



/* Entry: 1078782e4; end: 10787838f;  */

void FUN_1078782e4(int *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iStack_34;
  
  iStack_34 = 0;
  piVar3 = param_1;
  func_0x000107878390(param_1,&iStack_34,0x65c2937b,0);
  if ((((ulong)piVar3 & 1) != 0) ||
     (piVar3 = param_1, func_0x00010ae87864(param_1,3,&UNK_10deafc74,param_2), (int)piVar3 == 0)) {
    (*(code *)*param_3)(*param_4);
    do {
      iStack_34 = *param_1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = 0xdd;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iStack_34 == 0x5a308d2) {
      func_0x00010ae87860(param_1,1);
    }
  }
  return;
}



/* Entry: 107878958; end: 10787899b;  */

double FUN_107878958(double param_1,double *param_2)

{
  param_1 = param_1 * 0.5;
  ___sincos_stret(param_1);
  return param_1 * *param_2;
}



/* Entry: 107878e10; end: 107878e67;  */

undefined8 FUN_107878e10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  
  func_0x000107878e68();
  func_0x0001073ca0ec(&uStack_38,param_2);
  func_0x0001073ca0ec(&uStack_38,param_3);
  func_0x000107878e78();
  return uStack_38;
}



/* Entry: 107879198; end: 107879207;  */

void FUN_107879198(void)

{
  func_0x000107879190();
  func_0x000107879284();
  return;
}



/* Entry: 1078794c8; end: 107879527;  */

undefined1  [16] FUN_1078794c8(long *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 auVar8 [16];
  
  for (; pcVar4 = param_3, pcVar6 = param_3, param_2 != param_3; param_2 = param_2 + 1) {
    pcVar1 = (char *)param_1[1];
    pcVar5 = param_2;
    pcVar7 = (char *)*param_1;
    if ((char *)*param_1 == pcVar1) break;
    do {
      if (pcVar5 == param_3 || pcVar7 == pcVar1) {
        pcVar4 = param_2;
        pcVar6 = pcVar5;
        if (pcVar7 == pcVar1) goto LAB_107879514;
        break;
      }
      cVar2 = *pcVar5;
      cVar3 = *pcVar7;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 == cVar3);
  }
LAB_107879514:
  auVar8._8_8_ = pcVar6;
  auVar8._0_8_ = pcVar4;
  return auVar8;
}



/* Entry: 107879c38; end: 107879c43;  */

void FUN_107879c38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex4lockEv_110346780)(param_1 + 0x18);
  return;
}



/* Entry: 107879f88; end: 10787a4a7;  */

void FUN_107879f88(long *param_1,long ****param_2,long *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long **pplVar2;
  long ***ppplVar3;
  code *pcVar4;
  undefined1 in_ZR;
  bool bVar5;
  bool bVar6;
  long ****pppplVar7;
  long lVar8;
  long ****pppplVar9;
  undefined8 *puVar10;
  undefined8 extraout_x8;
  ulong uVar11;
  long ****extraout_x8_00;
  long extraout_x8_01;
  long *plVar12;
  long ****extraout_x9;
  ulong uVar13;
  ulong extraout_x9_00;
  undefined8 *puVar14;
  long ****pppplVar15;
  long *plVar16;
  long *plVar17;
  long *extraout_x10;
  long ****extraout_x11;
  long ****pppplVar18;
  long ****unaff_x26;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  long ***ppplStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long ***ppplStack_a8;
  undefined4 uStack_a0;
  long **pplStack_98;
  long ***ppplStack_90;
  long ***ppplStack_88;
  long **pplStack_80;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  plVar12 = param_1;
  func_0x00010787bdec();
  ppplStack_d0 = (long ***)*plVar12;
  plStack_c8 = (long *)CONCAT71(plStack_c8._1_7_,1);
  ppplStack_90 = (long ***)param_2;
  uStack_68 = extraout_x8;
  __ZNSt3__15mutex4lockEv();
  pppplVar7 = (long ****)(*param_1 + 0x40);
  func_0x00010787a7b8(pppplVar7,&ppplStack_90);
  if (((ulong)pppplVar7 & 1) == 0) {
    func_0x00010054bf64(&ppplStack_d0);
    func_0x00010787be60();
  }
  else {
    func_0x00010787be60();
    func_0x00010732eb8c(&pplStack_98);
    ppplVar3 = ppplStack_90;
    pplVar2 = pplStack_98;
    pplStack_98 = (long **)0x0;
    ppplStack_88 = ppplStack_90;
    pplStack_80 = pplVar2;
    pppplVar18 = (long ****)param_1[3];
    if (pppplVar18 != (long ****)0x0) {
      uVar11 = (long)pppplVar18 - 1;
      if (((ulong)pppplVar18 & uVar11) == 0) {
        unaff_x26 = (long ****)(uVar11 & (ulong)ppplStack_90);
      }
      else {
        unaff_x26 = (long ****)ppplStack_90;
        if (pppplVar18 <= ppplStack_90) {
          uVar13 = 0;
          if (pppplVar18 != (long ****)0x0) {
            uVar13 = (ulong)ppplStack_90 / (ulong)pppplVar18;
          }
          unaff_x26 = (long ****)((long)ppplStack_90 - uVar13 * (long)pppplVar18);
        }
      }
      plVar12 = *(long **)(param_1[2] + (long)unaff_x26 * 8);
      if (plVar12 != (long *)0x0) {
        do {
          while( true ) {
            plVar12 = (long *)*plVar12;
            if (plVar12 == (long *)0x0) goto LAB_10787a0a8;
            pppplVar15 = (long ****)plVar12[1];
            if (pppplVar15 != (long ****)ppplStack_90) break;
            if ((long ****)plVar12[2] == (long ****)ppplStack_90) {
              in_ZR = 1;
              goto LAB_10787a32c;
            }
          }
          if (((ulong)pppplVar18 & uVar11) == 0) {
            pppplVar15 = (long ****)((ulong)pppplVar15 & uVar11);
          }
          else if (pppplVar18 <= pppplVar15) {
            uVar13 = 0;
            if (pppplVar18 != (long ****)0x0) {
              uVar13 = (ulong)pppplVar15 / (ulong)pppplVar18;
            }
            pppplVar15 = (long ****)((long)pppplVar15 - uVar13 * (long)pppplVar18);
          }
        } while (pppplVar15 == unaff_x26);
      }
    }
LAB_10787a0a8:
    func_0x00010787be3c();
    plVar12 = param_1 + 4;
    uStack_c0 = 1;
    *pppplVar7 = (long ***)0x0;
    pppplVar7[1] = ppplVar3;
    pplStack_80 = (long **)0x0;
    pppplVar7[2] = ppplVar3;
    pppplVar7[3] = (long ***)pplVar2;
    plStack_c8 = plVar12;
    if ((pppplVar18 == (long ****)0x0) ||
       (in_ZR = *(float *)(param_1 + 6) * (float)pppplVar18 == (float)(param_1[5] + 1),
       *(float *)(param_1 + 6) * (float)pppplVar18 < (float)(param_1[5] + 1))) {
      bVar5 = (long ****)0x2 < pppplVar18;
      bVar6 = pppplVar18 == (long ****)0x3;
      ppplStack_d0 = (long ***)pppplVar7;
      func_0x00010787beb0((long)pppplVar18 << 1);
      pppplVar15 = extraout_x8_00;
      if (!bVar5 || bVar6) {
        pppplVar15 = extraout_x9;
      }
      if ((long)pppplVar15 - 1U == 0) {
        pppplVar15 = (long ****)0x2;
      }
      else if (((ulong)pppplVar15 & (long)pppplVar15 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
        pppplVar18 = (long ****)param_1[3];
      }
      if (pppplVar18 < pppplVar15) {
LAB_10787a148:
        pppplVar18 = pppplVar15;
        if ((ulong)pppplVar18 >> 0x3d != 0) goto LAB_10787a438;
        lVar8 = (long)pppplVar18 << 3;
        __Znwm(lVar8);
        func_0x00010787a870(param_1 + 2,lVar8);
        param_1[3] = (long)pppplVar18;
        lVar8 = param_1[2];
        for (pppplVar15 = (long ****)0x0; pppplVar18 != pppplVar15;
            pppplVar15 = (long ****)((long)pppplVar15 + 1)) {
          *(undefined8 *)(lVar8 + (long)pppplVar15 * 8) = 0;
        }
        plVar16 = (long *)*plVar12;
        if (plVar16 != (long *)0x0) {
          pppplVar15 = (long ****)plVar16[1];
          uVar13 = (long)pppplVar18 - 1;
          uVar11 = 0;
          if (pppplVar18 != (long ****)0x0) {
            uVar11 = (ulong)pppplVar15 / (ulong)pppplVar18;
          }
          pppplVar9 = pppplVar15;
          if (pppplVar18 <= pppplVar15) {
            pppplVar9 = (long ****)((long)pppplVar15 - uVar11 * (long)pppplVar18);
          }
          if (((ulong)pppplVar18 & uVar13) == 0) {
            pppplVar9 = (long ****)((ulong)pppplVar15 & uVar13);
          }
          *(long **)(lVar8 + (long)pppplVar9 * 8) = plVar12;
          while (plVar17 = plVar16, plVar16 = (long *)*plVar17, plVar16 != (long *)0x0) {
            pppplVar15 = (long ****)plVar16[1];
            if (((ulong)pppplVar18 & uVar13) == 0) {
              pppplVar15 = (long ****)((ulong)pppplVar15 & uVar13);
            }
            else if (pppplVar18 <= pppplVar15) {
              uVar11 = 0;
              if (pppplVar18 != (long ****)0x0) {
                uVar11 = (ulong)pppplVar15 / (ulong)pppplVar18;
              }
              pppplVar15 = (long ****)((long)pppplVar15 - uVar11 * (long)pppplVar18);
            }
            if (pppplVar15 != pppplVar9) {
              if (*(long *)(lVar8 + (long)pppplVar15 * 8) == 0) {
                *(long **)(lVar8 + (long)pppplVar15 * 8) = plVar17;
                pppplVar9 = pppplVar15;
              }
              else {
                *plVar17 = *plVar16;
                func_0x00010787be24();
                lVar8 = extraout_x8_01;
                uVar13 = extraout_x9_00;
                plVar16 = extraout_x10;
                pppplVar9 = extraout_x11;
              }
            }
          }
        }
      }
      else if (pppplVar15 < pppplVar18) {
        pppplVar9 = (long ****)(long)((float)(ulong)param_1[5] / *(float *)(param_1 + 6));
        if ((pppplVar18 < (long ****)0x3) || (((ulong)pppplVar18 & (long)pppplVar18 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else {
          func_0x00010787bdfc();
        }
        if (pppplVar15 <= pppplVar9) {
          pppplVar15 = pppplVar9;
        }
        if (pppplVar15 < pppplVar18) {
          if (pppplVar15 != (long ****)0x0) goto LAB_10787a148;
          func_0x00010787a870(param_1 + 2,0);
          pppplVar18 = (long ****)0x0;
          param_1[3] = 0;
        }
        else {
          pppplVar18 = (long ****)param_1[3];
        }
      }
      if (((ulong)pppplVar18 & (long)pppplVar18 - 1U) == 0) {
        in_ZR = true;
        unaff_x26 = (long ****)((long)pppplVar18 - 1U & (ulong)ppplVar3);
      }
      else {
        in_ZR = (long ****)ppplVar3 == pppplVar18;
        unaff_x26 = (long ****)ppplVar3;
        if (pppplVar18 <= ppplVar3) {
          uVar11 = 0;
          if (pppplVar18 != (long ****)0x0) {
            uVar11 = (ulong)ppplVar3 / (ulong)pppplVar18;
          }
          unaff_x26 = (long ****)((long)ppplVar3 - uVar11 * (long)pppplVar18);
        }
      }
    }
    lVar8 = param_1[2];
    puVar14 = *(undefined8 **)(lVar8 + (long)unaff_x26 * 8);
    if (puVar14 == (undefined8 *)0x0) {
      *pppplVar7 = (long ***)*plVar12;
      *plVar12 = (long)pppplVar7;
      *(long **)(lVar8 + (long)unaff_x26 * 8) = plVar12;
      if (*pppplVar7 != (long ***)0x0) {
        pppplVar15 = (long ****)(*pppplVar7)[1];
        if (((ulong)pppplVar18 & (long)pppplVar18 - 1U) == 0) {
          pppplVar15 = (long ****)((ulong)pppplVar15 & (long)pppplVar18 - 1U);
          in_ZR = true;
        }
        else {
          in_ZR = pppplVar15 == pppplVar18;
          if (pppplVar18 <= pppplVar15) {
            uVar11 = 0;
            if (pppplVar18 != (long ****)0x0) {
              uVar11 = (ulong)pppplVar15 / (ulong)pppplVar18;
            }
            pppplVar15 = (long ****)((long)pppplVar15 - uVar11 * (long)pppplVar18);
          }
        }
        *(long *****)(lVar8 + (long)pppplVar15 * 8) = pppplVar7;
      }
    }
    else {
      *pppplVar7 = (long ***)*puVar14;
      *puVar14 = pppplVar7;
    }
    ppplStack_d0 = (long ***)0x0;
    param_1[5] = param_1[5] + 1;
    pppplVar7 = &ppplStack_d0;
    func_0x00010787a888();
LAB_10787a32c:
    func_0x00010787be44();
    ppplStack_d0 = ppplStack_90;
    uStack_b8 = param_4[1];
    uStack_c0 = *param_4;
    uStack_b0 = param_4[2];
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    plStack_c8 = param_3;
    __ZNSt3__16chrono12steady_clock3nowEv();
    uStack_a0 = 0;
    puVar10 = (undefined8 *)0x50;
    ppplStack_a8 = (long ***)pppplVar7;
    __Znwm();
    uVar1 = uStack_b0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = &PTR_DAT_1109e3cf8;
    puVar10[4] = plStack_c8;
    puVar10[3] = ppplStack_d0;
    puVar10[6] = uStack_b8;
    puVar10[5] = uStack_c0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puVar10[7] = uVar1;
    puVar10[8] = ppplStack_a8;
    *(undefined4 *)(puVar10 + 9) = uStack_a0;
    puStack_70 = (undefined8 *)0x0;
    puVar14 = puVar10;
    puStack_e0 = puVar10 + 3;
    puStack_d8 = puVar10;
    func_0x00010787be3c();
    *puVar14 = &PTR_DAT_1109e3d48;
    puVar14[1] = param_1;
    puVar14[2] = puVar10 + 3;
    puVar14[3] = puVar10;
    puStack_e0 = (undefined8 *)0x0;
    puStack_d8 = (undefined8 *)0x0;
    puStack_70 = puVar14;
    func_0x0001078995ec(pplVar2,param_5,param_6,&ppplStack_88);
    func_0x0001006393ec(&ppplStack_88);
    func_0x00010787a900(&puStack_e0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_c0);
    func_0x00010732e4c0(&pplStack_98);
  }
  func_0x00010787bda4(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_10787a438:
  func_0x000104bd35f4();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10787a440);
  (*pcVar4)();
}



/* Entry: 10787a8e4; end: 10787a8ff;  */

void FUN_10787a8e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1 + 0x28);
  return;
}



/* Entry: 10787abc4; end: 10787abcf;  */

undefined ** FUN_10787abc4(void)

{
  return &PTR_DAT_1109e3da8;
}



/* Entry: 10787ad38; end: 10787ad4b;  */

void FUN_10787ad38(void)

{
  func_0x00010787ad78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10787af18; end: 10787af3b;  */

void FUN_10787af18(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109e3e18;
  return;
}



/* Entry: 10787b420; end: 10787b437;  */

void FUN_10787b420(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      __ZNSt3__17promiseIvED1Ev(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10787b8b8; end: 10787b8cf;  */

void FUN_10787b8b8(long *param_1,long param_2)

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



/* Entry: 10787babc; end: 10787bb17;  */

undefined8 * FUN_10787babc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e3e98;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 6);
  return param_1;
}



/* Entry: 10787bef0; end: 10787bf1b;  */

void FUN_10787bef0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109e3f18;
  return;
}



/* Entry: 10787c2e8; end: 10787c313;  */

long FUN_10787c2e8(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010787c638();
  lVar1 = unaff_x19 + 0x80;
  func_0x0001077b2e0c(lVar1);
  func_0x00010787c644();
  return lVar1;
}



/* Entry: 10787c690; end: 10787c6e7;  */

int FUN_10787c690(double param_1,undefined8 param_2,uint param_3)

{
  double dVar1;
  
  dVar1 = 512.0 / (double)param_3;
  _log2(dVar1);
  return (int)(double)(long)(param_1 + dVar1);
}



/* Entry: 10787da4c; end: 10787da83;  */

undefined8
FUN_10787da4c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  uStack_22 = param_4;
  uStack_21 = param_3;
  func_0x00010787da84(param_1,&uStack_21,param_2,&uStack_22);
  return param_1;
}



/* Entry: 10787eafc; end: 10787eb1f;  */

void FUN_10787eafc(long param_1)

{
  func_0x000107881704();
  if (param_1 != 0) {
    func_0x0001078817c0();
  }
  return;
}



/* Entry: 10787ed54; end: 10787ed5f;  */

long * FUN_10787ed54(long *param_1,long param_2,undefined8 param_3,long param_4)

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



/* Entry: 10787ef04; end: 10787f3b3;  */

void FUN_10787ef04(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  ulong param_6)

{
  long lVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 in_ZR;
  undefined1 in_CY;
  char cVar4;
  undefined1 uVar5;
  bool bVar6;
  char cVar7;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong uVar8;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long lVar9;
  ulong extraout_x8_15;
  ulong extraout_x8_16;
  ulong extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  long extraout_x9_07;
  long lVar10;
  ulong extraout_x9_08;
  ulong extraout_x9_09;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong uVar11;
  long extraout_x10_01;
  ulong extraout_x10_02;
  double *extraout_x10_03;
  double *extraout_x10_04;
  double *extraout_x10_05;
  double *pdVar12;
  long extraout_x11;
  long extraout_x11_00;
  long extraout_x11_01;
  long extraout_x11_02;
  long extraout_x11_03;
  long lVar13;
  long extraout_x11_04;
  long extraout_x13;
  long extraout_x13_00;
  double *extraout_x14;
  double *extraout_x14_00;
  double *extraout_x14_01;
  long extraout_x15;
  long extraout_x16;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong uVar14;
  ulong unaff_x27;
  double dVar15;
  double dVar16;
  double dVar17;
  
  func_0x000107881230();
  do {
    func_0x000107881710();
LAB_10787ef38:
    func_0x000107881948();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010787f154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10deb0260)[extraout_x8] * 4 + 0x10787f158))();
      return;
    }
    if ((long)extraout_x9 < 0x240) {
      if ((param_6 & 1) == 0) {
        uVar14 = unaff_x20;
        if (unaff_x20 != unaff_x19) {
          while( true ) {
            uVar5 = (long)((unaff_x20 + 0x18) - unaff_x19) < 0;
            if (unaff_x20 + 0x18 == unaff_x19) break;
            func_0x000107881490(uVar14 + 0x18,*(undefined8 *)(unaff_x20 + 0x28));
            unaff_x20 = extraout_x9_08;
            uVar14 = extraout_x8_15;
            if ((bool)uVar5) {
              func_0x000107881414();
              do {
                uVar3 = uVar5;
                func_0x0001078814e4();
                uVar5 = 1;
              } while ((bool)uVar3);
              func_0x000107881364();
              unaff_x20 = extraout_x9_09;
              uVar14 = extraout_x8_16;
            }
          }
          return;
        }
        return;
      }
      if (unaff_x20 == unaff_x19) {
        return;
      }
      lVar9 = 0;
      break;
    }
    if (param_5 == 0) {
      if (unaff_x20 == unaff_x19) {
        return;
      }
      func_0x0001078819e0();
      lVar9 = extraout_x8_05;
      lVar10 = extraout_x9_04;
      lVar13 = extraout_x11_00;
      lVar1 = extraout_x9_04;
      goto joined_r0x00010787f240;
    }
    uVar14 = unaff_x20 + (extraout_x8 >> 1) * 0x18;
    uVar5 = (long)(extraout_x9 - 0xc01) < 0;
    if (extraout_x9 < 0xc01) {
      func_0x00010787f3b4(uVar14);
    }
    else {
      func_0x00010787f3b4();
      func_0x000107881920();
      func_0x00010787f3b4();
      func_0x00010787f3b4(unaff_x20 + 0x30,uVar14 + 0x18);
      func_0x00010787f3b4(unaff_x27,uVar14,uVar14 + 0x18);
      func_0x000107881174();
      func_0x000107881424();
    }
    param_5 = param_5 + -1;
    if ((param_6 & 1) == 0) {
      param_2 = *(double *)(unaff_x20 - 8);
      param_1 = *(double *)(unaff_x20 + 0x10);
      uVar5 = 1;
      if (param_1 <= param_2) {
        func_0x000107881914();
        param_2 = *(double *)(unaff_x19 - 8);
        uVar5 = param_1 < param_2;
        uVar8 = unaff_x20;
        if ((bool)uVar5) {
          do {
            func_0x000107881868();
          } while (!(bool)uVar5);
        }
        else {
          do {
            uVar14 = uVar8 + 0x18;
            if (unaff_x19 <= uVar14) break;
            param_2 = *(double *)(uVar8 + 0x28);
            uVar8 = uVar14;
          } while (param_2 <= param_1);
        }
        bVar6 = (long)(uVar14 - unaff_x19) < 0;
        uVar8 = unaff_x19;
        if (uVar14 < unaff_x19) {
          do {
            bVar2 = bVar6;
            func_0x000107881854();
            bVar6 = true;
            uVar8 = extraout_x8_02;
          } while (bVar2);
        }
        while (uVar14 < uVar8) {
          func_0x0001078811fc();
          do {
            func_0x0001078818e0();
            uVar8 = extraout_x8_03;
          } while (param_2 <= param_1);
          do {
            param_2 = *(double *)(uVar8 - 8);
            uVar8 = uVar8 - 0x18;
          } while (param_1 < param_2);
        }
        in_CY = uVar14 - 0x18 <= unaff_x20;
        in_ZR = unaff_x20 == uVar14 - 0x18;
        if (!(bool)in_ZR) {
          func_0x000107881818();
        }
        func_0x00010788187c();
        goto LAB_10787ef38;
      }
    }
    else {
      param_1 = *(double *)(unaff_x20 + 0x10);
    }
    func_0x000107881914();
    do {
      uVar3 = uVar5;
      func_0x000107881900();
      uVar5 = 1;
    } while ((bool)uVar3);
    uVar14 = unaff_x20 + extraout_x9_00;
    uVar5 = extraout_x9_00 + -0x18 < 0;
    uVar8 = unaff_x19;
    if (extraout_x9_00 == 0x18) {
      do {
        uVar11 = uVar8;
        bVar6 = (long)(uVar14 - uVar11) < 0;
        if (uVar11 <= uVar14) break;
        func_0x000107881160();
        uVar14 = extraout_x8_01;
        uVar11 = extraout_x9_02;
        uVar8 = extraout_x10;
      } while (!bVar6);
    }
    else {
      do {
        func_0x000107881160();
        uVar11 = extraout_x9_01;
        uVar14 = extraout_x8_00;
      } while (!(bool)uVar5);
    }
    while (uVar14 < uVar11) {
      func_0x0001078811c8();
      do {
        func_0x0001078818e0();
        uVar11 = extraout_x10_00;
      } while (param_2 < param_1);
      do {
        param_2 = *(double *)(uVar11 - 8);
        uVar11 = uVar11 - 0x18;
      } while (param_1 <= param_2);
    }
    unaff_x27 = uVar14 - 0x18;
    in_CY = unaff_x27 <= unaff_x20;
    in_ZR = unaff_x20 == unaff_x27;
    if (!(bool)in_ZR) {
      func_0x0001078818b8();
    }
    func_0x0001078818a4();
    if (!(bool)in_CY) goto LAB_10787f088;
    uVar8 = unaff_x20;
    func_0x00010787f4fc();
    func_0x00010787f4fc(uVar14,unaff_x19);
    if ((int)uVar14 == 0) goto code_r0x00010787f084;
    unaff_x19 = unaff_x27;
    if ((uVar8 & 1) != 0) {
      return;
    }
  } while( true );
LAB_10787f1dc:
  uVar14 = unaff_x20 + 0x18;
  if (uVar14 == unaff_x19) {
    return;
  }
  dVar15 = *(double *)(unaff_x20 + 0x28);
  if (dVar15 < *(double *)(unaff_x20 + 0x10)) {
    func_0x000107881414(lVar9);
    do {
      func_0x000107881758();
      if (extraout_x10_01 == 0) break;
    } while (dVar15 < *(double *)(extraout_x11 + -8));
    func_0x000107881364();
    lVar9 = extraout_x8_04;
    uVar14 = extraout_x9_03;
  }
  lVar9 = lVar9 + 0x18;
  unaff_x20 = uVar14;
  goto LAB_10787f1dc;
joined_r0x00010787f240:
  if (lVar1 < 0) {
    do {
      if (lVar9 < 2) {
        return;
      }
      func_0x000107881504();
      do {
        func_0x0001078819b8();
        lVar9 = extraout_x16 + 2;
        cVar4 = SBORROW8(lVar9,extraout_x8_09);
        cVar7 = lVar9 - extraout_x8_09 < 0;
        bVar6 = lVar9 == extraout_x8_09;
        if (lVar9 < extraout_x8_09) {
          dVar15 = *(double *)(extraout_x15 + 0x28);
          param_2 = *(double *)(extraout_x15 + 0x40);
          cVar4 = NAN(dVar15) || NAN(param_2);
          bVar6 = dVar15 == param_2;
          cVar7 = dVar15 < param_2;
        }
        func_0x0001078815e8();
      } while (bVar6 || cVar7 != cVar4);
      unaff_x19 = unaff_x19 - 0x18;
      cVar7 = SBORROW8(extraout_x10_02,unaff_x19);
      cVar4 = (long)(extraout_x10_02 - unaff_x19) < 0;
      if (extraout_x10_02 == unaff_x19) {
        func_0x0001078818ec();
        lVar9 = extraout_x8_14;
      }
      else {
        func_0x00010788128c();
        lVar9 = extraout_x8_10;
        if (cVar4 == cVar7) {
          func_0x00010788139c();
          dVar15 = extraout_x10_03[2];
          lVar9 = extraout_x8_11;
          if (param_2 < dVar15) {
            dVar17 = extraout_x10_03[1];
            param_2 = *extraout_x10_03;
            dVar16 = param_2;
            do {
              func_0x0001078815cc();
              lVar9 = extraout_x8_12;
              pdVar12 = extraout_x10_04;
              if (extraout_x11_04 == 0) break;
              func_0x00010788139c();
              lVar9 = extraout_x8_13;
              pdVar12 = extraout_x10_05;
            } while (dVar16 < dVar15);
            pdVar12[1] = dVar17;
            *pdVar12 = param_2;
            pdVar12[2] = dVar15;
          }
        }
      }
      lVar9 = lVar9 + -1;
    } while( true );
  }
  cVar4 = SBORROW8(lVar10,lVar13);
  cVar7 = lVar10 - lVar13 < 0;
  if (lVar13 <= lVar10) {
    func_0x000107881660();
    if (cVar7 != cVar4) {
      param_1 = *(double *)(extraout_x13 + 0x10);
      param_2 = *(double *)(extraout_x13 + 0x28);
      cVar4 = NAN(param_1) || NAN(param_2);
      cVar7 = param_1 < param_2;
    }
    func_0x0001078819cc();
    lVar9 = extraout_x8_06;
    lVar10 = extraout_x9_05;
    lVar13 = extraout_x11_01;
    if (!(bool)cVar7) {
      dVar15 = extraout_x14[1];
      param_2 = *extraout_x14;
      do {
        func_0x000107881544();
        lVar9 = extraout_x8_07;
        lVar10 = extraout_x9_06;
        lVar13 = extraout_x11_02;
        pdVar12 = extraout_x14_00;
        if (cVar7 != cVar4) break;
        func_0x000107881524();
        lVar9 = extraout_x13_00;
        if ((cVar7 != cVar4) &&
           (*(double *)(extraout_x13_00 + 0x10) < *(double *)(extraout_x13_00 + 0x28))) {
          lVar9 = extraout_x13_00 + 0x18;
        }
        cVar4 = NAN(*(double *)(lVar9 + 0x10)) || NAN(param_1);
        cVar7 = *(double *)(lVar9 + 0x10) < param_1;
        lVar9 = extraout_x8_08;
        lVar10 = extraout_x9_07;
        lVar13 = extraout_x11_03;
        pdVar12 = extraout_x14_01;
      } while (!(bool)cVar7);
      pdVar12[1] = dVar15;
      *pdVar12 = param_2;
      pdVar12[2] = param_1;
    }
  }
  lVar13 = lVar13 + -1;
  lVar1 = lVar13;
  goto joined_r0x00010787f240;
code_r0x00010787f084:
  if ((uVar8 & 1) == 0) {
LAB_10787f088:
    func_0x000107881890();
    FUN_10787ef04();
    param_6 = 0;
  }
  goto LAB_10787ef38;
}



/* Entry: 10787fb98; end: 10787fbdb;  */

void FUN_10787fb98(void)

{
  undefined1 in_NG;
  long unaff_x22;
  
  func_0x000107881134();
  func_0x00010787faec();
  func_0x0001078815a0(*(undefined8 *)(unaff_x22 + 0x10));
  if ((((bool)in_NG) && (func_0x0001078810e0(), (bool)in_NG)) &&
     (func_0x0001078810b0(), (bool)in_NG)) {
    func_0x000107881110();
  }
  return;
}



/* Entry: 1078801ac; end: 1078801e3;  */

void FUN_1078801ac(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_DAT_1109e3ff8;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107880a1c; end: 107880aef;  */

void FUN_107880a1c(undefined8 param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 in_register_00005008;
  undefined8 uVar3;
  
  iVar2 = (int)param_3;
  func_0x00010788135c();
  iVar1 = (int)param_3;
  func_0x0001078813bc();
  if ((param_3 & 1) == 0) {
    if (iVar1 != 0) {
      func_0x00010788168c();
      param_4[1] = in_register_00005008;
      *param_4 = param_1;
      func_0x00010788135c();
      if (iVar2 != 0) {
        func_0x000107881934();
      }
    }
  }
  else {
    if (iVar1 == 0) {
      func_0x000107881934();
      func_0x0001078813bc();
      if (iVar1 == 0) {
        return;
      }
      func_0x00010788168c();
    }
    else {
      in_register_00005008 = param_2[1];
      param_1 = *param_2;
      uVar3 = *param_4;
      param_2[1] = param_4[1];
      *param_2 = uVar3;
    }
    param_4[1] = in_register_00005008;
    *param_4 = param_1;
  }
  return;
}



/* Entry: 107880e00; end: 107880e1b;  */

void FUN_107880e00(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000107880e1c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10788100c; end: 107881013;  */

void FUN_10788100c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107881230(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x28;
    func_0x000104c31c5c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1078823ac; end: 107882457;  */

void FUN_1078823ac(undefined1 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  char in_NG;
  char in_OV;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined4 extraout_w8;
  
  puVar3 = param_2;
  func_0x000107882368();
  if (((ulong)puVar3 & 1) == 0) {
    uVar4 = 0;
    *param_1 = 0;
    goto LAB_10788244c;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x70);
  iVar2 = *(int *)(param_2 + 0x74);
  *(int *)(param_2 + 0x74) = iVar2 + 1;
  func_0x000107884554();
  if (in_NG == in_OV) {
    func_0x000107884284(param_2 + 0x40);
    if (*(long *)(param_2 + 0x68) == 0) {
      *(int *)(param_2 + 0x70) = *(int *)(param_2 + 0x70) + 1;
      func_0x000107881e44(param_2);
      if (*(long *)(param_2 + 0x68) == 0) goto LAB_107882428;
    }
    func_0x00010788445c(*(undefined8 *)(param_2 + 0x48));
    *(undefined4 *)(param_2 + 0x74) = extraout_w8;
  }
LAB_107882428:
  func_0x000107359e6c(param_1,*param_2,(long)iVar2,uVar1);
  uVar4 = 1;
LAB_10788244c:
  param_1[0x10] = uVar4;
  return;
}



/* Entry: 1078827c4; end: 10788284f;  */

long FUN_1078827c4(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x28;
      func_0x000104c31c5c();
    }
  }
  return param_1;
}



/* Entry: 107883400; end: 1078835c7;  */

bool FUN_107883400(long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  int *piVar10;
  long lVar11;
  int *piVar12;
  int *unaff_x19;
  int *unaff_x20;
  int *piVar13;
  
  func_0x00010788440c();
  switch((param_2 - param_1) / 0xc) {
  case 0:
  case 1:
    break;
  case 2:
    piVar12 = unaff_x20 + -3;
    bVar1 = unaff_x20[-2] < unaff_x19[1];
    if (*piVar12 != *unaff_x19) {
      bVar1 = *piVar12 < *unaff_x19;
    }
    if (bVar1) {
      iVar8 = unaff_x19[2];
      uVar9 = *(undefined8 *)unaff_x19;
      iVar3 = unaff_x20[-1];
      *(undefined8 *)unaff_x19 = *(undefined8 *)piVar12;
      unaff_x19[2] = iVar3;
      *(undefined8 *)piVar12 = uVar9;
      unaff_x20[-1] = iVar8;
      return true;
    }
    return true;
  case 3:
    func_0x0001078831b0();
    break;
  case 4:
    func_0x0001078832bc();
    break;
  case 5:
    func_0x000107883330();
    break;
  default:
    func_0x0001078831b0();
    lVar7 = 0;
    iVar8 = 0;
    piVar12 = unaff_x19 + 9;
    piVar13 = unaff_x19 + 6;
    while (piVar10 = piVar12, piVar10 != unaff_x20) {
      iVar3 = *piVar10;
      iVar4 = piVar10[1];
      bVar1 = iVar4 < piVar13[1];
      if (iVar3 != *piVar13) {
        bVar1 = iVar3 < *piVar13;
      }
      if (bVar1) {
        iVar5 = piVar10[2];
        lVar6 = lVar7;
        do {
          lVar11 = lVar6;
          *(undefined8 *)((long)unaff_x19 + lVar11 + 0x24) =
               *(undefined8 *)((long)unaff_x19 + lVar11 + 0x18);
          *(undefined4 *)((long)unaff_x19 + lVar11 + 0x2c) =
               *(undefined4 *)((long)unaff_x19 + lVar11 + 0x20);
          piVar12 = unaff_x19;
          if (lVar11 == -0x18) goto LAB_107883568;
          iVar2 = *(int *)((long)unaff_x19 + lVar11 + 0xc);
          bVar1 = iVar4 < *(int *)((long)unaff_x19 + lVar11 + 0x10);
          if (iVar3 != iVar2) {
            bVar1 = iVar3 < iVar2;
          }
          lVar6 = lVar11 + -0xc;
        } while (bVar1);
        piVar12 = (int *)((long)unaff_x19 + lVar11 + 0x18);
LAB_107883568:
        *piVar12 = iVar3;
        piVar12[1] = iVar4;
        piVar12[2] = iVar5;
        iVar8 = iVar8 + 1;
        if (iVar8 == 8) {
          return piVar10 + 3 == unaff_x20;
        }
      }
      lVar7 = lVar7 + 0xc;
      piVar13 = piVar10;
      piVar12 = piVar10 + 3;
    }
  }
  return true;
}



/* Entry: 107883c7c; end: 107883d1f;  */

undefined8 FUN_107883c7c(long *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = param_2[1];
  _memcpy(param_2[2],param_3,param_1[1] - param_3);
  lVar2 = *param_1;
  lVar3 = param_2[1];
  param_2[2] = param_2[2] + (param_1[1] - param_3);
  param_1[1] = param_3;
  lVar3 = lVar3 - (param_3 - lVar2);
  _memcpy(lVar3);
  param_2[1] = lVar3;
  lVar2 = *param_1;
  param_1[1] = lVar2;
  *param_1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return uVar1;
}



/* Entry: 107884a9c; end: 107884b13;  */

undefined8 * FUN_107884a9c(undefined8 *param_1,long param_2)

{
  undefined8 *puStack_30;
  undefined1 uStack_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_28 = 0;
  puStack_30 = param_1;
  if (param_2 != 0) {
    func_0x0001051888ac(param_1);
    func_0x000107884b14(param_1,param_2);
  }
  uStack_28 = 1;
  func_0x000107884b38(&puStack_30);
  return param_1;
}



/* Entry: 107884db0; end: 107884e07;  */

ulong * FUN_107884db0(long *param_1,byte *param_2,ulong *param_3,ulong param_4)

{
  ulong *puVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  ulong *puVar6;
  byte **ppbVar7;
  byte **ppbVar8;
  byte **ppbVar9;
  ulong *puVar10;
  undefined4 uVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  byte *pbStack_60;
  ulong *puStack_58;
  int iVar5;
  
  puVar6 = (ulong *)(param_1[1] - param_4);
  if (param_4 <= (ulong)param_1[1]) {
    if (param_3 <= puVar6) {
      puVar6 = param_3;
    }
    if (puVar6 != (ulong *)0x0) {
      _memmove(param_2,*param_1 + param_4,puVar6);
    }
    return puVar6;
  }
  puVar6 = (ulong *)&UNK_10f4309f5;
  func_0x000104c03f28();
  ppbVar7 = &pbStack_60;
  ppbVar8 = &pbStack_60;
  iVar4 = (int)&pbStack_60;
  ppbVar9 = &pbStack_60;
  iVar5 = (int)&pbStack_60;
  pbStack_60 = param_2;
  puStack_58 = param_3;
  func_0x0001057fa6dc(&pbStack_60,0x23,0);
  func_0x0001057fa6dc(&pbStack_60,0x3f,0);
  puVar12 = puStack_58;
  if (ppbVar7 != (byte **)0xffffffffffffffff) {
    puVar12 = (ulong *)ppbVar7;
  }
  puVar1 = puVar12;
  if (ppbVar8 != (byte **)0xffffffffffffffff && ppbVar8 <= ppbVar7) {
    puVar1 = (ulong *)ppbVar8;
  }
  uVar2 = 0;
  if (ppbVar8 != (byte **)0xffffffffffffffff && ppbVar8 <= ppbVar7) {
    uVar2 = (long)puVar12 - (long)ppbVar8;
  }
  *puVar6 = (ulong)puVar1;
  puVar6[1] = uVar2;
  if ((puStack_58 != (ulong *)0x0) && ((*pbStack_60 & 0xffffffdf) - 0x41 < 0x1a)) {
    for (puVar12 = (ulong *)0x0; puVar10 = puVar1, puVar1 != puVar12;
        puVar12 = (ulong *)((long)puVar12 + 1)) {
      bVar3 = pbStack_60[(long)puVar12];
      if ((9 < bVar3 - 0x30 && 0x19 < (bVar3 & 0xffffffdf) - 0x41) &&
         (puVar10 = puVar12, 0x2e < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x680000000000U) == 0))
      break;
    }
    if (puVar10 < puStack_58) {
      if (pbStack_60[(long)puVar10] != 0x3a) {
        puVar10 = (ulong *)0x0;
      }
      goto code_r0x000107884ef8;
    }
  }
  puVar10 = (ulong *)0x0;
code_r0x000107884ef8:
  puVar6[2] = 0;
  puVar6[3] = (ulong)puVar10;
  puVar13 = puVar10;
  puVar12 = puVar1;
  if (puVar1 <= puVar10) {
    puVar12 = puVar10;
  }
  for (; (puVar14 = puVar12, puVar13 < puVar1 &&
         ((pbStack_60[(long)puVar13] == 0x3a ||
          (puVar14 = puVar13, pbStack_60[(long)puVar13] == 0x2f))));
      puVar13 = (ulong *)((long)puVar13 + 1)) {
  }
  func_0x000107875ee0(&pbStack_60,0,puVar10,"data");
  uVar11 = 0x2c;
  if (iVar4 != 0) {
    uVar11 = 0x2f;
  }
  func_0x0001057fa6dc(&pbStack_60,uVar11,puVar14);
  if ((undefined1 *)*puVar6 <= ppbVar9) {
    ppbVar9 = (byte **)*puVar6;
  }
  puVar6[4] = (ulong)puVar14;
  puVar6[5] = (long)ppbVar9 - (long)puVar14;
  func_0x000107875ee0(&pbStack_60,puVar6[2],puVar6[3],"data");
  if (iVar5 == 0) {
    ppbVar9 = (byte **)((long)ppbVar9 + 1);
  }
  puVar6[6] = (ulong)ppbVar9;
  puVar6[7] = *puVar6 - (long)ppbVar9;
  return puVar6;
}



/* Entry: 107886420; end: 107886747;  */

undefined8 * FUN_107886420(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  float *pfVar5;
  undefined4 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  long lStack_58;
  
  *param_1 = &PTR_DAT_1109e4088;
  param_1[1] = param_2;
  param_1[2] = 0;
  lVar2 = 0x710;
  __Znwm();
  _bzero();
  func_0x000107887cac(lVar2 + 0xe0);
  _bzero(lVar2 + 0x2e8,0x100);
  func_0x000107887cac(lVar2 + 1000);
  lVar3 = lVar2 + 0x5e8;
  _bzero(lVar3,0x100);
  param_1[6] = lVar2;
  *(undefined4 *)(lVar2 + 0x6e8) = 0x38;
  *(undefined8 *)(lVar2 + 0x6f0) = 0;
  *(undefined4 *)(lVar2 + 0x6f8) = 0;
  *(undefined8 *)(lVar2 + 0x708) = 0;
  *(undefined8 *)(lVar2 + 0x700) = 0;
  plVar7 = *(long **)(*param_4 + 8);
  func_0x000107887ea4(*(undefined8 *)(*plVar7 + 0x60));
  param_1[2] = lVar3;
  plVar4 = plVar7;
  (**(code **)(*plVar7 + 0x48))(plVar7,0);
  param_1[3] = plVar4;
  func_0x000107887ea4(*(undefined8 *)(*plVar7 + 0x50));
  param_1[4] = plVar4;
  func_0x000107887ea4(*(undefined8 *)(*plVar7 + 0x58));
  param_1[5] = plVar4;
  (**(code **)(*plVar7 + 0x40))(&lStack_58);
  if (lStack_58 == 0) {
    param_1[7] = 0;
  }
  else {
    func_0x0001078884dc();
    func_0x000107887e2c();
    plVar4 = plVar7;
    func_0x000107889094();
    _objc_msgSend(plVar7,plVar4,0);
    plVar4 = plVar7;
    if (plVar7 != (long *)0x0) {
      FUN_10788b048();
      func_0x000107887e2c();
      if (plVar4 != (long *)0x0) {
        if ((char)param_4[3] == '\x01') {
          pfVar5 = (float *)(param_4 + 1);
          func_0x000107506760();
          fVar9 = *pfVar5;
          fVar10 = pfVar5[1];
          fVar11 = pfVar5[2];
          fVar12 = pfVar5[3];
          func_0x000107889fcc();
          func_0x000107887e34();
          func_0x000107889560();
          _objc_msgSend((double)fVar9,(double)fVar10,(double)fVar11,(double)fVar12,plVar7,pfVar5);
          plVar4 = plVar7;
        }
        else {
          func_0x000107889fcc();
          func_0x000107887e20();
        }
      }
    }
    func_0x00010788870c();
    func_0x000107887e2c();
    plVar7 = plVar4;
    if (plVar4 != (long *)0x0) {
      FUN_10788b048();
      func_0x000107887e2c();
      if (plVar7 != (long *)0x0) {
        if ((char)param_4[4] == '\x01') {
          func_0x000107889fcc();
          func_0x000107887e34();
          pfVar5 = (float *)((long)param_4 + 0x1c);
          func_0x00010726a954();
          fVar9 = *pfVar5;
          func_0x0001078895d0();
          _objc_msgSend((double)fVar9,plVar4,pfVar5);
          plVar7 = plVar4;
        }
        else {
          func_0x000107889fcc();
          func_0x000107887e20();
        }
      }
    }
    func_0x00010788aefc();
    func_0x000107887e2c();
    plVar4 = plVar7;
    if (plVar7 != (long *)0x0) {
      FUN_10788b048();
      func_0x000107887e2c();
      if (plVar4 != (long *)0x0) {
        if ((char)param_4[5] == '\x01') {
          func_0x000107889fcc();
          func_0x000107887e34();
          puVar6 = (undefined4 *)((long)param_4 + 0x24);
          func_0x000107886748();
          uVar1 = *puVar6;
          func_0x000107889640();
          _objc_msgSend(plVar7,puVar6,uVar1);
          plVar4 = plVar7;
        }
        else {
          func_0x000107889fcc();
          func_0x000107887e20();
        }
      }
    }
    lVar3 = lStack_58;
    uVar8 = *(undefined8 *)(param_1[1] + 0x10);
    func_0x0001078891e4();
    _objc_msgSend(uVar8,plVar4,lVar3);
    param_1[7] = uVar8;
    if (lStack_58 != 0) {
      func_0x00010788b354();
      _objc_msgSend(lStack_58,uVar8);
    }
  }
  return param_1;
}



/* Entry: 1078868d4; end: 107886937;  */

void FUN_1078868d4(long param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (((char)plVar1[1] == '\x01') && (func_0x000107886938(), *plVar1 == param_2)) {
    return;
  }
  func_0x00010788a33c();
  func_0x000107887ec8();
  _objc_msgSend();
  plVar1 = *(long **)(param_1 + 0x30);
  *plVar1 = param_2;
  *(undefined1 *)(plVar1 + 1) = 1;
  return;
}



/* Entry: 1078870f8; end: 107887137;  */

undefined4 FUN_1078870f8(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x6e8);
}



/* Entry: 1078874a4; end: 1078874db;  */

void FUN_1078874a4(long param_1)

{
  if (*(long *)(*(long *)(param_1 + 0x30) + 0x6f0) != 0) {
    func_0x000107887d9c();
    func_0x000107887e40();
  }
  return;
}



/* Entry: 107887720; end: 1078877c7;  */

void FUN_107887720(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long lStack_48;
  
  if (*(long *)(*(long *)(param_1 + 0x30) + 0x6f0) != 0) {
    func_0x0001078877c8(&lStack_48,param_4 & 0xffffffff);
    for (uVar1 = 0; (param_4 & 0xffffffff) != uVar1; uVar1 = uVar1 + 1) {
      *(uint *)(lStack_48 + uVar1 * 4) = (uint)*(byte *)(param_3 + uVar1);
    }
    func_0x000107887df4(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 0x6f0) + 0x1c0));
    func_0x0001078874dc(param_1);
    func_0x000107887d08(&lStack_48);
  }
  return;
}



/* Entry: 107887ae4; end: 107887b37;  */

void FUN_107887ae4(long param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 0x6f0);
  if (lVar1 != 0) {
    func_0x000107887dcc(*(undefined8 *)(lVar1 + 0x1d8));
    uVar2 = (uint)param_2;
    if (((uVar2 >> 0x18 == 1) && ((param_2 >> 0x20 & 1) != 0)) &&
       (((uint)(param_2 >> 0x10) & 0xff) == 2)) {
      if ((~uVar2 & 0xff) != 0) {
        func_0x000107886950(param_1,param_3,8,uVar2 & 0xff);
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
  return;
}



/* Entry: 107887d44; end: 107887d9b;  */

long * FUN_107887d44(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdaPv();
  }
  return param_1;
}



/* Entry: 107887fa8; end: 107888013;  */

undefined8 FUN_107887fa8(void)

{
  int iVar1;
  
  if ((bRam00000001137263b8 & 1) == 0) {
    iVar1 = 0x137263b8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _objc_lookUpClass(&UNK_10f430a31);
      func_0x0001078902dc(0x1137263b0);
    }
  }
  return uRam00000001137263b0;
}



/* Entry: 10788831c; end: 10788838b;  */

undefined * FUN_10788831c(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113823ed0 & 1) == 0) {
    iVar1 = 0x13823ed0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430b04;
      _sel_registerName();
      puRam0000000113823ec8 = puVar2;
      ___cxa_guard_release(0x113823ed0);
    }
  }
  return puRam0000000113823ec8;
}



/* Entry: 10788869c; end: 10788870b;  */

undefined * FUN_10788869c(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113823f50 & 1) == 0) {
    iVar1 = 0x13823f50;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430b74;
      _sel_registerName();
      puRam0000000113823f48 = puVar2;
      ___cxa_guard_release(0x113823f50);
    }
  }
  return puRam0000000113823f48;
}



/* Entry: 107888a18; end: 107888a87;  */

undefined * FUN_107888a18(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113823fc0 & 1) == 0) {
    iVar1 = 0x13823fc0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430cb4;
      _sel_registerName();
      puRam0000000113823fb8 = puVar2;
      ___cxa_guard_release(0x113823fc0);
    }
  }
  return puRam0000000113823fb8;
}



/* Entry: 107888d94; end: 107888dff;  */

undefined8 FUN_107888d94(void)

{
  int iVar1;
  
  if ((bRam0000000113726438 & 1) == 0) {
    iVar1 = 0x13726438;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _sel_registerName(&UNK_10f430d8b);
      func_0x0001078902dc(0x113726430);
    }
  }
  return uRam0000000113726430;
}



/* Entry: 107889104; end: 107889173;  */

undefined * FUN_107889104(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824070 & 1) == 0) {
    iVar1 = 0x13824070;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430e87;
      _sel_registerName();
      puRam0000000113824068 = puVar2;
      ___cxa_guard_release(0x113824070);
    }
  }
  return puRam0000000113824068;
}



/* Entry: 107889480; end: 1078894ef;  */

undefined * FUN_107889480(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam00000001138240e0 & 1) == 0) {
    iVar1 = 0x138240e0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f430f8d;
      _sel_registerName();
      puRam00000001138240d8 = puVar2;
      ___cxa_guard_release(0x1138240e0);
    }
  }
  return puRam00000001138240d8;
}



/* Entry: 107889800; end: 10788986b;  */

undefined8 FUN_107889800(void)

{
  int iVar1;
  
  if ((bRam0000000113726498 & 1) == 0) {
    iVar1 = 0x13726498;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _sel_registerName(&UNK_10f431040);
      func_0x0001078902dc(0x113726490);
    }
  }
  return uRam0000000113726490;
}



/* Entry: 107889b70; end: 107889bdf;  */

undefined * FUN_107889b70(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam00000001138241a0 & 1) == 0) {
    iVar1 = 0x138241a0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f431106;
      _sel_registerName();
      puRam0000000113824198 = puVar2;
      ___cxa_guard_release(0x1138241a0);
    }
  }
  return puRam0000000113824198;
}



/* Entry: 107889eec; end: 107889f5b;  */

undefined * FUN_107889eec(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824210 & 1) == 0) {
    iVar1 = 0x13824210;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f4311e8;
      _sel_registerName();
      puRam0000000113824208 = puVar2;
      ___cxa_guard_release(0x113824210);
    }
  }
  return puRam0000000113824208;
}



/* Entry: 10788a260; end: 10788a2cf;  */

undefined * FUN_10788a260(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824260 & 1) == 0) {
    iVar1 = 0x13824260;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f431256;
      _sel_registerName();
      puRam0000000113824258 = puVar2;
      ___cxa_guard_release(0x113824260);
    }
  }
  return puRam0000000113824258;
}



/* Entry: 10788a5d8; end: 10788a643;  */

undefined8 FUN_10788a5d8(void)

{
  int iVar1;
  
  if ((bRam0000000113726538 & 1) == 0) {
    iVar1 = 0x13726538;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _sel_registerName(&UNK_10f431307);
      func_0x0001078902dc(0x113726530);
    }
  }
  return uRam0000000113726530;
}



/* Entry: 10788a950; end: 10788a9bb;  */

undefined8 FUN_10788a950(void)

{
  int iVar1;
  
  if ((bRam0000000113726558 & 1) == 0) {
    iVar1 = 0x13726558;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _sel_registerName(&UNK_10f4313a1);
      func_0x0001078902dc(0x113726550);
    }
  }
  return uRam0000000113726550;
}



/* Entry: 10788accc; end: 10788ad3b;  */

undefined * FUN_10788accc(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824390 & 1) == 0) {
    iVar1 = 0x13824390;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f43144b;
      _sel_registerName();
      puRam0000000113824388 = puVar2;
      ___cxa_guard_release(0x113824390);
    }
  }
  return puRam0000000113824388;
}



/* Entry: 10788b048; end: 10788b0b7;  */

undefined * FUN_10788b048(void)

{
  int iVar1;
  undefined *puVar2;
  
  if ((bRam0000000113824400 & 1) == 0) {
    iVar1 = 0x13824400;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = &UNK_10f4314b8;
      _sel_registerName();
      puRam00000001138243f8 = puVar2;
      ___cxa_guard_release(0x113824400);
    }
  }
  return puRam00000001138243f8;
}



/* Entry: 10788b3c4; end: 10788b42f;  */

undefined8 FUN_10788b3c4(void)

{
  int iVar1;
  
  if ((bRam00000001137265a8 & 1) == 0) {
    iVar1 = 0x137265a8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _sel_registerName(&UNK_10f43150e);
      func_0x0001078902dc(0x1137265a0);
    }
  }
  return uRam00000001137265a0;
}



/* Entry: 10788c454; end: 10788c457;  */

long FUN_10788c454(long param_1)

{
  func_0x00010788f804(param_1 + 0x27b8);
  func_0x00010789085c();
  func_0x00010788f0f4(param_1 + 0x2790);
  func_0x00010788f184(param_1 + 0x298);
  func_0x00010788f1bc(param_1 + 0xd8);
  func_0x00010724b8b8(param_1 + 200);
  if (*(long *)(param_1 + 0xc0) != 0) {
    func_0x00010788b354();
    func_0x000107890438();
  }
  func_0x00010788f204(param_1 + 0xa8);
  if (*(long *)(param_1 + 0xa0) != 0) {
    func_0x00010788b354();
    func_0x000107890438();
  }
  func_0x00010788f294(param_1 + 0x88);
  func_0x00010788f710(param_1 + 0x80);
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010788b354();
    func_0x000107890438();
  }
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010788b354();
    func_0x000107890438();
  }
  return param_1;
}



/* Entry: 10788d104; end: 10788d10f;  */

void FUN_10788d104(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10788d570; end: 10788d5df;  */

void FUN_10788d570(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  lVar3 = *param_2;
  if (lVar3 != 0) {
    uStack_31 = 0;
    lVar1 = *(long *)(param_1 + 0x28) + 0x9a0;
    func_0x00010724e2c8(lVar1,&uStack_31);
    uStack_32 = 0;
    lVar2 = *(long *)(param_1 + 0x28) + 0x950;
    func_0x00010724e2c8(lVar2,&uStack_32);
    func_0x00010788d5e0(lVar3,lVar1,lVar2);
  }
  return;
}



/* Entry: 10788dc2c; end: 10788df0b;  */

void FUN_10788dc2c(ulong *param_1,long param_2,uint param_3,long *param_4)

{
  undefined8 uVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong *extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x10;
  ulong extraout_x10_00;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uStack_6f0;
  undefined4 uStack_6e8;
  undefined8 uStack_6e0;
  undefined4 uStack_6d8;
  undefined4 auStack_6d0 [6];
  undefined4 uStack_6b8;
  undefined **ppuStack_6b0;
  undefined8 uStack_6a8;
  undefined4 uStack_688;
  undefined1 uStack_684;
  long lStack_660;
  long lStack_658;
  ulong uStack_650;
  ulong uStack_648;
  ulong uStack_640;
  ulong uStack_638;
  undefined1 **ppuStack_630;
  undefined *puStack_628;
  ulong uStack_590;
  undefined1 uStack_588;
  undefined4 uStack_57c;
  long alStack_578 [33];
  ulong uStack_470;
  undefined1 uStack_468;
  undefined8 uStack_368;
  undefined1 *puStack_320;
  undefined *puStack_318;
  long lStack_280;
  undefined1 uStack_278;
  uint uStack_26c;
  ulong auStack_268 [33];
  ulong uStack_160;
  undefined1 uStack_158;
  undefined8 uStack_58;
  
  uStack_26c = param_3;
  func_0x000107890480();
  lVar8 = *param_4;
  uStack_160 = uStack_160 & 0xffffffffffffff00;
  lVar2 = *(long *)(param_2 + 0x28) + 0x9a0;
  uStack_58 = extraout_x8;
  func_0x00010724e2c8(lVar2,&uStack_160);
  auStack_268[0] = auStack_268[0] & 0xffffffffffffff00;
  lVar13 = *(long *)(param_2 + 0x28) + 0x950;
  func_0x00010724e2c8(lVar13,auStack_268);
  func_0x00010788d5e0(lVar8,lVar2,lVar13);
  if ((*(byte *)(lVar8 + 0x2759) & 1) == 0) {
LAB_10788dcf8:
    lStack_280 = lVar8 + (ulong)param_3 * 0xa8 + 0x1c8;
    uStack_278 = 1;
    __ZNSt3__119__shared_mutex_base4lockEv();
    uVar3 = (ulong)uStack_26c;
    if ((*(byte *)(lVar8 + 0x2759) & 1) == 0) {
      *param_1 = 0;
LAB_10788dd48:
      func_0x0001073cafc0(uVar3);
      func_0x0001078907f8();
      func_0x000107890490();
      func_0x00010789068c();
      func_0x00010789067c();
      func_0x000107288cd8(auStack_268);
      func_0x000107890760();
      func_0x0001078905c8();
      func_0x00010729d56c((ulong)param_3 + 8);
      func_0x000107890650();
      func_0x0001078905b0();
      func_0x0001078907e0();
      uVar1 = extraout_x11;
      uVar10 = extraout_x10;
      if (in_NG == in_OV) {
        uVar1 = extraout_x8_00;
        uVar10 = extraout_x9;
      }
      func_0x00010789080c(uVar10,uVar1);
      auStack_268[0] = 0;
      uVar7 = uVar10;
      func_0x000107888e70();
      func_0x000107890748();
      if ((uVar7 == 0) || (auStack_268[0] != 0)) {
        uVar3 = uVar7;
        func_0x00010788b278();
        func_0x0001078904d8();
        uVar12 = uVar3;
        func_0x00010788b580();
        _objc_msgSend(uVar3,uVar12);
        *param_1 = 0;
        if (uVar7 != 0) goto LAB_10788de40;
      }
      else {
        _dispatch_release();
        func_0x00010788b430();
        func_0x0001078903f4();
        *param_1 = uVar10;
        uVar6 = (uint)*(byte *)(lVar8 + 0x2759);
        in_OV = SBORROW4(uVar6,1);
        in_NG = (int)(uVar6 - 1) < 0;
        in_ZR = 0;
        uVar3 = uVar10;
        if (uVar6 == 1) {
          uVar12 = (ulong)uStack_26c;
          uVar7 = *(ulong *)(lVar8 + 8 + uVar12 * 8);
          in_OV = SBORROW8(uVar7,uVar10);
          in_NG = (long)(uVar7 - uVar10) < 0;
          in_ZR = uVar7 == uVar10;
          if (!(bool)in_ZR) {
            if (uVar7 != 0) {
              func_0x00010788b354();
              func_0x0001078904e8();
            }
            func_0x00010788b430();
            func_0x000107890428();
            *(ulong *)(lVar8 + 8 + uVar12 * 8) = uVar3;
          }
        }
LAB_10788de40:
        func_0x00010788b354();
        func_0x00010789062c();
      }
      func_0x0001078906c0();
      func_0x000107890718();
    }
    else {
      uVar10 = *(ulong *)(lVar8 + uVar3 * 8 + 8);
      func_0x00010788b430();
      func_0x000107890428();
      *param_1 = uVar3;
      if (uVar3 == 0) {
        uVar3 = (ulong)uStack_26c;
        goto LAB_10788dd48;
      }
    }
    func_0x000107890728();
  }
  else {
    uVar10 = lVar8 + (ulong)param_3 * 0xa8 + 0x1c8;
    uStack_158 = 1;
    uStack_160 = uVar10;
    __ZNSt3__119__shared_mutex_base11lock_sharedEv();
    func_0x00010788b430();
    func_0x000107890428();
    *param_1 = uVar10;
    uVar3 = uVar10;
    func_0x000107890804();
    if (uVar10 == 0) goto LAB_10788dcf8;
  }
  func_0x0001078903b4(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (uVar10 != 0) {
    func_0x00010788b354();
    func_0x000107890420();
  }
  func_0x00010788b354();
  uVar12 = uVar3;
  func_0x00010789062c();
  func_0x0001078906c0();
  func_0x000107890718();
  func_0x000107890728();
  func_0x0001078903e0();
  puStack_318 = &UNK_10788df0c;
  uVar10 = uVar3;
  uVar7 = uVar12;
  puStack_320 = &stack0xfffffffffffffff0;
  func_0x000107890480();
  uStack_57c = (undefined4)uVar7;
  uVar10 = uVar10 + (uVar7 & 0xffffffff) * 0xa8 + 0x298;
  uStack_468 = 1;
  uVar7 = uVar10;
  uStack_470 = uVar10;
  uStack_368 = extraout_x8_02;
  __ZNSt3__119__shared_mutex_base11lock_sharedEv();
  lVar2 = uVar3 + 0xd8;
  lVar13 = *(long *)(lVar2 + (uVar12 & 0xffffffff) * 8);
  if (lVar13 != 0) {
    func_0x00010788b430();
    uVar11 = uVar7;
    func_0x0001078904d8();
    iVar5 = (int)uVar11;
    *extraout_x8_01 = uVar7;
    func_0x000107890804();
    uVar11 = uVar10;
    goto code_r0x00010788e0b4;
  }
  func_0x000107890804();
  uStack_588 = 1;
  uStack_590 = uVar10;
  __ZNSt3__119__shared_mutex_base4lockEv();
  uVar11 = *(ulong *)(lVar2 + (uVar12 & 0xffffffff) * 8);
  if (uVar11 == 0) {
    func_0x0001073cafc0(uStack_57c);
    func_0x0001078907f8();
    func_0x000107890490();
    func_0x00010789068c();
    func_0x00010789067c();
    func_0x000107288cd8(alStack_578);
    func_0x000107890760();
    func_0x0001078905c8();
    func_0x00010729d56c(8);
    func_0x000107890650();
    func_0x0001078905b0();
    func_0x0001078907e0();
    uVar1 = extraout_x11_00;
    uVar11 = extraout_x10_00;
    if (in_NG == in_OV) {
      uVar1 = extraout_x8_03;
      uVar11 = extraout_x9_00;
    }
    func_0x00010789080c(uVar11,uVar1);
    alStack_578[0] = 0;
    uVar3 = uVar11;
    func_0x000107888e70();
    func_0x000107890748();
    lVar13 = alStack_578[0];
    if ((uVar3 == 0) || (alStack_578[0] != 0)) {
      uVar12 = uVar3;
      func_0x00010788b278();
      func_0x0001078904d8();
      uVar10 = uVar12;
      func_0x00010788b580();
      iVar5 = (int)uVar10;
      uVar10 = uVar12;
      _objc_msgSend();
      *extraout_x8_01 = 0;
      if (uVar3 != 0) goto code_r0x00010788e09c;
    }
    else {
      _dispatch_release();
      func_0x00010788b430();
      func_0x0001078903f4();
      *extraout_x8_01 = uVar11;
      uVar7 = *(ulong *)(lVar2 + (uVar12 & 0xffffffff) * 8);
      in_ZR = uVar7 == uVar11;
      uVar10 = uVar11;
      if (!(bool)in_ZR) {
        if (uVar7 != 0) {
          func_0x00010788b354();
          func_0x0001078904e8();
        }
        func_0x00010788b430();
        func_0x000107890428();
        *(ulong *)(lVar2 + (uVar12 & 0xffffffff) * 8) = uVar10;
      }
code_r0x00010788e09c:
      func_0x00010788b354();
      uVar7 = uVar10;
      func_0x00010789062c();
      iVar5 = (int)uVar7;
    }
    func_0x0001078906c0();
    func_0x000107890718();
  }
  else {
    func_0x00010788b430();
    uVar7 = uVar10;
    func_0x000107890428();
    iVar5 = (int)uVar7;
    *extraout_x8_01 = uVar10;
  }
  func_0x000107890728();
  uVar7 = uVar10;
code_r0x00010788e0b4:
  func_0x0001078903b4(uStack_368);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (iVar5 == 0) {
      func_0x0001078903e0();
    }
    uVar10 = uVar7;
    func_0x000104bd46a0();
    puStack_628 = &DAT_10788e16c;
    puVar9 = *(undefined8 **)(uVar10 + 0x20);
    auStack_6d0[0] = 0x9d;
    uStack_6b8 = 0;
    uVar4 = uVar10;
    lStack_660 = lVar2;
    lStack_658 = lVar13;
    uStack_650 = uVar11;
    uStack_648 = uVar3;
    uStack_640 = uVar12;
    uStack_638 = uVar7;
    ppuStack_630 = &puStack_320;
    func_0x000107890348();
    uStack_684 = 1;
    func_0x00010789053c();
    func_0x0001078902fc(*(undefined4 *)(uVar4 + 0x6c));
    uStack_6e8 = 3;
    func_0x00010743fa44(puVar9,auStack_6d0,&uStack_6e0,&uStack_6f0,7);
    func_0x000107890430();
    func_0x000107890378(0x9e);
    func_0x0001078902c0();
    func_0x0001078902fc(*(undefined4 *)(uVar10 + 0x70));
    uStack_6e8 = 3;
    func_0x0001078902a8();
    func_0x000107890430();
    func_0x000107890378(0xa1);
    func_0x0001078902c0();
    func_0x0001078902fc(*(undefined4 *)(uVar10 + 0x68));
    uStack_6e8 = 3;
    func_0x0001078902a8();
    func_0x000107890430();
    func_0x000107890378(0xeb);
    func_0x0001078902c0();
    func_0x0001078902fc(*(undefined4 *)(uVar10 + 0x74));
    uStack_6e8 = 3;
    func_0x0001078902a8();
    func_0x000107890430();
    func_0x000107890378(0xec);
    func_0x0001078902c0();
    func_0x0001078902fc(*(undefined4 *)(uVar10 + 0x78));
    uStack_6e8 = 3;
    func_0x0001078902a8();
    func_0x000107890430();
    func_0x000107890378(0xa2);
    func_0x0001078902c0();
    func_0x0001078902fc(*(undefined4 *)(uVar10 + 0x34));
    uStack_6e8 = 3;
    func_0x0001078902a8();
    func_0x000107890430();
    func_0x000107890378(0xa3);
    func_0x0001078902c0();
    func_0x0001078902fc(*(undefined4 *)(uVar10 + 0x3c));
    uStack_6e8 = 3;
    func_0x0001078902a8();
    func_0x000107890430();
    func_0x000107890378(0xa4);
    func_0x0001078902c0();
    uStack_6e0 = *(undefined8 *)(uVar10 + 0x50);
    uStack_6d8 = 3;
    uStack_6f0 = *puVar9;
    uStack_6e8 = 3;
    func_0x0001078902a8();
    func_0x000107890430();
    auStack_6d0[0] = 0xa5;
    uStack_6b8 = 0;
    func_0x000107890348();
    uStack_684 = 1;
    func_0x00010789053c();
    uStack_6e0 = *(undefined8 *)(uVar10 + 0x48);
    func_0x0001078908cc();
    func_0x0001078902a8();
    func_0x000107890430();
    func_0x000107890378(0xa7);
    ppuStack_6b0 = &PTR_DAT_110996720;
    uStack_6a8 = 0;
    uStack_688 = 0;
    uStack_684 = 1;
    func_0x00010789053c();
    uStack_6e0 = *(undefined8 *)(uVar10 + 0x58);
    func_0x0001078908cc();
    func_0x0001078902a8();
    func_0x000107890430();
    func_0x000107890378(0xa9);
    ppuStack_6b0 = &PTR_DAT_110996720;
    uStack_6a8 = 0;
    uStack_688 = 0;
    uStack_684 = 1;
    func_0x00010789053c();
    func_0x0001078902fc(*(undefined4 *)(uVar10 + 0x38));
    uStack_6e8 = 3;
    func_0x0001078902a8();
    func_0x000107890430();
    func_0x000107890378(0xaa);
    ppuStack_6b0 = &PTR_DAT_110996720;
    uStack_6a8 = 0;
    uStack_688 = 0;
    uStack_684 = 1;
    func_0x00010789053c();
    func_0x0001078902fc(*(undefined4 *)(uVar10 + 0x30));
    uStack_6e8 = 3;
    func_0x0001078902a8();
    func_0x000107890430();
    *(undefined8 *)(uVar10 + 0x68) = 0;
    *(undefined8 *)(uVar10 + 0x70) = 0;
    *(undefined4 *)(uVar10 + 0x78) = 0;
    return;
  }
  return;
}



/* Entry: 10788f090; end: 10788f0f3;  */

long FUN_10788f090(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    __ZNSt3__119__shared_mutex_baseC1Ev(param_1 + lVar1);
    lVar1 = lVar1 + 0xa8;
  } while (lVar1 != 0x24c0);
  return param_1;
}



/* Entry: 10788f2ec; end: 10788f2f3;  */

void FUN_10788f2ec(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001078907a8(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -5;
    func_0x00010788f434();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10788f4a8; end: 10788f4cb;  */

long FUN_10788f4a8(long param_1,long param_2)

{
  long lVar1;
  code *extraout_x8;
  
  lVar1 = *(long *)(param_2 + 0x40);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else if (lVar1 == param_2 + 0x28) {
    func_0x0001078908a4();
    (*extraout_x8)();
  }
  else {
    *(long *)(param_1 + 0x40) = lVar1;
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  return param_1 + 0x28;
}



/* Entry: 10788f6b8; end: 10788f6e3;  */

void FUN_10788f6b8(undefined8 *param_1)

{
  if (*(char *)(param_1 + 2) == '\x01') {
    *(undefined1 *)(param_1 + 2) = 0;
    func_0x000107890fd8(param_1 + 1,*param_1);
  }
  return;
}



/* Entry: 10788f7c0; end: 10788f803;  */

long * FUN_10788f7c0(long *param_1)

{
  func_0x000107890280(param_1 + 3);
  func_0x000107890258(param_1 + 2);
  if (*param_1 != 0) {
    func_0x00010788b354();
    func_0x000107890438();
  }
  return param_1;
}



/* Entry: 10788f8f4; end: 10788f997;  */

void FUN_10788f8f4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  if ((*(byte *)(param_2 + 0x2758) & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    uStack_38 = param_3;
    func_0x00010789069c();
    __ZNSt3__119__shared_mutex_base11lock_sharedEv();
    lVar2 = unaff_x20 + 0x2688;
    func_0x0001073ca718(lVar2,&uStack_38);
    if ((int)lVar2 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      puVar1 = (undefined8 *)(unaff_x20 + 0x2688);
      func_0x0001073ca734(puVar1,&uStack_38);
      lVar2 = puVar1[1];
      uVar3 = *puVar1;
      param_1[1] = puVar1[1];
      *param_1 = uVar3;
      if (lVar2 != 0) {
        do {
          func_0x000107890504();
        } while (extraout_w10 != 0);
      }
    }
    func_0x000100100f40(auStack_48);
  }
  return;
}



/* Entry: 10788fcbc; end: 10788fcc7;  */

undefined ** FUN_10788fcbc(void)

{
  return &PTR_DAT_1109e44e8;
}



/* Entry: 107890088; end: 1078900b3;  */

void FUN_107890088(undefined8 param_1,undefined8 param_2)

{
  func_0x000107890868(param_2,param_1,&PTR_DAT_1109e45e8);
  func_0x000107890778();
  return;
}



/* Entry: 10789024c; end: 107890257;  */

undefined ** FUN_10789024c(void)

{
  return &PTR_DAT_1109e45d8;
}



/* Entry: 1078909dc; end: 107890a23;  */

void FUN_1078909dc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x40;
  __Znwm();
  FUN_107886420();
  *param_1 = uVar1;
  return;
}



/* Entry: 107890cf8; end: 107890d2f;  */

long FUN_107890cf8(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109e4728);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107891064; end: 1078910cb;  */

void FUN_107891064(ulong param_1,long param_2)

{
  int extraout_w10;
  int extraout_w10_00;
  
  if (param_2 == 0) {
    return;
  }
  func_0x0001078910e4();
  func_0x0001078910cc();
  do {
    func_0x000107891110();
  } while (extraout_w10 != 0);
  do {
    func_0x0001078910f4();
  } while (extraout_w10_00 != 0);
  func_0x00010788b4a0();
  func_0x0001078910cc();
  if (1 < param_1) {
    func_0x000107891120();
    func_0x000107890e0c();
  }
  func_0x00010788b354();
  func_0x000107891104();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 1078917a4; end: 1078917d3;  */

void FUN_1078917a4(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010788b430();
  func_0x00010789197c();
  *param_1 = param_2;
  return;
}



/* Entry: 107891a5c; end: 107891aaf;  */

undefined8 * FUN_107891a5c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 uStack_21;
  
  *param_1 = &PTR____cxa_pure_virtual_1109e48a8;
  param_1[1] = param_2;
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 3) = 0;
  uStack_21 = 0;
  param_3 = param_3 + 0x800;
  func_0x00010724e2c8(param_3,&uStack_21);
  *(char *)(param_1 + 3) = (char)param_3;
  return param_1;
}



/* Entry: 107891c50; end: 107891ca7;  */

void FUN_107891c50(long param_1)

{
  func_0x00010789221c();
  func_0x00010789225c();
  func_0x0001078922a0();
  func_0x00010788af6c();
  func_0x000107892274();
  if (param_1 == 1) {
    func_0x000107888bd8();
    func_0x000107892268();
    func_0x0001078887ec();
    func_0x0001078922e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d290)();
    return;
  }
  return;
}



/* Entry: 1078921d0; end: 1078922f7;  */

void FUN_1078921d0(void)

{
  return;
}



/* Entry: 107892be4; end: 107892beb;  */

void FUN_107892be4(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107893644(param_1,*param_1);
  for (lVar1 = param_1[1]; lVar1 != unaff_x19; lVar1 = lVar1 + -0x28) {
    func_0x00010725b6a4(lVar1 + -0x20);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107892e88; end: 107892eb3;  */

void FUN_107892e88(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x666666666666667) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x28);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x28) {
    func_0x00010725b620(param_4,uVar1);
    param_4 = lStack_48 + 0x28;
  }
  uStack_58 = 1;
  func_0x000107892f58(param_1,param_2,param_3);
  func_0x000107892f8c(&uStack_70);
  return;
}



/* Entry: 10789307c; end: 1078930a3;  */

long FUN_10789307c(long param_1,long param_2)

{
  long lVar1;
  code *extraout_x8;
  
  lVar1 = *(long *)(param_2 + 0x40);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else if (lVar1 == param_2 + 0x28) {
    func_0x0001078908a4();
    (*extraout_x8)();
  }
  else {
    *(long *)(param_1 + 0x40) = lVar1;
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  return param_1 + 0x28;
}


