/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100c18888; end: 100c189bb;  */

void FUN_100c18888(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar3 = *(long **)(param_1 + 0x38);
      if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
      }
      puVar1 = *(undefined8 **)(param_1 + 0x50);
      for (puVar5 = *(undefined8 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar4 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        func_0x000107c6132c(param_2,iVar2 + 1,uVar4);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      func_0x000107c6132c(param_2,iVar2 + 1,*(undefined1 *)(param_1 + 0x30));
      return;
    }
  }
  plVar3 = *(long **)(param_1 + 0x38);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
  }
  plVar3 = *(long **)(param_1 + 0x40);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000100c189b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 100c189bc; end: 100c18aef;  */

void FUN_100c189bc(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar3 = *(long **)(param_1 + 0x38);
      if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
      }
      puVar1 = *(undefined8 **)(param_1 + 0x50);
      for (puVar5 = *(undefined8 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar4 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        func_0x000107c6132c(param_2,iVar2 + 1,uVar4);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      func_0x000107c6132c(param_2,iVar2 + 1,*(undefined8 *)(param_1 + 0x30));
      return;
    }
  }
  plVar3 = *(long **)(param_1 + 0x38);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
  }
  plVar3 = *(long **)(param_1 + 0x40);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000100c18ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 100c18af0; end: 100c18b77;  */

void FUN_100c18af0(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    func_0x000107c610f4(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c45aec();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c18b78; end: 100c18bff;  */

void FUN_100c18b78(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 7) || (puVar1[3] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    func_0x000107c610f4(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c45aec();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c18c00; end: 100c18fcb;  */

uint FUN_100c18c00(long param_1,long param_2,long param_3,byte *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  byte bVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  long *plStack_68;
  long *plStack_60;
  byte bStack_52;
  byte bStack_51;
  
  func_0x000107c61174(param_3);
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 < 0xe) {
    if (iVar3 - 1U < 2) {
      *param_4 = 0;
      plStack_60 = (long *)((ulong)plStack_60 & 0xffffffffffffff00);
      (**(code **)(**(long **)(param_1 + 0x38) + 0x28))
                (*(long **)(param_1 + 0x38),param_2,param_3,&plStack_60);
      uVar12 = (uint)(iVar3 != 1 ^ (byte)plStack_60);
      goto LAB_100c18fa0;
    }
    if (1 < iVar3 - 0xcU) goto LAB_100c18d34;
    plVar11 = *(long **)(param_1 + 0x38);
    func_0x000107c61174(param_3);
    (**(code **)(*plVar11 + 0x28))(plVar11,param_2,param_3,param_4);
    puVar1 = *(undefined8 **)(param_1 + 0x48);
    puVar2 = *(undefined8 **)(param_1 + 0x50);
    if (iVar3 == 0xc) {
      if (puVar1 == puVar2) {
        uVar12 = 0;
      }
      else {
        do {
          puVar9 = puVar1 + 1;
          plVar10 = (long *)*puVar1;
          uVar12 = (uint)(plVar11 == plVar10);
          puVar1 = puVar9;
        } while (plVar11 != plVar10 && puVar9 != puVar2);
      }
    }
    else if (puVar1 == puVar2) {
      uVar12 = 1;
    }
    else {
      do {
        puVar9 = puVar1 + 1;
        plVar10 = (long *)*puVar1;
        uVar12 = (uint)(plVar11 != plVar10);
        puVar1 = puVar9;
      } while (plVar11 != plVar10 && puVar9 != puVar2);
    }
    goto LAB_100c18f98;
  }
  if (iVar3 - 0xfU < 2) {
    *param_4 = 0;
    uVar12 = (uint)*(byte *)(param_1 + 0x30);
    goto LAB_100c18fa0;
  }
  if (iVar3 == 0xe) {
    lVar4 = 0x28;
    lVar6 = param_3;
    if (param_2 != 0) {
      lVar4 = 0x20;
      lVar6 = param_2;
    }
    (**(code **)(param_1 + lVar4))(lVar6,param_4);
    uVar12 = (uint)lVar6;
    goto LAB_100c18fa0;
  }
LAB_100c18d34:
  plVar11 = *(long **)(param_1 + 0x38);
  plVar10 = *(long **)(param_1 + 0x40);
  func_0x000107c61174(param_3);
  uVar12 = 0;
  if (iVar3 < 5) {
    if (iVar3 == 0) {
      (**(code **)(*plVar11 + 0x28))(plVar11,param_2,param_3,param_4);
      uVar12 = (uint)(plVar11 == (long *)0x0);
      goto LAB_100c18f98;
    }
    if (iVar3 == 3) {
      (**(code **)(*plVar11 + 0x28))(plVar11,param_2,param_3,&plStack_60);
      (**(code **)(*plVar10 + 0x28))(plVar10,param_2,param_3,&plStack_68);
      *param_4 = ((byte)plStack_60 | (byte)plStack_68) & 1;
      lVar4 = 0;
      if (plVar10 != (long *)0x0) {
        lVar4 = (long)plVar11 / (long)plVar10;
      }
      bVar5 = plVar11 == (long *)(lVar4 * (long)plVar10);
    }
    else {
      if (iVar3 != 4) goto LAB_100c18f98;
      (**(code **)(*plVar11 + 0x28))(plVar11,param_2,param_3,&plStack_60);
      (**(code **)(*plVar10 + 0x28))(plVar10,param_2,param_3,&plStack_68);
      if ((plVar11 == (long *)0x0) && (bVar8 = (byte)plStack_68, ((ulong)plStack_60 & 1) == 0)) {
LAB_100c18e60:
        bVar8 = (byte)plStack_60 & bVar8;
      }
      else {
        if ((plVar10 == (long *)0x0) && (((ulong)plStack_68 & 1) == 0)) {
          bVar8 = 0;
          goto LAB_100c18e60;
        }
        bVar8 = (byte)plStack_60 | (byte)plStack_68;
      }
      *param_4 = bVar8 & 1;
      bVar5 = plVar11 == (long *)0x0 || plVar10 == (long *)0x0;
    }
LAB_100c18f94:
    uVar12 = (uint)!bVar5;
  }
  else if (iVar3 - 6U < 6) {
    plVar7 = plVar11;
    (**(code **)(*plVar11 + 0x28))(plVar11,param_2,param_3,&bStack_51);
    plStack_60 = plVar7;
    (**(code **)(*plVar10 + 0x28))(plVar10,param_2,param_3,&bStack_52);
    *param_4 = (bStack_51 | bStack_52) & 1;
    plStack_68 = plVar10;
    func_0x000100c19314(plVar11,&plStack_60,&plStack_68,iVar3,0);
    uVar12 = (uint)plVar11;
  }
  else if (iVar3 == 5) {
    (**(code **)(*plVar11 + 0x28))(plVar11,param_2,param_3,&plStack_60);
    (**(code **)(*plVar10 + 0x28))(plVar10,param_2,param_3,&plStack_68);
    if ((plVar11 == (long *)0x0) || (bVar8 = (byte)plStack_68, ((ulong)plStack_60 & 1) != 0)) {
      if ((plVar10 != (long *)0x0) && (((ulong)plStack_68 & 1) == 0)) {
        bVar8 = 0;
        goto LAB_100c18ed8;
      }
      bVar8 = (byte)plStack_60 | (byte)plStack_68;
    }
    else {
LAB_100c18ed8:
      bVar8 = (byte)plStack_60 & bVar8;
    }
    *param_4 = bVar8 & 1;
    bVar5 = plVar11 == (long *)0x0 && plVar10 == (long *)0x0;
    goto LAB_100c18f94;
  }
LAB_100c18f98:
  func_0x000107c61170(param_3);
LAB_100c18fa0:
  func_0x000107c61170(param_3);
  return uVar12 & 1;
}



/* Entry: 100c18fcc; end: 100c192db;  */

ulong FUN_100c18fcc(long param_1,ulong param_2,ulong param_3,byte *param_4)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  byte bVar7;
  ulong uVar8;
  long *plStack_68;
  long *plStack_60;
  byte bStack_52;
  byte bStack_51;
  
  func_0x000107c61174(param_3);
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < 0xe) {
    if (iVar1 - 1U < 2) {
      uVar8 = 0;
      *param_4 = 0;
      goto LAB_100c192b0;
    }
    if (iVar1 - 0xcU < 2) {
      uVar8 = 0;
      goto LAB_100c192b0;
    }
  }
  else {
    if (iVar1 - 0xfU < 2) {
      *param_4 = 0;
      uVar8 = *(ulong *)(param_1 + 0x30);
      goto LAB_100c192b0;
    }
    if (iVar1 == 0xe) {
      lVar2 = 0x28;
      uVar8 = param_3;
      if (param_2 != 0) {
        lVar2 = 0x20;
        uVar8 = param_2;
      }
      (**(code **)(param_1 + lVar2))(uVar8,param_4);
      goto LAB_100c192b0;
    }
  }
  plVar5 = *(long **)(param_1 + 0x38);
  plVar6 = *(long **)(param_1 + 0x40);
  func_0x000107c61174(param_3);
  uVar8 = 0;
  if (iVar1 < 5) {
    if (iVar1 == 0) {
      (**(code **)(*plVar5 + 0x28))(plVar5,param_2,param_3,param_4);
      uVar8 = (ulong)(plVar5 == (long *)0x0);
    }
    else if (iVar1 == 3) {
      (**(code **)(*plVar5 + 0x28))(plVar5,param_2,param_3,&plStack_60);
      (**(code **)(*plVar6 + 0x28))(plVar6,param_2,param_3,&plStack_68);
      *param_4 = ((byte)plStack_60 | (byte)plStack_68) & 1;
      lVar2 = 0;
      if (plVar6 != (long *)0x0) {
        lVar2 = (long)plVar5 / (long)plVar6;
      }
      uVar8 = (long)plVar5 - lVar2 * (long)plVar6;
    }
    else if (iVar1 == 4) {
      (**(code **)(*plVar5 + 0x28))(plVar5,param_2,param_3,&plStack_60);
      (**(code **)(*plVar6 + 0x28))(plVar6,param_2,param_3,&plStack_68);
      if ((plVar5 == (long *)0x0) && (bVar7 = (byte)plStack_68, ((ulong)plStack_60 & 1) == 0)) {
LAB_100c19184:
        bVar7 = (byte)plStack_60 & bVar7;
      }
      else {
        if ((plVar6 == (long *)0x0) && (((ulong)plStack_68 & 1) == 0)) {
          bVar7 = 0;
          goto LAB_100c19184;
        }
        bVar7 = (byte)plStack_60 | (byte)plStack_68;
      }
      *param_4 = bVar7 & 1;
      bVar3 = plVar5 == (long *)0x0 || plVar6 == (long *)0x0;
      goto LAB_100c192a4;
    }
  }
  else if (iVar1 - 6U < 6) {
    plVar4 = plVar5;
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2,param_3,&bStack_51);
    plStack_60 = plVar4;
    (**(code **)(*plVar6 + 0x28))(plVar6,param_2,param_3,&bStack_52);
    *param_4 = (bStack_51 | bStack_52) & 1;
    plStack_68 = plVar6;
    func_0x000100c19314(plVar5,&plStack_60,&plStack_68,iVar1,0);
    uVar8 = (ulong)plVar5 & 0xffffffff;
  }
  else if (iVar1 == 5) {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2,param_3,&plStack_60);
    (**(code **)(*plVar6 + 0x28))(plVar6,param_2,param_3,&plStack_68);
    if ((plVar5 == (long *)0x0) || (bVar7 = (byte)plStack_68, ((ulong)plStack_60 & 1) != 0)) {
      if ((plVar6 != (long *)0x0) && (((ulong)plStack_68 & 1) == 0)) {
        bVar7 = 0;
        goto LAB_100c191ec;
      }
      bVar7 = (byte)plStack_60 | (byte)plStack_68;
    }
    else {
LAB_100c191ec:
      bVar7 = (byte)plStack_60 & bVar7;
    }
    *param_4 = bVar7 & 1;
    bVar3 = plVar5 == (long *)0x0 && plVar6 == (long *)0x0;
LAB_100c192a4:
    uVar8 = (ulong)!bVar3;
  }
  func_0x000107c61170(param_3);
LAB_100c192b0:
  func_0x000107c61170(param_3);
  return uVar8;
}



/* Entry: 100c192dc; end: 100c193c7;  */

undefined8 FUN_100c192dc(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((8 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar2 != 0)) {
    return *(undefined8 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 100c193c8; end: 100c195d7; +[SCDeltaSyncPersistedToken immutableObjectParse:bufferSize:] */

void FUN_100c193c8(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ushort uVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126b8218;
  func_0x000107c610f4(PTR_PTR_1126b8218);
  lVar6 = (long)*piVar1;
  uVar5 = *(ushort *)((long)piVar1 - lVar6);
  if (uVar5 < 5) {
    puVar8 = (undefined *)0x0;
LAB_100c194b0:
    puVar9 = (undefined *)0x0;
LAB_100c194b4:
    uVar10 = 0;
LAB_100c194b8:
    puVar11 = (undefined *)0x0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)piVar1 - lVar6))[2];
    if (uVar7 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar7);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      func_0x000107c61180();
      lVar6 = (long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - lVar6);
    }
    lVar6 = -lVar6;
    if (uVar5 < 7) goto LAB_100c194b0;
    uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar6 + 6);
    if (uVar7 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar7);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      func_0x000107c61180();
      lVar6 = -(long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar5 < 9) goto LAB_100c194b4;
    uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar6 + 8);
    if (uVar7 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)((long)piVar1 + uVar7);
    }
    if (uVar5 < 0xb) goto LAB_100c194b8;
    if (*(short *)((long)piVar1 + lVar6 + 10) == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar11 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x000107c610f4(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x000107c45ae4();
      lVar6 = -(long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if ((0xc < uVar5) && (uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar6 + 0xc), uVar7 != 0)) {
      uVar4 = *(undefined8 *)((long)piVar1 + uVar7);
      goto LAB_100c194c0;
    }
  }
  uVar4 = 0;
LAB_100c194c0:
  func_0x000107c470a8(puVar3,param_2,puVar8,puVar9,uVar10,puVar11,uVar4);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100c195d8; end: 100c196eb; -[SCDeltaSyncPersistedToken initWithKind:name:id:contents:version:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100c195d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  puStack_58 = PTR_PTR_1126e7de0;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112722604);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112722604) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112722608);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112722608) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272260c) = param_5;
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112722610);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112722610) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112722614) = param_7;
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c196ec; end: 100c19727;  */

undefined8 FUN_100c196ec(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  func_0x000107c60e20(0x70);
  FUN_100c19728(uVar1,param_1);
  return uVar1;
}



/* Entry: 100c19728; end: 100c198d3;  */

void FUN_100c19728(undefined8 *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *plStack_30;
  long *plStack_28;
  
  iVar5 = *(int *)(param_2 + 8);
  if (iVar5 < 0xc) {
    if (iVar5 - 3U < 9) {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plVar4 = *(long **)(param_2 + 0x40);
      plStack_28 = plVar3;
      (**(code **)(*plVar4 + 0x30))();
      plStack_30 = plVar4;
      FUN_100c19abc(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,&plStack_30);
      plVar3 = plStack_30;
      plStack_30 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    else {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plStack_28 = plVar3;
      func_0x0001053b8200(param_1,*(undefined4 *)(param_2 + 8),&plStack_28);
    }
LAB_100c19814:
    plVar3 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  else {
    if (iVar5 < 0xf) {
      if (iVar5 - 0xcU < 2) {
        plVar3 = *(long **)(param_2 + 0x38);
        (**(code **)(*plVar3 + 0x30))();
        plStack_28 = plVar3;
        func_0x0001053b8294(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,param_2 + 0x48);
        goto LAB_100c19814;
      }
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      bVar1 = *(byte *)(param_2 + 0x18);
      bVar2 = *(byte *)(param_2 + 0x19);
      *(undefined4 *)(param_1 + 1) = 0xe;
      param_1[2] = uVar6;
      *(byte *)(param_1 + 3) = bVar1;
      *(byte *)((long)param_1 + 0x19) = bVar2;
      *(byte *)((long)param_1 + 0x1a) = bVar2 ^ 1;
      *(byte *)((long)param_1 + 0x1b) = (bVar2 | bVar1) ^ 1;
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      param_1[5] = *(undefined8 *)(param_2 + 0x28);
      param_1[4] = uVar6;
    }
    else {
      if (iVar5 != 0xf) {
        iVar5 = 0x10;
      }
      *(int *)(param_1 + 1) = iVar5;
      *(undefined4 *)(param_1 + 3) = 0x100;
      *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x30);
    }
    *param_1 = &PTR_DAT_110881e20;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
  }
  return;
}



/* Entry: 100c198d4; end: 100c1990f;  */

undefined8 FUN_100c198d4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  func_0x000107c60e20(0x70);
  FUN_100c19910(uVar1,param_1);
  return uVar1;
}



/* Entry: 100c19910; end: 100c19abb;  */

void FUN_100c19910(undefined8 *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *plStack_30;
  long *plStack_28;
  
  iVar5 = *(int *)(param_2 + 8);
  if (iVar5 < 0xc) {
    if (iVar5 - 3U < 9) {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plVar4 = *(long **)(param_2 + 0x40);
      plStack_28 = plVar3;
      (**(code **)(*plVar4 + 0x30))();
      plStack_30 = plVar4;
      func_0x000105007930(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,&plStack_30);
      plVar3 = plStack_30;
      plStack_30 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    else {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plStack_28 = plVar3;
      func_0x00010500789c(param_1,*(undefined4 *)(param_2 + 8),&plStack_28);
    }
LAB_100c199fc:
    plVar3 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  else {
    if (iVar5 < 0xf) {
      if (iVar5 - 0xcU < 2) {
        plVar3 = *(long **)(param_2 + 0x38);
        (**(code **)(*plVar3 + 0x30))();
        plStack_28 = plVar3;
        func_0x000105007a30(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,param_2 + 0x48);
        goto LAB_100c199fc;
      }
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      bVar1 = *(byte *)(param_2 + 0x18);
      bVar2 = *(byte *)(param_2 + 0x19);
      *(undefined4 *)(param_1 + 1) = 0xe;
      param_1[2] = uVar6;
      *(byte *)(param_1 + 3) = bVar1;
      *(byte *)((long)param_1 + 0x19) = bVar2;
      *(byte *)((long)param_1 + 0x1a) = bVar2 ^ 1;
      *(byte *)((long)param_1 + 0x1b) = (bVar2 | bVar1) ^ 1;
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      param_1[5] = *(undefined8 *)(param_2 + 0x28);
      param_1[4] = uVar6;
    }
    else {
      if (iVar5 != 0xf) {
        iVar5 = 0x10;
      }
      *(int *)(param_1 + 1) = iVar5;
      *(undefined4 *)(param_1 + 3) = 0x100;
      param_1[6] = *(undefined8 *)(param_2 + 0x30);
    }
    *param_1 = &PTR_DAT_110862958;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
  }
  return;
}



/* Entry: 100c19abc; end: 100c19bbb;  */

undefined8 * FUN_100c19abc(undefined8 *param_1,int param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  
  lVar2 = *param_3;
  lVar3 = *param_4;
  if ((*(byte *)(lVar2 + 0x19) & 1) == 0) {
    bVar4 = *(byte *)(lVar3 + 0x19);
  }
  else {
    bVar4 = 1;
  }
  if ((*(byte *)(lVar2 + 0x1a) & 1) == 0) {
    bVar5 = *(byte *)(lVar3 + 0x1a);
  }
  else {
    bVar5 = 1;
  }
  if (param_2 == 4) {
    if ((*(byte *)(lVar2 + 0x1b) & 1) == 0) {
      bVar6 = 0;
      goto LAB_100c19b28;
    }
  }
  else if ((*(byte *)(lVar2 + 0x1b) & 1) != 0) {
    bVar6 = 1;
    goto LAB_100c19b28;
  }
  bVar6 = *(byte *)(lVar3 + 0x1b);
LAB_100c19b28:
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(byte *)((long)param_1 + 0x19) = bVar4 & 1;
  *(byte *)((long)param_1 + 0x1a) = bVar5 & 1;
  *(byte *)((long)param_1 + 0x1b) = bVar6 & 1;
  *param_1 = &PTR_DAT_110881e20;
  param_1[7] = lVar2;
  param_1[8] = lVar3;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  lVar2 = *param_3;
  *param_3 = 0;
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = lVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  lVar2 = *param_4;
  *param_4 = 0;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = lVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 100c19bbc; end: 100c19bcb; -[SCDeltaSyncPersistedToken version] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c19bbc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112722614);
}



/* Entry: 100c19bcc; end: 100c19bdb; -[SCDeltaSyncPersistedToken contents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c19bcc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112722610);
}



/* Entry: 100c19bdc; end: 100c19cbb;  */

/* WARNING: Possible PIC construction at 0x000100c19c38: Changing call to branch */

void FUN_100c19bdc(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_DAT_110881e20;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puVar2 = (undefined8 *)param_1[9];
  if (puVar2 != (undefined8 *)0x0) {
    param_1[10] = puVar2;
    param_1 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 100c19cbc; end: 100c19d0b; -[SCDeltaSyncPersistedToken .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c19ce0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c19ce4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c19cbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112722610,0);
  return;
}



/* Entry: 100c19d0c; end: 100c19ea7; -[SCDeltaSyncGrapheneMetricsReporter syncRequestInitiatedForGroupKey:client:syncToken:] */

/* WARNING: Possible PIC construction at 0x000100c19df4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c19e5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c19e6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c19e7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c19e70) */
/* WARNING: Removing unreachable block (ram,0x000100c19e60) */
/* WARNING: Removing unreachable block (ram,0x000100c19df8) */
/* WARNING: Removing unreachable block (ram,0x000100c19e1c) */
/* WARNING: Removing unreachable block (ram,0x000100c19e0c) */
/* WARNING: Removing unreachable block (ram,0x000100c19e28) */
/* WARNING: Removing unreachable block (ram,0x000100c19e80) */

void FUN_100c19d0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_100c19ea8;
  puStack_70 = &UNK_110848ba8;
  lStack_68 = param_1;
  func_0x000107c61174(param_3);
  uStack_60 = param_3;
  func_0x000107c61174(param_5);
  uStack_58 = param_5;
  func_0x000107c4b944(uVar2,param_2,&puStack_88);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b81f8;
  func_0x000107c5c58c(PTR_PTR_1126b81f8);
  func_0x000107c61180();
  func_0x000107c3bf34(param_1,param_2,puVar1,param_3,param_4);
  func_0x000107c61180();
  func_0x000107c45314(uVar2,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c19ea8; end: 100c19f3f;  */

/* WARNING: Possible PIC construction at 0x000100c19ef8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c19efc) */

void FUN_100c19ea8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c40fd4(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  func_0x000107c4d954(puVar1);
  func_0x000107c61180();
  func_0x000107c56bd8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48),param_2,puVar1,
                      *(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c19f40; end: 100c19f6b; +[SCGrapheneDeltaforceMetric syncRequestCount] */

void FUN_100c19f40(void)

{
  func_0x000107c610f4(PTR_PTR_1126b81f8);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c19f6c; end: 100c1a03b; -[SCDeltaSyncGrapheneMetricsReporter _metric:groupKey:client:] */

void FUN_100c19f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  func_0x000107c4a91c(param_4);
  func_0x000107c61180();
  uVar1 = param_3;
  func_0x000107c5e508(param_3,param_2,&PTR____CFConstantStringClassReference_110dd6038,param_4);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  uVar2 = param_5;
  func_0x000107c4d3e4(param_5);
  func_0x000107c61180();
  func_0x000107c61170(param_5);
  uVar3 = uVar1;
  func_0x000107c5e508(uVar1,param_2,&PTR____CFConstantStringClassReference_110dab238,uVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100c1a03c; end: 100c1a043; -[SCDeltaSyncClientType name] */

undefined8 FUN_100c1a03c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c1a044; end: 100c1a06f; +[SCGrapheneDeltaforceMetric deltaSyncRequestCount] */

void FUN_100c1a044(void)

{
  func_0x000107c610f4(PTR_PTR_1126b81f8);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c1a070; end: 100c1a18b; -[SCApplicationWindow didAddSubview:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c1a070(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  func_0x000107c61174(param_3);
  puVar1 = &UNK_10f398742;
  func_0x0001000ba800(&UNK_10f398742);
  lVar3 = (long)_DAT_112750b5c;
  lVar2 = param_1 + lVar3;
  func_0x000107c61148();
  func_0x000107c61170();
  if (param_3 == lVar2) {
    func_0x000107c611a0(param_1 + lVar3,0);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    puStack_58 = &UNK_1067da0b8;
    puStack_50 = &UNK_110842e18;
    func_0x000107c61174(param_3);
    lStack_48 = param_3;
    func_0x000100162d98("APPSTORE",&puStack_68);
    func_0x000107c61170(lStack_48);
  }
  puStack_70 = PTR_PTR_1126f3428;
  lStack_78 = param_1;
  func_0x000107c61154(&lStack_78,PTR_s_didAddSubview__112531ca8,param_3);
  func_0x0001000e2a84(puVar1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c1a18c; end: 100c1a33b; -[SCDefaultDeltaSyncService _deltaforceSyncRequestForGroupKey:syncToken:] */

void FUN_100c1a18c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  puStack_68 = &UNK_1053b0524;
  puStack_60 = &UNK_1053b0534;
  uStack_58 = 0;
  uVar1 = param_3;
  func_0x000107c44fdc(param_3);
  func_0x000107c61180();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_3);
  func_0x000107c4c6ac(uVar1);
  func_0x000107c61170(uVar1);
  if (param_4 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b8110;
    func_0x000107c610f4(PTR_PTR_1126b8110);
    func_0x000107c47c70();
  }
  puVar2 = PTR_PTR_1126b8100;
  func_0x000107c610f4(PTR_PTR_1126b8100);
  func_0x000107c46bec();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c60bcc(&uStack_80,8);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c1a33c; end: 100c1a3cb;  */

/* WARNING: Possible PIC construction at 0x000100c1a3a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c1a3a4) */

void FUN_100c1a33c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b80c8;
  func_0x000107c61174(param_2);
  func_0x000107c610f4(puVar1);
  func_0x000107c4a91c(*(undefined8 *)(param_1 + 0x20));
  func_0x000107c61180();
  func_0x000107c470a4(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c1a3cc; end: 100c1a4df; -[SCNDeltaforceGroupKey initWithKind:name:id:] */

undefined1 *
FUN_100c1a3cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_1126e7e18;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c1a4e0; end: 100c1a583; -[SCNDeltaforceSyncToken initWithOpaqueServerToken:] */

undefined1 * FUN_100c1a4e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1126e7e60;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c1a584; end: 100c1a643; -[SCNDeltaforceSyncRequest initWithGroup:syncToken:] */

undefined1 *
FUN_100c1a584(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e7e50;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c1a644; end: 100c1a6ab; +[SCDeltaSyncBlockCallback onSuccess:onFailure:] */

void FUN_100c1a644(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(param_1);
  func_0x000107c47c34();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100c1a6ac; end: 100c1a757; -[SCDeltaSyncBlockCallback initWithOnSuccess:onFailure:] */

undefined1 *
FUN_100c1a6ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e7d88;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c61184();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c61184();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c1a758; end: 100c1a76b;  */

void FUN_100c1a758(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 100c1a76c; end: 100c1a833; -[SCNDeltaforceDeltaForceSyncClient batchSync:callback:] */

void FUN_100c1a76c(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [104];
  
  FUN_100c1a758();
  func_0x00010076a174();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  FUN_100c1a834(auStack_98);
  FUN_100c1acf8(auStack_a8);
  func_0x000100c1af24(*(undefined8 *)(*plVar1 + 0x10));
  FUN_100c1b690(auStack_a8);
  func_0x000100c1b6e8(auStack_98);
  func_0x00010076e550();
  func_0x00010076e558();
  return;
}



/* Entry: 100c1a834; end: 100c1a913;  */

void FUN_100c1a834(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [72];
  
  func_0x000107c61174();
  uVar1 = param_2;
  func_0x000107c444d0(param_2);
  func_0x000107c61180();
  FUN_100c1a91c(auStack_78);
  func_0x000107c5c5bc(param_2);
  func_0x000107c61180();
  FUN_100c1aaac(auStack_98);
  FUN_100c1ac0c(param_1,auStack_78,auStack_98);
  FUN_100c1acb0(auStack_98);
  func_0x000107c61170(param_2);
  FUN_100c1acd0(auStack_78);
  func_0x000107c61170(uVar1);
  func_0x000100c1aba8();
  return;
}



/* Entry: 100c1a914; end: 100c1a91b; -[SCNDeltaforceSyncRequest group] */

undefined8 FUN_100c1a914(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c1a91c; end: 100c1aa83;  */

void FUN_100c1a91c(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  char cStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61174();
  func_0x000107c4a91c(param_2);
  func_0x000107c61180();
  func_0x0001000fbca4(&uStack_58);
  uVar1 = param_2;
  func_0x000107c4d3e4(param_2);
  func_0x000107c61180();
  func_0x000100114864(&uStack_78);
  func_0x000107c44fc8();
  func_0x000107c61180();
  uVar2 = param_2;
  func_0x00010011b600();
  param_1[1] = uStack_50;
  *param_1 = uStack_58;
  param_1[2] = uStack_48;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  if (cStack_60 == '\x01') {
    param_1[4] = uStack_70;
    param_1[3] = uStack_78;
    param_1[5] = uStack_68;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_78 = 0;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  param_1[7] = uVar2;
  param_1[8] = param_3 & 0xff;
  func_0x000107c61170(param_2);
  func_0x0001001148fc(&uStack_78);
  func_0x000107c61170(uVar1);
  func_0x000107c60ca0(&uStack_58);
  func_0x000100c1aa9c();
  func_0x00010011b624();
  return;
}



/* Entry: 100c1aa84; end: 100c1aa8b; -[SCNDeltaforceGroupKey kind] */

undefined8 FUN_100c1aa84(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c1aa8c; end: 100c1aa93; -[SCNDeltaforceGroupKey name] */

undefined8 FUN_100c1aa8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100c1aa94; end: 100c1aaa3; -[SCNDeltaforceGroupKey id] */

undefined8 FUN_100c1aa94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100c1aaa4; end: 100c1aaab; -[SCNDeltaforceSyncRequest syncToken] */

undefined8 FUN_100c1aaa4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100c1aaac; end: 100c1ab2f;  */

void FUN_100c1aaac(undefined8 *param_1,long param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    FUN_100c1ab30(&uStack_40,param_2);
    param_1[1] = uStack_38;
    *param_1 = uStack_40;
    param_1[2] = uStack_30;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_40 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    func_0x000100100fec(&uStack_40);
  }
  func_0x000100c1aba8();
  return;
}



/* Entry: 100c1ab30; end: 100c1ab9f;  */

void FUN_100c1ab30(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x000107c4ddfc();
  func_0x000107c61180();
  func_0x00010029a6ec(&uStack_40);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  func_0x000100100fec(&uStack_40);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100c1aba0; end: 100c1ac0b; -[SCNDeltaforceSyncToken opaqueServerToken] */

undefined8 FUN_100c1aba0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c1ac0c; end: 100c1ac3f;  */

long FUN_100c1ac0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000100c1abb0();
  FUN_100c1ac54(lVar1 + 0x48,param_3);
  return param_1;
}



/* Entry: 100c1ac40; end: 100c1ac53;  */

void FUN_100c1ac40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    return;
  }
  return;
}



/* Entry: 100c1ac54; end: 100c1ac83;  */

undefined1 * FUN_100c1ac54(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  FUN_100c1ac40();
  return param_1;
}



/* Entry: 100c1ac84; end: 100c1acaf;  */

void FUN_100c1ac84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 100c1acb0; end: 100c1accf;  */

void FUN_100c1acb0(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000100100fec();
  }
  return;
}



/* Entry: 100c1acd0; end: 100c1acf7;  */

void FUN_100c1acd0(long param_1)

{
  func_0x0001001148fc(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 100c1acf8; end: 100c1ade7;  */

void FUN_100c1acf8(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_1126b8088;
    func_0x000107c61158(PTR_PTR_1126b8088);
    uVar3 = param_2;
    func_0x000107c6115c(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      func_0x000107c61174(param_2);
      ppuStack_38 = &PTR_DAT_110880628;
      uStack_40 = param_2;
      func_0x0001000de59c(&uStack_30,&ppuStack_38,&uStack_40,FUN_100c1ade8);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      func_0x0001000df524(&uStack_30);
      func_0x000107c61170(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_100c1aeec(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_100c1aedc();
        } while (extraout_w10 != 0);
      }
    }
  }
  func_0x000100c1af1c();
  return;
}



/* Entry: 100c1ade8; end: 100c1aedb;  */

void FUN_100c1ade8(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110880668;
  puVar1[3] = &PTR_DAT_1108806e8;
  puVar2 = puVar5;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar3 = puVar2;
  func_0x0001000de520();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_100c1aedc();
    } while (extraout_w10 != 0);
  }
  func_0x000107c61174(puVar5);
  puVar1[6] = puVar5;
  func_0x000107c61108(puVar2);
  func_0x000107c61170(puVar5);
  puVar1[3] = &PTR_DAT_1108806b8;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_100c1aeec(&uStack_50);
  return;
}



/* Entry: 100c1aedc; end: 100c1aeeb;  */

void FUN_100c1aedc(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100c1aeec; end: 100c1af13;  */

long FUN_100c1aeec(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 100c1af14; end: 100c1af33;  */

void FUN_100c1af14(void)

{
  return;
}



/* Entry: 100c1af34; end: 100c1b063;  */

void FUN_100c1af34(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [104];
  undefined8 uStack_b8;
  long lStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_48;
  
  func_0x0001005ef1cc();
  FUN_100c1b064();
  if (extraout_x8 != 0) {
    do {
      func_0x00010054fdc4();
    } while (extraout_w10 != 0);
  }
  func_0x000100c1b07c();
  if (extraout_x8_00 != 0) {
    do {
      func_0x00010054fdc4();
    } while (extraout_w10_00 != 0);
  }
  FUN_100c1b08c(auStack_120);
  lStack_b0 = param_3[1];
  uStack_b8 = *param_3;
  if (param_3[1] != 0) {
    do {
      func_0x00010054fdc4();
    } while (extraout_w10_01 != 0);
  }
  pcStack_a8 = FUN_100c1b188;
  ppuStack_a0 = &PTR_FUN_110880cc8;
  func_0x000107c60e20(0x98);
  FUN_100c1b124();
  FUN_100c1b08c();
  param_3[0x12] = lStack_b0;
  param_3[0x11] = uStack_b8;
  if (lStack_b0 != 0) {
    do {
      func_0x00010054fdc4();
    } while (extraout_w10_02 != 0);
  }
  puStack_98 = param_3;
  func_0x000100078afc();
  func_0x000100c1b144();
  func_0x0001005ef43c(ppuStack_a0);
  func_0x000100c1b6b8(auStack_140);
  func_0x00010054ff88(uStack_48);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    func_0x0001005ef43c(ppuStack_a0);
    func_0x000100c1b6b8();
    func_0x0001053a6ad0();
    return;
  }
  return;
}



/* Entry: 100c1b064; end: 100c1b08b;  */

void FUN_100c1b064(undefined8 param_1)

{
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x38) = param_1;
  return;
}



/* Entry: 100c1b08c; end: 100c1b123;  */

long FUN_100c1b08c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x000107c60c94();
  func_0x00010028af84(lVar1 + 0x18,param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined1 *)(param_1 + 0x60) = 0;
  if (*(char *)(param_2 + 0x60) == '\x01') {
    func_0x00010054f8dc((undefined1 *)(param_1 + 0x48),param_2 + 0x48);
    *(undefined1 *)(param_1 + 0x60) = 1;
  }
  return param_1;
}



/* Entry: 100c1b124; end: 100c1b167;  */

undefined8 * FUN_100c1b124(undefined8 *param_1)

{
  long unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  param_1[1] = in_stack_00000008;
  *param_1 = in_stack_00000000;
  param_1[3] = in_stack_00000018;
  param_1[2] = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x10) = 0;
  *(undefined8 *)(unaff_x22 + 0x18) = 0;
  return param_1 + 4;
}



/* Entry: 100c1b168; end: 100c1b187;  */

void FUN_100c1b168(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000100c1b6b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100c1b188; end: 100c1b5ab;  */

void FUN_100c1b188(long param_1)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined ***pppuVar8;
  ulong uVar9;
  undefined8 extraout_x8;
  undefined8 *puVar10;
  long *plVar11;
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined **ppuStack_c8;
  undefined8 *puStack_c0;
  undefined **ppuStack_a0;
  undefined8 *puStack_98;
  undefined **ppuStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined **ppuStack_78;
  ulong uStack_70;
  undefined7 uStack_68;
  undefined1 uStack_61;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  puVar10 = *(undefined8 **)(param_1 + 0x10);
  uStack_58 = 0;
  func_0x000107c60d9c();
  uStack_48 = 1;
  ppuStack_90 = &PTR_DAT_110d09ae8;
  uStack_88 = 0;
  uStack_5c = 0;
  uStack_5a = 0;
  ppuStack_78 = (undefined **)0x0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_61 = 0;
  uStack_70 = 0;
  uStack_60 = 1;
  uStack_5b = 1;
  lStack_50 = param_1;
  FUN_100c1b5ac();
  uVar9 = *(ulong *)(param_1 + 8);
  if ((uVar9 & 1) != 0) {
    uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
  }
  param_1 = param_1 + 0x10;
  func_0x0001001a53d4(param_1,puVar10 + 4,uVar9);
  if (*(char *)(puVar10 + 0xc) == '\x01') {
    FUN_100c1b5ac();
    func_0x0001053a6398();
  }
  else {
    if (*(char *)(puVar10 + 10) != '\x01') {
      uVar7 = 0x10;
      func_0x000107c60e30(0x10);
      func_0x000107c60dec(&ppuStack_f0,"Batch Sync request on ",puVar10 + 4);
      func_0x00010048a6c8(&ppuStack_c8,&ppuStack_f0," must have either group id or name set");
      func_0x000107c60c24(uVar7,&ppuStack_c8);
      func_0x000107c60e54(uVar7,PTR___ZTISt13runtime_error_110346a40,
                          PTR___ZNSt13runtime_errorD1Ev_1103461d8);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100c1b4c0);
      (*pcVar4)();
    }
    FUN_100c1b5ac();
    if (*(int *)(param_1 + 0x24) != 2) {
      FUN_100c1b65c(param_1);
      *(undefined4 *)(param_1 + 0x24) = 2;
      func_0x000100c1b650();
      *(undefined8 *)(param_1 + 0x18) = extraout_x8;
    }
    uVar9 = *(ulong *)(param_1 + 8);
    if ((uVar9 & 1) != 0) {
      uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
    }
    func_0x0001001a53d4(param_1 + 0x18,puVar10 + 7,uVar9);
  }
  if (*(char *)(puVar10 + 0x10) == '\x01') {
    func_0x0001005f7044(&ppuStack_c8,puVar10[0xd],puVar10[0xe]);
    uStack_80 = uStack_80 | 2;
    if (uStack_70 == 0) {
      uVar9 = uStack_88;
      if ((uStack_88 & 1) != 0) {
        uVar9 = *(ulong *)(uStack_88 & 0xfffffffffffffffe);
      }
      func_0x000100c1b764();
      uStack_70 = uVar9;
    }
    uVar9 = *(ulong *)(uStack_70 + 8);
    if ((uVar9 & 1) != 0) {
      uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
    }
    func_0x0001001a53d4(uStack_70 + 0x10,&ppuStack_c8,uVar9);
    FUN_100c1b7a8();
  }
  func_0x000100c1b7b0();
  func_0x000100c1b80c(&ppuStack_f0);
  puVar5 = (undefined8 *)0xc0;
  func_0x000107c60e20();
  plVar11 = puVar5 + 1;
  *plVar11 = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_DAT_110880c88;
  ppuVar1 = (undefined **)(puVar5 + 3);
  ppuStack_c8 = ppuStack_f0;
  FUN_100c1bb68(ppuVar1,&ppuStack_90,puVar10 + 2,puVar10 + 0x11,&ppuStack_c8);
  if (ppuStack_c8 != (undefined **)0x0) {
    func_0x0001053a6ac4();
  }
  puVar6 = &uStack_58;
  ppuStack_a0 = ppuVar1;
  puStack_98 = puVar5;
  func_0x0001002acb3c(puVar6);
  uVar7 = *puVar10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = *plVar11 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  ppuStack_c8 = ppuVar1;
  puStack_c0 = puVar5;
  FUN_100c1bebc(uVar7,&ppuStack_90,&ppuStack_c8);
  FUN_100c22064(&ppuStack_c8);
  uStack_e0 = 0;
  uStack_d8 = 0;
  ppuStack_f0 = &PTR_DAT_110880ab8;
  uStack_e8 = 0;
  uStack_d0 = 6;
  func_0x00010002b838(auStack_108,"kind");
  ppuVar1 = &PTR_PTR_11339af30;
  if (ppuStack_78 != (undefined **)0x0) {
    ppuVar1 = ppuStack_78;
  }
  func_0x000107c60c94(auStack_120,(ulong)ppuVar1[2] & 0xfffffffffffffffc);
  pppuVar8 = &ppuStack_f0;
  FUN_100c220c4(pppuVar8,auStack_108,auStack_120);
  func_0x00010002b838(auStack_138,"compress");
  FUN_100c22114(pppuVar8,auStack_138,uStack_5b);
  func_0x000100c22244(&ppuStack_c8,pppuVar8);
  func_0x000107c60ca0(auStack_138);
  FUN_100c22278();
  func_0x000107c60ca0(auStack_108);
  pppuVar8 = &ppuStack_f0;
  FUN_100c22280();
  FUN_100c222a0();
  (**(code **)**pppuVar8)(*pppuVar8,&ppuStack_c8,puVar6);
  FUN_100c22280(&ppuStack_c8);
  FUN_100c22568(&ppuStack_a0);
  FUN_100c22594(&ppuStack_90);
  return;
}



/* Entry: 100c1b5ac; end: 100c1b5b3;  */

void FUN_100c1b5ac(void)

{
  ulong uVar1;
  long unaff_x29;
  
  *(uint *)(unaff_x29 + -0x70) = *(uint *)(unaff_x29 + -0x70) | 1;
  if (*(long *)(unaff_x29 + -0x68) == 0) {
    uVar1 = *(ulong *)(unaff_x29 + -0x78);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x000100c1b5f8();
    *(ulong *)(unaff_x29 + -0x68) = uVar1;
  }
  return;
}



/* Entry: 100c1b5b4; end: 100c1b643;  */

void FUN_100c1b5b4(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x000100c1b5f8();
    *(ulong *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 100c1b644; end: 100c1b65b;  */

void FUN_100c1b644(long param_1,long *param_2)

{
  long unaff_x19;
  
  *param_2 = param_1 + 0x10;
  param_2[1] = unaff_x19;
  return;
}



/* Entry: 100c1b65c; end: 100c1b687;  */

void FUN_100c1b65c(long param_1)

{
  if (*(int *)(param_1 + 0x24) == 2) {
    func_0x000100c22680();
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 100c1b688; end: 100c1b68f;  */

void FUN_100c1b688(void)

{
  return;
}



/* Entry: 100c1b690; end: 100c1b70f;  */

long FUN_100c1b690(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 100c1b710; end: 100c1b733;  */

long FUN_100c1b710(void)

{
  long unaff_x19;
  
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    func_0x0001000df548();
  }
  return unaff_x19 + 0x10;
}



/* Entry: 100c1b734; end: 100c1b7a7; -[SCNDeltaforceSyncRequest .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c1b74c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c1b750) */

void FUN_100c1b734(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 100c1b7a8; end: 100c1b7c3;  */

void FUN_100c1b7a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000078);
  return;
}



/* Entry: 100c1b7c4; end: 100c1b7cf; -[SCNDeltaforceSyncToken .cxx_destruct] */

void FUN_100c1b7c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 100c1b7d0; end: 100c1b853; -[SCNDeltaforceGroupKey .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c1b7e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c1b7ec) */

void FUN_100c1b7d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 100c1b854; end: 100c1b897;  */

void FUN_100c1b854(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xf8;
  func_0x000107c60e20();
  FUN_100c1b944();
  *param_1 = uVar1;
  return;
}



/* Entry: 100c1b898; end: 100c1b8af;  */

undefined8 * FUN_100c1b898(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110881170;
  return param_1 + 1;
}



/* Entry: 100c1b8b0; end: 100c1b943;  */

void FUN_100c1b8b0(void)

{
  undefined8 uStack_b0;
  undefined8 uStack_a8;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_100c1b898();
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  FUN_100c1b9f8();
  func_0x000100100fec(&uStack_98);
  func_0x000100100fec(&uStack_b0);
  func_0x000100100fec(&uStack_68);
  func_0x000100100fec(&uStack_80);
  func_0x000100c1bab8(&uStack_50);
  func_0x000100c1bb30(&uStack_38);
  return;
}



/* Entry: 100c1b944; end: 100c1b9f7;  */

undefined8 * FUN_100c1b944(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_100c1b8b0();
  *puVar1 = &PTR_DAT_1108811b8;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  *(undefined4 *)(puVar1 + 0x12) = 0x3f800000;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  puVar1[0x16] = 0;
  puVar1[0x15] = 0;
  *(undefined4 *)(puVar1 + 0x17) = 0x3f800000;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x19] = 0;
  puVar1[0x18] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1e] = 0;
  func_0x000107c60ca4(puVar1 + 0x1c,param_2);
  return param_1;
}



/* Entry: 100c1b9f8; end: 100c1ba7f;  */

void FUN_100c1b9f8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined1 param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar1;
  param_1[5] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = *param_4;
  param_1[7] = param_4[1];
  param_1[6] = uVar1;
  param_1[8] = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  *(undefined1 *)(param_1 + 9) = param_5;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = 0;
  uVar1 = *param_6;
  param_1[0xb] = param_6[1];
  param_1[10] = uVar1;
  param_1[0xc] = param_6[2];
  *param_6 = 0;
  param_6[1] = 0;
  param_6[2] = 0;
  return;
}



/* Entry: 100c1ba80; end: 100c1bae3;  */

void FUN_100c1ba80(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    func_0x0001053a0674();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 100c1bae4; end: 100c1baf7;  */

void FUN_100c1bae4(void)

{
  return;
}



/* Entry: 100c1baf8; end: 100c1bb5b;  */

void FUN_100c1baf8(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    func_0x0001053a06b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 100c1bb5c; end: 100c1bb67;  */

void FUN_100c1bb5c(void)

{
  return;
}



/* Entry: 100c1bb68; end: 100c1bc23;  */

undefined8 *
FUN_100c1bb68(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  int extraout_w10;
  int extraout_w10_00;
  
  ppuVar1 = &PTR___tlv_bootstrap_11340e260;
  (*(code *)PTR___tlv_bootstrap_11340e260)();
  puVar2 = *ppuVar1;
  *param_1 = &PTR_DAT_1108809c8;
  param_1[1] = puVar2;
  FUN_100c1bc24(param_1 + 2);
  lVar3 = param_3[1];
  uVar4 = *param_3;
  param_1[10] = param_3[1];
  param_1[9] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x000100c1be8c();
    } while (extraout_w10 != 0);
  }
  lVar3 = param_4[1];
  uVar4 = *param_4;
  param_1[0xc] = param_4[1];
  param_1[0xb] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x000100c1be8c();
    } while (extraout_w10_00 != 0);
  }
  uVar4 = *param_5;
  *param_5 = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0xd] = uVar4;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0xf] = 0;
  func_0x00010028c284();
  return param_1;
}



/* Entry: 100c1bc24; end: 100c1bc43;  */

void FUN_100c1bc24(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  func_0x000100c1bc30(param_1,0,param_2);
  FUN_100c1bce0(&PTR_DAT_110d09ae8);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107c39de4();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x19 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    FUN_100c1bcf8();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    FUN_100c1bde8();
  }
  *(undefined8 *)(unaff_x19 + 0x20) = unaff_x21;
  if ((uVar1 >> 2 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x000107c39e40();
  }
  *(undefined8 *)(unaff_x19 + 0x28) = unaff_x21;
  uVar2 = *(undefined4 *)(unaff_x20 + 0x30);
  *(undefined4 *)(unaff_x19 + 0x33) = *(undefined4 *)(unaff_x20 + 0x33);
  *(undefined4 *)(unaff_x19 + 0x30) = uVar2;
  return;
}



/* Entry: 100c1bc44; end: 100c1bcdf;  */

void FUN_100c1bc44(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  func_0x000100c1bc30();
  FUN_100c1bce0(&PTR_DAT_110d09ae8);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107c39de4();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x19 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    FUN_100c1bcf8();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    FUN_100c1bde8();
  }
  *(undefined8 *)(unaff_x19 + 0x20) = unaff_x21;
  if ((uVar1 >> 2 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x000107c39e40();
  }
  *(undefined8 *)(unaff_x19 + 0x28) = unaff_x21;
  uVar2 = *(undefined4 *)(unaff_x20 + 0x30);
  *(undefined4 *)(unaff_x19 + 0x33) = *(undefined4 *)(unaff_x20 + 0x33);
  *(undefined4 *)(unaff_x19 + 0x30) = uVar2;
  return;
}



/* Entry: 100c1bce0; end: 100c1bcf7;  */

void FUN_100c1bce0(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  *unaff_x19 = param_1;
  return;
}



/* Entry: 100c1bcf8; end: 100c1bd27;  */

long FUN_100c1bcf8(long param_1)

{
  int iVar1;
  long lVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100c1bcec();
  if (param_1 == 0) {
    func_0x000100c1bd28();
  }
  else {
    func_0x000107c39e3c();
  }
  func_0x000100c1bd30();
  FUN_100c1bdb0();
  func_0x000100c1bdc4(&PTR_DAT_110d0a528);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107c39e50();
  }
  func_0x000100c1bdd0();
  *(long *)(unaff_x19 + 0x10) = param_1;
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
  iVar1 = *(int *)(unaff_x20 + 0x24);
  *(int *)(unaff_x19 + 0x24) = iVar1;
  if (iVar1 == 3) {
    *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x20 + 0x18);
  }
  else if (iVar1 == 2) {
    lVar2 = unaff_x20 + 0x18;
    func_0x0001002a0e60();
    *(long *)(unaff_x19 + 0x18) = lVar2;
  }
  return unaff_x19;
}



/* Entry: 100c1bd28; end: 100c1bd3b;  */

void FUN_100c1bd28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x28);
  return;
}



/* Entry: 100c1bd3c; end: 100c1bdaf;  */

void FUN_100c1bd3c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  FUN_100c1bdb0();
  func_0x000100c1bdc4(&PTR_DAT_110d0a528);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107c39e50();
  }
  func_0x000100c1bdd0();
  *(undefined8 *)(unaff_x19 + 0x10) = param_1;
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
  iVar1 = *(int *)(unaff_x20 + 0x24);
  *(int *)(unaff_x19 + 0x24) = iVar1;
  if (iVar1 == 3) {
    *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x20 + 0x18);
  }
  else if (iVar1 == 2) {
    lVar2 = unaff_x20 + 0x18;
    func_0x0001002a0e60();
    *(long *)(unaff_x19 + 0x18) = lVar2;
  }
  return;
}



/* Entry: 100c1bdb0; end: 100c1bde7;  */

void FUN_100c1bdb0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 100c1bde8; end: 100c1be1b;  */

long FUN_100c1bde8(long param_1,undefined8 param_2,long param_3)

{
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100c1bcec();
  if (param_1 == 0) {
    func_0x000100c1be1c();
  }
  else {
    param_1 = unaff_x20;
    func_0x000107c39e38();
  }
  func_0x000100c1bd30();
  func_0x000100c1be24();
  *(undefined8 *)(param_1 + 8) = param_2;
  func_0x000100c1bce0(&PTR_DAT_110d09a98);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107c39de4();
  }
  param_3 = param_3 + 0x10;
  func_0x0001002a0e60(param_3,unaff_x20);
  *(long *)(unaff_x19 + 0x10) = param_3;
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
  return unaff_x19;
}



/* Entry: 100c1be1c; end: 100c1be2f;  */

void FUN_100c1be1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x20);
  return;
}



/* Entry: 100c1be30; end: 100c1be7f;  */

void FUN_100c1be30(long param_1,undefined8 param_2,long param_3)

{
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x000100c1be24();
  *(undefined8 *)(param_1 + 8) = param_2;
  FUN_100c1bce0(&PTR_DAT_110d09a98);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107c39de4();
  }
  param_3 = param_3 + 0x10;
  func_0x0001002a0e60();
  *(long *)(unaff_x19 + 0x10) = param_3;
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
  return;
}



/* Entry: 100c1be80; end: 100c1bebb;  */

void FUN_100c1be80(void)

{
  return;
}



/* Entry: 100c1bebc; end: 100c1bf77;  */

void FUN_100c1bebc(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  long extraout_x8;
  int extraout_w10;
  undefined1 auStack_240 [56];
  undefined1 auStack_208 [472];
  
  func_0x000100c1be9c();
  ppuVar1 = &PTR_PTR_11339af30;
  if (*(undefined ***)(param_2 + 0x18) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + 0x18);
  }
  func_0x0001002a8308(auStack_208,(ulong)ppuVar1[2] & 0xfffffffffffffffc);
  FUN_100c1bf78();
  func_0x000100c1bfac();
  func_0x000100c1bfb8();
  if (extraout_x8 != 0) {
    do {
      func_0x000100c1bfc8();
    } while (extraout_w10 != 0);
  }
  func_0x000100c1bfd8();
  FUN_100c1c004();
  FUN_100c22064(auStack_240);
  FUN_100c22088();
  func_0x000100c22090();
  func_0x000100c22098();
  func_0x000100c220a0();
  func_0x000100c220a8();
  func_0x000100c220b0();
  return;
}



/* Entry: 100c1bf78; end: 100c1c003;  */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1 * FUN_100c1bf78(void)

{
  undefined8 *puStack0000000000000000;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined1 uStack0000000000000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined1 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined1 in_stack_00000080;
  undefined8 uStack00000000000000b8;
  undefined8 uStack00000000000000c0;
  undefined2 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined1 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined1 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined1 in_stack_00000160;
  
  in_stack_00000028 = in_stack_00000028 & 0xffffffffffffff00;
  uStack0000000000000040 = 0;
  puStack0000000000000000 = &stack0x00000028;
  uStack00000000000000b8 = 0;
  uStack00000000000000c0 = 0;
  func_0x000100626f0c(&stack0x000000c8,&stack0x00000088);
  return (undefined1 *)&stack0x000000b8;
}



/* Entry: 100c1c004; end: 100c1c127;  */

void FUN_100c1c004(undefined8 *param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  undefined1 auStack_58 [24];
  
  func_0x000100c1bfec();
  FUN_100c1c128();
  if ((int)param_1 == 0) {
    func_0x0001053ada00();
    func_0x0001053ad9ac();
    func_0x0001053ada24();
    func_0x0001053ad9d8();
    func_0x0001053adbd8();
    func_0x0001053ad998();
    func_0x0001053ada50();
    func_0x000100c218b8();
    func_0x0001053ada58();
  }
  else {
    func_0x000100c1fb54();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x000100c1fb64();
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = &PTR_DAT_110881540;
    if (lVar1 != 0) {
      do {
        func_0x000100c1fb6c();
      } while (extraout_w10 != 0);
      do {
        func_0x000100c1fb6c();
      } while (extraout_w10_00 != 0);
    }
    func_0x000100c1fb7c();
    func_0x000100c1fb88(&PTR_DAT_110881590);
    func_0x000100c1fba0();
    FUN_100c1fbd4();
    FUN_100c22014();
    func_0x000100c21f98();
    FUN_100c2201c(auStack_58);
    FUN_100c22040();
  }
  func_0x000100c22048();
  return;
}



/* Entry: 100c1c128; end: 100c1c133;  */

bool FUN_100c1c128(undefined8 param_1)

{
  long unaff_x29;
  int aiStack_60 [15];
  undefined1 uStack_21;
  
  func_0x0001005ff518(aiStack_60,param_1,unaff_x29 + -0x38,&uStack_21);
  func_0x000100601c8c(aiStack_60);
  return aiStack_60[0] == 0;
}



/* Entry: 100c1c134; end: 100c1c187;  */

void FUN_100c1c134(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1950;
  func_0x000107c61174(param_2);
  func_0x000107c61158(puVar1);
  func_0x000107c56950(param_2);
  func_0x000107c5a37c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c1c188; end: 100c1c423;  */

void FUN_100c1c188(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112e38b30;
  func_0x0001000285a8(0x112e38b30,&UNK_10da233f0);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_100c1c3f0:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100c1c420);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_100c1c3f0;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c615f0(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100c1c424);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 100c1c424; end: 100c1c4eb;  */

/* WARNING: Possible PIC construction at 0x000100c1c45c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c1c460) */

void FUN_100c1c424(void)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c615f0(uVar1);
  func_0x000100471e0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}


