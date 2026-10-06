/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10735cbac; end: 10735cc03;  */

void FUN_10735cbac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x10;
    func_0x00010735ce54();
  }
  return;
}



/* Entry: 10735cc04; end: 10735cc23;  */

void FUN_10735cc04(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_10735cc24(param_1,param_2,&uStack_11);
  return;
}



/* Entry: 10735cc24; end: 10735ccd7;  */

void FUN_10735cc24(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 *unaff_x19;
  long lVar2;
  uint unaff_w22;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_2;
  func_0x000107360438();
  FUN_10735ccd8();
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 != 0) {
    func_0x0001073602a8();
    FUN_10735cd00();
    FUN_10735cd68();
    lStack_40 = param_2;
    lStack_38 = lVar1;
    while (lStack_40 != 0) {
      func_0x000107360938();
      func_0x000107360564();
      func_0x00010735fdb8(unaff_w22 & 0x7f);
      func_0x00010735cd54();
      FUN_10735ce00(&lStack_40);
    }
    unaff_x19[3] = lVar2;
    func_0x000107360734(*unaff_x19);
  }
  return;
}



/* Entry: 10735ccd8; end: 10735ccff;  */

void FUN_10735ccd8(undefined8 param_1,long param_2)

{
  func_0x0001073601d8();
  if (param_2 != 0) {
    func_0x0001073607f4();
    func_0x00010726d624();
  }
  return;
}



/* Entry: 10735cd00; end: 10735cd67;  */

void FUN_10735cd00(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  
  if (param_2 <= (ulong)(*(long *)(*param_1 + -8) + param_1[3])) {
    return;
  }
  if (param_2 == 7) {
    lVar1 = 8;
  }
  else {
    lVar1 = (long)(param_2 - 1) / 7 + param_2;
  }
  uVar2 = 0xffffffffffffffff >> (LZCOUNT(lVar1) & 0x3fU);
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  func_0x000107274f98(param_1,uVar2);
  func_0x00010726d624();
  for (lVar1 = 0; unaff_x23 != lVar1; lVar1 = lVar1 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar1)) {
      func_0x00010727575c();
      func_0x0001072749d4();
      func_0x0001072742a4(unaff_w21 & 0x7f);
      func_0x000107275324();
      func_0x00010726d65c();
    }
  }
  if (unaff_x23 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
  return;
}



/* Entry: 10735cd68; end: 10735cd8f;  */

undefined1  [16] FUN_10735cd68(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  FUN_10735cd90(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10735cd90; end: 10735cdc7;  */

void FUN_10735cd90(undefined8 *param_1)

{
  char *pcVar1;
  char *extraout_x8;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    func_0x000107360344();
    pcVar1 = extraout_x8;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 10735cdc8; end: 10735cdff;  */

void FUN_10735cdc8(long param_1)

{
  long unaff_x20;
  
  func_0x0001009eba74();
  func_0x000104c2fe00();
  func_0x000107277f0c(param_1 + 0x38,unaff_x20 + 0x38);
  return;
}



/* Entry: 10735ce00; end: 10735ce77;  */

long * FUN_10735ce00(long *param_1)

{
  param_1[1] = param_1[1] + 0x50;
  *param_1 = *param_1 + 1;
  FUN_10735cd90();
  return param_1;
}



/* Entry: 10735ce78; end: 10735ceb3;  */

undefined8 * FUN_10735ce78(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  
  if (*(int *)(param_1 + 0x40) == 1) {
    return (undefined8 *)(param_1 + 8);
  }
  func_0x00010563ab98();
  if (*(int *)(param_1 + 0x40) == 0) {
    return (undefined8 *)(param_1 + 8);
  }
  func_0x00010563ab98();
  func_0x00010736005c();
  puVar1 = param_2;
  FUN_10731e678();
  puVar4 = param_2;
  while (puVar5 = puVar1, puVar4 != (undefined8 *)0x0) {
    puStack_80 = puVar4;
    puStack_78 = puVar5;
    FUN_10731e6dc(&puStack_80);
    puVar1 = puStack_78;
    puVar4 = puStack_80;
    param_2 = unaff_x20;
    puVar2 = puVar5;
    FUN_107359ce0();
    if (((ulong)puVar2 & 1) != 0) {
      puVar2 = (undefined8 *)(unaff_x20[1] + (long)param_2 * 0xc);
      uVar3 = *puVar5;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
      *puVar2 = uVar3;
      param_2 = unaff_x19;
      func_0x00010ae6cb48();
    }
  }
  return param_2;
}



/* Entry: 10735ceb4; end: 10735cf47;  */

void FUN_10735ceb4(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 *puVar5;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  func_0x00010736005c();
  puVar2 = param_2;
  FUN_10731e678();
  while (puVar5 = puVar2, param_2 != (undefined8 *)0x0) {
    puStack_60 = param_2;
    puStack_58 = puVar5;
    FUN_10731e6dc(&puStack_60);
    puVar2 = puStack_58;
    param_2 = puStack_60;
    lVar1 = unaff_x20;
    puVar3 = puVar5;
    FUN_107359ce0();
    if (((ulong)puVar3 & 1) != 0) {
      puVar3 = (undefined8 *)(*(long *)(unaff_x20 + 8) + lVar1 * 0xc);
      uVar4 = *puVar5;
      *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar5 + 1);
      *puVar3 = uVar4;
      func_0x00010ae6cb48();
    }
  }
  return;
}



/* Entry: 10735cf48; end: 10735d023;  */

void FUN_10735cf48(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  ulong extraout_x8;
  long *unaff_x19;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint6 uVar10;
  undefined8 uVar11;
  
  func_0x000107360cb0();
  func_0x0001009eba74();
  lVar6 = 0;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_1;
  uVar5 = uVar7 >> 0xc ^ param_3 >> 7;
  bVar3 = (byte)param_3;
  uVar10 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar5 = uVar5 & uVar2;
    uVar11 = *(undefined8 *)(uVar7 + uVar5);
    for (uVar8 = CONCAT17(-((byte)((ulong)uVar11 >> 0x38) == (bVar3 & 0x7f)),
                          CONCAT16(-((byte)((ulong)uVar11 >> 0x30) == (bVar3 & 0x7f)),
                                   CONCAT15(-((char)((ulong)uVar11 >> 0x28) ==
                                             (char)(uVar10 >> 0x28)),
                                            CONCAT14(-((char)((ulong)uVar11 >> 0x20) ==
                                                      (char)(uVar10 >> 0x20)),
                                                     CONCAT13(-((char)((ulong)uVar11 >> 0x18) ==
                                                               (char)(uVar10 >> 0x18)),
                                                              CONCAT12(-((char)((ulong)uVar11 >>
                                                                               0x10) ==
                                                                        (char)(uVar10 >> 0x10)),
                                                                       CONCAT11(-((char)((ulong)
                                                  uVar11 >> 8) == (char)(uVar10 >> 8)),
                                                  -((char)uVar11 == (char)uVar10)))))))) &
                 0x8080808080808080; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
      uVar9 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar5 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & uVar2;
      iVar4 = (int)&stack0xffffffffffffff70;
      FUN_10735aef8(&stack0xffffffffffffff70,uVar1 + uVar9 * 0x48);
      if (iVar4 != 0) {
        lVar6 = *unaff_x19 + uVar9;
        goto LAB_10735cffc;
      }
    }
    func_0x0001073603b0();
    if ((extraout_x8 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar5 = lVar6 + uVar5;
  }
  lVar6 = 0;
LAB_10735cffc:
  func_0x000107360c80(lVar6);
  return;
}



/* Entry: 10735d024; end: 10735d05b;  */

void FUN_10735d024(undefined8 *param_1)

{
  char *pcVar1;
  char *extraout_x8;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    func_0x000107360344();
    pcVar1 = extraout_x8;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 10735d05c; end: 10735d0eb;  */

undefined1  [16] FUN_10735d05c(ulong param_1)

{
  undefined8 uVar1;
  ulong extraout_x8;
  ulong unaff_x22;
  ulong unaff_x28;
  undefined1 auVar2 [16];
  
  func_0x0001009eba74();
  func_0x000107360078();
  func_0x00010727e7fc();
  func_0x00010735fef4();
  do {
    func_0x0001073601b0();
    for (; unaff_x28 != 0; unaff_x28 = unaff_x28 - 1 & unaff_x28) {
      func_0x0001073604f0();
      func_0x000104c32db4();
      if ((param_1 & 1) != 0) {
        uVar1 = 0;
        goto LAB_10735d0cc;
      }
    }
    func_0x0001073603b0();
  } while ((extraout_x8 & 1) == 0);
  func_0x00010736042c();
  FUN_10735d0ec();
  uVar1 = 1;
  unaff_x22 = param_1;
LAB_10735d0cc:
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = unaff_x22;
  return auVar2;
}



/* Entry: 10735d0ec; end: 10735d19b;  */

void FUN_10735d0ec(long *param_1,long param_2)

{
  bool bVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x22;
  long unaff_x23;
  undefined8 uStack_28;
  
  func_0x00010735fd4c();
  func_0x000100061de0();
  lVar4 = *unaff_x19;
  if ((*(long *)(lVar4 + -8) == 0) && (*(char *)(lVar4 + (long)param_1) != -2)) {
    bVar1 = 8 < (ulong)unaff_x19[2];
    if ((bVar1) && (func_0x000107360b00(), bVar1)) {
      func_0x0001073609f0();
    }
    else {
      param_1 = unaff_x19;
      FUN_10735d19c();
    }
    func_0x0001073602a8();
    func_0x000100061de0();
    lVar4 = *unaff_x19;
  }
  func_0x0001073606b4(lVar4);
  uVar2 = *(char *)(extraout_x8 + (long)param_1) == -0x80;
  func_0x00010735ff1c();
  func_0x00010735fd20(uStack_28);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073604b0();
  for (lVar4 = 0; unaff_x23 != lVar4; lVar4 = lVar4 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar4)) {
      lVar3 = param_2;
      func_0x00010727e7fc(param_2);
      func_0x00010736042c();
      func_0x000100061de0();
      func_0x00010735fdb8((uint)lVar3 & 0x7f);
      func_0x0001073605b8();
    }
    param_2 = param_2 + 0x48;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10735d19c; end: 10735d217;  */

void FUN_10735d19c(void)

{
  long lVar1;
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long lVar2;
  
  func_0x0001073604b0();
  for (lVar2 = 0; unaff_x23 != lVar2; lVar2 = lVar2 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar2)) {
      lVar1 = unaff_x20;
      func_0x00010727e7fc(unaff_x20);
      func_0x00010736042c();
      func_0x000100061de0();
      func_0x00010735fdb8((uint)lVar1 & 0x7f);
      func_0x0001073605b8();
    }
    unaff_x20 = unaff_x20 + 0x48;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10735d218; end: 10735d223;  */

ulong FUN_10735d218(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  ulong extraout_x8;
  ulong extraout_x10;
  
  ppuVar1 = &PTR_LOOP_110c8acd8;
  lVar2 = param_2;
  func_0x000107264c5c(param_2);
  func_0x000100062d4c(&PTR_LOOP_110c8acd8,param_2);
  func_0x000100061c28((long)ppuVar1 + lVar2);
  return extraout_x8 ^ extraout_x10;
}



/* Entry: 10735d224; end: 10735d2b7;  */

void FUN_10735d224(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x00010736005c();
  uVar2 = param_2;
  func_0x0001072621e0();
  while (param_2 != 0) {
    uVar3 = uVar2;
    FUN_10735d2b8(param_2,uVar2,1);
    func_0x00010726297c();
    uVar1 = uVar2 & 1;
    uVar2 = uVar3;
    if (uVar1 != 0) {
      func_0x0001072621bc();
      FUN_10735af8c();
    }
  }
  return;
}



/* Entry: 10735d2b8; end: 10735d2df;  */

undefined1  [16] FUN_10735d2b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  FUN_10735d2e0(&uStack_20,param_3);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10735d2e0; end: 10735d3ab;  */

void FUN_10735d2e0(void)

{
  long unaff_x19;
  
  func_0x00010736005c();
  while (0 < unaff_x19) {
    func_0x000107262260();
    unaff_x19 = unaff_x19 + -1;
  }
  return;
}



/* Entry: 10735d3ac; end: 10735d3c3;  */

void FUN_10735d3ac(long *param_1)

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



/* Entry: 10735d3c4; end: 10735d487;  */

long FUN_10735d3c4(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 in_ZR;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong unaff_x23;
  long *plVar7;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x00010784b234();
    func_0x000107360c4c();
    if ((bool)in_ZR) {
      plVar7 = (long *)((ulong)plVar2 & unaff_x23);
    }
    else {
      plVar7 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar2 != plVar4) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x00010726b840(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & unaff_x23) == 0) {
        plVar4 = (long *)((ulong)plVar4 & unaff_x23);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar7);
  }
  return 0;
}



/* Entry: 10735d488; end: 10735d4a7;  */

void FUN_10735d488(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_10735d4a8(&uStack_18);
  return;
}



/* Entry: 10735d4a8; end: 10735d4af;  */

void FUN_10735d4a8(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_2;
  func_0x000107360450(param_1,uVar1,param_2);
  if ((uVar1 & 1) != 0) {
    func_0x0001073603f0();
  }
  func_0x0001073604d0();
  return;
}



/* Entry: 10735d4b0; end: 10735d4d7;  */

void FUN_10735d4b0(undefined8 param_1,uint param_2)

{
  func_0x000107360450();
  if ((param_2 & 1) != 0) {
    func_0x0001073603f0();
  }
  func_0x0001073604d0();
  return;
}



/* Entry: 10735d4d8; end: 10735d4eb;  */

void FUN_10735d4d8(void)

{
  FUN_10735d4ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10735d4ec; end: 10735d587;  */

undefined8 * FUN_10735d4ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a4ba8;
  func_0x00010735d528(param_1 + 0x16);
  func_0x000107276ba4(param_1 + 1);
  return param_1;
}



/* Entry: 10735d588; end: 10735d5d3;  */

long FUN_10735d588(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x10);
  lVar1 = param_1;
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 3);
    plVar2 = (long *)*plVar2;
    FUN_10731d79c();
    func_0x000107360134();
  }
  func_0x00010736058c();
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10735d5d4; end: 10735d627;  */

void FUN_10735d5d4(long param_1)

{
  func_0x0001009eba28();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10735d628; end: 10735d6a3;  */

undefined1 * FUN_10735d628(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  func_0x00010735fda8();
  uStack_28 = extraout_x8;
  FUN_10735d6a4(auStack_40,1);
  FUN_10735d6f4(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x00010735d768();
  func_0x00010735fd20(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001073600bc();
  func_0x00010735d768();
  func_0x00010736001c();
  *(undefined8 *)(puVar2 + 8) = param_3;
  puVar3 = puVar2;
  FUN_10735d6cc();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 10735d6a4; end: 10735d6cb;  */

long FUN_10735d6a4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10735d6cc();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10735d6cc; end: 10735d6f3;  */

undefined8 * FUN_10735d6cc(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x1e1e1e1e1e1e1e2) {
    puVar1 = (undefined8 *)(param_2 * 0x88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109a4be8;
  param_1[1] = 0;
  func_0x00010726933c(param_1 + 3);
  return param_1;
}



/* Entry: 10735d6f4; end: 10735d733;  */

undefined8 * FUN_10735d6f4(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109a4be8;
  param_1[1] = 0;
  func_0x00010726933c(param_1 + 3);
  return param_1;
}



/* Entry: 10735d734; end: 10735d737;  */

void FUN_10735d734(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a4be8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10735d738; end: 10735d74b;  */

void FUN_10735d738(void)

{
  func_0x00010735d758();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10735d74c; end: 10735d777;  */

undefined8 FUN_10735d74c(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000104c319e0(param_1 + 0x48);
  func_0x000104c335c0(param_1 + 0x38);
  func_0x000104c3463c(param_1 + 0x18);
  func_0x000104c31c04();
  return unaff_x19;
}



/* Entry: 10735d778; end: 10735d7c7;  */

void FUN_10735d778(void)

{
  undefined1 in_ZR;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  func_0x00010735fd4c();
  func_0x000104c318bc();
  func_0x00010736057c(auStack_60);
  func_0x00010736094c();
  func_0x000104c2f714(auStack_60);
  func_0x00010735fd20(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_10735d7ec();
  return;
}



/* Entry: 10735d7c8; end: 10735d7eb;  */

void FUN_10735d7c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_21;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_10735d7ec(param_1,&uStack_20,&uStack_21);
  return;
}



/* Entry: 10735d7ec; end: 10735d827;  */

void FUN_10735d7ec(undefined8 *param_1)

{
  undefined8 *extraout_x8;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar1;
  
  func_0x00010736005c();
  func_0x000107360498();
  *param_1 = &PTR_FUN_1109a4c38;
  param_1[1] = unaff_x20;
  uVar1 = *unaff_x19;
  param_1[3] = unaff_x19[1];
  param_1[2] = uVar1;
  *extraout_x8 = param_1;
  return;
}



/* Entry: 10735d828; end: 10735d84b;  */

void FUN_10735d828(void)

{
  return;
}



/* Entry: 10735d84c; end: 10735da57;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x00010735d95c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10735d84c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 uVar5;
  undefined1 uVar6;
  ulong extraout_x8;
  long lVar7;
  long extraout_x8_00;
  long *plVar8;
  ulong uVar9;
  long *unaff_x19;
  long unaff_x20;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_x26;
  long *in_stack_00000008;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  func_0x000107360cc8();
  func_0x0001009eba74();
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_4 + 0x20);
  FUN_10735da58();
  plVar10 = (long *)(unaff_x20 + 0x10);
  plVar1 = unaff_x19 + 2;
LAB_10735d888:
  do {
    plVar10 = (long *)*plVar10;
    if (plVar10 == (long *)0x0) {
      return;
    }
    uVar2 = *(uint *)(plVar10 + 2);
    uVar13 = (ulong)uVar2;
    uVar12 = unaff_x19[1];
    if (uVar12 != 0) {
      func_0x000107360b34();
      uVar11 = (uint)uVar12;
      if ((bool)in_ZR) {
        unaff_x26 = (ulong)(uVar11 - 1 & uVar2);
        in_ZR = true;
      }
      else {
        in_NG = (long)(uVar12 - uVar13) < 0;
        in_ZR = uVar12 == uVar13;
        unaff_x26 = uVar13;
        if (uVar12 <= uVar13) {
          uVar3 = 0;
          if (uVar11 != 0) {
            uVar3 = uVar2 / uVar11;
          }
          unaff_x26 = (ulong)(uVar2 - uVar3 * uVar11);
        }
      }
      plVar8 = *(long **)(*unaff_x19 + unaff_x26 * 8);
      if (plVar8 != (long *)0x0) {
        do {
          while( true ) {
            plVar8 = (long *)*plVar8;
            if (plVar8 == (long *)0x0) goto LAB_10735d91c;
            uVar9 = plVar8[1];
            if (uVar9 != uVar13) break;
            in_NG = (int)(*(uint *)(plVar8 + 2) - uVar2) < 0;
            in_ZR = *(uint *)(plVar8 + 2) == uVar2;
            if ((bool)in_ZR) goto LAB_10735d888;
          }
          if ((uVar12 & extraout_x8) == 0) {
            uVar9 = uVar9 & extraout_x8;
          }
          else if (uVar12 <= uVar9) {
            uVar4 = 0;
            if (uVar12 != 0) {
              uVar4 = uVar9 / uVar12;
            }
            uVar9 = uVar9 - uVar4 * uVar12;
          }
          in_NG = (long)(uVar9 - unaff_x26) < 0;
          in_ZR = uVar9 == unaff_x26;
        } while ((bool)in_ZR);
      }
    }
LAB_10735d91c:
    plVar8 = (long *)0x88;
    __Znwm();
    in_stack_00000018 = 1;
    *plVar8 = 0;
    plVar8[1] = uVar13;
    *(uint *)(plVar8 + 2) = uVar2;
    in_stack_00000008 = plVar8;
    in_stack_00000010 = plVar1;
    func_0x000104c2fe00(plVar8 + 3,plVar10 + 3);
    func_0x000104c2fe00(plVar8 + 10,plVar10 + 10);
    func_0x00010735fe38();
    if (uVar12 == 0) {
LAB_10735d964:
      uVar5 = (long)(uVar12 - 3) < 0;
      uVar6 = uVar12 == 3;
      func_0x00010735fd34(uVar12 << 1);
      FUN_10735da58();
      uVar12 = unaff_x19[1];
      func_0x000107360b34();
      if ((bool)uVar6) {
        in_ZR = 1;
        unaff_x26 = (ulong)((int)uVar12 - 1U & uVar2);
      }
      else {
        uVar5 = (long)(uVar12 - uVar13) < 0;
        in_ZR = uVar12 == uVar13;
        unaff_x26 = uVar13;
        if (uVar12 <= uVar13) {
          uVar9 = 0;
          if (uVar12 != 0) {
            uVar9 = uVar13 / uVar12;
          }
          unaff_x26 = uVar13 - uVar9 * uVar12;
        }
      }
    }
    else {
      func_0x00010736013c(param_1,param_2,(float)uVar12);
      uVar5 = 0;
      if ((bool)in_NG) goto LAB_10735d964;
    }
    in_NG = uVar5;
    lVar7 = *unaff_x19;
    if (*(long *)(lVar7 + unaff_x26 * 8) == 0) {
      *plVar8 = *plVar1;
      *plVar1 = (long)plVar8;
      *(long **)(lVar7 + unaff_x26 * 8) = plVar1;
      if (*plVar8 != 0) {
        uVar13 = *(ulong *)(*plVar8 + 8);
        if ((uVar12 & uVar12 - 1) == 0) {
          uVar13 = uVar13 & uVar12 - 1;
          in_ZR = true;
          in_NG = false;
        }
        else {
          in_NG = (long)(uVar13 - uVar12) < 0;
          in_ZR = uVar13 == uVar12;
          if (uVar12 <= uVar13) {
            uVar9 = 0;
            if (uVar12 != 0) {
              uVar9 = uVar13 / uVar12;
            }
            uVar13 = uVar13 - uVar9 * uVar12;
          }
        }
        *(long **)(lVar7 + uVar13 * 8) = plVar8;
      }
    }
    else {
      func_0x000107360328();
    }
    in_stack_00000008 = (long *)0x0;
    func_0x000107360240();
    unaff_x19[3] = extraout_x8_00;
    FUN_10735db74(&stack0x00000008);
  } while( true );
}



/* Entry: 10735da58; end: 10735db5b;  */

void FUN_10735da58(long *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long *extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  long *plVar3;
  long *extraout_x9_02;
  ulong extraout_x10;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar4;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  long *extraout_x13;
  long *extraout_x13_00;
  long *plVar5;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x00010736060c();
  if ((bool)in_ZR) {
    unaff_x19 = (long *)0x2;
  }
  else {
    func_0x000107360624();
    if (!(bool)in_ZR) {
      func_0x0001073603a8();
      unaff_x19 = param_1;
    }
  }
  func_0x000107360640();
  if (!(bool)in_CY || (bool)in_ZR) {
    if ((bool)in_CY) {
      return;
    }
    func_0x00010735fd8c();
    if (((bool)in_CY) && (func_0x0001073603cc(), extraout_x8_01 == 0)) {
      func_0x00010735fce0();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x000107360068();
    if ((bool)in_CY) {
      return;
    }
    if (unaff_x19 == (long *)0x0) {
      func_0x0001073604c4();
      FUN_10735db5c();
      *(undefined8 *)(unaff_x20 + 8) = 0;
      return;
    }
  }
  if ((ulong)unaff_x19 >> 0x3d == 0) {
    func_0x0001073605c8();
    func_0x0001073603d8();
    FUN_10735db5c();
    func_0x00010735ff44();
    plVar3 = extraout_x9;
    while (uVar1 = unaff_x19 == plVar3, !(bool)uVar1) {
      func_0x000107360234();
      plVar3 = extraout_x9_00;
    }
    if (*(long *)(unaff_x20 + 0x10) != 0) {
      func_0x00010735fdf0();
      func_0x00010735fddc();
      plVar3 = extraout_x9_01;
      while (*plVar3 != 0) {
        func_0x0001073603c0();
        lVar2 = extraout_x8;
        plVar3 = extraout_x12;
        plVar4 = extraout_x11;
        if ((bool)uVar1) {
          plVar5 = (long *)((ulong)extraout_x13 & extraout_x10);
        }
        else {
          plVar5 = extraout_x13;
          if (unaff_x19 <= extraout_x13) {
            func_0x000107360420();
            lVar2 = extraout_x8_00;
            plVar4 = extraout_x11_00;
            plVar3 = extraout_x12_00;
            plVar5 = extraout_x13_00;
          }
        }
        uVar1 = plVar5 == plVar4;
        if (!(bool)uVar1) {
          if (*(long *)(lVar2 + (long)plVar5 * 8) == 0) {
            func_0x000107360414();
            plVar3 = extraout_x12_01;
          }
          else {
            func_0x00010735fd00();
            plVar3 = extraout_x9_02;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar2 = *param_1;
  *param_1 = param_2;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10735db5c; end: 10735db73;  */

void FUN_10735db5c(long *param_1,long param_2)

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



/* Entry: 10735db74; end: 10735dbc7;  */

void FUN_10735db74(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x000107360098();
  if (unaff_x20 != 0) {
    func_0x000107360658();
    if ((bool)in_ZR) {
      FUN_10731d79c(unaff_x20 + 0x18);
    }
    func_0x000107360134();
  }
  return;
}



/* Entry: 10735dbc8; end: 10735dbdb;  */

void FUN_10735dbc8(void)

{
  func_0x00010735dba8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10735dbdc; end: 10735dc13;  */

undefined8 FUN_10735dbdc(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x80;
  __Znwm(0x80);
  FUN_10735df7c();
  return uVar1;
}



/* Entry: 10735dc14; end: 10735dc37;  */

void FUN_10735dc14(long param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001009eba74(param_2,param_1 + 8);
  *param_2 = &PTR_SUB_1109a4c78;
  func_0x0001072c0298(param_2 + 1);
  func_0x000104c2fe00(unaff_x19 + 0x18,unaff_x20 + 0x10);
  FUN_10735d84c(param_2 + 10,unaff_x20 + 0x48);
  *(undefined1 *)(unaff_x19 + 0x78) = *(undefined1 *)(unaff_x20 + 0x70);
  return;
}



/* Entry: 10735dc38; end: 10735defb;  */

void FUN_10735dc38(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  int extraout_w10;
  long *unaff_x19;
  long unaff_x20;
  long lVar4;
  long *plVar5;
  undefined1 auStack_248 [20];
  undefined1 auStack_234 [2];
  undefined2 uStack_232;
  undefined4 uStack_228;
  undefined1 uStack_224;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined1 auStack_208 [56];
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined1 uStack_1c0;
  undefined1 auStack_158 [16];
  undefined8 *puStack_148;
  ulong auStack_140 [7];
  undefined1 uStack_108;
  undefined1 auStack_100 [4];
  undefined1 uStack_fc;
  undefined4 uStack_f4;
  undefined8 uStack_10;
  
  func_0x000107360c98();
  func_0x00010736005c();
  func_0x00010735fda8();
  plVar5 = (long *)(param_1 + 0x60);
  uStack_10 = extraout_x8;
  while (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0) {
    lVar1 = (*(long **)(unaff_x20 + 8))[1];
    for (lVar4 = **(long **)(unaff_x20 + 8); in_ZR = lVar4 == lVar1, !(bool)in_ZR;
        lVar4 = lVar4 + 0x70) {
      auStack_234[0] = 0;
      uStack_224 = 0;
      func_0x00010787da4c(&puStack_1d0,lVar4,*(undefined1 *)(unaff_x20 + 0x78),1);
      puVar2 = puStack_1d0;
      puVar3 = puStack_1d0;
      func_0x000107882368();
      if ((int)puVar3 != 0) {
        func_0x0001078823ac(auStack_100,puVar2);
        auStack_234[0] = uStack_fc;
        uStack_232 = 0;
        uStack_228 = uStack_f4;
        uStack_224 = 1;
      }
      func_0x000107880dc4(&puStack_1d0);
      func_0x000100060964(auStack_208,&UNK_10f40acdb);
      FUN_10735dfec(&puStack_1d0,auStack_208,unaff_x20 + 0x18);
      func_0x000107268084(auStack_248,&puStack_1d0,1);
      func_0x000107296b84(auStack_158,1);
      puVar2 = puStack_148;
      puStack_148[1] = 0;
      puStack_148[2] = 0;
      *puStack_148 = &PTR_DAT_110998a58;
      func_0x0001072692d4(auStack_100,lVar4);
      auStack_140[0] = auStack_140[0] & 0xffffffffffffff00;
      uStack_108 = 0;
      func_0x000107296bf8(puVar2 + 3,auStack_100,plVar5 + 3,plVar5 + 10,auStack_140,auStack_234,
                          auStack_248);
      func_0x00010724b3d8(auStack_140);
      func_0x000107269e60(auStack_100);
      puStack_218 = puStack_148;
      puStack_148 = (undefined8 *)0x0;
      puStack_220 = puStack_218 + 3;
      func_0x000107297fb8(auStack_158);
      func_0x000104c335c0(auStack_248);
      func_0x0001072684c8(&puStack_1d0);
      func_0x000104c2f714(auStack_208);
      func_0x000100060b18(auStack_100,&PTR_DAT_1109a4cd8);
      puStack_1c8 = puStack_218;
      puStack_1d0 = puStack_220;
      if (puStack_218 != (undefined8 *)0x0) {
        do {
          func_0x00010736000c();
        } while (extraout_w10 != 0);
      }
      uStack_1c0 = 1;
      auStack_140[0] = 0;
      auStack_140[1] = 0;
      func_0x00010726acf0(auStack_140);
      (**(code **)(*unaff_x19 + 0x110))();
      func_0x00010726b264(auStack_140);
      func_0x00010736055c();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_100);
      func_0x0001072792b8();
    }
  }
  func_0x00010735fd20(uStack_10);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107880dc4(&puStack_1d0);
    func_0x00010736001c();
    func_0x00010736029c();
    func_0x000107360198();
    func_0x00010735feb8();
    return;
  }
  return;
}



/* Entry: 10735defc; end: 10735df23;  */

void FUN_10735defc(undefined8 param_1)

{
  func_0x00010736029c();
  func_0x000107360198(param_1,&PTR_DAT_1109a4ce8);
  func_0x00010735feb8();
  return;
}



/* Entry: 10735df24; end: 10735df7b;  */

undefined ** FUN_10735df24(void)

{
  return &PTR_DAT_1109a4ce8;
}



/* Entry: 10735df7c; end: 10735dfeb;  */

void FUN_10735df7c(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001009eba74();
  *param_1 = &PTR_SUB_1109a4c78;
  func_0x0001072c0298(param_1 + 1);
  func_0x000104c2fe00(unaff_x19 + 0x18,unaff_x20 + 0x10);
  FUN_10735d84c(param_1 + 10,unaff_x20 + 0x48);
  *(undefined1 *)(unaff_x19 + 0x78) = *(undefined1 *)(unaff_x20 + 0x70);
  return;
}



/* Entry: 10735dfec; end: 10735e03b;  */

void FUN_10735dfec(undefined8 param_1,undefined8 param_2,long param_3,long *param_4)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 *extraout_x8;
  long lVar7;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *extraout_x9;
  undefined1 *puVar8;
  undefined1 *extraout_x9_00;
  undefined1 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined1 *puVar12;
  long *plVar13;
  long *plVar14;
  long *unaff_x19;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  puVar8 = auStack_60;
  func_0x00010735fd4c();
  func_0x000104c318bc();
  func_0x00010736057c(auStack_60);
  func_0x00010736094c();
  func_0x000104c2f714();
  func_0x00010735fd20(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001009eba74();
  uVar1 = *(uint *)(param_3 + 0x10);
  puVar16 = (undefined1 *)(ulong)uVar1;
  *(undefined1 **)(param_3 + 8) = puVar16;
  puVar17 = *(undefined1 **)(puVar8 + 8);
  func_0x000107360148(*(undefined8 *)(puVar8 + 0x18));
  if ((puVar17 == (undefined1 *)0x0) ||
     (func_0x00010736013c(param_1,*(undefined4 *)(puVar8 + 0x20),(float)puVar17), (bool)in_NG)) {
    func_0x00010735fe64();
    bVar4 = (undefined1 *)0x2 < puVar17;
    bVar5 = puVar17 == (undefined1 *)0x3;
    func_0x00010735fd64();
    puVar15 = extraout_x8;
    if (!bVar4 || bVar5) {
      puVar15 = extraout_x9;
    }
    if (puVar15 + -1 == (undefined1 *)0x0) {
      puVar15 = (undefined1 *)0x2;
    }
    else if (((ulong)puVar15 & (ulong)(puVar15 + -1)) != 0) {
      __ZNSt3__112__next_primeEm();
      puVar17 = (undefined1 *)unaff_x19[1];
      puVar8 = puVar15;
    }
    if (puVar17 < puVar15) {
LAB_10735e0c0:
      FUN_10735e53c(puVar15);
      func_0x0001073607d0();
      FUN_10735e524();
      puVar8 = (undefined1 *)0x0;
      unaff_x19[1] = (long)puVar15;
      lVar7 = *unaff_x19;
      while (puVar15 != puVar8) {
        func_0x000107360234();
        lVar7 = extraout_x8_00;
        puVar8 = extraout_x9_00;
      }
      plVar10 = (long *)unaff_x19[2];
      puVar17 = puVar15;
      if (plVar10 != (long *)0x0) {
        puVar8 = (undefined1 *)plVar10[1];
        puVar9 = puVar15 + -1;
        if (((ulong)puVar15 & (ulong)puVar9) == 0) {
          puVar8 = (undefined1 *)((ulong)puVar8 & (ulong)puVar9);
        }
        else if (puVar15 <= puVar8) {
          uVar2 = 0;
          if (puVar15 != (undefined1 *)0x0) {
            uVar2 = (ulong)puVar8 / (ulong)puVar15;
          }
          puVar8 = puVar8 + -(uVar2 * (long)puVar15);
        }
        *(long **)(lVar7 + (long)puVar8 * 8) = unaff_x19 + 2;
        while (plVar11 = plVar10, plVar10 = (long *)*plVar11, plVar10 != (long *)0x0) {
          puVar12 = (undefined1 *)plVar10[1];
          if (((ulong)puVar15 & (ulong)puVar9) == 0) {
            puVar12 = (undefined1 *)((ulong)puVar12 & (ulong)puVar9);
          }
          else if (puVar15 <= puVar12) {
            uVar2 = 0;
            if (puVar15 != (undefined1 *)0x0) {
              uVar2 = (ulong)puVar12 / (ulong)puVar15;
            }
            puVar12 = puVar12 + -(uVar2 * (long)puVar15);
          }
          if (puVar12 != puVar8) {
            plVar14 = plVar10;
            if (*(long *)(lVar7 + (long)puVar12 * 8) == 0) {
              *(long **)(lVar7 + (long)puVar12 * 8) = plVar11;
              puVar8 = puVar12;
            }
            else {
              do {
                plVar13 = plVar14;
                plVar14 = (long *)*plVar13;
                if (plVar14 == (long *)0x0) break;
              } while (*(int *)(plVar10 + 2) == *(int *)(plVar14 + 2));
              *plVar11 = (long)plVar14;
              *plVar13 = **(long **)(lVar7 + (long)puVar12 * 8);
              **(long **)(lVar7 + (long)puVar12 * 8) = (long)plVar10;
              plVar10 = plVar11;
            }
          }
        }
      }
    }
    else if (puVar15 < puVar17) {
      func_0x00010735ff7c();
      if ((puVar17 < (undefined1 *)0x3) || (((ulong)puVar17 & (ulong)(puVar17 + -1)) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else {
        func_0x00010735fce0();
      }
      if (puVar15 <= puVar8) {
        puVar15 = puVar8;
      }
      if (puVar15 < puVar17) {
        if (puVar15 != (undefined1 *)0x0) goto LAB_10735e0c0;
        FUN_10735e524();
        unaff_x19[1] = 0;
        puVar17 = (undefined1 *)0x0;
      }
      else {
        puVar17 = (undefined1 *)unaff_x19[1];
      }
    }
  }
  puVar8 = puVar17 + -1;
  if (((ulong)puVar17 & (ulong)puVar8) == 0) {
    puVar15 = (undefined1 *)(ulong)((int)puVar17 - 1U & uVar1);
  }
  else {
    puVar15 = puVar16;
    if (puVar17 <= puVar16) {
      uVar2 = 0;
      if (puVar17 != (undefined1 *)0x0) {
        uVar2 = (ulong)puVar16 / (ulong)puVar17;
      }
      puVar15 = puVar16 + -(uVar2 * (long)puVar17);
    }
  }
  lVar7 = *unaff_x19;
  plVar10 = *(long **)(lVar7 + (long)puVar15 * 8);
  if (plVar10 == (long *)0x0) {
    plVar11 = (long *)0x0;
  }
  else {
    bVar5 = false;
    bVar3 = 0;
    do {
      plVar11 = plVar10;
      plVar10 = (long *)*plVar11;
      if (plVar10 == (long *)0x0) break;
      puVar9 = (undefined1 *)plVar10[1];
      if (((ulong)puVar17 & (ulong)puVar8) == 0) {
        puVar12 = (undefined1 *)((ulong)puVar9 & (ulong)puVar8);
      }
      else {
        puVar12 = puVar9;
        if (puVar17 <= puVar9) {
          uVar2 = 0;
          if (puVar17 != (undefined1 *)0x0) {
            uVar2 = (ulong)puVar9 / (ulong)puVar17;
          }
          puVar12 = puVar9 + -(uVar2 * (long)puVar17);
        }
      }
      if (puVar12 != puVar15) break;
      if (puVar9 == puVar16) {
        bVar4 = (int)plVar10[2] == (int)param_4[2];
      }
      else {
        bVar4 = false;
      }
      bVar6 = bVar4 != bVar5;
      bVar4 = (bool)(bVar3 & bVar6);
      bVar5 = (bool)(bVar5 | bVar6);
      bVar3 = bVar3 | bVar6;
    } while (!bVar4);
  }
  puVar16 = (undefined1 *)param_4[1];
  if (((ulong)puVar17 & (ulong)puVar8) == 0) {
    puVar16 = (undefined1 *)((ulong)puVar8 & (ulong)puVar16);
    if (plVar11 == (long *)0x0) goto LAB_10735e2ec;
LAB_10735e2b0:
    *param_4 = *plVar11;
    *plVar11 = (long)param_4;
    if (*param_4 == 0) goto LAB_10735e340;
    puVar15 = *(undefined1 **)(*param_4 + 8);
    if (((ulong)puVar17 & (ulong)puVar8) == 0) {
      puVar15 = (undefined1 *)((ulong)puVar15 & (ulong)puVar8);
    }
    else if (puVar17 <= puVar15) {
      uVar2 = 0;
      if (puVar17 != (undefined1 *)0x0) {
        uVar2 = (ulong)puVar15 / (ulong)puVar17;
      }
      puVar15 = puVar15 + -(uVar2 * (long)puVar17);
    }
    if (puVar15 == puVar16) goto LAB_10735e340;
  }
  else {
    if (puVar17 <= puVar16) {
      uVar2 = 0;
      if (puVar17 != (undefined1 *)0x0) {
        uVar2 = (ulong)puVar16 / (ulong)puVar17;
      }
      puVar16 = puVar16 + -(uVar2 * (long)puVar17);
    }
    if (plVar11 != (long *)0x0) goto LAB_10735e2b0;
LAB_10735e2ec:
    plVar10 = unaff_x19 + 2;
    *param_4 = *plVar10;
    *plVar10 = (long)param_4;
    *(long **)(lVar7 + (long)puVar16 * 8) = plVar10;
    if (*param_4 == 0) goto LAB_10735e340;
    puVar15 = *(undefined1 **)(*param_4 + 8);
    if (((ulong)puVar17 & (ulong)puVar8) == 0) {
      puVar15 = (undefined1 *)((ulong)puVar15 & (ulong)puVar8);
    }
    else if (puVar17 <= puVar15) {
      uVar2 = 0;
      if (puVar17 != (undefined1 *)0x0) {
        uVar2 = (ulong)puVar15 / (ulong)puVar17;
      }
      puVar15 = puVar15 + -(uVar2 * (long)puVar17);
    }
  }
  *(long **)(lVar7 + (long)puVar15 * 8) = param_4;
LAB_10735e340:
  func_0x000107360240();
  unaff_x19[3] = extraout_x8_01;
  return;
}



/* Entry: 10735e03c; end: 10735e393;  */

void FUN_10735e03c(undefined8 param_1,ulong param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  undefined1 in_NG;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ulong extraout_x8;
  long lVar7;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long *unaff_x19;
  long *unaff_x20;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  
  func_0x0001009eba74();
  uVar1 = *(uint *)(param_3 + 0x10);
  uVar16 = (ulong)uVar1;
  *(ulong *)(param_3 + 8) = uVar16;
  uVar17 = *(ulong *)(param_2 + 8);
  func_0x000107360148(*(undefined8 *)(param_2 + 0x18));
  if ((uVar17 == 0) ||
     (func_0x00010736013c(param_1,*(undefined4 *)(param_2 + 0x20),(float)uVar17), (bool)in_NG)) {
    func_0x00010735fe64();
    bVar4 = 2 < uVar17;
    bVar5 = uVar17 == 3;
    func_0x00010735fd64();
    uVar15 = extraout_x8;
    if (!bVar4 || bVar5) {
      uVar15 = extraout_x9;
    }
    if (uVar15 - 1 == 0) {
      uVar15 = 2;
    }
    else if ((uVar15 & uVar15 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar17 = unaff_x19[1];
      param_2 = uVar15;
    }
    if (uVar17 < uVar15) {
LAB_10735e0c0:
      FUN_10735e53c(uVar15);
      func_0x0001073607d0();
      FUN_10735e524();
      uVar17 = 0;
      unaff_x19[1] = uVar15;
      lVar7 = *unaff_x19;
      while (uVar15 != uVar17) {
        func_0x000107360234();
        lVar7 = extraout_x8_00;
        uVar17 = extraout_x9_00;
      }
      plVar9 = (long *)unaff_x19[2];
      uVar17 = uVar15;
      if (plVar9 != (long *)0x0) {
        uVar11 = plVar9[1];
        uVar8 = uVar15 - 1;
        if ((uVar15 & uVar8) == 0) {
          uVar11 = uVar11 & uVar8;
        }
        else if (uVar15 <= uVar11) {
          uVar12 = 0;
          if (uVar15 != 0) {
            uVar12 = uVar11 / uVar15;
          }
          uVar11 = uVar11 - uVar12 * uVar15;
        }
        *(long **)(lVar7 + uVar11 * 8) = unaff_x19 + 2;
        while (plVar10 = plVar9, plVar9 = (long *)*plVar10, plVar9 != (long *)0x0) {
          uVar12 = plVar9[1];
          if ((uVar15 & uVar8) == 0) {
            uVar12 = uVar12 & uVar8;
          }
          else if (uVar15 <= uVar12) {
            uVar2 = 0;
            if (uVar15 != 0) {
              uVar2 = uVar12 / uVar15;
            }
            uVar12 = uVar12 - uVar2 * uVar15;
          }
          if (uVar12 != uVar11) {
            plVar14 = plVar9;
            if (*(long *)(lVar7 + uVar12 * 8) == 0) {
              *(long **)(lVar7 + uVar12 * 8) = plVar10;
              uVar11 = uVar12;
            }
            else {
              do {
                plVar13 = plVar14;
                plVar14 = (long *)*plVar13;
                if (plVar14 == (long *)0x0) break;
              } while (*(int *)(plVar9 + 2) == *(int *)(plVar14 + 2));
              *plVar10 = (long)plVar14;
              *plVar13 = **(long **)(lVar7 + uVar12 * 8);
              **(long **)(lVar7 + uVar12 * 8) = (long)plVar9;
              plVar9 = plVar10;
            }
          }
        }
      }
    }
    else if (uVar15 < uVar17) {
      func_0x00010735ff7c();
      if ((uVar17 < 3) || ((uVar17 & uVar17 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else {
        func_0x00010735fce0();
      }
      if (uVar15 <= param_2) {
        uVar15 = param_2;
      }
      if (uVar15 < uVar17) {
        if (uVar15 != 0) goto LAB_10735e0c0;
        FUN_10735e524();
        unaff_x19[1] = 0;
        uVar17 = 0;
      }
      else {
        uVar17 = unaff_x19[1];
      }
    }
  }
  uVar15 = uVar17 - 1;
  if ((uVar17 & uVar15) == 0) {
    uVar11 = (ulong)((int)uVar17 - 1U & uVar1);
  }
  else {
    uVar11 = uVar16;
    if (uVar17 <= uVar16) {
      uVar11 = 0;
      if (uVar17 != 0) {
        uVar11 = uVar16 / uVar17;
      }
      uVar11 = uVar16 - uVar11 * uVar17;
    }
  }
  lVar7 = *unaff_x19;
  plVar9 = *(long **)(lVar7 + uVar11 * 8);
  if (plVar9 == (long *)0x0) {
    plVar10 = (long *)0x0;
  }
  else {
    bVar5 = false;
    bVar3 = 0;
    do {
      plVar10 = plVar9;
      plVar9 = (long *)*plVar10;
      if (plVar9 == (long *)0x0) break;
      uVar8 = plVar9[1];
      if ((uVar17 & uVar15) == 0) {
        uVar12 = uVar8 & uVar15;
      }
      else {
        uVar12 = uVar8;
        if (uVar17 <= uVar8) {
          uVar12 = 0;
          if (uVar17 != 0) {
            uVar12 = uVar8 / uVar17;
          }
          uVar12 = uVar8 - uVar12 * uVar17;
        }
      }
      if (uVar12 != uVar11) break;
      if (uVar8 == uVar16) {
        bVar4 = (int)plVar9[2] == (int)unaff_x20[2];
      }
      else {
        bVar4 = false;
      }
      bVar6 = bVar4 != bVar5;
      bVar4 = (bool)(bVar3 & bVar6);
      bVar5 = (bool)(bVar5 | bVar6);
      bVar3 = bVar3 | bVar6;
    } while (!bVar4);
  }
  uVar16 = unaff_x20[1];
  if ((uVar17 & uVar15) == 0) {
    uVar16 = uVar15 & uVar16;
    if (plVar10 == (long *)0x0) goto LAB_10735e2ec;
LAB_10735e2b0:
    *unaff_x20 = *plVar10;
    *plVar10 = (long)unaff_x20;
    if (*unaff_x20 == 0) goto LAB_10735e340;
    uVar11 = *(ulong *)(*unaff_x20 + 8);
    if ((uVar17 & uVar15) == 0) {
      uVar11 = uVar11 & uVar15;
    }
    else if (uVar17 <= uVar11) {
      uVar15 = 0;
      if (uVar17 != 0) {
        uVar15 = uVar11 / uVar17;
      }
      uVar11 = uVar11 - uVar15 * uVar17;
    }
    if (uVar11 == uVar16) goto LAB_10735e340;
  }
  else {
    if (uVar17 <= uVar16) {
      uVar11 = 0;
      if (uVar17 != 0) {
        uVar11 = uVar16 / uVar17;
      }
      uVar16 = uVar16 - uVar11 * uVar17;
    }
    if (plVar10 != (long *)0x0) goto LAB_10735e2b0;
LAB_10735e2ec:
    plVar9 = unaff_x19 + 2;
    *unaff_x20 = *plVar9;
    *plVar9 = (long)unaff_x20;
    *(long **)(lVar7 + uVar16 * 8) = plVar9;
    if (*unaff_x20 == 0) goto LAB_10735e340;
    uVar11 = *(ulong *)(*unaff_x20 + 8);
    if ((uVar17 & uVar15) == 0) {
      uVar11 = uVar11 & uVar15;
    }
    else if (uVar17 <= uVar11) {
      uVar16 = 0;
      if (uVar17 != 0) {
        uVar16 = uVar11 / uVar17;
      }
      uVar11 = uVar11 - uVar16 * uVar17;
    }
  }
  *(long **)(lVar7 + uVar11 * 8) = unaff_x20;
LAB_10735e340:
  func_0x000107360240();
  unaff_x19[3] = extraout_x8_01;
  return;
}



/* Entry: 10735e394; end: 10735e4cb;  */

long * FUN_10735e394(undefined8 param_1,long *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  code *extraout_x8;
  code *extraout_x8_00;
  long *unaff_x19;
  long alStack_60 [3];
  long *plStack_48;
  long alStack_40 [3];
  undefined8 uStack_28;
  
  plVar4 = alStack_60;
  plVar3 = alStack_60;
  plVar2 = alStack_60;
  func_0x00010735fd4c();
  FUN_10735e4cc(alStack_60);
  uVar1 = unaff_x19 == alStack_60;
  if (!(bool)uVar1) {
    plVar5 = (long *)unaff_x19[3];
    if (plStack_48 == alStack_60) {
      uVar1 = plVar5 == unaff_x19;
      if ((bool)uVar1) {
        func_0x00010736064c();
        (*extraout_x8)();
        func_0x000107360114(plStack_48);
        plStack_48 = (long *)0x0;
        func_0x00010736064c(unaff_x19[3]);
        (*extraout_x8_00)();
        func_0x000107360114(unaff_x19[3]);
        unaff_x19[3] = 0;
        plStack_48 = alStack_60;
        func_0x000107360204(*(undefined8 *)(alStack_40[0] + 0x18),alStack_40);
        (**(code **)(alStack_40[0] + 0x20))(alStack_40);
      }
      else {
        func_0x00010736064c();
        func_0x000107360204();
        func_0x000107360114(plStack_48);
        plStack_48 = (long *)unaff_x19[3];
        plVar3 = param_2;
      }
      unaff_x19[3] = (long)unaff_x19;
      param_2 = plVar3;
    }
    else {
      uVar1 = plVar5 == unaff_x19;
      if ((bool)uVar1) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
        func_0x000107360114(unaff_x19[3]);
        unaff_x19[3] = (long)plStack_48;
        param_2 = plVar4;
        plStack_48 = alStack_60;
      }
      else {
        unaff_x19[3] = (long)plStack_48;
        plStack_48 = plVar5;
      }
    }
  }
  func_0x00010731e7f8();
  func_0x00010735fd20(uStack_28);
  if ((bool)uVar1) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  if ((int)param_2 != 0) {
    func_0x000104bd46a0();
  }
  __Unwind_Resume();
  plVar3 = (long *)param_2[3];
  if (plVar3 == (long *)0x0) {
    plVar2[3] = 0;
  }
  else if (plVar3 == param_2) {
    plVar2[3] = (long)plVar2;
    func_0x00010736064c(param_2[3]);
    func_0x000107360204();
  }
  else {
    (**(code **)(*plVar3 + 0x10))();
    plVar2[3] = (long)plVar3;
  }
  return plVar2;
}



/* Entry: 10735e4cc; end: 10735e523;  */

long FUN_10735e4cc(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (plVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    func_0x00010736064c(param_2[3]);
    func_0x000107360204();
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    *(long **)(param_1 + 0x18) = plVar1;
  }
  return param_1;
}



/* Entry: 10735e524; end: 10735e53b;  */

void FUN_10735e524(long *param_1,long param_2)

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



/* Entry: 10735e53c; end: 10735e553;  */

void FUN_10735e53c(ulong param_1)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  if (param_1 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_1 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107360098();
  if (unaff_x20 != 0) {
    func_0x000107360658();
    if ((bool)in_ZR) {
      func_0x00010731e7f8(unaff_x20 + 0x18);
    }
    func_0x000107360134();
  }
  return;
}



/* Entry: 10735e554; end: 10735e587;  */

void FUN_10735e554(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x000107360098();
  if (unaff_x20 != 0) {
    func_0x000107360658();
    if ((bool)in_ZR) {
      func_0x00010731e7f8(unaff_x20 + 0x18);
    }
    func_0x000107360134();
  }
  return;
}



/* Entry: 10735e588; end: 10735e58f;  */

void FUN_10735e588(void)

{
  return;
}



/* Entry: 10735e590; end: 10735e5bf;  */

void FUN_10735e590(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1109a4d08;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10735e5c0; end: 10735e607;  */

void FUN_10735e5c0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109a4d08;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10735e608; end: 10735e62f;  */

void FUN_10735e608(undefined8 param_1)

{
  func_0x00010736029c();
  func_0x000107360198(param_1,&PTR_DAT_1109a4d78);
  func_0x00010735feb8();
  return;
}



/* Entry: 10735e630; end: 10735e63b;  */

undefined ** FUN_10735e630(void)

{
  return &PTR_DAT_1109a4d78;
}



/* Entry: 10735e63c; end: 10735e677;  */

long FUN_10735e63c(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == param_1) {
    uVar1 = 0x20;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      return param_1;
    }
    uVar1 = 0x28;
  }
  func_0x000107360940(uVar1);
  return param_1;
}



/* Entry: 10735e678; end: 10735e703;  */

void FUN_10735e678(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  long *plVar1;
  undefined8 *extraout_x8;
  int extraout_w10;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_48 [40];
  
  plVar1 = param_1 + 2;
  if ((ulong)((*plVar1 - *param_1) / 0x70) < param_2) {
    if (param_2 < 0x24924924924924a) {
      func_0x00010726d8e4(auStack_48,param_2,(param_1[1] - *param_1) / 0x70);
      func_0x0001009ebb10();
      func_0x00010726d894();
      func_0x00010726da98(auStack_48);
    }
    else {
      func_0x00010726d8d8();
      func_0x000107360128();
      func_0x00010726da98();
      func_0x00010736001c();
      uStack_98 = (undefined4)*plVar1;
      uStack_88 = param_5[1];
      uStack_90 = *param_5;
      uStack_80 = param_2;
      uStack_78 = param_3;
      if (param_5[1] != 0) {
        do {
          func_0x00010736000c();
        } while (extraout_w10 != 0);
      }
      FUN_10735e77c(&uStack_a0);
      *extraout_x8 = uStack_a0;
      func_0x00010733f4f4(&uStack_90);
    }
  }
  return;
}



/* Entry: 10735e704; end: 10735e77b;  */

void FUN_10735e704(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined8 *param_6)

{
  int extraout_w10;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_48 = *param_5;
  uStack_38 = param_6[1];
  uStack_40 = *param_6;
  uStack_30 = param_3;
  uStack_28 = param_4;
  if (param_6[1] != 0) {
    do {
      func_0x00010736000c();
    } while (extraout_w10 != 0);
  }
  FUN_10735e77c(&uStack_50);
  *param_1 = uStack_50;
  func_0x00010733f4f4(&uStack_40);
  return;
}



/* Entry: 10735e77c; end: 10735e7e3;  */

void FUN_10735e77c(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 *extraout_x8;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107360170();
  func_0x000107360490();
  uVar1 = *unaff_x19;
  uVar3 = unaff_x20[1];
  uVar2 = *unaff_x20;
  uVar5 = *(undefined8 *)(unaff_x19 + 4);
  uVar4 = *(undefined8 *)(unaff_x19 + 2);
  *(undefined8 *)(unaff_x19 + 2) = 0;
  *(undefined8 *)(unaff_x19 + 4) = 0;
  *param_1 = &PTR_FUN_1109a4d98;
  param_1[1] = unaff_x21;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  *(undefined4 *)(param_1 + 4) = uVar1;
  param_1[6] = uVar5;
  param_1[5] = uVar4;
  uStack_40 = 0;
  uStack_38 = 0;
  *extraout_x8 = param_1;
  func_0x00010733f4f4(&uStack_40);
  return;
}



/* Entry: 10735e7e4; end: 10735e7e7;  */

undefined8 * FUN_10735e7e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a4d98;
  func_0x00010733f4f4(param_1 + 5);
  return param_1;
}



/* Entry: 10735e7e8; end: 10735e7fb;  */

void FUN_10735e7e8(void)

{
  FUN_10735e85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10735e7fc; end: 10735e85b;  */

void FUN_10735e7fc(long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    pcVar2 = *(code **)(*plVar1 + ((ulong)pcVar2 & 0xffffffff));
  }
  uStack_28 = *(undefined8 *)(param_1 + 0x30);
  uStack_30 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  (*pcVar2)(plVar1,*(undefined4 *)(param_1 + 0x20),&uStack_30);
  func_0x00010733f4f4(&uStack_30);
  return;
}



/* Entry: 10735e85c; end: 10735e887;  */

undefined8 * FUN_10735e85c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a4d98;
  func_0x00010733f4f4(param_1 + 5);
  return param_1;
}



/* Entry: 10735e888; end: 10735e88b;  */

void FUN_10735e888(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a4dd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10735e88c; end: 10735e89f;  */

void FUN_10735e88c(void)

{
  FUN_10735ec00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10735e8a0; end: 10735e8ff;  */

long FUN_10735e8a0(long param_1)

{
  func_0x000104c003e8(param_1 + 0x160);
  func_0x0001006393ec(param_1 + 0x160);
  func_0x0001001148fc(param_1 + 0x140);
  func_0x000107276ba4(param_1 + 0x98);
  func_0x00010735c898(param_1 + 0x80);
  func_0x00010735ce34(param_1 + 0x78);
  FUN_10735ab80(param_1 + 0x58);
  func_0x000107261dac(param_1 + 0x38);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10735abb4(param_1 + 0x18);
    func_0x0001073609d0();
  }
  return param_1 + 0x18;
}



/* Entry: 10735e900; end: 10735e903;  */

void FUN_10735e900(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10735e904; end: 10735e92f;  */

undefined8 * FUN_10735e904(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a4e28;
  func_0x00010725b1d4(param_1 + 1);
  return param_1;
}



/* Entry: 10735e930; end: 10735e943;  */

void FUN_10735e930(void)

{
  FUN_10735e904();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10735e944; end: 10735e967;  */

long FUN_10735e944(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107360498();
  func_0x00010736005c();
  func_0x000107360908(&PTR_FUN_1109a4e28);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return unaff_x20;
}



/* Entry: 10735e968; end: 10735e98b;  */

void FUN_10735e968(long param_1,undefined8 param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010736005c(param_2,param_1 + 8);
  func_0x000107360908(&PTR_FUN_1109a4e28);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10735e98c; end: 10735e9cb;  */

void FUN_10735e98c(int param_1)

{
  long unaff_x19;
  
  func_0x0001073600bc();
  func_0x000107360a48();
  func_0x000107360a70();
  if (param_1 != 0) {
    FUN_107352b40(*(undefined8 *)(unaff_x19 + 0x20));
  }
  func_0x0001073602c8();
  return;
}



/* Entry: 10735e9cc; end: 10735e9f3;  */

void FUN_10735e9cc(undefined8 param_1)

{
  func_0x00010736029c();
  func_0x000107360198(param_1,&PTR_DAT_1109a4e88);
  func_0x00010735feb8();
  return;
}



/* Entry: 10735e9f4; end: 10735e9ff;  */

undefined ** FUN_10735e9f4(void)

{
  return &PTR_DAT_1109a4e88;
}



/* Entry: 10735ea00; end: 10735ea2f;  */

void FUN_10735ea00(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010736005c();
  func_0x000107360908(&PTR_FUN_1109a4e28);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10735ea30; end: 10735ea5f;  */

void FUN_10735ea30(undefined8 *param_1,undefined8 *param_2)

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
      func_0x00010736000c();
    } while (extraout_w10 != 0);
  }
  param_1[2] = param_2[2];
  return;
}



/* Entry: 10735ea60; end: 10735eb2b;  */

void FUN_10735ea60(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long **pplVar3;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  pplVar3 = &plStack_50;
  func_0x00010726fc00(&plStack_30,param_2);
  if (plStack_30 != (long *)0x0) {
    func_0x00010726fc3c();
    uVar2 = uStack_28;
    plVar1 = plStack_30;
    if (*plStack_30 != -1) {
      plStack_30 = (long *)0x0;
      uStack_28 = 0;
      *param_1 = plVar1;
      param_1[1] = uVar2;
      uStack_40 = 0;
      uStack_38 = 0;
      func_0x0001072508cc(&uStack_40);
      pplVar3 = &plStack_30;
      goto LAB_10735ead8;
    }
    func_0x00010726fc88();
  }
  func_0x0001072508cc(&plStack_30);
  *param_1 = 0;
  param_1[1] = 0;
  plStack_50 = (long *)0x0;
  uStack_48 = 0;
LAB_10735ead8:
  func_0x0001072508cc(pplVar3);
  return;
}



/* Entry: 10735eb2c; end: 10735ebff;  */

long FUN_10735eb2c(long param_1)

{
  long lVar1;
  undefined8 in_x6;
  undefined8 uVar2;
  undefined8 *unaff_x22;
  
  func_0x000107360b40();
  lVar1 = param_1;
  FUN_10735abf0();
  func_0x000107261fa8(lVar1 + 0x20);
  FUN_10735abf0(param_1 + 0x40);
  uVar2 = *unaff_x22;
  *unaff_x22 = 0;
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  __ZNSt3__119__shared_mutex_baseC1Ev(param_1 + 0x80);
  func_0x00010028af84(param_1 + 0x128);
  func_0x000105302f48(param_1 + 0x148,in_x6);
  return param_1;
}



/* Entry: 10735ec00; end: 10735ec17;  */

void FUN_10735ec00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a4dd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10735ec18; end: 10735ec67;  */

void FUN_10735ec18(long param_1)

{
  func_0x0001009eba28();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10735ec68; end: 10735ec7b;  */

void FUN_10735ec68(void)

{
  func_0x00010735ec3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10735ec7c; end: 10735ecb3;  */

undefined8 FUN_10735ec7c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x98;
  __Znwm(0x98);
  FUN_10735ee5c();
  return uVar1;
}



/* Entry: 10735ecb4; end: 10735ecd7;  */

void FUN_10735ecb4(long param_1,undefined8 *param_2)

{
  long unaff_x20;
  
  func_0x0001009eba74(param_2,param_1 + 8);
  *param_2 = &PTR_SUB_1109a4ea8;
  FUN_10735ea30(param_2 + 1);
  FUN_10735b024(param_2 + 4,unaff_x20 + 0x18);
  return;
}



/* Entry: 10735ecd8; end: 10735ee27;  */

void FUN_10735ecd8(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 auStack_e0 [16];
  long lStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined4 auStack_a0 [6];
  undefined4 uStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_58;
  undefined1 uStack_54;
  
  FUN_10735ea60(auStack_e0,param_1 + 8);
  iVar1 = (int)param_1 + 8;
  func_0x00010735eae4();
  if (iVar1 != 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    FUN_10735b0a0(auStack_a0,param_1 + 0x50);
    uStack_60 = CONCAT31(uStack_60._1_3_,1);
    FUN_107357190(lVar4,param_1 + 0x38,auStack_a0,param_2,param_1 + 0x28);
    puVar2 = auStack_a0;
    FUN_10735eeb0();
    puVar3 = *(undefined8 **)(lVar4 + 0x168);
    __ZNSt3__16chrono12steady_clock3nowEv();
    lStack_d0 = ((long)puVar2 - *(long *)(param_1 + 0x90)) / 1000;
    auStack_a0[0] = 0x15b;
    uStack_88 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    ppuStack_80 = &PTR_DAT_110996720;
    uStack_78 = 0;
    uStack_60 = 0x15b;
    uStack_58 = 0;
    uStack_54 = 1;
    func_0x000107360bac();
    lVar4 = lVar4 + 0xe8;
    func_0x00010724ef84(auStack_b8,lVar4);
    func_0x0001073606a4();
    func_0x0001073600c8();
    uStack_c8 = *puVar3;
    uStack_c0 = 3;
    FUN_10743f9dc(puVar3,lVar4,&lStack_d0,&uStack_c8,7);
    func_0x000107360480();
    func_0x0001073604a0();
  }
  func_0x0001073602c8();
  return;
}



/* Entry: 10735ee28; end: 10735ee4f;  */

void FUN_10735ee28(undefined8 param_1)

{
  func_0x00010736029c();
  func_0x000107360198(param_1,&PTR_DAT_1109a4f18);
  func_0x00010735feb8();
  return;
}



/* Entry: 10735ee50; end: 10735ee5b;  */

undefined ** FUN_10735ee50(void)

{
  return &PTR_DAT_1109a4f18;
}



/* Entry: 10735ee5c; end: 10735eeaf;  */

void FUN_10735ee5c(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x0001009eba74();
  *param_1 = &PTR_SUB_1109a4ea8;
  FUN_10735ea30(param_1 + 1);
  FUN_10735b024(param_1 + 4,unaff_x20 + 0x18);
  return;
}



/* Entry: 10735eeb0; end: 10735eecf;  */

void FUN_10735eeb0(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x000107359780();
  }
  return;
}



/* Entry: 10735eed0; end: 10735ef0b;  */

long FUN_10735eed0(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == param_1) {
    uVar1 = 0x20;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      return param_1;
    }
    uVar1 = 0x28;
  }
  func_0x000107360940(uVar1);
  return param_1;
}



/* Entry: 10735ef0c; end: 10735ef13;  */

void FUN_10735ef0c(void)

{
  return;
}



/* Entry: 10735ef14; end: 10735ef4f;  */

void FUN_10735ef14(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_1109a4f38;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



/* Entry: 10735ef50; end: 10735ef7f;  */

void FUN_10735ef50(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_1109a4f38;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}


