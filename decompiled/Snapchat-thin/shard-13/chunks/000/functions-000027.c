/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109d88e50; end: 109d8903f;  */

void FUN_109d88e50(ulong *param_1,ulong *param_2,ulong param_3,uint param_4,long *param_5,
                  long param_6)

{
  char cVar1;
  undefined1 *puVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *extraout_x8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  ulong unaff_x23;
  ulong *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar8;
  undefined8 uVar9;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(ulong **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    bVar3 = (char)*param_2 == '\x01';
    uVar7 = (ulong)(param_3 != 0 && bVar3);
    unaff_x24 = param_2;
    if (param_3 != 0 && bVar3) {
      unaff_x24 = (ulong *)((long)param_2 + 1);
    }
    unaff_x23 = param_3 - uVar7;
    if (unaff_x23 < 0x7ffffffffffffff8) break;
    func_0x000104c4f6b8();
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    puVar5 = param_2;
    __Unwind_Resume();
    *(ulong **)((long)register0x00000008 + -0xb0) = param_2;
    *(ulong **)((long)register0x00000008 + -0xa8) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0xa0) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x98) = FUN_109d89040;
    if ((*(byte *)((long)puVar5 + 0x17) >> 4 & 1) == 0) {
      param_3 = 0;
      param_2 = (ulong *)&UNK_10f5fa524;
    }
    else {
      puVar6 = puVar5;
      func_0x000109da271c();
      param_2 = puVar6 + 2;
      param_3 = *puVar6;
    }
    uVar7 = puVar5[5];
    cVar1 = *(char *)(uVar7 + 0xcf);
    param_5 = (long *)*(long *)(uVar7 + 0xb8);
    if (-1 < (long)cVar1) {
      param_5 = (long *)(uVar7 + 0xb8);
    }
    param_6 = *(long *)(uVar7 + 0xc0);
    if (-1 < cVar1) {
      param_6 = (long)cVar1;
    }
    param_4 = (uint)puVar5[4] & 0xf;
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0xa0);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x98);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0xb0);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
    param_1 = extraout_x8;
  }
  if (unaff_x23 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)unaff_x23;
    puVar6 = param_1;
    if (param_3 == uVar7) goto LAB_109d88ef4;
  }
  else {
    puVar5 = (ulong *)0x19;
    if ((unaff_x23 | 7) != 0x17) {
      puVar5 = (ulong *)((unaff_x23 | 7) + 1);
    }
    puVar6 = puVar5;
    __Znwm();
    param_1[1] = unaff_x23;
    param_1[2] = (ulong)puVar5 | 0x8000000000000000;
    *param_1 = (ulong)puVar6;
  }
  _memmove(puVar6,unaff_x24,unaff_x23);
LAB_109d88ef4:
  *(undefined1 *)((long)puVar6 + unaff_x23) = 0;
  if (param_4 - 7 < 2) {
    if (param_6 == 0) {
      puVar5 = param_1;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (param_1,0,&UNK_10f5f9b85,10);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1,puVar5);
    }
    else {
      if (param_5 == (long *)0x0) {
        *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
      }
      else {
        func_0x000104c54c8c((undefined1 *)((long)register0x00000008 + -0x88),param_5,param_6);
      }
      puVar4 = (undefined8 *)((long)register0x00000008 + -0x88);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar4,":",1);
      uVar9 = puVar4[1];
      uVar8 = *puVar4;
      *(undefined8 *)((long)register0x00000008 + -0x60) = puVar4[2];
      *(undefined8 *)((long)register0x00000008 + -0x68) = uVar9;
      *(undefined8 *)((long)register0x00000008 + -0x70) = uVar8;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      uVar7 = *(ulong *)((long)register0x00000008 + -0x68);
      puVar2 = *(undefined1 **)((long)register0x00000008 + -0x70);
      if (-1 < (char)*(byte *)((long)register0x00000008 + -0x59)) {
        uVar7 = (ulong)*(byte *)((long)register0x00000008 + -0x59);
        puVar2 = (undefined1 *)((long)register0x00000008 + -0x70);
      }
      puVar5 = param_1;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (param_1,0,puVar2,uVar7);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1,puVar5);
      if (*(char *)((long)register0x00000008 + -0x59) < '\0') {
        __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x70));
      }
      if (*(char *)((long)register0x00000008 + -0x71) < '\0') {
        __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x88));
      }
    }
  }
  return;
}



/* Entry: 109d89040; end: 109d890af;  */

void FUN_109d89040(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined1 *puVar4;
  ulong uVar5;
  bool bVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong *extraout_x8;
  ulong *puVar11;
  ulong uVar12;
  ulong *unaff_x19;
  ulong *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  ulong unaff_x23;
  ulong *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar13;
  undefined8 uVar14;
  
  while( true ) {
    puVar11 = param_1;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    if ((*(byte *)((long)param_2 + 0x17) >> 4 & 1) == 0) {
      uVar10 = 0;
      unaff_x20 = (ulong *)&UNK_10f5fa524;
    }
    else {
      puVar9 = param_2;
      func_0x000109da271c();
      unaff_x20 = puVar9 + 2;
      uVar10 = *puVar9;
    }
    uVar5 = param_2[4];
    uVar12 = param_2[5];
    cVar3 = *(char *)(uVar12 + 0xcf);
    plVar1 = (long *)*(long *)(uVar12 + 0xb8);
    if (-1 < (long)cVar3) {
      plVar1 = (long *)(uVar12 + 0xb8);
    }
    lVar2 = *(long *)(uVar12 + 0xc0);
    if (-1 < cVar3) {
      lVar2 = (long)cVar3;
    }
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(ulong **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    bVar6 = (char)*unaff_x20 == '\x01';
    uVar12 = (ulong)(uVar10 != 0 && bVar6);
    unaff_x24 = unaff_x20;
    if (uVar10 != 0 && bVar6) {
      unaff_x24 = (ulong *)((long)unaff_x20 + 1);
    }
    unaff_x23 = uVar10 - uVar12;
    if (unaff_x23 < 0x7ffffffffffffff8) break;
    func_0x000104c4f6b8();
    if (*(char *)((long)puVar11 + 0x17) < '\0') {
      __ZdlPv(*puVar11);
    }
    unaff_x30 = FUN_109d89040;
    param_2 = unaff_x20;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
    param_1 = extraout_x8;
    unaff_x19 = puVar11;
  }
  if (unaff_x23 < 0x17) {
    *(char *)((long)puVar11 + 0x17) = (char)unaff_x23;
    puVar7 = puVar11;
    if (uVar10 == uVar12) goto LAB_109d88ef4;
  }
  else {
    puVar9 = (ulong *)0x19;
    if ((unaff_x23 | 7) != 0x17) {
      puVar9 = (ulong *)((unaff_x23 | 7) + 1);
    }
    puVar7 = puVar9;
    __Znwm();
    puVar11[1] = unaff_x23;
    puVar11[2] = (ulong)puVar9 | 0x8000000000000000;
    *puVar11 = (ulong)puVar7;
  }
  _memmove(puVar7,unaff_x24,unaff_x23);
LAB_109d88ef4:
  *(undefined1 *)((long)puVar7 + unaff_x23) = 0;
  if (((uint)uVar5 & 0xf) - 7 < 2) {
    if (lVar2 == 0) {
      puVar9 = puVar11;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (puVar11,0,&UNK_10f5f9b85,10);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar11,puVar9);
    }
    else {
      if (plVar1 == (long *)0x0) {
        *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
      }
      else {
        func_0x000104c54c8c((undefined1 *)((long)register0x00000008 + -0x88),plVar1,lVar2);
      }
      puVar8 = (undefined8 *)((long)register0x00000008 + -0x88);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar8,":",1);
      uVar14 = puVar8[1];
      uVar13 = *puVar8;
      *(undefined8 *)((long)register0x00000008 + -0x60) = puVar8[2];
      *(undefined8 *)((long)register0x00000008 + -0x68) = uVar14;
      *(undefined8 *)((long)register0x00000008 + -0x70) = uVar13;
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = 0;
      uVar10 = *(ulong *)((long)register0x00000008 + -0x68);
      puVar4 = *(undefined1 **)((long)register0x00000008 + -0x70);
      if (-1 < (char)*(byte *)((long)register0x00000008 + -0x59)) {
        uVar10 = (ulong)*(byte *)((long)register0x00000008 + -0x59);
        puVar4 = (undefined1 *)((long)register0x00000008 + -0x70);
      }
      puVar9 = puVar11;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (puVar11,0,puVar4,uVar10);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar11,puVar9);
      if (*(char *)((long)register0x00000008 + -0x59) < '\0') {
        __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x70));
      }
      if (*(char *)((long)register0x00000008 + -0x71) < '\0') {
        __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x88));
      }
    }
  }
  return;
}



/* Entry: 109d890b0; end: 109d8910f;  */

undefined8 FUN_109d890b0(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uVar1 = *(undefined8 *)(param_1 + -0x20);
  func_0x000109d89378(uVar1,&uStack_38);
  __ZdlPvSt11align_val_t(uStack_38,8);
  return uVar1;
}



/* Entry: 109d89110; end: 109d8916b;  */

undefined8 FUN_109d89110(undefined8 param_1)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_109d8916c(param_1,&uStack_38);
  __ZdlPvSt11align_val_t(uStack_38,8);
  return param_1;
}



/* Entry: 109d8916c; end: 109d89513;  */

long FUN_109d8916c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  undefined1 auStack_48 [16];
  byte bStack_38;
  
  do {
    bVar4 = *(byte *)(param_1 + 0x10);
    if (bVar4 == 1) {
      func_0x000109d89d9c(auStack_48,param_2,param_1);
      if ((bStack_38 & 1) == 0) {
        bVar4 = *(byte *)(param_1 + 0x10);
        goto LAB_109d891cc;
      }
      lVar1 = -0x20;
    }
    else {
      if (bVar4 - 2 < 2 || bVar4 == 0) {
        return param_1;
      }
LAB_109d891cc:
      if (bVar4 != 5) {
        return 0;
      }
      uVar5 = (uint)*(ushort *)(param_1 + 0x12);
      if (*(ushort *)(param_1 + 0x12) < 0x2f) {
        if (uVar5 == 0xf) {
          lVar1 = *(long *)(param_1 + ((ulong)*(uint *)(param_1 + 0x14) & 0x7ffffff) * -0x20 + 0x20)
          ;
          FUN_109d8916c(lVar1,param_2);
          if (lVar1 != 0) {
            return 0;
          }
        }
        else if (uVar5 != 0x22) {
          if (uVar5 != 0xd) {
            return 0;
          }
          lVar2 = *(long *)(param_1 + ((ulong)*(uint *)(param_1 + 0x14) & 0x7ffffff) * -0x20);
          FUN_109d8916c(lVar2,param_2);
          lVar3 = *(long *)(param_1 + ((ulong)*(uint *)(param_1 + 0x14) & 0x7ffffff) * -0x20 + 0x20)
          ;
          FUN_109d8916c(lVar3,param_2);
          lVar1 = lVar2;
          if (lVar3 != 0) {
            lVar1 = 0;
          }
          if (lVar2 != 0) {
            return lVar1;
          }
          return lVar3;
        }
      }
      else if (2 < uVar5 - 0x2f) {
        return 0;
      }
      lVar1 = ((ulong)*(uint *)(param_1 + 0x14) & 0x7ffffff) * -0x20;
    }
    param_1 = *(long *)(param_1 + lVar1);
  } while( true );
}



/* Entry: 109d89514; end: 109d8956f;  */

undefined8 * FUN_109d89514(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1;
  FUN_109d89570(param_1,param_2,&puStack_28);
  if (((ulong)puVar1 & 1) == 0) {
    FUN_109d8960c(param_1,param_2,param_2);
    *param_1 = *param_2;
    param_1[1] = 0;
    param_1[2] = 0;
    puStack_28 = param_1;
  }
  return puStack_28;
}



/* Entry: 109d89570; end: 109d8960b;  */

undefined8 FUN_109d89570(long *param_1,ulong *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  int iVar9;
  
  if ((int)param_1[2] == 0) {
    uVar3 = 0;
    puVar4 = (ulong *)0x0;
  }
  else {
    uVar5 = *param_2;
    uVar2 = (int)param_1[2] - 1;
    uVar6 = ((uint)(uVar5 >> 4) & 0xfffffff ^ (uint)uVar5 >> 9) & uVar2;
    puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x18);
    uVar8 = *puVar4;
    if (uVar5 != uVar8) {
      iVar9 = 1;
      puVar7 = (ulong *)0x0;
      do {
        if (uVar8 == 0xfffffffffffff000) {
          uVar3 = 0;
          if (puVar7 != (ulong *)0x0) {
            puVar4 = puVar7;
          }
          goto LAB_109d895b4;
        }
        puVar1 = puVar4;
        if (puVar7 != (ulong *)0x0 || uVar8 != 0xffffffffffffe000) {
          puVar1 = puVar7;
        }
        uVar6 = uVar6 + iVar9;
        iVar9 = iVar9 + 1;
        uVar6 = uVar6 & uVar2;
        puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x18);
        uVar8 = *puVar4;
        puVar7 = puVar1;
      } while (uVar5 != uVar8);
    }
    uVar3 = 1;
  }
LAB_109d895b4:
  *param_3 = (long)puVar4;
  return uVar3;
}



/* Entry: 109d8960c; end: 109d896b3;  */

long * FUN_109d8960c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d89658;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d896b4(param_1,uVar1);
  FUN_109d89570(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d89658:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d896b4; end: 109d897ef;  */

void FUN_109d896b4(undefined8 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puStack_38;
  
  uVar1 = *(uint *)(param_1 + 2);
  puVar6 = (ulong *)*param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar5 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar5 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar5;
  puVar3 = (undefined8 *)((ulong)uVar5 * 0x18);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = puVar3;
  if (puVar6 != (ulong *)0x0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 2) * 0x18;
      do {
        *puVar3 = 0xfffffffffffff000;
        lVar4 = lVar4 + -0x18;
        puVar3 = puVar3 + 3;
      } while (lVar4 != 0);
    }
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 * 0x18;
      puVar7 = puVar6;
      do {
        if ((*puVar7 | 0x1000) != 0xfffffffffffff000) {
          FUN_109d89570(param_1,puVar7,&puStack_38);
          *puStack_38 = *puVar7;
          uVar8 = puVar7[1];
          puStack_38[2] = puVar7[2];
          puStack_38[1] = uVar8;
          *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
        }
        puVar7 = puVar7 + 3;
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(puVar6,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar4 = (ulong)*(uint *)(param_1 + 2) * 0x18;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar4 = lVar4 + -0x18;
      puVar3 = puVar3 + 3;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 109d897f0; end: 109d89853;  */

undefined8 * FUN_109d897f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1;
  FUN_109d89854(param_1,param_2,&puStack_28);
  if (((ulong)puVar1 & 1) == 0) {
    FUN_109d898ec(param_1,param_2,param_2);
    *param_1 = *param_2;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xf0;
    puStack_28 = param_1;
  }
  return puStack_28;
}



/* Entry: 109d89854; end: 109d898eb;  */

undefined8 FUN_109d89854(long *param_1,ulong *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  int iVar9;
  
  if ((int)param_1[2] == 0) {
    uVar3 = 0;
    puVar4 = (ulong *)0x0;
  }
  else {
    uVar5 = *param_2;
    uVar2 = (int)param_1[2] - 1;
    uVar6 = ((uint)(uVar5 >> 4) & 0xfffffff ^ (uint)uVar5 >> 9) & uVar2;
    puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
    uVar8 = *puVar4;
    if (uVar5 != uVar8) {
      iVar9 = 1;
      puVar7 = (ulong *)0x0;
      do {
        if (uVar8 == 0xfffffffffffff000) {
          uVar3 = 0;
          if (puVar7 != (ulong *)0x0) {
            puVar4 = puVar7;
          }
          goto LAB_109d89894;
        }
        puVar1 = puVar4;
        if (puVar7 != (ulong *)0x0 || uVar8 != 0xffffffffffffe000) {
          puVar1 = puVar7;
        }
        uVar6 = uVar6 + iVar9;
        iVar9 = iVar9 + 1;
        uVar6 = uVar6 & uVar2;
        puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
        uVar8 = *puVar4;
        puVar7 = puVar1;
      } while (uVar5 != uVar8);
    }
    uVar3 = 1;
  }
LAB_109d89894:
  *param_3 = (long)puVar4;
  return uVar3;
}



/* Entry: 109d898ec; end: 109d89993;  */

long * FUN_109d898ec(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d89938;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d89994(param_1,uVar1);
  FUN_109d89854(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d89938:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d89994; end: 109d89abf;  */

void FUN_109d89994(undefined8 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puStack_38;
  
  uVar1 = *(uint *)(param_1 + 2);
  puVar6 = (ulong *)*param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar5 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar5 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar5;
  puVar3 = (undefined8 *)((ulong)uVar5 << 4);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = puVar3;
  if (puVar6 != (ulong *)0x0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
      do {
        *puVar3 = 0xfffffffffffff000;
        lVar4 = lVar4 + -0x10;
        puVar3 = puVar3 + 2;
      } while (lVar4 != 0);
    }
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 4;
      puVar7 = puVar6;
      do {
        if ((*puVar7 | 0x1000) != 0xfffffffffffff000) {
          FUN_109d89854(param_1,puVar7,&puStack_38);
          *puStack_38 = *puVar7;
          *(int *)(puStack_38 + 1) = (int)puVar7[1];
          *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
        }
        puVar7 = puVar7 + 2;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(puVar6,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar4 = lVar4 + -0x10;
      puVar3 = puVar3 + 2;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 109d89ac0; end: 109d89b1b;  */

undefined8 * FUN_109d89ac0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1;
  FUN_109d89b1c(param_1,param_2,&puStack_28);
  if (((ulong)puVar1 & 1) == 0) {
    FUN_109d89bb8(param_1,param_2,param_2);
    *param_1 = *param_2;
    param_1[1] = 0;
    param_1[2] = 0;
    puStack_28 = param_1;
  }
  return puStack_28;
}



/* Entry: 109d89b1c; end: 109d89bb7;  */

undefined8 FUN_109d89b1c(long *param_1,ulong *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  int iVar9;
  
  if ((int)param_1[2] == 0) {
    uVar3 = 0;
    puVar4 = (ulong *)0x0;
  }
  else {
    uVar5 = *param_2;
    uVar2 = (int)param_1[2] - 1;
    uVar6 = ((uint)(uVar5 >> 4) & 0xfffffff ^ (uint)uVar5 >> 9) & uVar2;
    puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x18);
    uVar8 = *puVar4;
    if (uVar5 != uVar8) {
      iVar9 = 1;
      puVar7 = (ulong *)0x0;
      do {
        if (uVar8 == 0xfffffffffffff000) {
          uVar3 = 0;
          if (puVar7 != (ulong *)0x0) {
            puVar4 = puVar7;
          }
          goto LAB_109d89b60;
        }
        puVar1 = puVar4;
        if (puVar7 != (ulong *)0x0 || uVar8 != 0xffffffffffffe000) {
          puVar1 = puVar7;
        }
        uVar6 = uVar6 + iVar9;
        iVar9 = iVar9 + 1;
        uVar6 = uVar6 & uVar2;
        puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x18);
        uVar8 = *puVar4;
        puVar7 = puVar1;
      } while (uVar5 != uVar8);
    }
    uVar3 = 1;
  }
LAB_109d89b60:
  *param_3 = (long)puVar4;
  return uVar3;
}



/* Entry: 109d89bb8; end: 109d89c5f;  */

long * FUN_109d89bb8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d89c04;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d89c60(param_1,uVar1);
  FUN_109d89b1c(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d89c04:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d89c60; end: 109d89e8b;  */

void FUN_109d89c60(undefined8 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puStack_38;
  
  uVar1 = *(uint *)(param_1 + 2);
  puVar6 = (ulong *)*param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar5 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar5 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar5;
  puVar3 = (undefined8 *)((ulong)uVar5 * 0x18);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = puVar3;
  if (puVar6 != (ulong *)0x0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 2) * 0x18;
      do {
        *puVar3 = 0xfffffffffffff000;
        lVar4 = lVar4 + -0x18;
        puVar3 = puVar3 + 3;
      } while (lVar4 != 0);
    }
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 * 0x18;
      puVar7 = puVar6;
      do {
        if ((*puVar7 | 0x1000) != 0xfffffffffffff000) {
          FUN_109d89b1c(param_1,puVar7,&puStack_38);
          *puStack_38 = *puVar7;
          uVar8 = puVar7[1];
          puStack_38[2] = puVar7[2];
          puStack_38[1] = uVar8;
          *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
        }
        puVar7 = puVar7 + 3;
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(puVar6,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar4 = (ulong)*(uint *)(param_1 + 2) * 0x18;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar4 = lVar4 + -0x18;
      puVar3 = puVar3 + 3;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 109d89e8c; end: 109d89f17;  */

undefined8 FUN_109d89e8c(long param_1,int param_2,long param_3,long *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  
  if (param_2 == 0) {
    uVar2 = 0;
    plVar3 = (long *)0x0;
  }
  else {
    uVar4 = ((uint)param_3 >> 4 ^ (uint)param_3 >> 9) & param_2 - 1U;
    plVar3 = (long *)(param_1 + (ulong)uVar4 * 8);
    lVar6 = *plVar3;
    if (param_3 != lVar6) {
      iVar7 = 1;
      plVar5 = (long *)0x0;
      do {
        if (lVar6 == -0x1000) {
          uVar2 = 0;
          if (plVar5 != (long *)0x0) {
            plVar3 = plVar5;
          }
          goto LAB_109d89ec0;
        }
        plVar1 = plVar3;
        if (plVar5 != (long *)0x0 || lVar6 != -0x2000) {
          plVar1 = plVar5;
        }
        uVar4 = uVar4 + iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 & param_2 - 1U;
        plVar3 = (long *)(param_1 + (ulong)uVar4 * 8);
        lVar6 = *plVar3;
        plVar5 = plVar1;
      } while (param_3 != lVar6);
    }
    uVar2 = 1;
  }
LAB_109d89ec0:
  *param_4 = (long)plVar3;
  return uVar2;
}



/* Entry: 109d89f18; end: 109d8a03b;  */

void FUN_109d89f18(undefined8 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puStack_38;
  
  uVar1 = *(uint *)(param_1 + 2);
  puVar6 = (ulong *)*param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar5 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar5 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar5;
  puVar3 = (undefined8 *)((ulong)uVar5 << 3);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = puVar3;
  if (puVar6 != (ulong *)0x0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 2) << 3;
      do {
        *puVar3 = 0xfffffffffffff000;
        lVar4 = lVar4 + -8;
        puVar3 = puVar3 + 1;
      } while (lVar4 != 0);
    }
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 3;
      puVar7 = puVar6;
      do {
        if ((*puVar7 | 0x1000) != 0xfffffffffffff000) {
          FUN_109d89e8c(*param_1,*(undefined4 *)(param_1 + 2),*puVar7,&puStack_38);
          *puStack_38 = *puVar7;
          *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
        }
        puVar7 = puVar7 + 1;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(puVar6,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar4 = (ulong)*(uint *)(param_1 + 2) << 3;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar4 = lVar4 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 109d8a03c; end: 109d8a06b;  */

long FUN_109d8a03c(long param_1)

{
  uint uVar1;
  
  func_0x000109d34fec();
  FUN_109d97d98(param_1);
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_109d31ef4(*(long *)(param_1 + 0x30) + 0x10,param_1);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_109d67674();
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    FUN_109da2494(param_1);
  }
  uVar1 = *(uint *)(param_1 + 0x14);
  if ((uVar1 >> 0x1b & 1) != 0) {
    func_0x000109d95478(param_1);
    uVar1 = *(uint *)(param_1 + 0x14);
  }
  if ((uVar1 >> 0x1d & 1) != 0) {
    FUN_109d97d98(param_1);
  }
  FUN_109da258c(param_1);
  return param_1;
}



/* Entry: 109d8a06c; end: 109d8a1df;  */

long * FUN_109d8a06c(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                    long param_5,undefined8 param_6,long param_7,undefined2 param_8,
                    undefined2 param_9)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  ulong uStack_d8;
  undefined8 uStack_d0;
  long *plStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = param_1;
  FUN_109d8a1e0(param_1,param_8);
  plVar1 = param_1;
  func_0x000109d8a248(param_1,param_9);
  if (param_5 == 0) {
    uVar8 = *(uint *)(param_1 + 0xc);
  }
  else {
    uVar8 = (uint)(*(byte *)(param_5 + 0x11) >> 1);
    if (uVar8 == 0x7f) {
      uVar8 = 0xffffffff;
    }
  }
  uStack_70 = *param_3;
  lVar2 = *(long *)(*(long *)(param_1[6] + 0x38) + 0x28);
  puStack_90 = param_3;
  uStack_88 = param_4;
  plStack_80 = plVar3;
  plStack_78 = plVar1;
  FUN_109d87c1c(lVar2,param_2,&uStack_70,1);
  if (lVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar2 + 0x18);
  }
  uStack_a0 = 0;
  plVar3 = param_1;
  FUN_109d8ae58(param_1,uVar5,lVar2,&puStack_90,4,0,0,param_6);
  plVar7 = plVar3 + 8;
  uVar6 = *(ulong *)*plVar3;
  plVar1 = plVar7;
  FUN_109d5ab08(plVar7,uVar6,0xffffffff,0x3e);
  *plVar7 = (long)plVar1;
  if ((param_7 != 0) || (param_7 = param_1[0xb], param_7 != 0)) {
    uVar6 = 3;
    plVar1 = plVar3;
    FUN_109d97c40(plVar3,3,param_7);
  }
  *(byte *)((long)plVar3 + 0x11) = *(byte *)((long)plVar3 + 0x11) | (byte)(uVar8 << 1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    __Unwind_Resume();
    pcStack_a8 = FUN_109d8a1e0;
    cVar4 = *(char *)((long)plVar1 + 0x66);
    if ((uVar6 & 0x100) != 0) {
      cVar4 = (char)uVar6;
    }
    plStack_c0 = param_1;
    lStack_b8 = param_7;
    puStack_b0 = &stack0xfffffffffffffff0;
    func_0x000109d814a4(&uStack_d8,(int)cVar4);
    plVar3 = (long *)(*(long *)plVar1[8] + 0x108);
    FUN_109d956b4(plVar3,uStack_d8,uStack_d0);
    lVar2 = *plVar3;
    if ((uStack_d8 & 1) != 0) {
      *(long *)(lVar2 + 0x10) = lVar2;
    }
    plVar3 = (long *)plVar1[8];
    FUN_109d9454c(plVar3,lVar2 + 8);
    return plVar3;
  }
  return plVar3;
}



/* Entry: 109d8a1e0; end: 109d8a2ab;  */

void FUN_109d8a1e0(long param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  ulong uStack_38;
  undefined8 uStack_30;
  
  cVar2 = *(char *)(param_1 + 0x66);
  if ((param_2 & 0x100) != 0) {
    cVar2 = (char)param_2;
  }
  func_0x000109d814a4(&uStack_38,(int)cVar2);
  plVar1 = (long *)(**(long **)(param_1 + 0x40) + 0x108);
  FUN_109d956b4(plVar1,uStack_38,uStack_30);
  lVar3 = *plVar1;
  if ((uStack_38 & 1) != 0) {
    *(long *)(lVar3 + 0x10) = lVar3;
  }
  FUN_109d9454c(*(undefined8 *)(param_1 + 0x40),lVar3 + 8);
  return;
}



/* Entry: 109d8a2ac; end: 109d8a4b3;  */

/* WARNING: Possible PIC construction at 0x000109d8a648: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109d8a64c) */

long * FUN_109d8a2ac(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                    long param_5,undefined8 param_6,undefined8 *param_7,ulong param_8,
                    undefined2 param_9)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined8 **ppuVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  long *plVar19;
  long *plVar20;
  uint uVar21;
  undefined8 *****pppppuVar22;
  code *pcVar23;
  long *plStack_168;
  long lStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  long *plStack_148;
  undefined8 ****ppppuStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_120;
  long lStack_118;
  long *plStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  ulong uStack_f0;
  long *plStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  undefined8 *puStack_b8;
  undefined8 ****ppppuStack_b0;
  code *pcStack_a8;
  undefined8 auStack_a0 [2];
  undefined8 *puStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  long lStack_68;
  
  ppuVar3 = (undefined8 **)auStack_a0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar19 = param_1;
  func_0x000109d8a248(param_1,param_9);
  if (param_5 == 0) {
    uVar21 = *(uint *)(param_1 + 0xc);
  }
  else {
    uVar21 = (uint)(*(byte *)(param_5 + 0x11) >> 1);
    if (uVar21 == 0x7f) {
      uVar21 = 0xffffffff;
    }
  }
  uVar2 = (int)param_2 - 0x51;
  plVar9 = param_1;
  if ((uVar2 < 0x27) && ((1L << ((ulong)uVar2 & 0x3f) & 0x5cf07bc74fU) != 0)) {
    plVar15 = param_1;
    func_0x000109d8a1e0(param_1,param_8 & 0xffff);
    plStack_70 = (long *)*param_3;
    lVar4 = *(long *)(*(long *)(param_1[6] + 0x38) + 0x28);
    puStack_90 = param_3;
    plStack_88 = plVar15;
    plStack_80 = plVar19;
    puStack_78 = param_4;
    FUN_109d87c1c(lVar4,param_2,&puStack_78,2);
    if (lVar4 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(lVar4 + 0x18);
    }
    auStack_a0[0] = 0;
    puVar14 = (undefined8 *)0x3;
    plVar15 = (long *)0x0;
    iVar16 = 0;
    FUN_109d8ae58(param_1,uVar10,lVar4,&puStack_90);
  }
  else {
    plStack_88 = (long *)*param_3;
    lVar4 = *(long *)(*(long *)(param_1[6] + 0x38) + 0x28);
    puStack_90 = param_4;
    puStack_78 = param_3;
    plStack_70 = plVar19;
    FUN_109d87c1c(lVar4,param_2,&puStack_90,2);
    if (lVar4 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(lVar4 + 0x18);
    }
    auStack_a0[0] = 0;
    puVar14 = (undefined8 *)0x2;
    plVar15 = (long *)0x0;
    iVar16 = 0;
    FUN_109d8ae58(param_1,uVar10,lVar4,&puStack_78);
  }
  plVar20 = plVar9 + 8;
  uVar10 = *(undefined8 *)*plVar9;
  puVar13 = (undefined8 *)0xffffffff;
  lVar4 = 0x3e;
  plVar5 = plVar20;
  FUN_109d5ab08(plVar20,uVar10);
  *plVar20 = (long)plVar5;
  plVar5 = plVar9;
  FUN_109d32e0c();
  if ((int)plVar5 != 0) {
    if ((param_7 != (undefined8 *)0x0) ||
       (param_7 = (undefined8 *)param_1[0xb], param_7 != (undefined8 *)0x0)) {
      uVar10 = 3;
      plVar5 = plVar9;
      puVar13 = param_7;
      FUN_109d97c40(plVar9,3);
    }
    *(byte *)((long)plVar9 + 0x11) = *(byte *)((long)plVar9 + 0x11) | (byte)(uVar21 << 1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return plVar9;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_a8 = FUN_109d8a4b4;
  uStack_f0 = param_8;
  plStack_e8 = plVar19;
  puStack_e0 = param_4;
  puStack_d8 = param_3;
  plStack_d0 = plVar20;
  plStack_c8 = plVar9;
  plStack_c0 = param_1;
  puStack_b8 = param_7;
  ppppuStack_b0 = (undefined8 ****)&stack0xfffffffffffffff0;
  if (*(char *)((long)plVar5 + 100) != '\x01') {
    if ((((puVar13 == (undefined8 *)0x0) || (0x14 < *(byte *)(puVar13 + 2))) || (lVar4 == 0)) ||
       (0x14 < *(byte *)(lVar4 + 0x10))) {
      puVar6 = (undefined8 *)0x80;
      __Znwm();
      *(uint *)((long)puVar6 + 0x54) = *(uint *)((long)puVar6 + 0x54) & 0x38000000 | 2;
      plVar19 = puVar6 + 8;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = plVar19;
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar6[6] = 0;
      puVar6[7] = plVar19;
      lStack_f8 = CONCAT62(lStack_f8._2_6_,0x101);
      uVar7 = *puVar13;
      FUN_109d31fa8(uVar7);
      puStack_120 = (undefined8 *)0x0;
      FUN_109d8cfe4(plVar19,uVar7,0x36,uVar10,puVar13,lVar4,&lStack_118,0);
      uVar21 = *(uint *)(plVar5 + 0xc);
      if ((plVar15 != (long *)0x0) || (plVar15 = (long *)plVar5[0xb], plVar15 != (long *)0x0)) {
        FUN_109d97c40(plVar19,3,plVar15);
      }
      *(byte *)((long)puVar6 + 0x51) = *(byte *)((long)puVar6 + 0x51) | (byte)(uVar21 << 1);
      ppuVar3 = &puStack_120;
      puVar13 = puVar14;
      plVar9 = plVar5;
      plVar20 = (long *)(ulong)uVar21;
      pppppuVar22 = &ppppuStack_b0;
      pcVar23 = (code *)0x109d8a64c;
    }
    else {
      plVar19 = (long *)plVar5[9];
      (**(code **)(*plVar19 + 0xd0))(plVar19,uVar10,puVar13,lVar4);
      puVar13 = puStack_b8;
      plVar9 = plStack_c0;
      plVar15 = plStack_c8;
      plVar20 = plStack_d0;
      pppppuVar22 = (undefined8 *****)ppppuStack_b0;
      pcVar23 = pcStack_a8;
      if (plVar19 == (long *)0x0 || *(byte *)(plVar19 + 2) < 0x1c) {
        return plVar19;
      }
    }
    *(long **)((long)ppuVar3 + -0x30) = plVar20;
    *(long **)((long)ppuVar3 + -0x28) = plVar15;
    *(long **)((long)ppuVar3 + -0x20) = plVar9;
    *(undefined8 **)((long)ppuVar3 + -0x18) = puVar13;
    *(undefined8 ******)((long)ppuVar3 + -0x10) = pppppuVar22;
    *(code **)((long)ppuVar3 + -8) = pcVar23;
    (**(code **)(*(long *)plVar5[10] + 0x10))
              ((long *)plVar5[10],plVar19,puVar14,plVar5[6],plVar5[7]);
    if (*(uint *)(plVar5 + 1) != 0) {
      puVar18 = (undefined4 *)*plVar5;
      puVar1 = puVar18 + (ulong)*(uint *)(plVar5 + 1) * 4;
      do {
        FUN_109d97dec(plVar19,*puVar18,*(undefined8 *)(puVar18 + 2));
        puVar18 = puVar18 + 4;
      } while (puVar18 != puVar1);
    }
    return plVar19;
  }
  uVar17 = 0x55;
  if (iVar16 != 0) {
    uVar17 = 0x56;
  }
  pcStack_a8 = FUN_109d8a4b4;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar19 = plVar5;
  FUN_109d8a798(plVar5,uVar10);
  plVar9 = plVar5;
  func_0x000109d8a248(plVar5,0);
  uStack_100 = *puVar13;
  lVar8 = *(long *)(*(long *)(plVar5[6] + 0x38) + 0x28);
  puStack_120 = puVar13;
  lStack_118 = lVar4;
  plStack_110 = plVar19;
  plStack_108 = plVar9;
  FUN_109d87c1c(lVar8,uVar17,&uStack_100,1);
  if (lVar8 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(lVar8 + 0x18);
  }
  uStack_130 = 0;
  plVar19 = plVar5;
  FUN_109d8ae58(plVar5,uVar10,lVar8,&puStack_120,4,0,0,puVar14);
  plVar9 = plVar19 + 8;
  uVar11 = *(ulong *)*plVar19;
  FUN_109d5ab08(plVar9,uVar11,0xffffffff,0x3e);
  plVar19[8] = (long)plVar9;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return plVar19;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_109d8a798;
  uVar12 = uVar11;
  plStack_150 = plVar5;
  plStack_148 = plVar19;
  ppppuStack_140 = &ppppuStack_b0;
  func_0x000109d8d110();
  plVar19 = (long *)(*(long *)plVar9[8] + 0x108);
  FUN_109d956b4(plVar19,uVar11,uVar12);
  lVar8 = *plVar19;
  if ((uVar11 & 1) != 0) {
    *(long *)(lVar8 + 0x10) = lVar8;
  }
  plVar9 = (long *)plVar9[8];
  uStack_158 = 0;
  plVar19 = plVar9;
  lStack_160 = lVar4;
  FUN_109d945d4(plVar9,lVar8 + 8);
  lVar4 = *plVar9 + 0x198;
  plStack_168 = plVar19;
  FUN_109d981d0(lVar4,&plStack_168);
  plVar19 = *(long **)(lVar4 + 8);
  if (plVar19 == (long *)0x0) {
    plVar19 = (long *)0x20;
    __Znwm();
    FUN_109d94450();
    *(long **)(lVar4 + 8) = plVar19;
  }
  return plVar19;
}



/* Entry: 109d8a4b4; end: 109d8a683;  */

/* WARNING: Possible PIC construction at 0x000109d8a648: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109d8a64c) */

long * FUN_109d8a4b4(long *param_1,undefined8 param_2,undefined8 *param_3,long param_4,
                    undefined8 param_5,long param_6,int param_7)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined8 unaff_x19;
  undefined4 *puVar11;
  long *unaff_x20;
  long *plVar12;
  long unaff_x21;
  ulong unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  long *plStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_80;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar1 = &stack0xfffffffffffffff0;
  if (*(char *)((long)param_1 + 100) != '\x01') {
    if ((((param_3 == (undefined8 *)0x0) || (0x14 < *(byte *)(param_3 + 2))) || (param_4 == 0)) ||
       (0x14 < *(byte *)(param_4 + 0x10))) {
      puVar4 = (undefined8 *)0x80;
      __Znwm();
      *(uint *)((long)puVar4 + 0x54) = *(uint *)((long)puVar4 + 0x54) & 0x38000000 | 2;
      plVar12 = puVar4 + 8;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = plVar12;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = plVar12;
      lStack_58 = CONCAT62(lStack_58._2_6_,0x101);
      uVar7 = *param_3;
      FUN_109d31fa8(uVar7);
      puStack_80 = (undefined8 *)0x0;
      FUN_109d8cfe4(plVar12,uVar7,0x36,param_2,param_3,param_4,&lStack_78,0);
      uVar3 = *(uint *)(param_1 + 0xc);
      unaff_x22 = (ulong)uVar3;
      if ((param_6 != 0) || (param_6 = param_1[0xb], unaff_x21 = param_6, param_6 != 0)) {
        FUN_109d97c40(plVar12,3,param_6);
        unaff_x21 = param_6;
      }
      *(byte *)((long)puVar4 + 0x51) = *(byte *)((long)puVar4 + 0x51) | (byte)(uVar3 << 1);
      unaff_x30 = 0x109d8a64c;
      register0x00000008 = (BADSPACEBASE *)&puStack_80;
      unaff_x19 = param_5;
      unaff_x20 = param_1;
      unaff_x29 = puVar1;
    }
    else {
      plVar12 = (long *)param_1[9];
      (**(code **)(*plVar12 + 0xd0))(plVar12,param_2,param_3,param_4);
      if (plVar12 == (long *)0x0 || *(byte *)(plVar12 + 2) < 0x1c) {
        return plVar12;
      }
    }
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    (**(code **)(*(long *)param_1[10] + 0x10))
              ((long *)param_1[10],plVar12,param_5,param_1[6],param_1[7]);
    if (*(uint *)(param_1 + 1) != 0) {
      puVar11 = (undefined4 *)*param_1;
      puVar2 = puVar11 + (ulong)*(uint *)(param_1 + 1) * 4;
      do {
        FUN_109d97dec(plVar12,*puVar11,*(undefined8 *)(puVar11 + 2));
        puVar11 = puVar11 + 4;
      } while (puVar11 != puVar2);
    }
    return plVar12;
  }
  uVar10 = 0x55;
  if (param_7 != 0) {
    uVar10 = 0x56;
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = param_1;
  FUN_109d8a798(param_1,param_2);
  plVar6 = param_1;
  func_0x000109d8a248(param_1,0);
  uStack_60 = *param_3;
  lVar5 = *(long *)(*(long *)(param_1[6] + 0x38) + 0x28);
  puStack_80 = param_3;
  lStack_78 = param_4;
  plStack_70 = plVar12;
  plStack_68 = plVar6;
  FUN_109d87c1c(lVar5,uVar10,&uStack_60,1);
  if (lVar5 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(lVar5 + 0x18);
  }
  uStack_90 = 0;
  plVar12 = param_1;
  FUN_109d8ae58(param_1,uVar7,lVar5,&puStack_80,4,0,0,param_5);
  plVar6 = plVar12 + 8;
  uVar8 = *(ulong *)*plVar12;
  FUN_109d5ab08(plVar6,uVar8,0xffffffff,0x3e);
  plVar12[8] = (long)plVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return plVar12;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_109d8a798;
  uVar9 = uVar8;
  plStack_b0 = param_1;
  plStack_a8 = plVar12;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x000109d8d110();
  plVar12 = (long *)(*(long *)plVar6[8] + 0x108);
  FUN_109d956b4(plVar12,uVar8,uVar9);
  lVar5 = *plVar12;
  if ((uVar8 & 1) != 0) {
    *(long *)(lVar5 + 0x10) = lVar5;
  }
  plVar6 = (long *)plVar6[8];
  uStack_b8 = 0;
  plVar12 = plVar6;
  lStack_c0 = param_4;
  FUN_109d945d4(plVar6,lVar5 + 8);
  lVar5 = *plVar6 + 0x198;
  plStack_c8 = plVar12;
  FUN_109d981d0(lVar5,&plStack_c8);
  plVar12 = *(long **)(lVar5 + 8);
  if (plVar12 == (long *)0x0) {
    plVar12 = (long *)0x20;
    __Znwm();
    FUN_109d94450();
    *(long **)(lVar5 + 8) = plVar12;
  }
  return plVar12;
}



/* Entry: 109d8a684; end: 109d8a797;  */

undefined8 *
FUN_109d8a684(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6,ulong param_7)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_1;
  FUN_109d8a798(param_1,param_3);
  puVar1 = param_1;
  func_0x000109d8a248(param_1,param_7 & 0xffff);
  uStack_60 = *param_4;
  lVar2 = *(long *)(*(long *)(param_1[6] + 0x38) + 0x28);
  puStack_80 = param_4;
  uStack_78 = param_5;
  puStack_70 = puVar8;
  puStack_68 = puVar1;
  FUN_109d87c1c(lVar2,param_2,&uStack_60,1);
  if (lVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar2 + 0x18);
  }
  uStack_90 = 0;
  puVar8 = param_1;
  FUN_109d8ae58(param_1,uVar5,lVar2,&puStack_80,4,0,0,param_6);
  puVar1 = puVar8 + 8;
  uVar6 = *(ulong *)*puVar8;
  FUN_109d5ab08(puVar1,uVar6,0xffffffff,0x3e);
  puVar8[8] = puVar1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar8;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_109d8a798;
  uVar7 = uVar6;
  puStack_b0 = param_1;
  puStack_a8 = puVar8;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x000109d8d110();
  plVar3 = (long *)(*(long *)puVar1[8] + 0x108);
  FUN_109d956b4(plVar3,uVar6,uVar7);
  lVar2 = *plVar3;
  if ((uVar6 & 1) != 0) {
    *(long *)(lVar2 + 0x10) = lVar2;
  }
  plVar4 = (long *)puVar1[8];
  plVar3 = plVar4;
  uStack_c0 = param_5;
  uStack_b8 = param_7;
  FUN_109d945d4(plVar4,lVar2 + 8);
  lVar2 = *plVar4 + 0x198;
  plStack_c8 = plVar3;
  FUN_109d981d0(lVar2,&plStack_c8);
  puVar8 = *(undefined8 **)(lVar2 + 8);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x20;
    __Znwm();
    FUN_109d94450();
    *(undefined8 **)(lVar2 + 8) = puVar8;
  }
  return puVar8;
}



/* Entry: 109d8a798; end: 109d8a7ef;  */

long FUN_109d8a798(long param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plStack_38;
  
  uVar3 = param_2;
  func_0x000109d8d110();
  plVar1 = (long *)(**(long **)(param_1 + 0x40) + 0x108);
  FUN_109d956b4(plVar1,param_2,uVar3);
  lVar4 = *plVar1;
  if ((param_2 & 1) != 0) {
    *(long *)(lVar4 + 0x10) = lVar4;
  }
  plVar2 = *(long **)(param_1 + 0x40);
  plVar1 = plVar2;
  FUN_109d945d4(plVar2,lVar4 + 8);
  lVar4 = *plVar2 + 0x198;
  plStack_38 = plVar1;
  FUN_109d981d0(lVar4,&plStack_38);
  lVar5 = *(long *)(lVar4 + 8);
  if (lVar5 == 0) {
    lVar5 = 0x20;
    __Znwm();
    FUN_109d94450();
    *(long *)(lVar4 + 8) = lVar5;
  }
  return lVar5;
}



/* Entry: 109d8a7f0; end: 109d8a91b;  */

void FUN_109d8a7f0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_68 [32];
  undefined2 uStack_48;
  
  plVar2 = *(long **)(param_1 + 0x48);
  (**(code **)(*plVar2 + 0x48))();
  if (plVar2 != (long *)0x0) {
    return;
  }
  uStack_48 = 0x101;
  FUN_109d38cac(param_2,param_3,param_4,auStack_68,0,0);
  lVar3 = param_2;
  if (param_6 == 0) goto LAB_109d8a8c4;
  if ((*(long *)(param_6 + 0x30) == 0) && ((*(byte *)(param_6 + 0x17) >> 5 & 1) == 0)) {
    lVar4 = 0;
LAB_109d8a898:
    param_6 = 0;
  }
  else {
    lVar4 = param_6;
    func_0x000109d97b44(param_6,2);
    if ((*(long *)(param_6 + 0x30) == 0) && ((*(byte *)(param_6 + 0x17) >> 5 & 1) == 0))
    goto LAB_109d8a898;
    func_0x000109d97b44(param_6,0xf);
  }
  lVar3 = param_1;
  FUN_109d8a91c(param_1,param_2,lVar4,param_6);
LAB_109d8a8c4:
  lVar4 = lVar3;
  FUN_109d32e0c();
  if ((int)lVar4 != 0) {
    iVar1 = *(int *)(param_1 + 0x60);
    if (*(long *)(param_1 + 0x58) != 0) {
      FUN_109d97c40(lVar3,3);
    }
    *(byte *)(lVar3 + 0x11) = *(byte *)(lVar3 + 0x11) | (byte)(iVar1 << 1);
  }
  FUN_109d8a964(param_1,lVar3,param_5);
  return;
}



/* Entry: 109d8a91c; end: 109d8a963;  */

undefined8 FUN_109d8a91c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  if (param_3 != 0) {
    FUN_109d97c40(param_2,2);
  }
  if (param_4 != 0) {
    FUN_109d97c40(param_2,0xf,param_4);
  }
  return param_2;
}



/* Entry: 109d8a964; end: 109d8a9cf;  */

undefined8 FUN_109d8a964(undefined8 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  (**(code **)(*(long *)param_1[10] + 0x10))();
  if (*(uint *)(param_1 + 1) != 0) {
    puVar2 = (undefined4 *)*param_1;
    puVar1 = puVar2 + (ulong)*(uint *)(param_1 + 1) * 4;
    do {
      FUN_109d97dec(param_2,*puVar2,*(undefined8 *)(puVar2 + 2));
      puVar2 = puVar2 + 4;
    } while (puVar2 != puVar1);
  }
  return param_2;
}



/* Entry: 109d8a9d0; end: 109d8a9db;  */

void FUN_109d8a9d0(void)

{
  return;
}



/* Entry: 109d8a9dc; end: 109d8aa33;  */

void FUN_109d8a9dc(undefined8 param_1,ulong *param_2,undefined8 param_3,long param_4,ulong *param_5)

{
  undefined4 uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  
  if (param_4 != 0) {
    FUN_109d5d59c(param_4 + 0x28,param_2);
    uVar4 = *param_5;
    puVar2 = param_2 + 3;
    *puVar2 = uVar4;
    param_2[4] = (ulong)param_5;
    *(ulong **)(uVar4 + 8) = puVar2;
    *param_5 = (ulong)puVar2;
  }
  FUN_109da2858(param_2,param_3);
  if ((param_2 == (ulong *)0x0) || ((char)param_2[2] != '\0')) {
    return;
  }
  if ((*(byte *)((long)param_2 + 0x17) >> 4 & 1) != 0) {
    puVar2 = param_2;
    func_0x000109da271c();
    puVar3 = puVar2 + 2;
    if ((4 < *puVar2) && ((int)*puVar3 == 0x6d766c6c && *(char *)((long)puVar2 + 0x14) == '.')) {
      *(uint *)(param_2 + 4) = (uint)param_2[4] | 0x2000;
      FUN_109d85438();
      uVar1 = SUB84(puVar3,0);
      goto LAB_109d85600;
    }
  }
  uVar1 = 0;
  *(uint *)(param_2 + 4) = (uint)param_2[4] & 0xffffdfff;
LAB_109d85600:
  *(undefined4 *)((long)param_2 + 0x24) = uVar1;
  return;
}



/* Entry: 109d8aa34; end: 109d8ac5b;  */

void FUN_109d8aa34(void)

{
  return;
}



/* Entry: 109d8ac5c; end: 109d8acb3;  */

void FUN_109d8ac5c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  if ((param_2 != 0) && (*(byte *)(param_2 + 0x10) < 0x15)) {
    while ((param_4 != 0 && (FUN_109d66314(), param_2 != 0))) {
      param_4 = param_4 + -1;
    }
  }
  return;
}



/* Entry: 109d8acb4; end: 109d8ae57;  */

/* WARNING: Possible PIC construction at 0x000109d60d10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109d60d14) */
/* WARNING: Type propagation algorithm not settling */

mach_header *
FUN_109d8acb4(undefined8 param_1,mach_header *param_2,mach_header *param_3,mach_header *param_4,
             mach_header *param_5,undefined8 param_6,mach_header *param_7)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  byte bVar5;
  dword dVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  bool bVar9;
  int iVar10;
  mach_header *pmVar11;
  mach_header *pmVar12;
  mach_header *pmVar13;
  ulong uVar14;
  undefined1 auVar15 [8];
  long *plVar16;
  mach_header *pmVar17;
  undefined8 *puVar18;
  mach_header *pmVar19;
  long lVar20;
  mach_header *pmVar21;
  ulong uVar22;
  mach_header *pmVar23;
  mach_header *pmVar24;
  mach_header *pmVar25;
  uint uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  dword *pdVar34;
  ulong *puVar35;
  mach_header *extraout_x8;
  dword *pdVar36;
  long lVar37;
  uint uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  undefined8 *puVar42;
  long lVar43;
  byte bVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  long lVar48;
  undefined1 auVar49 [8];
  mach_header *pmVar50;
  undefined8 uVar51;
  mach_header *pmVar52;
  long *plVar53;
  undefined8 uVar54;
  mach_header *unaff_x20;
  mach_header *pmVar55;
  mach_header *unaff_x21;
  int iVar56;
  mach_header *pmVar57;
  mach_header *unaff_x22;
  uint uVar58;
  mach_header *pmVar59;
  mach_header *unaff_x23;
  mach_header *pmVar60;
  mach_header *unaff_x24;
  mach_header *unaff_x25;
  undefined8 unaff_x26;
  undefined8 *******pppppppuVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  code *pcVar64;
  mach_header *pmVar65;
  undefined8 uStack_448;
  ulong uStack_440;
  mach_header mStack_438;
  long lStack_418;
  undefined8 uStack_410;
  mach_header *pmStack_408;
  mach_header *pmStack_400;
  mach_header *pmStack_3f8;
  mach_header *pmStack_3f0;
  mach_header *pmStack_3e8;
  mach_header *pmStack_3e0;
  mach_header *pmStack_3d8;
  undefined8 *******pppppppuStack_3d0;
  mach_header *pmStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  mach_header *pmStack_3a8;
  undefined8 uStack_3a0;
  undefined1 *puStack_398;
  mach_header *pmStack_390;
  undefined1 auStack_388 [8];
  undefined1 auStack_380 [16];
  undefined1 *puStack_370;
  undefined8 *******pppppppuStack_368;
  mach_header *pmStack_348;
  mach_header *pmStack_340;
  mach_header *pmStack_338;
  undefined8 uStack_330;
  mach_header *pmStack_328;
  mach_header *pmStack_320;
  undefined8 uStack_318;
  mach_header *pmStack_310;
  code *pcStack_308;
  mach_header *pmStack_300;
  undefined8 uStack_2f8;
  mach_header **ppmStack_2f0;
  code *pcStack_2e8;
  mach_header *pmStack_2c8;
  mach_header *pmStack_2c0;
  mach_header *pmStack_2b8;
  mach_header *pmStack_2b0;
  mach_header *pmStack_2a8;
  mach_header *pmStack_2a0;
  mach_header *pmStack_298;
  undefined8 *******pppppppuStack_290;
  mach_header *pmStack_288;
  undefined1 auStack_280 [8];
  undefined1 auStack_278 [8];
  undefined *puStack_270;
  mach_header amStack_268 [4];
  undefined1 auStack_1e8 [8];
  mach_header mStack_1e0;
  undefined8 *******pppppppuStack_180;
  mach_header *pmStack_178;
  undefined1 auStack_170 [8];
  mach_header *pmStack_168;
  ulong uStack_160;
  mach_header amStack_158 [8];
  long lStack_58;
  
  if ((param_2 == (mach_header *)0x0) ||
     ((0x14 < (byte)param_2->ncmds || param_3 == (mach_header *)0x0) || 0x14 < (byte)param_3->ncmds)
     ) {
    return (mach_header *)0x0;
  }
  puVar18 = (undefined8 *)auStack_170;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pmVar52 = param_2;
  pmVar23 = param_4;
  pmVar25 = param_5;
  pmVar11 = param_3;
  if (param_5 != (mach_header *)0x0) {
    pmVar11 = *(mach_header **)param_2;
    cVar2 = (char)pmVar11->cpusubtype;
    if (pmVar11 == (mach_header *)0x0 || cVar2 != '\x10') {
      uVar58 = pmVar11[1].magic;
    }
    else {
      uVar58 = pmVar11->filetype;
    }
    unaff_x25 = (mach_header *)(ulong)uVar58;
    unaff_x24 = amStack_158;
    uStack_160 = 0x2000000000;
    pmStack_168 = unaff_x24;
    if (uVar58 == 0) {
      pmVar23 = (mach_header *)0x0;
    }
    else {
      unaff_x22 = (mach_header *)0x0;
      unaff_x23 = (mach_header *)((long)&param_5[-1].reserved + 3);
      do {
        pmVar52 = param_2;
        FUN_109d66314(param_2,unaff_x22);
        if (pmVar52 == (mach_header *)0x0) {
          pmVar11 = (mach_header *)0x0;
          param_3 = (mach_header *)0x0;
          goto LAB_109d60268;
        }
        if ((dword)unaff_x22 == param_4->magic) {
          pmVar23 = (mach_header *)&param_4->cputype;
          param_5 = unaff_x23;
          FUN_109d60160(pmVar52,param_3);
        }
        FUN_109d31fec(&pmStack_168,pmVar52);
        uVar26 = (dword)unaff_x22 + 1;
        unaff_x22 = (mach_header *)(ulong)uVar26;
      } while (uVar58 != uVar26);
      pmVar11 = *(mach_header **)param_2;
      cVar2 = (char)pmVar11->cpusubtype;
      pmVar23 = (mach_header *)(uStack_160 & 0xffffffff);
    }
    param_3 = pmStack_168;
    if (cVar2 == '\x10') {
      FUN_109d68680();
    }
    else {
      FUN_109d67f1c();
    }
LAB_109d60268:
    pmVar52 = pmStack_168;
    unaff_x20 = param_4;
    unaff_x21 = param_2;
    if (pmStack_168 != unaff_x24) {
      _free();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pmVar11;
  }
  ___stack_chk_fail();
  if (pmStack_168 != unaff_x24) {
    _free();
  }
  pmVar21 = pmVar52;
  __Unwind_Resume();
  puVar42 = (undefined8 *)auStack_280;
  pppppppuStack_180 = (undefined8 *******)&stack0xfffffffffffffff0;
  pmStack_178 = (mach_header *)FUN_109d602d8;
  mStack_1e0._24_8_ = *(long *)PTR____stack_chk_guard_11034bdc0;
  pmVar11 = *(mach_header **)param_3;
  uVar58 = pmVar11->cpusubtype & 0xff;
  auVar15 = (undefined1  [8])pmVar21;
  pmVar50 = unaff_x23;
  if ((pmVar11->cpusubtype & 0xfe) == 0x12 && uVar58 != 0x13) {
    bVar44 = (byte)param_3->ncmds;
LAB_109d60354:
    if (bVar44 == 0x11) {
      if ((int)pmVar21 != 0xc) goto LAB_109d60430;
      pmVar21 = *(mach_header **)pmVar11;
      pmVar11 = (mach_header *)auStack_1e8;
      FUN_109d32470(&mStack_1e0,param_3 + 1);
      FUN_109d324a0(auStack_1e8);
      unaff_x22 = (mach_header *)auStack_278;
      if ((undefined *)mStack_1e0._0_8_ == &DAT_10e05ae6c) {
        puStack_270 = &DAT_10e05ae6c;
        amStack_268[0].magic = mStack_1e0.cpusubtype;
        amStack_268[0].cputype = mStack_1e0.filetype;
        mStack_1e0._0_8_ = &UNK_10e05aebc;
        mStack_1e0.cpusubtype = 0;
        mStack_1e0.filetype = 0;
      }
      else {
        puStack_270 = &UNK_10e05aebc;
        func_0x000109de7c14(&puStack_270,&mStack_1e0);
      }
      param_3 = (mach_header *)auStack_278;
      auVar49 = (undefined1  [8])pmVar21;
      FUN_109d668f4(pmVar21);
      FUN_109d32234(&puStack_270);
      auVar15 = (undefined1  [8])&mStack_1e0;
      FUN_109d32234();
      goto LAB_109d60510;
    }
    if (uVar58 != 0x12) {
LAB_109d60430:
      auVar49 = (undefined1  [8])(mach_header *)0x0;
      goto LAB_109d60510;
    }
    pmVar50 = (mach_header *)**(undefined8 **)pmVar11;
    pmVar19 = param_3;
    FUN_109d65ff0(param_3,0);
    if (pmVar19 == (mach_header *)0x0) {
LAB_109d60438:
      unaff_x22 = amStack_268;
      puStack_270 = (undefined *)0x1000000000;
      unaff_x24 = (mach_header *)(ulong)pmVar11[1].magic;
      auStack_278 = (undefined1  [8])unaff_x22;
      if (pmVar11[1].magic == 0) {
        param_3 = (mach_header *)0x0;
      }
      else {
        pmVar11 = (mach_header *)0x0;
        do {
          pdVar36 = &pmVar50[0x3c].flags;
          FUN_109d66880(pdVar36,pmVar11,0);
          pmVar23 = (mach_header *)0x0;
          pmVar52 = param_3;
          func_0x000109d69980(param_3,pdVar36);
          pmVar19 = pmVar21;
          FUN_109d602d8(pmVar21,pmVar52);
          if (pmVar19 == (mach_header *)0x0) {
            auVar49 = (undefined1  [8])0x0;
            param_3 = (mach_header *)0x0;
            goto LAB_109d60500;
          }
          FUN_109d31fec(auStack_278);
          pmVar11 = (mach_header *)((long)&pmVar11->magic + 1);
        } while (unaff_x24 != pmVar11);
        param_3 = (mach_header *)((ulong)puStack_270 & 0xffffffff);
      }
      auVar49 = auStack_278;
      FUN_109d67790(auStack_278);
LAB_109d60500:
      auVar15 = auStack_278;
      if (auStack_278 != (undefined1  [8])unaff_x22) {
        _free();
      }
      goto LAB_109d60510;
    }
    FUN_109d602d8();
    if (auVar15 == (undefined1  [8])0x0) goto LAB_109d60438;
    uVar22 = 0x100000000;
    if ((char)pmVar11->cpusubtype != '\x13') {
      uVar22 = 0;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == mStack_1e0._24_8_) {
      pmVar11 = (mach_header *)(uVar22 | pmVar11[1].magic);
      pppppppuVar61 = pppppppuStack_180;
      pmVar50 = pmStack_178;
      goto code_r0x000109d66c68;
    }
  }
  else {
    bVar44 = (byte)param_3->ncmds;
    if (((int)pmVar21 != 0xc) || (auVar49 = (undefined1  [8])param_3, 1 < bVar44 - 0xb))
    goto LAB_109d60354;
LAB_109d60510:
    pmVar19 = param_3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == mStack_1e0._24_8_) {
      return (mach_header *)auVar49;
    }
  }
  ___stack_chk_fail();
  pmVar52 = pmVar23;
  if (auStack_278 != (undefined1  [8])unaff_x22) {
    _free();
    pmVar52 = pmVar23;
  }
  pmVar12 = (mach_header *)auVar15;
  __Unwind_Resume();
  puVar18 = &uStack_3c0;
  pmStack_2c8 = unaff_x25;
  pmStack_2c0 = unaff_x24;
  pmStack_2b8 = pmVar50;
  pmStack_2b0 = unaff_x22;
  pmStack_2a8 = pmVar11;
  pmStack_2a0 = pmVar21;
  pmStack_298 = (mach_header *)auVar15;
  pppppppuStack_290 = &pppppppuStack_180;
  pmStack_288 = (mach_header *)FUN_109d6059c;
  ppmStack_2f0 = *(mach_header ***)PTR____stack_chk_guard_11034bdc0;
  pmVar21 = *(mach_header **)pmVar19;
  pmVar24 = (mach_header *)0x0;
  param_5 = (mach_header *)0x0;
  unaff_x21 = pmVar12;
  FUN_109d6b068();
  if ((unaff_x21 != (mach_header *)0x0) &&
     ((pmVar23 = pmVar52, unaff_x21 == pmVar19 || (pmVar23 = pmVar19, unaff_x21 == pmVar52))))
  goto LAB_109d61328;
  bVar44 = (byte)pmVar19->ncmds;
  pmVar57 = (mach_header *)(ulong)bVar44;
  if ((bVar44 == 0xc) || (cVar2 = (char)pmVar52->ncmds, cVar2 == '\f')) {
    unaff_x21 = *(mach_header **)pmVar19;
LAB_109d60618:
    puVar42 = (undefined8 *)auStack_280;
    pmVar23 = pmStack_298;
    pmVar11 = pmStack_2a0;
    pppppppuVar61 = pppppppuStack_290;
    pcVar64 = (code *)pmStack_288;
    if (*(mach_header ***)PTR____stack_chk_guard_11034bdc0 == ppmStack_2f0)
    goto code_r0x000109d67e38;
    goto LAB_109d6197c;
  }
  unaff_x21 = *(mach_header **)pmVar19;
  uVar58 = (uint)pmVar12;
  if ((unaff_x21->cpusubtype & 0xfe) == 0x12 && (unaff_x21->cpusubtype & 0xff) != 0x13) {
LAB_109d60710:
    pmVar23 = pmStack_298;
    pmVar11 = pmStack_2a0;
    pmVar55 = pmStack_2a8;
    pmVar17 = pmStack_2b0;
    pmVar59 = pmStack_2b8;
    pmVar60 = pmStack_2c0;
    pppppppuVar61 = pppppppuStack_290;
    pmVar65 = pmStack_288;
    if (cVar2 != '\x10') {
      if (((bVar44 != 0x10) || (0x1e < uVar58)) ||
         ((1 << (ulong)(uVar58 & 0x1f) & 0x70066000U) == 0)) goto LAB_109d60ef4;
      pmVar13 = pmVar52;
      if (*(mach_header ***)PTR____stack_chk_guard_11034bdc0 == ppmStack_2f0)
      goto code_r0x000109d69a44;
      goto LAB_109d6197c;
    }
    if ((int)uVar58 < 0x16) {
      if ((int)uVar58 < 0x13) {
        if ((uVar58 == 0xd) || (uVar58 == 0xf)) {
          uVar26 = pmVar52[1].magic;
          if (uVar26 < 0x41) {
            lVar43._0_4_ = pmVar52->flags;
            lVar43._4_4_ = pmVar52->reserved;
            pmVar23 = pmVar19;
            if (lVar43 != 0) goto LAB_109d60ef4;
          }
          else {
            unaff_x21 = (mach_header *)&pmVar52->flags;
            func_0x000109df08dc();
            pmVar23 = pmVar19;
            if ((uint)unaff_x21 != uVar26) goto LAB_109d60ef4;
          }
        }
        else {
          if (uVar58 != 0x11) goto LAB_109d60ef4;
          uVar26 = pmVar52[1].magic;
          if (uVar26 < 0x41) {
            lVar37._0_4_ = pmVar52->flags;
            lVar37._4_4_ = pmVar52->reserved;
            pmVar23 = pmVar52;
            if (lVar37 != 0) goto LAB_109d60850;
          }
          else {
            unaff_x21 = (mach_header *)&pmVar52->flags;
            func_0x000109df08dc();
            pmVar23 = pmVar52;
            if (((uint)unaff_x21 != uVar26) && (pmVar23 = pmVar19, (uint)unaff_x21 != uVar26 - 1))
            goto LAB_109d60ef4;
          }
        }
      }
      else {
        if (1 < uVar58 - 0x13) goto LAB_109d60ef4;
        uVar26 = pmVar52[1].magic;
        pmVar57 = (mach_header *)(ulong)uVar26;
        if (uVar26 < 0x41) {
          lVar37._0_4_ = pmVar52->flags;
          lVar37._4_4_ = pmVar52->reserved;
          if (lVar37 == 0) goto LAB_109d60c9c;
LAB_109d60850:
          pmVar23 = pmVar19;
          if (lVar37 != 1) goto LAB_109d60ef4;
        }
        else {
          unaff_x21 = (mach_header *)&pmVar52->flags;
          func_0x000109df08dc();
          pmVar23 = pmVar19;
          if ((int)unaff_x21 != uVar26 - 1) goto LAB_109d6094c;
        }
      }
      goto LAB_109d61328;
    }
    if ((int)uVar58 < 0x1c) {
      if (1 < uVar58 - 0x16) {
        if (((uVar58 == 0x1b) && (bVar44 == 5)) && (*(short *)((long)&pmVar19->ncmds + 2) == 0x27))
        {
          if (*(mach_header ***)PTR____stack_chk_guard_11034bdc0 == ppmStack_2f0) {
            pmVar12 = (mach_header *)0x1a;
            puVar42 = (undefined8 *)auStack_280;
            pmVar13 = pmVar19;
            pmVar19 = pmVar52;
            goto code_r0x000109d69a44;
          }
          goto LAB_109d6197c;
        }
        goto LAB_109d60ef4;
      }
      uVar26 = pmVar52[1].magic;
      pmVar57 = (mach_header *)(ulong)uVar26;
      if (uVar26 < 0x41) {
        lVar48._0_4_ = pmVar52->flags;
        lVar48._4_4_ = pmVar52->reserved;
        if (lVar48 != 0) {
          if (lVar48 == 1) goto LAB_109d60910;
          goto LAB_109d60ef4;
        }
      }
      else {
        unaff_x21 = (mach_header *)&pmVar52->flags;
        func_0x000109df08dc();
        if ((int)unaff_x21 == uVar26 - 1) {
LAB_109d60910:
          unaff_x21 = *(mach_header **)pmVar52;
          pmVar19 = pmVar57;
          goto code_r0x000109d60914;
        }
LAB_109d6094c:
        if ((int)unaff_x21 != (int)pmVar57) goto LAB_109d60ef4;
      }
LAB_109d60c9c:
      unaff_x21 = *(mach_header **)pmVar52;
      goto LAB_109d60618;
    }
    if (uVar58 != 0x1c) {
      if (uVar58 == 0x1d) {
        uVar26 = pmVar52[1].magic;
        if (uVar26 < 0x41) {
          lVar28._0_4_ = pmVar52->flags;
          lVar28._4_4_ = pmVar52->reserved;
          pmVar23 = pmVar19;
          if (lVar28 != 0) {
LAB_109d609d8:
            unaff_x21 = (mach_header *)&pmVar52->flags;
            FUN_109d2fc60();
            pmVar23 = pmVar52;
            if (((ulong)unaff_x21 & 1) == 0) goto LAB_109d60ef4;
          }
        }
        else {
          unaff_x21 = (mach_header *)&pmVar52->flags;
          func_0x000109df08dc();
          pmVar23 = pmVar19;
          if ((uint)unaff_x21 != uVar26) goto LAB_109d609d8;
        }
        goto LAB_109d61328;
      }
      if (uVar58 != 0x1e) goto LAB_109d60ef4;
      uVar26 = pmVar52[1].magic;
      pmVar50 = (mach_header *)(ulong)uVar26;
      if (uVar26 < 0x41) {
        lVar27._0_4_ = pmVar52->flags;
        lVar27._4_4_ = pmVar52->reserved;
        pmVar23 = pmVar19;
        if (lVar27 != 0) {
LAB_109d60a18:
          if ((bVar44 != 5) || (1 < *(ushort *)((long)&pmVar19->ncmds + 2) - 0x35))
          goto LAB_109d60ef4;
          unaff_x21 = (mach_header *)(ulong)(ushort)pmVar19->flags;
          FUN_109d8d100();
          pmVar55 = pmStack_2b8;
          pmVar11 = pmStack_2c0;
          pmVar23 = pmStack_2c8;
          pmVar21 = *(mach_header **)(pmVar19 + -((ulong)pmVar19->sizeofcmds & 0x7ffffff));
          pmVar24 = *(mach_header **)(pmVar19 + -((ulong)pmVar19->sizeofcmds & 0x7ffffff) + 1);
          if (*(mach_header ***)PTR____stack_chk_guard_11034bdc0 != ppmStack_2f0)
          goto LAB_109d6197c;
          lVar37 = 0;
          pmStack_328 = pmVar24;
          pmStack_320 = pmVar21;
          uStack_318 = unaff_x21;
          if (0xf < (uint)unaff_x21) {
            pmStack_2b8 = *(mach_header **)PTR____stack_chk_guard_11034bdc0;
            pmVar25 = unaff_x21;
            pmVar23 = pmVar21;
            pmVar52 = pmVar24;
            FUN_109d61a9c();
            if (pmVar25 == (mach_header *)0x0) {
              puVar18 = *(undefined8 **)pmVar21;
              lVar37 = *(long *)*puVar18;
              pmVar23 = (mach_header *)(lVar37 + 0x750);
              pmStack_2c8 = pmVar21;
              pmStack_2c0 = pmVar24;
              if ((*(uint *)(puVar18 + 1) & 0xfe) == 0x12) {
                uVar22 = 0x100000000;
                if (((*(uint *)(puVar18 + 1) ^ 0xffffffff) & 0x13) != 0) {
                  uVar22 = 0;
                }
                FUN_109da004c(pmVar23,uVar22 | *(uint *)(puVar18 + 4));
                lVar37 = *(long *)**(undefined8 **)pmVar21;
              }
              uStack_2f8._2_2_ = (short)unaff_x21;
              uStack_2f8._0_2_ = 0x35;
              ppmStack_2f0 = &pmStack_2c8;
              pcStack_2e8 = (code *)0x2;
              pmVar25 = (mach_header *)(lVar37 + 0x5d8);
              pmVar52 = (mach_header *)&uStack_2f8;
              FUN_109d6aa18();
            }
            if ((mach_header *)*(long *)PTR____stack_chk_guard_11034bdc0 != pmStack_2b8) {
              ___stack_chk_fail();
              pmStack_340 = pmVar11;
              pmStack_338 = pmVar55;
              uStack_330 = 0;
              pcStack_308 = FUN_109d665ac;
              lVar37 = *(long *)pmVar25;
              if (lVar37 != 0 && (*(uint *)(lVar37 + 8) & 0xfe) == 0x12) {
                pmVar11 = pmVar52;
                pmStack_310 = (mach_header *)&pppppppuStack_290;
                (*(code *)pmVar23)(pmVar52,pmVar25);
                if (((ulong)pmVar11 & 1) != 0) {
                  return (mach_header *)0x1;
                }
                if ((((char)pmVar25->ncmds != '\r') && (*(char *)(*(long *)pmVar25 + 8) != '\x13'))
                   && (iVar10 = *(int *)(lVar37 + 0x20), iVar10 != 0)) {
                  iVar56 = 0;
                  do {
                    pmVar11 = pmVar25;
                    FUN_109d66314(pmVar25,iVar56);
                    if ((pmVar11 != (mach_header *)0x0) &&
                       (pmVar50 = pmVar52, (*(code *)pmVar23)(pmVar52,pmVar11),
                       ((ulong)pmVar50 & 1) != 0)) {
                      return (mach_header *)0x1;
                    }
                    iVar56 = iVar56 + 1;
                  } while (iVar10 != iVar56);
                }
              }
              return (mach_header *)0x0;
            }
            return pmVar25;
          }
          pmStack_2b8 = *(mach_header **)PTR____stack_chk_guard_11034bdc0;
          pmVar50 = unaff_x21;
          pmVar52 = pmVar21;
          pmVar19 = pmVar24;
          FUN_109d61a9c();
          if (pmVar50 == (mach_header *)0x0) {
            puVar18 = *(undefined8 **)pmVar21;
            lVar43 = *(long *)*puVar18;
            pmVar52 = (mach_header *)(lVar43 + 0x750);
            pmStack_2c8 = pmVar21;
            pmStack_2c0 = pmVar24;
            if ((*(uint *)(puVar18 + 1) & 0xfe) == 0x12) {
              uVar22 = 0x100000000;
              if (((*(uint *)(puVar18 + 1) ^ 0xffffffff) & 0x13) != 0) {
                uVar22 = 0;
              }
              FUN_109da004c(pmVar52,uVar22 | *(uint *)(puVar18 + 4));
              lVar43 = *(long *)**(undefined8 **)pmVar21;
            }
            uStack_2f8._2_2_ = (short)unaff_x21;
            uStack_2f8._0_2_ = 0x36;
            ppmStack_2f0 = &pmStack_2c8;
            pcStack_2e8 = (code *)0x2;
            pmVar50 = (mach_header *)(lVar43 + 0x5d8);
            pmVar19 = (mach_header *)&uStack_2f8;
            FUN_109d6aa18();
          }
          if ((mach_header *)*(long *)PTR____stack_chk_guard_11034bdc0 == pmStack_2b8) {
            return pmVar50;
          }
          ___stack_chk_fail();
          pmStack_348 = pmVar23;
          pmStack_340 = pmVar11;
          pmStack_338 = pmVar55;
          uStack_330 = 0;
          pcStack_308 = FUN_109d6ac24;
          puVar18 = *(undefined8 **)pmVar52;
          if ((*(uint *)(puVar18 + 1) & 0xfe) == 0x12) {
            puVar18 = *(undefined8 **)puVar18[2];
          }
          pmVar23 = pmVar50;
          pmStack_310 = (mach_header *)&pppppppuStack_290;
          FUN_109d62b1c(pmVar50,pmVar52,pmVar25,param_6,pmVar19,lVar37);
          if (pmVar23 != (mach_header *)0x0) {
            return pmVar23;
          }
          pmVar23 = pmVar50;
          if (lVar37 != 0) {
            lVar43 = lVar37 * 8;
            do {
              lVar43 = lVar43 + -8;
              if (lVar43 == 0) break;
              func_0x000109d8bf3c();
            } while (pmVar23 != (mach_header *)0x0);
          }
          if (puVar18[3] == 0) {
            pmVar23 = (mach_header *)*puVar18;
            func_0x000109da0270(pmVar23,*(uint *)(puVar18 + 1) >> 8);
          }
          else {
            func_0x000109da017c();
          }
          lVar43 = *(long *)pmVar52;
          uStack_3c0 = (mach_header *)CONCAT44((int)pmVar25,(undefined4)uStack_3c0);
          if ((lVar43 == 0) || ((*(uint *)(lVar43 + 8) & 0xfe) != 0x12)) {
            uVar58 = 0;
            if (lVar37 != 0) {
              uVar22 = 0;
              lVar43 = lVar37 << 3;
              pmVar25 = pmVar19;
              do {
                lVar48 = **(long **)pmVar25;
                if (lVar48 != 0 && (*(uint *)(lVar48 + 8) & 0xfe) == 0x12) {
                  uVar22 = (ulong)*(uint *)(lVar48 + 0x20);
                  uVar58 = (uint)(((*(uint *)(lVar48 + 8) ^ 0xffffffff) & 0x13) == 0);
                }
                pmVar25 = (mach_header *)&pmVar25->cpusubtype;
                lVar43 = lVar43 + -8;
              } while (lVar43 != 0);
              goto LAB_109d6ad90;
            }
          }
          else {
            uVar22 = (ulong)*(uint *)(lVar43 + 0x20);
            uVar58 = (uint)(((*(uint *)(lVar43 + 8) ^ 0xffffffff) & 0x13) == 0);
LAB_109d6ad90:
            if ((int)uVar22 != 0) {
              FUN_109da004c(pmVar23,uVar22 | (ulong)uVar58 << 0x20);
              bVar9 = false;
              goto LAB_109d6adbc;
            }
          }
          uVar22 = 0;
          bVar9 = true;
LAB_109d6adbc:
          if (pmVar23 == param_7) {
            pmVar25 = (mach_header *)0x0;
          }
          else {
            auStack_380._8_8_ = 0;
            puStack_370 = (undefined1 *)0x0;
            pppppppuStack_368 = (undefined8 *******)0x0;
            uVar14 = lVar37 + 1;
            if (lVar37 != -1) {
              if (uVar14 >> 0x3d != 0) {
                FUN_109d36b10();
                    /* WARNING: Does not return */
                pcVar64 = (code *)SoftwareBreakpoint(1,0x109d6af4c);
                (*pcVar64)();
              }
              puVar7 = auStack_380 + 8;
              FUN_109d36b24();
              pppppppuStack_3d0 = (undefined8 *******)(puVar7 + uVar14 * 8);
              lVar43 = (long)puVar7 - ((long)puStack_370 - auStack_380._8_8_);
              pmStack_3c8 = pmVar23;
              _memcpy(lVar43);
              pmVar23 = pmStack_3c8;
              pppppppuStack_368 = pppppppuStack_3d0;
              bVar1 = auStack_380._8_8_ != 0;
              auStack_380._8_8_ = lVar43;
              puStack_370 = puVar7;
              if (bVar1) {
                __ZdlPv();
              }
            }
            FUN_109d6af74(auStack_380 + 8,pmVar52);
            auStack_380._0_8_ = (ulong)pmVar50 | 4;
            plVar53 = (long *)(uVar22 | (ulong)uVar58 << 0x20);
            auStack_388 = (undefined1  [8])pmVar19;
            while (pmVar25 = uStack_3b8,
                  auStack_388 != (undefined1  [8])(&pmVar19->magic + lVar37 * 2)) {
              plVar16 = *(long **)auStack_388;
              if ((auStack_380[0] >> 2 & 1) == 0) {
                if ((*(uint *)(*plVar16 + 8) & 0xfe) == 0x12) {
                  FUN_109d65ff0(plVar16,0);
                }
              }
              else if ((!bVar9) && ((*(uint *)(*plVar16 + 8) & 0xfe) != 0x12)) {
                plVar16 = plVar53;
                FUN_109d66c68(plVar53);
              }
              FUN_109d6af74(auStack_380 + 8,plVar16);
              FUN_109d63a40(auStack_388);
            }
            bVar44 = (char)param_6 * '\x02' + 2;
            if (((uint)((ulong)param_6 >> 0x20) & (uint)((uint)param_6 < 0x3f)) == 0) {
              bVar44 = 0;
            }
            pmStack_3a8 = (mach_header *)((long)puStack_370 - auStack_380._8_8_ >> 3);
            uStack_3b8._4_4_ = SUB84(pmVar25,4);
            uStack_3b8._0_4_ = (uint)CONCAT11(bVar44 | (byte)((ulong)uStack_3c0 >> 0x20),0x22);
            uStack_3b0 = auStack_380._8_8_;
            uStack_3a0 = 0;
            puStack_398 = (undefined1 *)0x0;
            pmVar25 = (mach_header *)(*(long *)**(undefined8 **)pmVar52 + 0x5d8);
            pmStack_390 = pmVar50;
            FUN_109d6aa18(pmVar25,pmVar23,&uStack_3b8);
            if (auStack_380._8_8_ != 0) {
              puStack_370 = (undefined1 *)auStack_380._8_8_;
              __ZdlPv();
            }
          }
          return pmVar25;
        }
      }
      else {
        unaff_x21 = (mach_header *)&pmVar52->flags;
        func_0x000109df08dc();
        pmVar23 = pmVar19;
        if ((uint)unaff_x21 != uVar26) goto LAB_109d60a18;
      }
      goto LAB_109d61328;
    }
    uVar26 = pmVar52[1].magic;
    if (0x40 < uVar26) {
      unaff_x21 = (mach_header *)&pmVar52->flags;
      func_0x000109df08dc();
      pmVar23 = pmVar52;
      if ((uint)unaff_x21 != uVar26) goto LAB_109d60a98;
      goto LAB_109d61328;
    }
    lVar29._0_4_ = pmVar52->flags;
    lVar29._4_4_ = pmVar52->reserved;
    pmVar23 = pmVar52;
    if (lVar29 == 0) goto LAB_109d61328;
LAB_109d60a98:
    unaff_x21 = (mach_header *)&pmVar52->flags;
    FUN_109d2fc60();
    pmVar23 = pmVar19;
    if (((ulong)unaff_x21 & 1) != 0) goto LAB_109d61328;
    cVar2 = (char)pmVar19->ncmds;
    if (cVar2 == '\x05') {
      sVar4 = *(short *)((long)&pmVar19->ncmds + 2);
      if (sVar4 == 0x27) {
        unaff_x21 = (mach_header *)(ulong)(*(uint *)(*(long *)pmVar52 + 8) >> 8);
        pmVar50 = (mach_header *)**(long **)(pmVar19 + -((ulong)pmVar19->sizeofcmds & 0x7ffffff));
        FUN_109d9f594();
        if (((ulong)pmVar21 & 1) != 0) {
          FUN_109e0486c(&UNK_10f602449);
        }
        pmVar21 = pmVar50;
        FUN_109d32ad0(auStack_380);
        if ((uint)auStack_380._8_4_ < 0x41) {
          uVar22._0_4_ = pmVar52->flags;
          uVar22._4_4_ = pmVar52->reserved;
          if ((auStack_380._0_8_ & (uVar22 ^ 0xffffffffffffffff)) != 0) {
LAB_109d60d9c:
            sVar4 = *(short *)((long)&pmVar19->ncmds + 2);
            goto LAB_109d60da0;
          }
        }
        else {
          pmVar24 = (mach_header *)((auStack_380._8_8_ & 0xffffffff) + 0x3f >> 3 & 0x3ffffff8);
          pmVar50 = pmVar24;
          __Znam();
          unaff_x24 = (mach_header *)auStack_380._0_8_;
          _memcpy();
          lVar37 = 0;
          lVar43 = *(long *)&pmVar52->flags;
          do {
            *(ulong *)(lVar37 + (long)&pmVar50->magic) =
                 *(ulong *)(lVar37 + (long)&pmVar50->magic) & *(ulong *)(lVar37 + lVar43);
            lVar37 = lVar37 + 8;
          } while (pmVar24 != (mach_header *)lVar37);
          pmVar11 = pmVar50;
          pmVar21 = unaff_x24;
          _memcmp();
          unaff_x21 = pmVar50;
          __ZdaPv();
          if ((0x40 < (uint)auStack_380._8_4_) &&
             (unaff_x21 = (mach_header *)auStack_380._0_8_,
             (mach_header *)auStack_380._0_8_ != (mach_header *)0x0)) {
            __ZdaPv();
          }
          if ((int)pmVar11 != 0) goto LAB_109d60d9c;
        }
        goto LAB_109d61328;
      }
LAB_109d60da0:
      if (sVar4 == 0x2f) {
        pmVar23 = *(mach_header **)(pmVar19 + -((ulong)pmVar19->sizeofcmds & 0x7ffffff));
        bVar44 = (byte)pmVar23->ncmds;
        if (bVar44 < 4) {
          pmVar50 = *(mach_header **)&pmVar23[1].cpusubtype;
          if (pmVar50 == (mach_header *)0x0) {
            if ((bVar44 == 3) && (uVar26 = pmVar23[1].magic >> 0x11 & 0x3f, uVar26 != 0)) {
              unaff_x21 = (mach_header *)(ulong)(uVar26 - 1);
              goto LAB_109d60e08;
            }
          }
          else {
            pmVar21 = pmVar50 + 8;
            unaff_x21 = pmVar23;
            FUN_109da308c();
            if (((char)pmVar23->ncmds == '\0') && (((ushort)pmVar50[8].sizeofcmds >> 8 & 1) == 0)) {
              unaff_x21 = (mach_header *)0x2;
            }
            else {
LAB_109d60e08:
              if (((ulong)unaff_x21 & 0xff) == 0) goto LAB_109d60ef4;
            }
            uVar26 = *(uint *)(*(long *)pmVar52 + 8) >> 8;
            pmVar11 = (mach_header *)(ulong)uVar26;
            if (((uint)unaff_x21 & 0xff) <= uVar26) {
              uVar26 = (uint)unaff_x21 & 0xff;
            }
            pmVar21 = (mach_header *)(ulong)uVar26;
            FUN_109d32ad0(auStack_380);
            if (pmVar52[1].magic < 0x41) {
              uVar14._0_4_ = pmVar52->flags;
              uVar14._4_4_ = pmVar52->reserved;
              if ((uVar14 & (auStack_380._0_8_ ^ 0xffffffffffffffff)) != 0) goto LAB_109d60ed0;
LAB_109d60e50:
              pmVar11 = *(mach_header **)pmVar52;
              FUN_109d666e0();
              pmVar50 = (mach_header *)0x1;
              pmVar23 = pmVar11;
            }
            else {
              pmVar24 = (mach_header *)((ulong)pmVar52[1].magic + 0x3f >> 3 & 0x3ffffff8);
              pmVar11 = pmVar24;
              __Znam();
              unaff_x24 = *(mach_header **)&pmVar52->flags;
              _memcpy();
              lVar37 = 0;
              do {
                *(ulong *)(lVar37 + (long)&pmVar11->magic) =
                     *(ulong *)(lVar37 + (long)&pmVar11->magic) &
                     *(ulong *)(lVar37 + (long)(dword *)auStack_380._0_8_);
                lVar37 = lVar37 + 8;
              } while (pmVar24 != (mach_header *)lVar37);
              pmVar23 = pmVar11;
              pmVar21 = unaff_x24;
              _memcmp();
              __ZdaPv();
              if ((int)pmVar23 == 0) goto LAB_109d60e50;
LAB_109d60ed0:
              pmVar50 = (mach_header *)0x0;
              pmVar23 = pmVar19;
            }
            unaff_x21 = pmVar11;
            if ((0x40 < (uint)auStack_380._8_4_) &&
               (unaff_x21 = (mach_header *)auStack_380._0_8_,
               (mach_header *)auStack_380._0_8_ != (mach_header *)0x0)) {
              __ZdaPv();
            }
            if ((int)pmVar50 != 0) goto LAB_109d61328;
          }
        }
      }
LAB_109d60ef4:
      cVar2 = (char)pmVar19->ncmds;
    }
    if (cVar2 == '\x11') {
      if ((char)pmVar52->ncmds != '\x11') goto LAB_109d6121c;
      pmVar50 = (mach_header *)auStack_380;
      pmVar21 = pmVar19 + 1;
      FUN_109d32470(auStack_380 + 8);
      if ((int)uVar58 < 0x12) {
        if (uVar58 == 0xe) {
          pmVar24 = (mach_header *)0x1;
          func_0x000109d32690(auStack_380,&pmVar52->flags);
        }
        else {
          if (uVar58 != 0x10) {
LAB_109d61214:
            unaff_x21 = (mach_header *)(auStack_380 + 8);
            FUN_109d32234();
            goto LAB_109d6121c;
          }
          pmVar24 = (mach_header *)0x1;
          FUN_109d324f4(auStack_380,&pmVar52->flags);
        }
      }
      else if (uVar58 == 0x12) {
        pmVar24 = (mach_header *)0x1;
        func_0x000109d326c8(auStack_380,&pmVar52->flags);
      }
      else if (uVar58 == 0x15) {
        pmVar24 = (mach_header *)0x1;
        func_0x000109d326e8(auStack_380,&pmVar52->flags);
      }
      else {
        if (uVar58 != 0x18) goto LAB_109d61214;
        func_0x000109d32708(auStack_380,&pmVar52->flags);
      }
      pmVar23 = (mach_header *)**(undefined8 **)pmVar19;
      pmVar21 = (mach_header *)auStack_380;
      FUN_109d668f4();
      unaff_x21 = (mach_header *)(auStack_380 + 8);
      FUN_109d32234();
      goto LAB_109d61328;
    }
    if (cVar2 != '\x10') {
      pmVar23 = *(mach_header **)pmVar19;
      if ((pmVar23 == (mach_header *)0x0) || ((pmVar23->cpusubtype & 0xfe) != 0x12))
      goto LAB_109d6121c;
      pmVar21 = (mach_header *)0x0;
      pmVar50 = pmVar52;
      FUN_109d65ff0();
      unaff_x21 = pmVar50;
      if (pmVar50 == (mach_header *)0x0) {
LAB_109d610b8:
        if ((char)pmVar23->cpusubtype != '\x12') goto LAB_109d6121c;
        uStack_3c0 = (mach_header *)&puStack_370;
        auStack_380._8_8_ = 0x1000000000;
        uVar26 = pmVar23[1].magic;
        auStack_380._0_8_ = uStack_3c0;
        if (uVar26 == 0) {
          pmVar21 = (mach_header *)0x0;
        }
        else {
          pmVar50 = (mach_header *)0x0;
          lVar37 = **(long **)pmVar23;
          unaff_x26 = 0x7e02a000;
          do {
            pmVar21 = (mach_header *)(lVar37 + 0x798);
            FUN_109d66880(pmVar21,pmVar50,0);
            unaff_x24 = pmVar19;
            func_0x000109d69980(pmVar19,pmVar21,0);
            pmVar24 = (mach_header *)0x0;
            unaff_x25 = pmVar52;
            func_0x000109d69980();
            uVar38 = 1 << (ulong)(uVar58 & 0x1f);
            pmVar11 = pmVar12;
            if ((uVar38 & 0x7e02a000) == 0) {
              if (((uVar38 & 0x1254000) == 0) &&
                 (pmVar57 = unaff_x25, FUN_109d661e0(), (int)pmVar57 != 0)) {
                FUN_109d67e38();
                goto LAB_109d61440;
              }
              pmVar24 = unaff_x25;
              FUN_109d6059c(pmVar12,unaff_x24);
            }
            else {
              param_5 = (mach_header *)0x0;
              pmVar25 = (mach_header *)0x0;
              pmVar24 = unaff_x25;
              FUN_109d69a44(pmVar12,unaff_x24);
            }
            if (pmVar11 == (mach_header *)0x0) {
              pmVar23 = (mach_header *)0x0;
              pmVar21 = (mach_header *)0x0;
              goto LAB_109d61440;
            }
            FUN_109d31fec(auStack_380);
            pmVar50 = (mach_header *)((long)&pmVar50->magic + 1);
          } while ((mach_header *)(ulong)uVar26 != pmVar50);
          pmVar21 = (mach_header *)(auStack_380._8_8_ & 0xffffffff);
        }
        pmVar23 = (mach_header *)auStack_380._0_8_;
        FUN_109d67790();
LAB_109d61440:
        unaff_x21 = (mach_header *)auStack_380._0_8_;
        if ((mach_header *)auStack_380._0_8_ != uStack_3c0) {
          _free();
        }
        goto LAB_109d61328;
      }
      if (((uVar58 < 0x18) && ((1 << (ulong)(uVar58 & 0x1f) & 0xd80000U) != 0)) &&
         (pmVar11 = pmVar50, FUN_109d661e0(), (int)pmVar11 != 0)) {
        FUN_109d67e38();
        unaff_x21 = pmVar23;
        goto LAB_109d61328;
      }
      pmVar11 = pmVar19;
      FUN_109d65ff0(pmVar19,0);
      unaff_x21 = (mach_header *)0x0;
      pmVar21 = (mach_header *)0x0;
      if (pmVar11 == (mach_header *)0x0) goto LAB_109d610b8;
      pmVar11 = pmVar12;
      pmVar24 = pmVar50;
      if ((1 << (ulong)(uVar58 & 0x1f) & 0x1fd4000U) == 0) {
        param_5 = (mach_header *)0x0;
        pmVar25 = (mach_header *)0x0;
        FUN_109d69a44();
      }
      else {
        FUN_109d6059c();
      }
      pmVar21 = pmVar11;
      if (pmVar11 != (mach_header *)0x0) {
        uVar22 = 0x100000000;
        if ((char)pmVar23->cpusubtype != '\x13') {
          uVar22 = 0;
        }
        unaff_x21 = (mach_header *)(uVar22 | pmVar23[1].magic);
        FUN_109d66c68();
        pmVar21 = pmVar11;
        pmVar23 = unaff_x21;
        goto LAB_109d61328;
      }
LAB_109d61424:
      unaff_x21 = pmVar11;
      pmVar23 = (mach_header *)0x0;
      goto LAB_109d61328;
    }
    if ((char)pmVar52->ncmds != '\x10') {
      if ((uVar58 < 0x1c) && ((1 << (ulong)(uVar58 & 0x1f) & 0xed80000U) != 0)) {
        uVar26 = pmVar19[1].magic;
        if (uVar26 < 0x41) {
          lVar30._0_4_ = pmVar19->flags;
          lVar30._4_4_ = pmVar19->reserved;
          pmVar23 = pmVar19;
          if (lVar30 != 0) goto LAB_109d6121c;
        }
        else {
          unaff_x21 = (mach_header *)&pmVar19->flags;
          func_0x000109df08dc();
          pmVar23 = pmVar19;
          if ((uint)unaff_x21 != uVar26) goto LAB_109d6121c;
        }
        goto LAB_109d61328;
      }
LAB_109d6121c:
      if ((char)pmVar19->ncmds == '\x05') {
        if (((uVar58 < 0x1f) && ((1 << (ulong)(uVar58 & 0x1f) & 0x70022000U) != 0)) &&
           (uVar58 == *(ushort *)((long)&pmVar19->ncmds + 2))) {
          pmVar21 = *(mach_header **)(pmVar19 + (1 - ((ulong)pmVar19->sizeofcmds & 0x7ffffff)));
          param_5 = (mach_header *)0x0;
          pmVar25 = (mach_header *)0x0;
          unaff_x21 = pmVar12;
          FUN_109d69a44(pmVar12,pmVar21,pmVar52);
          pmVar24 = unaff_x21;
          if (((char)unaff_x21->ncmds != '\x05') ||
             (uVar58 != *(ushort *)((long)&unaff_x21->ncmds + 2))) {
            pmVar21 = *(mach_header **)(pmVar19 + -((ulong)pmVar19->sizeofcmds & 0x7ffffff));
            param_5 = (mach_header *)0x0;
            pmVar25 = (mach_header *)0x0;
            pmVar23 = pmVar12;
            FUN_109d69a44();
            unaff_x21 = pmVar23;
            goto LAB_109d61328;
          }
        }
      }
      else if ((((char)pmVar52->ncmds == '\x05') && (uVar58 < 0x1f)) &&
              ((1 << (ulong)(uVar58 & 0x1f) & 0x70066000U) != 0)) {
        unaff_x21 = pmVar12;
        pmVar21 = pmVar52;
        FUN_109d6059c();
        pmVar24 = pmVar19;
        pmVar23 = unaff_x21;
        goto LAB_109d61328;
      }
      pmVar11 = unaff_x21;
      if (*(int *)(*(undefined8 **)pmVar19 + 1) == 0x10d) {
        if (uVar58 < 0x1c) {
          uVar26 = 1 << (ulong)(uVar58 & 0x1f);
          pmVar23 = pmVar19;
          if ((uVar26 & 0xe180000) == 0) {
            if ((uVar26 & 0xc00000) == 0) {
              if (uVar58 != 0x11) goto LAB_109d613bc;
              unaff_x21 = (mach_header *)0x1c;
              param_5 = (mach_header *)0x0;
              pmVar25 = (mach_header *)0x0;
              pmVar24 = pmVar52;
              FUN_109d69a44();
              pmVar21 = pmVar19;
              pmVar23 = unaff_x21;
            }
            else {
              lVar37 = *(long *)**(undefined8 **)pmVar19;
              pmVar23 = *(mach_header **)(lVar37 + 0x610);
              if (*(mach_header **)(lVar37 + 0x610) == (mach_header *)0x0) {
                unaff_x21 = (mach_header *)(lVar37 + 0x750);
                pmVar21 = (mach_header *)0x0;
                pmVar24 = (mach_header *)0x0;
                FUN_109d678e8();
                *(mach_header **)(lVar37 + 0x610) = unaff_x21;
                pmVar23 = unaff_x21;
              }
            }
          }
        }
        else {
LAB_109d613bc:
          if ((uVar58 != 0xf) && (uVar58 != 0xd)) goto LAB_109d61424;
          unaff_x21 = (mach_header *)0x1e;
          param_5 = (mach_header *)0x0;
          pmVar25 = (mach_header *)0x0;
          pmVar24 = pmVar52;
          FUN_109d69a44();
          pmVar21 = pmVar19;
          pmVar23 = unaff_x21;
        }
        goto LAB_109d61328;
      }
      goto LAB_109d61424;
    }
    if (0x11 < uVar58 - 0xd) goto LAB_109d6121c;
    pdVar36 = &pmVar52->flags;
    switch(uVar58) {
    case 0xd:
      pmVar52 = (mach_header *)**(undefined8 **)pmVar19;
      uVar58 = pmVar19[1].magic;
      uStack_3a0._0_4_ = uVar58;
      if (uVar58 < 0x41) {
        pmStack_3a8 = *(mach_header **)&pmVar19->flags;
      }
      else {
        pmVar12 = (mach_header *)((ulong)uVar58 + 0x3f >> 3);
        pmVar23 = (mach_header *)((ulong)pmVar12 & 0x3ffffff8);
        __Znam();
        pmStack_3a8 = pmVar23;
        pmVar24 = (mach_header *)((ulong)pmVar12 & 0x3ffffff8);
        _memcpy();
      }
      func_0x000109df002c(&pmStack_3a8,pdVar36);
      auStack_380._8_4_ = (uint)uStack_3a0;
      auStack_380._0_8_ = pmStack_3a8;
      uStack_3a0 = (ulong)uStack_3a0._4_4_ << 0x20;
      pmVar21 = (mach_header *)auStack_380;
      pmVar23 = pmVar52;
      FUN_109d66bc4();
      unaff_x21 = pmVar23;
      if ((0x40 < (uint)auStack_380._8_4_) &&
         (unaff_x21 = (mach_header *)auStack_380._0_8_,
         (mach_header *)auStack_380._0_8_ != (mach_header *)0x0)) {
        __ZdaPv();
      }
      if (((uint)uStack_3a0 < 0x41) ||
         (unaff_x21 = pmStack_3a8, pmVar11 = pmStack_3a8, pmStack_3a8 == (mach_header *)0x0))
      goto LAB_109d61328;
      goto code_r0x000109d61840;
    default:
      goto LAB_109d6121c;
    case 0xf:
      pmVar52 = (mach_header *)**(undefined8 **)pmVar19;
      uVar58 = pmVar19[1].magic;
      uStack_3b0._0_4_ = uVar58;
      if (uVar58 < 0x41) {
        uStack_3b8 = *(mach_header **)&pmVar19->flags;
      }
      else {
        pmVar12 = (mach_header *)((ulong)uVar58 + 0x3f >> 3);
        pmVar23 = (mach_header *)((ulong)pmVar12 & 0x3ffffff8);
        __Znam();
        uStack_3b8 = pmVar23;
        pmVar24 = (mach_header *)((ulong)pmVar12 & 0x3ffffff8);
        _memcpy();
      }
      func_0x000109df00ec(&uStack_3b8,pdVar36);
      auStack_380._8_4_ = (uint)uStack_3b0;
      auStack_380._0_8_ = uStack_3b8;
      uStack_3b0 = (ulong)uStack_3b0._4_4_ << 0x20;
      pmVar21 = (mach_header *)auStack_380;
      pmVar23 = pmVar52;
      FUN_109d66bc4();
      unaff_x21 = pmVar23;
      if ((0x40 < (uint)auStack_380._8_4_) &&
         (unaff_x21 = (mach_header *)auStack_380._0_8_,
         (mach_header *)auStack_380._0_8_ != (mach_header *)0x0)) {
        __ZdaPv();
      }
      pmVar11 = uStack_3b8;
      if ((uint)uStack_3b0 < 0x41) goto LAB_109d61328;
      goto joined_r0x000109d6183c;
    case 0x11:
      pmVar11 = (mach_header *)**(undefined8 **)pmVar19;
      FUN_109df01ac(auStack_380,&pmVar19->flags,pdVar36);
      pmVar21 = (mach_header *)auStack_380;
      pmVar23 = pmVar11;
      FUN_109d66bc4();
      break;
    case 0x13:
      pmVar11 = (mach_header *)**(undefined8 **)pmVar19;
      FUN_109df10bc(auStack_380,&pmVar19->flags,pdVar36);
      pmVar21 = (mach_header *)auStack_380;
      pmVar23 = pmVar11;
      FUN_109d66bc4();
      break;
    case 0x14:
      pdVar34 = pdVar36;
      FUN_109d2fc60();
      if ((int)pdVar34 != 0) {
        iVar10 = (int)pmVar19 + 0x18;
        FUN_109d32728();
        if (iVar10 != 0) {
          unaff_x21 = *(mach_header **)pmVar19;
          FUN_109d67e38();
          pmVar23 = unaff_x21;
          goto LAB_109d61328;
        }
      }
      pmVar11 = (mach_header *)**(undefined8 **)pmVar19;
      FUN_109df1804(auStack_380,&pmVar19->flags,pdVar36);
      pmVar21 = (mach_header *)auStack_380;
      pmVar23 = pmVar11;
      FUN_109d66bc4();
      break;
    case 0x16:
      pmVar11 = (mach_header *)**(undefined8 **)pmVar19;
      FUN_109df1cc0(auStack_380,&pmVar19->flags,pdVar36);
      pmVar21 = (mach_header *)auStack_380;
      pmVar23 = pmVar11;
      FUN_109d66bc4();
      break;
    case 0x17:
      pdVar34 = pdVar36;
      FUN_109d2fc60();
      if ((int)pdVar34 != 0) {
        iVar10 = (int)pmVar19 + 0x18;
        FUN_109d32728();
        if (iVar10 != 0) {
          unaff_x21 = *(mach_header **)pmVar19;
          FUN_109d67e38();
          pmVar23 = unaff_x21;
          goto LAB_109d61328;
        }
      }
      pmVar11 = (mach_header *)**(undefined8 **)pmVar19;
      FUN_109df1e90(auStack_380,&pmVar19->flags,pdVar36);
      pmVar21 = (mach_header *)auStack_380;
      pmVar23 = pmVar11;
      FUN_109d66bc4();
      break;
    case 0x19:
      pmVar12 = (mach_header *)(ulong)pmVar19[1].magic;
      uVar58 = pmVar52[1].magic;
      pmVar52 = (mach_header *)(ulong)uVar58;
      pdVar34 = pdVar36;
      if (uVar58 < 0x41) {
code_r0x000109d615d4:
        unaff_x21 = *(mach_header **)pmVar19;
        if (*(mach_header **)pdVar34 < pmVar12) {
          pmVar11 = *(mach_header **)unaff_x21;
          FUN_109d32f84(auStack_380,&pmVar19->flags,pdVar36);
          pmVar21 = (mach_header *)auStack_380;
          pmVar23 = pmVar11;
          FUN_109d66bc4();
          break;
        }
      }
      else {
        func_0x000109df08dc();
        if (uVar58 - (int)pdVar34 < 0x41) {
          pdVar34 = *(dword **)pdVar36;
          goto code_r0x000109d615d4;
        }
        unaff_x21 = *(mach_header **)pmVar19;
      }
      FUN_109d67e38();
      pmVar23 = unaff_x21;
      goto LAB_109d61328;
    case 0x1a:
      pmVar12 = (mach_header *)(ulong)pmVar19[1].magic;
      uVar58 = pmVar52[1].magic;
      pmVar52 = (mach_header *)(ulong)uVar58;
      pdVar34 = pdVar36;
      if (uVar58 < 0x41) {
code_r0x000109d61694:
        unaff_x21 = *(mach_header **)pmVar19;
        if (*(mach_header **)pdVar34 < pmVar12) {
          pmVar11 = *(mach_header **)unaff_x21;
          FUN_109d32ed8(auStack_380,&pmVar19->flags,pdVar36);
          pmVar21 = (mach_header *)auStack_380;
          pmVar23 = pmVar11;
          FUN_109d66bc4();
          break;
        }
      }
      else {
        func_0x000109df08dc();
        if (uVar58 - (int)pdVar34 < 0x41) {
          pdVar34 = *(dword **)pdVar36;
          goto code_r0x000109d61694;
        }
        unaff_x21 = *(mach_header **)pmVar19;
      }
      FUN_109d67e38();
      pmVar23 = unaff_x21;
      goto LAB_109d61328;
    case 0x1b:
      pmVar12 = (mach_header *)(ulong)pmVar19[1].magic;
      uVar58 = pmVar52[1].magic;
      pmVar52 = (mach_header *)(ulong)uVar58;
      pdVar34 = pdVar36;
      if (uVar58 < 0x41) {
code_r0x000109d61634:
        unaff_x21 = *(mach_header **)pmVar19;
        if (*(mach_header **)pdVar34 < pmVar12) {
          pmVar11 = *(mach_header **)unaff_x21;
          FUN_109d377b0(auStack_380,&pmVar19->flags,pdVar36);
          pmVar21 = (mach_header *)auStack_380;
          pmVar23 = pmVar11;
          FUN_109d66bc4();
          break;
        }
      }
      else {
        func_0x000109df08dc();
        if (uVar58 - (int)pdVar34 < 0x41) {
          pdVar34 = *(dword **)pdVar36;
          goto code_r0x000109d61634;
        }
        unaff_x21 = *(mach_header **)pmVar19;
      }
      FUN_109d67e38();
      pmVar23 = unaff_x21;
      goto LAB_109d61328;
    case 0x1c:
      pmVar11 = (mach_header *)**(undefined8 **)pmVar19;
      uVar58 = pmVar19[1].magic;
      pmVar50 = (mach_header *)(ulong)uVar58;
      if (uVar58 < 0x41) {
        uVar31._0_4_ = pmVar19->flags;
        uVar31._4_4_ = pmVar19->reserved;
        uVar39._0_4_ = pmVar52->flags;
        uVar39._4_4_ = pmVar52->reserved;
        pmVar12 = (mach_header *)(uVar39 & uVar31);
      }
      else {
        unaff_x24 = (mach_header *)((long)&pmVar50[1].reserved + 3);
        unaff_x25 = (mach_header *)((ulong)unaff_x24 >> 3);
        pmVar12 = (mach_header *)((ulong)unaff_x25 & 0x3ffffff8);
        __Znam();
        pmVar24 = (mach_header *)((ulong)unaff_x25 & 0x3ffffff8);
        _memcpy();
        uVar22 = (ulong)unaff_x24 >> 6;
        puVar35 = *(ulong **)pdVar36;
        pmVar23 = pmVar12;
        do {
          uVar14 = *puVar35;
          uVar45._0_4_ = pmVar23->magic;
          uVar45._4_4_ = pmVar23->cputype;
          pmVar23->magic = (int)(uVar45 & uVar14);
          pmVar23->cputype = (int)((uVar45 & uVar14) >> 0x20);
          uVar22 = uVar22 - 1;
          puVar35 = puVar35 + 1;
          pmVar23 = (mach_header *)&pmVar23->cpusubtype;
        } while (uVar22 != 0);
      }
      auStack_380._8_4_ = uVar58;
      pmVar21 = (mach_header *)auStack_380;
      pmVar23 = pmVar11;
      auStack_380._0_8_ = pmVar12;
      FUN_109d66bc4();
      break;
    case 0x1d:
      pmVar11 = (mach_header *)**(undefined8 **)pmVar19;
      uVar58 = pmVar19[1].magic;
      pmVar50 = (mach_header *)(ulong)uVar58;
      if (uVar58 < 0x41) {
        uVar33._0_4_ = pmVar19->flags;
        uVar33._4_4_ = pmVar19->reserved;
        uVar41._0_4_ = pmVar52->flags;
        uVar41._4_4_ = pmVar52->reserved;
        pmVar12 = (mach_header *)(uVar41 | uVar33);
      }
      else {
        unaff_x24 = (mach_header *)((long)&pmVar50[1].reserved + 3);
        unaff_x25 = (mach_header *)((ulong)unaff_x24 >> 3);
        pmVar12 = (mach_header *)((ulong)unaff_x25 & 0x3ffffff8);
        __Znam();
        pmVar24 = (mach_header *)((ulong)unaff_x25 & 0x3ffffff8);
        _memcpy();
        uVar22 = (ulong)unaff_x24 >> 6;
        puVar35 = *(ulong **)pdVar36;
        pmVar23 = pmVar12;
        do {
          uVar14 = *puVar35;
          uVar47._0_4_ = pmVar23->magic;
          uVar47._4_4_ = pmVar23->cputype;
          pmVar23->magic = (int)(uVar47 | uVar14);
          pmVar23->cputype = (int)((uVar47 | uVar14) >> 0x20);
          uVar22 = uVar22 - 1;
          puVar35 = puVar35 + 1;
          pmVar23 = (mach_header *)&pmVar23->cpusubtype;
        } while (uVar22 != 0);
      }
      auStack_380._8_4_ = uVar58;
      pmVar21 = (mach_header *)auStack_380;
      pmVar23 = pmVar11;
      auStack_380._0_8_ = pmVar12;
      FUN_109d66bc4();
      break;
    case 0x1e:
      pmVar11 = (mach_header *)**(undefined8 **)pmVar19;
      uVar58 = pmVar19[1].magic;
      pmVar50 = (mach_header *)(ulong)uVar58;
      if (uVar58 < 0x41) {
        uVar32._0_4_ = pmVar19->flags;
        uVar32._4_4_ = pmVar19->reserved;
        uVar40._0_4_ = pmVar52->flags;
        uVar40._4_4_ = pmVar52->reserved;
        pmVar12 = (mach_header *)(uVar40 ^ uVar32);
      }
      else {
        unaff_x24 = (mach_header *)((long)&pmVar50[1].reserved + 3);
        unaff_x25 = (mach_header *)((ulong)unaff_x24 >> 3);
        pmVar12 = (mach_header *)((ulong)unaff_x25 & 0x3ffffff8);
        __Znam();
        pmVar24 = (mach_header *)((ulong)unaff_x25 & 0x3ffffff8);
        _memcpy();
        uVar22 = (ulong)unaff_x24 >> 6;
        puVar35 = *(ulong **)pdVar36;
        pmVar23 = pmVar12;
        do {
          uVar14 = *puVar35;
          uVar46._0_4_ = pmVar23->magic;
          uVar46._4_4_ = pmVar23->cputype;
          pmVar23->magic = (int)(uVar46 ^ uVar14);
          pmVar23->cputype = (int)((uVar46 ^ uVar14) >> 0x20);
          uVar22 = uVar22 - 1;
          puVar35 = puVar35 + 1;
          pmVar23 = (mach_header *)&pmVar23->cpusubtype;
        } while (uVar22 != 0);
      }
      auStack_380._8_4_ = uVar58;
      pmVar21 = (mach_header *)auStack_380;
      pmVar23 = pmVar11;
      auStack_380._0_8_ = pmVar12;
      FUN_109d66bc4();
    }
    unaff_x21 = pmVar23;
    pmVar52 = pmVar11;
    pmVar11 = (mach_header *)auStack_380._0_8_;
    if (0x40 < (uint)auStack_380._8_4_) {
joined_r0x000109d6183c:
      unaff_x21 = pmVar11;
      if (pmVar11 != (mach_header *)0x0) {
code_r0x000109d61840:
        __ZdaPv();
        unaff_x21 = pmVar11;
      }
    }
    goto LAB_109d61328;
  }
  bVar3 = bVar44 - 0xb;
  bVar5 = cVar2 - 0xb;
  bVar9 = (byte)(bVar44 - 0xb) < 2;
  if ((!bVar9 && cVar2 != '\v') && (bVar9 || cVar2 != '\f')) goto LAB_109d60710;
  pmVar11 = pmStack_2a0;
  switch(uVar58) {
  case 0xd:
  case 0xf:
    goto code_r0x000109d60c58;
  case 0xe:
  case 0x12:
  case 0x15:
  case 0x18:
code_r0x000109d606ac:
    pmVar11 = pmStack_2b0;
    if (((byte)pmVar19->ncmds - 0xb < 2) && (pmVar23 = pmVar19, (byte)pmVar52->ncmds - 0xb < 2))
    break;
    unaff_x21 = *(mach_header **)pmVar19;
    if (*(mach_header ***)PTR____stack_chk_guard_11034bdc0 == ppmStack_2f0) {
      pmStack_2b8 = *(mach_header **)PTR____stack_chk_guard_11034bdc0;
      pmVar23 = unaff_x21;
      if ((unaff_x21->cpusubtype & 0xfe) == 0x12) {
        pmVar23 = (mach_header *)**(undefined8 **)&unaff_x21->ncmds;
      }
      FUN_109d9f580(pmVar23);
      pmVar50 = (mach_header *)0x0;
      FUN_109d67b94(&stack0xfffffffffffffd28);
      pmVar52 = *(mach_header **)unaff_x21;
      pmVar23 = (mach_header *)&stack0xfffffffffffffd28;
      FUN_109d668f4(pmVar52,pmVar23);
      uVar58 = unaff_x21->cpusubtype & 0xfe;
      pmVar25 = pmVar52;
      if (uVar58 == 0x12) {
        uVar22 = 0x100000000;
        if (((unaff_x21->cpusubtype ^ 0xffffffff) & 0x13) != 0) {
          uVar22 = 0;
        }
        pmVar25 = (mach_header *)(uVar22 | unaff_x21[1].magic);
        pmVar23 = pmVar52;
        FUN_109d66c68(pmVar25,pmVar52);
      }
      if (uVar58 != 0x12) {
        pmVar25 = pmVar52;
      }
      pmVar21 = (mach_header *)&stack0xfffffffffffffd30;
      FUN_109d32234();
      if ((mach_header *)*(long *)PTR____stack_chk_guard_11034bdc0 != pmStack_2b8) {
        ___stack_chk_fail();
        FUN_109d32234(&stack0xfffffffffffffd30);
        pmVar25 = pmVar21;
        __Unwind_Resume(pmVar21);
        pcStack_2e8 = FUN_109d67b94;
        pmStack_300 = pmVar52;
        uStack_2f8 = pmVar21;
        ppmStack_2f0 = (mach_header **)&pppppppuStack_290;
        if (pmVar50 == (mach_header *)0x0) {
          pmStack_310 = pmVar11;
          uStack_318 = (mach_header *)(ulong)(uint)uStack_318;
          pcStack_308 = (code *)(ulong)uVar58;
          FUN_109d32200(&extraout_x8->cpusubtype,pmVar25,(long)&uStack_318 + 4);
          pmVar25 = extraout_x8;
          FUN_109d32518(extraout_x8,0,pmVar23,0);
          return pmVar25;
        }
        pcStack_308 = (code *)CONCAT44(pcStack_308._4_4_,0x40);
        pmStack_310 = pmVar50;
        FUN_109d32400();
        if ((0x40 < (uint)pcStack_308) && (pmVar25 = pmStack_310, pmStack_310 != (mach_header *)0x0)
           ) {
          __ZdaPv();
          pmVar25 = pmStack_310;
        }
        return pmVar25;
      }
      return pmVar25;
    }
    goto LAB_109d6197c;
  case 0x10:
    unaff_x21 = pmVar19;
    FUN_109d63d8c();
    if (((int)unaff_x21 == 0) || (pmVar23 = pmVar52, 1 < (byte)pmVar52->ncmds - 0xb))
    goto code_r0x000109d606ac;
    break;
  case 0x11:
    pmVar23 = pmVar19;
    if (1 < (bVar5 | bVar3)) {
      auStack_380._0_8_ = auStack_388;
      auStack_380._8_8_ = auStack_380._8_8_ & 0xffffffffffffff00;
      uVar22 = 0;
      pmVar21 = pmVar19;
      func_0x000109d32c60();
      if ((uVar22 & 1) == 0) {
        puStack_398 = auStack_388;
        pmStack_390 = (mach_header *)((ulong)pmStack_390 & 0xffffffffffffff00);
        uVar22 = 0;
        pmVar21 = pmVar52;
        func_0x000109d32c60();
        if ((uVar22 & 1) != 0) goto code_r0x000109d60c20;
      }
      else {
code_r0x000109d60c20:
        if (0x40 < *(uint *)((long)auStack_388 + 8)) {
          auStack_388 = *(undefined1 (*) [8])auStack_388;
        }
        if ((*(byte *)auStack_388 & 1) != 0) {
          unaff_x21 = *(mach_header **)pmVar19;
          puVar42 = &uStack_3c0;
          pmVar11 = pmVar52;
          pppppppuVar61 = &pppppppuStack_290;
          pcVar64 = (code *)(mach_header *)0x109d60d14;
          goto SUB_109d677ec;
        }
      }
      unaff_x21 = *(mach_header **)pmVar19;
      FUN_109d666e0();
      pmVar23 = unaff_x21;
    }
    break;
  case 0x13:
  case 0x14:
    pmVar23 = pmVar52;
    FUN_109d331cc();
    if ((int)pmVar23 == 0) {
      iVar10 = (int)auStack_380 + 1;
      pmVar21 = pmVar52;
      FUN_109d3317c();
      if (iVar10 == 0) {
        unaff_x21 = (mach_header *)auStack_380;
        pmVar21 = pmVar52;
        FUN_109d33030();
        pmVar23 = pmVar19;
        if (((ulong)unaff_x21 & 1) == 0) {
          unaff_x21 = *(mach_header **)pmVar19;
          FUN_109d666e0();
          pmVar23 = unaff_x21;
        }
        break;
      }
    }
    unaff_x21 = *(mach_header **)pmVar52;
    FUN_109d67e38();
    pmVar23 = unaff_x21;
    break;
  case 0x16:
  case 0x17:
    pmVar23 = pmVar52;
    FUN_109d331cc();
    if ((int)pmVar23 == 0) {
      iVar10 = (int)auStack_380 + 1;
      pmVar21 = pmVar52;
      FUN_109d3317c();
      if (iVar10 == 0) {
        unaff_x21 = *(mach_header **)pmVar19;
        FUN_109d666e0();
        pmVar23 = unaff_x21;
        break;
      }
    }
    unaff_x21 = *(mach_header **)pmVar52;
    FUN_109d67e38();
    pmVar23 = unaff_x21;
    break;
  case 0x19:
    if (1 < (byte)(cVar2 - 0xbU)) {
      unaff_x21 = (mach_header *)auStack_380;
      pmVar21 = pmVar52;
      FUN_109d3317c();
      pmVar23 = pmVar19;
      if (((ulong)unaff_x21 & 1) == 0) {
        unaff_x21 = *(mach_header **)pmVar19;
        FUN_109d666e0();
        pmVar23 = unaff_x21;
      }
      break;
    }
    goto LAB_109d60c9c;
  case 0x1a:
    if ((byte)(cVar2 - 0xbU) < 2) goto LAB_109d60c9c;
    unaff_x21 = (mach_header *)auStack_380;
    pmVar21 = pmVar52;
    FUN_109d3317c();
    pmVar23 = pmVar19;
    if (((ulong)unaff_x21 & 1) == 0) {
      unaff_x21 = *(mach_header **)pmVar19;
      FUN_109d666e0();
      pmVar23 = unaff_x21;
    }
    break;
  case 0x1b:
    if ((byte)(cVar2 - 0xbU) < 2) goto LAB_109d60c9c;
    unaff_x21 = (mach_header *)auStack_380;
    pmVar21 = pmVar52;
    FUN_109d3317c();
    pmVar23 = pmVar19;
    if (((ulong)unaff_x21 & 1) == 0) {
      unaff_x21 = *(mach_header **)pmVar19;
      FUN_109d666e0();
      pmVar23 = unaff_x21;
    }
    break;
  case 0x1c:
    pmVar23 = pmVar19;
    if ((bVar5 | bVar3) < 2) break;
code_r0x000109d60914:
    puVar42 = (undefined8 *)auStack_280;
    pmVar23 = pmStack_298;
    pmVar11 = pmStack_2a0;
    pmVar55 = pmStack_2a8;
    pmVar57 = pmVar19;
    unaff_x22 = pmStack_2b0;
    unaff_x23 = pmStack_2b8;
    pmVar19 = pmStack_2c0;
    pppppppuVar61 = pppppppuStack_290;
    pcVar64 = (code *)pmStack_288;
    if (*(mach_header ***)PTR____stack_chk_guard_11034bdc0 == ppmStack_2f0)
    goto code_r0x000109d666e0;
    goto LAB_109d6197c;
  case 0x1d:
    pmVar23 = pmVar19;
    if (1 < (bVar5 | bVar3)) {
      puVar42 = (undefined8 *)auStack_280;
      pmVar23 = pmVar24;
      pmVar17 = pmStack_298;
      pmVar55 = pmStack_2a8;
      unaff_x22 = pmStack_2b0;
      pmVar57 = pmVar19;
      unaff_x23 = pmStack_2b8;
      pmVar19 = pmStack_2c0;
      pppppppuVar61 = pppppppuStack_290;
      pmVar59 = pmStack_288;
      if (*(mach_header ***)PTR____stack_chk_guard_11034bdc0 == ppmStack_2f0)
      goto code_r0x000109d66ed0;
      goto LAB_109d6197c;
    }
    break;
  case 0x1e:
    pmVar19 = pmVar57;
    if ((bVar5 | bVar3) < 2) goto code_r0x000109d60914;
code_r0x000109d60c58:
    puVar42 = (undefined8 *)auStack_280;
    pmVar19 = pmStack_298;
    pppppppuVar61 = pppppppuStack_290;
    pcVar64 = (code *)pmStack_288;
    if (*(mach_header ***)PTR____stack_chk_guard_11034bdc0 == ppmStack_2f0) goto SUB_109d677ec;
    goto LAB_109d6197c;
  default:
    goto LAB_109d60710;
  }
LAB_109d61328:
  pmVar57 = pmVar23;
  if (*(mach_header ***)PTR____stack_chk_guard_11034bdc0 == ppmStack_2f0) {
    return pmVar23;
  }
LAB_109d6197c:
  ___stack_chk_fail();
  pmVar13 = pmVar21;
  pmVar19 = pmVar24;
  if ((0x40 < (uint)auStack_380._8_4_) && ((mach_header *)auStack_380._0_8_ != (mach_header *)0x0))
  {
    __ZdaPv();
    pmVar13 = pmVar21;
    pmVar19 = pmVar24;
  }
  pmVar23 = unaff_x21;
  __Unwind_Resume();
  uStack_410 = unaff_x26;
  pmStack_408 = unaff_x25;
  pmStack_400 = unaff_x24;
  pmStack_3f8 = pmVar50;
  pmStack_3f0 = pmVar57;
  pmStack_3e8 = pmVar12;
  pmStack_3e0 = pmVar52;
  pmStack_3d8 = unaff_x21;
  pppppppuStack_3d0 = &pppppppuStack_290;
  pmStack_3c8 = (mach_header *)FUN_109d61a9c;
  lStack_418 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar42 = *(undefined8 **)pmVar13;
  unaff_x21 = (mach_header *)(*(long *)*puVar42 + 0x750);
  auVar15 = (undefined1  [8])pmVar23;
  pmVar21 = pmVar13;
  pmVar24 = pmVar19;
  if (puVar42 != (undefined8 *)0x0 && (*(uint *)(puVar42 + 1) & 0xfe) == 0x12) {
    uVar22 = 0x100000000;
    if (((*(uint *)(puVar42 + 1) ^ 0xffffffff) & 0x13) != 0) {
      uVar22 = 0;
    }
    pmVar21 = (mach_header *)(uVar22 | *(uint *)(puVar42 + 4));
    FUN_109da004c();
    auVar15 = (undefined1  [8])unaff_x21;
  }
  uVar58 = (uint)pmVar23;
  if (uVar58 == 0xf) {
LAB_109d61cf8:
    puVar42 = &uStack_3c0;
    pmVar23 = pmVar24;
    pmVar17 = pmStack_3d8;
    pmVar11 = pmStack_3e0;
    pmVar55 = pmStack_3e8;
    unaff_x22 = pmStack_3f0;
    unaff_x23 = pmStack_3f8;
    pmVar19 = pmStack_400;
    pppppppuVar61 = pppppppuStack_3d0;
    pmVar59 = pmStack_3c8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_418) goto code_r0x000109d66ed0;
    goto LAB_109d62468;
  }
  if (uVar58 == 0) {
LAB_109d61b28:
    puVar42 = &uStack_3c0;
    pmVar23 = pmStack_3d8;
    pmVar11 = pmStack_3e0;
    pmVar55 = pmStack_3e8;
    unaff_x22 = pmStack_3f0;
    unaff_x23 = pmStack_3f8;
    pmVar19 = pmStack_400;
    pppppppuVar61 = pppppppuStack_3d0;
    pcVar64 = (code *)pmStack_3c8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_418) goto code_r0x000109d666e0;
    goto LAB_109d62468;
  }
  uVar26 = (uint)(byte)pmVar13->ncmds;
  pmVar11 = pmStack_3e0;
  pppppppuVar61 = pppppppuStack_3d0;
  pcVar64 = (code *)pmStack_3c8;
  if ((uVar26 == 0xc) || (uVar38 = (uint)(byte)pmVar19->ncmds, uVar38 == 0xc)) {
    puVar42 = &uStack_3c0;
    pmVar23 = pmStack_3d8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_418) {
code_r0x000109d67e38:
      *(mach_header **)((long)puVar42 + -0x20) = pmVar11;
      *(mach_header **)((long)puVar42 + -0x18) = pmVar23;
      *(undefined8 ********)((long)puVar42 + -0x10) = pppppppuVar61;
      *(code **)((long)puVar42 + -8) = pcVar64;
      *(mach_header **)((long)puVar42 + -0x28) = unaff_x21;
      lVar37 = **(long **)unaff_x21 + 0x560;
      FUN_109d6f6e0(lVar37,(undefined1 *)((long)puVar42 + -0x28));
      plVar53 = (long *)(lVar37 + 8);
      pmVar23 = (mach_header *)*plVar53;
      if (pmVar23 == (mach_header *)0x0) {
        puVar18 = (undefined8 *)0x18;
        __Znwm();
        *puVar18 = *(undefined8 *)((long)puVar42 + -0x28);
        puVar18[1] = 0;
        puVar18[2] = 0xc;
        FUN_109d69eb0(plVar53,puVar18);
        pmVar23 = (mach_header *)*plVar53;
      }
      return pmVar23;
    }
    goto LAB_109d62468;
  }
  if ((1 < uVar26 - 0xb) && (1 < uVar38 - 0xb)) {
    auVar15 = (undefined1  [8])pmVar23;
    pmVar21 = pmVar13;
    pmVar24 = pmVar19;
    FUN_109d62490();
    pmVar52 = (mach_header *)auVar15;
    if ((auVar15 == (undefined1  [8])0x0) &&
       (auVar15 = (undefined1  [8])pmVar23, pmVar21 = pmVar19, pmVar24 = pmVar13, FUN_109d62490(),
       pmVar52 = (mach_header *)auVar15, auVar15 == (undefined1  [8])0x0)) {
      auVar15 = (undefined1  [8])pmVar19;
      FUN_109d661e0();
      if (SUB84(auVar15,0) != 0) {
        if (uVar58 == 0x24) goto LAB_109d61b28;
        if (uVar58 == 0x23) goto LAB_109d61cf8;
      }
      lVar37 = *(long *)pmVar13;
      uVar26 = *(uint *)(lVar37 + 8);
      if (uVar26 == 0x10d) {
        if (uVar58 == 0x21) {
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_418) goto LAB_109d62468;
        }
        else {
          if (uVar58 != 0x20) goto LAB_109d61d8c;
          if ((char)pmVar19->ncmds == '\x10') {
            FUN_109d6b030();
            auVar15 = (undefined1  [8])pmVar19;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_418) goto LAB_109d62468;
          }
          else {
            FUN_109d6b030();
            auVar15 = (undefined1  [8])pmVar13;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_418) goto LAB_109d62468;
          }
        }
        pmVar12 = (mach_header *)0x1e;
        puVar42 = &uStack_3c0;
        pmVar23 = pmStack_3d8;
        pmVar11 = pmStack_3e0;
        pmVar55 = pmStack_3e8;
        pmVar17 = pmStack_3f0;
        pmVar59 = pmStack_3f8;
        pmVar60 = pmStack_400;
        pppppppuVar61 = pppppppuStack_3d0;
        pmVar65 = pmStack_3c8;
code_r0x000109d69a44:
        puVar8 = (undefined1 *)((long)puVar42 + -0x90);
        *(mach_header **)((long)puVar42 + -0x40) = pmVar60;
        *(mach_header **)((long)puVar42 + -0x38) = pmVar59;
        *(mach_header **)((long)puVar42 + -0x30) = pmVar17;
        *(mach_header **)((long)puVar42 + -0x28) = pmVar55;
        *(mach_header **)((long)puVar42 + -0x20) = pmVar11;
        *(mach_header **)((long)puVar42 + -0x18) = pmVar23;
        *(undefined8 ********)((long)puVar42 + -0x10) = pppppppuVar61;
        *(mach_header **)((long)puVar42 + -8) = pmVar65;
        pmVar52 = (mach_header *)0x0;
        *(undefined8 *)((long)puVar42 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        pmVar23 = pmVar12;
        pmVar25 = pmVar13;
        FUN_109d6059c();
        if (pmVar23 == (mach_header *)0x0) {
          pmVar25 = *(mach_header **)pmVar13;
          if (pmVar25 == (mach_header *)0x0) {
            pmVar23 = (mach_header *)0x0;
          }
          else {
            *(mach_header **)((long)puVar42 + -0x58) = pmVar13;
            *(mach_header **)((long)puVar42 + -0x50) = pmVar19;
            lVar37 = **(long **)pmVar25;
            *(char *)((long)puVar42 + -0x88) = (char)pmVar12;
            *(undefined1 *)((long)puVar42 + -0x87) = 0;
            *(undefined2 *)((long)puVar42 + -0x86) = 0;
            *(undefined1 **)((long)puVar42 + -0x80) = (undefined1 *)((long)puVar42 + -0x58);
            *(undefined8 *)((long)puVar42 + -0x78) = 2;
            *(undefined8 *)((long)puVar42 + -0x68) = 0;
            *(undefined8 *)((long)puVar42 + -0x60) = 0;
            *(undefined8 *)((long)puVar42 + -0x70) = 0;
            pmVar23 = (mach_header *)(lVar37 + 0x5d8);
            FUN_109d6aa18(pmVar23,pmVar25,(undefined1 *)((long)puVar42 + -0x88));
          }
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar42 + -0x48)) {
          return pmVar23;
        }
        ___stack_chk_fail();
        lVar20._0_4_ = pmVar23->magic;
        lVar20._4_4_ = pmVar23->cputype;
        *(mach_header **)pmVar23 = pmVar25;
        if (lVar20 == 0) {
          return (mach_header *)0x0;
        }
        *(undefined1 **)((long)puVar42 + -0xa0) = (undefined1 *)((long)puVar42 + -0x10);
        *(code **)((long)puVar42 + -0x98) = FUN_109d69b08;
        FUN_109da2438();
        uVar62 = *(undefined8 *)((long)puVar42 + -0xa0);
        uVar54 = *(undefined8 *)((long)puVar42 + -0x98);
FUN_109da2380:
        *(mach_header **)(puVar8 + -0x20) = pmVar12;
        *(mach_header **)(puVar8 + -0x18) = pmVar52;
        *(undefined8 *)(puVar8 + -0x10) = uVar62;
        *(undefined8 *)(puVar8 + -8) = uVar54;
        uVar58 = *(uint *)(lVar20 + 0x14);
        if ((uVar58 >> 0x1e & 1) == 0) {
          uVar26 = uVar58 << 5;
          uVar22 = (ulong)uVar26;
          pmVar23 = (mach_header *)(lVar20 - uVar22);
          if ((int)uVar58 < 0) {
            if (uVar26 != 0) {
              puVar18 = (undefined8 *)(lVar20 + -0x10);
              do {
                if (puVar18[-2] != 0) {
                  lVar37 = puVar18[-1];
                  *(long *)*puVar18 = lVar37;
                  if (lVar37 != 0) {
                    *(undefined8 *)(lVar37 + 0x10) = *puVar18;
                  }
                }
                puVar18 = puVar18 + -4;
                uVar22 = uVar22 - 0x20;
              } while (uVar22 != 0);
            }
            pmVar23 = (mach_header *)((long)&pmVar23[-1].flags - *(long *)&pmVar23[-1].flags);
          }
          else if (uVar26 != 0) {
            puVar18 = (undefined8 *)(lVar20 + -0x10);
            do {
              if (puVar18[-2] != 0) {
                lVar37 = puVar18[-1];
                *(long *)*puVar18 = lVar37;
                if (lVar37 != 0) {
                  *(undefined8 *)(lVar37 + 0x10) = *puVar18;
                }
              }
              puVar18 = puVar18 + -4;
              uVar22 = uVar22 - 0x20;
            } while (uVar22 != 0);
          }
        }
        else {
          pmVar23 = (mach_header *)(lVar20 + -8);
          FUN_109da2158(*(long *)pmVar23,*(long *)pmVar23 + ((ulong)uVar58 & 0x7ffffff) * 0x20,1);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(pmVar23);
        return pmVar23;
      }
LAB_109d61d8c:
      cVar2 = (char)pmVar13->ncmds;
      if (cVar2 == '\x11') {
        if ((char)pmVar19->ncmds != '\x11') goto LAB_109d61dfc;
        auVar15 = (undefined1  [8])&pmVar13->flags;
        pmVar21 = (mach_header *)&pmVar19->flags;
        FUN_109d8d3ac();
      }
      else {
        if ((cVar2 != '\x10') || ((char)pmVar19->ncmds != '\x10')) {
LAB_109d61dfc:
          if ((uVar26 & 0xfe) != 0x12) {
            if (((((uVar26 & 0xff) < 4) || ((uVar26 & 0xff) == 5)) || ((uVar26 & 0xfd) == 4)) &&
               ((cVar2 == '\x05' || ((char)pmVar19->ncmds == '\x05')))) {
              func_0x000109d62574(pmVar13,pmVar19);
                    /* WARNING: Could not recover jumptable at 0x000109d61ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)((ulong)*(ushort *)(&UNK_10e043d86 + ((ulong)pmVar13 & 0xffffffff) * 2) * 4
                        + 0x109d61bf4))();
              return pmVar13;
            }
            FUN_109d626e0(pmVar13,pmVar19,uVar58 - 0x26 < 4);
                    /* WARNING: Could not recover jumptable at 0x000109d61fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((ulong)(byte)(&UNK_10e043d7a)[(int)pmVar13 - 0x20] * 4 + 0x109d61fd4))();
            return pmVar13;
          }
          pmVar52 = (mach_header *)0x0;
          pmVar21 = pmVar13;
          FUN_109d65ff0();
          if (pmVar21 != (mach_header *)0x0) {
            pmVar52 = (mach_header *)0x0;
            pmVar23 = pmVar19;
            FUN_109d65ff0();
            if (pmVar23 != (mach_header *)0x0) {
              uVar26 = *(uint *)(lVar37 + 0x20);
              uVar22 = 0x100000000;
              if (*(char *)(lVar37 + 8) != '\x13') {
                uVar22 = 0;
              }
              auVar15 = (undefined1  [8])(ulong)(uVar58 & 0xffff);
              param_5 = (mach_header *)0x0;
              FUN_109d69a34();
              pmVar24 = pmVar23;
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_418) {
                pmVar11 = (mach_header *)(uVar22 | uVar26);
                pmVar52 = pmStack_3d8;
                unaff_x20 = pmStack_3e0;
                unaff_x21 = pmStack_3e8;
                unaff_x22 = pmStack_3f0;
                unaff_x23 = pmStack_3f8;
                unaff_x24 = pmStack_400;
                pppppppuVar61 = pppppppuStack_3d0;
                pmVar50 = pmStack_3c8;
                goto code_r0x000109d66c68;
              }
              goto LAB_109d62468;
            }
          }
          pmVar21 = pmVar52;
          if (*(char *)(lVar37 + 8) == '\x13') {
            auVar15 = (undefined1  [8])(mach_header *)0x0;
            pmVar52 = (mach_header *)0x0;
          }
          else {
            unaff_x24 = &mStack_438;
            uStack_448 = unaff_x24;
            uStack_440 = 0x400000000;
            uVar26 = *(uint *)(lVar37 + 0x20);
            if (uVar26 == 0) {
              pmVar21 = (mach_header *)0x0;
            }
            else {
              uVar22 = 0;
              lVar37 = *(long *)**(undefined8 **)pmVar13;
              do {
                lVar43 = lVar37 + 0x798;
                FUN_109d66880(lVar43,uVar22,0);
                pmVar23 = pmVar13;
                func_0x000109d69980(pmVar13,lVar43,0);
                lVar43 = lVar37 + 0x798;
                FUN_109d66880(lVar43,uVar22,0);
                pmVar24 = pmVar19;
                func_0x000109d69980(pmVar19,lVar43,0);
                uVar14 = (ulong)(uVar58 & 0xffff);
                FUN_109d69a34(uVar14,pmVar23,pmVar24,0);
                FUN_109d31fec(&uStack_448,uVar14);
                uVar22 = uVar22 + 1;
              } while (uVar26 != uVar22);
              pmVar21 = (mach_header *)(uStack_440 & 0xffffffff);
            }
            pmVar52 = uStack_448;
            FUN_109d67790(uStack_448);
            auVar15 = (undefined1  [8])uStack_448;
            if (uStack_448 != unaff_x24) {
              _free();
            }
          }
          goto LAB_109d61bf4;
        }
        auVar15 = (undefined1  [8])&pmVar13->flags;
        pmVar21 = (mach_header *)&pmVar19->flags;
        FUN_109d8d154();
      }
      pmVar24 = pmVar23;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_418) goto LAB_109d62468;
      goto LAB_109d61cb8;
    }
LAB_109d61bf4:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_418) {
      return pmVar52;
    }
    goto LAB_109d62468;
  }
  if ((uVar58 & 0xfffffffe) == 0x20) {
LAB_109d61c38:
    puVar42 = &uStack_3c0;
    pmVar19 = pmStack_3d8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_418) {
SUB_109d677ec:
      *(mach_header **)((long)puVar42 + -0x20) = pmVar11;
      *(mach_header **)((long)puVar42 + -0x18) = pmVar19;
      *(undefined8 ********)((long)puVar42 + -0x10) = pppppppuVar61;
      *(code **)((long)puVar42 + -8) = pcVar64;
      *(mach_header **)((long)puVar42 + -0x28) = unaff_x21;
      lVar37 = **(long **)unaff_x21 + 0x548;
      FUN_109d6f374(lVar37,(undefined1 *)((long)puVar42 + -0x28));
      plVar53 = (long *)(lVar37 + 8);
      pmVar23 = (mach_header *)*plVar53;
      if (pmVar23 == (mach_header *)0x0) {
        puVar18 = (undefined8 *)0x18;
        __Znwm();
        *puVar18 = *(undefined8 *)((long)puVar42 + -0x28);
        puVar18[1] = 0;
        puVar18[2] = 0xb;
        func_0x000109d69dd0(plVar53,puVar18);
        pmVar23 = (mach_header *)*plVar53;
      }
      return pmVar23;
    }
  }
  else {
    if (uVar58 - 0x20 < 10) {
      if (pmVar13 == pmVar19) goto LAB_109d61c38;
      bVar9 = (uVar58 - 0x23 & 0xfffffff9) == 0;
    }
    else {
      bVar9 = uVar58 - 8 < 7;
    }
    pmVar21 = (mach_header *)(ulong)bVar9;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_418) {
LAB_109d61cb8:
      pmVar23 = (mach_header *)0x0;
      puVar18 = &uStack_3c0;
      pmVar52 = pmStack_3d8;
      pmVar11 = pmStack_3e0;
      pmVar55 = pmStack_3e8;
      unaff_x22 = pmStack_3f0;
      unaff_x23 = pmStack_3f8;
      unaff_x24 = pmStack_400;
      pppppppuVar61 = pppppppuStack_3d0;
      pmVar50 = pmStack_3c8;
code_r0x000109d66880:
      do {
        *(mach_header **)((long)puVar18 + -0x20) = pmVar11;
        *(mach_header **)((long)puVar18 + -0x18) = pmVar52;
        *(undefined8 ********)((long)puVar18 + -0x10) = pppppppuVar61;
        *(mach_header **)((long)puVar18 + -8) = pmVar50;
        auVar15 = (undefined1  [8])unaff_x21;
        if ((unaff_x21->cpusubtype & 0xfe) == 0x12) {
          auVar15 = (undefined1  [8])**(undefined8 **)&unaff_x21->ncmds;
        }
        FUN_109d678e8();
        if ((unaff_x21->cpusubtype & 0xfe) != 0x12) {
          return (mach_header *)auVar15;
        }
        uVar22 = 0x100000000;
        if (((unaff_x21->cpusubtype ^ 0xffffffff) & 0x13) != 0) {
          uVar22 = 0;
        }
        pmVar11 = (mach_header *)(uVar22 | unaff_x21[1].magic);
        pmVar52 = *(mach_header **)((long)puVar18 + -0x18);
        unaff_x20 = *(mach_header **)((long)puVar18 + -0x20);
        unaff_x21 = pmVar55;
        pppppppuVar61 = *(undefined8 ********)((long)puVar18 + -0x10);
        pmVar50 = *(mach_header **)((long)puVar18 + -8);
code_r0x000109d66c68:
        while( true ) {
          *(mach_header **)((long)puVar18 + -0x40) = unaff_x24;
          *(mach_header **)((long)puVar18 + -0x38) = unaff_x23;
          *(mach_header **)((long)puVar18 + -0x30) = unaff_x22;
          *(mach_header **)((long)puVar18 + -0x28) = unaff_x21;
          *(mach_header **)((long)puVar18 + -0x20) = unaff_x20;
          *(mach_header **)((long)puVar18 + -0x18) = pmVar52;
          *(undefined8 ********)((long)puVar18 + -0x10) = pppppppuVar61;
          *(mach_header **)((long)puVar18 + -8) = pmVar50;
          *(undefined8 *)((long)puVar18 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          *(undefined1 (*) [8])((long)puVar18 + -0x160) = auVar15;
          if ((ulong)pmVar11 >> 0x20 != 0) break;
          if ((((mach_header *)auVar15)->ncmds & 0xfe) != 0x10) {
LAB_109d66d7c:
            pmVar23 = (mach_header *)((long)puVar18 + -0x160);
            FUN_109d335ac((undefined1 *)((long)puVar18 + -0x158),(ulong)pmVar11 & 0xffffffff);
            pmVar52 = *(mach_header **)((long)puVar18 + -0x158);
            pmVar21 = (mach_header *)(ulong)*(uint *)((long)puVar18 + -0x150);
            FUN_109d67790(pmVar52);
LAB_109d66e4c:
            pmVar17 = *(mach_header **)((long)puVar18 + -0x158);
            if (pmVar17 != (mach_header *)((long)puVar18 + -0x148)) {
              _free();
            }
            pmVar55 = unaff_x21;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar18 + -0x48)) {
              return pmVar52;
            }
            goto LAB_109d66e9c;
          }
          uVar58 = *(uint *)(*(long *)auVar15 + 8) & 0xff;
          if ((3 < uVar58) &&
             ((uVar58 != 0xd ||
              (uVar58 = *(uint *)(*(long *)auVar15 + 8) >> 8, uVar26 = uVar58 - 8 >> 3,
              7 < (uVar26 | uVar58 << 0x1d) || (1 << (ulong)(uVar26 & 0x1f) & 0x8bU) == 0))))
          goto LAB_109d66d7c;
          pmVar17 = pmVar11;
          pmVar21 = (mach_header *)auVar15;
          pmVar55 = unaff_x21;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)puVar18 + -0x48))
          goto LAB_109d66e9c;
          uVar62 = *(undefined8 *)((long)puVar18 + -0x30);
          pmVar52 = *(mach_header **)((long)puVar18 + -0x28);
          unaff_x24 = *(mach_header **)((long)puVar18 + -0x40);
          unaff_x23 = *(mach_header **)((long)puVar18 + -0x38);
          *(undefined8 *)((long)puVar18 + -0x30) = uVar62;
          *(mach_header **)((long)puVar18 + -0x28) = pmVar52;
          *(undefined8 *)((long)puVar18 + -0x20) = *(undefined8 *)((long)puVar18 + -0x20);
          *(undefined8 *)((long)puVar18 + -0x18) = *(undefined8 *)((long)puVar18 + -0x18);
          *(undefined8 *)((long)puVar18 + -0x10) = *(undefined8 *)((long)puVar18 + -0x10);
          *(undefined8 *)((long)puVar18 + -8) = *(undefined8 *)((long)puVar18 + -8);
          *(undefined8 *)((long)puVar18 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          cVar2 = (char)((mach_header *)auVar15)->ncmds;
          if ((auVar15 != (undefined1  [8])0x0) && (cVar2 == '\x10')) {
            pdVar36 = &((mach_header *)auVar15)->flags;
            uVar58 = *(uint *)(*(long *)auVar15 + 8) & 0xff;
            uVar26 = *(uint *)(*(long *)auVar15 + 8) >> 8;
            if (uVar58 != 0xd || uVar26 != 8) {
              uVar22 = (ulong)pmVar11 & 0xffffffff;
              if (uVar58 != 0xd || uVar26 != 0x10) {
                if ((uVar58 == 0xd) && (uVar26 == 0x20)) {
                  if (0x40 < ((mach_header *)((long)auVar15 + 0x20))->magic) {
                    pdVar36 = *(dword **)pdVar36;
                  }
                  FUN_109d71a9c((undefined1 *)((long)puVar18 + -200),uVar22,*pdVar36);
                  pmVar50 = *(mach_header **)((long)puVar18 + -200);
                  pmVar21 = (mach_header *)(ulong)*(uint *)((long)puVar18 + -0xc0);
                  pmVar23 = (mach_header *)(*(long *)**(undefined8 **)auVar15 + 0x798);
                  func_0x000109da00ec(pmVar23,pmVar21);
                  auVar15 = (undefined1  [8])((long)pmVar21 << 2);
                  FUN_109d6b230(pmVar50);
                }
                else {
                  if (0x40 < ((mach_header *)((long)auVar15 + 0x20))->magic) {
                    pdVar36 = *(dword **)pdVar36;
                  }
                  FUN_109d71ba8((undefined1 *)((long)puVar18 + -200),uVar22,*(undefined8 *)pdVar36);
                  pmVar50 = *(mach_header **)((long)puVar18 + -200);
                  pmVar21 = (mach_header *)(ulong)*(uint *)((long)puVar18 + -0xc0);
                  pmVar23 = (mach_header *)(*(long *)**(undefined8 **)auVar15 + 0x7b0);
                  func_0x000109da00ec(pmVar23,pmVar21);
                  auVar15 = (undefined1  [8])((long)pmVar21 << 3);
                  FUN_109d6b230(pmVar50);
                }
                goto LAB_109d693fc;
              }
              if (0x40 < ((mach_header *)((long)auVar15 + 0x20))->magic) {
                pdVar36 = *(dword **)pdVar36;
              }
              FUN_109d71994((undefined1 *)((long)puVar18 + -200),uVar22,(short)*pdVar36);
              pmVar50 = *(mach_header **)((long)puVar18 + -200);
              pmVar21 = *(mach_header **)((long)puVar18 + -0xc0);
              pmVar23 = (mach_header *)(*(long *)**(undefined8 **)auVar15 + 0x780);
              func_0x000109da00ec(pmVar23,pmVar21);
              auVar15 = (undefined1  [8])((long)pmVar21 << 1);
              FUN_109d6b230(pmVar50);
              goto LAB_109d69384;
            }
            if (0x40 < ((mach_header *)((long)auVar15 + 0x20))->magic) {
              pdVar36 = *(dword **)pdVar36;
            }
            dVar6 = *pdVar36;
            pmVar52 = (mach_header *)((long)puVar18 + -0xb0);
            *(mach_header **)((long)puVar18 + -200) = pmVar52;
            *(undefined8 *)((long)puVar18 + -0xb8) = 0x10;
            *(undefined8 *)((long)puVar18 + -0xc0) = 0;
            FUN_109d32990((undefined1 *)((long)puVar18 + -200),(ulong)pmVar11 & 0xffffffff,
                          (char)dVar6);
            pmVar50 = *(mach_header **)((long)puVar18 + -200);
            pmVar21 = *(mach_header **)((long)puVar18 + -0xc0);
            pmVar23 = (mach_header *)(*(long *)**(undefined8 **)auVar15 + 0x768);
            func_0x000109da00ec(pmVar23,pmVar21);
            auVar15 = (undefined1  [8])pmVar21;
            FUN_109d6b230(pmVar50);
            pmVar11 = *(mach_header **)((long)puVar18 + -200);
            if (pmVar11 != pmVar52) {
LAB_109d69414:
              _free();
            }
LAB_109d69418:
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar18 + -0x38)) {
              return pmVar50;
            }
LAB_109d69448:
            ___stack_chk_fail();
            if (*(undefined1 **)((long)puVar18 + -200) != (undefined1 *)((long)puVar18 + -0xb8)) {
              _free();
            }
            pmVar50 = pmVar11;
            __Unwind_Resume();
            pmVar19 = (mach_header *)((long)puVar18 + -0x160);
            *(undefined8 *)((long)puVar18 + -0x110) = uVar62;
            *(mach_header **)((long)puVar18 + -0x108) = pmVar52;
            *(mach_header **)((long)puVar18 + -0x100) = pmVar21;
            *(mach_header **)((long)puVar18 + -0xf8) = pmVar11;
            *(undefined1 **)((long)puVar18 + -0xf0) = (undefined1 *)((long)puVar18 + -0x10);
            *(code **)((long)puVar18 + -0xe8) = FUN_109d694e4;
            *(undefined8 *)((long)puVar18 + -0x118) =
                 *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
            pmVar11 = pmVar50;
            pmVar21 = (mach_header *)auVar15;
            pmVar12 = pmVar23;
            pmVar52 = param_5;
            FUN_109d5fbf8();
            if (pmVar11 == (mach_header *)0x0) {
              pmVar21 = *(mach_header **)pmVar50;
              if (pmVar21 == param_5) {
                pmVar11 = (mach_header *)0x0;
              }
              else {
                *(mach_header **)((long)puVar18 + -0x130) = pmVar50;
                *(undefined1 (*) [8])((long)puVar18 + -0x128) = auVar15;
                *(mach_header **)((long)puVar18 + -0x120) = pmVar23;
                lVar37 = **(long **)pmVar21;
                *(undefined4 *)((long)puVar18 + -0x160) = 0x3e;
                *(undefined1 **)((long)puVar18 + -0x158) = (undefined1 *)((long)puVar18 + -0x130);
                *(undefined8 *)((long)puVar18 + -0x150) = 3;
                *(undefined8 *)((long)puVar18 + -0x140) = 0;
                *(undefined8 *)((long)puVar18 + -0x138) = 0;
                *(undefined8 *)((long)puVar18 + -0x148) = 0;
                pmVar11 = (mach_header *)(lVar37 + 0x5d8);
                FUN_109d6aa18();
                pmVar12 = pmVar19;
              }
            }
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar18 + -0x118)) {
              return pmVar11;
            }
            ___stack_chk_fail();
            puVar8 = (undefined1 *)((long)puVar18 + -0x1f0);
            *(mach_header **)((long)puVar18 + -0x1a0) = unaff_x24;
            *(mach_header **)((long)puVar18 + -0x198) = unaff_x23;
            *(mach_header **)((long)puVar18 + -400) = param_5;
            *(mach_header **)((long)puVar18 + -0x188) = pmVar50;
            *(undefined1 (*) [8])((long)puVar18 + -0x180) = auVar15;
            *(mach_header **)((long)puVar18 + -0x178) = pmVar23;
            *(undefined1 **)((long)puVar18 + -0x170) = (undefined1 *)((long)puVar18 + -0xf0);
            *(code **)((long)puVar18 + -0x168) = FUN_109d6959c;
            *(undefined8 *)((long)puVar18 + -0x1a8) =
                 *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
            pmVar23 = pmVar11;
            pmVar50 = pmVar21;
            FUN_109d5fe3c();
            if (pmVar23 == (mach_header *)0x0) {
              pmVar19 = *(mach_header **)(*(long *)pmVar11 + 0x18);
              uVar22 = 0x100000000;
              if (*(char *)(*(long *)pmVar11 + 8) != '\x13') {
                uVar22 = 0;
              }
              pmVar50 = (mach_header *)(uVar22 | (ulong)pmVar52 & 0xffffffff);
              FUN_109da004c();
              if (pmVar19 == pmVar25) {
                pmVar23 = (mach_header *)0x0;
              }
              else {
                *(mach_header **)((long)puVar18 + -0x1b8) = pmVar11;
                *(mach_header **)((long)puVar18 + -0x1b0) = pmVar21;
                lVar37 = **(long **)pmVar19;
                *(undefined4 *)((long)puVar18 + -0x1e8) = 0x3f;
                *(undefined1 **)((long)puVar18 + -0x1e0) = (undefined1 *)((long)puVar18 + -0x1b8);
                *(undefined8 *)((long)puVar18 + -0x1d8) = 2;
                *(mach_header **)((long)puVar18 + -0x1d0) = pmVar12;
                *(mach_header **)((long)puVar18 + -0x1c8) = pmVar52;
                *(undefined8 *)((long)puVar18 + -0x1c0) = 0;
                pmVar23 = (mach_header *)(lVar37 + 0x5d8);
                FUN_109d6aa18(pmVar23,pmVar19,(undefined1 *)((long)puVar18 + -0x1e8));
                pmVar50 = pmVar19;
              }
            }
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar18 + -0x1a8)) {
              return pmVar23;
            }
            ___stack_chk_fail();
            lVar20._0_4_ = pmVar23->magic;
            lVar20._4_4_ = pmVar23->cputype;
            *(mach_header **)pmVar23 = pmVar50;
            if (lVar20 == 0) {
              return (mach_header *)0x0;
            }
            *(undefined1 **)((long)puVar18 + -0x200) = (undefined1 *)((long)puVar18 + -0x170);
            *(code **)((long)puVar18 + -0x1f8) = FUN_109d6967c;
            FUN_109da2438();
            uVar62 = *(undefined8 *)((long)puVar18 + -0x200);
            uVar54 = *(undefined8 *)((long)puVar18 + -0x1f8);
            goto FUN_109da2380;
          }
          if ((auVar15 != (undefined1  [8])0x0) && (cVar2 == '\x11')) {
            bVar44 = *(byte *)(*(long *)auVar15 + 8);
            if (bVar44 < 2) {
              if (bVar44 == 0) {
                FUN_109d323e4((undefined1 *)((long)puVar18 + -0xd8),&((mach_header *)auVar15)->flags
                             );
                puVar7 = (undefined1 *)((long)puVar18 + -0xd8);
                func_0x000109d30394(puVar7,0xffffffffffffffff);
                FUN_109d71994((undefined1 *)((long)puVar18 + -200),(ulong)pmVar11 & 0xffffffff,
                              puVar7);
                if ((0x40 < *(uint *)((long)puVar18 + -0xd0)) &&
                   (*(long *)((long)puVar18 + -0xd8) != 0)) {
                  __ZdaPv();
                }
                pmVar23 = *(mach_header **)auVar15;
                pmVar50 = *(mach_header **)((long)puVar18 + -200);
                pmVar21 = *(mach_header **)((long)puVar18 + -0xc0);
                func_0x000109da00ec(pmVar23,pmVar21);
                auVar15 = (undefined1  [8])((long)pmVar21 << 1);
                FUN_109d6b230(pmVar50);
              }
              else {
                if (bVar44 != 1) goto LAB_109d69254;
                FUN_109d323e4((undefined1 *)((long)puVar18 + -0xd8),&((mach_header *)auVar15)->flags
                             );
                puVar7 = (undefined1 *)((long)puVar18 + -0xd8);
                func_0x000109d30394(puVar7,0xffffffffffffffff);
                FUN_109d71994((undefined1 *)((long)puVar18 + -200),(ulong)pmVar11 & 0xffffffff,
                              puVar7);
                if ((0x40 < *(uint *)((long)puVar18 + -0xd0)) &&
                   (*(long *)((long)puVar18 + -0xd8) != 0)) {
                  __ZdaPv();
                }
                pmVar23 = *(mach_header **)auVar15;
                pmVar50 = *(mach_header **)((long)puVar18 + -200);
                pmVar21 = *(mach_header **)((long)puVar18 + -0xc0);
                func_0x000109da00ec(pmVar23,pmVar21);
                auVar15 = (undefined1  [8])((long)pmVar21 << 1);
                FUN_109d6b230(pmVar50);
              }
LAB_109d69384:
              pmVar11 = *(mach_header **)((long)puVar18 + -200);
              pmVar19 = (mach_header *)((long)puVar18 + -0xb0);
            }
            else {
              if (bVar44 == 2) {
                FUN_109d323e4((undefined1 *)((long)puVar18 + -0xd8),&((mach_header *)auVar15)->flags
                             );
                puVar7 = (undefined1 *)((long)puVar18 + -0xd8);
                func_0x000109d30394(puVar7,0xffffffffffffffff);
                FUN_109d71a9c((undefined1 *)((long)puVar18 + -200),(ulong)pmVar11 & 0xffffffff,
                              puVar7);
                if ((0x40 < *(uint *)((long)puVar18 + -0xd0)) &&
                   (*(long *)((long)puVar18 + -0xd8) != 0)) {
                  __ZdaPv();
                }
                pmVar23 = *(mach_header **)auVar15;
                pmVar50 = *(mach_header **)((long)puVar18 + -200);
                pmVar21 = (mach_header *)(ulong)*(uint *)((long)puVar18 + -0xc0);
                func_0x000109da00ec(pmVar23,pmVar21);
                auVar15 = (undefined1  [8])((long)pmVar21 << 2);
                FUN_109d6b230(pmVar50);
              }
              else {
                if (bVar44 != 3) goto LAB_109d69254;
                FUN_109d323e4((undefined1 *)((long)puVar18 + -0xd8),&((mach_header *)auVar15)->flags
                             );
                puVar7 = (undefined1 *)((long)puVar18 + -0xd8);
                func_0x000109d30394(puVar7,0xffffffffffffffff);
                FUN_109d71ba8((undefined1 *)((long)puVar18 + -200),(ulong)pmVar11 & 0xffffffff,
                              puVar7);
                if ((0x40 < *(uint *)((long)puVar18 + -0xd0)) &&
                   (*(long *)((long)puVar18 + -0xd8) != 0)) {
                  __ZdaPv();
                }
                pmVar23 = *(mach_header **)auVar15;
                pmVar50 = *(mach_header **)((long)puVar18 + -200);
                pmVar21 = (mach_header *)(ulong)*(uint *)((long)puVar18 + -0xc0);
                func_0x000109da00ec(pmVar23,pmVar21);
                auVar15 = (undefined1  [8])((long)pmVar21 << 3);
                FUN_109d6b230(pmVar50);
              }
LAB_109d693fc:
              pmVar11 = *(mach_header **)((long)puVar18 + -200);
              pmVar19 = (mach_header *)((long)puVar18 + -0xb8);
            }
            if (pmVar11 != pmVar19) goto LAB_109d69414;
            goto LAB_109d69418;
          }
LAB_109d69254:
          pmVar21 = pmVar11;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)puVar18 + -0x38))
          goto LAB_109d69448;
          pmVar11 = (mach_header *)((ulong)pmVar11 & 0xffffffff);
          pmVar52 = *(mach_header **)((long)puVar18 + -0x18);
          unaff_x20 = *(mach_header **)((long)puVar18 + -0x20);
          unaff_x21 = *(mach_header **)((long)puVar18 + -0x28);
          unaff_x22 = *(mach_header **)((long)puVar18 + -0x30);
          pppppppuVar61 = *(undefined8 ********)((long)puVar18 + -0x10);
          pmVar50 = *(mach_header **)((long)puVar18 + -8);
        }
        unaff_x21 = *(mach_header **)auVar15;
        pmVar21 = pmVar11;
        FUN_109da004c();
        pmVar17 = (mach_header *)auVar15;
        FUN_109d661e0();
        pmVar55 = unaff_x21;
        if ((int)pmVar17 == 0) {
          if (1 < (byte)((mach_header *)auVar15)->ncmds - 0xb) {
            unaff_x22 = (mach_header *)((ulong)pmVar11 & 0xffffffff);
            unaff_x23 = (mach_header *)**(undefined8 **)unaff_x21;
            pmVar11 = unaff_x21;
            FUN_109d67e38();
            pdVar36 = &unaff_x23[0x3d].ncmds;
            FUN_109d66880(pdVar36,0,0);
            pmVar52 = pmVar11;
            FUN_109d694e4(pmVar11,auVar15,pdVar36,0);
            *(undefined4 *)((long)puVar18 + -0x164) = 0;
            FUN_109d5d540((undefined1 *)((long)puVar18 + -0x158),unaff_x22,
                          (undefined1 *)((long)puVar18 + -0x164));
            pmVar23 = *(mach_header **)((long)puVar18 + -0x158);
            param_5 = (mach_header *)(ulong)*(uint *)((long)puVar18 + -0x150);
            pmVar25 = (mach_header *)0x0;
            pmVar21 = pmVar11;
            FUN_109d6959c(pmVar52);
            goto LAB_109d66e4c;
          }
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar18 + -0x48)) {
            puVar42 = puVar18;
            pmVar19 = *(mach_header **)((long)puVar18 + -0x18);
            pmVar11 = *(mach_header **)((long)puVar18 + -0x20);
            pppppppuVar61 = *(undefined8 ********)((long)puVar18 + -0x10);
            pcVar64 = (code *)*(mach_header **)((long)puVar18 + -8);
            goto SUB_109d677ec;
          }
        }
        else if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar18 + -0x48)) {
          uVar62 = *(undefined8 *)((long)puVar18 + -0x10);
          uVar63 = *(undefined8 *)((long)puVar18 + -8);
          uVar54 = *(undefined8 *)((long)puVar18 + -0x20);
          uVar51 = *(undefined8 *)((long)puVar18 + -0x18);
          puVar42 = puVar18;
          goto SUB_109d66a94;
        }
LAB_109d66e9c:
        ___stack_chk_fail();
        if (*(undefined1 **)((long)puVar18 + -0x158) != (undefined1 *)((long)puVar18 + -0x148)) {
          _free();
        }
        unaff_x21 = pmVar17;
        __Unwind_Resume();
        puVar42 = (undefined8 *)((long)puVar18 + -0x170);
        pmVar19 = unaff_x24;
        pppppppuVar61 = (undefined8 *******)((long)puVar18 + -0x10);
        pmVar59 = (mach_header *)FUN_109d66ed0;
code_r0x000109d66ed0:
        puVar18 = puVar42;
        *(mach_header **)((long)puVar18 + -0x30) = unaff_x22;
        *(mach_header **)((long)puVar18 + -0x28) = pmVar55;
        *(mach_header **)((long)puVar18 + -0x20) = pmVar11;
        *(mach_header **)((long)puVar18 + -0x18) = pmVar17;
        *(undefined8 ********)((long)puVar18 + -0x10) = pppppppuVar61;
        *(mach_header **)((long)puVar18 + -8) = pmVar59;
        pppppppuVar61 = (undefined8 *******)((long)puVar18 + -0x10);
        *(undefined8 *)((long)puVar18 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uVar26 = unaff_x21->cpusubtype;
        uVar58 = uVar26 & 0xff;
        unaff_x24 = pmVar19;
        if ((unaff_x21 == (mach_header *)0x0) || (uVar58 != 0xd)) {
          if ((3 < uVar58 && uVar58 != 5) && (uVar26 & 0xfd) != 4) {
            pmVar11 = (mach_header *)(ulong)unaff_x21[1].magic;
            pmVar55 = &MACH_HEADER;
            if (uVar58 != 0x13) {
              pmVar55 = (mach_header *)0x0;
            }
            auVar15 = *(undefined1 (*) [8])&unaff_x21->flags;
            FUN_109d66ed0();
            pmVar24 = pmVar23;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)puVar18 + -0x38))
            goto LAB_109d67010;
            pmVar11 = (mach_header *)((ulong)pmVar55 | (ulong)pmVar11);
            pmVar52 = *(mach_header **)((long)puVar18 + -0x18);
            unaff_x20 = *(mach_header **)((long)puVar18 + -0x20);
            unaff_x21 = *(mach_header **)((long)puVar18 + -0x28);
            unaff_x22 = *(mach_header **)((long)puVar18 + -0x30);
            pppppppuVar61 = *(undefined8 ********)((long)puVar18 + -0x10);
            pmVar50 = *(mach_header **)((long)puVar18 + -8);
            goto code_r0x000109d66c68;
          }
          FUN_109d9f580(unaff_x21);
          FUN_109defa38((undefined1 *)((long)puVar18 + -0x58));
          pmVar52 = *(mach_header **)unaff_x21;
          pmVar11 = (mach_header *)((long)puVar18 + -0x58);
          pmVar21 = (mach_header *)((long)puVar18 + -0x58);
          FUN_109d668f4(pmVar52);
          auVar15 = (undefined1  [8])((long)puVar18 + -0x50);
          FUN_109d32234();
        }
        else {
          pmVar52 = *(mach_header **)unaff_x21;
          pmVar23 = (mach_header *)0xffffffffffffffff;
          param_5 = (mach_header *)0x1;
          func_0x000109d301b0((undefined1 *)((long)puVar18 + -0x58),uVar26 >> 8);
          pmVar21 = (mach_header *)((long)puVar18 + -0x58);
          FUN_109d66bc4();
          auVar15 = (undefined1  [8])pmVar52;
          if ((0x40 < *(uint *)((long)puVar18 + -0x50)) &&
             (auVar15 = *(undefined1 (*) [8])((long)puVar18 + -0x58),
             auVar15 != (undefined1  [8])0x0)) {
            __ZdaPv();
          }
        }
        pmVar24 = pmVar23;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar18 + -0x38)) {
          return pmVar52;
        }
LAB_109d67010:
        ___stack_chk_fail();
        FUN_109d32234(&pmVar11->cpusubtype);
        pcVar64 = FUN_109d67050;
        pmVar23 = (mach_header *)auVar15;
        __Unwind_Resume();
        puVar7 = (undefined1 *)((long)puVar18 + -0x60);
        while( true ) {
          *(mach_header **)(puVar7 + -0x20) = pmVar11;
          *(undefined1 (*) [8])(puVar7 + -0x18) = auVar15;
          *(undefined8 ********)(puVar7 + -0x10) = pppppppuVar61;
          *(code **)(puVar7 + -8) = pcVar64;
          *(undefined8 *)(puVar7 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          unaff_x21 = (mach_header *)(*(undefined8 **)pmVar23)[3];
          if ((unaff_x21->cpusubtype & 0xfc) == 0) {
            pmVar23 = (mach_header *)**(undefined8 **)pmVar23;
            func_0x000109d6b510(puVar7 + -0x48);
            pmVar11 = (mach_header *)(puVar7 + -0x48);
            pmVar21 = (mach_header *)(puVar7 + -0x48);
            FUN_109d668f4(pmVar23);
            pmVar52 = (mach_header *)(puVar7 + -0x40);
            FUN_109d32234();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x28)) {
              return pmVar23;
            }
          }
          else {
            FUN_109d6b464();
            pmVar52 = pmVar23;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x28)) {
              pmVar23 = (mach_header *)0x0;
              puVar18 = (undefined8 *)puVar7;
              pmVar52 = *(mach_header **)(puVar7 + -0x18);
              pmVar11 = *(mach_header **)(puVar7 + -0x20);
              pppppppuVar61 = *(undefined8 ********)(puVar7 + -0x10);
              pmVar50 = *(mach_header **)(puVar7 + -8);
              goto code_r0x000109d66880;
            }
          }
          ___stack_chk_fail();
          FUN_109d32234(&pmVar11->cpusubtype);
          pmVar23 = pmVar52;
          __Unwind_Resume();
          *(mach_header **)(puVar7 + -0x80) = unaff_x22;
          *(mach_header **)(puVar7 + -0x78) = pmVar55;
          *(mach_header **)(puVar7 + -0x70) = pmVar11;
          *(mach_header **)(puVar7 + -0x68) = pmVar52;
          *(undefined1 **)(puVar7 + -0x60) = puVar7 + -0x10;
          *(code **)(puVar7 + -0x58) = FUN_109d67130;
          if ((pmVar21 == (mach_header *)0x0) || ((char)pmVar21->ncmds != '\x10')) {
            return (mach_header *)0x0;
          }
          pdVar36 = &pmVar21->flags;
          uVar58 = pmVar21[1].magic;
          if (0x40 < uVar58) {
            pdVar34 = pdVar36;
            func_0x000109df08dc();
            if (0x40 < uVar58 - (int)pdVar34) {
              return (mach_header *)0x0;
            }
            pdVar36 = *(dword **)pdVar36;
          }
          uVar58 = *pdVar36;
          pmVar21 = (mach_header *)(ulong)uVar58;
          pppppppuVar61 = *(undefined8 ********)(puVar7 + -0x60);
          pcVar64 = *(code **)(puVar7 + -0x58);
          pmVar11 = *(mach_header **)(puVar7 + -0x70);
          auVar15 = *(undefined1 (*) [8])(puVar7 + -0x68);
          unaff_x22 = *(mach_header **)(puVar7 + -0x80);
          pmVar55 = *(mach_header **)(puVar7 + -0x78);
          bVar44 = (byte)pmVar23->ncmds;
          if ((pmVar23 != (mach_header *)0x0) && (0xfc < (byte)(bVar44 - 0xb))) {
            uVar22 = (ulong)pmVar23->sizeofcmds & 0x7ffffff;
            if (uVar58 < (uint)uVar22) {
              return *(mach_header **)(pmVar23 + ((long)pmVar21 - uVar22));
            }
            return (mach_header *)0x0;
          }
          lVar37 = *(long *)pmVar23;
          bVar3 = *(byte *)(lVar37 + 8);
          if ((pmVar23 != (mach_header *)0x0) && (bVar44 == 0xd)) break;
          if (bVar3 == 0x13) {
            return (mach_header *)0x0;
          }
          if (bVar44 == 0xc) {
            if ((bVar3 == 0x11) || ((bVar3 & 0xfe) == 0x12)) {
              uVar26 = *(uint *)(lVar37 + 0x20);
            }
            else {
              uVar26 = *(uint *)(lVar37 + 0xc);
            }
            if (uVar26 <= uVar58) {
              return (mach_header *)0x0;
            }
            if (bVar3 == 0x11 || (bVar3 & 0xfe) == 0x12) {
              puVar18 = (undefined8 *)(lVar37 + 0x18);
            }
            else {
              puVar18 = (undefined8 *)(*(long *)(lVar37 + 0x10) + (long)pmVar21 * 8);
            }
            unaff_x21 = (mach_header *)*puVar18;
            puVar42 = (undefined8 *)(puVar7 + -0x50);
            pmVar23 = (mach_header *)auVar15;
            goto code_r0x000109d67e38;
          }
          if ((byte)(bVar44 - 0xb) < 2) {
            if ((bVar3 == 0x11) || ((bVar3 & 0xfe) == 0x12)) {
              uVar26 = *(uint *)(lVar37 + 0x20);
            }
            else {
              uVar26 = *(uint *)(lVar37 + 0xc);
            }
            if (uVar26 <= uVar58) {
              return (mach_header *)0x0;
            }
            if ((bVar3 == 0x11) || ((bVar3 & 0xfe) == 0x12)) {
              puVar18 = (undefined8 *)(lVar37 + 0x18);
            }
            else {
              puVar18 = (undefined8 *)(*(long *)(lVar37 + 0x10) + (ulong)uVar58 * 8);
            }
            unaff_x21 = (mach_header *)*puVar18;
            puVar42 = (undefined8 *)(puVar7 + -0x50);
            pmVar19 = (mach_header *)auVar15;
            goto SUB_109d677ec;
          }
          if (((bVar44 & 0xfe) != 0xe) ||
             (puVar7 = puVar7 + -0x50, *(uint *)(lVar37 + 0x20) <= uVar58)) {
            return (mach_header *)0x0;
          }
        }
        if ((lVar37 == 0) || (bVar3 != 0x11)) {
          if ((lVar37 == 0) || ((bVar3 & 0xfe) != 0x12)) {
            uVar26 = *(uint *)(lVar37 + 0xc);
          }
          else {
            uVar26 = *(uint *)(lVar37 + 0x20);
          }
        }
        else {
          uVar26 = (uint)*(undefined8 *)(lVar37 + 0x20);
        }
        if (uVar26 <= uVar58) {
          return (mach_header *)0x0;
        }
        if (bVar3 == 0x11 || (bVar3 & 0xfe) == 0x12) {
          puVar18 = (undefined8 *)(lVar37 + 0x18);
        }
        else {
          puVar18 = (undefined8 *)(*(long *)(lVar37 + 0x10) + (long)pmVar21 * 8);
        }
        unaff_x21 = (mach_header *)*puVar18;
        puVar42 = (undefined8 *)(puVar7 + -0x50);
        pmVar23 = (mach_header *)auVar15;
code_r0x000109d666e0:
        *(mach_header **)((long)puVar42 + -0x20) = pmVar11;
        *(mach_header **)((long)puVar42 + -0x18) = pmVar23;
        *(undefined8 ********)((long)puVar42 + -0x10) = pppppppuVar61;
        *(code **)((long)puVar42 + -8) = pcVar64;
        *(undefined8 *)((long)puVar42 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        bVar44 = (byte)unaff_x21->cpusubtype;
        uVar58 = (uint)bVar44;
        unaff_x24 = pmVar19;
        pmVar23 = pmVar24;
        if (bVar44 < 0xd) {
          if (uVar58 < 7) {
            pmVar50 = *(mach_header **)unaff_x21;
            FUN_109d9f580();
            FUN_109d32048((undefined1 *)((long)puVar42 + -0x48));
            pmVar11 = (mach_header *)((long)puVar42 + -0x48);
            FUN_109d668f4(pmVar50,(undefined1 *)((long)puVar42 + -0x48));
            pmVar52 = (mach_header *)((long)puVar42 + -0x40);
            FUN_109d32234();
            pmVar23 = pmVar24;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar42 + -0x28)) {
              return pmVar50;
            }
          }
          else {
            pmVar52 = *(mach_header **)unaff_x21;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar42 + -0x28)) {
              *(undefined8 *)((long)puVar42 + -0x20) = *(undefined8 *)((long)puVar42 + -0x20);
              *(undefined8 *)((long)puVar42 + -0x18) = *(undefined8 *)((long)puVar42 + -0x18);
              *(undefined8 *)((long)puVar42 + -0x10) = *(undefined8 *)((long)puVar42 + -0x10);
              *(undefined8 *)((long)puVar42 + -8) = *(undefined8 *)((long)puVar42 + -8);
              pmVar23 = *(mach_header **)(*(long *)pmVar52 + 0x7e0);
              if (pmVar23 == (mach_header *)0x0) {
                plVar53 = (long *)(*(long *)pmVar52 + 0x7e0);
                plVar16 = (long *)0x18;
                __Znwm();
                *plVar16 = *(long *)pmVar52 + 0x6c0;
                plVar16[1] = 0;
                plVar16[2] = 0x14;
                FUN_109d6967c(plVar53,plVar16);
                pmVar23 = (mach_header *)*plVar53;
              }
              return pmVar23;
            }
          }
LAB_109d66860:
          ___stack_chk_fail();
          FUN_109d32234(&pmVar11->cpusubtype);
          unaff_x21 = pmVar52;
          __Unwind_Resume();
          puVar18 = (undefined8 *)((long)puVar42 + -0x50);
          pppppppuVar61 = (undefined8 *******)((long)puVar42 + -0x10);
          pmVar50 = (mach_header *)FUN_109d66880;
          goto code_r0x000109d66880;
        }
        pmVar52 = unaff_x21;
        if (0xf < bVar44) {
          if (uVar58 - 0x10 < 4) {
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar42 + -0x28)) {
              uVar62 = *(undefined8 *)((long)puVar42 + -0x10);
              uVar63 = *(undefined8 *)((long)puVar42 + -8);
              uVar54 = *(undefined8 *)((long)puVar42 + -0x20);
              uVar51 = *(undefined8 *)((long)puVar42 + -0x18);
SUB_109d66a94:
              *(undefined8 *)((long)puVar42 + -0x20) = uVar54;
              *(undefined8 *)((long)puVar42 + -0x18) = uVar51;
              *(undefined8 *)((long)puVar42 + -0x10) = uVar62;
              *(undefined8 *)((long)puVar42 + -8) = uVar63;
              *(mach_header **)((long)puVar42 + -0x28) = unaff_x21;
              lVar37 = **(long **)unaff_x21 + 0x4b8;
              FUN_109d6eaf8(lVar37,(undefined1 *)((long)puVar42 + -0x28));
              plVar53 = (long *)(lVar37 + 8);
              pmVar23 = (mach_header *)*plVar53;
              if (pmVar23 == (mach_header *)0x0) {
                puVar18 = (undefined8 *)0x18;
                __Znwm();
                *puVar18 = *(undefined8 *)((long)puVar42 + -0x28);
                puVar18[1] = 0;
                puVar18[2] = 0xd;
                FUN_109d69b08(plVar53,puVar18);
                pmVar23 = (mach_header *)*plVar53;
              }
              return pmVar23;
            }
          }
          else if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar42 + -0x28)) {
            *(undefined8 *)((long)puVar42 + -0x20) = *(undefined8 *)((long)puVar42 + -0x20);
            *(undefined8 *)((long)puVar42 + -0x18) = *(undefined8 *)((long)puVar42 + -0x18);
            *(undefined8 *)((long)puVar42 + -0x10) = *(undefined8 *)((long)puVar42 + -0x10);
            *(undefined8 *)((long)puVar42 + -8) = *(undefined8 *)((long)puVar42 + -8);
            *(mach_header **)((long)puVar42 + -0x28) = unaff_x21;
            lVar37 = **(long **)unaff_x21 + 0x530;
            FUN_109d6f0a0(lVar37,(undefined1 *)((long)puVar42 + -0x28));
            plVar53 = (long *)(lVar37 + 8);
            pmVar23 = (mach_header *)*plVar53;
            if (pmVar23 == (mach_header *)0x0) {
              puVar18 = (undefined8 *)0x18;
              __Znwm();
              *puVar18 = *(undefined8 *)((long)puVar42 + -0x28);
              puVar18[1] = 0;
              puVar18[2] = 0x12;
              func_0x000109d69da8(plVar53,puVar18);
              pmVar23 = (mach_header *)*plVar53;
            }
            return pmVar23;
          }
          goto LAB_109d66860;
        }
        if (uVar58 != 0xd) {
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar42 + -0x28)) {
            *(undefined8 *)((long)puVar42 + -0x20) = *(undefined8 *)((long)puVar42 + -0x20);
            *(undefined8 *)((long)puVar42 + -0x18) = *(undefined8 *)((long)puVar42 + -0x18);
            *(undefined8 *)((long)puVar42 + -0x10) = *(undefined8 *)((long)puVar42 + -0x10);
            *(undefined8 *)((long)puVar42 + -8) = *(undefined8 *)((long)puVar42 + -8);
            *(mach_header **)((long)puVar42 + -0x28) = unaff_x21;
            lVar37 = **(long **)unaff_x21 + 0x518;
            FUN_109d6edcc(lVar37,(undefined1 *)((long)puVar42 + -0x28));
            plVar53 = (long *)(lVar37 + 8);
            pmVar23 = (mach_header *)*plVar53;
            if (pmVar23 == (mach_header *)0x0) {
              puVar18 = (undefined8 *)0x18;
              __Znwm();
              *puVar18 = *(undefined8 *)((long)puVar42 + -0x28);
              puVar18[1] = 0;
              puVar18[2] = 0x13;
              func_0x000109d69d80(plVar53,puVar18);
              pmVar23 = (mach_header *)*plVar53;
            }
            return pmVar23;
          }
          goto LAB_109d66860;
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)puVar42 + -0x28))
        goto LAB_109d66860;
        pmVar23 = (mach_header *)0x0;
        puVar18 = puVar42;
        pmVar52 = *(mach_header **)((long)puVar42 + -0x18);
        pmVar11 = *(mach_header **)((long)puVar42 + -0x20);
        pppppppuVar61 = *(undefined8 ********)((long)puVar42 + -0x10);
        pmVar50 = *(mach_header **)((long)puVar42 + -8);
      } while( true );
    }
  }
LAB_109d62468:
  iVar10 = SUB84(auVar15,0);
  ___stack_chk_fail();
  if (uStack_448 != unaff_x24) {
    _free();
  }
  __Unwind_Resume();
  if (pmVar24 == (mach_header *)0x0) {
    return (mach_header *)0x0;
  }
  if (3 < (byte)pmVar24->ncmds) {
    return (mach_header *)0x0;
  }
  pmVar23 = pmVar21;
  FUN_109d661e0();
  if (((((int)pmVar23 != 0) && ((char)pmVar24->ncmds != '\x01')) && ((pmVar24[1].magic & 0xf) != 9))
     && (*(uint *)(*(long *)pmVar24 + 8) < 0x100)) {
    if (iVar10 == 0x21) {
      lVar37 = *(long *)**(undefined8 **)pmVar21;
      if (*(mach_header **)(lVar37 + 0x608) == (mach_header *)0x0) {
        pmVar23 = (mach_header *)(lVar37 + 0x750);
        FUN_109d678e8(pmVar23,1,0);
        *(mach_header **)(lVar37 + 0x608) = pmVar23;
        return pmVar23;
      }
      return *(mach_header **)(lVar37 + 0x608);
    }
    if (iVar10 == 0x20) {
      lVar37 = *(long *)**(undefined8 **)pmVar21;
      if (*(mach_header **)(lVar37 + 0x610) == (mach_header *)0x0) {
        pmVar23 = (mach_header *)(lVar37 + 0x750);
        FUN_109d678e8(pmVar23,0,0);
        *(mach_header **)(lVar37 + 0x610) = pmVar23;
        return pmVar23;
      }
      return *(mach_header **)(lVar37 + 0x610);
    }
  }
  return (mach_header *)0x0;
}



/* Entry: 109d8ae58; end: 109d8af2b;  */

void FUN_109d8ae58(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined2 uStack_38;
  
  uStack_38 = 0x101;
  FUN_109d38eac(param_2,param_3,param_4,param_5,param_6,param_7,auStack_58,0);
  if (*(char *)(param_1 + 100) == '\x01') {
    puVar2 = param_2 + 8;
    FUN_109d5ab08(puVar2,*(undefined8 *)*param_2,0xffffffff,0x3e);
    param_2[8] = puVar2;
  }
  puVar2 = param_2;
  FUN_109d32e0c();
  if ((int)puVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x60);
    if ((param_9 != 0) || (*(long *)(param_1 + 0x58) != 0)) {
      FUN_109d97c40(param_2,3);
    }
    *(byte *)((long)param_2 + 0x11) = *(byte *)((long)param_2 + 0x11) | (byte)(iVar1 << 1);
  }
  FUN_109d5cf24(param_1,param_2,param_8);
  return;
}



/* Entry: 109d8af2c; end: 109d8b0bb;  */

void FUN_109d8af2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_68 [32];
  undefined2 uStack_48;
  
  plVar1 = *(long **)(param_1 + 0x48);
  (**(code **)(*plVar1 + 0x18))(plVar1,0x14,param_2,param_3);
  if (plVar1 == (long *)0x0) {
    if ((param_5 & 1) == 0) {
      uStack_48 = 0x101;
      lVar2 = 0x14;
      FUN_109d8c8c0(0x14,param_2,param_3,auStack_68,0);
    }
    else {
      uStack_48 = 0x101;
      lVar2 = 0x14;
      FUN_109d8c8c0(0x14,param_2,param_3,auStack_68,0);
      *(byte *)(lVar2 + 0x11) = *(byte *)(lVar2 + 0x11) | 2;
    }
    func_0x000109d33940(param_1,lVar2,param_4);
  }
  return;
}



/* Entry: 109d8b0bc; end: 109d8b15f;  */

undefined8 *
FUN_109d8b0bc(undefined8 *param_1,undefined8 param_2,char param_3,undefined8 param_4,uint param_5,
             long param_6)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  *param_1 = param_2;
  param_1[1] = 0;
  *(char *)(param_1 + 2) = param_3 + '\x1c';
  *(undefined1 *)((long)param_1 + 0x11) = 0;
  *(undefined2 *)((long)param_1 + 0x12) = 0;
  *(uint *)((long)param_1 + 0x14) =
       *(uint *)((long)param_1 + 0x14) & 0xc0000000 | param_5 & 0x7ffffff;
  puVar3 = param_1 + 3;
  param_1[4] = 0;
  *puVar3 = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  if (param_6 != 0) {
    FUN_109d5d59c(*(long *)(param_6 + 0x28) + 0x28,param_1);
    plVar2 = (long *)(param_6 + 0x18);
    lVar1 = *plVar2;
    param_1[3] = lVar1;
    param_1[4] = plVar2;
    *(undefined8 **)(lVar1 + 8) = puVar3;
    *plVar2 = (long)puVar3;
  }
  return param_1;
}



/* Entry: 109d8b160; end: 109d8b1b7;  */

undefined8 * FUN_109d8b160(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  if ((*(byte *)((long)param_1 + 0x17) >> 3 & 1) != 0) {
    uVar1 = *param_1;
    func_0x000109d677ec(uVar1);
    FUN_109d9551c(param_1,uVar1);
  }
  FUN_109d97dec(param_1,0x26,0);
  FUN_109d33be0(param_1 + 6);
  if ((*(byte *)((long)param_1 + 0x11) & 1) != 0) {
    FUN_109da2494(param_1);
  }
  uVar2 = *(uint *)((long)param_1 + 0x14);
  if ((uVar2 >> 0x1b & 1) != 0) {
    func_0x000109d95478(param_1);
    uVar2 = *(uint *)((long)param_1 + 0x14);
  }
  if ((uVar2 >> 0x1d & 1) != 0) {
    FUN_109d97d98(param_1);
  }
  FUN_109da258c(param_1);
  return param_1;
}



/* Entry: 109d8b1b8; end: 109d8b367;  */

void FUN_109d8b1b8(long param_1,long param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  
  if ((param_3 != 0) &&
     (uVar3 = *(byte *)(param_1 + 0x10) - 0x29, uVar5 = uVar3 >> 1,
     (uVar5 | uVar3 * -0x80000000) < 7 && (1 << (ulong)(uVar5 & 0x1f) & 0x47U) != 0)) {
    bVar1 = *(byte *)(param_2 + 0x10);
    if (bVar1 < 0x1c) {
      if (bVar1 != 5) goto LAB_109d8b264;
      uVar5 = *(ushort *)(param_2 + 0x12) - 0xd;
    }
    else {
      uVar5 = bVar1 - 0x29;
    }
    if ((uVar5 >> 1 | uVar5 << 0x1f) < 7 && (1 << (ulong)(uVar5 >> 1 & 0x1f) & 0x47U) != 0) {
      bVar2 = *(byte *)(param_1 + 0x11);
      bVar1 = (*(byte *)(param_2 + 0x11) >> 2 & 1) << 2;
      *(byte *)(param_1 + 0x11) = bVar2 & 0xf8 | bVar2 & 3 | bVar1;
      *(byte *)(param_1 + 0x11) = bVar2 & 0xf8 | bVar2 & 1 | bVar1 | *(byte *)(param_2 + 0x11) & 2;
    }
  }
LAB_109d8b264:
  bVar1 = *(byte *)(param_2 + 0x10);
  if (bVar1 < 0x1c) {
    if ((bVar1 != 5) ||
       (0x1b < *(ushort *)(param_2 + 0x12) ||
        (1 << (ulong)(*(ushort *)(param_2 + 0x12) & 0x1f) & 0xc180000U) == 0)) goto LAB_109d8b2f4;
  }
  else if (0x37 < bVar1 || (1L << ((ulong)bVar1 & 0x3f) & 0xc1800000000000U) == 0)
  goto LAB_109d8b2f4;
  if ((*(byte *)(param_1 + 0x10) < 0x38) &&
     ((1L << ((ulong)*(byte *)(param_1 + 0x10) & 0x3f) & 0xc1800000000000U) != 0)) {
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xfd | *(byte *)(param_2 + 0x11) & 2;
  }
LAB_109d8b2f4:
  lVar4 = param_2;
  FUN_109d32e0c();
  if (((int)lVar4 != 0) && (lVar4 = param_1, FUN_109d32e0c(), (int)lVar4 != 0)) {
    *(byte *)(param_1 + 0x11) = *(byte *)(param_2 + 0x11) & 0xfe | *(byte *)(param_1 + 0x11) & 1;
  }
  if (((*(char *)(param_2 + 0x10) == '>') && (param_1 != 0)) && (*(char *)(param_1 + 0x10) == '>'))
  {
    bVar1 = *(byte *)(param_1 + 0x11) & 2;
    if ((*(byte *)(param_2 + 0x11) & 2) != 0) {
      bVar1 = 2;
    }
    *(byte *)(param_1 + 0x11) = bVar1 | *(byte *)(param_1 + 0x11) & 0xfd;
  }
  return;
}



/* Entry: 109d8b368; end: 109d8b533;  */

bool FUN_109d8b368(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 - 0x3f < 3) {
    return true;
  }
  if ((bVar1 != 0x3c) && (bVar1 != 0x3d)) {
    return false;
  }
  return (*(ushort *)(param_1 + 0x12) & 0x380) != 0;
}



/* Entry: 109d8b534; end: 109d8b6f7;  */

long FUN_109d8b534(long param_1,long param_2,undefined4 *param_3,long param_4)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *unaff_x23;
  long lVar6;
  int iStack_f4;
  long lStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long lStack_c8;
  undefined4 uStack_bc;
  long alStack_b8 [2];
  undefined4 uStack_a8;
  undefined4 auStack_a0 [2];
  undefined4 *puStack_98;
  ulong uStack_90;
  undefined4 auStack_88 [16];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(long *)(param_2 + 0x30) != 0) || ((*(byte *)(param_2 + 0x17) >> 5 & 1) != 0)) {
    alStack_b8[0] = 0;
    alStack_b8[1] = 0;
    uStack_a8 = 0;
    if (param_4 != 0) {
      lVar6 = param_4 << 2;
      do {
        auStack_a0[0] = *param_3;
        FUN_109d31528(&puStack_98,alStack_b8,auStack_a0,&uStack_bc);
        lVar6 = lVar6 + -4;
        param_3 = param_3 + 1;
      } while (lVar6 != 0);
    }
    unaff_x23 = auStack_88;
    uStack_90 = 0x400000000;
    puStack_98 = unaff_x23;
    func_0x000109d97bcc(param_2,&puStack_98);
    if ((int)uStack_90 != 0) {
      lVar6 = (uStack_90 & 0xffffffff) << 4;
      puVar5 = puStack_98;
      do {
        if (param_4 == 0) {
LAB_109d8b5fc:
          FUN_109d97dec(param_1,*puVar5,*(undefined8 *)(puVar5 + 2));
        }
        else {
          plVar1 = alStack_b8;
          FUN_109d31494(plVar1,puVar5,auStack_a0);
          if ((int)plVar1 != 0) goto LAB_109d8b5fc;
        }
        puVar5 = puVar5 + 4;
        lVar6 = lVar6 + -0x10;
      } while (lVar6 != 0);
    }
    if (param_4 == 0) {
LAB_109d8b634:
      lStack_c8 = *(long *)(param_2 + 0x30);
      if (lStack_c8 != 0) {
        FUN_109d9464c(&lStack_c8,lStack_c8,2);
      }
      FUN_109d34054(param_1 + 0x30,&lStack_c8);
      FUN_109d33be0(&lStack_c8);
    }
    else {
      uStack_bc = 0;
      plVar1 = alStack_b8;
      FUN_109d31494(plVar1,&uStack_bc,auStack_a0);
      if (((ulong)plVar1 & 1) != 0) goto LAB_109d8b634;
    }
    if (puStack_98 != unaff_x23) {
      _free();
    }
    param_1 = alStack_b8[0];
    __ZdlPvSt11align_val_t(alStack_b8[0],4);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  if (puStack_98 != unaff_x23) {
    _free();
  }
  uVar3 = 4;
  __ZdlPvSt11align_val_t(alStack_b8[0],4);
  lVar6 = param_1;
  __Unwind_Resume();
  pcStack_d8 = FUN_109d8b6f8;
  uVar2 = *(ulong *)(lVar6 + 0x40);
  lStack_f0 = param_2;
  lStack_e8 = param_1;
  puStack_e0 = &stack0xfffffffffffffff0;
  if ((uVar2 == 0) || (FUN_109d5a7ec(uVar2,uVar3,&iStack_f4), (uVar2 & 1) == 0)) {
    lVar4 = *(long *)(lVar6 + -0x20);
    if ((lVar4 != 0) &&
       ((*(char *)(lVar4 + 0x10) == '\0' && (*(long *)(lVar4 + 0x18) == *(long *)(lVar6 + 0x48)))))
    {
      lVar4 = *(long *)(lVar4 + 0x70);
      if (lVar4 == 0) {
        return 0;
      }
      FUN_109d5a7ec(lVar4,uVar3,&iStack_f4);
      if ((int)lVar4 != 0) goto LAB_109d8b728;
    }
    lVar6 = 0;
  }
  else {
LAB_109d8b728:
    lVar6 = *(long *)(lVar6 + ((ulong)*(uint *)(lVar6 + 0x14) & 0x7ffffff) * -0x20 +
                     (ulong)(iStack_f4 - 1) * 0x20);
  }
  return lVar6;
}



/* Entry: 109d8b6f8; end: 109d8b797;  */

undefined8 FUN_109d8b6f8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  int iStack_24;
  
  uVar1 = *(ulong *)(param_1 + 0x40);
  if ((uVar1 == 0) || (FUN_109d5a7ec(uVar1,param_2,&iStack_24), (uVar1 & 1) == 0)) {
    lVar3 = *(long *)(param_1 + -0x20);
    if ((lVar3 != 0) &&
       ((*(char *)(lVar3 + 0x10) == '\0' && (*(long *)(lVar3 + 0x18) == *(long *)(param_1 + 0x48))))
       ) {
      lVar3 = *(long *)(lVar3 + 0x70);
      if (lVar3 == 0) {
        return 0;
      }
      FUN_109d5a7ec(lVar3,param_2,&iStack_24);
      if ((int)lVar3 != 0) goto LAB_109d8b728;
    }
    uVar2 = 0;
  }
  else {
LAB_109d8b728:
    uVar2 = *(undefined8 *)
             (param_1 + ((ulong)*(uint *)(param_1 + 0x14) & 0x7ffffff) * -0x20 +
             (ulong)(iStack_24 - 1) * 0x20);
  }
  return uVar2;
}



/* Entry: 109d8b798; end: 109d8b807;  */

byte FUN_109d8b798(long param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + -0x20);
  cVar2 = *(char *)(lVar3 + 0x10);
  if (lVar3 != 0 && cVar2 == '\x05') {
    if (*(short *)(lVar3 + 0x12) != 0x31) {
      return 0;
    }
    lVar3 = *(long *)(lVar3 + ((ulong)*(uint *)(lVar3 + 0x14) & 0x7ffffff) * -0x20);
    cVar2 = *(char *)(lVar3 + 0x10);
  }
  if ((cVar2 == '\0') && (*(long *)(lVar3 + 0x70) != 0)) {
    uVar1 = param_2 + 7;
    if (-1 < (int)param_2) {
      uVar1 = param_2;
    }
    return *(byte *)(*(long *)(lVar3 + 0x70) + (long)((int)uVar1 >> 3) + 0xc) >>
           (ulong)(param_2 & 7) & 1;
  }
  return 0;
}



/* Entry: 109d8b808; end: 109d8b92f;  */

undefined8 * FUN_109d8b808(undefined8 *param_1,long param_2,long param_3,uint param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  long *plVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  long *plStack_68;
  long lStack_60;
  undefined4 uStack_58;
  
  uVar4 = *(uint *)((long)param_1 + 0x14);
  puVar3 = param_1 + ((ulong)uVar4 & 0x7ffffff) * -4 + (ulong)param_4 * 4;
  if (param_3 != 0) {
    param_3 = param_3 * 0x30;
    puVar2 = (undefined8 *)(param_2 + 0x20);
    puVar5 = puVar3;
    do {
      puVar3 = (undefined8 *)puVar2[-1];
      func_0x000109d8d4e0(&plStack_68,puVar3,*puVar2,puVar5);
      puVar2 = puVar2 + 6;
      param_3 = param_3 + -0x30;
      puVar5 = puVar3;
    } while (param_3 != 0);
    uVar4 = *(uint *)((long)param_1 + 0x14);
  }
  if ((int)uVar4 < 0) {
    lVar8 = param_1[(ulong)(uVar4 & 0x7ffffff) * -4 + -1];
    if (lVar8 != 0) {
      lVar9 = **(long **)*param_1;
      puVar7 = (uint *)((long)param_1 - (lVar8 + (ulong)(uVar4 & 0x7ffffff) * 0x20));
      plVar6 = (long *)(param_2 + 0x20);
      do {
        cVar1 = *(char *)((long)plVar6 + -9);
        plStack_68 = (long *)plVar6[-4];
        if (-1 < (long)cVar1) {
          plStack_68 = plVar6 + -4;
        }
        lStack_60 = plVar6[-3];
        if (-1 < cVar1) {
          lStack_60 = (long)cVar1;
        }
        uStack_58 = *(undefined4 *)(lVar9 + 0xa2c);
        puVar2 = (undefined8 *)(lVar9 + 0xa20);
        FUN_109d8e014();
        *(undefined8 *)(puVar7 + -2) = *puVar2;
        *puVar7 = param_4;
        param_4 = param_4 + (int)((ulong)(*plVar6 - plVar6[-1]) >> 3);
        puVar7[1] = param_4;
        puVar7 = puVar7 + 4;
        plVar6 = plVar6 + 6;
        lVar8 = lVar8 + -0x10;
      } while (lVar8 != 0);
    }
  }
  return puVar3;
}



/* Entry: 109d8b930; end: 109d8b97b;  */

void FUN_109d8b930(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(undefined8 *)*param_1;
  FUN_109d59ae0(uVar1,0x50,param_2);
  puVar2 = param_1 + 8;
  FUN_109d5b020(puVar2,*(undefined8 *)*param_1,0xffffffff,uVar1);
  param_1[8] = puVar2;
  return;
}



/* Entry: 109d8b97c; end: 109d8ba13;  */

void FUN_109d8b97c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 uStack_41;
  
  *(undefined8 *)(param_1 + 0x48) = param_2;
  func_0x000109d8d4e0(&uStack_41,param_4,param_4 + param_5 * 8,
                      param_1 + ((ulong)*(uint *)(param_1 + 0x14) & 0x7ffffff) * -0x20);
  FUN_109d5d414(param_1,param_3);
  FUN_109d8b808(param_1,param_6,param_7,param_5);
  FUN_109da2b08(param_1,param_8);
  return;
}



/* Entry: 109d8ba14; end: 109d8bb1f;  */

void FUN_109d8ba14(long param_1,long *param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  FUN_109d8b0bc(param_1,*param_2 + 0x618,1,param_1 + (ulong)(param_3 != 0) * -0x20,param_3 != 0,
                param_4);
  if (param_3 != 0) {
    plVar1 = (long *)(param_1 + ((ulong)*(uint *)(param_1 + 0x14) & 0x7ffffff) * -0x20);
    if (*plVar1 != 0) {
      lVar2 = plVar1[1];
      *(long *)plVar1[2] = lVar2;
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = plVar1[2];
      }
    }
    *plVar1 = param_3;
    plVar3 = (long *)(param_3 + 8);
    lVar2 = *plVar3;
    plVar1[1] = lVar2;
    if (lVar2 != 0) {
      *(long **)(lVar2 + 0x10) = plVar1 + 1;
    }
    plVar1[2] = (long)plVar3;
    *plVar3 = (long)plVar1;
  }
  return;
}



/* Entry: 109d8bb20; end: 109d8bc37;  */

void FUN_109d8bb20(long param_1,undefined8 *param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)(param_1 + -0x60);
  FUN_109d8b0bc(param_1,**(long **)*param_2 + 0x618,2,plVar3,3,param_5);
  if (*(long *)(param_1 + -0x60) != 0) {
    lVar1 = *(long *)(param_1 + -0x58);
    **(long **)(param_1 + -0x50) = lVar1;
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_1 + -0x50);
    }
  }
  *plVar3 = param_4;
  if (param_4 != 0) {
    plVar2 = (long *)(param_4 + 8);
    lVar1 = *plVar2;
    *(long *)(param_1 + -0x58) = lVar1;
    if (lVar1 != 0) {
      *(long **)(lVar1 + 0x10) = (long *)(param_1 + -0x58);
    }
    *(long **)(param_1 + -0x50) = plVar2;
    *plVar2 = (long)plVar3;
  }
  plVar3 = (long *)(param_1 + -0x40);
  if (*plVar3 != 0) {
    lVar1 = *(long *)(param_1 + -0x38);
    **(long **)(param_1 + -0x30) = lVar1;
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_1 + -0x30);
    }
  }
  *plVar3 = param_3;
  if (param_3 != 0) {
    plVar2 = (long *)(param_3 + 8);
    lVar1 = *plVar2;
    *(long *)(param_1 + -0x38) = lVar1;
    if (lVar1 != 0) {
      *(long **)(lVar1 + 0x10) = (long *)(param_1 + -0x38);
    }
    *(long **)(param_1 + -0x30) = plVar2;
    *plVar2 = (long)plVar3;
  }
  if (*(long *)(param_1 + -0x20) != 0) {
    lVar1 = *(long *)(param_1 + -0x18);
    **(long **)(param_1 + -0x10) = lVar1;
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_1 + -0x10);
    }
  }
  *(undefined8 **)(param_1 + -0x20) = param_2;
  plVar3 = param_2 + 1;
  lVar1 = *plVar3;
  *(long *)(param_1 + -0x18) = lVar1;
  if (lVar1 != 0) {
    *(long **)(lVar1 + 0x10) = (long *)(param_1 + -0x18);
  }
  *(long **)(param_1 + -0x10) = plVar3;
  *plVar3 = param_1 + -0x20;
  return;
}



/* Entry: 109d8bc38; end: 109d8bcff;  */

long FUN_109d8bc38(long param_1,undefined8 *param_2,undefined8 param_3,long param_4,ushort param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  
  puVar1 = param_2;
  func_0x000109da017c(param_2,param_3);
  if (param_4 == 0) {
    param_4 = *(long *)*param_2 + 0x798;
    FUN_109d678e8(param_4,1,0);
  }
  FUN_109d3a0d8(param_1,puVar1,0x1f,param_4,param_7);
  *(undefined8 **)(param_1 + 0x40) = param_2;
  *(ushort *)(param_1 + 0x12) = *(ushort *)(param_1 + 0x12) & 0xffc0 | param_5 & 0xff;
  FUN_109da2b08();
  return param_1;
}



/* Entry: 109d8bd00; end: 109d8bd8b;  */

long FUN_109d8bd00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ushort param_5,ushort param_6,short param_7,undefined1 param_8,undefined8 param_9)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_109d3a0d8(param_1,param_2,0x20,param_3,param_9);
  *(ushort *)(lVar1 + 0x12) =
       *(ushort *)(lVar1 + 0x12) & 0xfc00 |
       param_5 & 0xff80 | param_5 & 1 | (param_6 & 0x3f) << 1 | param_7 << 7;
  *(undefined1 *)(lVar1 + 0x3c) = param_8;
  FUN_109da2b08();
  return param_1;
}



/* Entry: 109d8bd8c; end: 109d8be97;  */

void FUN_109d8bd8c(long param_1,undefined8 *param_2,long param_3,ushort param_4,ushort param_5,
                  short param_6,undefined1 param_7,undefined8 param_8)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = param_1 + -0x40;
  FUN_109d8b0bc(param_1,**(long **)*param_2 + 0x618,0x21,lVar4,2,param_8);
  if (*(long *)(param_1 + -0x40) != 0) {
    lVar1 = *(long *)(param_1 + -0x38);
    **(long **)(param_1 + -0x30) = lVar1;
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_1 + -0x30);
    }
  }
  *(undefined8 **)(param_1 + -0x40) = param_2;
  plVar2 = param_2 + 1;
  lVar1 = *plVar2;
  *(long *)(param_1 + -0x38) = lVar1;
  if (lVar1 != 0) {
    *(long **)(lVar1 + 0x10) = (long *)(param_1 + -0x38);
  }
  *(long **)(param_1 + -0x30) = plVar2;
  *plVar2 = lVar4;
  plVar2 = (long *)(param_1 + -0x20);
  if (*plVar2 != 0) {
    lVar4 = *(long *)(param_1 + -0x18);
    **(long **)(param_1 + -0x10) = lVar4;
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(param_1 + -0x10);
    }
  }
  *plVar2 = param_3;
  if (param_3 != 0) {
    plVar3 = (long *)(param_3 + 8);
    lVar4 = *plVar3;
    *(long *)(param_1 + -0x18) = lVar4;
    if (lVar4 != 0) {
      *(long **)(lVar4 + 0x10) = (long *)(param_1 + -0x18);
    }
    *(long **)(param_1 + -0x10) = plVar3;
    *plVar3 = (long)plVar2;
  }
  *(ushort *)(param_1 + 0x12) =
       *(ushort *)(param_1 + 0x12) & 0xfc00 |
       param_4 & 0xff80 | param_4 & 1 | (param_5 & 0x3f) << 1 | param_6 << 7;
  *(undefined1 *)(param_1 + 0x3c) = param_7;
  return;
}



/* Entry: 109d8be98; end: 109d8bfff;  */

void FUN_109d8be98(long param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined1 uStack_21;
  
  plVar2 = (long *)(param_1 + ((ulong)*(uint *)(param_1 + 0x14) & 0x7ffffff) * -0x20);
  if (*plVar2 != 0) {
    lVar3 = plVar2[1];
    *(long *)plVar2[2] = lVar3;
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = plVar2[2];
    }
  }
  *plVar2 = param_2;
  if (param_2 != 0) {
    plVar1 = (long *)(param_2 + 8);
    lVar3 = *plVar1;
    plVar2[1] = lVar3;
    if (lVar3 != 0) {
      *(long **)(lVar3 + 0x10) = plVar2 + 1;
    }
    plVar2[2] = (long)plVar1;
    *plVar1 = (long)plVar2;
  }
  func_0x000109d8d4e0(&uStack_21,param_3,param_3 + param_4 * 8,
                      param_1 + ((ulong)*(uint *)(param_1 + 0x14) & 0x7ffffff) * -0x20 + 0x20);
  FUN_109da2b08(param_1,param_5);
  return;
}



/* Entry: 109d8c000; end: 109d8c0fb;  */

long FUN_109d8c000(long param_1,long *param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  lVar1 = param_1;
  FUN_109d8b0bc(param_1,*(undefined8 *)(*param_2 + 0x18),0x3d,param_1 + -0x40,2,param_5);
  if (*(long *)(lVar1 + -0x40) != 0) {
    lVar1 = *(long *)(param_1 + -0x38);
    **(long **)(param_1 + -0x30) = lVar1;
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_1 + -0x30);
    }
  }
  *(long **)(param_1 + -0x40) = param_2;
  param_2 = param_2 + 1;
  lVar1 = *param_2;
  *(long *)(param_1 + -0x38) = lVar1;
  if (lVar1 != 0) {
    *(long **)(lVar1 + 0x10) = (long *)(param_1 + -0x38);
  }
  *(long **)(param_1 + -0x30) = param_2;
  *param_2 = param_1 + -0x40;
  plVar2 = (long *)(param_1 + -0x20);
  if (*plVar2 != 0) {
    lVar1 = *(long *)(param_1 + -0x18);
    **(long **)(param_1 + -0x10) = lVar1;
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_1 + -0x10);
    }
  }
  *plVar2 = param_3;
  if (param_3 != 0) {
    plVar3 = (long *)(param_3 + 8);
    lVar1 = *plVar3;
    *(long *)(param_1 + -0x18) = lVar1;
    if (lVar1 != 0) {
      *(long **)(lVar1 + 0x10) = (long *)(param_1 + -0x18);
    }
    *(long **)(param_1 + -0x10) = plVar3;
    *plVar3 = (long)plVar2;
  }
  FUN_109da2b08(param_1,param_4);
  return param_1;
}



/* Entry: 109d8c0fc; end: 109d8c237;  */

long FUN_109d8c0fc(long param_1,undefined8 *param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  lVar1 = param_1;
  FUN_109d8b0bc(param_1,*param_2,0x3e,param_1 + -0x60,3);
  if (*(long *)(lVar1 + -0x60) != 0) {
    lVar1 = *(long *)(param_1 + -0x58);
    **(long **)(param_1 + -0x50) = lVar1;
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_1 + -0x50);
    }
  }
  *(undefined8 **)(param_1 + -0x60) = param_2;
  plVar2 = param_2 + 1;
  lVar1 = *plVar2;
  *(long *)(param_1 + -0x58) = lVar1;
  if (lVar1 != 0) {
    *(long **)(lVar1 + 0x10) = (long *)(param_1 + -0x58);
  }
  *(long **)(param_1 + -0x50) = plVar2;
  *plVar2 = param_1 + -0x60;
  plVar2 = (long *)(param_1 + -0x40);
  if (*plVar2 != 0) {
    lVar1 = *(long *)(param_1 + -0x38);
    **(long **)(param_1 + -0x30) = lVar1;
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_1 + -0x30);
    }
  }
  *plVar2 = param_3;
  if (param_3 != 0) {
    plVar3 = (long *)(param_3 + 8);
    lVar1 = *plVar3;
    *(long *)(param_1 + -0x38) = lVar1;
    if (lVar1 != 0) {
      *(long **)(lVar1 + 0x10) = (long *)(param_1 + -0x38);
    }
    *(long **)(param_1 + -0x30) = plVar3;
    *plVar3 = (long)plVar2;
  }
  plVar2 = (long *)(param_1 + -0x20);
  if (*plVar2 != 0) {
    lVar1 = *(long *)(param_1 + -0x18);
    **(long **)(param_1 + -0x10) = lVar1;
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_1 + -0x10);
    }
  }
  *plVar2 = param_4;
  if (param_4 != 0) {
    plVar3 = (long *)(param_4 + 8);
    lVar1 = *plVar3;
    *(long *)(param_1 + -0x18) = lVar1;
    if (lVar1 != 0) {
      *(long **)(lVar1 + 0x10) = (long *)(param_1 + -0x18);
    }
    *(long **)(param_1 + -0x10) = plVar3;
    *plVar3 = (long)plVar2;
  }
  FUN_109da2b08(param_1,param_5);
  return param_1;
}



/* Entry: 109d8c238; end: 109d8c3bf;  */

undefined8 *
FUN_109d8c238(undefined8 *param_1,long *param_2,long param_3,long param_4,ulong param_5,
             undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  uVar2 = *(undefined8 *)(*param_2 + 0x18);
  uVar1 = 0x100000000;
  if (*(char *)(*param_2 + 8) != '\x13') {
    uVar1 = 0;
  }
  FUN_109da004c(uVar2,uVar1 | param_5 & 0xffffffff);
  FUN_109d8b0bc(param_1,uVar2,0x3f,param_1 + -8,2,param_7);
  param_1[8] = param_1 + 10;
  param_1[9] = 0x400000000;
  if (param_1[-8] != 0) {
    lVar3 = param_1[-7];
    *(long *)param_1[-6] = lVar3;
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x10) = param_1[-6];
    }
  }
  param_1[-8] = param_2;
  param_2 = param_2 + 1;
  lVar3 = *param_2;
  param_1[-7] = lVar3;
  if (lVar3 != 0) {
    *(undefined8 **)(lVar3 + 0x10) = param_1 + -7;
  }
  param_1[-6] = param_2;
  *param_2 = (long)(param_1 + -8);
  plVar4 = param_1 + -4;
  if (*plVar4 != 0) {
    lVar3 = param_1[-3];
    *(long *)param_1[-2] = lVar3;
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x10) = param_1[-2];
    }
  }
  *plVar4 = param_3;
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
    lVar3 = *plVar5;
    param_1[-3] = lVar3;
    if (lVar3 != 0) {
      *(undefined8 **)(lVar3 + 0x10) = param_1 + -3;
    }
    param_1[-2] = plVar5;
    *plVar5 = (long)plVar4;
  }
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_109d3352c(param_1 + 8,param_4,param_4 + param_5 * 4);
  FUN_109d8c3c0(param_4,param_5,*param_1);
  param_1[0xc] = param_4;
  FUN_109da2b08(param_1,param_6);
  return param_1;
}



/* Entry: 109d8c3c0; end: 109d8c54b;  */

/* WARNING: Possible PIC construction at 0x000109d8c488: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109d8c48c) */

mach_header *
FUN_109d8c3c0(mach_header *param_1,ulong param_2,undefined8 *param_3,mach_header *param_4,
             mach_header *param_5,undefined8 param_6)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  dword dVar4;
  undefined1 *puVar5;
  long *plVar6;
  mach_header *pmVar7;
  dword *pdVar8;
  mach_header *pmVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  mach_header *pmVar12;
  mach_header *pmVar13;
  long lVar14;
  mach_header *pmVar15;
  undefined8 *puVar16;
  uint uVar17;
  dword *pdVar18;
  ulong uVar19;
  uint uVar20;
  undefined8 uVar21;
  long *plVar22;
  mach_header *pmVar23;
  mach_header *unaff_x19;
  undefined8 uVar24;
  mach_header *unaff_x20;
  mach_header *unaff_x21;
  long lVar25;
  ulong unaff_x22;
  long lVar26;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar27;
  undefined1 *unaff_x29;
  code *pcVar28;
  undefined8 uVar29;
  code *unaff_x30;
  undefined1 auStack_d0 [8];
  mach_header *pmStack_c8;
  ulong uStack_c0;
  mach_header amStack_b8 [4];
  long lStack_38;
  
  puVar11 = &stack0xfffffffffffffff0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar25 = *(long *)*param_3;
  if (*(char *)(param_3 + 1) == '\x13') {
    uVar19 = param_2 & 0xffffffff | 0x100000000;
    pmVar9 = (mach_header *)(lVar25 + 0x798);
    FUN_109da004c();
    if (param_1->magic == 0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
FUN_109d666e0:
        *(mach_header **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(mach_header **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(code **)((long)register0x00000008 + -8) = unaff_x30;
        puVar11 = (undefined1 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -0x28) =
             *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        bVar3 = (byte)pmVar9->cpusubtype;
        uVar17 = (uint)bVar3;
        if (bVar3 < 0xd) {
          if (uVar17 < 7) {
            pmVar9 = *(mach_header **)pmVar9;
            FUN_109d9f580();
            FUN_109d32048((undefined1 *)((long)register0x00000008 + -0x48));
            unaff_x20 = (mach_header *)((long)register0x00000008 + -0x48);
            FUN_109d668f4(pmVar9,(undefined1 *)((long)register0x00000008 + -0x48));
            pmVar23 = (mach_header *)((long)register0x00000008 + -0x40);
            FUN_109d32234();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                *(long *)((long)register0x00000008 + -0x28)) {
              return pmVar9;
            }
          }
          else {
            pmVar23 = *(mach_header **)pmVar9;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                *(long *)((long)register0x00000008 + -0x28)) {
              *(undefined8 *)((long)register0x00000008 + -0x20) =
                   *(undefined8 *)((long)register0x00000008 + -0x20);
              *(undefined8 *)((long)register0x00000008 + -0x18) =
                   *(undefined8 *)((long)register0x00000008 + -0x18);
              *(undefined8 *)((long)register0x00000008 + -0x10) =
                   *(undefined8 *)((long)register0x00000008 + -0x10);
              *(undefined8 *)((long)register0x00000008 + -8) =
                   *(undefined8 *)((long)register0x00000008 + -8);
              pmVar9 = *(mach_header **)(*(long *)pmVar23 + 0x7e0);
              if (pmVar9 == (mach_header *)0x0) {
                plVar22 = (long *)(*(long *)pmVar23 + 0x7e0);
                plVar6 = (long *)0x18;
                __Znwm();
                *plVar6 = *(long *)pmVar23 + 0x6c0;
                plVar6[1] = 0;
                plVar6[2] = 0x14;
                FUN_109d6967c(plVar22,plVar6);
                pmVar9 = (mach_header *)*plVar22;
              }
              return pmVar9;
            }
          }
        }
        else {
          pmVar23 = pmVar9;
          if (bVar3 < 0x10) {
            if (uVar17 == 0xd) {
              if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                  *(long *)((long)register0x00000008 + -0x28)) {
                param_3 = (undefined8 *)0x0;
                puVar11 = *(undefined1 **)((long)register0x00000008 + -0x10);
                pcVar28 = *(code **)((long)register0x00000008 + -8);
                unaff_x20 = *(mach_header **)((long)register0x00000008 + -0x20);
                pmVar23 = *(mach_header **)((long)register0x00000008 + -0x18);
                goto code_r0x000109d66880;
              }
            }
            else if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                     *(long *)((long)register0x00000008 + -0x28)) {
              *(undefined8 *)((long)register0x00000008 + -0x20) =
                   *(undefined8 *)((long)register0x00000008 + -0x20);
              *(undefined8 *)((long)register0x00000008 + -0x18) =
                   *(undefined8 *)((long)register0x00000008 + -0x18);
              *(undefined8 *)((long)register0x00000008 + -0x10) =
                   *(undefined8 *)((long)register0x00000008 + -0x10);
              *(undefined8 *)((long)register0x00000008 + -8) =
                   *(undefined8 *)((long)register0x00000008 + -8);
              *(mach_header **)((long)register0x00000008 + -0x28) = pmVar9;
              lVar25 = **(long **)pmVar9 + 0x518;
              FUN_109d6edcc(lVar25,(undefined1 *)((long)register0x00000008 + -0x28));
              plVar22 = (long *)(lVar25 + 8);
              pmVar9 = (mach_header *)*plVar22;
              if (pmVar9 == (mach_header *)0x0) {
                puVar10 = (undefined8 *)0x18;
                __Znwm();
                *puVar10 = *(undefined8 *)((long)register0x00000008 + -0x28);
                puVar10[1] = 0;
                puVar10[2] = 0x13;
                func_0x000109d69d80(plVar22,puVar10);
                pmVar9 = (mach_header *)*plVar22;
              }
              return pmVar9;
            }
          }
          else if (uVar17 - 0x10 < 4) {
            if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                *(long *)((long)register0x00000008 + -0x28)) {
              uVar27 = *(undefined8 *)((long)register0x00000008 + -0x10);
              uVar29 = *(undefined8 *)((long)register0x00000008 + -8);
              uVar24 = *(undefined8 *)((long)register0x00000008 + -0x20);
              uVar21 = *(undefined8 *)((long)register0x00000008 + -0x18);
SUB_109d66a94:
              *(undefined8 *)((long)register0x00000008 + -0x20) = uVar24;
              *(undefined8 *)((long)register0x00000008 + -0x18) = uVar21;
              *(undefined8 *)((long)register0x00000008 + -0x10) = uVar27;
              *(undefined8 *)((long)register0x00000008 + -8) = uVar29;
              *(mach_header **)((long)register0x00000008 + -0x28) = pmVar9;
              lVar25 = **(long **)pmVar9 + 0x4b8;
              FUN_109d6eaf8(lVar25,(undefined1 *)((long)register0x00000008 + -0x28));
              plVar22 = (long *)(lVar25 + 8);
              pmVar9 = (mach_header *)*plVar22;
              if (pmVar9 == (mach_header *)0x0) {
                puVar10 = (undefined8 *)0x18;
                __Znwm();
                *puVar10 = *(undefined8 *)((long)register0x00000008 + -0x28);
                puVar10[1] = 0;
                puVar10[2] = 0xd;
                FUN_109d69b08(plVar22,puVar10);
                pmVar9 = (mach_header *)*plVar22;
              }
              return pmVar9;
            }
          }
          else if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                   *(long *)((long)register0x00000008 + -0x28)) {
            *(undefined8 *)((long)register0x00000008 + -0x20) =
                 *(undefined8 *)((long)register0x00000008 + -0x20);
            *(undefined8 *)((long)register0x00000008 + -0x18) =
                 *(undefined8 *)((long)register0x00000008 + -0x18);
            *(undefined8 *)((long)register0x00000008 + -0x10) =
                 *(undefined8 *)((long)register0x00000008 + -0x10);
            *(undefined8 *)((long)register0x00000008 + -8) =
                 *(undefined8 *)((long)register0x00000008 + -8);
            *(mach_header **)((long)register0x00000008 + -0x28) = pmVar9;
            lVar25 = **(long **)pmVar9 + 0x530;
            FUN_109d6f0a0(lVar25,(undefined1 *)((long)register0x00000008 + -0x28));
            plVar22 = (long *)(lVar25 + 8);
            pmVar9 = (mach_header *)*plVar22;
            if (pmVar9 == (mach_header *)0x0) {
              puVar10 = (undefined8 *)0x18;
              __Znwm();
              *puVar10 = *(undefined8 *)((long)register0x00000008 + -0x28);
              puVar10[1] = 0;
              puVar10[2] = 0x12;
              func_0x000109d69da8(plVar22,puVar10);
              pmVar9 = (mach_header *)*plVar22;
            }
            return pmVar9;
          }
        }
        ___stack_chk_fail();
        FUN_109d32234(&unaff_x20->cpusubtype);
        pcVar28 = FUN_109d66880;
        pmVar9 = pmVar23;
        __Unwind_Resume();
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
code_r0x000109d66880:
        *(mach_header **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(mach_header **)((long)register0x00000008 + -0x18) = pmVar23;
        *(undefined1 **)((long)register0x00000008 + -0x10) = puVar11;
        *(code **)((long)register0x00000008 + -8) = pcVar28;
        unaff_x19 = pmVar9;
        if ((pmVar9->cpusubtype & 0xfe) == 0x12) {
          unaff_x19 = (mach_header *)**(undefined8 **)&pmVar9->ncmds;
        }
        FUN_109d678e8();
        if ((pmVar9->cpusubtype & 0xfe) != 0x12) {
          return unaff_x19;
        }
        uVar19 = 0x100000000;
        if (((pmVar9->cpusubtype ^ 0xffffffff) & 0x13) != 0) {
          uVar19 = 0;
        }
        unaff_x20 = (mach_header *)(uVar19 | pmVar9[1].magic);
        uVar27 = *(undefined8 *)((long)register0x00000008 + -0x10);
        uVar29 = *(undefined8 *)((long)register0x00000008 + -8);
        uVar24 = *(undefined8 *)((long)register0x00000008 + -0x20);
        uVar21 = *(undefined8 *)((long)register0x00000008 + -0x18);
FUN_109d66c68:
        while( true ) {
          *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
          *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
          *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
          *(mach_header **)((long)register0x00000008 + -0x28) = unaff_x21;
          *(undefined8 *)((long)register0x00000008 + -0x20) = uVar24;
          *(undefined8 *)((long)register0x00000008 + -0x18) = uVar21;
          *(undefined8 *)((long)register0x00000008 + -0x10) = uVar27;
          *(undefined8 *)((long)register0x00000008 + -8) = uVar29;
          *(undefined8 *)((long)register0x00000008 + -0x48) =
               *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          *(mach_header **)((long)register0x00000008 + -0x160) = unaff_x19;
          if ((ulong)unaff_x20 >> 0x20 != 0) break;
          if ((unaff_x19->ncmds & 0xfe) != 0x10) {
LAB_109d66d7c:
            param_3 = (undefined8 *)((long)register0x00000008 + -0x160);
            FUN_109d335ac((undefined1 *)((long)register0x00000008 + -0x158),
                          (ulong)unaff_x20 & 0xffffffff);
            pmVar7 = *(mach_header **)((long)register0x00000008 + -0x158);
            pmVar23 = (mach_header *)(ulong)*(uint *)((long)register0x00000008 + -0x150);
            FUN_109d67790(pmVar7);
            pmVar9 = unaff_x21;
LAB_109d66e4c:
            pmVar13 = *(mach_header **)((long)register0x00000008 + -0x158);
            if (pmVar13 != (mach_header *)((long)register0x00000008 + -0x148)) {
              _free();
            }
            unaff_x21 = pmVar9;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                *(long *)((long)register0x00000008 + -0x48)) {
              return pmVar7;
            }
            goto LAB_109d66e9c;
          }
          uVar17 = *(uint *)(*(long *)unaff_x19 + 8) & 0xff;
          if ((3 < uVar17) &&
             ((uVar17 != 0xd ||
              (uVar17 = *(uint *)(*(long *)unaff_x19 + 8) >> 8, uVar20 = uVar17 - 8 >> 3,
              7 < (uVar20 | uVar17 << 0x1d) || (1 << (ulong)(uVar20 & 0x1f) & 0x8bU) == 0))))
          goto LAB_109d66d7c;
          pmVar13 = unaff_x20;
          pmVar23 = unaff_x19;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 !=
              *(long *)((long)register0x00000008 + -0x48)) goto LAB_109d66e9c;
          uVar27 = *(undefined8 *)((long)register0x00000008 + -0x30);
          pmVar9 = *(mach_header **)((long)register0x00000008 + -0x28);
          unaff_x24 = *(undefined8 *)((long)register0x00000008 + -0x40);
          unaff_x23 = *(long *)((long)register0x00000008 + -0x38);
          *(undefined8 *)((long)register0x00000008 + -0x30) = uVar27;
          *(mach_header **)((long)register0x00000008 + -0x28) = pmVar9;
          *(undefined8 *)((long)register0x00000008 + -0x20) =
               *(undefined8 *)((long)register0x00000008 + -0x20);
          *(undefined8 *)((long)register0x00000008 + -0x18) =
               *(undefined8 *)((long)register0x00000008 + -0x18);
          *(undefined8 *)((long)register0x00000008 + -0x10) =
               *(undefined8 *)((long)register0x00000008 + -0x10);
          *(undefined8 *)((long)register0x00000008 + -8) =
               *(undefined8 *)((long)register0x00000008 + -8);
          *(undefined8 *)((long)register0x00000008 + -0x38) =
               *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          cVar2 = (char)unaff_x19->ncmds;
          if ((unaff_x19 != (mach_header *)0x0) && (cVar2 == '\x10')) {
            pdVar18 = &unaff_x19->flags;
            uVar17 = *(uint *)(*(long *)unaff_x19 + 8) & 0xff;
            uVar20 = *(uint *)(*(long *)unaff_x19 + 8) >> 8;
            if (uVar17 != 0xd || uVar20 != 8) {
              uVar19 = (ulong)unaff_x20 & 0xffffffff;
              if (uVar17 != 0xd || uVar20 != 0x10) {
                if ((uVar17 == 0xd) && (uVar20 == 0x20)) {
                  if (0x40 < unaff_x19[1].magic) {
                    pdVar18 = *(dword **)pdVar18;
                  }
                  FUN_109d71a9c((undefined1 *)((long)register0x00000008 + -200),uVar19,*pdVar18);
                  pmVar23 = *(mach_header **)((long)register0x00000008 + -200);
                  pmVar13 = (mach_header *)(ulong)*(uint *)((long)register0x00000008 + -0xc0);
                  param_3 = (undefined8 *)(*(long *)**(undefined8 **)unaff_x19 + 0x798);
                  func_0x000109da00ec(param_3,pmVar13);
                  unaff_x19 = (mach_header *)((long)pmVar13 << 2);
                  FUN_109d6b230(pmVar23);
                }
                else {
                  if (0x40 < unaff_x19[1].magic) {
                    pdVar18 = *(dword **)pdVar18;
                  }
                  FUN_109d71ba8((undefined1 *)((long)register0x00000008 + -200),uVar19,
                                *(undefined8 *)pdVar18);
                  pmVar23 = *(mach_header **)((long)register0x00000008 + -200);
                  pmVar13 = (mach_header *)(ulong)*(uint *)((long)register0x00000008 + -0xc0);
                  param_3 = (undefined8 *)(*(long *)**(undefined8 **)unaff_x19 + 0x7b0);
                  func_0x000109da00ec(param_3,pmVar13);
                  unaff_x19 = (mach_header *)((long)pmVar13 << 3);
                  FUN_109d6b230(pmVar23);
                }
                goto LAB_109d693fc;
              }
              if (0x40 < unaff_x19[1].magic) {
                pdVar18 = *(dword **)pdVar18;
              }
              FUN_109d71994((undefined1 *)((long)register0x00000008 + -200),uVar19,(short)*pdVar18);
              pmVar23 = *(mach_header **)((long)register0x00000008 + -200);
              pmVar13 = *(mach_header **)((long)register0x00000008 + -0xc0);
              param_3 = (undefined8 *)(*(long *)**(undefined8 **)unaff_x19 + 0x780);
              func_0x000109da00ec(param_3,pmVar13);
              unaff_x19 = (mach_header *)((long)pmVar13 << 1);
              FUN_109d6b230(pmVar23);
              goto LAB_109d69384;
            }
            if (0x40 < unaff_x19[1].magic) {
              pdVar18 = *(dword **)pdVar18;
            }
            dVar4 = *pdVar18;
            pmVar9 = (mach_header *)((long)register0x00000008 + -0xb0);
            *(mach_header **)((long)register0x00000008 + -200) = pmVar9;
            *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x10;
            *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
            FUN_109d32990((undefined1 *)((long)register0x00000008 + -200),
                          (ulong)unaff_x20 & 0xffffffff,(char)dVar4);
            pmVar23 = *(mach_header **)((long)register0x00000008 + -200);
            pmVar13 = *(mach_header **)((long)register0x00000008 + -0xc0);
            param_3 = (undefined8 *)(*(long *)**(undefined8 **)unaff_x19 + 0x768);
            func_0x000109da00ec(param_3,pmVar13);
            unaff_x19 = pmVar13;
            FUN_109d6b230(pmVar23);
            unaff_x20 = *(mach_header **)((long)register0x00000008 + -200);
            if (unaff_x20 != pmVar9) {
LAB_109d69414:
              _free();
            }
LAB_109d69418:
            if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                *(long *)((long)register0x00000008 + -0x38)) {
              return pmVar23;
            }
LAB_109d69448:
            ___stack_chk_fail();
            if (*(undefined1 **)((long)register0x00000008 + -200) !=
                (undefined1 *)((long)register0x00000008 + -0xb8)) {
              _free();
            }
            pmVar23 = unaff_x20;
            __Unwind_Resume();
            puVar16 = (undefined8 *)((long)register0x00000008 + -0x160);
            *(undefined8 *)((long)register0x00000008 + -0x110) = uVar27;
            *(mach_header **)((long)register0x00000008 + -0x108) = pmVar9;
            *(mach_header **)((long)register0x00000008 + -0x100) = pmVar13;
            *(mach_header **)((long)register0x00000008 + -0xf8) = unaff_x20;
            *(undefined1 **)((long)register0x00000008 + -0xf0) =
                 (undefined1 *)((long)register0x00000008 + -0x10);
            *(code **)((long)register0x00000008 + -0xe8) = FUN_109d694e4;
            *(undefined8 *)((long)register0x00000008 + -0x118) =
                 *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
            pmVar9 = pmVar23;
            pmVar13 = unaff_x19;
            puVar10 = param_3;
            pmVar7 = param_4;
            FUN_109d5fbf8();
            if (pmVar9 == (mach_header *)0x0) {
              pmVar13 = *(mach_header **)pmVar23;
              if (pmVar13 == param_4) {
                pmVar9 = (mach_header *)0x0;
              }
              else {
                *(mach_header **)((long)register0x00000008 + -0x130) = pmVar23;
                *(mach_header **)((long)register0x00000008 + -0x128) = unaff_x19;
                *(undefined8 **)((long)register0x00000008 + -0x120) = param_3;
                lVar25 = **(long **)pmVar13;
                *(undefined4 *)((long)register0x00000008 + -0x160) = 0x3e;
                *(undefined1 **)((long)register0x00000008 + -0x158) =
                     (undefined1 *)((long)register0x00000008 + -0x130);
                *(undefined8 *)((long)register0x00000008 + -0x150) = 3;
                *(undefined8 *)((long)register0x00000008 + -0x140) = 0;
                *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
                *(undefined8 *)((long)register0x00000008 + -0x148) = 0;
                pmVar9 = (mach_header *)(lVar25 + 0x5d8);
                FUN_109d6aa18();
                puVar10 = puVar16;
              }
            }
            if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                *(long *)((long)register0x00000008 + -0x118)) {
              return pmVar9;
            }
            ___stack_chk_fail();
            *(undefined8 *)((long)register0x00000008 + -0x1a0) = unaff_x24;
            *(long *)((long)register0x00000008 + -0x198) = unaff_x23;
            *(mach_header **)((long)register0x00000008 + -400) = param_4;
            *(mach_header **)((long)register0x00000008 + -0x188) = pmVar23;
            *(mach_header **)((long)register0x00000008 + -0x180) = unaff_x19;
            *(undefined8 **)((long)register0x00000008 + -0x178) = param_3;
            *(undefined1 **)((long)register0x00000008 + -0x170) =
                 (undefined1 *)((long)register0x00000008 + -0xf0);
            *(code **)((long)register0x00000008 + -0x168) = FUN_109d6959c;
            *(undefined8 *)((long)register0x00000008 + -0x1a8) =
                 *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
            pmVar23 = pmVar9;
            pmVar15 = pmVar13;
            FUN_109d5fe3c();
            if (pmVar23 == (mach_header *)0x0) {
              pmVar12 = *(mach_header **)(*(long *)pmVar9 + 0x18);
              uVar19 = 0x100000000;
              if (*(char *)(*(long *)pmVar9 + 8) != '\x13') {
                uVar19 = 0;
              }
              pmVar15 = (mach_header *)(uVar19 | (ulong)pmVar7 & 0xffffffff);
              FUN_109da004c();
              if (pmVar12 == param_5) {
                pmVar23 = (mach_header *)0x0;
              }
              else {
                *(mach_header **)((long)register0x00000008 + -0x1b8) = pmVar9;
                *(mach_header **)((long)register0x00000008 + -0x1b0) = pmVar13;
                lVar25 = **(long **)pmVar12;
                *(undefined4 *)((long)register0x00000008 + -0x1e8) = 0x3f;
                *(undefined1 **)((long)register0x00000008 + -0x1e0) =
                     (undefined1 *)((long)register0x00000008 + -0x1b8);
                *(undefined8 *)((long)register0x00000008 + -0x1d8) = 2;
                *(undefined8 **)((long)register0x00000008 + -0x1d0) = puVar10;
                *(mach_header **)((long)register0x00000008 + -0x1c8) = pmVar7;
                *(undefined8 *)((long)register0x00000008 + -0x1c0) = 0;
                pmVar23 = (mach_header *)(lVar25 + 0x5d8);
                FUN_109d6aa18(pmVar23,pmVar12,(undefined1 *)((long)register0x00000008 + -0x1e8));
                pmVar15 = pmVar12;
              }
            }
            if (*(long *)PTR____stack_chk_guard_11034bdc0 !=
                *(long *)((long)register0x00000008 + -0x1a8)) {
              ___stack_chk_fail();
              lVar25._0_4_ = pmVar23->magic;
              lVar25._4_4_ = pmVar23->cputype;
              *(mach_header **)pmVar23 = pmVar15;
              if (lVar25 == 0) {
                return (mach_header *)0x0;
              }
              *(undefined1 **)((long)register0x00000008 + -0x200) =
                   (undefined1 *)((long)register0x00000008 + -0x170);
              *(code **)((long)register0x00000008 + -0x1f8) = FUN_109d6967c;
              FUN_109da2438();
              *(undefined8 **)((long)register0x00000008 + -0x210) = puVar10;
              *(mach_header **)((long)register0x00000008 + -0x208) = pmVar7;
              *(undefined8 *)((long)register0x00000008 + -0x200) =
                   *(undefined8 *)((long)register0x00000008 + -0x200);
              *(undefined8 *)((long)register0x00000008 + -0x1f8) =
                   *(undefined8 *)((long)register0x00000008 + -0x1f8);
              uVar17 = *(uint *)(lVar25 + 0x14);
              if ((uVar17 >> 0x1e & 1) == 0) {
                uVar20 = uVar17 << 5;
                uVar19 = (ulong)uVar20;
                pmVar9 = (mach_header *)(lVar25 - uVar19);
                if ((int)uVar17 < 0) {
                  if (uVar20 != 0) {
                    puVar10 = (undefined8 *)(lVar25 + -0x10);
                    do {
                      if (puVar10[-2] != 0) {
                        lVar25 = puVar10[-1];
                        *(long *)*puVar10 = lVar25;
                        if (lVar25 != 0) {
                          *(undefined8 *)(lVar25 + 0x10) = *puVar10;
                        }
                      }
                      puVar10 = puVar10 + -4;
                      uVar19 = uVar19 - 0x20;
                    } while (uVar19 != 0);
                  }
                  pmVar9 = (mach_header *)((long)&pmVar9[-1].flags - *(long *)&pmVar9[-1].flags);
                }
                else if (uVar20 != 0) {
                  puVar10 = (undefined8 *)(lVar25 + -0x10);
                  do {
                    if (puVar10[-2] != 0) {
                      lVar25 = puVar10[-1];
                      *(long *)*puVar10 = lVar25;
                      if (lVar25 != 0) {
                        *(undefined8 *)(lVar25 + 0x10) = *puVar10;
                      }
                    }
                    puVar10 = puVar10 + -4;
                    uVar19 = uVar19 - 0x20;
                  } while (uVar19 != 0);
                }
              }
              else {
                pmVar9 = (mach_header *)(lVar25 + -8);
                FUN_109da2158(*(long *)pmVar9,*(long *)pmVar9 + ((ulong)uVar17 & 0x7ffffff) * 0x20,1
                             );
              }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR___ZdlPv_110352258)(pmVar9);
              return pmVar9;
            }
            return pmVar23;
          }
          if ((unaff_x19 != (mach_header *)0x0) && (cVar2 == '\x11')) {
            bVar3 = *(byte *)(*(long *)unaff_x19 + 8);
            if (bVar3 < 2) {
              if (bVar3 == 0) {
                FUN_109d323e4((undefined1 *)((long)register0x00000008 + -0xd8),&unaff_x19->flags);
                puVar11 = (undefined1 *)((long)register0x00000008 + -0xd8);
                func_0x000109d30394(puVar11,0xffffffffffffffff);
                FUN_109d71994((undefined1 *)((long)register0x00000008 + -200),
                              (ulong)unaff_x20 & 0xffffffff,puVar11);
                if ((0x40 < *(uint *)((long)register0x00000008 + -0xd0)) &&
                   (*(long *)((long)register0x00000008 + -0xd8) != 0)) {
                  __ZdaPv();
                }
                param_3 = *(undefined8 **)unaff_x19;
                pmVar23 = *(mach_header **)((long)register0x00000008 + -200);
                pmVar13 = *(mach_header **)((long)register0x00000008 + -0xc0);
                func_0x000109da00ec(param_3,pmVar13);
                unaff_x19 = (mach_header *)((long)pmVar13 << 1);
                FUN_109d6b230(pmVar23);
              }
              else {
                if (bVar3 != 1) goto LAB_109d69254;
                FUN_109d323e4((undefined1 *)((long)register0x00000008 + -0xd8),&unaff_x19->flags);
                puVar11 = (undefined1 *)((long)register0x00000008 + -0xd8);
                func_0x000109d30394(puVar11,0xffffffffffffffff);
                FUN_109d71994((undefined1 *)((long)register0x00000008 + -200),
                              (ulong)unaff_x20 & 0xffffffff,puVar11);
                if ((0x40 < *(uint *)((long)register0x00000008 + -0xd0)) &&
                   (*(long *)((long)register0x00000008 + -0xd8) != 0)) {
                  __ZdaPv();
                }
                param_3 = *(undefined8 **)unaff_x19;
                pmVar23 = *(mach_header **)((long)register0x00000008 + -200);
                pmVar13 = *(mach_header **)((long)register0x00000008 + -0xc0);
                func_0x000109da00ec(param_3,pmVar13);
                unaff_x19 = (mach_header *)((long)pmVar13 << 1);
                FUN_109d6b230(pmVar23);
              }
LAB_109d69384:
              unaff_x20 = *(mach_header **)((long)register0x00000008 + -200);
              pmVar7 = (mach_header *)((long)register0x00000008 + -0xb0);
            }
            else {
              if (bVar3 == 2) {
                FUN_109d323e4((undefined1 *)((long)register0x00000008 + -0xd8),&unaff_x19->flags);
                puVar11 = (undefined1 *)((long)register0x00000008 + -0xd8);
                func_0x000109d30394(puVar11,0xffffffffffffffff);
                FUN_109d71a9c((undefined1 *)((long)register0x00000008 + -200),
                              (ulong)unaff_x20 & 0xffffffff,puVar11);
                if ((0x40 < *(uint *)((long)register0x00000008 + -0xd0)) &&
                   (*(long *)((long)register0x00000008 + -0xd8) != 0)) {
                  __ZdaPv();
                }
                param_3 = *(undefined8 **)unaff_x19;
                pmVar23 = *(mach_header **)((long)register0x00000008 + -200);
                pmVar13 = (mach_header *)(ulong)*(uint *)((long)register0x00000008 + -0xc0);
                func_0x000109da00ec(param_3,pmVar13);
                unaff_x19 = (mach_header *)((long)pmVar13 << 2);
                FUN_109d6b230(pmVar23);
              }
              else {
                if (bVar3 != 3) goto LAB_109d69254;
                FUN_109d323e4((undefined1 *)((long)register0x00000008 + -0xd8),&unaff_x19->flags);
                puVar11 = (undefined1 *)((long)register0x00000008 + -0xd8);
                func_0x000109d30394(puVar11,0xffffffffffffffff);
                FUN_109d71ba8((undefined1 *)((long)register0x00000008 + -200),
                              (ulong)unaff_x20 & 0xffffffff,puVar11);
                if ((0x40 < *(uint *)((long)register0x00000008 + -0xd0)) &&
                   (*(long *)((long)register0x00000008 + -0xd8) != 0)) {
                  __ZdaPv();
                }
                param_3 = *(undefined8 **)unaff_x19;
                pmVar23 = *(mach_header **)((long)register0x00000008 + -200);
                pmVar13 = (mach_header *)(ulong)*(uint *)((long)register0x00000008 + -0xc0);
                func_0x000109da00ec(param_3,pmVar13);
                unaff_x19 = (mach_header *)((long)pmVar13 << 3);
                FUN_109d6b230(pmVar23);
              }
LAB_109d693fc:
              unaff_x20 = *(mach_header **)((long)register0x00000008 + -200);
              pmVar7 = (mach_header *)((long)register0x00000008 + -0xb8);
            }
            if (unaff_x20 != pmVar7) goto LAB_109d69414;
            goto LAB_109d69418;
          }
LAB_109d69254:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 !=
              *(long *)((long)register0x00000008 + -0x38)) goto LAB_109d69448;
          unaff_x20 = (mach_header *)((ulong)unaff_x20 & 0xffffffff);
          uVar27 = *(undefined8 *)((long)register0x00000008 + -0x10);
          uVar29 = *(undefined8 *)((long)register0x00000008 + -8);
          uVar24 = *(undefined8 *)((long)register0x00000008 + -0x20);
          uVar21 = *(undefined8 *)((long)register0x00000008 + -0x18);
          unaff_x22 = *(ulong *)((long)register0x00000008 + -0x30);
          unaff_x21 = *(mach_header **)((long)register0x00000008 + -0x28);
        }
        pmVar9 = *(mach_header **)unaff_x19;
        pmVar23 = unaff_x20;
        FUN_109da004c();
        pmVar13 = unaff_x19;
        FUN_109d661e0();
        unaff_x21 = pmVar9;
        if ((int)pmVar13 == 0) {
          if (1 < (byte)unaff_x19->ncmds - 0xb) {
            unaff_x22 = (ulong)unaff_x20 & 0xffffffff;
            unaff_x23 = **(long **)pmVar9;
            unaff_x20 = pmVar9;
            FUN_109d67e38();
            lVar25 = unaff_x23 + 0x7b0;
            FUN_109d66880(lVar25,0,0);
            pmVar7 = unaff_x20;
            FUN_109d694e4(unaff_x20,unaff_x19,lVar25,0);
            *(undefined4 *)((long)register0x00000008 + -0x164) = 0;
            FUN_109d5d540((undefined1 *)((long)register0x00000008 + -0x158),unaff_x22,
                          (undefined1 *)((long)register0x00000008 + -0x164));
            param_3 = *(undefined8 **)((long)register0x00000008 + -0x158);
            param_4 = (mach_header *)(ulong)*(uint *)((long)register0x00000008 + -0x150);
            param_5 = (mach_header *)0x0;
            pmVar23 = unaff_x20;
            FUN_109d6959c(pmVar7);
            goto LAB_109d66e4c;
          }
          if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
              *(long *)((long)register0x00000008 + -0x48)) {
            unaff_x30 = *(code **)((long)register0x00000008 + -8);
            unaff_x20 = *(mach_header **)((long)register0x00000008 + -0x20);
            unaff_x19 = *(mach_header **)((long)register0x00000008 + -0x18);
            unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
            goto SUB_109d677ec;
          }
        }
        else if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                 *(long *)((long)register0x00000008 + -0x48)) {
          uVar27 = *(undefined8 *)((long)register0x00000008 + -0x10);
          uVar29 = *(undefined8 *)((long)register0x00000008 + -8);
          uVar24 = *(undefined8 *)((long)register0x00000008 + -0x20);
          uVar21 = *(undefined8 *)((long)register0x00000008 + -0x18);
          goto SUB_109d66a94;
        }
LAB_109d66e9c:
        ___stack_chk_fail();
        if (*(undefined1 **)((long)register0x00000008 + -0x158) !=
            (undefined1 *)((long)register0x00000008 + -0x148)) {
          _free();
        }
        pmVar9 = pmVar13;
        __Unwind_Resume();
        *(ulong *)((long)register0x00000008 + -0x1a0) = unaff_x22;
        *(mach_header **)((long)register0x00000008 + -0x198) = unaff_x21;
        *(mach_header **)((long)register0x00000008 + -400) = unaff_x20;
        *(mach_header **)((long)register0x00000008 + -0x188) = pmVar13;
        *(undefined1 **)((long)register0x00000008 + -0x180) =
             (undefined1 *)((long)register0x00000008 + -0x10);
        *(code **)((long)register0x00000008 + -0x178) = FUN_109d66ed0;
        unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x180);
        *(undefined8 *)((long)register0x00000008 + -0x1a8) =
             *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uVar20 = pmVar9->cpusubtype;
        uVar17 = uVar20 & 0xff;
        if ((pmVar9 == (mach_header *)0x0) || (uVar17 != 0xd)) {
          if ((3 < uVar17 && uVar17 != 5) && (uVar20 & 0xfd) != 4) {
            unaff_x20 = (mach_header *)(ulong)pmVar9[1].magic;
            unaff_x21 = &MACH_HEADER;
            if (uVar17 != 0x13) {
              unaff_x21 = (mach_header *)0x0;
            }
            unaff_x19 = *(mach_header **)&pmVar9->flags;
            FUN_109d66ed0();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 !=
                *(long *)((long)register0x00000008 + -0x1a8)) goto LAB_109d67010;
            unaff_x20 = (mach_header *)((ulong)unaff_x21 | (ulong)unaff_x20);
            uVar27 = *(undefined8 *)((long)register0x00000008 + -0x180);
            uVar29 = *(undefined8 *)((long)register0x00000008 + -0x178);
            uVar24 = *(undefined8 *)((long)register0x00000008 + -400);
            uVar21 = *(undefined8 *)((long)register0x00000008 + -0x188);
            unaff_x22 = *(ulong *)((long)register0x00000008 + -0x1a0);
            unaff_x21 = *(mach_header **)((long)register0x00000008 + -0x198);
            register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x170);
            goto FUN_109d66c68;
          }
          FUN_109d9f580(pmVar9);
          FUN_109defa38((undefined1 *)((long)register0x00000008 + -0x1c8));
          pmVar9 = *(mach_header **)pmVar9;
          unaff_x20 = (mach_header *)((long)register0x00000008 + -0x1c8);
          pmVar23 = (mach_header *)((long)register0x00000008 + -0x1c8);
          FUN_109d668f4(pmVar9);
          unaff_x19 = (mach_header *)((long)register0x00000008 + -0x1c0);
          FUN_109d32234();
        }
        else {
          pmVar9 = *(mach_header **)pmVar9;
          param_3 = (undefined8 *)0xffffffffffffffff;
          param_4 = (mach_header *)0x1;
          func_0x000109d301b0((undefined1 *)((long)register0x00000008 + -0x1c8),uVar20 >> 8);
          pmVar23 = (mach_header *)((long)register0x00000008 + -0x1c8);
          FUN_109d66bc4();
          unaff_x19 = pmVar9;
          if ((0x40 < *(uint *)((long)register0x00000008 + -0x1c0)) &&
             (unaff_x19 = *(mach_header **)((long)register0x00000008 + -0x1c8),
             unaff_x19 != (mach_header *)0x0)) {
            __ZdaPv();
          }
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
            *(long *)((long)register0x00000008 + -0x1a8)) {
          return pmVar9;
        }
LAB_109d67010:
        ___stack_chk_fail();
        FUN_109d32234(&unaff_x20->cpusubtype);
        unaff_x30 = FUN_109d67050;
        pmVar13 = unaff_x19;
        __Unwind_Resume();
        puVar5 = (undefined1 *)((long)register0x00000008 + -0x1d0);
        do {
          register0x00000008 = (BADSPACEBASE *)(puVar5 + -0x50);
          *(mach_header **)(puVar5 + -0x20) = unaff_x20;
          *(mach_header **)(puVar5 + -0x18) = unaff_x19;
          *(undefined1 **)(puVar5 + -0x10) = unaff_x29;
          *(code **)(puVar5 + -8) = unaff_x30;
          *(undefined8 *)(puVar5 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          pmVar9 = (mach_header *)(*(undefined8 **)pmVar13)[3];
          if ((pmVar9->cpusubtype & 0xfc) == 0) {
            pmVar9 = (mach_header *)**(undefined8 **)pmVar13;
            func_0x000109d6b510(puVar5 + -0x48);
            unaff_x20 = (mach_header *)(puVar5 + -0x48);
            pmVar23 = (mach_header *)(puVar5 + -0x48);
            FUN_109d668f4(pmVar9);
            pmVar7 = (mach_header *)(puVar5 + -0x40);
            FUN_109d32234();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar5 + -0x28)) {
              return pmVar9;
            }
          }
          else {
            FUN_109d6b464();
            pmVar7 = pmVar13;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar5 + -0x28))
            goto code_r0x000109d670a0;
          }
          ___stack_chk_fail();
          FUN_109d32234(&unaff_x20->cpusubtype);
          pmVar13 = pmVar7;
          __Unwind_Resume();
          *(ulong *)(puVar5 + -0x80) = unaff_x22;
          *(mach_header **)(puVar5 + -0x78) = unaff_x21;
          *(mach_header **)(puVar5 + -0x70) = unaff_x20;
          *(mach_header **)(puVar5 + -0x68) = pmVar7;
          *(undefined1 **)(puVar5 + -0x60) = puVar5 + -0x10;
          *(code **)(puVar5 + -0x58) = FUN_109d67130;
          if ((pmVar23 == (mach_header *)0x0) || ((char)pmVar23->ncmds != '\x10')) {
            return (mach_header *)0x0;
          }
          pdVar18 = &pmVar23->flags;
          uVar17 = pmVar23[1].magic;
          if (0x40 < uVar17) {
            pdVar8 = pdVar18;
            func_0x000109df08dc();
            if (0x40 < uVar17 - (int)pdVar8) {
              return (mach_header *)0x0;
            }
            pdVar18 = *(dword **)pdVar18;
          }
          uVar17 = *pdVar18;
          pmVar23 = (mach_header *)(ulong)uVar17;
          unaff_x29 = *(undefined1 **)(puVar5 + -0x60);
          unaff_x30 = *(code **)(puVar5 + -0x58);
          unaff_x20 = *(mach_header **)(puVar5 + -0x70);
          unaff_x19 = *(mach_header **)(puVar5 + -0x68);
          unaff_x22 = *(ulong *)(puVar5 + -0x80);
          unaff_x21 = *(mach_header **)(puVar5 + -0x78);
          bVar3 = (byte)pmVar13->ncmds;
          if ((pmVar13 != (mach_header *)0x0) && (0xfc < (byte)(bVar3 - 0xb))) {
            uVar19 = (ulong)pmVar13->sizeofcmds & 0x7ffffff;
            if ((uint)uVar19 <= uVar17) {
              return (mach_header *)0x0;
            }
            return *(mach_header **)(pmVar13 + ((long)pmVar23 - uVar19));
          }
          lVar25 = *(long *)pmVar13;
          bVar1 = *(byte *)(lVar25 + 8);
          if ((pmVar13 != (mach_header *)0x0) && (bVar3 == 0xd)) {
            if ((lVar25 == 0) || (bVar1 != 0x11)) {
              if ((lVar25 == 0) || ((bVar1 & 0xfe) != 0x12)) {
                uVar20 = *(uint *)(lVar25 + 0xc);
              }
              else {
                uVar20 = *(uint *)(lVar25 + 0x20);
              }
            }
            else {
              uVar20 = (uint)*(undefined8 *)(lVar25 + 0x20);
            }
            if (uVar20 <= uVar17) {
              return (mach_header *)0x0;
            }
            if (bVar1 == 0x11 || (bVar1 & 0xfe) == 0x12) {
              puVar10 = (undefined8 *)(lVar25 + 0x18);
            }
            else {
              puVar10 = (undefined8 *)(*(long *)(lVar25 + 0x10) + (long)pmVar23 * 8);
            }
            pmVar9 = (mach_header *)*puVar10;
            goto FUN_109d666e0;
          }
          if (bVar1 == 0x13) {
            return (mach_header *)0x0;
          }
          if (bVar3 == 0xc) {
            if ((bVar1 == 0x11) || ((bVar1 & 0xfe) == 0x12)) {
              uVar20 = *(uint *)(lVar25 + 0x20);
            }
            else {
              uVar20 = *(uint *)(lVar25 + 0xc);
            }
            if (uVar20 <= uVar17) {
              return (mach_header *)0x0;
            }
            if (bVar1 == 0x11 || (bVar1 & 0xfe) == 0x12) {
              puVar10 = (undefined8 *)(lVar25 + 0x18);
            }
            else {
              puVar10 = (undefined8 *)(*(long *)(lVar25 + 0x10) + (long)pmVar23 * 8);
            }
            puVar10 = (undefined8 *)*puVar10;
            *(mach_header **)(puVar5 + -0x70) = unaff_x20;
            *(mach_header **)(puVar5 + -0x68) = unaff_x19;
            *(undefined1 **)(puVar5 + -0x60) = unaff_x29;
            *(code **)(puVar5 + -0x58) = unaff_x30;
            *(undefined8 **)(puVar5 + -0x78) = puVar10;
            lVar25 = *(long *)*puVar10 + 0x560;
            FUN_109d6f6e0(lVar25,puVar5 + -0x78);
            plVar22 = (long *)(lVar25 + 8);
            pmVar9 = (mach_header *)*plVar22;
            if (pmVar9 == (mach_header *)0x0) {
              puVar10 = (undefined8 *)0x18;
              __Znwm();
              *puVar10 = *(undefined8 *)(puVar5 + -0x78);
              puVar10[1] = 0;
              puVar10[2] = 0xc;
              FUN_109d69eb0(plVar22,puVar10);
              pmVar9 = (mach_header *)*plVar22;
            }
            return pmVar9;
          }
          if ((byte)(bVar3 - 0xb) < 2) {
            if ((bVar1 == 0x11) || ((bVar1 & 0xfe) == 0x12)) {
              uVar20 = *(uint *)(lVar25 + 0x20);
            }
            else {
              uVar20 = *(uint *)(lVar25 + 0xc);
            }
            if (uVar20 <= uVar17) {
              return (mach_header *)0x0;
            }
            if ((bVar1 == 0x11) || ((bVar1 & 0xfe) == 0x12)) {
              puVar10 = (undefined8 *)(lVar25 + 0x18);
            }
            else {
              puVar10 = (undefined8 *)(*(long *)(lVar25 + 0x10) + (ulong)uVar17 * 8);
            }
            pmVar9 = (mach_header *)*puVar10;
            register0x00000008 = (BADSPACEBASE *)(puVar5 + -0x50);
            goto SUB_109d677ec;
          }
          if (((bVar3 & 0xfe) != 0xe) ||
             (puVar5 = puVar5 + -0x50, *(uint *)(lVar25 + 0x20) <= uVar17)) {
            return (mach_header *)0x0;
          }
        } while( true );
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
SUB_109d677ec:
      *(mach_header **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(mach_header **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(code **)((long)register0x00000008 + -8) = unaff_x30;
      *(mach_header **)((long)register0x00000008 + -0x28) = pmVar9;
      lVar25 = **(long **)pmVar9 + 0x548;
      FUN_109d6f374(lVar25,(undefined1 *)((long)register0x00000008 + -0x28));
      plVar22 = (long *)(lVar25 + 8);
      pmVar9 = (mach_header *)*plVar22;
      if (pmVar9 == (mach_header *)0x0) {
        puVar10 = (undefined8 *)0x18;
        __Znwm();
        *puVar10 = *(undefined8 *)((long)register0x00000008 + -0x28);
        puVar10[1] = 0;
        puVar10[2] = 0xb;
        func_0x000109d69dd0(plVar22,puVar10);
        pmVar9 = (mach_header *)*plVar22;
      }
      return pmVar9;
    }
  }
  else {
    unaff_x20 = amStack_b8;
    uStack_c0 = 0x1000000000;
    pmStack_c8 = unaff_x20;
    if (param_2 == 0) {
      uVar19 = 0;
    }
    else {
      lVar26 = param_2 << 2;
      unaff_x19 = param_1;
      do {
        if (unaff_x19->magic == 0xffffffff) {
          pmVar9 = (mach_header *)(lVar25 + 0x798);
          unaff_x30 = (code *)0x109d8c48c;
          register0x00000008 = (BADSPACEBASE *)auStack_d0;
          unaff_x29 = puVar11;
          goto SUB_109d677ec;
        }
        lVar14 = lVar25 + 0x798;
        param_3 = (undefined8 *)0x0;
        FUN_109d66880();
        FUN_109d31fec(&pmStack_c8,lVar14);
        unaff_x19 = (mach_header *)&unaff_x19->cputype;
        lVar26 = lVar26 + -4;
      } while (lVar26 != 0);
      uVar19 = uStack_c0 & 0xffffffff;
    }
    pmVar23 = pmStack_c8;
    FUN_109d67790(pmStack_c8);
    pmVar9 = pmStack_c8;
    if (pmStack_c8 != unaff_x20) {
      _free();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return pmVar23;
    }
  }
  ___stack_chk_fail();
  if (pmStack_c8 != unaff_x20) {
    _free();
  }
  __Unwind_Resume();
  pmVar23 = pmVar9 + -2;
  lVar26._0_4_ = pmVar23->magic;
  lVar26._4_4_ = pmVar23->cputype;
  if (lVar26 != 0) {
    lVar25 = *(long *)&pmVar9[-2].cpusubtype;
    **(long **)&pmVar9[-2].ncmds = lVar25;
    if (lVar25 != 0) {
      *(undefined8 *)(lVar25 + 0x10) = *(undefined8 *)&pmVar9[-2].ncmds;
    }
  }
  pmVar23->magic = (int)uVar19;
  pmVar23->cputype = (int)(uVar19 >> 0x20);
  if (uVar19 != 0) {
    plVar22 = (long *)(uVar19 + 8);
    lVar25 = *plVar22;
    pmVar9[-2].cpusubtype = (int)lVar25;
    pmVar9[-2].filetype = (int)((ulong)lVar25 >> 0x20);
    if (lVar25 != 0) {
      *(dword **)(lVar25 + 0x10) = &pmVar9[-2].cpusubtype;
    }
    *(long **)&pmVar9[-2].ncmds = plVar22;
    *plVar22 = (long)pmVar23;
  }
  pmVar23 = pmVar9 + -1;
  lVar14._0_4_ = pmVar23->magic;
  lVar14._4_4_ = pmVar23->cputype;
  if (lVar14 != 0) {
    lVar25 = *(long *)&pmVar9[-1].cpusubtype;
    **(long **)&pmVar9[-1].ncmds = lVar25;
    if (lVar25 != 0) {
      *(undefined8 *)(lVar25 + 0x10) = *(undefined8 *)&pmVar9[-1].ncmds;
    }
  }
  *(undefined8 **)pmVar23 = param_3;
  if (param_3 != (undefined8 *)0x0) {
    plVar22 = param_3 + 1;
    lVar25 = *plVar22;
    pmVar9[-1].cpusubtype = (int)lVar25;
    pmVar9[-1].filetype = (int)((ulong)lVar25 >> 0x20);
    if (lVar25 != 0) {
      *(dword **)(lVar25 + 0x10) = &pmVar9[-1].cpusubtype;
    }
    *(long **)&pmVar9[-1].ncmds = plVar22;
    *plVar22 = (long)pmVar23;
  }
  FUN_109d36160(pmVar9 + 2,param_4,&param_4->magic + (long)param_5);
  pmVar23 = pmVar9;
  FUN_109da2858(pmVar9,param_6);
  if ((pmVar9 == (mach_header *)0x0) || ((char)pmVar9->ncmds != '\0')) {
    return pmVar23;
  }
  if ((*(byte *)((long)&pmVar9->sizeofcmds + 3) >> 4 & 1) != 0) {
    pmVar23 = pmVar9;
    func_0x000109da271c();
    pmVar13 = (mach_header *)&pmVar23->ncmds;
    uVar19._0_4_ = pmVar23->magic;
    uVar19._4_4_ = pmVar23->cputype;
    if ((4 < uVar19) && (*(dword *)pmVar13 == 0x6d766c6c && (char)pmVar23->sizeofcmds == '.')) {
      pmVar9[1].magic = pmVar9[1].magic | 0x2000;
      FUN_109d85438();
      goto LAB_109d85600;
    }
  }
  pmVar13 = (mach_header *)0x0;
  pmVar9[1].magic = pmVar9[1].magic & 0xffffdfff;
LAB_109d85600:
  pmVar9[1].cputype = (dword)pmVar13;
  return pmVar13;
code_r0x000109d670a0:
  param_3 = (undefined8 *)0x0;
  puVar11 = *(undefined1 **)(puVar5 + -0x10);
  pcVar28 = *(code **)(puVar5 + -8);
  unaff_x20 = *(mach_header **)(puVar5 + -0x20);
  pmVar23 = *(mach_header **)(puVar5 + -0x18);
  register0x00000008 = (BADSPACEBASE *)puVar5;
  goto code_r0x000109d66880;
}



/* Entry: 109d8c54c; end: 109d8c60b;  */

void FUN_109d8c54c(ulong *param_1,ulong param_2,ulong param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  undefined4 uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  
  puVar2 = param_1 + -8;
  if (*puVar2 != 0) {
    uVar4 = param_1[-7];
    *(ulong *)param_1[-6] = uVar4;
    if (uVar4 != 0) {
      *(ulong *)(uVar4 + 0x10) = param_1[-6];
    }
  }
  *puVar2 = param_2;
  if (param_2 != 0) {
    puVar3 = (ulong *)(param_2 + 8);
    uVar4 = *puVar3;
    param_1[-7] = uVar4;
    if (uVar4 != 0) {
      *(ulong **)(uVar4 + 0x10) = param_1 + -7;
    }
    param_1[-6] = (ulong)puVar3;
    *puVar3 = (ulong)puVar2;
  }
  puVar2 = param_1 + -4;
  if (*puVar2 != 0) {
    uVar4 = param_1[-3];
    *(ulong *)param_1[-2] = uVar4;
    if (uVar4 != 0) {
      *(ulong *)(uVar4 + 0x10) = param_1[-2];
    }
  }
  *puVar2 = param_3;
  if (param_3 != 0) {
    puVar3 = (ulong *)(param_3 + 8);
    uVar4 = *puVar3;
    param_1[-3] = uVar4;
    if (uVar4 != 0) {
      *(ulong **)(uVar4 + 0x10) = param_1 + -3;
    }
    param_1[-2] = (ulong)puVar3;
    *puVar3 = (ulong)puVar2;
  }
  FUN_109d36160(param_1 + 8,param_4,param_4 + param_5 * 4);
  FUN_109da2858(param_1,param_6);
  if ((param_1 == (ulong *)0x0) || ((char)param_1[2] != '\0')) {
    return;
  }
  if ((*(byte *)((long)param_1 + 0x17) >> 4 & 1) != 0) {
    puVar2 = param_1;
    func_0x000109da271c();
    puVar3 = puVar2 + 2;
    if ((4 < *puVar2) && ((int)*puVar3 == 0x6d766c6c && *(char *)((long)puVar2 + 0x14) == '.')) {
      *(uint *)(param_1 + 4) = (uint)param_1[4] | 0x2000;
      FUN_109d85438();
      uVar1 = SUB84(puVar3,0);
      goto LAB_109d85600;
    }
  }
  uVar1 = 0;
  *(uint *)(param_1 + 4) = (uint)param_1[4] & 0xffffdfff;
LAB_109d85600:
  *(undefined4 *)((long)param_1 + 0x24) = uVar1;
  return;
}



/* Entry: 109d8c60c; end: 109d8c68b;  */

long FUN_109d8c60c(long param_1,uint *param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  
  if (param_3 != 0) {
    param_3 = param_3 << 2;
    do {
      uVar1 = *param_2;
      if ((param_1 == 0) || (*(char *)(param_1 + 8) != '\x11')) {
        if (param_1 == 0) {
          return 0;
        }
        if (*(char *)(param_1 + 8) != '\x10') {
          return 0;
        }
        if (*(uint *)(param_1 + 0xc) <= uVar1) {
          return 0;
        }
        plVar2 = (long *)(*(long *)(param_1 + 0x10) + (ulong)uVar1 * 8);
      }
      else {
        if (*(ulong *)(param_1 + 0x20) <= (ulong)uVar1) {
          return 0;
        }
        plVar2 = (long *)(param_1 + 0x18);
      }
      param_1 = *plVar2;
      param_2 = param_2 + 1;
      param_3 = param_3 + -4;
    } while (param_3 != 0);
  }
  return param_1;
}



/* Entry: 109d8c68c; end: 109d8c733;  */

long FUN_109d8c68c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = param_1;
  FUN_109d3a0d8(param_1,param_4,param_2,param_3,param_6);
  plVar1 = (long *)(lVar2 + -0x20);
  if (*plVar1 != 0) {
    lVar2 = *(long *)(param_1 + -0x18);
    **(long **)(param_1 + -0x10) = lVar2;
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_1 + -0x10);
    }
  }
  *plVar1 = param_3;
  if (param_3 != 0) {
    plVar3 = (long *)(param_3 + 8);
    lVar2 = *plVar3;
    *(long *)(param_1 + -0x18) = lVar2;
    if (lVar2 != 0) {
      *(long **)(lVar2 + 0x10) = (long *)(param_1 + -0x18);
    }
    *(long **)(param_1 + -0x10) = plVar3;
    *plVar3 = (long)plVar1;
  }
  FUN_109da2b08(param_1,param_5);
  return param_1;
}



/* Entry: 109d8c734; end: 109d8c7c3;  */

undefined8 *
FUN_109d8c734(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x60;
  __Znwm();
  puVar1 = puVar2 + 4;
  *(uint *)((long)puVar2 + 0x34) = *(uint *)((long)puVar2 + 0x34) & 0x38000000 | 1;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = puVar1;
  FUN_109d8c68c(puVar1,param_1,param_2,*param_2,param_3,param_4);
  return puVar1;
}



/* Entry: 109d8c7c4; end: 109d8c8bf;  */

long FUN_109d8c7c4(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)(param_1 + -0x40);
  lVar1 = param_1;
  FUN_109d8b0bc(param_1,param_5,param_2,plVar3,2,param_7);
  if (*(long *)(lVar1 + -0x40) != 0) {
    lVar1 = *(long *)(param_1 + -0x38);
    **(long **)(param_1 + -0x30) = lVar1;
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_1 + -0x30);
    }
  }
  *plVar3 = param_3;
  if (param_3 != 0) {
    plVar2 = (long *)(param_3 + 8);
    lVar1 = *plVar2;
    *(long *)(param_1 + -0x38) = lVar1;
    if (lVar1 != 0) {
      *(long **)(lVar1 + 0x10) = (long *)(param_1 + -0x38);
    }
    *(long **)(param_1 + -0x30) = plVar2;
    *plVar2 = (long)plVar3;
  }
  plVar3 = (long *)(param_1 + -0x20);
  if (*plVar3 != 0) {
    lVar1 = *(long *)(param_1 + -0x18);
    **(long **)(param_1 + -0x10) = lVar1;
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_1 + -0x10);
    }
  }
  *plVar3 = param_4;
  if (param_4 != 0) {
    plVar2 = (long *)(param_4 + 8);
    lVar1 = *plVar2;
    *(long *)(param_1 + -0x18) = lVar1;
    if (lVar1 != 0) {
      *(long **)(lVar1 + 0x10) = (long *)(param_1 + -0x18);
    }
    *(long **)(param_1 + -0x10) = plVar2;
    *plVar2 = (long)plVar3;
  }
  FUN_109da2b08(param_1,param_6);
  return param_1;
}



/* Entry: 109d8c8c0; end: 109d8c95f;  */

undefined8 *
FUN_109d8c8c0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x80;
  __Znwm();
  *(uint *)((long)puVar2 + 0x54) = *(uint *)((long)puVar2 + 0x54) & 0x38000000 | 2;
  puVar1 = puVar2 + 8;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = puVar1;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = puVar1;
  FUN_109d8c7c4(puVar1,param_1,param_2,param_3,*param_2,param_4,param_5);
  return puVar1;
}



/* Entry: 109d8c960; end: 109d8cd3b;  */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_109d8c960(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
                   long param_6,long param_7,long param_8)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  ulong *puVar9;
  ulong uVar10;
  
  uVar6 = (uint)param_2;
  uVar4 = (uint)param_1;
  if (uVar4 == 0x31) {
    uVar7 = *(uint *)(param_4 + 8) & 0xfe;
    bVar2 = 0x11 < uVar7;
    bVar3 = uVar7 == 0x12;
    if (((*(uint *)(param_3 + 8) & 0xfe) == 0x12) == bVar3) goto LAB_109d8c9d4;
    if (uVar6 == 0x31) goto LAB_109d8ca08;
    goto LAB_109d8cd04;
  }
LAB_109d8c9d4:
  bVar2 = 0x30 < uVar6;
  bVar3 = false;
  if (uVar6 == 0x31) {
    uVar7 = *(uint *)(param_5 + 8) & 0xfe;
    bVar2 = 0x11 < uVar7;
    bVar3 = uVar7 == 0x12;
    if (uVar4 != 0x31 && ((*(uint *)(param_4 + 8) & 0xfe) == 0x12) == !bVar3) goto LAB_109d8cd04;
  }
LAB_109d8ca08:
  uVar5 = (ulong)(byte)(&UNK_10e058c07)[(long)(int)uVar4 * 0xd + (long)(int)uVar6];
  plVar8 = (long *)&UNK_10e058de0;
  uVar10 = (ulong)(byte)(&UNK_10e058de0)[uVar5];
  puVar9 = (ulong *)(uVar10 * 4 + 0x109d8ca3c);
  switch((&UNK_10e058c07)[(long)(int)uVar4 * 0xd + (long)(int)uVar6]) {
  case 0:
    break;
  default:
    goto code_r0x000109d8ca3c;
  case 3:
    plVar8 = (long *)(ulong)(*(uint *)(param_3 + 8) & 0xfe);
  case 0x17:
    if (((int)plVar8 == 0x12) || (uVar5 = param_1, *(char *)(param_5 + 8) != '\r')) {
LAB_109d8cd04:
      uVar5 = 0;
    }
    break;
  case 4:
    puVar9 = (ulong *)(ulong)*(uint *)(param_5 + 8);
  case 0x18:
    uVar6 = (uint)puVar9 & 0xff;
    if (uVar6 < 4) {
code_r0x000109d8ca3c:
      uVar5 = param_1;
code_r0x000109d8ca40:
    }
    else {
      uVar7 = 0;
      if (((uint)puVar9 & 0xfd) == 4) {
        uVar7 = uVar4;
      }
      puVar9 = (ulong *)(ulong)uVar7;
      bVar3 = uVar6 == 5;
code_r0x000109d8cb9c:
      if (!bVar3) {
        uVar4 = (uint)puVar9;
      }
      uVar5 = (ulong)uVar4;
    }
    break;
  case 5:
    if (*(char *)(param_3 + 8) != '\r') {
      uVar6 = 0;
    }
    uVar5 = (ulong)uVar6;
    break;
  case 6:
    uVar4 = *(uint *)(param_3 + 8) & 0xff;
    if (3 < uVar4) {
      uVar7 = 0;
      if ((*(uint *)(param_3 + 8) & 0xfd) == 4) {
        uVar7 = uVar6;
      }
      if (uVar4 != 5) {
        uVar6 = uVar7;
      }
      return (ulong)uVar6;
    }
  case 2:
  case 0x10:
    uVar5 = param_2;
    break;
  case 7:
  case 0x39:
  case 0x87:
  case 0x94:
  case 0xa1:
  case 0xae:
    plVar8 = (long *)0x1137e6000;
  case 0xca:
  case 0xcb:
  case 0xcc:
  case 0xcf:
  case 0xd0:
  case 0xd4:
    plVar8 = (long *)(ulong)*(byte *)(plVar8 + 0xa4);
code_r0x000109d8ca54:
    if (((ulong)plVar8 & 1) == 0) {
code_r0x000109d8ca58:
      plVar8 = (long *)(ulong)*(uint *)(param_3 + 8);
code_r0x000109d8ca5c:
      puVar9 = (ulong *)(ulong)((uint)plVar8 & 0xfe);
code_r0x000109d8ca60:
      bVar3 = (int)puVar9 == 0x12;
code_r0x000109d8ca64:
      if (bVar3) {
code_r0x000109d8ca68:
        plVar8 = *(long **)(param_3 + 0x10);
code_r0x000109d8ca6c:
        plVar8 = (long *)*plVar8;
code_r0x000109d8ca70:
        plVar8 = (long *)(ulong)*(uint *)(plVar8 + 1);
      }
code_r0x000109d8ca74:
      puVar9 = (ulong *)(ulong)*(uint *)(param_5 + 8);
code_r0x000109d8ca78:
      uVar10 = (ulong)((uint)puVar9 & 0xfe);
code_r0x000109d8ca7c:
      bVar3 = (int)uVar10 == 0x12;
code_r0x000109d8ca80:
      uVar4 = (uint)puVar9;
      uVar6 = (uint)plVar8;
      if (bVar3) {
code_r0x000109d8ca84:
        puVar9 = *(ulong **)(param_5 + 0x10);
code_r0x000109d8ca88:
        puVar9 = (ulong *)*puVar9;
code_r0x000109d8ca8c:
        uVar6 = (uint)plVar8;
        uVar4 = *(uint *)((long)puVar9 + 8);
      }
      bVar2 = 0xfe < (uVar4 ^ uVar6);
      bVar3 = (uVar4 ^ uVar6) == 0xff;
code_r0x000109d8ca98:
      if (!bVar2 || bVar3) {
code_r0x000109d8ca9c:
        plVar8 = (long *)(ulong)*(uint *)(param_4 + 8);
code_r0x000109d8caa0:
        plVar8 = (long *)(ulong)((uint)plVar8 & 0xfe);
code_r0x000109d8caa4:
        if ((int)plVar8 == 0x12) {
code_r0x000109d8caac:
          param_4 = **(ulong **)(param_4 + 0x10);
        }
code_r0x000109d8cab4:
        uVar5 = param_4;
        FUN_109d9f594();
code_r0x000109d8cabc:
        bVar3 = (int)uVar5 == 0x40;
        param_5 = uVar5;
code_r0x000109d8cac4:
        if (bVar3) {
          return 0x31;
        }
        uVar5 = 0;
        if (param_6 == 0) {
          return 0;
        }
        bVar3 = param_8 == param_6;
code_r0x000109d8cad4:
        if (!bVar3) {
          return uVar5;
        }
        plVar8 = (long *)(ulong)*(uint *)(param_6 + 8);
code_r0x000109d8cadc:
        if (((uint)plVar8 & 0xfe) == 0x12) {
          param_6 = **(long **)(param_6 + 0x10);
        }
code_r0x000109d8caf0:
        uVar4 = (uint)param_6;
        FUN_109d9f594();
        bVar2 = uVar4 <= (uint)param_5;
code_r0x000109d8cafc:
        uVar4 = 0;
        if (bVar2) {
          uVar4 = 0x31;
        }
        return (ulong)uVar4;
      }
    }
    goto LAB_109d8cd04;
  case 8:
    plVar8 = (long *)(ulong)(*(uint *)(param_3 + 8) & 0xfe);
  case 0x1a:
    uVar5 = param_3;
    if ((int)plVar8 == 0x12) {
code_r0x000109d8cbc8:
      uVar5 = **(ulong **)(param_3 + 0x10);
    }
    uVar4 = (uint)uVar5;
    FUN_109d9f594();
    uVar5 = param_5;
    if ((*(uint *)(param_5 + 8) & 0xfe) == 0x12) {
      uVar5 = **(ulong **)(param_5 + 0x10);
    }
    uVar7 = (uint)uVar5;
    FUN_109d9f594();
    if (param_3 == param_5) {
      return 0x31;
    }
    if (uVar7 <= uVar4) {
      if (uVar4 <= uVar7) {
        uVar6 = 0;
      }
      return (ulong)uVar6;
    }
    return param_1;
  case 9:
    uVar5 = 0x27;
    break;
  case 10:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x109d8cd3c);
    (*pcVar1)();
  case 0xb:
    if (param_7 != 0) {
      if ((*(uint *)(param_7 + 8) & 0xfe) == 0x12) {
        param_7 = **(long **)(param_7 + 0x10);
      }
      uVar4 = (uint)param_7;
      FUN_109d9f594();
      if ((*(uint *)(param_3 + 8) & 0xfe) == 0x12) {
        param_3 = **(ulong **)(param_3 + 0x10);
      }
      uVar6 = (uint)param_3;
      FUN_109d9f594();
      if (uVar6 <= uVar4) {
        if ((*(uint *)(param_5 + 8) & 0xfe) == 0x12) {
          param_5 = **(ulong **)(param_5 + 0x10);
        }
        uVar4 = (uint)param_5;
        FUN_109d9f594();
        if (uVar6 == uVar4) {
          return 0x31;
        }
      }
    }
    goto LAB_109d8cd04;
  case 0xc:
    plVar8 = (long *)(ulong)*(uint *)(param_3 + 8);
  case 0x27:
    if (((uint)plVar8 & 0xfe) == 0x12) {
      plVar8 = *(long **)(param_3 + 0x10);
code_r0x000109d8cb1c:
      plVar8 = (long *)(ulong)*(uint *)(*plVar8 + 8);
    }
    uVar6 = (uint)plVar8;
    uVar4 = *(uint *)(param_5 + 8);
    if ((uVar4 & 0xfe) == 0x12) {
      puVar9 = (ulong *)**(undefined8 **)(param_5 + 0x10);
code_r0x000109d8cb3c:
      uVar6 = (uint)plVar8;
      uVar4 = (uint)puVar9[1];
    }
    uVar7 = 0x31;
    if (0xff < (uVar4 ^ uVar6)) {
      uVar7 = 0x32;
    }
    uVar5 = (ulong)uVar7;
    break;
  case 0xe:
    if ((*(uint *)(param_3 + 8) & 0xfe) == 0x12) {
      param_3 = **(ulong **)(param_3 + 0x10);
    }
    if ((*(uint *)(param_5 + 8) & 0xfe) == 0x12) {
      param_5 = **(ulong **)(param_5 + 0x10);
    }
    uVar4 = 0x32;
    if (*(long *)(param_3 + 0x18) != *(long *)(param_5 + 0x18)) {
      uVar4 = 0;
    }
    uVar5 = (ulong)uVar4;
    break;
  case 0x11:
  case 0x4d:
  case 0x52:
  case 0x5b:
  case 0xa6:
  case 0xa7:
  case 0xab:
    uVar5 = 0x2b;
  case 0x46:
  case 0x53:
  case 0x60:
  case 0x6d:
  case 0x7a:
  case 0xbb:
    break;
  case 0x13:
    goto code_r0x000109d8cb3c;
  case 0x14:
    goto code_r0x000109d8cadc;
  case 0x15:
    goto code_r0x000109d8cafc;
  case 0x16:
  case 0x32:
  case 0xd3:
    goto code_r0x000109d8ca7c;
  case 0x19:
  case 0x29:
    goto code_r0x000109d8cb1c;
  case 0x1b:
    goto code_r0x000109d8cabc;
  case 0x1c:
    goto code_r0x000109d8cb9c;
  case 0x1d:
  case 0x37:
  case 0x48:
  case 0x55:
  case 0xaa:
    goto code_r0x000109d8ca5c;
  case 0x1e:
    goto code_r0x000109d8ca9c;
  case 0x22:
    goto code_r0x000109d8cad4;
  case 0x23:
    goto code_r0x000109d8ca88;
  case 0x24:
  case 0x2d:
    goto code_r0x000109d8caa4;
  case 0x25:
  case 0xba:
    goto code_r0x000109d8ca58;
  case 0x26:
    goto code_r0x000109d8caf0;
  case 0x28:
    goto code_r0x000109d8cac4;
  case 0x2a:
  case 200:
  case 0xe8:
    goto code_r0x000109d8ca78;
  case 0x2b:
    goto code_r0x000109d8cab4;
  case 0x2c:
  case 0xe3:
  case 0xf4:
    goto code_r0x000109d8ca6c;
  case 0x2f:
    goto code_r0x000109d8ca84;
  case 0x30:
  case 0x3b:
  case 0x49:
  case 0x57:
  case 0xb0:
  case 0xd5:
    goto code_r0x000109d8ca40;
  case 0x31:
    goto code_r0x000109d8ca98;
  case 0x33:
    goto code_r0x000109d8caac;
  case 0x34:
  case 0xc6:
  case 0xf8:
    goto code_r0x000109d8ca68;
  case 0x35:
    goto code_r0x000109d8caa0;
  case 0x36:
  case 0xcd:
  case 0xce:
  case 0xd1:
  case 0xd2:
    goto code_r0x000109d8ca54;
  case 0x38:
    goto code_r0x000109d8ca8c;
  case 0x3a:
  case 0xd6:
  case 0xec:
    goto code_r0x000109d8ca74;
  case 0x3e:
  case 0x3f:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x4b:
  case 0x4c:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x58:
  case 0x59:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x65:
  case 0x66:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x72:
  case 0x73:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x81:
  case 0x82:
  case 0x85:
  case 0x86:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8e:
  case 0x8f:
  case 0x92:
  case 0x93:
  case 0x96:
  case 0x97:
  case 0x98:
  case 0x9b:
  case 0x9c:
  case 0x9f:
  case 0xa0:
  case 0xa3:
  case 0xa4:
  case 0xa5:
  case 0xa8:
  case 0xa9:
  case 0xac:
  case 0xad:
  case 0xb3:
  case 0xb4:
  case 0xb7:
  case 0xb8:
  case 0xb9:
  case 0xbd:
  case 0xbe:
  case 0xbf:
  case 0xc0:
  case 0xc1:
  case 0xc2:
  case 0xc3:
  case 0xc4:
  case 0xc5:
  case 199:
    goto code_r0x000109d8cbc8;
  case 0x4a:
    goto code_r0x000109d8ca60;
  case 0x4e:
    goto code_r0x000109d8ca80;
  case 0xe2:
  case 0xf0:
    goto code_r0x000109d8ca70;
  case 0xfc:
    goto code_r0x000109d8ca64;
  }
  return uVar5;
}



/* Entry: 109d8cd3c; end: 109d8cf9b;  */

void FUN_109d8cd3c(int param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x60;
  __Znwm();
  *(uint *)((long)puVar1 + 0x34) = *(uint *)((long)puVar1 + 0x34) & 0x38000000 | 1;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = puVar1 + 4;
                    /* WARNING: Could not recover jumptable at 0x000109d8cda0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10e058df2)[param_1 - 0x26] * 4 + 0x109d8cda4))();
  return;
}



/* Entry: 109d8cf9c; end: 109d8cfe3;  */

undefined8 FUN_109d8cf9c(undefined8 param_1)

{
  FUN_109d3a0d8();
  FUN_109da2b08();
  return param_1;
}



/* Entry: 109d8cfe4; end: 109d8d0ff;  */

long FUN_109d8cfe4(long param_1,undefined8 param_2,undefined8 param_3,ushort param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  lVar1 = param_1;
  FUN_109d8b0bc();
  if (*(long *)(lVar1 + -0x40) != 0) {
    lVar1 = *(long *)(param_1 + -0x38);
    **(long **)(param_1 + -0x30) = lVar1;
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_1 + -0x30);
    }
  }
  *(long *)(param_1 + -0x40) = param_5;
  if (param_5 != 0) {
    plVar3 = (long *)(param_5 + 8);
    lVar1 = *plVar3;
    *(long *)(param_1 + -0x38) = lVar1;
    if (lVar1 != 0) {
      *(long **)(lVar1 + 0x10) = (long *)(param_1 + -0x38);
    }
    *(long **)(param_1 + -0x30) = plVar3;
    *plVar3 = param_1 + -0x40;
  }
  plVar3 = (long *)(param_1 + -0x20);
  if (*plVar3 != 0) {
    lVar1 = *(long *)(param_1 + -0x18);
    **(long **)(param_1 + -0x10) = lVar1;
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_1 + -0x10);
    }
  }
  *plVar3 = param_6;
  if (param_6 != 0) {
    plVar2 = (long *)(param_6 + 8);
    lVar1 = *plVar2;
    *(long *)(param_1 + -0x18) = lVar1;
    if (lVar1 != 0) {
      *(long **)(lVar1 + 0x10) = (long *)(param_1 + -0x18);
    }
    *(long **)(param_1 + -0x10) = plVar2;
    *plVar2 = (long)plVar3;
  }
  *(ushort *)(param_1 + 0x12) = *(ushort *)(param_1 + 0x12) & 0xffc0 | param_4;
  FUN_109da2b08(param_1,param_7);
  if (param_9 != 0) {
    FUN_109d8b1b8(param_1,param_9,1);
  }
  return param_1;
}



/* Entry: 109d8d100; end: 109d8d153;  */

undefined4 FUN_109d8d100(ulong param_1)

{
  return *(undefined4 *)(&UNK_10e058ec8 + (param_1 & 0xffffffff) * 4);
}



/* Entry: 109d8d154; end: 109d8d3ab;  */

void FUN_109d8d154(undefined8 param_1,undefined8 param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000109d8d174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10e058e01)[param_3 - 0x20] * 4 + 0x109d8d178))();
  return;
}



/* Entry: 109d8d3ac; end: 109d8d467;  */

void FUN_109d8d3ac(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  FUN_109d32888();
                    /* WARNING: Could not recover jumptable at 0x000109d8d3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10e058e0b)[param_3 & 0xffffffff] * 4 + 0x109d8d3e4))(param_1,0);
  return;
}



/* Entry: 109d8d468; end: 109d8d557;  */

undefined1  [16] FUN_109d8d468(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  
  if (param_2 != param_3) {
    plVar2 = param_4 + 1;
    do {
      param_4 = plVar2;
      plVar2 = param_4 + -1;
      lVar3 = *param_2;
      if (*plVar2 != 0) {
        lVar1 = *param_4;
        *(long *)param_4[1] = lVar1;
        if (lVar1 != 0) {
          *(long *)(lVar1 + 0x10) = param_4[1];
        }
      }
      *plVar2 = lVar3;
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 8);
        lVar3 = *plVar4;
        *param_4 = lVar3;
        if (lVar3 != 0) {
          *(long **)(lVar3 + 0x10) = param_4;
        }
        param_4[1] = (long)plVar4;
        *plVar4 = (long)plVar2;
      }
      param_2 = param_2 + 4;
      plVar2 = param_4 + 4;
    } while (param_2 != param_3);
    param_4 = param_4 + 3;
    param_2 = param_3;
  }
  auVar5._8_8_ = param_4;
  auVar5._0_8_ = param_2;
  return auVar5;
}



/* Entry: 109d8d558; end: 109d8d7d7;  */

ulong FUN_109d8d558(ulong *param_1,long param_2,long param_3,ulong param_4)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  
  puVar1 = param_1 + param_2;
  puVar3 = param_1;
  puVar11 = param_1;
  puVar10 = puVar1;
  if ((4 < param_4) && (uVar4 = param_2 * 8, 0 < (long)uVar4)) {
    puVar7 = param_1;
    uVar9 = 4;
    do {
      puVar11 = puVar10;
      puVar3 = puVar7;
      uVar13 = uVar9 + 1;
      if (param_4 < uVar13 || param_4 - uVar13 == 0) {
LAB_109d8d5e4:
        uVar13 = param_4;
      }
      else {
        lVar6 = param_3 + uVar13;
        _memchr(lVar6,0x2e,param_4 - uVar13);
        if ((lVar6 == 0) || (uVar13 = lVar6 - param_3, lVar6 - param_3 == 0xffffffffffffffff))
        goto LAB_109d8d5e4;
      }
      puVar10 = puVar11;
      if (puVar11 != puVar3) {
        uVar4 = uVar4 >> 3;
        lVar6 = uVar13 - uVar9;
        puVar7 = puVar11;
        puVar11 = puVar3;
        do {
          uVar5 = uVar4 >> 1;
          puVar8 = puVar11 + uVar5;
          uVar12 = *puVar8;
          lVar2 = uVar12 + uVar9;
          _strncmp(lVar2,param_3 + uVar9,lVar6);
          if (-1 < (int)lVar2) {
            lVar2 = param_3 + uVar9;
            _strncmp(lVar2,uVar12 + uVar9,lVar6);
            if ((int)lVar2 < 0) goto LAB_109d8d648;
            puVar10 = puVar11;
            if (uVar4 != 1) {
              do {
                uVar4 = uVar5 >> 1;
                lVar2 = puVar10[uVar4] + uVar9;
                _strncmp(lVar2,param_3 + uVar9,lVar6);
                puVar11 = puVar10 + uVar4 + 1;
                uVar5 = uVar5 + (uVar5 >> 1 ^ 0xffffffffffffffff);
                if (-1 < (int)lVar2) {
                  puVar11 = puVar10;
                  uVar5 = uVar4;
                }
                puVar10 = puVar11;
              } while (uVar5 != 0);
            }
            puVar8 = puVar8 + 1;
            puVar10 = puVar7;
            if ((long)puVar7 - (long)puVar8 != 0) {
              uVar4 = (long)puVar7 - (long)puVar8 >> 3;
              do {
                uVar12 = uVar4 >> 1;
                lVar2 = param_3 + uVar9;
                _strncmp(lVar2,puVar8[uVar12] + uVar9,lVar6);
                uVar5 = uVar4 + (uVar4 >> 1 ^ 0xffffffffffffffff);
                uVar4 = uVar12;
                if (-1 < (int)lVar2) {
                  uVar4 = uVar5;
                  puVar8 = puVar8 + uVar12 + 1;
                }
                puVar10 = puVar8;
              } while (uVar4 != 0);
            }
            break;
          }
          puVar11 = puVar8 + 1;
          uVar5 = uVar4 + ~uVar5;
          puVar8 = puVar7;
LAB_109d8d648:
          uVar4 = uVar5;
          puVar7 = puVar8;
          puVar10 = puVar11;
        } while (uVar4 != 0);
      }
    } while ((uVar13 < param_4) &&
            (uVar4 = (long)puVar10 - (long)puVar11, puVar7 = puVar11, uVar9 = uVar13,
            0 < (long)uVar4));
  }
  if ((long)puVar10 - (long)puVar11 < 1) {
    puVar11 = puVar3;
  }
  if (puVar11 != puVar1) {
    uVar4 = *puVar11;
    if (uVar4 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar4;
      _strlen();
    }
    if (((param_4 == uVar9) &&
        ((param_4 == 0 || (lVar6 = param_3, _memcmp(param_3,uVar4,param_4), (int)lVar6 == 0)))) ||
       ((uVar9 <= param_4 &&
        (((uVar9 == 0 || (lVar6 = param_3, _memcmp(param_3,uVar4,uVar9), (int)lVar6 == 0)) &&
         (*(char *)(param_3 + uVar9) == '.')))))) {
      return (ulong)((long)puVar11 - (long)param_1) >> 3;
    }
  }
  return 0xffffffff;
}



/* Entry: 109d8d7d8; end: 109d8ddf7;  */

long * FUN_109d8d7d8(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  char *pcStack_408;
  undefined8 uStack_400;
  undefined4 auStack_3f8 [2];
  undefined4 uStack_3f0;
  undefined *apuStack_3e8 [2];
  undefined4 uStack_3d8;
  undefined *puStack_3d0;
  undefined8 uStack_3c8;
  undefined4 uStack_3c0;
  undefined *puStack_3b8;
  undefined8 uStack_3b0;
  undefined4 uStack_3a8;
  undefined *puStack_3a0;
  undefined8 uStack_398;
  undefined4 uStack_390;
  char *pcStack_388;
  undefined8 uStack_380;
  undefined4 uStack_378;
  undefined *puStack_370;
  undefined8 uStack_368;
  undefined4 uStack_360;
  undefined *puStack_358;
  undefined8 uStack_350;
  undefined4 uStack_348;
  undefined *puStack_340;
  undefined8 uStack_338;
  undefined4 uStack_330;
  undefined *puStack_328;
  undefined8 uStack_320;
  undefined4 uStack_318;
  undefined *puStack_310;
  undefined8 uStack_308;
  undefined4 uStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  undefined4 uStack_2e8;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  undefined4 uStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined4 uStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined4 uStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined4 uStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined4 uStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined4 uStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined4 uStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  char *pcStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = 0xa80;
  __Znwm();
  FUN_109d8e470();
  lVar3 = 0;
  *param_1 = lVar1;
  uStack_3f0 = 0;
  apuStack_3e8[0] = &UNK_10f5f9c38;
  apuStack_3e8[1] = (undefined *)0x3;
  uStack_3d8 = 1;
  puStack_3d0 = &UNK_10f5aed83;
  uStack_3c8 = 4;
  uStack_3c0 = 2;
  puStack_3b8 = &UNK_10f5f9c3c;
  uStack_3b0 = 4;
  uStack_3a8 = 3;
  puStack_3a0 = &UNK_10f5f9c41;
  uStack_398 = 6;
  uStack_390 = 4;
  pcStack_388 = "range";
  uStack_380 = 5;
  uStack_378 = 5;
  puStack_370 = &UNK_10f5f9c48;
  uStack_368 = 0xb;
  uStack_360 = 6;
  puStack_358 = &UNK_10f5f9c54;
  uStack_350 = 0xe;
  uStack_348 = 7;
  puStack_340 = &UNK_10f5f9c63;
  uStack_338 = 0xb;
  uStack_330 = 8;
  puStack_328 = &UNK_10f5aee3a;
  uStack_320 = 7;
  uStack_318 = 9;
  puStack_310 = &UNK_10f5af6eb;
  uStack_308 = 0xb;
  uStack_300 = 10;
  puStack_2f8 = &UNK_10f5f9c6f;
  uStack_2f0 = 0x1d;
  uStack_2e8 = 0xb;
  puStack_2e0 = &UNK_10f5aee4a;
  uStack_2d8 = 7;
  uStack_2d0 = 0xc;
  puStack_2c8 = &UNK_10f5aee7f;
  uStack_2c0 = 0xf;
  uStack_2b8 = 0xd;
  puStack_2b0 = &UNK_10f5aee8f;
  uStack_2a8 = 0x17;
  uStack_2a0 = 0xe;
  puStack_298 = &UNK_10f5f9c8d;
  uStack_290 = 0xd;
  uStack_288 = 0xf;
  puStack_280 = &UNK_10f5f9c9b;
  uStack_278 = 0xd;
  uStack_270 = 0x10;
  puStack_268 = &UNK_10f5f9ca9;
  uStack_260 = 0xf;
  uStack_258 = 0x11;
  puStack_250 = &DAT_10f2db2fc;
  uStack_248 = 5;
  uStack_240 = 0x12;
  puStack_238 = &UNK_10f5f9cb9;
  uStack_230 = 9;
  uStack_228 = 0x13;
  puStack_220 = &DAT_10f6389e8;
  uStack_218 = 4;
  uStack_210 = 0x14;
  puStack_208 = &UNK_10f5f9cc3;
  uStack_200 = 0xe;
  uStack_1f8 = 0x15;
  puStack_1f0 = &UNK_10f5f9cd2;
  uStack_1e8 = 0xf;
  uStack_1e0 = 0x16;
  puStack_1d8 = &UNK_10f5aef66;
  uStack_1d0 = 10;
  uStack_1c8 = 0x17;
  puStack_1c0 = &UNK_10f5f9ce2;
  uStack_1b8 = 7;
  uStack_1b0 = 0x18;
  puStack_1a8 = &UNK_10f5f9cea;
  uStack_1a0 = 8;
  uStack_198 = 0x19;
  puStack_190 = &UNK_10f5f9cf3;
  uStack_188 = 0x11;
  uStack_180 = 0x1a;
  pcStack_178 = "callback";
  uStack_170 = 8;
  uStack_168 = 0x1b;
  puStack_160 = &UNK_10f5f9d05;
  uStack_158 = 0x1a;
  uStack_150 = 0x1c;
  puStack_148 = &UNK_10f5aeedc;
  uStack_140 = 0x10;
  uStack_138 = 0x1d;
  puStack_130 = &UNK_10f5aee42;
  uStack_128 = 7;
  uStack_120 = 0x1e;
  puStack_118 = &DAT_10f392499;
  uStack_110 = 10;
  uStack_108 = 0x1f;
  puStack_100 = &UNK_10f5f9d20;
  uStack_f8 = 10;
  uStack_f0 = 0x20;
  puStack_e8 = &UNK_10f5f9d2b;
  uStack_e0 = 0xd;
  uStack_d8 = 0x21;
  puStack_d0 = &UNK_10f5f9d39;
  uStack_c8 = 7;
  uStack_c0 = 0x22;
  puStack_b8 = &UNK_10f5f9d41;
  uStack_b0 = 7;
  uStack_a8 = 0x23;
  puStack_a0 = &DAT_10f2d008d;
  uStack_98 = 8;
  uStack_90 = 0x24;
  puStack_88 = &UNK_10f5f9d49;
  uStack_80 = 9;
  uStack_78 = 0x25;
  puStack_70 = &UNK_10f5f9d53;
  uStack_68 = 10;
  uStack_60 = 0x26;
  puStack_58 = &UNK_10f5aef2d;
  uStack_50 = 10;
  do {
    pcStack_408 = *(char **)((long)apuStack_3e8 + lVar3);
    uStack_400 = *(undefined8 *)((long)apuStack_3e8 + lVar3 + 8);
    auStack_3f8[0] = *(undefined4 *)(*param_1 + 0x984);
    FUN_109d8e014(*param_1 + 0x978,pcStack_408,uStack_400,auStack_3f8);
    lVar3 = lVar3 + 0x18;
  } while (lVar3 != 0x3a8);
  auStack_3f8[0] = *(undefined4 *)(*param_1 + 0xa2c);
  pcStack_408 = "deopt";
  uStack_400 = 5;
  FUN_109d8e014(*param_1 + 0xa20,&UNK_10f5f9d5e,5,auStack_3f8);
  auStack_3f8[0] = *(undefined4 *)(*param_1 + 0xa2c);
  pcStack_408 = "funclet";
  uStack_400 = 7;
  FUN_109d8e014(*param_1 + 0xa20,&UNK_10f5f9d64,7,auStack_3f8);
  auStack_3f8[0] = *(undefined4 *)(*param_1 + 0xa2c);
  pcStack_408 = "gc-transition";
  uStack_400 = 0xd;
  FUN_109d8e014(*param_1 + 0xa20,&UNK_10f5f9d6c,0xd,auStack_3f8);
  auStack_3f8[0] = *(undefined4 *)(*param_1 + 0xa2c);
  pcStack_408 = "cfguardtarget";
  uStack_400 = 0xd;
  FUN_109d8e014(*param_1 + 0xa20,&UNK_10f5f9d7a,0xd,auStack_3f8);
  auStack_3f8[0] = *(undefined4 *)(*param_1 + 0xa2c);
  pcStack_408 = "preallocated";
  uStack_400 = 0xc;
  FUN_109d8e014(*param_1 + 0xa20,&UNK_10f5aee72,0xc,auStack_3f8);
  auStack_3f8[0] = *(undefined4 *)(*param_1 + 0xa2c);
  pcStack_408 = "gc-live";
  uStack_400 = 7;
  FUN_109d8e014(*param_1 + 0xa20,&UNK_10f5f9d88,7,auStack_3f8);
  auStack_3f8[0] = *(undefined4 *)(*param_1 + 0xa2c);
  pcStack_408 = "clang.arc.attachedcall";
  uStack_400 = 0x16;
  FUN_109d8e014(*param_1 + 0xa20,&UNK_10f5f9d90,0x16,auStack_3f8);
  auStack_3f8[0] = *(undefined4 *)(*param_1 + 0xa2c);
  pcStack_408 = "ptrauth";
  uStack_400 = 7;
  FUN_109d8e014(*param_1 + 0xa20,&UNK_10f5f9da7,7,auStack_3f8);
  auStack_3f8[0] = *(undefined4 *)(*param_1 + 0xa2c);
  pcStack_408 = "kcfi";
  uStack_400 = 4;
  FUN_109d8e014(*param_1 + 0xa20,&UNK_10f5f9daf,4,auStack_3f8);
  pcStack_408 = "singlethread";
  uStack_400 = 0xc;
  auStack_3f8[0]._0_1_ = (char)*(undefined4 *)(*param_1 + 0xa44);
  FUN_109d92f98(*param_1 + 0xa38,&UNK_10f5f9db4,0xc,auStack_3f8);
  pcStack_408 = "";
  uStack_400 = 0;
  auStack_3f8[0] = CONCAT31(auStack_3f8[0]._1_3_,(char)*(undefined4 *)(*param_1 + 0xa44));
  plVar2 = (long *)(*param_1 + 0xa38);
  FUN_109d92f98(plVar2,"",0,auStack_3f8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  __ZdlPv(&pcStack_408);
  __Unwind_Resume();
  if (*plVar2 != 0) {
    FUN_109d8eae8();
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 109d8ddf8; end: 109d8df33;  */

long * FUN_109d8ddf8(long *param_1)

{
  if (*param_1 != 0) {
    FUN_109d8eae8();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109d8df34; end: 109d8dfa3;  */

long FUN_109d8df34(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puStack_38;
  
  lVar1 = param_1;
  FUN_109d8e188(param_1,param_2,&puStack_38);
  if ((int)lVar1 != 0) {
    if (*(char *)((long)puStack_38 + 0x1f) < '\0') {
      __ZdlPv(puStack_38[1]);
    }
    *puStack_38 = 0xffffffffffffe000;
    *(ulong *)(param_1 + 8) =
         CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) + 1,
                  (int)*(undefined8 *)(param_1 + 8) + -1);
  }
  return lVar1;
}



/* Entry: 109d8dfa4; end: 109d8e013;  */

void FUN_109d8dfa4(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  if (param_2 != 0) {
    if ((*(char *)(param_2 + 0x38) == '\x01') && (*(char *)(param_2 + 0x37) < '\0')) {
      __ZdlPv(*(undefined8 *)(param_2 + 0x20));
    }
    plVar1 = *(long **)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x18) = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (*(char *)(param_2 + 0x10) == '\x01') {
      FUN_109dfbdd4(param_2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 109d8e014; end: 109d8e117;  */

undefined1  [16] FUN_109d8e014(long *param_1,undefined8 param_2,long param_3,undefined4 *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  plVar1 = param_1;
  func_0x000107c2b020();
  plVar3 = (long *)(*param_1 + ((ulong)plVar1 & 0xffffffff) * 8);
  lVar5 = *plVar3;
  if (lVar5 == -8) {
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  }
  else if (lVar5 != 0) {
    while ((lVar5 == 0 || (lVar5 == -8))) {
      plVar3 = plVar3 + 1;
      lVar5 = *plVar3;
    }
    uVar4 = 0;
    goto LAB_109d8e0fc;
  }
  plVar2 = (long *)(param_3 + 0x11);
  __ZnwmSt11align_val_t(plVar2,8);
  if (param_3 != 0) {
    _memcpy(plVar2 + 2,param_2,param_3);
  }
  *(undefined1 *)((long)(plVar2 + 2) + param_3) = 0;
  *plVar2 = param_3;
  *(undefined4 *)(plVar2 + 1) = *param_4;
  *plVar3 = (long)plVar2;
  *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
  plVar3 = param_1;
  func_0x000107c2b028(param_1,plVar1);
  for (plVar3 = (long *)(*param_1 + ((ulong)plVar3 & 0xffffffff) * 8); *plVar3 == 0 || *plVar3 == -8
      ; plVar3 = plVar3 + 1) {
  }
  uVar4 = 1;
LAB_109d8e0fc:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = plVar3;
  return auVar6;
}



/* Entry: 109d8e118; end: 109d8e187;  */

void FUN_109d8e118(long *param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(uint *)(param_1 + 1);
  if (param_2 != uVar1) {
    if (uVar1 <= param_2) {
      if (*(uint *)((long)param_1 + 0xc) < param_2) {
        func_0x000107c2b01c(param_1,param_1 + 2,param_2,0x10);
        uVar1 = (ulong)*(uint *)(param_1 + 1);
      }
      if (param_2 - uVar1 != 0) {
        _bzero(*param_1 + uVar1 * 0x10,(param_2 - uVar1) * 0x10);
      }
    }
    *(int *)(param_1 + 1) = (int)param_2;
  }
  return;
}



/* Entry: 109d8e188; end: 109d8e21f;  */

undefined8 FUN_109d8e188(long *param_1,ulong *param_2,long *param_3)

{
  uint uVar1;
  ulong *puVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  
  if ((int)param_1[2] == 0) {
    uVar4 = 0;
    puVar5 = (ulong *)0x0;
  }
  else {
    uVar6 = *param_2;
    uVar3 = (int)param_1[2] - 1;
    uVar9 = (ulong)(((uint)(uVar6 >> 4) & 0xfffffff ^ (uint)uVar6 >> 9) & uVar3);
    puVar5 = (ulong *)(*param_1 + uVar9 * 0x20);
    uVar8 = *puVar5;
    if (uVar6 != uVar8) {
      iVar10 = 1;
      puVar7 = (ulong *)0x0;
      do {
        if (uVar8 == 0xfffffffffffff000) {
          uVar4 = 0;
          if (puVar7 != (ulong *)0x0) {
            puVar5 = puVar7;
          }
          goto LAB_109d8e1c8;
        }
        puVar2 = puVar5;
        if (puVar7 != (ulong *)0x0 || uVar8 != 0xffffffffffffe000) {
          puVar2 = puVar7;
        }
        uVar1 = (int)uVar9 + iVar10;
        iVar10 = iVar10 + 1;
        uVar9 = (ulong)(uVar1 & uVar3);
        puVar5 = (ulong *)(*param_1 + uVar9 * 0x20);
        uVar8 = *puVar5;
        puVar7 = puVar2;
      } while (uVar6 != uVar8);
    }
    uVar4 = 1;
  }
LAB_109d8e1c8:
  *param_3 = (long)puVar5;
  return uVar4;
}



/* Entry: 109d8e220; end: 109d8e2c7;  */

long * FUN_109d8e220(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d8e26c;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d8e2c8(param_1,uVar1);
  FUN_109d8e188(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d8e26c:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d8e2c8; end: 109d8e413;  */

void FUN_109d8e2c8(undefined8 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puStack_38;
  
  uVar1 = *(uint *)(param_1 + 2);
  puVar6 = (ulong *)*param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar5 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar5 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar5;
  puVar3 = (undefined8 *)((ulong)uVar5 << 5);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = puVar3;
  if (puVar6 != (ulong *)0x0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 2) << 5;
      do {
        *puVar3 = 0xfffffffffffff000;
        lVar4 = lVar4 + -0x20;
        puVar3 = puVar3 + 4;
      } while (lVar4 != 0);
    }
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 5;
      puVar7 = puVar6;
      do {
        if ((*puVar7 | 0x1000) != 0xfffffffffffff000) {
          FUN_109d8e188(param_1,puVar7,&puStack_38);
          *puStack_38 = *puVar7;
          uVar9 = puVar7[2];
          uVar8 = puVar7[1];
          puStack_38[3] = puVar7[3];
          puStack_38[2] = uVar9;
          puStack_38[1] = uVar8;
          puVar7[2] = 0;
          puVar7[3] = 0;
          puVar7[1] = 0;
          *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
          if (*(char *)((long)puVar7 + 0x1f) < '\0') {
            __ZdlPv(puVar7[1]);
          }
        }
        puVar7 = puVar7 + 4;
        lVar4 = lVar4 + -0x20;
      } while (lVar4 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(puVar6,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar4 = (ulong)*(uint *)(param_1 + 2) << 5;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar4 = lVar4 + -0x20;
      puVar3 = puVar3 + 4;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 109d8e414; end: 109d8e46f;  */

undefined8 * FUN_109d8e414(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puStack_28;
  
  puVar1 = param_1;
  FUN_109d8e188(param_1,param_2,&puStack_28);
  if (((ulong)puVar1 & 1) == 0) {
    FUN_109d8e220(param_1,param_2,param_2);
    uVar2 = *param_2;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = uVar2;
    param_1[1] = 0;
    puStack_28 = param_1;
  }
  return puStack_28;
}



/* Entry: 109d8e470; end: 109d8eae7;  */

long * FUN_109d8e470(long *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  *param_1 = (long)(param_1 + 4);
  param_1[1] = (long)(param_1 + 4);
  param_1[2] = 4;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[8] = 0;
  puVar2 = (undefined8 *)0x18;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_DAT_110b41150;
  param_1[0x15] = 0;
  param_1[9] = (long)puVar2;
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((long)param_1 + 0x6c) = 1;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x40;
  lVar3 = 0x40;
  FUN_109df7b84();
  param_1[0x1b] = lVar3;
  *(undefined4 *)((long)param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0x40;
  lVar3 = 0x40;
  FUN_109df7b84();
  param_1[0x1d] = lVar3;
  *(undefined4 *)((long)param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x40;
  lVar3 = 0x40;
  FUN_109df7b84();
  param_1[0x1f] = lVar3;
  *(undefined8 *)((long)param_1 + 0x104) = 0;
  *(undefined8 *)((long)param_1 + 0x114) = 0;
  *(undefined8 *)((long)param_1 + 0x10c) = 0;
  *(undefined4 *)((long)param_1 + 0x11c) = 0x18;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = (long)(param_1 + 0x28);
  param_1[0x27] = 0x400000000;
  param_1[0x2c] = (long)(param_1 + 0x2e);
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x2f] = 1;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  param_1[100] = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x71) = 0;
  param_1[0x70] = 0;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x77) = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0;
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x89) = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  *(undefined4 *)(param_1 + 0x8f) = 0;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x93) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0;
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0xa1] = 0;
  param_1[0xa0] = 0;
  *(undefined4 *)(param_1 + 0xa5) = 0;
  param_1[0xa4] = 0;
  param_1[0xa3] = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  param_1[0xa7] = 0;
  param_1[0xa6] = 0;
  *(undefined4 *)(param_1 + 0xab) = 0;
  param_1[0xaa] = 0;
  param_1[0xa9] = 0;
  *(undefined4 *)(param_1 + 0xae) = 0;
  param_1[0xad] = 0;
  param_1[0xac] = 0;
  *(undefined4 *)(param_1 + 0xb1) = 0;
  param_1[0xb0] = 0;
  param_1[0xaf] = 0;
  *(undefined8 *)((long)param_1 + 0x4c4) = 0;
  *(undefined8 *)((long)param_1 + 0x4bc) = 0;
  param_1[0x97] = 0;
  param_1[0x96] = 0;
  param_1[0x95] = 0;
  param_1[0x94] = 0;
  *(undefined4 *)((long)param_1 + 0x58c) = 0x10;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  param_1[0xb3] = 0;
  param_1[0xb2] = 0;
  *(undefined4 *)(param_1 + 0xb7) = 0;
  param_1[0xb6] = 0;
  param_1[0xb5] = 0;
  *(undefined4 *)(param_1 + 0xba) = 0;
  param_1[0xb9] = 0;
  param_1[0xb8] = 0;
  *(undefined4 *)(param_1 + 0xbd) = 0;
  param_1[0xbc] = 0;
  param_1[0xbb] = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  param_1[0xbf] = 0;
  param_1[0xbe] = 0;
  param_1[0xc2] = 0;
  param_1[0xc1] = 0;
  param_1[0xc3] = param_2;
  param_1[0xc4] = 7;
  param_1[0xc5] = 0;
  param_1[0xc6] = param_2;
  param_1[199] = 8;
  param_1[200] = 0;
  param_1[0xc9] = param_2;
  param_1[0xcb] = 0;
  param_1[0xca] = 0;
  param_1[0xcc] = param_2;
  param_1[0xcd] = 1;
  param_1[0xce] = 0;
  param_1[0xcf] = param_2;
  param_1[0xd0] = 2;
  param_1[0xd1] = 0;
  param_1[0xd2] = param_2;
  param_1[0xd3] = 3;
  param_1[0xd4] = 0;
  param_1[0xd5] = param_2;
  param_1[0xd6] = 9;
  param_1[0xd7] = 0;
  param_1[0xd8] = param_2;
  param_1[0xd9] = 0xc;
  param_1[0xda] = 0;
  param_1[0xdb] = param_2;
  param_1[0xdc] = 4;
  param_1[0xdd] = 0;
  param_1[0xde] = param_2;
  param_1[0xdf] = 5;
  param_1[0xe0] = 0;
  param_1[0xe1] = param_2;
  param_1[0xe2] = 6;
  param_1[0xe3] = 0;
  param_1[0xe4] = param_2;
  param_1[0xe5] = 10;
  param_1[0xe6] = 0;
  param_1[0xe7] = param_2;
  param_1[0xe8] = 0xb;
  param_1[0xe9] = 0;
  param_1[0xea] = param_2;
  param_1[0xec] = 0;
  param_1[0xeb] = 0x10d;
  param_1[0xed] = param_2;
  param_1[0xef] = 0;
  param_1[0xee] = 0x80d;
  param_1[0xf0] = param_2;
  param_1[0xf2] = 0;
  param_1[0xf1] = 0x100d;
  param_1[0xf3] = param_2;
  param_1[0xf5] = 0;
  param_1[0xf4] = 0x200d;
  param_1[0xf6] = param_2;
  param_1[0xf8] = 0;
  param_1[0xf7] = 0x400d;
  param_1[0xf9] = param_2;
  param_1[0xfb] = 0;
  param_1[0xfa] = 0x800d;
  param_1[0xfd] = 0;
  param_1[0xfc] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = (long)(param_1 + 0x101);
  param_1[0x100] = 0x400000000;
  param_1[0x105] = (long)(param_1 + 0x107);
  param_1[0x107] = 0;
  param_1[0x106] = 0;
  param_1[0x108] = 1;
  param_1[0x109] = (long)(param_1 + 0xfd);
  *(undefined4 *)(param_1 + 0x10c) = 0;
  param_1[0x10b] = 0;
  param_1[0x10a] = 0;
  *(undefined4 *)(param_1 + 0x10f) = 0;
  param_1[0x10e] = 0;
  param_1[0x10d] = 0;
  *(undefined4 *)(param_1 + 0x112) = 0;
  param_1[0x111] = 0;
  param_1[0x110] = 0;
  *(undefined4 *)(param_1 + 0x115) = 0;
  param_1[0x114] = 0;
  param_1[0x113] = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  param_1[0x117] = 0;
  param_1[0x116] = 0;
  *(undefined8 *)((long)param_1 + 0x8c4) = 0x10;
  param_1[0x11b] = 0;
  param_1[0x11a] = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x11f) = 0;
  param_1[0x11e] = 0;
  param_1[0x11d] = 0;
  *(undefined4 *)(param_1 + 0x122) = 0;
  param_1[0x121] = 0;
  param_1[0x120] = 0;
  *(undefined4 *)(param_1 + 0x125) = 0;
  param_1[0x124] = 0;
  param_1[0x123] = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  param_1[0x127] = 0;
  param_1[0x126] = 0;
  *(undefined4 *)(param_1 + 299) = 0;
  param_1[0x12a] = 0;
  param_1[0x129] = 0;
  *(undefined4 *)(param_1 + 0x12e) = 0;
  param_1[0x12d] = 0;
  param_1[300] = 0;
  *(undefined4 *)(param_1 + 0x131) = 0;
  param_1[0x130] = 0;
  param_1[0x12f] = 0;
  *(undefined4 *)((long)param_1 + 0x98c) = 0x10;
  *(undefined4 *)(param_1 + 0x134) = 0;
  param_1[0x133] = 0;
  param_1[0x132] = 0;
  *(undefined4 *)(param_1 + 0x137) = 0;
  param_1[0x136] = 0;
  param_1[0x135] = 0;
  *(undefined4 *)(param_1 + 0x13a) = 0;
  param_1[0x139] = 0;
  param_1[0x138] = 0;
  *(undefined4 *)(param_1 + 0x13d) = 0;
  param_1[0x13c] = 0;
  param_1[0x13b] = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  param_1[0x13f] = 0;
  param_1[0x13e] = 0;
  *(undefined4 *)(param_1 + 0x143) = 0;
  param_1[0x142] = 0;
  param_1[0x141] = 0;
  *(undefined4 *)(param_1 + 0x146) = 0;
  param_1[0x145] = 0;
  param_1[0x144] = 0;
  *(undefined4 *)((long)param_1 + 0xa34) = 0x10;
  *(undefined4 *)(param_1 + 0x149) = 0;
  param_1[0x148] = 0;
  param_1[0x147] = 0;
  *(undefined4 *)((long)param_1 + 0xa4c) = 0x10;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  param_1[0x14b] = 0;
  param_1[0x14a] = 0;
  *(undefined1 *)(param_1 + 0x14d) = 0;
  param_1[0x14e] = 0;
  *(undefined2 *)(param_1 + 0x14f) = 0;
  uVar1 = uRam0000000113833bb8;
  if (sRam0000000113833b40 != 0) {
    *(undefined1 *)((long)param_1 + 0xa79) = 1;
    *(undefined1 *)(param_1 + 0x14f) = uVar1;
  }
  return param_1;
}



/* Entry: 109d8eae8; end: 109d91d47;  */

ulong * FUN_109d8eae8(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  ulong *puVar6;
  int iVar7;
  ulong *puVar8;
  uint uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  int iVar14;
  ulong uVar15;
  undefined4 *puVar16;
  long lVar17;
  char *pcVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  ulong *puVar24;
  long *plVar25;
  long *plStack_d8;
  undefined8 uStack_d0;
  long alStack_c8 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar7 = *(int *)((long)param_1 + 0x14);
  iVar14 = (int)param_1[3];
  if (iVar7 != iVar14) {
    do {
      puVar6 = (ulong *)param_1[1];
      lVar17 = 0x14;
      if (puVar6 != (ulong *)*param_1) {
        lVar17 = 0x10;
      }
      uVar22 = *(uint *)((long)param_1 + lVar17);
      puVar11 = puVar6;
      if (uVar22 != 0) {
        lVar17 = (ulong)uVar22 << 3;
        puVar11 = puVar6 + uVar22;
        do {
          uVar5 = *puVar6;
          if (uVar5 < 0xfffffffffffffffe) goto LAB_109d8eb68;
          lVar17 = lVar17 + -8;
          puVar6 = puVar6 + 1;
        } while (lVar17 != 0);
      }
      uVar5 = *puVar11;
LAB_109d8eb68:
      if (uVar5 != 0) {
        FUN_109d9d1b8();
        __ZdlPv();
        iVar7 = *(int *)((long)param_1 + 0x14);
        iVar14 = (int)param_1[3];
      }
    } while (iVar7 != iVar14);
  }
  puVar20 = (undefined8 *)param_1[0x95];
  for (puVar19 = (undefined8 *)param_1[0x94]; puVar19 != puVar20; puVar19 = puVar19 + 1) {
    pcVar18 = (char *)*puVar19;
    if (*pcVar18 == '!') {
      FUN_109d73a94(pcVar18);
      pcVar18[0x18] = '\0';
      pcVar18[0x19] = '\0';
      pcVar18[0x1a] = '\0';
      pcVar18[0x1b] = '\0';
    }
    FUN_109d96b44(pcVar18);
  }
  puVar6 = param_1 + 0x36;
  FUN_109d91d48();
  uVar10 = param_1[0x36];
  uVar5 = param_1[0x38];
  puVar11 = param_2;
joined_r0x000109d8ebd4:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    FUN_109d96b44(*puVar6);
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == param_2) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8ebd4;
  }
  puVar6 = param_1 + 0x39;
  func_0x000109d91d8c();
  uVar10 = param_1[0x39];
  uVar5 = param_1[0x3b];
  puVar8 = puVar11;
joined_r0x000109d8ec24:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    FUN_109d96b44(*puVar6);
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar11) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8ec24;
  }
  puVar6 = param_1 + 0x3c;
  func_0x000109d91dd0();
  uVar10 = param_1[0x3c];
  uVar5 = param_1[0x3e];
  puVar11 = puVar8;
joined_r0x000109d8ec74:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    FUN_109d96b44(*puVar6);
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar8) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8ec74;
  }
  puVar6 = param_1 + 0x3f;
  func_0x000109d91e14();
  uVar10 = param_1[0x3f];
  uVar5 = param_1[0x41];
  puVar8 = puVar11;
joined_r0x000109d8ecc4:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    FUN_109d96b44(*puVar6);
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar11) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8ecc4;
  }
  puVar6 = param_1 + 0x42;
  func_0x000109d91e58();
  uVar10 = param_1[0x42];
  uVar5 = param_1[0x44];
  puVar11 = puVar8;
joined_r0x000109d8ed14:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    FUN_109d96b44(*puVar6);
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar8) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8ed14;
  }
  puVar6 = param_1 + 0x45;
  func_0x000109d91e9c();
  uVar10 = param_1[0x45];
  uVar5 = param_1[0x47];
  puVar8 = puVar11;
joined_r0x000109d8ed64:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    FUN_109d96b44(*puVar6);
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar11) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8ed64;
  }
  puVar6 = param_1 + 0x48;
  func_0x000109d91ee0();
  uVar10 = param_1[0x48];
  uVar5 = param_1[0x4a];
  puVar11 = puVar8;
joined_r0x000109d8edb4:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    FUN_109d96b44(*puVar6);
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar8) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8edb4;
  }
  puVar6 = param_1 + 0x4b;
  func_0x000109d91f24();
  uVar10 = param_1[0x4b];
  uVar5 = param_1[0x4d];
  puVar8 = puVar11;
joined_r0x000109d8ee04:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    FUN_109d96b44(*puVar6);
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar11) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8ee04;
  }
  puVar6 = param_1 + 0x4e;
  func_0x000109d91f68();
  uVar10 = param_1[0x4e];
  uVar5 = param_1[0x50];
  puVar11 = puVar8;
joined_r0x000109d8ee54:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    FUN_109d96b44(*puVar6);
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar8) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8ee54;
  }
  puVar6 = param_1 + 0x51;
  func_0x000109d91fac();
  uVar10 = param_1[0x51];
  uVar5 = param_1[0x53];
  puVar8 = puVar11;
joined_r0x000109d8eea4:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    FUN_109d96b44(*puVar6);
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar11) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8eea4;
  }
  puVar6 = param_1 + 0x54;
  func_0x000109d91ff0();
  uVar10 = param_1[0x54];
  uVar5 = param_1[0x56];
  puVar11 = puVar8;
joined_r0x000109d8eef4:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    FUN_109d96b44(*puVar6);
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar8) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8eef4;
  }
  puVar6 = param_1 + 0x57;
  func_0x000109d92034();
  uVar10 = param_1[0x57];
  uVar5 = param_1[0x59];
  puVar8 = puVar11;
joined_r0x000109d8ef44:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    FUN_109d96b44(*puVar6);
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar11) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8ef44;
  }
  puVar6 = param_1 + 0x5a;
  func_0x000109d92078();
  uVar10 = param_1[0x5a];
  uVar5 = param_1[0x5c];
  puVar11 = puVar8;
joined_r0x000109d8ef94:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    FUN_109d96b44(*puVar6);
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar8) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8ef94;
  }
  puVar6 = param_1 + 0x5d;
  func_0x000109d920bc();
  uVar10 = param_1[0x5d];
  uVar5 = param_1[0x5f];
  puVar8 = puVar11;
joined_r0x000109d8efe4:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    FUN_109d96b44(*puVar6);
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar11) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8efe4;
  }
  puVar6 = param_1 + 0x60;
  func_0x000109d92100();
  uVar10 = param_1[0x60];
  uVar5 = param_1[0x62];
  puVar11 = puVar8;
joined_r0x000109d8f034:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    FUN_109d96b44(*puVar6);
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar8) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8f034;
  }
  puVar6 = param_1 + 99;
  func_0x000109d92144();
  uVar10 = param_1[99];
  uVar5 = param_1[0x65];
  puVar8 = puVar11;
joined_r0x000109d8f084:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    FUN_109d96b44(*puVar6);
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar11) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8f084;
  }
  puVar6 = param_1 + 0x66;
  func_0x000109d92188();
  uVar10 = param_1[0x66];
  uVar5 = param_1[0x68];
  puVar11 = puVar8;
joined_r0x000109d8f0d4:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    FUN_109d96b44(*puVar6);
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar8) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8f0d4;
  }
  puVar6 = param_1 + 0x69;
  func_0x000109d921cc();
  uVar10 = param_1[0x69];
  uVar5 = param_1[0x6b];
  puVar8 = puVar11;
joined_r0x000109d8f124:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    FUN_109d96b44(*puVar6);
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar11) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8f124;
  }
  puVar6 = param_1 + 0x6c;
  func_0x000109d92210();
  uVar10 = param_1[0x6c];
  uVar5 = param_1[0x6e];
  puVar11 = puVar8;
joined_r0x000109d8f174:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    FUN_109d96b44(*puVar6);
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar8) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8f174;
  }
  puVar6 = param_1 + 0x6f;
  func_0x000109d92254();
  uVar10 = param_1[0x6f];
  uVar5 = param_1[0x71];
  puVar8 = puVar11;
joined_r0x000109d8f1c4:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    FUN_109d96b44(*puVar6);
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar11) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8f1c4;
  }
  puVar6 = param_1 + 0x72;
  func_0x000109d92298();
  uVar10 = param_1[0x72];
  uVar5 = param_1[0x74];
  puVar11 = puVar8;
joined_r0x000109d8f214:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    FUN_109d96b44(*puVar6);
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar8) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8f214;
  }
  puVar6 = param_1 + 0x75;
  func_0x000109d922dc();
  uVar10 = param_1[0x75];
  uVar5 = param_1[0x77];
  puVar8 = puVar11;
joined_r0x000109d8f264:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    FUN_109d96b44(*puVar6);
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar11) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8f264;
  }
  puVar6 = param_1 + 0x78;
  func_0x000109d92320();
  uVar10 = param_1[0x78];
  uVar5 = param_1[0x7a];
  puVar11 = puVar8;
joined_r0x000109d8f2b4:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    FUN_109d96b44(*puVar6);
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar8) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8f2b4;
  }
  puVar6 = param_1 + 0x7b;
  func_0x000109d92364();
  uVar10 = param_1[0x7b];
  uVar5 = param_1[0x7d];
  puVar8 = puVar11;
joined_r0x000109d8f304:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    FUN_109d96b44(*puVar6);
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar11) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8f304;
  }
  puVar6 = param_1 + 0x7e;
  func_0x000109d923a8();
  uVar10 = param_1[0x7e];
  uVar5 = param_1[0x80];
  puVar11 = puVar8;
joined_r0x000109d8f354:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    FUN_109d96b44(*puVar6);
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar8) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8f354;
  }
  puVar6 = param_1 + 0x81;
  func_0x000109d923ec();
  uVar10 = param_1[0x81];
  uVar5 = param_1[0x83];
  puVar8 = puVar11;
joined_r0x000109d8f3a4:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    FUN_109d96b44(*puVar6);
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar11) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8f3a4;
  }
  puVar6 = param_1 + 0x84;
  func_0x000109d92430();
  uVar10 = param_1[0x84];
  uVar5 = param_1[0x86];
  puVar11 = puVar8;
joined_r0x000109d8f3f4:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    FUN_109d96b44(*puVar6);
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar8) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8f3f4;
  }
  puVar6 = param_1 + 0x87;
  func_0x000109d92474();
  uVar10 = param_1[0x87];
  uVar5 = param_1[0x89];
  puVar8 = puVar11;
joined_r0x000109d8f444:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    uVar21 = *puVar6;
    FUN_109d73a94(uVar21);
    *(undefined4 *)(uVar21 + 0x18) = 0;
    FUN_109d96b44(uVar21);
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar11) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8f444;
  }
  puVar6 = param_1 + 0x8a;
  func_0x000109d924b8();
  uVar10 = param_1[0x8a];
  uVar5 = param_1[0x8c];
  puVar11 = puVar8;
joined_r0x000109d8f4a4:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    FUN_109d96b44(*puVar6);
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar8) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8f4a4;
  }
  puVar6 = param_1 + 0x8d;
  func_0x000109d924fc();
  uVar10 = param_1[0x8d];
  uVar5 = param_1[0x8f];
  puVar8 = puVar11;
joined_r0x000109d8f4f4:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    FUN_109d96b44(*puVar6);
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar11) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8f4f4;
  }
  if ((int)param_1[0x31] != 0) {
    puVar11 = (ulong *)param_1[0x30];
    uVar22 = (uint)param_1[0x32];
    puVar6 = puVar11;
    if (uVar22 == 0) {
LAB_109d90710:
      while (puVar6 != puVar11 + (ulong)uVar22 * 2) {
        puVar8 = (ulong *)0x0;
        FUN_109d95198(puVar6[1] + 8);
        do {
          puVar6 = puVar6 + 2;
          if (puVar6 == puVar11 + (ulong)uVar22 * 2) goto LAB_109d8f564;
        } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
      }
    }
    else {
      lVar17 = (ulong)uVar22 << 4;
      do {
        if ((*puVar6 | 0x1000) != 0xfffffffffffff000) goto LAB_109d90710;
        puVar6 = puVar6 + 2;
        lVar17 = lVar17 + -0x10;
      } while (lVar17 != 0);
    }
  }
LAB_109d8f564:
  if ((int)param_1[0x34] != 0) {
    puVar11 = (ulong *)param_1[0x33];
    uVar22 = (uint)param_1[0x35];
    puVar6 = puVar11;
    if (uVar22 == 0) {
LAB_109d90750:
      while (puVar6 != puVar11 + (ulong)uVar22 * 2) {
        *(undefined8 *)(puVar6[1] + 0x18) = 0;
        do {
          puVar6 = puVar6 + 2;
          if (puVar6 == puVar11 + (ulong)uVar22 * 2) goto LAB_109d8f59c;
        } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
      }
    }
    else {
      lVar17 = (ulong)uVar22 << 4;
      do {
        if ((*puVar6 | 0x1000) != 0xfffffffffffff000) goto LAB_109d90750;
        puVar6 = puVar6 + 2;
        lVar17 = lVar17 + -0x10;
      } while (lVar17 != 0);
    }
  }
LAB_109d8f59c:
  puVar20 = (undefined8 *)param_1[0x95];
  for (puVar19 = (undefined8 *)param_1[0x94]; puVar19 != puVar20; puVar19 = puVar19 + 1) {
    FUN_109d96a8c(*puVar19);
  }
  puVar6 = param_1 + 0x36;
  FUN_109d91d48();
  uVar10 = param_1[0x36];
  uVar5 = param_1[0x38];
  puVar11 = puVar8;
joined_r0x000109d8f5d0:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    uVar21 = *puVar6;
    if (uVar21 != 0) {
      FUN_109d926b8();
      uVar15 = *(ulong *)(uVar21 - 0x10);
      func_0x000109d95a70((ulong *)(uVar21 - 0x10));
      __ZdlPv(uVar21 + (uVar15 & 0x3c) * -2 + -0x10);
    }
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar8) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8f5d0;
  }
  puVar6 = param_1 + 0x39;
  func_0x000109d91d8c();
  uVar10 = param_1[0x39];
  uVar5 = param_1[0x3b];
  puVar8 = puVar11;
joined_r0x000109d8f64c:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    uVar21 = *puVar6;
    if (uVar21 != 0) {
      FUN_109d926e8();
      uVar15 = *(ulong *)(uVar21 - 0x10);
      func_0x000109d95a70((ulong *)(uVar21 - 0x10));
      __ZdlPv(uVar21 + (uVar15 & 0x3c) * -2 + -0x10);
    }
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar11) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8f64c;
  }
  puVar6 = param_1 + 0x3c;
  func_0x000109d91dd0();
  uVar10 = param_1[0x3c];
  uVar5 = param_1[0x3e];
  puVar11 = puVar8;
joined_r0x000109d8f6c8:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    uVar21 = *puVar6;
    if (uVar21 != 0) {
      FUN_109d92718();
      uVar15 = *(ulong *)(uVar21 - 0x10);
      func_0x000109d95a70((ulong *)(uVar21 - 0x10));
      __ZdlPv(uVar21 + (uVar15 & 0x3c) * -2 + -0x10);
    }
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar8) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8f6c8;
  }
  puVar6 = param_1 + 0x3f;
  func_0x000109d91e14();
  uVar10 = param_1[0x3f];
  uVar5 = param_1[0x41];
  puVar8 = puVar11;
joined_r0x000109d8f744:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    uVar21 = *puVar6;
    if (uVar21 != 0) {
      FUN_109d73b2c(uVar21 + 8);
      uVar15 = *(ulong *)(uVar21 - 0x10);
      func_0x000109d95a70();
      __ZdlPv(uVar21 + (uVar15 & 0x3c) * -2 + -0x10);
    }
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar11) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8f744;
  }
  puVar6 = param_1 + 0x42;
  func_0x000109d91e58();
  uVar10 = param_1[0x42];
  uVar5 = param_1[0x44];
  puVar11 = puVar8;
joined_r0x000109d8f7c0:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    uVar21 = *puVar6;
    if (uVar21 != 0) {
      FUN_109d92750();
      uVar15 = *(ulong *)(uVar21 - 0x10);
      func_0x000109d95a70((ulong *)(uVar21 - 0x10));
      __ZdlPv(uVar21 + (uVar15 & 0x3c) * -2 + -0x10);
    }
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar8) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8f7c0;
  }
  puVar6 = param_1 + 0x45;
  func_0x000109d91e9c();
  uVar10 = param_1[0x45];
  uVar5 = param_1[0x47];
  puVar8 = puVar11;
joined_r0x000109d8f83c:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    uVar21 = *puVar6;
    if (uVar21 != 0) {
      FUN_109d73b2c(uVar21 + 8);
      uVar15 = *(ulong *)(uVar21 - 0x10);
      func_0x000109d95a70();
      __ZdlPv(uVar21 + (uVar15 & 0x3c) * -2 + -0x10);
    }
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar11) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8f83c;
  }
  puVar6 = param_1 + 0x48;
  func_0x000109d91ee0();
  uVar10 = param_1[0x48];
  uVar5 = param_1[0x4a];
  puVar11 = puVar8;
joined_r0x000109d8f8b8:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    uVar21 = *puVar6;
    if (uVar21 != 0) {
      FUN_109d92780();
      uVar15 = *(ulong *)(uVar21 - 0x10);
      func_0x000109d95a70((ulong *)(uVar21 - 0x10));
      __ZdlPv(uVar21 + (uVar15 & 0x3c) * -2 + -0x10);
    }
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar8) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8f8b8;
  }
  puVar6 = param_1 + 0x4b;
  func_0x000109d91f24();
  uVar10 = param_1[0x4b];
  uVar5 = param_1[0x4d];
  puVar8 = puVar11;
joined_r0x000109d8f934:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    uVar21 = *puVar6;
    if (uVar21 != 0) {
      FUN_109d73b2c(uVar21 + 8);
      uVar15 = *(ulong *)(uVar21 - 0x10);
      func_0x000109d95a70();
      __ZdlPv(uVar21 + (uVar15 & 0x3c) * -2 + -0x10);
    }
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar11) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8f934;
  }
  puVar6 = param_1 + 0x4e;
  func_0x000109d91f68();
  uVar10 = param_1[0x4e];
  uVar5 = param_1[0x50];
  puVar11 = puVar8;
joined_r0x000109d8f9b0:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    uVar21 = *puVar6;
    if (uVar21 != 0) {
      FUN_109d73b2c(uVar21 + 8);
      uVar15 = *(ulong *)(uVar21 - 0x10);
      func_0x000109d95a70();
      __ZdlPv(uVar21 + (uVar15 & 0x3c) * -2 + -0x10);
    }
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar8) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8f9b0;
  }
  puVar6 = param_1 + 0x51;
  func_0x000109d91fac();
  uVar10 = param_1[0x51];
  uVar5 = param_1[0x53];
  puVar8 = puVar11;
joined_r0x000109d8fa2c:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    uVar21 = *puVar6;
    if (uVar21 != 0) {
      FUN_109d73b2c(uVar21 + 8);
      uVar15 = *(ulong *)(uVar21 - 0x10);
      func_0x000109d95a70();
      __ZdlPv(uVar21 + (uVar15 & 0x3c) * -2 + -0x10);
    }
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar11) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8fa2c;
  }
  puVar6 = param_1 + 0x54;
  func_0x000109d91ff0();
  uVar10 = param_1[0x54];
  uVar5 = param_1[0x56];
  puVar11 = puVar8;
joined_r0x000109d8faa8:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    uVar21 = *puVar6;
    if (uVar21 != 0) {
      FUN_109d73b2c(uVar21 + 8);
      uVar15 = *(ulong *)(uVar21 - 0x10);
      func_0x000109d95a70();
      __ZdlPv(uVar21 + (uVar15 & 0x3c) * -2 + -0x10);
    }
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar8) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8faa8;
  }
  puVar6 = param_1 + 0x57;
  func_0x000109d92034();
  uVar10 = param_1[0x57];
  uVar5 = param_1[0x59];
  puVar8 = puVar11;
joined_r0x000109d8fb24:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    uVar21 = *puVar6;
    if (uVar21 != 0) {
      FUN_109d73b2c(uVar21 + 8);
      uVar15 = *(ulong *)(uVar21 - 0x10);
      func_0x000109d95a70();
      __ZdlPv(uVar21 + (uVar15 & 0x3c) * -2 + -0x10);
    }
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar11) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8fb24;
  }
  puVar6 = param_1 + 0x5a;
  func_0x000109d92078();
  uVar10 = param_1[0x5a];
  uVar5 = param_1[0x5c];
  puVar11 = puVar8;
joined_r0x000109d8fba0:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    uVar21 = *puVar6;
    if (uVar21 != 0) {
      FUN_109d73b2c(uVar21 + 8);
      uVar15 = *(ulong *)(uVar21 - 0x10);
      func_0x000109d95a70();
      __ZdlPv(uVar21 + (uVar15 & 0x3c) * -2 + -0x10);
    }
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar8) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8fba0;
  }
  puVar6 = param_1 + 0x5d;
  func_0x000109d920bc();
  uVar10 = param_1[0x5d];
  uVar5 = param_1[0x5f];
  puVar8 = puVar11;
joined_r0x000109d8fc1c:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    uVar21 = *puVar6;
    if (uVar21 != 0) {
      FUN_109d73b2c(uVar21 + 8);
      uVar15 = *(ulong *)(uVar21 - 0x10);
      func_0x000109d95a70();
      __ZdlPv(uVar21 + (uVar15 & 0x3c) * -2 + -0x10);
    }
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar11) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8fc1c;
  }
  puVar6 = param_1 + 0x60;
  func_0x000109d92100();
  uVar10 = param_1[0x60];
  uVar5 = param_1[0x62];
  puVar11 = puVar8;
joined_r0x000109d8fc98:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    uVar21 = *puVar6;
    if (uVar21 != 0) {
      FUN_109d73b2c(uVar21 + 8);
      uVar15 = *(ulong *)(uVar21 - 0x10);
      func_0x000109d95a70();
      __ZdlPv(uVar21 + (uVar15 & 0x3c) * -2 + -0x10);
    }
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar8) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8fc98;
  }
  puVar6 = param_1 + 99;
  func_0x000109d92144();
  uVar10 = param_1[99];
  uVar5 = param_1[0x65];
  puVar8 = puVar11;
joined_r0x000109d8fd14:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    uVar21 = *puVar6;
    if (uVar21 != 0) {
      FUN_109d73b2c(uVar21 + 8);
      uVar15 = *(ulong *)(uVar21 - 0x10);
      func_0x000109d95a70();
      __ZdlPv(uVar21 + (uVar15 & 0x3c) * -2 + -0x10);
    }
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar11) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8fd14;
  }
  puVar6 = param_1 + 0x66;
  func_0x000109d92188();
  uVar10 = param_1[0x66];
  uVar5 = param_1[0x68];
  puVar11 = puVar8;
joined_r0x000109d8fd90:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    uVar21 = *puVar6;
    if (uVar21 != 0) {
      FUN_109d73b2c(uVar21 + 8);
      uVar15 = *(ulong *)(uVar21 - 0x10);
      func_0x000109d95a70();
      __ZdlPv(uVar21 + (uVar15 & 0x3c) * -2 + -0x10);
    }
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar8) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8fd90;
  }
  puVar6 = param_1 + 0x69;
  func_0x000109d921cc();
  uVar10 = param_1[0x69];
  uVar5 = param_1[0x6b];
  puVar8 = puVar11;
joined_r0x000109d8fe0c:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    uVar21 = *puVar6;
    if (uVar21 != 0) {
      FUN_109d73b2c(uVar21 + 8);
      uVar15 = *(ulong *)(uVar21 - 0x10);
      func_0x000109d95a70();
      __ZdlPv(uVar21 + (uVar15 & 0x3c) * -2 + -0x10);
    }
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar11) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8fe0c;
  }
  puVar6 = param_1 + 0x6c;
  func_0x000109d92210();
  uVar10 = param_1[0x6c];
  uVar5 = param_1[0x6e];
  puVar11 = puVar8;
joined_r0x000109d8fe88:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    uVar21 = *puVar6;
    if (uVar21 != 0) {
      FUN_109d73b2c(uVar21 + 8);
      uVar15 = *(ulong *)(uVar21 - 0x10);
      func_0x000109d95a70();
      __ZdlPv(uVar21 + (uVar15 & 0x3c) * -2 + -0x10);
    }
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar8) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8fe88;
  }
  puVar6 = param_1 + 0x6f;
  func_0x000109d92254();
  uVar10 = param_1[0x6f];
  uVar5 = param_1[0x71];
  puVar8 = puVar11;
joined_r0x000109d8ff04:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    uVar21 = *puVar6;
    if (uVar21 != 0) {
      FUN_109d73b2c(uVar21 + 8);
      uVar15 = *(ulong *)(uVar21 - 0x10);
      func_0x000109d95a70();
      __ZdlPv(uVar21 + (uVar15 & 0x3c) * -2 + -0x10);
    }
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar11) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8ff04;
  }
  puVar6 = param_1 + 0x72;
  func_0x000109d92298();
  uVar10 = param_1[0x72];
  uVar5 = param_1[0x74];
  puVar11 = puVar8;
joined_r0x000109d8ff80:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    uVar21 = *puVar6;
    if (uVar21 != 0) {
      FUN_109d73b2c(uVar21 + 8);
      uVar15 = *(ulong *)(uVar21 - 0x10);
      func_0x000109d95a70();
      __ZdlPv(uVar21 + (uVar15 & 0x3c) * -2 + -0x10);
    }
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar8) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8ff80;
  }
  puVar6 = param_1 + 0x75;
  func_0x000109d922dc();
  uVar10 = param_1[0x75];
  uVar5 = param_1[0x77];
  puVar8 = puVar11;
joined_r0x000109d8fffc:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    uVar21 = *puVar6;
    if (uVar21 != 0) {
      FUN_109d73b2c(uVar21 + 8);
      uVar15 = *(ulong *)(uVar21 - 0x10);
      func_0x000109d95a70();
      __ZdlPv(uVar21 + (uVar15 & 0x3c) * -2 + -0x10);
    }
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar11) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d8fffc;
  }
  puVar6 = param_1 + 0x78;
  func_0x000109d92320();
  uVar10 = param_1[0x78];
  uVar5 = param_1[0x7a];
  puVar11 = puVar8;
joined_r0x000109d90078:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    uVar21 = *puVar6;
    if (uVar21 != 0) {
      FUN_109d73b2c(uVar21 + 8);
      uVar15 = *(ulong *)(uVar21 - 0x10);
      func_0x000109d95a70();
      __ZdlPv(uVar21 + (uVar15 & 0x3c) * -2 + -0x10);
    }
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar8) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d90078;
  }
  puVar6 = param_1 + 0x7b;
  func_0x000109d92364();
  uVar10 = param_1[0x7b];
  uVar5 = param_1[0x7d];
  puVar8 = puVar11;
joined_r0x000109d900f4:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    uVar21 = *puVar6;
    if (uVar21 != 0) {
      FUN_109d73b2c(uVar21 + 8);
      uVar15 = *(ulong *)(uVar21 - 0x10);
      func_0x000109d95a70();
      __ZdlPv(uVar21 + (uVar15 & 0x3c) * -2 + -0x10);
    }
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar11) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d900f4;
  }
  puVar6 = param_1 + 0x7e;
  func_0x000109d923a8();
  uVar10 = param_1[0x7e];
  uVar5 = param_1[0x80];
  puVar11 = puVar8;
joined_r0x000109d90170:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    uVar21 = *puVar6;
    if (uVar21 != 0) {
      FUN_109d73b2c(uVar21 + 8);
      uVar15 = *(ulong *)(uVar21 - 0x10);
      func_0x000109d95a70();
      __ZdlPv(uVar21 + (uVar15 & 0x3c) * -2 + -0x10);
    }
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar8) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d90170;
  }
  puVar6 = param_1 + 0x81;
  func_0x000109d923ec();
  uVar10 = param_1[0x81];
  uVar5 = param_1[0x83];
  puVar8 = puVar11;
joined_r0x000109d901ec:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    uVar21 = *puVar6;
    if (uVar21 != 0) {
      FUN_109d73b2c(uVar21 + 8);
      uVar15 = *(ulong *)(uVar21 - 0x10);
      func_0x000109d95a70();
      __ZdlPv(uVar21 + (uVar15 & 0x3c) * -2 + -0x10);
    }
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar11) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d901ec;
  }
  puVar6 = param_1 + 0x84;
  func_0x000109d92430();
  uVar10 = param_1[0x84];
  uVar5 = param_1[0x86];
  puVar11 = puVar8;
joined_r0x000109d90268:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    uVar21 = *puVar6;
    if (uVar21 != 0) {
      FUN_109d73b2c(uVar21 + 8);
      uVar15 = *(ulong *)(uVar21 - 0x10);
      func_0x000109d95a70();
      __ZdlPv(uVar21 + (uVar15 & 0x3c) * -2 + -0x10);
    }
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar8) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d90268;
  }
  puVar6 = param_1 + 0x87;
  func_0x000109d92474();
  uVar10 = param_1[0x87];
  uVar5 = param_1[0x89];
  puVar8 = puVar11;
joined_r0x000109d902e4:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    uVar21 = *puVar6;
    if (uVar21 != 0) {
      FUN_109d927c0();
      uVar15 = *(ulong *)(uVar21 - 0x10);
      func_0x000109d95a70((ulong *)(uVar21 - 0x10));
      __ZdlPv(uVar21 + (uVar15 & 0x3c) * -2 + -0x10);
    }
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar11) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d902e4;
  }
  puVar6 = param_1 + 0x8a;
  func_0x000109d924b8();
  uVar10 = param_1[0x8a];
  uVar5 = param_1[0x8c];
  puVar11 = puVar8;
joined_r0x000109d90360:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    uVar21 = *puVar6;
    if (uVar21 != 0) {
      FUN_109d73b2c(uVar21 + 8);
      uVar15 = *(ulong *)(uVar21 - 0x10);
      func_0x000109d95a70();
      __ZdlPv(uVar21 + (uVar15 & 0x3c) * -2 + -0x10);
    }
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar8) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d90360;
  }
  puVar6 = param_1 + 0x8d;
  func_0x000109d924fc();
  uVar10 = param_1[0x8d];
  uVar5 = param_1[0x8f];
  puVar8 = puVar11;
joined_r0x000109d903dc:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    uVar21 = *puVar6;
    if (uVar21 != 0) {
      FUN_109d73b2c(uVar21 + 8);
      uVar15 = *(ulong *)(uVar21 - 0x10);
      func_0x000109d95a70();
      __ZdlPv(uVar21 + (uVar15 & 0x3c) * -2 + -0x10);
    }
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar11) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d903dc;
  }
  puVar6 = param_1 + 0xbb;
  FUN_109d92c04();
  uVar10 = param_1[0xbb];
  uVar5 = param_1[0xbd];
  puVar11 = puVar8;
joined_r0x000109d90458:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    func_0x000109d34fec(*puVar6);
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar8) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d90458;
  }
  puVar6 = param_1 + 0x9a;
  func_0x000109d92c48();
  uVar10 = param_1[0x9a];
  uVar5 = param_1[0x9c];
  puVar8 = puVar11;
joined_r0x000109d904a8:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    func_0x000109d34fec(*puVar6);
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar11) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d904a8;
  }
  puVar6 = param_1 + 0x9d;
  func_0x000109d92c8c();
  uVar10 = param_1[0x9d];
  uVar5 = param_1[0x9f];
  puVar11 = puVar8;
joined_r0x000109d904f8:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    func_0x000109d34fec(*puVar6);
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar8) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d904f8;
  }
  puVar6 = param_1 + 0xa0;
  func_0x000109d92cd0();
  uVar10 = param_1[0xa0];
  uVar5 = param_1[0xa2];
  puVar8 = puVar11;
joined_r0x000109d90548:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    func_0x000109d34fec(*puVar6);
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar11) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d90548;
  }
  puVar6 = param_1 + 0xbb;
  FUN_109d92c04();
  uVar10 = param_1[0xbb];
  uVar5 = param_1[0xbd];
  puVar11 = puVar8;
joined_r0x000109d90598:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    FUN_109d67564(*puVar6);
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar8) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d90598;
  }
  puVar6 = param_1 + 0x9a;
  func_0x000109d92c48();
  uVar10 = param_1[0x9a];
  uVar5 = param_1[0x9c];
  puVar8 = puVar11;
joined_r0x000109d905ec:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    FUN_109d67564(*puVar6);
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar11) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d905ec;
  }
  puVar6 = param_1 + 0x9d;
  func_0x000109d92c8c();
  uVar10 = param_1[0x9d];
  uVar5 = param_1[0x9f];
  puVar11 = puVar8;
joined_r0x000109d90640:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    FUN_109d67564(*puVar6);
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar8) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d90640;
  }
  puVar6 = param_1 + 0xa0;
  func_0x000109d92cd0();
  uVar10 = param_1[0xa0];
  uVar5 = param_1[0xa2];
joined_r0x000109d90694:
  if ((ulong *)(uVar10 + (ulong)(uint)uVar5 * 8) != puVar6) {
    FUN_109d67564(*puVar6);
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == puVar11) break;
    } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
    goto joined_r0x000109d90694;
  }
  if ((int)param_1[0xbf] != 0) {
    puVar11 = (ulong *)param_1[0xbe];
    uVar22 = (uint)param_1[0xc0];
    puVar6 = puVar11;
    if (uVar22 == 0) {
LAB_109d90788:
joined_r0x000109d90790:
      if (puVar11 + uVar22 != puVar6) {
        uVar5 = *puVar6;
        if (uVar5 != 0) {
          if (*(char *)(uVar5 + 0x47) < '\0') {
            __ZdlPv(*(undefined8 *)(uVar5 + 0x30));
          }
          if (*(char *)(uVar5 + 0x2f) < '\0') {
            __ZdlPv(*(undefined8 *)(uVar5 + 0x18));
          }
          FUN_109da2438(uVar5);
          __ZdlPv();
        }
        do {
          puVar6 = puVar6 + 1;
          if (puVar6 == puVar11 + uVar22) break;
        } while ((*puVar6 | 0x1000) == 0xfffffffffffff000);
        goto joined_r0x000109d90790;
      }
    }
    else {
      lVar17 = (ulong)uVar22 << 3;
      do {
        if ((*puVar6 | 0x1000) != 0xfffffffffffff000) goto LAB_109d90788;
        puVar6 = puVar6 + 1;
        lVar17 = lVar17 + -8;
      } while (lVar17 != 0);
    }
  }
  puVar6 = param_1 + 0x97;
  iVar7 = (int)param_1[0x98];
  if ((iVar7 != 0) || (*(int *)((long)param_1 + 0x4c4) != 0)) {
    uVar22 = (uint)param_1[0x99];
    if (((uint)(iVar7 * 4) < uVar22) && (0x40 < uVar22)) {
      FUN_109d92a04(puVar6);
      if (iVar7 == 0) {
        if ((int)param_1[0x99] == 0) goto LAB_109d908c0;
        __ZdlPvSt11align_val_t(*puVar6,8);
        *puVar6 = 0;
        param_1[0x98] = 0;
        *(undefined4 *)(param_1 + 0x99) = 0;
      }
      else {
        uVar22 = 1 << (ulong)(0x21U - (int)LZCOUNT(iVar7 + -1) & 0x1f);
        if ((int)uVar22 < 0x41) {
          uVar22 = 0x40;
        }
        if (uVar22 == (uint)param_1[0x99]) {
          param_1[0x98] = 0;
          lVar17 = (ulong)uVar22 << 4;
          puVar19 = (undefined8 *)param_1[0x97];
          do {
            *puVar19 = 0xfffffffffffff000;
            lVar17 = lVar17 + -0x10;
            puVar19 = puVar19 + 2;
          } while (lVar17 != 0);
        }
        else {
          __ZdlPvSt11align_val_t(param_1[0x97],8);
          uVar22 = (uVar22 << 2) / 3 + 1;
          uVar22 = uVar22 | uVar22 >> 1;
          uVar22 = uVar22 | uVar22 >> 2;
          uVar22 = uVar22 | uVar22 >> 4;
          uVar22 = uVar22 | uVar22 >> 8;
          uVar22 = (uVar22 >> 0x10 | uVar22) + 1;
          *(uint *)(param_1 + 0x99) = uVar22;
          puVar19 = (undefined8 *)((ulong)uVar22 << 4);
          __ZnwmSt11align_val_t(puVar19,8);
          param_1[0x97] = (ulong)puVar19;
          param_1[0x98] = 0;
          if ((uint)param_1[0x99] != 0) {
            lVar17 = (ulong)(uint)param_1[0x99] << 4;
            do {
              *puVar19 = 0xfffffffffffff000;
              lVar17 = lVar17 + -0x10;
              puVar19 = puVar19 + 2;
            } while (lVar17 != 0);
          }
        }
      }
    }
    else {
      if (uVar22 != 0) {
        lVar17 = *puVar6 + 8;
        lVar23 = (ulong)uVar22 << 4;
        do {
          if (*(long *)(lVar17 + -8) == -0x2000) {
LAB_109d908b0:
            *(undefined8 *)(lVar17 + -8) = 0xfffffffffffff000;
          }
          else if (*(long *)(lVar17 + -8) != -0x1000) {
            FUN_109d69b08(lVar17,0);
            goto LAB_109d908b0;
          }
          lVar17 = lVar17 + 0x10;
          lVar23 = lVar23 + -0x10;
        } while (lVar23 != 0);
      }
LAB_109d908c0:
      param_1[0x98] = 0;
    }
  }
  puVar11 = param_1 + 0xa3;
  iVar7 = (int)param_1[0xa4];
  if ((iVar7 != 0) || (*(int *)((long)param_1 + 0x524) != 0)) {
    uVar22 = (uint)param_1[0xa5];
    if (((uint)(iVar7 * 4) < uVar22) && (0x40 < uVar22)) {
      func_0x000109d92a58(puVar11);
      if (iVar7 == 0) {
        if ((int)param_1[0xa5] == 0) goto LAB_109d90994;
        __ZdlPvSt11align_val_t(*puVar11,8);
        *puVar11 = 0;
        param_1[0xa4] = 0;
        *(undefined4 *)(param_1 + 0xa5) = 0;
      }
      else {
        uVar22 = 1 << (ulong)(0x21U - (int)LZCOUNT(iVar7 + -1) & 0x1f);
        if ((int)uVar22 < 0x41) {
          uVar22 = 0x40;
        }
        if (uVar22 == (uint)param_1[0xa5]) {
          param_1[0xa4] = 0;
          lVar17 = (ulong)uVar22 << 4;
          puVar19 = (undefined8 *)param_1[0xa3];
          do {
            *puVar19 = 0xfffffffffffff000;
            lVar17 = lVar17 + -0x10;
            puVar19 = puVar19 + 2;
          } while (lVar17 != 0);
        }
        else {
          __ZdlPvSt11align_val_t(param_1[0xa3],8);
          uVar22 = (uVar22 << 2) / 3 + 1;
          uVar22 = uVar22 | uVar22 >> 1;
          uVar22 = uVar22 | uVar22 >> 2;
          uVar22 = uVar22 | uVar22 >> 4;
          uVar22 = uVar22 | uVar22 >> 8;
          uVar22 = (uVar22 >> 0x10 | uVar22) + 1;
          *(uint *)(param_1 + 0xa5) = uVar22;
          puVar19 = (undefined8 *)((ulong)uVar22 << 4);
          __ZnwmSt11align_val_t(puVar19,8);
          param_1[0xa3] = (ulong)puVar19;
          param_1[0xa4] = 0;
          if ((uint)param_1[0xa5] != 0) {
            lVar17 = (ulong)(uint)param_1[0xa5] << 4;
            do {
              *puVar19 = 0xfffffffffffff000;
              lVar17 = lVar17 + -0x10;
              puVar19 = puVar19 + 2;
            } while (lVar17 != 0);
          }
        }
      }
    }
    else {
      if (uVar22 != 0) {
        lVar17 = *puVar11 + 8;
        lVar23 = (ulong)uVar22 << 4;
        do {
          if (*(long *)(lVar17 + -8) == -0x2000) {
LAB_109d90984:
            *(undefined8 *)(lVar17 + -8) = 0xfffffffffffff000;
          }
          else if (*(long *)(lVar17 + -8) != -0x1000) {
            func_0x000109d69d80(lVar17,0);
            goto LAB_109d90984;
          }
          lVar17 = lVar17 + 0x10;
          lVar23 = lVar23 + -0x10;
        } while (lVar23 != 0);
      }
LAB_109d90994:
      param_1[0xa4] = 0;
    }
  }
  puVar8 = param_1 + 0xa6;
  iVar7 = (int)param_1[0xa7];
  if ((iVar7 != 0) || (*(int *)((long)param_1 + 0x53c) != 0)) {
    uVar22 = (uint)param_1[0xa8];
    if (((uint)(iVar7 * 4) < uVar22) && (0x40 < uVar22)) {
      func_0x000109d92aac(puVar8);
      if (iVar7 == 0) {
        if ((int)param_1[0xa8] == 0) goto LAB_109d90a68;
        __ZdlPvSt11align_val_t(*puVar8,8);
        *puVar8 = 0;
        param_1[0xa7] = 0;
        *(undefined4 *)(param_1 + 0xa8) = 0;
      }
      else {
        uVar22 = 1 << (ulong)(0x21U - (int)LZCOUNT(iVar7 + -1) & 0x1f);
        if ((int)uVar22 < 0x41) {
          uVar22 = 0x40;
        }
        if (uVar22 == (uint)param_1[0xa8]) {
          param_1[0xa7] = 0;
          lVar17 = (ulong)uVar22 << 4;
          puVar19 = (undefined8 *)param_1[0xa6];
          do {
            *puVar19 = 0xfffffffffffff000;
            lVar17 = lVar17 + -0x10;
            puVar19 = puVar19 + 2;
          } while (lVar17 != 0);
        }
        else {
          __ZdlPvSt11align_val_t(param_1[0xa6],8);
          uVar22 = (uVar22 << 2) / 3 + 1;
          uVar22 = uVar22 | uVar22 >> 1;
          uVar22 = uVar22 | uVar22 >> 2;
          uVar22 = uVar22 | uVar22 >> 4;
          uVar22 = uVar22 | uVar22 >> 8;
          uVar22 = (uVar22 >> 0x10 | uVar22) + 1;
          *(uint *)(param_1 + 0xa8) = uVar22;
          puVar19 = (undefined8 *)((ulong)uVar22 << 4);
          __ZnwmSt11align_val_t(puVar19,8);
          param_1[0xa6] = (ulong)puVar19;
          param_1[0xa7] = 0;
          if ((uint)param_1[0xa8] != 0) {
            lVar17 = (ulong)(uint)param_1[0xa8] << 4;
            do {
              *puVar19 = 0xfffffffffffff000;
              lVar17 = lVar17 + -0x10;
              puVar19 = puVar19 + 2;
            } while (lVar17 != 0);
          }
        }
      }
    }
    else {
      if (uVar22 != 0) {
        lVar17 = *puVar8 + 8;
        lVar23 = (ulong)uVar22 << 4;
        do {
          if (*(long *)(lVar17 + -8) == -0x2000) {
LAB_109d90a58:
            *(undefined8 *)(lVar17 + -8) = 0xfffffffffffff000;
          }
          else if (*(long *)(lVar17 + -8) != -0x1000) {
            func_0x000109d69da8(lVar17,0);
            goto LAB_109d90a58;
          }
          lVar17 = lVar17 + 0x10;
          lVar23 = lVar23 + -0x10;
        } while (lVar23 != 0);
      }
LAB_109d90a68:
      param_1[0xa7] = 0;
    }
  }
  puVar1 = param_1 + 0xa9;
  iVar7 = (int)param_1[0xaa];
  if ((iVar7 != 0) || (*(int *)((long)param_1 + 0x554) != 0)) {
    uVar22 = (uint)param_1[0xab];
    if (((uint)(iVar7 * 4) < uVar22) && (0x40 < uVar22)) {
      func_0x000109d92b00(puVar1);
      if (iVar7 == 0) {
        if ((int)param_1[0xab] == 0) goto LAB_109d90b3c;
        __ZdlPvSt11align_val_t(*puVar1,8);
        *puVar1 = 0;
        param_1[0xaa] = 0;
        *(undefined4 *)(param_1 + 0xab) = 0;
      }
      else {
        uVar22 = 1 << (ulong)(0x21U - (int)LZCOUNT(iVar7 + -1) & 0x1f);
        if ((int)uVar22 < 0x41) {
          uVar22 = 0x40;
        }
        if (uVar22 == (uint)param_1[0xab]) {
          param_1[0xaa] = 0;
          lVar17 = (ulong)uVar22 << 4;
          puVar19 = (undefined8 *)param_1[0xa9];
          do {
            *puVar19 = 0xfffffffffffff000;
            lVar17 = lVar17 + -0x10;
            puVar19 = puVar19 + 2;
          } while (lVar17 != 0);
        }
        else {
          __ZdlPvSt11align_val_t(param_1[0xa9],8);
          uVar22 = (uVar22 << 2) / 3 + 1;
          uVar22 = uVar22 | uVar22 >> 1;
          uVar22 = uVar22 | uVar22 >> 2;
          uVar22 = uVar22 | uVar22 >> 4;
          uVar22 = uVar22 | uVar22 >> 8;
          uVar22 = (uVar22 >> 0x10 | uVar22) + 1;
          *(uint *)(param_1 + 0xab) = uVar22;
          puVar19 = (undefined8 *)((ulong)uVar22 << 4);
          __ZnwmSt11align_val_t(puVar19,8);
          param_1[0xa9] = (ulong)puVar19;
          param_1[0xaa] = 0;
          if ((uint)param_1[0xab] != 0) {
            lVar17 = (ulong)(uint)param_1[0xab] << 4;
            do {
              *puVar19 = 0xfffffffffffff000;
              lVar17 = lVar17 + -0x10;
              puVar19 = puVar19 + 2;
            } while (lVar17 != 0);
          }
        }
      }
    }
    else {
      if (uVar22 != 0) {
        lVar17 = *puVar1 + 8;
        lVar23 = (ulong)uVar22 << 4;
        do {
          if (*(long *)(lVar17 + -8) == -0x2000) {
LAB_109d90b2c:
            *(undefined8 *)(lVar17 + -8) = 0xfffffffffffff000;
          }
          else if (*(long *)(lVar17 + -8) != -0x1000) {
            func_0x000109d69dd0(lVar17,0);
            goto LAB_109d90b2c;
          }
          lVar17 = lVar17 + 0x10;
          lVar23 = lVar23 + -0x10;
        } while (lVar23 != 0);
      }
LAB_109d90b3c:
      param_1[0xaa] = 0;
    }
  }
  puVar2 = param_1 + 0xac;
  iVar7 = (int)param_1[0xad];
  if ((iVar7 != 0) || (*(int *)((long)param_1 + 0x56c) != 0)) {
    uVar22 = (uint)param_1[0xae];
    if (((uint)(iVar7 * 4) < uVar22) && (0x40 < uVar22)) {
      func_0x000109d92b54(puVar2);
      if (iVar7 == 0) {
        if ((int)param_1[0xae] == 0) goto LAB_109d90c10;
        __ZdlPvSt11align_val_t(*puVar2,8);
        *puVar2 = 0;
        param_1[0xad] = 0;
        *(undefined4 *)(param_1 + 0xae) = 0;
      }
      else {
        uVar22 = 1 << (ulong)(0x21U - (int)LZCOUNT(iVar7 + -1) & 0x1f);
        if ((int)uVar22 < 0x41) {
          uVar22 = 0x40;
        }
        if (uVar22 == (uint)param_1[0xae]) {
          param_1[0xad] = 0;
          lVar17 = (ulong)uVar22 << 4;
          puVar19 = (undefined8 *)param_1[0xac];
          do {
            *puVar19 = 0xfffffffffffff000;
            lVar17 = lVar17 + -0x10;
            puVar19 = puVar19 + 2;
          } while (lVar17 != 0);
        }
        else {
          __ZdlPvSt11align_val_t(param_1[0xac],8);
          uVar22 = (uVar22 << 2) / 3 + 1;
          uVar22 = uVar22 | uVar22 >> 1;
          uVar22 = uVar22 | uVar22 >> 2;
          uVar22 = uVar22 | uVar22 >> 4;
          uVar22 = uVar22 | uVar22 >> 8;
          uVar22 = (uVar22 >> 0x10 | uVar22) + 1;
          *(uint *)(param_1 + 0xae) = uVar22;
          puVar19 = (undefined8 *)((ulong)uVar22 << 4);
          __ZnwmSt11align_val_t(puVar19,8);
          param_1[0xac] = (ulong)puVar19;
          param_1[0xad] = 0;
          if ((uint)param_1[0xae] != 0) {
            lVar17 = (ulong)(uint)param_1[0xae] << 4;
            do {
              *puVar19 = 0xfffffffffffff000;
              lVar17 = lVar17 + -0x10;
              puVar19 = puVar19 + 2;
            } while (lVar17 != 0);
          }
        }
      }
    }
    else {
      if (uVar22 != 0) {
        lVar17 = *puVar2 + 8;
        lVar23 = (ulong)uVar22 << 4;
        do {
          if (*(long *)(lVar17 + -8) == -0x2000) {
LAB_109d90c00:
            *(undefined8 *)(lVar17 + -8) = 0xfffffffffffff000;
          }
          else if (*(long *)(lVar17 + -8) != -0x1000) {
            FUN_109d69eb0(lVar17,0);
            goto LAB_109d90c00;
          }
          lVar17 = lVar17 + 0x10;
          lVar23 = lVar23 + -0x10;
        } while (lVar23 != 0);
      }
LAB_109d90c10:
      param_1[0xad] = 0;
    }
  }
  iVar7 = (int)param_1[0x16];
  if ((iVar7 != 0) || (*(int *)((long)param_1 + 0xb4) != 0)) {
    uVar22 = (uint)param_1[0x17];
    if (((uint)(iVar7 * 4) < uVar22) && (0x40 < uVar22)) {
      func_0x000109d92834(param_1 + 0x15);
      if (iVar7 == 0) {
        uVar22 = 0;
      }
      else {
        uVar22 = 1 << (ulong)(0x21U - (int)LZCOUNT(iVar7 + -1) & 0x1f);
        if ((int)uVar22 < 0x41) {
          uVar22 = 0x40;
        }
      }
      if (uVar22 == (uint)param_1[0x17]) {
        param_1[0x16] = 0;
        if (uVar22 != 0) {
          lVar17 = (ulong)uVar22 * 0x18;
          puVar16 = (undefined4 *)(param_1[0x15] + 8);
          do {
            *puVar16 = 0;
            *(undefined8 *)(puVar16 + -2) = 0xffffffffffffffff;
            puVar16 = puVar16 + 6;
            lVar17 = lVar17 + -0x18;
          } while (lVar17 != 0);
        }
      }
      else {
        __ZdlPvSt11align_val_t(param_1[0x15],8);
        if (uVar22 == 0) {
          param_1[0x15] = 0;
          param_1[0x16] = 0;
          *(undefined4 *)(param_1 + 0x17) = 0;
        }
        else {
          uVar22 = (uVar22 << 2) / 3 + 1;
          uVar22 = uVar22 | uVar22 >> 1;
          uVar22 = uVar22 | uVar22 >> 2;
          uVar22 = uVar22 | uVar22 >> 4;
          uVar22 = uVar22 | uVar22 >> 8;
          uVar22 = (uVar22 >> 0x10 | uVar22) + 1;
          *(uint *)(param_1 + 0x17) = uVar22;
          uVar5 = (ulong)uVar22 * 0x18;
          __ZnwmSt11align_val_t(uVar5,8);
          param_1[0x15] = uVar5;
          param_1[0x16] = 0;
          if ((uint)param_1[0x17] != 0) {
            lVar17 = (ulong)(uint)param_1[0x17] * 0x18;
            puVar16 = (undefined4 *)(uVar5 + 8);
            do {
              *puVar16 = 0;
              *(undefined8 *)(puVar16 + -2) = 0xffffffffffffffff;
              puVar16 = puVar16 + 6;
              lVar17 = lVar17 + -0x18;
            } while (lVar17 != 0);
          }
        }
      }
    }
    else {
      uStack_d0 = uStack_d0 & 0xffffffff00000000;
      plStack_d8 = (long *)0xffffffffffffffff;
      if (uVar22 == 0) {
        param_1[0x16] = 0;
      }
      else {
        plVar25 = (long *)param_1[0x15];
        lVar17 = (ulong)uVar22 * 0x18;
        do {
          uVar22 = *(uint *)(plVar25 + 1);
          if (uVar22 == (uint)uStack_d0) {
            if (uVar22 < 0x41) {
              if ((long *)*plVar25 != plStack_d8) goto LAB_109d90cb4;
            }
            else {
              lVar23 = *plVar25;
              _memcmp(lVar23,plStack_d8,(ulong)uVar22 + 0x3f >> 3 & 0x3ffffff8);
              if ((int)lVar23 != 0) goto LAB_109d90ce4;
            }
          }
          else {
LAB_109d90cb4:
            if ((uVar22 != 0) || (*plVar25 != -2)) {
LAB_109d90ce4:
              lVar23 = plVar25[2];
              plVar25[2] = 0;
              if (lVar23 != 0) {
                FUN_109d6c9c0();
              }
            }
            func_0x000109d3015c(plVar25,&plStack_d8);
          }
          plVar25 = plVar25 + 3;
          lVar17 = lVar17 + -0x18;
        } while (lVar17 != 0);
        param_1[0x16] = 0;
        if ((0x40 < (uint)uStack_d0) && (plStack_d8 != (long *)0x0)) {
          __ZdaPv();
        }
      }
    }
  }
  iVar7 = (int)param_1[0x19];
  if ((iVar7 != 0) || (*(int *)((long)param_1 + 0xcc) != 0)) {
    if (((uint)(iVar7 * 4) < (uint)param_1[0x1a]) && (0x40 < (uint)param_1[0x1a])) {
      FUN_109d928e4(param_1 + 0x18);
      iVar14 = 1 << (ulong)(0x21U - (int)LZCOUNT(iVar7 + -1) & 0x1f);
      if (iVar14 < 0x41) {
        iVar14 = 0x40;
      }
      iVar3 = 0;
      if (iVar7 != 0) {
        iVar3 = iVar14;
      }
      if (iVar3 != (int)param_1[0x1a]) {
        __ZdlPvSt11align_val_t(param_1[0x18],8);
        if (iVar3 == 0) {
          param_1[0x18] = 0;
          param_1[0x19] = 0;
          *(undefined4 *)(param_1 + 0x1a) = 0;
          goto LAB_109d9128c;
        }
        uVar22 = (uint)(iVar3 << 2) / 3 + 1;
        uVar22 = uVar22 | uVar22 >> 1;
        uVar22 = uVar22 | uVar22 >> 2;
        uVar22 = uVar22 | uVar22 >> 4;
        uVar22 = uVar22 | uVar22 >> 8;
        uVar22 = (uVar22 >> 0x10 | uVar22) + 1;
        *(uint *)(param_1 + 0x1a) = uVar22;
        uVar5 = (ulong)uVar22 * 0x28;
        __ZnwmSt11align_val_t(uVar5,8);
        param_1[0x18] = uVar5;
      }
      FUN_109d6cf40(param_1 + 0x18);
    }
    else {
      FUN_109de7f14(&uStack_d0,&UNK_10e05aebc,1);
      FUN_109de7f14(auStack_80,&UNK_10e05aebc,2);
      if ((uint)param_1[0x1a] != 0) {
        uVar5 = param_1[0x18];
        lVar17 = (ulong)(uint)param_1[0x1a] * 0x28;
        do {
          uVar10 = uVar5;
          FUN_109d67e08(uVar5,&plStack_d8);
          if ((uVar10 & 1) == 0) {
            uVar10 = uVar5;
            FUN_109d67e08(uVar5,auStack_88);
            if ((uVar10 & 1) == 0) {
              FUN_109d67d18(uVar5 + 0x20,0);
            }
            FUN_109d328a8(uVar5 + 8,&uStack_d0);
          }
          uVar5 = uVar5 + 0x28;
          lVar17 = lVar17 + -0x28;
        } while (lVar17 != 0);
      }
      param_1[0x19] = 0;
      FUN_109d32234(auStack_80);
      FUN_109d32234(&uStack_d0);
    }
  }
LAB_109d9128c:
  if (*(int *)((long)param_1 + 0x584) != 0) {
    uVar5 = param_1[0xb0];
    if ((uint)uVar5 != 0) {
      lVar17 = 0;
      do {
        uVar10 = param_1[0xaf];
        lVar23 = *(long *)(uVar10 + lVar17);
        if (lVar23 != -8 && lVar23 != 0) {
          FUN_109d6b36c(lVar23 + 8,0);
          __ZdlPvSt11align_val_t(lVar23,8);
        }
        *(undefined8 *)(uVar10 + lVar17) = 0;
        lVar17 = lVar17 + 8;
      } while ((ulong)(uint)uVar5 * 8 - lVar17 != 0);
    }
    *(undefined8 *)((long)param_1 + 0x584) = 0;
  }
  puVar24 = param_1 + 0x33;
  for (puVar13 = (ulong *)param_1[0x1f];
      (plStack_d8 = (long *)*puVar13, plStack_d8 == (long *)0x0 ||
      ((plStack_d8 != (long *)0xffffffffffffffff &&
       (plStack_d8 == (long *)0x0 || ((ulong)plStack_d8 & 1) != 0)))); puVar13 = puVar13 + 1) {
  }
  for (puVar13 = (ulong *)param_1[0x1f] + (uint)param_1[0x20];
      (plVar25 = (long *)*puVar13, plVar25 == (long *)0x0 ||
      ((plVar25 != (long *)0xffffffffffffffff &&
       (plVar25 == (long *)0x0 || ((ulong)plVar25 & 1) != 0)))); puVar13 = puVar13 + 1) {
  }
  while (plVar4 = plStack_d8, plStack_d8 != plVar25) {
    FUN_109df7f84(&plStack_d8);
    __ZdlPvSt11align_val_t(plVar4[3],8);
    __ZdlPv(plVar4);
  }
  uStack_d0._0_4_ = 0;
  uStack_d0._4_4_ = 8;
  uVar22 = (uint)param_1[0x34];
  plStack_d8 = alStack_c8;
  if (8 < uVar22) {
    func_0x000107c2b01c(&plStack_d8,alStack_c8,uVar22,8);
    uVar22 = (uint)param_1[0x34];
  }
  if (uVar22 == 0) {
LAB_109d914ac:
    if (*(int *)((long)param_1 + 0x1a4) == 0) goto LAB_109d91510;
    uVar9 = (uint)param_1[0x35];
    if (uVar9 < 0x41) goto LAB_109d914ec;
    uVar22 = 0;
  }
  else {
    puVar12 = (ulong *)param_1[0x33];
    uVar9 = (uint)param_1[0x35];
    puVar13 = puVar12;
    if (uVar9 == 0) {
LAB_109d913ec:
      puVar12 = puVar12 + (ulong)uVar9 * 2;
      if (puVar13 != puVar12) {
        do {
          uVar5 = puVar13[1];
          if (uStack_d0._4_4_ <= (uint)uStack_d0) {
            func_0x000107c2b01c(&plStack_d8,alStack_c8,(ulong)(uint)uStack_d0 + 1,8);
          }
          plStack_d8[(uint)uStack_d0] = uVar5;
          uStack_d0._0_4_ = (uint)uStack_d0 + 1;
          do {
            puVar13 = puVar13 + 2;
            if (puVar13 == puVar12) goto LAB_109d91468;
          } while ((*puVar13 | 0x1000) == 0xfffffffffffff000);
        } while (puVar13 != puVar12);
LAB_109d91468:
        uVar22 = (uint)param_1[0x34];
      }
    }
    else {
      lVar17 = (ulong)uVar9 << 4;
      do {
        if ((*puVar13 | 0x1000) != 0xfffffffffffff000) goto LAB_109d913ec;
        puVar13 = puVar13 + 2;
        lVar17 = lVar17 + -0x10;
      } while (lVar17 != 0);
    }
    if (uVar22 == 0) goto LAB_109d914ac;
    uVar9 = (uint)param_1[0x35];
    if ((uVar9 <= uVar22 * 4) || (uVar9 < 0x41)) {
LAB_109d914ec:
      if (uVar9 != 0) {
        lVar17 = (ulong)uVar9 << 4;
        puVar19 = (undefined8 *)*puVar24;
        do {
          *puVar19 = 0xfffffffffffff000;
          lVar17 = lVar17 + -0x10;
          puVar19 = puVar19 + 2;
        } while (lVar17 != 0);
      }
      param_1[0x34] = 0;
      goto LAB_109d91510;
    }
    uVar22 = 1 << (ulong)(0x21U - (int)LZCOUNT(uVar22 - 1) & 0x1f);
    if ((int)uVar22 < 0x41) {
      uVar22 = 0x40;
    }
  }
  if (uVar22 == uVar9) {
    param_1[0x34] = 0;
    lVar17 = (ulong)uVar9 << 4;
    puVar19 = (undefined8 *)param_1[0x33];
    do {
      *puVar19 = 0xfffffffffffff000;
      lVar17 = lVar17 + -0x10;
      puVar19 = puVar19 + 2;
    } while (lVar17 != 0);
  }
  else {
    __ZdlPvSt11align_val_t(*puVar24,8);
    if (uVar22 == 0) {
      *puVar24 = 0;
      param_1[0x34] = 0;
      *(undefined4 *)(param_1 + 0x35) = 0;
    }
    else {
      uVar22 = (uVar22 << 2) / 3 + 1;
      uVar22 = uVar22 | uVar22 >> 1;
      uVar22 = uVar22 | uVar22 >> 2;
      uVar22 = uVar22 | uVar22 >> 4;
      uVar22 = uVar22 | uVar22 >> 8;
      uVar22 = (uVar22 >> 0x10 | uVar22) + 1;
      *(uint *)(param_1 + 0x35) = uVar22;
      puVar19 = (undefined8 *)((ulong)uVar22 << 4);
      __ZnwmSt11align_val_t(puVar19,8);
      param_1[0x33] = (ulong)puVar19;
      param_1[0x34] = 0;
      if ((uint)param_1[0x35] != 0) {
        lVar17 = (ulong)(uint)param_1[0x35] << 4;
        do {
          *puVar19 = 0xfffffffffffff000;
          lVar17 = lVar17 + -0x10;
          puVar19 = puVar19 + 2;
        } while (lVar17 != 0);
      }
    }
  }
LAB_109d91510:
  if ((uint)uStack_d0 != 0) {
    lVar17 = (ulong)(uint)uStack_d0 << 3;
    plVar25 = plStack_d8;
    do {
      if (*plVar25 != 0) {
        FUN_109d944ac();
        __ZdlPv();
      }
      plVar25 = plVar25 + 1;
      lVar17 = lVar17 + -8;
    } while (lVar17 != 0);
  }
  if (plStack_d8 != alStack_c8) {
    _free(plStack_d8);
  }
  if ((int)param_1[0x31] != 0) {
    puVar13 = (ulong *)param_1[0x30];
    uVar22 = (uint)param_1[0x32];
    puVar24 = puVar13;
    if (uVar22 == 0) {
LAB_109d91b6c:
      while (puVar24 != puVar13 + (ulong)uVar22 * 2) {
        uVar5 = puVar24[1];
        if (uVar5 != 0) {
          if ((*(byte *)(uVar5 + 0x18) & 1) == 0) {
            __ZdlPvSt11align_val_t(*(undefined8 *)(uVar5 + 0x20),8);
          }
          __ZdlPv(uVar5);
        }
        do {
          puVar24 = puVar24 + 2;
          if (puVar24 == puVar13 + (ulong)uVar22 * 2) goto LAB_109d91588;
        } while ((*puVar24 | 0x1000) == 0xfffffffffffff000);
      }
    }
    else {
      lVar17 = (ulong)uVar22 << 4;
      do {
        if ((*puVar24 | 0x1000) != 0xfffffffffffff000) goto LAB_109d91b6c;
        puVar24 = puVar24 + 2;
        lVar17 = lVar17 + -0x10;
      } while (lVar17 != 0);
    }
  }
LAB_109d91588:
  puVar24 = (ulong *)param_1[0x14a];
  if ((uint)param_1[0x14c] != 0) {
    lVar17 = (ulong)(uint)param_1[0x14c] << 5;
    do {
      if (((*puVar24 | 0x1000) != 0xfffffffffffff000) && (*(char *)((long)puVar24 + 0x1f) < '\0')) {
        __ZdlPv(puVar24[1]);
      }
      puVar24 = puVar24 + 4;
      lVar17 = lVar17 + -0x20;
    } while (lVar17 != 0);
    puVar24 = (ulong *)param_1[0x14a];
  }
  __ZdlPvSt11align_val_t(puVar24,8);
  if ((*(int *)((long)param_1 + 0xa44) != 0) && (uVar5 = param_1[0x148], (uint)uVar5 != 0)) {
    lVar17 = 0;
    do {
      lVar23 = *(long *)(param_1[0x147] + lVar17);
      if (lVar23 != -8 && lVar23 != 0) {
        __ZdlPvSt11align_val_t(lVar23,8);
      }
      lVar17 = lVar17 + 8;
    } while ((ulong)(uint)uVar5 * 8 - lVar17 != 0);
  }
  _free(param_1[0x147]);
  FUN_109d5993c(param_1 + 0x144);
  __ZdlPvSt11align_val_t(param_1[0x141],8);
  __ZdlPvSt11align_val_t(param_1[0x13e],8);
  __ZdlPvSt11align_val_t(param_1[0x13b],8);
  __ZdlPvSt11align_val_t(param_1[0x138],8);
  uVar5 = param_1[0x135];
  if ((uint)param_1[0x137] != 0) {
    lVar17 = uVar5 + 0x18;
    lVar23 = (ulong)(uint)param_1[0x137] << 5;
    do {
      if (((*(ulong *)(lVar17 + -0x18) | 0x1000) != 0xfffffffffffff000) &&
         (lVar17 != *(long *)(lVar17 + -0x10))) {
        _free();
      }
      lVar17 = lVar17 + 0x20;
      lVar23 = lVar23 + -0x20;
    } while (lVar23 != 0);
    uVar5 = param_1[0x135];
  }
  __ZdlPvSt11align_val_t(uVar5,8);
  uVar5 = param_1[0x132];
  if ((uint)param_1[0x134] != 0) {
    lVar17 = uVar5 + 8;
    lVar23 = (ulong)(uint)param_1[0x134] * 0x28;
    do {
      if ((*(ulong *)(lVar17 + -8) | 0x1000) != 0xfffffffffffff000) {
        func_0x000109d92ba8();
      }
      lVar17 = lVar17 + 0x28;
      lVar23 = lVar23 + -0x28;
    } while (lVar23 != 0);
    uVar5 = param_1[0x132];
  }
  __ZdlPvSt11align_val_t(uVar5,8);
  FUN_109d5993c(param_1 + 0x12f);
  __ZdlPvSt11align_val_t(param_1[300],8);
  __ZdlPvSt11align_val_t(param_1[0x129],8);
  __ZdlPvSt11align_val_t(param_1[0x126],8);
  __ZdlPvSt11align_val_t(param_1[0x123],8);
  __ZdlPvSt11align_val_t(param_1[0x120],8);
  __ZdlPvSt11align_val_t(param_1[0x11d],8);
  __ZdlPvSt11align_val_t(param_1[0x11a],8);
  if ((*(int *)((long)param_1 + 0x8bc) != 0) && (uVar5 = param_1[0x117], (uint)uVar5 != 0)) {
    lVar17 = 0;
    do {
      lVar23 = *(long *)(param_1[0x116] + lVar17);
      if (lVar23 != -8 && lVar23 != 0) {
        __ZdlPvSt11align_val_t(lVar23,8);
      }
      lVar17 = lVar17 + 8;
    } while ((ulong)(uint)uVar5 * 8 - lVar17 != 0);
  }
  _free(param_1[0x116]);
  __ZdlPvSt11align_val_t(param_1[0x113],8);
  __ZdlPvSt11align_val_t(param_1[0x110],8);
  __ZdlPvSt11align_val_t(param_1[0x10d],8);
  __ZdlPvSt11align_val_t(param_1[0x10a],8);
  FUN_109d340ac(param_1 + 0xfd);
  FUN_109d6967c(param_1 + 0xfc,0);
  __ZdlPvSt11align_val_t(param_1[0xbe],8);
  __ZdlPvSt11align_val_t(param_1[0xbb],8);
  __ZdlPvSt11align_val_t(param_1[0xb8],8);
  __ZdlPvSt11align_val_t(param_1[0xb5],8);
  __ZdlPvSt11align_val_t(param_1[0xb2],8);
  if ((*(int *)((long)param_1 + 0x584) != 0) && (uVar5 = param_1[0xb0], (uint)uVar5 != 0)) {
    lVar17 = 0;
    do {
      lVar23 = *(long *)(param_1[0xaf] + lVar17);
      if (lVar23 != -8 && lVar23 != 0) {
        FUN_109d6b36c(lVar23 + 8,0);
        __ZdlPvSt11align_val_t(lVar23,8);
      }
      lVar17 = lVar17 + 8;
    } while ((ulong)(uint)uVar5 * 8 - lVar17 != 0);
  }
  _free(param_1[0xaf]);
  func_0x000109d92b54(puVar2);
  __ZdlPvSt11align_val_t(param_1[0xac],8);
  func_0x000109d92b00(puVar1);
  __ZdlPvSt11align_val_t(param_1[0xa9],8);
  func_0x000109d92aac(puVar8);
  __ZdlPvSt11align_val_t(param_1[0xa6],8);
  func_0x000109d92a58(puVar11);
  __ZdlPvSt11align_val_t(param_1[0xa3],8);
  __ZdlPvSt11align_val_t(param_1[0xa0],8);
  __ZdlPvSt11align_val_t(param_1[0x9d],8);
  __ZdlPvSt11align_val_t(param_1[0x9a],8);
  FUN_109d92a04(puVar6);
  __ZdlPvSt11align_val_t(param_1[0x97],8);
  if (param_1[0x94] != 0) {
    param_1[0x95] = param_1[0x94];
    __ZdlPv();
  }
  if ((char)param_1[0x93] == '\x01') {
    __ZdlPvSt11align_val_t(param_1[0x90],8);
  }
  __ZdlPvSt11align_val_t(param_1[0x8d],8);
  __ZdlPvSt11align_val_t(param_1[0x8a],8);
  __ZdlPvSt11align_val_t(param_1[0x87],8);
  __ZdlPvSt11align_val_t(param_1[0x84],8);
  __ZdlPvSt11align_val_t(param_1[0x81],8);
  __ZdlPvSt11align_val_t(param_1[0x7e],8);
  __ZdlPvSt11align_val_t(param_1[0x7b],8);
  __ZdlPvSt11align_val_t(param_1[0x78],8);
  __ZdlPvSt11align_val_t(param_1[0x75],8);
  __ZdlPvSt11align_val_t(param_1[0x72],8);
  __ZdlPvSt11align_val_t(param_1[0x6f],8);
  __ZdlPvSt11align_val_t(param_1[0x6c],8);
  __ZdlPvSt11align_val_t(param_1[0x69],8);
  __ZdlPvSt11align_val_t(param_1[0x66],8);
  __ZdlPvSt11align_val_t(param_1[99],8);
  __ZdlPvSt11align_val_t(param_1[0x60],8);
  __ZdlPvSt11align_val_t(param_1[0x5d],8);
  __ZdlPvSt11align_val_t(param_1[0x5a],8);
  __ZdlPvSt11align_val_t(param_1[0x57],8);
  __ZdlPvSt11align_val_t(param_1[0x54],8);
  __ZdlPvSt11align_val_t(param_1[0x51],8);
  __ZdlPvSt11align_val_t(param_1[0x4e],8);
  __ZdlPvSt11align_val_t(param_1[0x4b],8);
  __ZdlPvSt11align_val_t(param_1[0x48],8);
  __ZdlPvSt11align_val_t(param_1[0x45],8);
  __ZdlPvSt11align_val_t(param_1[0x42],8);
  __ZdlPvSt11align_val_t(param_1[0x3f],8);
  __ZdlPvSt11align_val_t(param_1[0x3c],8);
  __ZdlPvSt11align_val_t(param_1[0x39],8);
  __ZdlPvSt11align_val_t(param_1[0x36],8);
  __ZdlPvSt11align_val_t(param_1[0x33],8);
  __ZdlPvSt11align_val_t(param_1[0x30],8);
  _free(param_1[0x21]);
  FUN_109d340ac(param_1 + 0x24);
  _free(param_1[0x1f]);
  _free(param_1[0x1d]);
  _free(param_1[0x1b]);
  FUN_109d928b0(param_1 + 0x18);
  func_0x000109d92834(param_1 + 0x15);
  __ZdlPvSt11align_val_t(param_1[0x15],8);
  __ZdlPvSt11align_val_t(param_1[0x12],8);
  uVar5 = param_1[0xf];
  param_1[0xf] = 0;
  if (uVar5 != 0) {
    __ZdlPv();
  }
  plVar25 = (long *)param_1[9];
  param_1[9] = 0;
  if (plVar25 != (long *)0x0) {
    (**(code **)(*plVar25 + 8))();
  }
  uVar5 = param_1[8];
  param_1[8] = 0;
  if (uVar5 != 0) {
    FUN_109d8dfa4();
  }
  iVar7 = (int)uVar5;
  plVar25 = (long *)param_1[1];
  if (plVar25 != (long *)*param_1) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    if (iVar7 == 0) {
      __Unwind_Resume(plVar25);
    }
    func_0x000104bd46a0();
    puVar6 = (ulong *)*plVar25;
    uVar22 = *(uint *)(plVar25 + 2);
    puVar11 = puVar6 + uVar22;
    puVar8 = puVar11;
    if (((int)plVar25[1] != 0) && (puVar8 = puVar6, uVar22 != 0)) {
      lVar17 = (ulong)uVar22 << 3;
      do {
        if ((*puVar6 | 0x1000) != 0xfffffffffffff000) {
          return puVar6;
        }
        puVar6 = puVar6 + 1;
        lVar17 = lVar17 + -8;
        puVar8 = puVar11;
      } while (lVar17 != 0);
    }
    return puVar8;
  }
  return param_1;
}



/* Entry: 109d91d48; end: 109d9253f;  */

ulong * FUN_109d91d48(long *param_1)

{
  ulong *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  
  puVar3 = (ulong *)*param_1;
  uVar2 = *(uint *)(param_1 + 2);
  puVar1 = puVar3 + uVar2;
  puVar4 = puVar1;
  if (((int)param_1[1] != 0) && (puVar4 = puVar3, uVar2 != 0)) {
    lVar5 = (ulong)uVar2 << 3;
    do {
      if ((*puVar3 | 0x1000) != 0xfffffffffffff000) {
        return puVar3;
      }
      puVar3 = puVar3 + 1;
      lVar5 = lVar5 + -8;
      puVar4 = puVar1;
    } while (lVar5 != 0);
  }
  return puVar4;
}



/* Entry: 109d92540; end: 109d92587;  */

void FUN_109d92540(long param_1,ulong param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + -0x10);
  if (((uint)uVar3 >> 1 & 1) == 0) {
    puVar2 = (ulong *)(param_1 + -0x10) + -(uVar3 >> 2 & 0xf);
    puVar1 = puVar2 + (param_2 & 0xffffffff);
    uVar3 = uVar3 >> 6 & 0xf;
  }
  else {
    puVar2 = *(ulong **)(param_1 + -0x20);
    puVar1 = puVar2 + (param_2 & 0xffffffff);
    uVar3 = (ulong)*(uint *)(param_1 + -0x18);
  }
  FUN_109d92d14(puVar1,puVar2 + uVar3);
  return;
}



/* Entry: 109d92588; end: 109d926b7;  */

void FUN_109d92588(long param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  FUN_109d8e118(param_2,*(undefined4 *)(param_1 + 0xa2c));
  plVar4 = *(long **)(param_1 + 0xa20);
  uVar2 = *(uint *)(param_1 + 0xa28);
  plVar3 = plVar4;
  if (uVar2 != 0) {
    for (; *plVar3 == 0 || *plVar3 == -8; plVar3 = plVar3 + 1) {
    }
  }
  if (plVar3 != plVar4 + uVar2) {
    plVar5 = (long *)*plVar3;
    do {
      lVar6 = *plVar5;
      plVar1 = (long *)(*param_2 + (ulong)*(uint *)(plVar5 + 1) * 0x10);
      *plVar1 = (long)(plVar5 + 2);
      plVar1[1] = lVar6;
      do {
        plVar3 = plVar3 + 1;
        plVar5 = (long *)*plVar3;
      } while (plVar5 == (long *)0x0 || plVar5 == (long *)0xfffffffffffffff8);
    } while (plVar3 != plVar4 + uVar2);
  }
  return;
}



/* Entry: 109d926b8; end: 109d926e7;  */

long FUN_109d926b8(long param_1)

{
  FUN_109d96b44();
  FUN_109d73b2c(param_1 + 8);
  return param_1;
}



/* Entry: 109d926e8; end: 109d92717;  */

long FUN_109d926e8(long param_1)

{
  FUN_109d96b44();
  FUN_109d73b2c(param_1 + 8);
  return param_1;
}



/* Entry: 109d92718; end: 109d9274f;  */

long FUN_109d92718(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x10);
    __ZdlPv();
  }
  FUN_109d73b2c(param_1 + 8);
  return param_1;
}



/* Entry: 109d92750; end: 109d9277f;  */

long FUN_109d92750(long param_1)

{
  FUN_109d96b44();
  FUN_109d73b2c(param_1 + 8);
  return param_1;
}



/* Entry: 109d92780; end: 109d927bf;  */

long FUN_109d92780(long param_1)

{
  if ((0x40 < *(uint *)(param_1 + 0x18)) && (*(long *)(param_1 + 0x10) != 0)) {
    __ZdaPv();
  }
  FUN_109d73b2c(param_1 + 8);
  return param_1;
}



/* Entry: 109d927c0; end: 109d92803;  */

long FUN_109d927c0(long param_1)

{
  FUN_109d73a94();
  if (*(long *)(param_1 + 0x10) != param_1 + 0x20) {
    _free();
  }
  FUN_109d73b2c(param_1 + 8);
  return param_1;
}



/* Entry: 109d92804; end: 109d928af;  */

undefined8 * FUN_109d92804(undefined8 *param_1)

{
  func_0x000109d92834();
  __ZdlPvSt11align_val_t(*param_1,8);
  return param_1;
}



/* Entry: 109d928b0; end: 109d928e3;  */

undefined8 * FUN_109d928b0(undefined8 *param_1)

{
  FUN_109d928e4();
  __ZdlPvSt11align_val_t(*param_1,8);
  return param_1;
}



/* Entry: 109d928e4; end: 109d92a03;  */

void FUN_109d928e4(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *unaff_x20;
  long lVar3;
  long lVar4;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [8];
  ulong auStack_50 [3];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((int)param_1[2] != 0) {
    unaff_x20 = auStack_58;
    FUN_109de7f14(auStack_50,&UNK_10e05aebc,1);
    FUN_109de7f14(auStack_70,&UNK_10e05aebc,2);
    if ((uint)param_1[2] != 0) {
      uVar2 = *param_1;
      lVar4 = (ulong)(uint)param_1[2] * 0x28;
      do {
        uVar1 = uVar2;
        FUN_109d67e08(uVar2,auStack_58);
        if (((uVar1 & 1) == 0) && (uVar1 = uVar2, FUN_109d67e08(uVar2,auStack_78), (uVar1 & 1) == 0)
           ) {
          FUN_109d67d18(uVar2 + 0x20,0);
        }
        FUN_109d32234(uVar2 + 8);
        uVar2 = uVar2 + 0x28;
        lVar4 = lVar4 + -0x28;
      } while (lVar4 != 0);
    }
    FUN_109d32234(auStack_70);
    param_1 = auStack_50;
    FUN_109d32234();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    FUN_109d32234(unaff_x20 + 8);
    __Unwind_Resume();
    if ((uint)param_1[2] != 0) {
      lVar3 = (ulong)(uint)param_1[2] << 4;
      lVar4 = *param_1 + 8;
      do {
        if ((*(ulong *)(lVar4 + -8) | 0x1000) != 0xfffffffffffff000) {
          FUN_109d69b08(lVar4,0);
        }
        lVar4 = lVar4 + 0x10;
        lVar3 = lVar3 + -0x10;
      } while (lVar3 != 0);
    }
    return;
  }
  return;
}



/* Entry: 109d92a04; end: 109d92c03;  */

void FUN_109d92a04(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 2) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 2) << 4;
    lVar1 = *param_1 + 8;
    do {
      if ((*(ulong *)(lVar1 + -8) | 0x1000) != 0xfffffffffffff000) {
        FUN_109d69b08(lVar1,0);
      }
      lVar1 = lVar1 + 0x10;
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0);
  }
  return;
}



/* Entry: 109d92c04; end: 109d92d13;  */

ulong * FUN_109d92c04(long *param_1)

{
  ulong *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  
  puVar3 = (ulong *)*param_1;
  uVar2 = *(uint *)(param_1 + 2);
  puVar1 = puVar3 + uVar2;
  puVar4 = puVar1;
  if (((int)param_1[1] != 0) && (puVar4 = puVar3, uVar2 != 0)) {
    lVar5 = (ulong)uVar2 << 3;
    do {
      if ((*puVar3 | 0x1000) != 0xfffffffffffff000) {
        return puVar3;
      }
      puVar3 = puVar3 + 1;
      lVar5 = lVar5 + -8;
      puVar4 = puVar1;
    } while (lVar5 != 0);
  }
  return puVar4;
}



/* Entry: 109d92d14; end: 109d92e8b;  */

ulong * FUN_109d92d14(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong *unaff_x22;
  ulong auStack_128 [7];
  ulong *puStack_f0;
  ulong uStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  ulong auStack_c0 [7];
  ulong uStack_88;
  undefined1 auStack_80 [56];
  long lStack_48;
  
  puVar7 = auStack_c0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = 0x1132fe000;
  if ((bRam00000001132fee88 & 1) == 0) {
    iVar6 = 0x132fee88;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      uRam00000001132fee80 = 0xff51afd7ed558ccd;
      if (uRam0000000113834578 != 0) {
        uRam00000001132fee80 = uRam0000000113834578;
      }
      ___cxa_guard_release(0x1132fee88);
    }
  }
  if (param_1 == param_2) {
    uVar8 = 0;
  }
  else {
    unaff_x22 = &uStack_88;
    uVar9 = 0;
    do {
      if (0x38 < uVar9) {
        FUN_109d35128(auStack_c0,&uStack_88,uRam00000001132fee80);
        uVar13 = 0x40;
        while (param_1 != param_2) {
          uVar8 = 0;
          puVar12 = param_1;
          do {
            uVar9 = uVar8;
            param_1 = puVar12 + 1;
            *(undefined8 *)(auStack_80 + (uVar9 - 8)) = *puVar12;
            if (param_1 == param_2) break;
            uVar8 = uVar9 + 8;
            puVar12 = param_1;
          } while (uVar9 < 0x31);
          FUN_109d35768(&uStack_88,auStack_80 + uVar9,&lStack_48);
          FUN_109d351b0(auStack_c0,&uStack_88);
          uVar13 = uVar13 + uVar9 + 8;
        }
        uVar8 = uVar13;
        func_0x000109d356d0();
        goto LAB_109d92e14;
      }
      uVar8 = uVar9 + 8;
      puVar12 = param_1 + 1;
      *(undefined8 *)((long)unaff_x22 + uVar9) = *param_1;
      uVar9 = uVar8;
      param_1 = puVar12;
    } while (puVar12 != param_2);
  }
  puVar7 = &uStack_88;
  FUN_109d3546c();
LAB_109d92e14:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar7;
  }
  ___stack_chk_fail();
  puStack_e0 = param_1;
  puStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  pcStack_c8 = FUN_109d92e8c;
  puStack_f0 = unaff_x22;
  uStack_e8 = uVar13;
  if ((bRam00000001132fee88 & 1) == 0) {
    iVar6 = 0x132fee88;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      uRam00000001132fee80 = 0xff51afd7ed558ccd;
      if (uRam0000000113834578 != 0) {
        uRam00000001132fee80 = uRam0000000113834578;
      }
      ___cxa_guard_release(0x1132fee88);
    }
  }
  uVar13 = uVar8 - (long)puVar7;
  if (0x40 < uVar13) {
    uVar9 = uVar13 & 0xffffffffffffffc0;
    FUN_109d35128(auStack_128,puVar7,uRam00000001132fee80);
    while (uVar9 = uVar9 - 0x40, uVar9 != 0) {
      puVar7 = puVar7 + 8;
      FUN_109d351b0(auStack_128,puVar7);
    }
    if ((uVar13 & 0x3f) != 0) {
      FUN_109d351b0(auStack_128,uVar8 - 0x40);
    }
    puVar7 = auStack_128;
    func_0x000109d356d0(puVar7,uVar13);
    return puVar7;
  }
  if (uVar13 - 4 < 5) {
    uVar8 = uRam00000001132fee80 ^ *(uint *)((long)puVar7 + (uVar13 - 4));
    uVar13 = (uVar8 ^ uVar13 + (ulong)(uint)*puVar7 * 8) * -0x622015f714c7d297;
    uVar13 = uVar8 ^ uVar13 >> 0x2f ^ uVar13;
  }
  else {
    if (uVar13 - 9 < 8) {
      uVar9 = *(ulong *)((long)puVar7 + (uVar13 - 8));
      uVar8 = uVar9 + uVar13;
      uVar8 = uVar8 >> (uVar13 & 0x3f) | uVar8 << 0x40 - (uVar13 & 0x3f);
      uVar13 = (*puVar7 ^ uRam00000001132fee80 ^ uVar8) * -0x622015f714c7d297;
      uVar13 = (uVar8 ^ uVar13 >> 0x2f ^ uVar13) * -0x622015f714c7d297;
      return (ulong *)((uVar13 ^ uVar13 >> 0x2f) * -0x622015f714c7d297 ^ uVar9);
    }
    if (0xf < uVar13 - 0x11) {
      if (uVar13 < 0x21) {
        if (uVar13 == 0) {
          return (ulong *)(uRam00000001132fee80 ^ 0x9ae16a3b2f90404f);
        }
        uVar13 = (ulong)CONCAT11(*(undefined1 *)((long)puVar7 + (uVar13 >> 1)),(char)*puVar7) *
                 -0x651e95c4d06fbfb1 ^
                 (uVar13 + (ulong)*(byte *)((long)puVar7 + (uVar13 - 1)) * 4) * -0x36b62838af619aa9
                 ^ uRam00000001132fee80;
      }
      else {
        lVar3 = *(long *)((long)puVar7 + (uVar13 - 0x10));
        lVar5 = *(long *)((long)puVar7 + (uVar13 - 8));
        uVar10 = *puVar7 + (lVar3 + uVar13) * -0x3c5a37a36834ced9;
        uVar8 = uVar10 + puVar7[3];
        uVar9 = uVar10 + puVar7[1];
        uVar11 = uVar9 + puVar7[2];
        uVar1 = *(long *)((long)puVar7 + (uVar13 - 0x20)) + puVar7[2];
        uVar2 = uVar1 + lVar5;
        lVar4 = (uVar9 >> 7 | uVar9 << 0x39) + (uVar10 >> 0x25 | uVar10 * 0x8000000) +
                (uVar8 >> 0x34 | uVar8 * 0x1000) + (uVar11 >> 0x1f | uVar11 << 0x21);
        uVar13 = *(long *)((long)puVar7 + (uVar13 - 0x18)) + uVar1;
        uVar8 = uVar13 + lVar3;
        uVar13 = (uVar8 + lVar5 + lVar4) * -0x3c5a37a36834ced9 +
                 (uVar11 + puVar7[3] + (uVar1 >> 0x25 | uVar1 * 0x8000000) +
                           (uVar2 >> 0x34 | uVar2 * 0x1000) + (uVar13 >> 7 | uVar13 << 0x39) +
                           (uVar8 >> 0x1f | uVar8 << 0x21)) * -0x651e95c4d06fbfb1;
        uVar13 = ((uVar13 ^ uVar13 >> 0x2f) * -0x3c5a37a36834ced9 ^ uRam00000001132fee80) + lVar4;
      }
      return (ulong *)((uVar13 ^ uVar13 >> 0x2f) * -0x651e95c4d06fbfb1);
    }
    lVar4 = *(long *)((long)puVar7 + (uVar13 - 8));
    uVar9 = *puVar7 * -0x4b6d499041670d8d - puVar7[1];
    uVar11 = lVar4 * -0x651e95c4d06fbfb1 ^ uRam00000001132fee80;
    uVar8 = puVar7[1] ^ 0xc949d7c7509e6557;
    uVar8 = uRam00000001132fee80 + uVar13 + (uVar8 >> 0x14 | uVar8 << 0x2c) +
            *puVar7 * -0x4b6d499041670d8d + lVar4 * 0x651e95c4d06fbfb1;
    uVar13 = ((uVar9 >> 0x2b | uVar9 * 0x200000) +
              *(long *)((long)puVar7 + (uVar13 - 0x10)) * -0x3c5a37a36834ced9 +
              (uVar11 >> 0x1e | uVar11 << 0x22) ^ uVar8) * -0x622015f714c7d297;
    uVar13 = uVar8 ^ uVar13 >> 0x2f ^ uVar13;
  }
  return (ulong *)((uVar13 * -0x622015f714c7d297 ^ uVar13 * -0x622015f714c7d297 >> 0x2f) *
                  -0x622015f714c7d297);
}



/* Entry: 109d92e8c; end: 109d92f97;  */

undefined1 * FUN_109d92e8c(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_68 [56];
  
  if ((bRam00000001132fee88 & 1) == 0) {
    iVar6 = 0x132fee88;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      uRam00000001132fee80 = 0xff51afd7ed558ccd;
      if (uRam0000000113834578 != 0) {
        uRam00000001132fee80 = uRam0000000113834578;
      }
      ___cxa_guard_release(0x1132fee88);
    }
  }
  uVar12 = param_2 - (long)param_1;
  if (0x40 < uVar12) {
    uVar8 = uVar12 & 0xffffffffffffffc0;
    FUN_109d35128(auStack_68,param_1,uRam00000001132fee80);
    while (uVar8 = uVar8 - 0x40, uVar8 != 0) {
      param_1 = param_1 + 8;
      FUN_109d351b0(auStack_68,param_1);
    }
    if ((uVar12 & 0x3f) != 0) {
      FUN_109d351b0(auStack_68,param_2 + -0x40);
    }
    puVar7 = auStack_68;
    func_0x000109d356d0(puVar7,uVar12);
    return puVar7;
  }
  if (uVar12 - 4 < 5) {
    uVar8 = uRam00000001132fee80 ^ *(uint *)((long)param_1 + (uVar12 - 4));
    uVar12 = (uVar8 ^ uVar12 + (ulong)(uint)*param_1 * 8) * -0x622015f714c7d297;
    uVar12 = uVar8 ^ uVar12 >> 0x2f ^ uVar12;
  }
  else {
    if (uVar12 - 9 < 8) {
      uVar9 = *(ulong *)((long)param_1 + (uVar12 - 8));
      uVar8 = uVar9 + uVar12;
      uVar8 = uVar8 >> (uVar12 & 0x3f) | uVar8 << 0x40 - (uVar12 & 0x3f);
      uVar12 = (*param_1 ^ uRam00000001132fee80 ^ uVar8) * -0x622015f714c7d297;
      uVar12 = (uVar8 ^ uVar12 >> 0x2f ^ uVar12) * -0x622015f714c7d297;
      return (undefined1 *)((uVar12 ^ uVar12 >> 0x2f) * -0x622015f714c7d297 ^ uVar9);
    }
    if (0xf < uVar12 - 0x11) {
      if (uVar12 < 0x21) {
        if (uVar12 == 0) {
          return (undefined1 *)(uRam00000001132fee80 ^ 0x9ae16a3b2f90404f);
        }
        uVar12 = (ulong)CONCAT11(*(undefined1 *)((long)param_1 + (uVar12 >> 1)),(char)*param_1) *
                 -0x651e95c4d06fbfb1 ^
                 (uVar12 + (ulong)*(byte *)((long)param_1 + (uVar12 - 1)) * 4) * -0x36b62838af619aa9
                 ^ uRam00000001132fee80;
      }
      else {
        lVar3 = *(long *)((long)param_1 + (uVar12 - 0x10));
        lVar5 = *(long *)((long)param_1 + (uVar12 - 8));
        uVar10 = *param_1 + (lVar3 + uVar12) * -0x3c5a37a36834ced9;
        uVar8 = uVar10 + param_1[3];
        uVar9 = uVar10 + param_1[1];
        uVar11 = uVar9 + param_1[2];
        uVar1 = *(long *)((long)param_1 + (uVar12 - 0x20)) + param_1[2];
        uVar2 = uVar1 + lVar5;
        lVar4 = (uVar9 >> 7 | uVar9 << 0x39) + (uVar10 >> 0x25 | uVar10 * 0x8000000) +
                (uVar8 >> 0x34 | uVar8 * 0x1000) + (uVar11 >> 0x1f | uVar11 << 0x21);
        uVar12 = *(long *)((long)param_1 + (uVar12 - 0x18)) + uVar1;
        uVar8 = uVar12 + lVar3;
        uVar12 = (uVar8 + lVar5 + lVar4) * -0x3c5a37a36834ced9 +
                 (uVar11 + param_1[3] + (uVar1 >> 0x25 | uVar1 * 0x8000000) +
                           (uVar2 >> 0x34 | uVar2 * 0x1000) + (uVar12 >> 7 | uVar12 << 0x39) +
                           (uVar8 >> 0x1f | uVar8 << 0x21)) * -0x651e95c4d06fbfb1;
        uVar12 = ((uVar12 ^ uVar12 >> 0x2f) * -0x3c5a37a36834ced9 ^ uRam00000001132fee80) + lVar4;
      }
      return (undefined1 *)((uVar12 ^ uVar12 >> 0x2f) * -0x651e95c4d06fbfb1);
    }
    lVar4 = *(long *)((long)param_1 + (uVar12 - 8));
    uVar9 = *param_1 * -0x4b6d499041670d8d - param_1[1];
    uVar11 = lVar4 * -0x651e95c4d06fbfb1 ^ uRam00000001132fee80;
    uVar8 = param_1[1] ^ 0xc949d7c7509e6557;
    uVar8 = uRam00000001132fee80 + uVar12 + (uVar8 >> 0x14 | uVar8 << 0x2c) +
            *param_1 * -0x4b6d499041670d8d + lVar4 * 0x651e95c4d06fbfb1;
    uVar12 = ((uVar9 >> 0x2b | uVar9 * 0x200000) +
              *(long *)((long)param_1 + (uVar12 - 0x10)) * -0x3c5a37a36834ced9 +
              (uVar11 >> 0x1e | uVar11 << 0x22) ^ uVar8) * -0x622015f714c7d297;
    uVar12 = uVar8 ^ uVar12 >> 0x2f ^ uVar12;
  }
  return (undefined1 *)
         ((uVar12 * -0x622015f714c7d297 ^ uVar12 * -0x622015f714c7d297 >> 0x2f) *
         -0x622015f714c7d297);
}



/* Entry: 109d92f98; end: 109d9309b;  */

undefined1  [16] FUN_109d92f98(long *param_1,undefined8 param_2,long param_3,undefined1 *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  plVar1 = param_1;
  func_0x000107c2b020();
  plVar3 = (long *)(*param_1 + ((ulong)plVar1 & 0xffffffff) * 8);
  lVar5 = *plVar3;
  if (lVar5 == -8) {
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  }
  else if (lVar5 != 0) {
    while ((lVar5 == 0 || (lVar5 == -8))) {
      plVar3 = plVar3 + 1;
      lVar5 = *plVar3;
    }
    uVar4 = 0;
    goto LAB_109d93080;
  }
  plVar2 = (long *)(param_3 + 0x11);
  __ZnwmSt11align_val_t(plVar2,8);
  if (param_3 != 0) {
    _memcpy(plVar2 + 2,param_2,param_3);
  }
  *(undefined1 *)((long)(plVar2 + 2) + param_3) = 0;
  *plVar2 = param_3;
  *(undefined1 *)(plVar2 + 1) = *param_4;
  *plVar3 = (long)plVar2;
  *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
  plVar3 = param_1;
  func_0x000107c2b028(param_1,plVar1);
  for (plVar3 = (long *)(*param_1 + ((ulong)plVar3 & 0xffffffff) * 8); *plVar3 == 0 || *plVar3 == -8
      ; plVar3 = plVar3 + 1) {
  }
  uVar4 = 1;
LAB_109d93080:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = plVar3;
  return auVar6;
}


