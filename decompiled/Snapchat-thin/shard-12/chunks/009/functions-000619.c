/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109c9e938; end: 109c9ec6f;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_109c9e938(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xff) == 0) {
    lVar4 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x18);
      FUN_109c908c0();
      lVar4 = lVar4 + (ulong)((int)LZCOUNT((int)lVar4) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      FUN_109c908c0();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      FUN_109c908c0();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x30);
      FUN_109c908c0();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x38);
      FUN_109c908c0();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 5 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x40);
      FUN_109c908c0();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 6 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x48);
      FUN_109c908c0();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 7 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x50);
      FUN_109c908c0();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
    }
  }
  if ((uVar1 & 0x7f00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x58);
      FUN_109c908c0();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 9 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x60);
      FUN_109c908c0();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x68);
      FUN_109c908c0();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x70);
      FUN_109c908c0();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x78);
      FUN_109c908c0();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x80);
      FUN_109c908c0();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x88);
      FUN_109c908c0();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 109c9ec70; end: 109c9ec73;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109c9ec70(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_109c7fc24();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar2 = uVar3;
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar2;
      }
      else {
        FUN_109c7fc24();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar2 = uVar3;
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar2;
      }
      else {
        FUN_109c7fc24();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar2 = uVar3;
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        FUN_109c7fc24();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar2 = uVar3;
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar2;
      }
      else {
        FUN_109c7fc24();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar2 = uVar3;
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar2;
      }
      else {
        FUN_109c7fc24();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
        uVar2 = uVar3;
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar2;
      }
      else {
        FUN_109c7fc24();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      if (*(long *)(param_1 + 0x50) == 0) {
        uVar2 = uVar3;
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x50));
        *(ulong *)(param_1 + 0x50) = uVar2;
      }
      else {
        FUN_109c7fc24();
      }
    }
  }
  if ((uVar1 & 0x7f00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      if (*(long *)(param_1 + 0x58) == 0) {
        uVar2 = uVar3;
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x58));
        *(ulong *)(param_1 + 0x58) = uVar2;
      }
      else {
        FUN_109c7fc24();
      }
    }
    if ((uVar1 >> 9 & 1) != 0) {
      if (*(long *)(param_1 + 0x60) == 0) {
        uVar2 = uVar3;
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x60));
        *(ulong *)(param_1 + 0x60) = uVar2;
      }
      else {
        FUN_109c7fc24();
      }
    }
    if ((uVar1 >> 10 & 1) != 0) {
      if (*(long *)(param_1 + 0x68) == 0) {
        uVar2 = uVar3;
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x68));
        *(ulong *)(param_1 + 0x68) = uVar2;
      }
      else {
        FUN_109c7fc24();
      }
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      if (*(long *)(param_1 + 0x70) == 0) {
        uVar2 = uVar3;
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x70));
        *(ulong *)(param_1 + 0x70) = uVar2;
      }
      else {
        FUN_109c7fc24();
      }
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      if (*(long *)(param_1 + 0x78) == 0) {
        uVar2 = uVar3;
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x78));
        *(ulong *)(param_1 + 0x78) = uVar2;
      }
      else {
        FUN_109c7fc24();
      }
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar2 = uVar3;
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x80));
        *(ulong *)(param_1 + 0x80) = uVar2;
      }
      else {
        FUN_109c7fc24();
      }
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      if (*(long *)(param_1 + 0x88) == 0) {
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x88));
        *(ulong *)(param_1 + 0x88) = uVar3;
      }
      else {
        FUN_109c7fc24();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 109c9ec74; end: 109c9ef8f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109c9ec74(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_109c7fc24();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar2 = uVar3;
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar2;
      }
      else {
        FUN_109c7fc24();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar2 = uVar3;
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar2;
      }
      else {
        FUN_109c7fc24();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar2 = uVar3;
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        FUN_109c7fc24();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar2 = uVar3;
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar2;
      }
      else {
        FUN_109c7fc24();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar2 = uVar3;
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar2;
      }
      else {
        FUN_109c7fc24();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
        uVar2 = uVar3;
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar2;
      }
      else {
        FUN_109c7fc24();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      if (*(long *)(param_1 + 0x50) == 0) {
        uVar2 = uVar3;
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x50));
        *(ulong *)(param_1 + 0x50) = uVar2;
      }
      else {
        FUN_109c7fc24();
      }
    }
  }
  if ((uVar1 & 0x7f00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      if (*(long *)(param_1 + 0x58) == 0) {
        uVar2 = uVar3;
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x58));
        *(ulong *)(param_1 + 0x58) = uVar2;
      }
      else {
        FUN_109c7fc24();
      }
    }
    if ((uVar1 >> 9 & 1) != 0) {
      if (*(long *)(param_1 + 0x60) == 0) {
        uVar2 = uVar3;
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x60));
        *(ulong *)(param_1 + 0x60) = uVar2;
      }
      else {
        FUN_109c7fc24();
      }
    }
    if ((uVar1 >> 10 & 1) != 0) {
      if (*(long *)(param_1 + 0x68) == 0) {
        uVar2 = uVar3;
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x68));
        *(ulong *)(param_1 + 0x68) = uVar2;
      }
      else {
        FUN_109c7fc24();
      }
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      if (*(long *)(param_1 + 0x70) == 0) {
        uVar2 = uVar3;
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x70));
        *(ulong *)(param_1 + 0x70) = uVar2;
      }
      else {
        FUN_109c7fc24();
      }
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      if (*(long *)(param_1 + 0x78) == 0) {
        uVar2 = uVar3;
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x78));
        *(ulong *)(param_1 + 0x78) = uVar2;
      }
      else {
        FUN_109c7fc24();
      }
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar2 = uVar3;
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x80));
        *(ulong *)(param_1 + 0x80) = uVar2;
      }
      else {
        FUN_109c7fc24();
      }
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      if (*(long *)(param_1 + 0x88) == 0) {
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x88));
        *(ulong *)(param_1 + 0x88) = uVar3;
      }
      else {
        FUN_109c7fc24();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 109c9ef90; end: 109c9eff3;  */

long FUN_109c9ef90(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_109c9e38c();
    __ZdlPv();
  }
  FUN_109cb70cc(param_1 + 0x18);
  return param_1;
}



/* Entry: 109c9eff4; end: 109c9f007;  */

void FUN_109c9eff4(void)

{
  FUN_109c9ef90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c9f008; end: 109c9f013;  */

undefined ** FUN_109c9f008(void)

{
  return &PTR_DAT_110b370c0;
}



/* Entry: 109c9f014; end: 109c9f08b;  */

void FUN_109c9f014(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000109c9df68(*(undefined8 *)(param_1 + 0x30));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_109c9e4cc(*(undefined8 *)(param_1 + 0x38));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 109c9f08c; end: 109c9f4ff;  */

byte * FUN_109c9f08c(long param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  ulong uStack_48;
  
  uVar5 = *(ulong *)(param_1 + 0x40);
  if (uVar5 != 0) {
    pbVar7 = (byte *)*param_3;
    if (pbVar7 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar7));
        pbVar7 = (byte *)*param_3;
      } while (pbVar7 <= param_2);
      uVar5 = *(ulong *)(param_1 + 0x40);
    }
    pbVar9 = param_2 + 1;
    *param_2 = 8;
    uVar6 = uVar5;
    pbVar7 = pbVar9;
    if (0x7f < uVar5) {
      do {
        pbVar9 = pbVar7 + 1;
        *pbVar7 = (byte)uVar6 | 0x80;
        uVar5 = uVar6 >> 7;
        uVar8 = uVar6 >> 0xe;
        uVar6 = uVar5;
        pbVar7 = pbVar9;
      } while (uVar8 != 0);
    }
    param_2 = pbVar9 + 1;
    *pbVar9 = (byte)uVar5;
  }
  uVar5 = *(ulong *)(param_1 + 0x48);
  if (uVar5 != 0) {
    pbVar7 = (byte *)*param_3;
    if (pbVar7 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar7));
        pbVar7 = (byte *)*param_3;
      } while (pbVar7 <= param_2);
      uVar5 = *(ulong *)(param_1 + 0x48);
    }
    pbVar9 = param_2 + 1;
    *param_2 = 0x10;
    uVar6 = uVar5;
    pbVar7 = pbVar9;
    if (0x7f < uVar5) {
      do {
        pbVar9 = pbVar7 + 1;
        *pbVar7 = (byte)uVar6 | 0x80;
        uVar5 = uVar6 >> 7;
        uVar8 = uVar6 >> 0xe;
        uVar6 = uVar5;
        pbVar7 = pbVar9;
      } while (uVar8 != 0);
    }
    param_2 = pbVar9 + 1;
    *pbVar9 = (byte)uVar5;
  }
  iVar13 = *(int *)(param_1 + 0x20);
  if (iVar13 != 0) {
    iVar12 = 0;
    pbVar7 = param_2;
    do {
      uVar5 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar12 * 8 + 7);
      }
      param_2 = (byte *)0xa;
      func_0x000107c303cc(10,*puVar1,*(undefined4 *)(*puVar1 + 0x18),pbVar7,param_3);
      iVar12 = iVar12 + 1;
      pbVar7 = param_2;
    } while (iVar13 != iVar12);
  }
  uVar4 = *(uint *)(param_1 + 0x10);
  pbVar7 = param_2;
  if ((uVar4 & 1) != 0) {
    pbVar7 = (byte *)0xf;
    func_0x000107c303cc(0xf,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x1c),param_2,param_3);
  }
  pbVar9 = pbVar7;
  if ((uVar4 >> 1 & 1) != 0) {
    pbVar9 = (byte *)0x14;
    func_0x000107c303cc(0x14,*(long *)(param_1 + 0x38),
                        *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x14),pbVar7,param_3);
  }
  if (*(char *)(param_1 + 0x50) == '\x01') {
    pbVar7 = (byte *)*param_3;
    if (pbVar9 < pbVar7) {
      bVar3 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          pbVar9 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        pbVar9 = (byte *)((long)plVar2 + (long)((int)pbVar9 - (int)pbVar7));
        pbVar7 = (byte *)*param_3;
      } while (pbVar7 <= pbVar9);
      bVar3 = *(byte *)(param_1 + 0x50);
    }
    pbVar9[0] = 0xa0;
    pbVar9[1] = 6;
    pbVar9[2] = bVar3;
    pbVar9 = pbVar9 + 3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar11 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar11 = uVar5 + 8;
    }
    uVar4 = (uint)uStack_48;
    if (*param_3 - (long)pbVar9 < (long)(int)uVar4) {
      pbVar7 = (byte *)((*param_3 - (long)pbVar9) + 0x10);
      if ((int)pbVar7 < (int)uVar4) {
        do {
          iVar13 = (int)pbVar7;
          _memcpy(pbVar9,lVar11,(long)iVar13);
          uVar4 = (int)uStack_48 - iVar13;
          uStack_48 = (ulong)uVar4;
          lVar11 = lVar11 + iVar13;
          pbVar7 = (byte *)*param_3;
          pbVar10 = pbVar9 + iVar13;
          do {
            pbVar9 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar10 = (byte *)((long)plVar2 + (long)((int)pbVar10 - (int)pbVar7));
            pbVar7 = (byte *)*param_3;
            pbVar9 = pbVar10;
          } while (pbVar7 <= pbVar10);
          pbVar7 = pbVar7 + (0x10 - (long)pbVar9);
        } while ((int)pbVar7 < (int)uVar4);
      }
      uStack_48._0_4_ = uVar4;
      _memcpy(pbVar9,lVar11,(long)(int)(uint)uStack_48);
      pbVar9 = pbVar9 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(pbVar9,lVar11,uStack_48 & 0xffffffff);
      pbVar9 = pbVar9 + (int)uVar4;
    }
  }
  return pbVar9;
}



/* Entry: 109c9f500; end: 109c9f503;  */

void FUN_109c9f500(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar2 = uVar3;
        func_0x000109cc2a8c(uVar3,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        FUN_109c9de84();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        func_0x000109cc2b14(uVar3,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar3;
      }
      else {
        FUN_109c9ec74();
      }
    }
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x40);
  }
  if (*(long *)(param_2 + 0x48) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_2 + 0x48);
  }
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 109c9f504; end: 109c9f573;  */

long FUN_109c9f504(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  lVar1 = *(long *)(param_1 + 0x60);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x000107c303ac();
  }
  FUN_109cb70cc(param_1 + 0x30);
  FUN_109cb70cc(param_1 + 0x18);
  return param_1;
}



/* Entry: 109c9f574; end: 109c9f587;  */

void FUN_109c9f574(void)

{
  FUN_109c9f504();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c9f588; end: 109c9f593;  */

undefined ** FUN_109c9f588(void)

{
  return &PTR_DAT_110b37118;
}



/* Entry: 109c9f594; end: 109c9f61b;  */

void FUN_109c9f594(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    func_0x0001053936e4(param_1 + 0x30);
  }
  if (0 < *(int *)(param_1 + 0x50)) {
    func_0x0001053936e4(param_1 + 0x48);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x000109c9df68(*(undefined8 *)(param_1 + 0x60));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 109c9f61c; end: 109c9faff;  */

byte * FUN_109c9f61c(long param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  ulong uStack_48;
  
  uVar4 = *(ulong *)(param_1 + 0x68);
  if (uVar4 != 0) {
    pbVar6 = (byte *)*param_3;
    if (pbVar6 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar6));
        pbVar6 = (byte *)*param_3;
      } while (pbVar6 <= param_2);
      uVar4 = *(ulong *)(param_1 + 0x68);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 8;
    uVar5 = uVar4;
    pbVar6 = pbVar8;
    if (0x7f < uVar4) {
      do {
        pbVar8 = pbVar6 + 1;
        *pbVar6 = (byte)uVar5 | 0x80;
        uVar4 = uVar5 >> 7;
        uVar7 = uVar5 >> 0xe;
        uVar5 = uVar4;
        pbVar6 = pbVar8;
      } while (uVar7 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar4;
  }
  uVar4 = *(ulong *)(param_1 + 0x70);
  if (uVar4 != 0) {
    pbVar6 = (byte *)*param_3;
    if (pbVar6 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar6));
        pbVar6 = (byte *)*param_3;
      } while (pbVar6 <= param_2);
      uVar4 = *(ulong *)(param_1 + 0x70);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 0x10;
    uVar5 = uVar4;
    pbVar6 = pbVar8;
    if (0x7f < uVar4) {
      do {
        pbVar8 = pbVar6 + 1;
        *pbVar6 = (byte)uVar5 | 0x80;
        uVar4 = uVar5 >> 7;
        uVar7 = uVar5 >> 0xe;
        uVar5 = uVar4;
        pbVar6 = pbVar8;
      } while (uVar7 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar4;
  }
  iVar12 = *(int *)(param_1 + 0x20);
  if (iVar12 != 0) {
    iVar11 = 0;
    pbVar6 = param_2;
    do {
      uVar4 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar4 & 1) != 0) {
        puVar1 = (ulong *)(uVar4 + (long)iVar11 * 8 + 7);
      }
      param_2 = (byte *)0xa;
      func_0x000107c303cc(10,*puVar1,*(undefined4 *)(*puVar1 + 0x18),pbVar6,param_3);
      iVar11 = iVar11 + 1;
      pbVar6 = param_2;
    } while (iVar12 != iVar11);
  }
  iVar12 = *(int *)(param_1 + 0x38);
  if (iVar12 != 0) {
    iVar11 = 0;
    pbVar6 = param_2;
    do {
      uVar4 = *(ulong *)(param_1 + 0x30);
      puVar1 = (ulong *)(param_1 + 0x30);
      if ((uVar4 & 1) != 0) {
        puVar1 = (ulong *)(uVar4 + (long)iVar11 * 8 + 7);
      }
      param_2 = (byte *)0xb;
      func_0x000107c303cc(0xb,*puVar1,*(undefined4 *)(*puVar1 + 0x18),pbVar6,param_3);
      iVar11 = iVar11 + 1;
      pbVar6 = param_2;
    } while (iVar12 != iVar11);
  }
  pbVar6 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    pbVar6 = (byte *)0xf;
    func_0x000107c303cc(0xf,*(long *)(param_1 + 0x60),
                        *(undefined4 *)(*(long *)(param_1 + 0x60) + 0x1c),param_2,param_3);
  }
  iVar12 = *(int *)(param_1 + 0x50);
  if (iVar12 != 0) {
    iVar11 = 0;
    pbVar8 = pbVar6;
    do {
      uVar4 = *(ulong *)(param_1 + 0x48);
      puVar1 = (ulong *)(param_1 + 0x48);
      if ((uVar4 & 1) != 0) {
        puVar1 = (ulong *)(uVar4 + (long)iVar11 * 8 + 7);
      }
      pbVar6 = (byte *)0x14;
      func_0x000107c303cc(0x14,*puVar1,*(undefined4 *)(*puVar1 + 0x14),pbVar8,param_3);
      iVar11 = iVar11 + 1;
      pbVar8 = pbVar6;
    } while (iVar12 != iVar11);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar10 = *(long *)(uVar4 + 8);
      uStack_48 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lVar10 = uVar4 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)pbVar6 < (long)(int)uVar3) {
      pbVar8 = (byte *)((*param_3 - (long)pbVar6) + 0x10);
      if ((int)pbVar8 < (int)uVar3) {
        do {
          iVar12 = (int)pbVar8;
          _memcpy(pbVar6,lVar10,(long)iVar12);
          uVar3 = (int)uStack_48 - iVar12;
          uStack_48 = (ulong)uVar3;
          lVar10 = lVar10 + iVar12;
          pbVar8 = (byte *)*param_3;
          pbVar9 = pbVar6 + iVar12;
          do {
            pbVar6 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar9 = (byte *)((long)plVar2 + (long)((int)pbVar9 - (int)pbVar8));
            pbVar8 = (byte *)*param_3;
            pbVar6 = pbVar9;
          } while (pbVar8 <= pbVar9);
          pbVar8 = pbVar8 + (0x10 - (long)pbVar6);
        } while ((int)pbVar8 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(pbVar6,lVar10,(long)(int)(uint)uStack_48);
      pbVar6 = pbVar6 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(pbVar6,lVar10,uStack_48 & 0xffffffff);
      pbVar6 = pbVar6 + (int)uVar3;
    }
  }
  return pbVar6;
}



/* Entry: 109c9fb00; end: 109c9fb03;  */

void FUN_109c9fb00(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    func_0x000107c303c4(param_1 + 0x30,param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    func_0x000107c303c4(param_1 + 0x48,param_2 + 0x48);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x60) == 0) {
      func_0x000109cc2a8c(uVar2,*(undefined8 *)(param_2 + 0x60));
      *(ulong *)(param_1 + 0x60) = uVar2;
    }
    else {
      FUN_109c9de84();
    }
  }
  if (*(long *)(param_2 + 0x68) != 0) {
    *(long *)(param_1 + 0x68) = *(long *)(param_2 + 0x68);
  }
  if (*(long *)(param_2 + 0x70) != 0) {
    *(long *)(param_1 + 0x70) = *(long *)(param_2 + 0x70);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 109c9fb04; end: 109c9fb4b;  */

long FUN_109c9fb04(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    if (*(int *)(param_1 + 0x1c) == 0x14) {
      func_0x000107c30258(param_1 + 0x10);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return param_1;
}



/* Entry: 109c9fb4c; end: 109c9fb4f;  */

long FUN_109c9fb4c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    if (*(int *)(param_1 + 0x1c) == 0x14) {
      func_0x000107c30258(param_1 + 0x10);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return param_1;
}



/* Entry: 109c9fb50; end: 109c9fb63;  */

void FUN_109c9fb50(void)

{
  FUN_109c9fb04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c9fb64; end: 109c9fb6f;  */

undefined ** FUN_109c9fb64(void)

{
  return &PTR_DAT_110b37170;
}



/* Entry: 109c9fb70; end: 109c9fbbb;  */

void FUN_109c9fb70(long param_1)

{
  ulong *puVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0x14) {
    func_0x000107c30258(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 109c9fbbc; end: 109c9ff3f;  */

byte * FUN_109c9fbbc(long param_1,byte *param_2,byte *param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  byte *pbVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  int iVar13;
  
  iVar13 = *(int *)(param_1 + 0x1c);
  pbVar3 = param_2;
  if (iVar13 < 0x1e) {
    if (iVar13 != 10) {
      if (iVar13 == 0x14) {
        puVar11 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
        lVar9 = (long)*(char *)((long)puVar11 + 0x17);
        puVar1 = puVar11;
        if (lVar9 < 0) {
          lVar9 = puVar11[1];
          puVar1 = (undefined8 *)*puVar11;
        }
        func_0x000107c303d4(puVar1,lVar9,1,&UNK_10f5a6b03);
        pbVar3 = param_3;
        func_0x000107c280a0(param_3,0x14,puVar11,param_2);
      }
      goto LAB_109c9fcf8;
    }
    pbVar3 = *(byte **)param_3;
    if (param_2 < pbVar3) {
LAB_109c9fcb4:
      uVar4 = *(undefined8 *)(param_1 + 0x10);
    }
    else {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar6 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar6 + ((int)param_2 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= param_2);
      if (*(int *)(param_1 + 0x1c) == 10) goto LAB_109c9fcb4;
      uVar4 = 0;
    }
    *param_2 = 0x51;
    *(undefined8 *)(param_2 + 1) = uVar4;
    pbVar3 = param_2 + 9;
    goto LAB_109c9fcf8;
  }
  if (iVar13 != 0x1e) {
    if (iVar13 != 0x28) {
      if (iVar13 != 0x32) goto LAB_109c9fcf8;
      pbVar3 = *(byte **)param_3;
      if (param_2 < pbVar3) {
LAB_109c9fc0c:
        bVar2 = *(byte *)(param_1 + 0x10);
      }
      else {
        do {
          if (param_3[0x38] == 1) {
            param_2 = param_3 + 0x10;
            break;
          }
          pbVar6 = param_3;
          func_0x000107c303dc();
          param_2 = pbVar6 + ((int)param_2 - (int)pbVar3);
          pbVar3 = *(byte **)param_3;
        } while (pbVar3 <= param_2);
        if (*(int *)(param_1 + 0x1c) == 0x32) goto LAB_109c9fc0c;
        bVar2 = 0;
      }
      param_2[0] = 0x90;
      param_2[1] = 3;
      param_2[2] = bVar2 & 1;
      pbVar3 = param_2 + 3;
      goto LAB_109c9fcf8;
    }
    pbVar3 = *(byte **)param_3;
    if (param_2 < pbVar3) {
LAB_109c9fc88:
      uVar5 = *(ulong *)(param_1 + 0x10);
      pbVar3 = param_2 + 2;
      param_2[0] = 0xc0;
      param_2[1] = 2;
      uVar12 = uVar5;
      pbVar6 = pbVar3;
      if (0x7f < uVar5) {
        do {
          pbVar3 = pbVar6 + 1;
          *pbVar6 = (byte)uVar12 | 0x80;
          uVar5 = uVar12 >> 7;
          uVar7 = uVar12 >> 0xe;
          uVar12 = uVar5;
          pbVar6 = pbVar3;
        } while (uVar7 != 0);
      }
    }
    else {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar6 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar6 + ((int)param_2 - (int)pbVar3);
        pbVar3 = *(byte **)param_3;
      } while (pbVar3 <= param_2);
      if (*(int *)(param_1 + 0x1c) == 0x28) goto LAB_109c9fc88;
      uVar5 = 0;
      pbVar3 = param_2 + 2;
      param_2[0] = 0xc0;
      param_2[1] = 2;
    }
    *pbVar3 = (byte)uVar5;
    pbVar3 = pbVar3 + 1;
    goto LAB_109c9fcf8;
  }
  pbVar3 = *(byte **)param_3;
  if (param_2 < pbVar3) {
LAB_109c9fc5c:
    uVar10 = *(uint *)(param_1 + 0x10);
    uVar5 = (ulong)(int)uVar10;
    pbVar3 = param_2 + 2;
    param_2[0] = 0xf0;
    param_2[1] = 1;
    uVar12 = uVar5;
    pbVar6 = pbVar3;
    if (0x7f < uVar10) {
      do {
        pbVar3 = pbVar6 + 1;
        *pbVar6 = (byte)uVar12 | 0x80;
        uVar5 = uVar12 >> 7;
        uVar7 = uVar12 >> 0xe;
        uVar12 = uVar5;
        pbVar6 = pbVar3;
      } while (uVar7 != 0);
    }
  }
  else {
    do {
      if (param_3[0x38] == 1) {
        param_2 = param_3 + 0x10;
        break;
      }
      pbVar6 = param_3;
      func_0x000107c303dc();
      param_2 = pbVar6 + ((int)param_2 - (int)pbVar3);
      pbVar3 = *(byte **)param_3;
    } while (pbVar3 <= param_2);
    if (*(int *)(param_1 + 0x1c) == 0x1e) goto LAB_109c9fc5c;
    uVar5 = 0;
    pbVar3 = param_2 + 2;
    param_2[0] = 0xf0;
    param_2[1] = 1;
  }
  *pbVar3 = (byte)uVar5;
  pbVar3 = pbVar3 + 1;
LAB_109c9fcf8:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar12 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar12 < 0) {
      lVar9 = *(long *)(uVar5 + 8);
      uVar12 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar9 = uVar5 + 8;
    }
    uVar10 = (uint)uVar12;
    if (*(long *)param_3 - (long)pbVar3 < (long)(int)uVar10) {
      pbVar6 = (byte *)((*(long *)param_3 - (long)pbVar3) + 0x10);
      if ((int)pbVar6 < (int)uVar10) {
        do {
          iVar13 = (int)pbVar6;
          _memcpy(pbVar3,lVar9,(long)iVar13);
          uVar10 = (int)uVar12 - iVar13;
          uVar12 = (ulong)uVar10;
          lVar9 = lVar9 + iVar13;
          pbVar6 = *(byte **)param_3;
          pbVar8 = pbVar3 + iVar13;
          do {
            pbVar3 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar3 = param_3;
            func_0x000107c303dc();
            pbVar8 = pbVar3 + ((int)pbVar8 - (int)pbVar6);
            pbVar6 = *(byte **)param_3;
            pbVar3 = pbVar8;
          } while (pbVar6 <= pbVar8);
          pbVar6 = pbVar6 + (0x10 - (long)pbVar3);
        } while ((int)pbVar6 < (int)uVar10);
      }
      _memcpy(pbVar3,lVar9,(long)(int)uVar10);
      pbVar3 = pbVar3 + (int)uVar10;
    }
    else {
      _memcpy(pbVar3,lVar9,uVar12 & 0xffffffff);
      pbVar3 = pbVar3 + (int)uVar10;
    }
  }
  return pbVar3;
}



/* Entry: 109c9ff40; end: 109ca0017;  */

long FUN_109c9ff40(long param_1)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 < 0x1e) {
    if (iVar1 == 10) {
      lVar3 = 9;
      goto LAB_109c9ffe8;
    }
    if (iVar1 != 0x14) {
      lVar3 = 0;
      goto LAB_109c9ffe8;
    }
    uVar5 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
    bVar2 = *(byte *)(uVar5 + 0x17);
    uVar5 = *(ulong *)(uVar5 + 8);
    if (-1 < (char)bVar2) {
      uVar5 = (ulong)bVar2;
    }
    uVar5 = uVar5 + ((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6);
  }
  else {
    if (iVar1 == 0x1e) {
      lVar3 = (long)*(int *)(param_1 + 0x10);
    }
    else {
      if (iVar1 != 0x28) {
        lVar3 = 3;
        if (iVar1 != 0x32) {
          lVar3 = 0;
        }
        goto LAB_109c9ffe8;
      }
      lVar3 = *(long *)(param_1 + 0x10);
    }
    uVar5 = (ulong)((int)LZCOUNT(lVar3) * -9 + 0x280U >> 6);
  }
  lVar3 = uVar5 + 2;
LAB_109c9ffe8:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x18) = (int)lVar3;
  return lVar3;
}



/* Entry: 109ca0018; end: 109ca0143;  */

void FUN_109ca0018(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  iVar2 = *(int *)(param_2 + 0x1c);
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0x1c);
    if (iVar3 != iVar2) {
      if (iVar3 == 0x14) {
        func_0x000107c30258(param_1 + 0x10);
      }
      *(int *)(param_1 + 0x1c) = iVar2;
    }
    if (iVar2 < 0x1e) {
      if (iVar2 == 10) {
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      }
      else if (iVar2 == 0x14) {
        if (iVar3 != 0x14) {
          *(undefined **)(param_1 + 0x10) = &DAT_11383d918;
        }
        puVar1 = (undefined *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
        if (*(int *)(param_2 + 0x1c) != 0x14) {
          puVar1 = &DAT_11383d918;
        }
        func_0x000107c30248(param_1 + 0x10,puVar1,uVar4);
      }
    }
    else if (iVar2 == 0x1e) {
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    }
    else if (iVar2 == 0x28) {
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    }
    else if (iVar2 == 0x32) {
      *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
    }
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 109ca0144; end: 109ca018f;  */

long FUN_109ca0144(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x48);
  func_0x000107c30258(param_1 + 0x50);
  FUN_109cb7100(param_1 + 0x28);
  FUN_109cb7148(param_1 + 0x10);
  return param_1;
}



/* Entry: 109ca0190; end: 109ca01a3;  */

void FUN_109ca0190(void)

{
  FUN_109ca0144();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ca01a4; end: 109ca01c3;  */

undefined ** FUN_109ca01a4(void)

{
  return &PTR_DAT_110b371d0;
}



/* Entry: 109ca01c4; end: 109ca028f;  */

void FUN_109ca01c4(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  if (*(int *)(param_1 + 0x2c) != 1) {
    func_0x000107c30320(param_1 + 0x28,0x10500400020,0);
  }
  if ((*(ulong *)(param_1 + 0x48) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  if ((*(ulong *)(param_1 + 0x50) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 109ca0290; end: 109ca064b;  */

ulong * FUN_109ca0290(long param_1,ulong *param_2,ulong *param_3)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  uint *puVar13;
  long *plVar14;
  ulong *puVar15;
  ulong uStack_68;
  uint *puStack_60;
  uint uStack_58;
  long lVar12;
  
  puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar9[1];
    if (lVar5 != 0) {
      puVar3 = (undefined8 *)*puVar9;
      goto LAB_109ca02e0;
    }
  }
  else {
    puVar3 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) != '\0') {
LAB_109ca02e0:
      func_0x000107c303d4(puVar3,lVar5,1,&UNK_10f5a6b4c);
      puVar1 = param_3;
      func_0x000107c280a0(param_3,10,puVar9,param_2);
      param_2 = puVar1;
    }
  }
  iVar11 = *(int *)(param_1 + 0x18);
  if (iVar11 != 0) {
    iVar10 = 0;
    puVar1 = param_2;
    do {
      uVar7 = *(ulong *)(param_1 + 0x10);
      puVar15 = (ulong *)(param_1 + 0x10);
      if ((uVar7 & 1) != 0) {
        puVar15 = (ulong *)(uVar7 + (long)iVar10 * 8 + 7);
      }
      param_2 = (ulong *)0x14;
      func_0x000107c303cc(0x14,*puVar15,*(undefined4 *)(*puVar15 + 0x14),puVar1,param_3);
      iVar10 = iVar10 + 1;
      puVar1 = param_2;
    } while (iVar11 != iVar10);
  }
  puVar13 = (uint *)(param_1 + 0x28);
  uVar8 = *puVar13;
  uVar7 = (ulong)uVar8;
  if (uVar8 != 0) {
    puStack_60 = puVar13;
    if ((uVar8 == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      uVar8 = *(uint *)(param_1 + 0x34);
      if (uVar8 != *(uint *)(param_1 + 0x2c)) {
        uStack_68 = *(ulong *)(*(long *)(param_1 + 0x38) + (ulong)uVar8 * 8);
        puVar1 = param_2;
        uStack_58 = uVar8;
        if ((uStack_68 & 1) != 0) {
          uStack_68 = *(ulong *)(**(long **)(uStack_68 - 1) + 0x20);
        }
        do {
          uVar7 = uStack_68;
          puVar15 = (ulong *)(uStack_68 + 8);
          param_2 = puVar15;
          FUN_109ca064c(puVar15,uStack_68 + 0x20,puVar1,param_3);
          lVar5 = (long)*(char *)(uVar7 + 0x1f);
          if (lVar5 < 0) {
            puVar15 = *(ulong **)(uVar7 + 8);
            lVar5 = *(long *)(uVar7 + 0x10);
          }
          func_0x000107c303d4(puVar15,lVar5,1,&UNK_10f5a6b7d);
          func_0x000107c27d54(&uStack_68);
          puVar1 = param_2;
        } while (uStack_68 != 0);
      }
    }
    else {
      plVar2 = (long *)(uVar7 * 8);
      __Znam();
      uStack_58 = *(uint *)(param_1 + 0x34);
      plVar14 = plVar2;
      if (uStack_58 == *(uint *)(param_1 + 0x2c)) {
        uStack_58 = 0;
        uStack_68 = 0;
      }
      else {
        uStack_68 = *(ulong *)(*(long *)(param_1 + 0x38) + (ulong)uStack_58 * 8);
        if ((uStack_68 & 1) != 0) {
          uStack_68 = *(ulong *)(**(long **)(uStack_68 - 1) + 0x20);
        }
      }
      while (uStack_68 != 0) {
        *plVar14 = uStack_68 + 8;
        func_0x000107c27d54(&uStack_68);
        plVar14 = plVar14 + 1;
      }
      func_0x000105991c74(plVar2,plVar2 + uVar7,&uStack_68,LZCOUNT(uVar7) * -2 + 0x7e,1);
      lVar5 = 0;
      puVar1 = param_2;
      do {
        puVar15 = *(ulong **)((long)plVar2 + lVar5);
        param_2 = puVar15;
        FUN_109ca064c(puVar15,puVar15 + 3,puVar1,param_3);
        uVar6 = (ulong)*(char *)((long)puVar15 + 0x17);
        puVar1 = puVar15;
        if ((long)uVar6 < 0) {
          puVar1 = (ulong *)*puVar15;
          uVar6 = puVar15[1];
        }
        func_0x000107c303d4(puVar1,uVar6,1,&UNK_10f5a6b7d);
        lVar5 = lVar5 + 8;
        puVar1 = param_2;
      } while ((long)(uVar7 * 8) - lVar5 != 0);
      __ZdaPv(plVar2);
    }
  }
  puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar9[1];
    if (lVar5 == 0) goto LAB_109ca0518;
    puVar3 = (undefined8 *)*puVar9;
  }
  else {
    puVar3 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) == '\0') goto LAB_109ca0518;
  }
  func_0x000107c303d4(puVar3,lVar5,1,&UNK_10f5a6baf);
  puVar1 = param_3;
  func_0x000107c280a0(param_3,0x28,puVar9,param_2);
  param_2 = puVar1;
LAB_109ca0518:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar5 = *(long *)(uVar7 + 8);
      uVar6 = (ulong)*(uint *)(uVar7 + 0x10);
    }
    else {
      lVar5 = uVar7 + 8;
    }
    uVar8 = (uint)uVar6;
    if ((long)(*param_3 - (long)param_2) < (long)(int)uVar8) {
      lVar12 = (*param_3 - (long)param_2) + 0x10;
      if ((int)lVar12 < (int)uVar8) {
        do {
          iVar11 = (int)lVar12;
          _memcpy(param_2,lVar5,(long)iVar11);
          uVar8 = (int)uVar6 - iVar11;
          uVar6 = (ulong)uVar8;
          lVar5 = lVar5 + iVar11;
          puVar15 = (ulong *)*param_3;
          puVar1 = (ulong *)((long)param_2 + (long)iVar11);
          do {
            param_2 = param_3 + 2;
            if ((param_3[7] & 1) != 0) break;
            puVar4 = param_3;
            func_0x000107c303dc();
            puVar1 = (ulong *)((long)puVar4 + (long)((int)puVar1 - (int)puVar15));
            puVar15 = (ulong *)*param_3;
            param_2 = puVar1;
          } while (puVar15 <= puVar1);
          lVar12 = (long)puVar15 + (0x10 - (long)param_2);
        } while ((int)lVar12 < (int)uVar8);
      }
      _memcpy(param_2,lVar5,(long)(int)uVar8);
      param_2 = (ulong *)((long)param_2 + (long)(int)uVar8);
    }
    else {
      _memcpy(param_2,lVar5,uVar6 & 0xffffffff);
      param_2 = (ulong *)((long)param_2 + (long)(int)uVar8);
    }
  }
  return param_2;
}



/* Entry: 109ca064c; end: 109ca0a33;  */

void FUN_109ca064c(long *param_1,long *param_2,byte *param_3,byte *param_4)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  long lVar10;
  
  pbVar8 = *(byte **)param_4;
  if (pbVar8 <= param_3) {
    do {
      if (param_4[0x38] == 1) {
        param_3 = param_4 + 0x10;
        break;
      }
      pbVar6 = param_4;
      func_0x000107c303dc();
      param_3 = pbVar6 + ((int)param_3 - (int)pbVar8);
      pbVar8 = *(byte **)param_4;
    } while (pbVar8 <= param_3);
  }
  pbVar8 = param_3 + 2;
  param_3[0] = 0xf2;
  param_3[1] = 1;
  uVar9 = *(uint *)(param_1 + 1);
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar9 = (uint)*(byte *)((long)param_1 + 0x17);
  }
  uVar9 = (int)param_2[3] + uVar9 + ((int)LZCOUNT((int)param_2[3]) * -9 + 0x160U >> 6) +
          ((int)LZCOUNT(uVar9) * -9 + 0x160U >> 6) + 2;
  pbVar6 = pbVar8;
  uVar7 = uVar9;
  if (0x7f < uVar9) {
    do {
      pbVar8 = pbVar6 + 1;
      *pbVar6 = (byte)uVar7 | 0x80;
      uVar9 = uVar7 >> 7;
      uVar2 = uVar7 >> 0xe;
      pbVar6 = pbVar8;
      uVar7 = uVar9;
    } while (uVar2 != 0);
  }
  pbVar6 = pbVar8 + 1;
  *pbVar8 = (byte)uVar9;
  pbVar8 = *(byte **)param_4;
  if (pbVar8 <= pbVar6) {
    do {
      if (param_4[0x38] == 1) {
        pbVar6 = param_4 + 0x10;
        break;
      }
      pbVar4 = param_4;
      func_0x000107c303dc();
      pbVar6 = pbVar4 + ((int)pbVar6 - (int)pbVar8);
      pbVar8 = *(byte **)param_4;
    } while (pbVar8 <= pbVar6);
  }
  lVar10 = (long)*(char *)((long)param_1 + 0x17);
  if (((lVar10 < 0) && (lVar10 = param_1[1], 0x7f < lVar10)) ||
     ((long)(pbVar8 + (0xe - (long)pbVar6)) < lVar10)) {
    pbVar8 = param_4;
    func_0x00010b4d5120(param_4,1,param_1);
  }
  else {
    *pbVar6 = 10;
    pbVar6[1] = (byte)lVar10;
    plVar1 = (long *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      plVar1 = param_1;
    }
    _memcpy(pbVar6 + 2,plVar1,lVar10);
    pbVar8 = pbVar6 + 2 + lVar10;
  }
  pbVar6 = *(byte **)param_4;
  if (pbVar6 <= pbVar8) {
    do {
      if (param_4[0x38] == 1) {
        pbVar8 = param_4 + 0x10;
        break;
      }
      pbVar4 = param_4;
      func_0x000107c303dc();
      pbVar8 = pbVar4 + ((int)pbVar8 - (int)pbVar6);
      pbVar6 = *(byte **)param_4;
    } while (pbVar6 <= pbVar8);
  }
  uVar5 = (ulong)*(uint *)(param_2 + 3);
  pbVar6 = param_4;
  func_0x0001001a597c(param_4,pbVar8);
  uVar3 = 0x12;
  func_0x0001001a59d0(0x12,pbVar6);
  func_0x0001001a59d0(uVar5,uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001006018cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,uVar5,param_4);
  return;
}



/* Entry: 109ca0a34; end: 109ca0a37;  */

void FUN_109ca0a34(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  func_0x000109cc2d30(param_1 + 0x28,param_2 + 0x28);
  uVar1 = *(ulong *)(param_2 + 0x48) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x48,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x50) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x50,uVar1,uVar2);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 109ca0a38; end: 109ca0a7f;  */

long FUN_109ca0a38(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    if (*(long *)(*(long *)(param_1 + 0x18) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109ca0a80; end: 109ca0a93;  */

void FUN_109ca0a80(void)

{
  FUN_109ca0a38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ca0a94; end: 109ca0ab3;  */

undefined ** FUN_109ca0a94(void)

{
  return &PTR_DAT_110b37218;
}



/* Entry: 109ca0ab4; end: 109ca0d83;  */

byte * FUN_109ca0ab4(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  int iVar16;
  undefined8 uVar17;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar12 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar12) {
    pbVar3 = (byte *)*param_3;
    if (pbVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar3));
        pbVar3 = (byte *)*param_3;
      } while (pbVar3 <= param_2);
    }
    pbVar3 = param_2 + 1;
    *param_2 = 10;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar3;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar12 | 0x80;
        uVar1 = uVar12 >> 0xe;
        uVar12 = uVar12 >> 7;
      } while (uVar1 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar12;
    puVar13 = *(ulong **)(param_1 + 0x18);
    iVar16 = *(int *)(param_1 + 0x10);
    pbVar3 = (byte *)(param_3 + 2);
    puVar14 = puVar13;
    do {
      pbVar10 = param_2;
      pbVar9 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar10 = pbVar3;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109ca0b74:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109ca0c0c:
            *param_3 = (long)(param_3 + 4);
            pbVar6 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar17 = *(undefined8 *)pbVar9;
              param_3[3] = *(long *)(pbVar9 + 8);
              *(undefined8 *)pbVar3 = uVar17;
              param_3[1] = (long)pbVar9;
              goto LAB_109ca0c0c;
            }
            _memcpy(param_3[1],pbVar3,(long)pbVar9 - (long)pbVar3);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109ca0b74;
            } while (uStack_64 == 0);
            puVar8 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar17 = *puVar8;
              param_3[3] = puVar8[1];
              *(undefined8 *)pbVar3 = uVar17;
              *param_3 = (long)(pbVar3 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar6 = pbVar3 + (int)uStack_64;
            }
            else {
              uVar17 = *puVar8;
              *(undefined8 *)(pbStack_70 + 8) = puVar8[1];
              *(undefined8 *)pbStack_70 = uVar17;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar10 = pbStack_70;
              pbVar6 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar10 + ((int)param_2 - (int)pbVar9);
          pbVar10 = param_2;
          pbVar9 = pbVar6;
        } while (pbVar6 <= param_2);
      }
      puVar15 = puVar14 + 1;
      uVar4 = *puVar14;
      uVar5 = uVar4;
      pbVar9 = pbVar10;
      if (0x7f < uVar4) {
        do {
          pbVar10 = pbVar9 + 1;
          *pbVar9 = (byte)uVar5 | 0x80;
          uVar4 = uVar5 >> 7;
          uVar7 = uVar5 >> 0xe;
          uVar5 = uVar4;
          pbVar9 = pbVar10;
        } while (uVar7 != 0);
      }
      param_2 = pbVar10 + 1;
      *pbVar10 = (byte)uVar4;
      puVar14 = puVar15;
    } while (puVar15 < puVar13 + iVar16);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar11 = *(long *)(uVar5 + 8);
      uVar4 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar11 = uVar5 + 8;
    }
    uVar12 = (uint)uVar4;
    if (*param_3 - (long)param_2 < (long)(int)uVar12) {
      pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar3 < (int)uVar12) {
        do {
          iVar16 = (int)pbVar3;
          _memcpy(param_2,lVar11,(long)iVar16);
          uVar12 = (int)uVar4 - iVar16;
          uVar4 = (ulong)uVar12;
          lVar11 = lVar11 + iVar16;
          pbVar3 = (byte *)*param_3;
          pbVar10 = param_2 + iVar16;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar10 = (byte *)((long)plVar2 + (long)((int)pbVar10 - (int)pbVar3));
            pbVar3 = (byte *)*param_3;
            param_2 = pbVar10;
          } while (pbVar3 <= pbVar10);
          pbVar3 = pbVar3 + (0x10 - (long)param_2);
        } while ((int)pbVar3 < (int)uVar12);
      }
      _memcpy(param_2,lVar11,(long)(int)uVar12);
      param_2 = param_2 + (int)uVar12;
    }
    else {
      _memcpy(param_2,lVar11,uVar4 & 0xffffffff);
      param_2 = param_2 + (int)uVar12;
    }
  }
  return param_2;
}



/* Entry: 109ca0d84; end: 109ca0e2b;  */

long FUN_109ca0d84(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < 1) {
    lVar2 = 0;
    lVar3 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar2 = 0;
    uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    do {
      lVar2 = (ulong)((int)LZCOUNT(*puVar4) * -9 + 0x280U >> 6) + lVar2;
      uVar5 = uVar5 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != 0);
    *(int *)(param_1 + 0x20) = (int)lVar2;
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
    }
  }
  lVar3 = lVar3 + lVar2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x24) = (int)lVar3;
  return lVar3;
}



/* Entry: 109ca0e2c; end: 109ca0e77;  */

long FUN_109ca0e2c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_109c903d8();
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_109c903d8();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109ca0e78; end: 109ca0e8b;  */

void FUN_109ca0e78(void)

{
  FUN_109ca0e2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ca0e8c; end: 109ca0e97;  */

undefined ** FUN_109ca0e8c(void)

{
  return &PTR_DAT_110b37268;
}



/* Entry: 109ca0e98; end: 109ca0efb;  */

void FUN_109ca0e98(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000109c7f8e8(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000109c7f8e8(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 109ca0efc; end: 109ca12fb;  */

byte * FUN_109ca0efc(long param_1,byte *param_2,long *param_3)

{
  long *plVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  int iVar11;
  ulong uStack_48;
  
  if (*(char *)(param_1 + 0x38) == '\x01') {
    pbVar4 = (byte *)*param_3;
    if (param_2 < pbVar4) {
      bVar2 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      bVar2 = *(byte *)(param_1 + 0x38);
    }
    *param_2 = 8;
    param_2[1] = bVar2;
    param_2 = param_2 + 2;
  }
  if (*(char *)(param_1 + 0x39) == '\x01') {
    pbVar4 = (byte *)*param_3;
    if (param_2 < pbVar4) {
      bVar2 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      bVar2 = *(byte *)(param_1 + 0x39);
    }
    *param_2 = 0x10;
    param_2[1] = bVar2;
    param_2 = param_2 + 2;
  }
  uVar5 = *(ulong *)(param_1 + 0x28);
  if (uVar5 != 0) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      uVar5 = *(ulong *)(param_1 + 0x28);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 0x28;
    uVar6 = uVar5;
    pbVar4 = pbVar8;
    if (0x7f < uVar5) {
      do {
        pbVar8 = pbVar4 + 1;
        *pbVar4 = (byte)uVar6 | 0x80;
        uVar5 = uVar6 >> 7;
        uVar7 = uVar6 >> 0xe;
        uVar6 = uVar5;
        pbVar4 = pbVar8;
      } while (uVar7 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar5;
  }
  uVar5 = *(ulong *)(param_1 + 0x30);
  if (uVar5 != 0) {
    pbVar4 = (byte *)*param_3;
    if (pbVar4 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      uVar5 = *(ulong *)(param_1 + 0x30);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 0x30;
    uVar6 = uVar5;
    pbVar4 = pbVar8;
    if (0x7f < uVar5) {
      do {
        pbVar8 = pbVar4 + 1;
        *pbVar4 = (byte)uVar6 | 0x80;
        uVar5 = uVar6 >> 7;
        uVar7 = uVar6 >> 0xe;
        uVar6 = uVar5;
        pbVar4 = pbVar8;
      } while (uVar7 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar5;
  }
  if (*(char *)(param_1 + 0x3a) == '\x01') {
    pbVar4 = (byte *)*param_3;
    if (param_2 < pbVar4) {
      bVar2 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= param_2);
      bVar2 = *(byte *)(param_1 + 0x3a);
    }
    *param_2 = 0x38;
    param_2[1] = bVar2;
    param_2 = param_2 + 2;
  }
  uVar3 = *(uint *)(param_1 + 0x10);
  pbVar4 = param_2;
  if ((uVar3 & 1) != 0) {
    pbVar4 = (byte *)0x8;
    func_0x000107c303cc(8,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14),param_2,param_3);
  }
  pbVar8 = pbVar4;
  if ((uVar3 >> 1 & 1) != 0) {
    pbVar8 = (byte *)0x9;
    func_0x000107c303cc(9,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x14),pbVar4,param_3);
  }
  if (*(char *)(param_1 + 0x3b) == '\x01') {
    pbVar4 = (byte *)*param_3;
    if (pbVar8 < pbVar4) {
      bVar2 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          pbVar8 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        pbVar8 = (byte *)((long)plVar1 + (long)((int)pbVar8 - (int)pbVar4));
        pbVar4 = (byte *)*param_3;
      } while (pbVar4 <= pbVar8);
      bVar2 = *(byte *)(param_1 + 0x3b);
    }
    *pbVar8 = 0x50;
    pbVar8[1] = bVar2;
    pbVar8 = pbVar8 + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar10 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar10 = uVar5 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)pbVar8 < (long)(int)uVar3) {
      pbVar4 = (byte *)((*param_3 - (long)pbVar8) + 0x10);
      if ((int)pbVar4 < (int)uVar3) {
        do {
          iVar11 = (int)pbVar4;
          _memcpy(pbVar8,lVar10,(long)iVar11);
          uVar3 = (int)uStack_48 - iVar11;
          uStack_48 = (ulong)uVar3;
          lVar10 = lVar10 + iVar11;
          pbVar4 = (byte *)*param_3;
          pbVar9 = pbVar8 + iVar11;
          do {
            pbVar8 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            pbVar9 = (byte *)((long)plVar1 + (long)((int)pbVar9 - (int)pbVar4));
            pbVar4 = (byte *)*param_3;
            pbVar8 = pbVar9;
          } while (pbVar4 <= pbVar9);
          pbVar4 = pbVar4 + (0x10 - (long)pbVar8);
        } while ((int)pbVar4 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(pbVar8,lVar10,(long)(int)(uint)uStack_48);
      pbVar8 = pbVar8 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(pbVar8,lVar10,uStack_48 & 0xffffffff);
      pbVar8 = pbVar8 + (int)uVar3;
    }
  }
  return pbVar8;
}



/* Entry: 109ca12fc; end: 109ca1427;  */

void FUN_109ca12fc(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) == 0) {
    iVar3 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)*(undefined8 *)(param_1 + 0x18);
      FUN_109c908c0();
      iVar3 = iVar3 + ((int)LZCOUNT(iVar3) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
      FUN_109c908c0();
      iVar3 = iVar3 + iVar2 + ((int)LZCOUNT(iVar2) * -9 + 0x160U >> 6) + 1;
    }
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    iVar3 = ((int)LZCOUNT(*(long *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + iVar3;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    iVar3 = ((int)LZCOUNT(*(long *)(param_1 + 0x30)) * -9 + 0x2c0U >> 6) + iVar3;
  }
  uVar6 = *(undefined4 *)(param_1 + 0x38);
  iVar3 = ((ushort)((ushort)(byte)uVar6 * 2) & 0xff) +
          (uint)(byte)((char)((uint)uVar6 >> 0x10) * '\x02') +
          ((ushort)((ushort)(byte)((uint)uVar6 >> 8) * 2) & 0xff) +
          (uint)(byte)((char)((uint)uVar6 >> 0x18) * '\x02') + iVar3;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    iVar3 = (int)lVar4 + iVar3;
  }
  *(int *)(param_1 + 0x14) = iVar3;
  return;
}



/* Entry: 109ca1428; end: 109ca142b;  */

void FUN_109ca1428(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_109c7fc24();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        FUN_109cbb22c(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        FUN_109c7fc24();
      }
    }
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
  }
  if (*(long *)(param_2 + 0x30) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_2 + 0x30);
  }
  if (*(char *)(param_2 + 0x38) == '\x01') {
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  if (*(char *)(param_2 + 0x39) == '\x01') {
    *(undefined1 *)(param_1 + 0x39) = 1;
  }
  if (*(char *)(param_2 + 0x3a) == '\x01') {
    *(undefined1 *)(param_1 + 0x3a) = 1;
  }
  if (*(char *)(param_2 + 0x3b) == '\x01') {
    *(undefined1 *)(param_1 + 0x3b) = 1;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 109ca142c; end: 109ca1457;  */

void FUN_109ca142c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109ca1458; end: 109ca147b;  */

undefined ** FUN_109ca1458(void)

{
  return &PTR_DAT_110b372b8;
}



/* Entry: 109ca147c; end: 109ca161f;  */

long * FUN_109ca147c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined1 uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  long lStack_50;
  ulong uStack_48;
  undefined1 *puVar8;
  
  plVar1 = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x10),param_2);
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    plVar4 = (long *)*param_3;
    if (plVar1 < plVar4) {
      uVar2 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar1 = param_3 + 2;
          break;
        }
        plVar5 = param_3;
        func_0x000107c303dc();
        plVar1 = (long *)((long)plVar5 + (long)((int)plVar1 - (int)plVar4));
        plVar4 = (long *)*param_3;
      } while (plVar4 <= plVar1);
      uVar2 = *(undefined1 *)(param_1 + 0x18);
    }
    *(undefined1 *)plVar1 = 0x10;
    *(undefined1 *)((long)plVar1 + 1) = uVar2;
    plVar1 = (long *)((long)plVar1 + 2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar6 + 8);
      uStack_48 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lStack_50 = uVar6 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)plVar1 < (long)(int)uVar3) {
      puVar8 = (undefined1 *)((*param_3 - (long)plVar1) + 0x10);
      if ((int)puVar8 < (int)uVar3) {
        do {
          iVar7 = (int)puVar8;
          _memcpy(plVar1,lStack_50,(long)iVar7);
          uVar3 = (int)uStack_48 - iVar7;
          uStack_48 = (ulong)uVar3;
          lStack_50 = lStack_50 + iVar7;
          plVar5 = (long *)*param_3;
          plVar4 = (long *)((long)plVar1 + (long)iVar7);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar4 = (long *)((long)plVar1 + (long)((int)plVar4 - (int)plVar5));
            plVar5 = (long *)*param_3;
            plVar1 = plVar4;
          } while (plVar5 <= plVar4);
          puVar8 = (undefined1 *)((long)plVar5 + (0x10 - (long)plVar1));
        } while ((int)puVar8 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(plVar1,lStack_50,(long)(int)(uint)uStack_48);
      plVar1 = (long *)((long)plVar1 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar1,lStack_50,uStack_48 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar3);
    }
  }
  return plVar1;
}



/* Entry: 109ca1620; end: 109ca1673;  */

long FUN_109ca1620(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar3 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  lVar1 = uVar3 + (ulong)*(byte *)(param_1 + 0x18) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x1c) = (int)lVar1;
  return lVar1;
}



/* Entry: 109ca1674; end: 109ca169f;  */

void FUN_109ca1674(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109ca16a0; end: 109ca16bf;  */

undefined ** FUN_109ca16a0(void)

{
  return &PTR_DAT_110b37308;
}



/* Entry: 109ca16c0; end: 109ca17ff;  */

long * FUN_109ca16c0(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  long lStack_50;
  ulong uStack_48;
  long lVar7;
  
  plVar1 = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x10),param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar4 + 8);
      uStack_48 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lStack_50 = uVar4 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)plVar1 < (long)(int)uVar2) {
      lVar7 = (*param_3 - (long)plVar1) + 0x10;
      if ((int)lVar7 < (int)uVar2) {
        do {
          iVar6 = (int)lVar7;
          _memcpy(plVar1,lStack_50,(long)iVar6);
          uVar2 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar2;
          lStack_50 = lStack_50 + iVar6;
          plVar3 = (long *)*param_3;
          plVar5 = (long *)((long)plVar1 + (long)iVar6);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar1 + (long)((int)plVar5 - (int)plVar3));
            plVar3 = (long *)*param_3;
            plVar1 = plVar5;
          } while (plVar3 <= plVar5);
          lVar7 = (long)plVar3 + (0x10 - (long)plVar1);
        } while ((int)lVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(plVar1,lStack_50,(long)(int)(uint)uStack_48);
      plVar1 = (long *)((long)plVar1 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar1,lStack_50,uStack_48 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar2);
    }
  }
  return plVar1;
}



/* Entry: 109ca1800; end: 109ca186f;  */

ulong FUN_109ca1800(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x18) = (int)uVar1;
  return uVar1;
}



/* Entry: 109ca1870; end: 109ca18b7;  */

long FUN_109ca1870(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    if (*(long *)(*(long *)(param_1 + 0x18) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109ca18b8; end: 109ca18cb;  */

void FUN_109ca18b8(void)

{
  FUN_109ca1870();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ca18cc; end: 109ca18eb;  */

undefined ** FUN_109ca18cc(void)

{
  return &PTR_DAT_110b37358;
}



/* Entry: 109ca18ec; end: 109ca1bf3;  */

byte * FUN_109ca18ec(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  undefined8 uVar15;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar10 = *(uint *)(param_1 + 0x10);
  if (0 < (int)uVar10) {
    pbVar3 = (byte *)*param_3;
    if (pbVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar3));
        pbVar3 = (byte *)*param_3;
      } while (pbVar3 <= param_2);
      uVar10 = *(uint *)(param_1 + 0x10);
    }
    pbVar3 = param_2 + 1;
    *param_2 = 10;
    uVar5 = uVar10;
    if (0x7f < uVar10) {
      do {
        param_2 = pbVar3;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar5 | 0x80;
        uVar1 = uVar5 >> 0xe;
        uVar5 = uVar5 >> 7;
      } while (uVar1 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar5;
    lVar11 = *(long *)(param_1 + 0x18);
    uVar13 = (ulong)(int)uVar10;
    if (*param_3 - (long)param_2 < (long)(int)uVar10) {
      pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10);
      uVar12 = uVar13;
      if ((int)pbVar3 < (int)uVar10) {
        pbVar9 = (byte *)(param_3 + 2);
        do {
          iVar14 = (int)pbVar3;
          _memcpy(param_2,lVar11,(long)iVar14);
          uVar10 = uVar10 - iVar14;
          lVar11 = lVar11 + iVar14;
          pbVar8 = param_2 + iVar14;
          pbVar4 = (byte *)*param_3;
          do {
            param_2 = pbVar9;
            pbVar3 = pbVar4;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            pbVar6 = pbVar9;
            if (param_3[6] == 0) {
LAB_109ca1ae0:
              *(undefined1 *)(param_3 + 7) = 1;
LAB_109ca1ac0:
              *param_3 = (long)(param_3 + 4);
              pbVar3 = (byte *)(param_3 + 4);
            }
            else {
              if (param_3[1] == 0) {
                uVar15 = *(undefined8 *)pbVar4;
                param_3[3] = *(long *)(pbVar4 + 8);
                *(undefined8 *)pbVar9 = uVar15;
                param_3[1] = (long)pbVar4;
                goto LAB_109ca1ac0;
              }
              _memcpy(param_3[1],pbVar9,(long)pbVar4 - (long)pbVar9);
              do {
                plVar2 = (long *)param_3[6];
                (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
                if (((ulong)plVar2 & 1) == 0) goto LAB_109ca1ae0;
              } while (uStack_64 == 0);
              puVar7 = (undefined8 *)*param_3;
              if ((int)uStack_64 < 0x11) {
                uVar15 = *puVar7;
                param_3[3] = puVar7[1];
                *(undefined8 *)pbVar9 = uVar15;
                *param_3 = (long)(pbVar9 + (int)uStack_64);
                param_3[1] = (long)pbStack_70;
                pbVar3 = pbVar9 + (int)uStack_64;
              }
              else {
                uVar15 = *puVar7;
                *(undefined8 *)(pbStack_70 + 8) = puVar7[1];
                *(undefined8 *)pbStack_70 = uVar15;
                *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
                param_3[1] = 0;
                pbVar3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
                pbVar6 = pbStack_70;
              }
            }
            pbVar8 = pbVar6 + ((int)pbVar8 - (int)pbVar4);
            pbVar4 = pbVar3;
            param_2 = pbVar8;
          } while (pbVar3 <= pbVar8);
          pbVar3 = pbVar3 + (0x10 - (long)param_2);
        } while ((int)pbVar3 < (int)uVar10);
        uVar12 = (ulong)(int)uVar10;
        uVar13 = uVar12;
      }
    }
    else {
      uVar12 = (ulong)uVar10;
    }
    _memcpy(param_2,lVar11,uVar12);
    param_2 = param_2 + uVar13;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar13 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar12 = (ulong)*(char *)(uVar13 + 0x1f);
    if ((long)uVar12 < 0) {
      lVar11 = *(long *)(uVar13 + 8);
      uVar12 = (ulong)*(uint *)(uVar13 + 0x10);
    }
    else {
      lVar11 = uVar13 + 8;
    }
    uVar10 = (uint)uVar12;
    if (*param_3 - (long)param_2 < (long)(int)uVar10) {
      pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar3 < (int)uVar10) {
        do {
          iVar14 = (int)pbVar3;
          _memcpy(param_2,lVar11,(long)iVar14);
          uVar10 = (int)uVar12 - iVar14;
          uVar12 = (ulong)uVar10;
          lVar11 = lVar11 + iVar14;
          pbVar3 = (byte *)*param_3;
          pbVar9 = param_2 + iVar14;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar9 = (byte *)((long)plVar2 + (long)((int)pbVar9 - (int)pbVar3));
            pbVar3 = (byte *)*param_3;
            param_2 = pbVar9;
          } while (pbVar3 <= pbVar9);
          pbVar3 = pbVar3 + (0x10 - (long)param_2);
        } while ((int)pbVar3 < (int)uVar10);
      }
      _memcpy(param_2,lVar11,(long)(int)uVar10);
      param_2 = param_2 + (int)uVar10;
    }
    else {
      _memcpy(param_2,lVar11,uVar12 & 0xffffffff);
      param_2 = param_2 + (int)uVar10;
    }
  }
  return param_2;
}



/* Entry: 109ca1bf4; end: 109ca1c53;  */

long FUN_109ca1bf4(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (ulong)((int)LZCOUNT((long)(int)uVar1) * -9 + 0x280U >> 6) + 1;
  }
  lVar2 = lVar2 + (ulong)uVar1;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x20) = (int)lVar2;
  return lVar2;
}



/* Entry: 109ca1c54; end: 109ca1c7f;  */

void FUN_109ca1c54(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109ca1c80; end: 109ca1c9f;  */

undefined ** FUN_109ca1c80(void)

{
  return &PTR_DAT_110b373a0;
}



/* Entry: 109ca1ca0; end: 109ca1df7;  */

long * FUN_109ca1ca0(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  long lStack_50;
  ulong uStack_48;
  long lVar7;
  
  plVar1 = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x10),param_2);
  }
  plVar2 = plVar1;
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar2 = param_3;
    func_0x000107c282cc(param_3,*(long *)(param_1 + 0x18),plVar1);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lStack_50 = uVar5 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)plVar2 < (long)(int)uVar3) {
      lVar7 = (*param_3 - (long)plVar2) + 0x10;
      if ((int)lVar7 < (int)uVar3) {
        do {
          iVar6 = (int)lVar7;
          _memcpy(plVar2,lStack_50,(long)iVar6);
          uVar3 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar3;
          lStack_50 = lStack_50 + iVar6;
          plVar4 = (long *)*param_3;
          plVar1 = (long *)((long)plVar2 + (long)iVar6);
          do {
            plVar2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar1 = (long *)((long)plVar2 + (long)((int)plVar1 - (int)plVar4));
            plVar4 = (long *)*param_3;
            plVar2 = plVar1;
          } while (plVar4 <= plVar1);
          lVar7 = (long)plVar4 + (0x10 - (long)plVar2);
        } while ((int)lVar7 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(plVar2,lStack_50,(long)(int)(uint)uStack_48);
      plVar2 = (long *)((long)plVar2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar2,lStack_50,uStack_48 & 0xffffffff);
      plVar2 = (long *)((long)plVar2 + (long)(int)uVar3);
    }
  }
  return plVar2;
}



/* Entry: 109ca1df8; end: 109ca1e5f;  */

ulong FUN_109ca1df8(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x20) = (int)uVar1;
  return uVar1;
}



/* Entry: 109ca1e60; end: 109ca1eb7;  */

long FUN_109ca1e60(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_109c903d8();
    __ZdlPv();
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109ca1eb8; end: 109ca1ecb;  */

void FUN_109ca1eb8(void)

{
  FUN_109ca1e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ca1ecc; end: 109ca1ed7;  */

undefined ** FUN_109ca1ecc(void)

{
  return &PTR_DAT_110b373f0;
}



/* Entry: 109ca1ed8; end: 109ca1f23;  */

void FUN_109ca1ed8(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x000109c7f8e8(*(undefined8 *)(param_1 + 0x30));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 109ca1f24; end: 109ca2217;  */

byte * FUN_109ca1f24(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  int iVar16;
  undefined8 uVar17;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar12 = *(uint *)(param_1 + 0x28);
  if (0 < (int)uVar12) {
    pbVar3 = (byte *)*param_3;
    if (pbVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar3));
        pbVar3 = (byte *)*param_3;
      } while (pbVar3 <= param_2);
    }
    pbVar3 = param_2 + 1;
    *param_2 = 10;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar3;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar12 | 0x80;
        uVar1 = uVar12 >> 0xe;
        uVar12 = uVar12 >> 7;
      } while (uVar1 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar12;
    puVar13 = *(ulong **)(param_1 + 0x20);
    iVar16 = *(int *)(param_1 + 0x18);
    pbVar3 = (byte *)(param_3 + 2);
    puVar14 = puVar13;
    do {
      pbVar6 = param_2;
      pbVar10 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar6 = pbVar3;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109ca1fe4:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109ca207c:
            *param_3 = (long)(param_3 + 4);
            pbVar7 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar17 = *(undefined8 *)pbVar10;
              param_3[3] = *(long *)(pbVar10 + 8);
              *(undefined8 *)pbVar3 = uVar17;
              param_3[1] = (long)pbVar10;
              goto LAB_109ca207c;
            }
            _memcpy(param_3[1],pbVar3,(long)pbVar10 - (long)pbVar3);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109ca1fe4;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar17 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar3 = uVar17;
              *param_3 = (long)(pbVar3 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar7 = pbVar3 + (int)uStack_64;
            }
            else {
              uVar17 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar17;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar6 = pbStack_70;
              pbVar7 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar6 + ((int)param_2 - (int)pbVar10);
          pbVar6 = param_2;
          pbVar10 = pbVar7;
        } while (pbVar7 <= param_2);
      }
      puVar15 = puVar14 + 1;
      uVar4 = *puVar14;
      uVar5 = uVar4;
      pbVar10 = pbVar6;
      if (0x7f < uVar4) {
        do {
          pbVar6 = pbVar10 + 1;
          *pbVar10 = (byte)uVar5 | 0x80;
          uVar4 = uVar5 >> 7;
          uVar8 = uVar5 >> 0xe;
          uVar5 = uVar4;
          pbVar10 = pbVar6;
        } while (uVar8 != 0);
      }
      param_2 = pbVar6 + 1;
      *pbVar6 = (byte)uVar4;
      puVar14 = puVar15;
    } while (puVar15 < puVar13 + iVar16);
  }
  pbVar3 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    pbVar3 = (byte *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x14),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar11 = *(long *)(uVar5 + 8);
      uVar4 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar11 = uVar5 + 8;
    }
    uVar12 = (uint)uVar4;
    if (*param_3 - (long)pbVar3 < (long)(int)uVar12) {
      pbVar6 = (byte *)((*param_3 - (long)pbVar3) + 0x10);
      if ((int)pbVar6 < (int)uVar12) {
        do {
          iVar16 = (int)pbVar6;
          _memcpy(pbVar3,lVar11,(long)iVar16);
          uVar12 = (int)uVar4 - iVar16;
          uVar4 = (ulong)uVar12;
          lVar11 = lVar11 + iVar16;
          pbVar6 = (byte *)*param_3;
          pbVar10 = pbVar3 + iVar16;
          do {
            pbVar3 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar10 = (byte *)((long)plVar2 + (long)((int)pbVar10 - (int)pbVar6));
            pbVar6 = (byte *)*param_3;
            pbVar3 = pbVar10;
          } while (pbVar6 <= pbVar10);
          pbVar6 = pbVar6 + (0x10 - (long)pbVar3);
        } while ((int)pbVar6 < (int)uVar12);
      }
      _memcpy(pbVar3,lVar11,(long)(int)uVar12);
      pbVar3 = pbVar3 + (int)uVar12;
    }
    else {
      _memcpy(pbVar3,lVar11,uVar4 & 0xffffffff);
      pbVar3 = pbVar3 + (int)uVar12;
    }
  }
  return pbVar3;
}



/* Entry: 109ca2218; end: 109ca2303;  */

long FUN_109ca2218(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((int)uVar1 < 1) {
    lVar2 = 0;
    lVar3 = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    lVar2 = 0;
    uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    puVar4 = *(undefined8 **)(param_1 + 0x20);
    do {
      lVar2 = (ulong)((int)LZCOUNT(*puVar4) * -9 + 0x280U >> 6) + lVar2;
      uVar5 = uVar5 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != 0);
    *(int *)(param_1 + 0x28) = (int)lVar2;
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
    }
  }
  lVar3 = lVar3 + lVar2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    FUN_109c908c0();
    lVar3 = lVar3 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 109ca2304; end: 109ca2307;  */

void FUN_109ca2304(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 8);
  if ((uVar7 & 1) != 0) {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x1c) < iVar3) {
      func_0x0001087675dc(param_1 + 0x18);
      iVar2 = *(int *)(param_1 + 0x18);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x18) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined8 **)(param_2 + 0x20);
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 8);
      do {
        *puVar5 = *puVar4;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
  }
  uVar6 = *(uint *)(param_2 + 0x10);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      FUN_109cbb22c(uVar7,*(undefined8 *)(param_2 + 0x30));
      *(ulong *)(param_1 + 0x30) = uVar7;
    }
    else {
      FUN_109c7fc24();
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar6;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 109ca2308; end: 109ca2333;  */

void FUN_109ca2308(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109ca2334; end: 109ca2353;  */

undefined ** FUN_109ca2334(void)

{
  return &PTR_DAT_110b37440;
}



/* Entry: 109ca2354; end: 109ca24df;  */

long * FUN_109ca2354(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 *puVar6;
  int iVar7;
  long lStack_50;
  ulong uStack_48;
  
  iVar7 = *(int *)(param_1 + 0x10);
  if (iVar7 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar4 + (long)((int)param_2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= param_2);
      iVar7 = *(int *)(param_1 + 0x10);
    }
    *(undefined1 *)param_2 = 0xd;
    *(int *)((long)param_2 + 1) = iVar7;
    param_2 = (long *)((long)param_2 + 5);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lStack_50 = uVar5 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar2) {
      puVar6 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar6 < (int)uVar2) {
        do {
          iVar7 = (int)puVar6;
          _memcpy(param_2,lStack_50,(long)iVar7);
          uVar2 = (int)uStack_48 - iVar7;
          uStack_48 = (ulong)uVar2;
          lStack_50 = lStack_50 + iVar7;
          plVar4 = (long *)*param_3;
          plVar3 = (long *)((long)param_2 + (long)iVar7);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar3 = (long *)((long)plVar1 + (long)((int)plVar3 - (int)plVar4));
            plVar4 = (long *)*param_3;
            param_2 = plVar3;
          } while (plVar4 <= plVar3);
          puVar6 = (undefined1 *)((long)plVar4 + (0x10 - (long)param_2));
        } while ((int)puVar6 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(param_2,lStack_50,(long)(int)(uint)uStack_48);
      param_2 = (long *)((long)param_2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(param_2,lStack_50,uStack_48 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar2);
    }
  }
  return param_2;
}



/* Entry: 109ca24e0; end: 109ca2547;  */

long FUN_109ca24e0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 109ca2548; end: 109ca258f;  */

long FUN_109ca2548(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    if (*(long *)(*(long *)(param_1 + 0x18) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109ca2590; end: 109ca25a3;  */

void FUN_109ca2590(void)

{
  FUN_109ca2548();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ca25a4; end: 109ca25c7;  */

undefined ** FUN_109ca25a4(void)

{
  return &PTR_DAT_110b37490;
}



/* Entry: 109ca25c8; end: 109ca28fb;  */

byte * FUN_109ca25c8(long param_1,byte *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  int iVar16;
  undefined8 uVar17;
  byte *pbStack_70;
  uint uStack_64;
  
  iVar16 = *(int *)(param_1 + 0x24);
  if (iVar16 != 0) {
    pbVar3 = (byte *)*param_3;
    if (pbVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar3));
        pbVar3 = (byte *)*param_3;
      } while (pbVar3 <= param_2);
      iVar16 = *(int *)(param_1 + 0x24);
    }
    *param_2 = 0xd;
    *(int *)(param_2 + 1) = iVar16;
    param_2 = param_2 + 5;
  }
  uVar12 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar12) {
    pbVar3 = (byte *)*param_3;
    if (pbVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar2 + (long)((int)param_2 - (int)pbVar3));
        pbVar3 = (byte *)*param_3;
      } while (pbVar3 <= param_2);
    }
    pbVar3 = param_2 + 1;
    *param_2 = 0x12;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar3;
        pbVar3 = param_2 + 1;
        *param_2 = (byte)uVar12 | 0x80;
        uVar1 = uVar12 >> 0xe;
        uVar12 = uVar12 >> 7;
      } while (uVar1 != 0);
    }
    param_2 = param_2 + 2;
    *pbVar3 = (byte)uVar12;
    puVar13 = *(ulong **)(param_1 + 0x18);
    iVar16 = *(int *)(param_1 + 0x10);
    pbVar3 = (byte *)(param_3 + 2);
    puVar14 = puVar13;
    do {
      pbVar10 = param_2;
      pbVar9 = (byte *)*param_3;
      if ((byte *)*param_3 <= param_2) {
        do {
          pbVar10 = pbVar3;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          if (param_3[6] == 0) {
LAB_109ca26b4:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109ca274c:
            *param_3 = (long)(param_3 + 4);
            pbVar6 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar17 = *(undefined8 *)pbVar9;
              param_3[3] = *(long *)(pbVar9 + 8);
              *(undefined8 *)pbVar3 = uVar17;
              param_3[1] = (long)pbVar9;
              goto LAB_109ca274c;
            }
            _memcpy(param_3[1],pbVar3,(long)pbVar9 - (long)pbVar3);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109ca26b4;
            } while (uStack_64 == 0);
            puVar8 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar17 = *puVar8;
              param_3[3] = puVar8[1];
              *(undefined8 *)pbVar3 = uVar17;
              *param_3 = (long)(pbVar3 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar6 = pbVar3 + (int)uStack_64;
            }
            else {
              uVar17 = *puVar8;
              *(undefined8 *)(pbStack_70 + 8) = puVar8[1];
              *(undefined8 *)pbStack_70 = uVar17;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar10 = pbStack_70;
              pbVar6 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            }
          }
          param_2 = pbVar10 + ((int)param_2 - (int)pbVar9);
          pbVar10 = param_2;
          pbVar9 = pbVar6;
        } while (pbVar6 <= param_2);
      }
      puVar15 = puVar14 + 1;
      uVar4 = *puVar14;
      uVar5 = uVar4;
      pbVar9 = pbVar10;
      if (0x7f < uVar4) {
        do {
          pbVar10 = pbVar9 + 1;
          *pbVar9 = (byte)uVar5 | 0x80;
          uVar4 = uVar5 >> 7;
          uVar7 = uVar5 >> 0xe;
          uVar5 = uVar4;
          pbVar9 = pbVar10;
        } while (uVar7 != 0);
      }
      param_2 = pbVar10 + 1;
      *pbVar10 = (byte)uVar4;
      puVar14 = puVar15;
    } while (puVar15 < puVar13 + iVar16);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar11 = *(long *)(uVar5 + 8);
      uVar4 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar11 = uVar5 + 8;
    }
    uVar12 = (uint)uVar4;
    if (*param_3 - (long)param_2 < (long)(int)uVar12) {
      pbVar3 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar3 < (int)uVar12) {
        do {
          iVar16 = (int)pbVar3;
          _memcpy(param_2,lVar11,(long)iVar16);
          uVar12 = (int)uVar4 - iVar16;
          uVar4 = (ulong)uVar12;
          lVar11 = lVar11 + iVar16;
          pbVar3 = (byte *)*param_3;
          pbVar10 = param_2 + iVar16;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar10 = (byte *)((long)plVar2 + (long)((int)pbVar10 - (int)pbVar3));
            pbVar3 = (byte *)*param_3;
            param_2 = pbVar10;
          } while (pbVar3 <= pbVar10);
          pbVar3 = pbVar3 + (0x10 - (long)param_2);
        } while ((int)pbVar3 < (int)uVar12);
      }
      _memcpy(param_2,lVar11,(long)(int)uVar12);
      param_2 = param_2 + (int)uVar12;
    }
    else {
      _memcpy(param_2,lVar11,uVar4 & 0xffffffff);
      param_2 = param_2 + (int)uVar12;
    }
  }
  return param_2;
}



/* Entry: 109ca28fc; end: 109ca29b3;  */

long FUN_109ca28fc(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < 1) {
    lVar2 = 0;
    lVar4 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar2 = 0;
    uVar6 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
    puVar5 = *(undefined8 **)(param_1 + 0x18);
    do {
      lVar2 = (ulong)((int)LZCOUNT(*puVar5) * -9 + 0x280U >> 6) + lVar2;
      uVar6 = uVar6 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar6 != 0);
    *(int *)(param_1 + 0x20) = (int)lVar2;
    if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
    }
  }
  lVar3 = lVar4 + lVar2;
  if (*(int *)(param_1 + 0x24) != 0) {
    lVar3 = lVar4 + lVar2 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar6 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 109ca29b4; end: 109ca29df;  */

void FUN_109ca29b4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109ca29e0; end: 109ca29ff;  */

undefined ** FUN_109ca29e0(void)

{
  return &PTR_DAT_110b374e0;
}



/* Entry: 109ca2a00; end: 109ca2b8b;  */

long * FUN_109ca2a00(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 *puVar6;
  int iVar7;
  long lStack_50;
  ulong uStack_48;
  
  iVar7 = *(int *)(param_1 + 0x10);
  if (iVar7 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar4 + (long)((int)param_2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= param_2);
      iVar7 = *(int *)(param_1 + 0x10);
    }
    *(undefined1 *)param_2 = 0xd;
    *(int *)((long)param_2 + 1) = iVar7;
    param_2 = (long *)((long)param_2 + 5);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lStack_50 = uVar5 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar2) {
      puVar6 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar6 < (int)uVar2) {
        do {
          iVar7 = (int)puVar6;
          _memcpy(param_2,lStack_50,(long)iVar7);
          uVar2 = (int)uStack_48 - iVar7;
          uStack_48 = (ulong)uVar2;
          lStack_50 = lStack_50 + iVar7;
          plVar4 = (long *)*param_3;
          plVar3 = (long *)((long)param_2 + (long)iVar7);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar3 = (long *)((long)plVar1 + (long)((int)plVar3 - (int)plVar4));
            plVar4 = (long *)*param_3;
            param_2 = plVar3;
          } while (plVar4 <= plVar3);
          puVar6 = (undefined1 *)((long)plVar4 + (0x10 - (long)param_2));
        } while ((int)puVar6 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(param_2,lStack_50,(long)(int)(uint)uStack_48);
      param_2 = (long *)((long)param_2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(param_2,lStack_50,uStack_48 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar2);
    }
  }
  return param_2;
}



/* Entry: 109ca2b8c; end: 109ca2bf3;  */

long FUN_109ca2b8c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 109ca2bf4; end: 109ca2c1f;  */

void FUN_109ca2bf4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109ca2c20; end: 109ca2c3b;  */

undefined ** FUN_109ca2c20(void)

{
  return &PTR_DAT_110b37530;
}



/* Entry: 109ca2c3c; end: 109ca2d67;  */

long * FUN_109ca2c3c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long lStack_50;
  ulong uStack_48;
  long lVar7;
  
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar3 + 8);
      uStack_48 = (ulong)*(uint *)(uVar3 + 0x10);
    }
    else {
      lStack_50 = uVar3 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar2) {
      lVar7 = (*param_3 - (long)param_2) + 0x10;
      if ((int)lVar7 < (int)uVar2) {
        do {
          iVar6 = (int)lVar7;
          _memcpy(param_2,lStack_50,(long)iVar6);
          uVar2 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar2;
          lStack_50 = lStack_50 + iVar6;
          plVar4 = (long *)*param_3;
          plVar5 = (long *)((long)param_2 + (long)iVar6);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar1 + (long)((int)plVar5 - (int)plVar4));
            plVar4 = (long *)*param_3;
            param_2 = plVar5;
          } while (plVar4 <= plVar5);
          lVar7 = (long)plVar4 + (0x10 - (long)param_2);
        } while ((int)lVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(param_2,lStack_50,(long)(int)(uint)uStack_48);
      param_2 = (long *)((long)param_2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(param_2,lStack_50,uStack_48 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar2);
    }
  }
  return param_2;
}



/* Entry: 109ca2d68; end: 109ca2daf;  */

long FUN_109ca2d68(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    lVar1 = 0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
  }
  *(int *)(param_1 + 0x10) = (int)lVar1;
  return lVar1;
}



/* Entry: 109ca2db0; end: 109ca2ddb;  */

void FUN_109ca2db0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109ca2ddc; end: 109ca2df7;  */

undefined ** FUN_109ca2ddc(void)

{
  return &PTR_DAT_110b37588;
}



/* Entry: 109ca2df8; end: 109ca2f23;  */

long * FUN_109ca2df8(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long lStack_50;
  ulong uStack_48;
  long lVar7;
  
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar3 + 8);
      uStack_48 = (ulong)*(uint *)(uVar3 + 0x10);
    }
    else {
      lStack_50 = uVar3 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar2) {
      lVar7 = (*param_3 - (long)param_2) + 0x10;
      if ((int)lVar7 < (int)uVar2) {
        do {
          iVar6 = (int)lVar7;
          _memcpy(param_2,lStack_50,(long)iVar6);
          uVar2 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar2;
          lStack_50 = lStack_50 + iVar6;
          plVar4 = (long *)*param_3;
          plVar5 = (long *)((long)param_2 + (long)iVar6);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar1 + (long)((int)plVar5 - (int)plVar4));
            plVar4 = (long *)*param_3;
            param_2 = plVar5;
          } while (plVar4 <= plVar5);
          lVar7 = (long)plVar4 + (0x10 - (long)param_2);
        } while ((int)lVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(param_2,lStack_50,(long)(int)(uint)uStack_48);
      param_2 = (long *)((long)param_2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(param_2,lStack_50,uStack_48 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar2);
    }
  }
  return param_2;
}



/* Entry: 109ca2f24; end: 109ca2f6b;  */

long FUN_109ca2f24(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    lVar1 = 0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
  }
  *(int *)(param_1 + 0x10) = (int)lVar1;
  return lVar1;
}



/* Entry: 109ca2f6c; end: 109ca2f97;  */

void FUN_109ca2f6c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109ca2f98; end: 109ca2fb3;  */

undefined ** FUN_109ca2f98(void)

{
  return &PTR_DAT_110b375d0;
}



/* Entry: 109ca2fb4; end: 109ca30df;  */

long * FUN_109ca2fb4(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long lStack_50;
  ulong uStack_48;
  long lVar7;
  
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar3 + 8);
      uStack_48 = (ulong)*(uint *)(uVar3 + 0x10);
    }
    else {
      lStack_50 = uVar3 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar2) {
      lVar7 = (*param_3 - (long)param_2) + 0x10;
      if ((int)lVar7 < (int)uVar2) {
        do {
          iVar6 = (int)lVar7;
          _memcpy(param_2,lStack_50,(long)iVar6);
          uVar2 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar2;
          lStack_50 = lStack_50 + iVar6;
          plVar4 = (long *)*param_3;
          plVar5 = (long *)((long)param_2 + (long)iVar6);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar1 + (long)((int)plVar5 - (int)plVar4));
            plVar4 = (long *)*param_3;
            param_2 = plVar5;
          } while (plVar4 <= plVar5);
          lVar7 = (long)plVar4 + (0x10 - (long)param_2);
        } while ((int)lVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(param_2,lStack_50,(long)(int)(uint)uStack_48);
      param_2 = (long *)((long)param_2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(param_2,lStack_50,uStack_48 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar2);
    }
  }
  return param_2;
}



/* Entry: 109ca30e0; end: 109ca3127;  */

long FUN_109ca30e0(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    lVar1 = 0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
  }
  *(int *)(param_1 + 0x10) = (int)lVar1;
  return lVar1;
}



/* Entry: 109ca3128; end: 109ca3153;  */

void FUN_109ca3128(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109ca3154; end: 109ca316f;  */

undefined ** FUN_109ca3154(void)

{
  return &PTR_DAT_110b37618;
}



/* Entry: 109ca3170; end: 109ca329b;  */

long * FUN_109ca3170(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long lStack_50;
  ulong uStack_48;
  long lVar7;
  
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar3 + 8);
      uStack_48 = (ulong)*(uint *)(uVar3 + 0x10);
    }
    else {
      lStack_50 = uVar3 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar2) {
      lVar7 = (*param_3 - (long)param_2) + 0x10;
      if ((int)lVar7 < (int)uVar2) {
        do {
          iVar6 = (int)lVar7;
          _memcpy(param_2,lStack_50,(long)iVar6);
          uVar2 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar2;
          lStack_50 = lStack_50 + iVar6;
          plVar4 = (long *)*param_3;
          plVar5 = (long *)((long)param_2 + (long)iVar6);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar1 + (long)((int)plVar5 - (int)plVar4));
            plVar4 = (long *)*param_3;
            param_2 = plVar5;
          } while (plVar4 <= plVar5);
          lVar7 = (long)plVar4 + (0x10 - (long)param_2);
        } while ((int)lVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(param_2,lStack_50,(long)(int)(uint)uStack_48);
      param_2 = (long *)((long)param_2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(param_2,lStack_50,uStack_48 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar2);
    }
  }
  return param_2;
}



/* Entry: 109ca329c; end: 109ca32e3;  */

long FUN_109ca329c(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    lVar1 = 0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
  }
  *(int *)(param_1 + 0x10) = (int)lVar1;
  return lVar1;
}



/* Entry: 109ca32e4; end: 109ca330f;  */

void FUN_109ca32e4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109ca3310; end: 109ca332b;  */

undefined ** FUN_109ca3310(void)

{
  return &PTR_DAT_110b37660;
}



/* Entry: 109ca332c; end: 109ca3457;  */

long * FUN_109ca332c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long lStack_50;
  ulong uStack_48;
  long lVar7;
  
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar3 + 8);
      uStack_48 = (ulong)*(uint *)(uVar3 + 0x10);
    }
    else {
      lStack_50 = uVar3 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar2) {
      lVar7 = (*param_3 - (long)param_2) + 0x10;
      if ((int)lVar7 < (int)uVar2) {
        do {
          iVar6 = (int)lVar7;
          _memcpy(param_2,lStack_50,(long)iVar6);
          uVar2 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar2;
          lStack_50 = lStack_50 + iVar6;
          plVar4 = (long *)*param_3;
          plVar5 = (long *)((long)param_2 + (long)iVar6);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar1 + (long)((int)plVar5 - (int)plVar4));
            plVar4 = (long *)*param_3;
            param_2 = plVar5;
          } while (plVar4 <= plVar5);
          lVar7 = (long)plVar4 + (0x10 - (long)param_2);
        } while ((int)lVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(param_2,lStack_50,(long)(int)(uint)uStack_48);
      param_2 = (long *)((long)param_2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(param_2,lStack_50,uStack_48 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar2);
    }
  }
  return param_2;
}



/* Entry: 109ca3458; end: 109ca349f;  */

long FUN_109ca3458(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    lVar1 = 0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
  }
  *(int *)(param_1 + 0x10) = (int)lVar1;
  return lVar1;
}



/* Entry: 109ca34a0; end: 109ca34cb;  */

void FUN_109ca34a0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}


