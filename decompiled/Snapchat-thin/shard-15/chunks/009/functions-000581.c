/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bd1d10c; end: 10bd1d187;  */

undefined1  [16] FUN_10bd1d10c(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  int extraout_w9;
  long extraout_x9;
  int extraout_w10;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_30;
  if (param_1 != param_2) {
    func_0x00010bd24d2c();
    if (extraout_w9 != 0) {
      func_0x00010bd25304();
    }
    func_0x00010bd24e4c();
    lStack_28 = extraout_x8;
    if (extraout_w10 != 0) {
      lStack_28 = *(long *)(extraout_x8 + -8);
    }
    if (extraout_x9 == lStack_28) {
      func_0x00010bd24ee4();
      puVar1 = param_1 + 0x10;
      puVar4 = param_2;
      for (; param_1 != puVar1; param_1 = param_1 + 1) {
        uVar2 = *param_1;
        *param_1 = *puVar4;
        *puVar4 = uVar2;
        param_2 = param_2 + 1;
        puVar4 = puVar4 + 1;
      }
      auVar5._8_8_ = param_2;
      auVar5._0_8_ = puVar1;
      return auVar5;
    }
    uStack_30 = 0;
    func_0x00010bd25310();
    func_0x00010b4c0d98();
    func_0x00010bd24ee4();
    func_0x00010bd23ffc();
    func_0x00010bd252f8();
    func_0x00010bd24010();
    func_0x00010b4c3c80(&uStack_30);
    param_1 = (undefined1 *)puVar3;
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 10bd1d188; end: 10bd1d217;  */

ulong * FUN_10bd1d188(ulong *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 **ppuVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined1 **ppuVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  uint uVar14;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  long extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  ulong *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar15;
  code *pcVar16;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  func_0x00010bd24b74();
  if (!(bool)in_ZR) {
    func_0x00010bd24e70();
LAB_10bd1d214:
    func_0x00010bd24e38();
    if (*(int *)((long)param_1 + 0x3c) != -1) {
      pcStack_38 = FUN_10bd1d218;
      uVar12 = param_1[1];
      puStack_40 = &stack0xfffffffffffffff0;
      func_0x00010bd252a8();
      return (ulong *)(ulong)(*(uint *)(uVar12 + (long)(int)param_1 * 4) >> 0x1f);
    }
    return (ulong *)0x0;
  }
  func_0x00010bd24f7c();
  if ((bool)in_CY) {
    func_0x00010bd24f14();
    goto LAB_10bd1d214;
  }
  if ((extraout_w8_01 >> 3 & 1) != 0) {
    func_0x00010bd250c0();
    param_2 = param_2 + extraout_x8_04;
    func_0x00010b4bf3a0();
    if (param_2 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = *(byte *)(param_2 + 10) ^ 1;
    }
    return (ulong *)(ulong)(uVar14 & 1);
  }
  func_0x00010bd24f2c();
  if (param_1 != (ulong *)0x0) {
    func_0x00010bd24c14();
    func_0x00010bd25788(*(undefined8 *)(param_3 + 0x28));
    return (ulong *)(ulong)(*(int *)(param_2 + (extraout_x8_00 & 0xffffffff)) ==
                           *(int *)(param_3 + 4));
  }
  func_0x00010bd24c14();
  ppuVar7 = &puStack_40;
  puVar15 = &stack0xfffffffffffffff0;
  func_0x00010bd24fac();
  puVar9 = param_1;
  func_0x00010bd24e7c();
  func_0x00010bd1d3e8();
  if ((int)puVar9 != -1) {
    uVar12 = param_1[4];
    func_0x00010bd25240();
    func_0x00010bd1d3e8();
    uVar14 = *(uint *)(unaff_x20 + (uint)uVar12 + ((ulong)puVar9 >> 5 & 0x7ffffff) * 4) >>
             (ulong)((uint)puVar9 & 0x1f) & 1;
    goto LAB_10bd1c9d4;
  }
  func_0x00010bd24e30();
  if ((int)puVar9 == 10) {
    if (unaff_x20 == param_1[1]) {
      uVar14 = 0;
      goto LAB_10bd1c9d4;
    }
    func_0x00010bd24c14();
    FUN_10bd1be78();
    goto LAB_10bd1c9c8;
  }
  func_0x00010bd24e30();
  uVar14 = (int)puVar9 - 1;
  uVar4 = 7 < uVar14;
  uVar5 = uVar14 == 8;
  switch(uVar14) {
  case 0:
  case 7:
    func_0x00010bd24c14();
    func_0x00010bd20f0c();
    break;
  case 1:
    func_0x00010bd24c14();
    func_0x00010bd20f48();
    goto LAB_10bd1c9c8;
  case 2:
  case 5:
    func_0x00010bd24c14();
    func_0x00010bd20f84();
    break;
  case 3:
  case 4:
    func_0x00010bd24c14();
    func_0x00010bd20fc0();
LAB_10bd1c9c8:
    uVar12 = *puVar9;
code_r0x00010bd1c9cc:
    bVar6 = uVar12 == 0;
    goto code_r0x00010bd1c9d0;
  case 6:
    func_0x00010bd24c14();
    func_0x00010bd20ed0();
    uVar14 = (uint)(byte)*puVar9;
    goto LAB_10bd1c9d4;
  case 8:
    func_0x00010bd25454();
    if ((int)puVar9 == 1) {
      func_0x00010bd24f2c();
      if (puVar9 == (ulong *)0x0) {
        func_0x00010bd25240();
        FUN_10bd1d218();
        if ((int)puVar9 == 0) {
          func_0x00010bd25240();
          FUN_10bd20d94();
          goto code_r0x00010bd1ca18;
        }
        func_0x00010bd25240();
        FUN_10bd20d94();
        func_0x00010bd25074();
        if ((extraout_w8 >> 5 & 1) != 0) {
          puVar9 = (ulong *)*puVar9;
        }
      }
      else {
        func_0x00010bd25240();
        FUN_10bd20e50();
code_r0x00010bd1ca18:
        puVar9 = (ulong *)(unaff_x20 + ((ulong)puVar9 & 0xffffffff));
      }
      uVar14 = (uint)puVar9;
      func_0x00010b4d1b04();
      uVar14 = uVar14 ^ 1;
      goto LAB_10bd1c9d4;
    }
    func_0x00010bd25240();
    func_0x00010bd21e40();
    if ((int)puVar9 == 0) {
      func_0x00010bd24c14();
      FUN_10bd23e3c();
      uVar12 = (ulong)*(char *)((*puVar9 & 0xfffffffffffffffc) + 0x17);
      if ((long)uVar12 < 0) {
        uVar12 = *(ulong *)((*puVar9 & 0xfffffffffffffffc) + 8);
      }
    }
    else {
      func_0x00010bd24c14();
      FUN_10bd23da0();
      uVar12 = puVar9[1];
      if (-1 < (char)*(byte *)((long)puVar9 + 0x17)) {
        uVar12 = (ulong)*(byte *)((long)puVar9 + 0x17);
      }
    }
    goto code_r0x00010bd1c9cc;
  default:
    func_0x00010bd25258();
    FUN_10bdb2a00(&puStack_40);
    puVar10 = &UNK_10f835557;
    func_0x00010b4c3038();
    pcVar16 = FUN_10bd1cac8;
    func_0x00010bd253b0();
    ppuVar2 = &puStack_40;
    while( true ) {
      *(undefined8 *)((long)ppuVar2 + -0x50) = unaff_d9;
      *(undefined8 *)((long)ppuVar2 + -0x48) = unaff_d8;
      *(undefined8 *)((long)ppuVar2 + -0x40) = unaff_x24;
      *(undefined8 *)((long)ppuVar2 + -0x38) = unaff_x23;
      *(undefined8 *)((long)ppuVar2 + -0x30) = unaff_x22;
      *(ulong **)((long)ppuVar2 + -0x28) = param_1;
      *(ulong *)((long)ppuVar2 + -0x20) = unaff_x20;
      *(ulong **)((long)ppuVar2 + -0x18) = unaff_x19;
      *(undefined1 **)((long)ppuVar2 + -0x10) = puVar15;
      *(code **)((long)ppuVar2 + -8) = pcVar16;
      func_0x00010bd24b74();
      if (!(bool)uVar5) {
        func_0x00010bd24e70();
        func_0x00010bd24e38();
        *(ulong *)((long)ppuVar2 + -0x70) = unaff_x20;
        *(ulong **)((long)ppuVar2 + -0x68) = unaff_x19;
        *(undefined1 **)((long)ppuVar2 + -0x60) = (undefined1 *)((long)ppuVar2 + -0x10);
        *(code **)((long)ppuVar2 + -0x58) = FUN_10bd1cd90;
        func_0x00010bd24f94();
        func_0x00010bd24e7c();
        func_0x00010bd1d3e8();
        if ((int)ppuVar7 != -1) {
          func_0x00010bd25418();
          *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8_00;
        }
        return (ulong *)ppuVar7;
      }
      if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) != 0) {
        func_0x00010bd250c0();
        puVar9 = (ulong *)(puVar10 + extraout_x8_01);
        uVar1 = *(undefined8 *)((long)ppuVar2 + -0x10);
        uVar13 = *(undefined8 *)((long)ppuVar2 + -8);
        func_0x00010bd25668();
        *(undefined8 *)((long)ppuVar2 + -0x60) = uVar1;
        *(undefined8 *)((long)ppuVar2 + -0x58) = uVar13;
        func_0x00010b4bf3a0();
        if (puVar9 == (ulong *)0x0) {
          return (ulong *)0x0;
        }
        *(undefined **)((long)ppuVar2 + -0x70) = puVar10;
        *(ulong **)((long)ppuVar2 + -0x68) = unaff_x19;
        *(undefined8 *)((long)ppuVar2 + -0x60) = *(undefined8 *)((long)ppuVar2 + -0x60);
        *(undefined8 *)((long)ppuVar2 + -0x58) = *(undefined8 *)((long)ppuVar2 + -0x58);
        bVar3 = *(char *)((long)puVar9 + 9) != '\0';
        bVar6 = *(char *)((long)puVar9 + 9) == '\x01';
        if (bVar6) {
          func_0x00010b4c5260((char)puVar9[1]);
          puVar8 = puVar9;
          if (!bVar3 || bVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010b4bf4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&UNK_10b4bf4f4 + (ulong)(byte)(&UNK_10e5b4882)[extraout_x8] * 4))();
            return puVar9;
          }
        }
        else {
          puVar8 = puVar9;
          if ((*(byte *)((long)puVar9 + 10) & 1) == 0) {
            if (*(int *)(&UNK_10e5b4ac0 + (ulong)(byte)puVar9[1] * 4) == 10) {
              puVar8 = (ulong *)*puVar9;
              if ((*(byte *)((long)puVar9 + 10) >> 4 & 1) == 0) {
                pcVar16 = *(code **)(*puVar8 + 0x18);
              }
              else {
                pcVar16 = *(code **)(*puVar8 + 0x88);
              }
              (*pcVar16)();
            }
            else if (*(int *)(&UNK_10e5b4ac0 + (ulong)(byte)puVar9[1] * 4) == 9) {
              puVar8 = (ulong *)*puVar9;
              func_0x000107c27fa8(puVar8);
            }
            *(byte *)((long)puVar9 + 10) = *(byte *)((long)puVar9 + 10) & 0xf0 | 1;
          }
        }
        return puVar8;
      }
      if ((*(byte *)((long)unaff_x19 + 1) >> 5 & 1) != 0) break;
      puVar9 = unaff_x19;
      FUN_10bcddbd4();
      if (puVar9 == (ulong *)0x0) {
        func_0x00010bd24c14();
        FUN_10bd1c8f0();
        if ((int)puVar9 != 0) {
          func_0x00010bd24c14();
          func_0x00010bd1d3b4();
          func_0x00010bd24e30();
          func_0x00010bd2518c();
          if (!(bool)uVar4 || (bool)uVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bd1cb9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((ulong)(byte)(&UNK_10e60b835)[extraout_x8_03] * 4 + 0x10bd1cba0))();
            return puVar9;
          }
        }
        goto LAB_10bd1cd6c;
      }
      func_0x00010bd24ba4();
      if ((int)puVar9 == 0) goto LAB_10bd1cd6c;
      if ((*(byte *)((long)unaff_x19 + 1) >> 4 & 1) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = unaff_x19[5];
      }
      uVar1 = *(undefined8 *)((long)ppuVar2 + -0x10);
      uVar13 = *(undefined8 *)((long)ppuVar2 + -8);
      ppuVar7 = (undefined1 **)param_1;
      puVar11 = puVar10;
      func_0x00010bd25668();
      *(undefined8 *)((long)ppuVar2 + -0x80) = unaff_x22;
      *(ulong **)((long)ppuVar2 + -0x78) = param_1;
      *(undefined **)((long)ppuVar2 + -0x70) = puVar10;
      *(ulong **)((long)ppuVar2 + -0x68) = unaff_x19;
      *(undefined8 *)((long)ppuVar2 + -0x60) = uVar1;
      *(undefined8 *)((long)ppuVar2 + -0x58) = uVar13;
      uVar4 = *(int *)(uVar12 + 4) != 0;
      uVar5 = *(int *)(uVar12 + 4) == 1;
      if ((!(bool)uVar5) || ((*(byte *)(*(long *)(uVar12 + 0x30) + 1) >> 1 & 1) == 0)) {
        puVar9 = (ulong *)ppuVar7;
        func_0x00010bd252d8();
        if (*(int *)(puVar11 + (extraout_x8_05 & 0xffffffff)) != 0) {
          puVar8 = (ulong *)*ppuVar7;
          FUN_10bcee2d0();
          uVar12 = *(ulong *)(puVar11 + 8);
          puVar9 = puVar8;
          if ((uVar12 & 1) != 0) {
            func_0x00010bd25400();
            uVar12 = extraout_x8_07;
          }
          if (uVar12 == 0) {
            func_0x00010bd255ac();
            if ((int)puVar9 == 10) {
              func_0x00010bd24e64();
              func_0x00010bd20e14();
              puVar9 = (ulong *)*puVar9;
              if (puVar9 != (ulong *)0x0) {
                func_0x00010bd24eb8();
              }
            }
            else if ((int)puVar9 == 9) {
              FUN_10bd1bdfc();
              if ((int)puVar8 == 1) {
                func_0x00010bd24e64();
                func_0x00010bd20e14();
                puVar9 = (ulong *)*puVar8;
                if (puVar9 != (ulong *)0x0) {
                  func_0x000107c34fe8();
                }
                __ZdlPv();
              }
              else {
                func_0x00010bd24e64();
                FUN_10bd1f51c();
                func_0x000107c30258();
                puVar9 = puVar8;
              }
            }
          }
          func_0x00010bd252d8();
          *(undefined4 *)(puVar11 + (extraout_x8_06 & 0xffffffff)) = 0;
        }
        return puVar9;
      }
      func_0x00010bd24e64();
      puVar15 = *(undefined1 **)((long)ppuVar2 + -0x60);
      pcVar16 = *(code **)((long)ppuVar2 + -0x58);
      unaff_x20 = *(ulong *)((long)ppuVar2 + -0x70);
      unaff_x19 = *(ulong **)((long)ppuVar2 + -0x68);
      unaff_x22 = *(undefined8 *)((long)ppuVar2 + -0x80);
      param_1 = *(ulong **)((long)ppuVar2 + -0x78);
      ppuVar2 = (undefined1 **)((long)ppuVar2 + -0x50);
      puVar10 = puVar11;
    }
    func_0x00010b91adc8();
    func_0x00010bd2518c();
    puVar9 = unaff_x19;
    if (!(bool)uVar4 || (bool)uVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bd1cb58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10e60b82b)[extraout_x8_02] * 4 + 0x10bd1cb5c))();
      return unaff_x19;
    }
LAB_10bd1cd6c:
    func_0x00010bd25668();
    return puVar9;
  }
  bVar6 = (int)*puVar9 == 0;
code_r0x00010bd1c9d0:
  uVar14 = (uint)!bVar6;
LAB_10bd1c9d4:
  return (ulong *)(ulong)(uVar14 & 1);
}



/* Entry: 10bd1d218; end: 10bd1d24f;  */

uint FUN_10bd1d218(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x3c) != -1) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bd252a8();
    return *(uint *)(lVar1 + (long)(int)param_1 * 4) >> 0x1f;
  }
  return 0;
}



/* Entry: 10bd1d250; end: 10bd1d3b3;  */

void FUN_10bd1d250(int param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  uint extraout_w8;
  uint extraout_w8_00;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar4;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  undefined1 auStack_40 [16];
  
  func_0x00010bd24b74();
  if ((bool)in_ZR) {
    func_0x00010bd24f88();
    if ((bool)in_CY && !(bool)in_ZR) {
      if ((extraout_w8 >> 3 & 1) != 0) {
        func_0x00010bd250c0();
        param_2 = param_2 + extraout_x8_02;
        func_0x00010b4bf3a0();
        if (param_2 == 0) {
          return;
        }
        puVar3 = (undefined8 *)&stack0xffffffffffffffe0;
        func_0x00010b4c5260(*(undefined1 *)(param_2 + 8));
        if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b4bf448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_10b4bf44c + (ulong)(byte)(&UNK_10e5b4878)[extraout_x8] * 4))();
          return;
        }
        func_0x00010b4c52dc();
        FUN_10bdb2a00(&stack0xffffffffffffffe0);
        func_0x00010b22d104(&stack0xffffffffffffffe0,&UNK_10f773dde);
        func_0x00010b4c52cc();
        func_0x00010b4bf3a0();
        if (puVar3 == (undefined8 *)0x0) {
          return;
        }
        bVar1 = *(char *)((long)puVar3 + 9) != '\0';
        bVar2 = *(char *)((long)puVar3 + 9) == '\x01';
        if (bVar2) {
          func_0x00010b4c5260(*(undefined1 *)(puVar3 + 1));
          if (!bVar1 || bVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010b4bf4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&UNK_10b4bf4f4 + (ulong)(byte)(&UNK_10e5b4882)[extraout_x8_00] * 4))();
            return;
          }
        }
        else if ((*(byte *)((long)puVar3 + 10) & 1) == 0) {
          if (*(int *)(&UNK_10e5b4ac0 + (ulong)*(byte *)(puVar3 + 1) * 4) == 10) {
            if ((*(byte *)((long)puVar3 + 10) >> 4 & 1) == 0) {
              pcVar4 = *(code **)(*(long *)*puVar3 + 0x18);
            }
            else {
              pcVar4 = *(code **)(*(long *)*puVar3 + 0x88);
            }
            (*pcVar4)();
          }
          else if (*(int *)(&UNK_10e5b4ac0 + (ulong)*(byte *)(puVar3 + 1) * 4) == 9) {
            func_0x000107c27fa8(*puVar3);
          }
          *(byte *)((long)puVar3 + 10) = *(byte *)((long)puVar3 + 10) & 0xf0 | 1;
        }
        return;
      }
      func_0x00010bd24e30();
      func_0x00010bd2518c();
      if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bd1d29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10e60b83f)[extraout_x8_01] * 4 + 0x10bd1d2a0))();
        return;
      }
      func_0x00010bd25258();
      FUN_10bdb2a00(auStack_40);
      param_1 = (int)auStack_40;
      func_0x00010b22d104(auStack_40,&UNK_10f8351f9);
      goto LAB_10bd1d3b0;
    }
    func_0x00010bd24f20();
  }
  else {
    func_0x00010bd24e70();
  }
  func_0x00010bd24e38();
LAB_10bd1d3b0:
  func_0x00010bd253b0();
  func_0x00010bd24f94();
  func_0x00010bd24e7c();
  func_0x00010bd1d3e8();
  if (param_1 != -1) {
    func_0x00010bd25418();
    *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) =
         extraout_w11 & (extraout_w8_00 ^ 0xffffffff);
  }
  return;
}



/* Entry: 10bd1d3b4; end: 10bd1d41b;  */

void FUN_10bd1d3b4(int param_1)

{
  uint extraout_w8;
  long extraout_x9;
  uint extraout_w10;
  uint extraout_w11;
  
  func_0x00010bd24f94();
  func_0x00010bd24e7c();
  func_0x00010bd1d3e8();
  if (param_1 != -1) {
    func_0x00010bd25418();
    *(uint *)(extraout_x9 + (ulong)extraout_w10 * 4) = extraout_w11 & (extraout_w8 ^ 0xffffffff);
  }
  return;
}



/* Entry: 10bd1d41c; end: 10bd1d42f;  */

void FUN_10bd1d41c(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10bd1d430; end: 10bd1d503;  */

void FUN_10bd1d430(ulong *param_1,long param_2)

{
  char cVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  uint extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  func_0x00010bd24b74();
  if ((bool)in_ZR) {
    func_0x00010bd24f88();
    if ((bool)in_CY && !(bool)in_ZR) {
      if ((extraout_w8 >> 3 & 1) == 0) {
        func_0x00010bd24e30();
        func_0x00010bd2518c();
        if ((bool)in_CY && !(bool)in_ZR) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bd1d478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10e60b849)[extraout_x8_00] * 4 + 0x10bd1d47c))();
        return;
      }
      func_0x00010bd250c0();
      param_2 = param_2 + extraout_x8_01;
      func_0x00010b4bf3a0();
      if (param_2 != 0) {
        func_0x00010b4c5260(*(undefined1 *)(param_2 + 8));
        if ((bool)in_CY && !(bool)in_ZR) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00010b4c0364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_10b4c0368 + (ulong)(byte)(&UNK_10e5b4896)[extraout_x8] * 4))();
        return;
      }
      func_0x00010b4c5038();
      func_0x00010b4c52d4();
      func_0x00010b4c5068();
      func_0x00010b4c52cc();
      puVar3 = *(undefined8 **)(param_2 + 0x10);
      if ((long)*(short *)(param_2 + 10) < 0) {
        lVar4 = puVar3[1];
        lVar2 = *(long *)*puVar3;
        cVar1 = *(char *)(lVar4 + 10);
        while (lVar2 != lVar4 || cVar1 != '\0') {
          func_0x00010b4bf4b4(lVar2 + 0x18);
          func_0x00010b4c5688();
        }
      }
      else {
        for (lVar4 = (long)*(short *)(param_2 + 10) << 5; lVar4 != 0; lVar4 = lVar4 + -0x20) {
          func_0x00010b4bf4b4(puVar3 + 1);
          puVar3 = puVar3 + 4;
        }
      }
      return;
    }
    func_0x00010bd24f20();
  }
  else {
    func_0x00010bd24e70();
  }
  func_0x00010bd24e38();
  lVar4 = (long)(int)param_1[1] + -1;
  *(int *)(param_1 + 1) = (int)lVar4;
  if ((*param_1 & 1) != 0) {
    param_1 = (ulong *)(*param_1 + lVar4 * 8 + 7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bd1d530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x18))();
  return;
}



/* Entry: 10bd1d504; end: 10bd1d533;  */

void FUN_10bd1d504(ulong *param_1)

{
  long lVar1;
  
  lVar1 = (long)(int)param_1[1] + -1;
  *(int *)(param_1 + 1) = (int)lVar1;
  if ((*param_1 & 1) != 0) {
    param_1 = (ulong *)(*param_1 + lVar1 * 8 + 7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bd1d530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x18))();
  return;
}



/* Entry: 10bd1d534; end: 10bd1d54b;  */

uint FUN_10bd1d534(uint param_1)

{
  func_0x00010bcf1650();
  return param_1 ^ 1;
}



/* Entry: 10bd1d54c; end: 10bd1d75b;  */

void FUN_10bd1d54c(long *param_1,long param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long *unaff_x19;
  long unaff_x20;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  param_3[1] = *param_3;
  if (param_2 == param_1[1]) {
    return;
  }
  func_0x00010bd24fac();
  uVar7 = *(uint *)(param_1 + 4);
  lVar5 = param_1[3];
  FUN_10bce01e8(param_3,(long)*(int *)(*param_1 + 4));
  lVar10 = 0;
  uVar6 = 0;
  lVar3 = param_1[0xc];
  for (lVar11 = 0; lVar11 <= (int)lVar3; lVar11 = lVar11 + 1) {
    lVar9 = *(long *)(*param_1 + 0x38);
    bVar1 = *(byte *)(lVar9 + lVar10 + 1);
    if ((bVar1 >> 5 & 1) == 0) {
      if ((bVar1 >> 4 & 1) == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = *(long *)(lVar9 + lVar10 + 0x28);
      }
      func_0x00010bd25198();
      if (param_3 == (long *)0x0) {
        if ((uVar7 == 0xffffffff) || (uVar4 = *(uint *)(lVar5 + lVar11 * 4), uVar4 == 0xffffffff)) {
          param_3 = param_1;
          FUN_10bd1c8f0();
          uVar4 = (uint)param_3;
        }
        else {
          uVar4 = *(uint *)(param_2 + (ulong)uVar7 + (ulong)(uVar4 >> 5) * 4) >>
                  (ulong)(uVar4 & 0x1f) & 1;
        }
        if (uVar4 != 0) goto LAB_10bd1d600;
      }
      else {
        uVar2 = (lVar8 - *(long *)(*(long *)(lVar8 + 0x10) + 0x40)) / 0x38;
        if ((ulong)*(uint *)(unaff_x20 + (ulong)*(uint *)((long)param_1 + 0x2c) +
                            (-(uVar2 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar2 & 0xffffffff) << 2))
            == (long)*(int *)(lVar9 + lVar10 + 4)) {
LAB_10bd1d600:
          uVar4 = *(uint *)(lVar9 + lVar10 + 4);
          if (uVar4 < uVar6) {
            uVar4 = 0xffffffff;
          }
          param_3 = unaff_x19;
          FUN_10bce036c();
          uVar6 = uVar4;
        }
      }
    }
    else {
      param_3 = param_1;
      FUN_10bd1d250();
      if (0 < (int)param_3) goto LAB_10bd1d600;
    }
    lVar10 = lVar10 + 0x58;
  }
  if (uVar6 == 0xffffffff) {
    FUN_10bd1d75c(*unaff_x19,unaff_x19[1]);
    lVar11 = unaff_x19[1];
    uVar6 = *(uint *)(*(long *)(lVar11 + -8) + 4);
  }
  else {
    lVar11 = unaff_x19[1];
  }
  lVar10 = *unaff_x19;
  uVar7 = uVar6;
  if (*(uint *)(param_1 + 5) != 0xffffffff) {
    FUN_10bd18b70(unaff_x20 + (ulong)*(uint *)(param_1 + 5),*param_1,param_1[10]);
    if ((unaff_x19[1] - *unaff_x19 != lVar11 - lVar10) &&
       (uVar7 = *(uint *)(*(long *)(*unaff_x19 + (lVar11 - lVar10)) + 4), uVar7 < uVar6))
    goto LAB_10bd1d738;
  }
  if (uVar7 != 0xffffffff) {
    return;
  }
LAB_10bd1d738:
  FUN_10bd1d75c();
  return;
}



/* Entry: 10bd1d75c; end: 10bd1d783;  */

void FUN_10bd1d75c(long param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  undefined8 extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  int iVar14;
  long extraout_x9;
  ulong uVar15;
  long extraout_x9_00;
  undefined8 extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  undefined8 extraout_x9_05;
  long extraout_x9_06;
  long extraout_x9_07;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x10_01;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar23;
  undefined8 unaff_x30;
  
  if (param_1 == param_2) {
    return;
  }
  puVar11 = (undefined8 *)(LZCOUNT(param_2 - param_1 >> 3) << 1 ^ 0x7e);
  bVar5 = true;
  func_0x00010bd24f94();
  do {
    plVar10 = unaff_x19 + -1;
LAB_10bd21ef8:
    uVar12 = (long)unaff_x19 - (long)unaff_x20 >> 3;
    cVar6 = SBORROW8(uVar12,5);
    cVar7 = (long)(uVar12 - 5) < 0;
    switch(uVar12) {
    case 0:
    case 1:
      goto LAB_10bd224b0;
    case 2:
      func_0x00010bd24e94(unaff_x19[-1]);
      if (cVar7 != cVar6) {
        *unaff_x20 = extraout_x8_04;
        unaff_x19[-1] = extraout_x9;
      }
      goto LAB_10bd224b0;
    case 3:
      plVar8 = unaff_x20 + 1;
      func_0x00010bd25770();
      lVar19 = *plVar8;
      lVar13 = *unaff_x20;
      iVar14 = *(int *)(lVar19 + 4);
      iVar2 = *(int *)(lVar13 + 4);
      lVar18 = *plVar10;
      iVar3 = *(int *)(lVar18 + 4);
      if (iVar14 < iVar2) {
        if (iVar3 < iVar14) {
          *unaff_x20 = lVar18;
        }
        else {
          *unaff_x20 = lVar19;
          *plVar8 = lVar13;
          if (iVar2 <= *(int *)(*plVar10 + 4)) {
            return;
          }
          *plVar8 = *plVar10;
        }
        *plVar10 = lVar13;
      }
      else {
        cVar6 = SBORROW4(iVar3,iVar14);
        cVar7 = iVar3 - iVar14 < 0;
        if (iVar3 < iVar14) {
          *plVar8 = lVar18;
          *plVar10 = lVar19;
          func_0x00010bd24e94(*plVar8);
          if (cVar7 != cVar6) {
            *unaff_x20 = extraout_x8_05;
            *plVar8 = extraout_x9_00;
            return;
          }
        }
      }
      return;
    case 4:
      func_0x00010bd25770(unaff_x20,unaff_x20 + 1,unaff_x20 + 2,plVar10);
      func_0x00010bd24f54();
      FUN_10bd224c4();
      func_0x00010bd24e94(*puVar11);
      if (cVar7 != cVar6) {
        *plVar10 = extraout_x8_06;
        *puVar11 = extraout_x9_01;
        func_0x00010bd24e94(*plVar10);
        if (cVar7 != cVar6) {
          *unaff_x19 = extraout_x8_07;
          *plVar10 = extraout_x9_02;
          func_0x00010bd24e94(*unaff_x19);
          if (cVar7 != cVar6) {
            *unaff_x20 = extraout_x8_08;
            *unaff_x19 = extraout_x9_03;
          }
        }
      }
      return;
    case 5:
      plVar8 = plVar10;
      func_0x00010bd25770(unaff_x20,unaff_x20 + 1,unaff_x20 + 2,unaff_x20 + 3);
      func_0x00010bd24f54();
      FUN_10bd2254c();
      func_0x00010bd24e94(*plVar8);
      if (cVar7 != cVar6) {
        *puVar11 = extraout_x8_09;
        *plVar8 = extraout_x9_04;
        func_0x00010bd24e94(*puVar11);
        if (cVar7 != cVar6) {
          *plVar10 = extraout_x8_10;
          *puVar11 = extraout_x9_05;
          func_0x00010bd24e94(*plVar10);
          if (cVar7 != cVar6) {
            *unaff_x19 = extraout_x8_11;
            *plVar10 = extraout_x9_06;
            func_0x00010bd24e94(*unaff_x19);
            if (cVar7 != cVar6) {
              *unaff_x20 = extraout_x8_12;
              *unaff_x19 = extraout_x9_07;
            }
          }
        }
      }
      return;
    }
    if ((long)uVar12 < 0x18) {
      if (!bVar5) {
        plVar10 = unaff_x20;
        if (unaff_x20 != unaff_x19) {
          while( true ) {
            unaff_x20 = unaff_x20 + 1;
            plVar8 = plVar10 + 1;
            if (plVar8 == unaff_x19) break;
            lVar13 = *plVar10;
            lVar19 = plVar10[1];
            iVar14 = *(int *)(lVar19 + 4);
            plVar16 = unaff_x20;
            plVar10 = plVar8;
            if (iVar14 < *(int *)(lVar13 + 4)) {
              do {
                *plVar16 = lVar13;
                lVar13 = plVar16[-2];
                plVar16 = plVar16 + -1;
              } while (iVar14 < *(int *)(lVar13 + 4));
              *plVar16 = lVar19;
            }
          }
        }
        break;
      }
      if (unaff_x20 == unaff_x19) break;
      lVar13 = 8;
      plVar10 = unaff_x20;
      goto LAB_10bd22210;
    }
    if (puVar11 == (undefined8 *)0x0) {
      if (unaff_x20 == unaff_x19) break;
      uVar15 = uVar12 - 2 >> 1;
      uVar17 = uVar15;
      goto LAB_10bd2228c;
    }
    plVar8 = unaff_x20 + (uVar12 >> 1);
    if (uVar12 < 0x81) {
      func_0x00010bd25588(plVar8,unaff_x20);
    }
    else {
      func_0x00010bd25588(unaff_x20,plVar8);
      FUN_10bd224c4(unaff_x20 + 1,plVar8 + -1,unaff_x19 + -2);
      FUN_10bd224c4(unaff_x20 + 2,plVar8 + 1,unaff_x19 + -3);
      FUN_10bd224c4(plVar8 + -1,plVar8,plVar8 + 1);
      lVar13 = *unaff_x20;
      *unaff_x20 = *plVar8;
      *plVar8 = lVar13;
    }
    puVar11 = (undefined8 *)((long)puVar11 - 1);
    lVar13 = *unaff_x20;
    if (bVar5) {
      iVar14 = *(int *)(lVar13 + 4);
    }
    else {
      iVar2 = *(int *)(unaff_x20[-1] + 4);
      iVar14 = *(int *)(lVar13 + 4);
      cVar6 = SBORROW4(iVar2,iVar14);
      cVar7 = iVar2 - iVar14 < 0;
      if (iVar14 <= iVar2) {
        func_0x00010bd256d0();
        plVar8 = unaff_x20;
        if (cVar7 == cVar6) {
          lVar13 = extraout_x8;
          plVar16 = unaff_x20 + 1;
          do {
            plVar8 = plVar16;
            cVar6 = SBORROW8((long)plVar8,(long)unaff_x19);
            cVar7 = (long)plVar8 - (long)unaff_x19 < 0;
            if (unaff_x19 <= plVar8) break;
            func_0x00010bd2524c();
            lVar13 = extraout_x8_01;
            plVar16 = extraout_x10;
          } while (cVar7 == cVar6);
        }
        else {
          do {
            plVar8 = plVar8 + 1;
            func_0x00010bd256d0();
            lVar13 = extraout_x8_00;
          } while (cVar7 == cVar6);
        }
        cVar6 = SBORROW8((long)plVar8,(long)unaff_x19);
        cVar7 = (long)plVar8 - (long)unaff_x19 < 0;
        plVar16 = unaff_x19;
        if (plVar8 < unaff_x19) {
          do {
            func_0x00010bd2524c();
            lVar13 = extraout_x8_02;
            plVar16 = extraout_x10_00;
          } while (cVar7 != cVar6);
        }
        while( true ) {
          cVar6 = SBORROW8((long)plVar8,(long)plVar16);
          cVar7 = (long)plVar8 - (long)plVar16 < 0;
          if (plVar16 <= plVar8) break;
          lVar13 = *plVar8;
          *plVar8 = *plVar16;
          *plVar16 = lVar13;
          do {
            plVar8 = plVar8 + 1;
            func_0x00010bd2524c();
          } while (cVar7 == cVar6);
          do {
            func_0x00010bd2524c();
            lVar13 = extraout_x8_03;
            plVar16 = extraout_x10_01;
          } while (cVar7 != cVar6);
        }
        plVar16 = plVar8 + -1;
        if (unaff_x20 != plVar16) {
          *unaff_x20 = *plVar16;
        }
        bVar5 = false;
        *plVar16 = lVar13;
        unaff_x20 = plVar8;
        goto LAB_10bd21ef8;
      }
    }
    lVar19 = 0;
    do {
      lVar18 = *(long *)((long)unaff_x20 + lVar19 + 8);
      lVar19 = lVar19 + 8;
    } while (*(int *)(lVar18 + 4) < iVar14);
    plVar8 = (long *)((long)unaff_x20 + lVar19);
    plVar16 = unaff_x19;
    plVar23 = plVar8;
    if (lVar19 == 8) {
      do {
        plVar9 = plVar16;
        if (plVar16 <= plVar8) break;
        plVar16 = plVar16 + -1;
        plVar9 = plVar16;
      } while (iVar14 <= *(int *)(*plVar16 + 4));
    }
    else {
      do {
        plVar16 = plVar16 + -1;
        plVar9 = plVar16;
      } while (iVar14 <= *(int *)(*plVar16 + 4));
    }
    while (plVar23 < plVar16) {
      *plVar23 = *plVar16;
      *plVar16 = lVar18;
      do {
        plVar23 = plVar23 + 1;
        lVar18 = *plVar23;
      } while (*(int *)(lVar18 + 4) < iVar14);
      do {
        plVar16 = plVar16 + -1;
      } while (iVar14 <= *(int *)(*plVar16 + 4));
    }
    plVar16 = plVar23 + -1;
    if (unaff_x20 != plVar16) {
      *unaff_x20 = *plVar16;
    }
    *plVar16 = lVar13;
    if (plVar8 < plVar9) goto LAB_10bd22090;
    plVar8 = unaff_x20;
    FUN_10bd2263c(unaff_x20,plVar16);
    plVar9 = plVar23;
    FUN_10bd2263c(plVar23,unaff_x19);
    if ((int)plVar9 == 0) goto code_r0x00010bd2208c;
    unaff_x19 = plVar16;
  } while (((ulong)plVar8 & 1) == 0);
  goto LAB_10bd224b0;
LAB_10bd22210:
  if (plVar10 + 1 == unaff_x19) goto LAB_10bd224b0;
  lVar19 = *plVar10;
  lVar18 = plVar10[1];
  iVar14 = *(int *)(lVar18 + 4);
  lVar20 = lVar13;
  if (iVar14 < *(int *)(lVar19 + 4)) {
    do {
      *(long *)((long)unaff_x20 + lVar20) = lVar19;
      lVar4 = lVar20 + -8;
      plVar8 = unaff_x20;
      if (lVar4 == 0) goto LAB_10bd22264;
      lVar19 = *(long *)((long)unaff_x20 + lVar20 + -0x10);
      lVar20 = lVar4;
    } while (iVar14 < *(int *)(lVar19 + 4));
    plVar8 = (long *)((long)unaff_x20 + lVar4);
LAB_10bd22264:
    *plVar8 = lVar18;
  }
  lVar13 = lVar13 + 8;
  plVar10 = plVar10 + 1;
  goto LAB_10bd22210;
code_r0x00010bd2208c:
  unaff_x20 = plVar23;
  if (((ulong)plVar8 & 1) == 0) {
LAB_10bd22090:
    func_0x00010bd256dc();
    FUN_10bd21ec0();
    bVar5 = false;
    unaff_x20 = plVar23;
  }
  goto LAB_10bd21ef8;
LAB_10bd2228c:
  do {
    if ((long)uVar17 <= (long)uVar15) {
      uVar21 = (uVar17 & 0x3fffffffffffffff) << 1 | 1;
      plVar10 = unaff_x20 + uVar21;
      uVar1 = uVar17 * 2 + 2;
      lVar19 = *plVar10;
      plVar8 = plVar10;
      lVar13 = lVar19;
      uVar22 = uVar21;
      if ((long)uVar1 < (long)uVar12) {
        lVar13 = plVar10[1];
        plVar8 = plVar10 + 1;
        uVar22 = uVar1;
        if (*(int *)(lVar13 + 4) <= *(int *)(lVar19 + 4)) {
          plVar8 = plVar10;
          lVar13 = lVar19;
          uVar22 = uVar21;
        }
      }
      lVar19 = unaff_x20[uVar17];
      iVar14 = *(int *)(lVar19 + 4);
      plVar10 = unaff_x20 + uVar17;
      if (iVar14 <= *(int *)(lVar13 + 4)) {
        do {
          plVar16 = plVar8;
          *plVar10 = lVar13;
          if ((long)uVar15 < (long)uVar22) break;
          uVar21 = uVar22 << 1 | 1;
          plVar10 = unaff_x20 + uVar21;
          uVar1 = uVar22 * 2 + 2;
          lVar18 = *plVar10;
          plVar8 = plVar10;
          lVar13 = lVar18;
          uVar22 = uVar21;
          if ((long)uVar1 < (long)uVar12) {
            lVar13 = plVar10[1];
            plVar8 = plVar10 + 1;
            uVar22 = uVar1;
            if (*(int *)(lVar13 + 4) <= *(int *)(lVar18 + 4)) {
              plVar8 = plVar10;
              lVar13 = lVar18;
              uVar22 = uVar21;
            }
          }
          plVar10 = plVar16;
        } while (iVar14 <= *(int *)(lVar13 + 4));
        *plVar16 = lVar19;
      }
    }
    uVar17 = uVar17 - 1;
  } while (-1 < (long)uVar17);
  for (; 1 < (long)uVar12; uVar12 = uVar12 - 1) {
    lVar13 = *unaff_x20;
    plVar10 = unaff_x20;
    uVar17 = 0;
    do {
      plVar16 = plVar10 + uVar17 + 1;
      lVar18 = *plVar16;
      uVar1 = uVar17 << 1 | 1;
      uVar15 = uVar17 * 2 + 2;
      plVar8 = plVar16;
      lVar19 = lVar18;
      uVar21 = uVar1;
      if ((long)uVar15 < (long)uVar12) {
        lVar19 = plVar10[uVar17 + 2];
        plVar8 = plVar10 + uVar17 + 2;
        uVar21 = uVar15;
        if (*(int *)(lVar19 + 4) <= *(int *)(lVar18 + 4)) {
          plVar8 = plVar16;
          lVar19 = lVar18;
          uVar21 = uVar1;
        }
      }
      *plVar10 = lVar19;
      plVar10 = plVar8;
      uVar17 = uVar21;
    } while ((long)uVar21 <= (long)(uVar12 - 2 >> 1));
    unaff_x19 = unaff_x19 + -1;
    if (plVar8 == unaff_x19) {
      *plVar8 = lVar13;
    }
    else {
      *plVar8 = *unaff_x19;
      *unaff_x19 = lVar13;
      lVar13 = (long)plVar8 + (8 - (long)unaff_x20) >> 3;
      if (1 < lVar13) {
        uVar17 = lVar13 - 2U >> 1;
        lVar19 = unaff_x20[uVar17];
        lVar13 = *plVar8;
        iVar14 = *(int *)(lVar13 + 4);
        plVar10 = unaff_x20 + uVar17;
        if (*(int *)(lVar19 + 4) < iVar14) {
          do {
            plVar16 = plVar10;
            *plVar8 = lVar19;
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1 >> 1;
            lVar19 = unaff_x20[uVar17];
            plVar8 = plVar16;
            plVar10 = unaff_x20 + uVar17;
          } while (*(int *)(lVar19 + 4) < iVar14);
          *plVar16 = lVar13;
        }
      }
    }
  }
LAB_10bd224b0:
  func_0x00010bd25770(unaff_x30);
  return;
}



/* Entry: 10bd1d784; end: 10bd1d82f;  */

undefined4 * FUN_10bd1d784(uint *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  uint extraout_w8;
  long extraout_x8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  
  uVar5 = (undefined4)((ulong)param_2 >> 0x20);
  uVar4 = (uint)param_2;
  func_0x00010bd24b74();
  if ((bool)in_ZR) {
    func_0x00010bd24f7c();
    if ((bool)in_CY) {
      func_0x00010bd24f14();
      goto LAB_10bd1d81c;
    }
    func_0x00010bd24c80();
    in_CY = (int)param_1 != 0;
    in_ZR = 0;
    if ((int)param_1 == 1) {
      if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) != 0) {
        func_0x00010bd250c0();
        puVar2 = (uint *)(unaff_x20 + extraout_x8);
        func_0x00010b4c52f4();
        if ((puVar2 != (uint *)0x0) && ((*(byte *)((long)puVar2 + 10) & 1) == 0)) {
          unaff_x19 = (undefined4 *)(ulong)*puVar2;
        }
        return unaff_x19;
      }
      func_0x00010bd24f2c();
      if ((param_1 == (uint *)0x0) || (func_0x00010bd24ba4(), ((ulong)param_1 & 1) != 0)) {
        func_0x00010bd24c14();
        func_0x00010bd20f0c();
        uVar4 = *param_1;
      }
      else {
        uVar4 = unaff_x19[0x14];
      }
      return (undefined4 *)(ulong)uVar4;
    }
  }
  else {
    func_0x00010bd24e70();
LAB_10bd1d81c:
    func_0x00010bd24e38();
  }
  puVar3 = (undefined4 *)*unaff_x21;
  func_0x00010bd25010();
  func_0x00010bd25614();
  func_0x00010bd24f68();
  func_0x00010bd24c30();
  if ((bool)in_ZR) {
    func_0x00010bd24f7c();
    if (!(bool)in_CY) {
      puVar7 = param_4;
      func_0x00010bd24c80();
      if ((int)puVar3 == 1) {
        if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) != 0) {
          func_0x00010bd24c04();
          func_0x00010bd24d6c(puVar3);
          func_0x00010bd256a4();
          func_0x00010bd2554c();
          func_0x00010b4c5238();
          *(undefined4 **)(puVar3 + 4) = param_4;
          if ((uVar4 & 1) != 0) {
            func_0x00010b4c560c();
          }
          func_0x00010b4c5278();
          *puVar3 = (int)unaff_x19;
          return puVar3;
        }
        func_0x00010bd24d94();
        FUN_10bd1d8dc();
        return puVar3;
      }
      goto LAB_10bd1d8cc;
    }
    func_0x00010bd24f14();
    puVar7 = param_4;
  }
  else {
    func_0x00010bd24e70();
    puVar7 = param_4;
  }
  func_0x00010bd24e38();
LAB_10bd1d8cc:
  puVar3 = (undefined4 *)*unaff_x22;
  puVar6 = &UNK_10f835228;
  func_0x00010bd25010();
  func_0x00010bd24b60();
  if (puVar3 == (undefined4 *)0x0) {
    uVar5 = *puVar7;
    func_0x00010bd24b3c();
    *puVar3 = uVar5;
    func_0x00010bd24c14();
    func_0x00010bd24f94();
    func_0x00010bd24e7c();
    func_0x00010bd1d3e8();
    if ((int)puVar3 != -1) {
      func_0x00010bd25418();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return puVar3;
  }
  func_0x00010bd24ba4();
  if (((ulong)puVar3 & 1) == 0) {
    if ((*(byte *)((long)unaff_x19 + 1) >> 4 & 1) == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = *(undefined **)(unaff_x19 + 10);
    }
    func_0x00010bd24d7c();
  }
  uVar1 = *puVar7;
  func_0x00010bd24b3c();
  *puVar3 = uVar1;
  func_0x00010bd24c14();
  *(undefined4 *)
   (CONCAT44(uVar5,uVar4) +
   (ulong)(uint)(puVar3[0xb] +
                (int)((*(long *)(puVar6 + 0x28) -
                      *(long *)(*(long *)(*(long *)(puVar6 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(puVar6 + 4);
  return puVar3;
}



/* Entry: 10bd1d830; end: 10bd1d8db;  */

void FUN_10bd1d830(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  uint extraout_w8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long unaff_x19;
  undefined8 *unaff_x22;
  
  uVar5 = (undefined4)((ulong)param_2 >> 0x20);
  uVar4 = (uint)param_2;
  func_0x00010bd25614();
  func_0x00010bd24f68();
  func_0x00010bd24c30();
  if ((bool)in_ZR) {
    func_0x00010bd24f7c();
    if (!(bool)in_CY) {
      puVar7 = param_4;
      func_0x00010bd24c80();
      if ((int)param_1 == 1) {
        if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) != 0) {
          func_0x00010bd24c04();
          func_0x00010bd24d6c(param_1);
          func_0x00010bd256a4();
          func_0x00010bd2554c();
          func_0x00010b4c5238();
          *(undefined4 **)(param_1 + 4) = param_4;
          if ((uVar4 & 1) != 0) {
            func_0x00010b4c560c();
          }
          func_0x00010b4c5278();
          *param_1 = (int)unaff_x19;
          return;
        }
        func_0x00010bd24d94();
        FUN_10bd1d8dc();
        return;
      }
      goto LAB_10bd1d8cc;
    }
    func_0x00010bd24f14();
    puVar7 = param_4;
  }
  else {
    func_0x00010bd24e70();
    puVar7 = param_4;
  }
  func_0x00010bd24e38();
LAB_10bd1d8cc:
  puVar3 = (undefined4 *)*unaff_x22;
  puVar6 = &UNK_10f835228;
  func_0x00010bd25010();
  func_0x00010bd24b60();
  if (puVar3 == (undefined4 *)0x0) {
    uVar5 = *puVar7;
    func_0x00010bd24b3c();
    *puVar3 = uVar5;
    func_0x00010bd24c14();
    iVar2 = (int)puVar3;
    func_0x00010bd24f94();
    func_0x00010bd24e7c();
    func_0x00010bd1d3e8();
    if (iVar2 != -1) {
      func_0x00010bd25418();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return;
  }
  func_0x00010bd24ba4();
  if (((ulong)puVar3 & 1) == 0) {
    if ((*(byte *)(unaff_x19 + 1) >> 4 & 1) == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = *(undefined **)(unaff_x19 + 0x28);
    }
    func_0x00010bd24d7c();
  }
  uVar1 = *puVar7;
  func_0x00010bd24b3c();
  *puVar3 = uVar1;
  func_0x00010bd24c14();
  *(undefined4 *)
   (CONCAT44(uVar5,uVar4) +
   (ulong)(uint)(puVar3[0xb] +
                (int)((*(long *)(puVar6 + 0x28) -
                      *(long *)(*(long *)(*(long *)(puVar6 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(puVar6 + 4);
  return;
}



/* Entry: 10bd1d8dc; end: 10bd1d9d7;  */

void FUN_10bd1d8dc(undefined8 param_1,long param_2,long param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint extraout_w8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long unaff_x19;
  
  uVar3 = (undefined4)((ulong)param_1 >> 0x20);
  uVar2 = (uint)param_1;
  func_0x00010bd24b60();
  if (CONCAT44(uVar3,uVar2) == 0) {
    uVar1 = *param_4;
    func_0x00010bd24b3c();
    *(undefined4 *)CONCAT44(uVar3,uVar2) = uVar1;
    func_0x00010bd24c14();
    func_0x00010bd24f94();
    func_0x00010bd24e7c();
    func_0x00010bd1d3e8();
    if (uVar2 != 0xffffffff) {
      func_0x00010bd25418();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return;
  }
  func_0x00010bd24ba4();
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(unaff_x19 + 1) >> 4 & 1) == 0) {
      param_3 = 0;
    }
    else {
      param_3 = *(long *)(unaff_x19 + 0x28);
    }
    func_0x00010bd24d7c();
  }
  uVar1 = *param_4;
  func_0x00010bd24b3c();
  *(undefined4 *)CONCAT44(uVar3,uVar2) = uVar1;
  func_0x00010bd24c14();
  *(undefined4 *)
   (param_2 +
   (ulong)(uint)(*(int *)(CONCAT44(uVar3,uVar2) + 0x2c) +
                (int)((*(long *)(param_3 + 0x28) -
                      *(long *)(*(long *)(*(long *)(param_3 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(param_3 + 4);
  return;
}



/* Entry: 10bd1d9d8; end: 10bd1da7f;  */

/* WARNING: Possible PIC construction at 0x00010b4bf690: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b4bf694) */
/* WARNING: Removing unreachable block (ram,0x00010b4c50ac) */

void FUN_10bd1d9d8(int *param_1,ulong param_2)

{
  int iVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar2;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x22;
  undefined4 unaff_w30;
  
  func_0x00010bd25614();
  func_0x00010bd24f68();
  func_0x00010bd24c30();
  if ((bool)in_ZR) {
    func_0x00010bd24f88();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x00010bd24f20();
      goto LAB_10bd1da6c;
    }
    func_0x00010bd24c80();
    if ((int)param_1 == 1) {
      if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) == 0) {
        func_0x00010bd24d94();
        FUN_10bd1da80();
        return;
      }
      func_0x00010bd24c04();
      func_0x00010bd24cb8();
      func_0x00010bd2565c();
      func_0x00010bd2554c();
      func_0x000107c398f0();
      func_0x00010b4c510c();
      func_0x00010b4c56a0();
      if ((param_2 & 1) == 0) {
        param_1 = (int *)*unaff_x20;
      }
      else {
        func_0x00010b4c508c();
        func_0x00010b4c361c();
        *unaff_x20 = param_1;
      }
      goto code_r0x000107c2845c;
    }
  }
  else {
    func_0x00010bd24e70();
LAB_10bd1da6c:
    func_0x00010bd24e38();
  }
  param_1 = (int *)*unaff_x22;
  func_0x00010bd25010();
  func_0x00010bd25100();
  unaff_w30 = *unaff_x19;
code_r0x000107c2845c:
  iVar2 = *param_1;
  iVar1 = param_1[1];
  if (iVar2 == iVar1) {
    func_0x00010056a14c(param_1,iVar1,iVar1 + 1);
    iVar2 = *param_1;
  }
  *param_1 = iVar2 + 1;
  *(undefined4 *)(*(long *)(param_1 + 2) + (long)iVar2 * 4) = unaff_w30;
  return;
}



/* Entry: 10bd1da80; end: 10bd1da9f;  */

void FUN_10bd1da80(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *unaff_x19;
  
  func_0x00010bd25100();
  uVar2 = *unaff_x19;
  iVar3 = *param_1;
  iVar1 = param_1[1];
  if (iVar3 == iVar1) {
    func_0x00010056a14c(param_1,iVar1,iVar1 + 1);
    iVar3 = *param_1;
  }
  *param_1 = iVar3 + 1;
  *(undefined4 *)(*(long *)(param_1 + 2) + (long)iVar3 * 4) = uVar2;
  return;
}



/* Entry: 10bd1daa0; end: 10bd1db4b;  */

long * FUN_10bd1daa0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long *plVar5;
  uint extraout_w8;
  long extraout_x8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  ulong *unaff_x22;
  long lVar6;
  
  uVar3 = (undefined4)((ulong)param_2 >> 0x20);
  uVar2 = (uint)param_2;
  func_0x00010bd24b74();
  if ((bool)in_ZR) {
    func_0x00010bd24f7c();
    if ((bool)in_CY) {
      func_0x00010bd24f14();
      goto LAB_10bd1db38;
    }
    func_0x00010bd24c80();
    in_CY = 1 < (uint)param_1;
    in_ZR = 0;
    if ((uint)param_1 == 2) {
      if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) != 0) {
        func_0x00010bd250c0();
        plVar1 = (long *)(unaff_x20 + extraout_x8);
        func_0x00010b4c56b4();
        if ((plVar1 != (long *)0x0) && ((*(byte *)((long)plVar1 + 10) & 1) == 0)) {
          unaff_x19 = (long *)*plVar1;
        }
        return unaff_x19;
      }
      func_0x00010bd24f2c();
      if ((param_1 == (undefined8 *)0x0) || (func_0x00010bd24ba4(), ((ulong)param_1 & 1) != 0)) {
        func_0x00010bd24c14();
        func_0x00010bd20f48();
        plVar1 = (long *)*param_1;
      }
      else {
        plVar1 = (long *)unaff_x19[10];
      }
      return plVar1;
    }
  }
  else {
    func_0x00010bd24e70();
LAB_10bd1db38:
    func_0x00010bd24e38();
  }
  plVar1 = (long *)*unaff_x21;
  func_0x00010bd24fe0();
  func_0x00010bd25614();
  func_0x00010bd24f68();
  func_0x00010bd24c30();
  if ((bool)in_ZR) {
    func_0x00010bd24f7c();
    if (!(bool)in_CY) {
      plVar5 = param_4;
      func_0x00010bd24c80();
      if ((int)plVar1 == 2) {
        if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) != 0) {
          func_0x00010bd24c04();
          func_0x00010bd24d6c(plVar1);
          func_0x00010bd2554c();
          func_0x00010b4c5628();
          plVar1[2] = (long)param_4;
          if ((uVar2 & 1) != 0) {
            func_0x00010b4c560c();
          }
          func_0x00010b4c5278();
          *plVar1 = (long)unaff_x19;
          return plVar1;
        }
        func_0x00010bd24d94();
        FUN_10bd1dbfc();
        return plVar1;
      }
      goto LAB_10bd1dbec;
    }
    func_0x00010bd24f14();
    plVar5 = param_4;
  }
  else {
    func_0x00010bd24e70();
    plVar5 = param_4;
  }
  func_0x00010bd24e38();
LAB_10bd1dbec:
  plVar1 = (long *)*unaff_x22;
  puVar4 = &UNK_10f835254;
  func_0x00010bd24fe0();
  func_0x00010bd24b60();
  if (plVar1 == (long *)0x0) {
    lVar6 = *plVar5;
    func_0x00010bd24b3c();
    *plVar1 = lVar6;
    func_0x00010bd24c14();
    func_0x00010bd24f94();
    func_0x00010bd24e7c();
    func_0x00010bd1d3e8();
    if ((int)plVar1 != -1) {
      func_0x00010bd25418();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return plVar1;
  }
  func_0x00010bd24ba4();
  if (((ulong)plVar1 & 1) == 0) {
    if ((*(byte *)((long)unaff_x19 + 1) >> 4 & 1) == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = (undefined *)unaff_x19[5];
    }
    func_0x00010bd24d7c();
  }
  lVar6 = *plVar5;
  func_0x00010bd24b3c();
  *plVar1 = lVar6;
  func_0x00010bd24c14();
  *(undefined4 *)
   (CONCAT44(uVar3,uVar2) +
   (ulong)(uint)(*(int *)((long)plVar1 + 0x2c) +
                (int)((*(long *)(puVar4 + 0x28) -
                      *(long *)(*(long *)(*(long *)(puVar4 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(puVar4 + 4);
  return plVar1;
}



/* Entry: 10bd1db4c; end: 10bd1dbfb;  */

void FUN_10bd1db4c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  uint extraout_w8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long unaff_x19;
  ulong *unaff_x22;
  undefined8 uVar7;
  
  uVar4 = (undefined4)((ulong)param_2 >> 0x20);
  uVar3 = (uint)param_2;
  func_0x00010bd25614();
  func_0x00010bd24f68();
  func_0x00010bd24c30();
  if ((bool)in_ZR) {
    func_0x00010bd24f7c();
    if (!(bool)in_CY) {
      puVar6 = param_4;
      func_0x00010bd24c80();
      if ((int)param_1 == 2) {
        if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) != 0) {
          func_0x00010bd24c04();
          func_0x00010bd24d6c(param_1);
          func_0x00010bd2554c();
          func_0x00010b4c5628();
          param_1[2] = (long)param_4;
          if ((uVar3 & 1) != 0) {
            func_0x00010b4c560c();
          }
          func_0x00010b4c5278();
          *param_1 = unaff_x19;
          return;
        }
        func_0x00010bd24d94();
        FUN_10bd1dbfc();
        return;
      }
      goto LAB_10bd1dbec;
    }
    func_0x00010bd24f14();
    puVar6 = param_4;
  }
  else {
    func_0x00010bd24e70();
    puVar6 = param_4;
  }
  func_0x00010bd24e38();
LAB_10bd1dbec:
  puVar2 = (undefined8 *)*unaff_x22;
  puVar5 = &UNK_10f835254;
  func_0x00010bd24fe0();
  func_0x00010bd24b60();
  if (puVar2 == (undefined8 *)0x0) {
    uVar7 = *puVar6;
    func_0x00010bd24b3c();
    *puVar2 = uVar7;
    func_0x00010bd24c14();
    iVar1 = (int)puVar2;
    func_0x00010bd24f94();
    func_0x00010bd24e7c();
    func_0x00010bd1d3e8();
    if (iVar1 != -1) {
      func_0x00010bd25418();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return;
  }
  func_0x00010bd24ba4();
  if (((ulong)puVar2 & 1) == 0) {
    if ((*(byte *)(unaff_x19 + 1) >> 4 & 1) == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = *(undefined **)(unaff_x19 + 0x28);
    }
    func_0x00010bd24d7c();
  }
  uVar7 = *puVar6;
  func_0x00010bd24b3c();
  *puVar2 = uVar7;
  func_0x00010bd24c14();
  *(undefined4 *)
   (CONCAT44(uVar4,uVar3) +
   (ulong)(uint)(*(int *)((long)puVar2 + 0x2c) +
                (int)((*(long *)(puVar5 + 0x28) -
                      *(long *)(*(long *)(*(long *)(puVar5 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(puVar5 + 4);
  return;
}



/* Entry: 10bd1dbfc; end: 10bd1dcf7;  */

void FUN_10bd1dbfc(undefined8 param_1,long param_2,long param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint extraout_w8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long unaff_x19;
  undefined8 uVar3;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (uint)param_1;
  func_0x00010bd24b60();
  if (CONCAT44(uVar2,uVar1) == 0) {
    uVar3 = *param_4;
    func_0x00010bd24b3c();
    *(undefined8 *)CONCAT44(uVar2,uVar1) = uVar3;
    func_0x00010bd24c14();
    func_0x00010bd24f94();
    func_0x00010bd24e7c();
    func_0x00010bd1d3e8();
    if (uVar1 != 0xffffffff) {
      func_0x00010bd25418();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return;
  }
  func_0x00010bd24ba4();
  if ((uVar1 & 1) == 0) {
    if ((*(byte *)(unaff_x19 + 1) >> 4 & 1) == 0) {
      param_3 = 0;
    }
    else {
      param_3 = *(long *)(unaff_x19 + 0x28);
    }
    func_0x00010bd24d7c();
  }
  uVar3 = *param_4;
  func_0x00010bd24b3c();
  *(undefined8 *)CONCAT44(uVar2,uVar1) = uVar3;
  func_0x00010bd24c14();
  *(undefined4 *)
   (param_2 +
   (ulong)(uint)(*(int *)(CONCAT44(uVar2,uVar1) + 0x2c) +
                (int)((*(long *)(param_3 + 0x28) -
                      *(long *)(*(long *)(*(long *)(param_3 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(param_3 + 4);
  return;
}



/* Entry: 10bd1dcf8; end: 10bd1dda3;  */

/* WARNING: Possible PIC construction at 0x00010b4bf778: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b4bf77c) */
/* WARNING: Removing unreachable block (ram,0x00010b4c50ac) */

void FUN_10bd1dcf8(int *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar2;
  long unaff_x19;
  int *unaff_x20;
  undefined8 *unaff_x22;
  
  func_0x00010bd25614();
  func_0x00010bd24f68();
  func_0x00010bd24c30();
  if ((bool)in_ZR) {
    func_0x00010bd24f88();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x00010bd24f20();
      goto LAB_10bd1dd90;
    }
    func_0x00010bd24c80();
    if ((int)param_1 == 2) {
      if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) == 0) {
        func_0x00010bd24d94();
        FUN_10bd1dda4();
        return;
      }
      func_0x00010bd24c04();
      func_0x00010bd24cb8();
      func_0x00010bd2554c();
      func_0x000107c398f0();
      func_0x00010b4c510c();
      func_0x00010b4c56a0();
      if ((param_2 & 1) == 0) {
        param_1 = *(int **)unaff_x20;
      }
      else {
        func_0x00010b4c508c();
        func_0x00010b4c364c();
        *(int **)unaff_x20 = param_1;
      }
      goto code_r0x00010b227ed8;
    }
  }
  else {
    func_0x00010bd24e70();
LAB_10bd1dd90:
    func_0x00010bd24e38();
  }
  param_1 = (int *)*unaff_x22;
  func_0x00010bd24fe0();
  func_0x00010bd25100();
  param_4 = unaff_x19;
code_r0x00010b227ed8:
  func_0x00010b22871c();
  iVar2 = *param_1;
  iVar1 = param_1[1];
  if (iVar2 == iVar1) {
    func_0x00010598df1c(unaff_x20,iVar1,iVar1 + 1);
    iVar2 = *unaff_x20;
  }
  *unaff_x20 = iVar2 + 1;
  *(long *)(*(long *)(unaff_x20 + 2) + (long)iVar2 * 8) = param_4;
  return;
}



/* Entry: 10bd1dda4; end: 10bd1ddc3;  */

void FUN_10bd1dda4(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 unaff_x19;
  int *unaff_x20;
  
  func_0x00010bd25100();
  func_0x00010b22871c();
  iVar2 = *param_1;
  iVar1 = param_1[1];
  if (iVar2 == iVar1) {
    func_0x00010598df1c(unaff_x20,iVar1,iVar1 + 1);
    iVar2 = *unaff_x20;
  }
  *unaff_x20 = iVar2 + 1;
  *(undefined8 *)(*(long *)(unaff_x20 + 2) + (long)iVar2 * 8) = unaff_x19;
  return;
}



/* Entry: 10bd1ddc4; end: 10bd1de6f;  */

undefined4 * FUN_10bd1ddc4(uint *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  uint extraout_w8;
  long extraout_x8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  
  uVar5 = (undefined4)((ulong)param_2 >> 0x20);
  uVar4 = (uint)param_2;
  func_0x00010bd24b74();
  if ((bool)in_ZR) {
    func_0x00010bd24f7c();
    if ((bool)in_CY) {
      func_0x00010bd24f14();
      goto LAB_10bd1de5c;
    }
    func_0x00010bd24c80();
    in_CY = 2 < (uint)param_1;
    in_ZR = 0;
    if ((uint)param_1 == 3) {
      if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) != 0) {
        func_0x00010bd250c0();
        puVar2 = (uint *)(unaff_x20 + extraout_x8);
        func_0x00010b4c52f4();
        if ((puVar2 != (uint *)0x0) && ((*(byte *)((long)puVar2 + 10) & 1) == 0)) {
          unaff_x19 = (undefined4 *)(ulong)*puVar2;
        }
        return unaff_x19;
      }
      func_0x00010bd24f2c();
      if ((param_1 == (uint *)0x0) || (func_0x00010bd24ba4(), ((ulong)param_1 & 1) != 0)) {
        func_0x00010bd24c14();
        func_0x00010bd20f84();
        uVar4 = *param_1;
      }
      else {
        uVar4 = unaff_x19[0x14];
      }
      return (undefined4 *)(ulong)uVar4;
    }
  }
  else {
    func_0x00010bd24e70();
LAB_10bd1de5c:
    func_0x00010bd24e38();
  }
  puVar3 = (undefined4 *)*unaff_x21;
  func_0x00010bd2501c();
  func_0x00010bd25614();
  func_0x00010bd24f68();
  func_0x00010bd24c30();
  if ((bool)in_ZR) {
    func_0x00010bd24f7c();
    if (!(bool)in_CY) {
      puVar7 = param_4;
      func_0x00010bd24c80();
      if ((int)puVar3 == 3) {
        if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) != 0) {
          func_0x00010bd24c04();
          func_0x00010bd24d6c(puVar3);
          func_0x00010bd256a4();
          func_0x00010bd2554c();
          func_0x00010b4c5238();
          *(undefined4 **)(puVar3 + 4) = param_4;
          if ((uVar4 & 1) != 0) {
            func_0x00010b4c560c();
          }
          func_0x00010b4c5278();
          *puVar3 = (int)unaff_x19;
          return puVar3;
        }
        func_0x00010bd24d94();
        FUN_10bd1df1c();
        return puVar3;
      }
      goto LAB_10bd1df0c;
    }
    func_0x00010bd24f14();
    puVar7 = param_4;
  }
  else {
    func_0x00010bd24e70();
    puVar7 = param_4;
  }
  func_0x00010bd24e38();
LAB_10bd1df0c:
  puVar3 = (undefined4 *)*unaff_x22;
  puVar6 = &UNK_10f835281;
  func_0x00010bd2501c();
  func_0x00010bd24b60();
  if (puVar3 == (undefined4 *)0x0) {
    uVar5 = *puVar7;
    func_0x00010bd24b3c();
    *puVar3 = uVar5;
    func_0x00010bd24c14();
    func_0x00010bd24f94();
    func_0x00010bd24e7c();
    func_0x00010bd1d3e8();
    if ((int)puVar3 != -1) {
      func_0x00010bd25418();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return puVar3;
  }
  func_0x00010bd24ba4();
  if (((ulong)puVar3 & 1) == 0) {
    if ((*(byte *)((long)unaff_x19 + 1) >> 4 & 1) == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = *(undefined **)(unaff_x19 + 10);
    }
    func_0x00010bd24d7c();
  }
  uVar1 = *puVar7;
  func_0x00010bd24b3c();
  *puVar3 = uVar1;
  func_0x00010bd24c14();
  *(undefined4 *)
   (CONCAT44(uVar5,uVar4) +
   (ulong)(uint)(puVar3[0xb] +
                (int)((*(long *)(puVar6 + 0x28) -
                      *(long *)(*(long *)(*(long *)(puVar6 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(puVar6 + 4);
  return puVar3;
}



/* Entry: 10bd1de70; end: 10bd1df1b;  */

void FUN_10bd1de70(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  uint extraout_w8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long unaff_x19;
  undefined8 *unaff_x22;
  
  uVar5 = (undefined4)((ulong)param_2 >> 0x20);
  uVar4 = (uint)param_2;
  func_0x00010bd25614();
  func_0x00010bd24f68();
  func_0x00010bd24c30();
  if ((bool)in_ZR) {
    func_0x00010bd24f7c();
    if (!(bool)in_CY) {
      puVar7 = param_4;
      func_0x00010bd24c80();
      if ((int)param_1 == 3) {
        if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) != 0) {
          func_0x00010bd24c04();
          func_0x00010bd24d6c(param_1);
          func_0x00010bd256a4();
          func_0x00010bd2554c();
          func_0x00010b4c5238();
          *(undefined4 **)(param_1 + 4) = param_4;
          if ((uVar4 & 1) != 0) {
            func_0x00010b4c560c();
          }
          func_0x00010b4c5278();
          *param_1 = (int)unaff_x19;
          return;
        }
        func_0x00010bd24d94();
        FUN_10bd1df1c();
        return;
      }
      goto LAB_10bd1df0c;
    }
    func_0x00010bd24f14();
    puVar7 = param_4;
  }
  else {
    func_0x00010bd24e70();
    puVar7 = param_4;
  }
  func_0x00010bd24e38();
LAB_10bd1df0c:
  puVar3 = (undefined4 *)*unaff_x22;
  puVar6 = &UNK_10f835281;
  func_0x00010bd2501c();
  func_0x00010bd24b60();
  if (puVar3 == (undefined4 *)0x0) {
    uVar5 = *puVar7;
    func_0x00010bd24b3c();
    *puVar3 = uVar5;
    func_0x00010bd24c14();
    iVar2 = (int)puVar3;
    func_0x00010bd24f94();
    func_0x00010bd24e7c();
    func_0x00010bd1d3e8();
    if (iVar2 != -1) {
      func_0x00010bd25418();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return;
  }
  func_0x00010bd24ba4();
  if (((ulong)puVar3 & 1) == 0) {
    if ((*(byte *)(unaff_x19 + 1) >> 4 & 1) == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = *(undefined **)(unaff_x19 + 0x28);
    }
    func_0x00010bd24d7c();
  }
  uVar1 = *puVar7;
  func_0x00010bd24b3c();
  *puVar3 = uVar1;
  func_0x00010bd24c14();
  *(undefined4 *)
   (CONCAT44(uVar5,uVar4) +
   (ulong)(uint)(puVar3[0xb] +
                (int)((*(long *)(puVar6 + 0x28) -
                      *(long *)(*(long *)(*(long *)(puVar6 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(puVar6 + 4);
  return;
}



/* Entry: 10bd1df1c; end: 10bd1e017;  */

void FUN_10bd1df1c(undefined8 param_1,long param_2,long param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint extraout_w8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long unaff_x19;
  
  uVar3 = (undefined4)((ulong)param_1 >> 0x20);
  uVar2 = (uint)param_1;
  func_0x00010bd24b60();
  if (CONCAT44(uVar3,uVar2) == 0) {
    uVar1 = *param_4;
    func_0x00010bd24b3c();
    *(undefined4 *)CONCAT44(uVar3,uVar2) = uVar1;
    func_0x00010bd24c14();
    func_0x00010bd24f94();
    func_0x00010bd24e7c();
    func_0x00010bd1d3e8();
    if (uVar2 != 0xffffffff) {
      func_0x00010bd25418();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return;
  }
  func_0x00010bd24ba4();
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(unaff_x19 + 1) >> 4 & 1) == 0) {
      param_3 = 0;
    }
    else {
      param_3 = *(long *)(unaff_x19 + 0x28);
    }
    func_0x00010bd24d7c();
  }
  uVar1 = *param_4;
  func_0x00010bd24b3c();
  *(undefined4 *)CONCAT44(uVar3,uVar2) = uVar1;
  func_0x00010bd24c14();
  *(undefined4 *)
   (param_2 +
   (ulong)(uint)(*(int *)(CONCAT44(uVar3,uVar2) + 0x2c) +
                (int)((*(long *)(param_3 + 0x28) -
                      *(long *)(*(long *)(*(long *)(param_3 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(param_3 + 4);
  return;
}



/* Entry: 10bd1e018; end: 10bd1e0bf;  */

/* WARNING: Possible PIC construction at 0x00010b4bf860: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b4bf864) */
/* WARNING: Removing unreachable block (ram,0x00010b4c50ac) */

void FUN_10bd1e018(int *param_1,ulong param_2)

{
  int iVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar2;
  long unaff_x19;
  int *unaff_x20;
  undefined8 *unaff_x22;
  long unaff_x30;
  
  func_0x00010bd25614();
  func_0x00010bd24f68();
  func_0x00010bd24c30();
  if ((bool)in_ZR) {
    func_0x00010bd24f88();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x00010bd24f20();
      goto LAB_10bd1e0ac;
    }
    func_0x00010bd24c80();
    if ((int)param_1 == 3) {
      if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) == 0) {
        func_0x00010bd24d94();
        FUN_10bd1e0c0();
        return;
      }
      func_0x00010bd24c04();
      func_0x00010bd24cb8();
      func_0x00010bd2565c();
      func_0x00010bd2554c();
      func_0x000107c398f0();
      func_0x00010b4c510c();
      func_0x00010b4c56a0();
      if ((param_2 & 1) == 0) {
        param_1 = *(int **)unaff_x20;
      }
      else {
        func_0x00010b4c508c();
        func_0x00010b4c367c();
        *(int **)unaff_x20 = param_1;
      }
      goto code_r0x000107c29100;
    }
  }
  else {
    func_0x00010bd24e70();
LAB_10bd1e0ac:
    func_0x00010bd24e38();
  }
  param_1 = (int *)*unaff_x22;
  func_0x00010bd2501c();
  func_0x00010bd25100();
  unaff_x30 = unaff_x19;
code_r0x000107c29100:
  func_0x0001002a91f0();
  iVar2 = *param_1;
  iVar1 = param_1[1];
  if (iVar2 == iVar1) {
    func_0x0001002a9240(unaff_x20,iVar1,iVar1 + 1);
    iVar2 = *unaff_x20;
  }
  *unaff_x20 = iVar2 + 1;
  *(int *)(*(long *)(unaff_x20 + 2) + (long)iVar2 * 4) = (int)unaff_x30;
  return;
}



/* Entry: 10bd1e0c0; end: 10bd1e0df;  */

void FUN_10bd1e0c0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_w19;
  int *unaff_x20;
  
  func_0x00010bd25100();
  func_0x0001002a91f0();
  iVar2 = *param_1;
  iVar1 = param_1[1];
  if (iVar2 == iVar1) {
    func_0x0001002a9240(unaff_x20,iVar1,iVar1 + 1);
    iVar2 = *unaff_x20;
  }
  *unaff_x20 = iVar2 + 1;
  *(undefined4 *)(*(long *)(unaff_x20 + 2) + (long)iVar2 * 4) = unaff_w19;
  return;
}



/* Entry: 10bd1e0e0; end: 10bd1e18b;  */

long * FUN_10bd1e0e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long *plVar5;
  uint extraout_w8;
  long extraout_x8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  ulong *unaff_x22;
  long lVar6;
  
  uVar3 = (undefined4)((ulong)param_2 >> 0x20);
  uVar2 = (uint)param_2;
  func_0x00010bd24b74();
  if ((bool)in_ZR) {
    func_0x00010bd24f7c();
    if ((bool)in_CY) {
      func_0x00010bd24f14();
      goto LAB_10bd1e178;
    }
    func_0x00010bd24c80();
    in_CY = 3 < (uint)param_1;
    in_ZR = 0;
    if ((uint)param_1 == 4) {
      if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) != 0) {
        func_0x00010bd250c0();
        plVar1 = (long *)(unaff_x20 + extraout_x8);
        func_0x00010b4c56b4();
        if ((plVar1 != (long *)0x0) && ((*(byte *)((long)plVar1 + 10) & 1) == 0)) {
          unaff_x19 = (long *)*plVar1;
        }
        return unaff_x19;
      }
      func_0x00010bd24f2c();
      if ((param_1 == (undefined8 *)0x0) || (func_0x00010bd24ba4(), ((ulong)param_1 & 1) != 0)) {
        func_0x00010bd24c14();
        func_0x00010bd20fc0();
        plVar1 = (long *)*param_1;
      }
      else {
        plVar1 = (long *)unaff_x19[10];
      }
      return plVar1;
    }
  }
  else {
    func_0x00010bd24e70();
LAB_10bd1e178:
    func_0x00010bd24e38();
  }
  plVar1 = (long *)*unaff_x21;
  func_0x00010bd25034();
  func_0x00010bd25614();
  func_0x00010bd24f68();
  func_0x00010bd24c30();
  if ((bool)in_ZR) {
    func_0x00010bd24f7c();
    if (!(bool)in_CY) {
      plVar5 = param_4;
      func_0x00010bd24c80();
      if ((int)plVar1 == 4) {
        if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) != 0) {
          func_0x00010bd24c04();
          func_0x00010bd24d6c(plVar1);
          func_0x00010bd2554c();
          func_0x00010b4c5628();
          plVar1[2] = (long)param_4;
          if ((uVar2 & 1) != 0) {
            func_0x00010b4c560c();
          }
          func_0x00010b4c5278();
          *plVar1 = (long)unaff_x19;
          return plVar1;
        }
        func_0x00010bd24d94();
        FUN_10bd1e23c();
        return plVar1;
      }
      goto LAB_10bd1e22c;
    }
    func_0x00010bd24f14();
    plVar5 = param_4;
  }
  else {
    func_0x00010bd24e70();
    plVar5 = param_4;
  }
  func_0x00010bd24e38();
LAB_10bd1e22c:
  plVar1 = (long *)*unaff_x22;
  puVar4 = &UNK_10f8352b1;
  func_0x00010bd25034();
  func_0x00010bd24b60();
  if (plVar1 == (long *)0x0) {
    lVar6 = *plVar5;
    func_0x00010bd24b3c();
    *plVar1 = lVar6;
    func_0x00010bd24c14();
    func_0x00010bd24f94();
    func_0x00010bd24e7c();
    func_0x00010bd1d3e8();
    if ((int)plVar1 != -1) {
      func_0x00010bd25418();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return plVar1;
  }
  func_0x00010bd24ba4();
  if (((ulong)plVar1 & 1) == 0) {
    if ((*(byte *)((long)unaff_x19 + 1) >> 4 & 1) == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = (undefined *)unaff_x19[5];
    }
    func_0x00010bd24d7c();
  }
  lVar6 = *plVar5;
  func_0x00010bd24b3c();
  *plVar1 = lVar6;
  func_0x00010bd24c14();
  *(undefined4 *)
   (CONCAT44(uVar3,uVar2) +
   (ulong)(uint)(*(int *)((long)plVar1 + 0x2c) +
                (int)((*(long *)(puVar4 + 0x28) -
                      *(long *)(*(long *)(*(long *)(puVar4 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(puVar4 + 4);
  return plVar1;
}



/* Entry: 10bd1e18c; end: 10bd1e23b;  */

void FUN_10bd1e18c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  uint extraout_w8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long unaff_x19;
  ulong *unaff_x22;
  undefined8 uVar7;
  
  uVar4 = (undefined4)((ulong)param_2 >> 0x20);
  uVar3 = (uint)param_2;
  func_0x00010bd25614();
  func_0x00010bd24f68();
  func_0x00010bd24c30();
  if ((bool)in_ZR) {
    func_0x00010bd24f7c();
    if (!(bool)in_CY) {
      puVar6 = param_4;
      func_0x00010bd24c80();
      if ((int)param_1 == 4) {
        if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) != 0) {
          func_0x00010bd24c04();
          func_0x00010bd24d6c(param_1);
          func_0x00010bd2554c();
          func_0x00010b4c5628();
          param_1[2] = (long)param_4;
          if ((uVar3 & 1) != 0) {
            func_0x00010b4c560c();
          }
          func_0x00010b4c5278();
          *param_1 = unaff_x19;
          return;
        }
        func_0x00010bd24d94();
        FUN_10bd1e23c();
        return;
      }
      goto LAB_10bd1e22c;
    }
    func_0x00010bd24f14();
    puVar6 = param_4;
  }
  else {
    func_0x00010bd24e70();
    puVar6 = param_4;
  }
  func_0x00010bd24e38();
LAB_10bd1e22c:
  puVar2 = (undefined8 *)*unaff_x22;
  puVar5 = &UNK_10f8352b1;
  func_0x00010bd25034();
  func_0x00010bd24b60();
  if (puVar2 == (undefined8 *)0x0) {
    uVar7 = *puVar6;
    func_0x00010bd24b3c();
    *puVar2 = uVar7;
    func_0x00010bd24c14();
    iVar1 = (int)puVar2;
    func_0x00010bd24f94();
    func_0x00010bd24e7c();
    func_0x00010bd1d3e8();
    if (iVar1 != -1) {
      func_0x00010bd25418();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return;
  }
  func_0x00010bd24ba4();
  if (((ulong)puVar2 & 1) == 0) {
    if ((*(byte *)(unaff_x19 + 1) >> 4 & 1) == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = *(undefined **)(unaff_x19 + 0x28);
    }
    func_0x00010bd24d7c();
  }
  uVar7 = *puVar6;
  func_0x00010bd24b3c();
  *puVar2 = uVar7;
  func_0x00010bd24c14();
  *(undefined4 *)
   (CONCAT44(uVar4,uVar3) +
   (ulong)(uint)(*(int *)((long)puVar2 + 0x2c) +
                (int)((*(long *)(puVar5 + 0x28) -
                      *(long *)(*(long *)(*(long *)(puVar5 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(puVar5 + 4);
  return;
}



/* Entry: 10bd1e23c; end: 10bd1e337;  */

void FUN_10bd1e23c(undefined8 param_1,long param_2,long param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint extraout_w8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long unaff_x19;
  undefined8 uVar3;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (uint)param_1;
  func_0x00010bd24b60();
  if (CONCAT44(uVar2,uVar1) == 0) {
    uVar3 = *param_4;
    func_0x00010bd24b3c();
    *(undefined8 *)CONCAT44(uVar2,uVar1) = uVar3;
    func_0x00010bd24c14();
    func_0x00010bd24f94();
    func_0x00010bd24e7c();
    func_0x00010bd1d3e8();
    if (uVar1 != 0xffffffff) {
      func_0x00010bd25418();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return;
  }
  func_0x00010bd24ba4();
  if ((uVar1 & 1) == 0) {
    if ((*(byte *)(unaff_x19 + 1) >> 4 & 1) == 0) {
      param_3 = 0;
    }
    else {
      param_3 = *(long *)(unaff_x19 + 0x28);
    }
    func_0x00010bd24d7c();
  }
  uVar3 = *param_4;
  func_0x00010bd24b3c();
  *(undefined8 *)CONCAT44(uVar2,uVar1) = uVar3;
  func_0x00010bd24c14();
  *(undefined4 *)
   (param_2 +
   (ulong)(uint)(*(int *)(CONCAT44(uVar2,uVar1) + 0x2c) +
                (int)((*(long *)(param_3 + 0x28) -
                      *(long *)(*(long *)(*(long *)(param_3 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(param_3 + 4);
  return;
}



/* Entry: 10bd1e338; end: 10bd1e3e3;  */

/* WARNING: Possible PIC construction at 0x00010b4bf948: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b4bf94c) */
/* WARNING: Removing unreachable block (ram,0x00010b4c50ac) */

void FUN_10bd1e338(int *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x22;
  
  func_0x00010bd25614();
  func_0x00010bd24f68();
  func_0x00010bd24c30();
  if ((bool)in_ZR) {
    func_0x00010bd24f88();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x00010bd24f20();
      goto LAB_10bd1e3d0;
    }
    func_0x00010bd24c80();
    if ((int)param_1 == 4) {
      if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) == 0) {
        func_0x00010bd24d94();
        FUN_10bd1e3e4();
        return;
      }
      func_0x00010bd24c04();
      func_0x00010bd24cb8();
      func_0x00010bd2554c();
      func_0x000107c398f0();
      func_0x00010b4c510c();
      func_0x00010b4c56a0();
      if ((param_2 & 1) == 0) {
        param_1 = (int *)*unaff_x20;
      }
      else {
        func_0x00010b4c508c();
        func_0x00010b4c36ac();
        *unaff_x20 = param_1;
      }
      goto code_r0x000108767594;
    }
  }
  else {
    func_0x00010bd24e70();
LAB_10bd1e3d0:
    func_0x00010bd24e38();
  }
  param_1 = (int *)*unaff_x22;
  func_0x00010bd25034();
  func_0x00010bd25100();
  param_4 = *unaff_x19;
code_r0x000108767594:
  iVar2 = *param_1;
  iVar1 = param_1[1];
  if (iVar2 == iVar1) {
    func_0x0001087675dc(param_1,iVar1,iVar1 + 1);
    iVar2 = *param_1;
  }
  *param_1 = iVar2 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (long)iVar2 * 8) = param_4;
  return;
}



/* Entry: 10bd1e3e4; end: 10bd1e403;  */

void FUN_10bd1e3e4(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *unaff_x19;
  
  func_0x00010bd25100();
  uVar2 = *unaff_x19;
  iVar3 = *param_1;
  iVar1 = param_1[1];
  if (iVar3 == iVar1) {
    func_0x0001087675dc(param_1,iVar1,iVar1 + 1);
    iVar3 = *param_1;
  }
  *param_1 = iVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (long)iVar3 * 8) = uVar2;
  return;
}



/* Entry: 10bd1e404; end: 10bd1e4af;  */

/* WARNING: Possible PIC construction at 0x00010bd1e500: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bd1e504) */
/* WARNING: Removing unreachable block (ram,0x00010bd24d58) */

ulong FUN_10bd1e404(ulong param_1,uint *param_2,undefined8 param_3,undefined8 param_4,
                   undefined4 *param_5)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  undefined *puVar5;
  uint extraout_w8;
  long extraout_x8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  uint uVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uStack_74;
  
  uVar8 = (undefined4)((ulong)param_3 >> 0x20);
  uVar6 = (uint)param_3;
  func_0x00010bd24b74();
  if ((bool)in_ZR) {
    func_0x00010bd24f7c();
    if ((bool)in_CY) {
      func_0x00010bd24f14();
      goto LAB_10bd1e49c;
    }
    func_0x00010bd24c80();
    in_CY = 5 < (uint)param_2;
    in_ZR = 0;
    if ((uint)param_2 == 6) {
      if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) != 0) {
        func_0x00010bd250c0();
        uVar7 = (ulong)*(uint *)(unaff_x19 + 0x50);
        puVar2 = (uint *)(unaff_x20 + extraout_x8);
        func_0x00010b4bf3a0();
        if ((puVar2 != (uint *)0x0) && ((*(byte *)((long)puVar2 + 10) & 1) == 0)) {
          uVar7 = (ulong)*puVar2;
        }
        return uVar7;
      }
      func_0x00010bd24f2c();
      if ((param_2 == (uint *)0x0) || (func_0x00010bd24ba4(), ((ulong)param_2 & 1) != 0)) {
        func_0x00010bd24c14();
        func_0x00010bd24608();
        uVar6 = *param_2;
      }
      else {
        uVar6 = *(uint *)(unaff_x19 + 0x50);
      }
      return (ulong)uVar6;
    }
  }
  else {
    func_0x00010bd24e70();
LAB_10bd1e49c:
    func_0x00010bd24e38();
  }
  puVar3 = (undefined4 *)*unaff_x21;
  puVar5 = &UNK_10f8352d7;
  func_0x00010bd25028();
  func_0x00010bd24fa0();
  uStack_74 = (undefined4)param_1;
  func_0x00010bd24c30();
  if ((bool)in_ZR) {
    func_0x00010bd24f7c();
    if ((bool)in_CY) {
      func_0x00010bd24f14();
      uVar7 = param_1;
      goto LAB_10bd1e554;
    }
    uVar7 = param_1;
    func_0x00010bd24c80();
    if ((int)puVar3 == 6) {
      if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) != 0) {
        func_0x00010bd24e20();
        uVar4 = SUB81(puVar5,0);
        func_0x00010bd251fc(puVar3);
        uVar7 = param_1;
        func_0x00010b4c0fe8();
        *(long *)(puVar3 + 4) = unaff_x19;
        if ((uVar6 & 1) != 0) {
          *(undefined1 *)(puVar3 + 2) = uVar4;
          *(undefined1 *)((long)puVar3 + 9) = 0;
        }
        func_0x00010b4c5278();
        *puVar3 = (int)param_1;
        return uVar7;
      }
      param_5 = &uStack_74;
      func_0x00010bd24c14();
      goto SUB_10bd1e568;
    }
  }
  else {
    func_0x00010bd24e70();
    uVar7 = param_1;
LAB_10bd1e554:
    func_0x00010bd24e38();
  }
  puVar3 = (undefined4 *)*unaff_x21;
  puVar5 = &UNK_10f8352e0;
  func_0x00010bd25028();
SUB_10bd1e568:
  func_0x00010bd24b60();
  if (puVar3 == (undefined4 *)0x0) {
    uVar8 = *param_5;
    func_0x00010bd24b3c();
    *puVar3 = uVar8;
    func_0x00010bd24c14();
    iVar1 = (int)puVar3;
    func_0x00010bd24f94();
    func_0x00010bd24e7c();
    func_0x00010bd1d3e8();
    if (iVar1 != -1) {
      func_0x00010bd25418();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return uVar7;
  }
  func_0x00010bd24ba4();
  if (((ulong)puVar3 & 1) == 0) {
    if ((*(byte *)(unaff_x19 + 1) >> 4 & 1) == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = *(undefined **)(unaff_x19 + 0x28);
    }
    func_0x00010bd24d7c();
  }
  uVar9 = *param_5;
  func_0x00010bd24b3c();
  *puVar3 = uVar9;
  func_0x00010bd24c14();
  *(undefined4 *)
   (CONCAT44(uVar8,uVar6) +
   (ulong)(uint)(puVar3[0xb] +
                (int)((*(long *)(puVar5 + 0x28) -
                      *(long *)(*(long *)(*(long *)(puVar5 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(puVar5 + 4);
  return uVar7;
}



/* Entry: 10bd1e4b0; end: 10bd1e5d7;  */

/* WARNING: Possible PIC construction at 0x00010bd1e500: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bd1e504) */
/* WARNING: Removing unreachable block (ram,0x00010bd24d58) */

void FUN_10bd1e4b0(undefined4 param_1,undefined4 *param_2,undefined8 param_3,undefined *param_4,
                  undefined4 *param_5)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  uint extraout_w8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long unaff_x19;
  ulong *unaff_x21;
  undefined4 uVar5;
  undefined4 uStack_44;
  
  uVar3 = (undefined4)((ulong)param_3 >> 0x20);
  uVar2 = (uint)param_3;
  uStack_44 = param_1;
  func_0x00010bd24fa0();
  uVar5 = uStack_44;
  func_0x00010bd24c30();
  if ((bool)in_ZR) {
    func_0x00010bd24f7c();
    if ((bool)in_CY) {
      func_0x00010bd24f14();
      goto LAB_10bd1e554;
    }
    func_0x00010bd24c80();
    if ((int)param_2 == 6) {
      if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) != 0) {
        func_0x00010bd24e20();
        uVar4 = SUB81(param_4,0);
        func_0x00010bd251fc(param_2);
        func_0x00010b4c0fe8();
        *(long *)(param_2 + 4) = unaff_x19;
        if ((uVar2 & 1) != 0) {
          *(undefined1 *)(param_2 + 2) = uVar4;
          *(undefined1 *)((long)param_2 + 9) = 0;
        }
        func_0x00010b4c5278();
        *param_2 = uVar5;
        return;
      }
      param_5 = &uStack_44;
      func_0x00010bd24c14();
      goto SUB_10bd1e568;
    }
  }
  else {
    func_0x00010bd24e70();
LAB_10bd1e554:
    func_0x00010bd24e38();
  }
  param_2 = (undefined4 *)*unaff_x21;
  param_4 = &UNK_10f8352e0;
  func_0x00010bd25028();
SUB_10bd1e568:
  func_0x00010bd24b60();
  if (param_2 == (undefined4 *)0x0) {
    uVar5 = *param_5;
    func_0x00010bd24b3c();
    *param_2 = uVar5;
    func_0x00010bd24c14();
    iVar1 = (int)param_2;
    func_0x00010bd24f94();
    func_0x00010bd24e7c();
    func_0x00010bd1d3e8();
    if (iVar1 != -1) {
      func_0x00010bd25418();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return;
  }
  func_0x00010bd24ba4();
  if (((ulong)param_2 & 1) == 0) {
    if ((*(byte *)(unaff_x19 + 1) >> 4 & 1) == 0) {
      param_4 = (undefined *)0x0;
    }
    else {
      param_4 = *(undefined **)(unaff_x19 + 0x28);
    }
    func_0x00010bd24d7c();
  }
  uVar5 = *param_5;
  func_0x00010bd24b3c();
  *param_2 = uVar5;
  func_0x00010bd24c14();
  *(undefined4 *)
   (CONCAT44(uVar3,uVar2) +
   (ulong)(uint)(param_2[0xb] +
                (int)((*(long *)(param_4 + 0x28) -
                      *(long *)(*(long *)(*(long *)(param_4 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(param_4 + 4);
  return;
}



/* Entry: 10bd1e5d8; end: 10bd1e667;  */

/* WARNING: Possible PIC construction at 0x00010b4bfa60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b4bfa64) */
/* WARNING: Removing unreachable block (ram,0x00010b4c541c) */

ulong FUN_10bd1e5d8(ulong param_1,uint *param_2,ulong param_3,undefined8 param_4,ulong param_5,
                   uint *param_6)

{
  uint uVar1;
  undefined1 ***pppuVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  uint *puVar3;
  uint uVar4;
  long extraout_x8;
  uint *unaff_x19;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined1 **ppuVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  func_0x00010bd24b8c();
  if ((bool)in_ZR) {
    func_0x00010bd24f88();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x00010bd24f20();
      goto LAB_10bd1e654;
    }
    func_0x00010bd24c50();
    in_CY = 5 < (uint)param_2;
    in_ZR = (uint)param_2 == 6;
    if (!(bool)in_ZR) goto LAB_10bd1e658;
    if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) == 0) {
      func_0x00010bd24cd4();
      func_0x00010bd1bca8();
      return (ulong)*(uint *)(*(long *)(param_2 + 2) + (long)(int)unaff_x20 * 4);
    }
    func_0x00010bd24ca4();
    func_0x00010b4c52f4();
    if (param_2 != (uint *)0x0) {
      func_0x00010b4c5354();
      return (ulong)*(uint *)(extraout_x8 + (long)(int)unaff_x19 * 4);
    }
    func_0x00010b4c5038();
    func_0x00010b4c52d4();
    func_0x00010b4c5068();
    func_0x00010b4c52cc();
    unaff_x19 = param_6;
    puStack_40 = &stack0xfffffffffffffff0;
    pcStack_38 = (code *)&LAB_10b4bfa10;
code_r0x00010b4bfa10:
    pppuVar2 = &ppuStack_90;
    uStack_78 = unaff_d8;
    func_0x00010b4c5360();
    *(uint **)(param_2 + 4) = unaff_x19;
    if ((param_3 & 1) == 0) {
      puVar3 = *(uint **)param_2;
    }
    else {
      puVar3 = param_2;
      func_0x00010b4c55b4();
      func_0x00010b4c36dc();
      *(uint **)param_2 = puVar3;
    }
    unaff_x19 = param_2;
    unaff_x20 = param_5;
    ppuVar5 = &puStack_40;
    pcVar6 = (code *)&UNK_10b4bfa64;
    uVar7 = param_1;
    goto code_r0x00010b4bfa6c;
  }
  func_0x00010bd24e70();
LAB_10bd1e654:
  func_0x00010bd24e38();
LAB_10bd1e658:
  param_2 = (uint *)*unaff_x22;
  func_0x00010bd25028();
  pcStack_38 = FUN_10bd1e668;
  puStack_40 = &stack0xfffffffffffffff0;
  func_0x00010bd24fa0();
  uStack_78 = CONCAT44((int)param_1,(undefined4)uStack_78);
  func_0x00010bd24c30();
  if ((bool)in_ZR) {
    func_0x00010bd24f88();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x00010bd24f20();
      goto LAB_10bd1e714;
    }
    uVar8 = param_1;
    func_0x00010bd24c80();
    uVar7 = param_1;
    if ((int)param_2 == 6) {
      if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) == 0) {
        func_0x00010bd24c14();
        FUN_10bd1e728();
        return uVar8;
      }
      func_0x00010bd24e20();
      param_5 = (ulong)*(byte *)(*(long *)(unaff_x19 + 0xe) + 0x88);
      func_0x00010bd251fc(param_2);
      goto code_r0x00010b4bfa10;
    }
  }
  else {
    func_0x00010bd24e70();
LAB_10bd1e714:
    func_0x00010bd24e38();
    uVar7 = unaff_d8;
  }
  puVar3 = (uint *)*unaff_x21;
  func_0x00010bd25028();
  pcStack_88 = FUN_10bd1e728;
  ppuStack_90 = &puStack_40;
  func_0x00010bd25100();
  param_1 = (ulong)*unaff_x19;
  pppuVar2 = (undefined1 ***)auStack_80;
  ppuVar5 = ppuStack_90;
  pcVar6 = pcStack_88;
code_r0x00010b4bfa6c:
  *(undefined8 *)((long)pppuVar2 + -0x30) = unaff_d9;
  *(ulong *)((long)pppuVar2 + -0x28) = uVar7;
  *(ulong *)((long)pppuVar2 + -0x20) = unaff_x20;
  *(uint **)((long)pppuVar2 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)pppuVar2 + -0x10) = ppuVar5;
  *(code **)((long)pppuVar2 + -8) = pcVar6;
  uVar4 = *puVar3;
  uVar1 = puVar3[1];
  uVar7 = param_1;
  if (uVar4 == uVar1) {
    func_0x000109311970(puVar3,uVar1,uVar1 + 1);
    uVar4 = *puVar3;
  }
  *puVar3 = uVar4 + 1;
  *(int *)(*(long *)(puVar3 + 2) + (long)(int)uVar4 * 4) = (int)param_1;
  return uVar7;
}



/* Entry: 10bd1e668; end: 10bd1e727;  */

/* WARNING: Possible PIC construction at 0x00010b4bfa60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b4bfa64) */
/* WARNING: Removing unreachable block (ram,0x00010b4c541c) */

void FUN_10bd1e668(ulong param_1,uint *param_2,ulong param_3)

{
  uint uVar1;
  undefined1 **ppuVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  uint *puVar3;
  uint uVar4;
  uint *unaff_x19;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  undefined1 *puVar5;
  code *pcVar6;
  ulong uVar7;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  ppuVar2 = (undefined1 **)auStack_50;
  func_0x00010bd24fa0();
  uStack_48 = CONCAT44((int)param_1,(undefined4)uStack_48);
  func_0x00010bd24c30();
  if ((bool)in_ZR) {
    func_0x00010bd24f88();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x00010bd24f20();
      goto LAB_10bd1e714;
    }
    func_0x00010bd24c80();
    uVar7 = param_1;
    if ((int)param_2 == 6) {
      if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) == 0) {
        func_0x00010bd24c14();
        FUN_10bd1e728();
        return;
      }
      func_0x00010bd24e20();
      unaff_x20 = (ulong)*(byte *)(*(long *)(unaff_x19 + 0xe) + 0x88);
      func_0x00010bd251fc(param_2);
      ppuVar2 = &puStack_60;
      uStack_48 = unaff_d8;
      func_0x00010b4c5360();
      *(uint **)(param_2 + 4) = unaff_x19;
      if ((param_3 & 1) == 0) {
        puVar3 = *(uint **)param_2;
      }
      else {
        puVar3 = param_2;
        func_0x00010b4c55b4();
        func_0x00010b4c36dc();
        *(uint **)param_2 = puVar3;
      }
      unaff_x19 = param_2;
      puVar5 = &stack0xfffffffffffffff0;
      pcVar6 = (code *)&UNK_10b4bfa64;
      goto code_r0x00010b4bfa6c;
    }
  }
  else {
    func_0x00010bd24e70();
LAB_10bd1e714:
    func_0x00010bd24e38();
    uVar7 = unaff_d8;
  }
  puVar3 = (uint *)*unaff_x21;
  func_0x00010bd25028();
  pcStack_58 = FUN_10bd1e728;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x00010bd25100();
  param_1 = (ulong)*unaff_x19;
  puVar5 = puStack_60;
  pcVar6 = pcStack_58;
code_r0x00010b4bfa6c:
  *(undefined8 *)((long)ppuVar2 + -0x30) = unaff_d9;
  *(ulong *)((long)ppuVar2 + -0x28) = uVar7;
  *(ulong *)((long)ppuVar2 + -0x20) = unaff_x20;
  *(uint **)((long)ppuVar2 + -0x18) = unaff_x19;
  *(undefined1 **)((long)ppuVar2 + -0x10) = puVar5;
  *(code **)((long)ppuVar2 + -8) = pcVar6;
  uVar4 = *puVar3;
  uVar1 = puVar3[1];
  if (uVar4 == uVar1) {
    func_0x000109311970(puVar3,uVar1,uVar1 + 1);
    uVar4 = *puVar3;
  }
  *puVar3 = uVar4 + 1;
  *(int *)(*(long *)(puVar3 + 2) + (long)(int)uVar4 * 4) = (int)param_1;
  return;
}



/* Entry: 10bd1e728; end: 10bd1e747;  */

void FUN_10bd1e728(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *unaff_x19;
  undefined4 uVar3;
  
  func_0x00010bd25100();
  uVar3 = *unaff_x19;
  iVar2 = *param_1;
  iVar1 = param_1[1];
  if (iVar2 == iVar1) {
    func_0x000109311970(param_1,iVar1,iVar1 + 1);
    iVar2 = *param_1;
  }
  *param_1 = iVar2 + 1;
  *(undefined4 *)(*(long *)(param_1 + 2) + (long)iVar2 * 4) = uVar3;
  return;
}



/* Entry: 10bd1e748; end: 10bd1e7f3;  */

/* WARNING: Possible PIC construction at 0x00010bd1e844: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bd1e848) */
/* WARNING: Removing unreachable block (ram,0x00010bd24d58) */

undefined8
FUN_10bd1e748(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  uint extraout_w8;
  long extraout_x8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_78;
  
  uVar4 = (undefined4)((ulong)param_3 >> 0x20);
  uVar3 = (uint)param_3;
  func_0x00010bd24b74();
  if ((bool)in_ZR) {
    func_0x00010bd24f7c();
    if ((bool)in_CY) {
      func_0x00010bd24f14();
      goto LAB_10bd1e7e0;
    }
    func_0x00010bd24c80();
    in_CY = 4 < (uint)param_2;
    in_ZR = 0;
    if ((uint)param_2 == 5) {
      if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) != 0) {
        func_0x00010bd250c0();
        uVar7 = *(undefined8 *)(unaff_x19 + 0x50);
        puVar2 = (undefined8 *)(unaff_x20 + extraout_x8);
        func_0x00010b4bf3a0();
        if ((puVar2 != (undefined8 *)0x0) && ((*(byte *)((long)puVar2 + 10) & 1) == 0)) {
          uVar7 = *puVar2;
        }
        return uVar7;
      }
      func_0x00010bd24f2c();
      if ((param_2 == (undefined8 *)0x0) || (func_0x00010bd24ba4(), ((ulong)param_2 & 1) != 0)) {
        func_0x00010bd24c14();
        FUN_10bd246a4();
        uVar7 = *param_2;
      }
      else {
        uVar7 = *(undefined8 *)(unaff_x19 + 0x50);
      }
      return uVar7;
    }
  }
  else {
    func_0x00010bd24e70();
LAB_10bd1e7e0:
    func_0x00010bd24e38();
  }
  puVar2 = (undefined8 *)*unaff_x21;
  puVar6 = &UNK_10f835303;
  func_0x00010bd25004();
  func_0x00010bd24fa0();
  uStack_78 = param_1;
  func_0x00010bd24c30();
  if ((bool)in_ZR) {
    func_0x00010bd24f7c();
    if ((bool)in_CY) {
      func_0x00010bd24f14();
      uVar7 = param_1;
      goto LAB_10bd1e898;
    }
    uVar7 = param_1;
    func_0x00010bd24c80();
    if ((int)puVar2 == 5) {
      if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) != 0) {
        func_0x00010bd24e20();
        uVar5 = SUB81(puVar6,0);
        func_0x00010bd251fc(puVar2);
        uVar7 = param_1;
        func_0x00010b4c0fe8();
        puVar2[2] = unaff_x19;
        if ((uVar3 & 1) != 0) {
          *(undefined1 *)(puVar2 + 1) = uVar5;
          *(undefined1 *)((long)puVar2 + 9) = 0;
        }
        func_0x00010b4c5278();
        *puVar2 = param_1;
        return uVar7;
      }
      param_5 = &uStack_78;
      func_0x00010bd24c14();
      goto SUB_10bd1e8ac;
    }
  }
  else {
    func_0x00010bd24e70();
    uVar7 = param_1;
LAB_10bd1e898:
    func_0x00010bd24e38();
  }
  puVar2 = (undefined8 *)*unaff_x21;
  puVar6 = &UNK_10f83530d;
  func_0x00010bd25004();
SUB_10bd1e8ac:
  func_0x00010bd24b60();
  if (puVar2 == (undefined8 *)0x0) {
    uVar8 = *param_5;
    func_0x00010bd24b3c();
    *puVar2 = uVar8;
    func_0x00010bd24c14();
    iVar1 = (int)puVar2;
    func_0x00010bd24f94();
    func_0x00010bd24e7c();
    func_0x00010bd1d3e8();
    if (iVar1 != -1) {
      func_0x00010bd25418();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return uVar7;
  }
  func_0x00010bd24ba4();
  if (((ulong)puVar2 & 1) == 0) {
    if ((*(byte *)(unaff_x19 + 1) >> 4 & 1) == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = *(undefined **)(unaff_x19 + 0x28);
    }
    func_0x00010bd24d7c();
  }
  uVar8 = *param_5;
  func_0x00010bd24b3c();
  *puVar2 = uVar8;
  func_0x00010bd24c14();
  *(undefined4 *)
   (CONCAT44(uVar4,uVar3) +
   (ulong)(uint)(*(int *)((long)puVar2 + 0x2c) +
                (int)((*(long *)(puVar6 + 0x28) -
                      *(long *)(*(long *)(*(long *)(puVar6 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(puVar6 + 4);
  return uVar7;
}



/* Entry: 10bd1e7f4; end: 10bd1e91b;  */

/* WARNING: Possible PIC construction at 0x00010bd1e844: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bd1e848) */
/* WARNING: Removing unreachable block (ram,0x00010bd24d58) */

void FUN_10bd1e7f4(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined *param_4,
                  undefined8 *param_5)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  uint extraout_w8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long unaff_x19;
  ulong *unaff_x21;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  uVar3 = (undefined4)((ulong)param_3 >> 0x20);
  uVar2 = (uint)param_3;
  func_0x00010bd24fa0();
  uStack_48 = param_1;
  func_0x00010bd24c30();
  if ((bool)in_ZR) {
    func_0x00010bd24f7c();
    if ((bool)in_CY) {
      func_0x00010bd24f14();
      goto LAB_10bd1e898;
    }
    func_0x00010bd24c80();
    if ((int)param_2 == 5) {
      if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) != 0) {
        func_0x00010bd24e20();
        uVar4 = SUB81(param_4,0);
        func_0x00010bd251fc(param_2);
        func_0x00010b4c0fe8();
        param_2[2] = unaff_x19;
        if ((uVar2 & 1) != 0) {
          *(undefined1 *)(param_2 + 1) = uVar4;
          *(undefined1 *)((long)param_2 + 9) = 0;
        }
        func_0x00010b4c5278();
        *param_2 = param_1;
        return;
      }
      param_5 = &uStack_48;
      func_0x00010bd24c14();
      goto SUB_10bd1e8ac;
    }
  }
  else {
    func_0x00010bd24e70();
LAB_10bd1e898:
    func_0x00010bd24e38();
  }
  param_2 = (undefined8 *)*unaff_x21;
  param_4 = &UNK_10f83530d;
  func_0x00010bd25004();
SUB_10bd1e8ac:
  func_0x00010bd24b60();
  if (param_2 == (undefined8 *)0x0) {
    uVar5 = *param_5;
    func_0x00010bd24b3c();
    *param_2 = uVar5;
    func_0x00010bd24c14();
    iVar1 = (int)param_2;
    func_0x00010bd24f94();
    func_0x00010bd24e7c();
    func_0x00010bd1d3e8();
    if (iVar1 != -1) {
      func_0x00010bd25418();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return;
  }
  func_0x00010bd24ba4();
  if (((ulong)param_2 & 1) == 0) {
    if ((*(byte *)(unaff_x19 + 1) >> 4 & 1) == 0) {
      param_4 = (undefined *)0x0;
    }
    else {
      param_4 = *(undefined **)(unaff_x19 + 0x28);
    }
    func_0x00010bd24d7c();
  }
  uVar5 = *param_5;
  func_0x00010bd24b3c();
  *param_2 = uVar5;
  func_0x00010bd24c14();
  *(undefined4 *)
   (CONCAT44(uVar3,uVar2) +
   (ulong)(uint)(*(int *)((long)param_2 + 0x2c) +
                (int)((*(long *)(param_4 + 0x28) -
                      *(long *)(*(long *)(*(long *)(param_4 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(param_4 + 4);
  return;
}



/* Entry: 10bd1e91c; end: 10bd1e9ab;  */

/* WARNING: Possible PIC construction at 0x00010b4bfbc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b4bfbc8) */
/* WARNING: Removing unreachable block (ram,0x00010b4c541c) */

undefined8
FUN_10bd1e91c(undefined8 param_1,int *param_2,ulong param_3,undefined8 param_4,ulong param_5,
             int *param_6)

{
  int iVar1;
  undefined1 ***pppuVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  int *piVar3;
  int iVar4;
  long extraout_x8;
  int *unaff_x19;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined1 **ppuVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  func_0x00010bd24b8c();
  if ((bool)in_ZR) {
    func_0x00010bd24f88();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x00010bd24f20();
      goto LAB_10bd1e998;
    }
    func_0x00010bd24c50();
    in_CY = 4 < (uint)param_2;
    in_ZR = (uint)param_2 == 5;
    if (!(bool)in_ZR) goto LAB_10bd1e99c;
    if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) == 0) {
      func_0x00010bd24cd4();
      func_0x00010bd1bc6c();
      return *(undefined8 *)(*(long *)(param_2 + 2) + (long)(int)unaff_x20 * 8);
    }
    func_0x00010bd24ca4();
    func_0x00010b4c52f4();
    if (param_2 != (int *)0x0) {
      func_0x00010b4c5354();
      return *(undefined8 *)(extraout_x8 + (long)(int)unaff_x19 * 8);
    }
    func_0x00010b4c5038();
    func_0x00010b4c52d4();
    func_0x00010b4c5068();
    func_0x00010b4c52cc();
    unaff_x19 = param_6;
    puStack_40 = &stack0xfffffffffffffff0;
    pcStack_38 = (code *)&LAB_10b4bfb74;
code_r0x00010b4bfb74:
    pppuVar2 = &ppuStack_90;
    uStack_78 = unaff_d8;
    func_0x00010b4c5360();
    *(int **)(param_2 + 4) = unaff_x19;
    if ((param_3 & 1) == 0) {
      piVar3 = *(int **)param_2;
    }
    else {
      piVar3 = param_2;
      func_0x00010b4c55b4();
      func_0x00010b4c370c();
      *(int **)param_2 = piVar3;
    }
    unaff_x19 = param_2;
    unaff_x20 = param_5;
    ppuVar5 = &puStack_40;
    pcVar6 = (code *)&UNK_10b4bfbc8;
    uVar7 = param_1;
    goto code_r0x00010b4bfbd0;
  }
  func_0x00010bd24e70();
LAB_10bd1e998:
  func_0x00010bd24e38();
LAB_10bd1e99c:
  param_2 = (int *)*unaff_x22;
  func_0x00010bd25004();
  pcStack_38 = FUN_10bd1e9ac;
  puStack_40 = &stack0xfffffffffffffff0;
  func_0x00010bd24fa0();
  uStack_78 = param_1;
  func_0x00010bd24c30();
  if ((bool)in_ZR) {
    func_0x00010bd24f88();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x00010bd24f20();
      goto LAB_10bd1ea58;
    }
    uVar8 = param_1;
    func_0x00010bd24c80();
    uVar7 = param_1;
    if ((int)param_2 == 5) {
      if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) == 0) {
        func_0x00010bd24c14();
        FUN_10bd1ea6c();
        return uVar8;
      }
      func_0x00010bd24e20();
      param_5 = (ulong)*(byte *)(*(long *)(unaff_x19 + 0xe) + 0x88);
      func_0x00010bd251fc(param_2);
      goto code_r0x00010b4bfb74;
    }
  }
  else {
    func_0x00010bd24e70();
LAB_10bd1ea58:
    func_0x00010bd24e38();
    uVar7 = unaff_d8;
  }
  piVar3 = (int *)*unaff_x21;
  func_0x00010bd25004();
  pcStack_88 = FUN_10bd1ea6c;
  ppuStack_90 = &puStack_40;
  func_0x00010bd25100();
  param_1 = *(undefined8 *)unaff_x19;
  pppuVar2 = (undefined1 ***)auStack_80;
  ppuVar5 = ppuStack_90;
  pcVar6 = pcStack_88;
code_r0x00010b4bfbd0:
  *(undefined8 *)((long)pppuVar2 + -0x30) = unaff_d9;
  *(undefined8 *)((long)pppuVar2 + -0x28) = uVar7;
  *(ulong *)((long)pppuVar2 + -0x20) = unaff_x20;
  *(int **)((long)pppuVar2 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)pppuVar2 + -0x10) = ppuVar5;
  *(code **)((long)pppuVar2 + -8) = pcVar6;
  iVar4 = *piVar3;
  iVar1 = piVar3[1];
  uVar7 = param_1;
  if (iVar4 == iVar1) {
    func_0x000109340710(piVar3,iVar1,iVar1 + 1);
    iVar4 = *piVar3;
  }
  *piVar3 = iVar4 + 1;
  *(undefined8 *)(*(long *)(piVar3 + 2) + (long)iVar4 * 8) = param_1;
  return uVar7;
}



/* Entry: 10bd1e9ac; end: 10bd1ea6b;  */

/* WARNING: Possible PIC construction at 0x00010b4bfbc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b4bfbc8) */
/* WARNING: Removing unreachable block (ram,0x00010b4c541c) */

void FUN_10bd1e9ac(undefined8 param_1,int *param_2,ulong param_3)

{
  int iVar1;
  undefined1 **ppuVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  int *piVar3;
  int iVar4;
  int *unaff_x19;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  undefined1 *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  ppuVar2 = (undefined1 **)auStack_50;
  func_0x00010bd24fa0();
  uStack_48 = param_1;
  func_0x00010bd24c30();
  if ((bool)in_ZR) {
    func_0x00010bd24f88();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x00010bd24f20();
      goto LAB_10bd1ea58;
    }
    func_0x00010bd24c80();
    uVar7 = param_1;
    if ((int)param_2 == 5) {
      if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) == 0) {
        func_0x00010bd24c14();
        FUN_10bd1ea6c();
        return;
      }
      func_0x00010bd24e20();
      unaff_x20 = (ulong)*(byte *)(*(long *)(unaff_x19 + 0xe) + 0x88);
      func_0x00010bd251fc(param_2);
      ppuVar2 = &puStack_60;
      uStack_48 = unaff_d8;
      func_0x00010b4c5360();
      *(int **)(param_2 + 4) = unaff_x19;
      if ((param_3 & 1) == 0) {
        piVar3 = *(int **)param_2;
      }
      else {
        piVar3 = param_2;
        func_0x00010b4c55b4();
        func_0x00010b4c370c();
        *(int **)param_2 = piVar3;
      }
      unaff_x19 = param_2;
      puVar5 = &stack0xfffffffffffffff0;
      pcVar6 = (code *)&UNK_10b4bfbc8;
      goto code_r0x00010b4bfbd0;
    }
  }
  else {
    func_0x00010bd24e70();
LAB_10bd1ea58:
    func_0x00010bd24e38();
    uVar7 = unaff_d8;
  }
  piVar3 = (int *)*unaff_x21;
  func_0x00010bd25004();
  pcStack_58 = FUN_10bd1ea6c;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x00010bd25100();
  param_1 = *(undefined8 *)unaff_x19;
  puVar5 = puStack_60;
  pcVar6 = pcStack_58;
code_r0x00010b4bfbd0:
  *(undefined8 *)((long)ppuVar2 + -0x30) = unaff_d9;
  *(undefined8 *)((long)ppuVar2 + -0x28) = uVar7;
  *(ulong *)((long)ppuVar2 + -0x20) = unaff_x20;
  *(int **)((long)ppuVar2 + -0x18) = unaff_x19;
  *(undefined1 **)((long)ppuVar2 + -0x10) = puVar5;
  *(code **)((long)ppuVar2 + -8) = pcVar6;
  iVar4 = *piVar3;
  iVar1 = piVar3[1];
  if (iVar4 == iVar1) {
    func_0x000109340710(piVar3,iVar1,iVar1 + 1);
    iVar4 = *piVar3;
  }
  *piVar3 = iVar4 + 1;
  *(undefined8 *)(*(long *)(piVar3 + 2) + (long)iVar4 * 8) = param_1;
  return;
}



/* Entry: 10bd1ea6c; end: 10bd1ea8b;  */

void FUN_10bd1ea6c(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *unaff_x19;
  undefined8 uVar3;
  
  func_0x00010bd25100();
  uVar3 = *unaff_x19;
  iVar2 = *param_1;
  iVar1 = param_1[1];
  if (iVar2 == iVar1) {
    func_0x000109340710(param_1,iVar1,iVar1 + 1);
    iVar2 = *param_1;
  }
  *param_1 = iVar2 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (long)iVar2 * 8) = uVar3;
  return;
}



/* Entry: 10bd1ea8c; end: 10bd1eb3b;  */

undefined1 * FUN_10bd1ea8c(byte *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  byte *pbVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  uint extraout_w8;
  long extraout_x8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  ulong unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  
  uVar6 = (undefined4)((ulong)param_2 >> 0x20);
  uVar5 = (uint)param_2;
  func_0x00010bd24b74();
  if ((bool)in_ZR) {
    func_0x00010bd24f7c();
    if ((bool)in_CY) {
      func_0x00010bd24f14();
      goto LAB_10bd1eb28;
    }
    func_0x00010bd24c80();
    in_CY = 6 < (uint)param_1;
    in_ZR = 0;
    if ((uint)param_1 == 7) {
      if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) != 0) {
        func_0x00010bd250c0();
        pbVar3 = (byte *)(unaff_x20 + extraout_x8);
        func_0x00010b4c52f4();
        if ((pbVar3 != (byte *)0x0) && ((pbVar3[10] & 1) == 0)) {
          unaff_x19 = (ulong)*pbVar3;
        }
        return (undefined1 *)(ulong)((uint)unaff_x19 & 1);
      }
      func_0x00010bd24f2c();
      if ((param_1 == (byte *)0x0) || (func_0x00010bd24ba4(), ((ulong)param_1 & 1) != 0)) {
        func_0x00010bd24c14();
        FUN_10bd20ed0();
        bVar1 = *param_1;
      }
      else {
        bVar1 = *(byte *)(unaff_x19 + 0x50);
      }
      return (undefined1 *)(ulong)(bVar1 & 1);
    }
  }
  else {
    func_0x00010bd24e70();
LAB_10bd1eb28:
    func_0x00010bd24e38();
  }
  puVar4 = (undefined1 *)*unaff_x21;
  func_0x00010bd24ff8();
  func_0x00010bd25614();
  func_0x00010bd24f68();
  func_0x00010bd24c30();
  if ((bool)in_ZR) {
    func_0x00010bd24f7c();
    if (!(bool)in_CY) {
      puVar8 = param_4;
      func_0x00010bd24c80();
      if ((int)puVar4 == 7) {
        if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) != 0) {
          func_0x00010bd24c04();
          func_0x00010bd24d6c(puVar4);
          func_0x00010bd256a4();
          func_0x00010bd2554c();
          func_0x00010b4c5238();
          *(undefined1 **)(puVar4 + 0x10) = param_4;
          if ((uVar5 & 1) != 0) {
            func_0x00010b4c560c();
          }
          func_0x00010b4c5278();
          *puVar4 = (char)unaff_x19;
          return puVar4;
        }
        func_0x00010bd24d94();
        FUN_10bd1ebe8();
        return puVar4;
      }
      goto LAB_10bd1ebd8;
    }
    func_0x00010bd24f14();
    puVar8 = param_4;
  }
  else {
    func_0x00010bd24e70();
    puVar8 = param_4;
  }
  func_0x00010bd24e38();
LAB_10bd1ebd8:
  puVar4 = (undefined1 *)*unaff_x22;
  puVar7 = &UNK_10f83533b;
  func_0x00010bd24ff8();
  func_0x00010bd24b60();
  if (puVar4 == (undefined1 *)0x0) {
    uVar2 = *puVar8;
    func_0x00010bd24b3c();
    *puVar4 = uVar2;
    func_0x00010bd24c14();
    func_0x00010bd24f94();
    func_0x00010bd24e7c();
    func_0x00010bd1d3e8();
    if ((int)puVar4 != -1) {
      func_0x00010bd25418();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return puVar4;
  }
  func_0x00010bd24ba4();
  if (((ulong)puVar4 & 1) == 0) {
    if ((*(byte *)(unaff_x19 + 1) >> 4 & 1) == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = *(undefined **)(unaff_x19 + 0x28);
    }
    func_0x00010bd24d7c();
  }
  uVar2 = *puVar8;
  func_0x00010bd24b3c();
  *puVar4 = uVar2;
  func_0x00010bd24c14();
  *(undefined4 *)
   (CONCAT44(uVar6,uVar5) +
   (ulong)(uint)(*(int *)(puVar4 + 0x2c) +
                (int)((*(long *)(puVar7 + 0x28) -
                      *(long *)(*(long *)(*(long *)(puVar7 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(puVar7 + 4);
  return puVar4;
}



/* Entry: 10bd1eb3c; end: 10bd1ebe7;  */

void FUN_10bd1eb3c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  uint extraout_w8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long unaff_x19;
  undefined8 *unaff_x22;
  undefined1 uStack000000000000000f;
  
  uVar5 = (undefined4)((ulong)param_2 >> 0x20);
  uVar4 = (uint)param_2;
  func_0x00010bd25614();
  func_0x00010bd24f68();
  uStack000000000000000f = SUB81(param_4,0);
  func_0x00010bd24c30();
  if ((bool)in_ZR) {
    func_0x00010bd24f7c();
    if (!(bool)in_CY) {
      puVar7 = param_4;
      func_0x00010bd24c80();
      if ((int)param_1 == 7) {
        if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) != 0) {
          func_0x00010bd24c04();
          func_0x00010bd24d6c(param_1);
          func_0x00010bd256a4();
          func_0x00010bd2554c();
          func_0x00010b4c5238();
          *(undefined1 **)(param_1 + 0x10) = param_4;
          if ((uVar4 & 1) != 0) {
            func_0x00010b4c560c();
          }
          func_0x00010b4c5278();
          *param_1 = (char)unaff_x19;
          return;
        }
        func_0x00010bd24d94();
        FUN_10bd1ebe8();
        return;
      }
      goto LAB_10bd1ebd8;
    }
    func_0x00010bd24f14();
    puVar7 = param_4;
  }
  else {
    func_0x00010bd24e70();
    puVar7 = param_4;
  }
  func_0x00010bd24e38();
LAB_10bd1ebd8:
  puVar3 = (undefined1 *)*unaff_x22;
  puVar6 = &UNK_10f83533b;
  func_0x00010bd24ff8();
  func_0x00010bd24b60();
  if (puVar3 == (undefined1 *)0x0) {
    uVar1 = *puVar7;
    func_0x00010bd24b3c();
    *puVar3 = uVar1;
    func_0x00010bd24c14();
    iVar2 = (int)puVar3;
    func_0x00010bd24f94();
    func_0x00010bd24e7c();
    func_0x00010bd1d3e8();
    if (iVar2 != -1) {
      func_0x00010bd25418();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return;
  }
  func_0x00010bd24ba4();
  if (((ulong)puVar3 & 1) == 0) {
    if ((*(byte *)(unaff_x19 + 1) >> 4 & 1) == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = *(undefined **)(unaff_x19 + 0x28);
    }
    func_0x00010bd24d7c();
  }
  uVar1 = *puVar7;
  func_0x00010bd24b3c();
  *puVar3 = uVar1;
  func_0x00010bd24c14();
  *(undefined4 *)
   (CONCAT44(uVar5,uVar4) +
   (ulong)(uint)(*(int *)(puVar3 + 0x2c) +
                (int)((*(long *)(puVar6 + 0x28) -
                      *(long *)(*(long *)(*(long *)(puVar6 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(puVar6 + 4);
  return;
}



/* Entry: 10bd1ebe8; end: 10bd1ece3;  */

void FUN_10bd1ebe8(undefined8 param_1,long param_2,long param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint extraout_w8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long unaff_x19;
  
  uVar3 = (undefined4)((ulong)param_1 >> 0x20);
  uVar2 = (uint)param_1;
  func_0x00010bd24b60();
  if (CONCAT44(uVar3,uVar2) == 0) {
    uVar1 = *param_4;
    func_0x00010bd24b3c();
    *(undefined1 *)CONCAT44(uVar3,uVar2) = uVar1;
    func_0x00010bd24c14();
    func_0x00010bd24f94();
    func_0x00010bd24e7c();
    func_0x00010bd1d3e8();
    if (uVar2 != 0xffffffff) {
      func_0x00010bd25418();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return;
  }
  func_0x00010bd24ba4();
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(unaff_x19 + 1) >> 4 & 1) == 0) {
      param_3 = 0;
    }
    else {
      param_3 = *(long *)(unaff_x19 + 0x28);
    }
    func_0x00010bd24d7c();
  }
  uVar1 = *param_4;
  func_0x00010bd24b3c();
  *(undefined1 *)CONCAT44(uVar3,uVar2) = uVar1;
  func_0x00010bd24c14();
  *(undefined4 *)
   (param_2 +
   (ulong)(uint)(*(int *)(CONCAT44(uVar3,uVar2) + 0x2c) +
                (int)((*(long *)(param_3 + 0x28) -
                      *(long *)(*(long *)(*(long *)(param_3 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(param_3 + 4);
  return;
}



/* Entry: 10bd1ece4; end: 10bd1ed07;  */

long FUN_10bd1ece4(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  func_0x00010bd1bce4();
  return *(long *)(param_1 + 8) + (long)param_4;
}



/* Entry: 10bd1ed08; end: 10bd1edaf;  */

/* WARNING: Possible PIC construction at 0x00010b4bfcf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b4bfcfc) */
/* WARNING: Removing unreachable block (ram,0x00010b4c50ac) */

void FUN_10bd1ed08(int *param_1,ulong param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar2;
  undefined1 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x22;
  undefined1 unaff_w30;
  undefined1 uStack000000000000000f;
  
  uStack000000000000000f = param_4;
  func_0x00010bd25614();
  func_0x00010bd24f68();
  func_0x00010bd24c30();
  if ((bool)in_ZR) {
    func_0x00010bd24f88();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x00010bd24f20();
      goto LAB_10bd1ed9c;
    }
    func_0x00010bd24c80();
    if ((int)param_1 == 7) {
      if (((byte)unaff_x19[1] >> 3 & 1) == 0) {
        func_0x00010bd24d94();
        FUN_10bd1edb0();
        return;
      }
      func_0x00010bd24c04();
      func_0x00010bd24cb8();
      func_0x00010bd2565c();
      func_0x00010bd2554c();
      func_0x000107c398f0();
      func_0x00010b4c510c();
      func_0x00010b4c56a0();
      if ((param_2 & 1) == 0) {
        param_1 = (int *)*unaff_x20;
      }
      else {
        func_0x00010b4c508c();
        func_0x00010b4c373c();
        *unaff_x20 = param_1;
      }
      goto code_r0x00010b4bfd04;
    }
  }
  else {
    func_0x00010bd24e70();
LAB_10bd1ed9c:
    func_0x00010bd24e38();
  }
  param_1 = (int *)*unaff_x22;
  func_0x00010bd24ff8();
  func_0x00010bd25100();
  unaff_w30 = *unaff_x19;
code_r0x00010b4bfd04:
  iVar2 = *param_1;
  iVar1 = param_1[1];
  if (iVar2 == iVar1) {
    func_0x000109311b98(param_1,iVar1,iVar1 + 1);
    iVar2 = *param_1;
  }
  *param_1 = iVar2 + 1;
  *(undefined1 *)(*(long *)(param_1 + 2) + (long)iVar2) = unaff_w30;
  return;
}



/* Entry: 10bd1edb0; end: 10bd1edcf;  */

void FUN_10bd1edb0(int *param_1)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *unaff_x19;
  
  func_0x00010bd25100();
  uVar2 = *unaff_x19;
  iVar3 = *param_1;
  iVar1 = param_1[1];
  if (iVar3 == iVar1) {
    func_0x000109311b98(param_1,iVar1,iVar1 + 1);
    iVar3 = *param_1;
  }
  *param_1 = iVar3 + 1;
  *(undefined1 *)(*(long *)(param_1 + 2) + (long)iVar3) = uVar2;
  return;
}



/* Entry: 10bd1edd0; end: 10bd1f13f;  */

ulong * FUN_10bd1edd0(ulong *param_1,ulong *param_2,undefined8 param_3,ulong *param_4,ulong *param_5
                     )

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong **ppuVar4;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  undefined *puVar12;
  uint extraout_w8;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *extraout_x8_01;
  ulong extraout_x8_02;
  long unaff_x21;
  undefined8 *******pppppppuVar13;
  code *pcVar14;
  ulong *puStack_90;
  undefined8 ******ppppppuStack_70;
  code *pcStack_68;
  ulong *puStack_60;
  undefined8 *****pppppuStack_40;
  undefined8 uStack_38;
  
  puVar8 = param_2;
  func_0x00010bd24c30();
  if ((bool)in_ZR) {
    func_0x00010bd2551c();
    if ((bool)in_CY) {
      func_0x00010bd24f14();
      goto LAB_10bd1eed0;
    }
    func_0x00010bd24df4();
    in_CY = 8 < (uint)puVar8;
    in_ZR = 0;
    if ((uint)puVar8 == 9) {
      if ((*(byte *)((long)param_4 + 1) >> 3 & 1) != 0) {
        func_0x00010bd25278();
        goto LAB_10bd1ee84;
      }
      func_0x00010bd250a8();
      if (puVar8 == (ulong *)0x0) {
LAB_10bd1ee24:
        func_0x00010bd25398();
        uVar5 = (int)puVar8 == 1;
        if ((bool)uVar5) {
          func_0x00010bd250a8();
          if (puVar8 == (ulong *)0x0) {
            func_0x00010bd24c70();
            FUN_10bd23d04();
          }
          else {
            func_0x00010bd24c70();
            FUN_10bd23c68();
            puVar8 = (ulong *)*puVar8;
          }
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          func_0x00010084dde8();
          return puVar8;
        }
        func_0x00010bd24fd4();
        if ((int)puVar8 != 0) {
          func_0x00010bd24c70();
          FUN_10bd23da0();
          goto LAB_10bd1ee84;
        }
        func_0x00010bd24c70();
        FUN_10bd23e3c();
        func_0x00010bd256c4();
        if (!(bool)uVar5) {
          puVar8 = (ulong *)(extraout_x8 & 0xfffffffffffffffc);
          goto LAB_10bd1ee84;
        }
      }
      else {
        func_0x00010bd24c70();
        FUN_10bd1bdd4();
        if (((ulong)puVar8 & 1) != 0) goto LAB_10bd1ee24;
      }
      puVar8 = (ulong *)param_4[10];
LAB_10bd1ee84:
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
                (param_1,puVar8);
      return param_1;
    }
  }
  else {
    func_0x00010bd24e70();
LAB_10bd1eed0:
    func_0x00010bd2506c();
  }
  uVar9 = *param_2;
  func_0x00010bd24e88();
  uStack_38 = 0x10bd1eee4;
  puStack_60 = param_2;
  pppppuStack_40 = (undefined8 *****)&stack0xfffffffffffffff0;
  func_0x00010bd24b8c();
  if ((bool)in_ZR) {
    func_0x00010bd24f7c();
    if ((bool)in_CY) {
      func_0x00010bd24f14();
      goto LAB_10bd1eff0;
    }
    func_0x00010bd24ce4();
    in_CY = 8 < (uint)uVar9;
    in_ZR = 0;
    param_4 = param_5;
    if ((uint)uVar9 == 9) {
      if ((*(byte *)((long)param_1 + 1) >> 3 & 1) != 0) {
        puVar7 = (undefined8 *)(unaff_x21 + (ulong)(uint)param_2[5]);
        func_0x00010b4c56b4(puVar7,*(undefined4 *)((long)param_1 + 4),param_1[10]);
        if ((puVar7 != (undefined8 *)0x0) && ((*(byte *)((long)puVar7 + 10) & 1) == 0)) {
          param_1 = (ulong *)*puVar7;
        }
        return param_1;
      }
      func_0x00010bd24f2c();
      if (uVar9 != 0) {
        func_0x00010bd24cd4();
        FUN_10bd1bdd4();
        if ((uVar9 & 1) == 0) goto LAB_10bd1efb0;
      }
      func_0x00010bd25454();
      uVar5 = (int)uVar9 == 1;
      if ((bool)uVar5) {
        func_0x00010bd24f2c();
        if (uVar9 == 0) {
          func_0x00010bd24cd4();
          FUN_10bd23d04();
        }
        else {
          func_0x00010bd24cd4();
          FUN_10bd23c68();
        }
        func_0x000107c2b97c();
        return param_5;
      }
      param_2 = param_2 + 1;
      func_0x00010bd21e40(param_2,param_1);
      if ((int)param_2 != 0) {
        func_0x00010bd24cd4();
        func_0x00010bd24b28();
        if (param_2 != (ulong *)0x0) {
          func_0x00010bd24c98();
          return (ulong *)((long)param_1 + ((ulong)param_2 & 0xffffffff));
        }
        func_0x00010bd24c40();
        func_0x00010bd24af8();
        if ((int)param_2 != 0) {
          func_0x00010bd24c40();
          func_0x00010bd24b10();
          func_0x00010bd25074();
          if ((extraout_w8 >> 5 & 1) == 0) {
            return param_2;
          }
          return (ulong *)*param_2;
        }
        func_0x00010bd24c8c();
        return (ulong *)((long)param_1 + ((ulong)param_2 & 0xffffffff));
      }
      func_0x00010bd24cd4();
      FUN_10bd23e3c();
      func_0x00010bd256c4();
      if (!(bool)uVar5) {
        return (ulong *)(extraout_x8_00 & 0xfffffffffffffffc);
      }
LAB_10bd1efb0:
      return (ulong *)param_1[10];
    }
  }
  else {
    func_0x00010bd24e70();
LAB_10bd1eff0:
    func_0x00010bd24e38();
  }
  puVar10 = (ulong *)*param_2;
  puVar8 = (ulong *)&UNK_10f835365;
  puVar6 = param_1;
  func_0x00010bd250b8();
  ppuVar4 = &puStack_90;
  pcStack_68 = (code *)0x10bd1f008;
  pppppppuVar13 = &ppppppuStack_70;
  puVar11 = puVar10;
  puStack_90 = param_2;
  ppppppuStack_70 = &pppppuStack_40;
  func_0x00010bd24c30();
  if ((bool)in_ZR) {
    func_0x00010bd2551c();
    if ((bool)in_CY) {
      func_0x00010bd24f14();
      goto LAB_10bd1f12c;
    }
    func_0x00010bd24df4();
    if ((int)puVar11 == 9) {
      if ((*(byte *)((long)puVar8 + 1) >> 3 & 1) == 0) {
        func_0x00010bd250a8();
        if (puVar11 == (ulong *)0x0) {
LAB_10bd1f05c:
          func_0x00010bd25398();
          uVar5 = (int)puVar11 == 1;
          if ((bool)uVar5) {
            func_0x00010bd250a8();
            if (puVar11 == (ulong *)0x0) {
              func_0x00010bd24c70();
              FUN_10bd23d04();
            }
            else {
              func_0x00010bd24c70();
              FUN_10bd23c68();
              puVar11 = (ulong *)*puVar11;
            }
            if (((*puVar11 & 1) == 0) || (uVar9 = puVar11[1], uVar9 == 0)) {
              uVar9 = *puVar11;
              extraout_x8_01[1] = puVar11[1];
              *extraout_x8_01 = uVar9;
            }
            else {
              piVar1 = (int *)(uVar9 + 8);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = *piVar1 + 4;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              *extraout_x8_01 = 1;
              extraout_x8_01[1] = uVar9;
              if (1 < *puVar11) {
                func_0x00010ae6ff78(extraout_x8_01,puVar11,8);
              }
            }
            return extraout_x8_01;
          }
          func_0x00010bd24fd4();
          if ((int)puVar11 != 0) {
            func_0x00010bd24c70();
            FUN_10bd23da0();
            goto LAB_10bd1f084;
          }
          func_0x00010bd24c70();
          FUN_10bd23e3c();
          func_0x00010bd256c4();
          if ((bool)uVar5) goto LAB_10bd1f0cc;
          puVar8 = (ulong *)(extraout_x8_02 & 0xfffffffffffffffc);
        }
        else {
          func_0x00010bd24c70();
          FUN_10bd1bdd4();
          if (((ulong)puVar11 & 1) != 0) goto LAB_10bd1f05c;
LAB_10bd1f0cc:
          puVar8 = (ulong *)puVar8[10];
        }
        puVar6 = puVar8;
        puVar12 = (undefined *)(long)(char)*(byte *)((long)puVar8 + 0x17);
        if ((long)(char)*(byte *)((long)puVar8 + 0x17) < 0) {
          puVar6 = (ulong *)*puVar8;
          puVar12 = (undefined *)puVar8[1];
        }
      }
      else {
        func_0x00010bd25278();
LAB_10bd1f084:
        puVar6 = (ulong *)*puVar11;
        puVar12 = (undefined *)puVar11[1];
        if (-1 < (char)*(byte *)((long)puVar11 + 0x17)) {
          puVar6 = puVar11;
          puVar12 = (undefined *)(ulong)*(byte *)((long)puVar11 + 0x17);
        }
      }
      ppuVar4 = &puStack_60;
      puVar10 = extraout_x8_01;
      puVar8 = param_4;
      pppppppuVar13 = (undefined8 *******)ppppppuStack_70;
      pcVar14 = pcStack_68;
      goto code_r0x00010084d30c;
    }
  }
  else {
    func_0x00010bd24e70();
LAB_10bd1f12c:
    func_0x00010bd2506c();
  }
  puVar10 = (ulong *)*puVar10;
  puVar12 = &UNK_10f835378;
  pcVar14 = FUN_10bd1f140;
  func_0x00010bd24e88();
  param_1 = extraout_x8_01;
code_r0x00010084d30c:
  *(ulong **)((long)ppuVar4 + -0x20) = puVar8;
  *(ulong **)((long)ppuVar4 + -0x18) = param_1;
  *(undefined8 ********)((long)ppuVar4 + -0x10) = pppppppuVar13;
  *(code **)((long)ppuVar4 + -8) = pcVar14;
  if (puVar12 < (undefined *)0x10) {
    func_0x00010084ce44(puVar10);
  }
  else {
    func_0x000107c34fe4(puVar6,puVar12);
    *puVar10 = 1;
    puVar10[1] = (ulong)puVar6;
  }
  return puVar10;
}



/* Entry: 10bd1f140; end: 10bd1f143;  */

undefined8 * FUN_10bd1f140(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 0x10) {
    func_0x00010084ce44(param_1);
  }
  else {
    func_0x000107c34fe4(param_2,param_3);
    *param_1 = 1;
    param_1[1] = param_2;
  }
  return param_1;
}



/* Entry: 10bd1f144; end: 10bd1f373;  */

/* WARNING: Possible PIC construction at 0x00010bd1f2e8: Changing call to branch */

ulong * FUN_10bd1f144(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  byte bVar5;
  char cVar6;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  undefined1 uVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  undefined8 uVar14;
  uint uVar15;
  uint extraout_w8;
  ulong uVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  uint uVar17;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  ulong *unaff_x19;
  ulong *puVar18;
  ulong *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 unaff_x23;
  ulong uVar19;
  undefined8 unaff_x24;
  undefined1 *puVar20;
  undefined8 unaff_x30;
  code *pcVar21;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  long lStack_a8;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  puVar18 = &uStack_60;
  puVar20 = &stack0xfffffffffffffff0;
  puVar11 = param_3;
  func_0x00010bd24bdc();
  if ((bool)in_ZR) {
    func_0x00010bd2551c();
    if (!(bool)in_CY) {
      func_0x00010bd24df4();
      unaff_x19 = param_4;
      if ((int)param_1 == 9) {
        if ((*(byte *)((long)param_3 + 1) >> 3 & 1) != 0) {
          func_0x00010bd24fc4();
          uStack_58 = param_4[1];
          uStack_60 = *param_4;
          uStack_50 = param_4[2];
          *param_4 = 0;
          param_4[1] = 0;
          param_4[2] = 0;
          func_0x00010bd256b0(param_1);
          func_0x00010b4c0df8();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_60);
          return puVar18;
        }
        func_0x00010bd25398();
        if ((int)param_1 != 1) {
          func_0x00010bd24fd4();
          if ((int)param_1 != 0) {
            func_0x00010b91ad64(param_3);
            func_0x00010bd24c70();
            func_0x00010bd1f4dc();
            uVar19 = (ulong)*(char *)((long)param_4 + 0x17);
            puVar11 = param_4;
            if ((long)uVar19 < 0) {
              puVar11 = (ulong *)*param_4;
              uVar19 = param_4[1];
            }
            func_0x00010bd24c70();
            FUN_10bd1f514();
            func_0x00010bd25648(param_3,puVar11,uVar19,unaff_x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)
              PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm_1103462b8
            )();
            return param_3;
          }
          func_0x00010bd250a8();
          if (param_1 != (ulong *)0x0) {
            func_0x00010bd24c70();
            FUN_10bd1bdd4();
            if (((ulong)param_1 & 1) == 0) {
              func_0x00010bd24e40();
              FUN_10bd1f374();
              func_0x00010bd24c70();
              FUN_10bd1f51c();
              *param_1 = (ulong)&DAT_11383d918;
            }
          }
          func_0x00010bd24c70();
          FUN_10bd1f51c();
          uVar19 = unaff_x21[1];
          if ((uVar19 & 1) != 0) {
            uVar19 = *(ulong *)(uVar19 & 0xfffffffffffffffe);
          }
          func_0x00010bd25648();
          if ((*param_1 & 3) != 0) {
            puVar18 = (ulong *)(*param_1 & 0xfffffffffffffffc);
            puVar11 = puVar18;
            if (*(char *)((long)puVar18 + 0x17) < '\0') {
              puVar11 = (ulong *)*puVar18;
              func_0x000107c60e14(puVar11);
            }
            uVar16 = param_4[1];
            uVar19 = *param_4;
            puVar18[2] = param_4[2];
            puVar18[1] = uVar16;
            *puVar18 = uVar19;
            *(undefined1 *)((long)param_4 + 0x17) = 0;
            *(undefined1 *)param_4 = 0;
            return puVar11;
          }
          if (uVar19 == 0) {
            puVar11 = param_1;
            func_0x000100063c9c();
            uVar19 = *param_4;
            puVar11[1] = param_4[1];
            *puVar11 = uVar19;
            puVar11[2] = param_4[2];
            *param_4 = 0;
            param_4[1] = 0;
            param_4[2] = 0;
            uVar19 = 2;
          }
          else {
            puVar11 = (ulong *)&stack0xffffffffffffff78;
            func_0x0001072efdf4(puVar11,param_4);
            uVar19 = 3;
          }
          *param_1 = uVar19 | (ulong)puVar11;
          return puVar11;
        }
        func_0x00010bd250a8();
        puVar11 = param_4;
        if (param_1 == (ulong *)0x0) {
          uVar19 = (ulong)*(char *)((long)param_4 + 0x17);
          if ((long)uVar19 < 0) {
            puVar11 = (ulong *)*param_4;
            uVar19 = param_4[1];
          }
          func_0x00010bd24c70();
          func_0x00010bd1f4a4();
          func_0x00010bd25648();
        }
        else {
          func_0x00010bd24c70();
          FUN_10bd1bdd4();
          if (((ulong)param_1 & 1) == 0) {
            func_0x00010bd24e40();
            FUN_10bd1f374();
            uStack_48 = unaff_x21[1];
            if ((uStack_48 & 1) != 0) {
              func_0x00010bd25400();
              uStack_48 = extraout_x8_03;
            }
            puVar18 = &uStack_48;
            func_0x00010b4cc44c();
            param_1 = puVar18;
            func_0x00010bd24c70();
            func_0x00010bd1f46c();
            *param_1 = (ulong)puVar18;
          }
          uVar19 = (ulong)*(char *)((long)param_4 + 0x17);
          if ((long)uVar19 < 0) {
            puVar11 = (ulong *)*param_4;
            uVar19 = param_4[1];
          }
          func_0x00010bd24c70();
          func_0x00010bd1f46c();
          param_1 = (ulong *)*param_1;
        }
        if ((*param_1 & 1) == 0) {
          if (0xf < uVar19) {
code_r0x00010ae70a44:
            func_0x00010ae70764(puVar11,uVar19);
            *param_1 = 1;
            param_1[1] = (ulong)puVar11;
            return param_1;
          }
code_r0x00010ae709a0:
          func_0x000107c2b988(param_1,puVar11,uVar19);
          return param_1;
        }
        puVar18 = (ulong *)param_1[1];
        if (uVar19 < 0x10) {
          if (puVar18 != (ulong *)0x0) {
            if (*param_1 - 1 != 0) {
              func_0x00010ae6fe50(*param_1 - 1);
            }
            func_0x000107c2b988(param_1,puVar11,uVar19);
            puVar11 = puVar18 + 1;
            do {
              uVar19 = *puVar11;
              cVar6 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(puVar11,0x10);
              if (bVar9) {
                *(uint *)puVar11 = (uint)uVar19 - 4;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (((uint)uVar19 & 0xfffffff9) != 0) {
              return param_1;
            }
            func_0x00010ae6cd10(puVar18);
            return param_1;
          }
          goto code_r0x00010ae709a0;
        }
        if (puVar18 == (ulong *)0x0) goto code_r0x00010ae70a44;
        uVar16 = *param_1;
        lStack_a8 = uVar16 - 1;
        if (lStack_a8 != 0) {
          func_0x000107c2b9f0(uVar16 + 0x37);
          *(long *)(uVar16 + 0x48f) = *(long *)(uVar16 + 0x48f) + 1;
        }
        bVar5 = *(byte *)((long)puVar18 + 0xc);
        if (5 < bVar5) {
          uVar17 = 6;
          if (0xba < bVar5) {
            uVar17 = 0xc;
          }
          iVar1 = -0xe8d;
          if (0xba < bVar5) {
            iVar1 = -0xb800d;
          }
          uVar15 = (uint)bVar5;
          uVar2 = 3;
          if (0x42 < uVar15) {
            uVar2 = uVar17;
          }
          iVar3 = -0x1d;
          if (0x42 < uVar15) {
            iVar3 = iVar1;
          }
          if ((uVar19 <= (ulong)(long)(int)((uVar15 << (ulong)uVar2) + iVar3)) &&
             ((puVar18[1] & 0xfffffffd) == 4)) {
            _memmove((long)puVar18 + 0xd,puVar11,uVar19);
            *puVar18 = uVar19;
            goto code_r0x00010ae70a90;
          }
        }
        func_0x00010ae70764(puVar11,uVar19);
        param_1[1] = (ulong)puVar11;
        if (lStack_a8 != 0) {
          *(ulong **)(lStack_a8 + 0x40) = puVar11;
        }
        puVar11 = puVar18 + 1;
        do {
          uVar19 = *puVar11;
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(puVar11,0x10);
          if (bVar9) {
            *(uint *)puVar11 = (uint)uVar19 - 4;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (((uint)uVar19 & 0xfffffff9) == 0) {
          func_0x00010ae6cd10(puVar18);
        }
code_r0x00010ae70a90:
        func_0x00010ae72844(&lStack_a8);
        return param_1;
      }
      goto LAB_10bd1f35c;
    }
    func_0x00010bd2533c();
    func_0x00010bd24f14();
  }
  else {
    func_0x00010bd2533c();
    func_0x00010bd24e70();
  }
  func_0x00010bd2506c();
LAB_10bd1f35c:
  puVar12 = (ulong *)*unaff_x22;
  func_0x00010bd2533c();
  func_0x00010bd24e88();
  func_0x00010bd25218();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  pcVar21 = FUN_10bd1f374;
  func_0x00010bd24f74();
  puVar18 = &uStack_60;
  while( true ) {
    puVar13 = param_2;
    *(undefined8 **)((long)puVar18 + -0x30) = unaff_x22;
    *(ulong **)((long)puVar18 + -0x28) = unaff_x21;
    *(ulong **)((long)puVar18 + -0x20) = param_3;
    *(ulong **)((long)puVar18 + -0x18) = unaff_x19;
    *(undefined1 **)((long)puVar18 + -0x10) = puVar20;
    *(code **)((long)puVar18 + -8) = pcVar21;
    uVar8 = *(int *)((long)puVar11 + 4) != 0;
    uVar10 = *(int *)((long)puVar11 + 4) == 1;
    if ((!(bool)uVar10) || ((*(byte *)(puVar11[6] + 1) >> 1 & 1) == 0)) {
      puVar11 = puVar12;
      func_0x00010bd252d8();
      if (*(int *)((long)puVar13 + (extraout_x8_04 & 0xffffffff)) != 0) {
        puVar12 = (ulong *)*puVar12;
        FUN_10bcee2d0();
        uVar19 = puVar13[1];
        puVar11 = puVar12;
        if ((uVar19 & 1) != 0) {
          func_0x00010bd25400();
          uVar19 = extraout_x8_06;
        }
        if (uVar19 == 0) {
          func_0x00010bd255ac();
          if ((int)puVar11 == 10) {
            func_0x00010bd24e64();
            func_0x00010bd20e14();
            puVar11 = (ulong *)*puVar11;
            if (puVar11 != (ulong *)0x0) {
              func_0x00010bd24eb8();
            }
          }
          else if ((int)puVar11 == 9) {
            FUN_10bd1bdfc();
            if ((int)puVar12 == 1) {
              func_0x00010bd24e64();
              func_0x00010bd20e14();
              puVar11 = (ulong *)*puVar12;
              if (puVar11 != (ulong *)0x0) {
                func_0x000107c34fe8();
              }
              __ZdlPv();
            }
            else {
              func_0x00010bd24e64();
              FUN_10bd1f51c();
              func_0x000107c30258();
              puVar11 = puVar12;
            }
          }
        }
        func_0x00010bd252d8();
        *(undefined4 *)((long)puVar13 + (extraout_x8_05 & 0xffffffff)) = 0;
      }
      return puVar11;
    }
    func_0x00010bd24e64();
    uVar4 = *(undefined8 *)((long)puVar18 + -0x20);
    unaff_x19 = *(ulong **)((long)puVar18 + -0x18);
    unaff_x22 = *(undefined8 **)((long)puVar18 + -0x30);
    unaff_x21 = *(ulong **)((long)puVar18 + -0x28);
    *(undefined8 *)((long)puVar18 + -0x50) = unaff_d9;
    *(undefined8 *)((long)puVar18 + -0x48) = unaff_d8;
    *(undefined8 *)((long)puVar18 + -0x40) = unaff_x24;
    *(undefined8 *)((long)puVar18 + -0x38) = unaff_x23;
    *(undefined8 **)((long)puVar18 + -0x30) = unaff_x22;
    *(ulong **)((long)puVar18 + -0x28) = unaff_x21;
    *(undefined8 *)((long)puVar18 + -0x20) = uVar4;
    *(ulong **)((long)puVar18 + -0x18) = unaff_x19;
    *(undefined8 *)((long)puVar18 + -0x10) = *(undefined8 *)((long)puVar18 + -0x10);
    *(undefined8 *)((long)puVar18 + -8) = *(undefined8 *)((long)puVar18 + -8);
    func_0x00010bd24b74();
    if (!(bool)uVar10) {
      func_0x00010bd24e70();
      func_0x00010bd24e38();
      *(undefined8 *)((long)puVar18 + -0x70) = uVar4;
      *(ulong **)((long)puVar18 + -0x68) = unaff_x19;
      *(undefined1 **)((long)puVar18 + -0x60) = (undefined1 *)((long)puVar18 + -0x10);
      *(code **)((long)puVar18 + -0x58) = FUN_10bd1cd90;
      func_0x00010bd24f94();
      func_0x00010bd24e7c();
      func_0x00010bd1d3e8();
      if ((int)puVar12 != -1) {
        func_0x00010bd25418();
        *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
      }
      return puVar12;
    }
    if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) != 0) {
      func_0x00010bd250c0();
      puVar11 = (ulong *)((long)puVar13 + extraout_x8_00);
      uVar4 = *(undefined8 *)((long)puVar18 + -0x10);
      uVar14 = *(undefined8 *)((long)puVar18 + -8);
      func_0x00010bd25668();
      *(undefined8 *)((long)puVar18 + -0x60) = uVar4;
      *(undefined8 *)((long)puVar18 + -0x58) = uVar14;
      func_0x00010b4bf3a0();
      if (puVar11 == (ulong *)0x0) {
        return (ulong *)0x0;
      }
      *(ulong **)((long)puVar18 + -0x70) = puVar13;
      *(ulong **)((long)puVar18 + -0x68) = unaff_x19;
      *(undefined8 *)((long)puVar18 + -0x60) = *(undefined8 *)((long)puVar18 + -0x60);
      *(undefined8 *)((long)puVar18 + -0x58) = *(undefined8 *)((long)puVar18 + -0x58);
      bVar7 = *(char *)((long)puVar11 + 9) != '\0';
      bVar9 = *(char *)((long)puVar11 + 9) == '\x01';
      if (bVar9) {
        func_0x00010b4c5260((char)puVar11[1]);
        puVar18 = puVar11;
        if (!bVar7 || bVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010b4bf4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_10b4bf4f4 + (ulong)(byte)(&UNK_10e5b4882)[extraout_x8] * 4))();
          return puVar11;
        }
      }
      else {
        puVar18 = puVar11;
        if ((*(byte *)((long)puVar11 + 10) & 1) == 0) {
          if (*(int *)(&UNK_10e5b4ac0 + (ulong)(byte)puVar11[1] * 4) == 10) {
            puVar18 = (ulong *)*puVar11;
            if ((*(byte *)((long)puVar11 + 10) >> 4 & 1) == 0) {
              pcVar21 = *(code **)(*puVar18 + 0x18);
            }
            else {
              pcVar21 = *(code **)(*puVar18 + 0x88);
            }
            (*pcVar21)();
          }
          else if (*(int *)(&UNK_10e5b4ac0 + (ulong)(byte)puVar11[1] * 4) == 9) {
            puVar18 = (ulong *)*puVar11;
            func_0x000107c27fa8(puVar18);
          }
          *(byte *)((long)puVar11 + 10) = *(byte *)((long)puVar11 + 10) & 0xf0 | 1;
        }
      }
      return puVar18;
    }
    if ((*(byte *)((long)unaff_x19 + 1) >> 5 & 1) != 0) break;
    puVar11 = unaff_x19;
    FUN_10bcddbd4();
    if (puVar11 == (ulong *)0x0) {
      func_0x00010bd24c14();
      FUN_10bd1c8f0();
      if ((int)puVar11 != 0) {
        func_0x00010bd24c14();
        FUN_10bd1d3b4();
        func_0x00010bd24e30();
        func_0x00010bd2518c();
        if (!(bool)uVar8 || (bool)uVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bd1cb9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_10e60b835)[extraout_x8_02] * 4 + 0x10bd1cba0))();
          return puVar11;
        }
      }
      goto LAB_10bd1cd6c;
    }
    func_0x00010bd24ba4();
    if ((int)puVar11 == 0) goto LAB_10bd1cd6c;
    if ((*(byte *)((long)unaff_x19 + 1) >> 4 & 1) == 0) {
      puVar11 = (ulong *)0x0;
    }
    else {
      puVar11 = (ulong *)unaff_x19[5];
    }
    puVar20 = *(undefined1 **)((long)puVar18 + -0x10);
    pcVar21 = *(code **)((long)puVar18 + -8);
    puVar12 = unaff_x21;
    param_2 = puVar13;
    func_0x00010bd25668();
    puVar18 = (ulong *)((long)puVar18 + -0x50);
    param_3 = puVar13;
  }
  func_0x00010b91adc8();
  func_0x00010bd2518c();
  puVar11 = unaff_x19;
  if (!(bool)uVar8 || (bool)uVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bd1cb58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e60b82b)[extraout_x8_01] * 4 + 0x10bd1cb5c))();
    return unaff_x19;
  }
LAB_10bd1cd6c:
  func_0x00010bd25668();
  return puVar11;
}



/* Entry: 10bd1f374; end: 10bd1f513;  */

void FUN_10bd1f374(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  uint extraout_w8;
  long extraout_x8;
  code *pcVar13;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  ulong uVar14;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  while( true ) {
    lVar11 = param_2;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    uVar3 = *(int *)(param_3 + 4) != 0;
    uVar5 = *(int *)(param_3 + 4) == 1;
    if ((!(bool)uVar5) || ((*(byte *)(*(long *)(param_3 + 0x30) + 1) >> 1 & 1) == 0)) {
      func_0x00010bd252d8();
      if (*(int *)(lVar11 + (extraout_x8_03 & 0xffffffff)) != 0) {
        plVar9 = (long *)*param_1;
        FUN_10bcee2d0();
        uVar14 = *(ulong *)(lVar11 + 8);
        plVar10 = plVar9;
        if ((uVar14 & 1) != 0) {
          func_0x00010bd25400();
          uVar14 = extraout_x8_05;
        }
        if (uVar14 == 0) {
          func_0x00010bd255ac();
          if ((int)plVar10 == 10) {
            func_0x00010bd24e64();
            func_0x00010bd20e14();
            if (*plVar10 != 0) {
              func_0x00010bd24eb8();
            }
          }
          else if ((int)plVar10 == 9) {
            FUN_10bd1bdfc();
            if ((int)plVar9 == 1) {
              func_0x00010bd24e64();
              func_0x00010bd20e14();
              if (*plVar9 != 0) {
                func_0x000107c34fe8();
              }
              __ZdlPv();
            }
            else {
              func_0x00010bd24e64();
              FUN_10bd1f51c();
              func_0x000107c30258();
            }
          }
        }
        func_0x00010bd252d8();
        *(undefined4 *)(lVar11 + (extraout_x8_04 & 0xffffffff)) = 0;
      }
      return;
    }
    func_0x00010bd24e64();
    iVar6 = (int)param_1;
    uVar1 = *(undefined8 *)((long)register0x00000008 + -0x20);
    unaff_x19 = *(long *)((long)register0x00000008 + -0x18);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_x21 = *(undefined8 **)((long)register0x00000008 + -0x28);
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = uVar1;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    func_0x00010bd24b74();
    if (!(bool)uVar5) {
      func_0x00010bd24e70();
      func_0x00010bd24e38();
      *(undefined8 *)((long)register0x00000008 + -0x70) = uVar1;
      *(long *)((long)register0x00000008 + -0x68) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x60) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(code **)((long)register0x00000008 + -0x58) = FUN_10bd1cd90;
      func_0x00010bd24f94();
      func_0x00010bd24e7c();
      func_0x00010bd1d3e8();
      if (iVar6 != -1) {
        func_0x00010bd25418();
        *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
      }
      return;
    }
    if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) != 0) {
      func_0x00010bd250c0();
      puVar8 = (undefined8 *)(lVar11 + extraout_x8_00);
      uVar1 = *(undefined8 *)((long)register0x00000008 + -0x10);
      uVar12 = *(undefined8 *)((long)register0x00000008 + -8);
      func_0x00010bd25668();
      *(undefined8 *)((long)register0x00000008 + -0x60) = uVar1;
      *(undefined8 *)((long)register0x00000008 + -0x58) = uVar12;
      func_0x00010b4bf3a0();
      if (puVar8 == (undefined8 *)0x0) {
        return;
      }
      *(long *)((long)register0x00000008 + -0x70) = lVar11;
      *(long *)((long)register0x00000008 + -0x68) = unaff_x19;
      *(undefined8 *)((long)register0x00000008 + -0x60) =
           *(undefined8 *)((long)register0x00000008 + -0x60);
      *(undefined8 *)((long)register0x00000008 + -0x58) =
           *(undefined8 *)((long)register0x00000008 + -0x58);
      bVar2 = *(char *)((long)puVar8 + 9) != '\0';
      bVar4 = *(char *)((long)puVar8 + 9) == '\x01';
      if (bVar4) {
        func_0x00010b4c5260(*(undefined1 *)(puVar8 + 1));
        if (!bVar2 || bVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010b4bf4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_10b4bf4f4 + (ulong)(byte)(&UNK_10e5b4882)[extraout_x8] * 4))();
          return;
        }
      }
      else if ((*(byte *)((long)puVar8 + 10) & 1) == 0) {
        if (*(int *)(&UNK_10e5b4ac0 + (ulong)*(byte *)(puVar8 + 1) * 4) == 10) {
          if ((*(byte *)((long)puVar8 + 10) >> 4 & 1) == 0) {
            pcVar13 = *(code **)(*(long *)*puVar8 + 0x18);
          }
          else {
            pcVar13 = *(code **)(*(long *)*puVar8 + 0x88);
          }
          (*pcVar13)();
        }
        else if (*(int *)(&UNK_10e5b4ac0 + (ulong)*(byte *)(puVar8 + 1) * 4) == 9) {
          func_0x000107c27fa8(*puVar8);
        }
        *(byte *)((long)puVar8 + 10) = *(byte *)((long)puVar8 + 10) & 0xf0 | 1;
      }
      return;
    }
    if ((*(byte *)(unaff_x19 + 1) >> 5 & 1) != 0) break;
    lVar7 = unaff_x19;
    FUN_10bcddbd4();
    if (lVar7 == 0) {
      func_0x00010bd24c14();
      iVar6 = (int)lVar7;
      FUN_10bd1c8f0();
      if (iVar6 != 0) {
        func_0x00010bd24c14();
        FUN_10bd1d3b4();
        func_0x00010bd24e30();
        func_0x00010bd2518c();
        if (!(bool)uVar3 || (bool)uVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bd1cb9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_10e60b835)[extraout_x8_02] * 4 + 0x10bd1cba0))();
          return;
        }
      }
      goto LAB_10bd1cd6c;
    }
    func_0x00010bd24ba4();
    if ((int)lVar7 == 0) goto LAB_10bd1cd6c;
    if ((*(byte *)(unaff_x19 + 1) >> 4 & 1) == 0) {
      param_3 = 0;
    }
    else {
      param_3 = *(long *)(unaff_x19 + 0x28);
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x10);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -8);
    param_1 = unaff_x21;
    param_2 = lVar11;
    func_0x00010bd25668();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    unaff_x20 = lVar11;
  }
  func_0x00010b91adc8();
  func_0x00010bd2518c();
  if (!(bool)uVar3 || (bool)uVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bd1cb58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e60b82b)[extraout_x8_01] * 4 + 0x10bd1cb5c))();
    return;
  }
LAB_10bd1cd6c:
  func_0x00010bd25668();
  return;
}



/* Entry: 10bd1f514; end: 10bd1f51b;  */

long FUN_10bd1f514(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  
  if ((*(byte *)(param_3 + 1) >> 3 & 1) == 0) {
    plVar2 = (long *)(*(long *)(param_3 + 0x20) + 0x38);
  }
  else {
    lVar1 = param_3;
    func_0x00010b91bfe4();
    if (lVar1 == 0) {
      plVar2 = (long *)(*(long *)(param_3 + 0x10) + 0x78);
    }
    else {
      lVar1 = param_3;
      func_0x00010b91bfe4();
      plVar2 = (long *)(lVar1 + 0x60);
    }
  }
  return (param_3 - *plVar2) / 0x58;
}



/* Entry: 10bd1f51c; end: 10bd1f553;  */

ulong * FUN_10bd1f51c(ulong param_1)

{
  ulong *puVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_58;
  
  func_0x00010bd24b60();
  if (param_1 == 0) {
    func_0x00010bd24c14();
    FUN_10bd1cd90();
  }
  else {
    func_0x00010bd24c14();
    FUN_10bd202f4();
  }
  func_0x00010bd24c14();
  func_0x00010bd24b28();
  if (param_1 != 0) {
    func_0x00010bd24c98();
LAB_10bd24c24:
    return (ulong *)(unaff_x19 + (param_1 & 0xffffffff));
  }
  func_0x00010bd24c40();
  func_0x00010bd24af8();
  if ((int)param_1 == 0) {
    func_0x00010bd24c8c();
    goto LAB_10bd24c24;
  }
  func_0x00010bd24c40();
  func_0x00010bd24fac();
  uVar6 = param_1;
  func_0x00010bd24e7c();
  FUN_10bd20d94();
  uVar8 = (ulong)*(uint *)(param_1 + 0x44);
  lVar5 = *(long *)(unaff_x20 + uVar8);
  if (lVar5 != *(long *)(*(long *)(param_1 + 8) + uVar8)) goto LAB_10bd20cfc;
  uVar7 = (ulong)*(uint *)(param_1 + 0x48);
  uVar3 = *(ulong *)(unaff_x20 + 8);
  if ((uVar3 & 1) == 0) {
    if (uVar3 == 0) goto LAB_10bd20cdc;
LAB_10bd20cc0:
    func_0x00010888f420(uVar3,uVar7,8);
    uVar7 = uVar3;
  }
  else {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    if (uVar3 != 0) goto LAB_10bd20cc0;
LAB_10bd20cdc:
    __Znwm();
  }
  *(ulong *)(unaff_x20 + uVar8) = uVar7;
  _memcpy();
  lVar5 = *(long *)(unaff_x20 + (ulong)*(uint *)(param_1 + 0x44));
LAB_10bd20cfc:
  puVar1 = (ulong *)(lVar5 + (uVar6 & 0xffffffff));
  puVar4 = puVar1;
  if ((*(byte *)(unaff_x19 + 1) >> 5 & 1) != 0) {
    uVar6 = *(ulong *)(unaff_x20 + 8);
    if ((uVar6 & 1) != 0) {
      uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
    }
    puVar4 = (ulong *)*puVar1;
    if (puVar4 == (ulong *)&UNK_10e5b4a80) {
      func_0x00010bd24e30();
      iVar2 = (int)puVar4;
      uStack_58 = uVar6;
      if ((iVar2 < 9) ||
         ((func_0x00010bd24e30(), iVar2 == 9 && (func_0x00010bd25454(), iVar2 == 1)))) {
        puVar4 = &uStack_58;
        func_0x00010b4c361c();
      }
      else {
        puVar4 = &uStack_58;
        func_0x00010b4cd460();
      }
      *puVar1 = (ulong)puVar4;
    }
  }
  return puVar4;
}



/* Entry: 10bd1f554; end: 10bd1f74b;  */

/* WARNING: Possible PIC construction at 0x00010bd1f678: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae72338: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bd1f67c) */
/* WARNING: Removing unreachable block (ram,0x00010ae7233c) */
/* WARNING: Removing unreachable block (ram,0x00010ae72350) */
/* WARNING: Removing unreachable block (ram,0x00010ae7236c) */
/* WARNING: Removing unreachable block (ram,0x00010ae72414) */
/* WARNING: Removing unreachable block (ram,0x00010ae72420) */
/* WARNING: Removing unreachable block (ram,0x00010ae72374) */
/* WARNING: Removing unreachable block (ram,0x00010ae72380) */
/* WARNING: Removing unreachable block (ram,0x00010ae725f0) */
/* WARNING: Removing unreachable block (ram,0x00010ae7238c) */
/* WARNING: Removing unreachable block (ram,0x00010ae7258c) */
/* WARNING: Removing unreachable block (ram,0x00010ae725b4) */
/* WARNING: Removing unreachable block (ram,0x00010ae72594) */
/* WARNING: Removing unreachable block (ram,0x00010ae725bc) */
/* WARNING: Removing unreachable block (ram,0x00010ae725e0) */
/* WARNING: Removing unreachable block (ram,0x00010ae725c8) */
/* WARNING: Removing unreachable block (ram,0x00010ae725e4) */
/* WARNING: Removing unreachable block (ram,0x00010ae72394) */
/* WARNING: Removing unreachable block (ram,0x00010ae723b8) */
/* WARNING: Removing unreachable block (ram,0x00010ae723c0) */
/* WARNING: Removing unreachable block (ram,0x00010ae723e0) */
/* WARNING: Removing unreachable block (ram,0x00010ae725a0) */
/* WARNING: Removing unreachable block (ram,0x00010ae72408) */
/* WARNING: Removing unreachable block (ram,0x00010ae725a4) */
/* WARNING: Removing unreachable block (ram,0x00010ae725d0) */
/* WARNING: Removing unreachable block (ram,0x00010ae725ac) */
/* WARNING: Removing unreachable block (ram,0x00010ae725d4) */
/* WARNING: Removing unreachable block (ram,0x00010ae72428) */
/* WARNING: Removing unreachable block (ram,0x00010ae7242c) */
/* WARNING: Removing unreachable block (ram,0x00010ae72438) */
/* WARNING: Removing unreachable block (ram,0x00010ae72450) */
/* WARNING: Removing unreachable block (ram,0x00010ae72458) */
/* WARNING: Removing unreachable block (ram,0x00010ae72460) */
/* WARNING: Removing unreachable block (ram,0x00010ae724e0) */
/* WARNING: Removing unreachable block (ram,0x00010ae724e4) */
/* WARNING: Removing unreachable block (ram,0x00010ae72464) */
/* WARNING: Removing unreachable block (ram,0x00010ae724ec) */
/* WARNING: Removing unreachable block (ram,0x00010ae7247c) */
/* WARNING: Removing unreachable block (ram,0x00010ae72480) */
/* WARNING: Removing unreachable block (ram,0x00010ae72504) */
/* WARNING: Removing unreachable block (ram,0x00010ae72488) */
/* WARNING: Removing unreachable block (ram,0x00010ae724b0) */
/* WARNING: Removing unreachable block (ram,0x00010ae724bc) */
/* WARNING: Removing unreachable block (ram,0x00010ae724d8) */
/* WARNING: Removing unreachable block (ram,0x00010ae724f8) */
/* WARNING: Removing unreachable block (ram,0x00010ae72508) */
/* WARNING: Removing unreachable block (ram,0x00010ae7252c) */
/* WARNING: Removing unreachable block (ram,0x00010ae72520) */
/* WARNING: Removing unreachable block (ram,0x00010ae72530) */
/* WARNING: Removing unreachable block (ram,0x00010ae72540) */
/* WARNING: Removing unreachable block (ram,0x00010ae72538) */
/* WARNING: Removing unreachable block (ram,0x00010ae72544) */
/* WARNING: Removing unreachable block (ram,0x00010ae7254c) */
/* WARNING: Removing unreachable block (ram,0x00010ae72340) */
/* WARNING: Removing unreachable block (ram,0x00010ae72558) */
/* WARNING: Removing unreachable block (ram,0x00010ae725fc) */
/* WARNING: Removing unreachable block (ram,0x00010ae72570) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_10bd1f554(ulong *param_1,long param_2,ulong *param_3,ulong *param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar6;
  ulong *puVar7;
  long *plVar8;
  ulong *puVar9;
  ulong uVar10;
  uint uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong extraout_x8;
  ulong *extraout_x8_00;
  undefined8 *puVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  long unaff_x21;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  ulong *puStack_208;
  undefined8 auStack_1e8 [12];
  long lStack_188;
  undefined1 *puStack_180;
  undefined *puStack_178;
  undefined1 **ppuStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong *puStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_70;
  code *pcStack_68;
  ulong auStack_58 [3];
  
  puVar14 = param_3;
  func_0x00010bd24bdc();
  if ((bool)in_ZR) {
    func_0x00010bd2551c();
    if ((bool)in_CY) {
      func_0x00010bd2533c();
      func_0x00010bd24f14();
      puVar7 = param_4;
      goto LAB_10bd1f728;
    }
    puVar7 = param_4;
    func_0x00010bd24df4();
    in_CY = 8 < (uint)param_1;
    in_ZR = 0;
    if ((uint)param_1 == 9) {
      if ((*(byte *)((long)param_3 + 1) >> 3 & 1) == 0) {
        func_0x00010bd25398();
        if ((int)param_1 != 1) {
          func_0x00010bd250a8();
          if (param_1 != (ulong *)0x0) {
            func_0x00010bd24c70();
            FUN_10bd1bdd4();
            if (((ulong)param_1 & 1) == 0) {
              func_0x00010bd24e40();
              FUN_10bd1f374();
              func_0x00010bd24c70();
              FUN_10bd1f51c();
              *param_1 = (ulong)&DAT_11383d918;
            }
          }
          func_0x00010bd24fd4();
          if ((int)param_1 == 0) {
            func_0x00010bd24c70();
            FUN_10bd1f51c();
            func_0x00010bd25574();
            uVar10 = *(ulong *)(unaff_x21 + 8);
            if ((uVar10 & 1) != 0) {
              uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
            }
            func_0x000107c3024c(param_1,auStack_58,uVar10);
          }
          else {
            func_0x00010bd24c70();
            func_0x00010bd1f4dc();
            func_0x00010b91ad64(param_3);
            func_0x00010bd25574();
            func_0x00010bd24c70();
            FUN_10bd1f514();
            func_0x000107c27b9c(param_1,auStack_58);
          }
          puVar14 = auStack_58;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar14);
          return puVar14;
        }
        func_0x00010bd250a8();
        if (param_1 == (ulong *)0x0) {
          func_0x00010bd24c70();
          func_0x00010bd1f4a4();
          func_0x00010bd25648();
        }
        else {
          func_0x00010bd24c70();
          FUN_10bd1bdd4();
          if (((ulong)param_1 & 1) == 0) {
            func_0x00010bd24e40();
            FUN_10bd1f374();
            auStack_58[0] = *(ulong *)(unaff_x21 + 8);
            if ((auStack_58[0] & 1) != 0) {
              func_0x00010bd25400();
              auStack_58[0] = extraout_x8;
            }
            puVar14 = auStack_58;
            func_0x00010b4cc44c();
            param_1 = puVar14;
            func_0x00010bd24c70();
            func_0x00010bd1f46c();
            *param_1 = (ulong)puVar14;
          }
          func_0x00010bd24c70();
          func_0x00010bd1f46c();
          param_1 = (ulong *)*param_1;
          unaff_x30 = 0x10bd1f67c;
          unaff_x29 = &stack0xfffffffffffffff0;
        }
        if (param_1 == param_4) {
          return param_1;
        }
        if (((*param_1 & 1) == 0) && ((*param_4 & 1) == 0)) {
          uVar10 = *param_4;
          param_1[1] = param_4[1];
          *param_1 = uVar10;
          return param_1;
        }
        puStack_70 = unaff_x29;
        pcStack_68 = (code *)unaff_x30;
        func_0x00010ae705f0(param_1);
        return param_1;
      }
      func_0x00010bd24fc4();
      func_0x00010bd25504();
      func_0x00010b4bff84();
      func_0x00010bd25648();
      if ((*param_4 & 1) != 0) {
        func_0x000100066b68(param_1,*(undefined8 *)param_4[1]);
        ppuStack_170 = &puStack_70;
        plVar8 = (long *)0x0;
        uStack_b8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uStack_160 = 0;
        uStack_158 = 0;
        if ((*param_4 & 1) != 0) {
          plVar8 = (long *)param_4[1];
        }
        if (*plVar8 != 0) {
          bVar5 = *(byte *)((long)plVar8 + 0xc);
          if (bVar5 == 2) {
            plVar8 = (long *)plVar8[2];
            bVar5 = *(byte *)((long)plVar8 + 0xc);
          }
          if (bVar5 < 6) {
            if (bVar5 == 1) {
              puVar14 = (ulong *)plVar8[3];
              bVar5 = *(byte *)((long)puVar14 + 0xc);
              if (5 < bVar5) {
                return (ulong *)0x1;
              }
              if (bVar5 == 3) {
                uVar10 = plVar8[2];
                puStack_168 = &UNK_10ae7233c;
                if (*plVar8 == 0) {
code_r0x00010ae6eae0:
                  puVar14 = (ulong *)0x0;
                }
                else {
                  uVar16 = (uint)*(byte *)((long)puVar14 + 0xd);
                  do {
                    puVar7 = (ulong *)puVar14[(ulong)*(byte *)((long)puVar14 + 0xe) + 2];
                    uVar13 = *puVar7;
                    if (uVar13 <= uVar10) {
                      puVar14 = puVar14 + (ulong)*(byte *)((long)puVar14 + 0xe) + 3;
                      do {
                        uVar10 = uVar10 - uVar13;
                        puVar7 = (ulong *)*puVar14;
                        uVar13 = *puVar7;
                        puVar14 = puVar14 + 1;
                      } while (uVar13 <= uVar10);
                    }
                    if (uVar13 < uVar10 + *plVar8) goto code_r0x00010ae6eae0;
                    bVar1 = 0 < (int)uVar16;
                    puVar14 = puVar7;
                    uVar16 = uVar16 - 1;
                  } while (bVar1);
                  if ((&stack0x00000000 != (undefined1 *)0x160) && (uVar13 < uVar10)) {
                    puStack_208 = (ulong *)&UNK_10f6d18b2;
                    func_0x000109262df8();
                    puStack_180 = (undefined1 *)&ppuStack_170;
                    puStack_178 = &UNK_10ae6eb34;
                    lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
                    bVar5 = *(byte *)((long)puStack_208 + 0xd);
                    uVar13 = (ulong)bVar5;
                    puVar14 = puStack_208;
                    if (uVar13 != 0) {
                      puVar15 = auStack_1e8;
                      uVar17 = uVar13;
                      do {
                        puVar14 = (ulong *)puVar14[(ulong)*(byte *)((long)puVar14 + 0xf) + 1];
                        if ((puVar14[1] & 0xfffffffd) != 4) goto code_r0x00010ae6ebc0;
                        *puVar15 = puVar14;
                        uVar17 = uVar17 - 1;
                        puVar15 = puVar15 + 1;
                      } while (uVar17 != 0);
                    }
                    plVar8 = (long *)puVar14[(ulong)*(byte *)((long)puVar14 + 0xf) + 1];
                    if (((*(uint *)(plVar8 + 1) & 0xfffffffd) == 4) &&
                       (bVar4 = *(byte *)((long)plVar8 + 0xc), 5 < bVar4)) {
                      uVar16 = 6;
                      if (0xba < bVar4) {
                        uVar16 = 0xc;
                      }
                      iVar6 = -0xe8d;
                      if (0xba < bVar4) {
                        iVar6 = -0xb800d;
                      }
                      uVar11 = (uint)bVar4;
                      uVar2 = 3;
                      if (0x42 < uVar11) {
                        uVar2 = uVar16;
                      }
                      iVar3 = -0x1d;
                      if (0x42 < uVar11) {
                        iVar3 = iVar6;
                      }
                      lVar18 = *plVar8;
                      uVar17 = (int)((uVar11 << (ulong)uVar2) + iVar3) - lVar18;
                      if (uVar17 == 0) {
                        puVar14 = (ulong *)0x0;
                      }
                      else {
                        if (uVar10 <= uVar17) {
                          uVar17 = uVar10;
                        }
                        puVar14 = (ulong *)((long)plVar8 + lVar18 + 0xd);
                        *plVar8 = uVar17 + lVar18;
                        *puStack_208 = *puStack_208 + uVar17;
                        if (bVar5 != 0) {
                          puVar15 = auStack_1e8;
                          do {
                            *(long *)*puVar15 = *(long *)*puVar15 + uVar17;
                            uVar13 = uVar13 - 1;
                            puVar15 = puVar15 + 1;
                          } while (uVar13 != 0);
                        }
                      }
                    }
                    else {
code_r0x00010ae6ebc0:
                      puVar14 = (ulong *)0x0;
                    }
                    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
                      ___stack_chk_fail();
                      if (*(char *)((long)puStack_208 + 0xc) != '\x03') {
                        puStack_208 = (ulong *)0x0;
                        func_0x00010ae6f7b0();
                      }
                      return puStack_208;
                    }
                    return puVar14;
                  }
                  puVar14 = (ulong *)0x1;
                }
                return puVar14;
              }
            }
            else if (bVar5 == 3) {
              if ((*(char *)((long)plVar8 + 0xd) == '\0') &&
                 ((ulong)*(byte *)((long)plVar8 + 0xf) - (ulong)*(byte *)((long)plVar8 + 0xe) == 1))
              {
                return (ulong *)0x1;
              }
              return (ulong *)0x0;
            }
            if (bVar5 != 5) {
              return (ulong *)0x0;
            }
          }
        }
        return (ulong *)0x1;
      }
      puVar7 = param_1;
      func_0x000100066b68(param_1,0xf);
      puVar12 = param_1;
      if ((char)*(byte *)((long)param_1 + 0x17) < '\0') {
        puVar12 = (ulong *)*param_1;
      }
      uVar10 = *(ulong *)((long)param_4 + 1);
      *(ulong *)((long)puVar12 + 7) = param_4[1];
      *puVar12 = uVar10;
      uVar10 = (ulong)(long)(char)(byte)*param_4 >> 1;
      if ((long)(char)*(byte *)((long)param_1 + 0x17) < 0) {
        if (param_1[1] < uVar10) goto code_r0x00010084df20;
        param_1[1] = uVar10;
        param_1 = (ulong *)*param_1;
      }
      else {
        if ((ulong)(long)(char)*(byte *)((long)param_1 + 0x17) < uVar10) {
code_r0x00010084df20:
          func_0x000107c2ac68();
                    /* WARNING: Could not recover jumptable at 0x00010c1374b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)
                    (puVar14,PTR_s_requireGestureRecognizerToFail__11262b748,
                     *(undefined8 *)((long)puVar7 + (long)_DAT_112741780));
          return puVar14;
        }
        *(byte *)((long)param_1 + 0x17) = (byte)((uint)(int)(char)(byte)*param_4 >> 1);
      }
      *(byte *)((long)param_1 + uVar10) = 0;
      return puVar7;
    }
  }
  else {
    func_0x00010bd2533c();
    func_0x00010bd24e70();
    puVar7 = param_4;
LAB_10bd1f728:
    func_0x00010bd2506c();
  }
  func_0x00010bd2533c();
  func_0x00010bd24e88();
  puVar12 = auStack_58;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bd24f74();
  pcStack_68 = FUN_10bd1f74c;
  puVar9 = puVar12;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x00010bd24c30();
  iVar6 = (int)puVar9;
  if ((bool)in_ZR) {
    func_0x00010bd256f0();
    if ((bool)in_CY && !(bool)in_ZR) {
      func_0x00010bd25080();
      if (iVar6 == 9) {
        if ((*(byte *)((long)puVar14 + 1) >> 3 & 1) == 0) {
          FUN_10bd1f810(puVar12,param_2,puVar14,puVar7);
        }
        else {
          puVar12 = (ulong *)(param_2 + (ulong)(uint)puVar12[5]);
          func_0x00010b4bffdc(puVar12,*(undefined4 *)((long)puVar14 + 4),puVar7);
        }
        puVar14 = extraout_x8_00;
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
                  (extraout_x8_00,puVar12);
        return puVar14;
      }
      goto LAB_10bd1f800;
    }
    func_0x00010bd24f20();
  }
  else {
    func_0x00010bd24e70();
  }
  func_0x00010bd2506c();
LAB_10bd1f800:
  puVar12 = (ulong *)*puVar12;
  func_0x00010bd24e88(puVar12);
  puStack_c0 = puVar14;
  func_0x00010bd1bd20();
  func_0x00010bd24ef8();
  return puVar12;
}



/* Entry: 10bd1f74c; end: 10bd1f80f;  */

void FUN_10bd1f74c(undefined8 param_1,undefined8 *param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = param_2;
  func_0x00010bd24c30();
  iVar1 = (int)puVar2;
  if ((bool)in_ZR) {
    func_0x00010bd256f0();
    if ((bool)in_CY && !(bool)in_ZR) {
      func_0x00010bd25080();
      if (iVar1 == 9) {
        if ((*(byte *)(param_4 + 1) >> 3 & 1) == 0) {
          FUN_10bd1f810(param_2,param_3,param_4,param_5);
        }
        else {
          param_2 = (undefined8 *)(param_3 + (ulong)*(uint *)(param_2 + 5));
          func_0x00010b4bffdc(param_2,*(undefined4 *)(param_4 + 4),param_5);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
                  (param_1,param_2);
        return;
      }
      goto LAB_10bd1f800;
    }
    func_0x00010bd24f20();
  }
  else {
    func_0x00010bd24e70();
  }
  func_0x00010bd2506c();
LAB_10bd1f800:
  func_0x00010bd24e88(*param_2);
  func_0x00010bd1bd20();
  func_0x00010bd24ef8();
  return;
}



/* Entry: 10bd1f810; end: 10bd1f82f;  */

void FUN_10bd1f810(void)

{
  func_0x00010bd1bd20();
  func_0x00010bd24ef8();
  return;
}



/* Entry: 10bd1f830; end: 10bd1f8c3;  */

/* WARNING: Possible PIC construction at 0x00010bd1f9b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bd1f9b8) */

void FUN_10bd1f830(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined1 **ppuVar1;
  undefined8 **ppuVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  long *unaff_x22;
  undefined8 ***pppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puStack_b0;
  undefined8 **ppuStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 **ppuStack_40;
  code *pcStack_38;
  
  func_0x00010bd24b8c();
  if ((bool)in_ZR) {
    func_0x00010bd24f88();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x00010bd24f20();
      goto LAB_10bd1f8ac;
    }
    func_0x00010bd24c50();
    in_CY = 8 < (uint)param_1;
    in_ZR = 0;
    if ((uint)param_1 == 9) {
      if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) == 0) {
        func_0x00010bd24cd4();
        func_0x00010bd1bd20();
        func_0x00010bd24ef8();
        return;
      }
      func_0x00010bd24ca4();
      ppuVar2 = (undefined8 **)&stack0xffffffffffffffd0;
      pppuVar7 = (undefined8 ***)&stack0xfffffffffffffff0;
      func_0x00010b4c52f4();
      if (param_1 != (long *)0x0) {
        func_0x00010b4c5154();
        return;
      }
      func_0x00010b4c5038();
      func_0x00010b4c52d4();
      func_0x00010b4c5068();
      puVar8 = &SUB_10b4c0018;
      func_0x00010b4c52cc();
      puVar5 = unaff_x19;
      goto code_r0x00010b4c0018;
    }
  }
  else {
    func_0x00010bd24e70();
LAB_10bd1f8ac:
    func_0x00010bd24e38();
  }
  puVar4 = (undefined8 *)*unaff_x22;
  func_0x00010bd250b8();
  pcStack_38 = FUN_10bd1f8c4;
  ppuStack_40 = (undefined1 **)&stack0xfffffffffffffff0;
  func_0x00010bd24b8c();
  if ((bool)in_ZR) {
    func_0x00010bd24f88();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x00010bd24f20();
      puVar5 = param_4;
      goto LAB_10bd1f97c;
    }
    puVar5 = param_4;
    func_0x00010bd24ce4();
    unaff_x20 = param_4;
    if ((int)puVar4 == 9) {
      if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) != 0) {
        func_0x00010bd24c04();
        uStack_88 = param_4[1];
        uStack_90 = *param_4;
        uStack_80 = param_4[2];
        *param_4 = 0;
        param_4[1] = 0;
        param_4[2] = 0;
        func_0x00010bd256b0(puVar4);
        FUN_10bd1f9a0();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_90);
        return;
      }
      func_0x00010bd24cd4();
      FUN_10bd1f9c8();
      ppuVar1 = ppuStack_40;
      puVar5 = param_4;
      pcVar6 = pcStack_38;
      func_0x00010bd25648();
      ppuStack_a0 = (undefined8 **)ppuVar1;
      if (*(char *)((long)puVar4 + 0x17) < '\0') {
        puStack_b0 = param_4;
        pcStack_98 = pcVar6;
        func_0x000107c60e14(*puVar4);
      }
      uVar10 = puVar5[1];
      uVar9 = *puVar5;
      puVar4[2] = puVar5[2];
      puVar4[1] = uVar10;
      *puVar4 = uVar9;
      *(undefined1 *)((long)puVar5 + 0x17) = 0;
      *(undefined1 *)puVar5 = 0;
      return;
    }
  }
  else {
    func_0x00010bd24e70();
    puVar5 = param_4;
LAB_10bd1f97c:
    func_0x00010bd24e38();
  }
  param_4 = param_5;
  param_1 = (long *)*unaff_x22;
  func_0x00010bd250b8();
  func_0x00010bd25218();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bd24f74();
  ppuVar2 = &puStack_b0;
  pcStack_98 = FUN_10bd1f9a0;
  pppuVar7 = &ppuStack_a0;
  puVar8 = (undefined *)0x10bd1f9b8;
  param_2 = unaff_x19;
  puStack_b0 = unaff_x20;
  ppuStack_a0 = &ppuStack_40;
code_r0x00010b4c0018:
  *(long **)((long)ppuVar2 + -0x30) = unaff_x22;
  *(undefined8 *)((long)ppuVar2 + -0x28) = unaff_x21;
  *(undefined8 **)((long)ppuVar2 + -0x20) = unaff_x20;
  *(undefined8 **)((long)ppuVar2 + -0x18) = puVar5;
  *(undefined8 ****)((long)ppuVar2 + -0x10) = pppuVar7;
  *(undefined **)((long)ppuVar2 + -8) = puVar8;
  func_0x00010b4c5410();
  param_1[2] = (long)param_4;
  if (((ulong)param_2 & 1) != 0) {
    *(char *)(param_1 + 1) = (char)unaff_x21;
    *(undefined1 *)((long)param_1 + 9) = 1;
    *(undefined1 *)((long)param_1 + 0xb) = 0;
    plVar3 = param_1;
    func_0x00010b4c5194();
    func_0x00010b4c376c();
    *param_1 = (long)plVar3;
  }
  func_0x000107c303b4();
  return;
}



/* Entry: 10bd1f8c4; end: 10bd1f99f;  */

void FUN_10bd1f8c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar1;
  long unaff_x19;
  undefined8 *unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x00010bd24b8c();
  if ((bool)in_ZR) {
    func_0x00010bd24f88();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x00010bd24f20();
      goto LAB_10bd1f97c;
    }
    puVar1 = param_4;
    func_0x00010bd24ce4();
    if ((int)param_1 == 9) {
      if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) != 0) {
        func_0x00010bd24c04();
        uStack_58 = param_4[1];
        uStack_60 = *param_4;
        uStack_50 = param_4[2];
        *param_4 = 0;
        param_4[1] = 0;
        param_4[2] = 0;
        func_0x00010bd256b0(param_1);
        FUN_10bd1f9a0();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_60);
        return;
      }
      func_0x00010bd24cd4();
      FUN_10bd1f9c8();
      func_0x00010bd25648();
      goto SUB_107c27b9c;
    }
  }
  else {
    func_0x00010bd24e70();
LAB_10bd1f97c:
    func_0x00010bd24e38();
    puVar1 = param_4;
  }
  param_4 = puVar1;
  param_1 = (undefined8 *)*unaff_x22;
  func_0x00010bd250b8();
  func_0x00010bd25218();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010bd24f74();
  func_0x00010b4c0018();
SUB_107c27b9c:
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    func_0x000107c60e14(*param_1);
  }
  uVar3 = param_4[1];
  uVar2 = *param_4;
  param_1[2] = param_4[2];
  param_1[1] = uVar3;
  *param_1 = uVar2;
  *(undefined1 *)((long)param_4 + 0x17) = 0;
  *(undefined1 *)param_4 = 0;
  return;
}



/* Entry: 10bd1f9a0; end: 10bd1f9c7;  */

void FUN_10bd1f9a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010b4c0018();
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    func_0x000107c60e14(*param_1);
  }
  uVar2 = param_4[1];
  uVar1 = *param_4;
  param_1[2] = param_4[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  *(undefined1 *)((long)param_4 + 0x17) = 0;
  *(undefined1 *)param_4 = 0;
  return;
}



/* Entry: 10bd1f9c8; end: 10bd1f9db;  */

void FUN_10bd1f9c8(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  int extraout_w8;
  int iVar4;
  int extraout_w8_00;
  int *extraout_x9;
  int *piVar5;
  int *extraout_x9_00;
  int iVar6;
  int extraout_w10;
  
  func_0x00010bd20e14();
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0001000640a4();
    func_0x000100069034();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0001000640a4();
      }
      else {
        func_0x000100064574();
        puVar3 = puVar2;
        func_0x000100069034();
        *puVar2 = (ulong)puVar3;
        func_0x00010006472c();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x000100064758();
        piVar5 = extraout_x9;
        iVar6 = extraout_w8;
        iVar4 = extraout_w8;
        if (!bVar1) {
          func_0x000107c39c9c();
          return;
        }
      }
      else {
        func_0x000100064574();
        func_0x000100064780();
        piVar5 = extraout_x9_00;
        iVar6 = extraout_w10;
        iVar4 = extraout_w8_00;
      }
      *piVar5 = iVar6 + 1;
      *(int *)(param_1 + 1) = iVar4 + 1;
      func_0x000100069034();
      *(ulong **)(piVar5 + (long)iVar4 * 2 + 2) = puVar2;
    }
  }
  return;
}



/* Entry: 10bd1f9dc; end: 10bd1fa07;  */

long ** FUN_10bd1f9dc(undefined8 *param_1)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long **pplVar1;
  long *plVar2;
  long *plVar3;
  long **pplVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 extraout_x8;
  long lVar7;
  undefined1 *extraout_x10;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar8;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [24];
  long *aplStack_218 [2];
  undefined4 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1e0 [24];
  undefined1 *apuStack_1c8 [6];
  long **pplStack_198;
  undefined8 uStack_190;
  undefined1 auStack_168 [48];
  long *plStack_138;
  undefined *puStack_130;
  ulong uStack_128;
  undefined *puStack_120;
  undefined8 uStack_58;
  
  FUN_10bd1fa08();
  puVar5 = param_1;
  func_0x00010bd2546c();
  pplVar1 = *(long ***)(puVar5[2] + 0x98);
  func_0x00010bd0a0a0();
  uStack_58 = extraout_x8;
  FUN_10bcee5f8();
  if (pplVar1 == (long **)0x0) {
    plVar3 = (long *)(unaff_x19 + 0xc0);
    plVar2 = plVar3;
    uStack_208 = (int)param_1;
    plStack_138 = plVar3;
    func_0x00010ae7ccdc();
    func_0x00010bd0c238();
    if (plVar2 == (long *)0x0) {
      pplVar1 = (long **)0x0;
    }
    else {
      pplVar1 = (long **)*puVar5;
    }
    FUN_10bcfe50c(&plStack_138);
    if (plVar2 == (long *)0x0) {
      aplStack_218[0] = plVar3;
      func_0x000107c2b9f0();
      func_0x00010bd0c238();
      if (plVar3 == (long *)0x0) {
        plStack_138 = (long *)unaff_x20[1];
        if (*(char *)((long)plStack_138 + 0x17) < '\0') {
          plStack_138 = (long *)*plStack_138;
        }
        puStack_130 = &UNK_1005616c4;
        uStack_128 = (ulong)param_1 & 0xffffffff;
        puStack_120 = &UNK_1004d50a8;
        puVar5 = (undefined8 *)&UNK_10f833088;
        func_0x000107c2b99c(auStack_230,&UNK_10f833088,0x18,&plStack_138,2);
        FUN_10bcedc88();
        uVar8 = puVar5[5];
        func_0x00010bd0b940(&plStack_138);
        func_0x00010bcf65a8(&plStack_138,1);
        func_0x00010bd0b1d0(&plStack_138);
        func_0x000107c315a4(auStack_168,*puVar5);
        FUN_10bcf6f18(&plStack_138,uVar8);
        func_0x000107c315a8(auStack_168);
        pplVar1 = &plStack_138;
        uVar8 = 1;
        FUN_10bcf6838();
        pplVar4 = pplVar1;
        func_0x00010bd09fa8(unaff_x20[1]);
        func_0x00010bd0a408();
        pplStack_198 = pplVar4;
        uStack_190 = uVar8;
        func_0x00010bd0abbc();
        apuStack_1c8[0] = extraout_x10;
        if (in_NG == in_OV) {
          apuStack_1c8[0] = auStack_230;
        }
        func_0x000107c2ba44(&uStack_248,auStack_168,&pplStack_198,apuStack_1c8);
        pplVar4 = &plStack_138;
        func_0x00010bd0b5c0();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_1e0,auStack_230);
        func_0x000107c27b9c(pplVar4,auStack_1e0);
        uStack_1f8 = uStack_240;
        uStack_200 = uStack_248;
        uStack_1f0 = uStack_238;
        func_0x00010bd0c598();
        func_0x000107c27b9c(pplVar4 + 3,&uStack_200);
        func_0x00010bd0b6a4();
        func_0x00010bd0b904();
        pplVar1[1] = (long *)pplVar4;
        func_0x00010bd0aab8();
        *(int *)((long)pplVar1 + 4) = (int)param_1;
        pplVar1[2] = unaff_x20;
        pplVar1[3] = (long *)&PTR_PTR_1134063b0;
        puVar5 = (undefined8 *)(unaff_x19 + 0x78);
        func_0x00010bced3ac(auStack_168,puVar5,pplVar1);
        func_0x00010bd0aad4();
      }
      else {
        pplVar1 = (long **)*puVar5;
      }
      FUN_10bcfee98(aplStack_218);
    }
  }
  iVar6 = (int)puVar5;
  func_0x000107c3a64c(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010bd0aad4();
    pplVar1 = aplStack_218;
    FUN_10bcfee98();
    func_0x00010bd0a974();
    lVar7 = 0;
    while( true ) {
      if ((ulong)(*(uint *)(pplVar1 + 0x11) & ((int)*(uint *)(pplVar1 + 0x11) >> 0x1f ^ 0xffffffffU)
                 ) * 0x28 - lVar7 == 0) {
        return (long **)0x0;
      }
      if ((*(int *)((long)pplVar1[0xb] + lVar7) <= iVar6) &&
         (pplVar4 = (long **)((long)pplVar1[0xb] + lVar7), iVar6 < *(int *)((long)pplVar4 + 4)))
      break;
      lVar7 = lVar7 + 0x28;
    }
    return pplVar4;
  }
  return pplVar1;
}



/* Entry: 10bd1fa08; end: 10bd1fac3;  */

undefined4 * FUN_10bd1fa08(uint *param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 in_ZR;
  undefined1 in_CY;
  uint *puVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined4 *unaff_x23;
  undefined8 ****ppppuVar9;
  code *pcVar10;
  undefined8 ***pppuStack_40;
  code *pcStack_38;
  
  func_0x00010bd24b74();
  if ((bool)in_ZR) {
    func_0x00010bd24f7c();
    if (!(bool)in_CY) {
      func_0x00010bd24c80();
      if ((int)param_1 == 8) {
        if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) == 0) {
          func_0x00010bd24f2c();
          if ((param_1 == (uint *)0x0) || (func_0x00010bd24ba4(), ((ulong)param_1 & 1) != 0)) {
            func_0x00010bd24c14();
            func_0x00010bd20f0c();
            uVar2 = *param_1;
          }
          else {
            func_0x00010bd255f8();
            uVar2 = param_1[1];
          }
          return (undefined4 *)(ulong)uVar2;
        }
        uVar2 = *(uint *)(unaff_x21 + 5);
        uVar3 = unaff_x19[1];
        func_0x00010bd255f8();
        puVar5 = (uint *)(unaff_x20 + (ulong)uVar2);
        func_0x00010b4c52f4(puVar5,uVar3,param_1[1]);
        if ((puVar5 != (uint *)0x0) && ((*(byte *)((long)puVar5 + 10) & 1) == 0)) {
          unaff_x19 = (undefined4 *)(ulong)*puVar5;
        }
        return unaff_x19;
      }
      goto LAB_10bd1fab4;
    }
    func_0x00010bd24f14();
  }
  else {
    func_0x00010bd24e70();
  }
  func_0x00010bd24e38();
LAB_10bd1fab4:
  puVar6 = (undefined4 *)*unaff_x21;
  puVar7 = &UNK_10f8353c1;
  func_0x00010bd24fec();
  puVar4 = &stack0xffffffffffffff90;
  pcStack_38 = FUN_10bd1fac4;
  ppppuVar9 = &pppuStack_40;
  pppuStack_40 = (undefined8 ***)&stack0xfffffffffffffff0;
  func_0x00010bd250d4();
  if (unaff_x23 == puVar6) {
    param_4 = (ulong)*(uint *)(unaff_x20 + 4);
    func_0x00010bd24cd4();
    puVar4 = &stack0xffffffffffffffd0;
    ppppuVar9 = (undefined8 ****)pppuStack_40;
    pcVar10 = pcStack_38;
  }
  else {
    puVar6 = (undefined4 *)*unaff_x22;
    puVar7 = &UNK_10f8353ce;
    pcVar10 = (code *)0x10bd1fb10;
    func_0x00010bd25590();
  }
  func_0x00010bd25614();
  *(undefined8 *****)(puVar4 + 0x40) = ppppuVar9;
  *(code **)(puVar4 + 0x48) = pcVar10;
  func_0x00010bd24fac();
  *(int *)(puVar4 + 0xc) = (int)param_4;
  if (((byte)puVar7[1] >> 3 & 1) == 0) {
    FUN_10bd1d8dc();
    return puVar6;
  }
  func_0x00010bd24cf0();
  func_0x00010bd24d6c(puVar6);
  func_0x00010bd256a4();
  uVar1 = *(undefined8 *)(puVar4 + 0x40);
  uVar8 = *(undefined8 *)(puVar4 + 0x48);
  func_0x00010bd2554c();
  *(long **)(puVar4 + -0x30) = unaff_x22;
  *(ulong *)(puVar4 + -0x28) = param_4;
  *(long *)(puVar4 + -0x20) = unaff_x20;
  *(undefined4 **)(puVar4 + -0x18) = unaff_x19;
  *(undefined8 *)(puVar4 + -0x10) = uVar1;
  *(undefined8 *)(puVar4 + -8) = uVar8;
  func_0x00010b4c5238();
  *(ulong *)(puVar6 + 4) = param_4;
  if ((param_2 & 1) != 0) {
    func_0x00010b4c560c();
  }
  func_0x00010b4c5278();
  *puVar6 = (int)unaff_x19;
  return puVar6;
}



/* Entry: 10bd1fac4; end: 10bd1fb77;  */

void FUN_10bd1fac4(undefined4 *param_1,ulong param_2,undefined *param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  undefined4 *unaff_x23;
  undefined1 *unaff_x29;
  undefined1 *puVar4;
  undefined8 unaff_x30;
  
  puVar2 = &stack0xffffffffffffffc0;
  puVar4 = &stack0xfffffffffffffff0;
  func_0x00010bd250d4();
  if (unaff_x23 == param_1) {
    param_4 = (ulong)*(uint *)(unaff_x20 + 4);
    func_0x00010bd24cd4();
    puVar2 = (undefined1 *)register0x00000008;
    puVar4 = unaff_x29;
  }
  else {
    param_1 = (undefined4 *)*unaff_x22;
    param_3 = &UNK_10f8353ce;
    unaff_x30 = 0x10bd1fb10;
    func_0x00010bd25590();
  }
  func_0x00010bd25614();
  *(undefined1 **)(puVar2 + 0x40) = puVar4;
  *(undefined8 *)(puVar2 + 0x48) = unaff_x30;
  func_0x00010bd24fac();
  *(int *)(puVar2 + 0xc) = (int)param_4;
  if (((byte)param_3[1] >> 3 & 1) == 0) {
    FUN_10bd1d8dc();
    return;
  }
  func_0x00010bd24cf0();
  func_0x00010bd24d6c(param_1);
  func_0x00010bd256a4();
  uVar1 = *(undefined8 *)(puVar2 + 0x40);
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  func_0x00010bd2554c();
  *(long **)(puVar2 + -0x30) = unaff_x22;
  *(ulong *)(puVar2 + -0x28) = param_4;
  *(long *)(puVar2 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
  *(undefined8 *)(puVar2 + -0x10) = uVar1;
  *(undefined8 *)(puVar2 + -8) = uVar3;
  func_0x00010b4c5238();
  *(ulong *)(param_1 + 4) = param_4;
  if ((param_2 & 1) != 0) {
    func_0x00010b4c560c();
  }
  func_0x00010b4c5278();
  *param_1 = (int)unaff_x19;
  return;
}



/* Entry: 10bd1fb78; end: 10bd1fc23;  */

/* WARNING: Type propagation algorithm not settling */

long ******* FUN_10bd1fb78(int param_1,long ******param_2,long param_3,long ******param_4)

{
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  long *******ppppppplVar1;
  long *******ppppppplVar2;
  long *******ppppppplVar3;
  undefined8 *puVar4;
  long *******ppppppplVar5;
  long *******ppppppplVar6;
  int iVar7;
  undefined8 extraout_x8;
  long lVar8;
  undefined1 *extraout_x10;
  long *******unaff_x19;
  long ******unaff_x20;
  long unaff_x21;
  undefined8 uVar9;
  undefined8 *unaff_x22;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined1 auStack_260 [24];
  long *******ppppppplStack_248;
  long ******pppppplStack_240;
  undefined4 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 auStack_210 [24];
  undefined1 *apuStack_1f8 [6];
  long *******ppppppplStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_198 [48];
  long *******ppppppplStack_168;
  undefined *puStack_160;
  ulong uStack_158;
  undefined *puStack_150;
  undefined8 uStack_88;
  
  func_0x00010bd24b8c();
  if ((bool)in_ZR) {
    func_0x00010bd24f7c();
    if (!(bool)in_CY) {
      func_0x00010bd24ce4();
      in_OV = SBORROW4(param_1,8);
      in_NG = param_1 + -8 < 0;
      in_ZR = 0;
      if (param_1 == 8) {
        ppppppplVar1 = unaff_x19;
        FUN_10bd1d534();
        if (((ulong)ppppppplVar1 & 1) == 0) {
          func_0x00010bd2546c();
          param_2 = param_4;
          FUN_10bcee5e4();
          if (ppppppplVar1 == (long *******)0x0) {
            func_0x00010bd24e40();
            func_0x00010bd1b8b8();
            func_0x00010bd37544();
            lVar8 = *(long *)(unaff_x21 + 8);
            *(int *)(lVar8 + -0x10) = (int)unaff_x20;
            *(undefined4 *)(lVar8 + -0xc) = 0;
            *(long *)(lVar8 + -8) = (long)(int)param_4;
            return ppppppplVar1;
          }
        }
        func_0x00010bd24cd4();
        func_0x00010bd25614();
        func_0x00010bd24fac();
        if ((*(byte *)(param_3 + 1) >> 3 & 1) == 0) {
          FUN_10bd1d8dc();
          return ppppppplVar1;
        }
        func_0x00010bd24cf0();
        func_0x00010bd24d6c(ppppppplVar1);
        func_0x00010bd256a4();
        func_0x00010bd2554c();
        func_0x00010b4c5238();
        ppppppplVar1[2] = param_4;
        if (((ulong)param_2 & 1) != 0) {
          func_0x00010b4c560c();
        }
        func_0x00010b4c5278();
        *(int *)ppppppplVar1 = (int)unaff_x19;
        return ppppppplVar1;
      }
      goto FUN_10bcee668;
    }
    func_0x00010bd24f14();
  }
  else {
    func_0x00010bd24e70();
  }
  func_0x00010bd24e38();
  param_4 = unaff_x20;
FUN_10bcee668:
  ppppppplVar5 = (long *******)*unaff_x22;
  func_0x00010bd24fec();
  FUN_10bd1fc50();
  ppppppplVar6 = ppppppplVar5;
  func_0x00010bd2546c();
  ppppppplVar1 = (long *******)ppppppplVar6[2][0x13];
  func_0x00010bd0a0a0();
  uStack_88 = extraout_x8;
  FUN_10bcee5f8();
  if (ppppppplVar1 == (long *******)0x0) {
    ppppppplVar3 = unaff_x19 + 0x18;
    ppppppplVar2 = ppppppplVar3;
    pppppplStack_240 = param_4;
    uStack_238 = (int)ppppppplVar5;
    ppppppplStack_168 = ppppppplVar3;
    func_0x00010ae7ccdc();
    func_0x00010bd0c238();
    if (ppppppplVar2 == (long *******)0x0) {
      ppppppplVar1 = (long *******)0x0;
    }
    else {
      ppppppplVar1 = (long *******)*ppppppplVar6;
    }
    FUN_10bcfe50c(&ppppppplStack_168);
    if (ppppppplVar2 == (long *******)0x0) {
      ppppppplStack_248 = ppppppplVar3;
      func_0x000107c2b9f0();
      func_0x00010bd0c238();
      if (ppppppplVar3 == (long *******)0x0) {
        ppppppplStack_168 = (long *******)param_4[1];
        if (*(char *)((long)ppppppplStack_168 + 0x17) < '\0') {
          ppppppplStack_168 = (long *******)*ppppppplStack_168;
        }
        puStack_160 = &UNK_1005616c4;
        uStack_158 = (ulong)ppppppplVar5 & 0xffffffff;
        puStack_150 = &UNK_1004d50a8;
        puVar4 = (undefined8 *)&UNK_10f833088;
        func_0x000107c2b99c(auStack_260,&UNK_10f833088,0x18,&ppppppplStack_168,2);
        FUN_10bcedc88();
        uVar9 = puVar4[5];
        func_0x00010bd0b940(&ppppppplStack_168);
        func_0x00010bcf65a8(&ppppppplStack_168,1);
        func_0x00010bd0b1d0(&ppppppplStack_168);
        func_0x000107c315a4(auStack_198,*puVar4);
        FUN_10bcf6f18(&ppppppplStack_168,uVar9);
        func_0x000107c315a8(auStack_198);
        ppppppplVar1 = (long *******)&ppppppplStack_168;
        uVar9 = 1;
        FUN_10bcf6838();
        ppppppplVar6 = ppppppplVar1;
        func_0x00010bd09fa8(param_4[1]);
        func_0x00010bd0a408();
        ppppppplStack_1c8 = ppppppplVar6;
        uStack_1c0 = uVar9;
        func_0x00010bd0abbc();
        apuStack_1f8[0] = extraout_x10;
        if (in_NG == in_OV) {
          apuStack_1f8[0] = auStack_260;
        }
        func_0x000107c2ba44(&uStack_278,auStack_198,&ppppppplStack_1c8,apuStack_1f8);
        ppppppplVar6 = (long *******)&ppppppplStack_168;
        func_0x00010bd0b5c0();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_210,auStack_260);
        func_0x000107c27b9c(ppppppplVar6,auStack_210);
        uStack_228 = uStack_270;
        uStack_230 = uStack_278;
        uStack_220 = uStack_268;
        func_0x00010bd0c598();
        func_0x000107c27b9c(ppppppplVar6 + 3,&uStack_230);
        func_0x00010bd0b6a4();
        func_0x00010bd0b904();
        ppppppplVar1[1] = (long ******)ppppppplVar6;
        func_0x00010bd0aab8();
        *(int *)((long)ppppppplVar1 + 4) = (int)ppppppplVar5;
        ppppppplVar1[2] = param_4;
        ppppppplVar1[3] = (long ******)&PTR_PTR_1134063b0;
        ppppppplVar6 = unaff_x19 + 0xf;
        func_0x00010bced3ac(auStack_198,ppppppplVar6,ppppppplVar1);
        func_0x00010bd0aad4();
      }
      else {
        ppppppplVar1 = (long *******)*ppppppplVar6;
      }
      FUN_10bcfee98(&ppppppplStack_248);
    }
  }
  iVar7 = (int)ppppppplVar6;
  func_0x000107c3a64c(uStack_88);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010bd0aad4();
    ppppppplVar1 = (long *******)&ppppppplStack_248;
    FUN_10bcfee98();
    func_0x00010bd0a974();
    lVar8 = 0;
    while( true ) {
      if ((ulong)(*(uint *)(ppppppplVar1 + 0x11) &
                 ((int)*(uint *)(ppppppplVar1 + 0x11) >> 0x1f ^ 0xffffffffU)) * 0x28 - lVar8 == 0) {
        return (long *******)0x0;
      }
      if ((*(int *)((long)ppppppplVar1[0xb] + lVar8) <= iVar7) &&
         (ppppppplVar6 = (long *******)((long)ppppppplVar1[0xb] + lVar8),
         iVar7 < *(int *)((long)ppppppplVar6 + 4))) break;
      lVar8 = lVar8 + 0x28;
    }
    return ppppppplVar6;
  }
  return ppppppplVar1;
}



/* Entry: 10bd1fc24; end: 10bd1fc4f;  */

long ** FUN_10bd1fc24(undefined8 *param_1)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long **pplVar1;
  long *plVar2;
  long *plVar3;
  long **pplVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 extraout_x8;
  long lVar7;
  undefined1 *extraout_x10;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar8;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [24];
  long *aplStack_218 [2];
  undefined4 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1e0 [24];
  undefined1 *apuStack_1c8 [6];
  long **pplStack_198;
  undefined8 uStack_190;
  undefined1 auStack_168 [48];
  long *plStack_138;
  undefined *puStack_130;
  ulong uStack_128;
  undefined *puStack_120;
  undefined8 uStack_58;
  
  FUN_10bd1fc50();
  puVar5 = param_1;
  func_0x00010bd2546c();
  pplVar1 = *(long ***)(puVar5[2] + 0x98);
  func_0x00010bd0a0a0();
  uStack_58 = extraout_x8;
  FUN_10bcee5f8();
  if (pplVar1 == (long **)0x0) {
    plVar3 = (long *)(unaff_x19 + 0xc0);
    plVar2 = plVar3;
    uStack_208 = (int)param_1;
    plStack_138 = plVar3;
    func_0x00010ae7ccdc();
    func_0x00010bd0c238();
    if (plVar2 == (long *)0x0) {
      pplVar1 = (long **)0x0;
    }
    else {
      pplVar1 = (long **)*puVar5;
    }
    FUN_10bcfe50c(&plStack_138);
    if (plVar2 == (long *)0x0) {
      aplStack_218[0] = plVar3;
      func_0x000107c2b9f0();
      func_0x00010bd0c238();
      if (plVar3 == (long *)0x0) {
        plStack_138 = (long *)unaff_x20[1];
        if (*(char *)((long)plStack_138 + 0x17) < '\0') {
          plStack_138 = (long *)*plStack_138;
        }
        puStack_130 = &UNK_1005616c4;
        uStack_128 = (ulong)param_1 & 0xffffffff;
        puStack_120 = &UNK_1004d50a8;
        puVar5 = (undefined8 *)&UNK_10f833088;
        func_0x000107c2b99c(auStack_230,&UNK_10f833088,0x18,&plStack_138,2);
        FUN_10bcedc88();
        uVar8 = puVar5[5];
        func_0x00010bd0b940(&plStack_138);
        func_0x00010bcf65a8(&plStack_138,1);
        func_0x00010bd0b1d0(&plStack_138);
        func_0x000107c315a4(auStack_168,*puVar5);
        FUN_10bcf6f18(&plStack_138,uVar8);
        func_0x000107c315a8(auStack_168);
        pplVar1 = &plStack_138;
        uVar8 = 1;
        FUN_10bcf6838();
        pplVar4 = pplVar1;
        func_0x00010bd09fa8(unaff_x20[1]);
        func_0x00010bd0a408();
        pplStack_198 = pplVar4;
        uStack_190 = uVar8;
        func_0x00010bd0abbc();
        apuStack_1c8[0] = extraout_x10;
        if (in_NG == in_OV) {
          apuStack_1c8[0] = auStack_230;
        }
        func_0x000107c2ba44(&uStack_248,auStack_168,&pplStack_198,apuStack_1c8);
        pplVar4 = &plStack_138;
        func_0x00010bd0b5c0();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_1e0,auStack_230);
        func_0x000107c27b9c(pplVar4,auStack_1e0);
        uStack_1f8 = uStack_240;
        uStack_200 = uStack_248;
        uStack_1f0 = uStack_238;
        func_0x00010bd0c598();
        func_0x000107c27b9c(pplVar4 + 3,&uStack_200);
        func_0x00010bd0b6a4();
        func_0x00010bd0b904();
        pplVar1[1] = (long *)pplVar4;
        func_0x00010bd0aab8();
        *(int *)((long)pplVar1 + 4) = (int)param_1;
        pplVar1[2] = unaff_x20;
        pplVar1[3] = (long *)&PTR_PTR_1134063b0;
        puVar5 = (undefined8 *)(unaff_x19 + 0x78);
        func_0x00010bced3ac(auStack_168,puVar5,pplVar1);
        func_0x00010bd0aad4();
      }
      else {
        pplVar1 = (long **)*puVar5;
      }
      FUN_10bcfee98(aplStack_218);
    }
  }
  iVar6 = (int)puVar5;
  func_0x000107c3a64c(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010bd0aad4();
    pplVar1 = aplStack_218;
    FUN_10bcfee98();
    func_0x00010bd0a974();
    lVar7 = 0;
    while( true ) {
      if ((ulong)(*(uint *)(pplVar1 + 0x11) & ((int)*(uint *)(pplVar1 + 0x11) >> 0x1f ^ 0xffffffffU)
                 ) * 0x28 - lVar7 == 0) {
        return (long **)0x0;
      }
      if ((*(int *)((long)pplVar1[0xb] + lVar7) <= iVar6) &&
         (pplVar4 = (long **)((long)pplVar1[0xb] + lVar7), iVar6 < *(int *)((long)pplVar4 + 4)))
      break;
      lVar7 = lVar7 + 0x28;
    }
    return pplVar4;
  }
  return pplVar1;
}



/* Entry: 10bd1fc50; end: 10bd1fcdf;  */

ulong FUN_10bd1fc50(ulong param_1,ulong *param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong uVar3;
  long extraout_x8;
  long unaff_x19;
  ulong *unaff_x20;
  ulong *unaff_x22;
  ulong unaff_x23;
  undefined1 *puVar4;
  undefined8 ****ppppuVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 ***pppuStack_40;
  code *pcStack_38;
  
  func_0x00010bd24b8c();
  if ((bool)in_ZR) {
    func_0x00010bd24f88();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x00010bd24f20();
      goto LAB_10bd1fccc;
    }
    func_0x00010bd24c50();
    if ((int)param_1 == 8) {
      if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) == 0) {
        func_0x00010bd24cd4();
        FUN_10bd1bb7c();
        return (ulong)*(uint *)(*(long *)(param_1 + 8) + (long)(int)unaff_x20 * 4);
      }
      func_0x00010bd24ca4();
      puVar2 = &stack0xffffffffffffffd0;
      puVar4 = &stack0xfffffffffffffff0;
      func_0x00010b4c52f4();
      if (param_1 != 0) {
        func_0x00010b4c5354();
        return (ulong)*(uint *)(extraout_x8 + (long)(int)unaff_x19 * 4);
      }
      func_0x00010b4c5038();
      func_0x00010b4c52d4();
      func_0x00010b4c5068();
      puVar6 = &LAB_10b4bff0c;
      func_0x00010b4c52cc();
      unaff_x22 = param_2;
      goto code_r0x00010b4bff0c;
    }
  }
  else {
    func_0x00010bd24e70();
LAB_10bd1fccc:
    func_0x00010bd24e38();
  }
  uVar3 = *unaff_x22;
  puVar6 = &UNK_10f8353e3;
  func_0x00010bd24fec();
  puVar2 = &stack0xffffffffffffff90;
  pcStack_38 = FUN_10bd1fce0;
  ppppuVar5 = &pppuStack_40;
  pppuStack_40 = (undefined8 ***)&stack0xfffffffffffffff0;
  func_0x00010bd250d4();
  if (unaff_x23 == uVar3) {
    param_4 = *(undefined4 *)((long)unaff_x20 + 4);
    func_0x00010bd24cd4();
    puVar2 = &stack0xffffffffffffffd0;
    ppppuVar5 = (undefined8 ****)pppuStack_40;
    pcVar7 = pcStack_38;
  }
  else {
    uVar3 = *unaff_x22;
    func_0x00010bd25724();
    pcVar7 = (code *)0x10bd1fd28;
    func_0x00010bd25590();
  }
  func_0x00010bd25614();
  *(undefined8 *****)(puVar2 + 0x40) = ppppuVar5;
  *(code **)(puVar2 + 0x48) = pcVar7;
  func_0x00010bd24fac();
  *(undefined4 *)(puVar2 + 0xc) = param_4;
  if (((byte)puVar6[1] >> 3 & 1) == 0) {
    FUN_10bd1da80();
    return uVar3;
  }
  uVar1 = *(uint *)(uVar3 + 0x28);
  func_0x00010bd24cf0();
  FUN_10bcf1560(unaff_x19);
  param_1 = (long)unaff_x20 + (ulong)uVar1;
  func_0x00010bd2565c(param_1,unaff_x22,(uint)uVar3 & 0xff,unaff_x19);
  puVar4 = *(undefined1 **)(puVar2 + 0x40);
  puVar6 = *(undefined **)(puVar2 + 0x48);
  func_0x00010bd2554c();
code_r0x00010b4bff0c:
  func_0x000107c398f0();
  *(undefined1 **)(puVar2 + 0x40) = puVar4;
  *(undefined **)(puVar2 + 0x48) = puVar6;
  func_0x00010b4c510c();
  func_0x00010b4c56a0();
  if (((ulong)unaff_x22 & 1) == 0) {
    param_1 = *unaff_x20;
  }
  else {
    func_0x00010b4c508c();
    func_0x00010b4c361c();
    *unaff_x20 = param_1;
  }
  func_0x000107c2845c();
  return param_1;
}



/* Entry: 10bd1fce0; end: 10bd1fda3;  */

void FUN_10bd1fce0(long param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  undefined1 *unaff_x29;
  undefined1 *puVar6;
  undefined8 unaff_x30;
  
  puVar3 = &stack0xffffffffffffffc0;
  puVar6 = &stack0xfffffffffffffff0;
  func_0x00010bd250d4();
  if (unaff_x23 == param_1) {
    param_4 = *(undefined4 *)((long)unaff_x20 + 4);
    func_0x00010bd24cd4();
    puVar3 = (undefined1 *)register0x00000008;
    puVar6 = unaff_x29;
  }
  else {
    param_1 = *unaff_x22;
    func_0x00010bd25724();
    unaff_x30 = 0x10bd1fd28;
    func_0x00010bd25590();
  }
  func_0x00010bd25614();
  *(undefined1 **)(puVar3 + 0x40) = puVar6;
  *(undefined8 *)(puVar3 + 0x48) = unaff_x30;
  func_0x00010bd24fac();
  *(undefined4 *)(puVar3 + 0xc) = param_4;
  if ((*(byte *)(param_3 + 1) >> 3 & 1) != 0) {
    uVar2 = *(uint *)(param_1 + 0x28);
    func_0x00010bd24cf0();
    FUN_10bcf1560(unaff_x19);
    lVar4 = (long)unaff_x20 + (ulong)uVar2;
    func_0x00010bd2565c(lVar4,unaff_x22,(uint)param_1 & 0xff,unaff_x19);
    uVar1 = *(undefined8 *)(puVar3 + 0x40);
    uVar5 = *(undefined8 *)(puVar3 + 0x48);
    func_0x00010bd2554c();
    func_0x000107c398f0();
    *(undefined8 *)(puVar3 + 0x40) = uVar1;
    *(undefined8 *)(puVar3 + 0x48) = uVar5;
    func_0x00010b4c510c();
    func_0x00010b4c56a0();
    if (((ulong)unaff_x22 & 1) != 0) {
      func_0x00010b4c508c();
      func_0x00010b4c361c();
      *unaff_x20 = lVar4;
    }
    func_0x000107c2845c();
    return;
  }
  FUN_10bd1da80();
  return;
}



/* Entry: 10bd1fda4; end: 10bd1ff03;  */

void FUN_10bd1fda4(int param_1,undefined8 param_2,long param_3,long *param_4)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong uVar2;
  long lVar3;
  ulong unaff_x19;
  long *unaff_x20;
  long *plVar4;
  long unaff_x21;
  ulong uVar5;
  ulong *unaff_x22;
  
  func_0x00010bd24b8c();
  if ((bool)in_ZR) {
    func_0x00010bd24f88();
    if ((bool)in_CY && !(bool)in_ZR) {
      func_0x00010bd24ce4();
      if (param_1 == 8) {
        uVar2 = unaff_x19;
        FUN_10bd1d534();
        if ((uVar2 & 1) == 0) {
          func_0x00010bd2546c();
          FUN_10bcee5e4();
          if (uVar2 == 0) {
            func_0x00010bd24e40();
            func_0x00010bd1b8b8();
            func_0x00010bd37544();
            lVar3 = *(long *)(unaff_x21 + 8);
            *(int *)(lVar3 + -0x10) = (int)unaff_x20;
            *(undefined4 *)(lVar3 + -0xc) = 0;
            *(long *)(lVar3 + -8) = (long)(int)param_4;
            return;
          }
        }
        func_0x00010bd24cd4();
        func_0x00010bd25614();
        func_0x00010bd24fac();
        if ((*(byte *)(param_3 + 1) >> 3 & 1) == 0) {
          FUN_10bd1da80();
          return;
        }
        uVar1 = *(uint *)(uVar2 + 0x28);
        func_0x00010bd24cf0();
        FUN_10bcf1560(unaff_x19);
        lVar3 = (long)unaff_x20 + (ulong)uVar1;
        func_0x00010bd2565c(lVar3,unaff_x22,(uint)uVar2 & 0xff,unaff_x19);
        func_0x00010bd2554c();
        func_0x000107c398f0();
        func_0x00010b4c510c();
        func_0x00010b4c56a0();
        if (((ulong)unaff_x22 & 1) != 0) {
          func_0x00010b4c508c();
          func_0x00010b4c361c();
          *unaff_x20 = lVar3;
        }
        func_0x000107c2845c();
        return;
      }
      goto LAB_10bd1fe38;
    }
    func_0x00010bd25724();
    func_0x00010bd24f20();
  }
  else {
    func_0x00010bd25724();
    func_0x00010bd24e70();
  }
  func_0x00010bd24e38();
  param_4 = unaff_x20;
LAB_10bd1fe38:
  uVar2 = *unaff_x22;
  func_0x00010bd25724();
  func_0x00010bd24fec();
  func_0x00010bd24f94();
  uVar5 = *(ulong *)(uVar2 + 0x58);
  func_0x000107c3a8e8();
  if (uVar5 == uVar2) {
    lVar3 = *(long *)(unaff_x19 + 0x50);
    if (lVar3 == 0) {
      plVar4 = (long *)param_4[0xb];
      func_0x00010bd252d0();
      (**(code **)(*plVar4 + 0x10))(plVar4,lVar3);
      *(long *)(unaff_x19 + 0x50) = (long)plVar4;
    }
    return;
  }
  if (((*(byte *)(unaff_x19 + 1) >> 3 & 1) == 0) &&
     ((*(byte *)(*(long *)(unaff_x19 + 0x38) + 0x8c) & 1) == 0)) {
    func_0x00010bd24ee4();
    FUN_10bd1ff04();
    if (((uVar2 & 1) == 0) && (func_0x00010bd24f2c(), uVar2 == 0)) {
      plVar4 = param_4 + 1;
      FUN_10bd24740();
      uVar2 = 0;
      if (*plVar4 != 0) {
        return;
      }
    }
  }
  plVar4 = (long *)param_4[0xb];
  func_0x00010bd252d0();
                    /* WARNING: Could not recover jumptable at 0x00010bd1feb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x10))(plVar4,uVar2);
  return;
}



/* Entry: 10bd1ff04; end: 10bd1ff2f;  */

ulong FUN_10bd1ff04(ulong param_1)

{
  FUN_10bd1b8d8();
  if ((param_1 & 1) == 0) {
    func_0x00010bd24ef0();
  }
  return param_1;
}



/* Entry: 10bd1ff30; end: 10bd2002b;  */

/* WARNING: Possible PIC construction at 0x00010bd200d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bd200e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010bd20104: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bd200e4) */
/* WARNING: Removing unreachable block (ram,0x00010bd200ec) */
/* WARNING: Removing unreachable block (ram,0x00010bd200f4) */
/* WARNING: Removing unreachable block (ram,0x00010bd200d8) */
/* WARNING: Removing unreachable block (ram,0x00010bd20108) */
/* WARNING: Removing unreachable block (ram,0x00010bd20110) */
/* WARNING: Removing unreachable block (ram,0x00010bd20118) */

ulong * FUN_10bd1ff30(ulong *param_1,undefined8 param_2,ulong *param_3,ulong *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined4 uVar3;
  byte bVar4;
  ulong **ppuVar5;
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong *puVar13;
  undefined8 *unaff_x21;
  ulong *unaff_x22;
  ulong uVar14;
  undefined1 **unaff_x29;
  undefined8 unaff_x30;
  ulong uStack_c8;
  ulong *puStack_70;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  puVar9 = param_1;
  func_0x00010bd24c30();
  if ((bool)in_ZR) {
    func_0x00010bd24f7c();
    if ((bool)in_CY) {
      func_0x00010bd24f14();
      puVar13 = param_4;
      goto LAB_10bd20014;
    }
    puVar13 = param_4;
    func_0x00010bd24ce4();
    in_CY = 9 < (uint)puVar9;
    in_ZR = 0;
    if ((uint)puVar9 == 10) {
      if (param_4 == (ulong *)0x0) {
        param_4 = (ulong *)param_1[0xb];
      }
      if ((*(byte *)((long)param_3 + 1) >> 3 & 1) != 0) {
        uVar11 = param_1[5];
        uVar3 = *(undefined4 *)((long)param_3 + 4);
        func_0x00010bd252d0();
        puVar1 = (undefined8 *)((long)unaff_x21 + (ulong)(uint)uVar11);
        puVar7 = puVar1;
        func_0x00010b4bf3a0(puVar1,uVar3);
        if ((puVar7 != (undefined8 *)0x0) && ((*(byte *)((long)puVar7 + 10) & 1) == 0)) {
          puVar13 = (ulong *)*puVar7;
          if ((*(byte *)((long)puVar7 + 10) >> 4 & 1) != 0) {
            (**(code **)(*param_4 + 0x10))(param_4,puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bd18cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*puVar13 + 0x18))(puVar13,param_4,*puVar1);
            return puVar13;
          }
          return puVar13;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bd18c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_4 + 0x10))(param_4,puVar9);
        return param_4;
      }
      func_0x00010bd24f2c();
      if (puVar9 == (ulong *)0x0) {
LAB_10bd1ff94:
        func_0x00010bd24f34();
        FUN_10bd1be78();
        puVar9 = (ulong *)0x0;
        if ((ulong *)*param_1 != (ulong *)0x0) {
          return (ulong *)*param_1;
        }
      }
      else {
        puVar9 = param_1;
        func_0x00010bd24f34();
        FUN_10bd1bdd4();
        if (((ulong)puVar9 & 1) != 0) goto LAB_10bd1ff94;
      }
      func_0x00010bd24ee4();
      ppuVar5 = (ulong **)register0x00000008;
      param_3 = unaff_x19;
      param_1 = unaff_x20;
      goto SUB_10bd1fe44;
    }
  }
  else {
    func_0x00010bd24e70();
    puVar13 = param_4;
LAB_10bd20014:
    func_0x00010bd24e38();
    param_4 = unaff_x22;
  }
  unaff_x22 = (ulong *)*param_1;
  func_0x00010bd250f8(unaff_x22,param_3,&UNK_10f835400);
  ppuVar5 = &puStack_70;
  uStack_48 = 0x10bd2002c;
  unaff_x29 = &puStack_50;
  puStack_70 = param_4;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x00010bd24b74();
  if ((bool)in_ZR) {
    func_0x00010bd24f7c();
    if ((bool)in_CY) {
      func_0x00010bd24f14();
      goto LAB_10bd20144;
    }
    func_0x00010bd24c80();
    if ((int)unaff_x22 != 10) goto LAB_10bd20148;
    if (puVar13 == (ulong *)0x0) {
      puVar13 = (ulong *)unaff_x21[0xb];
    }
    if ((*(byte *)((long)param_3 + 1) >> 3 & 1) != 0) {
      plVar2 = (long *)((long)param_1 + (ulong)*(uint *)(unaff_x21 + 5));
      uVar11 = (ulong)*(uint *)((long)param_3 + 4);
      plVar8 = plVar2;
      func_0x00010b4c0fe8(plVar2,uVar11,puVar13);
      plVar8[2] = (long)param_3;
      if ((uVar11 & 1) == 0) {
        bVar4 = *(byte *)((long)plVar8 + 10);
        *(byte *)((long)plVar8 + 10) = bVar4 & 0xf0;
        param_3 = (ulong *)*plVar8;
        if ((bVar4 >> 4 & 1) != 0) {
          func_0x00010bd1a754();
          func_0x00010bd1a660();
                    /* WARNING: Could not recover jumptable at 0x00010bd18d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_3 + 0x28))(param_3,plVar8,*plVar2);
          return param_3;
        }
      }
      else {
        func_0x00010787827c();
        *(char *)(plVar8 + 1) = (char)param_3;
        *(undefined1 *)((long)plVar8 + 9) = 0;
        *(undefined1 *)((long)plVar8 + 0xb) = 0;
        func_0x00010bd1a754();
        func_0x00010bd1a660();
        *(byte *)((long)plVar8 + 10) = *(byte *)((long)plVar8 + 10) & 0xf;
        func_0x00010bd1a734();
        *plVar8 = (long)param_3;
        *(byte *)((long)plVar8 + 10) = *(byte *)((long)plVar8 + 10) & 0xf0;
      }
      return param_3;
    }
    func_0x00010bd24b3c();
    puVar9 = unaff_x22;
    func_0x00010bd24f2c();
    if (puVar9 == (ulong *)0x0) {
      func_0x00010bd24c14();
      FUN_10bd1cd90();
LAB_10bd200bc:
      puVar9 = (ulong *)*unaff_x22;
      if (puVar9 != (ulong *)0x0) {
        return puVar9;
      }
      func_0x00010bd24e64();
      unaff_x30 = 0x10bd20108;
SUB_10bd1fe44:
      *(ulong **)((long)ppuVar5 + -0x30) = unaff_x22;
      *(undefined8 **)((long)ppuVar5 + -0x28) = unaff_x21;
      *(ulong **)((long)ppuVar5 + -0x20) = param_1;
      *(ulong **)((long)ppuVar5 + -0x18) = param_3;
      *(undefined1 ***)((long)ppuVar5 + -0x10) = unaff_x29;
      *(undefined8 *)((long)ppuVar5 + -8) = unaff_x30;
      func_0x00010bd24f94();
      puVar13 = (ulong *)puVar9[0xb];
      func_0x000107c3a8e8();
      if (puVar13 != puVar9) {
        if (((*(byte *)((long)param_3 + 1) >> 3 & 1) == 0) &&
           ((*(byte *)(param_3[7] + 0x8c) & 1) == 0)) {
          func_0x00010bd24ee4();
          FUN_10bd1ff04();
          if ((((ulong)puVar9 & 1) == 0) && (func_0x00010bd24f2c(), puVar9 == (ulong *)0x0)) {
            puVar13 = param_1 + 1;
            FUN_10bd24740(puVar13,param_3);
            puVar9 = (ulong *)0x0;
            if ((ulong *)*puVar13 != (ulong *)0x0) {
              return (ulong *)*puVar13;
            }
          }
        }
        puVar13 = (ulong *)param_1[0xb];
        func_0x00010bd252d0();
                    /* WARNING: Could not recover jumptable at 0x00010bd1feb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*puVar13 + 0x10))(puVar13,puVar9);
        return puVar13;
      }
      puVar9 = (ulong *)param_3[10];
      if (puVar9 != (ulong *)0x0) {
        return puVar9;
      }
      puVar13 = (ulong *)param_1[0xb];
      func_0x00010bd252d0();
      (**(code **)(*puVar13 + 0x10))(puVar13,puVar9);
      param_3[10] = (ulong)puVar13;
      return puVar13;
    }
    func_0x00010bd24ba4();
    if (((ulong)puVar9 & 1) != 0) goto LAB_10bd200bc;
    func_0x00010bd24d7c();
    func_0x00010bd24c14();
  }
  else {
    func_0x00010bd24e70();
LAB_10bd20144:
    func_0x00010bd24e38();
LAB_10bd20148:
    puVar9 = (ulong *)*unaff_x21;
    func_0x00010bd250f8(puVar9,param_3,&UNK_10f83540b);
  }
  func_0x00010bd24b60();
  if (puVar9 == (ulong *)0x0) {
    func_0x00010bd24c14();
    FUN_10bd1cd90();
  }
  else {
    func_0x00010bd24c14();
    FUN_10bd202f4();
  }
  func_0x00010bd24c14();
  func_0x00010bd24b28();
  if (puVar9 != (ulong *)0x0) {
    func_0x00010bd24c98();
    return (ulong *)((long)param_3 + ((ulong)puVar9 & 0xffffffff));
  }
  func_0x00010bd24c40();
  func_0x00010bd24af8();
  if ((int)puVar9 == 0) {
    func_0x00010bd24c8c();
    return (ulong *)((long)param_3 + ((ulong)puVar9 & 0xffffffff));
  }
  func_0x00010bd24c40();
  func_0x00010bd24fac();
  puVar13 = puVar9;
  func_0x00010bd24e7c();
  FUN_10bd20d94();
  uVar11 = (ulong)*(uint *)((long)puVar9 + 0x44);
  lVar12 = *(long *)((long)param_1 + uVar11);
  if (lVar12 != *(long *)(puVar9[1] + uVar11)) goto LAB_10bd20cfc;
  uVar14 = (ulong)(uint)puVar9[9];
  uVar10 = param_1[1];
  if ((uVar10 & 1) == 0) {
    if (uVar10 == 0) goto LAB_10bd20cdc;
LAB_10bd20cc0:
    func_0x00010888f420(uVar10,uVar14,8);
    uVar14 = uVar10;
  }
  else {
    uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
    if (uVar10 != 0) goto LAB_10bd20cc0;
LAB_10bd20cdc:
    __Znwm();
  }
  *(ulong *)((long)param_1 + uVar11) = uVar14;
  _memcpy();
  lVar12 = *(long *)((long)param_1 + (ulong)*(uint *)((long)puVar9 + 0x44));
LAB_10bd20cfc:
  puVar9 = (ulong *)(lVar12 + ((ulong)puVar13 & 0xffffffff));
  puVar13 = puVar9;
  if ((*(byte *)((long)param_3 + 1) >> 5 & 1) != 0) {
    uVar11 = param_1[1];
    if ((uVar11 & 1) != 0) {
      uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
    }
    puVar13 = (ulong *)*puVar9;
    if (puVar13 == (ulong *)&UNK_10e5b4a80) {
      func_0x00010bd24e30();
      iVar6 = (int)puVar13;
      uStack_c8 = uVar11;
      if ((iVar6 < 9) ||
         ((func_0x00010bd24e30(), iVar6 == 9 && (func_0x00010bd25454(), iVar6 == 1)))) {
        puVar13 = &uStack_c8;
        func_0x00010b4c361c();
      }
      else {
        puVar13 = &uStack_c8;
        func_0x00010b4cd460();
      }
      *puVar9 = (ulong)puVar13;
    }
  }
  return puVar13;
}



/* Entry: 10bd2002c; end: 10bd20193;  */

/* WARNING: Possible PIC construction at 0x00010bd200d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bd200d8) */
/* WARNING: Removing unreachable block (ram,0x00010bd200ec) */
/* WARNING: Removing unreachable block (ram,0x00010bd200f4) */

ulong * FUN_10bd2002c(long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  long lVar11;
  ulong *unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong uVar12;
  ulong uStack_88;
  
  func_0x00010bd24b74();
  if ((bool)in_ZR) {
    func_0x00010bd24f7c();
    if ((bool)in_CY) {
      func_0x00010bd24f14();
      goto LAB_10bd20144;
    }
    func_0x00010bd24c80();
    if ((int)param_1 != 10) goto LAB_10bd20148;
    if (param_4 == 0) {
      param_4 = unaff_x21[0xb];
    }
    if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) != 0) {
      puVar1 = (undefined8 *)(unaff_x20 + (ulong)(uint)unaff_x21[5]);
      uVar10 = (ulong)*(uint *)((long)unaff_x19 + 4);
      puVar4 = puVar1;
      func_0x00010b4c0fe8(puVar1,uVar10,param_4);
      puVar4[2] = unaff_x19;
      if ((uVar10 & 1) == 0) {
        bVar2 = *(byte *)((long)puVar4 + 10);
        *(byte *)((long)puVar4 + 10) = bVar2 & 0xf0;
        unaff_x19 = (ulong *)*puVar4;
        if ((bVar2 >> 4 & 1) != 0) {
          func_0x00010bd1a754();
          func_0x00010bd1a660();
                    /* WARNING: Could not recover jumptable at 0x00010bd18d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*unaff_x19 + 0x28))(unaff_x19,puVar4,*puVar1);
          return unaff_x19;
        }
      }
      else {
        func_0x00010787827c();
        *(char *)(puVar4 + 1) = (char)unaff_x19;
        *(undefined1 *)((long)puVar4 + 9) = 0;
        *(undefined1 *)((long)puVar4 + 0xb) = 0;
        func_0x00010bd1a754();
        func_0x00010bd1a660();
        *(byte *)((long)puVar4 + 10) = *(byte *)((long)puVar4 + 10) & 0xf;
        func_0x00010bd1a734();
        *puVar4 = unaff_x19;
        *(byte *)((long)puVar4 + 10) = *(byte *)((long)puVar4 + 10) & 0xf0;
      }
      return unaff_x19;
    }
    func_0x00010bd24b3c();
    plVar6 = param_1;
    func_0x00010bd24f2c();
    if (plVar6 == (long *)0x0) {
      func_0x00010bd24c14();
      FUN_10bd1cd90();
LAB_10bd200bc:
      puVar5 = (ulong *)*param_1;
      if (puVar5 != (ulong *)0x0) {
        return puVar5;
      }
      func_0x00010bd24e64();
      func_0x00010bd1fe44();
      func_0x00010bd25180();
      *param_1 = (long)puVar5;
      return puVar5;
    }
    func_0x00010bd24ba4();
    if (((ulong)plVar6 & 1) != 0) goto LAB_10bd200bc;
    func_0x00010bd24d7c();
    func_0x00010bd24c14();
  }
  else {
    func_0x00010bd24e70();
LAB_10bd20144:
    func_0x00010bd24e38();
LAB_10bd20148:
    plVar6 = (long *)*unaff_x21;
    func_0x00010bd250f8();
  }
  func_0x00010bd24b60();
  if (plVar6 == (long *)0x0) {
    func_0x00010bd24c14();
    FUN_10bd1cd90();
  }
  else {
    func_0x00010bd24c14();
    FUN_10bd202f4();
  }
  func_0x00010bd24c14();
  func_0x00010bd24b28();
  if (plVar6 != (long *)0x0) {
    func_0x00010bd24c98();
    return (ulong *)((long)unaff_x19 + ((ulong)plVar6 & 0xffffffff));
  }
  func_0x00010bd24c40();
  func_0x00010bd24af8();
  if ((int)plVar6 == 0) {
    func_0x00010bd24c8c();
    return (ulong *)((long)unaff_x19 + ((ulong)plVar6 & 0xffffffff));
  }
  func_0x00010bd24c40();
  func_0x00010bd24fac();
  plVar7 = plVar6;
  func_0x00010bd24e7c();
  FUN_10bd20d94();
  uVar10 = (ulong)*(uint *)((long)plVar6 + 0x44);
  lVar11 = *(long *)(unaff_x20 + uVar10);
  if (lVar11 != *(long *)(plVar6[1] + uVar10)) goto LAB_10bd20cfc;
  uVar12 = (ulong)*(uint *)(plVar6 + 9);
  uVar8 = *(ulong *)(unaff_x20 + 8);
  if ((uVar8 & 1) == 0) {
    if (uVar8 == 0) goto LAB_10bd20cdc;
LAB_10bd20cc0:
    func_0x00010888f420(uVar8,uVar12,8);
    uVar12 = uVar8;
  }
  else {
    uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
    if (uVar8 != 0) goto LAB_10bd20cc0;
LAB_10bd20cdc:
    __Znwm();
  }
  *(ulong *)(unaff_x20 + uVar10) = uVar12;
  _memcpy();
  lVar11 = *(long *)(unaff_x20 + (ulong)*(uint *)((long)plVar6 + 0x44));
LAB_10bd20cfc:
  puVar5 = (ulong *)(lVar11 + ((ulong)plVar7 & 0xffffffff));
  puVar9 = puVar5;
  if ((*(byte *)((long)unaff_x19 + 1) >> 5 & 1) != 0) {
    uVar10 = *(ulong *)(unaff_x20 + 8);
    if ((uVar10 & 1) != 0) {
      uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
    }
    puVar9 = (ulong *)*puVar5;
    if (puVar9 == (ulong *)&UNK_10e5b4a80) {
      func_0x00010bd24e30();
      iVar3 = (int)puVar9;
      uStack_88 = uVar10;
      if ((iVar3 < 9) ||
         ((func_0x00010bd24e30(), iVar3 == 9 && (func_0x00010bd25454(), iVar3 == 1)))) {
        puVar9 = &uStack_88;
        func_0x00010b4c361c();
      }
      else {
        puVar9 = &uStack_88;
        func_0x00010b4cd460();
      }
      *puVar5 = (ulong)puVar9;
    }
  }
  return puVar9;
}



/* Entry: 10bd20194; end: 10bd202f3;  */

void FUN_10bd20194(undefined8 *param_1,ulong param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  undefined *puVar10;
  long lVar11;
  uint extraout_w8;
  long extraout_x8;
  code *pcVar12;
  code *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x8_04;
  ulong uVar13;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  plVar9 = (long *)*param_1;
  bVar5 = plVar9 <= *(long **)(param_4 + 0x20);
  if (*(long **)(param_4 + 0x20) == plVar9) {
    lVar11 = param_4;
    func_0x00010bd2551c();
    if (bVar5) {
      func_0x00010bd24f14();
      goto LAB_10bd202e0;
    }
    func_0x00010bd24df4();
    if ((int)plVar9 == 10) {
      if ((*(byte *)(param_4 + 1) >> 3 & 1) != 0) {
        func_0x00010bd24fc4();
        func_0x00010bd25504();
        if (param_3 == 0) goto LAB_10b4bf494;
        plVar8 = plVar9;
        func_0x00010b4c0fe8();
        plVar8[2] = lVar11;
        if ((param_2 & 1) == 0) {
          if ((*(byte *)((long)plVar8 + 10) >> 4 & 1) != 0) {
            (**(code **)(*(long *)*plVar8 + 0x38))((long *)*plVar8,param_3,*plVar9);
            goto code_r0x00010b4c0200;
          }
          if ((*plVar9 == 0) && (*plVar8 != 0)) {
            func_0x00010b4c5354();
            (*extraout_x8_00)();
          }
        }
        else {
          func_0x00010b4c575c();
        }
        *plVar8 = param_3;
code_r0x00010b4c0200:
        *(byte *)((long)plVar8 + 10) = *(byte *)((long)plVar8 + 10) & 0xf0;
        return;
      }
      func_0x00010bd250a8();
      if (plVar9 == (long *)0x0) {
        func_0x00010bd24c70();
        if (param_3 == 0) {
          FUN_10bd1d3b4();
        }
        else {
          FUN_10bd1cd90();
        }
        func_0x00010bd24c70();
        func_0x00010bd20e14();
        uVar13 = unaff_x21[1];
        if ((uVar13 & 1) != 0) {
          func_0x00010bd25400();
          uVar13 = extraout_x8_07;
        }
        if ((uVar13 == 0) && (*plVar9 != 0)) {
          func_0x00010bd24eb8();
        }
        *plVar9 = param_3;
        return;
      }
      if (param_3 == 0) {
        if ((*(byte *)(param_4 + 1) >> 4 & 1) == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = *(long *)(param_4 + 0x28);
        }
        func_0x00010bd24e40();
        puVar2 = (undefined1 *)register0x00000008;
        uVar13 = unaff_x20;
        while( true ) {
          unaff_x20 = param_2;
          *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
          *(long **)(puVar2 + -0x28) = unaff_x21;
          *(ulong *)(puVar2 + -0x20) = uVar13;
          *(long *)(puVar2 + -0x18) = unaff_x19;
          *(undefined8 *)(puVar2 + -0x10) = unaff_x29;
          *(undefined8 *)(puVar2 + -8) = unaff_x30;
          uVar4 = *(int *)(lVar11 + 4) != 0;
          uVar6 = *(int *)(lVar11 + 4) == 1;
          if ((!(bool)uVar6) || ((*(byte *)(*(long *)(lVar11 + 0x30) + 1) >> 1 & 1) == 0)) {
            func_0x00010bd252d8();
            if (*(int *)(unaff_x20 + (extraout_x8_04 & 0xffffffff)) != 0) {
              plVar9 = (long *)*plVar9;
              FUN_10bcee2d0();
              uVar13 = *(ulong *)(unaff_x20 + 8);
              plVar8 = plVar9;
              if ((uVar13 & 1) != 0) {
                func_0x00010bd25400();
                uVar13 = extraout_x8_06;
              }
              if (uVar13 == 0) {
                func_0x00010bd255ac();
                if ((int)plVar8 == 10) {
                  func_0x00010bd24e64();
                  func_0x00010bd20e14();
                  if (*plVar8 != 0) {
                    func_0x00010bd24eb8();
                  }
                }
                else if ((int)plVar8 == 9) {
                  FUN_10bd1bdfc();
                  if ((int)plVar9 == 1) {
                    func_0x00010bd24e64();
                    func_0x00010bd20e14();
                    if (*plVar9 != 0) {
                      func_0x000107c34fe8();
                    }
                    __ZdlPv();
                  }
                  else {
                    func_0x00010bd24e64();
                    FUN_10bd1f51c();
                    func_0x000107c30258();
                  }
                }
              }
              func_0x00010bd252d8();
              *(undefined4 *)(unaff_x20 + (extraout_x8_05 & 0xffffffff)) = 0;
            }
            return;
          }
          func_0x00010bd24e64();
          iVar7 = (int)plVar9;
          uVar1 = *(undefined8 *)(puVar2 + -0x20);
          unaff_x19 = *(long *)(puVar2 + -0x18);
          unaff_x22 = *(undefined8 *)(puVar2 + -0x30);
          unaff_x21 = *(long **)(puVar2 + -0x28);
          register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x50);
          *(undefined8 *)(puVar2 + -0x50) = unaff_d9;
          *(undefined8 *)(puVar2 + -0x48) = unaff_d8;
          *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
          *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
          *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
          *(long **)(puVar2 + -0x28) = unaff_x21;
          *(undefined8 *)(puVar2 + -0x20) = uVar1;
          *(long *)(puVar2 + -0x18) = unaff_x19;
          *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
          *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
          func_0x00010bd24b74();
          if (!(bool)uVar6) {
            func_0x00010bd24e70();
            func_0x00010bd24e38();
            *(undefined8 *)(puVar2 + -0x70) = uVar1;
            *(long *)(puVar2 + -0x68) = unaff_x19;
            *(undefined1 **)(puVar2 + -0x60) = puVar2 + -0x10;
            *(code **)(puVar2 + -0x58) = FUN_10bd1cd90;
            func_0x00010bd24f94();
            func_0x00010bd24e7c();
            func_0x00010bd1d3e8();
            if (iVar7 != -1) {
              func_0x00010bd25418();
              *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
            }
            return;
          }
          if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) != 0) break;
          if ((*(byte *)(unaff_x19 + 1) >> 5 & 1) != 0) {
            func_0x00010b91adc8();
            func_0x00010bd2518c();
            if (!(bool)uVar4 || (bool)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bd1cb58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)((ulong)(byte)(&UNK_10e60b82b)[extraout_x8_02] * 4 + 0x10bd1cb5c))();
              return;
            }
LAB_10bd1cd6c:
            func_0x00010bd25668();
            return;
          }
          lVar11 = unaff_x19;
          FUN_10bcddbd4();
          if (lVar11 == 0) {
            func_0x00010bd24c14();
            iVar7 = (int)lVar11;
            FUN_10bd1c8f0();
            if (iVar7 != 0) {
              func_0x00010bd24c14();
              FUN_10bd1d3b4();
              func_0x00010bd24e30();
              func_0x00010bd2518c();
              if (!(bool)uVar4 || (bool)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bd1cb9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)((ulong)(byte)(&UNK_10e60b835)[extraout_x8_03] * 4 + 0x10bd1cba0))();
                return;
              }
            }
            goto LAB_10bd1cd6c;
          }
          func_0x00010bd24ba4();
          if ((int)lVar11 == 0) goto LAB_10bd1cd6c;
          if ((*(byte *)(unaff_x19 + 1) >> 4 & 1) == 0) {
            lVar11 = 0;
          }
          else {
            lVar11 = *(long *)(unaff_x19 + 0x28);
          }
          unaff_x29 = *(undefined8 *)(puVar2 + -0x10);
          unaff_x30 = *(undefined8 *)(puVar2 + -8);
          plVar9 = unaff_x21;
          param_2 = unaff_x20;
          func_0x00010bd25668();
          puVar2 = puVar2 + -0x50;
          uVar13 = unaff_x20;
        }
        func_0x00010bd250c0();
        plVar9 = (long *)(unaff_x20 + extraout_x8_01);
        unaff_x29 = *(undefined8 *)(puVar2 + -0x10);
        unaff_x30 = *(undefined8 *)(puVar2 + -8);
        func_0x00010bd25668();
LAB_10b4bf494:
        *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        func_0x00010b4bf3a0();
        if (plVar9 == (long *)0x0) {
          return;
        }
        *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
        *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        bVar3 = *(char *)((long)plVar9 + 9) != '\0';
        bVar5 = *(char *)((long)plVar9 + 9) == '\x01';
        if (bVar5) {
          func_0x00010b4c5260((char)plVar9[1]);
          if (!bVar3 || bVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010b4bf4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&UNK_10b4bf4f4 + (ulong)(byte)(&UNK_10e5b4882)[extraout_x8] * 4))();
            return;
          }
        }
        else if ((*(byte *)((long)plVar9 + 10) & 1) == 0) {
          if (*(int *)(&UNK_10e5b4ac0 + (ulong)*(byte *)(plVar9 + 1) * 4) == 10) {
            if ((*(byte *)((long)plVar9 + 10) >> 4 & 1) == 0) {
              pcVar12 = *(code **)(*(long *)*plVar9 + 0x18);
            }
            else {
              pcVar12 = *(code **)(*(long *)*plVar9 + 0x88);
            }
            (*pcVar12)();
          }
          else if (*(int *)(&UNK_10e5b4ac0 + (ulong)*(byte *)(plVar9 + 1) * 4) == 9) {
            func_0x000107c27fa8(*plVar9);
          }
          *(byte *)((long)plVar9 + 10) = *(byte *)((long)plVar9 + 10) & 0xf0 | 1;
        }
        return;
      }
      if ((*(byte *)(param_4 + 1) >> 4 & 1) == 0) {
        puVar10 = (undefined *)0x0;
      }
      else {
        puVar10 = *(undefined **)(param_4 + 0x28);
      }
      func_0x00010bd24e40();
      FUN_10bd1f374();
      func_0x00010bd24c70();
      func_0x00010bd20e14();
      *plVar9 = param_3;
      func_0x00010bd24c70();
      goto FUN_10bd202f4;
    }
  }
  else {
    func_0x00010bd24e70(plVar9,param_2,&UNK_10f83541a);
LAB_10bd202e0:
    func_0x00010bd2506c();
  }
  plVar9 = (long *)*param_1;
  puVar10 = &UNK_10f83541a;
  func_0x00010bd24fb8();
FUN_10bd202f4:
  *(undefined4 *)
   (param_2 +
   (uint)(*(int *)((long)plVar9 + 0x2c) +
         (int)((*(long *)(puVar10 + 0x28) -
               *(long *)(*(long *)(*(long *)(puVar10 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(puVar10 + 4);
  return;
}



/* Entry: 10bd202f4; end: 10bd2031f;  */

void FUN_10bd202f4(long param_1,long param_2,long param_3)

{
  *(undefined4 *)
   (param_2 +
   (ulong)(uint)(*(int *)(param_1 + 0x2c) +
                (int)((*(long *)(param_3 + 0x28) -
                      *(long *)(*(long *)(*(long *)(param_3 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(param_3 + 4);
  return;
}



/* Entry: 10bd20320; end: 10bd20467;  */

long * FUN_10bd20320(long *param_1,long *param_2,long *param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined1 uVar6;
  long *plVar7;
  long *plVar8;
  undefined *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  long lVar10;
  uint extraout_w8;
  long extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x8_04;
  ulong uVar11;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  long *plVar12;
  long *extraout_x8_08;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  long lStack_48;
  
  if (param_3 == (long *)0x0) {
    func_0x00010bd24e40();
  }
  else {
    param_1 = (long *)param_2[1];
    if (((ulong)param_1 & 1) != 0) {
      param_1 = *(long **)((ulong)param_1 & 0xfffffffffffffffe);
    }
    plVar12 = (long *)param_3[1];
    plVar8 = param_3;
    if (((ulong)plVar12 & 1) != 0) {
      func_0x00010bd25400();
      plVar12 = extraout_x8_08;
    }
    if (param_1 != plVar12) {
      if (plVar12 != (long *)0x0) {
        func_0x00010bd24cd4();
        FUN_10bd2002c();
        if (param_3 != param_1) {
          func_0x00010bd2ced8();
          func_0x00010bd2cda8();
          plVar8 = param_1;
          func_0x00010bd2cd98();
          if (plVar8 != (long *)0x0 && plVar8 == param_1) {
            (**(code **)(*unaff_x20 + 0x18))(unaff_x20);
            UNRECOVERED_JUMPTABLE = (code *)param_1[4];
            func_0x00010bd2ce44();
                    /* WARNING: Could not recover jumptable at 0x00010bd2b3f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)();
            return unaff_x20;
          }
          FUN_10bd2b4f4();
          FUN_10bd2b4f4();
          param_1 = &lStack_48;
          FUN_10bd208b4(param_1,&stack0xffffffffffffffc8,&UNK_10f835f8a);
          if (param_1 != (long *)0x0) {
            lVar10 = (long)*(char *)((long)param_1 + 0x17);
            plVar8 = param_1;
            if (lVar10 < 0) {
              plVar8 = (long *)*param_1;
              lVar10 = param_1[1];
            }
            FUN_10bdb2a08(&lStack_48,&UNK_10f835fad,0x66,plVar8,lVar10);
            plVar8 = &lStack_48;
            FUN_10bd2b470(plVar8,&UNK_10f835fdf);
            func_0x00010ae6c448();
            func_0x00010bd16764();
            FUN_10bd2b4f4();
            lVar10 = unaff_x19[1] + 0x18;
            func_0x00010ae6c448(plVar8,lVar10);
            func_0x00010ae6c700(&lStack_48);
            func_0x00010bd2ced8();
            _strlen(lVar10);
            func_0x00010bd2ce44();
            func_0x00010ae6bd08();
            return plVar8;
          }
          func_0x00010bd2cecc();
          FUN_10bd2cfc4();
        }
        return param_1;
      }
      plVar8 = (long *)&UNK_1053a933c;
      func_0x00010b4d8014();
      param_2 = param_3;
    }
    func_0x00010bd24c70();
    param_3 = plVar8;
  }
  plVar8 = (long *)*param_1;
  bVar5 = plVar8 <= *(long **)(param_4 + 0x20);
  if (*(long **)(param_4 + 0x20) == plVar8) {
    lVar10 = param_4;
    func_0x00010bd2551c();
    if (bVar5) {
      func_0x00010bd24f14();
      goto LAB_10bd202e0;
    }
    func_0x00010bd24df4();
    if ((int)plVar8 == 10) {
      if ((*(byte *)(param_4 + 1) >> 3 & 1) != 0) {
        func_0x00010bd24fc4();
        func_0x00010bd25504();
        if (param_3 == (long *)0x0) goto LAB_10b4bf494;
        plVar12 = plVar8;
        func_0x00010b4c0fe8();
        plVar12[2] = lVar10;
        plVar7 = plVar12;
        if (((ulong)param_2 & 1) == 0) {
          if ((*(byte *)((long)plVar12 + 10) >> 4 & 1) != 0) {
            plVar7 = (long *)*plVar12;
            (**(code **)(*plVar7 + 0x38))(plVar7,param_3,*plVar8);
            goto code_r0x00010b4c0200;
          }
          if ((*plVar8 == 0) && (plVar7 = (long *)*plVar12, plVar7 != (long *)0x0)) {
            func_0x00010b4c5354();
            (*extraout_x8_00)();
          }
        }
        else {
          func_0x00010b4c575c();
        }
        *plVar12 = (long)param_3;
code_r0x00010b4c0200:
        *(byte *)((long)plVar12 + 10) = *(byte *)((long)plVar12 + 10) & 0xf0;
        return plVar7;
      }
      func_0x00010bd250a8();
      if (plVar8 == (long *)0x0) {
        func_0x00010bd24c70();
        if (param_3 == (long *)0x0) {
          FUN_10bd1d3b4();
        }
        else {
          FUN_10bd1cd90();
        }
        func_0x00010bd24c70();
        func_0x00010bd20e14();
        uVar11 = unaff_x21[1];
        plVar12 = plVar8;
        if ((uVar11 & 1) != 0) {
          func_0x00010bd25400();
          uVar11 = extraout_x8_07;
        }
        if ((uVar11 == 0) && (plVar12 = (long *)*plVar8, plVar12 != (long *)0x0)) {
          func_0x00010bd24eb8();
        }
        *plVar8 = (long)param_3;
        return plVar12;
      }
      if (param_3 == (long *)0x0) {
        if ((*(byte *)(param_4 + 1) >> 4 & 1) == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = *(long *)(param_4 + 0x28);
        }
        func_0x00010bd24e40();
        puVar2 = (undefined1 *)register0x00000008;
        plVar12 = unaff_x20;
        while( true ) {
          unaff_x20 = param_2;
          *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
          *(long **)(puVar2 + -0x28) = unaff_x21;
          *(long **)(puVar2 + -0x20) = plVar12;
          *(long **)(puVar2 + -0x18) = unaff_x19;
          *(undefined8 *)(puVar2 + -0x10) = unaff_x29;
          *(undefined8 *)(puVar2 + -8) = unaff_x30;
          uVar4 = *(int *)(lVar10 + 4) != 0;
          uVar6 = *(int *)(lVar10 + 4) == 1;
          if ((!(bool)uVar6) || ((*(byte *)(*(long *)(lVar10 + 0x30) + 1) >> 1 & 1) == 0)) {
            plVar12 = plVar8;
            func_0x00010bd252d8();
            if (*(int *)((long)unaff_x20 + (extraout_x8_04 & 0xffffffff)) != 0) {
              plVar8 = (long *)*plVar8;
              FUN_10bcee2d0();
              uVar11 = unaff_x20[1];
              plVar12 = plVar8;
              if ((uVar11 & 1) != 0) {
                func_0x00010bd25400();
                uVar11 = extraout_x8_06;
              }
              if (uVar11 == 0) {
                func_0x00010bd255ac();
                if ((int)plVar12 == 10) {
                  func_0x00010bd24e64();
                  func_0x00010bd20e14();
                  plVar12 = (long *)*plVar12;
                  if (plVar12 != (long *)0x0) {
                    func_0x00010bd24eb8();
                  }
                }
                else if ((int)plVar12 == 9) {
                  FUN_10bd1bdfc();
                  if ((int)plVar8 == 1) {
                    func_0x00010bd24e64();
                    func_0x00010bd20e14();
                    plVar12 = (long *)*plVar8;
                    if (plVar12 != (long *)0x0) {
                      func_0x000107c34fe8();
                    }
                    __ZdlPv();
                  }
                  else {
                    func_0x00010bd24e64();
                    FUN_10bd1f51c();
                    func_0x000107c30258();
                    plVar12 = plVar8;
                  }
                }
              }
              func_0x00010bd252d8();
              *(undefined4 *)((long)unaff_x20 + (extraout_x8_05 & 0xffffffff)) = 0;
            }
            return plVar12;
          }
          func_0x00010bd24e64();
          uVar1 = *(undefined8 *)(puVar2 + -0x20);
          unaff_x19 = *(long **)(puVar2 + -0x18);
          unaff_x22 = *(undefined8 *)(puVar2 + -0x30);
          unaff_x21 = *(long **)(puVar2 + -0x28);
          register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x50);
          *(undefined8 *)(puVar2 + -0x50) = unaff_d9;
          *(undefined8 *)(puVar2 + -0x48) = unaff_d8;
          *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
          *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
          *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
          *(long **)(puVar2 + -0x28) = unaff_x21;
          *(undefined8 *)(puVar2 + -0x20) = uVar1;
          *(long **)(puVar2 + -0x18) = unaff_x19;
          *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
          *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
          func_0x00010bd24b74();
          if (!(bool)uVar6) {
            func_0x00010bd24e70();
            func_0x00010bd24e38();
            *(undefined8 *)(puVar2 + -0x70) = uVar1;
            *(long **)(puVar2 + -0x68) = unaff_x19;
            *(undefined1 **)(puVar2 + -0x60) = puVar2 + -0x10;
            *(code **)(puVar2 + -0x58) = FUN_10bd1cd90;
            func_0x00010bd24f94();
            func_0x00010bd24e7c();
            func_0x00010bd1d3e8();
            if ((int)plVar8 != -1) {
              func_0x00010bd25418();
              *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
            }
            return plVar8;
          }
          if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) != 0) break;
          if ((*(byte *)((long)unaff_x19 + 1) >> 5 & 1) != 0) {
            func_0x00010b91adc8();
            func_0x00010bd2518c();
            plVar8 = unaff_x19;
            if (!(bool)uVar4 || (bool)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bd1cb58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)((ulong)(byte)(&UNK_10e60b82b)[extraout_x8_02] * 4 + 0x10bd1cb5c))();
              return unaff_x19;
            }
LAB_10bd1cd6c:
            func_0x00010bd25668();
            return plVar8;
          }
          plVar8 = unaff_x19;
          FUN_10bcddbd4();
          if (plVar8 == (long *)0x0) {
            func_0x00010bd24c14();
            FUN_10bd1c8f0();
            if ((int)plVar8 != 0) {
              func_0x00010bd24c14();
              FUN_10bd1d3b4();
              func_0x00010bd24e30();
              func_0x00010bd2518c();
              if (!(bool)uVar4 || (bool)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bd1cb9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)((ulong)(byte)(&UNK_10e60b835)[extraout_x8_03] * 4 + 0x10bd1cba0))();
                return plVar8;
              }
            }
            goto LAB_10bd1cd6c;
          }
          func_0x00010bd24ba4();
          if ((int)plVar8 == 0) goto LAB_10bd1cd6c;
          if ((*(byte *)((long)unaff_x19 + 1) >> 4 & 1) == 0) {
            lVar10 = 0;
          }
          else {
            lVar10 = unaff_x19[5];
          }
          unaff_x29 = *(undefined8 *)(puVar2 + -0x10);
          unaff_x30 = *(undefined8 *)(puVar2 + -8);
          plVar8 = unaff_x21;
          param_2 = unaff_x20;
          func_0x00010bd25668();
          puVar2 = puVar2 + -0x50;
          plVar12 = unaff_x20;
        }
        func_0x00010bd250c0();
        plVar8 = (long *)((long)unaff_x20 + extraout_x8_01);
        unaff_x29 = *(undefined8 *)(puVar2 + -0x10);
        unaff_x30 = *(undefined8 *)(puVar2 + -8);
        func_0x00010bd25668();
LAB_10b4bf494:
        *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        func_0x00010b4bf3a0();
        if (plVar8 == (long *)0x0) {
          return (long *)0x0;
        }
        *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        bVar3 = *(char *)((long)plVar8 + 9) != '\0';
        bVar5 = *(char *)((long)plVar8 + 9) == '\x01';
        if (bVar5) {
          func_0x00010b4c5260((char)plVar8[1]);
          plVar12 = plVar8;
          if (!bVar3 || bVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010b4bf4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&UNK_10b4bf4f4 + (ulong)(byte)(&UNK_10e5b4882)[extraout_x8] * 4))();
            return plVar8;
          }
        }
        else {
          plVar12 = plVar8;
          if ((*(byte *)((long)plVar8 + 10) & 1) == 0) {
            if (*(int *)(&UNK_10e5b4ac0 + (ulong)*(byte *)(plVar8 + 1) * 4) == 10) {
              plVar12 = (long *)*plVar8;
              if ((*(byte *)((long)plVar8 + 10) >> 4 & 1) == 0) {
                UNRECOVERED_JUMPTABLE = *(code **)(*plVar12 + 0x18);
              }
              else {
                UNRECOVERED_JUMPTABLE = *(code **)(*plVar12 + 0x88);
              }
              (*UNRECOVERED_JUMPTABLE)();
            }
            else if (*(int *)(&UNK_10e5b4ac0 + (ulong)*(byte *)(plVar8 + 1) * 4) == 9) {
              plVar12 = (long *)*plVar8;
              func_0x000107c27fa8(plVar12);
            }
            *(byte *)((long)plVar8 + 10) = *(byte *)((long)plVar8 + 10) & 0xf0 | 1;
          }
        }
        return plVar12;
      }
      if ((*(byte *)(param_4 + 1) >> 4 & 1) == 0) {
        puVar9 = (undefined *)0x0;
      }
      else {
        puVar9 = *(undefined **)(param_4 + 0x28);
      }
      func_0x00010bd24e40();
      FUN_10bd1f374();
      func_0x00010bd24c70();
      func_0x00010bd20e14();
      *plVar8 = (long)param_3;
      func_0x00010bd24c70();
      goto FUN_10bd202f4;
    }
  }
  else {
    func_0x00010bd24e70();
LAB_10bd202e0:
    func_0x00010bd2506c();
  }
  plVar8 = (long *)*param_1;
  puVar9 = &UNK_10f83541a;
  func_0x00010bd24fb8();
FUN_10bd202f4:
  *(undefined4 *)
   ((long)param_2 +
   (ulong)(uint)(*(int *)((long)plVar8 + 0x2c) +
                (int)((*(long *)(puVar9 + 0x28) -
                      *(long *)(*(long *)(*(long *)(puVar9 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(puVar9 + 4);
  return plVar8;
}



/* Entry: 10bd20468; end: 10bd205ab;  */

ulong * FUN_10bd20468(int param_1,long param_2,long param_3,ulong *param_4)

{
  int iVar1;
  ulong uVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong *puVar3;
  undefined1 **ppuVar4;
  undefined1 **ppuVar5;
  ulong *puVar6;
  ulong *puVar7;
  long unaff_x19;
  ulong *unaff_x22;
  long lStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  func_0x00010bd24bdc();
  if ((bool)in_ZR) {
    func_0x00010bd256f0();
    if ((bool)in_CY && !(bool)in_ZR) {
      func_0x00010bd25080();
      unaff_x19 = param_2;
      if (param_1 == 10) {
        if (param_4 == (ulong *)0x0) {
          param_4 = (ulong *)unaff_x22[0xb];
        }
        if ((*(byte *)(param_3 + 1) >> 3 & 1) == 0) {
          func_0x00010bd255a4();
          func_0x00010bd20e14();
          if (param_1 != 0) {
            FUN_10bd28ab0();
          }
          puVar6 = unaff_x22;
          FUN_10bd205ac();
          if (puVar6 == (ulong *)0x0) {
            if ((int)unaff_x22[1] == 0) {
              func_0x00010bd253a8();
              (**(code **)(*param_4 + 0x10))(param_4,puVar6);
            }
            else {
              param_4 = unaff_x22;
              if ((*unaff_x22 & 1) != 0) {
                param_4 = (ulong *)(*unaff_x22 + 7);
              }
              param_4 = (ulong *)*param_4;
            }
            func_0x00010bd25180();
            FUN_10bd20600(unaff_x22,param_4);
            puVar6 = param_4;
          }
          return puVar6;
        }
        puVar6 = (ulong *)(param_2 + (ulong)(uint)unaff_x22[5]);
        FUN_10bd18e40(puVar6,param_3,param_4);
        puVar3 = (ulong *)*puVar6;
        FUN_10bd18f80();
        if (puVar3 == (ulong *)0x0) {
          puVar7 = (ulong *)*puVar6;
          if ((int)puVar7[1] == 0) {
            func_0x00010bd1a754();
            func_0x00010bd1a660();
            if (puVar3 == (ulong *)0x0) {
              func_0x0001088914a0(&lStack_60,&UNK_10f8349d4);
              FUN_10bdb2a88(&puStack_50,&UNK_10f834996,0xeb,lStack_60,lStack_58);
              ppuVar4 = &puStack_50;
              func_0x00010ae6c700();
              iVar1 = *(int *)(ppuVar4 + 1);
              ppuVar5 = ppuVar4;
              func_0x000107c28174();
              if (iVar1 < (int)ppuVar5) {
                iVar1 = *(int *)(ppuVar4 + 1);
                *(int *)(ppuVar4 + 1) = iVar1 + 1;
                if (((ulong)*ppuVar4 & 1) != 0) {
                  ppuVar4 = (undefined1 **)(*ppuVar4 + (long)iVar1 * 8 + 7);
                }
                puVar6 = (ulong *)*ppuVar4;
              }
              else {
                puVar6 = (ulong *)0x0;
              }
              return puVar6;
            }
          }
          else {
            if ((*puVar7 & 1) != 0) {
              puVar7 = (ulong *)(*puVar7 + 7);
            }
            puVar3 = (ulong *)*puVar7;
          }
          func_0x00010bd1a734();
          FUN_10bd1a34c(*puVar6,puVar3);
        }
        return puVar3;
      }
      goto LAB_10bd2059c;
    }
    func_0x00010bd24f20();
  }
  else {
    func_0x00010bd24e70();
  }
  func_0x00010bd2506c();
LAB_10bd2059c:
  puVar6 = (ulong *)*unaff_x22;
  func_0x00010bd24fb8();
  pcStack_48 = FUN_10bd205ac;
  uVar2 = puVar6[1];
  puVar3 = puVar6;
  lStack_60 = param_3;
  lStack_58 = unaff_x19;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x000107c28174();
  if ((int)uVar2 < (int)puVar3) {
    uVar2 = puVar6[1];
    *(int *)(puVar6 + 1) = (int)uVar2 + 1;
    if ((*puVar6 & 1) != 0) {
      puVar6 = (ulong *)(*puVar6 + (long)(int)uVar2 * 8 + 7);
    }
    puVar6 = (ulong *)*puVar6;
  }
  else {
    puVar6 = (ulong *)0x0;
  }
  return puVar6;
}



/* Entry: 10bd205ac; end: 10bd205ff;  */

ulong FUN_10bd205ac(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  
  uVar2 = param_1[1];
  puVar1 = param_1;
  func_0x000107c28174();
  if ((int)uVar2 < (int)puVar1) {
    uVar2 = param_1[1];
    *(int *)(param_1 + 1) = (int)uVar2 + 1;
    if ((*param_1 & 1) != 0) {
      param_1 = (ulong *)(*param_1 + (long)(int)uVar2 * 8 + 7);
    }
    uVar2 = *param_1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 10bd20600; end: 10bd207a3;  */

void FUN_10bd20600(long param_1)

{
  ulong *puVar1;
  int iVar2;
  ulong uVar3;
  ulong unaff_x19;
  ulong *unaff_x20;
  ulong uVar4;
  
  func_0x00010bd24f94();
  if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 8)) {
    func_0x000107c303a8();
LAB_10bd20628:
    uVar3 = *unaff_x20;
  }
  else {
    func_0x0001053a91c8();
    uVar4 = unaff_x20[1];
    iVar2 = (int)param_1;
    if (iVar2 != 0) {
      uVar3 = *unaff_x20;
      puVar1 = unaff_x20;
      if ((uVar3 & 1) != 0) {
        puVar1 = (ulong *)(uVar3 + (long)(int)uVar4 * 8 + 7);
      }
      if ((*puVar1 != 0) && (unaff_x20[2] == 0)) {
        func_0x00010bd24eb8();
        uVar3 = *unaff_x20;
      }
      goto LAB_10bd20638;
    }
    func_0x00010bd253a0();
    if ((int)uVar4 < iVar2) {
      puVar1 = unaff_x20;
      if ((*unaff_x20 & 1) != 0) {
        puVar1 = (ulong *)(*unaff_x20 + (long)(int)unaff_x20[1] * 8 + 7);
      }
      uVar4 = *puVar1;
      func_0x00010bd253a0();
      puVar1 = unaff_x20;
      if ((*unaff_x20 & 1) != 0) {
        puVar1 = (ulong *)(*unaff_x20 + (long)iVar2 * 8 + 7);
      }
      *puVar1 = uVar4;
      goto LAB_10bd20628;
    }
    uVar3 = *unaff_x20;
    if ((uVar3 & 1) == 0) goto LAB_10bd20638;
  }
  *(int *)(uVar3 - 1) = *(int *)(uVar3 - 1) + 1;
LAB_10bd20638:
  uVar4 = unaff_x20[1];
  *(int *)(unaff_x20 + 1) = (int)uVar4 + 1;
  if ((uVar3 & 1) != 0) {
    unaff_x20 = (ulong *)(uVar3 + (long)(int)uVar4 * 8 + 7);
  }
  *unaff_x20 = unaff_x19;
  return;
}



/* Entry: 10bd207a4; end: 10bd208b3;  */

undefined1 *
FUN_10bd207a4(undefined1 *param_1,long *param_2,long param_3,int param_4,undefined8 param_5,
             long param_6)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined1 auStack_198 [264];
  long alStack_58 [2];
  long lStack_48;
  
  func_0x00010bd24fa0();
  lStack_48 = param_6;
  if (*(byte *)(param_3 + 1) < 0xc0) {
    func_0x00010bd24f20(*unaff_x21);
    func_0x00010bd24e38();
  }
  else {
    func_0x00010bd24c80();
    if (((int)param_1 == param_4) || (func_0x00010bd24e30(), param_4 == 1 && (int)param_1 == 8)) {
      if (param_6 == 0) {
LAB_10bd20804:
        if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) == 0) {
          func_0x00010bd252c8();
          puVar4 = param_1;
          func_0x00010bd24c14();
          FUN_10bd20dd8();
          if ((int)param_1 != 0) {
            FUN_10bd28ab0();
          }
        }
        else {
          uVar2 = *(uint *)(unaff_x21 + 5);
          uVar3 = *(undefined4 *)((long)unaff_x19 + 4);
          func_0x00010bd24ef0();
          FUN_10bcf1560();
          puVar4 = (undefined1 *)(unaff_x20 + (ulong)uVar2);
          func_0x00010b4bfd70(puVar4,uVar3,(uint)param_1 & 0xff,unaff_x19);
        }
        return puVar4;
      }
      func_0x00010bd252d0();
      func_0x00010bd25138();
      bVar1 = param_1 == (undefined1 *)0x0;
      param_1 = (undefined1 *)0x0;
      if (bVar1) goto LAB_10bd20804;
      func_0x00010bd25474();
      func_0x00010bd25258();
      plVar5 = alStack_58;
      puVar8 = (undefined *)0xa27;
      FUN_10bdb2a08();
      func_0x00010bd2532c();
      unaff_x19 = param_2;
      goto LAB_10bd208b0;
    }
  }
  plVar5 = (long *)*unaff_x21;
  puVar8 = &UNK_10f835475;
  FUN_10bdb4238();
LAB_10bd208b0:
  func_0x00010bd252a0();
  lVar6 = *plVar5;
  lVar7 = *unaff_x19;
  if (lVar6 == lVar7) {
    return (undefined1 *)0x0;
  }
  func_0x00010ae6abb8(auStack_198,puVar8);
  func_0x00010ae6aba0(auStack_198,lVar6);
  func_0x0001092b4db8(auStack_198,&UNK_10f6d167f,5);
  func_0x00010ae6aba0(auStack_198,lVar7);
  puVar4 = auStack_198;
  func_0x00010ae6a8f8(puVar4);
  func_0x00010ae6ac1c(auStack_198);
  return puVar4;
}



/* Entry: 10bd208b4; end: 10bd208cb;  */

undefined1 * FUN_10bd208b4(long *param_1,long *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_138 [264];
  
  lVar2 = *param_1;
  lVar3 = *param_2;
  if (lVar2 == lVar3) {
    return (undefined1 *)0x0;
  }
  func_0x00010ae6abb8(auStack_138,param_3);
  func_0x00010ae6aba0(auStack_138,lVar2);
  func_0x0001092b4db8(auStack_138,&UNK_10f6d167f,5);
  func_0x00010ae6aba0(auStack_138,lVar3);
  puVar1 = auStack_138;
  func_0x00010ae6a8f8(puVar1);
  func_0x00010ae6ac1c(auStack_138);
  return puVar1;
}



/* Entry: 10bd208cc; end: 10bd20a23;  */

long * FUN_10bd208cc(long *param_1,undefined8 param_2,long param_3,int param_4,ulong param_5,
                    long param_6)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  uint extraout_w8;
  long extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long alStack_58 [2];
  long lStack_48;
  
  func_0x00010bd24fa0();
  lStack_48 = param_6;
  if (*(byte *)(param_3 + 1) < 0xc0) {
    func_0x00010bd24f20(*unaff_x21);
    func_0x00010bd24e38();
  }
  else {
    func_0x00010bd24c80();
    if (((int)param_1 == param_4) || (func_0x00010bd24e30(), param_4 == 1 && (int)param_1 == 8)) {
      if (((int)param_5 < 0) ||
         (iVar2 = *(int *)(*(long *)(unaff_x19 + 0x38) + 0x80), param_1 = (long *)(long)iVar2,
         iVar2 == (int)param_5)) {
        if (param_6 != 0) {
          func_0x00010bd252d0();
          func_0x00010bd25138();
          bVar1 = param_1 != (long *)0x0;
          param_1 = (long *)0x0;
          if (bVar1) {
            func_0x00010bd25474();
            func_0x00010bd25258();
            plVar3 = alStack_58;
            FUN_10bdb2a08();
            func_0x00010bd2532c();
            goto LAB_10bd20a20;
          }
        }
        if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) == 0) {
          func_0x00010bd252c8();
          if ((int)param_1 == 0) {
            func_0x00010bd24c14();
            func_0x00010bd20a60();
          }
          else {
            func_0x00010bd24c14();
            FUN_10bd20a24();
            func_0x00010bd28a08();
          }
        }
        else {
          func_0x00010bd250c0();
          param_1 = (long *)(unaff_x20 + extraout_x8);
          func_0x00010b4bfd4c(param_1);
        }
        return param_1;
      }
      func_0x00010ae6a960(param_1,param_5 & 0xffffffff,&UNK_10f8354eb);
      func_0x00010bd25474();
      func_0x00010bd25258();
      FUN_10bdb2a08(alStack_58);
      plVar3 = alStack_58;
      func_0x00010b4c31d4(plVar3,&UNK_10f83550d);
      goto LAB_10bd20a20;
    }
  }
  plVar3 = (long *)*unaff_x21;
  FUN_10bdb4238();
LAB_10bd20a20:
  func_0x00010bd252a0();
  func_0x00010bd24af8();
  if ((int)plVar3 == 0) {
    func_0x00010bd24c8c();
    return (long *)(unaff_x19 + ((ulong)plVar3 & 0xffffffff));
  }
  func_0x00010bd24c40();
  func_0x00010bd24b10();
  func_0x00010bd25074();
  if ((extraout_w8 >> 5 & 1) != 0) {
    plVar3 = (long *)*plVar3;
  }
  return plVar3;
}



/* Entry: 10bd20a24; end: 10bd20a9b;  */

ulong * FUN_10bd20a24(ulong *param_1)

{
  uint extraout_w8;
  long unaff_x19;
  
  FUN_10bd24af8();
  if ((int)param_1 == 0) {
    func_0x00010bd24c8c();
    return (ulong *)(unaff_x19 + ((ulong)param_1 & 0xffffffff));
  }
  func_0x00010bd24c40();
  func_0x00010bd24b10();
  func_0x00010bd25074();
  if ((extraout_w8 >> 5 & 1) != 0) {
    param_1 = (ulong *)*param_1;
  }
  return param_1;
}



/* Entry: 10bd20a9c; end: 10bd20afb;  */

long FUN_10bd20a9c(long *param_1,long param_2,long param_3)

{
  int iVar1;
  undefined1 uVar2;
  ulong extraout_x8;
  long lVar3;
  
  uVar2 = *(int *)(param_3 + 4) == 1;
  if (((bool)uVar2) && (lVar3 = *(long *)(param_3 + 0x30), (*(byte *)(lVar3 + 1) >> 1 & 1) != 0)) {
    FUN_10bd1d188(param_1,param_2,lVar3);
    if ((int)param_1 == 0) {
      lVar3 = 0;
    }
  }
  else {
    func_0x00010bd25628();
    iVar1 = *(int *)(param_2 + (extraout_x8 & 0xffffffff));
    if (iVar1 != 0) {
      lVar3 = *(long *)(*(long *)(*param_1 + 0x10) + 0x98);
      FUN_10bcee300(lVar3,*param_1,iVar1);
      if ((lVar3 != 0) && (func_0x00010bd0c4f4(), !(bool)uVar2)) {
        lVar3 = 0;
      }
      return lVar3;
    }
    lVar3 = 0;
  }
  return lVar3;
}



/* Entry: 10bd20afc; end: 10bd20ba3;  */

ulong * FUN_10bd20afc(ulong *param_1,ulong *param_2,long *param_3,long param_4,undefined8 *param_5)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  int iVar2;
  ulong *puVar3;
  long *plVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 extraout_x8;
  ulong *puVar8;
  ulong *puVar9;
  long lStack_200;
  undefined4 uStack_1f8;
  long lStack_1f0;
  ulong *puStack_1e8;
  undefined1 ****ppppuStack_1e0;
  code *pcStack_1d8;
  ulong uStack_1c0;
  undefined8 uStack_e8;
  undefined1 ***pppuStack_b0;
  code *pcStack_a8;
  ulong *puStack_a0;
  long *plStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  ulong *puStack_70;
  long *plStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  plVar4 = param_3;
  func_0x00010b91c030();
  if (((ulong)plVar4 & 1) != 0) {
    plVar4 = param_3;
    FUN_10bcee28c();
    func_0x00010bd25490();
    if ((bool)in_ZR) {
      iVar2 = (int)plVar4[7] + 0x58;
    }
    else {
      iVar2 = 0;
    }
    func_0x00010b91adc8();
    *(int *)(param_5 + 1) = iVar2;
    func_0x00010bd1bd5c(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bd20b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return param_1;
  }
  param_1 = (ulong *)*param_1;
  func_0x00010bd25540();
  plVar4 = param_3;
  FUN_10bdb41b8();
  uVar6 = SUB84(plVar4,0);
  pcStack_48 = FUN_10bd20ba4;
  puStack_70 = param_2;
  plStack_68 = param_3;
  lStack_60 = param_4;
  puStack_58 = param_5;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x00010bd25150();
  if (((ulong)param_1 & 1) == 0) {
    param_1 = (ulong *)*param_2;
    func_0x00010bd25540();
    func_0x00010bd2506c();
    func_0x00010bd251f0();
    func_0x00010bd2559c();
    pcStack_78 = FUN_10bd20bf4;
    puStack_a0 = param_2;
    plStack_98 = param_3;
    lStack_90 = param_4;
    puStack_88 = param_5;
    ppuStack_80 = &puStack_50;
    func_0x00010bd25150();
    if (((ulong)param_1 & 1) == 0) {
      plVar4 = (long *)*param_2;
      func_0x00010bd25540();
      func_0x00010bd2506c();
      func_0x00010bd251f0();
      func_0x00010bd2559c();
      uVar1 = (int)plVar4[5] == -1;
      if ((bool)uVar1) {
        return (ulong *)0x0;
      }
      puVar8 = (ulong *)plVar4[10];
      lVar5 = *plVar4;
      pcStack_a8 = FUN_10bd20c44;
      pppuStack_b0 = &ppuStack_80;
      func_0x00010bd0a30c();
      uStack_e8 = extraout_x8;
      uVar7 = uVar6;
      if (*(int *)(lVar5 + 0x88) == 0) {
        puVar3 = (ulong *)0x0;
      }
      else {
        func_0x00010bd0b168();
        if (*puVar8 != 0) {
          uStack_1c0 = *puVar8;
          func_0x00010ae7ccdc();
          puVar3 = (ulong *)param_3[5];
          func_0x00010bd0b498();
          puVar8 = puVar3;
          func_0x00010bd0baa8();
          if (puVar3 != (ulong *)0x0) goto LAB_10bcee008;
        }
        func_0x00010bd0b42c();
        lVar5 = *param_3;
        func_0x00010bd0b6d4();
        if (param_3[1] != 0) {
          func_0x00010bd0b694(param_3[5]);
          func_0x00010bd0b5d0(param_3[5]);
        }
        puVar8 = (ulong *)param_3[5];
        func_0x00010bd0b498();
        if ((puVar8 == (ulong *)0x0) &&
           ((puVar8 = (ulong *)param_3[3], puVar8 == (ulong *)0x0 ||
            (uVar7 = uVar6, FUN_10bcedf04(), lVar5 = param_4, puVar8 == (ulong *)0x0)))) {
          func_0x00010bd0b114();
          uVar7 = uVar6;
          FUN_10bcee0ac();
          if ((int)puVar8 == 0) {
            puVar9 = (ulong *)0x0;
          }
          else {
            puVar8 = (ulong *)param_3[5];
            func_0x00010bd0b498();
            puVar9 = puVar8;
          }
          puVar3 = (ulong *)0x0;
          param_4 = 1;
        }
        else {
          param_4 = 0;
          puVar9 = puVar8;
          puVar3 = puVar8;
        }
        func_0x00010bd0aefc();
        if ((int)param_4 != 0) {
          func_0x00010bd0b6dc();
          uVar1 = (int)puVar8 == 0;
          puVar3 = puVar9;
          if ((bool)uVar1) {
            puVar3 = (ulong *)0x0;
          }
        }
        func_0x00010bd0af04();
      }
LAB_10bcee008:
      func_0x000107c3a64c(uStack_e8);
      if ((bool)uVar1) {
        return puVar3;
      }
      ___stack_chk_fail();
      puVar9 = puVar8;
      func_0x00010bd0af04();
      func_0x00010bd0a974();
      plVar4 = &lStack_200;
      pcStack_1d8 = FUN_10bcee050;
      puVar3 = puVar9 + 0x21;
      lStack_200 = lVar5;
      uStack_1f8 = uVar7;
      lStack_1f0 = param_4;
      puStack_1e8 = puVar8;
      ppppuStack_1e0 = &pppuStack_b0;
      FUN_10bcfe858();
      if ((ulong *)puVar9[0x22] == puVar3 &&
          (uint)plVar4 == (uint)*(byte *)((long)puVar9[0x22] + 10)) {
        puVar8 = (ulong *)0x0;
      }
      else {
        puVar8 = (ulong *)puVar3[((ulong)plVar4 & 0xff) * 3 + 4];
      }
      return puVar8;
    }
    func_0x00010bd2545c();
    func_0x00010bd24c70();
    func_0x00010bd1bd5c();
    *param_5 = 0;
    param_5[1] = 0;
    *(undefined4 *)(param_5 + 2) = 0;
  }
  else {
    func_0x00010bd2545c();
    func_0x00010bd24c70();
    func_0x00010bd1bd5c();
    FUN_10bd28990();
  }
  return param_1;
}



/* Entry: 10bd20ba4; end: 10bd20bf3;  */

long * FUN_10bd20ba4(long *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 extraout_x8;
  long *plVar6;
  long *plVar7;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  ulong *unaff_x22;
  long lStack_1c0;
  undefined4 uStack_1b8;
  long lStack_1b0;
  long *plStack_1a8;
  undefined1 ***pppuStack_1a0;
  code *pcStack_198;
  long lStack_180;
  undefined8 uStack_a8;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  func_0x00010bd25150();
  if (((ulong)param_1 & 1) == 0) {
    param_1 = (long *)*unaff_x22;
    func_0x00010bd25540();
    func_0x00010bd2506c();
    func_0x00010bd251f0();
    func_0x00010bd2559c();
    pcStack_38 = FUN_10bd20bf4;
    puStack_40 = &stack0xfffffffffffffff0;
    func_0x00010bd25150();
    if (((ulong)param_1 & 1) == 0) {
      plVar2 = (long *)*unaff_x22;
      func_0x00010bd25540();
      func_0x00010bd2506c();
      func_0x00010bd251f0();
      func_0x00010bd2559c();
      uVar1 = (int)plVar2[5] == -1;
      if ((bool)uVar1) {
        return (long *)0x0;
      }
      plVar6 = (long *)plVar2[10];
      lVar4 = *plVar2;
      pcStack_68 = FUN_10bd20c44;
      ppuStack_70 = &puStack_40;
      func_0x00010bd0a30c();
      uStack_a8 = extraout_x8;
      uVar5 = param_2;
      if (*(int *)(lVar4 + 0x88) == 0) {
        plVar2 = (long *)0x0;
      }
      else {
        func_0x00010bd0b168();
        if (*plVar6 != 0) {
          lStack_180 = *plVar6;
          func_0x00010ae7ccdc();
          plVar2 = (long *)unaff_x21[5];
          func_0x00010bd0b498();
          plVar6 = plVar2;
          func_0x00010bd0baa8();
          if (plVar2 != (long *)0x0) goto LAB_10bcee008;
        }
        func_0x00010bd0b42c();
        lVar4 = *unaff_x21;
        func_0x00010bd0b6d4();
        if (unaff_x21[1] != 0) {
          func_0x00010bd0b694(unaff_x21[5]);
          func_0x00010bd0b5d0(unaff_x21[5]);
        }
        plVar6 = (long *)unaff_x21[5];
        func_0x00010bd0b498();
        if ((plVar6 == (long *)0x0) &&
           ((plVar6 = (long *)unaff_x21[3], plVar6 == (long *)0x0 ||
            (uVar5 = param_2, FUN_10bcedf04(), lVar4 = unaff_x20, plVar6 == (long *)0x0)))) {
          func_0x00010bd0b114();
          uVar5 = param_2;
          FUN_10bcee0ac();
          if ((int)plVar6 == 0) {
            plVar7 = (long *)0x0;
          }
          else {
            plVar6 = (long *)unaff_x21[5];
            func_0x00010bd0b498();
            plVar7 = plVar6;
          }
          plVar2 = (long *)0x0;
          unaff_x20 = 1;
        }
        else {
          unaff_x20 = 0;
          plVar7 = plVar6;
          plVar2 = plVar6;
        }
        func_0x00010bd0aefc();
        if ((int)unaff_x20 != 0) {
          func_0x00010bd0b6dc();
          uVar1 = (int)plVar6 == 0;
          plVar2 = plVar7;
          if ((bool)uVar1) {
            plVar2 = (long *)0x0;
          }
        }
        func_0x00010bd0af04();
      }
LAB_10bcee008:
      func_0x000107c3a64c(uStack_a8);
      if ((bool)uVar1) {
        return plVar2;
      }
      ___stack_chk_fail();
      plVar7 = plVar6;
      func_0x00010bd0af04();
      func_0x00010bd0a974();
      plVar3 = &lStack_1c0;
      pcStack_198 = FUN_10bcee050;
      plVar2 = plVar7 + 0x21;
      lStack_1c0 = lVar4;
      uStack_1b8 = uVar5;
      lStack_1b0 = unaff_x20;
      plStack_1a8 = plVar6;
      pppuStack_1a0 = &ppuStack_70;
      FUN_10bcfe858();
      if ((long *)plVar7[0x22] == plVar2 && (uint)plVar3 == (uint)*(byte *)(plVar7[0x22] + 10)) {
        plVar2 = (long *)0x0;
      }
      else {
        plVar2 = (long *)plVar2[((ulong)plVar3 & 0xff) * 3 + 4];
      }
      return plVar2;
    }
    func_0x00010bd2545c();
    func_0x00010bd24c70();
    func_0x00010bd1bd5c();
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    *(undefined4 *)(unaff_x19 + 2) = 0;
  }
  else {
    func_0x00010bd2545c();
    func_0x00010bd24c70();
    func_0x00010bd1bd5c();
    FUN_10bd28990();
  }
  return param_1;
}



/* Entry: 10bd20bf4; end: 10bd20c43;  */

long * FUN_10bd20bf4(long *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 extraout_x8;
  long *plVar6;
  long *plVar7;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long lStack_190;
  undefined4 uStack_188;
  long lStack_180;
  long *plStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  long lStack_150;
  undefined8 uStack_78;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  func_0x00010bd25150();
  if (((ulong)param_1 & 1) != 0) {
    func_0x00010bd2545c();
    func_0x00010bd24c70();
    func_0x00010bd1bd5c();
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    *(undefined4 *)(unaff_x19 + 2) = 0;
    return param_1;
  }
  plVar2 = (long *)*unaff_x22;
  func_0x00010bd25540();
  func_0x00010bd2506c();
  func_0x00010bd251f0();
  func_0x00010bd2559c();
  uVar1 = (int)plVar2[5] == -1;
  if ((bool)uVar1) {
    return (long *)0x0;
  }
  plVar6 = (long *)plVar2[10];
  lVar4 = *plVar2;
  pcStack_38 = FUN_10bd20c44;
  puStack_40 = &stack0xfffffffffffffff0;
  func_0x00010bd0a30c();
  uStack_78 = extraout_x8;
  uVar5 = param_2;
  if (*(int *)(lVar4 + 0x88) == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    func_0x00010bd0b168();
    if (*plVar6 != 0) {
      lStack_150 = *plVar6;
      func_0x00010ae7ccdc();
      plVar2 = (long *)unaff_x21[5];
      func_0x00010bd0b498();
      plVar6 = plVar2;
      func_0x00010bd0baa8();
      if (plVar2 != (long *)0x0) goto LAB_10bcee008;
    }
    func_0x00010bd0b42c();
    lVar4 = *unaff_x21;
    func_0x00010bd0b6d4();
    if (unaff_x21[1] != 0) {
      func_0x00010bd0b694(unaff_x21[5]);
      func_0x00010bd0b5d0(unaff_x21[5]);
    }
    plVar6 = (long *)unaff_x21[5];
    func_0x00010bd0b498();
    if ((plVar6 == (long *)0x0) &&
       ((plVar6 = (long *)unaff_x21[3], plVar6 == (long *)0x0 ||
        (uVar5 = param_2, FUN_10bcedf04(), lVar4 = unaff_x20, plVar6 == (long *)0x0)))) {
      func_0x00010bd0b114();
      uVar5 = param_2;
      FUN_10bcee0ac();
      if ((int)plVar6 == 0) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar6 = (long *)unaff_x21[5];
        func_0x00010bd0b498();
        plVar7 = plVar6;
      }
      plVar2 = (long *)0x0;
      unaff_x20 = 1;
    }
    else {
      unaff_x20 = 0;
      plVar7 = plVar6;
      plVar2 = plVar6;
    }
    func_0x00010bd0aefc();
    if ((int)unaff_x20 != 0) {
      func_0x00010bd0b6dc();
      uVar1 = (int)plVar6 == 0;
      plVar2 = plVar7;
      if ((bool)uVar1) {
        plVar2 = (long *)0x0;
      }
    }
    func_0x00010bd0af04();
  }
LAB_10bcee008:
  func_0x000107c3a64c(uStack_78);
  if ((bool)uVar1) {
    return plVar2;
  }
  ___stack_chk_fail();
  plVar7 = plVar6;
  func_0x00010bd0af04();
  func_0x00010bd0a974();
  plVar3 = &lStack_190;
  pcStack_168 = FUN_10bcee050;
  plVar2 = plVar7 + 0x21;
  lStack_190 = lVar4;
  uStack_188 = uVar5;
  lStack_180 = unaff_x20;
  plStack_178 = plVar6;
  ppuStack_170 = &puStack_40;
  FUN_10bcfe858();
  if ((long *)plVar7[0x22] == plVar2 && (uint)plVar3 == (uint)*(byte *)(plVar7[0x22] + 10)) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = (long *)plVar2[((ulong)plVar3 & 0xff) * 3 + 4];
  }
  return plVar2;
}



/* Entry: 10bd20c44; end: 10bd20c67;  */

long * FUN_10bd20c44(long *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 extraout_x8;
  long *plVar6;
  long *plVar7;
  long unaff_x20;
  long *unaff_x21;
  long lStack_160;
  undefined4 uStack_158;
  long lStack_150;
  long *plStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  long lStack_120;
  undefined8 uStack_48;
  
  uVar1 = (int)param_1[5] == -1;
  if ((bool)uVar1) {
    return (long *)0x0;
  }
  plVar6 = (long *)param_1[10];
  lVar4 = *param_1;
  func_0x00010bd0a30c();
  uStack_48 = extraout_x8;
  uVar5 = param_2;
  if (*(int *)(lVar4 + 0x88) == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    func_0x00010bd0b168();
    if (*plVar6 != 0) {
      lStack_120 = *plVar6;
      func_0x00010ae7ccdc();
      plVar2 = (long *)unaff_x21[5];
      func_0x00010bd0b498();
      plVar6 = plVar2;
      func_0x00010bd0baa8();
      if (plVar2 != (long *)0x0) goto LAB_10bcee008;
    }
    func_0x00010bd0b42c();
    lVar4 = *unaff_x21;
    func_0x00010bd0b6d4();
    if (unaff_x21[1] != 0) {
      func_0x00010bd0b694(unaff_x21[5]);
      func_0x00010bd0b5d0(unaff_x21[5]);
    }
    plVar6 = (long *)unaff_x21[5];
    func_0x00010bd0b498();
    if ((plVar6 == (long *)0x0) &&
       ((plVar6 = (long *)unaff_x21[3], plVar6 == (long *)0x0 ||
        (uVar5 = param_2, FUN_10bcedf04(), lVar4 = unaff_x20, plVar6 == (long *)0x0)))) {
      func_0x00010bd0b114();
      uVar5 = param_2;
      FUN_10bcee0ac();
      if ((int)plVar6 == 0) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar6 = (long *)unaff_x21[5];
        func_0x00010bd0b498();
        plVar7 = plVar6;
      }
      plVar2 = (long *)0x0;
      unaff_x20 = 1;
    }
    else {
      unaff_x20 = 0;
      plVar7 = plVar6;
      plVar2 = plVar6;
    }
    func_0x00010bd0aefc();
    if ((int)unaff_x20 != 0) {
      func_0x00010bd0b6dc();
      uVar1 = (int)plVar6 == 0;
      plVar2 = plVar7;
      if ((bool)uVar1) {
        plVar2 = (long *)0x0;
      }
    }
    func_0x00010bd0af04();
  }
LAB_10bcee008:
  func_0x000107c3a64c(uStack_48);
  if ((bool)uVar1) {
    return plVar2;
  }
  ___stack_chk_fail();
  plVar7 = plVar6;
  func_0x00010bd0af04();
  func_0x00010bd0a974();
  plVar3 = &lStack_160;
  pcStack_138 = FUN_10bcee050;
  plVar2 = plVar7 + 0x21;
  lStack_160 = lVar4;
  uStack_158 = uVar5;
  lStack_150 = unaff_x20;
  plStack_148 = plVar6;
  puStack_140 = &stack0xfffffffffffffff0;
  FUN_10bcfe858();
  if ((long *)plVar7[0x22] == plVar2 && (uint)plVar3 == (uint)*(byte *)(plVar7[0x22] + 10)) {
    plVar6 = (long *)0x0;
  }
  else {
    plVar6 = (long *)plVar2[((ulong)plVar3 & 0xff) * 3 + 4];
  }
  return plVar6;
}



/* Entry: 10bd20c68; end: 10bd20d93;  */

void FUN_10bd20c68(ulong param_1)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong *puVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uStack_58;
  
  func_0x00010bd24fac();
  uVar7 = param_1;
  func_0x00010bd24e7c();
  FUN_10bd20d94();
  uVar9 = (ulong)*(uint *)(param_1 + 0x44);
  lVar6 = *(long *)(unaff_x20 + uVar9);
  if (lVar6 != *(long *)(*(long *)(param_1 + 8) + uVar9)) goto LAB_10bd20cfc;
  uVar8 = (ulong)*(uint *)(param_1 + 0x48);
  uVar3 = *(ulong *)(unaff_x20 + 8);
  if ((uVar3 & 1) == 0) {
    if (uVar3 == 0) goto LAB_10bd20cdc;
LAB_10bd20cc0:
    func_0x00010888f420(uVar3,uVar8,8);
    uVar8 = uVar3;
  }
  else {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    if (uVar3 != 0) goto LAB_10bd20cc0;
LAB_10bd20cdc:
    __Znwm();
  }
  *(ulong *)(unaff_x20 + uVar9) = uVar8;
  _memcpy();
  lVar6 = *(long *)(unaff_x20 + (ulong)*(uint *)(param_1 + 0x44));
LAB_10bd20cfc:
  plVar1 = (long *)(lVar6 + (uVar7 & 0xffffffff));
  if ((*(byte *)(unaff_x19 + 1) >> 5 & 1) != 0) {
    uVar7 = *(ulong *)(unaff_x20 + 8);
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    }
    puVar4 = (undefined *)*plVar1;
    if (puVar4 == &UNK_10e5b4a80) {
      func_0x00010bd24e30();
      iVar2 = (int)puVar4;
      uStack_58 = uVar7;
      if ((iVar2 < 9) ||
         ((func_0x00010bd24e30(), iVar2 == 9 && (func_0x00010bd25454(), iVar2 == 1)))) {
        puVar5 = &uStack_58;
        func_0x00010b4c361c();
      }
      else {
        puVar5 = &uStack_58;
        func_0x00010b4cd460();
      }
      *plVar1 = (long)puVar5;
    }
  }
  return;
}



/* Entry: 10bd20d94; end: 10bd20dd7;  */

uint FUN_10bd20d94(long param_1)

{
  uint uVar1;
  int iVar2;
  uint extraout_w8;
  uint uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 8);
  func_0x00010bd252a8();
  iVar2 = (int)param_1;
  uVar1 = *(uint *)(lVar4 + (long)iVar2 * 4);
  func_0x00010bd24ef0();
  if (iVar2 - 9U < 4) {
    func_0x00010bd25480();
    uVar3 = extraout_w8;
  }
  else {
    uVar3 = 0x7fffffff;
  }
  return uVar3 & uVar1;
}



/* Entry: 10bd20dd8; end: 10bd20e4f;  */

ulong * FUN_10bd20dd8(ulong param_1)

{
  ulong *puVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  long unaff_x19;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_58;
  
  FUN_10bd24af8();
  if ((int)param_1 == 0) {
    func_0x00010bd24c8c();
    return (ulong *)(unaff_x19 + (param_1 & 0xffffffff));
  }
  func_0x00010bd24c40();
  func_0x00010bd24fac();
  uVar6 = param_1;
  func_0x00010bd24e7c();
  FUN_10bd20d94();
  uVar8 = (ulong)*(uint *)(param_1 + 0x44);
  lVar5 = *(long *)(unaff_x20 + uVar8);
  if (lVar5 != *(long *)(*(long *)(param_1 + 8) + uVar8)) goto LAB_10bd20cfc;
  uVar7 = (ulong)*(uint *)(param_1 + 0x48);
  uVar3 = *(ulong *)(unaff_x20 + 8);
  if ((uVar3 & 1) == 0) {
    if (uVar3 == 0) goto LAB_10bd20cdc;
LAB_10bd20cc0:
    func_0x00010888f420(uVar3,uVar7,8);
    uVar7 = uVar3;
  }
  else {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    if (uVar3 != 0) goto LAB_10bd20cc0;
LAB_10bd20cdc:
    __Znwm();
  }
  *(ulong *)(unaff_x20 + uVar8) = uVar7;
  _memcpy();
  lVar5 = *(long *)(unaff_x20 + (ulong)*(uint *)(param_1 + 0x44));
LAB_10bd20cfc:
  puVar1 = (ulong *)(lVar5 + (uVar6 & 0xffffffff));
  puVar4 = puVar1;
  if ((*(byte *)(unaff_x19 + 1) >> 5 & 1) != 0) {
    uVar6 = *(ulong *)(unaff_x20 + 8);
    if ((uVar6 & 1) != 0) {
      uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
    }
    puVar4 = (ulong *)*puVar1;
    if (puVar4 == (ulong *)&UNK_10e5b4a80) {
      func_0x00010bd24e30();
      iVar2 = (int)puVar4;
      uStack_58 = uVar6;
      if ((iVar2 < 9) ||
         ((func_0x00010bd24e30(), iVar2 == 9 && (func_0x00010bd25454(), iVar2 == 1)))) {
        puVar4 = &uStack_58;
        func_0x00010b4c361c();
      }
      else {
        puVar4 = &uStack_58;
        func_0x00010b4cd460();
      }
      *puVar1 = (ulong)puVar4;
    }
  }
  return puVar4;
}



/* Entry: 10bd20e50; end: 10bd20ecf;  */

uint FUN_10bd20e50(undefined8 param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  uint extraout_w8;
  uint uVar4;
  uint extraout_w8_00;
  long unaff_x19;
  long lVar5;
  long unaff_x20;
  
  func_0x00010bd24f94();
  FUN_10bcddbd4();
  if (param_2 == 0) {
    func_0x00010bd24ee4();
    lVar5 = *(long *)(param_2 + 8);
    func_0x00010bd252a8();
    iVar3 = (int)param_2;
    uVar1 = *(uint *)(lVar5 + (long)iVar3 * 4);
    func_0x00010bd24ef0();
    if (iVar3 - 9U < 4) {
      func_0x00010bd25480();
      uVar4 = extraout_w8;
    }
    else {
      uVar4 = 0x7fffffff;
    }
    uVar4 = uVar4 & uVar1;
  }
  else {
    uVar2 = (*(long *)(unaff_x19 + 0x28) -
            *(long *)(*(long *)(*(long *)(unaff_x19 + 0x28) + 0x10) + 0x40)) / 0x38;
    uVar1 = *(uint *)(*(long *)(unaff_x20 + 8) + (long)*(int *)(*(long *)(unaff_x19 + 0x20) + 4) * 4
                     + (-(uVar2 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar2 & 0xffffffff) << 2));
    func_0x00010bd24ef0();
    if ((int)param_2 - 9U < 4) {
      func_0x00010bd25480();
      uVar4 = extraout_w8_00;
    }
    else {
      uVar4 = 0x7fffffff;
    }
    uVar4 = uVar4 & uVar1;
  }
  return uVar4;
}



/* Entry: 10bd20ed0; end: 10bd20ffb;  */

long * FUN_10bd20ed0(long *param_1)

{
  uint extraout_w8;
  long unaff_x19;
  
  func_0x00010bd24b28();
  if (param_1 == (long *)0x0) {
    func_0x00010bd24c40();
    func_0x00010bd24af8();
    if ((int)param_1 != 0) {
      func_0x00010bd24c40();
      func_0x00010bd24b10();
      func_0x00010bd25074();
      if ((extraout_w8 >> 5 & 1) != 0) {
        param_1 = (long *)*param_1;
      }
      return param_1;
    }
    func_0x00010bd24c8c();
  }
  else {
    func_0x00010bd24c98();
  }
  return (long *)(unaff_x19 + ((ulong)param_1 & 0xffffffff));
}



/* Entry: 10bd20ffc; end: 10bd210a7;  */

ulong * FUN_10bd20ffc(ulong *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 **ppuVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined1 **ppuVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  uint uVar14;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  long extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  long lVar15;
  ulong extraout_x8_08;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  ulong *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar16;
  code *pcVar17;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  uVar5 = *(int *)(param_3 + 4) != 0;
  bVar6 = *(int *)(param_3 + 4) == 1;
  if ((!bVar6) || (lVar15 = *(long *)(param_3 + 0x30), (*(byte *)(lVar15 + 1) >> 1 & 1) == 0)) {
    func_0x00010bd25628();
    return (ulong *)(ulong)(*(int *)(param_2 + (extraout_x8_08 & 0xffffffff)) != 0);
  }
  func_0x00010bd24b74();
  if (!bVar6) {
    func_0x00010bd24e70();
LAB_10bd1d214:
    func_0x00010bd24e38();
    if (*(int *)((long)param_1 + 0x3c) != -1) {
      pcStack_38 = FUN_10bd1d218;
      uVar12 = param_1[1];
      puStack_40 = &stack0xfffffffffffffff0;
      func_0x00010bd252a8();
      return (ulong *)(ulong)(*(uint *)(uVar12 + (long)(int)param_1 * 4) >> 0x1f);
    }
    return (ulong *)0x0;
  }
  func_0x00010bd24f7c();
  if ((bool)uVar5) {
    func_0x00010bd24f14();
    goto LAB_10bd1d214;
  }
  if ((extraout_w8_01 >> 3 & 1) != 0) {
    func_0x00010bd250c0();
    param_2 = param_2 + extraout_x8_04;
    func_0x00010b4bf3a0();
    if (param_2 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = *(byte *)(param_2 + 10) ^ 1;
    }
    return (ulong *)(ulong)(uVar14 & 1);
  }
  func_0x00010bd24f2c();
  if (param_1 != (ulong *)0x0) {
    func_0x00010bd24c14();
    func_0x00010bd25788(*(undefined8 *)(lVar15 + 0x28));
    return (ulong *)(ulong)(*(int *)(param_2 + (extraout_x8_00 & 0xffffffff)) ==
                           *(int *)(lVar15 + 4));
  }
  func_0x00010bd24c14();
  ppuVar7 = &puStack_40;
  puVar16 = &stack0xfffffffffffffff0;
  func_0x00010bd24fac();
  puVar9 = param_1;
  func_0x00010bd24e7c();
  func_0x00010bd1d3e8();
  if ((int)puVar9 != -1) {
    uVar12 = param_1[4];
    func_0x00010bd25240();
    func_0x00010bd1d3e8();
    uVar14 = *(uint *)(unaff_x20 + (uint)uVar12 + ((ulong)puVar9 >> 5 & 0x7ffffff) * 4) >>
             (ulong)((uint)puVar9 & 0x1f) & 1;
    goto LAB_10bd1c9d4;
  }
  func_0x00010bd24e30();
  if ((int)puVar9 == 10) {
    if (unaff_x20 == param_1[1]) {
      uVar14 = 0;
      goto LAB_10bd1c9d4;
    }
    func_0x00010bd24c14();
    FUN_10bd1be78();
    goto LAB_10bd1c9c8;
  }
  func_0x00010bd24e30();
  uVar14 = (int)puVar9 - 1;
  uVar4 = 7 < uVar14;
  uVar5 = uVar14 == 8;
  switch(uVar14) {
  case 0:
  case 7:
    func_0x00010bd24c14();
    func_0x00010bd20f0c();
    break;
  case 1:
    func_0x00010bd24c14();
    func_0x00010bd20f48();
    goto LAB_10bd1c9c8;
  case 2:
  case 5:
    func_0x00010bd24c14();
    func_0x00010bd20f84();
    break;
  case 3:
  case 4:
    func_0x00010bd24c14();
    func_0x00010bd20fc0();
LAB_10bd1c9c8:
    uVar12 = *puVar9;
code_r0x00010bd1c9cc:
    bVar6 = uVar12 == 0;
    goto code_r0x00010bd1c9d0;
  case 6:
    func_0x00010bd24c14();
    func_0x00010bd20ed0();
    uVar14 = (uint)(byte)*puVar9;
    goto LAB_10bd1c9d4;
  case 8:
    func_0x00010bd25454();
    if ((int)puVar9 == 1) {
      func_0x00010bd24f2c();
      if (puVar9 == (ulong *)0x0) {
        func_0x00010bd25240();
        FUN_10bd1d218();
        if ((int)puVar9 == 0) {
          func_0x00010bd25240();
          FUN_10bd20d94();
          goto code_r0x00010bd1ca18;
        }
        func_0x00010bd25240();
        FUN_10bd20d94();
        func_0x00010bd25074();
        if ((extraout_w8 >> 5 & 1) != 0) {
          puVar9 = (ulong *)*puVar9;
        }
      }
      else {
        func_0x00010bd25240();
        FUN_10bd20e50();
code_r0x00010bd1ca18:
        puVar9 = (ulong *)(unaff_x20 + ((ulong)puVar9 & 0xffffffff));
      }
      uVar14 = (uint)puVar9;
      func_0x00010b4d1b04();
      uVar14 = uVar14 ^ 1;
      goto LAB_10bd1c9d4;
    }
    func_0x00010bd25240();
    func_0x00010bd21e40();
    if ((int)puVar9 == 0) {
      func_0x00010bd24c14();
      FUN_10bd23e3c();
      uVar12 = (ulong)*(char *)((*puVar9 & 0xfffffffffffffffc) + 0x17);
      if ((long)uVar12 < 0) {
        uVar12 = *(ulong *)((*puVar9 & 0xfffffffffffffffc) + 8);
      }
    }
    else {
      func_0x00010bd24c14();
      FUN_10bd23da0();
      uVar12 = puVar9[1];
      if (-1 < (char)*(byte *)((long)puVar9 + 0x17)) {
        uVar12 = (ulong)*(byte *)((long)puVar9 + 0x17);
      }
    }
    goto code_r0x00010bd1c9cc;
  default:
    func_0x00010bd25258();
    FUN_10bdb2a00(&puStack_40);
    puVar10 = &UNK_10f835557;
    func_0x00010b4c3038();
    pcVar17 = FUN_10bd1cac8;
    func_0x00010bd253b0();
    ppuVar2 = &puStack_40;
    while( true ) {
      *(undefined8 *)((long)ppuVar2 + -0x50) = unaff_d9;
      *(undefined8 *)((long)ppuVar2 + -0x48) = unaff_d8;
      *(undefined8 *)((long)ppuVar2 + -0x40) = unaff_x24;
      *(undefined8 *)((long)ppuVar2 + -0x38) = unaff_x23;
      *(undefined8 *)((long)ppuVar2 + -0x30) = unaff_x22;
      *(ulong **)((long)ppuVar2 + -0x28) = param_1;
      *(ulong *)((long)ppuVar2 + -0x20) = unaff_x20;
      *(ulong **)((long)ppuVar2 + -0x18) = unaff_x19;
      *(undefined1 **)((long)ppuVar2 + -0x10) = puVar16;
      *(code **)((long)ppuVar2 + -8) = pcVar17;
      func_0x00010bd24b74();
      if (!(bool)uVar5) {
        func_0x00010bd24e70();
        func_0x00010bd24e38();
        *(ulong *)((long)ppuVar2 + -0x70) = unaff_x20;
        *(ulong **)((long)ppuVar2 + -0x68) = unaff_x19;
        *(undefined1 **)((long)ppuVar2 + -0x60) = (undefined1 *)((long)ppuVar2 + -0x10);
        *(code **)((long)ppuVar2 + -0x58) = FUN_10bd1cd90;
        func_0x00010bd24f94();
        func_0x00010bd24e7c();
        func_0x00010bd1d3e8();
        if ((int)ppuVar7 != -1) {
          func_0x00010bd25418();
          *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8_00;
        }
        return (ulong *)ppuVar7;
      }
      if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) != 0) {
        func_0x00010bd250c0();
        puVar9 = (ulong *)(puVar10 + extraout_x8_01);
        uVar1 = *(undefined8 *)((long)ppuVar2 + -0x10);
        uVar13 = *(undefined8 *)((long)ppuVar2 + -8);
        func_0x00010bd25668();
        *(undefined8 *)((long)ppuVar2 + -0x60) = uVar1;
        *(undefined8 *)((long)ppuVar2 + -0x58) = uVar13;
        func_0x00010b4bf3a0();
        if (puVar9 == (ulong *)0x0) {
          return (ulong *)0x0;
        }
        *(undefined **)((long)ppuVar2 + -0x70) = puVar10;
        *(ulong **)((long)ppuVar2 + -0x68) = unaff_x19;
        *(undefined8 *)((long)ppuVar2 + -0x60) = *(undefined8 *)((long)ppuVar2 + -0x60);
        *(undefined8 *)((long)ppuVar2 + -0x58) = *(undefined8 *)((long)ppuVar2 + -0x58);
        bVar3 = *(char *)((long)puVar9 + 9) != '\0';
        bVar6 = *(char *)((long)puVar9 + 9) == '\x01';
        if (bVar6) {
          func_0x00010b4c5260((char)puVar9[1]);
          puVar8 = puVar9;
          if (!bVar3 || bVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010b4bf4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&UNK_10b4bf4f4 + (ulong)(byte)(&UNK_10e5b4882)[extraout_x8] * 4))();
            return puVar9;
          }
        }
        else {
          puVar8 = puVar9;
          if ((*(byte *)((long)puVar9 + 10) & 1) == 0) {
            if (*(int *)(&UNK_10e5b4ac0 + (ulong)(byte)puVar9[1] * 4) == 10) {
              puVar8 = (ulong *)*puVar9;
              if ((*(byte *)((long)puVar9 + 10) >> 4 & 1) == 0) {
                pcVar17 = *(code **)(*puVar8 + 0x18);
              }
              else {
                pcVar17 = *(code **)(*puVar8 + 0x88);
              }
              (*pcVar17)();
            }
            else if (*(int *)(&UNK_10e5b4ac0 + (ulong)(byte)puVar9[1] * 4) == 9) {
              puVar8 = (ulong *)*puVar9;
              func_0x000107c27fa8(puVar8);
            }
            *(byte *)((long)puVar9 + 10) = *(byte *)((long)puVar9 + 10) & 0xf0 | 1;
          }
        }
        return puVar8;
      }
      if ((*(byte *)((long)unaff_x19 + 1) >> 5 & 1) != 0) break;
      puVar9 = unaff_x19;
      FUN_10bcddbd4();
      if (puVar9 == (ulong *)0x0) {
        func_0x00010bd24c14();
        FUN_10bd1c8f0();
        if ((int)puVar9 != 0) {
          func_0x00010bd24c14();
          func_0x00010bd1d3b4();
          func_0x00010bd24e30();
          func_0x00010bd2518c();
          if (!(bool)uVar4 || (bool)uVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bd1cb9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((ulong)(byte)(&UNK_10e60b835)[extraout_x8_03] * 4 + 0x10bd1cba0))();
            return puVar9;
          }
        }
        goto LAB_10bd1cd6c;
      }
      func_0x00010bd24ba4();
      if ((int)puVar9 == 0) goto LAB_10bd1cd6c;
      if ((*(byte *)((long)unaff_x19 + 1) >> 4 & 1) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = unaff_x19[5];
      }
      uVar1 = *(undefined8 *)((long)ppuVar2 + -0x10);
      uVar13 = *(undefined8 *)((long)ppuVar2 + -8);
      ppuVar7 = (undefined1 **)param_1;
      puVar11 = puVar10;
      func_0x00010bd25668();
      *(undefined8 *)((long)ppuVar2 + -0x80) = unaff_x22;
      *(ulong **)((long)ppuVar2 + -0x78) = param_1;
      *(undefined **)((long)ppuVar2 + -0x70) = puVar10;
      *(ulong **)((long)ppuVar2 + -0x68) = unaff_x19;
      *(undefined8 *)((long)ppuVar2 + -0x60) = uVar1;
      *(undefined8 *)((long)ppuVar2 + -0x58) = uVar13;
      uVar4 = *(int *)(uVar12 + 4) != 0;
      uVar5 = *(int *)(uVar12 + 4) == 1;
      if ((!(bool)uVar5) || ((*(byte *)(*(long *)(uVar12 + 0x30) + 1) >> 1 & 1) == 0)) {
        puVar9 = (ulong *)ppuVar7;
        func_0x00010bd252d8();
        if (*(int *)(puVar11 + (extraout_x8_05 & 0xffffffff)) != 0) {
          puVar8 = (ulong *)*ppuVar7;
          FUN_10bcee2d0();
          uVar12 = *(ulong *)(puVar11 + 8);
          puVar9 = puVar8;
          if ((uVar12 & 1) != 0) {
            func_0x00010bd25400();
            uVar12 = extraout_x8_07;
          }
          if (uVar12 == 0) {
            func_0x00010bd255ac();
            if ((int)puVar9 == 10) {
              func_0x00010bd24e64();
              func_0x00010bd20e14();
              puVar9 = (ulong *)*puVar9;
              if (puVar9 != (ulong *)0x0) {
                func_0x00010bd24eb8();
              }
            }
            else if ((int)puVar9 == 9) {
              FUN_10bd1bdfc();
              if ((int)puVar8 == 1) {
                func_0x00010bd24e64();
                func_0x00010bd20e14();
                puVar9 = (ulong *)*puVar8;
                if (puVar9 != (ulong *)0x0) {
                  func_0x000107c34fe8();
                }
                __ZdlPv();
              }
              else {
                func_0x00010bd24e64();
                FUN_10bd1f51c();
                func_0x000107c30258();
                puVar9 = puVar8;
              }
            }
          }
          func_0x00010bd252d8();
          *(undefined4 *)(puVar11 + (extraout_x8_06 & 0xffffffff)) = 0;
        }
        return puVar9;
      }
      func_0x00010bd24e64();
      puVar16 = *(undefined1 **)((long)ppuVar2 + -0x60);
      pcVar17 = *(code **)((long)ppuVar2 + -0x58);
      unaff_x20 = *(ulong *)((long)ppuVar2 + -0x70);
      unaff_x19 = *(ulong **)((long)ppuVar2 + -0x68);
      unaff_x22 = *(undefined8 *)((long)ppuVar2 + -0x80);
      param_1 = *(ulong **)((long)ppuVar2 + -0x78);
      ppuVar2 = (undefined1 **)((long)ppuVar2 + -0x50);
      puVar10 = puVar11;
    }
    func_0x00010b91adc8();
    func_0x00010bd2518c();
    puVar9 = unaff_x19;
    if (!(bool)uVar4 || (bool)uVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bd1cb58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10e60b82b)[extraout_x8_02] * 4 + 0x10bd1cb5c))();
      return unaff_x19;
    }
LAB_10bd1cd6c:
    func_0x00010bd25668();
    return puVar9;
  }
  bVar6 = (int)*puVar9 == 0;
code_r0x00010bd1c9d0:
  uVar14 = (uint)!bVar6;
LAB_10bd1c9d4:
  return (ulong *)(ulong)(uVar14 & 1);
}



/* Entry: 10bd210a8; end: 10bd211fb;  */

long FUN_10bd210a8(long param_1,long param_2,long param_3,int param_4,long param_5)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  undefined1 auStack_68 [16];
  long alStack_58 [2];
  long lStack_48;
  
  lStack_48 = param_5;
  if ((*(byte *)(param_3 + 1) >> 5 & 1) == 0) {
    func_0x0001088914a0(auStack_68,&UNK_10f83557c);
    func_0x00010bd25258();
    param_3 = unaff_x20;
  }
  else {
    lVar1 = param_3;
    func_0x00010b91adc8();
    if (((int)lVar1 != param_4) && (func_0x00010bd25080(), param_4 != 1 || (int)lVar1 != 8)) {
      func_0x00010bd25258();
      FUN_10bdb2a08(alStack_58);
      FUN_10bd211fc(alStack_58,&UNK_10f835615);
      FUN_10bd19110();
      func_0x00010bd2121c();
      goto LAB_10bd211f4;
    }
    if (param_5 == 0) {
LAB_10bd21124:
      if ((*(byte *)(param_3 + 1) >> 3 & 1) == 0) {
        func_0x00010bd24c40();
        func_0x00010bd20a60();
      }
      else {
        lVar1 = param_2 + (ulong)*(uint *)(param_1 + 0x28);
        func_0x00010b4bfd4c(lVar1,*(undefined4 *)(param_3 + 4),&UNK_10e5b4a80);
      }
      return lVar1;
    }
    func_0x00010bd253a8();
    plVar2 = &lStack_48;
    alStack_58[0] = lVar1;
    FUN_10bd208b4(plVar2,alStack_58,&UNK_10f8356a7);
    lVar1 = 0;
    if (plVar2 == (long *)0x0) goto LAB_10bd21124;
    func_0x00010802bcb8();
    func_0x00010bd25258();
  }
  FUN_10bdb2a88(alStack_58);
LAB_10bd211f4:
  func_0x00010ae6c700(alStack_58);
  func_0x00010bd24d0c();
  func_0x00010bd24d1c();
  return param_3;
}



/* Entry: 10bd211fc; end: 10bd2123b;  */

void FUN_10bd211fc(void)

{
  func_0x00010bd24d0c();
  func_0x00010bd24d1c();
  return;
}



/* Entry: 10bd2123c; end: 10bd212bb;  */

undefined8 * FUN_10bd2123c(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint extraout_w8;
  long lVar6;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong *unaff_x21;
  ulong uVar7;
  ulong uVar8;
  
  func_0x00010bd24bf0();
  func_0x00010b91c030();
  if ((param_1 & 1) == 0) {
    puVar5 = (undefined8 *)*unaff_x21;
    func_0x00010bd25540();
    func_0x00010bd24e38();
    func_0x00010bd24bf0();
    func_0x00010b91c030();
    if (((ulong)puVar5 & 1) == 0) {
      func_0x00010bd25540(*unaff_x21);
      func_0x00010bd24e38();
      func_0x00010bd24d0c();
      func_0x00010bd24d1c();
      return unaff_x20;
    }
    func_0x00010bd24c14();
    func_0x00010bd24b28();
    if (puVar5 == (undefined8 *)0x0) {
      func_0x00010bd24c40();
      func_0x00010bd24af8();
      if ((int)puVar5 != 0) {
        func_0x00010bd24c40();
        func_0x00010bd24b10();
        func_0x00010bd25074();
        if ((extraout_w8 >> 5 & 1) == 0) {
          return puVar5;
        }
        return (undefined8 *)*puVar5;
      }
      func_0x00010bd24c8c();
    }
    else {
      func_0x00010bd24c98();
    }
    return (undefined8 *)(unaff_x19 + ((ulong)puVar5 & 0xffffffff));
  }
  func_0x00010bd24c14();
  func_0x00010bd24b28();
  if (param_1 != 0) {
    func_0x00010bd24c98();
    return (undefined8 *)(unaff_x19 + (param_1 & 0xffffffff));
  }
  func_0x00010bd24c40();
  func_0x00010bd24af8();
  if ((int)param_1 == 0) {
    func_0x00010bd24c8c();
    return (undefined8 *)(unaff_x19 + (param_1 & 0xffffffff));
  }
  func_0x00010bd24c40();
  func_0x00010bd24fac();
  uVar2 = param_1;
  func_0x00010bd24e7c();
  FUN_10bd20d94();
  uVar8 = (ulong)*(uint *)(param_1 + 0x44);
  lVar6 = *(long *)((long)unaff_x20 + uVar8);
  if (lVar6 != *(long *)(*(long *)(param_1 + 8) + uVar8)) goto LAB_10bd20cfc;
  uVar7 = (ulong)*(uint *)(param_1 + 0x48);
  uVar3 = unaff_x20[1];
  if ((uVar3 & 1) == 0) {
    if (uVar3 == 0) goto LAB_10bd20cdc;
LAB_10bd20cc0:
    func_0x00010888f420(uVar3,uVar7,8);
    uVar7 = uVar3;
  }
  else {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    if (uVar3 != 0) goto LAB_10bd20cc0;
LAB_10bd20cdc:
    __Znwm();
  }
  *(ulong *)((long)unaff_x20 + uVar8) = uVar7;
  _memcpy();
  lVar6 = *(long *)((long)unaff_x20 + (ulong)*(uint *)(param_1 + 0x44));
LAB_10bd20cfc:
  puVar5 = (undefined8 *)(lVar6 + (uVar2 & 0xffffffff));
  puVar4 = puVar5;
  if (((*(byte *)(unaff_x19 + 1) >> 5 & 1) != 0) &&
     (puVar4 = (undefined8 *)*puVar5, puVar4 == (undefined8 *)&UNK_10e5b4a80)) {
    func_0x00010bd24e30();
    iVar1 = (int)puVar4;
    if ((iVar1 < 9) || ((func_0x00010bd24e30(), iVar1 == 9 && (func_0x00010bd25454(), iVar1 == 1))))
    {
      puVar4 = (undefined8 *)&stack0xffffffffffffffa8;
      func_0x00010b4c361c();
    }
    else {
      puVar4 = (undefined8 *)&stack0xffffffffffffffa8;
      func_0x00010b4cd460();
    }
    *puVar5 = puVar4;
  }
  return puVar4;
}



/* Entry: 10bd212bc; end: 10bd212db;  */

void FUN_10bd212bc(void)

{
  func_0x00010bd24d0c();
  func_0x00010bd24d1c();
  return;
}



/* Entry: 10bd212dc; end: 10bd21a4f;  */

byte ***** FUN_10bd212dc(long *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  code *pcVar7;
  undefined4 *puVar8;
  long *plVar9;
  undefined2 *puVar10;
  undefined1 *puVar11;
  byte *****pppppbVar12;
  long lVar13;
  byte *****pppppbVar14;
  int iVar15;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar16;
  byte *pbVar17;
  ulong uVar18;
  byte ****ppppbVar19;
  byte ****ppppbVar20;
  byte *****unaff_x20;
  byte *****unaff_x21;
  undefined4 *puVar21;
  byte *pbVar22;
  long lVar23;
  long lVar24;
  long *plVar25;
  undefined4 uVar26;
  long lVar27;
  undefined *puVar28;
  byte ****ppppbStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [16];
  undefined4 *puStack_160;
  byte ****ppppbStack_158;
  byte ****ppppbStack_150;
  undefined2 *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  byte ****ppppbStack_130;
  byte ****ppppbStack_128;
  byte abStack_120 [8];
  byte ****ppppbStack_118;
  byte ****ppppbStack_110;
  byte ****ppppbStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined4 *puStack_e8;
  undefined4 *puStack_e0;
  undefined4 uStack_d0;
  undefined4 *puStack_c8;
  undefined4 *puStack_c0;
  int iStack_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  uint uStack_98;
  byte ****ppppbStack_88;
  byte ****ppppbStack_80;
  undefined2 uStack_78;
  undefined1 uStack_76;
  
  ppppbStack_88 = (byte ****)0x0;
  ppppbStack_80 = (byte ****)0x0;
  iVar15 = *(int *)(*param_1 + 4);
  pppppbVar14 = (byte *****)0x0;
  if (iVar15 != 0) {
    if (iVar15 < 0) {
      func_0x00010bd22974();
LAB_10bd219f0:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10bd219f4);
      (*pcVar7)();
    }
    FUN_10bd22988(abStack_120,(long)iVar15,0,&ppppbStack_80);
    func_0x00010bd25168();
    ppppbStack_80 = ppppbStack_108;
    ppppbStack_88 = ppppbStack_110;
    func_0x00010bd2536c(0);
    pppppbVar14 = unaff_x20;
  }
  lVar23 = 0;
  for (lVar24 = 0; lVar13 = *param_1, lVar24 < *(int *)(lVar13 + 4); lVar24 = lVar24 + 1) {
    lVar13 = *(long *)(lVar13 + 0x38) + lVar23;
    unaff_x20 = (byte *****)(param_1 + 1);
    func_0x00010bd21e40(unaff_x20,lVar13);
    func_0x00010bd1d3e8(param_1 + 1,lVar13);
    func_0x00010787827c();
    FUN_10bd1b8d8();
    FUN_10bd1d218(0x400,param_1 + 1,lVar13);
    if ((int)unaff_x20 == 0) {
      uVar26 = 0xffffffff;
    }
    else {
      lVar27 = param_1[7];
      func_0x00010b91ad64();
      uVar26 = *(undefined4 *)(lVar27 + (long)(int)lVar13 * 4);
    }
    if (ppppbStack_88 < ppppbStack_80) {
      func_0x00010bd25350();
      *(undefined4 *)(extraout_x8 + 0x18) = uVar26;
      lVar13 = extraout_x8;
    }
    else {
      lVar13 = (long)ppppbStack_88 - (long)pppppbVar14 >> 5;
      uVar16 = lVar13 + 1;
      if (uVar16 >> 0x3b != 0) {
        func_0x00010bd22974();
        goto LAB_10bd219f0;
      }
      uVar18 = (long)ppppbStack_80 - (long)pppppbVar14 >> 4;
      if (uVar18 <= uVar16) {
        uVar18 = uVar16;
      }
      if (0x7fffffffffffffdf < (ulong)((long)ppppbStack_80 - (long)pppppbVar14)) {
        uVar18 = 0x7ffffffffffffff;
      }
      FUN_10bd22988(abStack_120,uVar18,lVar13,&ppppbStack_80);
      func_0x00010bd25350(ppppbStack_110);
      *(undefined4 *)(extraout_x8_00 + 0x18) = uVar26;
      func_0x00010bd25168();
      ppppbStack_80 = ppppbStack_108;
      func_0x00010bd2536c(pppppbVar14);
      pppppbVar14 = unaff_x20;
      lVar13 = extraout_x8_00;
    }
    unaff_x21 = (byte *****)(lVar13 + 0x20);
    lVar23 = lVar23 + 0x58;
    ppppbStack_88 = (byte ****)unaff_x21;
  }
  if (pppppbVar14 != (byte *****)ppppbStack_88) {
    FUN_10bd22a20(pppppbVar14,ppppbStack_88,
                  LZCOUNT((long)ppppbStack_88 - (long)pppppbVar14 >> 5) << 1 ^ 0x7e,1);
    lVar13 = *param_1;
  }
  uStack_78 = 0;
  uStack_76 = 0;
  FUN_10bd25b54(abStack_120,lVar13,&uStack_78);
  puVar21 = (undefined4 *)((ulong)((long)ppppbStack_110 - (long)ppppbStack_118) >> 5);
  puVar8 = puVar21;
  func_0x00010b4d6b1c(puVar21,1 << (ulong)(uStack_98 & 0x1f),&UNK_10f8356e7);
  if (puVar8 == (undefined4 *)0x0) {
    iVar15 = 2;
    for (puVar8 = puStack_c8; puVar8 != puStack_c0; puVar8 = puVar8 + 8) {
      iVar15 = iVar15 + ((uint)((ulong)(*(long *)(puVar8 + 4) - *(long *)(puVar8 + 2)) >> 1) &
                        0xfffffffe) + 3;
    }
    iVar6 = (int)puVar21 * 0x10;
    uVar1 = (iVar6 + 0x39U & 0xfff8) + iVar15 * 2 + 2 & 0xfffffffc;
    uVar2 = uVar1 + (int)((ulong)((long)ppppbStack_88 - (long)pppppbVar14) >> 5) * 0xc + 7 &
            0xfffffff8;
    unaff_x20 = (byte *****)
                (long)(int)((iStack_a8 - iStack_b0) +
                            (int)((ulong)((long)puStack_e0 - (long)puStack_e8) >> 1) + uVar2);
    unaff_x21 = unaff_x20;
    __Znwm();
    iVar15 = 0;
    if ((int)param_1[4] != -1) {
      iVar15 = (int)param_1[4];
    }
    iVar3 = 0;
    if ((int)param_1[5] != -1) {
      iVar3 = (int)param_1[5];
    }
    if (pppppbVar14 == (byte *****)ppppbStack_88) {
      uVar26 = 0;
    }
    else {
      uVar26 = *(undefined4 *)((long)ppppbStack_88[-4] + 4);
    }
    ppppbVar19 = (byte ****)param_1[1];
    if (abStack_120[0] - 0x76 < 0xffffff8b) {
      ppppbVar20 = (byte ****)&DAT_100064c40;
    }
    else {
      ppppbVar20 = *(byte *****)(&UNK_110d9ce70 + (ulong)(uint)abStack_120[0] * 8);
    }
    *(short *)unaff_x21 = (short)iVar15;
    *(short *)((long)unaff_x21 + 2) = (short)iVar3;
    *(undefined4 *)((long)unaff_x21 + 4) = uVar26;
    *(byte *)(unaff_x21 + 1) = (char)puVar21 * '\b' - 8;
    *(byte *)((long)unaff_x21 + 9) = *(byte *)((long)unaff_x21 + 9) & 0xfe;
    *(short *)((long)unaff_x21 + 10) = (short)iVar6 + 0x38;
    *(undefined4 *)((long)unaff_x21 + 0xc) = uStack_d0;
    *(uint *)(unaff_x21 + 2) = uVar1;
    *(short *)((long)unaff_x21 + 0x14) =
         (short)((ulong)((long)ppppbStack_88 - (long)pppppbVar14) >> 5);
    *(short *)((long)unaff_x21 + 0x16) = (short)((ulong)((long)puStack_e0 - (long)puStack_e8) >> 4);
    *(uint *)(unaff_x21 + 3) = uVar2;
    unaff_x21[4] = ppppbVar19;
    unaff_x21[5] = (byte ****)0x0;
    unaff_x21[6] = ppppbVar20;
    lVar24 = 0x38;
    ppppbStack_130 = (byte ****)unaff_x20;
    ppppbStack_128 = (byte ****)unaff_x21;
    for (pppppbVar14 = (byte *****)ppppbStack_118; pppppbVar14 != (byte *****)ppppbStack_110;
        pppppbVar14 = pppppbVar14 + 4) {
      puVar28 = &DAT_100064c40;
      if (pppppbVar14 == (byte *****)0x0) {
LAB_10bd216a4:
        uVar16 = 0;
      }
      else if (*(int *)(pppppbVar14 + 3) == 1) {
        if (0xffffff8a < *(byte *)pppppbVar14 - 0x76) {
          puVar28 = *(undefined **)(&UNK_110d9ce70 + (ulong)(uint)*(byte *)pppppbVar14 * 8);
        }
        uVar5 = *(ushort *)(pppppbVar14 + 2);
        unaff_x20 = (byte *****)(ulong)*(byte *)((long)pppppbVar14 + 0x12);
        bVar4 = *(byte *)((long)pppppbVar14 + 0x13);
        plVar25 = param_1 + 1;
        FUN_10bd20e50(plVar25,pppppbVar14[1]);
        uVar16 = (ulong)bVar4 << 0x18 | (long)plVar25 << 0x30 | (long)unaff_x20 << 0x10 |
                 (ulong)uVar5;
        unaff_x21 = (byte *****)ppppbStack_128;
      }
      else {
        if (*(int *)(pppppbVar14 + 3) != 2) goto LAB_10bd216a4;
        if (0xffffff8a < *(byte *)pppppbVar14 - 0x76) {
          puVar28 = *(undefined **)(&UNK_110d9ce70 + (ulong)(uint)*(byte *)pppppbVar14 * 8);
        }
        uVar16 = (ulong)*(uint *)((long)pppppbVar14 + 2);
      }
      *(undefined **)((long)unaff_x21 + lVar24) = puVar28;
      *(ulong *)((byte *)((long)unaff_x21 + lVar24) + 8) = uVar16;
      lVar24 = lVar24 + 0x10;
    }
    pbVar17 = (byte *)((long)unaff_x21 + (ulong)*(ushort *)((long)unaff_x21 + 10));
    for (; puStack_c8 != puStack_c0; puStack_c8 = puStack_c8 + 8) {
      *(undefined4 *)pbVar17 = *puStack_c8;
      puVar21 = *(undefined4 **)(puStack_c8 + 2);
      puVar8 = *(undefined4 **)(puStack_c8 + 4);
      *(short *)(pbVar17 + 4) = (short)((uint)((int)puVar8 - (int)puVar21) >> 2);
      pbVar17 = pbVar17 + 6;
      for (; puVar21 != puVar8; puVar21 = puVar21 + 1) {
        *(undefined4 *)pbVar17 = *puVar21;
        pbVar17 = pbVar17 + 4;
      }
    }
    pbVar17[0] = 0xff;
    pbVar17[1] = 0xff;
    pbVar17[2] = 0xff;
    pbVar17[3] = 0xff;
    pbVar17 = (byte *)((long)unaff_x21 + (ulong)*(uint *)(unaff_x21 + 2));
    for (plVar25 = plStack_100; plVar25 != plStack_f8; plVar25 = plVar25 + 3) {
      lVar23 = *plVar25;
      lVar24 = lVar23;
      func_0x00010787827c();
      if ((((int)lVar24 == 0xe) && ((*(ushort *)((long)plVar25 + 0x12) & 0x600) == 0x400)) &&
         (puStack_e8[(ulong)*(ushort *)(plVar25 + 2) * 4] == 10)) {
        pbVar17[8] = 0;
        pbVar17[9] = 0;
        pbVar17[10] = 0;
        pbVar17[0xb] = 0;
        pbVar17[0] = 0;
        pbVar17[1] = 0;
        pbVar17[2] = 0;
        pbVar17[3] = 0;
        pbVar17[4] = 0;
        pbVar17[5] = 0;
        pbVar17[6] = 0;
        pbVar17[7] = 0;
        uVar5 = *(ushort *)(plVar25 + 2);
        puStack_e8[(ulong)uVar5 * 4] = 0;
        *(undefined8 *)(puStack_e8 + (ulong)uVar5 * 4 + 2) = 0;
      }
      else {
        func_0x00010bd25198();
        plVar9 = param_1 + 1;
        FUN_10bd20e50(plVar9,lVar23);
        *(int *)pbVar17 = (int)plVar9;
        if (lVar24 == 0) {
          if ((int)param_1[4] == -1) {
            iVar15 = 0;
          }
          else {
            iVar15 = (int)plVar25[1] + (int)param_1[4] * 8;
          }
        }
        else {
          iVar15 = *(int *)((long)param_1 + 0x2c) +
                   (int)((lVar24 - *(long *)(*(long *)(lVar24 + 0x10) + 0x40)) / 0x38) * 4;
        }
        *(int *)(pbVar17 + 4) = iVar15;
        *(int *)(pbVar17 + 8) = (int)plVar25[2];
      }
      pbVar17 = pbVar17 + 0xc;
    }
    pbVar17 = (byte *)((long)unaff_x21 + (ulong)*(uint *)(unaff_x21 + 3));
    plVar25 = plStack_f8;
    for (puVar21 = puStack_e8; puVar21 != puStack_e0; puVar21 = puVar21 + 4) {
      pbVar22 = pbVar17;
      switch(*puVar21) {
      case 0:
        pbVar22 = pbVar17 + 8;
        pbVar17[0] = 0;
        pbVar17[1] = 0;
        pbVar17[2] = 0;
        pbVar17[3] = 0;
        pbVar17[4] = 0;
        pbVar17[5] = 0;
        pbVar17[6] = 0;
        pbVar17[7] = 0;
        break;
      case 1:
        uVar26 = (undefined4)param_1[8];
        goto code_r0x00010bd218d4;
      case 2:
        uVar26 = *(undefined4 *)((long)param_1 + 0x44);
        goto code_r0x00010bd218d4;
      case 3:
        uVar26 = (undefined4)param_1[9];
        goto code_r0x00010bd218d4;
      case 4:
        plVar9 = param_1;
        func_0x00010bd1fe44(param_1,*(undefined8 *)(puVar21 + 2));
        pbVar22 = pbVar17 + 8;
        *(long **)pbVar17 = plVar9;
        break;
      case 5:
      case 6:
      case 7:
      case 8:
      case 0xd:
        goto code_r0x00010bd21990;
      case 9:
      case 0xb:
        uVar26 = puVar21[2];
code_r0x00010bd218d4:
        pbVar22 = pbVar17 + 8;
        *(undefined4 *)pbVar17 = uVar26;
        break;
      case 10:
        func_0x00010bd25224();
        FUN_10bdb2a00();
        FUN_10bd212bc();
        goto LAB_10bd21a10;
      case 0xc:
        uVar1 = (uint)plVar25 & 0xffffffe0;
        plVar25 = (long *)(ulong)uVar1;
        pbVar17[0] = 0;
        pbVar17[1] = 0;
        pbVar17[2] = (byte)uVar1;
        pbVar17[4] = 0;
        pbVar17[5] = 0;
        pbVar17[6] = 0;
        pbVar17[7] = 0;
        pbVar22 = pbVar17 + 8;
      }
      pbVar17 = pbVar22;
    }
    lVar24 = CONCAT44(uStack_ac,iStack_b0);
    uVar16 = (ulong)*(uint *)(unaff_x21 + 3);
    lVar23 = lVar24;
    if (lVar24 != CONCAT44(uStack_a4,iStack_a8)) {
      _memcpy((byte *)((long)unaff_x21 + (ulong)*(ushort *)((long)unaff_x21 + 0x16) * 8 + uVar16),
              lVar24,CONCAT44(uStack_a4,iStack_a8) - lVar24);
      lVar24 = CONCAT44(uStack_ac,iStack_b0);
      uVar16 = (ulong)*(uint *)(unaff_x21 + 3);
      lVar23 = CONCAT44(uStack_a4,iStack_a8);
    }
    pppppbVar14 = (byte *****)
                  ((lVar23 - lVar24) + uVar16 + (ulong)*(ushort *)((long)unaff_x21 + 0x16) * 8);
    if (pppppbVar14 == (byte *****)ppppbStack_130) {
      FUN_10bd2349c(abStack_120);
      FUN_10bd23668(&stack0xffffffffffffff70);
      return unaff_x21;
    }
    func_0x00010ae6a960(pppppbVar14,ppppbStack_130,&UNK_10f83572f);
    func_0x00010bd25474();
    func_0x00010bd25224();
    FUN_10bdb2a88();
  }
  else {
    func_0x00010bd25224();
    FUN_10bdb2a88();
  }
  func_0x00010ae6c700();
code_r0x00010bd21990:
  func_0x00010bd25224();
  FUN_10bdb2a00();
  func_0x00010b4cd4a4();
LAB_10bd21a10:
  puVar10 = &uStack_78;
  func_0x00010ae6c700();
  FUN_10bd2349c(abStack_120);
  puVar11 = &stack0xffffffffffffff70;
  FUN_10bd23668();
  func_0x00010bd24f74();
  pcStack_138 = FUN_10bd21a50;
  uVar18 = *(ulong *)(puVar11 + 0x10);
  uVar16 = uVar18;
  ppppbStack_150 = (byte ****)unaff_x20;
  puStack_148 = puVar10;
  puStack_140 = &stack0xfffffffffffffff0;
  _strlen(uVar18);
  func_0x00010bcfd8c8(uVar18,uVar16);
  if ((uVar18 & 1) == 0) {
    FUN_10bcedc88();
  }
  pppppbVar14 = (byte *****)(ulong)(byte)puVar11[1];
  pppppbVar12 = pppppbVar14;
  puStack_160 = puVar21;
  ppppbStack_158 = (byte ****)unaff_x21;
  if ((bRam00000001137fe1e0 & 1) == 0) goto LAB_10bd21c3c;
  while( true ) {
    pppppbVar14 = (byte *****)0x1137fe1d8;
    func_0x000107c2b9f0(0x1137fe1d8);
    func_0x000107c316b4(puVar11);
    func_0x000107c2b9fc();
    if ((int)pppppbVar12 != 0) {
      func_0x000107c3a8e4();
      for (; pppppbVar12 != (byte *****)0x1137fe1d8; pppppbVar12 = pppppbVar12 + 1) {
        lVar24 = *(long *)((long)pppppbVar12 + *(long *)(puVar11 + 0x20));
        if ((lVar24 != 0) &&
           (pppppbVar14 = *(byte ******)(lVar24 + 0x18), *(int *)pppppbVar14 != 0xdd)) {
          FUN_10bd23868(pppppbVar14,(long)pppppbVar12 + *(long *)(puVar11 + 0x20),1);
        }
      }
    }
    func_0x000107c31578();
    lVar23 = *(long *)(puVar11 + 0x10);
    lVar24 = lVar23;
    _strlen(lVar23);
    pppppbVar12 = pppppbVar14;
    FUN_10bcedcb0(pppppbVar14,lVar23,lVar24);
    if (pppppbVar12 != (byte *****)0x0) break;
    func_0x0001088914a0(auStack_170,&UNK_10f835978);
    func_0x00010bd25258();
    FUN_10bdb2a88(&ppppbStack_198);
    func_0x00010bd252a0();
LAB_10bd21c3c:
    iVar15 = 0x137fe1e0;
    ___cxa_guard_acquire();
    pppppbVar12 = pppppbVar14;
    if (iVar15 != 0) {
      ___cxa_atexit(&UNK_10ae7c978,0x1137fe1d8,0x100000000);
      ___cxa_guard_release(0x1137fe1e0);
    }
  }
  pppppbVar14 = pppppbVar12;
  func_0x000107c3a8e8();
  func_0x00010bd25764();
  uStack_178 = *(undefined8 *)(puVar11 + 0x40);
  plStack_190 = *(long **)(puVar11 + 0x48);
  uStack_180 = *(undefined8 *)(puVar11 + 0x38);
  uStack_188 = *(undefined8 *)(puVar11 + 0x30);
  ppppbStack_198 = (byte ****)pppppbVar14;
  while ((long)puVar21 < (long)*(int *)((long)pppppbVar12 + 0x3c)) {
    pppppbVar14 = &ppppbStack_198;
    FUN_10bd23694(pppppbVar14,(long)pppppbVar12[0xc] + lVar23);
    func_0x00010bd25758();
  }
  uVar1 = *(uint *)(pppppbVar12 + 8);
  for (lVar24 = 0; (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 0x58 - lVar24 != 0;
      lVar24 = lVar24 + 0x58) {
    *plStack_190 = (long)pppppbVar12[0xd] + lVar24;
    plStack_190 = plStack_190 + 1;
  }
  if (*(char *)((long)pppppbVar12[0x10] + 0xa3) == '\x01') {
    uVar1 = *(uint *)((long)pppppbVar12 + 0x44);
    for (uVar16 = 0; uVar16 != (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar16 = uVar16 + 1) {
      *(byte *****)(*(long *)(puVar11 + 0x50) + uVar16 * 8) = pppppbVar12[0xe] + uVar16 * 8;
    }
  }
  return pppppbVar14;
}



/* Entry: 10bd21a50; end: 10bd21a93;  */

void FUN_10bd21a50(long param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x22;
  int *piStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  uVar7 = *(ulong *)(param_1 + 0x10);
  uVar5 = uVar7;
  _strlen(uVar7);
  func_0x00010bcfd8c8(uVar7,uVar5);
  if ((uVar7 & 1) == 0) {
    FUN_10bcedc88();
  }
  piVar4 = (int *)(ulong)*(byte *)(param_1 + 1);
  piVar3 = piVar4;
  if ((bRam00000001137fe1e0 & 1) == 0) goto LAB_10bd21c3c;
  while( true ) {
    piVar4 = (int *)0x1137fe1d8;
    func_0x000107c2b9f0(0x1137fe1d8);
    func_0x000107c316b4(param_1);
    func_0x000107c2b9fc();
    if ((int)piVar3 != 0) {
      func_0x000107c3a8e4();
      for (; piVar3 != (int *)0x1137fe1d8; piVar3 = piVar3 + 2) {
        lVar6 = *(long *)(*(long *)(param_1 + 0x20) + (long)piVar3);
        if ((lVar6 != 0) && (piVar4 = *(int **)(lVar6 + 0x18), *piVar4 != 0xdd)) {
          FUN_10bd23868(piVar4,*(long *)(param_1 + 0x20) + (long)piVar3,1);
        }
      }
    }
    func_0x000107c31578();
    lVar8 = *(long *)(param_1 + 0x10);
    lVar6 = lVar8;
    _strlen(lVar8);
    piVar3 = piVar4;
    FUN_10bcedcb0(piVar4,lVar8,lVar6);
    if (piVar3 != (int *)0x0) break;
    func_0x0001088914a0(auStack_40,&UNK_10f835978);
    func_0x00010bd25258();
    FUN_10bdb2a88(&piStack_68);
    func_0x00010bd252a0();
LAB_10bd21c3c:
    iVar2 = 0x137fe1e0;
    ___cxa_guard_acquire();
    piVar3 = piVar4;
    if (iVar2 != 0) {
      ___cxa_atexit(&UNK_10ae7c978,0x1137fe1d8,0x100000000);
      ___cxa_guard_release(0x1137fe1e0);
    }
  }
  piVar4 = piVar3;
  func_0x000107c3a8e8();
  func_0x00010bd25764();
  uStack_48 = *(undefined8 *)(param_1 + 0x40);
  plStack_60 = *(long **)(param_1 + 0x48);
  uStack_50 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = *(undefined8 *)(param_1 + 0x30);
  piStack_68 = piVar4;
  while (unaff_x22 < piVar3[0xf]) {
    FUN_10bd23694(&piStack_68,*(long *)(piVar3 + 0x18) + lVar8);
    func_0x00010bd25758();
  }
  uVar1 = piVar3[0x10];
  for (lVar6 = 0; (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 0x58 - lVar6 != 0;
      lVar6 = lVar6 + 0x58) {
    *plStack_60 = *(long *)(piVar3 + 0x1a) + lVar6;
    plStack_60 = plStack_60 + 1;
  }
  if (*(char *)(*(long *)(piVar3 + 0x20) + 0xa3) == '\x01') {
    uVar1 = piVar3[0x11];
    for (uVar5 = 0; uVar5 != (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar5 = uVar5 + 1) {
      *(ulong *)(*(long *)(param_1 + 0x50) + uVar5 * 8) = *(long *)(piVar3 + 0x1c) + uVar5 * 0x40;
    }
  }
  return;
}



/* Entry: 10bd21a94; end: 10bd21c77;  */

void FUN_10bd21a94(long param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long unaff_x22;
  int *piStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  piVar3 = param_2;
  if ((bRam00000001137fe1e0 & 1) == 0) goto LAB_10bd21c3c;
  while( true ) {
    param_2 = (int *)0x1137fe1d8;
    func_0x000107c2b9f0(0x1137fe1d8);
    func_0x000107c316b4(param_1);
    func_0x000107c2b9fc();
    if ((int)piVar3 != 0) {
      func_0x000107c3a8e4();
      for (; piVar3 != (int *)0x1137fe1d8; piVar3 = piVar3 + 2) {
        lVar6 = *(long *)(*(long *)(param_1 + 0x20) + (long)piVar3);
        if ((lVar6 != 0) && (param_2 = *(int **)(lVar6 + 0x18), *param_2 != 0xdd)) {
          FUN_10bd23868(param_2,*(long *)(param_1 + 0x20) + (long)piVar3,1);
        }
      }
    }
    func_0x000107c31578();
    lVar7 = *(long *)(param_1 + 0x10);
    lVar6 = lVar7;
    _strlen(lVar7);
    piVar3 = param_2;
    FUN_10bcedcb0(param_2,lVar7,lVar6);
    if (piVar3 != (int *)0x0) break;
    func_0x0001088914a0(auStack_40,&UNK_10f835978);
    func_0x00010bd25258();
    FUN_10bdb2a88(&piStack_68);
    func_0x00010bd252a0();
LAB_10bd21c3c:
    iVar2 = 0x137fe1e0;
    ___cxa_guard_acquire();
    piVar3 = param_2;
    if (iVar2 != 0) {
      ___cxa_atexit(&UNK_10ae7c978,0x1137fe1d8,0x100000000);
      ___cxa_guard_release(0x1137fe1e0);
    }
  }
  piVar4 = piVar3;
  func_0x000107c3a8e8();
  func_0x00010bd25764();
  uStack_48 = *(undefined8 *)(param_1 + 0x40);
  plStack_60 = *(long **)(param_1 + 0x48);
  uStack_50 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = *(undefined8 *)(param_1 + 0x30);
  piStack_68 = piVar4;
  while (unaff_x22 < piVar3[0xf]) {
    FUN_10bd23694(&piStack_68,*(long *)(piVar3 + 0x18) + lVar7);
    func_0x00010bd25758();
  }
  uVar1 = piVar3[0x10];
  for (lVar6 = 0; (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 0x58 - lVar6 != 0;
      lVar6 = lVar6 + 0x58) {
    *plStack_60 = *(long *)(piVar3 + 0x1a) + lVar6;
    plStack_60 = plStack_60 + 1;
  }
  if (*(char *)(*(long *)(piVar3 + 0x20) + 0xa3) == '\x01') {
    uVar1 = piVar3[0x11];
    for (uVar5 = 0; uVar5 != (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar5 = uVar5 + 1) {
      *(ulong *)(*(long *)(param_1 + 0x50) + uVar5 * 8) = *(long *)(piVar3 + 0x1c) + uVar5 * 0x40;
    }
  }
  return;
}



/* Entry: 10bd21c78; end: 10bd21cab;  */

void FUN_10bd21c78(long param_1)

{
  long lStack_18;
  
  if (**(int **)(param_1 + 0x18) != 0xdd) {
    lStack_18 = param_1;
    func_0x00010bd24a38(*(int **)(param_1 + 0x18),&lStack_18);
  }
  return;
}


