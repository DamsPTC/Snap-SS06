/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10745be14; end: 10745be6f;  */

ulong FUN_10745be14(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  int unaff_w20;
  long unaff_x21;
  
  func_0x00010745e8b0();
  (**(code **)(**(long **)(param_3 + 0x218) + 0x70))();
  func_0x0001077f8d64();
  uVar1 = 0x100000000;
  if (unaff_w20 == 0) {
    uVar1 = 0;
  }
  return uVar1 | *(uint *)(unaff_x21 + 0xa5c);
}



/* Entry: 10745be70; end: 10745be7f;  */

undefined1  [16] FUN_10745be70(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0xab0);
}



/* Entry: 10745be80; end: 10745bf53;  */

long FUN_10745be80(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x0001073e787c(param_1);
  }
  return param_1;
}



/* Entry: 10745bf54; end: 10745bf77;  */

void FUN_10745bf54(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    *(undefined1 *)(param_1 + lVar1) = 0;
    ((undefined1 *)(param_1 + lVar1))[0x30] = 0;
    lVar1 = lVar1 + 0x38;
  } while (lVar1 != 0xa8);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  return;
}



/* Entry: 10745bf78; end: 10745bf9b;  */

void FUN_10745bf78(void)

{
  func_0x00010745e8f8();
  FUN_10745bf9c();
  return;
}



/* Entry: 10745bf9c; end: 10745bfaf;  */

void FUN_10745bf9c(undefined8 *param_1)

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



/* Entry: 10745bfb0; end: 10745c253;  */

/* WARNING: Possible PIC construction at 0x00010745c02c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010745c030) */

long FUN_10745bfb0(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010745bfd8(param_1 + 0xf0);
  func_0x00010745ec98(param_1);
  FUN_10744365c(unaff_x19 + 0x90);
  func_0x000107443704(unaff_x19 + 0x28);
  func_0x000107443704(unaff_x19 + 0x20);
  func_0x000107443704(unaff_x19 + 0x18);
  lVar1 = unaff_x19 + 0x10;
  func_0x00010744c9f8();
  if (lVar1 != 0) {
    func_0x00010744c0a4();
  }
  return unaff_x19;
}



/* Entry: 10745c254; end: 10745c25b;  */

void FUN_10745c254(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010745e804(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0xa8;
    FUN_10740819c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10745c25c; end: 10745c2b3;  */

void FUN_10745c25c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010745e804();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0xa8;
    FUN_10740819c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10745c2b4; end: 10745c317;  */

void FUN_10745c2b4(undefined8 *param_1)

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



/* Entry: 10745c318; end: 10745c3b7;  */

void FUN_10745c318(undefined8 param_1,undefined8 param_2)

{
  code *extraout_x9;
  
  func_0x00010745e8b0();
  func_0x00010745e5d4(param_2);
  func_0x00010745e974();
  func_0x00010745ebe8();
  (*extraout_x9)();
  func_0x00010745ea0c();
  return;
}



/* Entry: 10745c3b8; end: 10745c42b;  */

void FUN_10745c3b8(long *param_1)

{
  (**(code **)(*param_1 + 0x48))();
  func_0x00010745e704(param_1);
  FUN_1073dac18(param_1[1],0xaf);
  FUN_10743fa9c();
  func_0x0001073dac90();
  return;
}



/* Entry: 10745c42c; end: 10745c43f;  */

void FUN_10745c42c(undefined8 *param_1)

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



/* Entry: 10745c440; end: 10745c473;  */

undefined8 * FUN_10745c440(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10745c474();
  return param_1;
}



/* Entry: 10745c474; end: 10745c4f3;  */

void FUN_10745c474(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    FUN_10745c4f4(param_1,param_4);
    FUN_10745c52c(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  FUN_10745c5a0(&uStack_40);
  return;
}



/* Entry: 10745c4f4; end: 10745c52b;  */

void FUN_10745c4f4(long *param_1,ulong param_2,ulong param_3)

{
  long *plVar1;
  ulong *puVar2;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = param_1 + 2;
    FUN_10745c560();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2);
    return;
  }
  FUN_10745c54c();
  puVar2 = (ulong *)param_1[1];
  for (; param_2 != param_3; param_2 = param_2 + 0x670) {
    *puVar2 = param_2;
    puVar2 = puVar2 + 1;
  }
  param_1[1] = (long)puVar2;
  return;
}



/* Entry: 10745c52c; end: 10745c54b;  */

void FUN_10745c52c(long param_1,long param_2,long param_3)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 0x670) {
    *plVar1 = param_2;
    plVar1 = plVar1 + 1;
  }
  *(long **)(param_1 + 8) = plVar1;
  return;
}



/* Entry: 10745c54c; end: 10745c55f;  */

void FUN_10745c54c(void)

{
  func_0x000104bd47e8(&UNK_10f415730);
  FUN_10745c584();
  return;
}



/* Entry: 10745c560; end: 10745c583;  */

void FUN_10745c560(void)

{
  FUN_10745c584();
  return;
}



/* Entry: 10745c584; end: 10745c59f;  */

long FUN_10745c584(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10745c42c(param_1);
  }
  return param_1;
}



/* Entry: 10745c5a0; end: 10745c5cb;  */

long FUN_10745c5a0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10745c42c(param_1);
  }
  return param_1;
}



/* Entry: 10745c5cc; end: 10745cc6f;  */

void FUN_10745c5cc(ulong *param_1,ulong *param_2,ulong *param_3,long param_4,uint param_5)

{
  long lVar1;
  int iVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *unaff_x20;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *unaff_x24;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 unaff_x30;
  ulong *puStack_78;
  
  puVar4 = param_1;
  puStack_78 = param_2;
LAB_10745c604:
  puVar9 = puStack_78 + -1;
  puVar7 = puVar4;
LAB_10745c620:
  puVar4 = puVar7;
  iVar2 = (int)param_1;
  uVar18 = (long)puStack_78 - (long)puVar4 >> 3;
  switch(uVar18) {
  case 0:
  case 1:
    goto LAB_10745cc5c;
  case 2:
    uVar18 = puStack_78[-1];
    uVar15 = *puVar4;
    func_0x00010745e514((int)*param_3,*(undefined4 *)((long)param_3 + 4));
    if (iVar2 != 0) {
      *puVar4 = uVar18;
      puStack_78[-1] = uVar15;
    }
    goto LAB_10745cc5c;
  case 3:
    puVar7 = puVar4 + 1;
    func_0x00010745e9c0();
    uVar8 = *puVar7;
    uVar19 = *puVar4;
    func_0x00010745e6dc();
    uVar18 = uVar8;
    func_0x00010745e988();
    uVar13 = *puVar9;
    func_0x00010745e6dc();
    uVar15 = uVar13;
    FUN_10745cc70(uVar13,uVar8);
    if ((uVar18 & 1) == 0) {
      if ((int)uVar15 != 0) {
        *puVar7 = uVar13;
        *puVar9 = uVar8;
        uVar15 = *puVar7;
        uVar19 = *puVar4;
        uVar18 = uVar15;
        func_0x00010745e988((int)*param_3,*(undefined4 *)((long)param_3 + 4));
        if ((int)uVar18 != 0) {
          *puVar4 = uVar15;
          *puVar7 = uVar19;
        }
      }
    }
    else {
      if ((int)uVar15 == 0) {
        *puVar4 = uVar8;
        *puVar7 = uVar19;
        uVar15 = *puVar9;
        uVar18 = uVar15;
        func_0x00010745e988((int)*param_3,*(undefined4 *)((long)param_3 + 4));
        if ((int)uVar18 == 0) {
          return;
        }
        *puVar7 = uVar15;
      }
      else {
        *puVar4 = uVar13;
      }
      *puVar9 = uVar19;
    }
    return;
  case 4:
    puVar7 = puVar4 + 2;
    puVar3 = param_3;
    func_0x00010745e9c0(puVar4,puVar4 + 1);
    iVar2 = (int)puVar4;
    func_0x00010745e804();
    FUN_10745ccb0();
    func_0x00010745e92c();
    if ((iVar2 != 0) && (func_0x00010745e7e4(), iVar2 != 0)) {
      *param_3 = (ulong)puVar9;
      *puVar7 = (ulong)unaff_x24;
      uVar18 = *param_3;
      uVar15 = *unaff_x20;
      func_0x00010745e514((int)*puVar3,*(undefined4 *)((long)puVar3 + 4));
      if (iVar2 != 0) {
        *unaff_x20 = uVar18;
        *param_3 = uVar15;
      }
    }
    break;
  case 5:
    puVar7 = puVar4 + 2;
    puVar3 = puVar4 + 3;
    puVar10 = param_3;
    func_0x00010745e9c0(puVar4,puVar4 + 1);
    func_0x00010745e804();
    FUN_10745cd8c();
    uVar15 = *puVar9;
    uVar19 = *puVar3;
    uVar18 = uVar15;
    FUN_10745cc70((int)*puVar10,*(undefined4 *)((long)puVar10 + 4),uVar15,uVar19);
    iVar2 = (int)uVar18;
    if (iVar2 != 0) {
      *puVar3 = uVar15;
      *puVar9 = uVar19;
      func_0x00010745e92c();
      if ((iVar2 != 0) && (func_0x00010745e7e4(), iVar2 != 0)) {
        *param_3 = (ulong)puVar3;
        *puVar7 = (ulong)puVar9;
        uVar18 = *param_3;
        uVar15 = *unaff_x20;
        func_0x00010745e514((int)*puVar10,*(undefined4 *)((long)puVar10 + 4));
        if (iVar2 != 0) {
          *unaff_x20 = uVar18;
          *param_3 = uVar15;
        }
      }
    }
    break;
  default:
    if ((long)uVar18 < 0x18) {
      if ((param_5 & 1) == 0) {
        puVar7 = puVar4;
        if (puVar4 != puStack_78) {
          while( true ) {
            puVar4 = puVar4 + 1;
            puVar9 = puVar7 + 1;
            if (puVar9 == puStack_78) break;
            uVar18 = *puVar7;
            uVar15 = puVar7[1];
            func_0x00010745ea90();
            puVar7 = puVar9;
            puVar9 = puVar4;
            if ((int)param_1 != 0) {
              do {
                *puVar9 = uVar18;
                uVar18 = puVar9[-2];
                func_0x00010745ea90();
                puVar9 = puVar9 + -1;
              } while (((ulong)param_1 & 1) != 0);
              *puVar9 = uVar15;
            }
          }
        }
        goto LAB_10745cc5c;
      }
      if (puVar4 == puStack_78) goto LAB_10745cc5c;
      lVar11 = 0;
      puVar7 = puVar4;
      goto LAB_10745c96c;
    }
    if (param_4 == 0) {
      if (puVar4 == puStack_78) goto LAB_10745cc5c;
      uVar19 = uVar18 - 2 >> 1;
      uVar15 = uVar19;
      goto LAB_10745c9ec;
    }
    unaff_x24 = puVar4 + (uVar18 >> 1);
    if (uVar18 < 0x81) {
      param_1 = unaff_x24;
      func_0x00010745e9b8(unaff_x24,puVar4,puVar9);
    }
    else {
      func_0x00010745e9b8(puVar4,unaff_x24,puVar9);
      param_1 = unaff_x24 + -1;
      func_0x00010745e9b8(puVar4 + 1,param_1,puStack_78 + -2);
      func_0x00010745e9b8(puVar4 + 2,unaff_x24 + 1,puStack_78 + -3);
      func_0x00010745e9b8(param_1,unaff_x24,unaff_x24 + 1);
      uVar18 = *puVar4;
      *puVar4 = *unaff_x24;
      *unaff_x24 = uVar18;
    }
    param_4 = param_4 + -1;
    unaff_x20 = puStack_78;
    if ((param_5 & 1) != 0) {
      uVar18 = *puVar4;
LAB_10745c6dc:
      lVar11 = 0;
      do {
        uVar15 = *(ulong *)((long)puVar4 + lVar11 + 8);
        func_0x00010745e6dc();
        func_0x00010745ece8();
        lVar11 = lVar11 + 8;
      } while (((ulong)param_1 & 1) != 0);
      puVar3 = (ulong *)((long)puVar4 + lVar11);
      puVar7 = puVar3;
      if (lVar11 == 8) {
        do {
          puVar10 = unaff_x20;
          if (unaff_x20 <= puVar3) break;
          unaff_x20 = unaff_x20 + -1;
          param_1 = (ulong *)*unaff_x20;
          func_0x00010745e558();
          puVar10 = unaff_x20;
        } while (((ulong)param_1 & 1) == 0);
      }
      else {
        do {
          unaff_x20 = unaff_x20 + -1;
          param_1 = (ulong *)*unaff_x20;
          func_0x00010745e558();
          puVar10 = unaff_x20;
        } while ((int)param_1 == 0);
      }
      while (puVar7 < unaff_x20) {
        *puVar7 = *unaff_x20;
        *unaff_x20 = uVar15;
        do {
          puVar7 = puVar7 + 1;
          uVar15 = *puVar7;
          func_0x00010745e6dc();
          func_0x00010745ece8();
        } while (((ulong)param_1 & 1) != 0);
        do {
          unaff_x20 = unaff_x20 + -1;
          param_1 = (ulong *)*unaff_x20;
          func_0x00010745e558();
        } while (((ulong)param_1 & 1) == 0);
      }
      unaff_x24 = puVar7 + -1;
      if (puVar4 != unaff_x24) {
        *puVar4 = *unaff_x24;
      }
      *unaff_x24 = uVar18;
      if (puVar10 <= puVar3) {
        puVar3 = puVar4;
        FUN_10745ce8c(puVar4,unaff_x24,param_3);
        param_1 = puVar7;
        FUN_10745ce8c(puVar7,puStack_78,param_3);
        if ((int)param_1 != 0) goto LAB_10745c894;
        if (((ulong)puVar3 & 1) != 0) goto LAB_10745c620;
      }
      FUN_10745c5cc(puVar4,unaff_x24,param_3,param_4,param_5 & 1);
      param_5 = 0;
      param_1 = puVar4;
      goto LAB_10745c620;
    }
    param_1 = (ulong *)puVar4[-1];
    uVar18 = *puVar4;
    func_0x00010745e558();
    if (((ulong)param_1 & 1) != 0) goto LAB_10745c6dc;
    func_0x00010745e474();
    puVar7 = puVar4;
    if (((ulong)param_1 & 1) == 0) {
      do {
        puVar7 = puVar7 + 1;
        if (puStack_78 <= puVar7) break;
        func_0x00010745e474();
      } while ((int)param_1 == 0);
    }
    else {
      do {
        puVar7 = puVar7 + 1;
        func_0x00010745e474();
      } while (((ulong)param_1 & 1) == 0);
    }
    if (puVar7 < puStack_78) {
      do {
        unaff_x20 = unaff_x20 + -1;
        func_0x00010745e474();
      } while (((ulong)param_1 & 1) != 0);
    }
    while (puVar7 < unaff_x20) {
      uVar15 = *puVar7;
      *puVar7 = *unaff_x20;
      *unaff_x20 = uVar15;
      do {
        puVar7 = puVar7 + 1;
        func_0x00010745e474();
      } while ((int)param_1 == 0);
      do {
        unaff_x20 = unaff_x20 + -1;
        func_0x00010745e474();
      } while (((ulong)param_1 & 1) != 0);
    }
    puVar3 = puVar7 + -1;
    if (puVar4 != puVar3) {
      *puVar4 = *puVar3;
    }
    param_5 = 0;
    *puVar3 = uVar18;
    goto LAB_10745c620;
  }
  return;
LAB_10745c96c:
  if (puVar7 + 1 == puStack_78) goto LAB_10745cc5c;
  uVar18 = *puVar7;
  uVar15 = puVar7[1];
  func_0x00010745e514((int)*param_3,*(undefined4 *)((long)param_3 + 4));
  lVar1 = lVar11;
  if ((int)param_1 != 0) {
    do {
      lVar16 = lVar1;
      *(ulong *)((long)puVar4 + lVar16 + 8) = uVar18;
      puVar9 = puVar4;
      if (lVar16 == 0) goto LAB_10745c9c0;
      uVar18 = *(ulong *)((long)puVar4 + lVar16 + -8);
      func_0x00010745e514((int)*param_3,*(undefined4 *)((long)param_3 + 4));
      lVar1 = lVar16 + -8;
    } while (((ulong)param_1 & 1) != 0);
    puVar9 = (ulong *)((long)puVar4 + lVar16);
LAB_10745c9c0:
    *puVar9 = uVar15;
  }
  lVar11 = lVar11 + 8;
  puVar7 = puVar7 + 1;
  goto LAB_10745c96c;
LAB_10745c894:
  puStack_78 = unaff_x24;
  if (((ulong)puVar3 & 1) != 0) goto LAB_10745cc5c;
  goto LAB_10745c604;
LAB_10745c9ec:
  do {
    if ((long)uVar15 <= (long)uVar19) {
      uVar13 = (uVar15 & 0x3fffffffffffffff) << 1 | 1;
      puVar7 = puVar4 + uVar13;
      uVar8 = uVar15 * 2 + 2;
      uVar12 = *puVar7;
      puVar9 = puVar7;
      uVar17 = uVar12;
      uVar6 = uVar13;
      if ((long)uVar8 < (long)uVar18) {
        uVar17 = puVar7[1];
        func_0x00010745e6dc();
        uVar14 = uVar12;
        FUN_10745cc70(uVar12,uVar17);
        puVar9 = puVar7 + 1;
        uVar6 = uVar8;
        if ((int)uVar14 == 0) {
          puVar9 = puVar7;
          uVar17 = uVar12;
          uVar6 = uVar13;
        }
      }
      uVar8 = puVar4[uVar15];
      func_0x00010745e6dc();
      FUN_10745cc70();
      if ((uVar17 & 1) == 0) {
        uVar13 = *puVar9;
        puVar7 = puVar4 + uVar15;
        do {
          puVar3 = puVar9;
          *puVar7 = uVar13;
          if ((long)uVar19 < (long)uVar6) break;
          uVar12 = uVar6 << 1 | 1;
          puVar7 = puVar4 + uVar12;
          uVar17 = uVar6 * 2 + 2;
          uVar14 = *puVar7;
          puVar9 = puVar7;
          uVar13 = uVar14;
          uVar6 = uVar12;
          if ((long)uVar17 < (long)uVar18) {
            uVar13 = puVar7[1];
            func_0x00010745e6dc();
            uVar5 = uVar14;
            FUN_10745cc70(uVar14,uVar13);
            puVar9 = puVar7 + 1;
            uVar6 = uVar17;
            if ((int)uVar5 == 0) {
              puVar9 = puVar7;
              uVar13 = uVar14;
              uVar6 = uVar12;
            }
          }
          func_0x00010745e6dc();
          uVar17 = uVar13;
          FUN_10745cc70(uVar13,uVar8);
          puVar7 = puVar3;
        } while ((int)uVar17 == 0);
        *puVar3 = uVar8;
      }
    }
    uVar15 = uVar15 - 1;
  } while (-1 < (long)uVar15);
  for (; 1 < (long)uVar18; uVar18 = uVar18 - 1) {
    uVar19 = *puVar4;
    uVar15 = 0;
    puVar7 = puVar4;
    do {
      uVar13 = uVar15 << 1 | 1;
      uVar8 = uVar15 * 2 + 2;
      uVar17 = uVar13;
      puVar9 = puVar7 + uVar15 + 1;
      if ((long)uVar8 < (long)uVar18) {
        uVar6 = puVar7[uVar15 + 1];
        FUN_10745cc70((int)*param_3,*(undefined4 *)((long)param_3 + 4),uVar6,puVar7[uVar15 + 2]);
        uVar17 = uVar8;
        puVar9 = puVar7 + uVar15 + 2;
        if ((int)uVar6 == 0) {
          uVar17 = uVar13;
          puVar9 = puVar7 + uVar15 + 1;
        }
      }
      *puVar7 = *puVar9;
      uVar15 = uVar17;
      puVar7 = puVar9;
    } while ((long)uVar17 <= (long)(uVar18 - 2 >> 1));
    puStack_78 = puStack_78 + -1;
    if (puVar9 == puStack_78) {
      *puVar9 = uVar19;
    }
    else {
      *puVar9 = *puStack_78;
      *puStack_78 = uVar19;
      lVar11 = (long)puVar9 + (8 - (long)puVar4) >> 3;
      if (1 < lVar11) {
        uVar19 = lVar11 - 2U >> 1;
        uVar13 = puVar4[uVar19];
        uVar8 = *puVar9;
        uVar15 = uVar13;
        func_0x00010745e988((int)*param_3,*(undefined4 *)((long)param_3 + 4));
        puVar7 = puVar4 + uVar19;
        if ((int)uVar15 != 0) {
          do {
            puVar3 = puVar7;
            *puVar9 = uVar13;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1 >> 1;
            uVar13 = puVar4[uVar19];
            uVar15 = uVar13;
            func_0x00010745e988((int)*param_3,*(undefined4 *)((long)param_3 + 4));
            puVar9 = puVar3;
            puVar7 = puVar4 + uVar19;
          } while ((uVar15 & 1) != 0);
          *puVar3 = uVar8;
        }
      }
    }
  }
LAB_10745cc5c:
  func_0x00010745e9c0(unaff_x30);
  return;
}



/* Entry: 10745cc70; end: 10745ccaf;  */

bool FUN_10745cc70(float param_1,float param_2,long param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (long)(param_2 * *(float *)(param_3 + 0x14) + *(float *)(param_3 + 0x10) * param_1);
  lVar3 = (long)(param_2 * *(float *)(param_4 + 0x14) + *(float *)(param_4 + 0x10) * param_1);
  bVar1 = *(ulong *)(param_4 + 0x580) < *(ulong *)(param_3 + 0x580);
  if (lVar2 != lVar3) {
    bVar1 = lVar2 < lVar3;
  }
  return bVar1;
}



/* Entry: 10745ccb0; end: 10745cd8b;  */

void FUN_10745ccb0(ulong *param_1,ulong *param_2,ulong *param_3,undefined4 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *param_2;
  uVar3 = *param_1;
  func_0x00010745e6dc();
  uVar1 = uVar4;
  func_0x00010745e988();
  uVar5 = *param_3;
  func_0x00010745e6dc();
  uVar2 = uVar5;
  FUN_10745cc70(uVar5,uVar4);
  if ((uVar1 & 1) == 0) {
    if ((int)uVar2 != 0) {
      *param_2 = uVar5;
      *param_3 = uVar4;
      uVar2 = *param_2;
      uVar3 = *param_1;
      uVar1 = uVar2;
      func_0x00010745e988(*param_4,param_4[1]);
      if ((int)uVar1 != 0) {
        *param_1 = uVar2;
        *param_2 = uVar3;
      }
    }
  }
  else {
    if ((int)uVar2 == 0) {
      *param_1 = uVar4;
      *param_2 = uVar3;
      uVar2 = *param_3;
      uVar1 = uVar2;
      func_0x00010745e988(*param_4,param_4[1]);
      if ((int)uVar1 == 0) {
        return;
      }
      *param_2 = uVar2;
    }
    else {
      *param_1 = uVar5;
    }
    *param_3 = uVar3;
  }
  return;
}



/* Entry: 10745cd8c; end: 10745ce8b;  */

void FUN_10745cd8c(int param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x24;
  
  func_0x00010745e804();
  FUN_10745ccb0();
  func_0x00010745e92c();
  if ((param_1 != 0) && (func_0x00010745e7e4(), param_1 != 0)) {
    *unaff_x19 = param_4;
    *param_3 = unaff_x24;
    uVar1 = *unaff_x19;
    uVar2 = *unaff_x20;
    func_0x00010745e514(*param_5,param_5[1]);
    if (param_1 != 0) {
      *unaff_x20 = uVar1;
      *unaff_x19 = uVar2;
    }
  }
  return;
}



/* Entry: 10745ce8c; end: 10745d01b;  */

bool FUN_10745ce8c(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  
  iVar9 = 1;
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    uVar5 = param_2[-1];
    uVar7 = *param_1;
    func_0x00010745e514(*param_3,param_3[1]);
    if (iVar9 != 0) {
      *param_1 = uVar5;
      param_2[-1] = uVar7;
    }
    break;
  case 3:
    FUN_10745ccb0(param_1,param_1 + 1,param_2 + -1,param_3);
    break;
  case 4:
    func_0x00010745cd8c(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    func_0x00010745cdf8(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    puVar2 = param_1;
    FUN_10745ccb0(param_1,param_1 + 1,param_1 + 2,param_3);
    lVar8 = 0;
    iVar9 = 0;
    puVar4 = param_1 + 3;
    puVar6 = param_1 + 2;
    while (puVar3 = puVar4, puVar3 != param_2) {
      uVar5 = *puVar3;
      uVar7 = *puVar6;
      func_0x00010745e514(*param_3,param_3[1]);
      lVar1 = lVar8;
      if ((int)puVar2 != 0) {
        do {
          lVar10 = lVar1;
          *(undefined8 *)((long)param_1 + lVar10 + 0x18) = uVar7;
          puVar4 = param_1;
          if (lVar10 == -0x10) goto LAB_10745cfb4;
          uVar7 = *(undefined8 *)((long)param_1 + lVar10 + 8);
          func_0x00010745e514(*param_3,param_3[1]);
          lVar1 = lVar10 + -8;
        } while (((ulong)puVar2 & 1) != 0);
        puVar4 = (undefined8 *)((long)param_1 + lVar10 + 0x10);
LAB_10745cfb4:
        *puVar4 = uVar5;
        iVar9 = iVar9 + 1;
        if (iVar9 == 8) {
          return puVar3 + 1 == param_2;
        }
      }
      lVar8 = lVar8 + 8;
      puVar6 = puVar3;
      puVar4 = puVar3 + 1;
    }
  }
  return true;
}



/* Entry: 10745d01c; end: 10745d053;  */

void FUN_10745d01c(void)

{
  func_0x00010745eca4();
  return;
}



/* Entry: 10745d054; end: 10745d05f;  */

undefined8 FUN_10745d054(void)

{
  return 0;
}



/* Entry: 10745d060; end: 10745d16f;  */

undefined1  [16] FUN_10745d060(float param_1,long param_2,undefined1 *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  ulong uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auStack_220 [56];
  undefined1 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [400];
  long lStack_48;
  
  lVar1 = param_2;
  func_0x00010745e4cc();
  lStack_48 = extraout_x8;
  if (*(char *)(lVar1 + 0x1c) == '\x01') {
    param_3 = (undefined1 *)(param_2 + 0xc);
    func_0x0001077b1244(param_2 + 0x20,param_3);
    func_0x00010745ed00();
    fVar4 = *(float *)(param_2 + 0x14) +
            (*(float *)(param_2 + 0x18) - *(float *)(param_2 + 0x14)) * param_1;
    uVar3 = 0x100;
  }
  else {
    uVar3 = (ulong)*(byte *)(param_2 + 0x50) ^ 1 | 0x100;
    if (*(byte *)(param_2 + 0x50) == 1) {
      func_0x0001077512dc(auStack_1d8);
      auStack_220[0] = 0;
      uStack_1e8 = 0;
      uStack_1e0 = 0;
      param_3 = auStack_1d8;
      fVar4 = 0.0;
      func_0x00010727f6f4(0,param_2 + 0x20,param_3,auStack_220);
      func_0x00010724b3d8(auStack_220);
      func_0x000107267da8(auStack_1d8);
    }
    else {
      fVar4 = *(float *)(param_2 + 8);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar5._12_4_ = *(undefined4 *)(param_2 + 8);
    auVar5._8_4_ = fVar4;
    auVar5._0_8_ = uVar3;
    return auVar5;
  }
  ___stack_chk_fail();
  func_0x00010724b3d8(auStack_220);
  puVar2 = auStack_1d8;
  func_0x000107267da8();
  func_0x00010745e608();
  if (puVar2[0x30] == '\x01') {
    func_0x000107266a84();
  }
  auVar6._8_8_ = param_3;
  auVar6._0_8_ = puVar2;
  return auVar6;
}



/* Entry: 10745d170; end: 10745d18f;  */

void FUN_10745d170(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x000107266a84();
  }
  return;
}



/* Entry: 10745d190; end: 10745d1f3;  */

void FUN_10745d190(void)

{
  long unaff_x20;
  
  func_0x00010745ebc8();
  if (unaff_x20 != 0) {
    FUN_10745d170(unaff_x20 + 0x20);
    func_0x00010745eab0();
  }
  return;
}



/* Entry: 10745d1f4; end: 10745d27f;  */

undefined1 * FUN_10745d1f4(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined1 auStack_1d8 [400];
  undefined8 uStack_48;
  
  func_0x00010745e9e0();
  func_0x00010745e4cc();
  puVar1 = auStack_1d8;
  uStack_48 = extraout_x8;
  func_0x000107751284(puVar1);
  func_0x00010745e890();
  func_0x00010745eb58();
  func_0x00010745ea58(*(undefined4 *)(unaff_x19 + 0x38));
  func_0x00010745e864();
  func_0x00010745ea68();
  func_0x00010745ea80();
  func_0x00010745e428(uStack_48);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010745e864();
  func_0x00010745ea68();
  func_0x00010745ea80();
  func_0x00010745e608();
  return (undefined1 *)0x1;
}



/* Entry: 10745d280; end: 10745d28b;  */

undefined1  [16] FUN_10745d280(void)

{
  return ZEXT816(1);
}



/* Entry: 10745d28c; end: 10745d2c3;  */

void FUN_10745d28c(void)

{
  func_0x00010745e74c();
  return;
}



/* Entry: 10745d2c4; end: 10745d3d3;  */

undefined1  [16] FUN_10745d2c4(long param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  long unaff_x19;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_428 [400];
  undefined1 auStack_298 [56];
  undefined1 uStack_260;
  undefined8 uStack_258;
  undefined1 auStack_250 [112];
  undefined1 uStack_1e0;
  undefined1 auStack_1d8 [400];
  undefined8 uStack_48;
  
  func_0x00010745e9e0();
  func_0x00010745e4cc();
  uStack_48 = extraout_x8;
  func_0x0001077512dc(*(undefined4 *)(param_1 + 0x40),auStack_1d8);
  auStack_250[0] = 0;
  uStack_1e0 = 0;
  func_0x000107751444(auStack_1d8);
  auStack_298[0] = 0;
  uStack_260 = 0;
  uStack_258 = 0;
  puVar2 = auStack_1d8;
  func_0x00010727f6f4(*(undefined4 *)(unaff_x19 + 0x38),unaff_x19 + 8,puVar2,auStack_298);
  func_0x0001077512dc(*(undefined4 *)(unaff_x19 + 0x44),auStack_428);
  func_0x00010745e890();
  func_0x00010745eb58();
  uVar3 = *(uint *)(unaff_x19 + 0x38);
  func_0x00010745ea58(uVar3);
  func_0x00010745e864();
  func_0x00010745ea68();
  func_0x00010745ea80();
  func_0x00010724b3d8(auStack_298);
  func_0x000107267e8c(auStack_250);
  puVar1 = auStack_1d8;
  func_0x000107267da8(puVar1);
  func_0x00010745e428(uStack_48);
  if ((bool)in_ZR) {
    func_0x00010745e6dc();
    auVar4._8_8_ = puVar2;
    auVar4._0_8_ = puVar1;
    return auVar4;
  }
  ___stack_chk_fail();
  func_0x00010745e864();
  func_0x00010745ea68();
  func_0x00010745ea80();
  func_0x00010724b3d8(auStack_298);
  func_0x000107267e8c(auStack_250);
  puVar2 = auStack_1d8;
  func_0x000107267da8(puVar2);
  func_0x00010745e608();
  func_0x0001077b1244(puVar2 + 8,puVar2 + 0x40);
  func_0x00010745ed00();
  return ZEXT416(uVar3) << 0x20;
}



/* Entry: 10745d3d4; end: 10745d433;  */

undefined1  [16] FUN_10745d3d4(uint param_1,long param_2)

{
  func_0x0001077b1244(param_2 + 8,param_2 + 0x40);
  func_0x00010745ed00();
  return ZEXT416(param_1) << 0x20;
}



/* Entry: 10745d434; end: 10745d57f;  */

long * FUN_10745d434(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x00010745e43c();
  }
  return param_1;
}



/* Entry: 10745d580; end: 10745d5b7;  */

void FUN_10745d580(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_2[1] = 0;
  *param_2 = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  param_2[3] = 0;
  param_2[2] = 0;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  uVar1 = param_2[4];
  param_2[4] = 0;
  param_1[4] = uVar1;
  uVar1 = param_2[5];
  param_2[5] = 0;
  param_1[5] = uVar1;
  return;
}



/* Entry: 10745d5b8; end: 10745d5f3;  */

undefined1 * FUN_10745d5b8(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_10744bde8(param_1);
  }
  return param_1;
}



/* Entry: 10745d5f4; end: 10745d62b;  */

void FUN_10745d5f4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010745ebc8();
  if (unaff_x20 != 0) {
    if (*(char *)(unaff_x19 + 0x10) == '\x01') {
      func_0x00010745d4c4(unaff_x20 + 0x20);
    }
    func_0x00010745eab0();
  }
  return;
}



/* Entry: 10745d62c; end: 10745d68f;  */

long * FUN_10745d62c(undefined8 param_1)

{
  long lVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar2;
  long *unaff_x22;
  long *plVar3;
  
  func_0x00010745e804();
  lVar1 = *(long *)(unaff_x20 + 8);
  plVar2 = (long *)(unaff_x20 + 8);
  while (plVar3 = plVar2, lVar1 != 0) {
    while (func_0x00010745ea30(), (int)param_1 == 0) {
      func_0x00010745ec50();
      plVar3 = unaff_x22;
      if (((int)param_1 == 0) || (plVar2 = unaff_x22 + 1, *plVar2 == 0)) goto LAB_10745d680;
    }
    plVar2 = unaff_x22;
    lVar1 = *unaff_x22;
  }
LAB_10745d680:
  *unaff_x19 = plVar3;
  return plVar2;
}



/* Entry: 10745d690; end: 10745d79f;  */

void FUN_10745d690(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [16];
  
  func_0x00010745ec00();
  FUN_1073d3290(param_2);
  func_0x00010745eafc();
  FUN_10745d7a0(auStack_40);
  func_0x00010745e968(auStack_58);
  func_0x00010745d7ec();
  FUN_10745d7a0(auStack_40,*(undefined8 *)(unaff_x20 + 0x10),&UNK_10f40fbec,&UNK_10f40fbec,
                unaff_x21 + 0x80,2);
  func_0x00010745e968(auStack_58);
  func_0x00010745d7ec();
  func_0x00010745e968(auStack_58);
  func_0x00010745d7ec();
  func_0x00010745e968(auStack_58);
  func_0x00010745d7ec();
  func_0x00010745ec44();
  func_0x00010745ea40();
  func_0x00010745ecf4();
  return;
}



/* Entry: 10745d7a0; end: 10745d833;  */

void FUN_10745d7a0(void)

{
  undefined1 in_CY;
  undefined8 *unaff_x19;
  
  func_0x00010745ed58();
  func_0x00010745e6a0();
  func_0x00010745e68c();
  while (func_0x00010745e944(*(undefined8 *)*unaff_x19), !(bool)in_CY) {
    func_0x00010745e5bc();
    func_0x00010745e448();
    func_0x00010745ed40();
  }
  return;
}



/* Entry: 10745d834; end: 10745d84b;  */

void FUN_10745d834(undefined8 *param_1,undefined4 *param_2)

{
  *param_2 = **(undefined4 **)*param_1;
  return;
}



/* Entry: 10745d84c; end: 10745d95b;  */

void FUN_10745d84c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [16];
  
  func_0x00010745ec00();
  FUN_1073d3290(param_2);
  func_0x00010745eafc();
  FUN_10745d95c(auStack_40);
  func_0x00010745e968(auStack_58);
  func_0x00010745d9a8();
  FUN_10745d95c(auStack_40,*(undefined8 *)(unaff_x20 + 0x10),&UNK_10f40fbec,&UNK_10f40fbec,
                unaff_x21 + 0x238,2);
  func_0x00010745e968(auStack_58);
  func_0x00010745d9a8();
  func_0x00010745e968(auStack_58);
  func_0x00010745d9a8();
  func_0x00010745e968(auStack_58);
  func_0x00010745d9a8();
  func_0x00010745ec44();
  func_0x00010745ea40();
  func_0x00010745ecf4();
  return;
}



/* Entry: 10745d95c; end: 10745d9ef;  */

void FUN_10745d95c(void)

{
  undefined1 in_CY;
  undefined8 *unaff_x19;
  
  func_0x00010745ed58();
  func_0x00010745e6a0();
  func_0x00010745e68c();
  while (func_0x00010745e944(*(undefined8 *)*unaff_x19), !(bool)in_CY) {
    func_0x00010745e5bc();
    func_0x00010745e448();
    func_0x00010745ed40();
  }
  return;
}



/* Entry: 10745d9f0; end: 10745da07;  */

void FUN_10745d9f0(undefined8 *param_1,undefined4 *param_2)

{
  *param_2 = **(undefined4 **)*param_1;
  return;
}



/* Entry: 10745da08; end: 10745da6b;  */

long * FUN_10745da08(undefined8 param_1)

{
  long lVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar2;
  long *unaff_x22;
  long *plVar3;
  
  func_0x00010745e804();
  lVar1 = *(long *)(unaff_x20 + 8);
  plVar2 = (long *)(unaff_x20 + 8);
  while (plVar3 = plVar2, lVar1 != 0) {
    while (func_0x00010745ea30(), (int)param_1 == 0) {
      func_0x00010745ec50();
      plVar3 = unaff_x22;
      if (((int)param_1 == 0) || (plVar2 = unaff_x22 + 1, *plVar2 == 0)) goto LAB_10745da5c;
    }
    plVar2 = unaff_x22;
    lVar1 = *unaff_x22;
  }
LAB_10745da5c:
  *unaff_x19 = plVar3;
  return plVar2;
}



/* Entry: 10745da6c; end: 10745daa3;  */

void FUN_10745da6c(long param_1)

{
  long unaff_x20;
  
  func_0x00010745e9e0();
  FUN_10744955c();
  FUN_10744955c(param_1 + 0x28,unaff_x20 + 0x28);
  return;
}



/* Entry: 10745daa4; end: 10745dadb;  */

void FUN_10745daa4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010745ebc8();
  if (unaff_x20 != 0) {
    if (*(char *)(unaff_x19 + 0x10) == '\x01') {
      func_0x00010745d554(unaff_x20 + 0x20);
    }
    func_0x00010745eab0();
  }
  return;
}



/* Entry: 10745dadc; end: 10745db0b;  */

long * FUN_10745dadc(long *param_1,long *param_2,long *param_3,long param_4)

{
  if ((*(byte *)(param_1 + 3) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  if (param_1[param_4 + 6] != 0) {
    if ((ulong)param_1[param_4 + 0xc] < (ulong)(param_2[1] - *param_2)) {
                    /* WARNING: Could not recover jumptable at 0x00010745e500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 0x20))(param_3,*param_2 + param_1[param_4 + 0xc]);
      return param_3;
    }
  }
  return (long *)0x0;
}



/* Entry: 10745db0c; end: 10745db5b;  */

long * FUN_10745db0c(long param_1,long *param_2,long *param_3,long param_4)

{
  ulong uVar1;
  
  param_1 = param_1 + param_4 * 8;
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x60);
    if (uVar1 < (ulong)(param_2[1] - *param_2)) {
                    /* WARNING: Could not recover jumptable at 0x00010745e500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 0x20))(param_3,*param_2 + uVar1);
      return param_3;
    }
  }
  return (long *)0x0;
}



/* Entry: 10745db5c; end: 10745db87;  */

long * FUN_10745db5c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_10745db88();
  }
  return param_1;
}



/* Entry: 10745db88; end: 10745db9f;  */

void FUN_10745db88(long param_1)

{
  if (param_1 != 0) {
    func_0x0001057f951c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10745dba0; end: 10745dba3;  */

void FUN_10745dba0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10745dba4; end: 10745dbb7;  */

void FUN_10745dba4(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10745dbb8; end: 10745dbbf;  */

void FUN_10745dbb8(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001057f951c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10745dbc0; end: 10745dbef;  */

long FUN_10745dbc0(int param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010745eaf0();
  func_0x00010745eadc();
  lVar1 = unaff_x19 + 0x18;
  if (param_1 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 10745dbf0; end: 10745dbf3;  */

void FUN_10745dbf0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10745dbf4; end: 10745dc63;  */

void FUN_10745dbf4(void)

{
  func_0x00010745e794();
  func_0x00010745dc48();
  return;
}



/* Entry: 10745dc64; end: 10745dcb3;  */

ulong FUN_10745dc64(long *param_1,long param_2)

{
  long lVar1;
  undefined1 in_ZR;
  ulong uVar2;
  long lVar3;
  byte bStack_49;
  undefined8 uStack_28;
  
  if ((int)param_1[9] != 0) {
    uVar2 = param_2 + 8;
    func_0x00010745e4a8(uVar2,param_1);
    func_0x00010745e630(&PTR_FUN_1109b2340);
    func_0x00010745ec5c();
    func_0x00010745e874();
    func_0x00010745e428(uStack_28);
    if ((bool)in_ZR) {
      return (ulong)bStack_49;
    }
    ___stack_chk_fail();
    func_0x00010745e874();
    func_0x00010745e608();
    return uVar2;
  }
  lVar1 = *param_1;
  do {
    lVar3 = lVar1;
    if (lVar3 == param_1[1]) break;
    lVar1 = lVar3 + 0x120;
  } while (*(char *)(lVar3 + 0xd8) != '\x01');
  return (ulong)(lVar3 != param_1[1]);
}



/* Entry: 10745dcb4; end: 10745dd07;  */

ulong FUN_10745dcb4(ulong param_1)

{
  undefined1 in_ZR;
  byte bStack_49;
  undefined8 uStack_28;
  
  func_0x00010745e4a8();
  func_0x00010745e630(&PTR_FUN_1109b2340);
  func_0x00010745ec5c();
  func_0x00010745e874();
  func_0x00010745e428(uStack_28);
  if ((bool)in_ZR) {
    return (ulong)bStack_49;
  }
  ___stack_chk_fail();
  func_0x00010745e874();
  func_0x00010745e608();
  return param_1;
}



/* Entry: 10745dd08; end: 10745dd0f;  */

void FUN_10745dd08(void)

{
  return;
}



/* Entry: 10745dd10; end: 10745dd37;  */

void FUN_10745dd10(void)

{
  func_0x00010745e818();
  func_0x00010745e7ac(&PTR_FUN_1109b2340);
  return;
}



/* Entry: 10745dd38; end: 10745dd53;  */

void FUN_10745dd38(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_1109b2340;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10745dd54; end: 10745de3f;  */

void FUN_10745dd54(void)

{
  char *pcVar1;
  undefined1 in_ZR;
  undefined8 uVar2;
  int extraout_w8;
  int iVar3;
  ulong extraout_x8;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  undefined1 auStack_c8 [24];
  char cStack_b0;
  undefined4 uStack_a0;
  undefined8 uStack_38;
  
  func_0x00010745e4cc();
  func_0x00010745eba8();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010745e954();
    iVar3 = extraout_w8;
    if ((bool)in_ZR) {
      uStack_a0 = 9;
      func_0x00010745e8d4();
      func_0x00010745e730();
      if (unaff_w21 != 0) {
        func_0x00010745e8c8();
        func_0x00010745e710();
        func_0x00010745e8c0();
        in_ZR = cStack_b0 == '\x01';
        if ((bool)in_ZR) {
          uVar2 = *(undefined8 *)(unaff_x19 + 0x10);
          func_0x00010745dc90(uVar2,auStack_c8);
          if ((int)uVar2 != 0) {
            func_0x00010745e610();
          }
        }
        func_0x00010745e86c();
        goto LAB_10745ddfc;
      }
      iVar3 = *(int *)(unaff_x20 + 8);
    }
    in_ZR = iVar3 == 0x12;
    if ((bool)in_ZR) {
      lVar4 = *(long *)(unaff_x20 + 0x48);
      do {
        in_ZR = 1;
        if (lVar4 == *(long *)(unaff_x20 + 0x50)) goto LAB_10745ddfc;
        pcVar1 = (char *)(lVar4 + 0x50);
        lVar4 = lVar4 + 0x100;
        in_ZR = *pcVar1 == '\x01';
      } while (!(bool)in_ZR);
      func_0x00010745e610();
    }
    else {
      func_0x00010745eb78();
      func_0x00010745ecd8();
    }
  }
LAB_10745ddfc:
  func_0x00010745e428(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010745e86c();
  func_0x00010745e608();
  func_0x00010745eaf0();
  func_0x00010745eadc();
  func_0x00010745eb68();
  return;
}



/* Entry: 10745de40; end: 10745de67;  */

void FUN_10745de40(undefined8 param_1)

{
  func_0x00010745eaf0();
  func_0x00010745eadc(param_1,&PTR_DAT_1109b2400);
  func_0x00010745eb68();
  return;
}



/* Entry: 10745de68; end: 10745de73;  */

undefined ** FUN_10745de68(void)

{
  return &PTR_DAT_1109b2400;
}



/* Entry: 10745de74; end: 10745decb;  */

void FUN_10745de74(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_19;
  undefined1 *puStack_18;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 != 0xffffffff && *(uint *)(param_2 + 8) == uVar1) {
    puStack_18 = &uStack_19;
    (*(code *)(&PTR_FUN_1109b23a0)[uVar1])(&puStack_18,param_1);
  }
  return;
}



/* Entry: 10745decc; end: 10745df0f;  */

undefined8 FUN_10745decc(void)

{
  return 1;
}



/* Entry: 10745df10; end: 10745df57;  */

void FUN_10745df10(void)

{
  func_0x00010745e804();
  FUN_10745de74();
  return;
}



/* Entry: 10745df58; end: 10745df77;  */

long * FUN_10745df58(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010745df68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return plVar1;
  }
  func_0x000104bfeb48();
  plVar2 = (long *)plVar1[3];
  if (plVar2 == plVar1) {
    lVar3 = 0x20;
  }
  else {
    if (plVar2 == (long *)0x0) {
      return plVar1;
    }
    lVar3 = 0x28;
  }
  (**(code **)(*plVar2 + lVar3))();
  return plVar1;
}



/* Entry: 10745df78; end: 10745dfbb;  */

long * FUN_10745df78(long *param_1)

{
  long *plVar1;
  long lVar2;
  
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



/* Entry: 10745dfbc; end: 10745dfd7;  */

void FUN_10745dfbc(void)

{
  func_0x00010745e908();
  FUN_10745dfd8();
  return;
}



/* Entry: 10745dfd8; end: 10745e027;  */

ulong FUN_10745dfd8(long *param_1,long param_2)

{
  long lVar1;
  undefined1 in_ZR;
  ulong uVar2;
  long lVar3;
  byte bStack_49;
  undefined8 uStack_28;
  
  if ((int)param_1[9] != 0) {
    uVar2 = param_2 + 8;
    func_0x00010745e4a8(uVar2,param_1);
    func_0x00010745e630(&PTR_FUN_1109b2420);
    func_0x00010745ec5c();
    func_0x00010745e874();
    func_0x00010745e428(uStack_28);
    if ((bool)in_ZR) {
      return (ulong)bStack_49;
    }
    ___stack_chk_fail();
    func_0x00010745e874();
    func_0x00010745e608();
    return uVar2;
  }
  lVar1 = *param_1;
  do {
    lVar3 = lVar1;
    if (lVar3 == param_1[1]) break;
    lVar1 = lVar3 + 0x120;
  } while (*(char *)(lVar3 + 0x108) != '\x01');
  return (ulong)(lVar3 != param_1[1]);
}



/* Entry: 10745e028; end: 10745e07b;  */

ulong FUN_10745e028(ulong param_1)

{
  undefined1 in_ZR;
  byte bStack_49;
  undefined8 uStack_28;
  
  func_0x00010745e4a8();
  func_0x00010745e630(&PTR_FUN_1109b2420);
  func_0x00010745ec5c();
  func_0x00010745e874();
  func_0x00010745e428(uStack_28);
  if ((bool)in_ZR) {
    return (ulong)bStack_49;
  }
  ___stack_chk_fail();
  func_0x00010745e874();
  func_0x00010745e608();
  return param_1;
}



/* Entry: 10745e07c; end: 10745e083;  */

void FUN_10745e07c(void)

{
  return;
}



/* Entry: 10745e084; end: 10745e0ab;  */

void FUN_10745e084(void)

{
  func_0x00010745e818();
  func_0x00010745e7ac(&PTR_FUN_1109b2420);
  return;
}



/* Entry: 10745e0ac; end: 10745e0c7;  */

void FUN_10745e0ac(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_1109b2420;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10745e0c8; end: 10745e1b3;  */

void FUN_10745e0c8(void)

{
  char *pcVar1;
  undefined1 in_ZR;
  undefined8 uVar2;
  int extraout_w8;
  int iVar3;
  ulong extraout_x8;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  undefined1 auStack_c8 [24];
  char cStack_b0;
  undefined4 uStack_a0;
  undefined8 uStack_38;
  
  func_0x00010745e4cc();
  func_0x00010745eba8();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010745e954();
    iVar3 = extraout_w8;
    if ((bool)in_ZR) {
      uStack_a0 = 9;
      func_0x00010745e8d4();
      func_0x00010745e730();
      if (unaff_w21 != 0) {
        func_0x00010745e8c8();
        func_0x00010745e710();
        func_0x00010745e8c0();
        in_ZR = cStack_b0 == '\x01';
        if ((bool)in_ZR) {
          uVar2 = *(undefined8 *)(unaff_x19 + 0x10);
          func_0x00010745e004(uVar2,auStack_c8);
          if ((int)uVar2 != 0) {
            func_0x00010745e610();
          }
        }
        func_0x00010745e86c();
        goto LAB_10745e170;
      }
      iVar3 = *(int *)(unaff_x20 + 8);
    }
    in_ZR = iVar3 == 0x12;
    if ((bool)in_ZR) {
      lVar4 = *(long *)(unaff_x20 + 0x48);
      do {
        in_ZR = 1;
        if (lVar4 == *(long *)(unaff_x20 + 0x50)) goto LAB_10745e170;
        pcVar1 = (char *)(lVar4 + 0xe0);
        lVar4 = lVar4 + 0x100;
        in_ZR = *pcVar1 == '\x01';
      } while (!(bool)in_ZR);
      func_0x00010745e610();
    }
    else {
      func_0x00010745eb78();
      func_0x00010745ecd8();
    }
  }
LAB_10745e170:
  func_0x00010745e428(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010745e86c();
  func_0x00010745e608();
  func_0x00010745eaf0();
  func_0x00010745eadc();
  func_0x00010745eb68();
  return;
}



/* Entry: 10745e1b4; end: 10745e1db;  */

void FUN_10745e1b4(undefined8 param_1)

{
  func_0x00010745eaf0();
  func_0x00010745eadc(param_1,&PTR_DAT_1109b2480);
  func_0x00010745eb68();
  return;
}



/* Entry: 10745e1dc; end: 10745e1e7;  */

undefined ** FUN_10745e1dc(void)

{
  return &PTR_DAT_1109b2480;
}



/* Entry: 10745e1e8; end: 10745e203;  */

void FUN_10745e1e8(void)

{
  func_0x00010745e908();
  FUN_10745e204();
  return;
}



/* Entry: 10745e204; end: 10745e253;  */

ulong FUN_10745e204(long *param_1,long param_2)

{
  long lVar1;
  undefined1 in_ZR;
  ulong uVar2;
  long lVar3;
  byte bStack_49;
  undefined8 uStack_28;
  
  if ((int)param_1[9] != 0) {
    uVar2 = param_2 + 8;
    func_0x00010745e4a8(uVar2,param_1);
    func_0x00010745e630(&PTR_FUN_1109b24a0);
    func_0x00010745ec5c();
    func_0x00010745e874();
    func_0x00010745e428(uStack_28);
    if ((bool)in_ZR) {
      return (ulong)bStack_49;
    }
    ___stack_chk_fail();
    func_0x00010745e874();
    func_0x00010745e608();
    return uVar2;
  }
  lVar1 = *param_1;
  do {
    lVar3 = lVar1;
    if (lVar3 == param_1[1]) break;
    lVar1 = lVar3 + 0x120;
  } while (*(char *)(lVar3 + 0x118) != '\x01');
  return (ulong)(lVar3 != param_1[1]);
}



/* Entry: 10745e254; end: 10745e2a7;  */

ulong FUN_10745e254(ulong param_1)

{
  undefined1 in_ZR;
  byte bStack_49;
  undefined8 uStack_28;
  
  func_0x00010745e4a8();
  func_0x00010745e630(&PTR_FUN_1109b24a0);
  func_0x00010745ec5c();
  func_0x00010745e874();
  func_0x00010745e428(uStack_28);
  if ((bool)in_ZR) {
    return (ulong)bStack_49;
  }
  ___stack_chk_fail();
  func_0x00010745e874();
  func_0x00010745e608();
  return param_1;
}



/* Entry: 10745e2a8; end: 10745e2af;  */

void FUN_10745e2a8(void)

{
  return;
}



/* Entry: 10745e2b0; end: 10745e2d7;  */

void FUN_10745e2b0(void)

{
  func_0x00010745e818();
  func_0x00010745e7ac(&PTR_FUN_1109b24a0);
  return;
}



/* Entry: 10745e2d8; end: 10745e2f3;  */

void FUN_10745e2d8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_1109b24a0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10745e2f4; end: 10745e3df;  */

void FUN_10745e2f4(void)

{
  char *pcVar1;
  undefined1 in_ZR;
  undefined8 uVar2;
  int extraout_w8;
  int iVar3;
  ulong extraout_x8;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  undefined1 auStack_c8 [24];
  char cStack_b0;
  undefined4 uStack_a0;
  undefined8 uStack_38;
  
  func_0x00010745e4cc();
  func_0x00010745eba8();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010745e954();
    iVar3 = extraout_w8;
    if ((bool)in_ZR) {
      uStack_a0 = 9;
      func_0x00010745e8d4();
      func_0x00010745e730();
      if (unaff_w21 != 0) {
        func_0x00010745e8c8();
        func_0x00010745e710();
        func_0x00010745e8c0();
        in_ZR = cStack_b0 == '\x01';
        if ((bool)in_ZR) {
          uVar2 = *(undefined8 *)(unaff_x19 + 0x10);
          func_0x00010745e230(uVar2,auStack_c8);
          if ((int)uVar2 != 0) {
            func_0x00010745e610();
          }
        }
        func_0x00010745e86c();
        goto LAB_10745e39c;
      }
      iVar3 = *(int *)(unaff_x20 + 8);
    }
    in_ZR = iVar3 == 0x12;
    if ((bool)in_ZR) {
      lVar4 = *(long *)(unaff_x20 + 0x48);
      do {
        in_ZR = 1;
        if (lVar4 == *(long *)(unaff_x20 + 0x50)) goto LAB_10745e39c;
        pcVar1 = (char *)(lVar4 + 0xf8);
        lVar4 = lVar4 + 0x100;
        in_ZR = *pcVar1 == '\x01';
      } while (!(bool)in_ZR);
      func_0x00010745e610();
    }
    else {
      func_0x00010745eb78();
      func_0x00010745ecd8();
    }
  }
LAB_10745e39c:
  func_0x00010745e428(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010745e86c();
  func_0x00010745e608();
  func_0x00010745eaf0();
  func_0x00010745eadc();
  func_0x00010745eb68();
  return;
}



/* Entry: 10745e3e0; end: 10745e407;  */

void FUN_10745e3e0(undefined8 param_1)

{
  func_0x00010745eaf0();
  func_0x00010745eadc(param_1,&PTR_DAT_1109b2500);
  func_0x00010745eb68();
  return;
}



/* Entry: 10745e408; end: 10745ed7f;  */

undefined ** FUN_10745e408(void)

{
  return &PTR_DAT_1109b2500;
}



/* Entry: 10745ed80; end: 10745edcf;  */

void FUN_10745ed80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  func_0x00010745f2c4();
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x000107278acc(param_1,param_4);
    func_0x00010745f324();
  }
  else {
    func_0x000107278acc();
    func_0x00010745f324();
  }
  return;
}



/* Entry: 10745edd0; end: 10745eddb;  */

void FUN_10745edd0(undefined8 param_1,undefined8 param_2)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  func_0x00010745f2c4(param_1,param_2,param_2,param_2);
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x000107278acc(param_1,param_2);
    func_0x00010745f324();
  }
  else {
    func_0x000107278acc();
    func_0x00010745f324();
  }
  return;
}



/* Entry: 10745eddc; end: 10745f01f;  */

void FUN_10745eddc(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined1 auStack_7a8 [56];
  undefined1 uStack_770;
  undefined1 auStack_760 [400];
  undefined1 auStack_5d0 [96];
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined1 auStack_508 [56];
  undefined1 uStack_4d0;
  undefined1 auStack_4c0 [400];
  undefined1 auStack_330 [96];
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
  undefined8 uStack_278;
  undefined1 auStack_270 [56];
  undefined1 uStack_238;
  undefined1 auStack_228 [400];
  undefined1 auStack_98 [104];
  
  FUN_10745f294();
  func_0x0001077512dc(auStack_228);
  auStack_270[0] = 0;
  uStack_238 = 0;
  func_0x00010745f2e4();
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  FUN_1073df1c8(&uStack_2d0);
  func_0x00010745f310(auStack_98);
  func_0x00010745f33c();
  func_0x0001077512dc(auStack_4c0);
  auStack_508[0] = 0;
  uStack_4d0 = 0;
  func_0x00010745f2e4();
  uStack_568 = 0;
  uStack_570 = 0;
  uStack_558 = 0;
  uStack_560 = 0;
  uStack_548 = 0;
  uStack_550 = 0;
  uStack_538 = 0;
  uStack_540 = 0;
  uStack_528 = 0;
  uStack_530 = 0;
  uStack_518 = 0;
  uStack_520 = 0;
  FUN_1073df1c8(&uStack_570);
  func_0x00010745f310(auStack_330);
  func_0x00010745f33c();
  func_0x0001077512dc(auStack_760);
  auStack_7a8[0] = 0;
  uStack_770 = 0;
  func_0x00010745f2e4();
  uStack_808 = 0;
  uStack_810 = 0;
  uStack_7f8 = 0;
  uStack_800 = 0;
  uStack_7e8 = 0;
  uStack_7f0 = 0;
  uStack_7d8 = 0;
  uStack_7e0 = 0;
  uStack_7c8 = 0;
  uStack_7d0 = 0;
  uStack_7b8 = 0;
  uStack_7c0 = 0;
  FUN_1073df1c8(&uStack_810);
  func_0x00010745f310(auStack_5d0);
  FUN_10745ed80();
  func_0x00010726b164(auStack_5d0);
  func_0x00010726b164(&uStack_810);
  func_0x00010724b3d8(auStack_7a8);
  func_0x000107267da8(auStack_760);
  func_0x00010726b164(auStack_330);
  func_0x00010726b164(&uStack_570);
  func_0x00010724b3d8(auStack_508);
  func_0x000107267da8(auStack_4c0);
  func_0x00010726b164(auStack_98);
  func_0x00010726b164(&uStack_2d0);
  func_0x00010724b3d8(auStack_270);
  puVar1 = auStack_228;
  func_0x000107267da8(puVar1);
  func_0x00010745f2f0();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726b164(auStack_5d0);
  func_0x00010726b164(&uStack_810);
  func_0x00010724b3d8(auStack_7a8);
  func_0x000107267da8(auStack_760);
  func_0x00010726b164(auStack_330);
  func_0x00010726b164(&uStack_570);
  do {
    func_0x00010724b3d8(auStack_508);
    func_0x000107267da8(auStack_4c0);
    func_0x00010726b164(auStack_98);
    func_0x00010726b164(&uStack_2d0);
    func_0x00010724b3d8(auStack_270);
    func_0x000107267da8(auStack_228);
    __Unwind_Resume(puVar1);
  } while( true );
}



/* Entry: 10745f020; end: 10745f02f;  */

void FUN_10745f020(long param_1)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  func_0x00010745f2c4(param_1,param_1 + 8,param_1 + 8,param_1 + 8);
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x0001072f64f4();
    func_0x00010745f318();
  }
  else {
    func_0x0001072f64f4();
    func_0x00010745f318();
  }
  return;
}



/* Entry: 10745f030; end: 10745f07f;  */

void FUN_10745f030(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  func_0x00010745f2c4();
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x0001072f64f4(param_1,param_4);
    func_0x00010745f318();
  }
  else {
    func_0x0001072f64f4();
    func_0x00010745f318();
  }
  return;
}



/* Entry: 10745f080; end: 10745f08b;  */

void FUN_10745f080(undefined8 param_1,undefined8 param_2)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  
  func_0x00010745f2c4(param_1,param_2,param_2,param_2);
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x0001072f64f4(param_1,param_2);
    func_0x00010745f318();
  }
  else {
    func_0x0001072f64f4();
    func_0x00010745f318();
  }
  return;
}



/* Entry: 10745f08c; end: 10745f293;  */

void FUN_10745f08c(float param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 auStack_620 [16];
  undefined1 auStack_610 [16];
  undefined1 auStack_600 [16];
  undefined1 auStack_5f0 [16];
  undefined1 auStack_5e0 [16];
  undefined1 auStack_5d0 [16];
  undefined1 auStack_5c0 [56];
  undefined1 uStack_588;
  undefined1 auStack_578 [400];
  undefined1 auStack_3e8 [56];
  undefined1 uStack_3b0;
  undefined1 auStack_3a0 [400];
  undefined1 auStack_210 [56];
  undefined1 uStack_1d8;
  undefined1 auStack_1c8 [408];
  
  FUN_10745f294();
  func_0x0001077512dc(auStack_1c8);
  auStack_210[0] = 0;
  uStack_1d8 = 0;
  func_0x00010745f2e4();
  func_0x0001072f6da0(auStack_5e0);
  func_0x00010745f308(auStack_5d0);
  func_0x00010745f33c();
  func_0x0001077512dc(auStack_3a0);
  auStack_3e8[0] = 0;
  uStack_3b0 = 0;
  func_0x00010745f2e4();
  func_0x0001072f6da0(auStack_600);
  func_0x00010745f308(auStack_5f0);
  func_0x00010745f33c();
  func_0x0001077512dc(param_1 + 1.0,auStack_578);
  auStack_5c0[0] = 0;
  uStack_588 = 0;
  func_0x00010745f2e4();
  func_0x0001072f6da0(auStack_620);
  func_0x00010745f308(auStack_610);
  FUN_10745f030();
  func_0x0001072dbd40(auStack_610);
  func_0x0001072dbd40(auStack_620);
  func_0x00010724b3d8(auStack_5c0);
  func_0x000107267da8(auStack_578);
  func_0x0001072dbd40(auStack_5f0);
  func_0x0001072dbd40(auStack_600);
  func_0x00010724b3d8(auStack_3e8);
  func_0x000107267da8(auStack_3a0);
  func_0x0001072dbd40(auStack_5d0);
  func_0x0001072dbd40(auStack_5e0);
  func_0x00010724b3d8(auStack_210);
  puVar1 = auStack_1c8;
  func_0x000107267da8(puVar1);
  func_0x00010745f2f0();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072dbd40(auStack_610);
  func_0x0001072dbd40(auStack_620);
  func_0x00010724b3d8(auStack_5c0);
  func_0x000107267da8(auStack_578);
  func_0x0001072dbd40(auStack_5f0);
  func_0x0001072dbd40(auStack_600);
  do {
    func_0x00010724b3d8(auStack_3e8);
    func_0x000107267da8(auStack_3a0);
    func_0x0001072dbd40(auStack_5d0);
    func_0x0001072dbd40(auStack_5e0);
    func_0x00010724b3d8(auStack_210);
    func_0x000107267da8(auStack_1c8);
    __Unwind_Resume(puVar1);
  } while( true );
}



/* Entry: 10745f294; end: 10745f347;  */

float FUN_10745f294(undefined8 *param_1)

{
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  return *(float *)*param_1 + -1.0;
}



/* Entry: 10745f348; end: 10745f4af;  */

undefined ** FUN_10745f348(long *param_1,long *param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  func_0x000107460740();
  uStack_48 = extraout_x8;
  if (*(long *)(*param_2 + 0x18) == 0) {
    func_0x0001078696e8();
    ppuVar4 = (undefined **)(unaff_x19 + 0x18);
    func_0x0001078696e8();
  }
  else {
    puStack_88 = &UNK_10e52b660;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    puStack_a8 = &UNK_10e52b660;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    func_0x0001074607b0(param_1 + 0x1c);
    func_0x000107279a5c();
    plVar1 = param_1 + 0x34;
    FUN_10745f4b0();
    plVar2 = param_1 + 0x31;
    func_0x0001072ba99c();
    puVar3 = (undefined8 *)0x30;
    __Znwm();
    *puVar3 = &PTR_DAT_1109b2530;
    puVar3[1] = param_1;
    puVar3[2] = &puStack_88;
    puVar3[3] = &puStack_a8;
    puVar3[4] = plVar2;
    puVar3[5] = plVar1;
    puStack_50 = puVar3;
    func_0x000107869948(param_2,auStack_68);
    func_0x000107277390(auStack_68);
    *param_1 = *param_1 + 1;
    func_0x0001078697d4();
    func_0x0001078697d4(unaff_x19 + 0x18,&puStack_a8);
    func_0x000107460874();
    func_0x00010726ae88(&puStack_a8);
    ppuVar4 = &puStack_88;
    func_0x00010726ae88();
  }
  func_0x00010746072c(uStack_48);
  if ((bool)in_ZR) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  func_0x000107460840();
  func_0x00010726b264();
  func_0x000107460794();
  func_0x00010745f964();
  return (undefined **)*ppuVar4;
}


