/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100045ed8; end: 100045fdb;  */

/* WARNING: Possible PIC construction at 0x000100045f20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100045f24) */

void FUN_100045ed8(void)

{
  uRam0000000113833360 = 0;
  uRam0000000113833358 = 0;
  uRam0000000113833370 = 0;
  uRam0000000113833368 = 0;
  uRam0000000113833350 = 0;
  uRam0000000113833348 = 0;
  puRam0000000113833338 = &UNK_109ce5008;
  ppuRam0000000113833340 = &PTR_DAT_110ae9180;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&UNK_109ce4d1c,0x113833338,0x100000000);
  return;
}



/* Entry: 100045fdc; end: 1000460ab;  */

undefined8 * FUN_100045fdc(undefined8 *param_1,ushort param_2,ushort param_3)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_110b5bf28;
  *(undefined2 *)(param_1 + 1) = 0;
  *(ushort *)((long)param_1 + 10) =
       param_2 & 7 | (param_3 & 3) << 5 | *(ushort *)((long)param_1 + 10) & 0x8000;
  param_1[8] = param_1 + 10;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  param_1[9] = 0x100000000;
  param_1[0xb] = param_1 + 0xf;
  param_1[0xc] = param_1 + 0xf;
  param_1[0xd] = 1;
  *(undefined4 *)(param_1 + 0xe) = 0;
  puVar1 = param_1;
  FUN_1000461ac();
  func_0x000100046820(param_1 + 8,puVar1);
  return param_1;
}



/* Entry: 1000460ac; end: 1000461ab;  */

void FUN_1000460ac(void)

{
  FUN_100045fdc(0x1137e1dd0,0,0);
  uRam00000001137e1e50 = 0;
  ppuRam00000001137e1e58 = &PTR_DAT_110b3fac8;
  uRam00000001137e1e60 = 0;
  ppuRam00000001137e1dd0 = &PTR_DAT_110b5be10;
  ppuRam00000001137e1e68 = &PTR_DAT_110b5b9a8;
  ppuRam00000001137e1e70 = &PTR_DAT_110b3fb30;
  uRam00000001137e1e88 = 0x1137e1e70;
  FUN_10004687c();
  uRam00000001137e1dda = uRam00000001137e1dda & 0xffbf | 0x20;
  uRam00000001137e1e50 = 0;
  uRam00000001137e1e60 = CONCAT62(uRam00000001137e1e60._2_6_,0x100);
  FUN_100046b10(0x1137e1dd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&DAT_109d2f60c,0x1137e1dd0,0x100000000);
  return;
}



/* Entry: 1000461ac; end: 10004623b;  */

undefined8 FUN_1000461ac(void)

{
  int iVar1;
  
  if ((bRam0000000113834340 & 1) == 0) {
    iVar1 = 0x13834340;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      puRam0000000113834320 = &UNK_10f601fcf;
      uRam0000000113834328 = 0xf;
      puRam0000000113834330 = &UNK_10f601ea6;
      uRam0000000113834338 = 0;
      FUN_100046320();
      func_0x000107c60e4c(0x113834340);
    }
  }
  return 0x113834320;
}



/* Entry: 10004623c; end: 10004631f;  */

void FUN_10004623c(long *param_1,code *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
  if ((bRam00000001138345c8 & 1) == 0) {
    iVar1 = 0x138345c8;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      func_0x000107c60d30(0x113834588);
      func_0x000107c60e34(PTR___ZNSt3__115recursive_mutexD1Ev_110346598,0x113834588,0x100000000);
      func_0x000107c60e4c(0x1138345c8);
    }
  }
  lVar2 = 0x113834588;
  func_0x000107c60d28();
  if (*param_1 == 0) {
    (*param_2)();
    *param_1 = lVar2;
    param_1[1] = param_3;
    param_1[2] = (long)plRam0000000113834580;
    plRam0000000113834580 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(0x113834588);
  return;
}



/* Entry: 100046320; end: 100046387;  */

void FUN_100046320(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  if (lRam0000000113834348 == 0) {
    FUN_10004623c(0x113834348,FUN_100046388,&UNK_109df5b74);
  }
  FUN_1000467b4(auStack_38,lRam0000000113834348 + 0x70,param_1);
  return;
}



/* Entry: 100046388; end: 1000464e7;  */

undefined8 * FUN_100046388(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x158;
  func_0x000107c60e20();
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[8] = puVar1 + 10;
  puVar1[9] = 0x400000000;
  puVar1[0xe] = puVar1 + 0x12;
  puVar1[0xf] = puVar1 + 0x12;
  puVar1[0x10] = 0x10;
  *(undefined4 *)(puVar1 + 0x11) = 0;
  puVar1[0x22] = puVar1 + 0x26;
  puVar1[0x23] = puVar1 + 0x26;
  puVar1[0x24] = 4;
  *(undefined4 *)(puVar1 + 0x25) = 0;
  puVar1[0x2a] = 0;
  if (lRam0000000113834308 == 0) {
    FUN_10004623c(0x113834308,FUN_1000464e8,&UNK_109df5bf4);
  }
  FUN_100046668(puVar1,lRam0000000113834308);
  if (lRam00000001137e7c38 == 0) {
    FUN_10004623c(0x1137e7c38,FUN_1000464e8,&UNK_109df5bf4);
  }
  FUN_100046668(puVar1,lRam00000001137e7c38);
  return puVar1;
}



/* Entry: 1000464e8; end: 1000465f3;  */

void FUN_1000464e8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xa0;
  func_0x000107c60e20();
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[4] = puVar1 + 6;
  *(undefined4 *)((long)puVar1 + 0x2c) = 4;
  puVar1[10] = puVar1 + 0xc;
  *(undefined4 *)((long)puVar1 + 0x5c) = 4;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0x1000000000;
  puVar1[0x13] = 0;
  return;
}



/* Entry: 1000465f4; end: 100046667;  */

void FUN_1000465f4(long *param_1,ulong *param_2,undefined1 param_3)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  
  puVar3 = param_2;
  func_0x000100046544();
  lVar2 = 0x14;
  if (param_2[1] != *param_2) {
    lVar2 = 0x10;
  }
  puVar1 = (ulong *)(param_2[1] + (ulong)*(uint *)((long)param_2 + lVar2) * 8);
  puVar4 = puVar3;
  for (; (puVar1 != puVar3 && (puVar4 = puVar3, 0xfffffffffffffffd < *puVar3)); puVar3 = puVar3 + 1)
  {
    puVar4 = puVar1;
  }
  *param_1 = (long)puVar4;
  param_1[1] = (long)puVar1;
  *(undefined1 *)(param_1 + 2) = param_3;
  return;
}



/* Entry: 100046668; end: 1000467b3;  */

void FUN_100046668(long param_1,long param_2)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auStack_48 [24];
  
  FUN_1000465f4(auStack_48,param_1 + 0x110,param_2);
  if (lRam00000001137e7c38 == 0) {
    FUN_10004623c(0x1137e7c38,FUN_1000464e8,&UNK_109df5bf4);
  }
  if (param_2 != lRam00000001137e7c38) {
    if (lRam00000001137e7c38 == 0) {
      FUN_10004623c(0x1137e7c38,FUN_1000464e8,&UNK_109df5bf4);
    }
    plVar5 = *(long **)(lRam00000001137e7c38 + 0x80);
    uVar1 = *(uint *)(lRam00000001137e7c38 + 0x88);
    plVar6 = plVar5;
    if (uVar1 != 0) {
      for (; *plVar6 == 0 || *plVar6 == -8; plVar6 = plVar6 + 1) {
      }
    }
    if (plVar6 != plVar5 + uVar1) {
      puVar4 = (undefined8 *)*plVar6;
      do {
        lVar3 = puVar4[1];
        uVar2 = *(ushort *)(lVar3 + 10);
        if ((((uVar2 & 7) == 4) || ((uVar2 & 0x180) == 0x80 || (uVar2 & 0x800) != 0)) ||
           (*(long *)(lVar3 + 0x18) != 0)) {
          FUN_100046c98(param_1,lVar3,param_2);
        }
        else {
          FUN_1000493d8(param_1,lVar3,param_2,puVar4 + 2,*puVar4);
        }
        do {
          plVar6 = plVar6 + 1;
          puVar4 = (undefined8 *)*plVar6;
        } while (puVar4 == (undefined8 *)0x0 || puVar4 == (undefined8 *)0xfffffffffffffff8);
      } while (plVar6 != plVar5 + uVar1);
    }
  }
  return;
}



/* Entry: 1000467b4; end: 10004687b;  */

void FUN_1000467b4(long *param_1,ulong *param_2,undefined1 param_3)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  
  puVar3 = param_2;
  func_0x000100046544();
  lVar2 = 0x14;
  if (param_2[1] != *param_2) {
    lVar2 = 0x10;
  }
  puVar1 = (ulong *)(param_2[1] + (ulong)*(uint *)((long)param_2 + lVar2) * 8);
  puVar4 = puVar3;
  for (; (puVar1 != puVar3 && (puVar4 = puVar3, 0xfffffffffffffffd < *puVar3)); puVar3 = puVar3 + 1)
  {
    puVar4 = puVar1;
  }
  *param_1 = (long)puVar4;
  param_1[1] = (long)puVar1;
  *(undefined1 *)(param_1 + 2) = param_3;
  return;
}



/* Entry: 10004687c; end: 100046b0f;  */

void FUN_10004687c(long param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  
  if ((*(ushort *)(param_1 + 10) >> 0xe & 1) != 0) {
    if (lRam0000000113834348 == 0) {
      FUN_10004623c(0x113834348,FUN_100046388,&UNK_109df5b74);
    }
    lVar3 = lRam0000000113834348;
    if (*(int *)(param_1 + 0x6c) == *(int *)(param_1 + 0x70)) {
      if (lRam0000000113834308 == 0) {
        FUN_10004623c(0x113834308,FUN_1000464e8,&UNK_109df5bf4);
      }
      func_0x000107c2aff8(lVar3,param_1,param_2,param_3,lRam0000000113834308);
    }
    else {
      if (uRam00000001137e7c38 == 0) {
        FUN_10004623c(0x1137e7c38,FUN_1000464e8,&UNK_109df5bf4);
      }
      puVar8 = *(ulong **)(param_1 + 0x60);
      lVar6 = 0x14;
      if (puVar8 != *(ulong **)(param_1 + 0x58)) {
        lVar6 = 0x10;
      }
      uVar2 = *(uint *)(param_1 + 0x58 + lVar6);
      puVar1 = puVar8 + uVar2;
      lVar5 = (ulong)uVar2 << 3;
      puVar7 = puVar8;
      lVar6 = lVar5;
      if (uVar2 == 0) {
LAB_1000469b4:
        if (puVar7 != puVar1) {
          uVar4 = *puVar7;
          while (uVar4 != uRam00000001137e7c38) {
            do {
              puVar7 = puVar7 + 1;
              if (puVar7 == puVar1) goto LAB_100046a38;
              uVar4 = *puVar7;
            } while (0xfffffffffffffffd < uVar4);
            if (puVar7 == puVar1) goto LAB_100046a38;
          }
          if (puVar7 != puVar1) {
            puVar8 = *(ulong **)(lVar3 + 0x118);
            lVar6 = 0x14;
            if (puVar8 != *(ulong **)(lVar3 + 0x110)) {
              lVar6 = 0x10;
            }
            uVar2 = *(uint *)(lVar3 + 0x110 + lVar6);
            puVar7 = puVar8;
            if (uVar2 == 0) goto LAB_100046aa0;
            lVar6 = (ulong)uVar2 << 3;
            goto LAB_100046a1c;
          }
        }
      }
      else {
        do {
          if (*puVar7 < 0xfffffffffffffffe) goto LAB_1000469b4;
          lVar6 = lVar6 + -8;
          puVar7 = puVar7 + 1;
        } while (lVar6 != 0);
      }
LAB_100046a38:
      if (uVar2 == 0) {
LAB_100046a58:
        if (puVar8 != puVar1) {
          uVar4 = *puVar8;
          do {
            func_0x000107c2aff8(lVar3,param_1,param_2,param_3,uVar4);
            do {
              puVar8 = puVar8 + 1;
              if (puVar8 == puVar1) goto LAB_100046ae4;
              uVar4 = *puVar8;
            } while (0xfffffffffffffffd < uVar4);
          } while (puVar8 != puVar1);
        }
      }
      else {
        do {
          if (*puVar8 < 0xfffffffffffffffe) goto LAB_100046a58;
          puVar8 = puVar8 + 1;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
  }
LAB_100046ae4:
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(long *)(param_1 + 0x18) = param_3;
  if (param_3 == 1) {
    *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) | 0x1000;
  }
  return;
  while( true ) {
    puVar7 = puVar7 + 1;
    lVar6 = lVar6 + -8;
    if (lVar6 == 0) break;
LAB_100046a1c:
    if (*puVar7 < 0xfffffffffffffffe) goto LAB_100046aa0;
  }
  goto LAB_100046ae4;
LAB_100046aa0:
  puVar8 = puVar8 + uVar2;
  if (puVar7 != puVar8) {
    uVar4 = *puVar7;
    do {
      func_0x000107c2aff8(lVar3,param_1,param_2,param_3,uVar4);
      do {
        puVar7 = puVar7 + 1;
        if (puVar7 == puVar8) goto LAB_100046ae4;
        uVar4 = *puVar7;
      } while (0xfffffffffffffffd < uVar4);
    } while (puVar7 != puVar8);
  }
  goto LAB_100046ae4;
}



/* Entry: 100046b10; end: 100046b77;  */

void FUN_100046b10(long param_1)

{
  if (lRam0000000113834348 == 0) {
    FUN_10004623c(0x113834348,FUN_100046388,&UNK_109df5b74);
  }
  FUN_100046b78(lRam0000000113834348,param_1,0);
  *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) | 0x4000;
  return;
}



/* Entry: 100046b78; end: 100046c97;  */

/* WARNING: Possible PIC construction at 0x000100046e20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100046e24) */

long * FUN_100046b78(long *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  ushort uVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  uint uVar10;
  ulong *puVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  ulong unaff_x19;
  long unaff_x20;
  long *plVar17;
  ulong *puVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_70 [8];
  undefined *apuStack_68 [4];
  undefined2 uStack_48;
  
  if (((param_3 & 1) == 0) && ((*(ushort *)(param_2 + 10) >> 0xd & 1) != 0)) {
    param_1 = param_1 + 8;
    goto code_r0x000107c2aff4;
  }
  if (*(int *)(param_2 + 0x6c) != *(int *)(param_2 + 0x70)) {
    puVar11 = *(ulong **)(param_2 + 0x60);
    lVar13 = 0x14;
    if (puVar11 != *(ulong **)(param_2 + 0x58)) {
      lVar13 = 0x10;
    }
    uVar12 = *(uint *)((long)(param_2 + 0x58) + lVar13);
    puVar18 = puVar11;
    plVar17 = param_1;
    if (uVar12 == 0) {
LAB_100046c60:
      while (puVar18 != puVar11 + uVar12) {
        plVar17 = param_1;
        FUN_100046c98(param_1,param_2,*puVar18);
        do {
          puVar18 = puVar18 + 1;
          if (puVar18 == puVar11 + uVar12) {
            return plVar17;
          }
        } while (0xfffffffffffffffd < *puVar18);
      }
    }
    else {
      lVar13 = (ulong)uVar12 << 3;
      do {
        if (*puVar18 < 0xfffffffffffffffe) goto LAB_100046c60;
        puVar18 = puVar18 + 1;
        lVar13 = lVar13 + -8;
      } while (lVar13 != 0);
    }
    return plVar17;
  }
  if (uRam0000000113834308 == 0) {
    FUN_10004623c(0x113834308,FUN_1000464e8,&UNK_109df5bf4);
  }
  unaff_x19 = uRam0000000113834308;
  unaff_x29 = &stack0xfffffffffffffff0;
  uVar19 = *(ulong *)(param_2 + 0x18);
  bVar4 = false;
  plVar17 = param_1;
  uVar9 = uRam0000000113834308;
  if (uVar19 != 0) {
    if ((*(ushort *)(param_2 + 10) >> 0xd & 1) == 0) {
      uVar20 = *(undefined8 *)(param_2 + 0x10);
    }
    else {
      uVar20 = *(undefined8 *)(param_2 + 0x10);
      plVar17 = (long *)(uRam0000000113834308 + 0x80);
      func_0x000107c2b024(plVar17,uVar20,uVar19);
      if (((int)plVar17 != -1) && ((long)(int)plVar17 != (ulong)*(uint *)(unaff_x19 + 0x88))) {
        return plVar17;
      }
    }
    plVar17 = (long *)(unaff_x19 + 0x80);
    FUN_1000470fc(plVar17,uVar20,uVar19,param_2);
    if (((ulong)plVar17 & 1) == 0) {
      FUN_1000479bc();
      func_0x000107c2b02c();
      puVar1 = (undefined8 *)plVar17[4];
      if ((ulong)(plVar17[3] - (long)puVar1) < 0x1d) {
        func_0x000107c2b02c();
      }
      else {
        puVar1[1] = 0x724520656e694c64;
        *puVar1 = 0x6e616d6d6f43203a;
        *(undefined8 *)((long)puVar1 + 0x15) = 0x27206e6f6974704f;
        *(undefined8 *)((long)puVar1 + 0xd) = 0x203a726f72724520;
        plVar17[4] = plVar17[4] + 0x1d;
      }
      uVar9 = *(ulong *)(param_2 + 0x18);
      func_0x000107c2af4c();
      puVar1 = (undefined8 *)plVar17[4];
      if ((ulong)(plVar17[3] - (long)puVar1) < 0x1d) {
        uVar9 = 0x1d;
        func_0x000107c2b02c();
      }
      else {
        puVar1[1] = 0x726f6d2064657265;
        *puVar1 = 0x7473696765722027;
        *(undefined8 *)((long)puVar1 + 0x15) = 0xa2165636e6f206e;
        *(undefined8 *)((long)puVar1 + 0xd) = 0x6168742065726f6d;
        plVar17[4] = plVar17[4] + 0x1d;
      }
      bVar4 = true;
    }
    else {
      bVar4 = false;
      uVar9 = uVar19;
    }
  }
  uVar3 = *(ushort *)(param_2 + 10);
  if ((uVar3 & 0x180) == 0x80) {
    param_1 = (long *)(unaff_x19 + 0x20);
  }
  else {
    if ((uVar3 >> 0xb & 1) == 0) {
      if ((uVar3 & 7) == 4) {
        if (*(long *)(unaff_x19 + 0x98) == 0) {
          *(long *)(unaff_x19 + 0x98) = param_2;
          goto joined_r0x000100046f04;
        }
        apuStack_68[0] = &UNK_10f60204b;
        uStack_48 = 0x103;
        FUN_1000479bc();
        uVar9 = 0;
        func_0x000107c2afec(param_2,apuStack_68,0,0,plVar17);
        *(long *)(unaff_x19 + 0x98) = param_2;
      }
      else {
joined_r0x000100046f04:
        if (!bVar4) {
          if (uRam00000001137e7c38 == 0) {
            plVar17 = (long *)0x1137e7c38;
            FUN_10004623c(0x1137e7c38,FUN_1000464e8,&UNK_109df5bf4);
          }
          if (unaff_x19 == uRam00000001137e7c38) {
            puVar11 = (ulong *)param_1[0x23];
            lVar13 = 0x14;
            if (puVar11 != (ulong *)param_1[0x22]) {
              lVar13 = 0x10;
            }
            uVar12 = *(uint *)((long)param_1 + lVar13 + 0x110);
            puVar18 = puVar11;
            if (uVar12 == 0) {
LAB_100046ec4:
              while (puVar18 != puVar11 + uVar12) {
                if (*puVar18 != unaff_x19) {
                  plVar17 = param_1;
                  FUN_100046c98(param_1,param_2);
                }
                do {
                  puVar18 = puVar18 + 1;
                  if (puVar18 == puVar11 + uVar12) {
                    return plVar17;
                  }
                } while (0xfffffffffffffffd < *puVar18);
              }
            }
            else {
              lVar13 = (ulong)uVar12 << 3;
              do {
                if (*puVar18 < 0xfffffffffffffffe) goto LAB_100046ec4;
                puVar18 = puVar18 + 1;
                lVar13 = lVar13 + -8;
              } while (lVar13 != 0);
            }
          }
          return plVar17;
        }
      }
      puVar11 = (ulong *)&UNK_10f60201b;
      uVar10 = 1;
      func_0x000107c2b008();
      uVar12 = 0x10;
      if (uVar10 != 0) {
        uVar12 = uVar10;
      }
      *(undefined4 *)((long)puVar11 + 0xc) = 0;
      *(undefined4 *)(puVar11 + 2) = 0;
      plVar17 = (long *)(ulong)(uVar12 + 1);
      func_0x000107c60ee8(plVar17,0xc);
      if (plVar17 != (long *)0x0) {
LAB_100046f98:
        plVar17[uVar12] = 2;
        *puVar11 = (ulong)plVar17;
        *(uint *)(puVar11 + 1) = uVar12;
        return plVar17;
      }
      if (uVar12 + 1 == 0) {
        plVar17 = (long *)0x1;
        func_0x000107c610a0();
        if (plVar17 != (long *)0x0) goto LAB_100046f98;
      }
      plVar17 = (long *)&UNK_10f6023d9;
      pbVar8 = (byte *)0x1;
      func_0x000107c2b00c();
      if ((int)plVar17[1] == 0) {
        FUN_100046f50(plVar17,0x10);
      }
      uVar12 = 0;
      pbVar7 = pbVar8;
      for (uVar19 = uVar9; uVar19 != 0; uVar19 = uVar19 - 1) {
        uVar12 = uVar12 * 0x21 + (uint)*pbVar7;
        pbVar7 = pbVar7 + 1;
      }
      uVar2 = *(uint *)(plVar17 + 1);
      lVar14 = *plVar17;
      lVar13 = lVar14 + (ulong)uVar2 * 8 + 8;
      iVar16 = 1;
      uVar15 = 0xffffffff;
      uVar10 = uVar12;
      do {
        uVar10 = uVar10 & uVar2 - 1;
        plVar6 = (long *)(ulong)uVar10;
        puVar11 = *(ulong **)(lVar14 + (long)plVar6 * 8);
        if (puVar11 == (ulong *)0x0) {
          if (uVar15 != 0xffffffff) {
            uVar10 = uVar15;
            plVar6 = (long *)(long)(int)uVar15;
          }
          *(uint *)(lVar13 + (long)plVar6 * 4) = uVar12;
          return (long *)(ulong)uVar10;
        }
        uVar5 = uVar15;
        if (puVar11 == (ulong *)0xfffffffffffffff8) {
          uVar5 = uVar10;
          if (uVar15 != 0xffffffff) {
            uVar5 = uVar15;
          }
        }
        else if ((*(uint *)(lVar13 + (long)plVar6 * 4) == uVar12) && (uVar9 == *puVar11)) {
          if (uVar9 == 0) {
            return plVar6;
          }
          pbVar7 = pbVar8;
          func_0x000107c610b0(pbVar8,(long)puVar11 + (ulong)*(uint *)((long)plVar17 + 0x14),uVar9);
          if ((int)pbVar7 == 0) {
            return plVar6;
          }
        }
        uVar15 = uVar5;
        uVar10 = iVar16 + uVar10;
        iVar16 = iVar16 + 1;
      } while( true );
    }
    param_1 = (long *)(unaff_x19 + 0x50);
  }
  unaff_x30 = 0x100046e24;
  register0x00000008 = (BADSPACEBASE *)auStack_70;
  unaff_x20 = param_2;
code_r0x000107c2aff4:
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  uVar9 = (ulong)*(uint *)(param_1 + 1);
  plVar17 = param_1;
  if (*(uint *)((long)param_1 + 0xc) <= *(uint *)(param_1 + 1)) {
    func_0x000107c2b01c(param_1,param_1 + 2,uVar9 + 1,8);
    uVar9 = (ulong)*(uint *)(param_1 + 1);
  }
  *(long *)(*param_1 + uVar9 * 8) = param_2;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return plVar17;
}



/* Entry: 100046c98; end: 100046f4f;  */

ulong FUN_100046c98(ulong param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  ushort uVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  uint uVar10;
  ulong *puVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  ulong *puVar19;
  undefined8 uVar20;
  undefined *apuStack_68 [4];
  undefined2 uStack_48;
  
  uVar18 = *(ulong *)(param_2 + 0x18);
  bVar4 = false;
  uVar17 = param_1;
  uVar9 = param_3;
  if (uVar18 != 0) {
    if ((*(ushort *)(param_2 + 10) >> 0xd & 1) == 0) {
      uVar20 = *(undefined8 *)(param_2 + 0x10);
    }
    else {
      uVar20 = *(undefined8 *)(param_2 + 0x10);
      uVar17 = param_3 + 0x80;
      func_0x000107c2b024(uVar17,uVar20,uVar18);
      if (((int)uVar17 != -1) && ((long)(int)uVar17 != (ulong)*(uint *)(param_3 + 0x88))) {
        return uVar17;
      }
    }
    uVar17 = param_3 + 0x80;
    FUN_1000470fc(uVar17,uVar20,uVar18,param_2);
    if ((uVar17 & 1) == 0) {
      FUN_1000479bc();
      func_0x000107c2b02c();
      puVar1 = *(undefined8 **)(uVar17 + 0x20);
      if ((ulong)(*(long *)(uVar17 + 0x18) - (long)puVar1) < 0x1d) {
        func_0x000107c2b02c();
      }
      else {
        puVar1[1] = 0x724520656e694c64;
        *puVar1 = 0x6e616d6d6f43203a;
        *(undefined8 *)((long)puVar1 + 0x15) = 0x27206e6f6974704f;
        *(undefined8 *)((long)puVar1 + 0xd) = 0x203a726f72724520;
        *(long *)(uVar17 + 0x20) = *(long *)(uVar17 + 0x20) + 0x1d;
      }
      uVar9 = *(ulong *)(param_2 + 0x18);
      func_0x000107c2af4c();
      puVar1 = *(undefined8 **)(uVar17 + 0x20);
      if ((ulong)(*(long *)(uVar17 + 0x18) - (long)puVar1) < 0x1d) {
        uVar9 = 0x1d;
        func_0x000107c2b02c();
      }
      else {
        puVar1[1] = 0x726f6d2064657265;
        *puVar1 = 0x7473696765722027;
        *(undefined8 *)((long)puVar1 + 0x15) = 0xa2165636e6f206e;
        *(undefined8 *)((long)puVar1 + 0xd) = 0x6168742065726f6d;
        *(long *)(uVar17 + 0x20) = *(long *)(uVar17 + 0x20) + 0x1d;
      }
      bVar4 = true;
    }
    else {
      bVar4 = false;
      uVar9 = uVar18;
    }
  }
  uVar3 = *(ushort *)(param_2 + 10);
  if ((uVar3 & 0x180) == 0x80) {
    uVar17 = param_3 + 0x20;
LAB_100046e1c:
    func_0x000107c2aff4(uVar17,param_2);
joined_r0x000100046e10:
    if (!bVar4) {
      if (uRam00000001137e7c38 == 0) {
        uVar17 = 0x1137e7c38;
        FUN_10004623c(0x1137e7c38,FUN_1000464e8,&UNK_109df5bf4);
      }
      if (param_3 == uRam00000001137e7c38) {
        puVar11 = *(ulong **)(param_1 + 0x118);
        lVar13 = 0x14;
        if (puVar11 != *(ulong **)(param_1 + 0x110)) {
          lVar13 = 0x10;
        }
        uVar12 = *(uint *)(param_1 + 0x110 + lVar13);
        puVar19 = puVar11;
        if (uVar12 == 0) {
LAB_100046ec4:
          while (puVar19 != puVar11 + uVar12) {
            if (*puVar19 != param_3) {
              uVar17 = param_1;
              FUN_100046c98(param_1,param_2);
            }
            do {
              puVar19 = puVar19 + 1;
              if (puVar19 == puVar11 + uVar12) {
                return uVar17;
              }
            } while (0xfffffffffffffffd < *puVar19);
          }
        }
        else {
          lVar13 = (ulong)uVar12 << 3;
          do {
            if (*puVar19 < 0xfffffffffffffffe) goto LAB_100046ec4;
            puVar19 = puVar19 + 1;
            lVar13 = lVar13 + -8;
          } while (lVar13 != 0);
        }
      }
      return uVar17;
    }
  }
  else {
    if ((uVar3 >> 0xb & 1) != 0) {
      uVar17 = param_3 + 0x50;
      goto LAB_100046e1c;
    }
    if ((uVar3 & 7) != 4) goto joined_r0x000100046e10;
    if (*(long *)(param_3 + 0x98) == 0) {
      *(long *)(param_3 + 0x98) = param_2;
      goto joined_r0x000100046e10;
    }
    apuStack_68[0] = &UNK_10f60204b;
    uStack_48 = 0x103;
    FUN_1000479bc();
    uVar9 = 0;
    func_0x000107c2afec(param_2,apuStack_68,0,0,uVar17);
    *(long *)(param_3 + 0x98) = param_2;
  }
  puVar11 = (ulong *)&UNK_10f60201b;
  uVar10 = 1;
  func_0x000107c2b008();
  uVar12 = 0x10;
  if (uVar10 != 0) {
    uVar12 = uVar10;
  }
  *(undefined4 *)((long)puVar11 + 0xc) = 0;
  *(undefined4 *)(puVar11 + 2) = 0;
  uVar17 = (ulong)(uVar12 + 1);
  func_0x000107c60ee8(uVar17,0xc);
  if (uVar17 == 0) {
    if (uVar12 + 1 == 0) {
      uVar17 = 1;
      func_0x000107c610a0();
      if (uVar17 != 0) goto LAB_100046f98;
    }
    plVar6 = (long *)&UNK_10f6023d9;
    pbVar8 = (byte *)0x1;
    func_0x000107c2b00c();
    if ((int)plVar6[1] == 0) {
      FUN_100046f50(plVar6,0x10);
    }
    uVar12 = 0;
    pbVar7 = pbVar8;
    for (uVar17 = uVar9; uVar17 != 0; uVar17 = uVar17 - 1) {
      uVar12 = uVar12 * 0x21 + (uint)*pbVar7;
      pbVar7 = pbVar7 + 1;
    }
    uVar2 = *(uint *)(plVar6 + 1);
    lVar14 = *plVar6;
    lVar13 = lVar14 + (ulong)uVar2 * 8 + 8;
    iVar16 = 1;
    uVar15 = 0xffffffff;
    uVar10 = uVar12;
    do {
      uVar10 = uVar10 & uVar2 - 1;
      uVar17 = (ulong)uVar10;
      puVar11 = *(ulong **)(lVar14 + uVar17 * 8);
      if (puVar11 == (ulong *)0x0) {
        if (uVar15 != 0xffffffff) {
          uVar10 = uVar15;
          uVar17 = (long)(int)uVar15;
        }
        *(uint *)(lVar13 + uVar17 * 4) = uVar12;
        return (ulong)uVar10;
      }
      uVar5 = uVar15;
      if (puVar11 == (ulong *)0xfffffffffffffff8) {
        uVar5 = uVar10;
        if (uVar15 != 0xffffffff) {
          uVar5 = uVar15;
        }
      }
      else if ((*(uint *)(lVar13 + uVar17 * 4) == uVar12) && (uVar9 == *puVar11)) {
        if (uVar9 == 0) {
          return uVar17;
        }
        pbVar7 = pbVar8;
        func_0x000107c610b0(pbVar8,(long)puVar11 + (ulong)*(uint *)((long)plVar6 + 0x14),uVar9);
        if ((int)pbVar7 == 0) {
          return uVar17;
        }
      }
      uVar15 = uVar5;
      uVar10 = iVar16 + uVar10;
      iVar16 = iVar16 + 1;
    } while( true );
  }
LAB_100046f98:
  *(undefined8 *)(uVar17 + (ulong)uVar12 * 8) = 2;
  *puVar11 = uVar17;
  *(uint *)(puVar11 + 1) = uVar12;
  return uVar17;
}



/* Entry: 100046f50; end: 1000470fb;  */

ulong FUN_100046f50(ulong *param_1,uint param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  
  uVar9 = 0x10;
  if (param_2 != 0) {
    uVar9 = param_2;
  }
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  uVar13 = (ulong)(uVar9 + 1);
  func_0x000107c60ee8(uVar13,0xc);
  if (uVar13 == 0) {
    if (uVar9 + 1 == 0) {
      uVar13 = 1;
      func_0x000107c610a0();
      if (uVar13 != 0) goto LAB_100046f98;
    }
    plVar4 = (long *)&UNK_10f6023d9;
    pbVar6 = (byte *)0x1;
    func_0x000107c2b00c();
    if ((int)plVar4[1] == 0) {
      FUN_100046f50(plVar4,0x10);
    }
    uVar9 = 0;
    pbVar5 = pbVar6;
    for (lVar2 = param_3; lVar2 != 0; lVar2 = lVar2 + -1) {
      uVar9 = uVar9 * 0x21 + (uint)*pbVar5;
      pbVar5 = pbVar5 + 1;
    }
    uVar1 = *(uint *)(plVar4 + 1);
    lVar10 = *plVar4;
    lVar2 = lVar10 + (ulong)uVar1 * 8 + 8;
    iVar12 = 1;
    uVar11 = 0xffffffff;
    uVar7 = uVar9;
    do {
      uVar7 = uVar7 & uVar1 - 1;
      uVar13 = (ulong)uVar7;
      plVar8 = *(long **)(lVar10 + uVar13 * 8);
      if (plVar8 == (long *)0x0) {
        if (uVar11 != 0xffffffff) {
          uVar7 = uVar11;
          uVar13 = (long)(int)uVar11;
        }
        *(uint *)(lVar2 + uVar13 * 4) = uVar9;
        return (ulong)uVar7;
      }
      uVar3 = uVar11;
      if (plVar8 == (long *)0xfffffffffffffff8) {
        uVar3 = uVar7;
        if (uVar11 != 0xffffffff) {
          uVar3 = uVar11;
        }
      }
      else if ((*(uint *)(lVar2 + uVar13 * 4) == uVar9) && (param_3 == *plVar8)) {
        if (param_3 == 0) {
          return uVar13;
        }
        pbVar5 = pbVar6;
        func_0x000107c610b0(pbVar6,(long)plVar8 + (ulong)*(uint *)((long)plVar4 + 0x14),param_3);
        if ((int)pbVar5 == 0) {
          return uVar13;
        }
      }
      uVar11 = uVar3;
      uVar7 = iVar12 + uVar7;
      iVar12 = iVar12 + 1;
    } while( true );
  }
LAB_100046f98:
  *(undefined8 *)(uVar13 + (ulong)uVar9 * 8) = 2;
  *param_1 = uVar13;
  *(uint *)(param_1 + 1) = uVar9;
  return uVar13;
}



/* Entry: 1000470fc; end: 1000471f7;  */

undefined8 FUN_1000470fc(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  plVar1 = param_1;
  func_0x000100046fc8();
  lVar4 = *param_1;
  uVar3 = (ulong)plVar1 & 0xffffffff;
  lVar2 = *(long *)(lVar4 + ((ulong)plVar1 & 0xffffffff) * 8);
  if (lVar2 == -8) {
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  }
  else if (lVar2 != 0) {
    plVar1 = (long *)(lVar4 + uVar3 * 8 + 8);
    while ((lVar2 == 0 || (lVar2 == -8))) {
      lVar2 = *plVar1;
      plVar1 = plVar1 + 1;
    }
    return 0;
  }
  plVar1 = (long *)(param_3 + 0x11);
  func_0x000107c60e28(plVar1,8);
  if (param_3 != 0) {
    func_0x000107c610b4(plVar1 + 2,param_2,param_3);
  }
  *(undefined1 *)((long)(plVar1 + 2) + param_3) = 0;
  *plVar1 = param_3;
  plVar1[1] = param_4;
  *(long **)(lVar4 + uVar3 * 8) = plVar1;
  *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
  plVar1 = param_1;
  FUN_1000471f8(param_1,uVar3);
  plVar1 = (long *)(*param_1 + ((ulong)plVar1 & 0xffffffff) * 8);
  do {
    lVar2 = *plVar1;
    plVar1 = plVar1 + 1;
  } while (lVar2 == 0 || lVar2 == -8);
  return 1;
}



/* Entry: 1000471f8; end: 1000472e7;  */

ulong FUN_1000471f8(ulong *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  
  uVar3 = (uint)param_1[1];
  if (uVar3 * 3 < (uint)(*(int *)((long)param_1 + 0xc) << 2)) {
    uVar3 = uVar3 << 1;
  }
  else if (uVar3 >> 3 < uVar3 - (*(int *)((long)param_1 + 0xc) + (int)param_1[2])) {
    return param_2;
  }
  uVar4 = (ulong)uVar3;
  FUN_100049810();
  uVar5 = *param_1;
  uVar2 = (uint)param_1[1];
  if (uVar2 != 0) {
    uVar6 = 0;
    uVar7 = param_2 & 0xffffffff;
    do {
      lVar8 = *(long *)(uVar5 + uVar6 * 8);
      if (lVar8 != -8 && lVar8 != 0) {
        uVar9 = *(uint *)(uVar5 + (ulong)uVar2 * 8 + 8 + uVar6 * 4);
        uVar10 = (ulong)(uVar9 & uVar3 - 1);
        if (*(long *)(uVar4 + uVar10 * 8) != 0) {
          iVar11 = 1;
          do {
            uVar1 = (int)uVar10 + iVar11;
            iVar11 = iVar11 + 1;
            uVar10 = (ulong)(uVar1 & uVar3 - 1);
          } while (*(long *)(uVar4 + uVar10 * 8) != 0);
        }
        *(long *)(uVar4 + uVar10 * 8) = lVar8;
        *(uint *)(uVar4 + (ulong)uVar3 * 8 + 8 + uVar10 * 4) = uVar9;
        uVar9 = (uint)uVar10;
        if (uVar6 != uVar7) {
          uVar9 = (uint)param_2;
        }
        param_2 = (ulong)uVar9;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar2);
  }
  func_0x000107c60fd0();
  *param_1 = uVar4;
  *(uint *)(param_1 + 1) = uVar3;
  *(undefined4 *)(param_1 + 2) = 0;
  return param_2;
}



/* Entry: 1000472e8; end: 1000473c7;  */

undefined8 * FUN_1000472e8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_100045fdc(param_1,0,0);
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[0x11] = &PTR_DAT_110b3fc50;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_DAT_110b5bec0;
  puVar1[0x13] = &PTR_DAT_110b5bfa0;
  puVar1[0x14] = &PTR_DAT_110b3fbc0;
  puVar1[0x17] = puVar1 + 0x14;
  FUN_10004744c();
  FUN_100046b10(param_1);
  return param_1;
}



/* Entry: 1000473c8; end: 10004744b;  */

void FUN_1000473c8(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined4 uStack_34;
  undefined4 *puStack_30;
  undefined4 uStack_24;
  
  uStack_24 = 1;
  uStack_34 = 0xfa;
  puStack_30 = &uStack_34;
  puStack_48 = &UNK_10f5acf1c;
  uStack_40 = 0x4c;
  FUN_1000472e8(0x1137e1e90,&UNK_10f5acefd,&uStack_24,&puStack_30,&puStack_48);
  func_0x000107c60e34(&DAT_109d2f8c4,0x1137e1e90,0x100000000);
  return;
}



/* Entry: 10004744c; end: 1000474d7;  */

void FUN_10004744c(long param_1,undefined8 param_2,ushort *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2;
  func_0x000107c613d0(param_2);
  FUN_10004687c(param_1,param_2,uVar2);
  *(ushort *)(param_1 + 10) = (*param_3 & 3) << 5 | *(ushort *)(param_1 + 10) & 0xff9f;
  uVar1 = *(undefined4 *)*param_4;
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  *(undefined1 *)(param_1 + 0x94) = 1;
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  uVar2 = *param_5;
  *(undefined8 *)(param_1 + 0x28) = param_5[1];
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  return;
}



/* Entry: 1000474d8; end: 10004755f;  */

undefined8 FUN_1000474d8(void)

{
  int iVar1;
  
  if ((bRam0000000113834558 & 1) == 0) {
    iVar1 = 0x13834558;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      FUN_1000476f4();
      func_0x000107c60e34(&UNK_109df5c94,0x113834360,0x100000000);
      func_0x000107c60e4c(0x113834558);
    }
  }
  return 0x113834360;
}



/* Entry: 100047560; end: 1000476f3;  */

void FUN_100047560(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined6 uStack_48;
  undefined2 uStack_42;
  undefined6 uStack_40;
  short sStack_3a;
  undefined1 uStack_29;
  undefined8 *puStack_28;
  
  FUN_1000474d8();
  uStack_48 = 0x736569726575;
  uStack_50 = 0x712d656d75737361;
  uStack_42 = 0x632d;
  uStack_40 = 0x7265746e756f;
  sStack_3a = 0x1600;
  puVar3 = (undefined8 *)0x28;
  func_0x000107c60e20();
  lStack_58 = -0x7fffffffffffffd8;
  uStack_60 = 0x23;
  *(undefined4 *)((long)puVar3 + 0x1f) = 0x64657461;
  puVar3[1] = 0x6120686369687720;
  *puVar3 = 0x736c6f72746e6f43;
  puVar3[3] = 0x6165726320737465;
  puVar3[2] = 0x672073656d757373;
  *(undefined1 *)((long)puVar3 + 0x23) = 0;
  puStack_28 = &uStack_50;
  lVar4 = param_1 + 0x18;
  puStack_68 = puVar3;
  FUN_100047d30(lVar4,&uStack_50,&UNK_10dd5b8f9,&puStack_28,&uStack_29);
  iVar1 = *(int *)(lVar4 + 0x38);
  if (iVar1 == 0) {
    *(int *)(lVar4 + 0x38) =
         (int)((ulong)(*(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x30)) >> 3) * -0x55555555 +
         1;
    FUN_100048068((long *)(param_1 + 0x30),&uStack_50);
    iVar1 = *(int *)(lVar4 + 0x38);
  }
  puStack_28 = (undefined8 *)CONCAT44(puStack_28._4_4_,iVar1);
  lVar4 = param_1;
  FUN_1000483e4(param_1,&puStack_28);
  *(undefined8 *)(lVar4 + 8) = 0;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  *(undefined8 *)(lVar4 + 0x18) = 0xffffffffffffffff;
  *(undefined1 *)(lVar4 + 0x20) = 0;
  if (*(char *)(lVar4 + 0x3f) < '\0') {
    func_0x000107c60e14(*(undefined8 *)(lVar4 + 0x28));
  }
  *(undefined8 *)(lVar4 + 0x28) = 0;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  *(undefined8 *)(lVar4 + 0x38) = 0;
  FUN_1000483e4(param_1,&puStack_28);
  func_0x000107c60ca4(param_1 + 0x28,&puStack_68);
  uVar2 = puStack_28._0_4_;
  if (lStack_58 < 0) {
    func_0x000107c60e14(puStack_68);
  }
  if (sStack_3a < 0) {
    func_0x000107c60e14(uStack_50);
  }
  uRam00000001137e1f50 = uVar2;
  return;
}



/* Entry: 1000476f4; end: 1000479bb;  */

void FUN_1000476f4(void)

{
  undefined8 uVar1;
  undefined *apuStack_48 [4];
  undefined2 uStack_28;
  
  uRam0000000113834360 = 0;
  uRam0000000113834368 = 0;
  uRam0000000113834370 = 0;
  uRam0000000113834388 = 0;
  uRam0000000113834390 = 0;
  uRam0000000113834380 = 0;
  uRam0000000113834378 = 0x113834380;
  uRam0000000113834398 = 0;
  uRam00000001138343a0 = 0;
  uRam00000001138343a8 = 0;
  FUN_100045fdc(0x1138343b0,1,0);
  uVar1 = 0x1138343b0;
  uRam0000000113834450 = 0;
  uRam0000000113834438 = 0;
  lRam0000000113834430 = 0;
  uRam0000000113834448 = 0;
  uRam0000000113834440 = 0;
  ppuRam00000001138343b0 = &PTR_DAT_110b5c098;
  uRam0000000113834458 = 0;
  uRam0000000113834460 = 0;
  uRam0000000113834468 = 0;
  ppuRam0000000113834470 = &PTR_DAT_110b5bc18;
  ppuRam0000000113834478 = &PTR_DAT_110b5c100;
  uRam0000000113834490 = 0x113834478;
  FUN_10004687c(0x1138343b0,&UNK_10f602155,0xd);
  puRam00000001138343d0 = &UNK_10f602163;
  uRam00000001138343d8 = 0x34;
  uRam00000001138343ba = uRam00000001138343ba & 0xffbf | 0x220;
  if (lRam0000000113834430 == 0) {
    lRam0000000113834430 = 0x113834360;
  }
  else {
    apuStack_48[0] = &UNK_10f5ade71;
    uStack_28 = 0x103;
    FUN_1000479bc();
    func_0x000107c2afec(0x1138343b0,apuStack_48,0,0,uVar1);
  }
  FUN_100046b10(0x1138343b0);
  ppuRam00000001138343b0 = &PTR_DAT_110b5bfd0;
  FUN_100045fdc(0x113834498,0,0);
  uRam0000000113834518 = 0;
  ppuRam0000000113834520 = &PTR_DAT_110b3fac8;
  uRam0000000113834528 = 0;
  ppuRam0000000113834498 = &PTR_DAT_110b5be10;
  ppuRam0000000113834530 = &PTR_DAT_110b5b9a8;
  ppuRam0000000113834538 = &PTR_DAT_110b3fb30;
  uRam0000000113834550 = 0x113834538;
  FUN_10004687c(0x113834498,&UNK_10f602198,0x13);
  uRam0000000113834518 = 0;
  uRam0000000113834528 = CONCAT62(uRam0000000113834528._2_6_,0x100);
  uRam00000001138344a2 = uRam00000001138344a2 & 0xff98 | 0x20;
  puRam00000001138344b8 = &UNK_10f6021ac;
  uRam00000001138344c0 = 0x3b;
  FUN_100046b10(0x113834498);
  FUN_1000479bc();
  return;
}



/* Entry: 1000479bc; end: 100047a5b;  */

undefined8 FUN_1000479bc(void)

{
  int iVar1;
  
  if ((bRam00000001138346c8 & 1) == 0) {
    iVar1 = 0x138346c8;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      FUN_100047a5c(0x113834668,2,0,1,0);
      func_0x000107c60e34(&DAT_109e05e6c,0x113834668,0x100000000);
      func_0x000107c60e4c(0x1138346c8);
    }
  }
  return 0x113834668;
}



/* Entry: 100047a5c; end: 100047b8b;  */

undefined8 *
FUN_100047a5c(undefined8 *param_1,long param_2,undefined1 param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 auStack_c0 [144];
  
  *(undefined4 *)(param_1 + 1) = param_5;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *param_1 = &PTR_DAT_110b5c518;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar3 = (uint)param_2;
  *(uint *)(param_1 + 7) = param_4 ^ 1;
  *(uint *)((long)param_1 + 0x3c) = uVar3;
  *(undefined1 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 9) = 0;
  puVar2 = param_1;
  func_0x000107c60d38();
  *(undefined4 *)((long)param_1 + 0x41) = 0;
  param_1[10] = puVar2;
  param_1[0xb] = 0;
  if ((int)uVar3 < 0) {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 5) = 1;
    if (uVar3 < 3) {
      *(undefined1 *)(param_1 + 8) = 0;
    }
    func_0x000107c61068(param_2,0,1);
    iVar1 = *(int *)((long)param_1 + 0x3c);
    func_0x000107c60fe4(iVar1,auStack_c0);
    FUN_100047b8c();
    *(undefined1 *)((long)param_1 + 0x42) = 0;
    *(bool *)((long)param_1 + 0x41) = iVar1 == 0 && param_2 != -1;
    if (iVar1 != 0 || param_2 == -1) {
      param_2 = 0;
    }
    param_1[0xb] = param_2;
  }
  return param_1;
}



/* Entry: 100047b8c; end: 100047c83;  */

int FUN_100047b8c(int *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((int)param_1 == 0) {
    uVar9 = *(undefined8 *)(param_2 + 10);
    uVar10 = *(undefined8 *)(param_2 + 0xe);
    uVar2 = *(ushort *)(param_2 + 1);
    uVar4 = (uint)uVar2;
    FUN_100047c84();
    uVar1 = *param_2;
    uVar3 = *(undefined2 *)((long)param_2 + 6);
    uVar5 = *(undefined8 *)(param_2 + 2);
    uVar6 = *(undefined8 *)(param_2 + 0xc);
    uVar7 = *(undefined8 *)(param_2 + 0x18);
    uVar11 = *(undefined8 *)(param_2 + 4);
    *param_3 = *(undefined8 *)(param_2 + 8);
    param_3[1] = uVar6;
    *(int *)(param_3 + 2) = (int)uVar9;
    *(int *)((long)param_3 + 0x14) = (int)uVar10;
    param_3[3] = uVar11;
    param_3[4] = uVar7;
    *(uint *)(param_3 + 5) = uVar4;
    *(uint *)((long)param_3 + 0x2c) = uVar2 & 0xfff;
    *(undefined4 *)(param_3 + 6) = uVar1;
    *(undefined2 *)((long)param_3 + 0x34) = uVar3;
    param_3[7] = uVar5;
    func_0x000107c60d38();
    iVar8 = 0;
  }
  else {
    func_0x000107c60e5c();
    iVar8 = *param_1;
    func_0x000107c60d3c();
    if (iVar8 == 2) {
      param_3[4] = 0;
      param_3[1] = 0;
      *param_3 = 0;
      param_3[3] = 0;
      param_3[2] = 0;
      param_3[5] = 0xffff00000001;
      *(undefined4 *)(param_3 + 6) = 0;
      *(undefined2 *)((long)param_3 + 0x34) = 0;
      param_3[7] = 0;
      iVar8 = 2;
    }
    else {
      *(undefined8 *)((long)param_3 + 0x24) = 0;
      *(undefined8 *)((long)param_3 + 0x1c) = 0;
      param_3[1] = 0;
      *param_3 = 0;
      param_3[3] = 0;
      param_3[2] = 0;
      *(undefined8 *)((long)param_3 + 0x2c) = 0xffff;
      *(undefined2 *)((long)param_3 + 0x34) = 0;
      param_3[7] = 0;
    }
  }
  return iVar8;
}



/* Entry: 100047c84; end: 100047cab;  */

undefined4 FUN_100047c84(ulong param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(param_1 >> 0xc) & 0xfffff;
  if (uVar1 == 7) {
    return 9;
  }
  return *(undefined4 *)(&UNK_10e05b898 + (ulong)(uVar1 ^ 8) * 4);
}



/* Entry: 100047cac; end: 100047d2f;  */

long * FUN_100047cac(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  plVar4 = plVar3;
  while (plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, func_0x0001004b5f8c(param_3,plVar4 + 4),
          ((uint)uVar1 >> 7 & 1) != 0) {
      plVar2 = (long *)*plVar4;
      plVar3 = plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_100047d18;
    }
    plVar2 = plVar4 + 4;
    func_0x0001004b5f8c(plVar2,param_3);
    if (((uint)plVar2 >> 7 & 1) == 0) break;
    plVar3 = plVar4 + 1;
    plVar2 = (long *)*plVar3;
  }
LAB_100047d18:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 100047d30; end: 100047dc3;  */

undefined1  [16]
FUN_100047d30(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_60 [3];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  FUN_100047cac(param_1,&uStack_48,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_100047dc4(alStack_60,param_1,param_3,param_4,param_5);
    FUN_100047e68(param_1,uStack_48,plVar2,alStack_60[0]);
    lVar3 = alStack_60[0];
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 100047dc4; end: 100047e67;  */

void FUN_100047dc4(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = 0x40;
  func_0x000107c60e20();
  *param_1 = lVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_4 = (undefined8 *)*param_4;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    FUN_100033dac(lVar1 + 0x20,*param_4,param_4[1]);
  }
  else {
    uVar3 = param_4[1];
    uVar2 = *param_4;
    *(undefined8 *)(lVar1 + 0x30) = param_4[2];
    *(undefined8 *)(lVar1 + 0x28) = uVar3;
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
  }
  *(undefined4 *)(lVar1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 100047e68; end: 100047ebb;  */

void FUN_100047e68(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_100047ebc(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 100047ebc; end: 100048067;  */

void FUN_100047ebc(long *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  bVar1 = param_2 == param_1;
  *(bool *)(param_2 + 3) = bVar1;
  do {
    if ((bVar1) || (plVar3 = (long *)param_2[2], (*(byte *)(plVar3 + 3) & 1) != 0)) {
      return;
    }
    plVar2 = (long *)plVar3[2];
    plVar4 = (long *)*plVar2;
    if (plVar4 == plVar3) {
      if ((plVar2[1] == 0) || (plVar7 = (long *)(plVar2[1] + 0x18), *(char *)plVar7 == '\x01')) {
        if ((long *)*plVar3 != param_2) {
          plVar7 = (long *)plVar3[1];
          lVar5 = *plVar7;
          plVar3[1] = lVar5;
          plVar4 = plVar3;
          if (lVar5 != 0) {
            *(long **)(lVar5 + 0x10) = plVar3;
            plVar2 = (long *)plVar3[2];
            plVar4 = (long *)*plVar2;
          }
          plVar7[2] = (long)plVar2;
          lVar5 = 0;
          if (plVar4 != plVar3) {
            lVar5 = 8;
          }
          *(long **)((long)plVar2 + lVar5) = plVar7;
          *plVar7 = (long)plVar3;
          plVar3[2] = (long)plVar7;
          plVar2 = (long *)plVar7[2];
          plVar4 = (long *)*plVar2;
          plVar3 = plVar7;
        }
        *(undefined1 *)(plVar3 + 3) = 1;
        *(undefined1 *)(plVar2 + 3) = 0;
        lVar5 = plVar4[1];
        *plVar2 = lVar5;
        if (lVar5 != 0) {
          *(long **)(lVar5 + 0x10) = plVar2;
        }
        puVar6 = (undefined8 *)plVar2[2];
        plVar4[2] = (long)puVar6;
        lVar5 = 0;
        if ((long *)*puVar6 != plVar2) {
          lVar5 = 8;
        }
        *(long **)((long)puVar6 + lVar5) = plVar4;
        plVar4[1] = (long)plVar2;
        plVar2[2] = (long)plVar4;
        return;
      }
    }
    else if ((plVar4 == (long *)0x0) || (plVar7 = plVar4 + 3, (char)*plVar7 == '\x01')) {
      plVar4 = (long *)*plVar3;
      if (plVar4 == param_2) {
        lVar5 = plVar4[1];
        *plVar3 = lVar5;
        if (lVar5 != 0) {
          *(long **)(lVar5 + 0x10) = plVar3;
          plVar2 = (long *)plVar3[2];
        }
        plVar4[2] = (long)plVar2;
        lVar5 = 0;
        if ((long *)*plVar2 != plVar3) {
          lVar5 = 8;
        }
        *(long **)((long)plVar2 + lVar5) = plVar4;
        plVar4[1] = (long)plVar3;
        plVar3[2] = (long)plVar4;
        plVar2 = (long *)plVar4[2];
        plVar3 = plVar4;
      }
      *(undefined1 *)(plVar3 + 3) = 1;
      *(undefined1 *)(plVar2 + 3) = 0;
      plVar3 = (long *)plVar2[1];
      lVar5 = *plVar3;
      plVar2[1] = lVar5;
      if (lVar5 != 0) {
        *(long **)(lVar5 + 0x10) = plVar2;
      }
      puVar6 = (undefined8 *)plVar2[2];
      plVar3[2] = (long)puVar6;
      lVar5 = 0;
      if ((long *)*puVar6 != plVar2) {
        lVar5 = 8;
      }
      *(long **)((long)puVar6 + lVar5) = plVar3;
      *plVar3 = (long)plVar2;
      plVar2[2] = (long)plVar3;
      return;
    }
    *(undefined1 *)(plVar3 + 3) = 1;
    bVar1 = plVar2 == param_1;
    *(bool *)(plVar2 + 3) = bVar1;
    *(char *)plVar7 = '\x01';
    param_2 = plVar2;
  } while( true );
}



/* Entry: 100048068; end: 1000480a3;  */

void FUN_100048068(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x000107c2ac74();
    lVar2 = uVar1 + 0x18;
  }
  else {
    lVar2 = param_1;
    FUN_1000480f4();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 1000480a4; end: 1000480f3;  */

ulong FUN_1000480a4(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    uVar1 = (param_1[2] - *param_1) / 0x18;
    uVar3 = uVar1 * 2;
    if (uVar3 < param_2 || uVar3 - param_2 == 0) {
      uVar3 = param_2;
    }
    if (0x555555555555554 < uVar1) {
      uVar3 = 0xaaaaaaaaaaaaaaa;
    }
    return uVar3;
  }
  func_0x000104bdcf60();
  plVar2 = param_1;
  FUN_1000480a4();
  func_0x0001000481ec(auStack_68,plVar2,(param_1[1] - *param_1) / 0x18,param_1 + 2);
  func_0x000107c60c94(lStack_58,param_2);
  lStack_58 = lStack_58 + 0x18;
  FUN_10004824c(param_1,auStack_68);
  uVar3 = param_1[1];
  FUN_1000482e8(auStack_68);
  return uVar3;
}



/* Entry: 1000480f4; end: 10004819b;  */

long FUN_1000480f4(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  FUN_1000480a4(param_1,(param_1[1] - *param_1) / 0x18 + 1);
  func_0x0001000481ec(auStack_58,plVar1,(param_1[1] - *param_1) / 0x18,param_1 + 2);
  func_0x000107c60c94(lStack_48,param_2);
  lStack_48 = lStack_48 + 0x18;
  FUN_10004824c(param_1,auStack_58);
  lVar2 = param_1[1];
  FUN_1000482e8(auStack_58);
  return lVar2;
}



/* Entry: 10004819c; end: 1000481c7;  */

void FUN_10004819c(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0xaaaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  FUN_10004819c();
  return;
}



/* Entry: 1000481c8; end: 100048237;  */

void FUN_1000481c8(void)

{
  FUN_10004819c();
  return;
}



/* Entry: 100048238; end: 10004824b;  */

void FUN_100048238(void)

{
  return;
}



/* Entry: 10004824c; end: 10004828f;  */

void FUN_10004824c(long *param_1,long param_2)

{
  func_0x000100048240();
  func_0x000107c610b4(*(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x18) * 0x18);
  FUN_100048290();
  return;
}



/* Entry: 100048290; end: 1000482e7;  */

void FUN_100048290(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  unaff_x19[1] = unaff_x21;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 1000482e8; end: 100048347;  */

long * FUN_1000482e8(long *param_1)

{
  func_0x0001000482e0();
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 100048348; end: 1000483e3;  */

void FUN_100048348(void)

{
  return;
}



/* Entry: 1000483e4; end: 1000484ff;  */

undefined4 * FUN_1000483e4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puStack_28;
  
  puVar1 = param_1;
  func_0x000100048350(param_1,param_2,&puStack_28);
  if (((ulong)puVar1 & 1) == 0) {
    func_0x000100048458(param_1,param_2,param_2);
    *param_1 = *param_2;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 6) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    puStack_28 = param_1;
  }
  return puStack_28;
}



/* Entry: 100048500; end: 1000485b7;  */

void FUN_100048500(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 2);
  lVar5 = *param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar4 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar4 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar4;
  puVar3 = (undefined4 *)((ulong)uVar4 << 6);
  func_0x000107c60e28(puVar3,8);
  *param_1 = (long)puVar3;
  if (lVar5 != 0) {
    func_0x000107c2af74(param_1,lVar5,lVar5 + (ulong)uVar1 * 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(lVar5,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 2) << 6;
    do {
      *puVar3 = 0xffffffff;
      lVar5 = lVar5 + -0x40;
      puVar3 = puVar3 + 0x10;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 1000485b8; end: 1000486c7;  */

void FUN_1000485b8(void)

{
  FUN_100045fdc(0x1137e1f58,0,0);
  uRam00000001137e1fd8 = 0;
  ppuRam00000001137e1fe0 = &PTR_DAT_110b3fac8;
  uRam00000001137e1fe8 = 0;
  ppuRam00000001137e1f58 = &PTR_DAT_110b5be10;
  ppuRam00000001137e1ff0 = &PTR_DAT_110b5b9a8;
  ppuRam00000001137e1ff8 = &PTR_DAT_110b3fb30;
  uRam00000001137e2010 = 0x1137e1ff8;
  FUN_10004687c();
  uRam00000001137e1f62 = uRam00000001137e1f62 & 0xffbf | 0x20;
  puRam00000001137e1f78 = &UNK_10f5acfbc;
  uRam00000001137e1f80 = 0x27;
  uRam00000001137e1fd8 = 0;
  uRam00000001137e1fe8 = CONCAT62(uRam00000001137e1fe8._2_6_,0x100);
  FUN_100046b10(0x1137e1f58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&DAT_109d2f60c,0x1137e1f58,0x100000000);
  return;
}



/* Entry: 1000486c8; end: 100048877;  */

/* WARNING: Possible PIC construction at 0x00010004877c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100048780) */

void FUN_1000486c8(void)

{
  FUN_100045fdc(0x1137e2018,0,0);
  uRam00000001137e2098 = 0;
  ppuRam00000001137e20a0 = &PTR_DAT_110b3fac8;
  uRam00000001137e20a8 = 0;
  ppuRam00000001137e2018 = &PTR_DAT_110b5be10;
  ppuRam00000001137e20b0 = &PTR_DAT_110b5b9a8;
  ppuRam00000001137e20b8 = &PTR_DAT_110b3fb30;
  uRam00000001137e20d0 = 0x1137e20b8;
  FUN_10004687c();
  uRam00000001137e2022 = uRam00000001137e2022 & 0xffbf | 0x20;
  uRam00000001137e2098 = 1;
  uRam00000001137e20a8 = CONCAT62(uRam00000001137e20a8._2_6_,0x101);
  FUN_100046b10(0x1137e2018);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&DAT_109d2f60c,0x1137e2018,0x100000000);
  return;
}



/* Entry: 100048878; end: 10004890f;  */

void FUN_100048878(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (param_3 - param_2 >> 3) * -0x3333333333333333;
  uVar2 = (ulong)*(uint *)(param_1 + 1);
  uVar1 = lVar3 + uVar2;
  if (*(uint *)((long)param_1 + 0xc) < uVar1) {
    FUN_10004e450(param_1,param_1 + 2,uVar1,0x28);
    uVar2 = (ulong)*(uint *)(param_1 + 1);
  }
  if (param_2 != param_3) {
    func_0x000107c610b4(*param_1 + uVar2 * 0x28,param_2,param_3 - param_2);
    uVar2 = (ulong)*(uint *)(param_1 + 1);
  }
  *(int *)(param_1 + 1) = (int)uVar2 + (int)lVar3;
  return;
}



/* Entry: 100048910; end: 10004896f;  */

long * FUN_100048910(long *param_1,long param_2,long param_3)

{
  *param_1 = (long)(param_1 + 2);
  param_1[1] = 0x400000000;
  FUN_100048878(param_1,param_2,param_2 + param_3 * 0x28);
  return param_1;
}



/* Entry: 100048970; end: 10004927f;  */

undefined8 * FUN_100048970(void)

{
  char *pcVar1;
  ulong *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  char **ppcVar11;
  char **ppcVar12;
  long lVar13;
  ulong *puVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  undefined4 uStack_1d8;
  char cStack_1d1;
  char *apcStack_1d0 [2];
  ulong uStack_1c0;
  undefined *puStack_1b8;
  undefined **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  char *pcStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  ulong uStack_128;
  undefined8 auStack_120 [20];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  apcStack_1d0[0] = "none";
  apcStack_1d0[1] = (char *)0x4;
  uStack_1c0 = uStack_1c0 & 0xffffffff00000000;
  puStack_1b8 = &UNK_10f5ad092;
  ppuStack_1b0 = (undefined **)0x16;
  puStack_1a8 = &UNK_10f4fa5ee;
  uStack_1a0 = 8;
  uStack_198 = 1;
  puStack_190 = &UNK_10f5ad0a9;
  uStack_188 = 0x44;
  pcStack_180 = "integer";
  uStack_178 = 7;
  uStack_170 = 2;
  puStack_168 = &UNK_10f5ad0ee;
  uStack_160 = 0x50;
  puStack_158 = &DAT_10f637eac;
  uStack_150 = 5;
  uStack_148 = 3;
  puStack_140 = &UNK_10f5ad13f;
  uStack_138 = 0x3a;
  FUN_100048910(&puStack_130,apcStack_1d0,4);
  puVar6 = (undefined8 *)0x1137e24e8;
  FUN_100045fdc(0x1137e24e8,0,0);
  *(undefined4 *)(puVar6 + 0x10) = 0;
  puVar6[0x11] = &PTR_DAT_110b3fdd0;
  puVar6[0x12] = 0;
  *puVar6 = &PTR_DAT_110b3fcb8;
  puVar6[0x13] = &PTR_DAT_110b3fd68;
  puVar6[0x14] = puVar6;
  puVar6[0x15] = puVar6 + 0x17;
  puVar6[0x16] = 0x800000000;
  puVar6[0x47] = &PTR_DAT_110b3fff8;
  puVar6[0x4a] = puVar6 + 0x47;
  FUN_10004687c();
  uRam00000001137e24f2 = uRam00000001137e24f2 & 0xffbf | 0x20;
  puRam00000001137e2508 = &UNK_10f5ad036;
  uRam00000001137e2510 = 0x5b;
  if ((uint)uStack_128 != 0) {
    puVar7 = puStack_130 + (uStack_128 & 0xffffffff) * 5;
    puVar6 = puStack_130;
    do {
      ppcVar11 = ppcRam00000001137e2590;
      pcVar1 = (char *)*puVar6;
      uVar8 = puVar6[1];
      apcStack_1d0[0] = pcVar1;
      apcStack_1d0[1] = (char *)uVar8;
      puStack_1b8 = (undefined *)puVar6[4];
      uStack_1c0 = puVar6[3];
      ppuStack_1b0 = &PTR_DAT_110b3fdd0;
      puStack_1a8 = (undefined *)CONCAT35(puStack_1a8._5_3_,0x100000000);
      puStack_1a8 = (undefined *)CONCAT44(puStack_1a8._4_4_,*(undefined4 *)(puVar6 + 2));
      if (uRam00000001137e2598 < uRam00000001137e259c) {
LAB_100048b54:
        ppcVar11 = apcStack_1d0;
      }
      else {
        if ((apcStack_1d0 < ppcRam00000001137e2590) ||
           (ppcRam00000001137e2590 + (ulong)uRam00000001137e2598 * 6 <= apcStack_1d0)) {
          func_0x000107c2af7c((ulong)uRam00000001137e2598 + 1);
          goto LAB_100048b54;
        }
        func_0x000107c2af7c((ulong)uRam00000001137e2598 + 1);
        ppcVar11 = (char **)((long)ppcRam00000001137e2590 + ((long)apcStack_1d0 - (long)ppcVar11));
      }
      ppcVar12 = ppcRam00000001137e2590 + (ulong)uRam00000001137e2598 * 6;
      pcVar15 = *ppcVar11;
      pcVar17 = ppcVar11[3];
      pcVar16 = ppcVar11[2];
      ppcVar12[1] = ppcVar11[1];
      *ppcVar12 = pcVar15;
      ppcVar12[3] = pcVar17;
      ppcVar12[2] = pcVar16;
      ppcVar12[4] = (char *)&PTR_DAT_110b3fe38;
      uVar3 = *(undefined4 *)(ppcVar11 + 5);
      *(undefined1 *)((long)ppcVar12 + 0x2c) = *(undefined1 *)((long)ppcVar11 + 0x2c);
      *(undefined4 *)(ppcVar12 + 5) = uVar3;
      ppcVar12[4] = (char *)&PTR_DAT_110b3fdd0;
      uRam00000001137e2598 = uRam00000001137e2598 + 1;
      FUN_100049280(uRam00000001137e2588,pcVar1,uVar8);
      puVar6 = puVar6 + 5;
    } while (puVar6 != puVar7);
  }
  FUN_100046b10(0x1137e24e8);
  if (puStack_130 != auStack_120) {
    func_0x000107c60fd0();
  }
  func_0x000107c60e34(&DAT_109d30544,0x1137e24e8,0x100000000);
  FUN_100045fdc(0x1137e2318,0,0);
  uRam00000001137e2398 = 0;
  uRam00000001137e23a0 = 0;
  uRam00000001137e23c0 = 0;
  uRam00000001137e23c8 = 0;
  uRam00000001137e23d0 = 0;
  uRam00000001137e23a8 = 0;
  ppuRam00000001137e23b0 = &PTR_DAT_110b5b938;
  uRam00000001137e23b8 = 0;
  ppuRam00000001137e2318 = &PTR_DAT_110b5bd58;
  ppuRam00000001137e23d8 = &PTR_DAT_110b5bc18;
  ppuRam00000001137e23e0 = &PTR_DAT_110b40118;
  uRam00000001137e23f8 = 0x1137e23e0;
  FUN_10004687c(0x1137e2318,&UNK_10f5ad17a,0x12);
  uRam00000001137e2322 = uRam00000001137e2322 & 0xffbf | 0x20;
  puRam00000001137e2338 = &UNK_10f5ad18d;
  uRam00000001137e2340 = 0x4b;
  FUN_100046b10(0x1137e2318);
  func_0x000107c60e34(&DAT_109d305bc,0x1137e2318,0x100000000);
  FUN_100045fdc(0x1137e2198,0,0);
  uRam00000001137e2218 = 0;
  ppuRam00000001137e2220 = &PTR_DAT_110b3fc50;
  uRam00000001137e2228 = 0;
  ppuRam00000001137e2198 = &PTR_DAT_110b5bec0;
  ppuRam00000001137e2230 = &PTR_DAT_110b5bfa0;
  ppuRam00000001137e2238 = &PTR_DAT_110b3fbc0;
  uRam00000001137e2250 = 0x1137e2238;
  FUN_10004687c(0x1137e2198,&UNK_10f5ad1d9,0x15);
  uRam00000001137e2218 = 10;
  uRam00000001137e2228 = CONCAT35(uRam00000001137e2228._5_3_,0x100000000);
  uRam00000001137e2228 = CONCAT44(uRam00000001137e2228._4_4_,10);
  uRam00000001137e21a2 = uRam00000001137e21a2 & 0xffbf | 0x20;
  puRam00000001137e21b8 = &UNK_10f5ad1ef;
  uRam00000001137e21c0 = 0xc0;
  FUN_100046b10(0x1137e2198);
  func_0x000107c60e34(&DAT_109d2f8c4,0x1137e2198,0x100000000);
  apcStack_1d0[0] = "none";
  apcStack_1d0[1] = (char *)0x4;
  uStack_1c0 = uStack_1c0 & 0xffffffff00000000;
  puStack_1b8 = &UNK_10f5ad472;
  ppuStack_1b0 = (undefined **)0xc;
  puStack_1a8 = &DAT_10f30e162;
  uStack_1a0 = 5;
  uStack_198 = 1;
  puStack_190 = &UNK_10f5ad47f;
  uStack_188 = 0xd;
  pcStack_180 = "text";
  uStack_178 = 4;
  uStack_170 = 2;
  puStack_168 = &UNK_10f5ad48d;
  uStack_160 = 0xd;
  FUN_100048910(&puStack_130,apcStack_1d0,3);
  puVar6 = (undefined8 *)0x1137e2740;
  FUN_100045fdc(0x1137e2740,0,0);
  *(undefined4 *)(puVar6 + 0x10) = 0;
  puVar6[0x11] = &PTR_DAT_110b3ff70;
  puVar6[0x12] = 0;
  *puVar6 = &PTR_DAT_110b3fe58;
  puVar6[0x13] = &PTR_DAT_110b3ff08;
  puVar6[0x14] = puVar6;
  puVar6[0x15] = puVar6 + 0x17;
  puVar6[0x16] = 0x800000000;
  puVar6[0x47] = &PTR_DAT_110b40088;
  puVar6[0x4a] = puVar6 + 0x47;
  FUN_10004687c();
  uRam00000001137e274a = uRam00000001137e274a & 0xffbf | 0x20;
  puRam00000001137e2760 = &UNK_10f5ad2c0;
  uRam00000001137e2768 = 0x1b1;
  if ((uint)uStack_128 != 0) {
    puVar7 = puStack_130 + (ulong)(uint)uStack_128 * 5;
    puVar6 = puStack_130;
    do {
      ppcVar11 = ppcRam00000001137e27e8;
      pcVar1 = (char *)*puVar6;
      uVar8 = puVar6[1];
      apcStack_1d0[0] = pcVar1;
      apcStack_1d0[1] = (char *)uVar8;
      puStack_1b8 = (undefined *)puVar6[4];
      uStack_1c0 = puVar6[3];
      ppuStack_1b0 = &PTR_DAT_110b3ff70;
      puStack_1a8 = (undefined *)CONCAT35(puStack_1a8._5_3_,0x100000000);
      puStack_1a8 = (undefined *)CONCAT44(puStack_1a8._4_4_,*(undefined4 *)(puVar6 + 2));
      if (uRam00000001137e27f0 < uRam00000001137e27f4) {
LAB_100048f20:
        ppcVar11 = apcStack_1d0;
      }
      else {
        if ((apcStack_1d0 < ppcRam00000001137e27e8) ||
           (ppcRam00000001137e27e8 + (ulong)uRam00000001137e27f0 * 6 <= apcStack_1d0)) {
          func_0x000107c2af80((ulong)uRam00000001137e27f0 + 1);
          goto LAB_100048f20;
        }
        func_0x000107c2af80((ulong)uRam00000001137e27f0 + 1);
        ppcVar11 = (char **)((long)ppcRam00000001137e27e8 + ((long)apcStack_1d0 - (long)ppcVar11));
      }
      ppcVar12 = ppcRam00000001137e27e8 + (ulong)uRam00000001137e27f0 * 6;
      pcVar15 = *ppcVar11;
      pcVar17 = ppcVar11[3];
      pcVar16 = ppcVar11[2];
      ppcVar12[1] = ppcVar11[1];
      *ppcVar12 = pcVar15;
      ppcVar12[3] = pcVar17;
      ppcVar12[2] = pcVar16;
      ppcVar12[4] = (char *)&PTR_DAT_110b3ffd8;
      uVar3 = *(undefined4 *)(ppcVar11 + 5);
      *(undefined1 *)((long)ppcVar12 + 0x2c) = *(undefined1 *)((long)ppcVar11 + 0x2c);
      *(undefined4 *)(ppcVar12 + 5) = uVar3;
      ppcVar12[4] = (char *)&PTR_DAT_110b3ff70;
      uRam00000001137e27f0 = uRam00000001137e27f0 + 1;
      FUN_100049280(uRam00000001137e27e0,pcVar1,uVar8);
      puVar6 = puVar6 + 5;
    } while (puVar6 != puVar7);
  }
  FUN_100046b10(0x1137e2740);
  if (puStack_130 != auStack_120) {
    func_0x000107c60fd0();
  }
  func_0x000107c60e34(&DAT_109d30640,0x1137e2740,0x100000000);
  cStack_1d1 = '\0';
  apcStack_1d0[0] = &cStack_1d1;
  uStack_1d8 = 1;
  puStack_130 = (undefined8 *)&UNK_10f5ad4a5;
  uStack_128 = 0x1f;
  FUN_100049548(0x1137e2258,&UNK_10f5ad49b,apcStack_1d0,&uStack_1d8,&puStack_130);
  func_0x000107c60e34(&DAT_109d2f60c,0x1137e2258,0x100000000);
  apcStack_1d0[0] = (char *)CONCAT44(apcStack_1d0[0]._4_4_,1);
  puStack_130 = (undefined8 *)&UNK_10f5ad4d9;
  uStack_128 = 0x55;
  FUN_1000496b8(0x1137e2400,&UNK_10f5ad4c5,apcStack_1d0,&puStack_130);
  puVar6 = (undefined8 *)&DAT_109d305bc;
  uVar8 = 0x1137e2400;
  uVar9 = 0x100000000;
  func_0x000107c60e34();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar6;
  }
  func_0x000107c60e78();
  if (puStack_130 != auStack_120) {
    func_0x000107c60fd0();
  }
  func_0x000107c60bd8();
  puVar7 = puVar6;
  if (puRam0000000113834348 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x113834348;
    FUN_10004623c(0x113834348,FUN_100046388,&UNK_109df5b74);
  }
  puVar5 = puRam0000000113834348;
  if (*(int *)((long)puVar6 + 0x6c) != *(int *)(puVar6 + 0xe)) {
    puVar2 = (ulong *)puVar6[0xc];
    lVar13 = 0x14;
    if (puVar2 != (ulong *)puVar6[0xb]) {
      lVar13 = 0x10;
    }
    uVar4 = *(uint *)((long)(puVar6 + 0xb) + lVar13);
    puVar14 = puVar2;
    if (uVar4 == 0) {
LAB_100049380:
      puVar2 = puVar2 + uVar4;
      if (puVar14 != puVar2) {
        uVar10 = *puVar14;
        do {
          puVar7 = puVar5;
          FUN_1000493d8(puVar5,puVar6,uVar10,uVar8,uVar9);
          do {
            puVar14 = puVar14 + 1;
            if (puVar14 == puVar2) {
              return puVar7;
            }
            uVar10 = *puVar14;
          } while (0xfffffffffffffffd < uVar10);
        } while (puVar14 != puVar2);
      }
    }
    else {
      lVar13 = (ulong)uVar4 << 3;
      do {
        if (*puVar14 < 0xfffffffffffffffe) goto LAB_100049380;
        puVar14 = puVar14 + 1;
        lVar13 = lVar13 + -8;
      } while (lVar13 != 0);
    }
    return puVar7;
  }
  if (uRam0000000113834308 == 0) {
    FUN_10004623c(0x113834308,FUN_1000464e8,&UNK_109df5bf4);
  }
  uVar10 = uRam0000000113834308;
  puVar7 = puVar5;
  if (puVar6[3] == 0) {
    puVar7 = (undefined8 *)(uRam0000000113834308 + 0x80);
    FUN_1000470fc(puVar7,uVar8,uVar9,puVar6);
    if (((ulong)puVar7 & 1) == 0) {
      FUN_1000479bc();
      func_0x000107c2afe8();
      func_0x000107c2af88();
      func_0x000107c2af4c();
      func_0x000107c2af88();
      puVar6 = (undefined8 *)&UNK_10f60201b;
      func_0x000107c2b008(&UNK_10f60201b,1);
      puVar7 = puVar6;
      FUN_100045fdc();
      *(undefined1 *)(puVar7 + 0x10) = 0;
      puVar7[0x11] = &PTR_DAT_110b3fac8;
      puVar7[0x12] = 0;
      *puVar7 = &PTR_DAT_110b5be10;
      puVar7[0x13] = &PTR_DAT_110b5b9a8;
      puVar7[0x14] = &PTR_DAT_110b3fb30;
      puVar7[0x17] = puVar7 + 0x14;
      FUN_100049628();
      FUN_100046b10(puVar6);
      return puVar6;
    }
    if (uRam00000001137e7c38 == 0) {
      puVar7 = (undefined8 *)0x1137e7c38;
      FUN_10004623c(0x1137e7c38,FUN_1000464e8,&UNK_109df5bf4);
    }
    if (uVar10 == uRam00000001137e7c38) {
      puVar2 = (ulong *)puVar5[0x23];
      lVar13 = 0x14;
      if (puVar2 != (ulong *)puVar5[0x22]) {
        lVar13 = 0x10;
      }
      uVar4 = *(uint *)((long)puVar5 + lVar13 + 0x110);
      puVar14 = puVar2;
      if (uVar4 == 0) {
LAB_1000494c0:
        while (puVar14 != puVar2 + uVar4) {
          if (*puVar14 != uVar10) {
            puVar7 = puVar5;
            FUN_1000493d8(puVar5,puVar6,*puVar14,uVar8,uVar9);
          }
          do {
            puVar14 = puVar14 + 1;
            if (puVar14 == puVar2 + uVar4) {
              return puVar7;
            }
          } while (0xfffffffffffffffd < *puVar14);
        }
      }
      else {
        lVar13 = (ulong)uVar4 << 3;
        do {
          if (*puVar14 < 0xfffffffffffffffe) goto LAB_1000494c0;
          puVar14 = puVar14 + 1;
          lVar13 = lVar13 + -8;
        } while (lVar13 != 0);
      }
    }
  }
  return puVar7;
}



/* Entry: 100049280; end: 1000493d7;  */

undefined8 * FUN_100049280(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  
  puVar3 = param_1;
  if (puRam0000000113834348 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x113834348;
    FUN_10004623c(0x113834348,FUN_100046388,&UNK_109df5b74);
  }
  puVar4 = puRam0000000113834348;
  if (*(int *)((long)param_1 + 0x6c) != *(int *)(param_1 + 0xe)) {
    puVar1 = (ulong *)param_1[0xc];
    lVar6 = 0x14;
    if (puVar1 != (ulong *)param_1[0xb]) {
      lVar6 = 0x10;
    }
    uVar2 = *(uint *)((long)(param_1 + 0xb) + lVar6);
    puVar7 = puVar1;
    if (uVar2 == 0) {
LAB_100049380:
      puVar1 = puVar1 + uVar2;
      if (puVar7 != puVar1) {
        uVar5 = *puVar7;
        do {
          puVar3 = puVar4;
          FUN_1000493d8(puVar4,param_1,uVar5,param_2,param_3);
          do {
            puVar7 = puVar7 + 1;
            if (puVar7 == puVar1) {
              return puVar3;
            }
            uVar5 = *puVar7;
          } while (0xfffffffffffffffd < uVar5);
        } while (puVar7 != puVar1);
      }
    }
    else {
      lVar6 = (ulong)uVar2 << 3;
      do {
        if (*puVar7 < 0xfffffffffffffffe) goto LAB_100049380;
        puVar7 = puVar7 + 1;
        lVar6 = lVar6 + -8;
      } while (lVar6 != 0);
    }
    return puVar3;
  }
  if (uRam0000000113834308 == 0) {
    FUN_10004623c(0x113834308,FUN_1000464e8,&UNK_109df5bf4);
  }
  uVar5 = uRam0000000113834308;
  puVar3 = puVar4;
  if (param_1[3] == 0) {
    puVar3 = (undefined8 *)(uRam0000000113834308 + 0x80);
    FUN_1000470fc(puVar3,param_2,param_3,param_1);
    if (((ulong)puVar3 & 1) == 0) {
      FUN_1000479bc();
      func_0x000107c2afe8();
      func_0x000107c2af88();
      func_0x000107c2af4c();
      func_0x000107c2af88();
      puVar3 = (undefined8 *)&UNK_10f60201b;
      func_0x000107c2b008(&UNK_10f60201b,1);
      puVar4 = puVar3;
      FUN_100045fdc();
      *(undefined1 *)(puVar4 + 0x10) = 0;
      puVar4[0x11] = &PTR_DAT_110b3fac8;
      puVar4[0x12] = 0;
      *puVar4 = &PTR_DAT_110b5be10;
      puVar4[0x13] = &PTR_DAT_110b5b9a8;
      puVar4[0x14] = &PTR_DAT_110b3fb30;
      puVar4[0x17] = puVar4 + 0x14;
      FUN_100049628();
      FUN_100046b10(puVar3);
      return puVar3;
    }
    if (uRam00000001137e7c38 == 0) {
      puVar3 = (undefined8 *)0x1137e7c38;
      FUN_10004623c(0x1137e7c38,FUN_1000464e8,&UNK_109df5bf4);
    }
    if (uVar5 == uRam00000001137e7c38) {
      puVar1 = (ulong *)puVar4[0x23];
      lVar6 = 0x14;
      if (puVar1 != (ulong *)puVar4[0x22]) {
        lVar6 = 0x10;
      }
      uVar2 = *(uint *)((long)puVar4 + lVar6 + 0x110);
      puVar7 = puVar1;
      if (uVar2 == 0) {
LAB_1000494c0:
        while (puVar7 != puVar1 + uVar2) {
          if (*puVar7 != uVar5) {
            puVar3 = puVar4;
            FUN_1000493d8(puVar4,param_1,*puVar7,param_2,param_3);
          }
          do {
            puVar7 = puVar7 + 1;
            if (puVar7 == puVar1 + uVar2) {
              return puVar3;
            }
          } while (0xfffffffffffffffd < *puVar7);
        }
      }
      else {
        lVar6 = (ulong)uVar2 << 3;
        do {
          if (*puVar7 < 0xfffffffffffffffe) goto LAB_1000494c0;
          puVar7 = puVar7 + 1;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
    }
  }
  return puVar3;
}



/* Entry: 1000493d8; end: 100049547;  */

undefined8 *
FUN_1000493d8(undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  ulong *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong *puVar6;
  
  puVar3 = param_1;
  if (*(long *)(param_2 + 0x18) == 0) {
    puVar3 = (undefined8 *)(param_3 + 0x80);
    FUN_1000470fc(puVar3,param_4,param_5,param_2);
    if (((ulong)puVar3 & 1) == 0) {
      FUN_1000479bc();
      func_0x000107c2afe8();
      func_0x000107c2af88();
      func_0x000107c2af4c();
      func_0x000107c2af88();
      puVar3 = (undefined8 *)&UNK_10f60201b;
      func_0x000107c2b008(&UNK_10f60201b,1);
      puVar4 = puVar3;
      FUN_100045fdc();
      *(undefined1 *)(puVar4 + 0x10) = 0;
      puVar4[0x11] = &PTR_DAT_110b3fac8;
      puVar4[0x12] = 0;
      *puVar4 = &PTR_DAT_110b5be10;
      puVar4[0x13] = &PTR_DAT_110b5b9a8;
      puVar4[0x14] = &PTR_DAT_110b3fb30;
      puVar4[0x17] = puVar4 + 0x14;
      FUN_100049628();
      FUN_100046b10(puVar3);
      return puVar3;
    }
    if (uRam00000001137e7c38 == 0) {
      puVar3 = (undefined8 *)0x1137e7c38;
      FUN_10004623c(0x1137e7c38,FUN_1000464e8,&UNK_109df5bf4);
    }
    if (param_3 == uRam00000001137e7c38) {
      puVar1 = (ulong *)param_1[0x23];
      lVar5 = 0x14;
      if (puVar1 != (ulong *)param_1[0x22]) {
        lVar5 = 0x10;
      }
      uVar2 = *(uint *)((long)param_1 + lVar5 + 0x110);
      puVar6 = puVar1;
      if (uVar2 == 0) {
LAB_1000494c0:
        while (puVar6 != puVar1 + uVar2) {
          if (*puVar6 != param_3) {
            puVar3 = param_1;
            FUN_1000493d8(param_1,param_2,*puVar6,param_4,param_5);
          }
          do {
            puVar6 = puVar6 + 1;
            if (puVar6 == puVar1 + uVar2) {
              return puVar3;
            }
          } while (0xfffffffffffffffd < *puVar6);
        }
      }
      else {
        lVar5 = (ulong)uVar2 << 3;
        do {
          if (*puVar6 < 0xfffffffffffffffe) goto LAB_1000494c0;
          puVar6 = puVar6 + 1;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
  }
  return puVar3;
}



/* Entry: 100049548; end: 100049627;  */

undefined8 * FUN_100049548(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_100045fdc(param_1,0,0);
  *(undefined1 *)(puVar1 + 0x10) = 0;
  puVar1[0x11] = &PTR_DAT_110b3fac8;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_DAT_110b5be10;
  puVar1[0x13] = &PTR_DAT_110b5b9a8;
  puVar1[0x14] = &PTR_DAT_110b3fb30;
  puVar1[0x17] = puVar1 + 0x14;
  FUN_100049628();
  FUN_100046b10(param_1);
  return param_1;
}



/* Entry: 100049628; end: 1000496b7;  */

void FUN_100049628(long param_1,undefined8 param_2,undefined8 *param_3,ushort *param_4,
                  undefined8 *param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  uVar2 = param_2;
  func_0x000107c613d0(param_2);
  FUN_10004687c(param_1,param_2,uVar2);
  puVar1 = (undefined1 *)*param_3;
  *(undefined1 *)(param_1 + 0x80) = *puVar1;
  *(undefined1 *)(param_1 + 0x91) = 1;
  *(undefined1 *)(param_1 + 0x90) = *puVar1;
  *(ushort *)(param_1 + 10) = (*param_4 & 3) << 5 | *(ushort *)(param_1 + 10) & 0xff9f;
  uVar2 = *param_5;
  *(undefined8 *)(param_1 + 0x28) = param_5[1];
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  return;
}



/* Entry: 1000496b8; end: 1000497a7;  */

undefined8 * FUN_1000496b8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_100045fdc(param_1,0,0);
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  *(undefined1 *)(puVar1 + 0x17) = 0;
  puVar1[0x13] = &PTR_DAT_110b5b938;
  puVar1[0x14] = 0;
  *puVar1 = &PTR_DAT_110b5bd58;
  puVar1[0x18] = &PTR_DAT_110b5bc18;
  puVar1[0x19] = &PTR_DAT_110b40118;
  puVar1[0x1c] = puVar1 + 0x19;
  FUN_1000497a8();
  FUN_100046b10(param_1);
  return param_1;
}



/* Entry: 1000497a8; end: 10004980f;  */

void FUN_1000497a8(long param_1,undefined8 param_2,ushort *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x000107c613d0(param_2);
  FUN_10004687c(param_1,param_2,uVar1);
  *(ushort *)(param_1 + 10) = (*param_3 & 3) << 5 | *(ushort *)(param_1 + 10) & 0xff9f;
  uVar1 = *param_4;
  *(undefined8 *)(param_1 + 0x28) = param_4[1];
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}



/* Entry: 100049810; end: 100049867;  */

undefined8 * FUN_100049810(uint param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(ulong)(param_1 + 1);
  func_0x000107c60ee8(puVar2,0xc);
  if (puVar2 == (undefined8 *)0x0) {
    if (param_1 + 1 == 0) {
      puVar2 = (undefined8 *)0x1;
      func_0x000107c610a0();
      if (puVar2 != (undefined8 *)0x0) goto LAB_100049844;
    }
    puVar2 = (undefined8 *)&UNK_10f6023d9;
    func_0x000107c2b00c(&UNK_10f6023d9,1);
    puVar1 = puVar2;
    FUN_100045fdc();
    *(undefined1 *)(puVar1 + 0x10) = 0;
    puVar1[0x11] = &PTR_DAT_110b3fac8;
    puVar1[0x12] = 0;
    *puVar1 = &PTR_DAT_110b5be10;
    puVar1[0x13] = &PTR_DAT_110b5b9a8;
    puVar1[0x14] = &PTR_DAT_110b3fb30;
    puVar1[0x17] = puVar1 + 0x14;
    FUN_100049c0c();
    FUN_100046b10(puVar2);
    return puVar2;
  }
LAB_100049844:
  puVar2[param_1] = 2;
  return puVar2;
}



/* Entry: 100049868; end: 100049947;  */

undefined8 * FUN_100049868(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_100045fdc(param_1,0,0);
  *(undefined1 *)(puVar1 + 0x10) = 0;
  puVar1[0x11] = &PTR_DAT_110b3fac8;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_DAT_110b5be10;
  puVar1[0x13] = &PTR_DAT_110b5b9a8;
  puVar1[0x14] = &PTR_DAT_110b3fb30;
  puVar1[0x17] = puVar1 + 0x14;
  FUN_100049c0c();
  FUN_100046b10(param_1);
  return param_1;
}



/* Entry: 100049948; end: 100049c0b;  */

void FUN_100049948(void)

{
  undefined4 uStack_50;
  undefined1 uStack_49;
  undefined1 *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uStack_49 = 0;
  puStack_48 = &uStack_49;
  uStack_50 = 1;
  puStack_40 = &UNK_10f5ad56d;
  uStack_38 = 0x59;
  FUN_100049868(0x1138335e8,&UNK_10f5ad54d,&puStack_48,&uStack_50,&puStack_40);
  func_0x000107c60e34(&DAT_109d2f60c,0x1138335e8,0x100000000);
  puStack_48 = (undefined1 *)CONCAT44(puStack_48._4_4_,1);
  puStack_40 = &UNK_10f5ad5e3;
  uStack_38 = 0x3e;
  FUN_100049c9c(0x1138336a8,&UNK_10f5ad5c7,&puStack_48,&puStack_40);
  func_0x000107c60e34(&DAT_109d2f60c,0x1138336a8,0x100000000);
  FUN_100045fdc(0x113833830,0,0);
  uRam00000001138338b0 = 0;
  ppuRam00000001138338b8 = &PTR_DAT_110b3fc50;
  uRam00000001138338c0 = 0;
  ppuRam0000000113833830 = &PTR_DAT_110b5bec0;
  ppuRam00000001138338c8 = &PTR_DAT_110b5bfa0;
  ppuRam00000001138338d0 = &PTR_DAT_110b3fbc0;
  uRam00000001138338e8 = 0x1138338d0;
  FUN_10004687c();
  uRam00000001138338b0 = 1000;
  uRam00000001138338c0 = CONCAT35(uRam00000001138338c0._5_3_,0x100000000);
  uRam00000001138338c0 = CONCAT44(uRam00000001138338c0._4_4_,1000);
  uRam000000011383383a = uRam000000011383383a & 0xffbf | 0x20;
  puRam0000000113833850 = &UNK_10f5ad649;
  uRam0000000113833858 = 0x42;
  FUN_100046b10(0x113833830);
  func_0x000107c60e34(&DAT_109d2f8c4,0x113833830,0x100000000);
  FUN_100045fdc(0x113833768,0,0);
  uRam00000001138337e8 = 0;
  uRam0000000113833800 = 0;
  uRam00000001138337f8 = 0;
  ppuRam00000001138337f0 = &PTR_DAT_110b40280;
  ppuRam0000000113833768 = &PTR_DAT_110b401d0;
  ppuRam0000000113833808 = &PTR_DAT_110b5bb58;
  ppuRam0000000113833810 = &PTR_DAT_110b402e8;
  uRam0000000113833828 = 0x113833810;
  FUN_10004687c();
  uRam00000001138337e8 = 0x3d719799812dea11;
  uRam0000000113833800 = CONCAT71(uRam0000000113833800._1_7_,1);
  uRam00000001138337f8 = 0x3d719799812dea11;
  uRam0000000113833772 = uRam0000000113833772 & 0xffbf | 0x20;
  puRam0000000113833788 = &UNK_10f5ad6a4;
  uRam0000000113833790 = 0x7f;
  FUN_100046b10(0x113833768);
  func_0x000107c60e34(&DAT_109d317fc,0x113833768,0x100000000);
  return;
}



/* Entry: 100049c0c; end: 100049c9b;  */

void FUN_100049c0c(long param_1,undefined8 param_2,undefined8 *param_3,ushort *param_4,
                  undefined8 *param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  uVar2 = param_2;
  func_0x000107c613d0(param_2);
  FUN_10004687c(param_1,param_2,uVar2);
  puVar1 = (undefined1 *)*param_3;
  *(undefined1 *)(param_1 + 0x80) = *puVar1;
  *(undefined1 *)(param_1 + 0x91) = 1;
  *(undefined1 *)(param_1 + 0x90) = *puVar1;
  *(ushort *)(param_1 + 10) = (*param_4 & 3) << 5 | *(ushort *)(param_1 + 10) & 0xff9f;
  uVar2 = *param_5;
  *(undefined8 *)(param_1 + 0x28) = param_5[1];
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  return;
}



/* Entry: 100049c9c; end: 100049d73;  */

undefined8 * FUN_100049c9c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_100045fdc(param_1,0,0);
  *(undefined1 *)(puVar1 + 0x10) = 0;
  puVar1[0x11] = &PTR_DAT_110b3fac8;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_DAT_110b5be10;
  puVar1[0x13] = &PTR_DAT_110b5b9a8;
  puVar1[0x14] = &PTR_DAT_110b3fb30;
  puVar1[0x17] = puVar1 + 0x14;
  FUN_100049d74();
  FUN_100046b10(param_1);
  return param_1;
}



/* Entry: 100049d74; end: 100049ddb;  */

void FUN_100049d74(long param_1,undefined8 param_2,ushort *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x000107c613d0(param_2);
  FUN_10004687c(param_1,param_2,uVar1);
  *(ushort *)(param_1 + 10) = (*param_3 & 3) << 5 | *(ushort *)(param_1 + 10) & 0xff9f;
  uVar1 = *param_4;
  *(undefined8 *)(param_1 + 0x28) = param_4[1];
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}



/* Entry: 100049ddc; end: 10004a9b7;  */

/* WARNING: Removing unreachable block (ram,0x00010004a5d4) */
/* WARNING: Removing unreachable block (ram,0x00010004a5e4) */
/* WARNING: Removing unreachable block (ram,0x00010004a5e8) */
/* WARNING: Removing unreachable block (ram,0x00010004a5f4) */

long * FUN_100049ddc(void)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 uStack_278;
  undefined1 auStack_270 [8];
  undefined1 auStack_268 [40];
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined *puStack_238;
  undefined1 *apuStack_230 [2];
  undefined1 auStack_220 [48];
  undefined4 uStack_1f0;
  undefined8 auStack_1e8 [2];
  undefined1 auStack_1d8 [48];
  undefined4 uStack_1a8;
  undefined8 auStack_1a0 [2];
  undefined1 auStack_190 [48];
  undefined4 uStack_160;
  undefined1 auStack_158 [64];
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined1 auStack_100 [48];
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 auStack_b8 [48];
  undefined8 *apuStack_88 [2];
  undefined8 auStack_78 [6];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_110 = (undefined1 *)((ulong)uStack_110 & 0xffffffffffffff00);
  apuStack_88[0] = &uStack_110;
  uStack_c8 = 1;
  puStack_238 = &UNK_10f5ad72e;
  apuStack_230[0] = (undefined1 *)0x22;
  FUN_100049548(0x1137e2a50,&UNK_10f5ad724,apuStack_88,&uStack_c8,&puStack_238);
  func_0x000107c60e34(&DAT_109d2f60c,0x1137e2a50,0x100000000);
  apuStack_88[0] = (undefined8 *)CONCAT44(apuStack_88[0]._4_4_,1);
  puStack_238 = &UNK_10f5ad765;
  apuStack_230[0] = (undefined1 *)0x58;
  FUN_1000496b8(0x1137e2b10,&UNK_10f5ad751,apuStack_88,&puStack_238);
  func_0x000107c60e34(&DAT_109d305bc,0x1137e2b10,0x100000000);
  uRam00000001137e2998 = 0x5000000000000001;
  uRam00000001137e29a0 = 0x30000000;
  uStack_110 = (undefined1 *)0x3000000050000000;
  FUN_10004a9b8(apuStack_88,&uStack_110,2);
  puStack_238 = (undefined *)CONCAT44(puStack_238._4_4_,0x21);
  FUN_10004ab34(apuStack_230,apuStack_88);
  uStack_280 = uRam00000001137e29a0;
  uStack_27c = uRam00000001137e2998._4_4_;
  FUN_10004a9b8(&uStack_c8,&uStack_280,2);
  uStack_1f0 = 0x20;
  FUN_10004ab34(auStack_1e8,&uStack_c8);
  FUN_10004ab98(0x1137e29c0,&puStack_238,2);
  lVar4 = 0;
  do {
    if (auStack_1d8 + lVar4 != *(undefined1 **)((long)auStack_1e8 + lVar4)) {
      func_0x000107c60fd0();
    }
    lVar4 = lVar4 + -0x48;
  } while (lVar4 != -0x90);
  if ((undefined1 *)CONCAT44(uStack_c4,uStack_c8) != auStack_b8) {
    func_0x000107c60fd0();
  }
  if (apuStack_88[0] != auStack_78) {
    func_0x000107c60fd0();
  }
  func_0x000107c60e34(&UNK_109d31b28,0x1137e29c0,0x100000000);
  uRam00000001137e29a4 = 0x3000000050000000;
  uStack_d0 = 0x5000000030000000;
  FUN_10004a9b8(apuStack_88,&uStack_d0,2);
  puStack_238 = (undefined *)CONCAT44(puStack_238._4_4_,0x20);
  FUN_10004ab34(apuStack_230,apuStack_88);
  uStack_118 = (undefined4)uRam00000001137e29a4;
  uStack_114 = uRam00000001137e29a4._4_4_;
  FUN_10004a9b8(&uStack_c8,&uStack_118,2);
  uStack_1f0 = 0x21;
  FUN_10004ab34(auStack_1e8,&uStack_c8);
  uStack_240 = uRam00000001137e29a4._4_4_;
  uStack_23c = (undefined4)uRam00000001137e29a4;
  FUN_10004a9b8(&uStack_110,&uStack_240,2);
  uStack_1a8 = 0x28;
  FUN_10004ab34(auStack_1a0,&uStack_110);
  uStack_288 = (undefined4)uRam00000001137e29a4;
  uStack_284 = uRam00000001137e29a4._4_4_;
  FUN_10004a9b8(&uStack_280,&uStack_288,2);
  uStack_160 = 0x26;
  FUN_10004ab34(auStack_158,&uStack_280);
  FUN_10004ab98(0x1137e29d8,&puStack_238,4);
  lVar4 = 0x120;
  do {
    if (auStack_268 + lVar4 != *(undefined1 **)((long)&uStack_278 + lVar4)) {
      func_0x000107c60fd0();
    }
    lVar4 = lVar4 + -0x48;
  } while (lVar4 != 0);
  if ((undefined1 *)CONCAT44(uStack_27c,uStack_280) != auStack_270) {
    func_0x000107c60fd0();
  }
  if (uStack_110 != auStack_100) {
    func_0x000107c60fd0();
  }
  if ((undefined1 *)CONCAT44(uStack_c4,uStack_c8) != auStack_b8) {
    func_0x000107c60fd0();
  }
  if (apuStack_88[0] != auStack_78) {
    func_0x000107c60fd0();
  }
  func_0x000107c60e34(&UNK_109d31b28,0x1137e29d8,0x100000000);
  uStack_280 = uRam00000001137e29a4._4_4_;
  uStack_27c = (undefined4)uRam00000001137e29a4;
  FUN_10004a9b8(apuStack_88,&uStack_280,2);
  puStack_238 = (undefined *)CONCAT44(puStack_238._4_4_,0x20);
  FUN_10004ab34(apuStack_230,apuStack_88);
  uStack_d0 = uRam00000001137e29a4;
  FUN_10004a9b8(&uStack_c8,&uStack_d0,2);
  uStack_1f0 = 0x21;
  FUN_10004ab34(auStack_1e8,&uStack_c8);
  uStack_118 = (undefined4)uRam00000001137e29a4;
  uStack_114 = uRam00000001137e29a4._4_4_;
  FUN_10004a9b8(&uStack_110,&uStack_118,2);
  uStack_1a8 = 0x26;
  FUN_10004ab34(auStack_1a0,&uStack_110);
  FUN_10004ab98(0x1137e29f0,&puStack_238,3);
  lVar4 = 0;
  do {
    if (auStack_190 + lVar4 != *(undefined1 **)((long)auStack_1a0 + lVar4)) {
      func_0x000107c60fd0();
    }
    lVar4 = lVar4 + -0x48;
  } while (lVar4 != -0xd8);
  if (uStack_110 != auStack_100) {
    func_0x000107c60fd0();
  }
  if ((undefined1 *)CONCAT44(uStack_c4,uStack_c8) != auStack_b8) {
    func_0x000107c60fd0();
  }
  if (apuStack_88[0] != auStack_78) {
    func_0x000107c60fd0();
  }
  func_0x000107c60e34(&UNK_109d31b28,0x1137e29f0,0x100000000);
  uStack_c8 = uRam00000001137e29a4._4_4_;
  uStack_c4 = (undefined4)uRam00000001137e29a4;
  FUN_10004a9b8(apuStack_88,&uStack_c8,2);
  puStack_238 = (undefined *)CONCAT44(puStack_238._4_4_,0x28);
  FUN_10004ab34(apuStack_230,apuStack_88);
  FUN_10004ab98(0x1137e2a08,&puStack_238,1);
  if (apuStack_230[0] != auStack_220) {
    func_0x000107c60fd0();
  }
  if (apuStack_88[0] != auStack_78) {
    func_0x000107c60fd0();
  }
  func_0x000107c60e34(&UNK_109d31b28,0x1137e2a08,0x100000000);
  uStack_110 = (undefined1 *)CONCAT44((undefined4)uRam00000001137e29a4,uRam00000001137e29a4._4_4_);
  FUN_10004a9b8(apuStack_88,&uStack_110,2);
  puStack_238 = (undefined *)CONCAT44(puStack_238._4_4_,0x20);
  FUN_10004ab34(apuStack_230,apuStack_88);
  uStack_280 = (undefined4)uRam00000001137e29a4;
  uStack_27c = uRam00000001137e29a4._4_4_;
  FUN_10004a9b8(&uStack_c8,&uStack_280,2);
  uStack_1f0 = 0x21;
  FUN_10004ab34(auStack_1e8,&uStack_c8);
  FUN_10004ab98(0x1137e2a20,&puStack_238,2);
  lVar4 = 0;
  do {
    if (auStack_1d8 + lVar4 != *(undefined1 **)((long)auStack_1e8 + lVar4)) {
      func_0x000107c60fd0();
    }
    lVar4 = lVar4 + -0x48;
  } while (lVar4 != -0x90);
  if ((undefined1 *)CONCAT44(uStack_c4,uStack_c8) != auStack_b8) {
    func_0x000107c60fd0();
  }
  if (apuStack_88[0] != auStack_78) {
    func_0x000107c60fd0();
  }
  func_0x000107c60e34(&UNK_109d31b28,0x1137e2a20,0x100000000);
  uRam00000001137e29ac = 0x8007ffff800;
  uRam00000001137e29b4 = 0x3000000050000000;
  uStack_110 = (undefined1 *)0x8007ffff800;
  FUN_10004a9b8(apuStack_88,&uStack_110,2);
  puStack_238 = (undefined *)CONCAT44(puStack_238._4_4_,7);
  FUN_10004ab34(apuStack_230,apuStack_88);
  uStack_280 = uRam00000001137e29ac._4_4_;
  uStack_27c = (undefined4)uRam00000001137e29ac;
  FUN_10004a9b8(&uStack_c8,&uStack_280,2);
  uStack_1f0 = 8;
  FUN_10004ab34(auStack_1e8,&uStack_c8);
  FUN_10004ab98(0x1137e2a38,&puStack_238,2);
  lVar4 = 0;
  do {
    if (auStack_1d8 + lVar4 != *(undefined1 **)((long)auStack_1e8 + lVar4)) {
      func_0x000107c60fd0();
    }
    lVar4 = lVar4 + -0x48;
  } while (lVar4 != -0x90);
  if ((undefined1 *)CONCAT44(uStack_c4,uStack_c8) != auStack_b8) {
    func_0x000107c60fd0();
  }
  if (apuStack_88[0] != auStack_78) {
    func_0x000107c60fd0();
  }
  plVar1 = (long *)&UNK_109d31b28;
  uVar2 = 0x1137e2a38;
  lVar4 = 0x100000000;
  func_0x000107c60e34(&UNK_109d31b28,0x1137e2a38);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    func_0x000107c60e78();
    puVar5 = auStack_1d8;
    lVar6 = -0x90;
    do {
      if (puVar5 != *(undefined1 **)(puVar5 + -0x10)) {
        func_0x000107c60fd0();
      }
      puVar5 = puVar5 + -0x48;
      lVar6 = lVar6 + 0x48;
    } while (lVar6 != 0);
    if ((undefined1 *)CONCAT44(uStack_c4,uStack_c8) != auStack_b8) {
      func_0x000107c60fd0();
    }
    if (apuStack_88[0] != auStack_78) {
      func_0x000107c60fd0();
    }
    func_0x000107c60bd8();
    *plVar1 = (long)(plVar1 + 2);
    plVar1[1] = 0xc00000000;
    uVar3 = (lVar4 << 2) >> 2;
    if (uVar3 < 0xd) {
      uVar3 = 0;
    }
    else {
      FUN_10004e450(plVar1,plVar1 + 2,uVar3,4);
      uVar3 = (ulong)*(uint *)(plVar1 + 1);
    }
    if (lVar4 != 0) {
      func_0x000107c610b4(*plVar1 + uVar3 * 4,uVar2,lVar4 << 2);
      uVar3 = (ulong)*(uint *)(plVar1 + 1);
    }
    *(int *)(plVar1 + 1) = (int)uVar3 + (int)lVar4;
    return plVar1;
  }
  return plVar1;
}



/* Entry: 10004a9b8; end: 10004aa6b;  */

long * FUN_10004a9b8(long *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  *param_1 = (long)(param_1 + 2);
  param_1[1] = 0xc00000000;
  uVar1 = (param_3 << 2) >> 2;
  if (uVar1 < 0xd) {
    uVar1 = 0;
  }
  else {
    FUN_10004e450(param_1,param_1 + 2,uVar1,4);
    uVar1 = (ulong)*(uint *)(param_1 + 1);
  }
  if (param_3 != 0) {
    func_0x000107c610b4(*param_1 + uVar1 * 4,param_2,param_3 << 2);
    uVar1 = (ulong)*(uint *)(param_1 + 1);
  }
  *(int *)(param_1 + 1) = (int)uVar1 + (int)param_3;
  return param_1;
}



/* Entry: 10004aa6c; end: 10004ab33;  */

long * FUN_10004aa6c(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  if (param_1 == param_2) {
    return param_1;
  }
  uVar1 = *(uint *)(param_2 + 1);
  uVar2 = *(uint *)(param_1 + 1);
  uVar3 = (ulong)uVar2;
  if (uVar1 <= uVar2) {
    if (uVar1 != 0) {
      func_0x000107c610b8(*param_1,*param_2,(ulong)uVar1 << 2);
    }
    goto LAB_10004ab1c;
  }
  if (*(uint *)((long)param_1 + 0xc) < uVar1) {
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_10004e450(param_1,param_1 + 2,(ulong)uVar1,4);
LAB_10004aaf4:
    uVar3 = 0;
  }
  else {
    if (uVar2 == 0) goto LAB_10004aaf4;
    func_0x000107c610b8(*param_1,*param_2,uVar3 << 2);
  }
  if (*(uint *)(param_2 + 1) - uVar3 != 0) {
    func_0x000107c610b4(*param_1 + uVar3 * 4,*param_2 + uVar3 * 4,
                        (*(uint *)(param_2 + 1) - uVar3) * 4);
  }
LAB_10004ab1c:
  *(uint *)(param_1 + 1) = uVar1;
  return param_1;
}



/* Entry: 10004ab34; end: 10004ab97;  */

long * FUN_10004ab34(long *param_1,long param_2)

{
  *param_1 = (long)(param_1 + 2);
  param_1[1] = 0xc00000000;
  if (*(int *)(param_2 + 8) != 0) {
    FUN_10004aa6c(param_1);
  }
  return param_1;
}



/* Entry: 10004ab98; end: 10004ad3f;  */

long * FUN_10004ab98(long *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  uint *puVar9;
  long *plVar10;
  long *plVar11;
  
  plVar8 = param_1 + 1;
  *plVar8 = 0;
  param_1[2] = 0;
  *param_1 = (long)plVar8;
  if (param_3 == 0) {
    return param_1;
  }
  plVar7 = (long *)0x0;
  puVar9 = param_2 + param_3 * 0x12;
  plVar5 = plVar8;
  do {
    uVar1 = *param_2;
    plVar6 = plVar8;
    plVar11 = plVar8;
    plVar10 = plVar8;
    if (plVar5 == plVar8) {
LAB_10004ac78:
      if (plVar7 != (long *)0x0) {
        plVar11 = plVar6 + 1;
        plVar10 = plVar6;
      }
      if (*plVar11 == 0) goto LAB_10004ac90;
    }
    else {
      plVar5 = plVar8;
      plVar2 = plVar7;
      if (plVar7 == (long *)0x0) {
        do {
          plVar6 = (long *)plVar5[2];
          bVar3 = (long *)*plVar6 == plVar5;
          plVar5 = plVar6;
        } while (bVar3);
        if (*(uint *)(plVar6 + 4) < uVar1) goto LAB_10004ac78;
      }
      else {
        do {
          plVar6 = plVar2;
          plVar2 = (long *)plVar6[1];
        } while ((long *)plVar6[1] != (long *)0x0);
        if (*(uint *)(plVar6 + 4) < uVar1) goto LAB_10004ac78;
        do {
          while (plVar10 = plVar7, *(uint *)(plVar10 + 4) <= uVar1) {
            if (uVar1 <= *(uint *)(plVar10 + 4)) goto LAB_10004ace4;
            plVar7 = (long *)plVar10[1];
            if ((long *)plVar10[1] == (long *)0x0) {
              plVar11 = plVar10 + 1;
              goto LAB_10004ac90;
            }
          }
          plVar7 = (long *)*plVar10;
          plVar11 = plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
      }
LAB_10004ac90:
      puVar4 = (undefined8 *)0x68;
      func_0x000107c60e20();
      *(uint *)(puVar4 + 4) = uVar1;
      FUN_10004ab34(puVar4 + 5,param_2 + 2);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = plVar10;
      *plVar11 = (long)puVar4;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
        puVar4 = (undefined8 *)*plVar11;
      }
      FUN_100047ebc(param_1[1],puVar4);
      param_1[2] = param_1[2] + 1;
    }
LAB_10004ace4:
    param_2 = param_2 + 0x12;
    if (param_2 == puVar9) {
      return param_1;
    }
    plVar5 = (long *)*param_1;
    plVar7 = (long *)param_1[1];
  } while( true );
}



/* Entry: 10004ad40; end: 10004ae1f;  */

undefined8 * FUN_10004ad40(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_100045fdc(param_1,0,0);
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[0x11] = &PTR_DAT_110b3fc50;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_DAT_110b5bec0;
  puVar1[0x13] = &PTR_DAT_110b5bfa0;
  puVar1[0x14] = &PTR_DAT_110b3fbc0;
  puVar1[0x17] = puVar1 + 0x14;
  FUN_10004aea4();
  FUN_100046b10(param_1);
  return param_1;
}



/* Entry: 10004ae20; end: 10004aea3;  */

void FUN_10004ae20(void)

{
  undefined4 uStack_44;
  undefined4 *puStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined4 uStack_24;
  
  uStack_24 = 1;
  puStack_38 = &UNK_10f5ad7e7;
  uStack_30 = 0x36;
  uStack_44 = 0x20;
  puStack_40 = &uStack_44;
  FUN_10004ad40(0x1137e2bf8,&UNK_10f5ad7be,&uStack_24,&puStack_38,&puStack_40);
  func_0x000107c60e34(&DAT_109d2f8c4,0x1137e2bf8,0x100000000);
  return;
}



/* Entry: 10004aea4; end: 10004af2f;  */

void FUN_10004aea4(long param_1,undefined8 param_2,ushort *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2;
  func_0x000107c613d0(param_2);
  FUN_10004687c(param_1,param_2,uVar2);
  *(ushort *)(param_1 + 10) = (*param_3 & 3) << 5 | *(ushort *)(param_1 + 10) & 0xff9f;
  uVar2 = *param_4;
  *(undefined8 *)(param_1 + 0x28) = param_4[1];
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  uVar1 = *(undefined4 *)*param_5;
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  *(undefined1 *)(param_1 + 0x94) = 1;
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  return;
}



/* Entry: 10004af30; end: 10004b00f;  */

undefined8 * FUN_10004af30(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_100045fdc(param_1,0,0);
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[0x11] = &PTR_DAT_110b3fc50;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_DAT_110b5bec0;
  puVar1[0x13] = &PTR_DAT_110b5bfa0;
  puVar1[0x14] = &PTR_DAT_110b3fbc0;
  puVar1[0x17] = puVar1 + 0x14;
  FUN_10004b094();
  FUN_100046b10(param_1);
  return param_1;
}



/* Entry: 10004b010; end: 10004b093;  */

void FUN_10004b010(void)

{
  undefined4 uStack_44;
  undefined4 *puStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined4 uStack_24;
  
  uStack_24 = 1;
  puStack_38 = &UNK_10f5ad849;
  uStack_30 = 0x22;
  uStack_44 = 100;
  puStack_40 = &uStack_44;
  FUN_10004af30(0x1137e2cb8,&UNK_10f5ad824,&uStack_24,&puStack_38,&puStack_40);
  func_0x000107c60e34(&DAT_109d2f8c4,0x1137e2cb8,0x100000000);
  return;
}



/* Entry: 10004b094; end: 10004b11f;  */

void FUN_10004b094(long param_1,undefined8 param_2,ushort *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2;
  func_0x000107c613d0(param_2);
  FUN_10004687c(param_1,param_2,uVar2);
  *(ushort *)(param_1 + 10) = (*param_3 & 3) << 5 | *(ushort *)(param_1 + 10) & 0xff9f;
  uVar2 = *param_4;
  *(undefined8 *)(param_1 + 0x28) = param_4[1];
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  uVar1 = *(undefined4 *)*param_5;
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  *(undefined1 *)(param_1 + 0x94) = 1;
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  return;
}



/* Entry: 10004b120; end: 10004b21f;  */

void FUN_10004b120(void)

{
  FUN_100045fdc(0x1137e2d78,0,0);
  uRam00000001137e2df8 = 0;
  ppuRam00000001137e2e00 = &PTR_DAT_110b3fac8;
  uRam00000001137e2e08 = 0;
  ppuRam00000001137e2d78 = &PTR_DAT_110b5be10;
  ppuRam00000001137e2e10 = &PTR_DAT_110b5b9a8;
  ppuRam00000001137e2e18 = &PTR_DAT_110b3fb30;
  uRam00000001137e2e30 = 0x1137e2e18;
  FUN_10004687c();
  uRam00000001137e2df8 = 0;
  uRam00000001137e2e08 = CONCAT62(uRam00000001137e2e08._2_6_,0x100);
  uRam00000001137e2d82 = uRam00000001137e2d82 & 0xffbf | 0x20;
  FUN_100046b10(0x1137e2d78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&DAT_109d2f60c,0x1137e2d78,0x100000000);
  return;
}



/* Entry: 10004b220; end: 10004b48b;  */

void FUN_10004b220(void)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 *puStack_58;
  
  FUN_100045fdc(0x1137e2e38,0,0);
  uRam00000001137e2eb8 = 0;
  ppuRam00000001137e2ec0 = &PTR_DAT_110b3fc50;
  uRam00000001137e2ec8 = 0;
  ppuRam00000001137e2e38 = &PTR_DAT_110b5bec0;
  ppuRam00000001137e2ed0 = &PTR_DAT_110b5bfa0;
  ppuRam00000001137e2ed8 = &PTR_DAT_110b3fbc0;
  uRam00000001137e2ef0 = 0x1137e2ed8;
  FUN_10004687c();
  uRam00000001137e2eb8 = 0x1e;
  uRam00000001137e2ec8 = CONCAT35(uRam00000001137e2ec8._5_3_,0x100000000);
  uRam00000001137e2ec8 = CONCAT44(uRam00000001137e2ec8._4_4_,0x1e);
  uRam00000001137e2e42 = uRam00000001137e2e42 & 0xffbf | 0x20;
  puRam00000001137e2e58 = &UNK_10f5ad9b6;
  uRam00000001137e2e60 = 0x5b;
  FUN_100046b10(0x1137e2e38);
  func_0x000107c60e34(&DAT_109d2f8c4,0x1137e2e38,0x100000000);
  uStack_60 = 1;
  uStack_5c = 5;
  puStack_58 = &uStack_5c;
  puStack_70 = &UNK_10f5ada2e;
  uStack_68 = 0x3e;
  FUN_10004b48c(0x1137e2ef8,&UNK_10f5ada12,&puStack_58,&uStack_60,&puStack_70);
  func_0x000107c60e34(&DAT_109d2f8c4,0x1137e2ef8,0x100000000);
  FUN_100045fdc(0x1137e2fb8,0,0);
  uRam00000001137e3038 = 0;
  uRam00000001137e3048 = 0;
  ppuRam00000001137e3040 = &PTR_DAT_110b3fc50;
  ppuRam00000001137e2fb8 = &PTR_DAT_110b5bec0;
  ppuRam00000001137e3050 = &PTR_DAT_110b5bfa0;
  ppuRam00000001137e3058 = &PTR_DAT_110b3fbc0;
  uRam00000001137e3070 = 0x1137e3058;
  FUN_10004687c(0x1137e2fb8,&UNK_10f5ada6d,0xc);
  uRam00000001137e3038 = 3;
  uRam00000001137e3048 = CONCAT35(uRam00000001137e3048._5_3_,0x100000000);
  uRam00000001137e3048 = CONCAT44(uRam00000001137e3048._4_4_,3);
  uRam00000001137e2fc2 = uRam00000001137e2fc2 & 0xffbf | 0x20;
  puRam00000001137e2fd8 = &UNK_10f5ada7a;
  uRam00000001137e2fe0 = 0x3c;
  FUN_100046b10();
  func_0x000107c60e34(&DAT_109d2f8c4,0x1137e2fb8,0x100000000);
  return;
}



/* Entry: 10004b48c; end: 10004b56b;  */

undefined8 * FUN_10004b48c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_100045fdc(param_1,0,0);
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[0x11] = &PTR_DAT_110b3fc50;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_DAT_110b5bec0;
  puVar1[0x13] = &PTR_DAT_110b5bfa0;
  puVar1[0x14] = &PTR_DAT_110b3fbc0;
  puVar1[0x17] = puVar1 + 0x14;
  FUN_10004b56c();
  FUN_100046b10(param_1);
  return param_1;
}



/* Entry: 10004b56c; end: 10004b5f7;  */

void FUN_10004b56c(long param_1,undefined8 param_2,undefined8 *param_3,ushort *param_4,
                  undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2;
  func_0x000107c613d0(param_2);
  FUN_10004687c(param_1,param_2,uVar2);
  uVar1 = *(undefined4 *)*param_3;
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  *(undefined1 *)(param_1 + 0x94) = 1;
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  *(ushort *)(param_1 + 10) = (*param_4 & 3) << 5 | *(ushort *)(param_1 + 10) & 0xff9f;
  uVar2 = *param_5;
  *(undefined8 *)(param_1 + 0x28) = param_5[1];
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  return;
}



/* Entry: 10004b5f8; end: 10004b70f;  */

void FUN_10004b5f8(void)

{
  FUN_100045fdc(0x1137e3078,0,0);
  uRam00000001137e30f8 = 0;
  ppuRam00000001137e3100 = &PTR_DAT_110b3fc50;
  uRam00000001137e3108 = 0;
  ppuRam00000001137e3078 = &PTR_DAT_110b5bec0;
  ppuRam00000001137e3110 = &PTR_DAT_110b5bfa0;
  ppuRam00000001137e3118 = &PTR_DAT_110b3fbc0;
  uRam00000001137e3130 = 0x1137e3118;
  FUN_10004687c();
  uRam00000001137e30f8 = 6;
  uRam00000001137e3108 = CONCAT35(uRam00000001137e3108._5_3_,0x100000000);
  uRam00000001137e3108 = CONCAT44(uRam00000001137e3108._4_4_,6);
  uRam00000001137e3082 = uRam00000001137e3082 & 0xffbf | 0x20;
  puRam00000001137e3098 = &UNK_10f5adad1;
  uRam00000001137e30a0 = 0x93;
  FUN_100046b10(0x1137e3078);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&DAT_109d2f8c4,0x1137e3078,0x100000000);
  return;
}



/* Entry: 10004b710; end: 10004bd7b;  */

void FUN_10004b710(void)

{
  undefined8 *puVar1;
  undefined4 uStack_74;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined4 uStack_5c;
  undefined4 *puStack_58;
  
  puVar1 = (undefined8 *)0x1137e3148;
  FUN_100045fdc(0x1137e3148,0,0);
  *(undefined1 *)((long)puVar1 + 0x94) = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = &PTR_DAT_110b3fc50;
  *puVar1 = &PTR_DAT_110b40378;
  puVar1[0x13] = &PTR_DAT_110b5bfa0;
  puVar1[0x14] = &PTR_DAT_110b40428;
  puVar1[0x17] = puVar1 + 0x14;
  FUN_10004687c();
  uRam00000001137e3152 = uRam00000001137e3152 & 0xffbf | 0x20;
  puRam00000001137e3168 = &UNK_10f5adb7b;
  uRam00000001137e3170 = 0x28;
  FUN_10004bd7c(0x1137e31c8,0x1137e3148);
  FUN_100046b10(0x1137e3148);
  func_0x000107c60e34(&DAT_109d339ac,0x1137e3148,0x100000000);
  FUN_100045fdc(0x1137e3208,0,0);
  uRam00000001137e329c = 0;
  uRam00000001137e3288 = 0;
  ppuRam00000001137e3290 = &PTR_DAT_110b3fc50;
  ppuRam00000001137e3208 = &PTR_DAT_110b40378;
  ppuRam00000001137e32a0 = &PTR_DAT_110b5bfa0;
  ppuRam00000001137e32a8 = &PTR_DAT_110b40428;
  uRam00000001137e32c0 = 0x1137e32a8;
  FUN_10004687c(0x1137e3208,&UNK_10f5adba4,0x17);
  uRam00000001137e3212 = uRam00000001137e3212 & 0xffbf | 0x20;
  puRam00000001137e3228 = &UNK_10f5adbbc;
  uRam00000001137e3230 = 0x3c;
  FUN_10004bd7c(0x1137e3288,0x1137e3208);
  FUN_100046b10(0x1137e3208);
  func_0x000107c60e34(&DAT_109d339ac,0x1137e3208,0x100000000);
  FUN_100045fdc(0x1137e32c8,0,0);
  uRam00000001137e335c = 0;
  puRam00000001137e3348 = (undefined4 *)0x0;
  ppuRam00000001137e3350 = &PTR_DAT_110b3fc50;
  ppuRam00000001137e32c8 = &PTR_DAT_110b40378;
  ppuRam00000001137e3360 = &PTR_DAT_110b5bfa0;
  ppuRam00000001137e3368 = &PTR_DAT_110b40428;
  uRam00000001137e3380 = 0x1137e3368;
  FUN_10004687c(0x1137e32c8,&UNK_10f5adbf9,0x1e);
  uRam00000001137e32d2 = uRam00000001137e32d2 & 0xffbf | 0x20;
  puRam00000001137e32e8 = &UNK_10f5adc18;
  uRam00000001137e32f0 = 0x7b;
  FUN_10004bd7c(0x1137e3348,0x1137e32c8);
  *puRam00000001137e3348 = 8;
  uRam00000001137e335c = 1;
  uRam00000001137e3358 = 8;
  FUN_100046b10(0x1137e32c8);
  func_0x000107c60e34(&DAT_109d339ac,0x1137e32c8,0x100000000);
  uStack_5c = 1;
  puStack_70 = &UNK_10f5adcb1;
  uStack_68 = 0x5e;
  uStack_74 = 100;
  puStack_58 = &uStack_74;
  FUN_10004bdf0(0x1137e3388,&UNK_10f5adc94,&uStack_5c,&puStack_70,&puStack_58);
  func_0x000107c60e34(&DAT_109d2f8c4,0x1137e3388,0x100000000);
  FUN_100045fdc(0x1137e3448,0,0);
  uRam00000001137e34c8 = 0;
  uRam00000001137e34d8 = 0;
  ppuRam00000001137e34d0 = &PTR_DAT_110b3fc50;
  ppuRam00000001137e3448 = &PTR_DAT_110b5bec0;
  ppuRam00000001137e34e0 = &PTR_DAT_110b5bfa0;
  ppuRam00000001137e34e8 = &PTR_DAT_110b3fbc0;
  uRam00000001137e3500 = 0x1137e34e8;
  FUN_10004687c(0x1137e3448,&UNK_10f5add10,0xf);
  uRam00000001137e3452 = uRam00000001137e3452 & 0xffbf | 0x20;
  puRam00000001137e3468 = &UNK_10f5add20;
  uRam00000001137e3470 = 0x4f;
  uRam00000001137e34c8 = 100;
  uRam00000001137e34d8 = CONCAT35(uRam00000001137e34d8._5_3_,0x100000000);
  uRam00000001137e34d8 = CONCAT44(uRam00000001137e34d8._4_4_,100);
  FUN_100046b10(0x1137e3448);
  func_0x000107c60e34(&DAT_109d2f8c4,0x1137e3448,0x100000000);
  uStack_74 = CONCAT31(uStack_74._1_3_,1);
  puStack_58 = &uStack_74;
  uStack_5c = 1;
  puStack_70 = &UNK_10f5add8d;
  uStack_68 = 0x2f;
  FUN_10004bf5c(0x1137e3508,&UNK_10f5add70,&puStack_58,&uStack_5c,&puStack_70);
  func_0x000107c60e34(&DAT_109d2f60c,0x1137e3508,0x100000000);
  FUN_100045fdc(0x1137e35c8,0,0);
  uRam00000001137e3648 = 0;
  uRam00000001137e3658 = 0;
  ppuRam00000001137e3650 = &PTR_DAT_110b3fac8;
  ppuRam00000001137e35c8 = &PTR_DAT_110b5be10;
  ppuRam00000001137e3660 = &PTR_DAT_110b5b9a8;
  ppuRam00000001137e3668 = &PTR_DAT_110b3fb30;
  uRam00000001137e3680 = 0x1137e3668;
  FUN_10004687c(0x1137e35c8,&UNK_10f5addbd,0x2b);
  uRam00000001137e35d2 = uRam00000001137e35d2 & 0xffbf | 0x20;
  puRam00000001137e35e8 = &UNK_10f5adde9;
  uRam00000001137e35f0 = 0x31;
  uRam00000001137e3648 = 1;
  uRam00000001137e3658 = CONCAT62(uRam00000001137e3658._2_6_,0x101);
  FUN_100046b10(0x1137e35c8);
  func_0x000107c60e34(&DAT_109d2f60c,0x1137e35c8,0x100000000);
  FUN_100045fdc(0x1137e3688,0,0);
  uRam00000001137e3708 = 0;
  ppuRam00000001137e3710 = &PTR_DAT_110b3fc50;
  uRam00000001137e3718 = 0;
  ppuRam00000001137e3688 = &PTR_DAT_110b5bec0;
  ppuRam00000001137e3720 = &PTR_DAT_110b5bfa0;
  ppuRam00000001137e3728 = &PTR_DAT_110b3fbc0;
  uRam00000001137e3740 = 0x1137e3728;
  FUN_10004687c(0x1137e3688,&UNK_10f5ade1b,0x15);
  uRam00000001137e3692 = uRam00000001137e3692 & 0xffbf | 0x20;
  puRam00000001137e36a8 = &UNK_10f5ade31;
  uRam00000001137e36b0 = 0x3f;
  uRam00000001137e3708 = 5;
  uRam00000001137e3718 = CONCAT35(uRam00000001137e3718._5_3_,0x100000000);
  uRam00000001137e3718 = CONCAT44(uRam00000001137e3718._4_4_,5);
  FUN_100046b10();
  func_0x000107c60e34(&DAT_109d2f8c4,0x1137e3688,0x100000000);
  return;
}



/* Entry: 10004bd7c; end: 10004bdef;  */

void FUN_10004bd7c(long *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined *apuStack_48 [4];
  undefined2 uStack_28;
  
  if (*param_1 != 0) {
    apuStack_48[0] = &UNK_10f5ade71;
    uStack_28 = 0x103;
    FUN_1000479bc();
    func_0x000107c2afec(param_2,apuStack_48,0,0,param_1);
    return;
  }
  *param_1 = (long)param_3;
  *(undefined1 *)((long)param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 2) = *param_3;
  return;
}



/* Entry: 10004bdf0; end: 10004becf;  */

undefined8 * FUN_10004bdf0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_100045fdc(param_1,0,0);
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[0x11] = &PTR_DAT_110b3fc50;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_DAT_110b5bec0;
  puVar1[0x13] = &PTR_DAT_110b5bfa0;
  puVar1[0x14] = &PTR_DAT_110b3fbc0;
  puVar1[0x17] = puVar1 + 0x14;
  FUN_10004bed0();
  FUN_100046b10(param_1);
  return param_1;
}



/* Entry: 10004bed0; end: 10004bf5b;  */

void FUN_10004bed0(long param_1,undefined8 param_2,ushort *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2;
  func_0x000107c613d0(param_2);
  FUN_10004687c(param_1,param_2,uVar2);
  *(ushort *)(param_1 + 10) = (*param_3 & 3) << 5 | *(ushort *)(param_1 + 10) & 0xff9f;
  uVar2 = *param_4;
  *(undefined8 *)(param_1 + 0x28) = param_4[1];
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  uVar1 = *(undefined4 *)*param_5;
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  *(undefined1 *)(param_1 + 0x94) = 1;
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  return;
}



/* Entry: 10004bf5c; end: 10004c03b;  */

undefined8 * FUN_10004bf5c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_100045fdc(param_1,0,0);
  *(undefined1 *)(puVar1 + 0x10) = 0;
  puVar1[0x11] = &PTR_DAT_110b3fac8;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_DAT_110b5be10;
  puVar1[0x13] = &PTR_DAT_110b5b9a8;
  puVar1[0x14] = &PTR_DAT_110b3fb30;
  puVar1[0x17] = puVar1 + 0x14;
  FUN_10004c03c();
  FUN_100046b10(param_1);
  return param_1;
}



/* Entry: 10004c03c; end: 10004c0cb;  */

void FUN_10004c03c(long param_1,undefined8 param_2,undefined8 *param_3,ushort *param_4,
                  undefined8 *param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  uVar2 = param_2;
  func_0x000107c613d0(param_2);
  FUN_10004687c(param_1,param_2,uVar2);
  puVar1 = (undefined1 *)*param_3;
  *(undefined1 *)(param_1 + 0x80) = *puVar1;
  *(undefined1 *)(param_1 + 0x91) = 1;
  *(undefined1 *)(param_1 + 0x90) = *puVar1;
  *(ushort *)(param_1 + 10) = (*param_4 & 3) << 5 | *(ushort *)(param_1 + 10) & 0xff9f;
  uVar2 = *param_5;
  *(undefined8 *)(param_1 + 0x28) = param_5[1];
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  return;
}



/* Entry: 10004c0cc; end: 10004c1ab;  */

undefined8 * FUN_10004c0cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_100045fdc(param_1,0,0);
  *(undefined1 *)((long)puVar1 + 0x91) = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = &PTR_DAT_110b3fac8;
  *puVar1 = &PTR_DAT_110b404a8;
  puVar1[0x13] = &PTR_DAT_110b5b9a8;
  puVar1[0x14] = &PTR_DAT_110b40558;
  puVar1[0x17] = puVar1 + 0x14;
  FUN_10004c224();
  FUN_100046b10(param_1);
  return param_1;
}



/* Entry: 10004c1ac; end: 10004c223;  */

void FUN_10004c1ac(void)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  uStack_28 = 0x1137e3748;
  uStack_2c = 1;
  puStack_40 = &UNK_10f5adeac;
  uStack_38 = 0x21;
  FUN_10004c0cc(0x1137e3750,&UNK_10f5ade9b,&uStack_28,&uStack_2c,&puStack_40);
  func_0x000107c60e34(&DAT_109d33e08,0x1137e3750,0x100000000);
  return;
}



/* Entry: 10004c224; end: 10004c2a7;  */

void FUN_10004c224(long param_1,undefined8 param_2,undefined8 *param_3,ushort *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x000107c613d0(param_2);
  FUN_10004687c(param_1,param_2,uVar1);
  FUN_10004c2a8(param_1 + 0x80,param_1,*param_3);
  *(ushort *)(param_1 + 10) = (*param_4 & 3) << 5 | *(ushort *)(param_1 + 10) & 0xff9f;
  uVar1 = *param_5;
  *(undefined8 *)(param_1 + 0x28) = param_5[1];
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}



/* Entry: 10004c2a8; end: 10004c323;  */

undefined8 FUN_10004c2a8(long *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined *apuStack_48 [4];
  undefined2 uStack_28;
  
  if (*param_1 != 0) {
    apuStack_48[0] = &UNK_10f5ade71;
    uStack_28 = 0x103;
    FUN_1000479bc();
    func_0x000107c2afec(param_2,apuStack_48,0,0,param_1);
    return param_2;
  }
  *param_1 = (long)param_3;
  *(undefined1 *)((long)param_1 + 0x11) = 1;
  *(undefined1 *)(param_1 + 2) = *param_3;
  return 0;
}



/* Entry: 10004c324; end: 10004c50f;  */

/* WARNING: Possible PIC construction at 0x00010004c3e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010004c3e8) */

void FUN_10004c324(void)

{
  FUN_100045fdc(0x1137e3810,0,0);
  uRam00000001137e3890 = 0;
  ppuRam00000001137e3898 = &PTR_DAT_110b40688;
  uRam00000001137e38a0 = 0;
  ppuRam00000001137e3810 = &PTR_DAT_110b405d8;
  ppuRam00000001137e38a8 = &PTR_DAT_110b5bbb8;
  ppuRam00000001137e38b0 = &PTR_DAT_110b406f0;
  uRam00000001137e38c8 = 0x1137e38b0;
  FUN_10004687c();
  uRam00000001137e3890 = 0x41200000;
  uRam00000001137e38a0 = CONCAT35(uRam00000001137e38a0._5_3_,0x100000000);
  uRam00000001137e38a0 = CONCAT44(uRam00000001137e38a0._4_4_,0x41200000);
  uRam00000001137e381a = uRam00000001137e381a & 0xffbf | 0x20;
  puRam00000001137e3830 = &UNK_10f5adefd;
  uRam00000001137e3838 = 0x50;
  FUN_100046b10(0x1137e3810);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&DAT_109d34c80,0x1137e3810,0x100000000);
  return;
}



/* Entry: 10004c510; end: 10004c7df;  */

void FUN_10004c510(void)

{
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  char cStack_31;
  
  FUN_100045fdc(0x1137e3b18,0,0);
  uRam00000001137e3b98 = 0;
  uRam00000001137e3ba0 = 0;
  uRam00000001137e3bc0 = 0;
  uRam00000001137e3bc8 = 0;
  uRam00000001137e3bd0 = 0;
  uRam00000001137e3ba8 = 0;
  ppuRam00000001137e3bb0 = &PTR_DAT_110b5b938;
  uRam00000001137e3bb8 = 0;
  ppuRam00000001137e3b18 = &PTR_DAT_110b5bd58;
  ppuRam00000001137e3bd8 = &PTR_DAT_110b5bc18;
  ppuRam00000001137e3be0 = &PTR_DAT_110b40118;
  uRam00000001137e3bf8 = 0x1137e3be0;
  FUN_10004687c();
  puRam00000001137e3b48 = &UNK_10f5adfc0;
  uRam00000001137e3b50 = 0x20;
  puRam00000001137e3b38 = &UNK_10f5adfc0;
  uRam00000001137e3b40 = 0x20;
  FUN_10002d4d8(&puStack_48,"");
  func_0x000107c60ca4(0x1137e3b98,&puStack_48);
  uRam00000001137e3bd0 = 1;
  func_0x000107c60ca4(0x1137e3bb8,&puStack_48);
  if (cStack_31 < '\0') {
    func_0x000107c60e14(puStack_48);
  }
  FUN_100046b10(0x1137e3b18);
  func_0x000107c60e34(&DAT_109d305bc,0x1137e3b18,0x100000000);
  FUN_100045fdc(0x1137e3998,0,0);
  uRam00000001137e3a18 = 0;
  ppuRam00000001137e3a20 = &PTR_DAT_110b3fc50;
  uRam00000001137e3a28 = 0;
  ppuRam00000001137e3998 = &PTR_DAT_110b5bec0;
  ppuRam00000001137e3a30 = &PTR_DAT_110b5bfa0;
  ppuRam00000001137e3a38 = &PTR_DAT_110b3fbc0;
  uRam00000001137e3a50 = 0x1137e3a38;
  FUN_10004687c();
  uRam00000001137e39a2 = uRam00000001137e39a2 & 0xffbf | 0x20;
  uRam00000001137e3a18 = 100;
  uRam00000001137e3a28 = CONCAT35(uRam00000001137e3a28._5_3_,0x100000000);
  uRam00000001137e3a28 = CONCAT44(uRam00000001137e3a28._4_4_,100);
  puRam00000001137e39b8 = &UNK_10f5adff4;
  uRam00000001137e39c0 = 0x5c;
  FUN_100046b10(0x1137e3998);
  func_0x000107c60e34(&DAT_109d2f8c4,0x1137e3998,0x100000000);
  uStack_54 = 1;
  uStack_50 = 0x1137e3990;
  puStack_48 = &UNK_10f5ae062;
  uStack_40 = 0x21;
  FUN_10004c0cc(0x1137e3a58,&UNK_10f5ae051,&uStack_50,&uStack_54,&puStack_48);
  func_0x000107c60e34(&DAT_109d33e08,0x1137e3a58,0x100000000);
  return;
}



/* Entry: 10004c7e0; end: 10004cccf;  */

/* WARNING: Possible PIC construction at 0x00010004caec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010004cbac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010004caf0) */
/* WARNING: Removing unreachable block (ram,0x00010004cbb0) */
/* WARNING: Removing unreachable block (ram,0x00010004cbe8) */
/* WARNING: Removing unreachable block (ram,0x00010004ccb0) */
/* WARNING: Removing unreachable block (ram,0x00010004ccc4) */
/* WARNING: Removing unreachable block (ram,0x00010004ccc8) */
/* WARNING: Removing unreachable block (ram,0x00010004cbc8) */

void FUN_10004c7e0(void)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  char **ppcVar5;
  char **ppcVar6;
  undefined8 *puVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 *puStack_198;
  uint uStack_190;
  undefined8 auStack_188 [20];
  char *apcStack_e8 [2];
  ulong uStack_d8;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  char *pcStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  apcStack_e8[0] = "none";
  apcStack_e8[1] = (char *)0x4;
  uStack_d8 = uStack_d8 & 0xffffffff00000000;
  puStack_d0 = &UNK_10f5ae0cd;
  ppuStack_c8 = (undefined **)0x5;
  puStack_c0 = &UNK_10f5ae0d3;
  uStack_b8 = 0x10;
  uStack_b0 = 1;
  puStack_a8 = &UNK_10f5ae0e4;
  uStack_a0 = 0x17;
  pcStack_98 = "all";
  uStack_90 = 3;
  uStack_88 = 2;
  puStack_80 = &UNK_10f5ae0fc;
  uStack_78 = 10;
  FUN_100048910(&puStack_198,apcStack_e8,3);
  puVar4 = (undefined8 *)0x1137e3ce8;
  FUN_100045fdc(0x1137e3ce8,0,0);
  *(undefined1 *)((long)puVar4 + 0x94) = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = &PTR_DAT_110b40888;
  *puVar4 = &PTR_DAT_110b40770;
  puVar4[0x13] = &PTR_DAT_110b40820;
  puVar4[0x14] = puVar4;
  puVar4[0x15] = puVar4 + 0x17;
  puVar4[0x16] = 0x800000000;
  puVar4[0x47] = &PTR_DAT_110b40910;
  puVar4[0x4a] = puVar4 + 0x47;
  FUN_10004687c();
  uRam00000001137e3cf2 = uRam00000001137e3cf2 & 0xffbf | 0x20;
  if (lRam00000001137e3d68 == 0) {
    lRam00000001137e3d68 = 0x1138338f0;
    uRam00000001137e3d7c = 1;
    uRam00000001137e3d78 = uRam00000001138338f0;
  }
  else {
    apcStack_e8[0] = "cl::location(x) specified more than once!";
    ppuStack_c8 = (undefined **)CONCAT62(ppuStack_c8._2_6_,0x103);
    FUN_1000479bc();
    func_0x000107c2afec(0x1137e3ce8,apcStack_e8,0,0,puVar4);
  }
  puRam00000001137e3d08 = &UNK_10f5ae09d;
  uRam00000001137e3d10 = 0x2f;
  if (uStack_190 != 0) {
    puVar7 = puStack_198 + (ulong)uStack_190 * 5;
    puVar4 = puStack_198;
    do {
      ppcVar5 = ppcRam00000001137e3d90;
      pcVar1 = (char *)*puVar4;
      uVar2 = puVar4[1];
      apcStack_e8[0] = pcVar1;
      apcStack_e8[1] = (char *)uVar2;
      puStack_d0 = (undefined *)puVar4[4];
      uStack_d8 = puVar4[3];
      ppuStack_c8 = &PTR_DAT_110b40888;
      puStack_c0 = (undefined *)CONCAT35(puStack_c0._5_3_,0x100000000);
      puStack_c0 = (undefined *)CONCAT44(puStack_c0._4_4_,*(undefined4 *)(puVar4 + 2));
      if (uRam00000001137e3d98 < uRam00000001137e3d9c) {
LAB_10004ca04:
        ppcVar5 = apcStack_e8;
      }
      else {
        if ((apcStack_e8 < ppcRam00000001137e3d90) ||
           (ppcRam00000001137e3d90 + (ulong)uRam00000001137e3d98 * 6 <= apcStack_e8)) {
          func_0x000107c2afc0((ulong)uRam00000001137e3d98 + 1);
          goto LAB_10004ca04;
        }
        func_0x000107c2afc0((ulong)uRam00000001137e3d98 + 1);
        ppcVar5 = (char **)((long)ppcRam00000001137e3d90 + ((long)apcStack_e8 - (long)ppcVar5));
      }
      ppcVar6 = ppcRam00000001137e3d90 + (ulong)uRam00000001137e3d98 * 6;
      pcVar8 = *ppcVar5;
      pcVar10 = ppcVar5[3];
      pcVar9 = ppcVar5[2];
      ppcVar6[1] = ppcVar5[1];
      *ppcVar6 = pcVar8;
      ppcVar6[3] = pcVar10;
      ppcVar6[2] = pcVar9;
      ppcVar6[4] = (char *)&PTR_DAT_110b408f0;
      uVar3 = *(undefined4 *)(ppcVar5 + 5);
      *(undefined1 *)((long)ppcVar6 + 0x2c) = *(undefined1 *)((long)ppcVar5 + 0x2c);
      *(undefined4 *)(ppcVar6 + 5) = uVar3;
      ppcVar6[4] = (char *)&PTR_DAT_110b40888;
      uRam00000001137e3d98 = uRam00000001137e3d98 + 1;
      FUN_100049280(uRam00000001137e3d88,pcVar1,uVar2);
      puVar4 = puVar4 + 5;
    } while (puVar4 != puVar7);
  }
  FUN_100046b10(0x1137e3ce8);
  if (puStack_198 != auStack_188) {
    func_0x000107c60fd0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&DAT_109d359d0,0x1137e3ce8,0x100000000);
  return;
}



/* Entry: 10004ccd0; end: 10004cddf;  */

void FUN_10004ccd0(void)

{
  FUN_100045fdc(0x1137e3f40,0,0);
  uRam00000001137e3fc0 = 0;
  ppuRam00000001137e3fc8 = &PTR_DAT_110b3fac8;
  uRam00000001137e3fd0 = 0;
  ppuRam00000001137e3f40 = &PTR_DAT_110b5be10;
  ppuRam00000001137e3fd8 = &PTR_DAT_110b5b9a8;
  ppuRam00000001137e3fe0 = &PTR_DAT_110b3fb30;
  uRam00000001137e3ff8 = 0x1137e3fe0;
  FUN_10004687c();
  uRam00000001137e3fc0 = 0;
  uRam00000001137e3fd0 = CONCAT62(uRam00000001137e3fd0._2_6_,0x100);
  uRam00000001137e3f4a = uRam00000001137e3f4a & 0xffbf | 0x20;
  puRam00000001137e3f60 = &UNK_10f5ae162;
  uRam00000001137e3f68 = 0x2a;
  FUN_100046b10(0x1137e3f40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&DAT_109d2f60c,0x1137e3f40,0x100000000);
  return;
}



/* Entry: 10004cde0; end: 10004d08f;  */

/* WARNING: Possible PIC construction at 0x00010004cea0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010004cf34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010004cea4) */
/* WARNING: Removing unreachable block (ram,0x00010004cf38) */

void FUN_10004cde0(void)

{
  FUN_100045fdc(0x1137e4000,0,0);
  uRam00000001137e4080 = 0;
  ppuRam00000001137e4088 = &PTR_DAT_110b3fac8;
  uRam00000001137e4090 = 0;
  ppuRam00000001137e4000 = &PTR_DAT_110b5be10;
  ppuRam00000001137e4098 = &PTR_DAT_110b5b9a8;
  ppuRam00000001137e40a0 = &PTR_DAT_110b3fb30;
  uRam00000001137e40b8 = 0x1137e40a0;
  FUN_10004687c();
  uRam00000001137e400a = uRam00000001137e400a & 0xffbf | 0x20;
  uRam00000001137e4080 = 0;
  uRam00000001137e4090 = CONCAT62(uRam00000001137e4090._2_6_,0x100);
  puRam00000001137e4020 = &UNK_10f5ae19d;
  uRam00000001137e4028 = 0x39;
  FUN_100046b10(0x1137e4000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&DAT_109d2f60c,0x1137e4000,0x100000000);
  return;
}



/* Entry: 10004d090; end: 10004d1ab;  */

undefined8 *
FUN_10004d090(undefined8 *param_1,undefined8 param_2,ushort param_3,undefined8 param_4,
             undefined8 param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = param_1;
  FUN_100045fdc(param_1,0,0);
  *(undefined4 *)(puVar2 + 0x10) = 0;
  puVar2[0x11] = &PTR_DAT_110b3fc50;
  puVar2[0x12] = 0;
  *puVar2 = &PTR_DAT_110b5bec0;
  puVar2[0x13] = &PTR_DAT_110b5bfa0;
  puVar2[0x14] = &PTR_DAT_110b3fbc0;
  puVar2[0x17] = puVar2 + 0x14;
  uVar3 = param_2;
  func_0x000107c613d0(param_2);
  FUN_10004687c(param_1,param_2,uVar3);
  *(ushort *)((long)param_1 + 10) = *(ushort *)((long)param_1 + 10) & 0xff9f | (param_3 & 3) << 5;
  param_1[4] = param_4;
  param_1[5] = param_5;
  uVar1 = *param_6;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined1 *)((long)param_1 + 0x94) = 1;
  *(undefined4 *)(param_1 + 0x12) = uVar1;
  FUN_100046b10(param_1);
  return param_1;
}



/* Entry: 10004d1ac; end: 10004df77;  */

void FUN_10004d1ac(void)

{
  undefined4 uStack_84;
  undefined4 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined4 uStack_64;
  
  puStack_78 = (undefined *)CONCAT44(puStack_78._4_4_,100);
  FUN_10004d090(0x1137e4250,&UNK_10f5ae3d5,2,&UNK_10f5ae3f5,0x53,&puStack_78);
  func_0x000107c60e34(&DAT_109d2f8c4,0x1137e4250,0x100000000);
  FUN_100045fdc(0x1137e4310,0,0);
  uRam00000001137e43a1 = 0;
  uRam00000001137e4390 = 0;
  ppuRam00000001137e4398 = &PTR_DAT_110b3fac8;
  ppuRam00000001137e4310 = &PTR_DAT_110b404a8;
  ppuRam00000001137e43a8 = &PTR_DAT_110b5b9a8;
  ppuRam00000001137e43b0 = &PTR_DAT_110b40558;
  uRam00000001137e43c8 = 0x1137e43b0;
  FUN_10004687c(0x1137e4310,&UNK_10f5ae449,0xb);
  uRam00000001137e431a = uRam00000001137e431a & 0xffbf | 0x20;
  FUN_10004c2a8(0x1137e4390,0x1137e4310);
  puRam00000001137e4330 = &UNK_10f5ae455;
  uRam00000001137e4338 = 0x35;
  FUN_100046b10(0x1137e4310);
  func_0x000107c60e34(&DAT_109d33e08,0x1137e4310,0x100000000);
  FUN_100045fdc(0x1137e43d0,0,0);
  uRam00000001137e4450 = 0;
  ppuRam00000001137e4458 = &PTR_DAT_110b3fac8;
  uRam00000001137e4460 = 0;
  ppuRam00000001137e43d0 = &PTR_DAT_110b5be10;
  ppuRam00000001137e4468 = &PTR_DAT_110b5b9a8;
  ppuRam00000001137e4470 = &PTR_DAT_110b3fb30;
  uRam00000001137e4488 = 0x1137e4470;
  FUN_10004687c(0x1137e43d0,&UNK_10f5ae48b,0x12);
  uRam00000001137e43da = uRam00000001137e43da & 0xffbf | 0x20;
  puRam00000001137e43f0 = &UNK_10f5ae49e;
  uRam00000001137e43f8 = 0x38;
  FUN_100046b10(0x1137e43d0);
  func_0x000107c60e34(&DAT_109d2f60c,0x1137e43d0,0x100000000);
  FUN_100045fdc(0x1137e4490,0,0);
  uRam00000001137e4510 = 0;
  ppuRam00000001137e4518 = &PTR_DAT_110b3fac8;
  uRam00000001137e4520 = 0;
  ppuRam00000001137e4490 = &PTR_DAT_110b5be10;
  ppuRam00000001137e4528 = &PTR_DAT_110b5b9a8;
  ppuRam00000001137e4530 = &PTR_DAT_110b3fb30;
  uRam00000001137e4548 = 0x1137e4530;
  FUN_10004687c(0x1137e4490,&UNK_10f5ae4d7,0x10);
  uRam00000001137e449a = uRam00000001137e449a & 0xffbf | 0x20;
  puRam00000001137e44b0 = &UNK_10f5ae4e8;
  uRam00000001137e44b8 = 0x41;
  FUN_100046b10(0x1137e4490);
  func_0x000107c60e34(&DAT_109d2f60c,0x1137e4490,0x100000000);
  FUN_100045fdc(0x1137e4550,0,0);
  uRam00000001137e45d0 = 0;
  ppuRam00000001137e45d8 = &PTR_DAT_110b3fac8;
  uRam00000001137e45e0 = 0;
  ppuRam00000001137e4550 = &PTR_DAT_110b5be10;
  ppuRam00000001137e45e8 = &PTR_DAT_110b5b9a8;
  ppuRam00000001137e45f0 = &PTR_DAT_110b3fb30;
  uRam00000001137e4608 = 0x1137e45f0;
  FUN_10004687c(0x1137e4550,&UNK_10f5ae52a,0xe);
  uRam00000001137e455a = uRam00000001137e455a & 0xffbf | 0x20;
  puRam00000001137e4570 = &UNK_10f5ae539;
  uRam00000001137e4578 = 0x3f;
  uRam00000001137e45d0 = 0;
  uRam00000001137e45e0 = CONCAT62(uRam00000001137e45e0._2_6_,0x100);
  FUN_100046b10(0x1137e4550);
  func_0x000107c60e34(&DAT_109d2f60c,0x1137e4550,0x100000000);
  uStack_64 = 1;
  puStack_78 = &UNK_10f5ae596;
  uStack_70 = 0x3a;
  uStack_84 = 0x20;
  puStack_80 = &uStack_84;
  FUN_10004bdf0(0x1137e4610,&UNK_10f5ae579,&uStack_64,&puStack_78,&puStack_80);
  func_0x000107c60e34(&DAT_109d2f8c4,0x1137e4610,0x100000000);
  uStack_64 = 1;
  puStack_78 = &UNK_10f5ae5ee;
  uStack_70 = 0x34;
  uStack_84 = 500;
  puStack_80 = &uStack_84;
  FUN_10004bdf0(0x1137e46d0,&UNK_10f5ae5d1,&uStack_64,&puStack_78,&puStack_80);
  func_0x000107c60e34(&DAT_109d2f8c4,0x1137e46d0,0x100000000);
  puStack_78 = (undefined *)CONCAT44(puStack_78._4_4_,0x20);
  FUN_10004df78(0x1137e4790,&UNK_10f5ae623,1,&UNK_10f5ae64b,0x36,&puStack_78);
  func_0x000107c60e34(&DAT_109d2f8c4,0x1137e4790,0x100000000);
  FUN_100045fdc(0x1137e4850,0,0);
  uRam00000001137e48d0 = 0;
  uRam00000001137e48e0 = 0;
  ppuRam00000001137e48d8 = &PTR_DAT_110b3fc50;
  ppuRam00000001137e4850 = &PTR_DAT_110b5bec0;
  ppuRam00000001137e48e8 = &PTR_DAT_110b5bfa0;
  ppuRam00000001137e48f0 = &PTR_DAT_110b3fbc0;
  uRam00000001137e4908 = 0x1137e48f0;
  FUN_10004687c(0x1137e4850,&UNK_10f5ae682,0x36);
  uRam00000001137e485a = uRam00000001137e485a & 0xffbf | 0x20;
  puRam00000001137e4870 = &UNK_10f5ae6b9;
  uRam00000001137e4878 = 0x3f;
  uRam00000001137e48d0 = 2;
  uRam00000001137e48e0 = CONCAT35(uRam00000001137e48e0._5_3_,0x100000000);
  uRam00000001137e48e0 = CONCAT44(uRam00000001137e48e0._4_4_,2);
  FUN_100046b10(0x1137e4850);
  func_0x000107c60e34(&DAT_109d2f8c4,0x1137e4850,0x100000000);
  uStack_64 = 1;
  puStack_78 = &UNK_10f5ae722;
  uStack_70 = 0x37;
  uStack_84 = 2;
  puStack_80 = &uStack_84;
  FUN_10004ad40(0x1137e4910,&UNK_10f5ae6f9,&uStack_64,&puStack_78,&puStack_80);
  func_0x000107c60e34(&DAT_109d2f8c4,0x1137e4910,0x100000000);
  FUN_100045fdc(0x1137e49d0,0,0);
  uRam00000001137e4a50 = 0;
  uRam00000001137e4a60 = 0;
  ppuRam00000001137e4a58 = &PTR_DAT_110b3fc50;
  ppuRam00000001137e49d0 = &PTR_DAT_110b5bec0;
  ppuRam00000001137e4a68 = &PTR_DAT_110b5bfa0;
  ppuRam00000001137e4a70 = &PTR_DAT_110b3fbc0;
  uRam00000001137e4a88 = 0x1137e4a70;
  FUN_10004687c(0x1137e49d0,&UNK_10f5ae75a,0x20);
  uRam00000001137e49da = uRam00000001137e49da & 0xffbf | 0x20;
  puRam00000001137e49f0 = &UNK_10f5ae77b;
  uRam00000001137e49f8 = 0x26;
  uRam00000001137e4a50 = 0x20;
  uRam00000001137e4a60 = CONCAT35(uRam00000001137e4a60._5_3_,0x100000000);
  uRam00000001137e4a60 = CONCAT44(uRam00000001137e4a60._4_4_,0x20);
  FUN_100046b10(0x1137e49d0);
  func_0x000107c60e34(&DAT_109d2f8c4,0x1137e49d0,0x100000000);
  FUN_100045fdc(0x1137e4a90,0,0);
  uRam00000001137e4b10 = 0;
  ppuRam00000001137e4b18 = &PTR_DAT_110b3fc50;
  uRam00000001137e4b20 = 0;
  ppuRam00000001137e4a90 = &PTR_DAT_110b5bec0;
  ppuRam00000001137e4b28 = &PTR_DAT_110b5bfa0;
  ppuRam00000001137e4b30 = &PTR_DAT_110b3fbc0;
  uRam00000001137e4b48 = 0x1137e4b30;
  FUN_10004687c(0x1137e4a90,&UNK_10f5ae7a2,0x2c);
  uRam00000001137e4a9a = uRam00000001137e4a9a & 0xffbf | 0x20;
  puRam00000001137e4ab0 = &UNK_10f5ae7cf;
  uRam00000001137e4ab8 = 0x2c;
  uRam00000001137e4b10 = 0x20;
  uRam00000001137e4b20 = CONCAT35(uRam00000001137e4b20._5_3_,0x100000000);
  uRam00000001137e4b20 = CONCAT44(uRam00000001137e4b20._4_4_,0x20);
  FUN_100046b10(0x1137e4a90);
  func_0x000107c60e34(&DAT_109d2f8c4,0x1137e4a90,0x100000000);
  puStack_78 = (undefined *)CONCAT44(puStack_78._4_4_,8);
  FUN_10004d090(0x1137e4b50,&UNK_10f5ae7fc,1,&UNK_10f5ae81c,0x2a,&puStack_78);
  func_0x000107c60e34(&DAT_109d2f8c4,0x1137e4b50,0x100000000);
  FUN_100045fdc(0x1137e4c10,0,0);
  uRam00000001137e4c90 = 0;
  uRam00000001137e4ca0 = 0;
  ppuRam00000001137e4c98 = &PTR_DAT_110b3fc50;
  ppuRam00000001137e4c10 = &PTR_DAT_110b5bec0;
  ppuRam00000001137e4ca8 = &PTR_DAT_110b5bfa0;
  ppuRam00000001137e4cb0 = &PTR_DAT_110b3fbc0;
  uRam00000001137e4cc8 = 0x1137e4cb0;
  FUN_10004687c(0x1137e4c10,&UNK_10f5ae847,0x21);
  uRam00000001137e4c1a = uRam00000001137e4c1a & 0xffbf | 0x20;
  puRam00000001137e4c30 = &UNK_10f5ae869;
  uRam00000001137e4c38 = 0x2a;
  uRam00000001137e4c90 = 8;
  uRam00000001137e4ca0 = CONCAT35(uRam00000001137e4ca0._5_3_,0x100000000);
  uRam00000001137e4ca0 = CONCAT44(uRam00000001137e4ca0._4_4_,8);
  FUN_100046b10(0x1137e4c10);
  func_0x000107c60e34(&DAT_109d2f8c4,0x1137e4c10,0x100000000);
  uStack_64 = 1;
  puStack_78 = &UNK_10f5ae8b9;
  uStack_70 = 0x2f;
  uStack_84 = 0x1000;
  puStack_80 = &uStack_84;
  FUN_10004af30(0x1137e4cd0,&UNK_10f5ae894,&uStack_64,&puStack_78,&puStack_80);
  func_0x000107c60e34(&DAT_109d2f8c4,0x1137e4cd0,0x100000000);
  FUN_100045fdc(0x1137e4d90,0,0);
  uRam00000001137e4e10 = 0;
  uRam00000001137e4e20 = 0;
  ppuRam00000001137e4e18 = &PTR_DAT_110b3fc50;
  ppuRam00000001137e4d90 = &PTR_DAT_110b5bec0;
  ppuRam00000001137e4e28 = &PTR_DAT_110b5bfa0;
  ppuRam00000001137e4e30 = &PTR_DAT_110b3fbc0;
  uRam00000001137e4e48 = 0x1137e4e30;
  FUN_10004687c(0x1137e4d90,&UNK_10f5ae8e9,0x19);
  uRam00000001137e4d9a = uRam00000001137e4d9a & 0xffbf | 0x20;
  puRam00000001137e4db0 = &UNK_10f5ae903;
  uRam00000001137e4db8 = 0x3c;
  uRam00000001137e4e10 = 0x20;
  uRam00000001137e4e20 = CONCAT35(uRam00000001137e4e20._5_3_,0x100000000);
  uRam00000001137e4e20 = CONCAT44(uRam00000001137e4e20._4_4_,0x20);
  FUN_100046b10(0x1137e4d90);
  func_0x000107c60e34(&DAT_109d2f8c4,0x1137e4d90,0x100000000);
  FUN_100045fdc(0x1137e4e50,0,0);
  uRam00000001137e4ed0 = 0;
  ppuRam00000001137e4ed8 = &PTR_DAT_110b3fac8;
  uRam00000001137e4ee0 = 0;
  ppuRam00000001137e4e50 = &PTR_DAT_110b5be10;
  ppuRam00000001137e4ee8 = &PTR_DAT_110b5b9a8;
  ppuRam00000001137e4ef0 = &PTR_DAT_110b3fb30;
  uRam00000001137e4f08 = 0x1137e4ef0;
  FUN_10004687c(0x1137e4e50,&UNK_10f5ae940,0x25);
  uRam00000001137e4e5a = uRam00000001137e4e5a & 0xffbf | 0x20;
  uRam00000001137e4ed0 = 1;
  uRam00000001137e4ee0 = CONCAT62(uRam00000001137e4ee0._2_6_,0x101);
  puRam00000001137e4e70 = &UNK_10f5ae966;
  uRam00000001137e4e78 = 0x40;
  FUN_100046b10(0x1137e4e50);
  func_0x000107c60e34(&DAT_109d2f60c,0x1137e4e50,0x100000000);
  FUN_100045fdc(0x1137e4f10,0,0);
  uRam00000001137e4f90 = 0;
  ppuRam00000001137e4f98 = &PTR_DAT_110b3fac8;
  uRam00000001137e4fa0 = 0;
  ppuRam00000001137e4f10 = &PTR_DAT_110b5be10;
  ppuRam00000001137e4fa8 = &PTR_DAT_110b5b9a8;
  ppuRam00000001137e4fb0 = &PTR_DAT_110b3fb30;
  uRam00000001137e4fc8 = 0x1137e4fb0;
  FUN_10004687c(0x1137e4f10,&UNK_10f5ae9a7,0x2f);
  uRam00000001137e4f1a = uRam00000001137e4f1a & 0xffbf | 0x20;
  uRam00000001137e4f90 = 0;
  uRam00000001137e4fa0 = CONCAT62(uRam00000001137e4fa0._2_6_,0x100);
  puRam00000001137e4f30 = &UNK_10f5ae9d7;
  uRam00000001137e4f38 = 0x61;
  FUN_100046b10(0x1137e4f10);
  func_0x000107c60e34(&DAT_109d2f60c,0x1137e4f10,0x100000000);
  puStack_78 = (undefined *)CONCAT44(puStack_78._4_4_,8);
  FUN_10004df78(0x1137e4fd0,&UNK_10f5aea39,1,&UNK_10f5aea61,0x60,&puStack_78);
  func_0x000107c60e34(&DAT_109d2f8c4,0x1137e4fd0,0x100000000);
  FUN_100045fdc(0x1137e5090,0,0);
  uRam00000001137e5110 = 0;
  uRam00000001137e5120 = 0;
  ppuRam00000001137e5118 = &PTR_DAT_110b3fac8;
  ppuRam00000001137e5090 = &PTR_DAT_110b5be10;
  ppuRam00000001137e5128 = &PTR_DAT_110b5b9a8;
  ppuRam00000001137e5130 = &PTR_DAT_110b3fb30;
  uRam00000001137e5148 = 0x1137e5130;
  FUN_10004687c(0x1137e5090,&UNK_10f5aeac2,0x1c);
  uRam00000001137e509a = uRam00000001137e509a & 0xffbf | 0x20;
  puRam00000001137e50b0 = &UNK_10f5aeadf;
  uRam00000001137e50b8 = 0x20;
  uRam00000001137e5110 = 1;
  uRam00000001137e5120 = CONCAT62(uRam00000001137e5120._2_6_,0x101);
  FUN_100046b10(0x1137e5090);
  func_0x000107c60e34(&DAT_109d2f60c,0x1137e5090,0x100000000);
  FUN_100045fdc(0x1137e5150,0,0);
  uRam00000001137e51d0 = 0;
  ppuRam00000001137e51d8 = &PTR_DAT_110b3fac8;
  uRam00000001137e51e0 = 0;
  ppuRam00000001137e5150 = &PTR_DAT_110b5be10;
  ppuRam00000001137e51e8 = &PTR_DAT_110b5b9a8;
  ppuRam00000001137e51f0 = &PTR_DAT_110b3fb30;
  uRam00000001137e5208 = 0x1137e51f0;
  FUN_10004687c(0x1137e5150,&UNK_10f5aeb00,0x3a);
  uRam00000001137e515a = uRam00000001137e515a & 0xffbf | 0x20;
  puRam00000001137e5170 = &UNK_10f5aeb3b;
  uRam00000001137e5178 = 0x30;
  uRam00000001137e51d0 = 1;
  uRam00000001137e51e0 = CONCAT62(uRam00000001137e51e0._2_6_,0x101);
  FUN_100046b10();
  func_0x000107c60e34(&DAT_109d2f60c,0x1137e5150,0x100000000);
  return;
}



/* Entry: 10004df78; end: 10004e093;  */

undefined8 *
FUN_10004df78(undefined8 *param_1,undefined8 param_2,ushort param_3,undefined8 param_4,
             undefined8 param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = param_1;
  FUN_100045fdc(param_1,0,0);
  *(undefined4 *)(puVar2 + 0x10) = 0;
  puVar2[0x11] = &PTR_DAT_110b3fc50;
  puVar2[0x12] = 0;
  *puVar2 = &PTR_DAT_110b5bec0;
  puVar2[0x13] = &PTR_DAT_110b5bfa0;
  puVar2[0x14] = &PTR_DAT_110b3fbc0;
  puVar2[0x17] = puVar2 + 0x14;
  uVar3 = param_2;
  func_0x000107c613d0(param_2);
  FUN_10004687c(param_1,param_2,uVar3);
  *(ushort *)((long)param_1 + 10) = *(ushort *)((long)param_1 + 10) & 0xff9f | (param_3 & 3) << 5;
  param_1[4] = param_4;
  param_1[5] = param_5;
  uVar1 = *param_6;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined1 *)((long)param_1 + 0x94) = 1;
  *(undefined4 *)(param_1 + 0x12) = uVar1;
  FUN_100046b10(param_1);
  return param_1;
}



/* Entry: 10004e094; end: 10004e197;  */

void FUN_10004e094(void)

{
  FUN_100045fdc(0x1138338f8,0,0);
  uRam0000000113833978 = 0;
  ppuRam0000000113833980 = &PTR_DAT_110b3fac8;
  uRam0000000113833988 = 0;
  ppuRam00000001138338f8 = &PTR_DAT_110b5be10;
  ppuRam0000000113833990 = &PTR_DAT_110b5b9a8;
  ppuRam0000000113833998 = &PTR_DAT_110b3fb30;
  uRam00000001138339b0 = 0x113833998;
  FUN_10004687c();
  uRam0000000113833978 = 1;
  uRam0000000113833988 = CONCAT62(uRam0000000113833988._2_6_,0x101);
  uRam0000000113833902 = uRam0000000113833902 & 0xffbf | 0x20;
  FUN_100046b10(0x1138338f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&DAT_109d2f60c,0x1138338f8,0x100000000);
  return;
}



/* Entry: 10004e198; end: 10004e3fb;  */

/* WARNING: Possible PIC construction at 0x00010004e250: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010004e2f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010004e254) */
/* WARNING: Removing unreachable block (ram,0x00010004e2f4) */

void FUN_10004e198(void)

{
  FUN_100045fdc(0x1137e5210,0,0);
  uRam00000001137e5290 = 0;
  ppuRam00000001137e5298 = &PTR_DAT_110b40a98;
  uRam00000001137e52a0 = 0;
  ppuRam00000001137e5210 = &PTR_DAT_110b5bca8;
  ppuRam00000001137e52a8 = &PTR_DAT_110b5ba68;
  ppuRam00000001137e52b0 = &PTR_DAT_110b40a08;
  uRam00000001137e52c8 = 0x1137e52b0;
  FUN_10004687c();
  uRam00000001137e5290 = 0x14;
  uRam00000001137e52a0 = CONCAT35(uRam00000001137e52a0._5_3_,0x100000000);
  uRam00000001137e52a0 = CONCAT44(uRam00000001137e52a0._4_4_,0x14);
  uRam00000001137e521a = uRam00000001137e521a & 0xffbf | 0x20;
  FUN_100046b10(0x1137e5210);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&DAT_109d36c64,0x1137e5210,0x100000000);
  return;
}



/* Entry: 10004e3fc; end: 10004e44f;  */

/* WARNING: Possible PIC construction at 0x00010004e8a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010004ea34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010004e8a4) */
/* WARNING: Removing unreachable block (ram,0x00010004e8dc) */
/* WARNING: Removing unreachable block (ram,0x00010004e95c) */
/* WARNING: Removing unreachable block (ram,0x00010004e970) */
/* WARNING: Removing unreachable block (ram,0x00010004e974) */
/* WARNING: Removing unreachable block (ram,0x00010004e8bc) */
/* WARNING: Removing unreachable block (ram,0x00010004ea38) */

long * FUN_10004e3fc(long *param_1,long *param_2,long param_3,long param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  char **ppcVar7;
  char **ppcVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  undefined8 *puStack_298;
  uint uStack_290;
  undefined8 auStack_288 [20];
  char *apcStack_1e8 [2];
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined **ppuStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  
  if ((ulong)param_1 >> 0x20 == 0) {
    if (param_2 != (long *)0xffffffff) {
      plVar4 = (long *)0xffffffff;
      if (((ulong)param_2 >> 0x1f & 0xffffffff) == 0) {
        plVar4 = (long *)((long)param_2 * 2 + 1);
      }
      if (param_1 <= (long *)((long)param_2 << 1 | 1U)) {
        param_1 = plVar4;
      }
      return param_1;
    }
  }
  else {
    func_0x000107c34f1c();
  }
  plVar4 = (long *)0xffffffff;
  func_0x000107c34f20();
  FUN_10004e3fc(param_3,*(undefined4 *)((long)plVar4 + 0xc));
  plVar9 = (long *)*plVar4;
  plVar10 = (long *)(param_3 * param_4);
  if (plVar9 == param_2) {
    plVar5 = plVar10;
    func_0x000107c610a0();
    if (plVar5 == (long *)0x0) {
      if (plVar10 != (long *)0x0) goto LAB_10004e55c;
      plVar5 = (long *)0x1;
      func_0x000107c610a0();
      if (plVar5 == (long *)0x0) goto LAB_10004e55c;
    }
    plVar10 = plVar5;
    if (plVar5 == param_2) {
      plVar10 = plVar4;
      func_0x000107c2b018(plVar4,plVar5,param_4,param_3,0);
      plVar9 = (long *)*plVar4;
    }
    plVar5 = plVar10;
    func_0x000107c610b4(plVar10,plVar9,param_4 * (ulong)*(uint *)(plVar4 + 1));
  }
  else {
    func_0x000107c612c4(plVar9,plVar10);
    if (plVar9 == (long *)0x0) {
      if (plVar10 != (long *)0x0) {
LAB_10004e55c:
        func_0x000107c2b00c(&UNK_10f60230e,1);
        uStack_d0 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        apcStack_1e8[0] = "none";
        apcStack_1e8[1] = (char *)0x4;
        uStack_1d8 = (ulong)uStack_1d8._4_4_ << 0x20;
        puStack_1d0 = &UNK_10f5aebee;
        ppuStack_1c8 = (undefined **)0x1b;
        puStack_1c0 = &UNK_10f5aec0a;
        uStack_1b8 = 10;
        uStack_1b0 = 1;
        puStack_1a8 = &UNK_10f5aec15;
        uStack_1a0 = 0x14;
        puStack_198 = &UNK_10f5aec2a;
        uStack_190 = 0x12;
        uStack_188 = 2;
        puStack_180 = &UNK_10f5aec3d;
        uStack_178 = 0x12;
        puStack_170 = &UNK_10f5aec50;
        uStack_168 = 0xb;
        uStack_160 = 3;
        puStack_158 = &UNK_10f5aec5c;
        uStack_150 = 0x19;
        puStack_148 = &UNK_10f5aec76;
        uStack_140 = 5;
        uStack_138 = 4;
        puStack_130 = &UNK_10f5aec7c;
        uStack_128 = 0x17;
        puStack_120 = &UNK_10f5aec94;
        uStack_118 = 4;
        uStack_110 = 5;
        puStack_108 = &UNK_10f5aec99;
        uStack_100 = 0x12;
        puStack_f8 = &UNK_10f5aecac;
        uStack_f0 = 0xb;
        uStack_e8 = 6;
        puStack_e0 = &UNK_10f5aecb8;
        uStack_d8 = 0x30;
        FUN_100048910(&puStack_298,apcStack_1e8,7);
        puVar6 = (undefined8 *)0x1137e5450;
        FUN_100045fdc(0x1137e5450,0,0);
        *(undefined4 *)(puVar6 + 0x10) = 0;
        puVar6[0x11] = &PTR_DAT_110b40c18;
        puVar6[0x12] = 0;
        *puVar6 = &PTR_DAT_110b40b00;
        puVar6[0x13] = &PTR_DAT_110b40bb0;
        puVar6[0x14] = puVar6;
        puVar6[0x15] = puVar6 + 0x17;
        puVar6[0x16] = 0x800000000;
        puVar6[0x47] = &PTR_DAT_110b40ca0;
        puVar6[0x4a] = puVar6 + 0x47;
        FUN_10004687c();
        uRam00000001137e545a = uRam00000001137e545a & 0xffbf | 0x20;
        puRam00000001137e5470 = &UNK_10f5aebd5;
        uRam00000001137e5478 = 0x18;
        uRam00000001137e54d0 = 0;
        uRam00000001137e54e4 = 1;
        uRam00000001137e54e0 = 0;
        if (uStack_290 != 0) {
          puVar11 = puStack_298 + (ulong)uStack_290 * 5;
          puVar6 = puStack_298;
          do {
            ppcVar7 = ppcRam00000001137e54f8;
            pcVar1 = (char *)*puVar6;
            uVar2 = puVar6[1];
            apcStack_1e8[0] = pcVar1;
            apcStack_1e8[1] = (char *)uVar2;
            puStack_1d0 = (undefined *)puVar6[4];
            uStack_1d8 = puVar6[3];
            ppuStack_1c8 = &PTR_DAT_110b40c18;
            puStack_1c0 = (undefined *)CONCAT35(puStack_1c0._5_3_,0x100000000);
            puStack_1c0 = (undefined *)CONCAT44(puStack_1c0._4_4_,*(undefined4 *)(puVar6 + 2));
            if (uRam00000001137e5500 < uRam00000001137e5504) {
LAB_10004e7bc:
              ppcVar7 = apcStack_1e8;
            }
            else {
              if ((apcStack_1e8 < ppcRam00000001137e54f8) ||
                 (ppcRam00000001137e54f8 + (ulong)uRam00000001137e5500 * 6 <= apcStack_1e8)) {
                func_0x000107c2afc4((ulong)uRam00000001137e5500 + 1);
                goto LAB_10004e7bc;
              }
              func_0x000107c2afc4((ulong)uRam00000001137e5500 + 1);
              ppcVar7 = (char **)((long)ppcRam00000001137e54f8 +
                                 ((long)apcStack_1e8 - (long)ppcVar7));
            }
            ppcVar8 = ppcRam00000001137e54f8 + (ulong)uRam00000001137e5500 * 6;
            pcVar12 = *ppcVar7;
            pcVar14 = ppcVar7[3];
            pcVar13 = ppcVar7[2];
            ppcVar8[1] = ppcVar7[1];
            *ppcVar8 = pcVar12;
            ppcVar8[3] = pcVar14;
            ppcVar8[2] = pcVar13;
            ppcVar8[4] = (char *)&PTR_DAT_110b40c80;
            uVar3 = *(undefined4 *)(ppcVar7 + 5);
            *(undefined1 *)((long)ppcVar8 + 0x2c) = *(undefined1 *)((long)ppcVar7 + 0x2c);
            *(undefined4 *)(ppcVar8 + 5) = uVar3;
            ppcVar8[4] = (char *)&PTR_DAT_110b40c18;
            uRam00000001137e5500 = uRam00000001137e5500 + 1;
            FUN_100049280(uRam00000001137e54f0,pcVar1,uVar2);
            puVar6 = puVar6 + 5;
          } while (puVar6 != puVar11);
        }
        FUN_100046b10(0x1137e5450);
        if (puStack_298 != auStack_288) {
          func_0x000107c60fd0();
        }
        plVar4 = (long *)&DAT_109d36dd0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_atexit_11034bd48)(&DAT_109d36dd0,0x1137e5450,0x100000000);
        return plVar4;
      }
      plVar9 = (long *)0x1;
      func_0x000107c610a0();
      if (plVar9 == (long *)0x0) goto LAB_10004e55c;
    }
    plVar5 = plVar9;
    plVar10 = plVar9;
    if (plVar9 == param_2) {
      plVar5 = plVar4;
      func_0x000107c2b018(plVar4,plVar9,param_4,param_3,(int)plVar4[1]);
      plVar10 = plVar5;
    }
  }
  *plVar4 = (long)plVar10;
  *(int *)((long)plVar4 + 0xc) = (int)param_3;
  return plVar5;
}



/* Entry: 10004e450; end: 10004e56b;  */

/* WARNING: Possible PIC construction at 0x00010004e8a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010004ea34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010004e8a4) */
/* WARNING: Removing unreachable block (ram,0x00010004e8dc) */
/* WARNING: Removing unreachable block (ram,0x00010004e95c) */
/* WARNING: Removing unreachable block (ram,0x00010004e970) */
/* WARNING: Removing unreachable block (ram,0x00010004e974) */
/* WARNING: Removing unreachable block (ram,0x00010004e8bc) */
/* WARNING: Removing unreachable block (ram,0x00010004ea38) */

void FUN_10004e450(long *param_1,long *param_2,long param_3,long param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  char **ppcVar6;
  char **ppcVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  undefined8 *puStack_288;
  uint uStack_280;
  undefined8 auStack_278 [20];
  char *apcStack_1d8 [2];
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined **ppuStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  
  FUN_10004e3fc(param_3,*(undefined4 *)((long)param_1 + 0xc));
  plVar8 = (long *)*param_1;
  plVar9 = (long *)(param_3 * param_4);
  if (plVar8 == param_2) {
    plVar4 = plVar9;
    func_0x000107c610a0();
    if (plVar4 == (long *)0x0) {
      if (plVar9 != (long *)0x0) goto LAB_10004e55c;
      plVar4 = (long *)0x1;
      func_0x000107c610a0();
      if (plVar4 == (long *)0x0) goto LAB_10004e55c;
    }
    plVar9 = plVar4;
    if (plVar4 == param_2) {
      plVar9 = param_1;
      func_0x000107c2b018(param_1,plVar4,param_4,param_3,0);
      plVar8 = (long *)*param_1;
    }
    func_0x000107c610b4(plVar9,plVar8,param_4 * (ulong)*(uint *)(param_1 + 1));
  }
  else {
    func_0x000107c612c4(plVar8,plVar9);
    if (plVar8 == (long *)0x0) {
      if (plVar9 != (long *)0x0) {
LAB_10004e55c:
        func_0x000107c2b00c(&UNK_10f60230e,1);
        uStack_c0 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        apcStack_1d8[0] = "none";
        apcStack_1d8[1] = (char *)0x4;
        uStack_1c8 = (ulong)uStack_1c8._4_4_ << 0x20;
        puStack_1c0 = &UNK_10f5aebee;
        ppuStack_1b8 = (undefined **)0x1b;
        puStack_1b0 = &UNK_10f5aec0a;
        uStack_1a8 = 10;
        uStack_1a0 = 1;
        puStack_198 = &UNK_10f5aec15;
        uStack_190 = 0x14;
        puStack_188 = &UNK_10f5aec2a;
        uStack_180 = 0x12;
        uStack_178 = 2;
        puStack_170 = &UNK_10f5aec3d;
        uStack_168 = 0x12;
        puStack_160 = &UNK_10f5aec50;
        uStack_158 = 0xb;
        uStack_150 = 3;
        puStack_148 = &UNK_10f5aec5c;
        uStack_140 = 0x19;
        puStack_138 = &UNK_10f5aec76;
        uStack_130 = 5;
        uStack_128 = 4;
        puStack_120 = &UNK_10f5aec7c;
        uStack_118 = 0x17;
        puStack_110 = &UNK_10f5aec94;
        uStack_108 = 4;
        uStack_100 = 5;
        puStack_f8 = &UNK_10f5aec99;
        uStack_f0 = 0x12;
        puStack_e8 = &UNK_10f5aecac;
        uStack_e0 = 0xb;
        uStack_d8 = 6;
        puStack_d0 = &UNK_10f5aecb8;
        uStack_c8 = 0x30;
        FUN_100048910(&puStack_288,apcStack_1d8,7);
        puVar5 = (undefined8 *)0x1137e5450;
        FUN_100045fdc(0x1137e5450,0,0);
        *(undefined4 *)(puVar5 + 0x10) = 0;
        puVar5[0x11] = &PTR_DAT_110b40c18;
        puVar5[0x12] = 0;
        *puVar5 = &PTR_DAT_110b40b00;
        puVar5[0x13] = &PTR_DAT_110b40bb0;
        puVar5[0x14] = puVar5;
        puVar5[0x15] = puVar5 + 0x17;
        puVar5[0x16] = 0x800000000;
        puVar5[0x47] = &PTR_DAT_110b40ca0;
        puVar5[0x4a] = puVar5 + 0x47;
        FUN_10004687c();
        uRam00000001137e545a = uRam00000001137e545a & 0xffbf | 0x20;
        puRam00000001137e5470 = &UNK_10f5aebd5;
        uRam00000001137e5478 = 0x18;
        uRam00000001137e54d0 = 0;
        uRam00000001137e54e4 = 1;
        uRam00000001137e54e0 = 0;
        if (uStack_280 != 0) {
          puVar10 = puStack_288 + (ulong)uStack_280 * 5;
          puVar5 = puStack_288;
          do {
            ppcVar6 = ppcRam00000001137e54f8;
            pcVar1 = (char *)*puVar5;
            uVar2 = puVar5[1];
            apcStack_1d8[0] = pcVar1;
            apcStack_1d8[1] = (char *)uVar2;
            puStack_1c0 = (undefined *)puVar5[4];
            uStack_1c8 = puVar5[3];
            ppuStack_1b8 = &PTR_DAT_110b40c18;
            puStack_1b0 = (undefined *)CONCAT35(puStack_1b0._5_3_,0x100000000);
            puStack_1b0 = (undefined *)CONCAT44(puStack_1b0._4_4_,*(undefined4 *)(puVar5 + 2));
            if (uRam00000001137e5500 < uRam00000001137e5504) {
LAB_10004e7bc:
              ppcVar6 = apcStack_1d8;
            }
            else {
              if ((apcStack_1d8 < ppcRam00000001137e54f8) ||
                 (ppcRam00000001137e54f8 + (ulong)uRam00000001137e5500 * 6 <= apcStack_1d8)) {
                func_0x000107c2afc4((ulong)uRam00000001137e5500 + 1);
                goto LAB_10004e7bc;
              }
              func_0x000107c2afc4((ulong)uRam00000001137e5500 + 1);
              ppcVar6 = (char **)((long)ppcRam00000001137e54f8 +
                                 ((long)apcStack_1d8 - (long)ppcVar6));
            }
            ppcVar7 = ppcRam00000001137e54f8 + (ulong)uRam00000001137e5500 * 6;
            pcVar11 = *ppcVar6;
            pcVar13 = ppcVar6[3];
            pcVar12 = ppcVar6[2];
            ppcVar7[1] = ppcVar6[1];
            *ppcVar7 = pcVar11;
            ppcVar7[3] = pcVar13;
            ppcVar7[2] = pcVar12;
            ppcVar7[4] = (char *)&PTR_DAT_110b40c80;
            uVar3 = *(undefined4 *)(ppcVar6 + 5);
            *(undefined1 *)((long)ppcVar7 + 0x2c) = *(undefined1 *)((long)ppcVar6 + 0x2c);
            *(undefined4 *)(ppcVar7 + 5) = uVar3;
            ppcVar7[4] = (char *)&PTR_DAT_110b40c18;
            uRam00000001137e5500 = uRam00000001137e5500 + 1;
            FUN_100049280(uRam00000001137e54f0,pcVar1,uVar2);
            puVar5 = puVar5 + 5;
          } while (puVar5 != puVar10);
        }
        FUN_100046b10(0x1137e5450);
        if (puStack_288 != auStack_278) {
          func_0x000107c60fd0();
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_atexit_11034bd48)(&DAT_109d36dd0,0x1137e5450,0x100000000);
        return;
      }
      plVar8 = (long *)0x1;
      func_0x000107c610a0();
      if (plVar8 == (long *)0x0) goto LAB_10004e55c;
    }
    plVar9 = plVar8;
    if (plVar8 == param_2) {
      plVar9 = param_1;
      func_0x000107c2b018(param_1,plVar8,param_4,param_3,(int)param_1[1]);
    }
  }
  *param_1 = (long)plVar9;
  *(int *)((long)param_1 + 0xc) = (int)param_3;
  return;
}


