/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109ccc390; end: 109ccc39b;  */

undefined ** FUN_109ccc390(void)

{
  return &PTR_DAT_110b3b910;
}



/* Entry: 109ccc39c; end: 109ccc413;  */

void FUN_109ccc39c(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  
  if ((*(ulong *)(param_1 + 0x18) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_109ccbc60(*(undefined8 *)(param_1 + 0x20));
  }
  puVar2 = (ulong *)(param_1 + 8);
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



/* Entry: 109ccc414; end: 109ccc5a7;  */

long * FUN_109ccc414(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  long lStack_48;
  
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar8[1];
    if (lVar3 == 0) goto LAB_109ccc488;
    puVar1 = (undefined8 *)*puVar8;
  }
  else {
    puVar1 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_109ccc488;
  }
  func_0x000107c303d4(puVar1,lVar3,1,&UNK_10f5a6f39);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,1,puVar8,param_2);
  param_2 = plVar2;
LAB_109ccc488:
  plVar2 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar2 = (long *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x18),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar9 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar9 < 0) {
      lStack_48 = *(long *)(uVar4 + 8);
      uVar9 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lStack_48 = uVar4 + 8;
    }
    uVar7 = (uint)uVar9;
    if (*param_3 - (long)plVar2 < (long)(int)uVar7) {
      lVar3 = (*param_3 - (long)plVar2) + 0x10;
      if ((int)lVar3 < (int)uVar7) {
        do {
          iVar10 = (int)lVar3;
          _memcpy(plVar2,lStack_48,(long)iVar10);
          uVar7 = (int)uVar9 - iVar10;
          uVar9 = (ulong)uVar7;
          lStack_48 = lStack_48 + iVar10;
          plVar5 = (long *)*param_3;
          plVar6 = (long *)((long)plVar2 + (long)iVar10);
          do {
            plVar2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar6 = (long *)((long)plVar2 + (long)((int)plVar6 - (int)plVar5));
            plVar5 = (long *)*param_3;
            plVar2 = plVar6;
          } while (plVar5 <= plVar6);
          lVar3 = (long)plVar5 + (0x10 - (long)plVar2);
        } while ((int)lVar3 < (int)uVar7);
      }
      _memcpy(plVar2,lStack_48,(long)(int)uVar7);
      plVar2 = (long *)((long)plVar2 + (long)(int)uVar7);
    }
    else {
      _memcpy(plVar2,lStack_48,uVar9 & 0xffffffff);
      plVar2 = (long *)((long)plVar2 + (long)(int)uVar7);
    }
  }
  return plVar2;
}



/* Entry: 109ccc5a8; end: 109ccc667;  */

long FUN_109ccc5a8(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  lVar3 = lVar2;
  if (lVar2 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar3 = lVar2;
    }
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    FUN_109ccbde8();
    lVar3 = lVar3 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 109ccc668; end: 109ccc73f;  */

void FUN_109ccc668(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar3,uVar4);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x000109ccdad8(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      FUN_109ccbe64();
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



/* Entry: 109ccc740; end: 109ccc783;  */

long FUN_109ccc740(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  return param_1;
}



/* Entry: 109ccc784; end: 109ccc787;  */

long FUN_109ccc784(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  return param_1;
}



/* Entry: 109ccc788; end: 109ccc79b;  */

void FUN_109ccc788(void)

{
  FUN_109ccc740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ccc79c; end: 109ccc84b;  */

undefined ** FUN_109ccc79c(void)

{
  return &PTR_DAT_110b3b950;
}



/* Entry: 109ccc84c; end: 109cccacf;  */

byte * FUN_109ccc84c(long param_1,byte *param_2,byte *param_3)

{
  undefined8 *puVar1;
  byte *pbVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  uint uVar9;
  undefined8 *puVar10;
  int iVar11;
  
  puVar10 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar10 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar10[1];
    if (lVar3 != 0) {
      puVar1 = (undefined8 *)*puVar10;
      goto LAB_109ccc894;
    }
  }
  else {
    puVar1 = puVar10;
    if (*(char *)((long)puVar10 + 0x17) != '\0') {
LAB_109ccc894:
      func_0x000107c303d4(puVar1,lVar3,1,&UNK_10f5a6f5d);
      pbVar5 = param_3;
      func_0x000107c280a0(param_3,1,puVar10,param_2);
      param_2 = pbVar5;
    }
  }
  puVar10 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar10 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar10[1];
    if (lVar3 != 0) {
      puVar1 = (undefined8 *)*puVar10;
      goto LAB_109ccc8e4;
    }
  }
  else {
    puVar1 = puVar10;
    if (*(char *)((long)puVar10 + 0x17) != '\0') {
LAB_109ccc8e4:
      func_0x000107c303d4(puVar1,lVar3,1,&UNK_10f5a6f82);
      pbVar5 = param_3;
      func_0x000107c280a0(param_3,2,puVar10,param_2);
      param_2 = pbVar5;
    }
  }
  uVar9 = *(uint *)(param_1 + 0x28);
  if (uVar9 != 0) {
    pbVar5 = *(byte **)param_3;
    if (pbVar5 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar8 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar8 + ((int)param_2 - (int)pbVar5);
        pbVar5 = *(byte **)param_3;
      } while (pbVar5 <= param_2);
      uVar9 = *(uint *)(param_1 + 0x28);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 0x18;
    uVar6 = (ulong)(int)uVar9;
    uVar4 = uVar6;
    pbVar5 = pbVar8;
    if (0x7f < uVar9) {
      do {
        pbVar8 = pbVar5 + 1;
        *pbVar5 = (byte)uVar4 | 0x80;
        uVar6 = uVar4 >> 7;
        uVar7 = uVar4 >> 0xe;
        uVar4 = uVar6;
        pbVar5 = pbVar8;
      } while (uVar7 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar6;
  }
  puVar10 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar10 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar10[1];
    if (lVar3 == 0) goto LAB_109ccc98c;
    puVar1 = (undefined8 *)*puVar10;
  }
  else {
    puVar1 = puVar10;
    if (*(char *)((long)puVar10 + 0x17) == '\0') goto LAB_109ccc98c;
  }
  func_0x000107c303d4(puVar1,lVar3,1,&UNK_10f5a6fa5);
  pbVar5 = param_3;
  func_0x000107c280a0(param_3,4,puVar10,param_2);
  param_2 = pbVar5;
LAB_109ccc98c:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar3 = *(long *)(uVar4 + 8);
      uVar6 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lVar3 = uVar4 + 8;
    }
    uVar9 = (uint)uVar6;
    if (*(long *)param_3 - (long)param_2 < (long)(int)uVar9) {
      pbVar5 = (byte *)((*(long *)param_3 - (long)param_2) + 0x10);
      if ((int)pbVar5 < (int)uVar9) {
        do {
          iVar11 = (int)pbVar5;
          _memcpy(param_2,lVar3,(long)iVar11);
          uVar9 = (int)uVar6 - iVar11;
          uVar6 = (ulong)uVar9;
          lVar3 = lVar3 + iVar11;
          pbVar5 = *(byte **)param_3;
          pbVar8 = param_2 + iVar11;
          do {
            param_2 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar2 = param_3;
            func_0x000107c303dc();
            pbVar8 = pbVar2 + ((int)pbVar8 - (int)pbVar5);
            pbVar5 = *(byte **)param_3;
            param_2 = pbVar8;
          } while (pbVar5 <= pbVar8);
          pbVar5 = pbVar5 + (0x10 - (long)param_2);
        } while ((int)pbVar5 < (int)uVar9);
      }
      _memcpy(param_2,lVar3,(long)(int)uVar9);
      param_2 = param_2 + (int)uVar9;
    }
    else {
      _memcpy(param_2,lVar3,uVar6 & 0xffffffff);
      param_2 = param_2 + (int)uVar9;
    }
  }
  return param_2;
}



/* Entry: 109cccad0; end: 109cccc03;  */

long FUN_109cccad0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  lVar2 = lVar3;
  if (lVar3 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar2 = lVar3;
    }
    lVar2 = lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
  }
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar1 + 0x17);
  lVar3 = lVar4;
  if (lVar4 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    lVar3 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar3 = lVar4;
    }
    lVar2 = lVar2 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
  }
  uVar1 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar1 + 0x17);
  lVar3 = lVar4;
  if (lVar4 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    lVar3 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar3 = lVar4;
    }
    lVar2 = lVar2 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar2 = lVar2 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar1 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x2c) = (int)lVar2;
  return lVar2;
}



/* Entry: 109cccc04; end: 109cccd4f;  */

void FUN_109cccc04(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x20,uVar1,uVar2);
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
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



/* Entry: 109cccd50; end: 109cccd53;  */

long FUN_109cccd50(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x58);
  func_0x000107c30258(param_1 + 0x60);
  func_0x000107c30258(param_1 + 0x68);
  func_0x000107c30258(param_1 + 0x70);
  FUN_109ccd6c8(param_1 + 0x40);
  FUN_109ccd6fc(param_1 + 0x28);
  FUN_109ccd730(param_1 + 0x10);
  return param_1;
}



/* Entry: 109cccd54; end: 109cccd67;  */

void FUN_109cccd54(void)

{
  func_0x000109ccccec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cccd68; end: 109cccd73;  */

undefined ** FUN_109cccd68(void)

{
  return &PTR_DAT_110b3b990;
}



/* Entry: 109cccd74; end: 109cccea7;  */

void FUN_109cccd74(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  if (0 < *(int *)(param_1 + 0x30)) {
    func_0x0001053936e4(param_1 + 0x28);
  }
  if (0 < *(int *)(param_1 + 0x48)) {
    func_0x0001053936e4(param_1 + 0x40);
  }
  if ((*(ulong *)(param_1 + 0x58) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  if ((*(ulong *)(param_1 + 0x60) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x60) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  if ((*(ulong *)(param_1 + 0x68) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x68) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  if ((*(ulong *)(param_1 + 0x70) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x70) & 0xfffffffffffffffc);
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
  *(undefined8 *)(param_1 + 0x78) = 0;
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



/* Entry: 109cccea8; end: 109ccd52b;  */

byte * FUN_109cccea8(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  uint uVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  
  pbVar9 = param_2;
  if (*(int *)(param_1 + 0x78) != 0) {
    pbVar9 = param_3;
    func_0x000107c282e4(param_3,*(int *)(param_1 + 0x78),param_2);
  }
  puVar11 = (undefined8 *)(*(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar11 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar11[1];
    if (lVar4 != 0) {
      puVar2 = (undefined8 *)*puVar11;
      goto LAB_109cccf08;
    }
  }
  else {
    puVar2 = puVar11;
    if (*(char *)((long)puVar11 + 0x17) != '\0') {
LAB_109cccf08:
      func_0x000107c303d4(puVar2,lVar4,1,&UNK_10f5a6fca);
      pbVar6 = param_3;
      func_0x000107c280a0(param_3,2,puVar11,pbVar9);
      pbVar9 = pbVar6;
    }
  }
  puVar11 = (undefined8 *)(*(ulong *)(param_1 + 0x60) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar11 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar11[1];
    if (lVar4 != 0) {
      puVar2 = (undefined8 *)*puVar11;
      goto LAB_109cccf58;
    }
  }
  else {
    puVar2 = puVar11;
    if (*(char *)((long)puVar11 + 0x17) != '\0') {
LAB_109cccf58:
      func_0x000107c303d4(puVar2,lVar4,1,&UNK_10f5a6ff0);
      pbVar6 = param_3;
      func_0x000107c280a0(param_3,3,puVar11,pbVar9);
      pbVar9 = pbVar6;
    }
  }
  uVar10 = *(uint *)(param_1 + 0x7c);
  if (uVar10 != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= pbVar9) {
      do {
        if (param_3[0x38] == 1) {
          pbVar9 = param_3 + 0x10;
          break;
        }
        pbVar3 = param_3;
        func_0x000107c303dc();
        pbVar9 = pbVar3 + ((int)pbVar9 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= pbVar9);
      uVar10 = *(uint *)(param_1 + 0x7c);
    }
    pbVar6 = pbVar9 + 1;
    *pbVar9 = 0x20;
    uVar7 = (ulong)(int)uVar10;
    uVar5 = uVar7;
    pbVar9 = pbVar6;
    if (0x7f < uVar10) {
      do {
        pbVar6 = pbVar9 + 1;
        *pbVar9 = (byte)uVar5 | 0x80;
        uVar7 = uVar5 >> 7;
        uVar8 = uVar5 >> 0xe;
        uVar5 = uVar7;
        pbVar9 = pbVar6;
      } while (uVar8 != 0);
    }
    pbVar9 = pbVar6 + 1;
    *pbVar6 = (byte)uVar7;
  }
  iVar13 = *(int *)(param_1 + 0x18);
  if (iVar13 != 0) {
    iVar12 = 0;
    pbVar6 = pbVar9;
    do {
      uVar5 = *(ulong *)(param_1 + 0x10);
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar12 * 8 + 7);
      }
      pbVar9 = (byte *)0x5;
      func_0x000107c303cc(5,*puVar1,*(undefined4 *)(*puVar1 + 0x14),pbVar6,param_3);
      iVar12 = iVar12 + 1;
      pbVar6 = pbVar9;
    } while (iVar13 != iVar12);
  }
  iVar13 = *(int *)(param_1 + 0x30);
  if (iVar13 != 0) {
    iVar12 = 0;
    pbVar6 = pbVar9;
    do {
      uVar5 = *(ulong *)(param_1 + 0x28);
      puVar1 = (ulong *)(param_1 + 0x28);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar12 * 8 + 7);
      }
      pbVar9 = (byte *)0x6;
      func_0x000107c303cc(6,*puVar1,*(undefined4 *)(*puVar1 + 0x14),pbVar6,param_3);
      iVar12 = iVar12 + 1;
      pbVar6 = pbVar9;
    } while (iVar13 != iVar12);
  }
  puVar11 = (undefined8 *)(*(ulong *)(param_1 + 0x68) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar11 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar11[1];
    if (lVar4 != 0) {
      puVar2 = (undefined8 *)*puVar11;
      goto LAB_109ccd070;
    }
  }
  else {
    puVar2 = puVar11;
    if (*(char *)((long)puVar11 + 0x17) != '\0') {
LAB_109ccd070:
      func_0x000107c303d4(puVar2,lVar4,1,&UNK_10f5a7014);
      pbVar6 = param_3;
      func_0x000107c280a0(param_3,7,puVar11,pbVar9);
      pbVar9 = pbVar6;
    }
  }
  iVar13 = *(int *)(param_1 + 0x48);
  if (iVar13 != 0) {
    iVar12 = 0;
    pbVar6 = pbVar9;
    do {
      uVar5 = *(ulong *)(param_1 + 0x40);
      puVar1 = (ulong *)(param_1 + 0x40);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar12 * 8 + 7);
      }
      pbVar9 = (byte *)0x8;
      func_0x000107c303cc(8,*puVar1,*(undefined4 *)(*puVar1 + 0x2c),pbVar6,param_3);
      iVar12 = iVar12 + 1;
      pbVar6 = pbVar9;
    } while (iVar13 != iVar12);
  }
  puVar11 = (undefined8 *)(*(ulong *)(param_1 + 0x70) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar11 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar11[1];
    if (lVar4 == 0) goto LAB_109ccd134;
    puVar2 = (undefined8 *)*puVar11;
  }
  else {
    puVar2 = puVar11;
    if (*(char *)((long)puVar11 + 0x17) == '\0') goto LAB_109ccd134;
  }
  func_0x000107c303d4(puVar2,lVar4,1,&UNK_10f5a703a);
  pbVar6 = param_3;
  func_0x000107c280a0(param_3,0x1e,puVar11,pbVar9);
  pbVar9 = pbVar6;
LAB_109ccd134:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar7 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar7 < 0) {
      lVar4 = *(long *)(uVar5 + 8);
      uVar7 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar4 = uVar5 + 8;
    }
    uVar10 = (uint)uVar7;
    if (*(long *)param_3 - (long)pbVar9 < (long)(int)uVar10) {
      pbVar6 = (byte *)((*(long *)param_3 - (long)pbVar9) + 0x10);
      if ((int)pbVar6 < (int)uVar10) {
        do {
          iVar13 = (int)pbVar6;
          _memcpy(pbVar9,lVar4,(long)iVar13);
          uVar10 = (int)uVar7 - iVar13;
          uVar7 = (ulong)uVar10;
          lVar4 = lVar4 + iVar13;
          pbVar6 = *(byte **)param_3;
          pbVar3 = pbVar9 + iVar13;
          do {
            pbVar9 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar9 = param_3;
            func_0x000107c303dc();
            pbVar3 = pbVar9 + ((int)pbVar3 - (int)pbVar6);
            pbVar6 = *(byte **)param_3;
            pbVar9 = pbVar3;
          } while (pbVar6 <= pbVar3);
          pbVar6 = pbVar6 + (0x10 - (long)pbVar9);
        } while ((int)pbVar6 < (int)uVar10);
      }
      _memcpy(pbVar9,lVar4,(long)(int)uVar10);
      pbVar9 = pbVar9 + (int)uVar10;
    }
    else {
      _memcpy(pbVar9,lVar4,uVar7 & 0xffffffff);
      pbVar9 = pbVar9 + (int)uVar10;
    }
  }
  return pbVar9;
}



/* Entry: 109ccd52c; end: 109ccd68f;  */

void FUN_109ccd52c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    func_0x000107c303c4(param_1 + 0x28,param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    func_0x000107c303c4(param_1 + 0x40,param_2 + 0x40);
  }
  uVar1 = *(ulong *)(param_2 + 0x58) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x58,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x60) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x60,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x68) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x68,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x70) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x70,uVar1,uVar2);
  }
  if (*(int *)(param_2 + 0x78) != 0) {
    *(int *)(param_1 + 0x78) = *(int *)(param_2 + 0x78);
  }
  if (*(int *)(param_2 + 0x7c) != 0) {
    *(int *)(param_1 + 0x7c) = *(int *)(param_2 + 0x7c);
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



/* Entry: 109ccd690; end: 109ccd6c7;  */

void FUN_109ccd690(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x30);
  }
  *puVar1 = &PTR_FUN_110b3b608;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[4] = 0;
  return;
}



/* Entry: 109ccd6c8; end: 109ccd6fb;  */

long * FUN_109ccd6c8(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 109ccd6fc; end: 109ccd72f;  */

long * FUN_109ccd6fc(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 109ccd730; end: 109ccd763;  */

long * FUN_109ccd730(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 109ccd764; end: 109ccd9b3;  */

void FUN_109ccd764(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x30);
  }
  *puVar1 = &PTR_FUN_110b3b608;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = param_1;
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[4] = 0;
  return;
}



/* Entry: 109ccd9b4; end: 109ccdb6b;  */

undefined8 * FUN_109ccd9b4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x30);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110b3b608;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  func_0x000109311ab0(puVar1 + 2,param_1,param_2 + 0x10);
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  *(undefined4 *)((long)puVar1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  return puVar1;
}



/* Entry: 109ccdb6c; end: 109ccdbc3;  */

long FUN_109ccdb6c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109ccdbc4; end: 109ccdbdf;  */

undefined ** FUN_109ccdbc4(void)

{
  return &PTR_DAT_110b3bb18;
}



/* Entry: 109ccdbe0; end: 109ccdd0b;  */

long * FUN_109ccdbe0(long param_1,long *param_2,long *param_3)

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



/* Entry: 109ccdd0c; end: 109ccdd53;  */

long FUN_109ccdd0c(long param_1)

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



/* Entry: 109ccdd54; end: 109ccddbb;  */

void FUN_109ccdd54(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x1c) == 0x14) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 == 0) && (lVar2 = *(long *)(param_1 + 0x10), lVar2 != 0)) {
      if ((*(byte *)(lVar2 + 8) & 1) != 0) {
        func_0x0001053936ac();
      }
      __ZdlPv(lVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 109ccddbc; end: 109ccde33;  */

undefined8 * FUN_109ccddbc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b3bad8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  iVar1 = *(int *)(param_3 + 0x1c);
  *(int *)((long)param_1 + 0x1c) = iVar1;
  if (iVar1 == 0x14) {
    FUN_109cce21c(param_2,*(undefined8 *)(param_3 + 0x10));
    param_1[2] = param_2;
  }
  return param_1;
}



/* Entry: 109ccde34; end: 109ccde6f;  */

long FUN_109ccde34(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_109ccdd54(param_1);
  }
  return param_1;
}



/* Entry: 109ccde70; end: 109ccde73;  */

long FUN_109ccde70(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_109ccdd54(param_1);
  }
  return param_1;
}



/* Entry: 109ccde74; end: 109ccde87;  */

void FUN_109ccde74(void)

{
  FUN_109ccde34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ccde88; end: 109ccde93;  */

undefined ** FUN_109ccde88(void)

{
  return &PTR_DAT_110b3bb80;
}



/* Entry: 109ccde94; end: 109ccdecb;  */

void FUN_109ccde94(long param_1)

{
  ulong *puVar1;
  
  FUN_109ccdd54();
  puVar1 = (ulong *)(param_1 + 8);
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



/* Entry: 109ccdecc; end: 109cce01b;  */

long * FUN_109ccdecc(long param_1,long *param_2,long *param_3)

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
  if (*(int *)(param_1 + 0x1c) == 0x14) {
    plVar1 = (long *)0x14;
    func_0x000107c303cc(0x14,*(long *)(param_1 + 0x10),
                        *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x10),param_2,param_3);
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



/* Entry: 109cce01c; end: 109cce0a3;  */

long FUN_109cce01c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x1c) == 0x14) {
    uVar1 = *(ulong *)(*(long *)(param_1 + 0x10) + 8);
    if ((uVar1 & 1) == 0) {
      lVar2 = 0;
    }
    else {
      uVar1 = uVar1 & 0xfffffffffffffffe;
      lVar2 = (long)*(char *)(uVar1 + 0x1f);
      if (lVar2 < 0) {
        lVar2 = *(long *)(uVar1 + 0x10);
      }
    }
    *(int *)(*(long *)(param_1 + 0x10) + 0x10) = (int)lVar2;
    lVar2 = lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 2;
  }
  else {
    lVar2 = 0;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar1 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x18) = (int)lVar2;
  return lVar2;
}



/* Entry: 109cce0a4; end: 109cce17b;  */

/* WARNING: Possible PIC construction at 0x000109cce104: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109cce108) */

void FUN_109cce0a4(long param_1,long param_2)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  ulong *unaff_x19;
  ulong *puVar4;
  long unaff_x20;
  ulong uVar5;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar4 = (ulong *)(param_1 + 8);
  uVar5 = *puVar4;
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  iVar2 = *(int *)(param_2 + 0x1c);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x1c) == iVar2) {
      if ((iVar2 == 0x14) && ((*(ulong *)(*(long *)(param_2 + 0x10) + 8) & 1) != 0)) {
        unaff_x30 = 0x109cce108;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        puVar3 = (ulong *)(*(long *)(param_1 + 0x10) + 8);
        unaff_x19 = puVar4;
        unaff_x20 = param_2;
        unaff_x29 = puVar1;
        goto code_r0x00010b4d197c;
      }
    }
    else {
      if (*(int *)(param_1 + 0x1c) != 0) {
        FUN_109ccdd54(param_1);
      }
      *(int *)(param_1 + 0x1c) = iVar2;
      if (iVar2 == 0x14) {
        FUN_109cce21c(uVar5,*(undefined8 *)(param_2 + 0x10));
        *(ulong *)(param_1 + 0x10) = uVar5;
      }
    }
  }
  puVar3 = puVar4;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
code_r0x00010b4d197c:
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if ((*puVar3 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 109cce17c; end: 109cce18b;  */

void FUN_109cce17c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x18);
  }
  *puVar1 = &PTR_FUN_110b3ba88;
  puVar1[1] = param_2;
  *(undefined4 *)(puVar1 + 2) = 0;
  return;
}



/* Entry: 109cce18c; end: 109cce21b;  */

void FUN_109cce18c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x18);
  }
  *puVar1 = &PTR_FUN_110b3ba88;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 2) = 0;
  return;
}



/* Entry: 109cce21c; end: 109cce2b3;  */

undefined8 * FUN_109cce21c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x18);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110b3ba88;
  *(undefined4 *)(puVar1 + 2) = 0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  return puVar1;
}



/* Entry: 109cce2b4; end: 109cce30b;  */

void FUN_109cce2b4(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x34) == 200) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 == 0) && (*(long *)(param_1 + 0x28) != 0)) {
      func_0x000109c680c8();
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}



/* Entry: 109cce30c; end: 109cce3cb;  */

undefined8 * FUN_109cce30c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b3bc20;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  puVar3 = (ulong *)(param_3 + 0x10);
  puVar2 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_2);
    puVar2 = puVar3;
  }
  param_1[2] = puVar2;
  puVar3 = (ulong *)(param_3 + 0x18);
  puVar2 = (ulong *)*puVar3;
  if ((*puVar3 & 3) != 0) {
    func_0x000107c30244(puVar3,param_2);
    puVar2 = puVar3;
  }
  param_1[3] = puVar2;
  *(undefined4 *)(param_1 + 6) = 0;
  iVar1 = *(int *)(param_3 + 0x34);
  *(int *)((long)param_1 + 0x34) = iVar1;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 0x20);
  if (iVar1 == 200) {
    func_0x000109c6bab4(param_2,*(undefined8 *)(param_3 + 0x28));
    param_1[5] = param_2;
  }
  return param_1;
}



/* Entry: 109cce3cc; end: 109cce417;  */

long FUN_109cce3cc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_109cce2b4(param_1);
  }
  return param_1;
}



/* Entry: 109cce418; end: 109cce41b;  */

long FUN_109cce418(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_109cce2b4(param_1);
  }
  return param_1;
}



/* Entry: 109cce41c; end: 109cce42f;  */

void FUN_109cce41c(void)

{
  FUN_109cce3cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cce430; end: 109cce43b;  */

undefined ** FUN_109cce430(void)

{
  return &PTR_DAT_110b3bc60;
}



/* Entry: 109cce43c; end: 109cce4db;  */

void FUN_109cce43c(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  
  if ((*(ulong *)(param_1 + 0x10) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  if ((*(ulong *)(param_1 + 0x18) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_109cce2b4(param_1);
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



/* Entry: 109cce4dc; end: 109cce70f;  */

byte * FUN_109cce4dc(long param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int iVar12;
  
  uVar9 = *(uint *)(param_1 + 0x20);
  if (uVar9 != 0) {
    pbVar6 = *(byte **)param_3;
    if (pbVar6 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar7 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar7 + ((int)param_2 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= param_2);
      uVar9 = *(uint *)(param_1 + 0x20);
    }
    pbVar7 = param_2 + 1;
    *param_2 = 8;
    pbVar6 = pbVar7;
    uVar5 = uVar9;
    if (0x7f < uVar9) {
      do {
        pbVar7 = pbVar6 + 1;
        *pbVar6 = (byte)uVar5 | 0x80;
        uVar9 = uVar5 >> 7;
        uVar1 = uVar5 >> 0xe;
        pbVar6 = pbVar7;
        uVar5 = uVar9;
      } while (uVar1 != 0);
    }
    param_2 = pbVar7 + 1;
    *pbVar7 = (byte)uVar9;
  }
  puVar10 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar10 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar10[1];
    if (lVar3 == 0) goto LAB_109cce578;
    puVar2 = (undefined8 *)*puVar10;
  }
  else {
    puVar2 = puVar10;
    if (*(char *)((long)puVar10 + 0x17) == '\0') goto LAB_109cce578;
  }
  func_0x000107c303d4(puVar2,lVar3,1,&UNK_10f5a7063);
  pbVar6 = param_3;
  func_0x000107c280a0(param_3,10,puVar10,param_2);
  param_2 = pbVar6;
LAB_109cce578:
  uVar4 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar4 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar4 + 8);
  }
  pbVar6 = param_2;
  if (lVar3 != 0) {
    pbVar6 = param_3;
    func_0x000107c280a0(param_3,100,uVar4,param_2);
  }
  pbVar7 = pbVar6;
  if (*(int *)(param_1 + 0x34) == 200) {
    pbVar7 = (byte *)0xc8;
    func_0x000107c303cc(200,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x28),pbVar6,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar11 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar11 < 0) {
      lVar3 = *(long *)(uVar4 + 8);
      uVar11 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lVar3 = uVar4 + 8;
    }
    uVar9 = (uint)uVar11;
    if (*(long *)param_3 - (long)pbVar7 < (long)(int)uVar9) {
      pbVar6 = (byte *)((*(long *)param_3 - (long)pbVar7) + 0x10);
      if ((int)pbVar6 < (int)uVar9) {
        do {
          iVar12 = (int)pbVar6;
          _memcpy(pbVar7,lVar3,(long)iVar12);
          uVar9 = (int)uVar11 - iVar12;
          uVar11 = (ulong)uVar9;
          lVar3 = lVar3 + iVar12;
          pbVar6 = *(byte **)param_3;
          pbVar8 = pbVar7 + iVar12;
          do {
            pbVar7 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar7 = param_3;
            func_0x000107c303dc();
            pbVar8 = pbVar7 + ((int)pbVar8 - (int)pbVar6);
            pbVar6 = *(byte **)param_3;
            pbVar7 = pbVar8;
          } while (pbVar6 <= pbVar8);
          pbVar6 = pbVar6 + (0x10 - (long)pbVar7);
        } while ((int)pbVar6 < (int)uVar9);
      }
      _memcpy(pbVar7,lVar3,(long)(int)uVar9);
      pbVar7 = pbVar7 + (int)uVar9;
    }
    else {
      _memcpy(pbVar7,lVar3,uVar11 & 0xffffffff);
      pbVar7 = pbVar7 + (int)uVar9;
    }
  }
  return pbVar7;
}



/* Entry: 109cce710; end: 109cce843;  */

long FUN_109cce710(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  lVar2 = lVar3;
  if (lVar3 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar2 = lVar3;
    }
    lVar2 = lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
  }
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar1 + 0x17);
  lVar3 = lVar4;
  if (lVar4 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    lVar3 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar3 = lVar4;
    }
    lVar2 = lVar2 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 2;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar2 = lVar2 + (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x20)) * -9 + 0x1a0U >> 6);
  }
  if (*(int *)(param_1 + 0x34) == 200) {
    lVar3 = *(long *)(param_1 + 0x28);
    func_0x000109c68360();
    lVar2 = lVar2 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar1 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x30) = (int)lVar2;
  return lVar2;
}



/* Entry: 109cce844; end: 109cce847;  */

void FUN_109cce844(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar3,uVar4);
  }
  uVar4 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar4,uVar3);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  iVar1 = *(int *)(param_2 + 0x34);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x34) == iVar1) {
      if (iVar1 == 200) {
        func_0x000109c683fc(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x28));
      }
    }
    else {
      if (*(int *)(param_1 + 0x34) != 0) {
        FUN_109cce2b4(param_1);
      }
      *(int *)(param_1 + 0x34) = iVar1;
      if (iVar1 == 200) {
        func_0x000109c6bab4(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar2;
      }
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



/* Entry: 109cce848; end: 109cce97f;  */

void FUN_109cce848(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar3,uVar4);
  }
  uVar4 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar4,uVar3);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  iVar1 = *(int *)(param_2 + 0x34);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x34) == iVar1) {
      if (iVar1 == 200) {
        func_0x000109c683fc(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x28));
      }
    }
    else {
      if (*(int *)(param_1 + 0x34) != 0) {
        FUN_109cce2b4(param_1);
      }
      *(int *)(param_1 + 0x34) = iVar1;
      if (iVar1 == 200) {
        func_0x000109c6bab4(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar2;
      }
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



/* Entry: 109cce980; end: 109cce987;  */

void FUN_109cce980(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x38);
  }
  *puVar1 = &PTR_FUN_110b3bc20;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 109cce988; end: 109ccea37;  */

void FUN_109cce988(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x38);
  }
  *puVar1 = &PTR_FUN_110b3bc20;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 109ccea38; end: 109ccea57;  */

undefined ** FUN_109ccea38(void)

{
  return &PTR_DAT_110b3be60;
}



/* Entry: 109ccea58; end: 109ccec67;  */

byte * FUN_109ccea58(long param_1,byte *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *pbVar7;
  int iVar8;
  long lVar9;
  ulong uStack_48;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  if (uVar3 != 0) {
    pbVar5 = (byte *)*param_3;
    if (pbVar5 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar5));
        pbVar5 = (byte *)*param_3;
      } while (pbVar5 <= param_2);
      uVar3 = *(ulong *)(param_1 + 0x10);
    }
    pbVar7 = param_2 + 1;
    *param_2 = 8;
    uVar4 = uVar3;
    pbVar5 = pbVar7;
    if (0x7f < uVar3) {
      do {
        pbVar7 = pbVar5 + 1;
        *pbVar5 = (byte)uVar4 | 0x80;
        uVar3 = uVar4 >> 7;
        uVar6 = uVar4 >> 0xe;
        uVar4 = uVar3;
        pbVar5 = pbVar7;
      } while (uVar6 != 0);
    }
    param_2 = pbVar7 + 1;
    *pbVar7 = (byte)uVar3;
  }
  lVar9 = *(long *)(param_1 + 0x18);
  if (lVar9 != 0) {
    pbVar5 = (byte *)*param_3;
    if (pbVar5 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar1 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar1 + (long)((int)param_2 - (int)pbVar5));
        pbVar5 = (byte *)*param_3;
      } while (pbVar5 <= param_2);
      lVar9 = *(long *)(param_1 + 0x18);
    }
    *param_2 = 0x11;
    *(long *)(param_2 + 1) = lVar9;
    param_2 = param_2 + 9;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar9 = *(long *)(uVar3 + 8);
      uStack_48 = (ulong)*(uint *)(uVar3 + 0x10);
    }
    else {
      lVar9 = uVar3 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar2) {
      pbVar5 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar5 < (int)uVar2) {
        do {
          iVar8 = (int)pbVar5;
          _memcpy(param_2,lVar9,(long)iVar8);
          uVar2 = (int)uStack_48 - iVar8;
          uStack_48 = (ulong)uVar2;
          lVar9 = lVar9 + iVar8;
          pbVar5 = (byte *)*param_3;
          pbVar7 = param_2 + iVar8;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            pbVar7 = (byte *)((long)plVar1 + (long)((int)pbVar7 - (int)pbVar5));
            pbVar5 = (byte *)*param_3;
            param_2 = pbVar7;
          } while (pbVar5 <= pbVar7);
          pbVar5 = pbVar5 + (0x10 - (long)param_2);
        } while ((int)pbVar5 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(param_2,lVar9,(long)(int)(uint)uStack_48);
      param_2 = param_2 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(param_2,lVar9,uStack_48 & 0xffffffff);
      param_2 = param_2 + (int)uVar2;
    }
  }
  return param_2;
}



/* Entry: 109ccec68; end: 109ccecf7;  */

ulong FUN_109ccec68(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = uVar1 + 9;
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



/* Entry: 109ccecf8; end: 109cced37;  */

long FUN_109ccecf8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 109cced38; end: 109cced3b;  */

long FUN_109cced38(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 109cced3c; end: 109cced4f;  */

void FUN_109cced3c(void)

{
  FUN_109ccecf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cced50; end: 109cced5b;  */

undefined ** FUN_109cced50(void)

{
  return &PTR_DAT_110b3bec8;
}



/* Entry: 109cced5c; end: 109ccedaf;  */

void FUN_109cced5c(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
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



/* Entry: 109ccedb0; end: 109ccf4cb;  */

byte * FUN_109ccedb0(long param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  ulong uStack_48;
  
  uVar5 = *(ulong *)(param_1 + 0x28);
  if (uVar5 != 0) {
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
      uVar5 = *(ulong *)(param_1 + 0x28);
    }
    pbVar9 = param_2 + 1;
    *param_2 = 8;
    uVar7 = uVar5;
    pbVar6 = pbVar9;
    if (0x7f < uVar5) {
      do {
        pbVar9 = pbVar6 + 1;
        *pbVar6 = (byte)uVar7 | 0x80;
        uVar5 = uVar7 >> 7;
        uVar8 = uVar7 >> 0xe;
        uVar7 = uVar5;
        pbVar6 = pbVar9;
      } while (uVar8 != 0);
    }
    param_2 = pbVar9 + 1;
    *pbVar9 = (byte)uVar5;
  }
  uVar5 = *(ulong *)(param_1 + 0x30);
  if (uVar5 != 0) {
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
      uVar5 = *(ulong *)(param_1 + 0x30);
    }
    pbVar9 = param_2 + 1;
    *param_2 = 0x10;
    uVar7 = uVar5;
    pbVar6 = pbVar9;
    if (0x7f < uVar5) {
      do {
        pbVar9 = pbVar6 + 1;
        *pbVar6 = (byte)uVar7 | 0x80;
        uVar5 = uVar7 >> 7;
        uVar8 = uVar7 >> 0xe;
        uVar7 = uVar5;
        pbVar6 = pbVar9;
      } while (uVar8 != 0);
    }
    param_2 = pbVar9 + 1;
    *pbVar9 = (byte)uVar5;
  }
  uVar4 = *(uint *)(param_1 + 0x38);
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
      uVar4 = *(uint *)(param_1 + 0x38);
    }
    pbVar9 = param_2 + 1;
    *param_2 = 0x18;
    uVar7 = (ulong)(int)uVar4;
    uVar5 = uVar7;
    pbVar6 = pbVar9;
    if (0x7f < uVar4) {
      do {
        pbVar9 = pbVar6 + 1;
        *pbVar6 = (byte)uVar5 | 0x80;
        uVar7 = uVar5 >> 7;
        uVar8 = uVar5 >> 0xe;
        uVar5 = uVar7;
        pbVar6 = pbVar9;
      } while (uVar8 != 0);
    }
    param_2 = pbVar9 + 1;
    *pbVar9 = (byte)uVar7;
  }
  uVar5 = *(ulong *)(param_1 + 0x40);
  if (uVar5 != 0) {
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
      uVar5 = *(ulong *)(param_1 + 0x40);
    }
    pbVar9 = param_2 + 1;
    *param_2 = 0x50;
    uVar7 = uVar5;
    pbVar6 = pbVar9;
    if (0x7f < uVar5) {
      do {
        pbVar9 = pbVar6 + 1;
        *pbVar6 = (byte)uVar7 | 0x80;
        uVar5 = uVar7 >> 7;
        uVar8 = uVar7 >> 0xe;
        uVar7 = uVar5;
        pbVar6 = pbVar9;
      } while (uVar8 != 0);
    }
    param_2 = pbVar9 + 1;
    *pbVar9 = (byte)uVar5;
  }
  lVar12 = *(long *)(param_1 + 0x48);
  if (lVar12 != 0) {
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
      lVar12 = *(long *)(param_1 + 0x48);
    }
    *param_2 = 0x59;
    *(long *)(param_2 + 1) = lVar12;
    param_2 = param_2 + 9;
  }
  uVar5 = *(ulong *)(param_1 + 0x50);
  if (uVar5 != 0) {
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
      uVar5 = *(ulong *)(param_1 + 0x50);
    }
    pbVar9 = param_2 + 1;
    *param_2 = 0x60;
    uVar7 = uVar5;
    pbVar6 = pbVar9;
    if (0x7f < uVar5) {
      do {
        pbVar9 = pbVar6 + 1;
        *pbVar6 = (byte)uVar7 | 0x80;
        uVar5 = uVar7 >> 7;
        uVar8 = uVar7 >> 0xe;
        uVar7 = uVar5;
        pbVar6 = pbVar9;
      } while (uVar8 != 0);
    }
    param_2 = pbVar9 + 1;
    *pbVar9 = (byte)uVar5;
  }
  uVar5 = *(ulong *)(param_1 + 0x58);
  if (uVar5 != 0) {
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
      uVar5 = *(ulong *)(param_1 + 0x58);
    }
    pbVar9 = param_2 + 1;
    *param_2 = 0x68;
    uVar7 = uVar5;
    pbVar6 = pbVar9;
    if (0x7f < uVar5) {
      do {
        pbVar9 = pbVar6 + 1;
        *pbVar6 = (byte)uVar7 | 0x80;
        uVar5 = uVar7 >> 7;
        uVar8 = uVar7 >> 0xe;
        uVar7 = uVar5;
        pbVar6 = pbVar9;
      } while (uVar8 != 0);
    }
    param_2 = pbVar9 + 1;
    *pbVar9 = (byte)uVar5;
  }
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    pbVar6 = (byte *)*param_3;
    if (param_2 < pbVar6) {
      bVar3 = 1;
    }
    else {
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
      bVar3 = *(byte *)(param_1 + 0x3c);
    }
    *param_2 = 0x70;
    param_2[1] = bVar3;
    param_2 = param_2 + 2;
  }
  iVar11 = *(int *)(param_1 + 0x18);
  if (iVar11 != 0) {
    iVar10 = 0;
    pbVar6 = param_2;
    do {
      uVar5 = *(ulong *)(param_1 + 0x10);
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar5 & 1) != 0) {
        puVar1 = (ulong *)(uVar5 + (long)iVar10 * 8 + 7);
      }
      param_2 = (byte *)0x14;
      func_0x000107c303cc(0x14,*puVar1,*(undefined4 *)(*puVar1 + 0x20),pbVar6,param_3);
      iVar10 = iVar10 + 1;
      pbVar6 = param_2;
    } while (iVar11 != iVar10);
  }
  lVar12 = *(long *)(param_1 + 0x60);
  if (lVar12 != 0) {
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
      lVar12 = *(long *)(param_1 + 0x60);
    }
    param_2[0] = 0xf1;
    param_2[1] = 1;
    *(long *)(param_2 + 2) = lVar12;
    param_2 = param_2 + 10;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar12 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar12 = uVar5 + 8;
    }
    uVar4 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      pbVar6 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar6 < (int)uVar4) {
        do {
          iVar11 = (int)pbVar6;
          _memcpy(param_2,lVar12,(long)iVar11);
          uVar4 = (int)uStack_48 - iVar11;
          uStack_48 = (ulong)uVar4;
          lVar12 = lVar12 + iVar11;
          pbVar6 = (byte *)*param_3;
          pbVar9 = param_2 + iVar11;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar9 = (byte *)((long)plVar2 + (long)((int)pbVar9 - (int)pbVar6));
            pbVar6 = (byte *)*param_3;
            param_2 = pbVar9;
          } while (pbVar6 <= pbVar9);
          pbVar6 = pbVar6 + (0x10 - (long)param_2);
        } while ((int)pbVar6 < (int)uVar4);
      }
      uStack_48._0_4_ = uVar4;
      _memcpy(param_2,lVar12,(long)(int)(uint)uStack_48);
      param_2 = param_2 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(param_2,lVar12,uStack_48 & 0xffffffff);
      param_2 = param_2 + (int)uVar4;
    }
  }
  return param_2;
}



/* Entry: 109ccf4cc; end: 109ccf5e7;  */

void FUN_109ccf4cc(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
  }
  if (*(long *)(param_2 + 0x30) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_2 + 0x38);
  }
  if (*(char *)(param_2 + 0x3c) == '\x01') {
    *(undefined1 *)(param_1 + 0x3c) = 1;
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x40);
  }
  if (*(long *)(param_2 + 0x48) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_2 + 0x48);
  }
  if (*(long *)(param_2 + 0x50) != 0) {
    *(long *)(param_1 + 0x50) = *(long *)(param_2 + 0x50);
  }
  if (*(long *)(param_2 + 0x58) != 0) {
    *(long *)(param_1 + 0x58) = *(long *)(param_2 + 0x58);
  }
  if (*(long *)(param_2 + 0x60) != 0) {
    *(long *)(param_1 + 0x60) = *(long *)(param_2 + 0x60);
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



/* Entry: 109ccf5e8; end: 109ccf5eb;  */

long FUN_109ccf5e8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (0 < *(int *)(param_1 + 0x2c)) {
    if (*(long *)(*(long *)(param_1 + 0x30) + -8) == 0) {
      __ZdlPv();
    }
  }
  FUN_109cd06b8(param_1 + 0x10);
  return param_1;
}



/* Entry: 109ccf5ec; end: 109ccf5ff;  */

void FUN_109ccf5ec(void)

{
  func_0x000109ccf598();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ccf600; end: 109ccf60b;  */

undefined ** FUN_109ccf600(void)

{
  return &PTR_DAT_110b3bf20;
}



/* Entry: 109ccf60c; end: 109ccf65b;  */

void FUN_109ccf60c(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
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



/* Entry: 109ccf65c; end: 109ccfa33;  */

byte * FUN_109ccf65c(long param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  ulong uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  undefined8 uVar18;
  byte *pbStack_70;
  uint uStack_64;
  
  iVar16 = *(int *)(param_1 + 0x18);
  if (iVar16 != 0) {
    iVar14 = 0;
    pbVar7 = param_2;
    do {
      uVar3 = *(ulong *)(param_1 + 0x10);
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar3 & 1) != 0) {
        puVar1 = (ulong *)(uVar3 + (long)iVar14 * 8 + 7);
      }
      param_2 = (byte *)0x1;
      func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x68),pbVar7,param_3);
      iVar14 = iVar14 + 1;
      pbVar7 = param_2;
    } while (iVar16 != iVar14);
  }
  uVar3 = *(ulong *)(param_1 + 0x38);
  if (uVar3 != 0) {
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
      uVar3 = *(ulong *)(param_1 + 0x38);
    }
    pbVar10 = param_2 + 1;
    *param_2 = 0x10;
    uVar13 = uVar3;
    pbVar7 = pbVar10;
    if (0x7f < uVar3) {
      do {
        pbVar10 = pbVar7 + 1;
        *pbVar7 = (byte)uVar13 | 0x80;
        uVar3 = uVar13 >> 7;
        uVar17 = uVar13 >> 0xe;
        uVar13 = uVar3;
        pbVar7 = pbVar10;
      } while (uVar17 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar3;
  }
  iVar16 = *(int *)(param_1 + 0x28);
  if (0 < iVar16) {
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
      iVar16 = *(int *)(param_1 + 0x28);
    }
    uVar12 = iVar16 * 8;
    uVar13 = (ulong)uVar12;
    pbVar7 = param_2 + 1;
    *param_2 = 0x1a;
    uVar3 = uVar13;
    uVar6 = uVar12;
    if (0x7f < uVar12) {
      do {
        param_2 = pbVar7;
        uVar5 = (uint)uVar3;
        pbVar7 = param_2 + 1;
        *param_2 = (byte)uVar3 | 0x80;
        uVar3 = uVar3 >> 7;
        uVar6 = (uint)uVar3;
      } while (uVar5 >> 0xe != 0);
    }
    param_2 = param_2 + 2;
    *pbVar7 = (byte)uVar6;
    lVar15 = *(long *)(param_1 + 0x30);
    uVar17 = (ulong)(int)uVar12;
    uVar3 = uVar13;
    if ((*param_3 - (long)param_2 < (long)(int)uVar12) &&
       (pbVar7 = (byte *)((*param_3 - (long)param_2) + 0x10), uVar3 = uVar17,
       (int)pbVar7 < (int)uVar12)) {
      pbVar10 = (byte *)(param_3 + 2);
      do {
        iVar16 = (int)pbVar7;
        _memcpy(param_2,lVar15,(long)iVar16);
        uVar12 = (int)uVar13 - iVar16;
        uVar13 = (ulong)uVar12;
        lVar15 = lVar15 + iVar16;
        pbVar11 = param_2 + iVar16;
        pbVar4 = (byte *)*param_3;
        do {
          param_2 = pbVar10;
          pbVar7 = pbVar4;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar8 = pbVar10;
          if (param_3[6] == 0) {
LAB_109ccf918:
            *(undefined1 *)(param_3 + 7) = 1;
LAB_109ccf8f8:
            *param_3 = (long)(param_3 + 4);
            pbVar7 = (byte *)(param_3 + 4);
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar4;
              param_3[3] = *(long *)(pbVar4 + 8);
              *(undefined8 *)pbVar10 = uVar18;
              param_3[1] = (long)pbVar4;
              goto LAB_109ccf8f8;
            }
            _memcpy(param_3[1],pbVar10,(long)pbVar4 - (long)pbVar10);
            do {
              plVar2 = (long *)param_3[6];
              (**(code **)(*plVar2 + 0x10))(plVar2,&pbStack_70,&uStack_64);
              if (((ulong)plVar2 & 1) == 0) goto LAB_109ccf918;
            } while (uStack_64 == 0);
            puVar9 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar9;
              param_3[3] = puVar9[1];
              *(undefined8 *)pbVar10 = uVar18;
              *param_3 = (long)(pbVar10 + (int)uStack_64);
              param_3[1] = (long)pbStack_70;
              pbVar7 = pbVar10 + (int)uStack_64;
            }
            else {
              uVar18 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar18;
              *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
              param_3[1] = 0;
              pbVar7 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar8 = pbStack_70;
            }
          }
          pbVar11 = pbVar8 + ((int)pbVar11 - (int)pbVar4);
          pbVar4 = pbVar7;
          param_2 = pbVar11;
        } while (pbVar7 <= pbVar11);
        pbVar7 = pbVar7 + (0x10 - (long)param_2);
      } while ((int)pbVar7 < (int)uVar12);
      uVar17 = (ulong)(int)uVar12;
      uVar3 = uVar17;
    }
    _memcpy(param_2,lVar15,uVar3);
    param_2 = param_2 + uVar17;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar13 = (ulong)*(char *)(uVar3 + 0x1f);
    if ((long)uVar13 < 0) {
      lVar15 = *(long *)(uVar3 + 8);
      uVar13 = (ulong)*(uint *)(uVar3 + 0x10);
    }
    else {
      lVar15 = uVar3 + 8;
    }
    uVar12 = (uint)uVar13;
    if (*param_3 - (long)param_2 < (long)(int)uVar12) {
      pbVar7 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar7 < (int)uVar12) {
        do {
          iVar16 = (int)pbVar7;
          _memcpy(param_2,lVar15,(long)iVar16);
          uVar12 = (int)uVar13 - iVar16;
          uVar13 = (ulong)uVar12;
          lVar15 = lVar15 + iVar16;
          pbVar7 = (byte *)*param_3;
          pbVar10 = param_2 + iVar16;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar10 = (byte *)((long)plVar2 + (long)((int)pbVar10 - (int)pbVar7));
            pbVar7 = (byte *)*param_3;
            param_2 = pbVar10;
          } while (pbVar7 <= pbVar10);
          pbVar7 = pbVar7 + (0x10 - (long)param_2);
        } while ((int)pbVar7 < (int)uVar12);
      }
      _memcpy(param_2,lVar15,(long)(int)uVar12);
      param_2 = param_2 + (int)uVar12;
    }
    else {
      _memcpy(param_2,lVar15,uVar13 & 0xffffffff);
      param_2 = param_2 + (int)uVar12;
    }
  }
  return param_2;
}



/* Entry: 109ccfa34; end: 109ccfb27;  */

void FUN_109ccfa34(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  lVar5 = (long)*(int *)(param_1 + 0x18);
  puVar6 = (ulong *)(param_1 + 0x10);
  if ((uVar3 & 1) != 0) {
    puVar6 = (ulong *)(uVar3 + 7);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar4 = 0;
  }
  else {
    lVar7 = lVar5 << 3;
    do {
      uVar3 = *puVar6;
      func_0x000109ccf358();
      lVar5 = uVar3 + lVar5 + (ulong)((int)LZCOUNT((int)uVar3) * -9 + 0x160U >> 6);
      iVar4 = (int)lVar5;
      lVar7 = lVar7 + -8;
      puVar6 = puVar6 + 1;
    } while (lVar7 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  iVar2 = 0;
  if (uVar1 != 0) {
    iVar2 = ((int)LZCOUNT(-((ulong)(uVar1 >> 0x1c) & 1) & 0xffffffff00000000 |
                          ((ulong)uVar1 & 0x1fffffff) << 3) * -9 + 0x280U >> 6) + 1;
  }
  iVar2 = uVar1 * 8 + iVar4 + iVar2;
  if (*(long *)(param_1 + 0x38) != 0) {
    iVar2 = ((int)LZCOUNT(*(long *)(param_1 + 0x38)) * -9 + 0x2c0U >> 6) + iVar2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar3 + 0x10);
    }
    iVar2 = (int)lVar5 + iVar2;
  }
  *(int *)(param_1 + 0x40) = iVar2;
  return;
}



/* Entry: 109ccfb28; end: 109ccfb2b;  */

void FUN_109ccfb28(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  iVar1 = *(int *)(param_2 + 0x28);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x28);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x2c) < iVar3) {
      func_0x000109340710(param_1 + 0x28);
      iVar2 = *(int *)(param_1 + 0x28);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x28) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined8 **)(param_2 + 0x30);
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0x30) + (long)iVar2 * 8);
      do {
        *puVar5 = *puVar4;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_2 + 0x38);
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



/* Entry: 109ccfb2c; end: 109ccfbf3;  */

void FUN_109ccfb2c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  iVar1 = *(int *)(param_2 + 0x28);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x28);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x2c) < iVar3) {
      func_0x000109340710(param_1 + 0x28);
      iVar2 = *(int *)(param_1 + 0x28);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x28) = iVar3;
    if (0 < iVar1) {
      uVar6 = iVar1 + 1;
      puVar4 = *(undefined8 **)(param_2 + 0x30);
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0x30) + (long)iVar2 * 8);
      do {
        *puVar5 = *puVar4;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (1 < uVar6);
    }
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_2 + 0x38);
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



/* Entry: 109ccfbf4; end: 109ccfc7f;  */

void FUN_109ccfbf4(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x30) == 0x65) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (*(long *)(param_1 + 0x28) == 0)) goto LAB_109ccfc50;
    func_0x000109c684b8();
  }
  else {
    if (*(int *)(param_1 + 0x30) != 100) goto LAB_109ccfc50;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (*(long *)(param_1 + 0x28) == 0)) goto LAB_109ccfc50;
    func_0x000109c680c8();
  }
  __ZdlPv();
LAB_109ccfc50:
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 109ccfc80; end: 109ccfd3b;  */

undefined8 * FUN_109ccfc80(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b3be20;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  iVar3 = *(int *)(param_3 + 0x30);
  *(int *)(param_1 + 6) = iVar3;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    FUN_109cd088c(param_2,*(undefined8 *)(param_3 + 0x18));
    iVar3 = *(int *)(param_1 + 6);
  }
  param_1[3] = uVar2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 0x20);
  if (iVar3 == 0x65) {
    func_0x000109c6baf8(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  else {
    if (iVar3 != 100) {
      return param_1;
    }
    func_0x000109c6bab4(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = param_2;
  return param_1;
}



/* Entry: 109ccfd3c; end: 109ccfd87;  */

long FUN_109ccfd3c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000109ccf598();
    __ZdlPv();
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_109ccfbf4(param_1);
  }
  return param_1;
}



/* Entry: 109ccfd88; end: 109ccfd8b;  */

long FUN_109ccfd88(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000109ccf598();
    __ZdlPv();
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_109ccfbf4(param_1);
  }
  return param_1;
}



/* Entry: 109ccfd8c; end: 109ccfd9f;  */

void FUN_109ccfd8c(void)

{
  FUN_109ccfd3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ccfda0; end: 109ccfdab;  */

undefined ** FUN_109ccfda0(void)

{
  return &PTR_DAT_110b3bf70;
}



/* Entry: 109ccfdac; end: 109ccfdff;  */

void FUN_109ccfdac(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_109ccf60c(*(undefined8 *)(param_1 + 0x18));
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_109ccfbf4(param_1);
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



/* Entry: 109ccfe00; end: 109cd000b;  */

byte * FUN_109ccfe00(long param_1,byte *param_2,long *param_3)

{
  byte *pbVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  int iVar10;
  ulong uStack_48;
  
  pbVar1 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    pbVar1 = (byte *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x40),param_2,param_3);
  }
  uVar3 = *(uint *)(param_1 + 0x20);
  if (uVar3 != 0) {
    pbVar5 = (byte *)*param_3;
    if (pbVar5 <= pbVar1) {
      do {
        if ((char)param_3[7] == '\x01') {
          pbVar1 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        pbVar1 = (byte *)((long)plVar2 + (long)((int)pbVar1 - (int)pbVar5));
        pbVar5 = (byte *)*param_3;
      } while (pbVar5 <= pbVar1);
      uVar3 = *(uint *)(param_1 + 0x20);
    }
    pbVar5 = pbVar1 + 1;
    *pbVar1 = 0x10;
    uVar6 = (ulong)(int)uVar3;
    uVar7 = uVar6;
    pbVar1 = pbVar5;
    if (0x7f < uVar3) {
      do {
        pbVar5 = pbVar1 + 1;
        *pbVar1 = (byte)uVar7 | 0x80;
        uVar6 = uVar7 >> 7;
        uVar8 = uVar7 >> 0xe;
        uVar7 = uVar6;
        pbVar1 = pbVar5;
      } while (uVar8 != 0);
    }
    pbVar1 = pbVar5 + 1;
    *pbVar5 = (byte)uVar6;
  }
  uVar3 = *(uint *)(param_1 + 0x30);
  pbVar5 = (byte *)(ulong)uVar3;
  if (uVar3 == 100) {
    lVar4 = 0x28;
  }
  else {
    if (uVar3 != 0x65) goto LAB_109ccfeb0;
    lVar4 = 0x24;
  }
  func_0x000107c303cc(pbVar5,*(long *)(param_1 + 0x28),
                      *(undefined4 *)(*(long *)(param_1 + 0x28) + lVar4),pbVar1,param_3);
  pbVar1 = pbVar5;
LAB_109ccfeb0:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar4 = *(long *)(uVar7 + 8);
      uStack_48 = (ulong)*(uint *)(uVar7 + 0x10);
    }
    else {
      lVar4 = uVar7 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)pbVar1 < (long)(int)uVar3) {
      pbVar5 = (byte *)((*param_3 - (long)pbVar1) + 0x10);
      if ((int)pbVar5 < (int)uVar3) {
        do {
          iVar10 = (int)pbVar5;
          _memcpy(pbVar1,lVar4,(long)iVar10);
          uVar3 = (int)uStack_48 - iVar10;
          uStack_48 = (ulong)uVar3;
          lVar4 = lVar4 + iVar10;
          pbVar5 = (byte *)*param_3;
          pbVar9 = pbVar1 + iVar10;
          do {
            pbVar1 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar9 = (byte *)((long)plVar2 + (long)((int)pbVar9 - (int)pbVar5));
            pbVar5 = (byte *)*param_3;
            pbVar1 = pbVar9;
          } while (pbVar5 <= pbVar9);
          pbVar5 = pbVar5 + (0x10 - (long)pbVar1);
        } while ((int)pbVar5 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(pbVar1,lVar4,(long)(int)(uint)uStack_48);
      pbVar1 = pbVar1 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(pbVar1,lVar4,uStack_48 & 0xffffffff);
      pbVar1 = pbVar1 + (int)uVar3;
    }
  }
  return pbVar1;
}



/* Entry: 109cd000c; end: 109cd00ef;  */

long FUN_109cd000c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x18);
    FUN_109ccfa34();
    lVar2 = lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar2 = lVar2 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x30) == 0x65) {
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x000109c68808();
  }
  else {
    if (*(int *)(param_1 + 0x30) != 100) goto LAB_109cd00bc;
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x000109c68360();
  }
  lVar2 = lVar2 + lVar1 + (ulong)((int)LZCOUNT((int)lVar1) * -9 + 0x160U >> 6) + 2;
LAB_109cd00bc:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar3 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(param_1 + 0x14) = (int)lVar2;
  return lVar2;
}



/* Entry: 109cd00f0; end: 109cd00f3;  */

void FUN_109cd00f0(long param_1,long param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)(param_1 + 8);
  if ((uVar6 & 1) != 0) {
    uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
  }
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      uVar5 = uVar6;
      FUN_109cd088c(uVar6,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar5;
    }
    else {
      FUN_109ccfb2c();
    }
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2;
  iVar3 = *(int *)(param_2 + 0x30);
  if (iVar3 == 0) goto LAB_109cd0208;
  iVar4 = *(int *)(param_1 + 0x30);
  if (iVar4 != iVar3) {
    if (iVar4 != 0) {
      FUN_109ccfbf4(param_1);
    }
    *(int *)(param_1 + 0x30) = iVar3;
  }
  if (iVar3 == 0x65) {
    if (iVar4 == 0x65) {
      ppuVar1 = *(undefined ***)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x30) != 0x65) {
        ppuVar1 = &PTR_PTR_1132ee5c8;
      }
      func_0x000109c688b0(*(undefined8 *)(param_1 + 0x28),ppuVar1);
      goto LAB_109cd0208;
    }
    func_0x000109c6baf8(uVar6,*(undefined8 *)(param_2 + 0x28));
  }
  else {
    if (iVar3 != 100) goto LAB_109cd0208;
    if (iVar4 == 100) {
      ppuVar1 = *(undefined ***)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x30) != 100) {
        ppuVar1 = &PTR_PTR_1132ee598;
      }
      func_0x000109c683fc(*(undefined8 *)(param_1 + 0x28),ppuVar1);
      goto LAB_109cd0208;
    }
    func_0x000109c6bab4(uVar6,*(undefined8 *)(param_2 + 0x28));
  }
  *(ulong *)(param_1 + 0x28) = uVar6;
LAB_109cd0208:
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



/* Entry: 109cd00f4; end: 109cd024f;  */

void FUN_109cd00f4(long param_1,long param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)(param_1 + 8);
  if ((uVar6 & 1) != 0) {
    uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
  }
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      uVar5 = uVar6;
      FUN_109cd088c(uVar6,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar5;
    }
    else {
      FUN_109ccfb2c();
    }
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2;
  iVar3 = *(int *)(param_2 + 0x30);
  if (iVar3 == 0) goto LAB_109cd0208;
  iVar4 = *(int *)(param_1 + 0x30);
  if (iVar4 != iVar3) {
    if (iVar4 != 0) {
      FUN_109ccfbf4(param_1);
    }
    *(int *)(param_1 + 0x30) = iVar3;
  }
  if (iVar3 == 0x65) {
    if (iVar4 == 0x65) {
      ppuVar1 = *(undefined ***)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x30) != 0x65) {
        ppuVar1 = &PTR_PTR_1132ee5c8;
      }
      func_0x000109c688b0(*(undefined8 *)(param_1 + 0x28),ppuVar1);
      goto LAB_109cd0208;
    }
    func_0x000109c6baf8(uVar6,*(undefined8 *)(param_2 + 0x28));
  }
  else {
    if (iVar3 != 100) goto LAB_109cd0208;
    if (iVar4 == 100) {
      ppuVar1 = *(undefined ***)(param_2 + 0x28);
      if (*(int *)(param_2 + 0x30) != 100) {
        ppuVar1 = &PTR_PTR_1132ee598;
      }
      func_0x000109c683fc(*(undefined8 *)(param_1 + 0x28),ppuVar1);
      goto LAB_109cd0208;
    }
    func_0x000109c6bab4(uVar6,*(undefined8 *)(param_2 + 0x28));
  }
  *(ulong *)(param_1 + 0x28) = uVar6;
LAB_109cd0208:
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



/* Entry: 109cd0250; end: 109cd02cf;  */

undefined8 * FUN_109cd0250(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b3bdd0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_109cd088c(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 0x20);
  return param_1;
}



/* Entry: 109cd02d0; end: 109cd030b;  */

long FUN_109cd02d0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000109ccf598();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109cd030c; end: 109cd030f;  */

long FUN_109cd030c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000109ccf598();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109cd0310; end: 109cd0323;  */

void FUN_109cd0310(void)

{
  FUN_109cd02d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109cd0324; end: 109cd032f;  */

undefined ** FUN_109cd0324(void)

{
  return &PTR_DAT_110b3bfc0;
}



/* Entry: 109cd0330; end: 109cd037b;  */

void FUN_109cd0330(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_109ccf60c(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x20) = 0;
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



/* Entry: 109cd037c; end: 109cd054f;  */

byte * FUN_109cd037c(long param_1,byte *param_2,long *param_3)

{
  byte *pbVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  int iVar10;
  ulong uStack_48;
  
  pbVar1 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    pbVar1 = (byte *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x40),param_2,param_3);
  }
  uVar4 = *(uint *)(param_1 + 0x20);
  if (uVar4 != 0) {
    pbVar5 = (byte *)*param_3;
    if (pbVar5 <= pbVar1) {
      do {
        if ((char)param_3[7] == '\x01') {
          pbVar1 = (byte *)(param_3 + 2);
          break;
        }
        plVar2 = param_3;
        func_0x000107c303dc();
        pbVar1 = (byte *)((long)plVar2 + (long)((int)pbVar1 - (int)pbVar5));
        pbVar5 = (byte *)*param_3;
      } while (pbVar5 <= pbVar1);
      uVar4 = *(uint *)(param_1 + 0x20);
    }
    pbVar5 = pbVar1 + 1;
    *pbVar1 = 0x10;
    uVar6 = (ulong)(int)uVar4;
    uVar7 = uVar6;
    pbVar1 = pbVar5;
    if (0x7f < uVar4) {
      do {
        pbVar5 = pbVar1 + 1;
        *pbVar1 = (byte)uVar7 | 0x80;
        uVar6 = uVar7 >> 7;
        uVar8 = uVar7 >> 0xe;
        uVar7 = uVar6;
        pbVar1 = pbVar5;
      } while (uVar8 != 0);
    }
    pbVar1 = pbVar5 + 1;
    *pbVar5 = (byte)uVar6;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar3 = *(long *)(uVar7 + 8);
      uStack_48 = (ulong)*(uint *)(uVar7 + 0x10);
    }
    else {
      lVar3 = uVar7 + 8;
    }
    uVar4 = (uint)uStack_48;
    if (*param_3 - (long)pbVar1 < (long)(int)uVar4) {
      pbVar5 = (byte *)((*param_3 - (long)pbVar1) + 0x10);
      if ((int)pbVar5 < (int)uVar4) {
        do {
          iVar10 = (int)pbVar5;
          _memcpy(pbVar1,lVar3,(long)iVar10);
          uVar4 = (int)uStack_48 - iVar10;
          uStack_48 = (ulong)uVar4;
          lVar3 = lVar3 + iVar10;
          pbVar5 = (byte *)*param_3;
          pbVar9 = pbVar1 + iVar10;
          do {
            pbVar1 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            pbVar9 = (byte *)((long)plVar2 + (long)((int)pbVar9 - (int)pbVar5));
            pbVar5 = (byte *)*param_3;
            pbVar1 = pbVar9;
          } while (pbVar5 <= pbVar9);
          pbVar5 = pbVar5 + (0x10 - (long)pbVar1);
        } while ((int)pbVar5 < (int)uVar4);
      }
      uStack_48._0_4_ = uVar4;
      _memcpy(pbVar1,lVar3,(long)(int)(uint)uStack_48);
      pbVar1 = pbVar1 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(pbVar1,lVar3,uStack_48 & 0xffffffff);
      pbVar1 = pbVar1 + (int)uVar4;
    }
  }
  return pbVar1;
}



/* Entry: 109cd0550; end: 109cd05e7;  */

void FUN_109cd0550(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    FUN_109ccfa34();
    iVar1 = iVar1 + ((int)LZCOUNT(iVar1) * -9 + 0x160U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



/* Entry: 109cd05e8; end: 109cd05eb;  */

void FUN_109cd05e8(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      FUN_109cd088c(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_109ccfb2c(*(long *)(param_1 + 0x18));
    }
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
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



/* Entry: 109cd05ec; end: 109cd068f;  */

void FUN_109cd05ec(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      FUN_109cd088c(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_109ccfb2c(*(long *)(param_1 + 0x18));
    }
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
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



/* Entry: 109cd0690; end: 109cd06b7;  */

void FUN_109cd0690(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x28);
  }
  *puVar1 = &PTR_DAT_110b3bce0;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 109cd06b8; end: 109cd06eb;  */

long * FUN_109cd06b8(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 109cd06ec; end: 109cd088b;  */

void FUN_109cd06ec(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_DAT_110b3bce0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 109cd088c; end: 109cd094b;  */

undefined8 * FUN_109cd088c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x48);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110b3bd80;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(puVar1 + 2,param_2 + 0x10);
  }
  func_0x00010934069c(puVar1 + 5,param_1,param_2 + 0x28);
  *(undefined4 *)(puVar1 + 8) = 0;
  puVar1[7] = *(undefined8 *)(param_2 + 0x38);
  return puVar1;
}



/* Entry: 109cd094c; end: 109cd09a3;  */

long FUN_109cd094c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109cd09a4; end: 109cd09c3;  */

undefined ** FUN_109cd09a4(void)

{
  return &PTR_DAT_110b3c178;
}



/* Entry: 109cd09c4; end: 109cd0b73;  */

byte * FUN_109cd09c4(long param_1,byte *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  int iVar9;
  ulong uStack_48;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if (uVar3 != 0) {
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
      uVar3 = *(uint *)(param_1 + 0x10);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 8;
    uVar5 = (ulong)(int)uVar3;
    uVar6 = uVar5;
    pbVar4 = pbVar8;
    if (0x7f < uVar3) {
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
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar2 = *(long *)(uVar6 + 8);
      uStack_48 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar2 = uVar6 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      pbVar4 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar4 < (int)uVar3) {
        do {
          iVar9 = (int)pbVar4;
          _memcpy(param_2,lVar2,(long)iVar9);
          uVar3 = (int)uStack_48 - iVar9;
          uStack_48 = (ulong)uVar3;
          lVar2 = lVar2 + iVar9;
          pbVar4 = (byte *)*param_3;
          pbVar8 = param_2 + iVar9;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            pbVar8 = (byte *)((long)plVar1 + (long)((int)pbVar8 - (int)pbVar4));
            pbVar4 = (byte *)*param_3;
            param_2 = pbVar8;
          } while (pbVar4 <= pbVar8);
          pbVar4 = pbVar4 + (0x10 - (long)param_2);
        } while ((int)pbVar4 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(param_2,lVar2,(long)(int)(uint)uStack_48);
      param_2 = param_2 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(param_2,lVar2,uStack_48 & 0xffffffff);
      param_2 = param_2 + (int)uVar3;
    }
  }
  return param_2;
}


