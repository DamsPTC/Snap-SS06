/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109c63804; end: 109c6384f;  */

void FUN_109c63804(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
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



/* Entry: 109c63850; end: 109c63b0f;  */

byte * FUN_109c63850(long param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  ulong uStack_48;
  
  uVar5 = *(uint *)(param_1 + 0x28);
  if (uVar5 != 0) {
    pbVar7 = (byte *)*param_3;
    if (pbVar7 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          break;
        }
        plVar3 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar3 + (long)((int)param_2 - (int)pbVar7));
        pbVar7 = (byte *)*param_3;
      } while (pbVar7 <= param_2);
      uVar5 = *(uint *)(param_1 + 0x28);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 8;
    pbVar7 = pbVar8;
    uVar4 = uVar5;
    if (0x7f < uVar5) {
      do {
        pbVar8 = pbVar7 + 1;
        *pbVar7 = (byte)uVar4 | 0x80;
        uVar5 = uVar4 >> 7;
        uVar2 = uVar4 >> 0xe;
        pbVar7 = pbVar8;
        uVar4 = uVar5;
      } while (uVar2 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar5;
  }
  iVar11 = *(int *)(param_1 + 0x18);
  if (iVar11 != 0) {
    iVar10 = 0;
    pbVar7 = param_2;
    do {
      uVar6 = *(ulong *)(param_1 + 0x10);
      puVar1 = (ulong *)(param_1 + 0x10);
      if ((uVar6 & 1) != 0) {
        puVar1 = (ulong *)(uVar6 + (long)iVar10 * 8 + 7);
      }
      param_2 = (byte *)0x2;
      func_0x000107c303cc(2,*puVar1,*(undefined4 *)(*puVar1 + 0x14),pbVar7,param_3);
      iVar10 = iVar10 + 1;
      pbVar7 = param_2;
    } while (iVar11 != iVar10);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar9 = *(long *)(uVar6 + 8);
      uStack_48 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar9 = uVar6 + 8;
    }
    uVar5 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar5) {
      pbVar7 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar7 < (int)uVar5) {
        do {
          iVar11 = (int)pbVar7;
          _memcpy(param_2,lVar9,(long)iVar11);
          uVar5 = (int)uStack_48 - iVar11;
          uStack_48 = (ulong)uVar5;
          lVar9 = lVar9 + iVar11;
          pbVar7 = (byte *)*param_3;
          pbVar8 = param_2 + iVar11;
          do {
            param_2 = (byte *)(param_3 + 2);
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar3 = param_3;
            func_0x000107c303dc();
            pbVar8 = (byte *)((long)plVar3 + (long)((int)pbVar8 - (int)pbVar7));
            pbVar7 = (byte *)*param_3;
            param_2 = pbVar8;
          } while (pbVar7 <= pbVar8);
          pbVar7 = pbVar7 + (0x10 - (long)param_2);
        } while ((int)pbVar7 < (int)uVar5);
      }
      uStack_48._0_4_ = uVar5;
      _memcpy(param_2,lVar9,(long)(int)(uint)uStack_48);
      param_2 = param_2 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(param_2,lVar9,uStack_48 & 0xffffffff);
      param_2 = param_2 + (int)uVar5;
    }
  }
  return param_2;
}



/* Entry: 109c63b10; end: 109c63b6f;  */

void FUN_109c63b10(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 109c63b70; end: 109c63d2b;  */

undefined8 * FUN_109c63b70(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b2eaf8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = param_2;
  if (*(int *)(param_3 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 3,param_3 + 0x18);
  }
  puVar2 = (ulong *)(param_3 + 0x30);
  puVar1 = (ulong *)*puVar2;
  if ((*puVar2 & 3) != 0) {
    func_0x000107c30244(puVar2,param_2);
    puVar1 = puVar2;
  }
  param_1[6] = puVar1;
  puVar2 = (ulong *)(param_3 + 0x38);
  puVar1 = (ulong *)*puVar2;
  if ((*puVar2 & 3) != 0) {
    func_0x000107c30244(puVar2,param_2);
    puVar1 = puVar2;
  }
  param_1[7] = puVar1;
  puVar2 = (ulong *)(param_3 + 0x40);
  puVar1 = (ulong *)*puVar2;
  if ((*puVar2 & 3) != 0) {
    func_0x000107c30244(puVar2,param_2);
    puVar1 = puVar2;
  }
  param_1[8] = puVar1;
  puVar2 = (ulong *)(param_3 + 0x48);
  puVar1 = (ulong *)*puVar2;
  if ((*puVar2 & 3) != 0) {
    func_0x000107c30244(puVar2,param_2);
    puVar1 = puVar2;
  }
  param_1[9] = puVar1;
  puVar2 = (ulong *)(param_3 + 0x50);
  puVar1 = (ulong *)*puVar2;
  if ((*puVar2 & 3) != 0) {
    func_0x000107c30244(puVar2,param_2);
    puVar1 = puVar2;
  }
  param_1[10] = puVar1;
  puVar2 = (ulong *)(param_3 + 0x58);
  puVar1 = (ulong *)*puVar2;
  if ((*puVar2 & 3) != 0) {
    func_0x000107c30244(puVar2,param_2);
    puVar1 = puVar2;
  }
  param_1[0xb] = puVar1;
  puVar2 = (ulong *)(param_3 + 0x60);
  puVar1 = (ulong *)*puVar2;
  if ((*puVar2 & 3) != 0) {
    func_0x000107c30244(puVar2,param_2);
    puVar1 = puVar2;
  }
  param_1[0xc] = puVar1;
  puVar2 = (ulong *)(param_3 + 0x68);
  puVar1 = (ulong *)*puVar2;
  if ((*puVar2 & 3) != 0) {
    func_0x000107c30244(puVar2,param_2);
    puVar1 = puVar2;
  }
  param_1[0xd] = puVar1;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_109c64bcc(param_2,*(undefined8 *)(param_3 + 0x70));
  }
  param_1[0xe] = param_2;
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_3 + 0x78);
  return param_1;
}



/* Entry: 109c63d2c; end: 109c63d63;  */

long FUN_109c63d2c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_109c63d64(param_1);
  return param_1;
}



/* Entry: 109c63d64; end: 109c63de3;  */

long * FUN_109c63d64(long param_1)

{
  long *plVar1;
  long lVar2;
  
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c30258(param_1 + 0x40);
  func_0x000107c30258(param_1 + 0x48);
  func_0x000107c30258(param_1 + 0x50);
  func_0x000107c30258(param_1 + 0x58);
  func_0x000107c30258(param_1 + 0x60);
  func_0x000107c30258(param_1 + 0x68);
  lVar2 = *(long *)(param_1 + 0x70);
  if (lVar2 != 0) {
    if ((*(byte *)(lVar2 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar2);
  }
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 109c63de4; end: 109c63de7;  */

long FUN_109c63de4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_109c63d64(param_1);
  return param_1;
}



/* Entry: 109c63de8; end: 109c63dfb;  */

void FUN_109c63de8(void)

{
  FUN_109c63d2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c63dfc; end: 109c63e07;  */

undefined ** FUN_109c63dfc(void)

{
  return &PTR_DAT_110b2ec50;
}



/* Entry: 109c63e08; end: 109c63fe7;  */

void FUN_109c63e08(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  if ((*(ulong *)(param_1 + 0x30) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  if ((*(ulong *)(param_1 + 0x38) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  if ((*(ulong *)(param_1 + 0x40) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
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
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x000109c63188(*(undefined8 *)(param_1 + 0x70));
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x78) = 0;
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



/* Entry: 109c63fe8; end: 109c647bf;  */

byte * FUN_109c63fe8(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  
  uVar10 = *(uint *)(param_1 + 0x78);
  if (uVar10 != 0) {
    pbVar7 = *(byte **)param_3;
    if (pbVar7 <= param_2) {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar8 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar8 + ((int)param_2 - (int)pbVar7);
        pbVar7 = *(byte **)param_3;
      } while (pbVar7 <= param_2);
      uVar10 = *(uint *)(param_1 + 0x78);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 8;
    pbVar7 = pbVar8;
    uVar5 = uVar10;
    if (0x7f < uVar10) {
      do {
        pbVar8 = pbVar7 + 1;
        *pbVar7 = (byte)uVar5 | 0x80;
        uVar10 = uVar5 >> 7;
        uVar2 = uVar5 >> 0xe;
        pbVar7 = pbVar8;
        uVar5 = uVar10;
      } while (uVar2 != 0);
    }
    param_2 = pbVar8 + 1;
    *pbVar8 = (byte)uVar10;
  }
  pbVar7 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    pbVar7 = (byte *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x70),
                        *(undefined4 *)(*(long *)(param_1 + 0x70) + 0x20),param_2,param_3);
  }
  iVar14 = *(int *)(param_1 + 0x20);
  if (iVar14 != 0) {
    iVar13 = 0;
    pbVar8 = pbVar7;
    do {
      uVar6 = *(ulong *)(param_1 + 0x18);
      puVar1 = (ulong *)(param_1 + 0x18);
      if ((uVar6 & 1) != 0) {
        puVar1 = (ulong *)(uVar6 + (long)iVar13 * 8 + 7);
      }
      pbVar7 = (byte *)0x3;
      func_0x000107c303cc(3,*puVar1,*(undefined4 *)(*puVar1 + 0x2c),pbVar8,param_3);
      iVar13 = iVar13 + 1;
      pbVar8 = pbVar7;
    } while (iVar14 != iVar13);
  }
  puVar11 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar11 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar11[1];
    if (lVar4 != 0) {
      puVar3 = (undefined8 *)*puVar11;
      goto LAB_109c640cc;
    }
  }
  else {
    puVar3 = puVar11;
    if (*(char *)((long)puVar11 + 0x17) != '\0') {
LAB_109c640cc:
      func_0x000107c303d4(puVar3,lVar4,1,&UNK_10f5a6119);
      pbVar8 = param_3;
      func_0x000107c280a0(param_3,10,puVar11,pbVar7);
      pbVar7 = pbVar8;
    }
  }
  puVar11 = (undefined8 *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar11 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar11[1];
    if (lVar4 != 0) {
      puVar3 = (undefined8 *)*puVar11;
      goto LAB_109c6411c;
    }
  }
  else {
    puVar3 = puVar11;
    if (*(char *)((long)puVar11 + 0x17) != '\0') {
LAB_109c6411c:
      func_0x000107c303d4(puVar3,lVar4,1,&UNK_10f5a6161);
      pbVar8 = param_3;
      func_0x000107c280a0(param_3,0xb,puVar11,pbVar7);
      pbVar7 = pbVar8;
    }
  }
  puVar11 = (undefined8 *)(*(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar11 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar11[1];
    if (lVar4 != 0) {
      puVar3 = (undefined8 *)*puVar11;
      goto LAB_109c6416c;
    }
  }
  else {
    puVar3 = puVar11;
    if (*(char *)((long)puVar11 + 0x17) != '\0') {
LAB_109c6416c:
      func_0x000107c303d4(puVar3,lVar4,1,&UNK_10f5a61a7);
      pbVar8 = param_3;
      func_0x000107c280a0(param_3,0xc,puVar11,pbVar7);
      pbVar7 = pbVar8;
    }
  }
  puVar11 = (undefined8 *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar11 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar11[1];
    if (lVar4 != 0) {
      puVar3 = (undefined8 *)*puVar11;
      goto LAB_109c641bc;
    }
  }
  else {
    puVar3 = puVar11;
    if (*(char *)((long)puVar11 + 0x17) != '\0') {
LAB_109c641bc:
      func_0x000107c303d4(puVar3,lVar4,1,&UNK_10f5a61f2);
      pbVar8 = param_3;
      func_0x000107c280a0(param_3,0xd,puVar11,pbVar7);
      pbVar7 = pbVar8;
    }
  }
  puVar11 = (undefined8 *)(*(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar11 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar11[1];
    if (lVar4 != 0) {
      puVar3 = (undefined8 *)*puVar11;
      goto LAB_109c6420c;
    }
  }
  else {
    puVar3 = puVar11;
    if (*(char *)((long)puVar11 + 0x17) != '\0') {
LAB_109c6420c:
      func_0x000107c303d4(puVar3,lVar4,1,&UNK_10f5a6242);
      pbVar8 = param_3;
      func_0x000107c280a0(param_3,0x14,puVar11,pbVar7);
      pbVar7 = pbVar8;
    }
  }
  puVar11 = (undefined8 *)(*(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar11 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar11[1];
    if (lVar4 != 0) {
      puVar3 = (undefined8 *)*puVar11;
      goto LAB_109c6425c;
    }
  }
  else {
    puVar3 = puVar11;
    if (*(char *)((long)puVar11 + 0x17) != '\0') {
LAB_109c6425c:
      func_0x000107c303d4(puVar3,lVar4,1,&UNK_10f5a6285);
      pbVar8 = param_3;
      func_0x000107c280a0(param_3,0x15,puVar11,pbVar7);
      pbVar7 = pbVar8;
    }
  }
  puVar11 = (undefined8 *)(*(ulong *)(param_1 + 0x60) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar11 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar11[1];
    if (lVar4 != 0) {
      puVar3 = (undefined8 *)*puVar11;
      goto LAB_109c642ac;
    }
  }
  else {
    puVar3 = puVar11;
    if (*(char *)((long)puVar11 + 0x17) != '\0') {
LAB_109c642ac:
      func_0x000107c303d4(puVar3,lVar4,1,&UNK_10f5a62cc);
      pbVar8 = param_3;
      func_0x000107c280a0(param_3,0x16,puVar11,pbVar7);
      pbVar7 = pbVar8;
    }
  }
  puVar11 = (undefined8 *)(*(ulong *)(param_1 + 0x68) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar11 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar11[1];
    if (lVar4 == 0) goto LAB_109c64324;
    puVar3 = (undefined8 *)*puVar11;
  }
  else {
    puVar3 = puVar11;
    if (*(char *)((long)puVar11 + 0x17) == '\0') goto LAB_109c64324;
  }
  func_0x000107c303d4(puVar3,lVar4,1,&UNK_10f5a6321);
  pbVar8 = param_3;
  func_0x000107c280a0(param_3,0x17,puVar11,pbVar7);
  pbVar7 = pbVar8;
LAB_109c64324:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar12 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar12 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      uVar12 = (ulong)*(uint *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    uVar10 = (uint)uVar12;
    if (*(long *)param_3 - (long)pbVar7 < (long)(int)uVar10) {
      pbVar8 = (byte *)((*(long *)param_3 - (long)pbVar7) + 0x10);
      if ((int)pbVar8 < (int)uVar10) {
        do {
          iVar14 = (int)pbVar8;
          _memcpy(pbVar7,lVar4,(long)iVar14);
          uVar10 = (int)uVar12 - iVar14;
          uVar12 = (ulong)uVar10;
          lVar4 = lVar4 + iVar14;
          pbVar8 = *(byte **)param_3;
          pbVar9 = pbVar7 + iVar14;
          do {
            pbVar7 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar7 = param_3;
            func_0x000107c303dc();
            pbVar9 = pbVar7 + ((int)pbVar9 - (int)pbVar8);
            pbVar8 = *(byte **)param_3;
            pbVar7 = pbVar9;
          } while (pbVar8 <= pbVar9);
          pbVar8 = pbVar8 + (0x10 - (long)pbVar7);
        } while ((int)pbVar8 < (int)uVar10);
      }
      _memcpy(pbVar7,lVar4,(long)(int)uVar10);
      pbVar7 = pbVar7 + (int)uVar10;
    }
    else {
      _memcpy(pbVar7,lVar4,uVar12 & 0xffffffff);
      pbVar7 = pbVar7 + (int)uVar10;
    }
  }
  return pbVar7;
}



/* Entry: 109c647c0; end: 109c647c3;  */

void FUN_109c647c0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  uVar2 = *(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x30,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x38) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x38,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x40) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x40,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x48) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x48,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x50) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x50,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x58) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x58,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x60) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x60,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x68) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x68,uVar2,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x70) == 0) {
      FUN_109c64bcc(uVar5,*(undefined8 *)(param_2 + 0x70));
      *(ulong *)(param_1 + 0x70) = uVar5;
    }
    else {
      FUN_109c630e8();
    }
  }
  if (*(int *)(param_2 + 0x78) != 0) {
    *(int *)(param_1 + 0x78) = *(int *)(param_2 + 0x78);
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



/* Entry: 109c647c4; end: 109c64a27;  */

void FUN_109c647c4(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    func_0x000107c303c4(param_1 + 0x18,param_2 + 0x18);
  }
  uVar2 = *(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x30,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x38) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x38,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x40) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x40,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x48) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x48,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x50) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x50,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x58) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x58,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x60) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x60,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x68) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x68,uVar2,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x70) == 0) {
      FUN_109c64bcc(uVar5,*(undefined8 *)(param_2 + 0x70));
      *(ulong *)(param_1 + 0x70) = uVar5;
    }
    else {
      FUN_109c630e8();
    }
  }
  if (*(int *)(param_2 + 0x78) != 0) {
    *(int *)(param_1 + 0x78) = *(int *)(param_2 + 0x78);
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



/* Entry: 109c64a28; end: 109c64a47;  */

void FUN_109c64a28(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110b2ea08;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 109c64a48; end: 109c64a7b;  */

long * FUN_109c64a48(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 109c64a7c; end: 109c64bcb;  */

void FUN_109c64a7c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110b2ea08;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 109c64bcc; end: 109c64c57;  */

undefined8 * FUN_109c64bcc(undefined8 *param_1)

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
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110b2ea08;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_109c630e8();
  return puVar1;
}



/* Entry: 109c64c58; end: 109c64ce3;  */

void FUN_109c64c58(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x24) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (*(long *)(param_1 + 0x10) == 0)) goto LAB_109c64cb4;
    FUN_109c66e98();
  }
  else {
    if (*(int *)(param_1 + 0x24) != 1) goto LAB_109c64cb4;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if ((uVar1 != 0) || (*(long *)(param_1 + 0x10) == 0)) goto LAB_109c64cb4;
    FUN_109c66790();
  }
  __ZdlPv();
LAB_109c64cb4:
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 109c64ce4; end: 109c64db7;  */

undefined8 * FUN_109c64ce4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong *puVar3;
  int iVar4;
  ulong *puVar5;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b2ed10;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  iVar1 = *(int *)(param_3 + 0x24);
  *(int *)((long)param_1 + 0x24) = iVar1;
  iVar4 = *(int *)(param_3 + 0x28);
  *(int *)(param_1 + 5) = iVar4;
  uVar2 = param_2;
  if (iVar1 == 2) {
    func_0x000109c653d4(param_2,*(undefined8 *)(param_3 + 0x10));
  }
  else {
    if (iVar1 != 1) goto LAB_109c64d6c;
    func_0x000109c65390(param_2,*(undefined8 *)(param_3 + 0x10));
  }
  param_1[2] = uVar2;
  iVar4 = *(int *)(param_1 + 5);
LAB_109c64d6c:
  if (iVar4 == 0x66) {
    param_1[3] = *(undefined8 *)(param_3 + 0x18);
  }
  else if (iVar4 == 0x65) {
    puVar5 = (ulong *)(param_3 + 0x18);
    puVar3 = (ulong *)*puVar5;
    if ((*puVar5 & 3) != 0) {
      func_0x000107c30244(puVar5,param_2);
      puVar3 = puVar5;
    }
    param_1[3] = puVar3;
  }
  return param_1;
}



/* Entry: 109c64db8; end: 109c64e0f;  */

long FUN_109c64db8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_109c64c58(param_1);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(param_1 + 0x28) == 0x65) {
      func_0x000107c30258(param_1 + 0x18);
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return param_1;
}



/* Entry: 109c64e10; end: 109c64e13;  */

long FUN_109c64e10(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_109c64c58(param_1);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(param_1 + 0x28) == 0x65) {
      func_0x000107c30258(param_1 + 0x18);
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return param_1;
}



/* Entry: 109c64e14; end: 109c64e27;  */

void FUN_109c64e14(void)

{
  FUN_109c64db8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c64e28; end: 109c64e33;  */

undefined ** FUN_109c64e28(void)

{
  return &PTR_DAT_110b2ed50;
}



/* Entry: 109c64e34; end: 109c64e83;  */

void FUN_109c64e34(long param_1)

{
  ulong *puVar1;
  
  FUN_109c64c58();
  if (*(int *)(param_1 + 0x28) == 0x65) {
    func_0x000107c30258(param_1 + 0x18);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
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



/* Entry: 109c64e84; end: 109c650a7;  */

byte * FUN_109c64e84(long param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *pbVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int iVar11;
  
  pbVar1 = (byte *)(ulong)*(uint *)(param_1 + 0x24);
  if (*(uint *)(param_1 + 0x24) - 1 < 2) {
    func_0x000107c303cc(pbVar1,*(long *)(param_1 + 0x10),
                        *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x30),param_2,param_3);
    param_2 = pbVar1;
  }
  if (*(int *)(param_1 + 0x28) != 0x66) {
    pbVar1 = param_2;
    if (*(int *)(param_1 + 0x28) == 0x65) {
      puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
      lVar3 = (long)*(char *)((long)puVar9 + 0x17);
      puVar2 = puVar9;
      if (lVar3 < 0) {
        lVar3 = puVar9[1];
        puVar2 = (undefined8 *)*puVar9;
      }
      func_0x000107c303d4(puVar2,lVar3,1,&UNK_10f5a6372);
      pbVar1 = param_3;
      func_0x000107c280a0(param_3,0x65,puVar9,param_2);
    }
    goto LAB_109c64f50;
  }
  pbVar1 = *(byte **)param_3;
  if (param_2 < pbVar1) {
LAB_109c64f04:
    uVar4 = *(ulong *)(param_1 + 0x18);
    pbVar5 = param_2 + 2;
    param_2[0] = 0xb0;
    param_2[1] = 6;
    uVar10 = uVar4;
    pbVar1 = pbVar5;
    if (0x7f < uVar4) {
      do {
        pbVar5 = pbVar1 + 1;
        *pbVar1 = (byte)uVar10 | 0x80;
        uVar4 = uVar10 >> 7;
        uVar6 = uVar10 >> 0xe;
        uVar10 = uVar4;
        pbVar1 = pbVar5;
      } while (uVar6 != 0);
    }
  }
  else {
    do {
      if (param_3[0x38] == 1) {
        param_2 = param_3 + 0x10;
        break;
      }
      pbVar5 = param_3;
      func_0x000107c303dc();
      param_2 = pbVar5 + ((int)param_2 - (int)pbVar1);
      pbVar1 = *(byte **)param_3;
    } while (pbVar1 <= param_2);
    if (*(int *)(param_1 + 0x28) == 0x66) goto LAB_109c64f04;
    uVar4 = 0;
    pbVar5 = param_2 + 2;
    param_2[0] = 0xb0;
    param_2[1] = 6;
  }
  pbVar1 = pbVar5 + 1;
  *pbVar5 = (byte)uVar4;
LAB_109c64f50:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar10 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar10 < 0) {
      lVar3 = *(long *)(uVar4 + 8);
      uVar10 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lVar3 = uVar4 + 8;
    }
    uVar8 = (uint)uVar10;
    if (*(long *)param_3 - (long)pbVar1 < (long)(int)uVar8) {
      pbVar5 = (byte *)((*(long *)param_3 - (long)pbVar1) + 0x10);
      if ((int)pbVar5 < (int)uVar8) {
        do {
          iVar11 = (int)pbVar5;
          _memcpy(pbVar1,lVar3,(long)iVar11);
          uVar8 = (int)uVar10 - iVar11;
          uVar10 = (ulong)uVar8;
          lVar3 = lVar3 + iVar11;
          pbVar5 = *(byte **)param_3;
          pbVar7 = pbVar1 + iVar11;
          do {
            pbVar1 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar1 = param_3;
            func_0x000107c303dc();
            pbVar7 = pbVar1 + ((int)pbVar7 - (int)pbVar5);
            pbVar5 = *(byte **)param_3;
            pbVar1 = pbVar7;
          } while (pbVar5 <= pbVar7);
          pbVar5 = pbVar5 + (0x10 - (long)pbVar1);
        } while ((int)pbVar5 < (int)uVar8);
      }
      _memcpy(pbVar1,lVar3,(long)(int)uVar8);
      pbVar1 = pbVar1 + (int)uVar8;
    }
    else {
      _memcpy(pbVar1,lVar3,uVar10 & 0xffffffff);
      pbVar1 = pbVar1 + (int)uVar8;
    }
  }
  return pbVar1;
}



/* Entry: 109c650a8; end: 109c651a3;  */

void FUN_109c650a8(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  
  if (*(int *)(param_1 + 0x24) == 2) {
    iVar3 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x000109c6743c();
LAB_109c650e0:
    iVar3 = iVar3 + ((int)LZCOUNT(iVar3) * -9 + 0x160U >> 6) + 1;
  }
  else {
    if (*(int *)(param_1 + 0x24) == 1) {
      iVar3 = (int)*(undefined8 *)(param_1 + 0x10);
      FUN_109c66ce0();
      goto LAB_109c650e0;
    }
    iVar3 = 0;
  }
  if (*(int *)(param_1 + 0x28) == 0x66) {
    iVar3 = iVar3 + ((int)LZCOUNT(*(undefined8 *)(param_1 + 0x18)) * -9 + 0x280U >> 6);
  }
  else {
    if (*(int *)(param_1 + 0x28) != 0x65) goto LAB_109c65174;
    uVar4 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
    bVar2 = *(byte *)(uVar4 + 0x17);
    uVar1 = (uint)*(undefined8 *)(uVar4 + 8);
    if (-1 < (char)bVar2) {
      uVar1 = (uint)bVar2;
    }
    iVar3 = iVar3 + uVar1 + ((int)LZCOUNT(uVar1) * -9 + 0x160U >> 6);
  }
  iVar3 = iVar3 + 2;
LAB_109c65174:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar4 + 0x10);
    }
    iVar3 = (int)lVar5 + iVar3;
  }
  *(int *)(param_1 + 0x20) = iVar3;
  return;
}



/* Entry: 109c651a4; end: 109c651a7;  */

void FUN_109c651a4(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)(param_1 + 8);
  if ((uVar6 & 1) != 0) {
    uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
  }
  iVar3 = *(int *)(param_2 + 0x24);
  if (iVar3 == 0) goto LAB_109c6527c;
  iVar4 = *(int *)(param_1 + 0x24);
  if (iVar4 != iVar3) {
    if (iVar4 != 0) {
      FUN_109c64c58(param_1);
    }
    *(int *)(param_1 + 0x24) = iVar3;
  }
  uVar5 = uVar6;
  if (iVar3 == 2) {
    if (iVar4 == 2) {
      ppuVar1 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x24) != 2) {
        ppuVar1 = &PTR_PTR_1132ee728;
      }
      FUN_109c67540(*(undefined8 *)(param_1 + 0x10),ppuVar1);
      goto LAB_109c6527c;
    }
    func_0x000109c653d4(uVar6,*(undefined8 *)(param_2 + 0x10));
  }
  else {
    if (iVar3 != 1) goto LAB_109c6527c;
    if (iVar4 == 1) {
      ppuVar1 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x24) != 1) {
        ppuVar1 = &PTR_PTR_1132ee6b8;
      }
      FUN_109c66de4(*(undefined8 *)(param_1 + 0x10),ppuVar1);
      goto LAB_109c6527c;
    }
    func_0x000109c65390(uVar6,*(undefined8 *)(param_2 + 0x10));
  }
  *(ulong *)(param_1 + 0x10) = uVar5;
LAB_109c6527c:
  iVar3 = *(int *)(param_2 + 0x28);
  if (iVar3 != 0) {
    iVar4 = *(int *)(param_1 + 0x28);
    if (iVar4 != iVar3) {
      if (iVar4 == 0x65) {
        func_0x000107c30258(param_1 + 0x18);
      }
      *(int *)(param_1 + 0x28) = iVar3;
    }
    if (iVar3 == 0x66) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    }
    else if (iVar3 == 0x65) {
      if (iVar4 != 0x65) {
        *(undefined **)(param_1 + 0x18) = &DAT_11383d918;
      }
      puVar2 = (undefined *)(*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc);
      if (*(int *)(param_2 + 0x28) != 0x65) {
        puVar2 = &DAT_11383d918;
      }
      func_0x000107c30248(param_1 + 0x18,puVar2,uVar6);
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



/* Entry: 109c651a8; end: 109c6533b;  */

void FUN_109c651a8(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)(param_1 + 8);
  if ((uVar6 & 1) != 0) {
    uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
  }
  iVar3 = *(int *)(param_2 + 0x24);
  if (iVar3 == 0) goto LAB_109c6527c;
  iVar4 = *(int *)(param_1 + 0x24);
  if (iVar4 != iVar3) {
    if (iVar4 != 0) {
      FUN_109c64c58(param_1);
    }
    *(int *)(param_1 + 0x24) = iVar3;
  }
  uVar5 = uVar6;
  if (iVar3 == 2) {
    if (iVar4 == 2) {
      ppuVar1 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x24) != 2) {
        ppuVar1 = &PTR_PTR_1132ee728;
      }
      FUN_109c67540(*(undefined8 *)(param_1 + 0x10),ppuVar1);
      goto LAB_109c6527c;
    }
    func_0x000109c653d4(uVar6,*(undefined8 *)(param_2 + 0x10));
  }
  else {
    if (iVar3 != 1) goto LAB_109c6527c;
    if (iVar4 == 1) {
      ppuVar1 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x24) != 1) {
        ppuVar1 = &PTR_PTR_1132ee6b8;
      }
      FUN_109c66de4(*(undefined8 *)(param_1 + 0x10),ppuVar1);
      goto LAB_109c6527c;
    }
    func_0x000109c65390(uVar6,*(undefined8 *)(param_2 + 0x10));
  }
  *(ulong *)(param_1 + 0x10) = uVar5;
LAB_109c6527c:
  iVar3 = *(int *)(param_2 + 0x28);
  if (iVar3 != 0) {
    iVar4 = *(int *)(param_1 + 0x28);
    if (iVar4 != iVar3) {
      if (iVar4 == 0x65) {
        func_0x000107c30258(param_1 + 0x18);
      }
      *(int *)(param_1 + 0x28) = iVar3;
    }
    if (iVar3 == 0x66) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    }
    else if (iVar3 == 0x65) {
      if (iVar4 != 0x65) {
        *(undefined **)(param_1 + 0x18) = &DAT_11383d918;
      }
      puVar2 = (undefined *)(*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc);
      if (*(int *)(param_2 + 0x28) != 0x65) {
        puVar2 = &DAT_11383d918;
      }
      func_0x000107c30248(param_1 + 0x18,puVar2,uVar6);
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



/* Entry: 109c6533c; end: 109c65343;  */

void FUN_109c6533c(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110b2ed10;
  puVar1[1] = param_2;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined8 *)((long)puVar1 + 0x24) = 0;
  return;
}



/* Entry: 109c65344; end: 109c65463;  */

void FUN_109c65344(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110b2ed10;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined8 *)((long)puVar1 + 0x24) = 0;
  return;
}



/* Entry: 109c65464; end: 109c65467;  */

long FUN_109c65464(long param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 != 0) {
    if (iVar1 == 0x3c || iVar1 == 0x14) {
      func_0x000107c30258(param_1 + 0x10);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return param_1;
}



/* Entry: 109c65468; end: 109c6547b;  */

void FUN_109c65468(void)

{
  func_0x000109c65418();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c6547c; end: 109c65487;  */

undefined ** FUN_109c6547c(void)

{
  return &PTR_DAT_110b2ee50;
}



/* Entry: 109c65488; end: 109c654d7;  */

void FUN_109c65488(long param_1)

{
  ulong *puVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0x3c || *(int *)(param_1 + 0x1c) == 0x14) {
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



/* Entry: 109c654d8; end: 109c65877;  */

byte * FUN_109c654d8(long param_1,byte *param_2,byte *param_3)

{
  undefined8 *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 uVar4;
  byte bVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  int iVar13;
  
  iVar13 = *(int *)(param_1 + 0x1c);
  if (0x27 < iVar13) {
    if (iVar13 != 0x28) {
      if (iVar13 != 0x32) {
        if (iVar13 != 0x3c) goto LAB_109c65630;
        puVar11 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
        uVar4 = 0x3c;
        goto LAB_109c65624;
      }
      pbVar6 = *(byte **)param_3;
      if (param_2 < pbVar6) {
LAB_109c655e8:
        bVar5 = *(byte *)(param_1 + 0x10);
      }
      else {
        do {
          if (param_3[0x38] == 1) {
            param_2 = param_3 + 0x10;
            break;
          }
          pbVar2 = param_3;
          func_0x000107c303dc();
          param_2 = pbVar2 + ((int)param_2 - (int)pbVar6);
          pbVar6 = *(byte **)param_3;
        } while (pbVar6 <= param_2);
        if (*(int *)(param_1 + 0x1c) == 0x32) goto LAB_109c655e8;
        bVar5 = 0;
      }
      param_2[0] = 0x90;
      param_2[1] = 3;
      param_2[2] = bVar5 & 1;
      param_2 = param_2 + 3;
      goto LAB_109c65630;
    }
    pbVar6 = *(byte **)param_3;
    if (param_2 < pbVar6) {
LAB_109c655a4:
      uVar7 = *(ulong *)(param_1 + 0x10);
      pbVar6 = param_2 + 2;
      param_2[0] = 0xc0;
      param_2[1] = 2;
      uVar12 = uVar7;
      pbVar2 = pbVar6;
      if (0x7f < uVar7) {
        do {
          pbVar6 = pbVar2 + 1;
          *pbVar2 = (byte)uVar12 | 0x80;
          uVar7 = uVar12 >> 7;
          uVar8 = uVar12 >> 0xe;
          uVar12 = uVar7;
          pbVar2 = pbVar6;
        } while (uVar8 != 0);
      }
    }
    else {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar2 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar2 + ((int)param_2 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= param_2);
      if (*(int *)(param_1 + 0x1c) == 0x28) goto LAB_109c655a4;
      uVar7 = 0;
      pbVar6 = param_2 + 2;
      param_2[0] = 0xc0;
      param_2[1] = 2;
    }
    param_2 = pbVar6 + 1;
    *pbVar6 = (byte)uVar7;
    goto LAB_109c65630;
  }
  if (iVar13 != 10) {
    if (iVar13 == 0x14) {
      puVar11 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
      lVar9 = (long)*(char *)((long)puVar11 + 0x17);
      puVar1 = puVar11;
      if (lVar9 < 0) {
        lVar9 = puVar11[1];
        puVar1 = (undefined8 *)*puVar11;
      }
      func_0x000107c303d4(puVar1,lVar9,1,&UNK_10f5a63a3);
      uVar4 = 0x14;
LAB_109c65624:
      pbVar6 = param_3;
      func_0x000107c280a0(param_3,uVar4,puVar11,param_2);
      param_2 = pbVar6;
      goto LAB_109c65630;
    }
    if (iVar13 != 0x1e) goto LAB_109c65630;
    pbVar6 = *(byte **)param_3;
    if (param_2 < pbVar6) {
LAB_109c65528:
      uVar10 = *(uint *)(param_1 + 0x10);
      uVar7 = (ulong)(int)uVar10;
      pbVar6 = param_2 + 2;
      param_2[0] = 0xf0;
      param_2[1] = 1;
      uVar12 = uVar7;
      pbVar2 = pbVar6;
      if (0x7f < uVar10) {
        do {
          pbVar6 = pbVar2 + 1;
          *pbVar2 = (byte)uVar12 | 0x80;
          uVar7 = uVar12 >> 7;
          uVar8 = uVar12 >> 0xe;
          uVar12 = uVar7;
          pbVar2 = pbVar6;
        } while (uVar8 != 0);
      }
    }
    else {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar2 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar2 + ((int)param_2 - (int)pbVar6);
        pbVar6 = *(byte **)param_3;
      } while (pbVar6 <= param_2);
      if (*(int *)(param_1 + 0x1c) == 0x1e) goto LAB_109c65528;
      uVar7 = 0;
      pbVar6 = param_2 + 2;
      param_2[0] = 0xf0;
      param_2[1] = 1;
    }
    *pbVar6 = (byte)uVar7;
    param_2 = pbVar6 + 1;
    goto LAB_109c65630;
  }
  pbVar6 = *(byte **)param_3;
  if (param_2 < pbVar6) {
LAB_109c65580:
    uVar4 = *(undefined8 *)(param_1 + 0x10);
  }
  else {
    do {
      if (param_3[0x38] == 1) {
        param_2 = param_3 + 0x10;
        break;
      }
      pbVar2 = param_3;
      func_0x000107c303dc();
      param_2 = pbVar2 + ((int)param_2 - (int)pbVar6);
      pbVar6 = *(byte **)param_3;
    } while (pbVar6 <= param_2);
    if (*(int *)(param_1 + 0x1c) == 10) goto LAB_109c65580;
    uVar4 = 0;
  }
  *param_2 = 0x51;
  *(undefined8 *)(param_2 + 1) = uVar4;
  param_2 = param_2 + 9;
LAB_109c65630:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar12 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar12 < 0) {
      lVar9 = *(long *)(uVar7 + 8);
      uVar12 = (ulong)*(uint *)(uVar7 + 0x10);
    }
    else {
      lVar9 = uVar7 + 8;
    }
    uVar10 = (uint)uVar12;
    if (*(long *)param_3 - (long)param_2 < (long)(int)uVar10) {
      pbVar6 = (byte *)((*(long *)param_3 - (long)param_2) + 0x10);
      if ((int)pbVar6 < (int)uVar10) {
        do {
          iVar13 = (int)pbVar6;
          _memcpy(param_2,lVar9,(long)iVar13);
          uVar10 = (int)uVar12 - iVar13;
          uVar12 = (ulong)uVar10;
          lVar9 = lVar9 + iVar13;
          pbVar6 = *(byte **)param_3;
          pbVar2 = param_2 + iVar13;
          do {
            param_2 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar3 = param_3;
            func_0x000107c303dc();
            pbVar2 = pbVar3 + ((int)pbVar2 - (int)pbVar6);
            pbVar6 = *(byte **)param_3;
            param_2 = pbVar2;
          } while (pbVar6 <= pbVar2);
          pbVar6 = pbVar6 + (0x10 - (long)param_2);
        } while ((int)pbVar6 < (int)uVar10);
      }
      _memcpy(param_2,lVar9,(long)(int)uVar10);
      param_2 = param_2 + (int)uVar10;
    }
    else {
      _memcpy(param_2,lVar9,uVar12 & 0xffffffff);
      param_2 = param_2 + (int)uVar10;
    }
  }
  return param_2;
}



/* Entry: 109c65878; end: 109c65953;  */

long FUN_109c65878(long param_1)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar3 = 0;
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 < 0x28) {
    if (iVar1 == 10) {
      lVar3 = 9;
      goto LAB_109c6591c;
    }
    if (iVar1 == 0x14) goto LAB_109c658c0;
    if (iVar1 != 0x1e) goto LAB_109c6591c;
    lVar3 = (long)*(int *)(param_1 + 0x10);
LAB_109c65904:
    uVar4 = (ulong)((int)LZCOUNT(lVar3) * -9 + 0x280U >> 6);
  }
  else {
    if (iVar1 == 0x28) {
      lVar3 = *(long *)(param_1 + 0x10);
      goto LAB_109c65904;
    }
    if (iVar1 == 0x32) {
      lVar3 = 3;
      goto LAB_109c6591c;
    }
    if (iVar1 != 0x3c) goto LAB_109c6591c;
LAB_109c658c0:
    uVar4 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
    bVar2 = *(byte *)(uVar4 + 0x17);
    uVar4 = *(ulong *)(uVar4 + 8);
    if (-1 < (char)bVar2) {
      uVar4 = (ulong)bVar2;
    }
    uVar4 = uVar4 + ((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6);
  }
  lVar3 = uVar4 + 2;
LAB_109c6591c:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar4 + 0x10);
    }
    lVar3 = lVar5 + lVar3;
  }
  *(int *)(param_1 + 0x18) = (int)lVar3;
  return lVar3;
}



/* Entry: 109c65954; end: 109c65ac3;  */

void FUN_109c65954(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x1c);
  if (iVar1 == 0) goto LAB_109c65a7c;
  iVar2 = *(int *)(param_1 + 0x1c);
  if (iVar2 != iVar1) {
    if ((iVar2 == 0x3c) || (iVar2 == 0x14)) {
      func_0x000107c30258(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x1c) = iVar1;
  }
  if (iVar1 < 0x28) {
    if (iVar1 == 10) {
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      goto LAB_109c65a7c;
    }
    if (iVar1 != 0x14) {
      if (iVar1 == 0x1e) {
        *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      }
      goto LAB_109c65a7c;
    }
    if (iVar2 != 0x14) {
      *(undefined **)(param_1 + 0x10) = &DAT_11383d918;
    }
    puVar3 = (undefined *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
    if (*(int *)(param_2 + 0x1c) != 0x14) {
      puVar3 = &DAT_11383d918;
    }
  }
  else {
    if (iVar1 == 0x28) {
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      goto LAB_109c65a7c;
    }
    if (iVar1 == 0x32) {
      *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
      goto LAB_109c65a7c;
    }
    if (iVar1 != 0x3c) goto LAB_109c65a7c;
    if (iVar2 != 0x3c) {
      *(undefined **)(param_1 + 0x10) = &DAT_11383d918;
    }
    puVar3 = (undefined *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
    if (*(int *)(param_2 + 0x1c) != 0x3c) {
      puVar3 = &DAT_11383d918;
    }
  }
  func_0x000107c30248(param_1 + 0x10,puVar3,uVar4);
LAB_109c65a7c:
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



/* Entry: 109c65ac4; end: 109c65b7b;  */

undefined8 * FUN_109c65ac4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b2ee10;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_109c66478(param_1 + 2,param_2,param_3 + 0x10);
  puVar2 = (ulong *)(param_3 + 0x30);
  puVar1 = (ulong *)*puVar2;
  if ((*puVar2 & 3) != 0) {
    func_0x000107c30244(puVar2,param_2);
    puVar1 = puVar2;
  }
  param_1[6] = puVar1;
  puVar2 = (ulong *)(param_3 + 0x38);
  puVar1 = (ulong *)*puVar2;
  if ((*puVar2 & 3) != 0) {
    func_0x000107c30244(puVar2,param_2);
    puVar1 = puVar2;
  }
  param_1[7] = puVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



/* Entry: 109c65b7c; end: 109c65bbf;  */

long FUN_109c65b7c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  FUN_109c664cc(param_1 + 0x10);
  return param_1;
}



/* Entry: 109c65bc0; end: 109c65bc3;  */

long FUN_109c65bc0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  FUN_109c664cc(param_1 + 0x10);
  return param_1;
}



/* Entry: 109c65bc4; end: 109c65bd7;  */

void FUN_109c65bc4(void)

{
  FUN_109c65b7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c65bd8; end: 109c65bf7;  */

undefined ** FUN_109c65bd8(void)

{
  return &PTR_DAT_110b2eea8;
}



/* Entry: 109c65bf8; end: 109c65caf;  */

void FUN_109c65bf8(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  
  if (*(int *)(param_1 + 0x14) != 1) {
    func_0x000107c30320(param_1 + 0x10,0x10500400020,0);
  }
  if ((*(ulong *)(param_1 + 0x30) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  if ((*(ulong *)(param_1 + 0x38) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
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



/* Entry: 109c65cb0; end: 109c6601f;  */

ulong * FUN_109c65cb0(long param_1,ulong *param_2,ulong *param_3)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  uint *puVar12;
  long *plVar13;
  ulong *puVar14;
  ulong uStack_68;
  uint *puStack_60;
  uint uStack_58;
  long lVar11;
  
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar8[1];
    if (lVar5 != 0) {
      puVar3 = (undefined8 *)*puVar8;
      goto LAB_109c65d00;
    }
  }
  else {
    puVar3 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) != '\0') {
LAB_109c65d00:
      func_0x000107c303d4(puVar3,lVar5,1,&UNK_10f5a63e6);
      puVar1 = param_3;
      func_0x000107c280a0(param_3,10,puVar8,param_2);
      param_2 = puVar1;
    }
  }
  puVar12 = (uint *)(param_1 + 0x10);
  uVar7 = *puVar12;
  uVar10 = (ulong)uVar7;
  if (uVar7 != 0) {
    puStack_60 = puVar12;
    if ((uVar7 == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      uVar7 = *(uint *)(param_1 + 0x1c);
      if (uVar7 != *(uint *)(param_1 + 0x14)) {
        uStack_68 = *(ulong *)(*(long *)(param_1 + 0x20) + (ulong)uVar7 * 8);
        puVar1 = param_2;
        uStack_58 = uVar7;
        if ((uStack_68 & 1) != 0) {
          uStack_68 = *(ulong *)(**(long **)(uStack_68 - 1) + 0x20);
        }
        do {
          uVar10 = uStack_68;
          puVar14 = (ulong *)(uStack_68 + 8);
          param_2 = puVar14;
          FUN_109c66020(puVar14,uStack_68 + 0x20,puVar1,param_3);
          lVar5 = (long)*(char *)(uVar10 + 0x1f);
          if (lVar5 < 0) {
            puVar14 = *(ulong **)(uVar10 + 8);
            lVar5 = *(long *)(uVar10 + 0x10);
          }
          func_0x000107c303d4(puVar14,lVar5,1,&UNK_10f5a6411);
          func_0x000107c27d54(&uStack_68);
          puVar1 = param_2;
        } while (uStack_68 != 0);
      }
    }
    else {
      plVar2 = (long *)(uVar10 * 8);
      __Znam();
      uStack_58 = *(uint *)(param_1 + 0x1c);
      plVar13 = plVar2;
      if (uStack_58 == *(uint *)(param_1 + 0x14)) {
        uStack_58 = 0;
        uStack_68 = 0;
      }
      else {
        uStack_68 = *(ulong *)(*(long *)(param_1 + 0x20) + (ulong)uStack_58 * 8);
        if ((uStack_68 & 1) != 0) {
          uStack_68 = *(ulong *)(**(long **)(uStack_68 - 1) + 0x20);
        }
      }
      while (uStack_68 != 0) {
        *plVar13 = uStack_68 + 8;
        func_0x000107c27d54(&uStack_68);
        plVar13 = plVar13 + 1;
      }
      func_0x000105991c74(plVar2,plVar2 + uVar10,&uStack_68,LZCOUNT(uVar10) * -2 + 0x7e,1);
      lVar5 = 0;
      puVar1 = param_2;
      do {
        puVar14 = *(ulong **)((long)plVar2 + lVar5);
        param_2 = puVar14;
        FUN_109c66020(puVar14,puVar14 + 3,puVar1,param_3);
        uVar6 = (ulong)*(char *)((long)puVar14 + 0x17);
        puVar1 = puVar14;
        if ((long)uVar6 < 0) {
          puVar1 = (ulong *)*puVar14;
          uVar6 = puVar14[1];
        }
        func_0x000107c303d4(puVar1,uVar6,1,&UNK_10f5a6411);
        lVar5 = lVar5 + 8;
        puVar1 = param_2;
      } while ((long)(uVar10 * 8) - lVar5 != 0);
      __ZdaPv(plVar2);
    }
  }
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar8[1];
    if (lVar5 == 0) goto LAB_109c65eec;
    puVar3 = (undefined8 *)*puVar8;
  }
  else {
    puVar3 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_109c65eec;
  }
  func_0x000107c303d4(puVar3,lVar5,1,&UNK_10f5a643d);
  puVar1 = param_3;
  func_0x000107c280a0(param_3,0x28,puVar8,param_2);
  param_2 = puVar1;
LAB_109c65eec:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar10 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar10 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar5 = *(long *)(uVar10 + 8);
      uVar6 = (ulong)*(uint *)(uVar10 + 0x10);
    }
    else {
      lVar5 = uVar10 + 8;
    }
    uVar7 = (uint)uVar6;
    if ((long)(*param_3 - (long)param_2) < (long)(int)uVar7) {
      lVar11 = (*param_3 - (long)param_2) + 0x10;
      if ((int)lVar11 < (int)uVar7) {
        do {
          iVar9 = (int)lVar11;
          _memcpy(param_2,lVar5,(long)iVar9);
          uVar7 = (int)uVar6 - iVar9;
          uVar6 = (ulong)uVar7;
          lVar5 = lVar5 + iVar9;
          puVar14 = (ulong *)*param_3;
          puVar1 = (ulong *)((long)param_2 + (long)iVar9);
          do {
            param_2 = param_3 + 2;
            if ((param_3[7] & 1) != 0) break;
            puVar4 = param_3;
            func_0x000107c303dc();
            puVar1 = (ulong *)((long)puVar4 + (long)((int)puVar1 - (int)puVar14));
            puVar14 = (ulong *)*param_3;
            param_2 = puVar1;
          } while (puVar14 <= puVar1);
          lVar11 = (long)puVar14 + (0x10 - (long)param_2);
        } while ((int)lVar11 < (int)uVar7);
      }
      _memcpy(param_2,lVar5,(long)(int)uVar7);
      param_2 = (ulong *)((long)param_2 + (long)(int)uVar7);
    }
    else {
      _memcpy(param_2,lVar5,uVar6 & 0xffffffff);
      param_2 = (ulong *)((long)param_2 + (long)(int)uVar7);
    }
  }
  return param_2;
}



/* Entry: 109c66020; end: 109c6620b;  */

void FUN_109c66020(long *param_1,long *param_2,byte *param_3,byte *param_4)

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



/* Entry: 109c6620c; end: 109c663af;  */

long FUN_109c6620c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uStack_48;
  uint *puStack_40;
  uint uStack_38;
  
  puStack_40 = (uint *)(param_1 + 0x10);
  lVar5 = (ulong)*puStack_40 << 1;
  uStack_38 = *(uint *)(param_1 + 0x1c);
  if (uStack_38 != *(uint *)(param_1 + 0x14)) {
    uStack_48 = *(ulong *)(*(long *)(param_1 + 0x20) + (ulong)uStack_38 * 8);
    if ((uStack_48 & 1) != 0) {
      uStack_48 = *(ulong *)(**(long **)(uStack_48 - 1) + 0x20);
    }
    do {
      uVar1 = *(uint *)(uStack_48 + 0x10);
      if (-1 < (char)*(byte *)(uStack_48 + 0x1f)) {
        uVar1 = (uint)*(byte *)(uStack_48 + 0x1f);
      }
      lVar3 = uStack_48 + 0x20;
      FUN_109c65878();
      lVar3 = lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) +
              (long)(int)(uVar1 + ((int)LZCOUNT(uVar1) * -9 + 0x160U >> 6) + 2);
      lVar5 = lVar3 + lVar5 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6);
      func_0x000107c27d54(&uStack_48);
    } while (uStack_48 != 0);
  }
  uVar2 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  lVar3 = lVar4;
  if (lVar4 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    lVar3 = *(long *)(uVar2 + 8);
    if (-1 < *(char *)(uVar2 + 0x17)) {
      lVar3 = lVar4;
    }
    lVar5 = lVar5 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
  }
  uVar2 = *(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  lVar3 = lVar4;
  if (lVar4 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    lVar3 = *(long *)(uVar2 + 8);
    if (-1 < *(char *)(uVar2 + 0x17)) {
      lVar3 = lVar4;
    }
    lVar5 = lVar5 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    lVar5 = lVar3 + lVar5;
  }
  *(int *)(param_1 + 0x40) = (int)lVar5;
  return lVar5;
}



/* Entry: 109c663b0; end: 109c663b3;  */

void FUN_109c663b0(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_109c665c8(param_1 + 0x10,param_2 + 0x10);
  uVar1 = *(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x30,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x38) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x38,uVar1,uVar2);
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



/* Entry: 109c663b4; end: 109c66467;  */

void FUN_109c663b4(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_109c665c8(param_1 + 0x10,param_2 + 0x10);
  uVar1 = *(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x30,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x38) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x38,uVar1,uVar2);
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



/* Entry: 109c66468; end: 109c66477;  */

void FUN_109c66468(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x20);
  }
  *puVar1 = &PTR_FUN_110b2edc0;
  puVar1[1] = param_2;
  puVar1[3] = 0;
  return;
}



/* Entry: 109c66478; end: 109c664cb;  */

undefined8 * FUN_109c66478(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[1] = 0x100000000;
  *param_1 = 0x100000000;
  param_1[2] = &DAT_10e5b4a18;
  param_1[3] = param_2;
  FUN_109c665c8(param_1,param_3);
  return param_1;
}



/* Entry: 109c664cc; end: 109c66513;  */

long FUN_109c664cc(long param_1)

{
  if (*(int *)(param_1 + 4) != 1) {
    func_0x000107c30320(param_1,0x500400020,0);
  }
  return param_1;
}



/* Entry: 109c66514; end: 109c665c7;  */

void FUN_109c66514(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110b2edc0;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  return;
}



/* Entry: 109c665c8; end: 109c66727;  */

void FUN_109c665c8(int *param_1,long param_2)

{
  ulong uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  int *piVar6;
  int *piStack_58;
  long lStack_50;
  uint uStack_48;
  
  uStack_48 = *(uint *)(param_2 + 0xc);
  if (uStack_48 != *(uint *)(param_2 + 4)) {
    piStack_58 = *(int **)(*(long *)(param_2 + 0x10) + (ulong)uStack_48 * 8);
    lStack_50 = param_2;
    if (((ulong)piStack_58 & 1) != 0) {
      piStack_58 = *(int **)(**(long **)((long)piStack_58 + -1) + 0x20);
    }
    do {
      piVar2 = piStack_58;
      piVar6 = piStack_58 + 2;
      uVar1 = *(ulong *)(piStack_58 + 4);
      piVar4 = *(int **)piVar6;
      if (-1 < (char)*(byte *)((long)piStack_58 + 0x1f)) {
        uVar1 = (ulong)*(byte *)((long)piStack_58 + 0x1f);
        piVar4 = piVar6;
      }
      piVar3 = param_1;
      func_0x000107c27d5c(param_1,piVar4,uVar1,0);
      if (piVar3 == (int *)0x0) {
        piVar3 = param_1;
        func_0x000107c27d60(param_1,*param_1 + 1);
        if ((int)piVar3 != 0) {
          uVar1 = *(ulong *)(piVar2 + 4);
          piVar4 = *(int **)(piVar2 + 2);
          if (-1 < (char)*(byte *)((long)piVar2 + 0x1f)) {
            uVar1 = (ulong)*(byte *)((long)piVar2 + 0x1f);
            piVar4 = piVar6;
          }
          func_0x000107c27d5c(param_1,piVar4,uVar1,0);
        }
        piVar3 = param_1;
        func_0x000107c27d64(param_1,0x40);
        func_0x000107c2821c(piVar3 + 2,*(undefined8 *)(param_1 + 6),piVar6);
        uVar5 = *(undefined8 *)(param_1 + 6);
        *(undefined ***)(piVar3 + 8) = &PTR_FUN_110b2edc0;
        *(undefined8 *)(piVar3 + 10) = uVar5;
        piVar3[0xe] = 0;
        piVar3[0xf] = 0;
        func_0x000107c27d68(param_1,piVar4,piVar3);
        *param_1 = *param_1 + 1;
      }
      if (piVar2 != piVar3) {
        FUN_109c65488(piVar3 + 8);
        FUN_109c65954(piVar3 + 8,piVar2 + 8);
      }
      func_0x000107c27d54(&piStack_58);
    } while (piStack_58 != (int *)0x0);
  }
  return;
}



/* Entry: 109c66728; end: 109c6678f;  */

undefined8 * FUN_109c66728(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b2f160;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  func_0x000107c2af38(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 6) = 0;
  return param_1;
}



/* Entry: 109c66790; end: 109c667c3;  */

long FUN_109c66790(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c2af3c(param_1 + 0x10);
  return param_1;
}



/* Entry: 109c667c4; end: 109c667c7;  */

long FUN_109c667c4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c2af3c(param_1 + 0x10);
  return param_1;
}



/* Entry: 109c667c8; end: 109c667db;  */

void FUN_109c667c8(void)

{
  FUN_109c66790();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c667dc; end: 109c667e7;  */

undefined ** FUN_109c667dc(void)

{
  return &PTR_DAT_110b2f290;
}



/* Entry: 109c667e8; end: 109c6683f;  */

void FUN_109c667e8(long param_1)

{
  ulong *puVar1;
  
  if (*(int *)(param_1 + 0x14) != 1) {
    func_0x000107c30320(param_1 + 0x10,0x10100280020,0);
  }
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



/* Entry: 109c66840; end: 109c66a9f;  */

long * FUN_109c66840(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  int *piVar8;
  ulong uVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uStack_68;
  int *piStack_60;
  uint uStack_58;
  
  piVar2 = (int *)(param_1 + 0x10);
  if (*piVar2 != 0) {
    if ((*piVar2 == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      uVar7 = *(uint *)(param_1 + 0x1c);
      piStack_60 = piVar2;
      if (uVar7 != *(uint *)(param_1 + 0x14)) {
        uStack_68 = *(ulong *)(*(long *)(param_1 + 0x20) + (ulong)uVar7 * 8);
        plVar6 = param_2;
        uStack_58 = uVar7;
        if ((uStack_68 & 1) != 0) {
          uStack_68 = *(ulong *)(**(long **)(uStack_68 - 1) + 0x20);
        }
        do {
          uVar4 = uStack_68;
          lVar13 = uStack_68 + 8;
          param_2 = (long *)0x1;
          FUN_109c66aa0(1,lVar13,uStack_68 + 0x20,plVar6,param_3);
          lVar3 = (long)*(char *)(uVar4 + 0x1f);
          if (lVar3 < 0) {
            lVar13 = *(long *)(uVar4 + 8);
            lVar3 = *(long *)(uVar4 + 0x10);
          }
          func_0x000107c303d4(lVar13,lVar3,1,&UNK_10f5a646a);
          func_0x000107c27d54(&uStack_68);
          plVar6 = param_2;
        } while (uStack_68 != 0);
      }
    }
    else {
      FUN_109c6a3ac(&uStack_68);
      piVar2 = piStack_60;
      if (uStack_68 != 0) {
        lVar13 = uStack_68 << 3;
        plVar6 = param_2;
        piVar8 = piStack_60;
        do {
          puVar11 = *(undefined8 **)piVar8;
          param_2 = (long *)0x1;
          FUN_109c66aa0(1,puVar11,puVar11 + 3,plVar6,param_3);
          lVar3 = (long)*(char *)((long)puVar11 + 0x17);
          puVar12 = puVar11;
          if (lVar3 < 0) {
            puVar12 = (undefined8 *)*puVar11;
            lVar3 = puVar11[1];
          }
          func_0x000107c303d4(puVar12,lVar3,1,&UNK_10f5a646a);
          piVar8 = piVar8 + 2;
          lVar13 = lVar13 + -8;
          plVar6 = param_2;
          piVar2 = piStack_60;
        } while (lVar13 != 0);
      }
      piStack_60 = (int *)0x0;
      if (piVar2 != (int *)0x0) {
        __ZdaPv(piVar2);
      }
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar9 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar9 < 0) {
      lVar13 = *(long *)(uVar4 + 8);
      uVar9 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lVar13 = uVar4 + 8;
    }
    uVar7 = (uint)uVar9;
    if (*param_3 - (long)param_2 < (long)(int)uVar7) {
      lVar3 = (*param_3 - (long)param_2) + 0x10;
      if ((int)lVar3 < (int)uVar7) {
        do {
          iVar10 = (int)lVar3;
          _memcpy(param_2,lVar13,(long)iVar10);
          uVar7 = (int)uVar9 - iVar10;
          uVar9 = (ulong)uVar7;
          lVar13 = lVar13 + iVar10;
          plVar5 = (long *)*param_3;
          plVar6 = (long *)((long)param_2 + (long)iVar10);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar6 = (long *)((long)plVar1 + (long)((int)plVar6 - (int)plVar5));
            plVar5 = (long *)*param_3;
            param_2 = plVar6;
          } while (plVar5 <= plVar6);
          lVar3 = (long)plVar5 + (0x10 - (long)param_2);
        } while ((int)lVar3 < (int)uVar7);
      }
      _memcpy(param_2,lVar13,(long)(int)uVar7);
      param_2 = (long *)((long)param_2 + (long)(int)uVar7);
    }
    else {
      _memcpy(param_2,lVar13,uVar9 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar7);
    }
  }
  return param_2;
}



/* Entry: 109c66aa0; end: 109c66cdf;  */

byte * FUN_109c66aa0(int param_1,long *param_2,ulong *param_3,byte *param_4,byte *param_5)

{
  long *plVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  
  pbVar6 = *(byte **)param_5;
  if (pbVar6 <= param_4) {
    do {
      if (param_5[0x38] == 1) {
        param_4 = param_5 + 0x10;
        break;
      }
      pbVar4 = param_5;
      func_0x000107c303dc();
      param_4 = pbVar4 + ((int)param_4 - (int)pbVar6);
      pbVar6 = *(byte **)param_5;
    } while (pbVar6 <= param_4);
  }
  uVar9 = param_1 << 3 | 2;
  pbVar6 = param_4;
  uVar5 = uVar9;
  if (0x7f < (uint)(param_1 << 3)) {
    do {
      param_4 = pbVar6 + 1;
      *pbVar6 = (byte)uVar5 | 0x80;
      uVar9 = uVar5 >> 7;
      uVar2 = uVar5 >> 0xe;
      pbVar6 = param_4;
      uVar5 = uVar9;
    } while (uVar2 != 0);
  }
  pbVar6 = param_4 + 1;
  *param_4 = (byte)uVar9;
  uVar9 = *(uint *)(param_2 + 1);
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar9 = (uint)*(byte *)((long)param_2 + 0x17);
  }
  uVar9 = uVar9 + ((int)LZCOUNT(uVar9) * -9 + 0x160U >> 6) +
          ((int)LZCOUNT(*param_3) * -9 + 0x280U >> 6) + 2;
  pbVar4 = pbVar6;
  uVar5 = uVar9;
  if (0x7f < uVar9) {
    do {
      pbVar6 = pbVar4 + 1;
      *pbVar4 = (byte)uVar5 | 0x80;
      uVar9 = uVar5 >> 7;
      uVar2 = uVar5 >> 0xe;
      pbVar4 = pbVar6;
      uVar5 = uVar9;
    } while (uVar2 != 0);
  }
  pbVar4 = pbVar6 + 1;
  *pbVar6 = (byte)uVar9;
  pbVar6 = *(byte **)param_5;
  if (pbVar6 <= pbVar4) {
    do {
      if (param_5[0x38] == 1) {
        pbVar4 = param_5 + 0x10;
        break;
      }
      pbVar3 = param_5;
      func_0x000107c303dc();
      pbVar4 = pbVar3 + ((int)pbVar4 - (int)pbVar6);
      pbVar6 = *(byte **)param_5;
    } while (pbVar6 <= pbVar4);
  }
  lVar11 = (long)*(char *)((long)param_2 + 0x17);
  if (((lVar11 < 0) && (lVar11 = param_2[1], 0x7f < lVar11)) ||
     ((long)(pbVar6 + (0xe - (long)pbVar4)) < lVar11)) {
    pbVar6 = param_5;
    func_0x00010b4d5120(param_5,1,param_2);
  }
  else {
    *pbVar4 = 10;
    pbVar4[1] = (byte)lVar11;
    plVar1 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      plVar1 = param_2;
    }
    _memcpy(pbVar4 + 2,plVar1,lVar11);
    pbVar6 = pbVar4 + 2 + lVar11;
  }
  pbVar4 = *(byte **)param_5;
  if (pbVar4 <= pbVar6) {
    do {
      if (param_5[0x38] == 1) {
        pbVar6 = param_5 + 0x10;
        break;
      }
      pbVar3 = param_5;
      func_0x000107c303dc();
      pbVar6 = pbVar3 + ((int)pbVar6 - (int)pbVar4);
      pbVar4 = *(byte **)param_5;
    } while (pbVar4 <= pbVar6);
  }
  uVar7 = *param_3;
  pbVar4 = pbVar6 + 1;
  *pbVar6 = 0x10;
  pbVar6 = pbVar4;
  uVar8 = uVar7;
  if (0x7f < uVar7) {
    do {
      pbVar4 = pbVar6 + 1;
      *pbVar6 = (byte)uVar8 | 0x80;
      uVar7 = uVar8 >> 7;
      uVar10 = uVar8 >> 0xe;
      pbVar6 = pbVar4;
      uVar8 = uVar7;
    } while (uVar10 != 0);
  }
  *pbVar4 = (byte)uVar7;
  return pbVar4 + 1;
}



/* Entry: 109c66ce0; end: 109c66ddf;  */

ulong FUN_109c66ce0(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uStack_48;
  uint *puStack_40;
  uint uStack_38;
  
  puStack_40 = (uint *)(param_1 + 0x10);
  uVar5 = (ulong)*puStack_40;
  uStack_38 = *(uint *)(param_1 + 0x1c);
  if (uStack_38 != *(uint *)(param_1 + 0x14)) {
    uStack_48 = *(ulong *)(*(long *)(param_1 + 0x20) + (ulong)uStack_38 * 8);
    if ((uStack_48 & 1) != 0) {
      uStack_48 = *(ulong *)(**(long **)(uStack_48 - 1) + 0x20);
    }
    do {
      uVar2 = *(uint *)(uStack_48 + 0x10);
      if (-1 < (char)*(byte *)(uStack_48 + 0x1f)) {
        uVar2 = (uint)*(byte *)(uStack_48 + 0x1f);
      }
      iVar1 = uVar2 + ((int)LZCOUNT(uVar2) * -9 + 0x160U >> 6) +
              ((int)LZCOUNT(*(undefined8 *)(uStack_48 + 0x20)) * -9 + 0x280U >> 6) + 2;
      uVar5 = uVar5 + (long)iVar1 + (ulong)((int)LZCOUNT(iVar1) * -9 + 0x160U >> 6);
      func_0x000107c27d54(&uStack_48);
    } while (uStack_48 != 0);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    uVar5 = lVar3 + uVar5;
  }
  *(int *)(param_1 + 0x30) = (int)uVar5;
  return uVar5;
}



/* Entry: 109c66de0; end: 109c66de3;  */

void FUN_109c66de0(long param_1,long param_2)

{
  func_0x000107c2af40(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 109c66de4; end: 109c66e2f;  */

void FUN_109c66de4(long param_1,long param_2)

{
  func_0x000107c2af40(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 109c66e30; end: 109c66e97;  */

undefined8 * FUN_109c66e30(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b2f200;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_109c69e5c(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 6) = 0;
  return param_1;
}



/* Entry: 109c66e98; end: 109c66ecb;  */

long FUN_109c66e98(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_109c69eb0(param_1 + 0x10);
  return param_1;
}



/* Entry: 109c66ecc; end: 109c66ecf;  */

long FUN_109c66ecc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_109c69eb0(param_1 + 0x10);
  return param_1;
}



/* Entry: 109c66ed0; end: 109c66ee3;  */

void FUN_109c66ed0(void)

{
  FUN_109c66e98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c66ee4; end: 109c66eef;  */

undefined ** FUN_109c66ee4(void)

{
  return &PTR_DAT_110b2f2d8;
}



/* Entry: 109c66ef0; end: 109c66f47;  */

void FUN_109c66ef0(long param_1)

{
  ulong *puVar1;
  
  if (*(int *)(param_1 + 0x14) != 1) {
    func_0x000107c30320(param_1 + 0x10,0x10200280010,0);
  }
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



/* Entry: 109c66f48; end: 109c6722b;  */

long * FUN_109c66f48(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  uint *puVar11;
  long *plVar12;
  long lVar13;
  ulong uStack_78;
  uint *puStack_70;
  uint uStack_68;
  
  puVar11 = (uint *)(param_1 + 0x10);
  uVar6 = *puVar11;
  uVar10 = (ulong)uVar6;
  if (uVar6 != 0) {
    puStack_70 = puVar11;
    if ((uVar6 == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      uVar6 = *(uint *)(param_1 + 0x1c);
      if (uVar6 != *(uint *)(param_1 + 0x14)) {
        uStack_78 = *(ulong *)(*(long *)(param_1 + 0x20) + (ulong)uVar6 * 8);
        plVar5 = param_2;
        uStack_68 = uVar6;
        if ((uStack_78 & 1) != 0) {
          uStack_78 = *(ulong *)(**(long **)(uStack_78 - 1) + 0x20);
        }
        do {
          uVar10 = uStack_78;
          lVar13 = uStack_78 + 0x10;
          param_2 = (long *)(uStack_78 + 8);
          FUN_109c6722c(param_2,lVar13,plVar5,param_3);
          lVar2 = (long)*(char *)(uVar10 + 0x27);
          if (lVar2 < 0) {
            lVar13 = *(long *)(uVar10 + 0x10);
            lVar2 = *(long *)(uVar10 + 0x18);
          }
          func_0x000107c303d4(lVar13,lVar2,1,&UNK_10f5a6494);
          func_0x000107c27d54(&uStack_78);
          plVar5 = param_2;
        } while (uStack_78 != 0);
      }
    }
    else {
      puVar8 = (undefined8 *)(uVar10 << 4);
      puVar1 = puVar8;
      __Znam();
      _bzero();
      uStack_68 = *(uint *)(param_1 + 0x1c);
      puVar3 = puVar1;
      if (uStack_68 == *(uint *)(param_1 + 0x14)) {
        uStack_68 = 0;
        uStack_78 = 0;
      }
      else {
        uStack_78 = *(ulong *)(*(long *)(param_1 + 0x20) + (ulong)uStack_68 * 8);
        if ((uStack_78 & 1) != 0) {
          uStack_78 = *(ulong *)(**(long **)(uStack_78 - 1) + 0x20);
        }
      }
      while (uStack_78 != 0) {
        *puVar3 = *(undefined8 *)(uStack_78 + 8);
        puVar3[1] = (undefined8 *)(uStack_78 + 8);
        func_0x000107c27d54(&uStack_78);
        puVar3 = puVar3 + 2;
      }
      FUN_109c6a4ac(puVar1,puVar1 + uVar10 * 2,LZCOUNT(uVar10) * -2 + 0x7e,1);
      lVar13 = 8;
      plVar5 = param_2;
      do {
        plVar12 = *(long **)((long)puVar1 + lVar13);
        plVar4 = plVar12 + 1;
        param_2 = plVar12;
        FUN_109c6722c(plVar12,plVar4,plVar5,param_3);
        lVar2 = (long)*(char *)((long)plVar12 + 0x1f);
        if (lVar2 < 0) {
          plVar4 = (long *)plVar12[1];
          lVar2 = plVar12[2];
        }
        func_0x000107c303d4(plVar4,lVar2,1,&UNK_10f5a6494);
        lVar13 = lVar13 + 0x10;
        puVar8 = puVar8 + -2;
        plVar5 = param_2;
      } while (puVar8 != (undefined8 *)0x0);
      __ZdaPv(puVar1);
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar10 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar7 = (ulong)*(char *)(uVar10 + 0x1f);
    if ((long)uVar7 < 0) {
      lVar13 = *(long *)(uVar10 + 8);
      uVar7 = (ulong)*(uint *)(uVar10 + 0x10);
    }
    else {
      lVar13 = uVar10 + 8;
    }
    uVar6 = (uint)uVar7;
    if (*param_3 - (long)param_2 < (long)(int)uVar6) {
      lVar2 = (*param_3 - (long)param_2) + 0x10;
      if ((int)lVar2 < (int)uVar6) {
        do {
          iVar9 = (int)lVar2;
          _memcpy(param_2,lVar13,(long)iVar9);
          uVar6 = (int)uVar7 - iVar9;
          uVar7 = (ulong)uVar6;
          lVar13 = lVar13 + iVar9;
          plVar4 = (long *)*param_3;
          plVar5 = (long *)((long)param_2 + (long)iVar9);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar12 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar12 + (long)((int)plVar5 - (int)plVar4));
            plVar4 = (long *)*param_3;
            param_2 = plVar5;
          } while (plVar4 <= plVar5);
          lVar2 = (long)plVar4 + (0x10 - (long)param_2);
        } while ((int)lVar2 < (int)uVar6);
      }
      _memcpy(param_2,lVar13,(long)(int)uVar6);
      param_2 = (long *)((long)param_2 + (long)(int)uVar6);
    }
    else {
      _memcpy(param_2,lVar13,uVar7 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar6);
    }
  }
  return param_2;
}



/* Entry: 109c6722c; end: 109c6753b;  */

byte * FUN_109c6722c(ulong *param_1,long *param_2,byte *param_3,byte *param_4)

{
  long *plVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  undefined8 uVar9;
  undefined8 extraout_x8_00;
  uint uVar10;
  ulong uVar11;
  undefined8 extraout_x10;
  undefined8 extraout_x10_00;
  long lVar12;
  int iVar13;
  int iVar14;
  
  pbVar6 = *(byte **)param_4;
  if (pbVar6 <= param_3) {
    do {
      if (param_4[0x38] == 1) {
        param_3 = param_4 + 0x10;
        break;
      }
      pbVar3 = param_4;
      func_0x000107c303dc();
      param_3 = pbVar3 + ((int)param_3 - (int)pbVar6);
      pbVar6 = *(byte **)param_4;
    } while (pbVar6 <= param_3);
  }
  pbVar6 = param_3 + 1;
  *param_3 = 10;
  uVar10 = *(uint *)(param_2 + 1);
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar10 = (uint)*(byte *)((long)param_2 + 0x17);
  }
  uVar10 = uVar10 + ((int)LZCOUNT(*param_1) * -9 + 0x280U >> 6) +
           ((int)LZCOUNT(uVar10) * -9 + 0x160U >> 6) + 2;
  pbVar3 = pbVar6;
  uVar5 = uVar10;
  if (0x7f < uVar10) {
    do {
      pbVar6 = pbVar3 + 1;
      *pbVar3 = (byte)uVar5 | 0x80;
      uVar10 = uVar5 >> 7;
      uVar2 = uVar5 >> 0xe;
      pbVar3 = pbVar6;
      uVar5 = uVar10;
    } while (uVar2 != 0);
  }
  pbVar3 = pbVar6 + 1;
  *pbVar6 = (byte)uVar10;
  pbVar6 = *(byte **)param_4;
  if (pbVar6 <= pbVar3) {
    do {
      if (param_4[0x38] == 1) {
        pbVar3 = param_4 + 0x10;
        break;
      }
      pbVar4 = param_4;
      func_0x000107c303dc();
      pbVar3 = pbVar4 + ((int)pbVar3 - (int)pbVar6);
      pbVar6 = *(byte **)param_4;
    } while (pbVar6 <= pbVar3);
  }
  uVar7 = *param_1;
  pbVar4 = pbVar3 + 1;
  *pbVar3 = 8;
  pbVar6 = pbVar4;
  uVar8 = uVar7;
  if (0x7f < uVar7) {
    do {
      pbVar4 = pbVar6 + 1;
      *pbVar6 = (byte)uVar8 | 0x80;
      uVar7 = uVar8 >> 7;
      uVar11 = uVar8 >> 0xe;
      pbVar6 = pbVar4;
      uVar8 = uVar7;
    } while (uVar11 != 0);
  }
  pbVar6 = pbVar4 + 1;
  *pbVar4 = (byte)uVar7;
  pbVar3 = *(byte **)param_4;
  if (pbVar3 <= pbVar6) {
    do {
      if (param_4[0x38] == 1) {
        pbVar6 = param_4 + 0x10;
        break;
      }
      pbVar4 = param_4;
      func_0x000107c303dc();
      pbVar6 = pbVar4 + ((int)pbVar6 - (int)pbVar3);
      pbVar3 = *(byte **)param_4;
    } while (pbVar3 <= pbVar6);
  }
  lVar12 = (long)*(char *)((long)param_2 + 0x17);
  if (((-1 < lVar12) || (lVar12 = param_2[1], lVar12 < 0x80)) &&
     (lVar12 <= (long)(pbVar3 + (0xe - (long)pbVar6)))) {
    *pbVar6 = 0x12;
    pbVar6[1] = (byte)lVar12;
    plVar1 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      plVar1 = param_2;
    }
    _memcpy(pbVar6 + 2,plVar1,lVar12);
    return pbVar6 + 2 + lVar12;
  }
  func_0x00010b4d564c(param_4,2);
  func_0x00010b4d56cc();
  uVar9 = extraout_x10;
  while (0x7f < (uint)uVar9) {
    func_0x00010b4d576c();
    uVar9 = extraout_x10_00;
  }
  func_0x00010b4d56b4();
  uVar9 = extraout_x8;
  while (0x7f < (uint)uVar9) {
    func_0x00010b4d5758();
    uVar9 = extraout_x8_00;
  }
  func_0x00010b4d5660();
  if (*(long *)param_4 - (long)pbVar6 < (long)(int)param_2) {
    while( true ) {
      iVar14 = ((int)*(undefined8 *)param_4 - (int)pbVar6) + 0x10;
      iVar13 = (int)param_2;
      param_2 = (long *)(ulong)(uint)(iVar13 - iVar14);
      if (iVar13 - iVar14 == 0 || iVar13 < iVar14) break;
      func_0x00010b4d5738();
      pbVar3 = pbVar6 + iVar14;
      pbVar6 = param_4;
      func_0x000107c303e4(param_4,pbVar3);
    }
    func_0x00010b4d5738();
    return pbVar6 + iVar13;
  }
  _memcpy(pbVar6);
  return pbVar6 + (int)param_2;
}



/* Entry: 109c6753c; end: 109c6753f;  */

void FUN_109c6753c(long param_1,long param_2)

{
  FUN_109c6b37c(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 109c67540; end: 109c6758b;  */

void FUN_109c67540(long param_1,long param_2)

{
  FUN_109c6b37c(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 109c6758c; end: 109c675f3;  */

undefined8 * FUN_109c6758c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b2f1b0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  func_0x000106af6a48(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 6) = 0;
  return param_1;
}



/* Entry: 109c675f4; end: 109c67627;  */

long FUN_109c675f4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000106af6a94(param_1 + 0x10);
  return param_1;
}



/* Entry: 109c67628; end: 109c6762b;  */

long FUN_109c67628(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000106af6a94(param_1 + 0x10);
  return param_1;
}



/* Entry: 109c6762c; end: 109c6763f;  */

void FUN_109c6762c(void)

{
  FUN_109c675f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c67640; end: 109c6764b;  */

undefined ** FUN_109c67640(void)

{
  return &PTR_DAT_110b2f320;
}



/* Entry: 109c6764c; end: 109c676a3;  */

void FUN_109c6764c(long param_1)

{
  ulong *puVar1;
  
  if (*(int *)(param_1 + 0x14) != 1) {
    func_0x000107c30320(param_1 + 0x10,0x10100280020,0);
  }
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



/* Entry: 109c676a4; end: 109c67903;  */

long * FUN_109c676a4(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  int *piVar8;
  ulong uVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uStack_68;
  int *piStack_60;
  uint uStack_58;
  
  piVar2 = (int *)(param_1 + 0x10);
  if (*piVar2 != 0) {
    if ((*piVar2 == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      uVar7 = *(uint *)(param_1 + 0x1c);
      piStack_60 = piVar2;
      if (uVar7 != *(uint *)(param_1 + 0x14)) {
        uStack_68 = *(ulong *)(*(long *)(param_1 + 0x20) + (ulong)uVar7 * 8);
        plVar6 = param_2;
        uStack_58 = uVar7;
        if ((uStack_68 & 1) != 0) {
          uStack_68 = *(ulong *)(**(long **)(uStack_68 - 1) + 0x20);
        }
        do {
          uVar4 = uStack_68;
          lVar13 = uStack_68 + 8;
          param_2 = (long *)0x1;
          func_0x000106af69c0(1,lVar13,uStack_68 + 0x20,plVar6,param_3);
          lVar3 = (long)*(char *)(uVar4 + 0x1f);
          if (lVar3 < 0) {
            lVar13 = *(long *)(uVar4 + 8);
            lVar3 = *(long *)(uVar4 + 0x10);
          }
          func_0x000107c303d4(lVar13,lVar3,1,&UNK_10f5a64be);
          func_0x000107c27d54(&uStack_68);
          plVar6 = param_2;
        } while (uStack_68 != 0);
      }
    }
    else {
      func_0x000106af6ad8(&uStack_68);
      piVar2 = piStack_60;
      if (uStack_68 != 0) {
        lVar13 = uStack_68 << 3;
        plVar6 = param_2;
        piVar8 = piStack_60;
        do {
          puVar11 = *(undefined8 **)piVar8;
          param_2 = (long *)0x1;
          func_0x000106af69c0(1,puVar11,puVar11 + 3,plVar6,param_3);
          lVar3 = (long)*(char *)((long)puVar11 + 0x17);
          puVar12 = puVar11;
          if (lVar3 < 0) {
            puVar12 = (undefined8 *)*puVar11;
            lVar3 = puVar11[1];
          }
          func_0x000107c303d4(puVar12,lVar3,1,&UNK_10f5a64be);
          piVar8 = piVar8 + 2;
          lVar13 = lVar13 + -8;
          plVar6 = param_2;
          piVar2 = piStack_60;
        } while (lVar13 != 0);
      }
      piStack_60 = (int *)0x0;
      if (piVar2 != (int *)0x0) {
        __ZdaPv(piVar2);
      }
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar9 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar9 < 0) {
      lVar13 = *(long *)(uVar4 + 8);
      uVar9 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lVar13 = uVar4 + 8;
    }
    uVar7 = (uint)uVar9;
    if (*param_3 - (long)param_2 < (long)(int)uVar7) {
      lVar3 = (*param_3 - (long)param_2) + 0x10;
      if ((int)lVar3 < (int)uVar7) {
        do {
          iVar10 = (int)lVar3;
          _memcpy(param_2,lVar13,(long)iVar10);
          uVar7 = (int)uVar9 - iVar10;
          uVar9 = (ulong)uVar7;
          lVar13 = lVar13 + iVar10;
          plVar5 = (long *)*param_3;
          plVar6 = (long *)((long)param_2 + (long)iVar10);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar6 = (long *)((long)plVar1 + (long)((int)plVar6 - (int)plVar5));
            plVar5 = (long *)*param_3;
            param_2 = plVar6;
          } while (plVar5 <= plVar6);
          lVar3 = (long)plVar5 + (0x10 - (long)param_2);
        } while ((int)lVar3 < (int)uVar7);
      }
      _memcpy(param_2,lVar13,(long)(int)uVar7);
      param_2 = (long *)((long)param_2 + (long)(int)uVar7);
    }
    else {
      _memcpy(param_2,lVar13,uVar9 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar7);
    }
  }
  return param_2;
}



/* Entry: 109c67904; end: 109c679eb;  */

ulong FUN_109c67904(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uStack_48;
  uint *puStack_40;
  uint uStack_38;
  
  puStack_40 = (uint *)(param_1 + 0x10);
  uVar5 = (ulong)*puStack_40;
  uStack_38 = *(uint *)(param_1 + 0x1c);
  if (uStack_38 != *(uint *)(param_1 + 0x14)) {
    uStack_48 = *(ulong *)(*(long *)(param_1 + 0x20) + (ulong)uStack_38 * 8);
    if ((uStack_48 & 1) != 0) {
      uStack_48 = *(ulong *)(**(long **)(uStack_48 - 1) + 0x20);
    }
    do {
      uVar2 = *(uint *)(uStack_48 + 0x10);
      if (-1 < (char)*(byte *)(uStack_48 + 0x1f)) {
        uVar2 = (uint)*(byte *)(uStack_48 + 0x1f);
      }
      iVar1 = uVar2 + ((int)LZCOUNT(uVar2) * -9 + 0x160U >> 6) + 10;
      uVar5 = uVar5 + (long)iVar1 + (ulong)((int)LZCOUNT(iVar1) * -9 + 0x160U >> 6);
      func_0x000107c27d54(&uStack_48);
    } while (uStack_48 != 0);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    uVar5 = lVar3 + uVar5;
  }
  *(int *)(param_1 + 0x30) = (int)uVar5;
  return uVar5;
}



/* Entry: 109c679ec; end: 109c679ef;  */

void FUN_109c679ec(long param_1,long param_2)

{
  func_0x000106af6bb0(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 109c679f0; end: 109c67a3b;  */

void FUN_109c679f0(long param_1,long param_2)

{
  func_0x000106af6bb0(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 109c67a3c; end: 109c67aa3;  */

undefined8 * FUN_109c67a3c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b2f250;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_109c69ef8(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 6) = 0;
  return param_1;
}



/* Entry: 109c67aa4; end: 109c67ad7;  */

long FUN_109c67aa4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_109c69f4c(param_1 + 0x10);
  return param_1;
}



/* Entry: 109c67ad8; end: 109c67adb;  */

long FUN_109c67ad8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_109c69f4c(param_1 + 0x10);
  return param_1;
}



/* Entry: 109c67adc; end: 109c67aef;  */

void FUN_109c67adc(void)

{
  FUN_109c67aa4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c67af0; end: 109c67afb;  */

undefined ** FUN_109c67af0(void)

{
  return &PTR_DAT_110b2f368;
}



/* Entry: 109c67afc; end: 109c67b53;  */

void FUN_109c67afc(long param_1)

{
  ulong *puVar1;
  
  if (*(int *)(param_1 + 0x14) != 1) {
    func_0x000107c30320(param_1 + 0x10,0x10000180010,0);
  }
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



/* Entry: 109c67b54; end: 109c67ddb;  */

long * FUN_109c67b54(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar13;
  ulong uStack_68;
  uint *puStack_60;
  uint uStack_58;
  long lVar12;
  
  puVar13 = (uint *)(param_1 + 0x10);
  uVar6 = *puVar13;
  uVar10 = (ulong)uVar6;
  if (uVar6 != 0) {
    puStack_60 = puVar13;
    if ((uVar6 == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      uVar6 = *(uint *)(param_1 + 0x1c);
      if (uVar6 != *(uint *)(param_1 + 0x14)) {
        uStack_68 = *(ulong *)(*(long *)(param_1 + 0x20) + (ulong)uVar6 * 8);
        plVar5 = param_2;
        uStack_58 = uVar6;
        if ((uStack_68 & 1) != 0) {
          uStack_68 = *(ulong *)(**(long **)(uStack_68 - 1) + 0x20);
        }
        do {
          param_2 = (long *)(uStack_68 + 8);
          FUN_109c67ddc(param_2,uStack_68 + 0x10,plVar5,param_3);
          func_0x000107c27d54(&uStack_68);
          plVar5 = param_2;
        } while (uStack_68 != 0);
      }
    }
    else {
      puVar8 = (undefined8 *)(uVar10 << 4);
      puVar1 = puVar8;
      __Znam();
      _bzero();
      uStack_58 = *(uint *)(param_1 + 0x1c);
      puVar3 = puVar1;
      if (uStack_58 == *(uint *)(param_1 + 0x14)) {
        uStack_58 = 0;
        uStack_68 = 0;
      }
      else {
        uStack_68 = *(ulong *)(*(long *)(param_1 + 0x20) + (ulong)uStack_58 * 8);
        if ((uStack_68 & 1) != 0) {
          uStack_68 = *(ulong *)(**(long **)(uStack_68 - 1) + 0x20);
        }
      }
      while (uStack_68 != 0) {
        *puVar3 = *(undefined8 *)(uStack_68 + 8);
        puVar3[1] = (undefined8 *)(uStack_68 + 8);
        func_0x000107c27d54(&uStack_68);
        puVar3 = puVar3 + 2;
      }
      FUN_109c6a4ac(puVar1,puVar1 + uVar10 * 2,LZCOUNT(uVar10) * -2 + 0x7e,1);
      lVar11 = 8;
      plVar5 = param_2;
      do {
        param_2 = *(long **)((long)puVar1 + lVar11);
        FUN_109c67ddc(param_2,param_2 + 1,plVar5,param_3);
        lVar11 = lVar11 + 0x10;
        puVar8 = puVar8 + -2;
        plVar5 = param_2;
      } while (puVar8 != (undefined8 *)0x0);
      __ZdaPv(puVar1);
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar10 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar7 = (ulong)*(char *)(uVar10 + 0x1f);
    if ((long)uVar7 < 0) {
      lVar11 = *(long *)(uVar10 + 8);
      uVar7 = (ulong)*(uint *)(uVar10 + 0x10);
    }
    else {
      lVar11 = uVar10 + 8;
    }
    uVar6 = (uint)uVar7;
    if (*param_3 - (long)param_2 < (long)(int)uVar6) {
      lVar12 = (*param_3 - (long)param_2) + 0x10;
      if ((int)lVar12 < (int)uVar6) {
        do {
          iVar9 = (int)lVar12;
          _memcpy(param_2,lVar11,(long)iVar9);
          uVar6 = (int)uVar7 - iVar9;
          uVar7 = (ulong)uVar6;
          lVar11 = lVar11 + iVar9;
          plVar4 = (long *)*param_3;
          plVar5 = (long *)((long)param_2 + (long)iVar9);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar2 + (long)((int)plVar5 - (int)plVar4));
            plVar4 = (long *)*param_3;
            param_2 = plVar5;
          } while (plVar4 <= plVar5);
          lVar12 = (long)plVar4 + (0x10 - (long)param_2);
        } while ((int)lVar12 < (int)uVar6);
      }
      _memcpy(param_2,lVar11,(long)(int)uVar6);
      param_2 = (long *)((long)param_2 + (long)(int)uVar6);
    }
    else {
      _memcpy(param_2,lVar11,uVar7 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar6);
    }
  }
  return param_2;
}



/* Entry: 109c67ddc; end: 109c68003;  */

byte * FUN_109c67ddc(ulong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  
  puVar2 = (undefined8 *)*param_4;
  if (puVar2 <= param_3) {
    do {
      if (*(char *)(param_4 + 7) == '\x01') {
        param_3 = param_4 + 2;
        break;
      }
      puVar5 = param_4;
      func_0x000107c303dc();
      param_3 = (undefined8 *)((long)puVar5 + (long)((int)param_3 - (int)puVar2));
      puVar2 = (undefined8 *)*param_4;
    } while (puVar2 <= param_3);
  }
  *(undefined1 *)param_3 = 10;
  puVar2 = (undefined8 *)((long)param_3 + 2);
  *(char *)((long)param_3 + 1) = (char)((int)LZCOUNT(*param_1) * 0x3ff7 + 0x280U >> 6) + '\n';
  puVar5 = (undefined8 *)*param_4;
  if (puVar5 <= puVar2) {
    do {
      if (*(char *)(param_4 + 7) == '\x01') {
        puVar2 = param_4 + 2;
        break;
      }
      puVar1 = param_4;
      func_0x000107c303dc();
      puVar2 = (undefined8 *)((long)puVar1 + (long)((int)puVar2 - (int)puVar5));
      puVar5 = (undefined8 *)*param_4;
    } while (puVar5 <= puVar2);
  }
  uVar6 = *param_1;
  pbVar3 = (byte *)((long)puVar2 + 1);
  *(undefined1 *)puVar2 = 8;
  pbVar4 = pbVar3;
  uVar8 = uVar6;
  if (0x7f < uVar6) {
    do {
      pbVar3 = pbVar4 + 1;
      *pbVar4 = (byte)uVar8 | 0x80;
      uVar6 = uVar8 >> 7;
      uVar9 = uVar8 >> 0xe;
      pbVar4 = pbVar3;
      uVar8 = uVar6;
    } while (uVar9 != 0);
  }
  pbVar4 = pbVar3 + 1;
  *pbVar3 = (byte)uVar6;
  pbVar3 = (byte *)*param_4;
  if (pbVar3 <= pbVar4) {
    do {
      if (*(char *)(param_4 + 7) == '\x01') {
        pbVar4 = (byte *)(param_4 + 2);
        break;
      }
      puVar2 = param_4;
      func_0x000107c303dc();
      pbVar4 = (byte *)((long)puVar2 + (long)((int)pbVar4 - (int)pbVar3));
      pbVar3 = (byte *)*param_4;
    } while (pbVar3 <= pbVar4);
  }
  uVar7 = *param_2;
  *pbVar4 = 0x11;
  *(undefined8 *)(pbVar4 + 1) = uVar7;
  return pbVar4 + 9;
}



/* Entry: 109c68004; end: 109c68007;  */

void FUN_109c68004(long param_1,long param_2)

{
  FUN_109c6b4a4(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 109c68008; end: 109c68053;  */

void FUN_109c68008(long param_1,long param_2)

{
  FUN_109c6b4a4(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 109c68054; end: 109c680c7;  */

undefined8 * FUN_109c68054(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b2ef30;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  if (*(int *)(param_3 + 0x18) != 0) {
    func_0x000107c303bc(param_1 + 2,param_3 + 0x10);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



/* Entry: 109c680c8; end: 109c680fb;  */

long FUN_109c680c8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 109c680fc; end: 109c680ff;  */

long FUN_109c680fc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 109c68100; end: 109c68113;  */

void FUN_109c68100(void)

{
  FUN_109c680c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109c68114; end: 109c6811f;  */

undefined ** FUN_109c68114(void)

{
  return &PTR_DAT_110b2f3b0;
}



/* Entry: 109c68120; end: 109c68167;  */

void FUN_109c68120(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x00010598fd84(param_1 + 0x10);
  }
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


