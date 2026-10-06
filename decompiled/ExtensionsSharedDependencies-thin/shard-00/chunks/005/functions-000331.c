/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00671ba0; end: 00671c23;  */

void FUN_00671ba0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 param_8)

{
  byte bVar1;
  undefined1 uVar2;
  undefined8 extraout_x8;
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
  undefined8 *puStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  
  func_0x0067414c();
  uStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uStack_88 = param_3[1];
  uStack_90 = *param_3;
  uStack_78 = param_4[1];
  uStack_80 = *param_4;
  uStack_68 = param_5[1];
  uStack_70 = *param_5;
  uStack_58 = param_6[1];
  uStack_60 = *param_6;
  bVar1 = *(byte *)((long)param_7 + 0x17);
  uVar2 = bVar1 == 0;
  uStack_48 = param_7[1];
  puStack_50 = (undefined8 *)*param_7;
  if (-1 < (char)bVar1) {
    uStack_48 = (ulong)bVar1;
    puStack_50 = param_7;
  }
  FUN_00532c74();
  uStack_40 = param_8;
  puStack_38 = param_3;
  FUN_00575fc4(param_1,&uStack_a0,7);
  func_0x00673f78();
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x0067539c();
    func_0x0067539c();
    func_0x006752d8(extraout_x8,&UNK_0091260d,0x82);
    FUN_00659414();
    return;
  }
  return;
}



/* Entry: 00671c24; end: 00671c87;  */

void FUN_00671c24(void)

{
  undefined8 extraout_x8;
  
  func_0x0067539c();
  func_0x0067539c();
  func_0x006752d8(extraout_x8,&UNK_0091260d,0x82);
  FUN_00659414();
  return;
}



/* Entry: 00671c88; end: 00671e0f;  */

void FUN_00671c88(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 extraout_x10;
  undefined8 extraout_x13;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00674188();
  func_0x00674700(*param_1);
  func_0x00675530();
  func_0x00674d38(unaff_x20[1]);
  func_0x00676ce0();
  uVar1 = extraout_x13;
  if (in_NG == in_OV) {
    uVar1 = extraout_x10;
  }
  func_0x006751c4(uVar1);
  puVar4 = unaff_x19;
  func_0x00676794();
  func_0x0067406c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00673fac();
    func_0x00674700(*puVar4);
    func_0x00675530();
    func_0x006751c4(*(undefined8 *)(unaff_x19[1] + 8));
    puVar4 = unaff_x20;
    func_0x00676794();
    func_0x0067406c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00673fac();
      func_0x00674700(*puVar4);
      func_0x00674b68();
      uVar3 = *(char *)unaff_x19[1] == '\0';
      puVar2 = &DAT_00910429;
      if ((bool)uVar3) {
        puVar2 = &DAT_00910417;
      }
      FUN_00532c74(puVar2);
      FUN_00671e10();
      func_0x0067406c();
      if (!(bool)uVar3) {
        ___stack_chk_fail();
        *unaff_x20 = 0;
        unaff_x20[1] = 0;
        unaff_x20[2] = 0;
        FUN_00659614();
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 00671e10; end: 00671e47;  */

void FUN_00671e10(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_00659614();
  return;
}



/* Entry: 00671e48; end: 00671e8f;  */

void FUN_00671e48(void)

{
  ulong uVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  undefined *puVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  undefined8 extraout_x8_06;
  long extraout_x8_07;
  undefined8 extraout_x8_08;
  long extraout_x8_09;
  undefined8 extraout_x8_10;
  long *extraout_x9;
  undefined8 *extraout_x9_00;
  long *extraout_x9_01;
  long *extraout_x10;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 extraout_x11_01;
  undefined8 extraout_x11_02;
  undefined8 extraout_x11_03;
  long unaff_x19;
  int *piVar14;
  undefined1 auStack_8e8 [16];
  undefined1 auStack_8d8 [8];
  undefined1 auStack_8d0 [256];
  undefined1 auStack_5e0 [24];
  undefined1 auStack_5c8 [56];
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  
  func_0x00673f20();
  func_0x00674d74();
  func_0x00674174(*(ulong *)(extraout_x8 + 0x20) & 0xfffffffffffffffc);
  uVar2 = extraout_x11;
  if (in_NG == in_OV) {
    uVar2 = extraout_x8_00;
  }
  func_0x00674a74(uVar2);
  func_0x00673f60();
  func_0x00673f78();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x006741a4();
    func_0x00675c04();
    func_0x00674700();
    plVar11 = extraout_x10;
    if (in_NG == in_OV) {
      plVar11 = extraout_x9;
    }
    func_0x00674b68();
    func_0x006757b4();
    func_0x0067406c();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00673f20();
    func_0x00674d74();
    func_0x00674174(*(ulong *)(extraout_x8_01 + 0x28) & 0xfffffffffffffffc);
    FUN_00532c74(&UNK_0091278e);
    func_0x00673f60();
    func_0x00673f78();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00673f20();
      func_0x00674d74();
      func_0x00674174(*(ulong *)(extraout_x8_02 + 0x28) & 0xfffffffffffffffc);
      uVar2 = extraout_x11_00;
      if (in_NG == in_OV) {
        uVar2 = extraout_x8_03;
      }
      func_0x00674a74(uVar2);
      func_0x00673f60();
      func_0x00673f78();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00673f20();
        func_0x00674d74();
        func_0x00674174(*(ulong *)(extraout_x8_04 + 0x28) & 0xfffffffffffffffc);
        puVar10 = &UNK_0091279f;
        FUN_00532c74();
        func_0x00673f60();
        func_0x00673f78();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00674188();
          func_0x00674fa4();
          func_0x00674fdc();
          func_0x00673f90(*(undefined8 *)(puVar10 + 8));
          func_0x00675608();
          func_0x0067638c();
          func_0x00674174(*(ulong *)(extraout_x8_05 + 0x30) & 0xfffffffffffffffc);
          uVar2 = extraout_x11_01;
          if (in_NG == in_OV) {
            uVar2 = extraout_x8_06;
          }
          func_0x00674408(uVar2);
          func_0x00674784();
          func_0x006754b4();
          func_0x0067406c();
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          func_0x00673f44();
          func_0x00675c04();
          func_0x00674b68();
          func_0x00674d38(*(undefined8 *)(unaff_x19 + 8));
          func_0x00676ce0();
          func_0x00674050(*extraout_x9_00);
          FUN_00671e10(plVar11,&UNK_009127d9,0x44,uStack_4f8,uStack_4f0);
          func_0x00673f78();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x00673f44();
            func_0x00675c04();
            func_0x00674b68();
            func_0x00674d38(*(undefined8 *)(unaff_x19 + 8));
            func_0x00676ce0();
            func_0x00674174(*(undefined8 *)(*extraout_x9_01 + 8));
            FUN_00671e10(plVar11,&UNK_0091281e,0x3c,uStack_558,uStack_550);
            func_0x00673f78();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              plVar12 = plVar11;
              func_0x006741a4();
              lVar13 = *(long *)(*plVar12 + 8);
              FUN_00655dec(lVar13,*(undefined8 *)(*(long *)plVar12[1] + 0x20),
                           *(undefined4 *)(*(long *)plVar12[1] + 4));
              if (*(long *)(*(long *)plVar11[1] + 0x20) == 0) {
                func_0x00675e24();
              }
              else {
                func_0x00675b24(*(undefined8 *)(*(long *)(*(long *)plVar11[1] + 0x20) + 8),
                                auStack_5e0);
              }
              func_0x0066853c(auStack_5c8,*(undefined4 *)(*(long *)plVar11[1] + 4));
              func_0x00674e80();
              bVar6 = *(byte *)(*(long *)(lVar13 + 8) + 0x2f);
              cVar8 = (char)bVar6 < '\0';
              uVar9 = bVar6 == 0;
              cVar7 = '\0';
              uVar1 = *(ulong *)(*(long *)(lVar13 + 8) + 0x20);
              if (!(bool)cVar8) {
                uVar1 = (ulong)bVar6;
              }
              func_0x006751c4(uVar1);
              FUN_00670fb8();
              func_0x00674d88();
              func_0x0067406c();
              if ((bool)uVar9) {
                return;
              }
              ___stack_chk_fail();
              func_0x00674cf0();
              func_0x00674bc8();
              func_0x00673f20();
              func_0x00674d74();
              func_0x00674174(*(ulong *)(extraout_x8_07 + 0x20) & 0xfffffffffffffffc);
              uVar2 = extraout_x11_02;
              if (cVar8 == cVar7) {
                uVar2 = extraout_x8_08;
              }
              func_0x00674a74(uVar2);
              func_0x00673f60();
              func_0x00673f78();
              if ((bool)uVar9) {
                return;
              }
              ___stack_chk_fail();
              func_0x00673f20();
              func_0x00674d74();
              func_0x00674174(*(ulong *)(extraout_x8_09 + 0x28) & 0xfffffffffffffffc);
              uVar2 = extraout_x11_03;
              if (cVar8 == cVar7) {
                uVar2 = extraout_x8_10;
              }
              func_0x00674a74(uVar2);
              func_0x00673f60();
              func_0x00673f78();
              if ((bool)uVar9) {
                return;
              }
              ___stack_chk_fail();
              func_0x006750fc();
              FUN_00461f30(auStack_8e8);
              FUN_00461ffc(auStack_8d8,&UNK_009128ae);
              func_0x00674bf0();
              FUN_00461fe0();
              FUN_00461ffc();
              piVar14 = (int *)**(undefined8 **)(lVar13 + 8);
              piVar3 = (int *)(*(undefined8 **)(lVar13 + 8))[1];
              func_0x006759a0();
              for (; piVar14 != piVar3; piVar14 = piVar14 + 2) {
                iVar4 = **(int **)(lVar13 + 0x18);
                while( true ) {
                  iVar5 = **(int **)(lVar13 + 0x10);
                  if (*piVar14 <= iVar5 || iVar4 < 1) break;
                  FUN_00461ffc(auStack_8d8);
                  **(int **)(lVar13 + 0x10) = **(int **)(lVar13 + 0x10) + 1;
                  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
                  iVar4 = **(int **)(lVar13 + 0x18) + -1;
                  **(int **)(lVar13 + 0x18) = iVar4;
                }
                if (iVar4 == 0) break;
                if (iVar5 <= piVar14[1]) {
                  iVar5 = piVar14[1];
                }
                **(int **)(lVar13 + 0x10) = iVar5;
              }
              FUN_0046296c(auStack_8d0);
              func_0x00462054(auStack_8e8);
              return;
            }
          }
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 00671e90; end: 00671ee7;  */

void FUN_00671e90(void)

{
  ulong uVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  undefined *puVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 extraout_x8_04;
  long extraout_x8_05;
  undefined8 extraout_x8_06;
  long extraout_x8_07;
  undefined8 extraout_x8_08;
  long *extraout_x9;
  undefined8 *extraout_x9_00;
  long *extraout_x9_01;
  long *extraout_x10;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 extraout_x11_01;
  undefined8 extraout_x11_02;
  long unaff_x19;
  int *piVar14;
  undefined1 auStack_828 [16];
  undefined1 auStack_818 [8];
  undefined1 auStack_810 [256];
  undefined1 auStack_520 [24];
  undefined1 auStack_508 [56];
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_438;
  undefined8 uStack_430;
  
  func_0x006741a4();
  func_0x00675c04();
  func_0x00674700();
  plVar11 = extraout_x10;
  if (in_NG == in_OV) {
    plVar11 = extraout_x9;
  }
  func_0x00674b68();
  func_0x006757b4();
  func_0x0067406c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00673f20();
  func_0x00674d74();
  func_0x00674174(*(ulong *)(extraout_x8 + 0x28) & 0xfffffffffffffffc);
  FUN_00532c74(&UNK_0091278e);
  func_0x00673f60();
  func_0x00673f78();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00673f20();
    func_0x00674d74();
    func_0x00674174(*(ulong *)(extraout_x8_00 + 0x28) & 0xfffffffffffffffc);
    uVar2 = extraout_x11;
    if (in_NG == in_OV) {
      uVar2 = extraout_x8_01;
    }
    func_0x00674a74(uVar2);
    func_0x00673f60();
    func_0x00673f78();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00673f20();
      func_0x00674d74();
      func_0x00674174(*(ulong *)(extraout_x8_02 + 0x28) & 0xfffffffffffffffc);
      puVar10 = &UNK_0091279f;
      FUN_00532c74();
      func_0x00673f60();
      func_0x00673f78();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00674188();
        func_0x00674fa4();
        func_0x00674fdc();
        func_0x00673f90(*(undefined8 *)(puVar10 + 8));
        func_0x00675608();
        func_0x0067638c();
        func_0x00674174(*(ulong *)(extraout_x8_03 + 0x30) & 0xfffffffffffffffc);
        uVar2 = extraout_x11_00;
        if (in_NG == in_OV) {
          uVar2 = extraout_x8_04;
        }
        func_0x00674408(uVar2);
        func_0x00674784();
        func_0x006754b4();
        func_0x0067406c();
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        func_0x00673f44();
        func_0x00675c04();
        func_0x00674b68();
        func_0x00674d38(*(undefined8 *)(unaff_x19 + 8));
        func_0x00676ce0();
        func_0x00674050(*extraout_x9_00);
        FUN_00671e10(plVar11,&UNK_009127d9,0x44,uStack_438,uStack_430);
        func_0x00673f78();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00673f44();
          func_0x00675c04();
          func_0x00674b68();
          func_0x00674d38(*(undefined8 *)(unaff_x19 + 8));
          func_0x00676ce0();
          func_0x00674174(*(undefined8 *)(*extraout_x9_01 + 8));
          FUN_00671e10(plVar11,&UNK_0091281e,0x3c,uStack_498,uStack_490);
          func_0x00673f78();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            plVar12 = plVar11;
            func_0x006741a4();
            lVar13 = *(long *)(*plVar12 + 8);
            FUN_00655dec(lVar13,*(undefined8 *)(*(long *)plVar12[1] + 0x20),
                         *(undefined4 *)(*(long *)plVar12[1] + 4));
            if (*(long *)(*(long *)plVar11[1] + 0x20) == 0) {
              func_0x00675e24();
            }
            else {
              func_0x00675b24(*(undefined8 *)(*(long *)(*(long *)plVar11[1] + 0x20) + 8),auStack_520
                             );
            }
            func_0x0066853c(auStack_508,*(undefined4 *)(*(long *)plVar11[1] + 4));
            func_0x00674e80();
            bVar6 = *(byte *)(*(long *)(lVar13 + 8) + 0x2f);
            cVar8 = (char)bVar6 < '\0';
            uVar9 = bVar6 == 0;
            cVar7 = '\0';
            uVar1 = *(ulong *)(*(long *)(lVar13 + 8) + 0x20);
            if (!(bool)cVar8) {
              uVar1 = (ulong)bVar6;
            }
            func_0x006751c4(uVar1);
            FUN_00670fb8();
            func_0x00674d88();
            func_0x0067406c();
            if ((bool)uVar9) {
              return;
            }
            ___stack_chk_fail();
            func_0x00674cf0();
            func_0x00674bc8();
            func_0x00673f20();
            func_0x00674d74();
            func_0x00674174(*(ulong *)(extraout_x8_05 + 0x20) & 0xfffffffffffffffc);
            uVar2 = extraout_x11_01;
            if (cVar8 == cVar7) {
              uVar2 = extraout_x8_06;
            }
            func_0x00674a74(uVar2);
            func_0x00673f60();
            func_0x00673f78();
            if ((bool)uVar9) {
              return;
            }
            ___stack_chk_fail();
            func_0x00673f20();
            func_0x00674d74();
            func_0x00674174(*(ulong *)(extraout_x8_07 + 0x28) & 0xfffffffffffffffc);
            uVar2 = extraout_x11_02;
            if (cVar8 == cVar7) {
              uVar2 = extraout_x8_08;
            }
            func_0x00674a74(uVar2);
            func_0x00673f60();
            func_0x00673f78();
            if ((bool)uVar9) {
              return;
            }
            ___stack_chk_fail();
            func_0x006750fc();
            FUN_00461f30(auStack_828);
            FUN_00461ffc(auStack_818,&UNK_009128ae);
            func_0x00674bf0();
            FUN_00461fe0();
            FUN_00461ffc();
            piVar14 = (int *)**(undefined8 **)(lVar13 + 8);
            piVar3 = (int *)(*(undefined8 **)(lVar13 + 8))[1];
            func_0x006759a0();
            for (; piVar14 != piVar3; piVar14 = piVar14 + 2) {
              iVar4 = **(int **)(lVar13 + 0x18);
              while( true ) {
                iVar5 = **(int **)(lVar13 + 0x10);
                if (*piVar14 <= iVar5 || iVar4 < 1) break;
                FUN_00461ffc(auStack_818);
                **(int **)(lVar13 + 0x10) = **(int **)(lVar13 + 0x10) + 1;
                __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
                iVar4 = **(int **)(lVar13 + 0x18) + -1;
                **(int **)(lVar13 + 0x18) = iVar4;
              }
              if (iVar4 == 0) break;
              if (iVar5 <= piVar14[1]) {
                iVar5 = piVar14[1];
              }
              **(int **)(lVar13 + 0x10) = iVar5;
            }
            FUN_0046296c(auStack_810);
            func_0x00462054(auStack_828);
            return;
          }
        }
        return;
      }
    }
  }
  return;
}



/* Entry: 00671ee8; end: 00671fd7;  */

void FUN_00671ee8(void)

{
  ulong uVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  undefined *puVar10;
  long *plVar11;
  long lVar12;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 extraout_x8_04;
  long extraout_x8_05;
  undefined8 extraout_x8_06;
  long extraout_x8_07;
  undefined8 extraout_x8_08;
  undefined8 *extraout_x9;
  long *extraout_x9_00;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 extraout_x11_01;
  undefined8 extraout_x11_02;
  long unaff_x19;
  long *unaff_x20;
  int *piVar13;
  undefined1 auStack_7b8 [16];
  undefined1 auStack_7a8 [8];
  undefined1 auStack_7a0 [256];
  undefined1 auStack_4b0 [24];
  undefined1 auStack_498 [56];
  
  func_0x00673f20();
  func_0x00674d74();
  func_0x00674174(*(ulong *)(extraout_x8 + 0x28) & 0xfffffffffffffffc);
  FUN_00532c74(&UNK_0091278e);
  func_0x00673f60();
  func_0x00673f78();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00673f20();
    func_0x00674d74();
    func_0x00674174(*(ulong *)(extraout_x8_00 + 0x28) & 0xfffffffffffffffc);
    uVar2 = extraout_x11;
    if (in_NG == in_OV) {
      uVar2 = extraout_x8_01;
    }
    func_0x00674a74(uVar2);
    func_0x00673f60();
    func_0x00673f78();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00673f20();
      func_0x00674d74();
      func_0x00674174(*(ulong *)(extraout_x8_02 + 0x28) & 0xfffffffffffffffc);
      puVar10 = &UNK_0091279f;
      FUN_00532c74();
      func_0x00673f60();
      func_0x00673f78();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00674188();
        func_0x00674fa4();
        func_0x00674fdc();
        func_0x00673f90(*(undefined8 *)(puVar10 + 8));
        func_0x00675608();
        func_0x0067638c();
        func_0x00674174(*(ulong *)(extraout_x8_03 + 0x30) & 0xfffffffffffffffc);
        uVar2 = extraout_x11_00;
        if (in_NG == in_OV) {
          uVar2 = extraout_x8_04;
        }
        func_0x00674408(uVar2);
        func_0x00674784();
        func_0x006754b4();
        func_0x0067406c();
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        func_0x00673f44();
        func_0x00675c04();
        func_0x00674b68();
        func_0x00674d38(*(undefined8 *)(unaff_x19 + 8));
        func_0x00676ce0();
        func_0x00674050(*extraout_x9);
        FUN_00671e10();
        func_0x00673f78();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00673f44();
          func_0x00675c04();
          func_0x00674b68();
          func_0x00674d38(*(undefined8 *)(unaff_x19 + 8));
          func_0x00676ce0();
          func_0x00674174(*(undefined8 *)(*extraout_x9_00 + 8));
          FUN_00671e10();
          func_0x00673f78();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            plVar11 = unaff_x20;
            func_0x006741a4();
            lVar12 = *(long *)(*plVar11 + 8);
            FUN_00655dec(lVar12,*(undefined8 *)(*(long *)plVar11[1] + 0x20),
                         *(undefined4 *)(*(long *)plVar11[1] + 4));
            if (*(long *)(*(long *)unaff_x20[1] + 0x20) == 0) {
              func_0x00675e24();
            }
            else {
              func_0x00675b24(*(undefined8 *)(*(long *)(*(long *)unaff_x20[1] + 0x20) + 8),
                              auStack_4b0);
            }
            func_0x0066853c(auStack_498,*(undefined4 *)(*(long *)unaff_x20[1] + 4));
            func_0x00674e80();
            bVar6 = *(byte *)(*(long *)(lVar12 + 8) + 0x2f);
            cVar8 = (char)bVar6 < '\0';
            uVar9 = bVar6 == 0;
            cVar7 = '\0';
            uVar1 = *(ulong *)(*(long *)(lVar12 + 8) + 0x20);
            if (!(bool)cVar8) {
              uVar1 = (ulong)bVar6;
            }
            func_0x006751c4(uVar1);
            FUN_00670fb8();
            func_0x00674d88();
            func_0x0067406c();
            if ((bool)uVar9) {
              return;
            }
            ___stack_chk_fail();
            func_0x00674cf0();
            func_0x00674bc8();
            func_0x00673f20();
            func_0x00674d74();
            func_0x00674174(*(ulong *)(extraout_x8_05 + 0x20) & 0xfffffffffffffffc);
            uVar2 = extraout_x11_01;
            if (cVar8 == cVar7) {
              uVar2 = extraout_x8_06;
            }
            func_0x00674a74(uVar2);
            func_0x00673f60();
            func_0x00673f78();
            if ((bool)uVar9) {
              return;
            }
            ___stack_chk_fail();
            func_0x00673f20();
            func_0x00674d74();
            func_0x00674174(*(ulong *)(extraout_x8_07 + 0x28) & 0xfffffffffffffffc);
            uVar2 = extraout_x11_02;
            if (cVar8 == cVar7) {
              uVar2 = extraout_x8_08;
            }
            func_0x00674a74(uVar2);
            func_0x00673f60();
            func_0x00673f78();
            if ((bool)uVar9) {
              return;
            }
            ___stack_chk_fail();
            func_0x006750fc();
            FUN_00461f30(auStack_7b8);
            FUN_00461ffc(auStack_7a8,&UNK_009128ae);
            func_0x00674bf0();
            FUN_00461fe0();
            FUN_00461ffc();
            piVar13 = (int *)**(undefined8 **)(lVar12 + 8);
            piVar3 = (int *)(*(undefined8 **)(lVar12 + 8))[1];
            func_0x006759a0();
            for (; piVar13 != piVar3; piVar13 = piVar13 + 2) {
              iVar4 = **(int **)(lVar12 + 0x18);
              while( true ) {
                iVar5 = **(int **)(lVar12 + 0x10);
                if (*piVar13 <= iVar5 || iVar4 < 1) break;
                FUN_00461ffc(auStack_7a8);
                **(int **)(lVar12 + 0x10) = **(int **)(lVar12 + 0x10) + 1;
                __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
                iVar4 = **(int **)(lVar12 + 0x18) + -1;
                **(int **)(lVar12 + 0x18) = iVar4;
              }
              if (iVar4 == 0) break;
              if (iVar5 <= piVar13[1]) {
                iVar5 = piVar13[1];
              }
              **(int **)(lVar12 + 0x10) = iVar5;
            }
            FUN_0046296c(auStack_7a0);
            func_0x00462054(auStack_7b8);
            return;
          }
        }
        return;
      }
    }
  }
  return;
}



/* Entry: 00671fd8; end: 00672047;  */

void FUN_00671fd8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  long *plVar10;
  long lVar11;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 *extraout_x9;
  long *extraout_x9_00;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 extraout_x11_01;
  long unaff_x19;
  long *unaff_x20;
  int *piVar12;
  undefined1 auStack_578 [16];
  undefined1 auStack_568 [8];
  undefined1 auStack_560 [256];
  undefined1 auStack_270 [24];
  undefined1 auStack_258 [56];
  
  func_0x00674188();
  func_0x00674fa4();
  func_0x00674fdc();
  func_0x00673f90(*(undefined8 *)(param_1 + 8));
  func_0x00675608();
  func_0x0067638c();
  func_0x00674174(*(ulong *)(extraout_x8 + 0x30) & 0xfffffffffffffffc);
  uVar2 = extraout_x11;
  if (in_NG == in_OV) {
    uVar2 = extraout_x8_00;
  }
  func_0x00674408(uVar2);
  func_0x00674784();
  func_0x006754b4();
  func_0x0067406c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00673f44();
  func_0x00675c04();
  func_0x00674b68();
  func_0x00674d38(*(undefined8 *)(unaff_x19 + 8));
  func_0x00676ce0();
  func_0x00674050(*extraout_x9);
  FUN_00671e10();
  func_0x00673f78();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00673f44();
    func_0x00675c04();
    func_0x00674b68();
    func_0x00674d38(*(undefined8 *)(unaff_x19 + 8));
    func_0x00676ce0();
    func_0x00674174(*(undefined8 *)(*extraout_x9_00 + 8));
    FUN_00671e10();
    func_0x00673f78();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      plVar10 = unaff_x20;
      func_0x006741a4();
      lVar11 = *(long *)(*plVar10 + 8);
      FUN_00655dec(lVar11,*(undefined8 *)(*(long *)plVar10[1] + 0x20),
                   *(undefined4 *)(*(long *)plVar10[1] + 4));
      if (*(long *)(*(long *)unaff_x20[1] + 0x20) == 0) {
        func_0x00675e24();
      }
      else {
        func_0x00675b24(*(undefined8 *)(*(long *)(*(long *)unaff_x20[1] + 0x20) + 8),auStack_270);
      }
      func_0x0066853c(auStack_258,*(undefined4 *)(*(long *)unaff_x20[1] + 4));
      func_0x00674e80();
      bVar6 = *(byte *)(*(long *)(lVar11 + 8) + 0x2f);
      cVar8 = (char)bVar6 < '\0';
      uVar9 = bVar6 == 0;
      cVar7 = '\0';
      uVar1 = *(ulong *)(*(long *)(lVar11 + 8) + 0x20);
      if (!(bool)cVar8) {
        uVar1 = (ulong)bVar6;
      }
      func_0x006751c4(uVar1);
      FUN_00670fb8();
      func_0x00674d88();
      func_0x0067406c();
      if ((bool)uVar9) {
        return;
      }
      ___stack_chk_fail();
      func_0x00674cf0();
      func_0x00674bc8();
      func_0x00673f20();
      func_0x00674d74();
      func_0x00674174(*(ulong *)(extraout_x8_01 + 0x20) & 0xfffffffffffffffc);
      uVar2 = extraout_x11_00;
      if (cVar8 == cVar7) {
        uVar2 = extraout_x8_02;
      }
      func_0x00674a74(uVar2);
      func_0x00673f60();
      func_0x00673f78();
      if (!(bool)uVar9) {
        ___stack_chk_fail();
        func_0x00673f20();
        func_0x00674d74();
        func_0x00674174(*(ulong *)(extraout_x8_03 + 0x28) & 0xfffffffffffffffc);
        uVar2 = extraout_x11_01;
        if (cVar8 == cVar7) {
          uVar2 = extraout_x8_04;
        }
        func_0x00674a74(uVar2);
        func_0x00673f60();
        func_0x00673f78();
        if (!(bool)uVar9) {
          ___stack_chk_fail();
          func_0x006750fc();
          FUN_00461f30(auStack_578);
          FUN_00461ffc(auStack_568,&UNK_009128ae);
          func_0x00674bf0();
          FUN_00461fe0();
          FUN_00461ffc();
          piVar12 = (int *)**(undefined8 **)(lVar11 + 8);
          piVar3 = (int *)(*(undefined8 **)(lVar11 + 8))[1];
          func_0x006759a0();
          for (; piVar12 != piVar3; piVar12 = piVar12 + 2) {
            iVar4 = **(int **)(lVar11 + 0x18);
            while( true ) {
              iVar5 = **(int **)(lVar11 + 0x10);
              if (*piVar12 <= iVar5 || iVar4 < 1) break;
              FUN_00461ffc(auStack_568);
              **(int **)(lVar11 + 0x10) = **(int **)(lVar11 + 0x10) + 1;
              __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
              iVar4 = **(int **)(lVar11 + 0x18) + -1;
              **(int **)(lVar11 + 0x18) = iVar4;
            }
            if (iVar4 == 0) break;
            if (iVar5 <= piVar12[1]) {
              iVar5 = piVar12[1];
            }
            **(int **)(lVar11 + 0x10) = iVar5;
          }
          FUN_0046296c(auStack_560);
          func_0x00462054(auStack_578);
          return;
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 00672048; end: 0067212b;  */

void FUN_00672048(void)

{
  ulong uVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  undefined1 in_ZR;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  long *plVar10;
  long lVar11;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 *extraout_x9;
  long *extraout_x9_00;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  long unaff_x19;
  long *unaff_x20;
  int *piVar12;
  undefined1 auStack_448 [16];
  undefined1 auStack_438 [8];
  undefined1 auStack_430 [256];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [56];
  
  func_0x00673f44();
  func_0x00675c04();
  func_0x00674b68();
  func_0x00674d38(*(undefined8 *)(unaff_x19 + 8));
  func_0x00676ce0();
  func_0x00674050(*extraout_x9);
  FUN_00671e10();
  func_0x00673f78();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00673f44();
    func_0x00675c04();
    func_0x00674b68();
    func_0x00674d38(*(undefined8 *)(unaff_x19 + 8));
    func_0x00676ce0();
    func_0x00674174(*(undefined8 *)(*extraout_x9_00 + 8));
    FUN_00671e10();
    func_0x00673f78();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      plVar10 = unaff_x20;
      func_0x006741a4();
      lVar11 = *(long *)(*plVar10 + 8);
      FUN_00655dec(lVar11,*(undefined8 *)(*(long *)plVar10[1] + 0x20),
                   *(undefined4 *)(*(long *)plVar10[1] + 4));
      if (*(long *)(*(long *)unaff_x20[1] + 0x20) == 0) {
        func_0x00675e24();
      }
      else {
        func_0x00675b24(*(undefined8 *)(*(long *)(*(long *)unaff_x20[1] + 0x20) + 8),auStack_140);
      }
      func_0x0066853c(auStack_128,*(undefined4 *)(*(long *)unaff_x20[1] + 4));
      func_0x00674e80();
      bVar6 = *(byte *)(*(long *)(lVar11 + 8) + 0x2f);
      cVar8 = (char)bVar6 < '\0';
      uVar9 = bVar6 == 0;
      cVar7 = '\0';
      uVar1 = *(ulong *)(*(long *)(lVar11 + 8) + 0x20);
      if (!(bool)cVar8) {
        uVar1 = (ulong)bVar6;
      }
      func_0x006751c4(uVar1);
      FUN_00670fb8();
      func_0x00674d88();
      func_0x0067406c();
      if ((bool)uVar9) {
        return;
      }
      ___stack_chk_fail();
      func_0x00674cf0();
      func_0x00674bc8();
      func_0x00673f20();
      func_0x00674d74();
      func_0x00674174(*(ulong *)(extraout_x8 + 0x20) & 0xfffffffffffffffc);
      uVar2 = extraout_x11;
      if (cVar8 == cVar7) {
        uVar2 = extraout_x8_00;
      }
      func_0x00674a74(uVar2);
      func_0x00673f60();
      func_0x00673f78();
      if (!(bool)uVar9) {
        ___stack_chk_fail();
        func_0x00673f20();
        func_0x00674d74();
        func_0x00674174(*(ulong *)(extraout_x8_01 + 0x28) & 0xfffffffffffffffc);
        uVar2 = extraout_x11_00;
        if (cVar8 == cVar7) {
          uVar2 = extraout_x8_02;
        }
        func_0x00674a74(uVar2);
        func_0x00673f60();
        func_0x00673f78();
        if (!(bool)uVar9) {
          ___stack_chk_fail();
          func_0x006750fc();
          FUN_00461f30(auStack_448);
          FUN_00461ffc(auStack_438,&UNK_009128ae);
          func_0x00674bf0();
          FUN_00461fe0();
          FUN_00461ffc();
          piVar12 = (int *)**(undefined8 **)(lVar11 + 8);
          piVar3 = (int *)(*(undefined8 **)(lVar11 + 8))[1];
          func_0x006759a0();
          for (; piVar12 != piVar3; piVar12 = piVar12 + 2) {
            iVar4 = **(int **)(lVar11 + 0x18);
            while( true ) {
              iVar5 = **(int **)(lVar11 + 0x10);
              if (*piVar12 <= iVar5 || iVar4 < 1) break;
              FUN_00461ffc(auStack_438);
              **(int **)(lVar11 + 0x10) = **(int **)(lVar11 + 0x10) + 1;
              __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
              iVar4 = **(int **)(lVar11 + 0x18) + -1;
              **(int **)(lVar11 + 0x18) = iVar4;
            }
            if (iVar4 == 0) break;
            if (iVar5 <= piVar12[1]) {
              iVar5 = piVar12[1];
            }
            **(int **)(lVar11 + 0x10) = iVar5;
          }
          FUN_0046296c(auStack_430);
          func_0x00462054(auStack_448);
          return;
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 0067212c; end: 00672233;  */

void FUN_0067212c(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  long *plVar10;
  long lVar11;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  int *piVar12;
  undefined1 auStack_388 [16];
  undefined1 auStack_378 [8];
  undefined1 auStack_370 [256];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [56];
  
  plVar10 = param_1;
  func_0x006741a4();
  lVar11 = *(long *)(*plVar10 + 8);
  FUN_00655dec(lVar11,*(undefined8 *)(*(long *)plVar10[1] + 0x20),
               *(undefined4 *)(*(long *)plVar10[1] + 4));
  if (*(long *)(*(long *)param_1[1] + 0x20) == 0) {
    func_0x00675e24();
  }
  else {
    func_0x00675b24(*(undefined8 *)(*(long *)(*(long *)param_1[1] + 0x20) + 8),auStack_80);
  }
  func_0x0066853c(auStack_68,*(undefined4 *)(*(long *)param_1[1] + 4));
  func_0x00674e80();
  bVar6 = *(byte *)(*(long *)(lVar11 + 8) + 0x2f);
  cVar8 = (char)bVar6 < '\0';
  uVar9 = bVar6 == 0;
  cVar7 = '\0';
  uVar1 = *(ulong *)(*(long *)(lVar11 + 8) + 0x20);
  if (!(bool)cVar8) {
    uVar1 = (ulong)bVar6;
  }
  func_0x006751c4(uVar1);
  FUN_00670fb8();
  func_0x00674d88();
  func_0x0067406c();
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00674cf0();
  func_0x00674bc8();
  func_0x00673f20();
  func_0x00674d74();
  func_0x00674174(*(ulong *)(extraout_x8 + 0x20) & 0xfffffffffffffffc);
  uVar2 = extraout_x11;
  if (cVar8 == cVar7) {
    uVar2 = extraout_x8_00;
  }
  func_0x00674a74(uVar2);
  func_0x00673f60();
  func_0x00673f78();
  if (!(bool)uVar9) {
    ___stack_chk_fail();
    func_0x00673f20();
    func_0x00674d74();
    func_0x00674174(*(ulong *)(extraout_x8_01 + 0x28) & 0xfffffffffffffffc);
    uVar2 = extraout_x11_00;
    if (cVar8 == cVar7) {
      uVar2 = extraout_x8_02;
    }
    func_0x00674a74(uVar2);
    func_0x00673f60();
    func_0x00673f78();
    if (!(bool)uVar9) {
      ___stack_chk_fail();
      func_0x006750fc();
      FUN_00461f30(auStack_388);
      FUN_00461ffc(auStack_378,&UNK_009128ae);
      func_0x00674bf0();
      FUN_00461fe0();
      FUN_00461ffc();
      piVar12 = (int *)**(undefined8 **)(lVar11 + 8);
      piVar3 = (int *)(*(undefined8 **)(lVar11 + 8))[1];
      func_0x006759a0();
      for (; piVar12 != piVar3; piVar12 = piVar12 + 2) {
        iVar4 = **(int **)(lVar11 + 0x18);
        while( true ) {
          iVar5 = **(int **)(lVar11 + 0x10);
          if (*piVar12 <= iVar5 || iVar4 < 1) break;
          FUN_00461ffc(auStack_378);
          **(int **)(lVar11 + 0x10) = **(int **)(lVar11 + 0x10) + 1;
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
          iVar4 = **(int **)(lVar11 + 0x18) + -1;
          **(int **)(lVar11 + 0x18) = iVar4;
        }
        if (iVar4 == 0) break;
        if (iVar5 <= piVar12[1]) {
          iVar5 = piVar12[1];
        }
        **(int **)(lVar11 + 0x10) = iVar5;
      }
      FUN_0046296c(auStack_370);
      func_0x00462054(auStack_388);
      return;
    }
  }
  return;
}



/* Entry: 00672234; end: 006722c3;  */

void FUN_00672234(void)

{
  undefined8 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  long unaff_x20;
  int *piVar5;
  undefined1 auStack_2e8 [16];
  undefined1 auStack_2d8 [8];
  undefined1 auStack_2d0 [256];
  
  func_0x00673f20();
  func_0x00674d74();
  func_0x00674174(*(ulong *)(extraout_x8 + 0x20) & 0xfffffffffffffffc);
  uVar1 = extraout_x11;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8_00;
  }
  func_0x00674a74(uVar1);
  func_0x00673f60();
  func_0x00673f78();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00673f20();
    func_0x00674d74();
    func_0x00674174(*(ulong *)(extraout_x8_01 + 0x28) & 0xfffffffffffffffc);
    uVar1 = extraout_x11_00;
    if (in_NG == in_OV) {
      uVar1 = extraout_x8_02;
    }
    func_0x00674a74(uVar1);
    func_0x00673f60();
    func_0x00673f78();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x006750fc();
      FUN_00461f30(auStack_2e8);
      FUN_00461ffc(auStack_2d8,&UNK_009128ae);
      func_0x00674bf0();
      FUN_00461fe0();
      FUN_00461ffc();
      piVar5 = (int *)**(undefined8 **)(unaff_x20 + 8);
      piVar2 = (int *)(*(undefined8 **)(unaff_x20 + 8))[1];
      func_0x006759a0();
      for (; piVar5 != piVar2; piVar5 = piVar5 + 2) {
        iVar3 = **(int **)(unaff_x20 + 0x18);
        while( true ) {
          iVar4 = **(int **)(unaff_x20 + 0x10);
          if (*piVar5 <= iVar4 || iVar3 < 1) break;
          FUN_00461ffc(auStack_2d8);
          **(int **)(unaff_x20 + 0x10) = **(int **)(unaff_x20 + 0x10) + 1;
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
          iVar3 = **(int **)(unaff_x20 + 0x18) + -1;
          **(int **)(unaff_x20 + 0x18) = iVar3;
        }
        if (iVar3 == 0) break;
        if (iVar4 <= piVar5[1]) {
          iVar4 = piVar5[1];
        }
        **(int **)(unaff_x20 + 0x10) = iVar4;
      }
      FUN_0046296c(auStack_2d0);
      func_0x00462054(auStack_2e8);
      return;
    }
  }
  return;
}



/* Entry: 006722c4; end: 006723eb;  */

void FUN_006722c4(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  long unaff_x20;
  int *piVar4;
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [256];
  
  func_0x006750fc();
  FUN_00461f30(auStack_168);
  FUN_00461ffc(auStack_158,&UNK_009128ae);
  func_0x00674bf0();
  FUN_00461fe0();
  FUN_00461ffc();
  piVar4 = (int *)**(undefined8 **)(unaff_x20 + 8);
  piVar1 = (int *)(*(undefined8 **)(unaff_x20 + 8))[1];
  func_0x006759a0();
  for (; piVar4 != piVar1; piVar4 = piVar4 + 2) {
    iVar2 = **(int **)(unaff_x20 + 0x18);
    while( true ) {
      iVar3 = **(int **)(unaff_x20 + 0x10);
      if (*piVar4 <= iVar3 || iVar2 < 1) break;
      FUN_00461ffc(auStack_158);
      **(int **)(unaff_x20 + 0x10) = **(int **)(unaff_x20 + 0x10) + 1;
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
      iVar2 = **(int **)(unaff_x20 + 0x18) + -1;
      **(int **)(unaff_x20 + 0x18) = iVar2;
    }
    if (iVar2 == 0) break;
    if (iVar3 <= piVar4[1]) {
      iVar3 = piVar4[1];
    }
    **(int **)(unaff_x20 + 0x10) = iVar3;
  }
  FUN_0046296c(auStack_150);
  func_0x00462054(auStack_168);
  return;
}



/* Entry: 006723ec; end: 00672453;  */

void FUN_006723ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  code *pcVar8;
  uint extraout_w8;
  long extraout_x8;
  undefined8 *extraout_x8_00;
  undefined4 *extraout_x8_01;
  undefined8 extraout_x8_02;
  uint extraout_w9;
  undefined4 *extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  undefined8 extraout_x10;
  undefined8 extraout_x12;
  undefined8 *unaff_x19;
  long unaff_x23;
  long unaff_x24;
  undefined1 ****ppppuStack_2d0;
  code *pcStack_2c8;
  undefined8 ****ppppuStack_2c0;
  code *pcStack_2b8;
  undefined8 uStack_2b0;
  undefined1 ***pppuStack_260;
  code *pcStack_258;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 **ppuStack_200;
  code *pcStack_1f8;
  undefined8 *puStack_1e8;
  ulong uStack_1e0;
  undefined *puStack_188;
  ulong uStack_180;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_58;
  undefined8 uStack_50;
  
  func_0x00673f44();
  puVar4 = &UNK_009128cb;
  FUN_00532c74();
  lVar5 = *(long *)*unaff_x19;
  uVar7 = (ulong)*(uint *)unaff_x19[1];
  puStack_58 = puVar4;
  uStack_50 = param_2;
  FUN_006571a0();
  func_0x00673fe0(*(undefined8 *)(lVar5 + 8));
  puVar4 = &UNK_00912954;
  FUN_00532c74();
  func_0x00673f60();
  func_0x00673f78();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_00672454;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x00674188();
  func_0x00674fa4();
  func_0x00674fdc();
  func_0x00673f90(*(undefined8 *)(puVar4 + 8));
  puVar4 = &UNK_00912960;
  FUN_00532c74();
  puStack_188 = puVar4;
  uStack_180 = uVar7;
  func_0x006756b0();
  func_0x00673f90(*(undefined8 *)(*(long *)(extraout_x8 + 0x20) + 8));
  puVar6 = (undefined8 *)&UNK_00912988;
  FUN_00532c74();
  puStack_1e8 = puVar6;
  uStack_1e0 = uVar7;
  func_0x00674784();
  func_0x006754b4();
  func_0x0067406c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1f8 = FUN_006724d8;
  ppuStack_200 = &puStack_d0;
  func_0x0067414c();
  lVar5 = *(long *)*puVar6;
  func_0x00675134();
  func_0x00674084(*(undefined8 *)(lVar5 + 8));
  func_0x00674050(*(undefined8 *)(lVar5 + 0x20));
  puVar6 = extraout_x8_00;
  FUN_00671e10(extraout_x8_00,&UNK_009129aa,0x6c,uStack_248,uStack_240);
  func_0x00673f78();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_258 = FUN_00672550;
  pppuStack_260 = &ppuStack_200;
  func_0x006741a4();
  lVar5 = *(long *)*puVar6;
  func_0x00674084(*(undefined8 *)(lVar5 + 8));
  uVar1 = extraout_x12;
  puVar2 = extraout_x9;
  if (in_NG == in_OV) {
    uVar1 = extraout_x10;
    puVar2 = extraout_x8_01;
  }
  func_0x00675134();
  func_0x00674050(*(undefined8 *)(lVar5 + 0x20));
  uVar3 = extraout_x9_00;
  if (in_NG == in_OV) {
    uVar3 = extraout_x8_02;
  }
  FUN_00671e10(extraout_x8_00,&UNK_00912a17,0x110,puVar2,uVar1,pcStack_2b8,uStack_2b0,uVar3);
  func_0x0067406c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_2c8 = FUN_006725d0;
  ppppuStack_2d0 = &pppuStack_260;
  func_0x00673fc4();
  func_0x00674f04();
  if ((extraout_x9_01 == 0) && (func_0x00674ef8(), !(bool)in_ZR)) {
    func_0x00674f2c();
    if (((bool)in_CY) && (func_0x006742b8(), (bool)in_CY)) {
      func_0x00674668();
    }
    else {
      func_0x0067452c();
      FUN_00672640();
    }
    func_0x0067444c();
  }
  func_0x00673eb4();
  func_0x00673f78();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pcVar8 = FUN_00672640;
    func_0x00675c80();
    ppppuStack_2c0 = &ppppuStack_2d0;
    pcStack_2b8 = pcVar8;
    func_0x006742e0();
    func_0x00674a34();
    while (unaff_x23 != unaff_x24) {
      if (-1 < *(char *)(lVar5 + unaff_x24)) {
        func_0x006760f8(*puVar2);
        func_0x00674f10();
        func_0x00553d3c();
        func_0x00673efc((extraout_w8 ^ extraout_w9) & 0x7f);
        func_0x00675c28();
        FUN_006726b0();
      }
      func_0x00675698();
    }
    if (unaff_x23 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(lVar5 + -8);
    return;
  }
  return;
}



/* Entry: 00672454; end: 006724d7;  */

void FUN_00672454(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  uint extraout_w8;
  long extraout_x8;
  undefined8 *extraout_x8_00;
  undefined4 *extraout_x8_01;
  undefined8 extraout_x8_02;
  uint extraout_w9;
  undefined4 *extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  undefined8 extraout_x10;
  undefined8 extraout_x12;
  long lVar7;
  long unaff_x23;
  long unaff_x24;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  undefined1 ****ppppuStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined1 **ppuStack_1a0;
  code *pcStack_198;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  
  func_0x00674188();
  func_0x00674fa4();
  func_0x00674fdc();
  func_0x00673f90(*(undefined8 *)(param_1 + 8));
  puVar4 = &UNK_00912960;
  FUN_00532c74();
  puStack_c8 = puVar4;
  uStack_c0 = param_2;
  func_0x006756b0();
  func_0x00673f90(*(undefined8 *)(*(long *)(extraout_x8 + 0x20) + 8));
  puVar5 = (undefined8 *)&UNK_00912988;
  FUN_00532c74();
  puStack_128 = puVar5;
  uStack_120 = param_2;
  func_0x00674784();
  func_0x006754b4();
  func_0x0067406c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_006724d8;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x0067414c();
  lVar7 = *(long *)*puVar5;
  func_0x00675134();
  func_0x00674084(*(undefined8 *)(lVar7 + 8));
  func_0x00674050(*(undefined8 *)(lVar7 + 0x20));
  puVar5 = extraout_x8_00;
  FUN_00671e10(extraout_x8_00,&UNK_009129aa,0x6c,uStack_188,uStack_180);
  func_0x00673f78();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_198 = FUN_00672550;
  ppuStack_1a0 = &puStack_140;
  func_0x006741a4();
  lVar7 = *(long *)*puVar5;
  func_0x00674084(*(undefined8 *)(lVar7 + 8));
  uVar1 = extraout_x12;
  puVar2 = extraout_x9;
  if (in_NG == in_OV) {
    uVar1 = extraout_x10;
    puVar2 = extraout_x8_01;
  }
  func_0x00675134();
  func_0x00674050(*(undefined8 *)(lVar7 + 0x20));
  uVar3 = extraout_x9_00;
  if (in_NG == in_OV) {
    uVar3 = extraout_x8_02;
  }
  FUN_00671e10(extraout_x8_00,&UNK_00912a17,0x110,puVar2,uVar1,pcStack_1f8,uStack_1f0,uVar3);
  func_0x0067406c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_208 = FUN_006725d0;
  pppuStack_210 = &ppuStack_1a0;
  func_0x00673fc4();
  func_0x00674f04();
  if ((extraout_x9_01 == 0) && (func_0x00674ef8(), !(bool)in_ZR)) {
    func_0x00674f2c();
    if (((bool)in_CY) && (func_0x006742b8(), (bool)in_CY)) {
      func_0x00674668();
    }
    else {
      func_0x0067452c();
      FUN_00672640();
    }
    func_0x0067444c();
  }
  func_0x00673eb4();
  func_0x00673f78();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pcVar6 = FUN_00672640;
    func_0x00675c80();
    ppppuStack_200 = &pppuStack_210;
    pcStack_1f8 = pcVar6;
    func_0x006742e0();
    func_0x00674a34();
    while (unaff_x23 != unaff_x24) {
      if (-1 < *(char *)(lVar7 + unaff_x24)) {
        func_0x006760f8(*puVar2);
        func_0x00674f10();
        func_0x00553d3c();
        func_0x00673efc((extraout_w8 ^ extraout_w9) & 0x7f);
        func_0x00675c28();
        FUN_006726b0();
      }
      func_0x00675698();
    }
    if (unaff_x23 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(lVar7 + -8);
    return;
  }
  return;
}



/* Entry: 006724d8; end: 0067254f;  */

void FUN_006724d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  undefined8 *puVar4;
  code *pcVar5;
  uint extraout_w8;
  undefined4 *extraout_x8;
  undefined8 extraout_x8_00;
  uint extraout_w9;
  undefined4 *extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  undefined8 extraout_x10;
  undefined8 extraout_x12;
  long lVar6;
  long unaff_x23;
  long unaff_x24;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  undefined1 ***pppuStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x0067414c();
  lVar6 = *(long *)*param_2;
  func_0x00675134();
  func_0x00674084(*(undefined8 *)(lVar6 + 8));
  func_0x00674050(*(undefined8 *)(lVar6 + 0x20));
  puVar4 = param_1;
  FUN_00671e10(param_1,&UNK_009129aa,0x6c,uStack_58,uStack_50);
  func_0x00673f78();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_00672550;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x006741a4();
  lVar6 = *(long *)*puVar4;
  func_0x00674084(*(undefined8 *)(lVar6 + 8));
  uVar1 = extraout_x12;
  puVar2 = extraout_x9;
  if (in_NG == in_OV) {
    uVar1 = extraout_x10;
    puVar2 = extraout_x8;
  }
  func_0x00675134();
  func_0x00674050(*(undefined8 *)(lVar6 + 0x20));
  uVar3 = extraout_x9_00;
  if (in_NG == in_OV) {
    uVar3 = extraout_x8_00;
  }
  FUN_00671e10(param_1,&UNK_00912a17,0x110,puVar2,uVar1,pcStack_c8,uStack_c0,uVar3);
  func_0x0067406c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pcStack_d8 = FUN_006725d0;
    ppuStack_e0 = &puStack_70;
    func_0x00673fc4();
    func_0x00674f04();
    if ((extraout_x9_01 == 0) && (func_0x00674ef8(), !(bool)in_ZR)) {
      func_0x00674f2c();
      if (((bool)in_CY) && (func_0x006742b8(), (bool)in_CY)) {
        func_0x00674668();
      }
      else {
        func_0x0067452c();
        FUN_00672640();
      }
      func_0x0067444c();
    }
    func_0x00673eb4();
    func_0x00673f78();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      pcVar5 = FUN_00672640;
      func_0x00675c80();
      pppuStack_d0 = &ppuStack_e0;
      pcStack_c8 = pcVar5;
      func_0x006742e0();
      func_0x00674a34();
      while (unaff_x23 != unaff_x24) {
        if (-1 < *(char *)(lVar6 + unaff_x24)) {
          func_0x006760f8(*puVar2);
          func_0x00674f10();
          func_0x00553d3c();
          func_0x00673efc((extraout_w8 ^ extraout_w9) & 0x7f);
          func_0x00675c28();
          FUN_006726b0();
        }
        func_0x00675698();
      }
      if (unaff_x23 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_0099c620)(lVar6 + -8);
      return;
    }
    return;
  }
  return;
}



/* Entry: 00672550; end: 006725cf;  */

void FUN_00672550(undefined8 *param_1)

{
  undefined4 *puVar1;
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  code *pcVar2;
  uint extraout_w8;
  undefined4 *extraout_x8;
  uint extraout_w9;
  undefined4 *extraout_x9;
  long extraout_x9_00;
  long lVar3;
  long unaff_x23;
  long unaff_x24;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  
  func_0x006741a4();
  lVar3 = *(long *)*param_1;
  func_0x00674084(*(undefined8 *)(lVar3 + 8));
  puVar1 = extraout_x9;
  if (in_NG == in_OV) {
    puVar1 = extraout_x8;
  }
  func_0x00675134();
  func_0x00674050(*(undefined8 *)(lVar3 + 0x20));
  FUN_00671e10();
  func_0x0067406c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_006725d0;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x00673fc4();
  func_0x00674f04();
  if ((extraout_x9_00 == 0) && (func_0x00674ef8(), !(bool)in_ZR)) {
    func_0x00674f2c();
    if (((bool)in_CY) && (func_0x006742b8(), (bool)in_CY)) {
      func_0x00674668();
    }
    else {
      func_0x0067452c();
      FUN_00672640();
    }
    func_0x0067444c();
  }
  func_0x00673eb4();
  func_0x00673f78();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pcVar2 = FUN_00672640;
    func_0x00675c80();
    ppuStack_70 = &puStack_80;
    pcStack_68 = pcVar2;
    func_0x006742e0();
    func_0x00674a34();
    while (unaff_x23 != unaff_x24) {
      if (-1 < *(char *)(lVar3 + unaff_x24)) {
        func_0x006760f8(*puVar1);
        func_0x00674f10();
        func_0x00553d3c();
        func_0x00673efc((extraout_w8 ^ extraout_w9) & 0x7f);
        func_0x00675c28();
        FUN_006726b0();
      }
      func_0x00675698();
    }
    if (unaff_x23 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(lVar3 + -8);
    return;
  }
  return;
}



/* Entry: 006725d0; end: 0067263f;  */

void FUN_006725d0(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  uint extraout_w8;
  uint extraout_w9;
  long extraout_x9;
  undefined4 *unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x00673fc4();
  func_0x00674f04();
  if ((extraout_x9 == 0) && (func_0x00674ef8(), !(bool)in_ZR)) {
    func_0x00674f2c();
    if (((bool)in_CY) && (func_0x006742b8(), (bool)in_CY)) {
      func_0x00674668();
    }
    else {
      func_0x0067452c();
      FUN_00672640();
    }
    func_0x0067444c();
  }
  func_0x00673eb4();
  func_0x00673f78();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00675c80();
  func_0x006742e0();
  func_0x00674a34();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x006760f8(*unaff_x20);
      func_0x00674f10();
      func_0x00553d3c();
      func_0x00673efc((extraout_w8 ^ extraout_w9) & 0x7f);
      func_0x00675c28();
      FUN_006726b0();
    }
    func_0x00675698();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 00672640; end: 006726af;  */

void FUN_00672640(void)

{
  uint extraout_w8;
  uint extraout_w9;
  undefined4 *unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x00675c80();
  func_0x006742e0();
  func_0x00674a34();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x006760f8(*unaff_x20);
      func_0x00674f10();
      func_0x00553d3c();
      func_0x00673efc((extraout_w8 ^ extraout_w9) & 0x7f);
      func_0x00675c28();
      FUN_006726b0();
    }
    func_0x00675698();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 006726b0; end: 006726f3;  */

void FUN_006726b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 4);
  uVar1 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = uVar2;
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00779c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_00998a30)
            (param_2 + 2);
  return;
}



/* Entry: 006726f4; end: 006729cf;  */

/* WARNING: Removing unreachable block (ram,0x00672aac) */

void FUN_006726f4(undefined **param_1,undefined **param_2)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  byte bVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  code *pcVar12;
  uint extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  uint extraout_w9;
  undefined8 extraout_x9;
  long extraout_x9_00;
  ulong extraout_x11;
  undefined **ppuVar14;
  long extraout_x13;
  long extraout_x13_00;
  ulong extraout_x13_01;
  ulong extraout_x14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *unaff_x20;
  long lVar17;
  undefined **ppuVar18;
  long unaff_x25;
  uint6 uVar19;
  byte bVar20;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  undefined8 uVar21;
  byte bVar27;
  undefined8 uStack_1a8;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined *puStack_178;
  long lStack_170;
  ulong uStack_168;
  undefined1 **ppuStack_160;
  code *pcStack_158;
  undefined **ppuStack_150;
  undefined1 auStack_128 [48];
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined *apuStack_c8 [6];
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_68;
  
  func_0x006750fc();
  lVar17 = 0;
  func_0x00674388(0);
  puStack_178 = &UNK_00811030;
  lStack_170 = 0;
  uStack_168 = 0;
  ppuStack_160 = (undefined1 **)0x0;
  lVar13 = extraout_x8;
  uStack_68 = extraout_x9;
  do {
    if (*(int *)(*(long *)*unaff_x20 + 4) <= lVar17) {
      ppuVar1 = (undefined **)(long)*(int *)(*(long *)unaff_x20[1] + 4);
LAB_00672824:
      ppuVar14 = ppuVar1;
      lVar17 = 0;
      ppuVar1 = (undefined **)((long)ppuVar14 + 1);
      Hint_Prefetch(puStack_178,0,2,0);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (long)ppuVar14 + 0xa01491U;
      uVar16 = SUB168(auVar4 * ZEXT816(0x9ddfea08eb382d69),8) ^
               ((long)ppuVar14 + 0xa01491U) * -0x622015f714c7d297;
      uVar15 = (ulong)puStack_178 >> 0xc ^ uVar16 >> 7;
      bVar5 = (byte)uVar16;
      uVar19 = CONCAT15(bVar5,CONCAT14(bVar5,CONCAT13(bVar5,CONCAT12(bVar5,CONCAT11(bVar5,bVar5)))))
               & 0x7f7f7f7f7f7f;
      while( true ) {
        uVar15 = uVar15 & uStack_168;
        uVar21 = *(undefined8 *)(puStack_178 + uVar15);
        cVar22 = (char)((ulong)uVar21 >> 8);
        cVar23 = (char)((ulong)uVar21 >> 0x10);
        cVar24 = (char)((ulong)uVar21 >> 0x18);
        cVar25 = (char)((ulong)uVar21 >> 0x20);
        cVar26 = (char)((ulong)uVar21 >> 0x28);
        bVar20 = (byte)((ulong)uVar21 >> 0x30);
        bVar27 = (byte)((ulong)uVar21 >> 0x38);
        for (uVar16 = CONCAT17(-(bVar27 == (bVar5 & 0x7f)),
                               CONCAT16(-(bVar20 == (bVar5 & 0x7f)),
                                        CONCAT15(-(cVar26 == (char)(uVar19 >> 0x28)),
                                                 CONCAT14(-(cVar25 == (char)(uVar19 >> 0x20)),
                                                          CONCAT13(-(cVar24 ==
                                                                    (char)(uVar19 >> 0x18)),
                                                                   CONCAT12(-(cVar23 ==
                                                                             (char)(uVar19 >> 0x10))
                                                                            ,CONCAT11(-(cVar22 ==
                                                                                       (char)(uVar19
                                                                                             >> 8)),
                                                                                      -((char)uVar21
                                                                                       == (char)
                                                  uVar19)))))))) & 0x8080808080808080; uVar16 != 0;
            uVar16 = uVar16 - 1 & uVar16) {
          uVar2 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
          if (*(undefined ***)
               (lVar13 + (uVar15 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uStack_168
                         ) * 8) == ppuVar1) {
            ppuVar18 = (undefined **)(long)*(int *)(*(long *)unaff_x20[1] + 4);
            if (puStack_178 != (undefined *)0x0) goto LAB_00672824;
            goto LAB_006728b8;
          }
        }
        bVar20 = NEON_umaxv(CONCAT17(-(bVar27 == 0x80),
                                     CONCAT16(-(bVar20 == 0x80),
                                              CONCAT15(-(cVar26 == -0x80),
                                                       CONCAT14(-(cVar25 == -0x80),
                                                                CONCAT13(-(cVar24 == -0x80),
                                                                         CONCAT12(-(cVar23 == -0x80)
                                                                                  ,CONCAT11(-(cVar22
                                                                                             == 
                                                  -0x80),-((char)uVar21 == -0x80)))))))),1);
        ppuVar18 = ppuVar14;
        if ((bVar20 & 1) != 0) break;
        lVar17 = lVar17 + 8;
        uVar15 = lVar17 + uVar15;
      }
LAB_006728b8:
      func_0x006744f4();
      ppuStack_98 = param_1;
      ppuStack_90 = param_2;
      func_0x006753ec(unaff_x20[1]);
      func_0x00673f90();
      ppuVar8 = (undefined **)&UNK_00912b28;
      FUN_00532c74();
      ppuStack_f8 = ppuVar8;
      ppuStack_f0 = param_2;
      func_0x00674108();
      pcVar12 = (code *)&UNK_00912b48;
      FUN_00532c74();
      ppuVar8 = apuStack_c8;
      pcStack_158 = pcVar12;
      ppuStack_150 = param_2;
      func_0x006754b4(&ppuStack_98,ppuVar8,&ppuStack_f8,auStack_128,&pcStack_158);
      uVar6 = (undefined **)0x7ffffffc < ppuVar18;
      uVar7 = ppuVar18 == (undefined **)0x7ffffffd;
      if ((long)ppuVar18 < 0x7ffffffe) {
        ppuVar9 = (undefined **)&UNK_00912b99;
        FUN_00532c74();
        ppuVar10 = apuStack_c8;
        ppuVar11 = ppuVar1;
        ppuStack_98 = ppuVar9;
        ppuStack_90 = ppuVar8;
        func_0x0066743c();
        func_0x00674500();
        ppuStack_f8 = ppuVar10;
        ppuStack_f0 = ppuVar11;
        FUN_005762ac();
      }
      FUN_00672ac4(&puStack_178);
      func_0x00674120(uStack_68);
      if ((bool)uVar7) {
        return;
      }
      ___stack_chk_fail();
      func_0x006747d8();
      ppuVar8 = &puStack_178;
      FUN_00672ac4();
      func_0x00674f1c();
      pcStack_188 = FUN_006729d0;
      puStack_190 = &stack0xfffffffffffffff0;
      func_0x0067409c();
      func_0x00675394();
      func_0x00674f04();
      if ((extraout_x9_00 == 0) && (func_0x00674ef8(), !(bool)uVar7)) {
        func_0x00674f2c();
        if (((bool)uVar6) && (func_0x006742b8(), (bool)uVar6)) {
          func_0x00674720();
        }
        else {
          func_0x0067452c();
          FUN_00672a48();
        }
        func_0x0067444c();
      }
      func_0x00673eb4();
      func_0x00674120(uStack_1a8);
      if ((bool)uVar7) {
        return;
      }
      ___stack_chk_fail();
      pcVar12 = FUN_00672a48;
      func_0x00675c80();
      ppuStack_160 = &puStack_190;
      pcStack_158 = pcVar12;
      func_0x00674398();
      func_0x00674a34();
      for (; ppuVar18 != &PTR_LOOP_00a01490; ppuVar18 = (undefined **)((long)ppuVar18 + 1)) {
        if (-1 < *(char *)((long)ppuVar1 + (long)ppuVar18)) {
          func_0x006760f8(*(undefined8 *)((long)ppuVar18 * 8 + -0x622015f714c7d297));
          func_0x0067444c();
          func_0x00673efc((extraout_w8 ^ extraout_w9) & 0x7f);
          *(undefined8 *)(unaff_x25 + (long)ppuVar8 * 8) =
               *(undefined8 *)((long)ppuVar18 * 8 + -0x622015f714c7d297);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_0099c620)((long)ppuVar14 + -7);
      return;
    }
    unaff_x25 = (long)*(int *)(*(long *)(*(long *)*unaff_x20 + 0x38) + lVar17 * 0x30 + 4);
    Hint_Prefetch(puStack_178,0,2,0);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (long)&PTR_LOOP_00a01490 + unaff_x25;
    param_2 = (undefined **)
              (SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^
              ((long)&PTR_LOOP_00a01490 + unaff_x25) * -0x622015f714c7d297);
    do {
      func_0x00676178();
      lVar13 = extraout_x13;
      while (lVar13 != 0) {
        func_0x00676784();
        lVar13 = extraout_x8_00;
        if (*(long *)(extraout_x8_00 + (extraout_x14 & extraout_x11) * 8) == unaff_x25)
        goto LAB_006727fc;
        func_0x0067692c();
        lVar13 = extraout_x13_00;
      }
      func_0x00676168();
    } while ((extraout_x13_01 & 1) == 0);
    param_1 = &puStack_178;
    FUN_006729d0();
    *(long *)(lStack_170 + (long)param_1 * 8) = unaff_x25;
    lVar13 = lStack_170;
LAB_006727fc:
    lVar17 = lVar17 + 1;
  } while( true );
}



/* Entry: 006729d0; end: 00672a47;  */

void FUN_006729d0(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  uint extraout_w8;
  uint extraout_w9;
  long extraout_x9;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 uStack_28;
  
  func_0x0067409c();
  func_0x00675394();
  func_0x00674f04();
  if ((extraout_x9 == 0) && (func_0x00674ef8(), !(bool)in_ZR)) {
    func_0x00674f2c();
    if (((bool)in_CY) && (func_0x006742b8(), (bool)in_CY)) {
      func_0x00674720();
    }
    else {
      func_0x0067452c();
      FUN_00672a48();
    }
    func_0x0067444c();
  }
  func_0x00673eb4();
  func_0x00674120(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00675c80();
  func_0x00674398();
  func_0x00674a34();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x21 + unaff_x24)) {
      func_0x006760f8(*(undefined8 *)(unaff_x22 + unaff_x24 * 8));
      func_0x0067444c();
      func_0x00673efc((extraout_w8 ^ extraout_w9) & 0x7f);
      *(undefined8 *)(unaff_x25 + param_1 * 8) = *(undefined8 *)(unaff_x22 + unaff_x24 * 8);
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x21 + -8);
    return;
  }
  return;
}



/* Entry: 00672a48; end: 00672ab3;  */

void FUN_00672a48(long param_1)

{
  uint extraout_w8;
  uint extraout_w9;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  
  func_0x00675c80();
  func_0x00674398();
  func_0x00674a34();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x21 + unaff_x24)) {
      func_0x006760f8(*(undefined8 *)(unaff_x22 + unaff_x24 * 8));
      func_0x0067444c();
      func_0x00673efc((extraout_w8 ^ extraout_w9) & 0x7f);
      *(undefined8 *)(unaff_x25 + param_1 * 8) = *(undefined8 *)(unaff_x22 + unaff_x24 * 8);
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x21 + -8);
    return;
  }
  return;
}



/* Entry: 00672ab4; end: 00672ac3;  */

ulong FUN_00672ab4(undefined8 param_1,long *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)&PTR_LOOP_00a01490 + *param_2;
  return SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
         ((long)&PTR_LOOP_00a01490 + *param_2) * -0x622015f714c7d297;
}



/* Entry: 00672ac4; end: 00672bdb;  */

void FUN_00672ac4(void)

{
  long extraout_x8;
  
  func_0x00674f38();
  if (extraout_x8 != 0) {
    func_0x006744e8();
  }
  return;
}



/* Entry: 00672bdc; end: 00672c17;  */

void FUN_00672bdc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char in_NG;
  char in_OV;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined8 extraout_x10;
  undefined8 extraout_x12;
  undefined8 extraout_x13;
  
  func_0x0067539c();
  uVar1 = extraout_x12;
  uVar2 = extraout_x13;
  if (in_NG == in_OV) {
    uVar1 = extraout_x9;
    uVar2 = extraout_x10;
  }
  func_0x006752d8(extraout_x8,&UNK_00912c7d,0x35,uVar1,uVar2);
  FUN_00657c64();
  return;
}



/* Entry: 00672c18; end: 00672c77;  */

ulong * FUN_00672c18(ulong *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  dword *pdVar4;
  undefined1 in_ZR;
  ulong *puVar5;
  ulong *puVar6;
  ulong *extraout_x8;
  long lVar7;
  long *plVar8;
  undefined1 auStack_48 [40];
  
  func_0x0067414c();
  func_0x00676958();
  func_0x00574d40();
  FUN_00671048(param_1,&UNK_00912cb3,0x2c,auStack_48);
  func_0x00673f78();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar5 = (ulong *)&UNK_00912ce0;
  _strlen();
  if ((ulong *)0x7ffffffffffffff6 < puVar5) {
    FUN_0040d740();
    plVar8 = (long *)puVar5[1];
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    return puVar5;
  }
  if ((ulong *)((long)&MACH_HEADER.sizeofcmds + 2) < puVar5) {
    pdVar4 = &MACH_HEADER.flags;
    if ((dword *)((ulong)puVar5 | 7) != (dword *)0x17) {
      pdVar4 = (dword *)((ulong)puVar5 | 7);
    }
    puVar6 = (ulong *)((long)pdVar4 + 1);
    __Znwm();
    extraout_x8[1] = (ulong)puVar5;
    extraout_x8[2] = (ulong)((long)pdVar4 + 1) | 0x8000000000000000;
    *extraout_x8 = (ulong)puVar6;
  }
  else {
    *(char *)((long)extraout_x8 + 0x17) = (char)puVar5;
    puVar6 = extraout_x8;
    if (puVar5 == (ulong *)0x0) goto LAB_00425d3c;
  }
  _memmove(puVar6,&UNK_00912ce0,puVar5);
LAB_00425d3c:
  *(undefined1 *)((long)puVar6 + (long)puVar5) = 0;
  return extraout_x8;
}



/* Entry: 00672c78; end: 00672c87;  */

ulong * FUN_00672c78(ulong *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  dword *pdVar4;
  ulong *puVar5;
  ulong *puVar6;
  long lVar7;
  long *plVar8;
  
  puVar5 = (ulong *)&UNK_00912ce0;
  _strlen();
  if ((ulong *)0x7ffffffffffffff6 < puVar5) {
    FUN_0040d740();
    plVar8 = (long *)puVar5[1];
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    return puVar5;
  }
  if ((ulong *)((long)&MACH_HEADER.sizeofcmds + 2) < puVar5) {
    pdVar4 = &MACH_HEADER.flags;
    if ((dword *)((ulong)puVar5 | 7) != (dword *)0x17) {
      pdVar4 = (dword *)((ulong)puVar5 | 7);
    }
    puVar6 = (ulong *)((long)pdVar4 + 1);
    __Znwm();
    param_1[1] = (ulong)puVar5;
    param_1[2] = (ulong)((long)pdVar4 + 1) | 0x8000000000000000;
    *param_1 = (ulong)puVar6;
  }
  else {
    *(char *)((long)param_1 + 0x17) = (char)puVar5;
    puVar6 = param_1;
    if (puVar5 == (ulong *)0x0) goto LAB_00425d3c;
  }
  _memmove(puVar6,&UNK_00912ce0,puVar5);
LAB_00425d3c:
  *(undefined1 *)((long)puVar6 + (long)puVar5) = 0;
  return param_1;
}



/* Entry: 00672c88; end: 00672cff;  */

void FUN_00672c88(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 uVar1;
  long extraout_x9;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 uStack_28;
  
  func_0x0067409c();
  func_0x00675394();
  func_0x00674f04();
  if ((extraout_x9 == 0) && (func_0x00674ef8(), !(bool)in_ZR)) {
    func_0x00674f2c();
    if (((bool)in_CY) && (func_0x006742b8(), (bool)in_CY)) {
      func_0x00674720();
    }
    else {
      func_0x0067452c();
      FUN_00672d00();
    }
    func_0x0067444c();
  }
  func_0x00673eb4();
  func_0x00674120(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00676210();
  func_0x00674398();
  func_0x00674f44();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x21 + unaff_x24)) {
      uVar1 = *(undefined8 *)(*unaff_x22 + 8);
      func_0x0066c3a4(uVar1);
      func_0x0067444c();
      func_0x00673efc((uint)uVar1 & 0x7f);
      func_0x00675d9c();
    }
    func_0x00675ddc();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x21 + -8);
    return;
  }
  return;
}



/* Entry: 00672d00; end: 00672d6b;  */

void FUN_00672d00(void)

{
  undefined8 uVar1;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x00676210();
  func_0x00674398();
  func_0x00674f44();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x21 + unaff_x24)) {
      uVar1 = *(undefined8 *)(*unaff_x22 + 8);
      func_0x0066c3a4(uVar1);
      func_0x0067444c();
      func_0x00673efc((uint)uVar1 & 0x7f);
      func_0x00675d9c();
    }
    func_0x00675ddc();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x21 + -8);
    return;
  }
  return;
}



/* Entry: 00672d6c; end: 00672d6f;  */

ulong FUN_00672d6c(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  ulong extraout_x8;
  ulong extraout_x10;
  
  puVar4 = *(undefined8 **)(*param_2 + 8);
  uVar1 = puVar4[1];
  puVar2 = (undefined8 *)*puVar4;
  if (-1 < (char)*(byte *)((long)puVar4 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)puVar4 + 0x17);
    puVar2 = puVar4;
  }
  ppuVar3 = &PTR_LOOP_00a01490;
  FUN_00490188(&PTR_LOOP_00a01490,puVar2);
  func_0x00490bd8((long)ppuVar3 + uVar1);
  return extraout_x8 ^ extraout_x10;
}



/* Entry: 00672d70; end: 00672f17;  */

ulong * FUN_00672d70(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  dword *pdVar4;
  undefined1 in_ZR;
  ulong *puVar5;
  ulong *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong *extraout_x8_02;
  long lVar7;
  undefined8 *unaff_x19;
  long *plVar8;
  
  func_0x00673f44();
  func_0x00675114();
  func_0x00674438();
  func_0x00673fe0();
  puVar6 = (ulong *)&UNK_00912d4a;
  FUN_00532c74(&UNK_00912d4a);
  func_0x00673f60();
  func_0x00673f78();
  if ((bool)in_ZR) {
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x00673f44();
  func_0x00675114();
  func_0x00674d74();
  func_0x006753ec(*(undefined8 *)(extraout_x8 + 8));
  func_0x00673fe0();
  puVar6 = (ulong *)&UNK_00912d7b;
  FUN_00532c74(&UNK_00912d7b);
  func_0x00673f60();
  func_0x00673f78();
  if ((bool)in_ZR) {
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x00673f44();
  func_0x00675114();
  func_0x00674d74();
  func_0x006753ec(*(undefined8 *)(extraout_x8_00 + 8));
  func_0x00673fe0();
  puVar6 = (ulong *)&UNK_00912d9e;
  FUN_00532c74(&UNK_00912d9e);
  func_0x00673f60();
  func_0x00673f78();
  if ((bool)in_ZR) {
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x00673f44();
  func_0x00675114();
  func_0x00674d74();
  func_0x006753ec(*(undefined8 *)(extraout_x8_01 + 8));
  func_0x00673fe0();
  puVar6 = (ulong *)&UNK_00912dc5;
  FUN_00532c74(&UNK_00912dc5);
  func_0x00673f60();
  func_0x00673f78();
  if ((bool)in_ZR) {
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x00673f44();
  puVar6 = (ulong *)&UNK_00912ded;
  FUN_00532c74();
  FUN_00676e48();
  func_0x00673fe0(*(undefined8 *)(puVar6[7] + (long)*(int *)*unaff_x19 * 0x30 + 8));
  func_0x00674c70();
  func_0x00673f78();
  if ((bool)in_ZR) {
    return puVar6;
  }
  ___stack_chk_fail();
  puVar6 = (ulong *)&UNK_00912e33;
  _strlen();
  if ((ulong *)0x7ffffffffffffff6 < puVar6) {
    FUN_0040d740();
    plVar8 = (long *)puVar6[1];
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    return puVar6;
  }
  if ((ulong *)((long)&MACH_HEADER.sizeofcmds + 2) < puVar6) {
    pdVar4 = &MACH_HEADER.flags;
    if ((dword *)((ulong)puVar6 | 7) != (dword *)0x17) {
      pdVar4 = (dword *)((ulong)puVar6 | 7);
    }
    puVar5 = (ulong *)((long)pdVar4 + 1);
    __Znwm();
    extraout_x8_02[1] = (ulong)puVar6;
    extraout_x8_02[2] = (ulong)((long)pdVar4 + 1) | 0x8000000000000000;
    *extraout_x8_02 = (ulong)puVar5;
  }
  else {
    *(char *)((long)extraout_x8_02 + 0x17) = (char)puVar6;
    puVar5 = extraout_x8_02;
    if (puVar6 == (ulong *)0x0) goto LAB_00425d3c;
  }
  _memmove(puVar5,&UNK_00912e33,puVar6);
LAB_00425d3c:
  *(undefined1 *)((long)puVar5 + (long)puVar6) = 0;
  return extraout_x8_02;
}



/* Entry: 00672f18; end: 00672f37;  */

ulong * FUN_00672f18(ulong *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  dword *pdVar4;
  ulong *puVar5;
  ulong *puVar6;
  long lVar7;
  long *plVar8;
  
  puVar5 = (ulong *)&UNK_00912e33;
  _strlen();
  if ((ulong *)0x7ffffffffffffff6 < puVar5) {
    FUN_0040d740();
    plVar8 = (long *)puVar5[1];
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    return puVar5;
  }
  if ((ulong *)((long)&MACH_HEADER.sizeofcmds + 2) < puVar5) {
    pdVar4 = &MACH_HEADER.flags;
    if ((dword *)((ulong)puVar5 | 7) != (dword *)0x17) {
      pdVar4 = (dword *)((ulong)puVar5 | 7);
    }
    puVar6 = (ulong *)((long)pdVar4 + 1);
    __Znwm();
    param_1[1] = (ulong)puVar5;
    param_1[2] = (ulong)((long)pdVar4 + 1) | 0x8000000000000000;
    *param_1 = (ulong)puVar6;
  }
  else {
    *(char *)((long)param_1 + 0x17) = (char)puVar5;
    puVar6 = param_1;
    if (puVar5 == (ulong *)0x0) goto LAB_00425d3c;
  }
  _memmove(puVar6,&UNK_00912e33,puVar5);
LAB_00425d3c:
  *(undefined1 *)((long)puVar6 + (long)puVar5) = 0;
  return param_1;
}



/* Entry: 00672f38; end: 00673013;  */

void FUN_00672f38(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [24];
  
  puVar1 = param_2;
  func_0x00674cd8();
  func_0x00674174(*param_2);
  FUN_00532c74(&UNK_00912e8f);
  FUN_00532c74();
  func_0x0067568c(auStack_78,*param_2);
  func_0x006754cc(param_1,puVar1);
  func_0x00675408();
  return;
}



/* Entry: 00673014; end: 00673077;  */

undefined * FUN_00673014(void)

{
  undefined1 in_ZR;
  undefined *puVar1;
  
  func_0x00673f44();
  func_0x00674cd8();
  func_0x00674d74();
  func_0x00673fe0();
  FUN_00532c74();
  puVar1 = &UNK_00912f40;
  FUN_00532c74();
  func_0x006755e4();
  func_0x00673f78();
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00674188();
  func_0x006768a8();
  func_0x00675934();
  func_0x00673fe0();
  puVar1 = &UNK_00912f8c;
  FUN_00532c74();
  func_0x0067638c();
  func_0x006753ec();
  func_0x00673fe0();
  func_0x00674408();
  func_0x00674784();
  func_0x006754b4();
  func_0x0067406c();
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00673f44();
  FUN_00532c74(&UNK_00912fb7);
  func_0x00674d74();
  func_0x00673fe0();
  puVar1 = &UNK_00912fc1;
  FUN_00532c74(&UNK_00912fc1);
  func_0x00673f60();
  func_0x00673f78();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00673f44();
    func_0x00674cd8();
    func_0x00674d74();
    func_0x00673fe0();
    puVar1 = &UNK_00912ff3;
    FUN_00532c74(&UNK_00912ff3);
    func_0x00673f60();
    func_0x00673f78();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00673f44();
      func_0x006768a8();
      func_0x00674d74();
      func_0x00673fe0();
      puVar1 = &UNK_00913017;
      FUN_00532c74(&UNK_00913017);
      func_0x00673f60();
      func_0x00673f78();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        FUN_006731f4();
        return puVar1;
      }
    }
  }
  return puVar1;
}



/* Entry: 00673078; end: 006730e3;  */

undefined * FUN_00673078(void)

{
  undefined1 in_ZR;
  undefined *puVar1;
  
  func_0x00674188();
  func_0x006768a8();
  func_0x00675934();
  func_0x00673fe0();
  puVar1 = &UNK_00912f8c;
  FUN_00532c74();
  func_0x0067638c();
  func_0x006753ec();
  func_0x00673fe0();
  func_0x00674408();
  func_0x00674784();
  func_0x006754b4();
  func_0x0067406c();
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00673f44();
  FUN_00532c74(&UNK_00912fb7);
  func_0x00674d74();
  func_0x00673fe0();
  puVar1 = &UNK_00912fc1;
  FUN_00532c74(&UNK_00912fc1);
  func_0x00673f60();
  func_0x00673f78();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00673f44();
    func_0x00674cd8();
    func_0x00674d74();
    func_0x00673fe0();
    puVar1 = &UNK_00912ff3;
    FUN_00532c74(&UNK_00912ff3);
    func_0x00673f60();
    func_0x00673f78();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00673f44();
      func_0x006768a8();
      func_0x00674d74();
      func_0x00673fe0();
      puVar1 = &UNK_00913017;
      FUN_00532c74(&UNK_00913017);
      func_0x00673f60();
      func_0x00673f78();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        FUN_006731f4();
        return puVar1;
      }
    }
  }
  return puVar1;
}



/* Entry: 006730e4; end: 006731f3;  */

undefined * FUN_006730e4(void)

{
  undefined1 in_ZR;
  undefined *puVar1;
  
  func_0x00673f44();
  FUN_00532c74(&UNK_00912fb7);
  func_0x00674d74();
  func_0x00673fe0();
  puVar1 = &UNK_00912fc1;
  FUN_00532c74(&UNK_00912fc1);
  func_0x00673f60();
  func_0x00673f78();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00673f44();
    func_0x00674cd8();
    func_0x00674d74();
    func_0x00673fe0();
    puVar1 = &UNK_00912ff3;
    FUN_00532c74(&UNK_00912ff3);
    func_0x00673f60();
    func_0x00673f78();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00673f44();
      func_0x006768a8();
      func_0x00674d74();
      func_0x00673fe0();
      puVar1 = &UNK_00913017;
      FUN_00532c74(&UNK_00913017);
      func_0x00673f60();
      func_0x00673f78();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        FUN_006731f4();
        return puVar1;
      }
    }
  }
  return puVar1;
}



/* Entry: 006731f4; end: 0067321b;  */

void FUN_006731f4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_0066bd90();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0067321c; end: 006732c7;  */

void FUN_0067321c(long *param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined **ppuVar1;
  long extraout_x9;
  
  func_0x00673fc4();
  func_0x00674f04();
  if ((extraout_x9 == 0) && (func_0x00674ef8(), !(bool)in_ZR)) {
    func_0x00674f2c();
    if (((bool)in_CY) && (func_0x006742b8(), (bool)in_CY)) {
      func_0x00674668();
    }
    else {
      func_0x0067452c();
      FUN_00673300();
    }
    func_0x0067444c();
  }
  func_0x00673eb4();
  func_0x00673f78();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ppuVar1 = &PTR_LOOP_00a01490;
  FUN_00490188(&PTR_LOOP_00a01490,*param_1,param_1[1] - *param_1);
  func_0x00674d44((long)ppuVar1 + (param_1[1] - *param_1 >> 2));
  return;
}



/* Entry: 006732c8; end: 006732ff;  */

bool FUN_006732c8(long param_1,long param_2,long param_3,long param_4)

{
  if (param_2 - param_1 == param_4 - param_3) {
    _memcmp(param_1,param_3,param_2 - param_1);
    return (int)param_1 == 0;
  }
  return false;
}



/* Entry: 00673300; end: 00673367;  */

void FUN_00673300(void)

{
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x00676210();
  func_0x006742e0();
  func_0x00674f44();
  while (unaff_x23 != unaff_x24) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x0067328c();
      func_0x00674324();
      func_0x00673efc(unaff_w21 & 0x7f);
      func_0x00675c28();
      FUN_00673368();
    }
    func_0x00675698();
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 00673368; end: 00673397;  */

long FUN_00673368(long param_1,long param_2)

{
  long lStack_28;
  
  func_0x00676e24();
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  lStack_28 = param_2;
  FUN_0053b07c(&lStack_28);
  return param_2;
}



/* Entry: 00673398; end: 00673407;  */

ulong FUN_00673398(ulong param_1,undefined *param_2,long *param_3)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long extraout_x9;
  
  func_0x00673fc4();
  func_0x00674f04();
  if ((extraout_x9 == 0) && (func_0x00674ef8(), !(bool)in_ZR)) {
    func_0x00674f2c();
    if (((bool)in_CY) && (func_0x006742b8(), (bool)in_CY)) {
      param_2 = &UNK_00a0de90;
      func_0x00674668();
    }
    else {
      func_0x0067452c();
      FUN_0067341c();
    }
    func_0x0067444c();
  }
  func_0x00673eb4();
  func_0x00673f78();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar1 = *param_3;
  if (param_3[1] - lVar1 == (long)param_2 - param_1) {
    _memcmp(lVar1,param_1,param_3[1] - lVar1);
    return (ulong)((int)lVar1 == 0);
  }
  return 0;
}



/* Entry: 00673408; end: 0067341b;  */

bool FUN_00673408(long param_1,long param_2,long *param_3)

{
  long lVar1;
  
  lVar1 = *param_3;
  if (param_3[1] - lVar1 == param_2 - param_1) {
    _memcmp(lVar1,param_1,param_3[1] - lVar1);
    return (int)lVar1 == 0;
  }
  return false;
}



/* Entry: 0067341c; end: 00673493;  */

void FUN_0067341c(void)

{
  long lVar1;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  
  func_0x00676210();
  func_0x00674364();
  FUN_00537cb8();
  func_0x00674f44();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      lVar1 = unaff_x20;
      func_0x0067328c(unaff_x20);
      func_0x00674324();
      func_0x00673efc(unaff_w21 & 0x7f);
      FUN_00673494(unaff_x25 + lVar1 * 0x30,unaff_x20);
    }
    unaff_x20 = unaff_x20 + 0x30;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 00673494; end: 006734db;  */

/* WARNING: Possible PIC construction at 0x0066a698: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0066a69c) */

long FUN_00673494(long param_1,long param_2)

{
  undefined8 uVar1;
  long lStack_48;
  
  func_0x00676e24();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  lStack_48 = param_2 + 0x18;
  FUN_0053b07c(&lStack_48);
  return param_2 + 0x18;
}



/* Entry: 006734dc; end: 0067350b;  */

long * FUN_006734dc(long *param_1)

{
  if (*param_1 != 0) {
    FUN_0054cf94(param_1);
  }
  return param_1;
}



/* Entry: 0067350c; end: 0067352b;  */

void FUN_0067350c(ulong *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  if (0 < (int)param_1[1]) {
    uVar1 = (uint)param_1[1];
    puVar2 = param_1;
    if ((*param_1 & 1) != 0) {
      puVar2 = (ulong *)(*param_1 + 7);
    }
    if ((int)uVar1 < 2) {
      uVar1 = 1;
    }
    uVar3 = (ulong)uVar1;
    do {
      (**(code **)(*(long *)*puVar2 + 0x18))();
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != 0);
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  return;
}



/* Entry: 0067352c; end: 006735af;  */

long FUN_0067352c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00674c64();
  if (param_1 == 0) {
    func_0x00675d2c();
  }
  else {
    param_2 = 0x70;
    param_1 = unaff_x20;
    func_0x005510c4();
  }
  func_0x006750f0();
  func_0x006803bc();
  *(undefined8 *)(param_1 + 8) = param_2;
  func_0x0068048c(&PTR_FUN_00a0dff8);
  if ((extraout_x8 & 1) != 0) {
    func_0x0067ff60();
  }
  func_0x006807ac();
  FUN_0048ece4();
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  FUN_0048ece4(unaff_x19 + 0x30,unaff_x20,param_3 + 0x30);
  *(undefined4 *)(unaff_x19 + 0x40) = 0;
  func_0x00680690();
  lVar1 = param_3 + 0x60;
  func_0x00680348();
  *(long *)(unaff_x19 + 0x60) = lVar1;
  param_3 = param_3 + 0x68;
  func_0x00680348();
  *(long *)(unaff_x19 + 0x68) = param_3;
  return unaff_x19;
}



/* Entry: 006735b0; end: 006735df;  */

void FUN_006735b0(undefined8 param_1,undefined8 *param_2)

{
  func_0x006753ec(*param_2,param_1);
  func_0x006752a4();
  func_0x00676868();
  return;
}



/* Entry: 006735e0; end: 0067365b;  */

void FUN_006735e0(void)

{
  func_0x006752a4();
  func_0x00676868();
  return;
}



/* Entry: 0067365c; end: 0067368b;  */

void FUN_0067365c(undefined8 param_1,undefined8 *param_2)

{
  func_0x006753ec(*param_2,param_1);
  func_0x006752a4();
  func_0x00676868();
  return;
}



/* Entry: 0067368c; end: 00673923;  */

void FUN_0067368c(void)

{
  func_0x00675cb4();
  func_0x00674c20();
  func_0x00676868();
  return;
}



/* Entry: 00673924; end: 00673a8b;  */

void FUN_00673924(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  int iVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  long unaff_x20;
  undefined8 ***pppuStack_500;
  code *pcStack_4f8;
  undefined *puStack_4e8;
  undefined8 ***pppuStack_4e0;
  code *pcStack_4d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_348;
  undefined8 ***pppuStack_310;
  undefined8 uStack_308;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined1 ***pppuStack_250;
  undefined8 uStack_248;
  undefined1 **ppuStack_190;
  undefined8 uStack_188;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  
  func_0x00673f44();
  FUN_00532c74(&UNK_009130f6);
  func_0x00674438();
  func_0x00673f90();
  func_0x00674408();
  func_0x00673f60();
  func_0x00673f78();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    uStack_c8 = 0x67396c;
    puStack_d0 = &stack0xfffffffffffffff0;
    func_0x00673f44();
    FUN_00532c74(&UNK_0091311e);
    func_0x00674438();
    func_0x00673f90();
    func_0x00674408();
    func_0x00673f60();
    func_0x00673f78();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      uStack_188 = 0x6739b4;
      ppuStack_190 = &puStack_d0;
      func_0x00673f44();
      FUN_00532c74(&UNK_00913147);
      func_0x00674438();
      func_0x00673f90();
      func_0x00674408();
      func_0x00673f60();
      func_0x00673f78();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        uStack_248 = 0x6739fc;
        pppuStack_250 = &ppuStack_190;
        func_0x00673f44();
        FUN_00532c74(&UNK_00913175);
        func_0x00674438();
        func_0x00673f90();
        func_0x00674408();
        func_0x00673f60();
        func_0x00673f78();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          uStack_308 = 0x673a44;
          pppuStack_310 = &pppuStack_250;
          func_0x00673f44();
          FUN_00532c74(&UNK_009131aa);
          func_0x00674438();
          func_0x00673f90();
          func_0x00674408();
          func_0x00673f60();
          func_0x00673f78();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            pcVar3 = FUN_00673a8c;
            func_0x006761f4();
            pppuStack_2f0 = &pppuStack_310;
            pcStack_2e8 = pcVar3;
            func_0x006741e8();
            uStack_348 = extraout_x8;
            func_0x00674fa4();
            func_0x006756b0();
            func_0x00674050();
            func_0x00675608();
            func_0x00674174(*(undefined8 *)(unaff_x20 + 8));
            func_0x006767a0();
            func_0x006753ec(*(undefined8 *)(unaff_x20 + 0x10));
            func_0x006763a4();
            func_0x00673f90();
            puVar2 = &UNK_009131eb;
            FUN_00532c74();
            func_0x00674834();
            func_0x00674120(uStack_348);
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            pcStack_3c8 = FUN_00673b24;
            pppuStack_3d0 = &pppuStack_2f0;
            func_0x00674188();
            func_0x00674fa4();
            func_0x00674fdc();
            func_0x00673f90(*(undefined8 *)(puVar2 + 8));
            func_0x00675608();
            func_0x0067638c();
            func_0x00673fe0();
            func_0x006767a0();
            puStack_4e8 = puVar2;
            pppuStack_4e0 = (undefined8 ***)pcVar3;
            func_0x00674bf0();
            func_0x00674784();
            FUN_00671ba0();
            func_0x0067406c();
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            pcStack_4f8 = FUN_00673ba0;
            pppuStack_500 = &pppuStack_3d0;
            func_0x00673f44();
            FUN_00532c74();
            func_0x00674438();
            func_0x00673f90();
            func_0x00674408();
            func_0x00673f60();
            func_0x00673f78();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              pcVar3 = FUN_00673be8;
              func_0x006761f4();
              pppuStack_4e0 = &pppuStack_500;
              pcStack_4d8 = pcVar3;
              func_0x006741e8();
              func_0x00674cd8();
              func_0x006756b0();
              func_0x00674050();
              FUN_00532c74(&UNK_0091324e);
              func_0x00674bf0();
              func_0x00674174();
              FUN_00532c74(&UNK_0091328b);
              func_0x00674bf0();
              func_0x006763a4();
              func_0x00673fe0();
              FUN_00532c74(&UNK_009132d3);
              func_0x00674834();
              func_0x00674120(extraout_x8_00);
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00673f44();
              FUN_00532c74(&UNK_009132e2);
              func_0x00674438();
              func_0x00673fe0();
              FUN_00532c74();
              func_0x00674108();
              func_0x006755e4();
              func_0x00673f78();
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x00673f44();
              FUN_00532c74(&UNK_0091330d);
              func_0x00674438();
              func_0x00673fe0();
              puVar2 = &UNK_00913315;
              FUN_00532c74();
              func_0x00673f60();
              func_0x00673f78();
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x006743ac();
                iVar1 = (int)puVar2;
                if ((((ulong)puVar2 & 1) != 0) || (func_0x00675fe8(), iVar1 == 0)) {
                  (*param_3)(*param_4);
                  do {
                    func_0x0067626c();
                  } while (extraout_w10 != 0);
                  func_0x00674b54();
                  if ((bool)in_ZR) {
                    func_0x00674ccc();
                  }
                }
                return;
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 00673a8c; end: 00673b23;  */

void FUN_00673a8c(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  int iVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  long unaff_x20;
  undefined8 in_stack_000000d0;
  undefined8 **ppuStack_140;
  code *pcStack_138;
  undefined *puStack_128;
  undefined8 ***pppuStack_120;
  code *pcStack_118;
  undefined8 *puStack_10;
  code *pcStack_8;
  
  func_0x006761f4();
  func_0x006741e8();
  func_0x00674fa4();
  func_0x006756b0();
  func_0x00674050();
  func_0x00675608();
  func_0x00674174(*(undefined8 *)(unaff_x20 + 8));
  func_0x006767a0();
  func_0x006753ec(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x006763a4();
  func_0x00673f90();
  puVar2 = &UNK_009131eb;
  FUN_00532c74();
  func_0x00674834();
  func_0x00674120(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_8 = FUN_00673b24;
  puStack_10 = &stack0x000000d0;
  func_0x00674188();
  func_0x00674fa4();
  func_0x00674fdc();
  func_0x00673f90(*(undefined8 *)(puVar2 + 8));
  func_0x00675608();
  func_0x0067638c();
  func_0x00673fe0();
  func_0x006767a0();
  puStack_128 = puVar2;
  func_0x00674bf0();
  func_0x00674784();
  FUN_00671ba0();
  func_0x0067406c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_00673ba0;
  ppuStack_140 = &puStack_10;
  func_0x00673f44();
  FUN_00532c74();
  func_0x00674438();
  func_0x00673f90();
  func_0x00674408();
  func_0x00673f60();
  func_0x00673f78();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pcVar3 = FUN_00673be8;
    func_0x006761f4();
    pppuStack_120 = &ppuStack_140;
    pcStack_118 = pcVar3;
    func_0x006741e8();
    func_0x00674cd8();
    func_0x006756b0();
    func_0x00674050();
    FUN_00532c74(&UNK_0091324e);
    func_0x00674bf0();
    func_0x00674174();
    FUN_00532c74(&UNK_0091328b);
    func_0x00674bf0();
    func_0x006763a4();
    func_0x00673fe0();
    FUN_00532c74(&UNK_009132d3);
    func_0x00674834();
    func_0x00674120(extraout_x8_00);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00673f44();
    FUN_00532c74(&UNK_009132e2);
    func_0x00674438();
    func_0x00673fe0();
    FUN_00532c74();
    func_0x00674108();
    func_0x006755e4();
    func_0x00673f78();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00673f44();
    FUN_00532c74(&UNK_0091330d);
    func_0x00674438();
    func_0x00673fe0();
    puVar2 = &UNK_00913315;
    FUN_00532c74();
    func_0x00673f60();
    func_0x00673f78();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x006743ac();
      iVar1 = (int)puVar2;
      if ((((ulong)puVar2 & 1) != 0) || (func_0x00675fe8(), iVar1 == 0)) {
        (*param_3)(*param_4);
        do {
          func_0x0067626c();
        } while (extraout_w10 != 0);
        func_0x00674b54();
        if ((bool)in_ZR) {
          func_0x00674ccc();
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 00673b24; end: 00673b9f;  */

void FUN_00673b24(long param_1,undefined8 param_2,code *param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  int iVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined1 *puStack_140;
  code *pcStack_138;
  long lStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  
  func_0x00674188();
  func_0x00674fa4();
  func_0x00674fdc();
  func_0x00673f90(*(undefined8 *)(param_1 + 8));
  func_0x00675608();
  func_0x0067638c();
  func_0x00673fe0();
  func_0x006767a0();
  lStack_128 = param_1;
  ppuStack_120 = (undefined1 **)param_2;
  func_0x00674bf0();
  func_0x00674784();
  FUN_00671ba0();
  func_0x0067406c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_00673ba0;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00673f44();
  FUN_00532c74();
  func_0x00674438();
  func_0x00673f90();
  func_0x00674408();
  func_0x00673f60();
  func_0x00673f78();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pcVar3 = FUN_00673be8;
    func_0x006761f4();
    ppuStack_120 = &puStack_140;
    pcStack_118 = pcVar3;
    func_0x006741e8();
    func_0x00674cd8();
    func_0x006756b0();
    func_0x00674050();
    FUN_00532c74(&UNK_0091324e);
    func_0x00674bf0();
    func_0x00674174();
    FUN_00532c74(&UNK_0091328b);
    func_0x00674bf0();
    func_0x006763a4();
    func_0x00673fe0();
    FUN_00532c74(&UNK_009132d3);
    func_0x00674834();
    func_0x00674120(extraout_x8);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00673f44();
    FUN_00532c74(&UNK_009132e2);
    func_0x00674438();
    func_0x00673fe0();
    FUN_00532c74();
    func_0x00674108();
    func_0x006755e4();
    func_0x00673f78();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00673f44();
    FUN_00532c74(&UNK_0091330d);
    func_0x00674438();
    func_0x00673fe0();
    puVar2 = &UNK_00913315;
    FUN_00532c74();
    func_0x00673f60();
    func_0x00673f78();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x006743ac();
      iVar1 = (int)puVar2;
      if ((((ulong)puVar2 & 1) != 0) || (func_0x00675fe8(), iVar1 == 0)) {
        (*param_3)(*param_4);
        do {
          func_0x0067626c();
        } while (extraout_w10 != 0);
        func_0x00674b54();
        if ((bool)in_ZR) {
          func_0x00674ccc();
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 00673ba0; end: 00673be7;  */

void FUN_00673ba0(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  int iVar1;
  undefined *puVar2;
  undefined8 extraout_x8;
  int extraout_w10;
  
  func_0x00673f44();
  FUN_00532c74();
  func_0x00674438();
  func_0x00673f90();
  func_0x00674408();
  func_0x00673f60();
  func_0x00673f78();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x006761f4();
    func_0x006741e8();
    func_0x00674cd8();
    func_0x006756b0();
    func_0x00674050();
    FUN_00532c74(&UNK_0091324e);
    func_0x00674bf0();
    func_0x00674174();
    FUN_00532c74(&UNK_0091328b);
    func_0x00674bf0();
    func_0x006763a4();
    func_0x00673fe0();
    FUN_00532c74(&UNK_009132d3);
    func_0x00674834();
    func_0x00674120(extraout_x8);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00673f44();
    FUN_00532c74(&UNK_009132e2);
    func_0x00674438();
    func_0x00673fe0();
    FUN_00532c74();
    func_0x00674108();
    func_0x006755e4();
    func_0x00673f78();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00673f44();
    FUN_00532c74(&UNK_0091330d);
    func_0x00674438();
    func_0x00673fe0();
    puVar2 = &UNK_00913315;
    FUN_00532c74();
    func_0x00673f60();
    func_0x00673f78();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x006743ac();
      iVar1 = (int)puVar2;
      if ((((ulong)puVar2 & 1) != 0) || (func_0x00675fe8(), iVar1 == 0)) {
        (*param_3)(*param_4);
        do {
          func_0x0067626c();
        } while (extraout_w10 != 0);
        func_0x00674b54();
        if ((bool)in_ZR) {
          func_0x00674ccc();
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 00673be8; end: 00673c8b;  */

void FUN_00673be8(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  int iVar1;
  undefined *puVar2;
  undefined8 extraout_x8;
  int extraout_w10;
  
  func_0x006761f4();
  func_0x006741e8();
  func_0x00674cd8();
  func_0x006756b0();
  func_0x00674050();
  FUN_00532c74(&UNK_0091324e);
  func_0x00674bf0();
  func_0x00674174();
  FUN_00532c74(&UNK_0091328b);
  func_0x00674bf0();
  func_0x006763a4();
  func_0x00673fe0();
  FUN_00532c74(&UNK_009132d3);
  func_0x00674834();
  func_0x00674120(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00673f44();
  FUN_00532c74(&UNK_009132e2);
  func_0x00674438();
  func_0x00673fe0();
  FUN_00532c74();
  func_0x00674108();
  func_0x006755e4();
  func_0x00673f78();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00673f44();
    FUN_00532c74(&UNK_0091330d);
    func_0x00674438();
    func_0x00673fe0();
    puVar2 = &UNK_00913315;
    FUN_00532c74();
    func_0x00673f60();
    func_0x00673f78();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x006743ac();
      iVar1 = (int)puVar2;
      if ((((ulong)puVar2 & 1) != 0) || (func_0x00675fe8(), iVar1 == 0)) {
        (*param_3)(*param_4);
        do {
          func_0x0067626c();
        } while (extraout_w10 != 0);
        func_0x00674b54();
        if ((bool)in_ZR) {
          func_0x00674ccc();
        }
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 00673c8c; end: 00673d4f;  */

void FUN_00673c8c(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  int iVar1;
  undefined *puVar2;
  int extraout_w10;
  
  func_0x00673f44();
  FUN_00532c74(&UNK_009132e2);
  func_0x00674438();
  func_0x00673fe0();
  FUN_00532c74();
  func_0x00674108();
  func_0x006755e4();
  func_0x00673f78();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00673f44();
  FUN_00532c74(&UNK_0091330d);
  func_0x00674438();
  func_0x00673fe0();
  puVar2 = &UNK_00913315;
  FUN_00532c74();
  func_0x00673f60();
  func_0x00673f78();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x006743ac();
  iVar1 = (int)puVar2;
  if ((((ulong)puVar2 & 1) != 0) || (func_0x00675fe8(), iVar1 == 0)) {
    (*param_3)(*param_4);
    do {
      func_0x0067626c();
    } while (extraout_w10 != 0);
    func_0x00674b54();
    if ((bool)in_ZR) {
      func_0x00674ccc();
    }
  }
  return;
}



/* Entry: 00673d50; end: 00673daf;  */

void FUN_00673d50(ulong param_1,undefined8 param_2,code *param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  int iVar1;
  int extraout_w10;
  
  func_0x006743ac();
  iVar1 = (int)param_1;
  if (((param_1 & 1) != 0) || (func_0x00675fe8(), iVar1 == 0)) {
    (*param_3)(*param_4);
    do {
      func_0x0067626c();
    } while (extraout_w10 != 0);
    func_0x00674b54();
    if ((bool)in_ZR) {
      func_0x00674ccc();
    }
  }
  return;
}



/* Entry: 00673db0; end: 00673e03;  */

void FUN_00673db0(ulong param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  int iVar1;
  int extraout_w10;
  
  func_0x006743ac();
  iVar1 = (int)param_1;
  if (((param_1 & 1) != 0) || (func_0x006750c4(), iVar1 == 0)) {
    FUN_006655c4(*param_2);
    do {
      func_0x0067626c();
    } while (extraout_w10 != 0);
    func_0x00674b54();
    if ((bool)in_ZR) {
      func_0x00674ccc();
    }
  }
  return;
}



/* Entry: 00673e04; end: 00673eb3;  */

void FUN_00673e04(ulong param_1,long param_2)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  ulong uVar5;
  long unaff_x19;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined1 auStack_40 [16];
  
  func_0x006743ac();
  iVar2 = (int)param_1;
  if (((param_1 & 1) != 0) || (func_0x006750c4(), iVar2 == 0)) {
    func_0x006756b0();
    if ((*(byte *)(*(long *)(extraout_x8 + 0x10) + 2) & 1) == 0) {
      func_0x00674bbc();
      puVar4 = auStack_40;
      FUN_00776794();
      func_0x00674d28();
      *(long *)(unaff_x19 + 0x18) = *(long *)(unaff_x19 + 0x18) + 1;
      *(ulong *)(extraout_x8_00 + -8) =
           *(long *)(extraout_x8_00 + -8) - (ulong)(puVar4[extraout_x8_00] == -0x80);
      bVar1 = (byte)param_2 & 0x7f;
      uVar5 = *(ulong *)(unaff_x19 + 0x10);
      puVar4[extraout_x8_00] = bVar1;
      *(byte *)(extraout_x8_00 + (uVar5 & (ulong)(puVar4 + -7)) + (uVar5 & 7)) = bVar1;
      return;
    }
    puVar7 = *(undefined8 **)(param_2 + 8);
    lVar8 = puVar7[1];
    uVar6 = *(undefined8 *)(*(long *)(extraout_x8 + 0x10) + 0x18);
    lVar3 = lVar8 + 4;
    _strlen(lVar3);
    FUN_0066520c(uVar6,lVar8 + 4,lVar3);
    func_0x00675120();
    if (!(bool)in_ZR) {
      uVar6 = 0;
    }
    *puVar7 = uVar6;
    do {
      func_0x0067626c();
    } while (extraout_w10 != 0);
    func_0x00674b54();
    if ((bool)in_ZR) {
      func_0x00674ccc();
    }
  }
  return;
}



/* Entry: 00673eb4; end: 00676e47;  */

void FUN_00673eb4(long param_1,long param_2)

{
  ulong uVar1;
  long unaff_x19;
  byte unaff_w20;
  
  *(long *)(unaff_x19 + 0x18) = *(long *)(unaff_x19 + 0x18) + 1;
  *(ulong *)(param_1 + -8) =
       *(long *)(param_1 + -8) - (ulong)(*(char *)(param_1 + param_2) == -0x80);
  uVar1 = *(ulong *)(unaff_x19 + 0x10);
  *(byte *)(param_1 + param_2) = unaff_w20 & 0x7f;
  *(byte *)(param_1 + (uVar1 & param_2 - 7U) + (uVar1 & 7)) = unaff_w20 & 0x7f;
  return;
}



/* Entry: 00676e48; end: 00676e7f;  */

undefined8 FUN_00676e48(void)

{
  func_0x006808d8();
  return uRam0000000000b6c830;
}



/* Entry: 00676e80; end: 00676eb7;  */

long FUN_00676e80(long param_1)

{
  func_0x006802c0();
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_0054cf94();
  }
  return param_1;
}



/* Entry: 00676eb8; end: 00676ebb;  */

long FUN_00676eb8(long param_1)

{
  func_0x006802c0();
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_0054cf94();
  }
  return param_1;
}



/* Entry: 00676ebc; end: 00676ecf;  */

void FUN_00676ebc(void)

{
  FUN_00676e80();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00676ed0; end: 00676edb;  */

void FUN_00676ed0(void)

{
  Hint_Prefetch(0xb263e0,0,0,0);
  Hint_Prefetch(PTR_DAT_00b263e0,0,0,0);
  return;
}



/* Entry: 00676edc; end: 00676f1f;  */

void FUN_00676edc(uint param_1)

{
  char in_NG;
  char in_OV;
  
  do {
    func_0x006807f4();
    if (in_NG != in_OV) break;
    func_0x0067ff98();
    FUN_00677144();
  } while ((param_1 & 1) != 0);
  func_0x006807e8();
  return;
}



/* Entry: 00676f20; end: 00676f9f;  */

void FUN_00676f20(ulong *param_1,long *param_2)

{
  long unaff_x20;
  long lVar1;
  long unaff_x22;
  
  func_0x006803bc();
  if ((int)param_2[3] != 0) {
    func_0x0068087c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00680144();
    if ((*param_1 & 1) == 0) {
      func_0x00699010();
    }
    if (0 < (int)((ulong)(param_2[1] - *param_2) >> 4)) {
      func_0x006a5744();
      for (lVar1 = 0; unaff_x22 * 0x10 - lVar1 != 0; lVar1 = lVar1 + 0x10) {
        func_0x006a57c0();
        func_0x006a580c();
      }
    }
    return;
  }
  return;
}



/* Entry: 00676fa0; end: 00677037;  */

long * FUN_00676fa0(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  func_0x00680024();
  func_0x0068079c();
  while (unaff_w22 != unaff_w21) {
    func_0x0067fd70();
    param_1 = (long *)((long)&MACH_HEADER.magic + 1);
    func_0x00680280();
    func_0x0068046c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0067fe84();
  lVar10 = 0;
  plVar3 = param_1;
  do {
    if ((int)((ulong)(param_1[1] - *param_1) >> 4) <= lVar10) {
      return param_2;
    }
    piVar1 = (int *)(*param_1 + lVar10 * 0x10);
    func_0x006aad90();
    plVar6 = plVar3;
    param_2 = plVar3;
    switch(piVar1[1]) {
    case 0:
      plVar6 = *(long **)(piVar1 + 2);
      uVar4 = (ulong)(uint)(*piVar1 << 3);
      func_0x006aac48(uVar4);
      func_0x00487cf0(plVar6,uVar4);
      param_2 = plVar6;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x006aac48();
      *(int *)plVar6 = iVar2;
      param_2 = (long *)((long)plVar6 + 4);
      break;
    case 2:
      lVar8 = *(long *)(piVar1 + 2);
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x006aac48();
      *plVar6 = lVar8;
      param_2 = plVar6 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar8 = *(long *)(piVar1 + 2);
      lVar9 = (long)*(char *)(lVar8 + 0x17);
      if ((-1 < lVar9) || (lVar9 = *(long *)(lVar8 + 8), lVar9 < 0x80)) {
        lVar11 = *param_3;
        uVar7 = iVar2 << 3;
        plVar6 = (long *)(ulong)uVar7;
        func_0x00487c84();
        if (lVar9 <= lVar11 + ~((long)plVar3 + (long)(int)plVar6) + 0x10) {
          lVar8 = (long)plVar3 + 2;
          for (uVar7 = uVar7 | 2; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
            *(byte *)(lVar8 + -2) = (byte)uVar7 | 0x80;
            lVar8 = lVar8 + 1;
          }
          *(byte *)(lVar8 + -2) = (byte)uVar7;
          *(char *)(lVar8 + -1) = (char)lVar9;
          func_0x006aaec0();
          _memcpy();
          param_2 = (long *)(lVar8 + lVar9);
          break;
        }
      }
      plVar6 = param_3;
      func_0x0054f030(param_3,iVar2,lVar8,plVar3);
      param_2 = plVar6;
      break;
    case 4:
      uVar4 = (ulong)(*piVar1 << 3 | 3);
      func_0x006aac48(uVar4);
      uVar5 = *(undefined8 *)(piVar1 + 2);
      FUN_006a5a40(uVar5,uVar4,param_3);
      func_0x006aad84();
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x00487cbc(plVar6,uVar5);
      param_2 = plVar6;
    }
    lVar10 = lVar10 + 1;
    plVar3 = plVar6;
  } while( true );
}



/* Entry: 00677038; end: 00677063;  */

undefined8 * FUN_00677038(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_00a0e958;
  param_1[1] = param_2;
  FUN_00677064();
  return param_1;
}



/* Entry: 00677064; end: 0067709b;  */

void FUN_00677064(long param_1,undefined8 param_2)

{
  FUN_006809f4();
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = param_2;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = param_2;
  *(undefined **)(param_1 + 0xb0) = &DAT_00b69408;
  *(undefined **)(param_1 + 0xb8) = &DAT_00b69408;
  *(undefined **)(param_1 + 0xc0) = &DAT_00b69408;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  return;
}



/* Entry: 0067709c; end: 006770c7;  */

undefined8 FUN_0067709c(undefined8 param_1)

{
  func_0x006802c0();
  FUN_006770c8(param_1);
  return param_1;
}



/* Entry: 006770c8; end: 0067711f;  */

long FUN_006770c8(long param_1)

{
  func_0x00532f74(param_1 + 0xb0);
  func_0x00532f74(param_1 + 0xb8);
  func_0x00532f74(param_1 + 0xc0);
  if (*(long *)(param_1 + 200) != 0) {
    FUN_0067a68c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xd0) != 0) {
    FUN_0067e174();
  }
  __ZdlPv();
  FUN_0048ed64(param_1 + 0xa0);
  FUN_0048ed64(param_1 + 0x90);
  FUN_0067e864(param_1 + 0x78);
  FUN_0067e88c(param_1 + 0x60);
  FUN_0067e8b4(param_1 + 0x48);
  FUN_0067e8dc(param_1 + 0x30);
  FUN_00437b14(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 00677120; end: 00677123;  */

undefined8 FUN_00677120(undefined8 param_1)

{
  func_0x006802c0();
  FUN_006770c8(param_1);
  return param_1;
}



/* Entry: 00677124; end: 00677137;  */

void FUN_00677124(void)

{
  FUN_0067709c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00677138; end: 00677143;  */

void FUN_00677138(void)

{
  Hint_Prefetch(0xb26498,0,0,0);
  Hint_Prefetch(PTR_DAT_00b26498,0,0,0);
  return;
}



/* Entry: 00677144; end: 006771c7;  */

void FUN_00677144(long param_1)

{
  char in_NG;
  char in_OV;
  int iVar1;
  ulong uVar2;
  
  iVar1 = (int)param_1 + 0x30;
  FUN_00677a44();
  if (iVar1 != 0) {
    uVar2 = param_1 + 0x48;
    func_0x00677a7c();
    if ((int)uVar2 != 0) {
      func_0x00680800();
      do {
        func_0x00680670();
        if (in_NG != in_OV) {
          iVar1 = (int)param_1 + 0x78;
          func_0x00677ab4();
          if (iVar1 == 0) {
            return;
          }
          if ((*(byte *)(param_1 + 0x10) >> 3 & 1) == 0) {
            return;
          }
          FUN_0067a758();
          return;
        }
        func_0x0067ff78();
        FUN_00679ebc();
      } while ((uVar2 & 1) != 0);
    }
  }
  return;
}



/* Entry: 006771c8; end: 00677333;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_006771c8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  ulong *puVar2;
  long *plVar3;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  ulong *unaff_x22;
  
  func_0x0067ff18();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00680400();
  }
  func_0x00680908();
  FUN_0048cf14();
  func_0x00680448();
  FUN_006779e4();
  func_0x006808f0();
  func_0x006779fc();
  func_0x00677a14(unaff_x21 + 0x60,unaff_x20 + 0x60);
  func_0x00677a2c(unaff_x21 + 0x78,unaff_x20 + 0x78);
  FUN_0048ebf4(unaff_x21 + 0x90,unaff_x20 + 0x90);
  puVar2 = (ulong *)(unaff_x21 + 0xa0);
  plVar3 = (long *)(unaff_x20 + 0xa0);
  FUN_0048ebf4();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00680268(*(undefined8 *)(unaff_x20 + 0xb0));
      param_3 = *(ulong *)(unaff_x21 + 8);
      if ((param_3 & 1) != 0) {
        func_0x00680334();
      }
      puVar2 = (ulong *)(unaff_x21 + 0xb0);
      func_0x006802a8();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x006804a0(*(undefined8 *)(unaff_x20 + 0xb8));
      if ((param_3 & 1) != 0) {
        func_0x00680334();
      }
      puVar2 = (ulong *)(unaff_x21 + 0xb8);
      func_0x006802a8();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x006804a0(*(undefined8 *)(unaff_x20 + 0xc0));
      if ((param_3 & 1) != 0) {
        func_0x00680334();
      }
      puVar2 = (ulong *)(unaff_x21 + 0xc0);
      func_0x006802a8();
    }
    if ((uVar1 >> 3 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 200);
      plVar3 = *(long **)(unaff_x20 + 200);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_0067f0f8();
        *(ulong **)(unaff_x21 + 200) = puVar2;
      }
      else {
        FUN_0067a7a0();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xd0);
      plVar3 = *(long **)(unaff_x20 + 0xd0);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = unaff_x22;
        FUN_0067f134();
        *(ulong **)(unaff_x21 + 0xd0) = puVar2;
      }
      else {
        FUN_0067e1c4();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0xd8) = *(undefined4 *)(unaff_x20 + 0xd8);
    }
  }
  func_0x0067fff4();
  if ((extraout_x8 & 1) != 0) {
    func_0x00680064();
    if ((*puVar2 & 1) == 0) {
      func_0x00699010();
    }
    if (0 < (int)((ulong)(plVar3[1] - *plVar3) >> 4)) {
      func_0x006a5744();
      for (lVar4 = 0; (long)unaff_x22 * 0x10 - lVar4 != 0; lVar4 = lVar4 + 0x10) {
        func_0x006a57c0();
        func_0x006a580c();
      }
    }
    return;
  }
  return;
}



/* Entry: 00677334; end: 006773eb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_00677334(long param_1)

{
  uint uVar1;
  char in_NG;
  char in_OV;
  long lVar2;
  ulong *puVar3;
  long lVar4;
  
  FUN_0048cfec(param_1 + 0x18);
  FUN_006809d0();
  if (in_NG == in_OV) {
    FUN_00437de0(param_1 + 0x60);
  }
  func_0x0067ef2c(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_006773ec(*(undefined8 *)(param_1 + 0xb0));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_006773ec(*(undefined8 *)(param_1 + 0xb8));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_006773ec(*(undefined8 *)(param_1 + 0xc0));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x006773f4(*(undefined8 *)(param_1 + 200));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      func_0x00677510(*(undefined8 *)(param_1 + 0xd0));
    }
  }
  puVar3 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar3 & 1) == 0) {
    return;
  }
  if ((*puVar3 & 1) == 0) {
    func_0x00699010();
  }
  else {
    puVar3 = (ulong *)((*puVar3 & 0xfffffffffffffffe) + 8);
  }
  if (*puVar3 == puVar3[1]) {
    return;
  }
  lVar2 = (long)((puVar3[1] - *puVar3) * 0x10000000) >> 0x20;
  lVar4 = lVar2 + 1;
  lVar2 = lVar2 * 0x10;
  do {
    lVar2 = lVar2 + -0x10;
    FUN_006a4904(*puVar3 + lVar2);
    lVar4 = lVar4 + -1;
  } while (1 < lVar4);
  puVar3[1] = *puVar3;
  return;
}



/* Entry: 006773ec; end: 006773f3;  */

void FUN_006773ec(ulong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 & 0xfffffffffffffffc);
  if (-1 < *(char *)((long)puVar1 + 0x17)) {
    *(undefined1 *)puVar1 = 0;
    *(undefined1 *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 006773f4; end: 00677543;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_006773f4(void)

{
  uint uVar1;
  ulong extraout_x8;
  long lVar2;
  ulong *unaff_x19;
  long lVar3;
  
  func_0x00680104();
  func_0x006804d0();
  uVar1 = (uint)unaff_x19[5];
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_006773ec(unaff_x19[9]);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_006773ec(unaff_x19[10]);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_006773ec(unaff_x19[0xb]);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00680874();
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_006773ec(unaff_x19[0xd]);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      FUN_006773ec(unaff_x19[0xe]);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      FUN_006773ec(unaff_x19[0xf]);
    }
    if ((uVar1 >> 7 & 1) != 0) {
      FUN_006773ec(unaff_x19[0x10]);
    }
  }
  if ((uVar1 & 0x700) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      FUN_006773ec(unaff_x19[0x11]);
    }
    if ((uVar1 >> 9 & 1) != 0) {
      FUN_006773ec(unaff_x19[0x12]);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      FUN_00678b18(unaff_x19[0x13]);
    }
  }
  if ((uVar1 & 0xf800) != 0) {
    *(undefined1 *)((long)unaff_x19 + 0xa4) = 0;
    *(undefined4 *)(unaff_x19 + 0x14) = 0;
  }
  if ((uVar1 & 0x1f0000) != 0) {
    *(undefined1 *)((long)unaff_x19 + 0xa7) = 0;
    *(undefined2 *)((long)unaff_x19 + 0xa5) = 0;
    *(undefined4 *)(unaff_x19 + 0x15) = 1;
    *(undefined1 *)((long)unaff_x19 + 0xac) = 1;
  }
  func_0x00680558();
  if ((extraout_x8 & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
      func_0x00699010();
    }
    else {
      unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
    }
    if (*unaff_x19 == unaff_x19[1]) {
      return;
    }
    lVar2 = (long)((unaff_x19[1] - *unaff_x19) * 0x10000000) >> 0x20;
    lVar3 = lVar2 + 1;
    lVar2 = lVar2 * 0x10;
    do {
      lVar2 = lVar2 + -0x10;
      FUN_006a4904(*unaff_x19 + lVar2);
      lVar3 = lVar3 + -1;
    } while (1 < lVar3);
    unaff_x19[1] = *unaff_x19;
    return;
  }
  return;
}



/* Entry: 00677544; end: 006777fb;  */

dword * FUN_00677544(dword *param_1,dword *param_2,dword *param_3,dword *param_4)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  uint uVar4;
  dword dVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  bool bVar9;
  dword *pdVar10;
  dword *pdVar11;
  undefined8 uVar12;
  dword *pdVar13;
  uint uVar14;
  ulong uVar15;
  dword *unaff_x19;
  long unaff_x20;
  undefined1 *puVar16;
  long unaff_x22;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  
  func_0x00680024();
  uVar14 = param_1[4];
  if ((uVar14 & 1) != 0) {
    func_0x0067ff44(*(undefined8 *)(unaff_x20 + 0xb0));
    param_4 = param_1;
  }
  if ((uVar14 >> 1 & 1) != 0) {
    func_0x006800b0(*(undefined8 *)(unaff_x20 + 0xb8));
    param_4 = param_1;
  }
  lVar20 = 8;
  for (uVar19 = (ulong)(*(uint *)(unaff_x20 + 0x20) &
                       ((int)*(uint *)(unaff_x20 + 0x20) >> 0x1f ^ 0xffffffffU)); uVar19 != 0;
      uVar19 = uVar19 - 1) {
    uVar15 = *(ulong *)(unaff_x20 + 0x18);
    bVar9 = (uVar15 & 1) == 0;
    cVar7 = '\0';
    cVar8 = '\0';
    puVar2 = (ulong *)(unaff_x20 + 0x18);
    if (!bVar9) {
      puVar2 = (ulong *)(uVar15 + lVar20 + -1);
    }
    param_3 = (dword *)*puVar2;
    cVar6 = *(char *)((long)param_3 + 0x17);
    if ((((long)cVar6 < 0) && (func_0x00680948(), !bVar9 && cVar7 == cVar8)) ||
       (func_0x0068035c(), cVar7 != cVar8)) {
      param_2 = (dword *)((long)&MACH_HEADER.magic + 3);
      param_1 = unaff_x19;
      func_0x0054f030();
      param_4 = param_1;
    }
    else {
      *(undefined1 *)param_4 = 0x1a;
      *(char *)((long)param_4 + 1) = cVar6;
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        param_3 = *(dword **)param_3;
      }
      func_0x00680160();
      param_4 = (dword *)(unaff_x22 + cVar6);
    }
    lVar20 = lVar20 + 8;
  }
  iVar3 = *(int *)(unaff_x20 + 0x38);
  while (iVar3 != 0) {
    func_0x0067fe3c(*(undefined8 *)(unaff_x20 + 0x30));
    param_1 = &MACH_HEADER.cputype;
    func_0x00680280();
    func_0x0068046c();
  }
  iVar3 = *(int *)(unaff_x20 + 0x50);
  while (iVar3 != 0) {
    func_0x0067fe3c(*(undefined8 *)(unaff_x20 + 0x48));
    param_1 = (dword *)((long)&MACH_HEADER.cputype + 1);
    func_0x00680280();
    func_0x0068046c();
  }
  iVar3 = *(int *)(unaff_x20 + 0x68);
  while (iVar3 != 0) {
    func_0x0067fe3c(*(undefined8 *)(unaff_x20 + 0x60));
    param_1 = (dword *)((long)&MACH_HEADER.cputype + 2);
    func_0x00680280();
    func_0x0068046c();
  }
  iVar3 = *(int *)(unaff_x20 + 0x80);
  while (iVar3 != 0) {
    func_0x0067fe3c(*(undefined8 *)(unaff_x20 + 0x78));
    param_1 = (dword *)((long)&MACH_HEADER.cputype + 3);
    func_0x00680280();
    func_0x0068046c();
  }
  if ((uVar14 >> 3 & 1) != 0) {
    param_2 = *(dword **)(unaff_x20 + 200);
    param_3 = (dword *)(ulong)param_2[0xb];
    param_1 = &MACH_HEADER.cpusubtype;
    func_0x00680280();
    param_4 = param_1;
  }
  if ((uVar14 >> 4 & 1) != 0) {
    param_2 = *(dword **)(unaff_x20 + 0xd0);
    param_3 = (dword *)(ulong)param_2[10];
    param_1 = (dword *)((long)&MACH_HEADER.cpusubtype + 1);
    func_0x00680280();
    param_4 = param_1;
  }
  uVar4 = *(uint *)(unaff_x20 + 0x90);
  for (lVar20 = 0; (ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) << 2 != lVar20;
      lVar20 = lVar20 + 4) {
    func_0x0067ff6c();
    param_2 = param_1;
    func_0x00680840();
    func_0x0067ffb8();
    param_4 = param_1;
  }
  uVar4 = *(uint *)(unaff_x20 + 0xa0);
  for (lVar20 = 0; (ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) << 2 != lVar20;
      lVar20 = lVar20 + 4) {
    func_0x0067ff6c();
    param_4 = &segment_command_00000020.maxprot;
    func_0x00487cbc(0x58,param_1);
    param_2 = param_1;
    func_0x0067ffb8();
    param_1 = param_4;
  }
  if ((uVar14 >> 2 & 1) != 0) {
    func_0x00680328(*(undefined8 *)(unaff_x20 + 0xc0));
    param_2 = &MACH_HEADER.filetype;
    FUN_00435e9c();
    param_4 = param_1;
  }
  pdVar10 = param_1;
  if ((uVar14 >> 5 & 1) != 0) {
    func_0x0067ff6c();
    pdVar10 = (dword *)(section_00000068.sectname + 8);
    func_0x00487cbc(0x70,param_1);
    func_0x0067ffb8();
    param_2 = param_1;
    param_4 = pdVar10;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0067fe84();
  lVar20 = 0;
  pdVar11 = pdVar10;
  do {
    if ((int)((ulong)(*(long *)(pdVar10 + 2) - *(long *)pdVar10) >> 4) <= lVar20) {
      return param_2;
    }
    piVar1 = (int *)(*(long *)pdVar10 + lVar20 * 0x10);
    func_0x006aad90();
    pdVar13 = pdVar11;
    param_2 = pdVar11;
    switch(piVar1[1]) {
    case 0:
      pdVar13 = *(dword **)(piVar1 + 2);
      uVar19 = (ulong)(uint)(*piVar1 << 3);
      func_0x006aac48(uVar19);
      func_0x00487cf0(pdVar13,uVar19);
      param_2 = pdVar13;
      break;
    case 1:
      dVar5 = piVar1[2];
      pdVar13 = (dword *)(ulong)(*piVar1 << 3 | 5);
      func_0x006aac48();
      *pdVar13 = dVar5;
      param_2 = pdVar13 + 1;
      break;
    case 2:
      lVar17 = *(long *)(piVar1 + 2);
      pdVar13 = (dword *)(ulong)(*piVar1 << 3 | 1);
      func_0x006aac48();
      *(long *)pdVar13 = lVar17;
      param_2 = pdVar13 + 2;
      break;
    case 3:
      iVar3 = *piVar1;
      lVar17 = *(long *)(piVar1 + 2);
      lVar18 = (long)*(char *)(lVar17 + 0x17);
      if ((-1 < lVar18) || (lVar18 = *(long *)(lVar17 + 8), lVar18 < 0x80)) {
        lVar21 = *(long *)param_3;
        uVar14 = iVar3 << 3;
        pdVar13 = (dword *)(ulong)uVar14;
        func_0x00487c84();
        if (lVar18 <= (long)(lVar21 + ~(ulong)((long)pdVar11 + (long)(int)pdVar13) + 0x10)) {
          puVar16 = (undefined1 *)((long)pdVar11 + 2);
          for (uVar14 = uVar14 | 2; 0x7f < uVar14; uVar14 = uVar14 >> 7) {
            puVar16[-2] = (byte)uVar14 | 0x80;
            puVar16 = puVar16 + 1;
          }
          puVar16[-2] = (byte)uVar14;
          puVar16[-1] = (char)lVar18;
          func_0x006aaec0();
          _memcpy();
          param_2 = (dword *)(puVar16 + lVar18);
          break;
        }
      }
      pdVar13 = param_3;
      func_0x0054f030(param_3,iVar3,lVar17,pdVar11);
      param_2 = pdVar13;
      break;
    case 4:
      uVar19 = (ulong)(*piVar1 << 3 | 3);
      func_0x006aac48(uVar19);
      uVar12 = *(undefined8 *)(piVar1 + 2);
      FUN_006a5a40(uVar12,uVar19,param_3);
      func_0x006aad84();
      pdVar13 = (dword *)(ulong)(*piVar1 << 3 | 4);
      func_0x00487cbc(pdVar13,uVar12);
      param_2 = pdVar13;
    }
    lVar20 = lVar20 + 1;
    pdVar11 = pdVar13;
  } while( true );
}



/* Entry: 006777fc; end: 0067798f;  */

/* WARNING: Removing unreachable block (ram,0x00677864) */
/* WARNING: Removing unreachable block (ram,0x00677844) */
/* WARNING: Removing unreachable block (ram,0x00677888) */
/* WARNING: Type propagation algorithm not settling */

long FUN_006777fc(long param_1,undefined8 param_2,undefined4 *param_3)

{
  ulong *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar4 = (undefined4)((ulong)param_2 >> 0x20);
  uVar3 = (undefined4)param_2;
  uVar2 = *(uint *)(param_1 + 0x20);
  while ((uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) != 0) {
    func_0x00680008();
    func_0x00680518();
  }
  func_0x0067fdfc();
  func_0x0067fdfc();
  func_0x0067fdfc();
  uVar5 = *(ulong *)(param_1 + 0x78);
  puVar1 = (ulong *)(param_1 + 0x78);
  if ((uVar5 & 1) != 0) {
    puVar1 = (ulong *)(uVar5 + 7);
  }
  for (lVar6 = (long)*(int *)(param_1 + 0x80) << 3; lVar6 != 0; lVar6 = lVar6 + -8) {
    func_0x006779c8(*puVar1);
    puVar1 = puVar1 + 1;
  }
  FUN_0054de38(param_1 + 0x90);
  lVar6 = param_1 + 0xa0;
  FUN_0054de38();
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 0x3f) != 0) {
    if ((uVar2 & 1) != 0) {
      func_0x006802b0(*(undefined8 *)(param_1 + 0xb0));
      func_0x00680350();
    }
    if ((uVar2 >> 1 & 1) != 0) {
      func_0x006802b0(*(undefined8 *)(param_1 + 0xb8));
      func_0x00680350();
    }
    if ((uVar2 >> 2 & 1) != 0) {
      func_0x006802b0(*(undefined8 *)(param_1 + 0xc0));
      func_0x00680350();
    }
    if ((uVar2 >> 3 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 200);
      FUN_0067ad50();
      func_0x0067fdb0();
    }
    if ((uVar2 >> 4 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0xd0);
      func_0x0067e254();
      func_0x0067fdb0();
    }
    if ((uVar2 >> 5 & 1) != 0) {
      func_0x00680110((long)*(int *)(param_1 + 0xd8));
    }
  }
  func_0x00680128();
  if ((*(byte *)(lVar6 + 8) & 1) != 0) {
    if ((*(ulong *)(lVar6 + 8) & 1) == 0) {
      FUN_006a480c();
    }
    else {
      lVar6 = (*(ulong *)(lVar6 + 8) & 0xfffffffffffffffe) + 8;
    }
    FUN_006a5cc8();
    lVar6 = lVar6 + CONCAT44(uVar4,uVar3);
    *param_3 = (int)lVar6;
    return lVar6;
  }
  *param_3 = uVar3;
  return CONCAT44(uVar4,uVar3);
}



/* Entry: 00677990; end: 006779e3;  */

long FUN_00677990(long param_1)

{
  long extraout_x8;
  
  FUN_00678470();
  func_0x0067fdd4();
  return param_1 + extraout_x8;
}



/* Entry: 006779e4; end: 00677a43;  */

void FUN_006779e4(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  FUN_0054d5a8();
  plVar2 = param_1;
  func_0x0054d67c();
  func_0x0054d6a8();
  puVar4 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x0054d6b0();
    param_1 = param_1 + (int)plVar2;
    puVar4 = unaff_x25 + (int)plVar2;
  }
  lVar3 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, puVar4 < unaff_x25 + unaff_x26; puVar4 = puVar4 + 1) {
    plVar2 = (long *)lVar3;
    FUN_0067f194(lVar3,*puVar4);
    *param_1 = (long)plVar2;
    param_1 = param_1 + 1;
  }
  func_0x0054d60c();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 00677a44; end: 00677aeb;  */

void FUN_00677a44(uint param_1)

{
  char in_NG;
  char in_OV;
  
  func_0x006805a8();
  do {
    func_0x006807f4();
    if (in_NG != in_OV) break;
    func_0x0067ff98();
    FUN_00677fec();
  } while ((param_1 & 1) != 0);
  func_0x006807e8();
  return;
}



/* Entry: 00677aec; end: 00677b1f;  */

long FUN_00677aec(long param_1)

{
  func_0x006802c0();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_006789b4();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 00677b20; end: 00677b23;  */

long FUN_00677b20(long param_1)

{
  func_0x006802c0();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_006789b4();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 00677b24; end: 00677b37;  */

void FUN_00677b24(void)

{
  FUN_00677aec();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00677b38; end: 00677b43;  */

void FUN_00677b38(void)

{
  Hint_Prefetch(0xb26748,0,0,0);
  Hint_Prefetch(PTR_DAT_00b26748,0,0,0);
  return;
}



/* Entry: 00677b44; end: 00677b6b;  */

void FUN_00677b44(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_00678a34();
  }
  return;
}



/* Entry: 00677b6c; end: 00677c0f;  */

void FUN_00677b6c(undefined8 param_1,long *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  long unaff_x22;
  
  func_0x00680074();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar3 = *(ulong **)(unaff_x21 + 0x18);
      param_2 = *(long **)(unaff_x20 + 0x18);
      if (puVar3 == (ulong *)0x0) {
        FUN_0067f564();
        *(ulong **)(unaff_x21 + 0x18) = puVar2;
      }
      else {
        FUN_00678a80();
        puVar2 = puVar3;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x20) = *(undefined4 *)(unaff_x20 + 0x20);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(unaff_x20 + 0x24);
    }
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00680064();
  if ((*puVar2 & 1) == 0) {
    func_0x00699010();
  }
  if (0 < (int)((ulong)(param_2[1] - *param_2) >> 4)) {
    func_0x006a5744();
    for (lVar4 = 0; unaff_x22 * 0x10 - lVar4 != 0; lVar4 = lVar4 + 0x10) {
      func_0x006a57c0();
      func_0x006a580c();
    }
  }
  return;
}



/* Entry: 00677c10; end: 00677cbb;  */

void FUN_00677c10(void)

{
  ulong extraout_x8;
  long lVar1;
  ulong *unaff_x19;
  ulong unaff_x20;
  long lVar2;
  
  func_0x0068043c();
  if ((unaff_x20 & 1) != 0) {
    func_0x00677c54(unaff_x19[3]);
  }
  if ((unaff_x20 & 6) != 0) {
    unaff_x19[4] = 0;
  }
  func_0x00680478();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00699010();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (*unaff_x19 != unaff_x19[1]) {
    lVar1 = (long)((unaff_x19[1] - *unaff_x19) * 0x10000000) >> 0x20;
    lVar2 = lVar1 + 1;
    lVar1 = lVar1 * 0x10;
    do {
      lVar1 = lVar1 + -0x10;
      FUN_006a4904(*unaff_x19 + lVar1);
      lVar2 = lVar2 + -1;
    } while (1 < lVar2);
    unaff_x19[1] = *unaff_x19;
    return;
  }
  return;
}



/* Entry: 00677cbc; end: 00677d37;  */

long * FUN_00677cbc(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  func_0x00680024();
  uVar7 = *(uint *)(param_1 + 2);
  if ((uVar7 >> 1 & 1) != 0) {
    param_2 = (long *)(ulong)*(uint *)(unaff_x20 + 0x20);
    func_0x0068059c();
    func_0x004971e4();
    param_4 = param_1;
  }
  if ((uVar7 >> 2 & 1) != 0) {
    param_2 = (long *)(ulong)*(uint *)(unaff_x20 + 0x24);
    func_0x0068059c();
    FUN_0048c628();
    param_4 = param_1;
  }
  if ((uVar7 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x18);
    FUN_00680228();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0067fe84();
  lVar10 = 0;
  plVar3 = param_1;
  do {
    if ((int)((ulong)(param_1[1] - *param_1) >> 4) <= lVar10) {
      return param_2;
    }
    piVar1 = (int *)(*param_1 + lVar10 * 0x10);
    func_0x006aad90();
    plVar6 = plVar3;
    param_2 = plVar3;
    switch(piVar1[1]) {
    case 0:
      plVar6 = *(long **)(piVar1 + 2);
      uVar4 = (ulong)(uint)(*piVar1 << 3);
      func_0x006aac48(uVar4);
      func_0x00487cf0(plVar6,uVar4);
      param_2 = plVar6;
      break;
    case 1:
      iVar2 = piVar1[2];
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 5);
      func_0x006aac48();
      *(int *)plVar6 = iVar2;
      param_2 = (long *)((long)plVar6 + 4);
      break;
    case 2:
      lVar8 = *(long *)(piVar1 + 2);
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 1);
      func_0x006aac48();
      *plVar6 = lVar8;
      param_2 = plVar6 + 1;
      break;
    case 3:
      iVar2 = *piVar1;
      lVar8 = *(long *)(piVar1 + 2);
      lVar9 = (long)*(char *)(lVar8 + 0x17);
      if ((-1 < lVar9) || (lVar9 = *(long *)(lVar8 + 8), lVar9 < 0x80)) {
        lVar11 = *param_3;
        uVar7 = iVar2 << 3;
        plVar6 = (long *)(ulong)uVar7;
        func_0x00487c84();
        if (lVar9 <= lVar11 + ~((long)plVar3 + (long)(int)plVar6) + 0x10) {
          lVar8 = (long)plVar3 + 2;
          for (uVar7 = uVar7 | 2; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
            *(byte *)(lVar8 + -2) = (byte)uVar7 | 0x80;
            lVar8 = lVar8 + 1;
          }
          *(byte *)(lVar8 + -2) = (byte)uVar7;
          *(char *)(lVar8 + -1) = (char)lVar9;
          func_0x006aaec0();
          _memcpy();
          param_2 = (long *)(lVar8 + lVar9);
          break;
        }
      }
      plVar6 = param_3;
      func_0x0054f030(param_3,iVar2,lVar8,plVar3);
      param_2 = plVar6;
      break;
    case 4:
      uVar4 = (ulong)(*piVar1 << 3 | 3);
      func_0x006aac48(uVar4);
      uVar5 = *(undefined8 *)(piVar1 + 2);
      FUN_006a5a40(uVar5,uVar4,param_3);
      func_0x006aad84();
      plVar6 = (long *)(ulong)(*piVar1 << 3 | 4);
      func_0x00487cbc(plVar6,uVar5);
      param_2 = plVar6;
    }
    lVar10 = lVar10 + 1;
    plVar3 = plVar6;
  } while( true );
}



/* Entry: 00677d38; end: 00677da7;  */

long FUN_00677d38(long param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x19;
  uint unaff_w20;
  
  func_0x0068043c();
  if ((unaff_w20 & 7) == 0) {
    lVar1 = 0;
  }
  else {
    if ((unaff_w20 & 1) == 0) {
      lVar1 = 0;
    }
    else {
      param_1 = *(long *)(unaff_x19 + 0x18);
      func_0x00678c24();
      func_0x0067fdd4();
      lVar1 = param_1 + extraout_x8 + 1;
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x0068097c(0xfffffff7);
      lVar1 = extraout_x9 + lVar1;
    }
    if ((unaff_w20 >> 2 & 1) != 0) {
      func_0x0068080c();
      lVar1 = extraout_x8_00 + lVar1;
    }
  }
  func_0x00680394();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *param_3 = (int)lVar1;
    return lVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_006a480c();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_006a5cc8();
  *param_3 = (int)(param_1 + lVar1);
  return param_1 + lVar1;
}



/* Entry: 00677da8; end: 00677dcb;  */

undefined8 FUN_00677da8(undefined8 param_1)

{
  func_0x006802c0();
  return param_1;
}



/* Entry: 00677dcc; end: 00677dcf;  */

undefined8 FUN_00677dcc(undefined8 param_1)

{
  func_0x006802c0();
  return param_1;
}



/* Entry: 00677dd0; end: 00677de3;  */

void FUN_00677dd0(void)

{
  FUN_00677da8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00677de4; end: 00677e53;  */

void FUN_00677de4(void)

{
  Hint_Prefetch(0xb26848,0,0,0);
  Hint_Prefetch(PTR_DAT_00b26848,0,0,0);
  return;
}


