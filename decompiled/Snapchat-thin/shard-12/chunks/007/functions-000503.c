/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109734580; end: 1097347a7;  */

undefined4 *
FUN_109734580(undefined4 *param_1,undefined4 param_2,long param_3,long param_4,int *param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  ushort *puVar11;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 6) = 0xffffffff00000000;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0xffffffff00000000;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  param_1[0x22] = param_2;
  lVar10 = *(long *)(param_3 + 0x20);
  *(long *)(param_1 + 0x24) = param_3;
  *(long *)(param_1 + 0x26) = lVar10;
  *(long *)(param_1 + 0x28) = param_4;
  param_1[0x2a] = 0;
  param_1[0x35] = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 0x10000;
  *(undefined2 *)(param_1 + 0x39) = 0;
  if (param_5 != (int *)0x0) {
    if (*param_5 != 0) {
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(param_5,0x10);
        if (bVar7) {
          *param_5 = *param_5 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    *(int **)(param_1 + 0x36) = param_5;
    *(undefined1 *)(param_1 + 0x34) = 0;
    lVar10 = *(long *)(param_5 + 4);
    uVar4 = param_5[6];
    *(long *)(param_1 + 0x2c) = lVar10;
    *(ulong *)(param_1 + 0x2e) = lVar10 + (ulong)uVar4;
    uVar5 = uVar4 << 6;
    if (uVar5 < 0x4001) {
      uVar5 = 0x4000;
    }
    if (0x3ffffffe < uVar5) {
      uVar5 = 0x3fffffff;
    }
    uVar1 = 0x3fffffff;
    if (uVar4 >> 0x1a == 0) {
      uVar1 = uVar5;
    }
    param_1[0x30] = uVar4;
    param_1[0x31] = uVar1;
    param_1[0x35] = 0;
    param_1[0x2a] = 0;
    param_1[0x33] = 0;
    lVar10 = *(long *)(param_1 + 0x26);
  }
  *(undefined8 *)(param_1 + 0x3a) = 0;
  puVar8 = (undefined8 *)(lVar10 + 0x118);
  FUN_10972ad34();
  puVar2 = &UNK_10dfe4888;
  if ((undefined *)*puVar8 != (undefined *)0x0) {
    puVar2 = (undefined *)*puVar8;
  }
  puVar3 = &UNK_10dfe4888;
  if (3 < *(uint *)(puVar2 + 0x18)) {
    puVar3 = *(undefined **)(puVar2 + 0x10);
  }
  *(undefined **)(param_1 + 0x3c) = puVar3;
  lVar10 = *(long *)(param_1 + 0x26) + 0x118;
  FUN_10972ad34();
  *(long *)(param_1 + 0x3e) = lVar10;
  uVar9 = *(undefined8 *)(param_1 + 0x3c);
  FUN_1097012cc();
  *(undefined8 *)(param_1 + 0x40) = uVar9;
  if ((param_1[0x22] == 1) && (*(int *)(*(long *)(param_1 + 0x24) + 0x78) != 0)) {
    FUN_10971d8b8();
  }
  else {
    uVar9 = 0;
  }
  *(undefined8 *)(param_1 + 0x42) = uVar9;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_1097347a8(param_1 + 0x44,*(undefined8 *)(param_4 + 0x70),*(undefined4 *)(param_4 + 0x60));
  param_1[0x4a] = *(undefined4 *)(param_4 + 0x38);
  *(undefined8 *)(param_1 + 0x4d) = 0x4000000000;
  *(undefined8 *)(param_1 + 0x4b) = 0xffffffff00000001;
  puVar11 = *(ushort **)(param_1 + 0x3c);
  if ((ushort)(*puVar11 >> 8 | *puVar11 << 8) == 1) {
    bVar7 = *(char *)((long)puVar11 + 5) != '\0' || (char)puVar11[2] != '\0';
  }
  else {
    bVar7 = false;
  }
  *(bool *)(param_1 + 0x4f) = bVar7;
  *(undefined4 *)((long)param_1 + 0x13d) = 0x101;
  param_1[0x51] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x52) = 0xffffffff;
  func_0x000109734828(param_1 + 2,param_1,0);
  func_0x000109734828(param_1 + 0x12,param_1,1);
  return param_1;
}



/* Entry: 1097347a8; end: 1097348b3;  */

void FUN_1097347a8(ulong *param_1,uint *param_2,int param_3)

{
  ulong uVar1;
  int iVar2;
  uint *puVar3;
  
  if (param_3 != 0) {
    uVar1 = *param_1;
    puVar3 = param_2;
    iVar2 = param_3;
    do {
      uVar1 = 1L << ((ulong)(*puVar3 >> 4) & 0x3f) | uVar1;
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + 5;
    } while (iVar2 != 0);
    *param_1 = uVar1;
    uVar1 = param_1[1];
    puVar3 = param_2;
    iVar2 = param_3;
    do {
      uVar1 = 1L << ((ulong)*puVar3 & 0x3f) | uVar1;
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + 5;
    } while (iVar2 != 0);
    param_1[1] = uVar1;
    uVar1 = param_1[2];
    do {
      uVar1 = 1L << ((ulong)(*param_2 >> 9) & 0x3f) | uVar1;
      param_3 = param_3 + -1;
      param_2 = param_2 + 5;
    } while (param_3 != 0);
    param_1[2] = uVar1;
  }
  return;
}



/* Entry: 1097348b4; end: 10973493b;  */

void FUN_1097348b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uStack_24;
  
  uStack_24 = 0;
  lVar2 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(lVar2 + 0x10);
  }
  lVar2 = param_1;
  (**(code **)(*(long *)(param_1 + 0x90) + 0x30))
            (param_1,*(undefined8 *)(param_1 + 0x98),param_2,&uStack_24,uVar1);
  if ((int)lVar2 != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(lVar2 + 0x28);
    }
    (**(code **)(*(long *)(param_1 + 0x90) + 0x48))
              (param_1,*(undefined8 *)(param_1 + 0x98),uStack_24,uVar1);
  }
  return;
}



/* Entry: 10973493c; end: 109734f4b;  */

undefined8 FUN_10973493c(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  byte bVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  ulong uVar14;
  
  iVar15 = 0;
  uVar16 = 0;
  uVar5 = 0;
  uVar12 = 0;
  *(byte *)(param_3 + 0xb8) = *(byte *)(param_3 + 0xb8) | 8;
  lVar8 = *(long *)(param_3 + 0x70);
  uVar19 = *(uint *)(param_3 + 0x60);
  iVar7 = 1;
  uVar14 = 0x1f;
  uVar13 = 0x1f;
  uVar6 = uVar5;
  if (uVar19 == 0) goto LAB_109734dbc;
LAB_109734980:
  uVar6 = (uint)uVar12;
  if ((&UNK_10dfe7e4a)[uVar14] != '\n') {
    uVar6 = uVar5;
  }
  bVar2 = *(byte *)(lVar8 + uVar12 * 0x14 + 0x12);
  uVar17 = (long)(char)(&UNK_10dfe7b80)[uVar14];
  if (((uint)(byte)(&UNK_10f57ef7e)[uVar14 * 2] <= (uint)bVar2) &&
     (bVar2 <= (byte)(&UNK_10f57ef7f)[uVar14 * 2])) {
    uVar17 = (ulong)((uint)bVar2 - (uint)(byte)(&UNK_10f57ef7e)[uVar14 * 2]);
  }
  uVar17 = (ulong)(byte)(&UNK_10dfe74cc)[uVar17 + (long)*(short *)(&UNK_10dfe7a6c + uVar14 * 2)];
  iVar9 = iVar7;
  do {
    uVar11 = (uint)uVar12;
    uVar14 = (ulong)(byte)(&UNK_10dfe7c0a)[uVar17 & 0xffffffff];
    uVar13 = (uint)(byte)(&UNK_10dfe7c0a)[uVar17 & 0xffffffff];
    uVar5 = (uint)uVar16;
    iVar7 = iVar9;
    switch((&UNK_10dfe7ca0)[uVar17 & 0xffffffff]) {
    case 1:
      uVar11 = uVar5 - 1;
      if (uVar6 < uVar5) {
        lVar18 = uVar16 - uVar6;
        puVar3 = (undefined1 *)(lVar8 + (ulong)uVar6 * 0x14 + 0xf);
        do {
          *puVar3 = (char)(iVar9 << 4);
          lVar18 = lVar18 + -1;
          puVar3 = puVar3 + 0x14;
        } while (lVar18 != 0);
      }
      goto code_r0x000109734d3c;
    case 2:
      uVar16 = (ulong)(uVar11 + 1);
      break;
    case 3:
      uVar11 = uVar5 - 1;
      if (uVar6 < uVar5) {
        lVar18 = uVar16 - uVar6;
        pbVar4 = (byte *)(lVar8 + (ulong)uVar6 * 0x14 + 0xf);
        do {
          *pbVar4 = (byte)(iVar9 << 4) | 1;
          lVar18 = lVar18 + -1;
          pbVar4 = pbVar4 + 0x14;
        } while (lVar18 != 0);
      }
      goto code_r0x000109734d3c;
    case 4:
      uVar11 = uVar5 - 1;
      if (uVar6 < uVar5) {
        lVar18 = uVar16 - uVar6;
        pbVar4 = (byte *)(lVar8 + (ulong)uVar6 * 0x14 + 0xf);
        do {
          *pbVar4 = (byte)(iVar9 << 4) | 4;
          lVar18 = lVar18 + -1;
          pbVar4 = pbVar4 + 0x14;
        } while (lVar18 != 0);
      }
      iVar7 = 1;
      if (iVar9 != 0xf) {
        iVar7 = iVar9 + 1;
      }
      *(uint *)(param_3 + 0xc0) = *(uint *)(param_3 + 0xc0) | 0x40;
      break;
    case 5:
      uVar16 = (ulong)(uVar11 + 1);
code_r0x000109734acc:
      iVar15 = 5;
      iVar7 = iVar9;
      break;
    case 6:
      if (iVar15 == 6) {
        uVar11 = uVar5 - 1;
        if (uVar6 < uVar5) {
          lVar18 = uVar16 - uVar6;
          pbVar4 = (byte *)(lVar8 + (ulong)uVar6 * 0x14 + 0xf);
          do {
            *pbVar4 = (byte)(iVar9 << 4) | 5;
            lVar18 = lVar18 + -1;
            pbVar4 = pbVar4 + 0x14;
          } while (lVar18 != 0);
        }
        iVar7 = 1;
        if (iVar9 != 0xf) {
          iVar7 = iVar9 + 1;
        }
        goto code_r0x000109734eb0;
      }
      if (iVar15 == 5) {
        uVar11 = uVar5 - 1;
        if (uVar6 < uVar5) {
          lVar18 = uVar16 - uVar6;
          pbVar4 = (byte *)(lVar8 + (ulong)uVar6 * 0x14 + 0xf);
          do {
            *pbVar4 = (byte)(iVar9 << 4) | 4;
            lVar18 = lVar18 + -1;
            pbVar4 = pbVar4 + 0x14;
          } while (lVar18 != 0);
        }
        iVar7 = 1;
        if (iVar9 != 0xf) {
          iVar7 = iVar9 + 1;
        }
        *(uint *)(param_3 + 0xc0) = *(uint *)(param_3 + 0xc0) | 0x40;
        iVar9 = iVar7;
        goto code_r0x000109734acc;
      }
      if (iVar15 == 1) {
        uVar11 = uVar5 - 1;
        if (uVar6 < uVar5) {
          lVar18 = uVar16 - uVar6;
          puVar3 = (undefined1 *)(lVar8 + (ulong)uVar6 * 0x14 + 0xf);
          do {
            *puVar3 = (char)(iVar9 << 4);
            lVar18 = lVar18 + -1;
            puVar3 = puVar3 + 0x14;
          } while (lVar18 != 0);
        }
        iVar15 = 1;
        iVar7 = iVar15;
        if (iVar9 != 0xf) {
          iVar7 = iVar9 + 1;
        }
      }
      break;
    case 7:
      uVar11 = uVar5 - 1;
      if (uVar6 < uVar5) {
        lVar18 = uVar16 - uVar6;
        pbVar4 = (byte *)(lVar8 + (ulong)uVar6 * 0x14 + 0xf);
        do {
          *pbVar4 = (byte)(iVar9 << 4) | 2;
          lVar18 = lVar18 + -1;
          pbVar4 = pbVar4 + 0x14;
        } while (lVar18 != 0);
      }
      goto code_r0x000109734d3c;
    case 8:
      uVar11 = uVar5 - 1;
      if (uVar6 < uVar5) {
        lVar18 = uVar16 - uVar6;
        pbVar4 = (byte *)(lVar8 + (ulong)uVar6 * 0x14 + 0xf);
        do {
          *pbVar4 = (byte)(iVar9 << 4) | 3;
          lVar18 = lVar18 + -1;
          pbVar4 = pbVar4 + 0x14;
        } while (lVar18 != 0);
      }
      goto code_r0x000109734d3c;
    case 0xb:
      uVar16 = (ulong)(uVar11 + 1);
      if (uVar6 < uVar11 + 1) {
        lVar18 = uVar16 - uVar6;
        pbVar4 = (byte *)(lVar8 + (ulong)uVar6 * 0x14 + 0xf);
        do {
          *pbVar4 = (byte)(iVar9 << 4) | 5;
          lVar18 = lVar18 + -1;
          pbVar4 = pbVar4 + 0x14;
        } while (lVar18 != 0);
      }
code_r0x000109734d3c:
      iVar7 = 1;
      if (iVar9 != 0xf) {
        iVar7 = iVar9 + 1;
      }
      break;
    case 0xc:
      uVar16 = (ulong)(uVar11 + 1);
code_r0x000109734eb0:
      iVar15 = 6;
      break;
    case 0xd:
      if (uVar6 < uVar11) {
        lVar18 = uVar12 - uVar6;
        puVar3 = (undefined1 *)(lVar8 + (ulong)uVar6 * 0x14 + 0xf);
        do {
          *puVar3 = (char)(iVar9 << 4);
          lVar18 = lVar18 + -1;
          puVar3 = puVar3 + 0x14;
        } while (lVar18 != 0);
      }
      goto code_r0x000109734d84;
    case 0xe:
      if (uVar6 < uVar11) {
        lVar18 = uVar12 - uVar6;
        pbVar4 = (byte *)(lVar8 + (ulong)uVar6 * 0x14 + 0xf);
        do {
          *pbVar4 = (byte)(iVar9 << 4) | 1;
          lVar18 = lVar18 + -1;
          pbVar4 = pbVar4 + 0x14;
        } while (lVar18 != 0);
      }
      goto code_r0x000109734d84;
    case 0xf:
      if (uVar6 < uVar11) {
        lVar18 = uVar12 - uVar6;
        pbVar4 = (byte *)(lVar8 + (ulong)uVar6 * 0x14 + 0xf);
        do {
          *pbVar4 = (byte)(iVar9 << 4) | 4;
          lVar18 = lVar18 + -1;
          pbVar4 = pbVar4 + 0x14;
        } while (lVar18 != 0);
      }
      iVar7 = 1;
      if (iVar9 != 0xf) {
        iVar7 = iVar9 + 1;
      }
      *(uint *)(param_3 + 0xc0) = *(uint *)(param_3 + 0xc0) | 0x40;
      goto code_r0x000109734d94;
    case 0x10:
      if (uVar6 < uVar11) {
        lVar18 = uVar12 - uVar6;
        pbVar4 = (byte *)(lVar8 + (ulong)uVar6 * 0x14 + 0xf);
        do {
          *pbVar4 = (byte)(iVar9 << 4) | 5;
          lVar18 = lVar18 + -1;
          pbVar4 = pbVar4 + 0x14;
        } while (lVar18 != 0);
      }
      goto code_r0x000109734d84;
    case 0x11:
      if (uVar6 < uVar11) {
        lVar18 = uVar12 - uVar6;
        pbVar4 = (byte *)(lVar8 + (ulong)uVar6 * 0x14 + 0xf);
        do {
          *pbVar4 = (byte)(iVar9 << 4) | 2;
          lVar18 = lVar18 + -1;
          pbVar4 = pbVar4 + 0x14;
        } while (lVar18 != 0);
      }
      goto code_r0x000109734d84;
    case 0x12:
      uVar16 = (ulong)(uVar11 + 1);
      iVar15 = 1;
      break;
    case 0x13:
      if (uVar6 < uVar11) {
        lVar18 = uVar12 - uVar6;
        pbVar4 = (byte *)(lVar8 + (ulong)uVar6 * 0x14 + 0xf);
        do {
          *pbVar4 = (byte)(iVar9 << 4) | 3;
          lVar18 = lVar18 + -1;
          pbVar4 = pbVar4 + 0x14;
        } while (lVar18 != 0);
      }
code_r0x000109734d84:
      iVar7 = 1;
      if (iVar9 != 0xf) {
        iVar7 = iVar9 + 1;
      }
code_r0x000109734d94:
      uVar11 = uVar11 - 1;
      uVar16 = uVar12;
    }
    uVar5 = 0;
    if ((&UNK_10dfe7ed4)[uVar14] != '\t') {
      uVar5 = uVar6;
    }
    uVar12 = (ulong)(uVar11 + 1);
    uVar6 = uVar5;
    if (uVar11 + 1 != uVar19) goto LAB_109734980;
LAB_109734dbc:
    if (uVar13 == 0x1f) {
      uVar6 = *(uint *)(param_3 + 0x60);
      if (uVar6 == 0) {
        return 0;
      }
      uVar12 = 0;
      pcVar10 = (char *)(*(long *)(param_3 + 0x70) + 0x23);
      break;
    }
    uVar17 = (long)*(short *)(&UNK_10dfe7d36 + (ulong)uVar13 * 2) + 0xffffffff;
    uVar12 = (ulong)uVar19;
    iVar9 = iVar7;
  } while( true );
  while( true ) {
    uVar16 = uVar12 + 1;
    cVar1 = *pcVar10;
    uVar12 = uVar16;
    pcVar10 = pcVar10 + 0x14;
    if (*(char *)(*(long *)(param_3 + 0x70) + 0xf) != cVar1) break;
    uVar16 = (ulong)uVar6;
    if (uVar6 - 1 == uVar12) break;
  }
  uVar12 = 0;
  do {
    uVar14 = uVar16;
    FUN_109710ea8(param_3,3,uVar12,uVar14,1,0);
    uVar5 = *(uint *)(param_3 + 0x60);
    uVar19 = (uint)uVar14;
    if (uVar5 <= uVar19 + 1) {
      uVar5 = uVar19 + 1;
    }
    uVar16 = uVar14;
    do {
      iVar7 = (int)uVar16;
      uVar16 = (ulong)uVar5;
      if (uVar5 - 1 == iVar7) break;
      uVar16 = (ulong)(iVar7 + 1);
    } while (*(char *)(*(long *)(param_3 + 0x70) + (uVar14 & 0xffffffff) * 0x14 + 0xf) ==
             *(char *)(*(long *)(param_3 + 0x70) + 0xf + uVar16 * 0x14));
    uVar12 = uVar14;
    if (uVar6 <= uVar19) {
      return 0;
    }
  } while( true );
}



/* Entry: 109734f4c; end: 1097370d7;  */

long FUN_109734f4c(long param_1,long param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  bool bVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  char cVar11;
  long lVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  char *pcVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  byte *pbVar21;
  long lVar22;
  ushort *puVar23;
  long lVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  undefined8 uVar30;
  uint uVar31;
  long *plVar32;
  ulong uVar33;
  long lVar34;
  ulong uVar35;
  undefined8 *puVar36;
  uint uVar37;
  ulong uVar38;
  ulong uVar39;
  uint uVar40;
  ulong uVar41;
  undefined8 uVar42;
  int iStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = &UNK_10f57f093;
  lVar24 = param_3;
  lVar12 = param_2;
  FUN_1096f53f4();
  if ((int)lVar24 == 0) {
    lVar22 = 0;
  }
  else {
    plVar32 = *(long **)(param_1 + 0x88);
    iVar28 = *(int *)((long)plVar32 + 0xc);
    if (iVar28 == -1) {
      if (*(int *)(*plVar32 + 8) == 0) {
        iVar28 = 0;
      }
      else {
        iStack_74 = 0;
        lVar24 = *(long *)(*(long *)(param_2 + 0x90) + 0x10);
        if (lVar24 == 0) {
          uVar30 = 0;
        }
        else {
          uVar30 = *(undefined8 *)(lVar24 + 0x10);
        }
        lVar24 = param_2;
        (**(code **)(*(long *)(param_2 + 0x90) + 0x30))
                  (param_2,*(undefined8 *)(param_2 + 0x98),*(int *)(*plVar32 + 8),&iStack_74,uVar30)
        ;
        iVar28 = 0;
        if ((int)lVar24 != 0) {
          iVar28 = iStack_74;
        }
      }
      *(int *)((long)plVar32 + 0xc) = iVar28;
    }
    if ((iVar28 != 0) && (uVar35 = (ulong)*(uint *)(param_3 + 0x60), *(uint *)(param_3 + 0x60) != 0)
       ) {
      uVar30 = *(undefined8 *)(param_2 + 0x20);
      pcVar15 = (char *)(*(long *)(param_3 + 0x70) + 0x13);
      do {
        if (*pcVar15 == '\x04') {
          uStack_70 = *(undefined4 *)(pcVar15 + -0x13);
          plVar7 = plVar32 + 8;
          iStack_74 = iVar28;
          iStack_6c = iVar28;
          func_0x000109735e6c(plVar7,&iStack_74,2,uVar30);
          if (((ulong)plVar7 & 1) == 0) {
            plVar7 = plVar32 + 8;
            func_0x000109735e6c(plVar7,&uStack_70,2,uVar30);
            if (((ulong)plVar7 & 1) != 0) goto LAB_109735044;
            plVar7 = plVar32 + 0xe;
            func_0x000109735e6c(plVar7,&iStack_74,2,uVar30);
            if (((ulong)plVar7 & 1) != 0) goto LAB_109735044;
            plVar7 = plVar32 + 0xe;
            func_0x000109735e6c(plVar7,&uStack_70,2,uVar30);
            if (((ulong)plVar7 & 1) != 0) goto LAB_109735044;
            plVar7 = plVar32 + 0xb;
            func_0x000109735e6c(plVar7,&iStack_74,2,uVar30);
            if (((ulong)plVar7 & 1) == 0) {
              plVar7 = plVar32 + 0xb;
              func_0x000109735e6c(plVar7,&uStack_70,2,uVar30);
              if (((ulong)plVar7 & 1) != 0) goto LAB_1097350a4;
              plVar7 = plVar32 + 5;
              func_0x000109735e6c(plVar7,&iStack_74,2,uVar30);
              if (((ulong)plVar7 & 1) != 0) goto LAB_1097350a4;
              plVar7 = plVar32 + 5;
              func_0x000109735e6c(plVar7,&uStack_70,2,uVar30);
              cVar11 = '\v';
              if ((int)plVar7 == 0) {
                cVar11 = '\x04';
              }
            }
            else {
LAB_1097350a4:
              cVar11 = '\v';
            }
          }
          else {
LAB_109735044:
            cVar11 = '\b';
          }
          *pcVar15 = cVar11;
        }
        pcVar15 = pcVar15 + 0x14;
        uVar35 = uVar35 - 1;
      } while (uVar35 != 0);
    }
    lVar22 = param_2;
    FUN_10970b854(param_2,param_3,4,0xb,0xe,0xe);
    uVar3 = *(uint *)(param_3 + 0x60);
    if (uVar3 != 0) {
      lVar12 = *(long *)(param_3 + 0x70);
      bVar5 = *(byte *)(lVar12 + 0xf);
      lVar24 = 0x23;
      uVar35 = 0;
      do {
        uVar39 = (ulong)uVar3;
        if (uVar3 - 1 == uVar35) break;
        uVar39 = uVar35 + 1;
        pbVar13 = (byte *)(lVar12 + lVar24);
        lVar24 = lVar24 + 0x14;
        uVar35 = uVar39;
      } while (bVar5 == *pbVar13);
      uVar35 = 0;
      do {
        bVar5 = bVar5 & 0xf;
        uVar29 = (uint)uVar39;
        if (bVar5 < 2) {
          lVar24 = *(long *)(param_1 + 0x88);
LAB_1097351e0:
          func_0x0001097364cc(lVar24,*(undefined8 *)(param_2 + 0x20),param_3,uVar35,uVar39);
        }
        else if (((bVar5 == 2) || (bVar5 == 4)) &&
                ((lVar24 = *(long *)(param_1 + 0x88), *(char *)(lVar24 + 9) != '\x01' ||
                 (*(char *)(lVar12 + (ulong)(uVar29 - 1) * 0x14 + 0x12) != '\v'))))
        goto LAB_1097351e0;
        lVar12 = *(long *)(param_3 + 0x70);
        uVar40 = *(uint *)(param_3 + 0x60);
        bVar5 = *(byte *)(lVar12 + (uVar39 & 0xffffffff) * 0x14 + 0xf);
        if (uVar40 <= uVar29 + 1) {
          uVar40 = uVar29 + 1;
        }
        uVar17 = uVar39;
        do {
          iVar28 = (int)uVar17;
          uVar17 = (ulong)uVar40;
          if (uVar40 - 1 == iVar28) break;
          uVar17 = (ulong)(iVar28 + 1);
        } while (bVar5 == *(byte *)(lVar12 + 0xf + uVar17 * 0x14));
        uVar35 = uVar39;
        uVar39 = uVar17;
      } while (uVar29 < uVar3);
    }
    puVar9 = &UNK_10f57f0b2;
    FUN_1096f53f4();
    lVar24 = param_3;
    lVar12 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar22;
  }
  ___stack_chk_fail();
  if (*(int *)(puVar9 + 0x60) != 0) {
    puVar8 = puVar9;
    FUN_1096f53f4();
    if ((int)puVar8 != 0) {
      uVar3 = *(uint *)(puVar9 + 0x60);
      if (uVar3 != 0) {
        uVar35 = 0;
        lVar34 = *(long *)(puVar9 + 0x70);
        lVar22 = 0x23;
        do {
          if (uVar3 - 1 == uVar35) {
            uVar35 = (ulong)uVar3;
            break;
          }
          uVar35 = uVar35 + 1;
          pcVar15 = (char *)(lVar34 + lVar22);
          lVar22 = lVar22 + 0x14;
        } while (*(char *)(lVar34 + 0xf) == *pcVar15);
        uVar39 = 0;
LAB_109735344:
        uVar17 = uVar35;
        uVar35 = uVar17 & 0xffffffff;
        plVar32 = *(long **)(lVar24 + 0x88);
        iVar28 = *(int *)((long)plVar32 + 0xc);
        lVar22 = lVar34 + (uVar39 & 0xffffffff) * 0x14;
        uVar29 = (uint)uVar17;
        uVar40 = (uint)uVar39;
        if ((uVar40 < uVar29) && (iVar28 != 0)) {
          lVar18 = uVar35 - (uVar39 & 0xffffffff);
          puVar23 = (ushort *)(lVar22 + 0xc);
          do {
            if ((*(int *)(puVar23 + -6) == iVar28) && (((*puVar23 ^ 0xffff) & 0x60) == 0)) {
              *(undefined1 *)(puVar23 + 3) = 4;
              *puVar23 = *puVar23 & 0xff9f;
            }
            puVar23 = puVar23 + 10;
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
        }
        uVar25 = *(uint *)(plVar32 + 0x13);
        bVar6 = uVar25 != 0;
        uVar41 = uVar39;
        if (uVar40 < uVar29) {
          uVar10 = uVar39 & 0xffffffff;
          uVar16 = uVar40 + 1;
          lVar18 = lVar34 + 0x13;
          pbVar13 = (byte *)(lVar18 + (uVar39 & 0xffffffff) * 0x14);
          uVar19 = uVar39;
          pbVar21 = pbVar13;
          uVar27 = uVar16;
          do {
            iVar28 = (int)uVar19;
            if (3 < *pbVar21) {
              uVar38 = (ulong)(iVar28 + 1U);
              if ((uVar25 == 0) || (uVar29 <= iVar28 + 1U)) goto LAB_10973547c;
              lVar20 = lVar34 + (ulong)uVar27 * 0x14;
              puVar23 = (ushort *)(lVar20 + 0xc);
              pcVar15 = (char *)(lVar20 + 0x12);
              iVar26 = -1;
              goto LAB_109735434;
            }
            uVar19 = (ulong)(iVar28 + 1U);
            uVar27 = uVar27 + 1;
            pbVar21 = pbVar21 + 0x14;
          } while (uVar29 != iVar28 + 1U);
          goto LAB_1097355bc;
        }
        if (bVar6) goto LAB_109735914;
        goto LAB_109735bd0;
      }
LAB_109735e28:
      FUN_1096f53f4(puVar9,lVar12,&UNK_10f57f0ec);
    }
    puVar9[0xb8] = puVar9[0xb8] & 0x3f;
  }
  return 0;
  while( true ) {
    uVar38 = uVar38 + 1;
    iVar26 = iVar26 + -1;
    puVar23 = puVar23 + 10;
    pcVar15 = pcVar15 + 0x14;
    if (uVar35 == uVar38) break;
LAB_109735434:
    if ((*(uint *)(puVar23 + -4) & uVar25) != 0) {
      if ((*puVar23 & 0x70) != 0x30) {
        uVar19 = (ulong)(uint)(iVar28 - iVar26);
        if ((uint)(iVar28 - iVar26) < uVar29) goto LAB_109735a98;
        bVar6 = false;
        goto LAB_109735470;
      }
      break;
    }
  }
  bVar6 = true;
LAB_109735470:
  if ((uint)uVar19 == uVar29) goto LAB_1097355bc;
  uVar38 = (ulong)((uint)uVar19 + 1);
LAB_10973547c:
  if (((uint)uVar38 < uVar29) && (*(int *)(puVar9 + 0x3c) == 0x4d6c796d)) {
    do {
      uVar25 = uVar29;
      if (uVar29 <= (int)uVar38 + 1U) {
        uVar25 = (int)uVar38 + 1;
      }
      pbVar21 = (byte *)(lVar34 + 0x12 + uVar38 * 0x14);
      do {
        uVar33 = uVar38;
        if (((*(ushort *)(pbVar21 + -6) >> 5 & 1) != 0) ||
           (0x1f < *pbVar21 || (1 << (ulong)(*pbVar21 & 0x1f) & 0x60U) == 0)) break;
        uVar38 = uVar38 + 1;
        pbVar21 = pbVar21 + 0x14;
        uVar33 = (ulong)uVar25;
      } while (uVar38 < uVar35);
      uVar25 = (uint)uVar33;
      if (((uVar25 == uVar29) ||
          (lVar20 = lVar34 + (uVar33 & 0xffffffff) * 0x14, (*(ushort *)(lVar20 + 0xc) >> 5 & 1) != 0
          )) || (*(char *)(lVar20 + 0x12) != '\x04')) break;
      uVar27 = uVar29;
      if (uVar29 <= uVar25 + 1) {
        uVar27 = uVar25 + 1;
      }
      do {
        iVar26 = (int)uVar33;
        uVar25 = iVar26 + 1;
        uVar33 = (ulong)uVar25;
        iVar28 = uVar27 - 1;
        if ((uVar29 <= uVar25) ||
           (lVar20 = lVar34 + (ulong)uVar25 * 0x14, iVar28 = iVar26,
           (*(ushort *)(lVar20 + 0xc) >> 5 & 1) != 0)) goto LAB_109735580;
        bVar5 = *(byte *)(lVar20 + 0x12);
        uVar25 = 1 << (ulong)(bVar5 & 0x1f);
      } while (bVar5 < 0x20 && (uVar25 & 0x60) != 0);
      if ((bVar5 < 0x20 && (uVar25 & 0x58c06) != 0) && (*(char *)(lVar20 + 0x13) == '\b')) {
        *(undefined1 *)(lVar20 + 0x13) = 4;
        uVar19 = uVar33;
      }
LAB_109735580:
      uVar38 = (ulong)(iVar28 + 2U);
    } while (iVar28 + 2U < uVar29);
  }
  if (uVar40 < (uint)uVar19) {
    uVar19 = (ulong)((uint)uVar19 -
                    (uint)(4 < *(byte *)(lVar34 + (uVar19 & 0xffffffff) * 0x14 + 0x13)));
  }
  if ((uint)uVar19 == uVar29) goto LAB_1097355bc;
LAB_1097355dc:
  if ((uVar29 <= (uint)uVar19) || ((uint)uVar19 <= uVar40)) goto LAB_109735628;
  do {
    lVar20 = lVar34 + (uVar19 & 0xffffffff) * 0x14;
    if (((*(ushort *)(lVar20 + 0xc) >> 5 & 1) != 0) ||
       (bVar5 = *(byte *)(lVar20 + 0x12), 0x1f < bVar5 || (1 << (ulong)(bVar5 & 0x1f) & 0x18U) == 0)
       ) goto LAB_109735628;
    uVar25 = (int)uVar19 - 1;
    uVar19 = (ulong)uVar25;
  } while (uVar40 < uVar25);
LAB_10973585c:
  uVar35 = (ulong)uVar16;
  puVar36 = (undefined8 *)(lVar34 + uVar10 * 0x14);
  if ((*(char *)((long)puVar36 + 0x13) == '\x01') &&
     ((*(char *)((long)puVar36 + 0x12) == '\x0e') !=
      ((*(ushort *)((long)puVar36 + 0xc) & 0x60) == 0x20))) {
    iVar28 = *(int *)(*plVar32 + 0xc);
    lVar20 = lVar34 + uVar35 * 0x14;
    uVar25 = (uint)uVar39;
    uVar27 = (uint)uVar41;
    if (iVar28 != 0xc) {
      if (uVar16 < uVar25) {
        pcVar15 = (char *)(lVar20 + 0x12);
        uVar39 = uVar35;
        do {
          uVar31 = (uint)uVar39;
          if (((*(ushort *)(pcVar15 + -6) >> 5 & 1) == 0) && (*pcVar15 == '\x04'))
          goto LAB_109735ac0;
          pcVar15 = pcVar15 + 0x14;
          uVar39 = (ulong)(uVar31 + 1);
        } while (uVar25 != uVar31 + 1);
      }
      uVar31 = uVar29;
      if (iVar28 == 9) {
        if (uVar29 <= uVar25 + 1) {
          uVar31 = uVar25 + 1;
        }
        uVar37 = uVar25 - 1;
        do {
          if (uVar29 <= uVar37 + 2) goto LAB_109735d80;
          bVar5 = *(byte *)(lVar18 + (ulong)(uVar37 + 2) * 0x14);
          uVar37 = uVar37 + 1;
        } while (0x1f < bVar5 || (1 << (ulong)(bVar5 & 0x1f) & 0x3800U) == 0);
      }
      else {
        if (iVar28 != 5) goto LAB_1097358b0;
        if (uVar29 <= uVar25 + 1) {
          uVar31 = uVar25 + 1;
        }
        uVar37 = uVar25 - 1;
        do {
          uVar1 = uVar37 + 2;
          if (uVar29 <= uVar1) goto LAB_109735d80;
          uVar37 = uVar37 + 1;
        } while (*(byte *)(lVar18 + (ulong)uVar1 * 0x14) < 6);
      }
LAB_109735d84:
      if (uVar37 < uVar29) goto LAB_109735d8c;
    }
LAB_1097358b0:
    uVar39 = uVar17;
    if (uVar16 < uVar25) {
      pcVar15 = (char *)(lVar20 + 0x12);
      do {
        uVar31 = (uint)uVar35;
        if (((*(ushort *)(pcVar15 + -6) >> 5 & 1) == 0) && (*pcVar15 == '\x04')) goto LAB_109735ac0;
        pcVar15 = pcVar15 + 0x14;
        uVar35 = (ulong)(uVar31 + 1);
      } while (uVar25 != uVar31 + 1);
    }
    do {
      uVar16 = (int)uVar39 - 1;
      uVar39 = (ulong)uVar16;
      uVar35 = uVar41;
      if (uVar16 <= uVar27) break;
      uVar35 = uVar39;
    } while (*(char *)(lVar18 + uVar39 * 0x14) == '\r');
    uVar37 = (uint)uVar35;
    if (((*(byte *)((long)plVar32 + 9) & 1) == 0) &&
       (lVar18 = lVar34 + (uVar35 & 0xffffffff) * 0x14, (*(ushort *)(lVar18 + 0xc) >> 5 & 1) == 0))
    {
      uVar16 = uVar25 + 1;
      uVar39 = (ulong)uVar16;
      if (*(char *)(lVar18 + 0x12) == '\x04' && uVar16 < uVar37) {
        pbVar13 = (byte *)(lVar34 + (ulong)uVar16 * 0x14 + 0x12);
        do {
          uVar37 = (int)uVar35 -
                   (uint)((1 << (ulong)(*pbVar13 & 0x1f) & 0x2080U) != 0 && *pbVar13 < 0x20);
          uVar35 = (ulong)uVar37;
          uVar39 = uVar39 + 1;
          pbVar13 = pbVar13 + 0x14;
        } while (uVar39 < uVar35);
      }
    }
    goto LAB_109735d8c;
  }
  goto LAB_10973590c;
  while (uVar38 = uVar19 + 1, pcVar15 = pcVar15 + 0x14, uVar19 + 1 < uVar35) {
LAB_109735a98:
    uVar19 = uVar38;
    if (((*(ushort *)(pcVar15 + -6) >> 5 & 1) != 0) || (*pcVar15 != '\x04')) {
      bVar6 = false;
      *(undefined1 *)(lVar34 + (uVar19 & 0xffffffff) * 0x14 + 0x13) = 4;
      goto LAB_109735470;
    }
  }
  bVar6 = false;
LAB_1097355bc:
  lVar20 = lVar34 + (ulong)(uVar29 - 1) * 0x14;
  uVar19 = uVar17;
  if ((*(ushort *)(lVar20 + 0xc) >> 5 & 1) == 0) {
    uVar25 = uVar29 - 1;
    if (*(char *)(lVar20 + 0x12) != '\x06') {
      uVar25 = uVar29;
    }
    uVar19 = (ulong)uVar25;
    goto LAB_1097355dc;
  }
LAB_109735628:
  if ((uVar16 < uVar29) && (uVar25 = (uint)uVar19, uVar40 < uVar25)) {
    iVar28 = -2;
    if (uVar25 != uVar29) {
      iVar28 = -1;
    }
    uVar35 = (ulong)(iVar28 + uVar25);
    if ((*(int *)(puVar9 + 0x3c) != 0x4d6c796d) && (*(int *)(puVar9 + 0x3c) != 0x54616d6c)) {
      do {
        if (uVar40 < (uint)uVar35) {
          pbVar21 = (byte *)(lVar34 + 0x12 + uVar35 * 0x14);
          do {
            if (((*(ushort *)(pbVar21 + -6) >> 5 & 1) == 0) &&
               (*pbVar21 < 0x20 && (1 << (ulong)(*pbVar21 & 0x1f) & 0x2090U) != 0)) {
              bVar2 = false;
              goto LAB_1097357c4;
            }
            iVar28 = (int)uVar35;
            uVar35 = uVar35 - 1;
            pbVar21 = pbVar21 + -0x14;
          } while (uVar40 < iVar28 - 1U);
          bVar2 = true;
          uVar35 = uVar39;
        }
        else {
          bVar2 = true;
        }
LAB_1097357c4:
        lVar20 = lVar34 + (uVar35 & 0xffffffff) * 0x14;
        if ((((*(ushort *)(lVar20 + 0xc) >> 5 & 1) != 0) || (*(char *)(lVar20 + 0x12) != '\x04')) ||
           (*(char *)(lVar20 + 0x13) == '\x02')) goto LAB_109735814;
        uVar27 = (int)uVar35 + 1;
        if (uVar29 <= uVar27) break;
        if (*(char *)(lVar34 + 0x12 + (ulong)uVar27 * 0x14) != '\x06') {
          bVar2 = true;
        }
        if (bVar2) break;
        uVar35 = (ulong)((int)uVar35 - 1);
      } while( true );
    }
    uVar27 = (uint)uVar35;
    if ((uVar40 < uVar27) && (*(char *)(lVar34 + (uVar35 & 0xffffffff) * 0x14 + 0x13) != '\x02')) {
      lVar20 = lVar34 + (uVar35 & 0xffffffff) * 0x14;
      puVar36 = (undefined8 *)(lVar34 + (ulong)(uVar27 - 1) * 0x14);
      iVar28 = -uVar27;
      uVar38 = uVar35;
      do {
        iVar28 = iVar28 + 1;
        uVar25 = (int)uVar35 - 1;
        uVar35 = (ulong)uVar25;
        if (*(char *)((long)puVar36 + 0x13) == '\x02') {
          uVar31 = (uint)uVar19;
          uVar37 = (uint)uVar38;
          uVar31 = uVar31 - (uVar25 < uVar31 && uVar31 <= uVar37);
          uVar19 = (ulong)uVar31;
          uVar42 = puVar36[1];
          uVar30 = *puVar36;
          uVar4 = *(undefined4 *)(puVar36 + 2);
          _memmove(puVar36,lVar20,(ulong)(uVar37 + iVar28) * 0x14);
          puVar14 = (undefined8 *)(lVar34 + (uVar38 & 0xffffffff) * 0x14);
          puVar14[1] = uVar42;
          *puVar14 = uVar30;
          *(undefined4 *)(puVar14 + 2) = uVar4;
          uVar27 = uVar29;
          if (uVar31 + 1 < uVar29) {
            uVar27 = uVar31 + 1;
          }
          if (1 < uVar27 - uVar37) {
            FUN_1096f65e4(puVar9,uVar38);
          }
          uVar38 = (ulong)(uVar37 - 1);
          uVar41 = uVar39 & 0xffffffff;
        }
        lVar20 = lVar20 + -0x14;
        puVar36 = (undefined8 *)((long)puVar36 + -0x14);
      } while ((uint)uVar41 < uVar25);
    }
    else {
LAB_109735814:
      do {
        if (*pbVar13 == 2) {
          uVar27 = uVar29;
          if (uVar25 + 1 < uVar29) {
            uVar27 = uVar25 + 1;
          }
          if (1 < uVar27 - (int)uVar39) {
            FUN_1096f65e4(puVar9);
            uVar39 = uVar19;
            goto LAB_10973585c;
          }
          break;
        }
        uVar27 = (int)uVar39 + 1;
        uVar39 = (ulong)uVar27;
        pbVar13 = pbVar13 + 0x14;
      } while (uVar25 != uVar27);
    }
  }
  uVar39 = uVar19;
  if (uVar16 < uVar29) goto LAB_10973585c;
LAB_10973590c:
  if (bVar6) {
LAB_109735914:
    uVar25 = (uint)uVar39;
    if (uVar25 + 1 < uVar29) {
      iVar28 = 0;
      puVar36 = (undefined8 *)(lVar34 + (ulong)(uVar25 + 1) * 0x14);
      do {
        if ((*(uint *)((long)puVar36 + 4) & *(uint *)(plVar32 + 0x13)) != 0) {
          if ((*(ushort *)((long)puVar36 + 0xc) & 0x60) == 0x20) {
            uVar16 = (uint)uVar41;
            if ((*(int *)(puVar9 + 0x3c) == 0x4d6c796d || *(int *)(puVar9 + 0x3c) == 0x54616d6c) ||
                uVar25 <= uVar16) goto LAB_10973598c;
            pbVar13 = (byte *)(lVar34 + (ulong)(uVar25 - 1) * 0x14 + 0x12);
            goto LAB_109735b0c;
          }
          break;
        }
        iVar28 = iVar28 + 1;
        puVar36 = (undefined8 *)((long)puVar36 + 0x14);
      } while ((uVar25 - uVar29) + 1 + iVar28 != 0);
    }
  }
  goto LAB_109735bd0;
LAB_109735d80:
  uVar37 = uVar31 - 1;
  goto LAB_109735d84;
LAB_109735ac0:
  uVar16 = uVar31 + 1;
  uVar37 = uVar31;
  if ((uVar16 < uVar25) &&
     ((lVar18 = lVar34 + (ulong)uVar16 * 0x14, (*(ushort *)(lVar18 + 0xc) >> 5 & 1) == 0 &&
      (bVar5 = *(byte *)(lVar18 + 0x12), uVar37 = uVar16,
      (1 << (ulong)(bVar5 & 0x1f) & 0x60U) == 0 || 0x1f < bVar5)))) {
    uVar37 = uVar31;
  }
LAB_109735d8c:
  if (1 < (uVar37 + 1) - uVar27) {
    FUN_1096f65e4(puVar9,uVar41);
  }
  uVar42 = puVar36[1];
  uVar30 = *puVar36;
  uVar4 = *(undefined4 *)(puVar36 + 2);
  _memmove(puVar36,lVar20,(ulong)(uVar37 - uVar27) * 0x14);
  puVar36 = (undefined8 *)(lVar34 + (ulong)uVar37 * 0x14);
  puVar36[1] = uVar42;
  *puVar36 = uVar30;
  *(undefined4 *)(puVar36 + 2) = uVar4;
  uVar39 = (ulong)(uVar25 - (uVar27 < uVar25 && uVar25 <= uVar37));
  if (!bVar6) goto LAB_109735bd0;
  goto LAB_109735914;
  while( true ) {
    uVar27 = (int)uVar39 - 1;
    uVar39 = (ulong)uVar27;
    pbVar13 = pbVar13 + -0x14;
    uVar35 = uVar41;
    if (uVar27 <= uVar16) break;
LAB_109735b0c:
    if (((*(ushort *)(pbVar13 + -6) >> 5 & 1) == 0) &&
       (*pbVar13 < 0x20 && (1 << (ulong)(*pbVar13 & 0x1f) & 0x2090U) != 0)) goto LAB_10973598c;
  }
LAB_109735b48:
  iVar26 = (int)uVar35;
  if ((uVar25 + iVar28) - iVar26 < 0xfffffffe) {
    FUN_1096f65e4(puVar9,uVar35,uVar25 + iVar28 + 2,uVar40 + 1);
  }
  uVar42 = puVar36[1];
  uVar30 = *puVar36;
  uVar4 = *(undefined4 *)(puVar36 + 2);
  puVar36 = (undefined8 *)(lVar34 + (uVar35 & 0xffffffff) * 0x14);
  _memmove(lVar34 + (ulong)(iVar26 + 1) * 0x14,puVar36,
           (ulong)((uVar25 - iVar26) + iVar28 + 1) * 0x14);
  puVar36[1] = uVar42;
  *puVar36 = uVar30;
  *(undefined4 *)(puVar36 + 2) = uVar4;
LAB_109735bd0:
  if (*(char *)(lVar22 + 0x13) == '\x02') {
    if (((int)uVar41 == 0) ||
       (uVar35 = (ulong)((int)uVar41 - 1),
       (1 << (ulong)(*(ushort *)(lVar34 + uVar35 * 0x14 + 0x10) & 0x1f) & 0x1ffeU) == 0)) {
      *(uint *)(lVar22 + 4) = *(uint *)(lVar22 + 4) | *(uint *)((long)plVar32 + 0xb4);
    }
    else {
      FUN_109710ea8(puVar9,3,uVar35,uVar40 + 1,1,0);
    }
  }
  if (((*(char *)((long)plVar32 + 9) == '\x01') && (1 < uVar29 - uVar40)) &&
     (*(int *)(lVar24 + 4) != 0x54616d6c)) {
    FUN_1096f65e4(puVar9,uVar41,uVar17);
  }
  lVar34 = *(long *)(puVar9 + 0x70);
  uVar40 = *(uint *)(puVar9 + 0x60);
  if (uVar40 <= uVar29 + 1) {
    uVar40 = uVar29 + 1;
  }
  uVar35 = uVar17;
  do {
    iVar28 = (int)uVar35;
    uVar35 = (ulong)uVar40;
    if (uVar40 - 1 == iVar28) break;
    uVar35 = (ulong)(iVar28 + 1);
  } while (*(char *)(lVar34 + (uVar17 & 0xffffffff) * 0x14 + 0xf) ==
           *(char *)(lVar34 + 0xf + uVar35 * 0x14));
  uVar39 = uVar17;
  if (uVar3 <= uVar29) goto LAB_109735e28;
  goto LAB_109735344;
LAB_10973598c:
  uVar27 = (uint)uVar39;
  uVar35 = uVar39;
  if ((uVar16 < uVar27) &&
     (((uVar27 < uVar29 &&
       (lVar18 = lVar34 + (ulong)(uVar27 - 1) * 0x14,
       (*(ushort *)(lVar18 + 0xc) & 0x20) == 0 && *(char *)(lVar18 + 0x12) == '\x04')) &&
      (lVar18 = lVar34 + (uVar39 & 0xffffffff) * 0x14, (*(ushort *)(lVar18 + 0xc) >> 5 & 1) == 0))))
  {
    bVar5 = *(byte *)(lVar18 + 0x12);
    uVar16 = 0;
    if ((1 << (ulong)(bVar5 & 0x1f) & 0x60U) != 0) {
      uVar16 = (uint)((bVar5 & 0xe0) == 0);
    }
    uVar35 = (ulong)(uVar27 + uVar16);
  }
  goto LAB_109735b48;
}



/* Entry: 1097370d8; end: 10973714f;  */

undefined1  [16] FUN_1097370d8(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  
  if (param_2 <= *(uint *)(param_1 + 0x44)) {
    if (param_2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(*(long *)(param_1 + 0x48) + (ulong)(param_2 - 1) * 0x10);
    }
    if (param_2 < *(uint *)(param_1 + 0x44)) {
      piVar3 = (int *)(*(long *)(param_1 + 0x48) + (ulong)param_2 * 0x10);
    }
    else {
      piVar3 = (int *)(param_1 + 0x24);
    }
    uVar1 = 0;
    if (uVar2 <= *(uint *)(param_1 + 0x24)) {
      uVar1 = *(uint *)(param_1 + 0x24) - uVar2;
    }
    if (*piVar3 - uVar2 <= uVar1) {
      uVar1 = *piVar3 - uVar2;
    }
    auVar4._0_8_ = *(long *)(param_1 + 0x28) + (ulong)uVar2 * 0xc;
    auVar4._8_4_ = uVar1;
    auVar4._12_4_ = 0;
    return auVar4;
  }
  return ZEXT816(0);
}



/* Entry: 109737150; end: 1097375d3;  */

undefined8 FUN_109737150(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  byte bVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  
  iVar14 = 0;
  uVar15 = 0;
  uVar5 = 0;
  uVar12 = 0;
  *(byte *)(param_3 + 0xb8) = *(byte *)(param_3 + 0xb8) | 8;
  lVar8 = *(long *)(param_3 + 0x70);
  uVar18 = *(uint *)(param_3 + 0x60);
  iVar7 = 1;
  iVar13 = 0x15;
  uVar6 = uVar5;
  if (uVar18 == 0) goto LAB_109737248;
LAB_109737194:
  uVar6 = (uint)uVar12;
  if ((&UNK_10dfe8590)[iVar13] != '\a') {
    uVar6 = uVar5;
  }
  bVar2 = *(byte *)(lVar8 + uVar12 * 0x14 + 0x12);
  uVar16 = (long)(char)(&UNK_10dfe84ac)[iVar13];
  if (((uint)(byte)(&UNK_10f57f107)[(long)iVar13 * 2] <= (uint)bVar2) &&
     (bVar2 <= (byte)(&UNK_10f57f108)[(long)iVar13 * 2])) {
    uVar16 = (ulong)((uint)bVar2 - (uint)(byte)(&UNK_10f57f107)[(long)iVar13 * 2]);
  }
  uVar16 = (ulong)(char)(&UNK_10dfe8098)
                        [uVar16 + (long)*(short *)(&UNK_10dfe8456 + (long)iVar13 * 2)];
  iVar9 = iVar7;
  do {
    uVar11 = (uint)uVar12;
    iVar13 = (int)(char)(&UNK_10dfe84d7)[uVar16];
    iVar7 = iVar9;
    if ((1L << (uVar16 & 0x3f) & 0xf9f645708ae2U) != 0) goto LAB_109737228;
    uVar5 = (uint)uVar15;
    switch((&UNK_10dfe8508)[uVar16]) {
    case 1:
      uVar11 = uVar5 - 1;
      if (uVar6 < uVar5) {
        lVar17 = uVar15 - uVar6;
        puVar3 = (undefined1 *)(lVar8 + (ulong)uVar6 * 0x14 + 0xf);
        do {
          *puVar3 = (char)(iVar9 << 4);
          lVar17 = lVar17 + -1;
          puVar3 = puVar3 + 0x14;
        } while (lVar17 != 0);
      }
      goto code_r0x000109737350;
    case 2:
      uVar15 = (ulong)(uVar11 + 1);
      break;
    case 3:
      uVar11 = uVar5 - 1;
      if (uVar6 < uVar5) {
        lVar17 = uVar15 - uVar6;
        pbVar4 = (byte *)(lVar8 + (ulong)uVar6 * 0x14 + 0xf);
        do {
          *pbVar4 = (byte)(iVar9 << 4) | 1;
          lVar17 = lVar17 + -1;
          pbVar4 = pbVar4 + 0x14;
        } while (lVar17 != 0);
      }
      iVar7 = 1;
      if (iVar9 != 0xf) {
        iVar7 = iVar9 + 1;
      }
      *(uint *)(param_3 + 0xc0) = *(uint *)(param_3 + 0xc0) | 0x40;
      break;
    case 4:
      uVar15 = (ulong)(uVar11 + 1);
code_r0x000109737410:
      iVar14 = 2;
      iVar7 = iVar9;
      break;
    case 5:
      if (iVar14 == 3) {
        uVar11 = uVar5 - 1;
        if (uVar6 < uVar5) {
          lVar17 = uVar15 - uVar6;
          pbVar4 = (byte *)(lVar8 + (ulong)uVar6 * 0x14 + 0xf);
          do {
            *pbVar4 = (byte)(iVar9 << 4) | 2;
            lVar17 = lVar17 + -1;
            pbVar4 = pbVar4 + 0x14;
          } while (lVar17 != 0);
        }
        iVar7 = 1;
        if (iVar9 != 0xf) {
          iVar7 = iVar9 + 1;
        }
        goto code_r0x000109737538;
      }
      if (iVar14 == 2) {
        uVar11 = uVar5 - 1;
        if (uVar6 < uVar5) {
          lVar17 = uVar15 - uVar6;
          pbVar4 = (byte *)(lVar8 + (ulong)uVar6 * 0x14 + 0xf);
          do {
            *pbVar4 = (byte)(iVar9 << 4) | 1;
            lVar17 = lVar17 + -1;
            pbVar4 = pbVar4 + 0x14;
          } while (lVar17 != 0);
        }
        iVar7 = 1;
        if (iVar9 != 0xf) {
          iVar7 = iVar9 + 1;
        }
        *(uint *)(param_3 + 0xc0) = *(uint *)(param_3 + 0xc0) | 0x40;
        iVar9 = iVar7;
        goto code_r0x000109737410;
      }
      break;
    case 8:
      uVar15 = (ulong)(uVar11 + 1);
      if (uVar6 < uVar11 + 1) {
        lVar17 = uVar15 - uVar6;
        pbVar4 = (byte *)(lVar8 + (ulong)uVar6 * 0x14 + 0xf);
        do {
          *pbVar4 = (byte)(iVar9 << 4) | 2;
          lVar17 = lVar17 + -1;
          pbVar4 = pbVar4 + 0x14;
        } while (lVar17 != 0);
      }
code_r0x000109737350:
      iVar7 = 1;
      if (iVar9 != 0xf) {
        iVar7 = iVar9 + 1;
      }
      break;
    case 9:
      uVar15 = (ulong)(uVar11 + 1);
code_r0x000109737538:
      iVar14 = 3;
      break;
    case 10:
      if (uVar6 < uVar11) {
        lVar17 = uVar12 - uVar6;
        puVar3 = (undefined1 *)(lVar8 + (ulong)uVar6 * 0x14 + 0xf);
        do {
          *puVar3 = (char)(iVar9 << 4);
          lVar17 = lVar17 + -1;
          puVar3 = puVar3 + 0x14;
        } while (lVar17 != 0);
      }
      goto code_r0x00010973744c;
    case 0xb:
      if (uVar6 < uVar11) {
        lVar17 = uVar12 - uVar6;
        pbVar4 = (byte *)(lVar8 + (ulong)uVar6 * 0x14 + 0xf);
        do {
          *pbVar4 = (byte)(iVar9 << 4) | 1;
          lVar17 = lVar17 + -1;
          pbVar4 = pbVar4 + 0x14;
        } while (lVar17 != 0);
      }
      iVar7 = 1;
      if (iVar9 != 0xf) {
        iVar7 = iVar9 + 1;
      }
      *(uint *)(param_3 + 0xc0) = *(uint *)(param_3 + 0xc0) | 0x40;
      goto code_r0x0001097374b0;
    case 0xc:
      if (uVar6 < uVar11) {
        lVar17 = uVar12 - uVar6;
        pbVar4 = (byte *)(lVar8 + (ulong)uVar6 * 0x14 + 0xf);
        do {
          *pbVar4 = (byte)(iVar9 << 4) | 2;
          lVar17 = lVar17 + -1;
          pbVar4 = pbVar4 + 0x14;
        } while (lVar17 != 0);
      }
code_r0x00010973744c:
      iVar7 = 1;
      if (iVar9 != 0xf) {
        iVar7 = iVar9 + 1;
      }
code_r0x0001097374b0:
      uVar11 = uVar11 - 1;
      uVar15 = uVar12;
    }
LAB_109737228:
    uVar5 = 0;
    if ((&UNK_10dfe85bb)[iVar13] != '\x06') {
      uVar5 = uVar6;
    }
    uVar12 = (ulong)(uVar11 + 1);
    uVar6 = uVar5;
    if (uVar11 + 1 != uVar18) goto LAB_109737194;
LAB_109737248:
    if (iVar13 == 0x15) {
      uVar6 = *(uint *)(param_3 + 0x60);
      if (uVar6 == 0) {
        return 0;
      }
      uVar12 = 0;
      pcVar10 = (char *)(*(long *)(param_3 + 0x70) + 0x23);
      break;
    }
    uVar16 = (long)*(short *)(&UNK_10dfe853a + (long)iVar13 * 2) - 1;
    uVar12 = (ulong)uVar18;
    iVar9 = iVar7;
  } while( true );
  while( true ) {
    uVar15 = uVar12 + 1;
    cVar1 = *pcVar10;
    uVar12 = uVar15;
    pcVar10 = pcVar10 + 0x14;
    if (*(char *)(*(long *)(param_3 + 0x70) + 0xf) != cVar1) break;
    uVar15 = (ulong)uVar6;
    if (uVar6 - 1 == uVar12) break;
  }
  uVar12 = 0;
  do {
    uVar16 = uVar15;
    FUN_109710ea8(param_3,3,uVar12,uVar16,1,0);
    uVar5 = *(uint *)(param_3 + 0x60);
    uVar18 = (uint)uVar16;
    if (uVar5 <= uVar18 + 1) {
      uVar5 = uVar18 + 1;
    }
    uVar15 = uVar16;
    do {
      iVar7 = (int)uVar15;
      uVar15 = (ulong)uVar5;
      if (uVar5 - 1 == iVar7) break;
      uVar15 = (ulong)(iVar7 + 1);
    } while (*(char *)(*(long *)(param_3 + 0x70) + (uVar16 & 0xffffffff) * 0x14 + 0xf) ==
             *(char *)(*(long *)(param_3 + 0x70) + 0xf + uVar15 * 0x14));
    uVar12 = uVar16;
    if (uVar6 <= uVar18) {
      return 0;
    }
  } while( true );
}



/* Entry: 1097375d4; end: 109737943;  */

void FUN_1097375d4(long param_1,undefined8 param_2,long param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint *puVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  uint uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  uint *puVar23;
  uint uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  
  lVar15 = param_3;
  FUN_1096f53f4(param_3,param_2,&UNK_10f57f15e);
  if ((int)lVar15 != 0) {
    FUN_10970b854(param_2,param_3,1,0xb,0xffffffff,0xffffffff);
    uVar2 = *(uint *)(param_3 + 0x60);
    uVar17 = (ulong)uVar2;
    if (uVar2 != 0) {
      lVar19 = *(long *)(param_3 + 0x70);
      bVar6 = *(byte *)(lVar19 + 0xf);
      lVar15 = 0x23;
      uVar12 = 0;
      do {
        uVar16 = uVar17;
        if (uVar2 - 1 == uVar12) break;
        uVar16 = uVar12 + 1;
        pbVar1 = (byte *)(lVar19 + lVar15);
        lVar15 = lVar15 + 0x14;
        uVar12 = uVar16;
      } while (bVar6 == *pbVar1);
      uVar12 = 0;
      do {
        uVar13 = uVar16;
        uVar20 = (uint)uVar13;
        if ((bVar6 & 0xe) == 0) {
          uVar16 = uVar12 & 0xffffffff;
          uVar14 = (uint)uVar12;
          uVar7 = uVar14 + 1;
          if (uVar7 < uVar20) {
            puVar23 = *(uint **)(param_1 + 0x88);
            uVar18 = puVar23[1];
            uVar24 = puVar23[2];
            uVar3 = puVar23[3];
            iVar11 = ~uVar14 + uVar20;
            puVar10 = (uint *)(lVar19 + (ulong)uVar7 * 0x14 + 4);
            do {
              *puVar10 = uVar24 | uVar18 | uVar3 | *puVar10;
              iVar11 = iVar11 + -1;
              puVar10 = puVar10 + 5;
            } while (iVar11 != 0);
            uVar24 = 0;
            puVar9 = (undefined8 *)(lVar19 + (ulong)uVar7 * 0x14);
            puVar8 = (undefined8 *)(lVar19 + uVar16 * 0x14);
            uVar18 = uVar14 + 3;
            uVar17 = (ulong)uVar7;
            do {
              puVar21 = (undefined8 *)(lVar19 + uVar17 * 0x14);
              uVar12 = uVar17 + 1;
              iVar11 = (int)uVar17;
              if (*(char *)((long)puVar21 + 0x12) == '\x04' && uVar24 < 3) {
                if (uVar12 < (uVar13 & 0xffffffff)) {
                  puVar22 = (undefined8 *)(lVar19 + uVar12 * 0x14);
                  if (*(char *)((long)puVar22 + 0x12) == '\x0f') {
                    lVar15 = lVar19 + (uVar17 & 0xffffffff) * 0x14;
                    *(uint *)(lVar15 + 4) = *(uint *)(lVar15 + 4) | *puVar23;
                    lVar15 = lVar19 + uVar12 * 0x14;
                    *(uint *)(lVar15 + 4) = *(uint *)(lVar15 + 4) | *puVar23;
                    uVar7 = iVar11 + 2;
                    if (1 < uVar7 - uVar14) {
                      FUN_1096f65e4(param_3,uVar16,uVar7);
                    }
                    uVar27 = puVar21[1];
                    uVar25 = *puVar21;
                    uVar4 = *(undefined4 *)(puVar21 + 2);
                    uVar28 = puVar22[1];
                    uVar26 = *puVar22;
                    uVar5 = *(undefined4 *)(puVar22 + 2);
                    _memmove(lVar19 + (ulong)(uVar14 + 2) * 0x14,puVar8,
                             (ulong)(iVar11 - uVar14) * 0x14);
                    *(undefined4 *)(puVar8 + 2) = uVar4;
                    puVar8[1] = uVar27;
                    *puVar8 = uVar25;
                    puVar9[1] = uVar28;
                    *puVar9 = uVar26;
                    *(undefined4 *)(puVar9 + 2) = uVar5;
                    if ((uVar7 < uVar20) && (puVar23[4] != 0)) {
                      lVar15 = (uVar13 & 0xffffffff) - (ulong)uVar18;
                      puVar10 = (uint *)(lVar19 + 4 + (ulong)uVar18 * 0x14);
                      do {
                        *puVar10 = *puVar10 | puVar23[4];
                        lVar15 = lVar15 + -1;
                        puVar10 = puVar10 + 5;
                      } while (lVar15 != 0);
                    }
                    uVar24 = 2;
                  }
                  else {
                    uVar24 = uVar24 + 1;
                  }
                }
              }
              else if (*(char *)((long)puVar21 + 0x12) == '\x16') {
                if (1 < (iVar11 - uVar14) + 1) {
                  FUN_1096f65e4(param_3,uVar16,uVar12);
                }
                uVar26 = puVar21[1];
                uVar25 = *puVar21;
                uVar4 = *(undefined4 *)(puVar21 + 2);
                _memmove(puVar9,puVar8,(ulong)(iVar11 - uVar14) * 0x14);
                puVar8[1] = uVar26;
                *puVar8 = uVar25;
                *(undefined4 *)(puVar8 + 2) = uVar4;
              }
              uVar18 = uVar18 + 1;
              uVar17 = uVar12;
            } while (uVar20 != (uint)uVar12);
            lVar19 = *(long *)(param_3 + 0x70);
            uVar17 = (ulong)*(uint *)(param_3 + 0x60);
          }
        }
        bVar6 = *(byte *)(lVar19 + (uVar13 & 0xffffffff) * 0x14 + 0xf);
        uVar7 = (uint)uVar17;
        if (uVar7 <= uVar20 + 1) {
          uVar7 = uVar20 + 1;
        }
        uVar16 = uVar13;
        do {
          iVar11 = (int)uVar16;
          uVar16 = (ulong)uVar7;
          if (uVar7 - 1 == iVar11) break;
          uVar16 = (ulong)(iVar11 + 1);
        } while (bVar6 == *(byte *)(lVar19 + 0xf + uVar16 * 0x14));
        uVar12 = uVar13;
      } while (uVar20 < uVar2);
    }
    FUN_1096f53f4(param_3,param_2,&UNK_10f57f175);
  }
  *(byte *)(param_3 + 0xb8) = *(byte *)(param_3 + 0xb8) & 0xbf;
  return;
}



/* Entry: 109737944; end: 109737d3f;  */

undefined8 FUN_109737944(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  undefined1 *puVar15;
  byte *pbVar16;
  uint uVar17;
  
  iVar11 = 0;
  uVar17 = 0;
  uVar12 = 0;
  *(byte *)(param_3 + 0xb8) = *(byte *)(param_3 + 0xb8) | 8;
  lVar8 = *(long *)(param_3 + 0x70);
  uVar1 = *(uint *)(param_3 + 0x60);
  iVar5 = 1;
  uVar4 = uVar17;
  if (uVar1 == 0) goto LAB_109737a38;
LAB_109737980:
  uVar4 = uVar12;
  if ((&UNK_10dfe8f64)[iVar11] != '\x02') {
    uVar4 = uVar17;
  }
  bVar3 = *(byte *)(lVar8 + (ulong)uVar12 * 0x14 + 0x12);
  uVar14 = (long)(char)(&UNK_10dfe8e44)[iVar11];
  if (((uint)(byte)(&UNK_10f57f18a)[(long)iVar11 * 2] <= (uint)bVar3) &&
     (bVar3 <= (byte)(&UNK_10f57f18b)[(long)iVar11 * 2])) {
    uVar14 = (ulong)((uint)bVar3 - (uint)(byte)(&UNK_10f57f18a)[(long)iVar11 * 2]);
  }
  uVar14 = (ulong)(char)(&UNK_10dfe8608)
                        [uVar14 + (long)*(short *)(&UNK_10dfe8dd6 + (long)iVar11 * 2)];
  iVar9 = iVar5;
  do {
    iVar11 = (int)(char)(&UNK_10dfe8e7b)[uVar14];
    iVar5 = iVar9;
    if ((1L << (uVar14 & 0x3f) & 0xffe7ffffedfffeeU) == 0) {
      bVar3 = (&UNK_10dfe8eb8)[uVar14];
      if (bVar3 < 6) {
        if (bVar3 == 3) {
          if (uVar4 < uVar12 + 1) {
            lVar13 = (ulong)(uVar12 + 1) - (ulong)uVar4;
            pbVar16 = (byte *)(lVar8 + (ulong)uVar4 * 0x14 + 0xf);
            do {
              *pbVar16 = (byte)(iVar9 << 4) | 2;
              lVar13 = lVar13 + -1;
              pbVar16 = pbVar16 + 0x14;
            } while (lVar13 != 0);
          }
        }
        else {
          if (bVar3 != 4) {
            if (bVar3 == 5) {
              if (uVar4 < uVar12) {
                lVar13 = (ulong)uVar12 - (ulong)uVar4;
                puVar15 = (undefined1 *)(lVar8 + (ulong)uVar4 * 0x14 + 0xf);
                do {
                  *puVar15 = (char)(iVar9 << 4);
                  lVar13 = lVar13 + -1;
                  puVar15 = puVar15 + 0x14;
                } while (lVar13 != 0);
              }
              goto LAB_109737b64;
            }
            goto LAB_109737a18;
          }
          if (uVar4 < uVar12 + 1) {
            lVar13 = (ulong)(uVar12 + 1) - (ulong)uVar4;
            pbVar16 = (byte *)(lVar8 + (ulong)uVar4 * 0x14 + 0xf);
            do {
              *pbVar16 = (byte)(iVar9 << 4) | 2;
              lVar13 = lVar13 + -1;
              pbVar16 = pbVar16 + 0x14;
            } while (lVar13 != 0);
          }
        }
LAB_109737c60:
        iVar5 = 1;
        if (iVar9 != 0xf) {
          iVar5 = iVar9 + 1;
        }
      }
      else if (bVar3 < 8) {
        if (bVar3 == 6) {
          if (uVar4 < uVar12 + 1) {
            lVar13 = (ulong)(uVar12 + 1) - (ulong)uVar4;
            puVar15 = (undefined1 *)(lVar8 + (ulong)uVar4 * 0x14 + 0xf);
            do {
              *puVar15 = (char)(iVar9 << 4);
              lVar13 = lVar13 + -1;
              puVar15 = puVar15 + 0x14;
            } while (lVar13 != 0);
          }
          goto LAB_109737c60;
        }
        if (bVar3 == 7) {
          if (uVar4 < uVar12) {
            lVar13 = (ulong)uVar12 - (ulong)uVar4;
            pbVar16 = (byte *)(lVar8 + (ulong)uVar4 * 0x14 + 0xf);
            do {
              *pbVar16 = (byte)(iVar9 << 4) | 1;
              lVar13 = lVar13 + -1;
              pbVar16 = pbVar16 + 0x14;
            } while (lVar13 != 0);
          }
          iVar5 = 1;
          if (iVar9 != 0xf) {
            iVar5 = iVar9 + 1;
          }
          *(uint *)(param_3 + 0xc0) = *(uint *)(param_3 + 0xc0) | 0x40;
LAB_109737b74:
          uVar12 = uVar12 - 1;
        }
      }
      else if (bVar3 == 8) {
        if (uVar4 < uVar12 + 1) {
          lVar13 = (ulong)(uVar12 + 1) - (ulong)uVar4;
          pbVar16 = (byte *)(lVar8 + (ulong)uVar4 * 0x14 + 0xf);
          do {
            *pbVar16 = (byte)(iVar9 << 4) | 1;
            lVar13 = lVar13 + -1;
            pbVar16 = pbVar16 + 0x14;
          } while (lVar13 != 0);
        }
        iVar5 = 1;
        if (iVar9 != 0xf) {
          iVar5 = iVar9 + 1;
        }
        *(uint *)(param_3 + 0xc0) = *(uint *)(param_3 + 0xc0) | 0x40;
      }
      else if (bVar3 == 9) {
        if (uVar4 < uVar12) {
          lVar13 = (ulong)uVar12 - (ulong)uVar4;
          pbVar16 = (byte *)(lVar8 + (ulong)uVar4 * 0x14 + 0xf);
          do {
            *pbVar16 = (byte)(iVar9 << 4) | 2;
            lVar13 = lVar13 + -1;
            pbVar16 = pbVar16 + 0x14;
          } while (lVar13 != 0);
        }
LAB_109737b64:
        iVar5 = 1;
        if (iVar9 != 0xf) {
          iVar5 = iVar9 + 1;
        }
        goto LAB_109737b74;
      }
    }
LAB_109737a18:
    uVar17 = 0;
    if ((&UNK_10dfe8f9b)[iVar11] != '\x01') {
      uVar17 = uVar4;
    }
    uVar12 = uVar12 + 1;
    uVar4 = uVar17;
    if (uVar12 != uVar1) goto LAB_109737980;
LAB_109737a38:
    if (iVar11 == 0) {
      uVar12 = *(uint *)(param_3 + 0x60);
      if (uVar12 == 0) {
        return 0;
      }
      uVar14 = 0;
      pcVar10 = (char *)(*(long *)(param_3 + 0x70) + 0x23);
      break;
    }
    uVar14 = (long)*(short *)(&UNK_10dfe8ef6 + (long)iVar11 * 2) - 1;
    uVar12 = uVar1;
    iVar9 = iVar5;
  } while( true );
  while( true ) {
    uVar7 = uVar14 + 1;
    cVar2 = *pcVar10;
    uVar14 = uVar7;
    pcVar10 = pcVar10 + 0x14;
    if (*(char *)(*(long *)(param_3 + 0x70) + 0xf) != cVar2) break;
    uVar7 = (ulong)uVar12;
    if (uVar12 - 1 == uVar14) break;
  }
  uVar14 = 0;
  do {
    uVar6 = uVar7;
    FUN_109710ea8(param_3,3,uVar14,uVar6,1,0);
    uVar4 = *(uint *)(param_3 + 0x60);
    uVar17 = (uint)uVar6;
    if (uVar4 <= uVar17 + 1) {
      uVar4 = uVar17 + 1;
    }
    uVar7 = uVar6;
    do {
      iVar5 = (int)uVar7;
      uVar7 = (ulong)uVar4;
      if (uVar4 - 1 == iVar5) break;
      uVar7 = (ulong)(iVar5 + 1);
    } while (*(char *)(*(long *)(param_3 + 0x70) + (uVar6 & 0xffffffff) * 0x14 + 0xf) ==
             *(char *)(*(long *)(param_3 + 0x70) + 0xf + uVar7 * 0x14));
    uVar14 = uVar6;
    if (uVar12 <= uVar17) {
      return 0;
    }
  } while( true );
}



/* Entry: 109737d40; end: 10973811b;  */

void FUN_109737d40(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  undefined1 *puVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  char *pcVar12;
  char cVar13;
  char cVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  
  lVar11 = param_3;
  FUN_1096f53f4(param_3,param_2,&UNK_10f57f1f9);
  if ((int)lVar11 != 0) {
    FUN_10970b854(param_2,param_3,1,0xb,0xffffffff,0xffffffff);
    uVar1 = *(uint *)(param_3 + 0x60);
    if (uVar1 != 0) {
      uVar6 = 0;
      lVar18 = *(long *)(param_3 + 0x70);
      bVar2 = *(byte *)(lVar18 + 0xf);
      lVar11 = 0x23;
      do {
        if (uVar1 - 1 == uVar6) {
          uVar6 = (ulong)uVar1;
          break;
        }
        uVar6 = uVar6 + 1;
        pbVar8 = (byte *)(lVar18 + lVar11);
        lVar11 = lVar11 + 0x14;
      } while (bVar2 == *pbVar8);
      uVar16 = 0;
      do {
        uVar7 = uVar6;
        uVar17 = (uint)uVar7;
        if ((bVar2 & 0xe) == 0) {
          uVar6 = uVar16 & 0xffffffff;
          uVar15 = (uint)uVar16;
          if ((((uVar17 < uVar15 + 3) || (*(char *)(lVar18 + uVar6 * 0x14 + 0x12) != '\x0f')) ||
              (*(char *)(lVar18 + (ulong)(uVar15 + 1) * 0x14 + 0x12) != ' ')) ||
             (*(char *)(lVar18 + (ulong)(uVar15 + 2) * 0x14 + 0x12) != '\x04')) {
            iVar5 = 0;
            uVar3 = uVar16;
          }
          else {
            iVar5 = 3;
            uVar3 = (ulong)(uVar15 + 3);
          }
          uVar9 = uVar16;
          if ((uint)uVar3 < uVar17) {
            pbVar8 = (byte *)(lVar18 + (uVar3 & 0xffffffff) * 0x14 + 0x12);
            do {
              if (((*(ushort *)(pbVar8 + -6) >> 5 & 1) == 0) &&
                 (uVar9 = uVar3, *pbVar8 < 0x20 && (1 << (ulong)(*pbVar8 & 0x1f) & 0x48c06U) != 0))
              break;
              uVar10 = (int)uVar3 + 1;
              uVar3 = (ulong)uVar10;
              pbVar8 = pbVar8 + 0x14;
              uVar9 = uVar16;
            } while (uVar17 != uVar10);
          }
          uVar10 = iVar5 + uVar15;
          uVar3 = uVar16;
          if (uVar15 < uVar10) {
            lVar11 = uVar10 - uVar6;
            puVar4 = (undefined1 *)(lVar18 + uVar6 * 0x14 + 0x13);
            do {
              *puVar4 = 5;
              lVar11 = lVar11 + -1;
              puVar4 = puVar4 + 0x14;
              uVar3 = (ulong)uVar10;
            } while (lVar11 != 0);
          }
          if ((uint)uVar3 < (uint)uVar9) {
            lVar11 = (uVar9 & 0xffffffff) - (uVar3 & 0xffffffff);
            puVar4 = (undefined1 *)(lVar18 + (uVar3 & 0xffffffff) * 0x14 + 0x13);
            do {
              *puVar4 = 3;
              lVar11 = lVar11 + -1;
              puVar4 = puVar4 + 0x14;
              uVar3 = uVar9;
            } while (lVar11 != 0);
          }
          uVar10 = (uint)uVar3;
          if (uVar10 < uVar17) {
            *(undefined1 *)(lVar18 + (uVar3 & 0xffffffff) * 0x14 + 0x13) = 4;
            uVar10 = uVar10 + 1;
          }
          if (uVar10 < uVar17) {
            lVar11 = (uVar7 & 0xffffffff) - (ulong)uVar10;
            uVar3 = (ulong)uVar10 + 0xffffffff;
            pcVar12 = (char *)(lVar18 + 0x13 + (ulong)uVar10 * 0x14);
            cVar13 = '\x05';
            do {
              cVar14 = pcVar12[-1];
              if (cVar14 == '\x16') {
                cVar14 = '\x02';
LAB_109737f7c:
                *pcVar12 = cVar14;
              }
              else {
                if (cVar14 == '(') {
                  cVar14 = *(char *)(lVar18 + 0x13 + (uVar3 & 0xffffffff) * 0x14);
                  goto LAB_109737f7c;
                }
                if (cVar14 == '$') {
                  *pcVar12 = '\x03';
                }
                else {
                  if ((cVar13 == '\x05') && (cVar14 == '\x15')) {
LAB_109737f94:
                    cVar13 = '\b';
                  }
                  else if (cVar13 == '\b') {
                    if (cVar14 == '\t') {
                      *pcVar12 = '\a';
                      cVar13 = '\b';
                      goto LAB_109737fcc;
                    }
                    if (cVar14 == '\x15') goto LAB_109737f94;
                    cVar13 = '\t';
                  }
                  *pcVar12 = cVar13;
                }
              }
LAB_109737fcc:
              uVar3 = uVar3 + 1;
              pcVar12 = pcVar12 + 0x14;
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
          }
          FUN_1096f7a40(param_3,uVar16,uVar7,FUN_10973811c);
          if (uVar15 < uVar17) {
            pcVar12 = (char *)(lVar18 + uVar6 * 0x14 + 0x13);
            uVar3 = uVar7;
            uVar16 = uVar7;
            do {
              uVar10 = (uint)uVar6;
              uVar15 = uVar10;
              if ((uint)uVar16 != uVar17 || *pcVar12 != '\x02') {
                uVar15 = (uint)uVar16;
              }
              uVar16 = (ulong)uVar15;
              if (*pcVar12 != '\x02') {
                uVar10 = (uint)uVar3;
              }
              uVar3 = (ulong)uVar10;
              uVar6 = uVar6 + 1;
              pcVar12 = pcVar12 + 0x14;
            } while ((uVar7 & 0xffffffff) != uVar6);
            if (uVar15 < uVar10) {
              FUN_1096f7004(param_3,uVar16,uVar10 + 1);
              uVar6 = uVar16;
              do {
                lVar11 = uVar6 * 0x14;
                uVar15 = (int)uVar6 + 1;
                uVar6 = (ulong)uVar15;
                if (*(char *)(lVar18 + 0x12 + lVar11) == '\x16') {
                  FUN_1096f7004(param_3,uVar16,uVar6);
                  uVar16 = uVar6;
                }
              } while (uVar15 <= uVar10);
            }
          }
        }
        lVar18 = *(long *)(param_3 + 0x70);
        uVar15 = *(uint *)(param_3 + 0x60);
        bVar2 = *(byte *)(lVar18 + (uVar7 & 0xffffffff) * 0x14 + 0xf);
        if (uVar15 <= uVar17 + 1) {
          uVar15 = uVar17 + 1;
        }
        uVar6 = uVar7;
        do {
          iVar5 = (int)uVar6;
          uVar6 = (ulong)uVar15;
          if (uVar15 - 1 == iVar5) break;
          uVar6 = (ulong)(iVar5 + 1);
        } while (bVar2 == *(byte *)(lVar18 + 0xf + uVar6 * 0x14));
        uVar16 = uVar7;
      } while (uVar17 < uVar1);
    }
    FUN_1096f53f4(param_3,param_2,&UNK_10f57f212);
  }
  *(byte *)(param_3 + 0xb8) = *(byte *)(param_3 + 0xb8) & 0x3f;
  return;
}



/* Entry: 10973811c; end: 10973812b;  */

int FUN_10973811c(long param_1,long param_2)

{
  return (uint)*(byte *)(param_1 + 0x13) - (uint)*(byte *)(param_2 + 0x13);
}



/* Entry: 10973812c; end: 1097395e3;  */

undefined8 FUN_10973812c(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint *puVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulong *puVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  uint *puVar18;
  byte *pbVar19;
  char *pcVar20;
  byte *pbVar21;
  uint uVar22;
  ulong uVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  ulong *puVar28;
  ulong *puVar29;
  ulong *puVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  ulong uStack_210;
  long lStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  undefined *puStack_1d8;
  long *plStack_1d0;
  undefined1 *puStack_1c8;
  undefined *puStack_1c0;
  byte bStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  undefined *puStack_188;
  long *plStack_180;
  undefined1 *puStack_178;
  undefined *puStack_170;
  byte bStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined *puStack_138;
  long *plStack_130;
  undefined1 *puStack_128;
  undefined *puStack_120;
  undefined1 uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  undefined *puStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  byte bStack_c8;
  undefined8 uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined *puStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  byte bStack_70;
  long lStack_68;
  
  plStack_e0 = (long *)&uStack_210;
  puStack_80 = (undefined1 *)&uStack_210;
  puVar30 = &uStack_b8;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(byte *)(param_3 + 0xb8) = *(byte *)(param_3 + 0xb8) | 8;
  uStack_210 = *(ulong *)(param_3 + 0x70);
  uVar11 = *(uint *)(param_3 + 0x60);
  uStack_108 = uStack_210;
  if (uVar11 == 0) {
    uVar9 = 0;
    uVar16 = uVar11;
    uVar5 = 0;
  }
  else {
    cVar1 = *(char *)(uStack_210 + 0x12);
    if (cVar1 == '\x06') {
      uVar16 = 0;
      uVar15 = uStack_210;
      do {
        if (uVar11 - 1 == uVar16) {
          uVar9 = 0;
          uStack_108 = uStack_210 + (ulong)(uVar11 - 1) * 0x14 + 0x14;
          uVar16 = uVar11;
          uVar5 = uVar11;
          goto LAB_1097382a0;
        }
        uStack_108 = uVar15 + 0x14;
        uVar16 = uVar16 + 1;
        cVar1 = *(char *)(uVar15 + 0x26);
        uVar15 = uStack_108;
      } while (cVar1 == '\x06');
      uVar9 = uVar11 - uVar16;
    }
    else {
      uVar16 = 0;
      uVar9 = uVar11;
    }
    uVar5 = uVar16;
    if (cVar1 == '\x0e') {
      do {
        uVar22 = uVar5 + 1;
        do {
          if (uVar11 <= uVar22) goto LAB_1097382a0;
          lVar25 = uStack_210 + (ulong)uVar22 * 0x14;
          uVar22 = uVar22 + 1;
        } while (*(char *)(lVar25 + 0x12) == '\x06');
        if ((1 << (ulong)(*(ushort *)(lVar25 + 0x10) & 0x1f) & 0x1c00U) == 0) break;
        uVar22 = uVar9 - 1;
        if (uVar22 == 0) {
          lVar25 = 0;
LAB_1097383cc:
          uVar5 = uVar5 + uVar9;
          uVar16 = uVar16 + uVar9;
          uVar9 = 0;
          uStack_108 = uStack_108 + lVar25 + 0x14;
          break;
        }
        uVar24 = 0;
        uVar15 = uStack_108;
        while( true ) {
          uVar23 = uVar15 + 0x14;
          if (*(char *)(uVar15 + 0x26) != '\x06') break;
          uVar24 = uVar24 + 1;
          uVar15 = uVar23;
          if (uVar22 == uVar24) {
            lVar25 = (ulong)uVar22 * 0x14;
            goto LAB_1097383cc;
          }
        }
        uStack_108 = uVar23;
        if (*(char *)(uVar15 + 0x26) != '\x0e') goto LAB_1097383a4;
        uVar16 = uVar16 + uVar24 + 1;
        uVar9 = uVar22 - uVar24;
        uVar5 = uVar5 + 1 + uVar24;
      } while( true );
    }
  }
LAB_1097382a0:
  uStack_100 = CONCAT44(uVar16,uVar9);
  uStack_110 = (ulong)uVar5 | 0x100000000;
  plStack_e8 = &lStack_208;
  puStack_90 = &UNK_10dfe6d44;
  puStack_78 = &UNK_10dfe4d27;
  uStack_b8 = 0x100000000;
  bStack_70 = 0;
  puStack_f0 = &UNK_10dfe6d44;
  puStack_d8 = &UNK_10dfe4d27;
  lStack_208 = param_3;
  uStack_b0 = uStack_110;
  uStack_a8 = uStack_108;
  uStack_a0 = uStack_100;
  plStack_88 = plStack_e8;
  if (uVar9 == 0) {
    iVar12 = 0;
    puStack_80 = (undefined1 *)&uStack_210;
  }
  else {
    iVar12 = 0;
    do {
      FUN_109739c10(&uStack_110);
      iVar12 = iVar12 + 1;
    } while ((int)uStack_100 != 0);
  }
  plStack_e8 = (long *)puStack_90;
  puStack_f0 = (undefined *)uStack_98;
  puStack_d8 = puStack_80;
  plStack_e0 = plStack_88;
  puStack_d0 = puStack_78;
  uStack_108 = uStack_b0;
  uStack_110 = uStack_b8;
  uStack_f8 = uStack_a0;
  uStack_100 = uStack_a8;
  bStack_c8 = 0;
  FUN_109739bb8(&uStack_110,iVar12);
  bVar4 = bStack_c8;
  puVar28 = (ulong *)(uStack_110 & 0xffffffff);
  puStack_138 = puStack_90;
  uStack_140 = uStack_98;
  puStack_128 = puStack_80;
  plStack_130 = plStack_88;
  puStack_120 = puStack_78;
  uStack_158 = uStack_b0;
  uStack_160 = uStack_b8;
  uStack_148 = uStack_a0;
  uStack_150 = uStack_a8;
  puStack_188 = puStack_90;
  uStack_190 = uStack_98;
  puStack_178 = puStack_80;
  plStack_180 = plStack_88;
  puStack_170 = puStack_78;
  uStack_1a8 = uStack_b0;
  uStack_1b0 = uStack_b8;
  uStack_198 = uStack_a0;
  uStack_1a0 = uStack_a8;
  iVar12 = 1;
  uStack_118 = 1;
  iVar32 = 1;
  bStack_168 = 1;
  puVar14 = puVar28;
  iVar31 = (int)uStack_f8;
  if ((bStack_c8 & 1) != 0) goto LAB_10973881c;
  if (uVar9 == 0) {
    uRam000000011382ab30 = 0;
    uRam000000011382ab38 = 0;
    uRam000000011382ab40 = 0;
  }
  if ((int)uStack_f8 == 0) {
    uRam000000011382ab30 = 0;
    uRam000000011382ab38 = 0;
    uRam000000011382ab40 = 0;
  }
  iVar33 = 1;
  iVar32 = 1;
  if ((int)uStack_110 != 0) goto LAB_10973881c;
  puVar14 = (ulong *)0x0;
LAB_109739344:
  if (uVar9 == 0) {
    uRam000000011382ab30 = 0;
    uRam000000011382ab38 = 0;
    uRam000000011382ab40 = 0;
  }
  if (iVar31 == 0) {
    uRam000000011382ab30 = 0;
    uRam000000011382ab38 = 0;
    uRam000000011382ab40 = 0;
  }
  iVar13 = (int)puVar14;
  puVar14 = puVar28;
  iVar32 = iVar33;
  if (iVar13 != (int)puVar28) goto LAB_109738424;
LAB_109739358:
  iVar32 = 1;
  if (iVar33 == 1) goto LAB_109738424;
  uVar15 = (long)*(short *)(&UNK_10dfea516 + (long)iVar33 * 2) + 0xffffffff;
  iVar13 = iVar12;
  do {
    iVar33 = (int)(char)(&UNK_10dfea3f3)[uVar15 & 0xffffffff];
    iVar32 = (int)(char)(&UNK_10dfea3f3)[uVar15 & 0xffffffff];
    iVar12 = iVar13;
    switch((&UNK_10dfea484)[uVar15 & 0xffffffff]) {
    case 1:
      puStack_1d8 = puStack_188;
      uStack_1e0 = uStack_190;
      puStack_1c8 = puStack_178;
      plStack_1d0 = plStack_180;
      puStack_1c0 = puStack_170;
      uStack_1f8 = uStack_1a8;
      uStack_200 = uStack_1b0;
      uStack_1e8 = uStack_198;
      uStack_1f0 = uStack_1a0;
      bStack_1b8 = bStack_168;
      FUN_109739cb8(&uStack_200,1);
      FUN_109739b54(&uStack_b8,&uStack_200);
      uVar15 = uStack_158 & 0xffffffff;
      if ((int)uStack_148 == 0) {
        uRam000000011382ab30 = 0;
        uRam000000011382ab38 = 0;
        uRam000000011382ab40 = 0;
      }
      lVar25 = uVar15 * 0x14 + 0xf;
      while( true ) {
        if ((int)uStack_198 == 0) {
          uRam000000011382ab30 = 0;
          uRam000000011382ab38 = 0;
          uRam000000011382ab40 = 0;
        }
        if ((uStack_1a8 & 0xffffffff) <= uVar15) break;
        *(byte *)(uStack_210 + lVar25) = (byte)(iVar13 << 4) | 5;
        uVar15 = uVar15 + 1;
        lVar25 = lVar25 + 0x14;
      }
      break;
    default:
      goto LAB_1097392e8;
    case 4:
      puStack_1d8 = (undefined *)puVar30[5];
      uStack_1e0 = puVar30[4];
      puStack_1c8 = (undefined1 *)puVar30[7];
      plStack_1d0 = (long *)puVar30[6];
      puStack_1c0 = puStack_78;
      uStack_1f8 = puVar30[1];
      uStack_200 = *puVar30;
      uStack_1e8 = puVar30[3];
      uStack_1f0 = puVar30[2];
      bStack_1b8 = bStack_70;
      FUN_109739bb8(&uStack_200,1);
      FUN_109739b54(&uStack_1b0,&uStack_200);
      uVar15 = uStack_158 & 0xffffffff;
      if ((int)uStack_148 == 0) {
        uRam000000011382ab30 = 0;
        uRam000000011382ab38 = 0;
        uRam000000011382ab40 = 0;
      }
      lVar25 = uVar15 * 0x14 + 0xf;
      while( true ) {
        if ((int)uStack_198 == 0) {
          uRam000000011382ab30 = 0;
          uRam000000011382ab38 = 0;
          uRam000000011382ab40 = 0;
        }
        if ((uStack_1a8 & 0xffffffff) <= uVar15) break;
        *(byte *)(uStack_210 + lVar25) = (byte)(iVar13 << 4) | 8;
        uVar15 = uVar15 + 1;
        lVar25 = lVar25 + 0x14;
      }
      break;
    case 5:
      puStack_1d8 = (undefined *)puVar30[5];
      uStack_1e0 = puVar30[4];
      puStack_1c8 = (undefined1 *)puVar30[7];
      plStack_1d0 = (long *)puVar30[6];
      puStack_1c0 = puStack_78;
      uStack_1f8 = puVar30[1];
      uStack_200 = *puVar30;
      uStack_1e8 = puVar30[3];
      uStack_1f0 = puVar30[2];
      bStack_1b8 = bStack_70;
      FUN_109739bb8(&uStack_200,1);
      FUN_109739b54(&uStack_1b0,&uStack_200);
      uVar15 = uStack_158 & 0xffffffff;
      if ((int)uStack_148 == 0) {
        uRam000000011382ab30 = 0;
        uRam000000011382ab38 = 0;
        uRam000000011382ab40 = 0;
      }
      lVar25 = uVar15 * 0x14 + 0xf;
      while( true ) {
        if ((int)uStack_198 == 0) {
          uRam000000011382ab30 = 0;
          uRam000000011382ab38 = 0;
          uRam000000011382ab40 = 0;
        }
        if ((uStack_1a8 & 0xffffffff) <= uVar15) break;
        *(byte *)(uStack_210 + lVar25) = (byte)(iVar13 << 4) | 7;
        uVar15 = uVar15 + 1;
        lVar25 = lVar25 + 0x14;
      }
      goto code_r0x0001097393f4;
    case 6:
      puStack_1d8 = (undefined *)puVar30[5];
      uStack_1e0 = puVar30[4];
      puStack_1c8 = (undefined1 *)puVar30[7];
      plStack_1d0 = (long *)puVar30[6];
      puStack_1c0 = puStack_78;
      uStack_1f8 = puVar30[1];
      uStack_200 = *puVar30;
      uStack_1e8 = puVar30[3];
      uStack_1f0 = puVar30[2];
      bStack_1b8 = bStack_70;
      FUN_109739bb8(&uStack_200,1);
      FUN_109739b54(&uStack_1b0,&uStack_200);
      goto LAB_1097392e8;
    case 7:
      FUN_109739b54(&uStack_1b0,&uStack_b8);
      uStack_b8 = CONCAT44(uStack_b8._4_4_,(int)uStack_b8 - uStack_b8._4_4_);
      FUN_109739d10(puVar30 + 1);
      uVar15 = uStack_158 & 0xffffffff;
      if ((int)uStack_148 == 0) {
        uRam000000011382ab30 = 0;
        uRam000000011382ab38 = 0;
        uRam000000011382ab40 = 0;
      }
      lVar25 = uVar15 * 0x14 + 0xf;
      while( true ) {
        if ((int)uStack_198 == 0) {
          uRam000000011382ab30 = 0;
          uRam000000011382ab38 = 0;
          uRam000000011382ab40 = 0;
        }
        if ((uStack_1a8 & 0xffffffff) <= uVar15) break;
        *(byte *)(uStack_210 + lVar25) = (byte)(iVar13 << 4) | 5;
        uVar15 = uVar15 + 1;
        lVar25 = lVar25 + 0x14;
      }
      break;
    case 8:
      puStack_1d8 = (undefined *)puVar30[5];
      uStack_1e0 = puVar30[4];
      puStack_1c8 = (undefined1 *)puVar30[7];
      plStack_1d0 = (long *)puVar30[6];
      puStack_1c0 = puStack_78;
      uStack_1f8 = puVar30[1];
      uStack_200 = *puVar30;
      uStack_1e8 = puVar30[3];
      uStack_1f0 = puVar30[2];
      bStack_1b8 = bStack_70;
      FUN_109739bb8(&uStack_200,1);
      FUN_109739b54(&uStack_1b0,&uStack_200);
      uVar15 = uStack_158 & 0xffffffff;
      if ((int)uStack_148 == 0) {
        uRam000000011382ab30 = 0;
        uRam000000011382ab38 = 0;
        uRam000000011382ab40 = 0;
      }
      lVar25 = uVar15 * 0x14 + 0xf;
      while( true ) {
        if ((int)uStack_198 == 0) {
          uRam000000011382ab30 = 0;
          uRam000000011382ab38 = 0;
          uRam000000011382ab40 = 0;
        }
        if ((uStack_1a8 & 0xffffffff) <= uVar15) break;
        *(byte *)(uStack_210 + lVar25) = (byte)(iVar13 << 4) | 5;
        uVar15 = uVar15 + 1;
        lVar25 = lVar25 + 0x14;
      }
      break;
    case 9:
      FUN_109739b54(&uStack_1b0,&uStack_b8);
      uStack_b8 = CONCAT44(uStack_b8._4_4_,(int)uStack_b8 - uStack_b8._4_4_);
      FUN_109739d10(puVar30 + 1);
      uVar15 = uStack_158 & 0xffffffff;
      if ((int)uStack_148 == 0) {
        uRam000000011382ab30 = 0;
        uRam000000011382ab38 = 0;
        uRam000000011382ab40 = 0;
      }
      lVar25 = uVar15 * 0x14 + 0xf;
      while( true ) {
        if ((int)uStack_198 == 0) {
          uRam000000011382ab30 = 0;
          uRam000000011382ab38 = 0;
          uRam000000011382ab40 = 0;
        }
        if ((uStack_1a8 & 0xffffffff) <= uVar15) break;
        *(byte *)(uStack_210 + lVar25) = (byte)(iVar13 << 4) | 2;
        uVar15 = uVar15 + 1;
        lVar25 = lVar25 + 0x14;
      }
      break;
    case 10:
      puStack_1d8 = (undefined *)puVar30[5];
      uStack_1e0 = puVar30[4];
      puStack_1c8 = (undefined1 *)puVar30[7];
      plStack_1d0 = (long *)puVar30[6];
      puStack_1c0 = puStack_78;
      uStack_1f8 = puVar30[1];
      uStack_200 = *puVar30;
      uStack_1e8 = puVar30[3];
      uStack_1f0 = puVar30[2];
      bStack_1b8 = bStack_70;
      FUN_109739bb8(&uStack_200,1);
      FUN_109739b54(&uStack_1b0,&uStack_200);
      uVar15 = uStack_158 & 0xffffffff;
      if ((int)uStack_148 == 0) {
        uRam000000011382ab30 = 0;
        uRam000000011382ab38 = 0;
        uRam000000011382ab40 = 0;
      }
      lVar25 = uVar15 * 0x14 + 0xf;
      while( true ) {
        if ((int)uStack_198 == 0) {
          uRam000000011382ab30 = 0;
          uRam000000011382ab38 = 0;
          uRam000000011382ab40 = 0;
        }
        if ((uStack_1a8 & 0xffffffff) <= uVar15) break;
        *(byte *)(uStack_210 + lVar25) = (byte)(iVar13 << 4) | 2;
        uVar15 = uVar15 + 1;
        lVar25 = lVar25 + 0x14;
      }
      break;
    case 0xb:
      FUN_109739b54(&uStack_1b0,&uStack_b8);
      uStack_b8 = CONCAT44(uStack_b8._4_4_,(int)uStack_b8 - uStack_b8._4_4_);
      FUN_109739d10(puVar30 + 1);
      uVar15 = uStack_158 & 0xffffffff;
      if ((int)uStack_148 == 0) {
        uRam000000011382ab30 = 0;
        uRam000000011382ab38 = 0;
        uRam000000011382ab40 = 0;
      }
      lVar25 = uVar15 * 0x14 + 0xf;
      while( true ) {
        if ((int)uStack_198 == 0) {
          uRam000000011382ab30 = 0;
          uRam000000011382ab38 = 0;
          uRam000000011382ab40 = 0;
        }
        if ((uStack_1a8 & 0xffffffff) <= uVar15) break;
        *(byte *)(uStack_210 + lVar25) = (byte)(iVar13 << 4) | 1;
        uVar15 = uVar15 + 1;
        lVar25 = lVar25 + 0x14;
      }
      break;
    case 0xc:
      puStack_1d8 = (undefined *)puVar30[5];
      uStack_1e0 = puVar30[4];
      puStack_1c8 = (undefined1 *)puVar30[7];
      plStack_1d0 = (long *)puVar30[6];
      puStack_1c0 = puStack_78;
      uStack_1f8 = puVar30[1];
      uStack_200 = *puVar30;
      uStack_1e8 = puVar30[3];
      uStack_1f0 = puVar30[2];
      bStack_1b8 = bStack_70;
      FUN_109739bb8(&uStack_200,1);
      FUN_109739b54(&uStack_1b0,&uStack_200);
      uVar15 = uStack_158 & 0xffffffff;
      if ((int)uStack_148 == 0) {
        uRam000000011382ab30 = 0;
        uRam000000011382ab38 = 0;
        uRam000000011382ab40 = 0;
      }
      lVar25 = uVar15 * 0x14 + 0xf;
      while( true ) {
        if ((int)uStack_198 == 0) {
          uRam000000011382ab30 = 0;
          uRam000000011382ab38 = 0;
          uRam000000011382ab40 = 0;
        }
        if ((uStack_1a8 & 0xffffffff) <= uVar15) break;
        *(byte *)(uStack_210 + lVar25) = (byte)(iVar13 << 4) | 1;
        uVar15 = uVar15 + 1;
        lVar25 = lVar25 + 0x14;
      }
      break;
    case 0xd:
      FUN_109739b54(&uStack_1b0,&uStack_b8);
      uStack_b8 = CONCAT44(uStack_b8._4_4_,(int)uStack_b8 - uStack_b8._4_4_);
      FUN_109739d10(puVar30 + 1);
      uVar15 = uStack_158 & 0xffffffff;
      if ((int)uStack_148 == 0) {
        uRam000000011382ab30 = 0;
        uRam000000011382ab38 = 0;
        uRam000000011382ab40 = 0;
      }
      lVar25 = uVar15 * 0x14 + 0xf;
      while( true ) {
        if ((int)uStack_198 == 0) {
          uRam000000011382ab30 = 0;
          uRam000000011382ab38 = 0;
          uRam000000011382ab40 = 0;
        }
        if ((uStack_1a8 & 0xffffffff) <= uVar15) break;
        *(char *)(uStack_210 + lVar25) = (char)(iVar13 << 4);
        uVar15 = uVar15 + 1;
        lVar25 = lVar25 + 0x14;
      }
      break;
    case 0xe:
      puStack_1d8 = (undefined *)puVar30[5];
      uStack_1e0 = puVar30[4];
      puStack_1c8 = (undefined1 *)puVar30[7];
      plStack_1d0 = (long *)puVar30[6];
      puStack_1c0 = puStack_78;
      uStack_1f8 = puVar30[1];
      uStack_200 = *puVar30;
      uStack_1e8 = puVar30[3];
      uStack_1f0 = puVar30[2];
      bStack_1b8 = bStack_70;
      FUN_109739bb8(&uStack_200,1);
      FUN_109739b54(&uStack_1b0,&uStack_200);
      uVar15 = uStack_158 & 0xffffffff;
      if ((int)uStack_148 == 0) {
        uRam000000011382ab30 = 0;
        uRam000000011382ab38 = 0;
        uRam000000011382ab40 = 0;
      }
      lVar25 = uVar15 * 0x14 + 0xf;
      while( true ) {
        if ((int)uStack_198 == 0) {
          uRam000000011382ab30 = 0;
          uRam000000011382ab38 = 0;
          uRam000000011382ab40 = 0;
        }
        if ((uStack_1a8 & 0xffffffff) <= uVar15) break;
        *(char *)(uStack_210 + lVar25) = (char)(iVar13 << 4);
        uVar15 = uVar15 + 1;
        lVar25 = lVar25 + 0x14;
      }
      break;
    case 0xf:
      FUN_109739b54(&uStack_1b0,&uStack_b8);
      uStack_b8 = CONCAT44(uStack_b8._4_4_,(int)uStack_b8 - uStack_b8._4_4_);
      FUN_109739d10(puVar30 + 1);
      uVar15 = uStack_158 & 0xffffffff;
      if ((int)uStack_148 == 0) {
        uRam000000011382ab30 = 0;
        uRam000000011382ab38 = 0;
        uRam000000011382ab40 = 0;
      }
      lVar25 = uVar15 * 0x14 + 0xf;
      while( true ) {
        if ((int)uStack_198 == 0) {
          uRam000000011382ab30 = 0;
          uRam000000011382ab38 = 0;
          uRam000000011382ab40 = 0;
        }
        if ((uStack_1a8 & 0xffffffff) <= uVar15) break;
        *(byte *)(uStack_210 + lVar25) = (byte)(iVar13 << 4) | 4;
        uVar15 = uVar15 + 1;
        lVar25 = lVar25 + 0x14;
      }
      break;
    case 0x10:
      puStack_1d8 = (undefined *)puVar30[5];
      uStack_1e0 = puVar30[4];
      puStack_1c8 = (undefined1 *)puVar30[7];
      plStack_1d0 = (long *)puVar30[6];
      puStack_1c0 = puStack_78;
      uStack_1f8 = puVar30[1];
      uStack_200 = *puVar30;
      uStack_1e8 = puVar30[3];
      uStack_1f0 = puVar30[2];
      bStack_1b8 = bStack_70;
      FUN_109739bb8(&uStack_200,1);
      FUN_109739b54(&uStack_1b0,&uStack_200);
      uVar15 = uStack_158 & 0xffffffff;
      if ((int)uStack_148 == 0) {
        uRam000000011382ab30 = 0;
        uRam000000011382ab38 = 0;
        uRam000000011382ab40 = 0;
      }
      lVar25 = uVar15 * 0x14 + 0xf;
      while( true ) {
        if ((int)uStack_198 == 0) {
          uRam000000011382ab30 = 0;
          uRam000000011382ab38 = 0;
          uRam000000011382ab40 = 0;
        }
        if ((uStack_1a8 & 0xffffffff) <= uVar15) break;
        *(byte *)(uStack_210 + lVar25) = (byte)(iVar13 << 4) | 4;
        uVar15 = uVar15 + 1;
        lVar25 = lVar25 + 0x14;
      }
      break;
    case 0x11:
      FUN_109739b54(&uStack_1b0,&uStack_b8);
      uStack_b8 = CONCAT44(uStack_b8._4_4_,(int)uStack_b8 - uStack_b8._4_4_);
      FUN_109739d10(puVar30 + 1);
      uVar15 = uStack_158 & 0xffffffff;
      if ((int)uStack_148 == 0) {
        uRam000000011382ab30 = 0;
        uRam000000011382ab38 = 0;
        uRam000000011382ab40 = 0;
      }
      lVar25 = uVar15 * 0x14 + 0xf;
      while( true ) {
        if ((int)uStack_198 == 0) {
          uRam000000011382ab30 = 0;
          uRam000000011382ab38 = 0;
          uRam000000011382ab40 = 0;
        }
        if ((uStack_1a8 & 0xffffffff) <= uVar15) break;
        *(byte *)(uStack_210 + lVar25) = (byte)(iVar13 << 4) | 3;
        uVar15 = uVar15 + 1;
        lVar25 = lVar25 + 0x14;
      }
      break;
    case 0x12:
      puStack_1d8 = (undefined *)puVar30[5];
      uStack_1e0 = puVar30[4];
      puStack_1c8 = (undefined1 *)puVar30[7];
      plStack_1d0 = (long *)puVar30[6];
      puStack_1c0 = puStack_78;
      uStack_1f8 = puVar30[1];
      uStack_200 = *puVar30;
      uStack_1e8 = puVar30[3];
      uStack_1f0 = puVar30[2];
      bStack_1b8 = bStack_70;
      FUN_109739bb8(&uStack_200,1);
      FUN_109739b54(&uStack_1b0,&uStack_200);
      uVar15 = uStack_158 & 0xffffffff;
      if ((int)uStack_148 == 0) {
        uRam000000011382ab30 = 0;
        uRam000000011382ab38 = 0;
        uRam000000011382ab40 = 0;
      }
      lVar25 = uVar15 * 0x14 + 0xf;
      while( true ) {
        if ((int)uStack_198 == 0) {
          uRam000000011382ab30 = 0;
          uRam000000011382ab38 = 0;
          uRam000000011382ab40 = 0;
        }
        if ((uStack_1a8 & 0xffffffff) <= uVar15) break;
        *(byte *)(uStack_210 + lVar25) = (byte)(iVar13 << 4) | 3;
        uVar15 = uVar15 + 1;
        lVar25 = lVar25 + 0x14;
      }
      break;
    case 0x13:
      FUN_109739b54(&uStack_1b0,&uStack_b8);
      uStack_b8 = CONCAT44(uStack_b8._4_4_,(int)uStack_b8 - uStack_b8._4_4_);
      FUN_109739d10(puVar30 + 1);
      uVar15 = uStack_158 & 0xffffffff;
      if ((int)uStack_148 == 0) {
        uRam000000011382ab30 = 0;
        uRam000000011382ab38 = 0;
        uRam000000011382ab40 = 0;
      }
      lVar25 = uVar15 * 0x14 + 0xf;
      while( true ) {
        if ((int)uStack_198 == 0) {
          uRam000000011382ab30 = 0;
          uRam000000011382ab38 = 0;
          uRam000000011382ab40 = 0;
        }
        if ((uStack_1a8 & 0xffffffff) <= uVar15) break;
        *(byte *)(uStack_210 + lVar25) = (byte)(iVar13 << 4) | 7;
        uVar15 = uVar15 + 1;
        lVar25 = lVar25 + 0x14;
      }
code_r0x0001097393f4:
      iVar12 = 1;
      if (iVar13 != 0xf) {
        iVar12 = iVar13 + 1;
      }
      *(uint *)(lStack_208 + 0xc0) = *(uint *)(lStack_208 + 0xc0) | 0x40;
      goto LAB_1097392e8;
    case 0x14:
      FUN_109739b54(&uStack_1b0,&uStack_b8);
      uStack_b8 = CONCAT44(uStack_b8._4_4_,(int)uStack_b8 - uStack_b8._4_4_);
      FUN_109739d10(puVar30 + 1);
      uVar15 = uStack_158 & 0xffffffff;
      if ((int)uStack_148 == 0) {
        uRam000000011382ab30 = 0;
        uRam000000011382ab38 = 0;
        uRam000000011382ab40 = 0;
      }
      lVar25 = uVar15 * 0x14 + 0xf;
      while( true ) {
        if ((int)uStack_198 == 0) {
          uRam000000011382ab30 = 0;
          uRam000000011382ab38 = 0;
          uRam000000011382ab40 = 0;
        }
        if ((uStack_1a8 & 0xffffffff) <= uVar15) break;
        *(byte *)(uStack_210 + lVar25) = (byte)(iVar13 << 4) | 8;
        uVar15 = uVar15 + 1;
        lVar25 = lVar25 + 0x14;
      }
      break;
    case 0x15:
      FUN_109739b54(&uStack_1b0,&uStack_b8);
      uStack_b8 = CONCAT44(uStack_b8._4_4_,(int)uStack_b8 - uStack_b8._4_4_);
      FUN_109739d10(puVar30 + 1);
      uVar15 = uStack_158 & 0xffffffff;
      if ((int)uStack_148 == 0) {
        uRam000000011382ab30 = 0;
        uRam000000011382ab38 = 0;
        uRam000000011382ab40 = 0;
      }
      lVar25 = uVar15 * 0x14 + 0xf;
      while( true ) {
        if ((int)uStack_198 == 0) {
          uRam000000011382ab30 = 0;
          uRam000000011382ab38 = 0;
          uRam000000011382ab40 = 0;
        }
        if ((uStack_1a8 & 0xffffffff) <= uVar15) break;
        *(byte *)(uStack_210 + lVar25) = (byte)(iVar13 << 4) | 6;
        uVar15 = uVar15 + 1;
        lVar25 = lVar25 + 0x14;
      }
      break;
    case 0x16:
      puStack_1d8 = (undefined *)puVar30[5];
      uStack_1e0 = puVar30[4];
      puStack_1c8 = (undefined1 *)puVar30[7];
      plStack_1d0 = (long *)puVar30[6];
      puStack_1c0 = puStack_78;
      uStack_1f8 = puVar30[1];
      uStack_200 = *puVar30;
      uStack_1e8 = puVar30[3];
      uStack_1f0 = puVar30[2];
      bStack_1b8 = bStack_70;
      FUN_109739bb8(&uStack_200,1);
      FUN_109739b54(&uStack_1b0,&uStack_200);
      uVar15 = uStack_158 & 0xffffffff;
      if ((int)uStack_148 == 0) {
        uRam000000011382ab30 = 0;
        uRam000000011382ab38 = 0;
        uRam000000011382ab40 = 0;
      }
      lVar25 = uVar15 * 0x14 + 0xf;
      while( true ) {
        if ((int)uStack_198 == 0) {
          uRam000000011382ab30 = 0;
          uRam000000011382ab38 = 0;
          uRam000000011382ab40 = 0;
        }
        if ((uStack_1a8 & 0xffffffff) <= uVar15) break;
        *(byte *)(uStack_210 + lVar25) = (byte)(iVar13 << 4) | 6;
        uVar15 = uVar15 + 1;
        lVar25 = lVar25 + 0x14;
      }
    }
    iVar12 = 1;
    if (iVar13 != 0xf) {
      iVar12 = iVar13 + 1;
    }
LAB_1097392e8:
    if ((&UNK_10dfea693)[iVar32] == '\x02') {
      uStack_118 = 1;
    }
    uStack_b8 = CONCAT44(uStack_b8._4_4_,(int)uStack_b8 + uStack_b8._4_4_);
    FUN_109739c10(puVar30 + 1);
    if (((bVar4 | bStack_70) & 1) == 0) {
      if ((uint)uStack_a0 == 0) {
        uRam000000011382ab30 = 0;
        uRam000000011382ab38 = 0;
        uRam000000011382ab40 = 0;
      }
      if (iVar31 == 0) {
        uRam000000011382ab30 = 0;
        uRam000000011382ab38 = 0;
        uRam000000011382ab40 = 0;
      }
      if ((int)uStack_b8 == (int)puVar14) {
        puVar28 = puVar14;
        uVar9 = (uint)uStack_a0;
        iVar32 = iVar33;
        if ((bVar4 & 1) == 0) goto LAB_109739344;
LAB_109738424:
        uVar11 = *(uint *)(param_3 + 0x60);
        puVar30 = (ulong *)(ulong)uVar11;
        if (uVar11 == 0) {
          uVar15 = 0;
          puVar18 = *(uint **)(param_1 + 0x88);
        }
        else {
          puVar14 = (ulong *)0x0;
          pcVar20 = (char *)(*(long *)(param_3 + 0x70) + 0x23);
          do {
            puVar28 = puVar30;
            if ((ulong *)(ulong)(uVar11 - 1) == puVar14) break;
            puVar28 = (ulong *)((long)puVar14 + 1);
            cVar1 = *pcVar20;
            puVar14 = puVar28;
            pcVar20 = pcVar20 + 0x14;
          } while (*(char *)(*(long *)(param_3 + 0x70) + 0xf) == cVar1);
          iVar31 = 0x14;
          puVar29 = (ulong *)0x0;
          do {
            puVar14 = puVar28;
            FUN_109710ea8(param_3,3,puVar29,puVar14,1,0);
            lVar25 = *(long *)(param_3 + 0x70);
            uVar9 = *(uint *)(param_3 + 0x60);
            uVar15 = (ulong)uVar9;
            uVar5 = (uint)puVar14;
            uVar16 = uVar9;
            if (uVar9 <= uVar5 + 1) {
              uVar16 = uVar5 + 1;
            }
            lVar17 = lVar25 + 0xf;
            puVar28 = puVar14;
            do {
              iVar33 = (int)puVar28;
              puVar28 = (ulong *)(ulong)uVar16;
              if (uVar16 - 1 == iVar33) break;
              puVar28 = (ulong *)(ulong)(iVar33 + 1);
            } while (*(char *)(lVar25 + ((ulong)puVar14 & 0xffffffff) * 0x14 + 0xf) ==
                     *(char *)(lVar17 + (long)puVar28 * 0x14));
            puVar29 = puVar14;
          } while (uVar5 < uVar11);
          puVar18 = *(uint **)(param_1 + 0x88);
          uVar11 = *puVar18;
          if ((uVar11 != 0) && (uVar9 != 0)) {
            pcVar20 = (char *)(lVar25 + 0x23);
            uVar23 = 0;
            do {
              uVar10 = uVar15;
              if (uVar9 - 1 == uVar23) break;
              uVar10 = uVar23 + 1;
              cVar1 = *pcVar20;
              pcVar20 = pcVar20 + 0x14;
              uVar23 = uVar10;
            } while (*(char *)(lVar25 + 0xf) == cVar1);
            uVar23 = 0;
            do {
              lVar7 = ((uVar23 & 0xffffffff) * 4 + (uVar23 & 0xffffffff)) * 4;
              uVar5 = (uint)uVar23;
              uVar22 = (uint)uVar10;
              uVar16 = uVar22 - uVar5;
              if (2 < uVar16) {
                uVar16 = 3;
              }
              if (*(char *)(lVar25 + 0x12 + lVar7) == '\x12') {
                uVar16 = 1;
              }
              if (uVar5 < uVar16 + uVar5) {
                lVar26 = (ulong)(uVar16 + uVar5) - (uVar23 & 0xffffffff);
                puVar6 = (uint *)(lVar25 + 4 + lVar7);
                do {
                  *puVar6 = *puVar6 | uVar11;
                  lVar26 = lVar26 + -1;
                  puVar6 = puVar6 + 5;
                } while (lVar26 != 0);
              }
              uVar16 = uVar9;
              if (uVar9 <= uVar22 + 1) {
                uVar16 = uVar22 + 1;
              }
              uVar27 = uVar10;
              do {
                iVar33 = (int)uVar27;
                uVar27 = (ulong)uVar16;
                if (uVar16 - 1 == iVar33) break;
                uVar27 = (ulong)(iVar33 + 1);
              } while (*(char *)(lVar17 + (uVar10 & 0xffffffff) * 0x14) ==
                       *(char *)(lVar17 + uVar27 * 0x14));
              uVar23 = uVar10;
              uVar10 = uVar27;
            } while (uVar22 < uVar9);
          }
        }
        if (*(long *)(puVar18 + 2) == 0) {
          lVar25 = 0;
          iVar33 = *(int *)(param_1 + 0x3c);
          lVar17 = *(long *)(param_1 + 0x40);
          uVar11 = *(uint *)(param_1 + 0x34);
          uVar16 = 0;
          do {
            if (0 < iVar33) {
              iVar13 = 0;
              uVar9 = *(uint *)(&UNK_10dfe8ff0 + lVar25 * 4);
              iVar8 = iVar33 + -1;
              do {
                uVar22 = (uint)(iVar8 + iVar13) >> 1;
                uVar5 = *(uint *)(lVar17 + (ulong)uVar22 * 0x24);
                if (uVar9 <= uVar5 && uVar5 != uVar9) {
                  iVar8 = uVar22 - 1;
                }
                else {
                  if (uVar9 <= uVar5) {
                    uVar9 = *(uint *)(lVar17 + (ulong)uVar22 * 0x24 + 0x1c);
                    goto LAB_109738698;
                  }
                  iVar13 = uVar22 + 1;
                }
              } while (iVar13 <= iVar8);
            }
            uVar9 = 0;
LAB_109738698:
            uVar5 = 0;
            if (uVar9 != uVar11) {
              uVar5 = uVar9;
            }
            *(uint *)((long)&uStack_b8 + lVar25 * 4) = uVar5;
            uVar16 = uVar5 | uVar16;
            lVar25 = lVar25 + 1;
          } while (lVar25 != 4);
          if ((uVar16 != 0) && (uVar11 = (uint)uVar15, uVar11 != 0)) {
            lVar25 = *(long *)(param_3 + 0x70);
            pbVar19 = (byte *)(lVar25 + 0xf);
            uVar9 = (uint)*pbVar19;
            uVar23 = 0;
            pbVar21 = (byte *)(lVar25 + 0x23);
            do {
              uVar10 = uVar15;
              if (uVar11 - 1 == uVar23) break;
              uVar10 = uVar23 + 1;
              bVar2 = *pbVar21;
              uVar23 = uVar10;
              pbVar21 = pbVar21 + 0x14;
            } while (*pbVar19 == bVar2);
            lVar17 = 4;
            uVar15 = 0;
            uVar23 = 0;
            do {
              uVar27 = uVar10;
              uVar5 = (uint)uVar27;
              if ((uVar9 & 0xf) < 9) {
                if ((1 << (ulong)(uVar9 & 0xf) & 0xbfU) == 0) {
                  lVar17 = 4;
                }
                else {
                  uVar10 = uVar23 & 0xffffffff;
                  if ((lVar17 == 3) || (lVar17 == 0)) {
                    if ((uint)uVar15 < (uint)uVar23) {
                      lVar7 = 8;
                      if (lVar17 != 3) {
                        lVar7 = 4;
                      }
                      uVar9 = *(uint *)((long)&uStack_b8 + lVar7);
                      lVar17 = uVar10 - (uVar15 & 0xffffffff);
                      puVar18 = (uint *)(lVar25 + 4 + (uVar15 & 0xffffffff) * 0x14);
                      do {
                        *puVar18 = *puVar18 & ~uVar16 | uVar9;
                        lVar17 = lVar17 + -1;
                        puVar18 = puVar18 + 5;
                      } while (lVar17 != 0);
                    }
                    lVar17 = 3;
                  }
                  else {
                    lVar17 = 0;
                  }
                  if ((uint)uVar23 < uVar5) {
                    uVar9 = *(uint *)((long)&uStack_b8 + lVar17 * 4);
                    lVar7 = (uVar27 & 0xffffffff) - uVar10;
                    puVar18 = (uint *)(lVar25 + 4 + uVar10 * 0x14);
                    do {
                      *puVar18 = *puVar18 & ~uVar16 | uVar9;
                      lVar7 = lVar7 + -1;
                      puVar18 = puVar18 + 5;
                    } while (lVar7 != 0);
                  }
                }
              }
              uVar9 = (uint)pbVar19[(uVar27 & 0xffffffff) * 0x14];
              uVar22 = uVar11;
              if (uVar11 <= uVar5 + 1) {
                uVar22 = uVar5 + 1;
              }
              uVar10 = uVar27;
              do {
                iVar33 = (int)uVar10;
                uVar10 = (ulong)uVar22;
                if (uVar22 - 1 == iVar33) break;
                uVar10 = (ulong)(iVar33 + 1);
              } while (uVar9 == pbVar19[uVar10 * 0x14]);
              uVar15 = uVar23;
              uVar23 = uVar27;
            } while (uVar5 < uVar11);
          }
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
          return 0;
        }
        ___stack_chk_fail();
      }
    }
    else if ((bVar4 & bStack_70) != 0) {
      iVar32 = iVar33;
      if (bVar4 == 0) goto LAB_109738424;
      goto LAB_109739358;
    }
LAB_10973881c:
    lVar25 = (long)iVar32;
    if ((&UNK_10dfea614)[iVar32] == '\x03') {
      FUN_109739b54(&uStack_160,&uStack_b8);
    }
    lVar17 = (long)(char)(&UNK_10dfea374)[lVar25];
    bVar2 = (&UNK_10dfe9014)[lVar25 * 2];
    if ((uint)uStack_a0 == 0) {
      uVar15 = 0;
      uRam000000011382ab30 = 0;
      uRam000000011382ab38 = 0;
      uRam000000011382ab40 = 0;
      if (bVar2 == 0) goto LAB_109738898;
    }
    else {
      bVar3 = *(byte *)(uStack_a8 + 0x12);
      uVar15 = (ulong)bVar3;
      if ((bVar2 <= bVar3) && (bVar3 <= (byte)(&UNK_10dfe9015)[lVar25 * 2])) {
LAB_109738898:
        lVar17 = uVar15 - bVar2;
      }
    }
    uVar15 = (ulong)(byte)(&UNK_10dfe9113)[lVar17 + *(short *)(&UNK_10dfea276 + lVar25 * 2)];
    iVar13 = iVar12;
  } while( true );
LAB_1097383a4:
  uVar9 = ~uVar24 + uVar9;
  uVar16 = uVar16 + uVar24 + 1;
  uVar5 = uVar5 + uVar24 + 1;
  goto LAB_1097382a0;
}



/* Entry: 1097395e4; end: 1097397e7;  */

undefined8 FUN_1097395e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ushort *puVar2;
  
  uVar1 = (ulong)*(uint *)(param_3 + 0x60);
  if (*(uint *)(param_3 + 0x60) != 0) {
    puVar2 = (ushort *)(*(long *)(param_3 + 0x70) + 0xc);
    do {
      *puVar2 = *puVar2 & 0xffef;
      uVar1 = uVar1 - 1;
      puVar2 = puVar2 + 10;
    } while (uVar1 != 0);
  }
  return 0;
}



/* Entry: 1097397e8; end: 109739b53;  */

void FUN_1097397e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ushort *puVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  lVar11 = param_3;
  FUN_1096f53f4(param_3,param_2,&UNK_10f57f229);
  if ((int)lVar11 != 0) {
    FUN_10970b854(param_2,param_3,7,1,0x12,0xffffffff);
    uVar3 = *(uint *)(param_3 + 0x60);
    if (uVar3 != 0) {
      uVar8 = 0;
      lVar17 = *(long *)(param_3 + 0x70);
      lVar11 = 0x23;
      do {
        if (uVar3 - 1 == uVar8) {
          uVar8 = (ulong)uVar3;
          break;
        }
        uVar8 = uVar8 + 1;
        pcVar1 = (char *)(lVar17 + lVar11);
        lVar11 = lVar11 + 0x14;
      } while (*(char *)(lVar17 + 0xf) == *pcVar1);
      uVar15 = 0;
      do {
        uVar9 = uVar8;
        puVar16 = (undefined8 *)(lVar17 + (uVar15 & 0xffffffff) * 0x14);
        uVar18 = (uint)uVar9;
        if ((1 << (ulong)(*(byte *)((long)puVar16 + 0xf) & 0xf) & 0xa7U) != 0) {
          uVar13 = (uint)uVar15;
          if ((1 < uVar18 - uVar13) &&
             (uVar2 = uVar13 + 1, *(char *)((long)puVar16 + 0x12) == '\x12' && uVar2 < uVar18)) {
            uVar12 = uVar18 - 1;
            uVar8 = (ulong)uVar12;
            lVar11 = uVar8 - uVar2;
            puVar10 = (ushort *)(lVar17 + (ulong)uVar2 * 0x14 + 0xc);
            iVar7 = -1;
            do {
              bVar5 = (byte)puVar10[3];
              if (bVar5 < 0x40 && (1L << ((ulong)bVar5 & 0x3f) & 0xe0ee7fc00000U) != 0) {
                uVar12 = uVar13 - iVar7;
LAB_109739974:
                uVar12 = uVar12 - 1;
LAB_109739978:
                if (1 < (uVar12 + 1) - uVar13) {
                  FUN_1096f65e4(param_3,uVar15);
                }
                uVar20 = puVar16[1];
                uVar19 = *puVar16;
                uVar4 = *(undefined4 *)(puVar16 + 2);
                _memmove(puVar16,lVar17 + (ulong)uVar2 * 0x14,(ulong)(uVar12 - uVar13) * 0x14);
                puVar16 = (undefined8 *)(lVar17 + (ulong)uVar12 * 0x14);
                puVar16[1] = uVar20;
                *puVar16 = uVar19;
                *(undefined4 *)(puVar16 + 2) = uVar4;
                break;
              }
              if (bVar5 < 0x36 && (1L << ((ulong)bVar5 & 0x3f) & 0x20100000001000U) != 0) {
                if ((lVar11 == 0) || ((*puVar10 >> 5 & 1) == 0)) {
                  uVar12 = uVar13 - iVar7;
                  if ((*puVar10 >> 5 & 1) == 0) goto LAB_109739974;
                  goto LAB_109739978;
                }
              }
              else if (lVar11 == 0) goto LAB_109739978;
              iVar7 = iVar7 + -1;
              uVar6 = (int)uVar8 - 1;
              uVar8 = (ulong)uVar6;
              lVar11 = lVar11 + -1;
              puVar10 = puVar10 + 10;
            } while (uVar13 != uVar6);
          }
          if (uVar13 < uVar18) {
            uVar8 = uVar15 & 0xffffffff;
            puVar10 = (ushort *)(lVar17 + uVar8 * 0x14 + 0xc);
            do {
              bVar5 = (byte)puVar10[3];
              iVar7 = (int)uVar8;
              if ((bVar5 < 0x36 && (1L << ((ulong)bVar5 & 0x3f) & 0x20100000001000U) != 0) &&
                 ((*puVar10 >> 5 & 1) == 0)) {
                uVar15 = (ulong)(iVar7 + 1);
              }
              else if (((1 << (ulong)(bVar5 & 0x1f) & 0xc00000U) != 0 && bVar5 < 0x20) &&
                      (((puVar10[1] & 0xf) == 0 || (puVar10[1] & 0x10) != 0 &&
                       ((uVar15 & 0xffffffff) < uVar8)))) {
                iVar14 = (int)uVar15;
                if (1 < (iVar7 - iVar14) + 1U) {
                  FUN_1096f65e4(param_3,uVar15,uVar8 + 1);
                }
                uVar20 = *(undefined8 *)(puVar10 + -2);
                uVar19 = *(undefined8 *)(puVar10 + -6);
                uVar4 = *(undefined4 *)(puVar10 + 2);
                puVar16 = (undefined8 *)(lVar17 + (uVar15 & 0xffffffff) * 0x14);
                _memmove(lVar17 + (ulong)(iVar14 + 1) * 0x14,puVar16,
                         (ulong)(uint)(iVar7 - iVar14) * 0x14);
                puVar16[1] = uVar20;
                *puVar16 = uVar19;
                *(undefined4 *)(puVar16 + 2) = uVar4;
              }
              uVar8 = uVar8 + 1;
              puVar10 = puVar10 + 10;
            } while ((uVar9 & 0xffffffff) != uVar8);
          }
        }
        lVar17 = *(long *)(param_3 + 0x70);
        uVar13 = *(uint *)(param_3 + 0x60);
        if (uVar13 <= uVar18 + 1) {
          uVar13 = uVar18 + 1;
        }
        uVar8 = uVar9;
        do {
          iVar7 = (int)uVar8;
          uVar8 = (ulong)uVar13;
          if (uVar13 - 1 == iVar7) break;
          uVar8 = (ulong)(iVar7 + 1);
        } while (*(char *)(lVar17 + (uVar9 & 0xffffffff) * 0x14 + 0xf) ==
                 *(char *)(lVar17 + 0xf + uVar8 * 0x14));
        uVar15 = uVar9;
      } while (uVar18 < uVar3);
    }
    FUN_1096f53f4(param_3,param_2,&UNK_10f57f23e);
  }
  *(byte *)(param_3 + 0xb8) = *(byte *)(param_3 + 0xb8) & 0xbf;
  return;
}



/* Entry: 109739b54; end: 109739bb7;  */

uint * FUN_109739b54(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  *(char *)(param_1 + 0x12) = (char)param_2[0x12];
  uVar1 = *param_1;
  if (param_1[6] == 0) {
    uRam000000011382ab30 = 0;
    uRam000000011382ab38 = 0;
    uRam000000011382ab40 = 0;
  }
  uVar2 = *param_2;
  if (param_2[6] == 0) {
    uRam000000011382ab30 = 0;
    uRam000000011382ab38 = 0;
    uRam000000011382ab40 = 0;
  }
  iVar3 = uVar1 - uVar2;
  if (uVar1 < uVar2) {
    iVar3 = uVar2 - uVar1;
    if ((iVar3 != 0) && (*param_1 = *param_1 + param_1[1] * iVar3, param_1[6] != 0)) {
      do {
        iVar3 = iVar3 + -1;
        FUN_109739c10(param_1 + 2);
      } while (param_1[6] != 0 && iVar3 != 0);
    }
    return param_1;
  }
  if (iVar3 != 0) {
    if ((iVar3 != 0) && (*param_1 = *param_1 - param_1[1] * iVar3, param_1[6] != 0)) {
      do {
        iVar3 = iVar3 + -1;
        FUN_109739d10(param_1 + 2);
      } while (param_1[6] != 0 && iVar3 != 0);
    }
    return param_1;
  }
  return param_1;
}



/* Entry: 109739bb8; end: 109739c0f;  */

int * FUN_109739bb8(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*param_1 = *param_1 + param_1[1] * param_2, param_1[6] != 0)) {
    do {
      param_2 = param_2 + -1;
      FUN_109739c10(param_1 + 2);
    } while (param_1[6] != 0 && param_2 != 0);
  }
  return param_1;
}



/* Entry: 109739c10; end: 109739cb7;  */

void FUN_109739c10(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  
  iVar3 = *param_1;
  iVar2 = param_1[1];
  iVar4 = param_1[4];
  uVar1 = iVar2 + iVar3 + 1;
  do {
    iVar3 = iVar3 + iVar2;
    *param_1 = iVar3;
    if (iVar4 == 0) {
      return;
    }
    lVar5 = *(long *)(param_1 + 2);
    *(long *)(param_1 + 2) = lVar5 + 0x14;
    iVar4 = iVar4 + -1;
    param_1[4] = iVar4;
    param_1[5] = param_1[5] + 1;
    if (iVar4 == 0) {
      return;
    }
    if (*(char *)(lVar5 + 0x26) != '\x06') {
      if (*(char *)(lVar5 + 0x26) != '\x0e') {
        return;
      }
      uVar6 = uVar1;
      do {
        if (*(uint *)(**(long **)(param_1 + 10) + 0x60) <= uVar6) {
          return;
        }
        lVar5 = **(long **)(param_1 + 0xc) + (ulong)uVar6 * 0x14;
        uVar6 = uVar6 + 1;
      } while (*(char *)(lVar5 + 0x12) == '\x06');
      if ((1 << (ulong)(*(ushort *)(lVar5 + 0x10) & 0x1f) & 0x1c00U) == 0) {
        return;
      }
    }
    uVar1 = uVar1 + iVar2;
  } while( true );
}



/* Entry: 109739cb8; end: 109739d0f;  */

int * FUN_109739cb8(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*param_1 = *param_1 - param_1[1] * param_2, param_1[6] != 0)) {
    do {
      param_2 = param_2 + -1;
      FUN_109739d10(param_1 + 2);
    } while (param_1[6] != 0 && param_2 != 0);
  }
  return param_1;
}



/* Entry: 109739d10; end: 109739dcb;  */

void FUN_109739d10(int *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar4 = *param_1;
  iVar2 = param_1[1];
  iVar5 = param_1[4];
  iVar6 = param_1[5];
  uVar1 = (iVar4 - iVar2) + 1;
  iVar7 = iVar6;
  do {
    iVar4 = iVar4 - iVar2;
    *param_1 = iVar4;
    if (iVar7 != 0) {
      iVar5 = iVar5 + 1;
      iVar6 = iVar7 + -1;
      param_1[4] = iVar5;
      param_1[5] = iVar6;
      *(long *)(param_1 + 2) = *(long *)(param_1 + 2) + -0x14;
      iVar7 = iVar6;
    }
    if ((iVar5 == 0) || (*(char *)(*(long *)(param_1 + 2) + 0x12) != '\x06')) {
      if ((iVar5 == 0) || (*(char *)(*(long *)(param_1 + 2) + 0x12) != '\x0e')) {
        return;
      }
      uVar8 = uVar1;
      do {
        if (*(uint *)(**(long **)(param_1 + 10) + 0x60) <= uVar8) {
          return;
        }
        lVar3 = **(long **)(param_1 + 0xc) + (ulong)uVar8 * 0x14;
        uVar8 = uVar8 + 1;
      } while (*(char *)(lVar3 + 0x12) == '\x06');
      iVar7 = iVar6;
      if ((1 << (ulong)(*(ushort *)(lVar3 + 0x10) & 0x1f) & 0x1c00U) == 0) {
        return;
      }
    }
    uVar1 = uVar1 - iVar2;
  } while( true );
}



/* Entry: 109739dcc; end: 109739e3b;  */

bool FUN_109739dcc(byte *param_1,byte *param_2,undefined8 param_3)

{
  bool bVar1;
  
  if ((uint)((int)param_2 - (int)param_1) < 3) {
    bVar1 = false;
  }
  else {
    do {
      _strstr(param_1,param_3);
      bVar1 = param_1 != (byte *)0x0 && param_1 < param_2;
      if (param_1 == (byte *)0x0 || param_1 >= param_2) {
        return bVar1;
      }
      param_1 = param_1 + 3;
    } while (*param_1 - 0x30 < 10 || (*param_1 & 0xffffffdf) - 0x41 < 0x1a);
  }
  return bVar1;
}



/* Entry: 109739e3c; end: 109739ec3;  */

int * FUN_109739e3c(long param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  uVar4 = 0;
  if (uVar2 != 0) {
    uVar4 = (param_3 & 0x3fffffff) / uVar2;
  }
  uVar2 = (param_3 & 0x3fffffff) - uVar4 * uVar2;
  piVar3 = (int *)(*(long *)(param_1 + 0x28) + (ulong)uVar2 * 0xc);
  uVar4 = piVar3[1];
  if ((uVar4 >> 1 & 1) != 0) {
    if (*piVar3 != param_2) {
      iVar5 = 1;
      do {
        uVar2 = *(uint *)(param_1 + 0x1c) & uVar2 + iVar5;
        piVar3 = (int *)(*(long *)(param_1 + 0x28) + (ulong)uVar2 * 0xc);
        uVar4 = piVar3[1];
        if ((uVar4 >> 1 & 1) == 0) {
          return (int *)0x0;
        }
        iVar5 = iVar5 + 1;
      } while (*piVar3 != param_2);
    }
    piVar1 = (int *)0x0;
    if ((uVar4 & 1) != 0) {
      piVar1 = piVar3;
    }
    return piVar1;
  }
  return (int *)0x0;
}



/* Entry: 109739ec4; end: 109739f83;  */

void FUN_109739ec4(char *param_1,ulong param_2)

{
  uint uVar1;
  char *pcVar2;
  
  if ((*param_1 == '\x01') &&
     (pcVar2 = param_1, FUN_10972a264(param_1,param_2,0), pcVar2 != (char *)0x0)) {
    param_1[4] = -1;
    param_1[5] = -1;
    param_1[6] = -1;
    param_1[7] = -1;
    uVar1 = (uint)param_2 >> 6 & 7;
    *(ulong *)(pcVar2 + (ulong)uVar1 * 8 + 8) =
         *(ulong *)(pcVar2 + (ulong)uVar1 * 8 + 8) & (1L << (param_2 & 0x3f) ^ 0xffffffffffffffffU);
    pcVar2[0] = -1;
    pcVar2[1] = -1;
    pcVar2[2] = -1;
    pcVar2[3] = -1;
  }
  return;
}



/* Entry: 109739f84; end: 109739fab;  */

char * FUN_109739f84(char *param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if (param_1[0x30] == '\x01') {
    FUN_109739fac();
    return (char *)0x1;
  }
  if (*param_1 == '\x01') {
    pcVar3 = (char *)0x0;
    uVar5 = (uint)param_3;
    if (((uVar5 != 0xffffffff) && ((uint)param_2 != 0xffffffff)) && ((uint)param_2 <= uVar5)) {
      param_1[4] = -1;
      param_1[5] = -1;
      param_1[6] = -1;
      param_1[7] = -1;
      uVar2 = (uint)(param_2 >> 9);
      uVar7 = uVar2 & 0x7fffff;
      pcVar3 = param_1;
      FUN_10972a264(param_1,param_2,1);
      pcVar4 = pcVar3;
      if (uVar7 != uVar5 >> 9) {
        if (pcVar3 == (char *)0x0) {
          return (char *)0x0;
        }
        FUN_10973a4f0();
        if (uVar7 + 1 < uVar5 >> 9) {
          iVar6 = ~uVar7 + (uVar5 >> 9);
          iVar1 = uVar2 * 0x200;
          do {
            iVar1 = iVar1 + 0x200;
            pcVar3 = param_1;
            FUN_10972a264(param_1,iVar1,1);
            if (pcVar3 == (char *)0x0) {
              return (char *)0x0;
            }
            pcVar3[0x40] = -1;
            pcVar3[0x41] = -1;
            pcVar3[0x42] = -1;
            pcVar3[0x43] = -1;
            pcVar3[0x44] = -1;
            pcVar3[0x45] = -1;
            pcVar3[0x46] = -1;
            pcVar3[0x47] = -1;
            pcVar3[0x38] = -1;
            pcVar3[0x39] = -1;
            pcVar3[0x3a] = -1;
            pcVar3[0x3b] = -1;
            pcVar3[0x3c] = -1;
            pcVar3[0x3d] = -1;
            pcVar3[0x3e] = -1;
            pcVar3[0x3f] = -1;
            pcVar3[0x30] = -1;
            pcVar3[0x31] = -1;
            pcVar3[0x32] = -1;
            pcVar3[0x33] = -1;
            pcVar3[0x34] = -1;
            pcVar3[0x35] = -1;
            pcVar3[0x36] = -1;
            pcVar3[0x37] = -1;
            pcVar3[0x28] = -1;
            pcVar3[0x29] = -1;
            pcVar3[0x2a] = -1;
            pcVar3[0x2b] = -1;
            pcVar3[0x2c] = -1;
            pcVar3[0x2d] = -1;
            pcVar3[0x2e] = -1;
            pcVar3[0x2f] = -1;
            pcVar3[0x20] = -1;
            pcVar3[0x21] = -1;
            pcVar3[0x22] = -1;
            pcVar3[0x23] = -1;
            pcVar3[0x24] = -1;
            pcVar3[0x25] = -1;
            pcVar3[0x26] = -1;
            pcVar3[0x27] = -1;
            pcVar3[0x18] = -1;
            pcVar3[0x19] = -1;
            pcVar3[0x1a] = -1;
            pcVar3[0x1b] = -1;
            pcVar3[0x1c] = -1;
            pcVar3[0x1d] = -1;
            pcVar3[0x1e] = -1;
            pcVar3[0x1f] = -1;
            pcVar3[0x10] = -1;
            pcVar3[0x11] = -1;
            pcVar3[0x12] = -1;
            pcVar3[0x13] = -1;
            pcVar3[0x14] = -1;
            pcVar3[0x15] = -1;
            pcVar3[0x16] = -1;
            pcVar3[0x17] = -1;
            pcVar3[8] = -1;
            pcVar3[9] = -1;
            pcVar3[10] = -1;
            pcVar3[0xb] = -1;
            pcVar3[0xc] = -1;
            pcVar3[0xd] = -1;
            pcVar3[0xe] = -1;
            pcVar3[0xf] = -1;
            pcVar3[0] = '\0';
            pcVar3[1] = '\x02';
            pcVar3[2] = '\0';
            pcVar3[3] = '\0';
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        FUN_10972a264(param_1,param_3,1);
        pcVar3 = (char *)0x0;
        pcVar4 = param_1;
      }
      if (pcVar4 != (char *)0x0) {
        FUN_10973a4f0();
        pcVar3 = (char *)0x1;
      }
    }
    return pcVar3;
  }
  return (char *)0x1;
}



/* Entry: 109739fac; end: 10973a187;  */

void FUN_109739fac(char *param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  int *piVar11;
  ulong uVar12;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar5 = (uint)param_2;
  uVar6 = (uint)param_3;
  if ((*param_1 == '\x01' && uVar5 != 0xffffffff) && uVar5 <= uVar6) {
    iVar3 = (int)&uStack_60;
    param_1[4] = -1;
    param_1[5] = -1;
    param_1[6] = -1;
    param_1[7] = -1;
    uVar5 = uVar5 >> 9;
    uVar1 = uVar5;
    if ((param_2 & 0x1ff) != 0) {
      uVar1 = uVar5 + 1;
    }
    iVar2 = (uVar6 >> 9) - (uint)((uVar6 & 0x1ff) != 0x1ff);
    if ((((param_2 & 0x1ff) != 0) || (iVar2 < (int)uVar1)) &&
       (pcVar4 = param_1, FUN_10972a264(param_1,param_2,0), pcVar4 != (char *)0x0)) {
      FUN_10973a2b0();
    }
    if (((uVar5 != uVar6 >> 9) && ((uVar6 & 0x1ff) != 0x1ff)) &&
       (pcVar4 = param_1, FUN_10972a264(param_1,param_3,0), pcVar4 != (char *)0x0)) {
      FUN_10973a2b0();
    }
    if ((int)uVar1 <= iVar2) {
      uStack_60 = 0;
      uStack_58 = 0;
      FUN_109721938(&uStack_60,*(undefined4 *)(param_1 + 0x24));
      if (iVar3 == 0) {
        *param_1 = '\0';
      }
      else {
        uVar9 = (ulong)*(uint *)(param_1 + 0x14);
        if (*(uint *)(param_1 + 0x14) == 0) {
          uVar12 = 0;
        }
        else {
          lVar7 = 0;
          uVar8 = 0;
          uVar12 = 0;
          do {
            if (uVar8 < uVar9) {
              iVar3 = *(int *)(*(long *)(param_1 + 0x18) + lVar7);
              piVar11 = (int *)(*(long *)(param_1 + 0x18) + lVar7);
              if (iVar3 < (int)uVar1 || iVar2 < iVar3) {
LAB_10973a0d8:
                if ((uint)uVar12 < (uint)uVar9) {
                  piVar10 = (int *)(*(long *)(param_1 + 0x18) + uVar12 * 8);
                }
                else {
                  uRam000000011382ab30 = 0;
                  piVar10 = (int *)0x11382ab30;
                }
                uVar12 = (ulong)((uint)uVar12 + 1);
                *(undefined8 *)piVar10 = *(undefined8 *)piVar11;
                uVar9 = (ulong)*(uint *)(param_1 + 0x14);
              }
            }
            else {
              uRam000000011382ab30 = 0;
              piVar11 = (int *)0x11382ab30;
              if (uVar1 != 0) goto LAB_10973a0d8;
            }
            uVar8 = uVar8 + 1;
            lVar7 = lVar7 + 8;
          } while (uVar8 < uVar9);
        }
        FUN_10973a364(param_1,uStack_60._4_4_,uStack_58,uVar12);
        FUN_10972a39c(param_1,uVar12,1);
      }
      if ((int)uStack_60 != 0) {
        _free(uStack_58);
      }
    }
  }
  return;
}



/* Entry: 10973a188; end: 10973a2af;  */

char * FUN_10973a188(char *param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if (*param_1 != '\x01') {
    return (char *)0x1;
  }
  pcVar3 = (char *)0x0;
  uVar5 = (uint)param_3;
  if (((uVar5 != 0xffffffff) && ((uint)param_2 != 0xffffffff)) && ((uint)param_2 <= uVar5)) {
    param_1[4] = -1;
    param_1[5] = -1;
    param_1[6] = -1;
    param_1[7] = -1;
    uVar2 = (uint)(param_2 >> 9);
    uVar7 = uVar2 & 0x7fffff;
    pcVar3 = param_1;
    FUN_10972a264(param_1,param_2,1);
    pcVar4 = pcVar3;
    if (uVar7 != uVar5 >> 9) {
      if (pcVar3 == (char *)0x0) {
        return (char *)0x0;
      }
      FUN_10973a4f0();
      if (uVar7 + 1 < uVar5 >> 9) {
        iVar6 = ~uVar7 + (uVar5 >> 9);
        iVar1 = uVar2 * 0x200;
        do {
          iVar1 = iVar1 + 0x200;
          pcVar3 = param_1;
          FUN_10972a264(param_1,iVar1,1);
          if (pcVar3 == (char *)0x0) {
            return (char *)0x0;
          }
          pcVar3[0x40] = -1;
          pcVar3[0x41] = -1;
          pcVar3[0x42] = -1;
          pcVar3[0x43] = -1;
          pcVar3[0x44] = -1;
          pcVar3[0x45] = -1;
          pcVar3[0x46] = -1;
          pcVar3[0x47] = -1;
          pcVar3[0x38] = -1;
          pcVar3[0x39] = -1;
          pcVar3[0x3a] = -1;
          pcVar3[0x3b] = -1;
          pcVar3[0x3c] = -1;
          pcVar3[0x3d] = -1;
          pcVar3[0x3e] = -1;
          pcVar3[0x3f] = -1;
          pcVar3[0x30] = -1;
          pcVar3[0x31] = -1;
          pcVar3[0x32] = -1;
          pcVar3[0x33] = -1;
          pcVar3[0x34] = -1;
          pcVar3[0x35] = -1;
          pcVar3[0x36] = -1;
          pcVar3[0x37] = -1;
          pcVar3[0x28] = -1;
          pcVar3[0x29] = -1;
          pcVar3[0x2a] = -1;
          pcVar3[0x2b] = -1;
          pcVar3[0x2c] = -1;
          pcVar3[0x2d] = -1;
          pcVar3[0x2e] = -1;
          pcVar3[0x2f] = -1;
          pcVar3[0x20] = -1;
          pcVar3[0x21] = -1;
          pcVar3[0x22] = -1;
          pcVar3[0x23] = -1;
          pcVar3[0x24] = -1;
          pcVar3[0x25] = -1;
          pcVar3[0x26] = -1;
          pcVar3[0x27] = -1;
          pcVar3[0x18] = -1;
          pcVar3[0x19] = -1;
          pcVar3[0x1a] = -1;
          pcVar3[0x1b] = -1;
          pcVar3[0x1c] = -1;
          pcVar3[0x1d] = -1;
          pcVar3[0x1e] = -1;
          pcVar3[0x1f] = -1;
          pcVar3[0x10] = -1;
          pcVar3[0x11] = -1;
          pcVar3[0x12] = -1;
          pcVar3[0x13] = -1;
          pcVar3[0x14] = -1;
          pcVar3[0x15] = -1;
          pcVar3[0x16] = -1;
          pcVar3[0x17] = -1;
          pcVar3[8] = -1;
          pcVar3[9] = -1;
          pcVar3[10] = -1;
          pcVar3[0xb] = -1;
          pcVar3[0xc] = -1;
          pcVar3[0xd] = -1;
          pcVar3[0xe] = -1;
          pcVar3[0xf] = -1;
          pcVar3[0] = '\0';
          pcVar3[1] = '\x02';
          pcVar3[2] = '\0';
          pcVar3[3] = '\0';
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      FUN_10972a264(param_1,param_3,1);
      pcVar3 = (char *)0x0;
      pcVar4 = param_1;
    }
    if (pcVar4 != (char *)0x0) {
      FUN_10973a4f0();
      pcVar3 = (char *)0x1;
    }
  }
  return pcVar3;
}



/* Entry: 10973a2b0; end: 10973a363;  */

void FUN_10973a2b0(undefined4 *param_1,ulong param_2,uint param_3)

{
  ulong *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  
  uVar3 = (uint)param_2 >> 6 & 7;
  puVar1 = (ulong *)((long)param_1 + (ulong)(uVar3 * 8) + 8);
  uVar4 = param_3 >> 6 & 7;
  if (uVar3 == uVar4) {
    uVar6 = (1L << (param_2 & 0x3f)) + ~(2L << ((ulong)param_3 & 0x3f));
    puVar5 = puVar1;
  }
  else {
    uVar4 = uVar4 * 8;
    puVar5 = (ulong *)((long)param_1 + (ulong)uVar4 + 8);
    *puVar1 = *puVar1 & (-1L << (param_2 & 0x3f) ^ 0xffffffffffffffffU);
    iVar2 = uVar4 + uVar3 * -8 + -8;
    if (iVar2 != 0) {
      _bzero(puVar1 + 1,iVar2);
    }
    uVar6 = -2L << ((ulong)param_3 & 0x3f);
  }
  *puVar5 = *puVar5 & uVar6;
  *param_1 = 0xffffffff;
  return;
}



/* Entry: 10973a364; end: 10973a4ef;  */

void FUN_10973a364(long param_1,uint param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  uVar3 = (ulong)param_2;
  puVar4 = param_3;
  uVar5 = uVar3;
  if (param_2 != 0) {
    do {
      *puVar4 = 0xffffffff;
      bVar2 = uVar5 != 1;
      puVar4 = puVar4 + 1;
      uVar5 = (ulong)((int)uVar5 - 1);
    } while (bVar2);
  }
  puVar4 = (uint *)0x11382ab30;
  if (param_4 != 0) {
    uVar5 = 0;
    lVar6 = 4;
    do {
      if (uVar5 < *(uint *)(param_1 + 0x14)) {
        uVar8 = (ulong)*(uint *)(*(long *)(param_1 + 0x18) + lVar6);
      }
      else {
        uVar8 = 0;
        uRam000000011382ab30 = 0;
      }
      if (uVar8 < uVar3) {
        puVar9 = param_3 + uVar8;
      }
      else {
        uRam000000011382ab30 = uRam000000011382ab30 & 0xffffffff00000000;
        puVar9 = puVar4;
      }
      *puVar9 = (uint)uVar5;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while (param_4 != uVar5);
  }
  uVar10 = *(uint *)(param_1 + 0x24);
  if (uVar10 != 0) {
    lVar6 = 0;
    uVar5 = 0;
    uVar8 = 0;
    do {
      puVar9 = param_3;
      if (uVar3 <= uVar5) {
        puVar9 = (uint *)&UNK_10dfe4888;
      }
      uVar1 = *puVar9;
      if (uVar1 != 0xffffffff) {
        uVar7 = (uint)uVar8;
        if (uVar8 < uVar5) {
          if (uVar5 < uVar10) {
            puVar12 = (uint *)(*(long *)(param_1 + 0x28) + lVar6);
          }
          else {
            uRam000000011382ab70 = 0;
            uRam000000011382ab58 = 0;
            uRam000000011382ab50 = 0;
            uRam000000011382ab68 = 0;
            uRam000000011382ab60 = 0;
            uRam000000011382ab38 = 0;
            uRam000000011382ab30 = 0;
            uRam000000011382ab48 = 0;
            uRam000000011382ab40 = 0;
            uVar10 = *(uint *)(param_1 + 0x24);
            puVar12 = puVar4;
          }
          if (uVar7 < uVar10) {
            puVar11 = (uint *)(*(long *)(param_1 + 0x28) + uVar8 * 0x48);
          }
          else {
            uRam000000011382ab70 = 0;
            uRam000000011382ab58 = 0;
            uRam000000011382ab50 = 0;
            uRam000000011382ab68 = 0;
            uRam000000011382ab60 = 0;
            uRam000000011382ab38 = 0;
            uRam000000011382ab30 = 0;
            uRam000000011382ab48 = 0;
            uRam000000011382ab40 = 0;
            puVar11 = puVar4;
          }
          uVar13 = *(undefined8 *)puVar12;
          *(undefined8 *)(puVar11 + 2) = *(undefined8 *)(puVar12 + 2);
          *(undefined8 *)puVar11 = uVar13;
          uVar14 = *(undefined8 *)(puVar12 + 6);
          uVar13 = *(undefined8 *)(puVar12 + 4);
          uVar16 = *(undefined8 *)(puVar12 + 10);
          uVar15 = *(undefined8 *)(puVar12 + 8);
          uVar18 = *(undefined8 *)(puVar12 + 0xe);
          uVar17 = *(undefined8 *)(puVar12 + 0xc);
          *(undefined8 *)(puVar11 + 0x10) = *(undefined8 *)(puVar12 + 0x10);
          *(undefined8 *)(puVar11 + 10) = uVar16;
          *(undefined8 *)(puVar11 + 8) = uVar15;
          *(undefined8 *)(puVar11 + 0xe) = uVar18;
          *(undefined8 *)(puVar11 + 0xc) = uVar17;
          *(undefined8 *)(puVar11 + 6) = uVar14;
          *(undefined8 *)(puVar11 + 4) = uVar13;
          uVar1 = *puVar9;
        }
        if ((ulong)uVar1 < (ulong)*(uint *)(param_1 + 0x14)) {
          puVar9 = (uint *)(*(long *)(param_1 + 0x18) + (ulong)uVar1 * 8);
        }
        else {
          uRam000000011382ab30 = 0;
          puVar9 = puVar4;
        }
        puVar9[1] = uVar7;
        uVar8 = (ulong)(uVar7 + 1);
        uVar10 = *(uint *)(param_1 + 0x24);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x48;
      param_3 = param_3 + 1;
    } while (uVar5 < uVar10);
  }
  return;
}



/* Entry: 10973a4f0; end: 10973a5a7;  */

void FUN_10973a4f0(undefined4 *param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  
  uVar3 = (uint)param_2 >> 6 & 7;
  puVar1 = (ulong *)((long)param_1 + (ulong)(uVar3 * 8) + 8);
  uVar4 = (uint)param_3 >> 6 & 7;
  if (uVar3 == uVar4) {
    uVar6 = (2L << (param_3 & 0x3f)) + (-1L << (param_2 & 0x3f));
    puVar5 = puVar1;
  }
  else {
    uVar4 = uVar4 * 8;
    puVar5 = (ulong *)((long)param_1 + (ulong)uVar4 + 8);
    *puVar1 = *puVar1 | -1L << (param_2 & 0x3f);
    iVar2 = uVar4 + uVar3 * -8 + -8;
    if (iVar2 != 0) {
      _memset(puVar1 + 1,0xff,iVar2);
    }
    uVar6 = (2L << (param_3 & 0x3f)) - 1;
  }
  *puVar5 = *puVar5 | uVar6;
  *param_1 = 0xffffffff;
  return;
}



/* Entry: 10973a5a8; end: 10973a5bb;  */

void FUN_10973a5a8(byte *param_1,uint param_2)

{
  uint uVar1;
  byte *pbVar2;
  
  if (param_1[0x30] == 1) {
    if ((param_2 != 0xffffffff) && ((*param_1 & 1) != 0)) {
      param_1[4] = 0xff;
      param_1[5] = 0xff;
      param_1[6] = 0xff;
      param_1[7] = 0xff;
      FUN_10972a264(param_1,param_2,1);
      if (param_1 != (byte *)0x0) {
        uVar1 = param_2 >> 6 & 7;
        *(ulong *)(param_1 + (ulong)uVar1 * 8 + 8) =
             *(ulong *)(param_1 + (ulong)uVar1 * 8 + 8) | 1L << ((ulong)param_2 & 0x3f);
        param_1[0] = 0xff;
        param_1[1] = 0xff;
        param_1[2] = 0xff;
        param_1[3] = 0xff;
      }
    }
    return;
  }
  if ((*param_1 == 1) && (pbVar2 = param_1, FUN_10972a264(param_1,param_2,0), pbVar2 != (byte *)0x0)
     ) {
    param_1[4] = 0xff;
    param_1[5] = 0xff;
    param_1[6] = 0xff;
    param_1[7] = 0xff;
    uVar1 = param_2 >> 6 & 7;
    *(ulong *)(pbVar2 + (ulong)uVar1 * 8 + 8) =
         *(ulong *)(pbVar2 + (ulong)uVar1 * 8 + 8) &
         (1L << ((ulong)param_2 & 0x3f) ^ 0xffffffffffffffffU);
    pbVar2[0] = 0xff;
    pbVar2[1] = 0xff;
    pbVar2[2] = 0xff;
    pbVar2[3] = 0xff;
  }
  return;
}



/* Entry: 10973a5bc; end: 10973a62b;  */

undefined * FUN_10973a5bc(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  puVar3 = (undefined *)*param_1;
  if (puVar3 == (undefined *)0x0) {
    do {
      puVar3 = (undefined *)param_1[-0x1b];
      if (puVar3 == (undefined *)0x0) {
        return &UNK_10dfe4888;
      }
      FUN_10973a6ac();
      if (puVar3 == (undefined *)0x0) {
        puVar3 = &UNK_10dfe4888;
      }
      if (*param_1 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = (long)puVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return puVar3;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      FUN_10973a62c();
      puVar3 = (undefined *)*param_1;
    } while (puVar3 == (undefined *)0x0);
  }
  return puVar3;
}



/* Entry: 10973a62c; end: 10973a6ab;  */

void FUN_10973a62c(undefined8 *param_1)

{
  ulong uVar1;
  
  if ((param_1 != (undefined8 *)0x0) && (param_1 != (undefined8 *)&UNK_10dfe4888)) {
    if (*(int *)(param_1 + 1) != 0) {
      uVar1 = 0;
      do {
        _free(*(undefined8 *)(param_1[2] + uVar1 * 8));
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 1));
    }
    _free(param_1[2]);
    FUN_1096f5a5c(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(param_1);
    return;
  }
  return;
}



/* Entry: 10973a6ac; end: 10973a95b;  */

undefined8 * FUN_10973a6ac(int *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  uint uVar10;
  long lVar11;
  undefined4 auStack_90 [2];
  long lStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  byte bStack_68;
  int iStack_64;
  int *piStack_60;
  int iStack_58;
  undefined2 uStack_54;
  int *piVar9;
  
  puVar5 = (undefined8 *)0x1;
  _calloc(1,0x18);
  if (puVar5 != (undefined8 *)0x0) {
    auStack_90[0] = 0;
    iStack_64 = 0;
    piStack_60 = (int *)0x0;
    uStack_80 = 0;
    lStack_88 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    bStack_68 = 0;
    iStack_58 = 0x10000;
    uStack_54 = 0;
    iVar4 = param_1[6];
    if (iVar4 == -1) {
      piVar9 = param_1;
      FUN_109710978();
      iVar4 = (int)piVar9;
    }
    uStack_54 = CONCAT11(uStack_54._1_1_,1);
    piVar9 = (int *)&UNK_10dfe4888;
    iStack_58 = iVar4;
    if (*(code **)(param_1 + 8) != (code *)0x0) {
      (**(code **)(param_1 + 8))(param_1,0x6d6f7278,*(undefined8 *)(param_1 + 10));
      piVar9 = param_1;
      if (param_1 == (int *)0x0) {
        piVar9 = (int *)&UNK_10dfe4888;
      }
    }
    if (*piVar9 != 0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = *piVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    piStack_60 = piVar9;
    bVar3 = 0;
    do {
      bStack_68 = bVar3;
      lVar11 = *(long *)(piStack_60 + 4);
      uStack_78._0_4_ = piStack_60[6];
      uStack_80 = lVar11 + (ulong)(uint)uStack_78;
      uVar10 = (uint)uStack_78 << 6;
      if (uVar10 < 0x4001) {
        uVar10 = 0x4000;
      }
      if (0x3ffffffe < uVar10) {
        uVar10 = 0x3fffffff;
      }
      uStack_78._4_4_ = 0x3fffffff;
      if ((uint)uStack_78 >> 0x1a == 0) {
        uStack_78._4_4_ = uVar10;
      }
      iStack_64 = 0;
      auStack_90[0] = 0;
      uStack_70 = uStack_70 & 0xffffffff;
      lStack_88 = lVar11;
      if (lVar11 == 0) {
        FUN_1096f5a5c();
        piStack_60 = (int *)0x0;
        lStack_88 = 0;
        uStack_80 = 0;
        uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
        goto LAB_10973a84c;
      }
      lVar6 = lVar11;
      FUN_10973a95c(lVar11,auStack_90);
      if ((int)lVar6 != 0) {
        if (iStack_64 == 0) {
          FUN_1096f5a5c(piStack_60);
          uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
        }
        else {
          iStack_64 = 0;
          FUN_10973a95c(lVar11,auStack_90);
          iVar4 = iStack_64;
          FUN_1096f5a5c(piStack_60);
          uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
          uVar10 = 0;
          if (iVar4 == 0) {
            uVar10 = (uint)lVar11;
          }
          if ((uVar10 & 1) == 0) goto LAB_10973a83c;
        }
        piStack_60 = (int *)0x0;
        uStack_80 = 0;
        lStack_88 = 0;
        if (piVar9[1] != 0) {
          piVar9[1] = 0;
        }
        goto LAB_10973a84c;
      }
      if ((iStack_64 == 0) || ((bStack_68 & 1) != 0)) goto LAB_10973a828;
      if ((piVar9[1] == 0) || (piVar7 = piVar9, FUN_1096f59a0(), ((ulong)piVar7 & 1) == 0)) {
        uStack_80 = (ulong)(uint)piVar9[6];
        lStack_88 = 0;
        goto LAB_10973a828;
      }
      uStack_80 = *(long *)(piVar9 + 4) + (ulong)(uint)piVar9[6];
      bVar3 = 1;
    } while (*(long *)(piVar9 + 4) != 0);
    lStack_88 = 0;
LAB_10973a828:
    FUN_1096f5a5c(piStack_60);
    uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
LAB_10973a83c:
    piStack_60 = (int *)0x0;
    uStack_80 = 0;
    lStack_88 = 0;
    FUN_1096f5a5c(piVar9);
    piVar9 = (int *)&UNK_10dfe4888;
LAB_10973a84c:
    *puVar5 = piVar9;
    piVar7 = (int *)&UNK_10dfe4888;
    if (7 < (uint)piVar9[6]) {
      piVar7 = *(int **)(piVar9 + 4);
    }
    uVar10 = (piVar7[1] & 0xff00ff00U) >> 8 | (piVar7[1] & 0xff00ffU) << 8;
    uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
    uVar8 = (ulong)uVar10;
    *(uint *)(puVar5 + 1) = uVar10;
    _calloc(uVar8,8);
    puVar5[2] = uVar8;
    if (uVar8 == 0) {
      *(undefined4 *)(puVar5 + 1) = 0;
      FUN_1096f5a5c(piVar9);
      *puVar5 = &UNK_10dfe4888;
    }
    FUN_109710c0c(auStack_90);
  }
  return puVar5;
}



/* Entry: 10973a95c; end: 10973b5d3;  */

uint * FUN_10973a95c(ushort *param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  ushort uVar9;
  ushort uVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  ushort *puVar16;
  uint uVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  long lVar30;
  uint uVar31;
  ushort *puVar32;
  long lVar33;
  byte *pbVar34;
  ushort *puVar17;
  
  if ((char *)(ulong)*(uint *)(param_2 + 0x18) <
      (char *)((long)param_1 + (2 - *(long *)(param_2 + 8)))) {
    return (uint *)0x0;
  }
  if ((*(char *)((long)param_1 + 1) == '\0' && (char)*param_1 == '\0') ||
     (puVar32 = param_1 + 4,
     (ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar32 - *(long *)(param_2 + 8)))) {
LAB_10973a9cc:
    puVar13 = (uint *)0x0;
  }
  else {
    uVar11 = (*(uint *)(param_1 + 2) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 2) & 0xff00ff) << 8;
    uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
    if (uVar11 != 0) {
      uVar29 = 0;
      do {
        if ((char *)(ulong)*(uint *)(param_2 + 0x18) <
            (char *)((long)puVar32 + (8 - *(long *)(param_2 + 8)))) goto LAB_10973a9cc;
        uVar9 = *param_1;
        uVar24 = (*(uint *)(puVar32 + 2) & 0xff00ff00) >> 8 |
                 (*(uint *)(puVar32 + 2) & 0xff00ff) << 8;
        uVar24 = uVar24 >> 0x10 | uVar24 << 0x10;
        if (uVar24 < 0x10) goto LAB_10973a9cc;
        if (((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar32 - *(long *)(param_2 + 8))) ||
           (iVar20 = (int)*(undefined8 *)(param_2 + 0x10), (uint)(iVar20 - (int)puVar32) < uVar24))
        goto LAB_10973a9cc;
        iVar12 = *(int *)(param_2 + 0x1c) - uVar24;
        *(int *)(param_2 + 0x1c) = iVar12;
        if ((iVar12 < 1) ||
           (uVar24 = (*(uint *)(puVar32 + 4) & 0xff00ff00) >> 8 |
                     (*(uint *)(puVar32 + 4) & 0xff00ff) << 8,
           uVar25 = (ulong)(uVar24 >> 0x10 | uVar24 << 0x10) * 0xc,
           (uVar25 & 0xffffffff00000000) != 0)) goto LAB_10973a9cc;
        puVar16 = puVar32 + 8;
        if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar16 - *(long *)(param_2 + 8))) {
          return (uint *)0x0;
        }
        uVar24 = (uint)uVar25;
        if ((uint)(iVar20 - (int)puVar16) < uVar24) {
          return (uint *)0x0;
        }
        iVar12 = iVar12 - uVar24;
        *(int *)(param_2 + 0x1c) = iVar12;
        if (iVar12 < 1) goto LAB_10973a9cc;
        uVar24 = (*(uint *)(puVar32 + 4) & 0xff00ff00) >> 8 |
                 (*(uint *)(puVar32 + 4) & 0xff00ff) << 8;
        puVar13 = (uint *)((long)puVar16 + (ulong)((uVar24 >> 0x10 | uVar24 << 0x10) * 0xc));
        uVar24 = (*(uint *)(puVar32 + 6) & 0xff00ff00) >> 8 |
                 (*(uint *)(puVar32 + 6) & 0xff00ff) << 8;
        uVar24 = uVar24 >> 0x10 | uVar24 << 0x10;
        if (uVar24 != 0) {
          uVar31 = 0;
          do {
            if (((ulong)*(uint *)(param_2 + 0x18) <
                 (ulong)((long)puVar13 + (4 - *(long *)(param_2 + 8)))) ||
               (uVar19 = (*puVar13 & 0xff00ff00) >> 8 | (*puVar13 & 0xff00ff) << 8,
               uVar19 = uVar19 >> 0x10 | uVar19 << 0x10, uVar19 < 0xc)) goto LAB_10973a9cc;
            uVar21 = (long)puVar13 - *(long *)(param_2 + 8);
            uVar25 = (ulong)*(uint *)(param_2 + 0x18);
            if ((uVar25 < uVar21) ||
               (((uint)(*(int *)(param_2 + 0x10) - (int)puVar13) < uVar19 ||
                (iVar20 = *(int *)(param_2 + 0x1c) - uVar19, *(int *)(param_2 + 0x1c) = iVar20,
                iVar20 < 1)))) goto LAB_10973a9cc;
            bVar2 = *(byte *)((long)puVar13 + 7);
            if (bVar2 < 2) {
              if (bVar2 == 0) {
                if ((uVar25 < uVar21 + 0x1c) ||
                   (uVar19 = (puVar13[3] & 0xff00ff00) >> 8 | (puVar13[3] & 0xff00ff) << 8,
                   (uVar19 >> 0x10 | uVar19 << 0x10) < 4)) goto LAB_10973a9cc;
                puVar14 = puVar13 + 3;
                puVar15 = puVar13 + 4;
                FUN_10973b6ec(puVar15,param_2,puVar14);
                if ((int)puVar15 == 0) {
                  return puVar15;
                }
                if ((int)((uint)(byte)puVar13[3] << 0x18) < 0) goto LAB_10973a9cc;
                uVar23 = 0;
                uVar18 = 0;
                lVar22 = (long)puVar14 +
                         (ulong)*(byte *)((long)puVar13 + 0x17) +
                         (ulong)*(byte *)((long)puVar13 + 0x16) * 0x100 +
                         (ulong)(byte)puVar13[5] * 0x1000000 +
                         (ulong)*(byte *)((long)puVar13 + 0x15) * 0x10000;
                lVar33 = (long)puVar14 +
                         (ulong)*(byte *)((long)puVar13 + 0x1b) +
                         (ulong)*(byte *)((long)puVar13 + 0x1a) * 0x100 +
                         (ulong)(byte)puVar13[6] * 0x1000000 +
                         (ulong)*(byte *)((long)puVar13 + 0x19) * 0x10000;
                uVar19 = (uint)*(byte *)((long)puVar13 + 0xf) |
                         (uint)*(byte *)((long)puVar13 + 0xd) << 0x10 |
                         (uint)*(byte *)((long)puVar13 + 0xe) << 8 | (uint)(byte)puVar13[3] << 0x18;
                uVar26 = 0;
                do {
                  uVar28 = uVar26;
                  if (uVar18 < uVar23) {
                    lVar30 = *(long *)(param_2 + 8);
                    uVar21 = (ulong)*(uint *)(param_2 + 0x18);
                  }
                  else {
                    uVar1 = uVar18 + 1;
                    uVar25 = (ulong)uVar1 * (ulong)(uVar19 << 1);
                    if ((uVar25 & 0xffffffff00000000) != 0) goto LAB_10973a9cc;
                    lVar30 = *(long *)(param_2 + 8);
                    uVar21 = (ulong)*(uint *)(param_2 + 0x18);
                    if ((uVar21 < (ulong)(lVar22 - lVar30)) ||
                       (uVar27 = (uint)uVar25,
                       (uint)(*(int *)(param_2 + 0x10) - (int)lVar22) < uVar27)) goto LAB_10973a9cc;
                    iVar20 = *(int *)(param_2 + 0x1c) - uVar27;
                    *(int *)(param_2 + 0x1c) = iVar20;
                    if ((iVar20 < 1) ||
                       ((iVar20 = uVar23 + ~uVar18 + iVar20, *(int *)(param_2 + 0x1c) = iVar20,
                        iVar20 < 1 || (((ulong)uVar1 * (ulong)uVar19 & 0xffffffff00000000) != 0))))
                    goto LAB_10973a9cc;
                    uVar27 = uVar23 * uVar19;
                    uVar23 = uVar1;
                    if (uVar27 < uVar1 * uVar19) {
                      puVar16 = (ushort *)(lVar22 + (ulong)uVar27 * 2);
                      do {
                        puVar17 = puVar16 + 1;
                        uVar27 = (uint)(*puVar16 >> 8) | (*puVar16 & 0xff00ff) << 8;
                        if (uVar28 <= uVar27 + 1) {
                          uVar28 = uVar27 + 1;
                        }
                        puVar16 = puVar17;
                      } while (puVar17 < (ushort *)(lVar22 + (ulong)(uVar1 * uVar19) * 2));
                    }
                  }
                  if ((uVar21 < (ulong)(lVar33 - lVar30)) ||
                     ((uint)(*(int *)(param_2 + 0x10) - (int)lVar33) < uVar28 * 4))
                  goto LAB_10973a9cc;
                  iVar20 = *(int *)(param_2 + 0x1c) + uVar28 * -4;
                  *(int *)(param_2 + 0x1c) = iVar20;
                  if ((iVar20 < 1) ||
                     (iVar20 = iVar20 + (uVar26 - uVar28), *(int *)(param_2 + 0x1c) = iVar20,
                     iVar20 < 1)) goto LAB_10973a9cc;
                  if (uVar26 < uVar28) {
                    puVar16 = (ushort *)(lVar33 + (ulong)uVar26 * 4);
                    do {
                      puVar17 = puVar16 + 2;
                      uVar10 = *puVar16;
                      if (uVar18 <= ((uint)(uVar10 >> 8) | (uVar10 & 0xff00ff) << 8)) {
                        uVar18 = (uint)(uVar10 >> 8) | (uVar10 & 0xff00ff) << 8;
                      }
                      puVar16 = puVar17;
                    } while (puVar17 < (ushort *)(lVar33 + (ulong)uVar28 * 4));
                  }
                  uVar26 = uVar28;
                } while (uVar23 <= uVar18);
              }
              else if (bVar2 == 1) {
                if ((uVar25 < uVar21 + 0x1c) ||
                   (uVar19 = (puVar13[3] & 0xff00ff00) >> 8 | (puVar13[3] & 0xff00ff) << 8,
                   (uVar19 >> 0x10 | uVar19 << 0x10) < 4)) goto LAB_10973a9cc;
                puVar14 = puVar13 + 3;
                puVar15 = puVar13 + 4;
                FUN_10973b6ec(puVar15,param_2,puVar14);
                if ((int)puVar15 == 0) {
                  return puVar15;
                }
                if ((int)((uint)(byte)puVar13[3] << 0x18) < 0) goto LAB_10973a9cc;
                uVar23 = 0;
                uVar18 = 0;
                lVar22 = (long)puVar14 +
                         (ulong)*(byte *)((long)puVar13 + 0x17) +
                         (ulong)*(byte *)((long)puVar13 + 0x16) * 0x100 +
                         (ulong)(byte)puVar13[5] * 0x1000000 +
                         (ulong)*(byte *)((long)puVar13 + 0x15) * 0x10000;
                lVar33 = (long)puVar14 +
                         (ulong)*(byte *)((long)puVar13 + 0x1b) +
                         (ulong)*(byte *)((long)puVar13 + 0x1a) * 0x100 +
                         (ulong)(byte)puVar13[6] * 0x1000000 +
                         (ulong)*(byte *)((long)puVar13 + 0x19) * 0x10000;
                uVar19 = (uint)*(byte *)((long)puVar13 + 0xf) |
                         (uint)*(byte *)((long)puVar13 + 0xd) << 0x10 |
                         (uint)*(byte *)((long)puVar13 + 0xe) << 8 | (uint)(byte)puVar13[3] << 0x18;
                uVar26 = 0;
                do {
                  uVar28 = uVar26;
                  if (uVar18 < uVar23) {
                    lVar30 = *(long *)(param_2 + 8);
                    uVar21 = (ulong)*(uint *)(param_2 + 0x18);
                  }
                  else {
                    uVar1 = uVar18 + 1;
                    uVar25 = (ulong)uVar1 * (ulong)(uVar19 << 1);
                    if ((uVar25 & 0xffffffff00000000) != 0) goto LAB_10973a9cc;
                    lVar30 = *(long *)(param_2 + 8);
                    uVar21 = (ulong)*(uint *)(param_2 + 0x18);
                    if ((uVar21 < (ulong)(lVar22 - lVar30)) ||
                       (uVar27 = (uint)uVar25,
                       (uint)(*(int *)(param_2 + 0x10) - (int)lVar22) < uVar27)) goto LAB_10973a9cc;
                    iVar20 = *(int *)(param_2 + 0x1c) - uVar27;
                    *(int *)(param_2 + 0x1c) = iVar20;
                    if ((iVar20 < 1) ||
                       ((iVar20 = uVar23 + ~uVar18 + iVar20, *(int *)(param_2 + 0x1c) = iVar20,
                        iVar20 < 1 || (((ulong)uVar1 * (ulong)uVar19 & 0xffffffff00000000) != 0))))
                    goto LAB_10973a9cc;
                    uVar27 = uVar23 * uVar19;
                    uVar23 = uVar1;
                    if (uVar27 < uVar1 * uVar19) {
                      puVar16 = (ushort *)(lVar22 + (ulong)uVar27 * 2);
                      do {
                        puVar17 = puVar16 + 1;
                        uVar27 = (uint)(*puVar16 >> 8) | (*puVar16 & 0xff00ff) << 8;
                        if (uVar28 <= uVar27 + 1) {
                          uVar28 = uVar27 + 1;
                        }
                        puVar16 = puVar17;
                      } while (puVar17 < (ushort *)(lVar22 + (ulong)(uVar1 * uVar19) * 2));
                    }
                  }
                  if ((uVar21 < (ulong)(lVar33 - lVar30)) ||
                     ((uint)(*(int *)(param_2 + 0x10) - (int)lVar33) < uVar28 * 8))
                  goto LAB_10973a9cc;
                  iVar20 = *(int *)(param_2 + 0x1c) + uVar28 * -8;
                  *(int *)(param_2 + 0x1c) = iVar20;
                  if ((iVar20 < 1) ||
                     (iVar20 = iVar20 + (uVar26 - uVar28), *(int *)(param_2 + 0x1c) = iVar20,
                     iVar20 < 1)) goto LAB_10973a9cc;
                  if (uVar26 < uVar28) {
                    puVar16 = (ushort *)(lVar33 + (ulong)uVar26 * 8);
                    do {
                      puVar17 = puVar16 + 4;
                      uVar10 = *puVar16;
                      if (uVar18 <= ((uint)(uVar10 >> 8) | (uVar10 & 0xff00ff) << 8)) {
                        uVar18 = (uint)(uVar10 >> 8) | (uVar10 & 0xff00ff) << 8;
                      }
                      puVar16 = puVar17;
                    } while (puVar17 < (ushort *)(lVar33 + (ulong)uVar28 * 8));
                  }
                  uVar26 = uVar28;
                } while (uVar23 <= uVar18);
                uVar19 = 0;
                if (uVar28 != 0) {
                  uVar25 = (ulong)uVar28;
                  lVar22 = (long)puVar13 +
                           (ulong)(byte)puVar13[6] * 0x1000000 +
                           (ulong)*(byte *)((long)puVar13 + 0x19) * 0x10000 +
                           (ulong)*(byte *)((long)puVar13 + 0x1a) * 0x100 +
                           (ulong)*(byte *)((long)puVar13 + 0x1b) + 0x13;
                  do {
                    uVar23 = (uint)(*(ushort *)(lVar22 + -3) >> 8) |
                             (*(ushort *)(lVar22 + -3) & 0xff00ff) << 8;
                    uVar18 = uVar19;
                    if (uVar19 <= uVar23 + 1) {
                      uVar18 = uVar23 + 1;
                    }
                    if (uVar23 != 0xffff) {
                      uVar19 = uVar18;
                    }
                    uVar23 = (uint)(*(ushort *)(lVar22 + -1) >> 8) |
                             (*(ushort *)(lVar22 + -1) & 0xff00ff) << 8;
                    uVar18 = uVar19;
                    if (uVar19 <= uVar23 + 1) {
                      uVar18 = uVar23 + 1;
                    }
                    if (uVar23 != 0xffff) {
                      uVar19 = uVar18;
                    }
                    lVar22 = lVar22 + 8;
                    uVar25 = uVar25 - 1;
                  } while (uVar25 != 0);
                }
                if ((ulong)*(uint *)(param_2 + 0x18) <
                    (ulong)((long)puVar13 + (0x20 - *(long *)(param_2 + 8)))) goto LAB_10973a9cc;
                uVar18 = puVar13[7];
                bVar2 = *(byte *)((long)puVar13 + 0x1d);
                bVar6 = *(byte *)((long)puVar13 + 0x1e);
                bVar7 = *(byte *)((long)puVar13 + 0x1f);
                lVar22 = (long)puVar14 +
                         (ulong)bVar7 +
                         (ulong)bVar6 * 0x100 +
                         (ulong)(byte)uVar18 * 0x1000000 + (ulong)bVar2 * 0x10000;
                if ((((ulong)*(uint *)(param_2 + 0x18) < (ulong)(lVar22 - *(long *)(param_2 + 8)))
                    || ((uint)(*(int *)(param_2 + 0x10) - (int)lVar22) < uVar19 * 4)) ||
                   (iVar20 = *(int *)(param_2 + 0x1c) + uVar19 * -4,
                   *(int *)(param_2 + 0x1c) = iVar20, iVar20 < 1)) goto LAB_10973a9cc;
                if (uVar19 != 0) {
                  uVar25 = (ulong)uVar19;
                  lVar30 = (ulong)(byte)uVar18 * 0x1000000 + (ulong)bVar2 * 0x10000 +
                           (ulong)bVar6 * 0x100 + (ulong)bVar7;
                  lVar33 = (long)puVar13 + lVar30 + 0x10;
                  pbVar34 = (byte *)((long)puVar13 + lVar30 + 0xf);
                  do {
                    if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)(lVar33 - *(long *)(param_2 + 8)))
                    goto LAB_10973a9cc;
                    uVar21 = lVar22 + (ulong)pbVar34[-2] * 0x10000 + (ulong)pbVar34[-3] * 0x1000000
                             + (ulong)pbVar34[-1] * 0x100 + (ulong)*pbVar34;
                    FUN_10973baf0(uVar21,param_2);
                    if ((uVar21 & 1) == 0) goto LAB_10973a9cc;
                    lVar33 = lVar33 + 4;
                    uVar25 = uVar25 - 1;
                    pbVar34 = pbVar34 + 4;
                  } while (uVar25 != 0);
                }
              }
            }
            else if (bVar2 == 2) {
              if (((uVar25 < uVar21 + 0x28) || (uVar25 < uVar21 + 0x1c)) ||
                 (uVar19 = (puVar13[3] & 0xff00ff00) >> 8 | (puVar13[3] & 0xff00ff) << 8,
                 (uVar19 >> 0x10 | uVar19 << 0x10) < 4)) goto LAB_10973a9cc;
              puVar14 = puVar13 + 3;
              puVar15 = puVar13 + 4;
              FUN_10973b6ec(puVar15,param_2,puVar14);
              if ((int)puVar15 == 0) {
                return puVar15;
              }
              if ((int)((uint)(byte)puVar13[3] << 0x18) < 0) goto LAB_10973a9cc;
              uVar23 = 0;
              uVar18 = 0;
              lVar22 = (long)puVar14 +
                       (ulong)*(byte *)((long)puVar13 + 0x17) +
                       (ulong)*(byte *)((long)puVar13 + 0x16) * 0x100 +
                       (ulong)(byte)puVar13[5] * 0x1000000 +
                       (ulong)*(byte *)((long)puVar13 + 0x15) * 0x10000;
              lVar33 = (long)puVar14 +
                       (ulong)*(byte *)((long)puVar13 + 0x1b) +
                       (ulong)*(byte *)((long)puVar13 + 0x1a) * 0x100 +
                       (ulong)(byte)puVar13[6] * 0x1000000 +
                       (ulong)*(byte *)((long)puVar13 + 0x19) * 0x10000;
              uVar19 = (uint)*(byte *)((long)puVar13 + 0xf) |
                       (uint)*(byte *)((long)puVar13 + 0xd) << 0x10 |
                       (uint)*(byte *)((long)puVar13 + 0xe) << 8 | (uint)(byte)puVar13[3] << 0x18;
              uVar26 = 0;
              do {
                uVar28 = uVar26;
                if (uVar18 < uVar23) {
                  lVar30 = *(long *)(param_2 + 8);
                  uVar21 = (ulong)*(uint *)(param_2 + 0x18);
                }
                else {
                  uVar1 = uVar18 + 1;
                  uVar25 = (ulong)uVar1 * (ulong)(uVar19 << 1);
                  if ((uVar25 & 0xffffffff00000000) != 0) goto LAB_10973a9cc;
                  lVar30 = *(long *)(param_2 + 8);
                  uVar21 = (ulong)*(uint *)(param_2 + 0x18);
                  if ((uVar21 < (ulong)(lVar22 - lVar30)) ||
                     (uVar27 = (uint)uVar25, (uint)(*(int *)(param_2 + 0x10) - (int)lVar22) < uVar27
                     )) goto LAB_10973a9cc;
                  iVar20 = *(int *)(param_2 + 0x1c) - uVar27;
                  *(int *)(param_2 + 0x1c) = iVar20;
                  if ((iVar20 < 1) ||
                     ((iVar20 = uVar23 + ~uVar18 + iVar20, *(int *)(param_2 + 0x1c) = iVar20,
                      iVar20 < 1 || (((ulong)uVar1 * (ulong)uVar19 & 0xffffffff00000000) != 0))))
                  goto LAB_10973a9cc;
                  uVar27 = uVar23 * uVar19;
                  uVar23 = uVar1;
                  if (uVar27 < uVar1 * uVar19) {
                    puVar16 = (ushort *)(lVar22 + (ulong)uVar27 * 2);
                    do {
                      puVar17 = puVar16 + 1;
                      uVar27 = (uint)(*puVar16 >> 8) | (*puVar16 & 0xff00ff) << 8;
                      if (uVar28 <= uVar27 + 1) {
                        uVar28 = uVar27 + 1;
                      }
                      puVar16 = puVar17;
                    } while (puVar17 < (ushort *)(lVar22 + (ulong)(uVar1 * uVar19) * 2));
                  }
                }
                if ((uVar21 < (ulong)(lVar33 - lVar30)) ||
                   ((uint)(*(int *)(param_2 + 0x10) - (int)lVar33) < uVar28 * 6))
                goto LAB_10973a9cc;
                iVar20 = *(int *)(param_2 + 0x1c) + uVar28 * -6;
                *(int *)(param_2 + 0x1c) = iVar20;
                if ((iVar20 < 1) ||
                   (iVar20 = iVar20 + (uVar26 - uVar28), *(int *)(param_2 + 0x1c) = iVar20,
                   iVar20 < 1)) goto LAB_10973a9cc;
                if (uVar26 < uVar28) {
                  puVar16 = (ushort *)(lVar33 + (ulong)uVar26 * 6);
                  do {
                    puVar17 = puVar16 + 3;
                    uVar10 = *puVar16;
                    if (uVar18 <= ((uint)(uVar10 >> 8) | (uVar10 & 0xff00ff) << 8)) {
                      uVar18 = (uint)(uVar10 >> 8) | (uVar10 & 0xff00ff) << 8;
                    }
                    puVar16 = puVar17;
                  } while (puVar17 < (ushort *)(lVar33 + (ulong)uVar28 * 6));
                }
                uVar26 = uVar28;
              } while (uVar23 <= uVar18);
              if (((*(char *)((long)puVar13 + 0x1d) == '\0' && (char)puVar13[7] == '\0') &&
                   (*(char *)((long)puVar13 + 0x1e) == '\0' &&
                   *(char *)((long)puVar13 + 0x1f) == '\0')) ||
                 ((*(char *)((long)puVar13 + 0x21) == '\0' && (char)puVar13[8] == '\0') &&
                  (*(char *)((long)puVar13 + 0x22) == '\0' &&
                  *(char *)((long)puVar13 + 0x23) == '\0'))) goto LAB_10973a9cc;
              cVar8 = (char)puVar13[9];
              cVar3 = *(char *)((long)puVar13 + 0x25);
              cVar4 = *(char *)((long)puVar13 + 0x26);
              cVar5 = *(char *)((long)puVar13 + 0x27);
LAB_10973b330:
              if ((cVar3 == '\0' && cVar8 == '\0') && (cVar4 == '\0' && cVar5 == '\0'))
              goto LAB_10973a9cc;
            }
            else if (bVar2 == 4) {
              puVar14 = puVar13 + 3;
              FUN_10973baf0(puVar14,param_2);
              if (((ulong)puVar14 & 1) == 0) goto LAB_10973a9cc;
            }
            else if (bVar2 == 5) {
              if (((uVar21 + 0x20 <= uVar25) && (uVar21 + 0x1c <= uVar25)) &&
                 (uVar19 = (puVar13[3] & 0xff00ff00) >> 8 | (puVar13[3] & 0xff00ff) << 8,
                 3 < (uVar19 >> 0x10 | uVar19 << 0x10))) {
                puVar14 = puVar13 + 3;
                puVar15 = puVar13 + 4;
                FUN_10973b6ec(puVar15,param_2,puVar14);
                if ((int)puVar15 == 0) {
                  return puVar15;
                }
                if (-1 < (int)((uint)(byte)puVar13[3] << 0x18)) {
                  uVar23 = 0;
                  uVar18 = 0;
                  lVar22 = (long)puVar14 +
                           (ulong)*(byte *)((long)puVar13 + 0x17) +
                           (ulong)*(byte *)((long)puVar13 + 0x16) * 0x100 +
                           (ulong)(byte)puVar13[5] * 0x1000000 +
                           (ulong)*(byte *)((long)puVar13 + 0x15) * 0x10000;
                  lVar33 = (long)puVar14 +
                           (ulong)*(byte *)((long)puVar13 + 0x1b) +
                           (ulong)*(byte *)((long)puVar13 + 0x1a) * 0x100 +
                           (ulong)(byte)puVar13[6] * 0x1000000 +
                           (ulong)*(byte *)((long)puVar13 + 0x19) * 0x10000;
                  uVar19 = (uint)*(byte *)((long)puVar13 + 0xf) |
                           (uint)*(byte *)((long)puVar13 + 0xd) << 0x10 |
                           (uint)*(byte *)((long)puVar13 + 0xe) << 8 |
                           (uint)(byte)puVar13[3] << 0x18;
                  uVar26 = 0;
                  do {
                    uVar28 = uVar26;
                    if (uVar18 < uVar23) {
                      lVar30 = *(long *)(param_2 + 8);
                      uVar21 = (ulong)*(uint *)(param_2 + 0x18);
                    }
                    else {
                      uVar1 = uVar18 + 1;
                      uVar25 = (ulong)uVar1 * (ulong)(uVar19 << 1);
                      if ((uVar25 & 0xffffffff00000000) != 0) goto LAB_10973a9cc;
                      lVar30 = *(long *)(param_2 + 8);
                      uVar21 = (ulong)*(uint *)(param_2 + 0x18);
                      if ((uVar21 < (ulong)(lVar22 - lVar30)) ||
                         (uVar27 = (uint)uVar25,
                         (uint)(*(int *)(param_2 + 0x10) - (int)lVar22) < uVar27))
                      goto LAB_10973a9cc;
                      iVar20 = *(int *)(param_2 + 0x1c) - uVar27;
                      *(int *)(param_2 + 0x1c) = iVar20;
                      if ((iVar20 < 1) ||
                         ((iVar20 = uVar23 + ~uVar18 + iVar20, *(int *)(param_2 + 0x1c) = iVar20,
                          iVar20 < 1 || (((ulong)uVar1 * (ulong)uVar19 & 0xffffffff00000000) != 0)))
                         ) goto LAB_10973a9cc;
                      uVar27 = uVar23 * uVar19;
                      uVar23 = uVar1;
                      if (uVar27 < uVar1 * uVar19) {
                        puVar16 = (ushort *)(lVar22 + (ulong)uVar27 * 2);
                        do {
                          puVar17 = puVar16 + 1;
                          uVar27 = (uint)(*puVar16 >> 8) | (*puVar16 & 0xff00ff) << 8;
                          if (uVar28 <= uVar27 + 1) {
                            uVar28 = uVar27 + 1;
                          }
                          puVar16 = puVar17;
                        } while (puVar17 < (ushort *)(lVar22 + (ulong)(uVar1 * uVar19) * 2));
                      }
                    }
                    if ((uVar21 < (ulong)(lVar33 - lVar30)) ||
                       ((uint)(*(int *)(param_2 + 0x10) - (int)lVar33) < uVar28 * 8))
                    goto LAB_10973a9cc;
                    iVar20 = *(int *)(param_2 + 0x1c) + uVar28 * -8;
                    *(int *)(param_2 + 0x1c) = iVar20;
                    if ((iVar20 < 1) ||
                       (iVar20 = iVar20 + (uVar26 - uVar28), *(int *)(param_2 + 0x1c) = iVar20,
                       iVar20 < 1)) goto LAB_10973a9cc;
                    if (uVar26 < uVar28) {
                      puVar16 = (ushort *)(lVar33 + (ulong)uVar26 * 8);
                      do {
                        puVar17 = puVar16 + 4;
                        uVar10 = *puVar16;
                        if (uVar18 <= ((uint)(uVar10 >> 8) | (uVar10 & 0xff00ff) << 8)) {
                          uVar18 = (uint)(uVar10 >> 8) | (uVar10 & 0xff00ff) << 8;
                        }
                        puVar16 = puVar17;
                      } while (puVar17 < (ushort *)(lVar33 + (ulong)uVar28 * 8));
                    }
                    uVar26 = uVar28;
                  } while (uVar23 <= uVar18);
                  cVar8 = (char)puVar13[7];
                  cVar3 = *(char *)((long)puVar13 + 0x1d);
                  cVar4 = *(char *)((long)puVar13 + 0x1e);
                  cVar5 = *(char *)((long)puVar13 + 0x1f);
                  goto LAB_10973b330;
                }
              }
              goto LAB_10973a9cc;
            }
            puVar13 = (uint *)((long)puVar13 +
                              (ulong)*(byte *)((long)puVar13 + 3) +
                              (ulong)*(byte *)((long)puVar13 + 2) * 0x100 +
                              (ulong)(byte)*puVar13 * 0x1000000 +
                              (ulong)*(byte *)((long)puVar13 + 1) * 0x10000);
            uVar31 = uVar31 + 1;
          } while (uVar31 != uVar24);
        }
        if ((2 < (ushort)(uVar9 >> 8 | uVar9 << 8)) &&
           (FUN_10973b5d4(puVar13,param_2), (int)puVar13 == 0)) {
          return puVar13;
        }
        puVar32 = (ushort *)
                  ((long)puVar32 +
                  (ulong)*(byte *)((long)puVar32 + 7) +
                  (ulong)(byte)puVar32[3] * 0x100 +
                  (ulong)(byte)puVar32[2] * 0x1000000 +
                  (ulong)*(byte *)((long)puVar32 + 5) * 0x10000);
        uVar29 = uVar29 + 1;
      } while (uVar29 != uVar11);
    }
    puVar13 = (uint *)0x1;
  }
  return puVar13;
}



/* Entry: 10973b5d4; end: 10973b6eb;  */

bool FUN_10973b5d4(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  
  if ((param_3 >> 0x1e & 3) == 0) {
    lVar7 = *(long *)(param_2 + 8);
    uVar8 = (ulong)*(uint *)(param_2 + 0x18);
    if ((((ulong)(param_1 - lVar7) <= uVar8) &&
        (iVar6 = (int)param_3, (uint)(iVar6 * 4) <= (uint)(*(int *)(param_2 + 0x10) - (int)param_1))
        ) && (iVar4 = *(int *)(param_2 + 0x1c) + iVar6 * -4, *(int *)(param_2 + 0x1c) = iVar4,
             0 < iVar4)) {
      if (iVar6 == 0) {
        return true;
      }
      bVar5 = false;
      uVar2 = *(int *)(param_2 + 0x38) + 7U >> 3;
      pbVar9 = (byte *)(param_1 + 3);
      uVar11 = 1;
      uVar12 = param_3 & 0xffffffff;
      lVar10 = param_1;
      do {
        lVar10 = lVar10 + 4;
        uVar3 = (*(uint *)(pbVar9 + -3) & 0xff00ff00) >> 8 |
                (*(uint *)(pbVar9 + -3) & 0xff00ff) << 8;
        if (1 < (uVar3 >> 0x10 | uVar3 << 0x10) + 1) {
          if (uVar8 < (ulong)(lVar10 - lVar7)) {
            return bVar5;
          }
          lVar1 = param_1 + (ulong)pbVar9[-2] * 0x10000 + (ulong)pbVar9[-3] * 0x1000000 +
                  (ulong)pbVar9[-1] * 0x100 + (ulong)*pbVar9;
          lVar7 = *(long *)(param_2 + 8);
          uVar8 = (ulong)*(uint *)(param_2 + 0x18);
          if (uVar8 < (ulong)(lVar1 - lVar7)) {
            return bVar5;
          }
          if ((uint)(*(int *)(param_2 + 0x10) - (int)lVar1) < uVar2) {
            return bVar5;
          }
          iVar6 = *(int *)(param_2 + 0x1c) - uVar2;
          *(int *)(param_2 + 0x1c) = iVar6;
          if (iVar6 < 1) {
            return bVar5;
          }
        }
        bVar5 = (param_3 & 0xffffffff) <= uVar11;
        uVar11 = uVar11 + 1;
        pbVar9 = pbVar9 + 4;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) {
          return bVar5;
        }
      } while( true );
    }
  }
  return false;
}



/* Entry: 10973b6ec; end: 10973ba2f;  */

bool FUN_10973b6ec(byte *param_1,long param_2,long param_3)

{
  ushort *puVar1;
  long lVar2;
  ushort uVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  int iVar10;
  
  if ((byte *)(ulong)*(uint *)(param_2 + 0x18) < param_1 + (4 - *(long *)(param_2 + 8))) {
    return false;
  }
  puVar1 = (ushort *)
           (param_3 + (ulong)param_1[1] * 0x10000 + (ulong)*param_1 * 0x1000000 +
            (ulong)param_1[2] * 0x100 + (ulong)param_1[3]);
  puVar9 = puVar1 + 1;
  if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar9 - *(long *)(param_2 + 8))) {
    return false;
  }
  uVar3 = *puVar1 >> 8 | *puVar1 << 8;
  if (uVar3 < 6) {
    if (uVar3 == 0) {
      if (*(int *)(param_2 + 0x38) < 0) {
        return false;
      }
      if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar9 - *(long *)(param_2 + 8))) {
        return false;
      }
      uVar7 = *(int *)(param_2 + 0x38) << 1;
      uVar8 = *(int *)(param_2 + 0x10) - (int)puVar9;
      goto LAB_10973ba08;
    }
    if (uVar3 != 2) {
      if (uVar3 != 4) {
        return true;
      }
      puVar5 = puVar1 + 6;
      if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar5 - *(long *)(param_2 + 8))) {
        return false;
      }
      uVar7 = (uint)(puVar1[1] >> 8) | (puVar1[1] & 0xff00ff) << 8;
      if (uVar7 < 6) {
        return false;
      }
      if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar5 - *(long *)(param_2 + 8))) {
        return false;
      }
      uVar7 = ((uint)(puVar1[2] >> 8) | (puVar1[2] & 0xff00ff) << 8) * uVar7;
      if ((uint)(*(int *)(param_2 + 0x10) - (int)puVar5) < uVar7) {
        return false;
      }
      iVar10 = *(int *)(param_2 + 0x1c) - uVar7;
      *(int *)(param_2 + 0x1c) = iVar10;
      if (iVar10 < 1) {
        return false;
      }
      uVar7 = (uint)(puVar1[2] >> 8) | (puVar1[2] & 0xff00ff) << 8;
      puVar5 = puVar9;
      FUN_10973ba90();
      if (uVar7 != (uint)puVar5) {
        iVar10 = 0;
        do {
          puVar6 = puVar9;
          FUN_10973ba30(puVar9,iVar10);
          if ((ulong)*(uint *)(param_2 + 0x18) <
              (ulong)((long)puVar6 + (6 - *(long *)(param_2 + 8)))) {
            return false;
          }
          uVar3 = puVar6[1];
          uVar8 = (uint)(*puVar6 >> 8) | (*puVar6 & 0xff00ff) << 8;
          if (uVar8 < ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8)) {
            return false;
          }
          if ((ulong)*(uint *)(param_2 + 0x18) <
              (ulong)((long)puVar6 + (6 - *(long *)(param_2 + 8)))) {
            return false;
          }
          lVar2 = (long)puVar1 + (ulong)*(byte *)((long)puVar6 + 5) + (ulong)(byte)puVar6[2] * 0x100
          ;
          if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)(lVar2 - *(long *)(param_2 + 8))) {
            return false;
          }
          uVar8 = (uVar8 - ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8)) * 2 + 2;
          if ((uint)(*(int *)(param_2 + 0x10) - (int)lVar2) < uVar8) {
            return false;
          }
          iVar4 = *(int *)(param_2 + 0x1c) - uVar8;
          *(int *)(param_2 + 0x1c) = iVar4;
          if (iVar4 < 1) {
            return false;
          }
          iVar10 = iVar10 + 1;
        } while (uVar7 - (uint)puVar5 != iVar10);
      }
      return true;
    }
    if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar1 + (0xc - *(long *)(param_2 + 8)))) {
      return false;
    }
    uVar7 = (uint)(puVar1[1] >> 8) | (puVar1[1] & 0xff00ff) << 8;
    if (uVar7 < 6) {
      return false;
    }
LAB_10973b9b4:
    puVar9 = puVar1 + 6;
    if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar9 - *(long *)(param_2 + 8))) {
      return false;
    }
    uVar3 = puVar1[2];
LAB_10973b9cc:
    uVar7 = ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8) * uVar7;
  }
  else {
    if (uVar3 == 6) {
      if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar1 + (0xc - *(long *)(param_2 + 8))))
      {
        return false;
      }
      uVar7 = (uint)(puVar1[1] >> 8) | (puVar1[1] & 0xff00ff) << 8;
      if (uVar7 < 4) {
        return false;
      }
      goto LAB_10973b9b4;
    }
    if (uVar3 != 8) {
      if (uVar3 != 10) {
        return true;
      }
      puVar9 = puVar1 + 4;
      if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar9 - *(long *)(param_2 + 8))) {
        return false;
      }
      uVar7 = (uint)(puVar1[1] >> 8) | (puVar1[1] & 0xff00ff) << 8;
      if (4 < uVar7) {
        return false;
      }
      if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar9 - *(long *)(param_2 + 8))) {
        return false;
      }
      uVar3 = puVar1[3];
      goto LAB_10973b9cc;
    }
    puVar9 = puVar1 + 3;
    if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar9 - *(long *)(param_2 + 8))) {
      return false;
    }
    uVar7 = (uint)(byte)puVar1[2] << 9 | (uint)*(byte *)((long)puVar1 + 5) << 1;
  }
  uVar8 = *(int *)(param_2 + 0x10) - (int)puVar9;
LAB_10973ba08:
  if (uVar8 < uVar7) {
    return false;
  }
  iVar10 = *(int *)(param_2 + 0x1c) - uVar7;
  *(int *)(param_2 + 0x1c) = iVar10;
  return 0 < iVar10;
}



/* Entry: 10973ba30; end: 10973ba8f;  */

undefined * FUN_10973ba30(ushort *param_1,uint param_2)

{
  ushort uVar1;
  ushort *puVar2;
  undefined *puVar3;
  
  uVar1 = param_1[1];
  puVar2 = param_1;
  FUN_10973ba90();
  if (param_2 < ((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8) - (int)puVar2) {
    puVar3 = (undefined *)
             ((long)param_1 +
             (ulong)(((uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8) * param_2) + 10);
  }
  else {
    puVar3 = &UNK_10dfe4888;
  }
  return puVar3;
}



/* Entry: 10973ba90; end: 10973baef;  */

bool FUN_10973ba90(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  
  uVar2 = (uint)(param_1[1] >> 8) | (param_1[1] & 0xff00ff) << 8;
  if (uVar2 == 0) {
    return false;
  }
  bVar3 = false;
  lVar4 = 0;
  do {
    uVar1 = *(ushort *)
             ((long)param_1 +
             lVar4 * 2 +
             (ulong)((uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8) * (ulong)(uVar2 - 1) + 10);
    uVar1 = uVar1 >> 8 | uVar1 << 8;
    if (bVar3) break;
    bVar3 = true;
    lVar4 = 1;
  } while (uVar1 == 0xffff);
  return uVar1 == 0xffff;
}



/* Entry: 10973baf0; end: 10973be33;  */

bool FUN_10973baf0(ushort *param_1,long param_2)

{
  ushort *puVar1;
  long lVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  uint uVar8;
  ushort *puVar9;
  ushort *puVar10;
  uint uVar11;
  
  puVar10 = param_1 + 1;
  if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar10 - *(long *)(param_2 + 8))) {
    return false;
  }
  uVar3 = *param_1 >> 8 | *param_1 << 8;
  if (uVar3 < 6) {
    if (uVar3 == 0) {
      if (*(int *)(param_2 + 0x38) < 0) {
        return false;
      }
      if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar10 - *(long *)(param_2 + 8))) {
        return false;
      }
      uVar8 = *(int *)(param_2 + 0x38) << 1;
      uVar11 = *(int *)(param_2 + 0x10) - (int)puVar10;
      goto LAB_10973be0c;
    }
    if (uVar3 != 2) {
      if (uVar3 != 4) {
        return true;
      }
      puVar1 = param_1 + 6;
      if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar1 - *(long *)(param_2 + 8))) {
        return false;
      }
      uVar8 = (uint)(param_1[1] >> 8) | (param_1[1] & 0xff00ff) << 8;
      if (uVar8 < 6) {
        return false;
      }
      if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar1 - *(long *)(param_2 + 8))) {
        return false;
      }
      uVar8 = ((uint)(param_1[2] >> 8) | (param_1[2] & 0xff00ff) << 8) * uVar8;
      if ((uint)(*(int *)(param_2 + 0x10) - (int)puVar1) < uVar8) {
        return false;
      }
      iVar5 = *(int *)(param_2 + 0x1c) - uVar8;
      *(int *)(param_2 + 0x1c) = iVar5;
      if (iVar5 < 1) {
        return false;
      }
      uVar8 = (uint)(param_1[2] >> 8) | (param_1[2] & 0xff00ff) << 8;
      puVar6 = puVar10;
      FUN_10973be34();
      if (uVar8 != (uint)puVar6) {
        uVar11 = 0;
        do {
          uVar3 = param_1[2];
          puVar7 = puVar10;
          FUN_10973be34();
          puVar9 = (ushort *)&UNK_10dfe4888;
          if (uVar11 < ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8) - (int)puVar7) {
            puVar9 = (ushort *)
                     ((long)puVar1 +
                     (ulong)(((uint)(param_1[1] >> 8) | (param_1[1] & 0xff00ff) << 8) * uVar11));
          }
          if ((undefined *)(ulong)*(uint *)(param_2 + 0x18) <
              (undefined *)((long)puVar9 + (6 - *(long *)(param_2 + 8)))) {
            return false;
          }
          uVar3 = puVar9[1];
          uVar4 = (uint)(*puVar9 >> 8) | (*puVar9 & 0xff00ff) << 8;
          if (uVar4 < ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8)) {
            return false;
          }
          if ((undefined *)(ulong)*(uint *)(param_2 + 0x18) <
              (undefined *)((long)puVar9 + (6 - *(long *)(param_2 + 8)))) {
            return false;
          }
          lVar2 = (long)param_1 +
                  (ulong)*(byte *)((long)puVar9 + 5) + (ulong)(byte)puVar9[2] * 0x100;
          if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)(lVar2 - *(long *)(param_2 + 8))) {
            return false;
          }
          uVar4 = (uVar4 - ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8)) * 2 + 2;
          if ((uint)(*(int *)(param_2 + 0x10) - (int)lVar2) < uVar4) {
            return false;
          }
          iVar5 = *(int *)(param_2 + 0x1c) - uVar4;
          *(int *)(param_2 + 0x1c) = iVar5;
          if (iVar5 < 1) {
            return false;
          }
          uVar11 = uVar11 + 1;
        } while (uVar8 - (uint)puVar6 != uVar11);
      }
      return true;
    }
    if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)param_1 + (0xc - *(long *)(param_2 + 8))))
    {
      return false;
    }
    uVar8 = (uint)(param_1[1] >> 8) | (param_1[1] & 0xff00ff) << 8;
    if (uVar8 < 6) {
      return false;
    }
LAB_10973bdb8:
    puVar10 = param_1 + 6;
    if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar10 - *(long *)(param_2 + 8))) {
      return false;
    }
    uVar3 = param_1[2];
LAB_10973bdd0:
    uVar8 = ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8) * uVar8;
  }
  else {
    if (uVar3 == 6) {
      if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)param_1 + (0xc - *(long *)(param_2 + 8)))
         ) {
        return false;
      }
      uVar8 = (uint)(param_1[1] >> 8) | (param_1[1] & 0xff00ff) << 8;
      if (uVar8 < 4) {
        return false;
      }
      goto LAB_10973bdb8;
    }
    if (uVar3 != 8) {
      if (uVar3 != 10) {
        return true;
      }
      puVar10 = param_1 + 4;
      if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar10 - *(long *)(param_2 + 8))) {
        return false;
      }
      uVar8 = (uint)(param_1[1] >> 8) | (param_1[1] & 0xff00ff) << 8;
      if (4 < uVar8) {
        return false;
      }
      if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar10 - *(long *)(param_2 + 8))) {
        return false;
      }
      uVar3 = param_1[3];
      goto LAB_10973bdd0;
    }
    puVar10 = param_1 + 3;
    if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar10 - *(long *)(param_2 + 8))) {
      return false;
    }
    uVar8 = (uint)(byte)param_1[2] << 9 | (uint)*(byte *)((long)param_1 + 5) << 1;
  }
  uVar11 = *(int *)(param_2 + 0x10) - (int)puVar10;
LAB_10973be0c:
  if (uVar11 < uVar8) {
    return false;
  }
  iVar5 = *(int *)(param_2 + 0x1c) - uVar8;
  *(int *)(param_2 + 0x1c) = iVar5;
  return 0 < iVar5;
}



/* Entry: 10973be34; end: 10973be93;  */

bool FUN_10973be34(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  
  uVar2 = (uint)(param_1[1] >> 8) | (param_1[1] & 0xff00ff) << 8;
  if (uVar2 == 0) {
    return false;
  }
  bVar3 = false;
  lVar4 = 0;
  do {
    uVar1 = *(ushort *)
             ((long)param_1 +
             lVar4 * 2 +
             (ulong)((uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8) * (ulong)(uVar2 - 1) + 10);
    uVar1 = uVar1 >> 8 | uVar1 << 8;
    if (bVar3) break;
    bVar3 = true;
    lVar4 = 1;
  } while (uVar1 == 0xffff);
  return uVar1 == 0xffff;
}



/* Entry: 10973be94; end: 10973c043;  */

undefined8 FUN_10973be94(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *param_1;
  if ((int)uVar4 < 0) {
    return 0;
  }
  uVar2 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
  uVar5 = uVar4;
  if ((int)uVar4 < (int)param_2) {
    do {
      uVar5 = uVar5 + (uVar5 >> 1) + 8;
    } while (uVar5 < uVar2);
    if (uVar5 >> 0x1c != 0) {
LAB_10973bf60:
      *param_1 = ~uVar4;
      return 0;
    }
    lVar3 = *(long *)(param_1 + 2);
    FUN_10973c044(lVar3,uVar5);
    if (lVar3 == 0) {
      uVar4 = *param_1;
      if (uVar4 < uVar5) goto LAB_10973bf60;
    }
    else {
      *(long *)(param_1 + 2) = lVar3;
      *param_1 = uVar5;
    }
  }
  uVar4 = param_1[1];
  if (uVar4 < uVar2) {
    do {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x10);
      *puVar1 = 0;
      puVar1[1] = 0;
      uVar4 = param_1[1] + 1;
      param_1[1] = uVar4;
    } while (uVar4 < uVar2);
  }
  else if (uVar2 < uVar4) {
    FUN_109710c84(param_1,uVar2);
  }
  param_1[1] = uVar2;
  return 1;
}



/* Entry: 10973c044; end: 10973c08f;  */

undefined8 FUN_10973c044(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__realloc_11034ca10)(param_1,param_2 << 4);
    return param_1;
  }
  _free();
  return 0;
}



/* Entry: 10973c090; end: 10973c0cf;  */

/* WARNING: Removing unreachable block (ram,0x0001096f7e8c) */

byte * FUN_10973c090(long param_1,uint param_2)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined1 auStack_68 [64];
  long lStack_28;
  
  uVar7 = (*(uint *)(param_1 + 8) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 8) & 0xff00ff) << 8;
  if (param_2 < (uVar7 >> 0x10 | uVar7 << 0x10)) {
    pbVar4 = (byte *)(param_1 + (ulong)param_2 * 4 + 0xc);
  }
  else {
    pbVar4 = &UNK_10dfe4888;
  }
  uVar7 = (uint)(*(ushort *)(pbVar4 + 2) >> 8) | (*(ushort *)(pbVar4 + 2) & 0xff00ff) << 8;
  pcVar1 = (char *)(param_1 + (ulong)*pbVar4 * 0x100 + (ulong)pbVar4[1]);
  pbVar4 = (byte *)0x0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((pcVar1 != (char *)0x0) && (uVar7 != 0)) {
    if (*pcVar1 == '\0') {
      pbVar4 = (byte *)0x0;
    }
    else {
      if (0x3e < uVar7) {
        uVar7 = 0x3f;
      }
      _memcpy(auStack_68,pcVar1,(ulong)uVar7);
      auStack_68[uVar7] = 0;
      puVar5 = auStack_68;
      FUN_1096f7ec8();
      pbVar4 = (byte *)0x0;
      if (puVar5 != (undefined1 *)0x0) {
        pbVar4 = *(byte **)(puVar5 + 8);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pbVar4;
  }
  ___stack_chk_fail();
  pbVar6 = pbRam000000011382adb0;
  do {
    while (pbVar9 = pbRam000000011382adb0, pbVar6 == (byte *)0x0) {
      pbVar6 = (byte *)0x1;
      _calloc(1,0x10);
      if (pbVar6 == (byte *)0x0) {
        return (byte *)0x0;
      }
      *(byte **)pbVar6 = pbVar9;
      FUN_10971127c(pbVar6,pbVar4);
      if (*(long *)(pbVar6 + 8) == 0) {
        _free(pbVar6);
        return (byte *)0x0;
      }
      if (pbRam000000011382adb0 == pbVar9) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(0x11382adb0,0x10);
        if (bVar3) {
          cVar2 = ExclusiveMonitorsStatus();
          pbRam000000011382adb0 = pbVar6;
        }
        if (cVar2 == '\0') {
          if (pbVar9 != (byte *)0x0) {
            return pbVar6;
          }
          _atexit(FUN_109711308);
          return pbVar6;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      _free(*(long *)(pbVar6 + 8));
      _free(pbVar6);
      pbVar6 = pbRam000000011382adb0;
    }
    pbVar8 = *(byte **)(pbVar6 + 8);
    uVar7 = (uint)*pbVar8;
    pbVar9 = pbVar4;
    if (*pbVar8 != 0) {
      do {
        pbVar8 = pbVar8 + 1;
        if (uVar7 != (int)(char)(&UNK_10dfe4c27)[*pbVar9]) break;
        pbVar9 = pbVar9 + 1;
        uVar7 = (uint)*pbVar8;
      } while (uVar7 != 0);
    }
    if (uVar7 == (int)(char)(&UNK_10dfe4c27)[*pbVar9]) {
      return pbVar6;
    }
    pbVar6 = *(byte **)pbVar6;
  } while( true );
}



/* Entry: 10973c0d0; end: 10973c15b;  */

void FUN_10973c0d0(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = *param_1;
  do {
    if ((lVar3 != 0) || (puVar4 = (undefined *)param_1[-0x20], puVar4 == (undefined *)0x0)) {
      return;
    }
    FUN_10973c15c();
    if (puVar4 == (undefined *)0x0) {
      if (*param_1 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = (long)&UNK_10dfe4888;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    }
    else {
      if (*param_1 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = (long)puVar4;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      if (puVar4 != &UNK_10dfe4888) {
        FUN_1096f5a5c();
      }
    }
    lVar3 = *param_1;
  } while( true );
}



/* Entry: 10973c15c; end: 10973c3a7;  */

int * FUN_10973c15c(int *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  uint uVar7;
  long lVar8;
  undefined4 auStack_80 [2];
  long lStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  byte bStack_58;
  int iStack_54;
  int *piStack_50;
  int iStack_48;
  undefined2 uStack_44;
  int *piVar6;
  
  auStack_80[0] = 0;
  iStack_54 = 0;
  piStack_50 = (int *)0x0;
  uStack_70 = 0;
  lStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  bStack_58 = 0;
  iStack_48 = 0x10000;
  uStack_44 = 0;
  iVar4 = param_1[6];
  if (iVar4 == -1) {
    piVar6 = param_1;
    FUN_109710978();
    iVar4 = (int)piVar6;
  }
  uStack_44 = CONCAT11(uStack_44._1_1_,1);
  iStack_48 = iVar4;
  if (*(code **)(param_1 + 8) == (code *)0x0) {
    param_1 = (int *)&UNK_10dfe4888;
  }
  else {
    (**(code **)(param_1 + 8))(param_1,0x6c746167,*(undefined8 *)(param_1 + 10));
    if (param_1 == (int *)0x0) {
      param_1 = (int *)&UNK_10dfe4888;
    }
  }
  if (*param_1 != 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = *param_1 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  piStack_50 = param_1;
  bVar3 = 0;
  while( true ) {
    bStack_58 = bVar3;
    lVar8 = *(long *)(piStack_50 + 4);
    uStack_68._0_4_ = piStack_50[6];
    uStack_70 = lVar8 + (ulong)(uint)uStack_68;
    uVar7 = (uint)uStack_68 << 6;
    if (uVar7 < 0x4001) {
      uVar7 = 0x4000;
    }
    if (0x3ffffffe < uVar7) {
      uVar7 = 0x3fffffff;
    }
    uStack_68._4_4_ = 0x3fffffff;
    if ((uint)uStack_68 >> 0x1a == 0) {
      uStack_68._4_4_ = uVar7;
    }
    iStack_54 = 0;
    auStack_80[0] = 0;
    uStack_60 = uStack_60 & 0xffffffff;
    lStack_78 = lVar8;
    if (lVar8 == 0) {
      FUN_1096f5a5c();
      piStack_50 = (int *)0x0;
      lStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
      goto LAB_10973c2dc;
    }
    lVar5 = lVar8;
    FUN_10973c3a8(lVar8,auStack_80);
    if ((int)lVar5 != 0) break;
    if ((iStack_54 == 0) || ((bStack_58 & 1) != 0)) goto LAB_10973c2b8;
    if ((param_1[1] == 0) || (piVar6 = param_1, FUN_1096f59a0(), ((ulong)piVar6 & 1) == 0)) {
      uStack_70 = (ulong)(uint)param_1[6];
      lStack_78 = 0;
      goto LAB_10973c2b8;
    }
    uStack_70 = *(long *)(param_1 + 4) + (ulong)(uint)param_1[6];
    bVar3 = 1;
    if (*(long *)(param_1 + 4) == 0) {
      lStack_78 = 0;
LAB_10973c2b8:
      FUN_1096f5a5c(piStack_50);
      uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
LAB_10973c2cc:
      piStack_50 = (int *)0x0;
      uStack_70 = 0;
      lStack_78 = 0;
      FUN_1096f5a5c(param_1);
      param_1 = (int *)&UNK_10dfe4888;
LAB_10973c2dc:
      FUN_109710c0c(auStack_80);
      return param_1;
    }
  }
  if (iStack_54 == 0) {
    FUN_1096f5a5c(piStack_50);
    uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
  }
  else {
    iStack_54 = 0;
    FUN_10973c3a8(lVar8,auStack_80);
    iVar4 = iStack_54;
    FUN_1096f5a5c(piStack_50);
    uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
    uVar7 = 0;
    if (iVar4 == 0) {
      uVar7 = (uint)lVar8;
    }
    if ((uVar7 & 1) == 0) goto LAB_10973c2cc;
  }
  piStack_50 = (int *)0x0;
  uStack_70 = 0;
  lStack_78 = 0;
  if (param_1[1] != 0) {
    param_1[1] = 0;
  }
  goto LAB_10973c2dc;
}



/* Entry: 10973c3a8; end: 10973c4ef;  */

undefined8 FUN_10973c3a8(char *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  
  pcVar4 = param_1 + 0xc;
  if (((((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)pcVar4 - *(long *)(param_2 + 8))) ||
       ((param_1[1] == '\0' && *param_1 == '\0') && (param_1[2] == '\0' && param_1[3] == '\0'))) ||
      ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)pcVar4 - *(long *)(param_2 + 8)))) ||
     (((0x3f < (byte)param_1[8] ||
       ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)pcVar4 - *(long *)(param_2 + 8)))) ||
      ((uVar1 = ((uint)(byte)param_1[8] << 0x18 | (uint)(byte)param_1[9] << 0x10 |
                (uint)(byte)param_1[0xb]) << 2 | (uint)(byte)param_1[10] << 10,
       (uint)(*(int *)(param_2 + 0x10) - (int)pcVar4) < uVar1 ||
       (iVar2 = *(int *)(param_2 + 0x1c) - uVar1, *(int *)(param_2 + 0x1c) = iVar2, iVar2 < 1))))))
  {
    return 0;
  }
  uVar1 = (*(uint *)(param_1 + 8) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 8) & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar3 = (ulong)uVar1;
  if (uVar1 != 0) {
    lVar6 = *(long *)(param_2 + 8);
    uVar7 = (ulong)*(uint *)(param_2 + 0x18);
    pcVar4 = param_1 + 0xf;
    pcVar5 = param_1 + 0x10;
    do {
      if (uVar7 < (ulong)((long)pcVar5 - lVar6)) {
        return 0;
      }
      lVar6 = *(long *)(param_2 + 8);
      uVar7 = (ulong)*(uint *)(param_2 + 0x18);
      if (uVar7 < (ulong)((long)(param_1 + (ulong)(byte)pcVar4[-2] + (ulong)(byte)pcVar4[-3] * 0x100
                                ) - lVar6)) {
        return 0;
      }
      uVar1 = (uint)(*(ushort *)(pcVar4 + -1) >> 8) | (*(ushort *)(pcVar4 + -1) & 0xff00ff) << 8;
      if ((uint)(*(int *)(param_2 + 0x10) -
                (int)(param_1 + (ulong)(byte)pcVar4[-2] + (ulong)(byte)pcVar4[-3] * 0x100)) < uVar1)
      {
        return 0;
      }
      iVar2 = *(int *)(param_2 + 0x1c) - uVar1;
      *(int *)(param_2 + 0x1c) = iVar2;
      if (iVar2 < 1) {
        return 0;
      }
      pcVar4 = pcVar4 + 4;
      pcVar5 = pcVar5 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return 1;
}



/* Entry: 10973c4f0; end: 10973c55f;  */

undefined * FUN_10973c4f0(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  puVar3 = (undefined *)*param_1;
  if (puVar3 == (undefined *)0x0) {
    do {
      puVar3 = (undefined *)param_1[-0x1c];
      if (puVar3 == (undefined *)0x0) {
        return &UNK_10dfe4888;
      }
      FUN_10973c5e0();
      if (puVar3 == (undefined *)0x0) {
        puVar3 = &UNK_10dfe4888;
      }
      if (*param_1 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = (long)puVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return puVar3;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      FUN_10973c560();
      puVar3 = (undefined *)*param_1;
    } while (puVar3 == (undefined *)0x0);
  }
  return puVar3;
}



/* Entry: 10973c560; end: 10973c5df;  */

void FUN_10973c560(undefined8 *param_1)

{
  ulong uVar1;
  
  if ((param_1 != (undefined8 *)0x0) && (param_1 != (undefined8 *)&UNK_10dfe4888)) {
    if (*(int *)(param_1 + 1) != 0) {
      uVar1 = 0;
      do {
        _free(*(undefined8 *)(param_1[2] + uVar1 * 8));
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 1));
    }
    _free(param_1[2]);
    FUN_1096f5a5c(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(param_1);
    return;
  }
  return;
}



/* Entry: 10973c5e0; end: 10973c88f;  */

undefined8 * FUN_10973c5e0(int *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  uint uVar10;
  long lVar11;
  undefined4 auStack_90 [2];
  long lStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  byte bStack_68;
  int iStack_64;
  int *piStack_60;
  int iStack_58;
  undefined2 uStack_54;
  int *piVar9;
  
  puVar5 = (undefined8 *)0x1;
  _calloc(1,0x18);
  if (puVar5 != (undefined8 *)0x0) {
    auStack_90[0] = 0;
    iStack_64 = 0;
    piStack_60 = (int *)0x0;
    uStack_80 = 0;
    lStack_88 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    bStack_68 = 0;
    iStack_58 = 0x10000;
    uStack_54 = 0;
    iVar4 = param_1[6];
    if (iVar4 == -1) {
      piVar9 = param_1;
      FUN_109710978();
      iVar4 = (int)piVar9;
    }
    uStack_54 = CONCAT11(uStack_54._1_1_,1);
    piVar9 = (int *)&UNK_10dfe4888;
    iStack_58 = iVar4;
    if (*(code **)(param_1 + 8) != (code *)0x0) {
      (**(code **)(param_1 + 8))(param_1,0x6d6f7274,*(undefined8 *)(param_1 + 10));
      piVar9 = param_1;
      if (param_1 == (int *)0x0) {
        piVar9 = (int *)&UNK_10dfe4888;
      }
    }
    if (*piVar9 != 0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = *piVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    piStack_60 = piVar9;
    bVar3 = 0;
    do {
      bStack_68 = bVar3;
      lVar11 = *(long *)(piStack_60 + 4);
      uStack_78._0_4_ = piStack_60[6];
      uStack_80 = lVar11 + (ulong)(uint)uStack_78;
      uVar10 = (uint)uStack_78 << 6;
      if (uVar10 < 0x4001) {
        uVar10 = 0x4000;
      }
      if (0x3ffffffe < uVar10) {
        uVar10 = 0x3fffffff;
      }
      uStack_78._4_4_ = 0x3fffffff;
      if ((uint)uStack_78 >> 0x1a == 0) {
        uStack_78._4_4_ = uVar10;
      }
      iStack_64 = 0;
      auStack_90[0] = 0;
      uStack_70 = uStack_70 & 0xffffffff;
      lStack_88 = lVar11;
      if (lVar11 == 0) {
        FUN_1096f5a5c();
        piStack_60 = (int *)0x0;
        lStack_88 = 0;
        uStack_80 = 0;
        uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
        goto LAB_10973c780;
      }
      lVar6 = lVar11;
      FUN_10973c890(lVar11,auStack_90);
      if ((int)lVar6 != 0) {
        if (iStack_64 == 0) {
          FUN_1096f5a5c(piStack_60);
          uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
        }
        else {
          iStack_64 = 0;
          FUN_10973c890(lVar11,auStack_90);
          iVar4 = iStack_64;
          FUN_1096f5a5c(piStack_60);
          uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
          uVar10 = 0;
          if (iVar4 == 0) {
            uVar10 = (uint)lVar11;
          }
          if ((uVar10 & 1) == 0) goto LAB_10973c770;
        }
        piStack_60 = (int *)0x0;
        uStack_80 = 0;
        lStack_88 = 0;
        if (piVar9[1] != 0) {
          piVar9[1] = 0;
        }
        goto LAB_10973c780;
      }
      if ((iStack_64 == 0) || ((bStack_68 & 1) != 0)) goto LAB_10973c75c;
      if ((piVar9[1] == 0) || (piVar7 = piVar9, FUN_1096f59a0(), ((ulong)piVar7 & 1) == 0)) {
        uStack_80 = (ulong)(uint)piVar9[6];
        lStack_88 = 0;
        goto LAB_10973c75c;
      }
      uStack_80 = *(long *)(piVar9 + 4) + (ulong)(uint)piVar9[6];
      bVar3 = 1;
    } while (*(long *)(piVar9 + 4) != 0);
    lStack_88 = 0;
LAB_10973c75c:
    FUN_1096f5a5c(piStack_60);
    uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
LAB_10973c770:
    piStack_60 = (int *)0x0;
    uStack_80 = 0;
    lStack_88 = 0;
    FUN_1096f5a5c(piVar9);
    piVar9 = (int *)&UNK_10dfe4888;
LAB_10973c780:
    *puVar5 = piVar9;
    piVar7 = (int *)&UNK_10dfe4888;
    if (7 < (uint)piVar9[6]) {
      piVar7 = *(int **)(piVar9 + 4);
    }
    uVar10 = (piVar7[1] & 0xff00ff00U) >> 8 | (piVar7[1] & 0xff00ffU) << 8;
    uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
    uVar8 = (ulong)uVar10;
    *(uint *)(puVar5 + 1) = uVar10;
    _calloc(uVar8,8);
    puVar5[2] = uVar8;
    if (uVar8 == 0) {
      *(undefined4 *)(puVar5 + 1) = 0;
      FUN_1096f5a5c(piVar9);
      *puVar5 = &UNK_10dfe4888;
    }
    FUN_109710c0c(auStack_90);
  }
  return puVar5;
}



/* Entry: 10973c890; end: 10973d037;  */

ushort * FUN_10973c890(ushort *param_1,long param_2)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ushort *puVar14;
  ushort *puVar15;
  ushort *puVar16;
  ushort *puVar17;
  ulong uVar18;
  byte *pbVar19;
  int iVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  ushort *puVar25;
  uint uVar26;
  uint uVar27;
  bool bVar28;
  long lVar29;
  uint uVar30;
  uint uVar31;
  byte *pbVar20;
  
  if ((char *)(ulong)*(uint *)(param_2 + 0x18) <
      (char *)((long)param_1 + (2 - *(long *)(param_2 + 8)))) {
    return (ushort *)0x0;
  }
  if ((*(char *)((long)param_1 + 1) == '\0' && (char)*param_1 == '\0') ||
     (puVar14 = param_1 + 4,
     (ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar14 - *(long *)(param_2 + 8)))) {
LAB_10973c8fc:
    puVar14 = (ushort *)0x0;
  }
  else {
    uVar9 = (*(uint *)(param_1 + 2) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 2) & 0xff00ff) << 8;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
    if (uVar9 != 0) {
      uVar30 = 0;
      do {
        if ((char *)(ulong)*(uint *)(param_2 + 0x18) <
            (char *)((long)puVar14 + (8 - *(long *)(param_2 + 8)))) goto LAB_10973c8fc;
        uVar6 = *param_1;
        uVar10 = (*(uint *)(puVar14 + 2) & 0xff00ff00) >> 8 |
                 (*(uint *)(puVar14 + 2) & 0xff00ff) << 8;
        uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
        if (uVar10 < 0xc) goto LAB_10973c8fc;
        if (((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar14 - *(long *)(param_2 + 8))) ||
           (iVar21 = (int)*(undefined8 *)(param_2 + 0x10), (uint)(iVar21 - (int)puVar14) < uVar10))
        goto LAB_10973c8fc;
        iVar13 = *(int *)(param_2 + 0x1c) - uVar10;
        *(int *)(param_2 + 0x1c) = iVar13;
        if (iVar13 < 1) goto LAB_10973c8fc;
        puVar17 = puVar14 + 6;
        if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar17 - *(long *)(param_2 + 8))) {
          return (ushort *)0x0;
        }
        uVar7 = puVar14[4];
        iVar1 = ((uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8) * 2 +
                ((uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8);
        if ((uint)(iVar21 - (int)puVar17) < (uint)(iVar1 * 4)) {
          return (ushort *)0x0;
        }
        iVar13 = iVar13 + iVar1 * -4;
        *(int *)(param_2 + 0x1c) = iVar13;
        if (iVar13 < 1) goto LAB_10973c8fc;
        puVar17 = puVar17 + (ulong)((uint)(puVar14[4] >> 8) | (puVar14[4] & 0xff00ff) << 8) * 6;
        uVar10 = (uint)(puVar14[5] >> 8) | (puVar14[5] & 0xff00ff) << 8;
        if (uVar10 != 0) {
          uVar31 = 0;
          do {
            if (((byte *)(ulong)*(uint *)(param_2 + 0x18) <
                 (byte *)((long)puVar17 + (2 - *(long *)(param_2 + 8)))) ||
               (uVar23 = (uint)(*puVar17 >> 8) | (*puVar17 & 0xff00ff) << 8, uVar23 < 8))
            goto LAB_10973c8fc;
            uVar24 = (long)puVar17 - *(long *)(param_2 + 8);
            uVar22 = (ulong)*(uint *)(param_2 + 0x18);
            if ((uVar22 < uVar24) ||
               (((uint)(*(int *)(param_2 + 0x10) - (int)puVar17) < uVar23 ||
                (iVar21 = *(int *)(param_2 + 0x1c) - uVar23, *(int *)(param_2 + 0x1c) = iVar21,
                iVar21 < 1)))) goto LAB_10973c8fc;
            bVar4 = *(byte *)((long)puVar17 + 3);
            if (bVar4 < 2) {
              if (bVar4 == 0) {
                puVar16 = puVar17 + 4;
                FUN_10973d038(puVar16,param_2);
joined_r0x00010973cfc4:
                if (((ulong)puVar16 & 1) == 0) goto LAB_10973c8fc;
              }
              else if (bVar4 == 1) {
                if ((uVar22 < uVar24 + 0x10) || ((ushort)(puVar17[4] >> 8 | puVar17[4] << 8) < 4))
                goto LAB_10973c8fc;
                puVar16 = puVar17 + 4;
                puVar15 = puVar17 + 5;
                FUN_10973d2a4(puVar15,param_2,puVar16);
                if ((int)puVar15 == 0) {
                  return puVar15;
                }
                bVar28 = false;
                iVar21 = 0;
                uVar22 = 0;
                uVar24 = 0;
                uVar23 = 0;
                pbVar2 = (byte *)((long)puVar16 +
                                 (ulong)*(byte *)((long)puVar17 + 0xd) +
                                 (ulong)(byte)puVar17[6] * 0x100);
                pbVar3 = (byte *)((long)puVar16 +
                                 (ulong)*(byte *)((long)puVar17 + 0xf) +
                                 (ulong)(byte)puVar17[7] * 0x100);
                uVar11 = (uint)(puVar17[4] >> 8) | (puVar17[4] & 0xff00ff) << 8;
                uVar26 = 0;
                do {
                  if (bVar28) {
                    if ((uVar24 * uVar11 & 0xffffffff00000000) != 0) goto LAB_10973c8fc;
                    uVar27 = (int)uVar24 * uVar11;
                    lVar29 = *(long *)(param_2 + 8);
                    uVar18 = (ulong)*(uint *)(param_2 + 0x18);
                    if ((uVar18 < (ulong)((long)(pbVar2 + uVar27) - lVar29)) ||
                       ((uint)(*(int *)(param_2 + 0x10) - (int)(pbVar2 + uVar27)) < -uVar27))
                    goto LAB_10973c8fc;
                    iVar13 = *(int *)(param_2 + 0x1c) + uVar27;
                    *(int *)(param_2 + 0x1c) = iVar13;
                    if (iVar13 < 1) goto LAB_10973c8fc;
                    iVar13 = iVar13 + ((int)uVar24 - (int)uVar22);
                    *(int *)(param_2 + 0x1c) = iVar13;
                    if (uVar27 != 0) {
                      return (ushort *)0x0;
                    }
                    uVar22 = uVar24;
                    if (iVar13 < 1) {
                      return (ushort *)0x0;
                    }
                  }
                  else {
                    lVar29 = *(long *)(param_2 + 8);
                    uVar18 = (ulong)*(uint *)(param_2 + 0x18);
                  }
                  uVar27 = uVar26;
                  if (iVar21 <= (int)uVar23) {
                    if (uVar18 < (ulong)((long)pbVar2 - lVar29)) goto LAB_10973c8fc;
                    iVar13 = uVar23 + 1;
                    uVar12 = iVar13 * uVar11;
                    if ((uint)(*(int *)(param_2 + 0x10) - (int)pbVar2) < uVar12) goto LAB_10973c8fc;
                    iVar1 = *(int *)(param_2 + 0x1c) - uVar12;
                    *(int *)(param_2 + 0x1c) = iVar1;
                    if ((iVar1 < 1) ||
                       (iVar1 = iVar21 + ~uVar23 + iVar1, *(int *)(param_2 + 0x1c) = iVar1,
                       iVar1 < 1)) goto LAB_10973c8fc;
                    uVar8 = iVar21 * uVar11;
                    iVar21 = iVar13;
                    if (uVar8 < uVar12) {
                      pbVar20 = pbVar2 + uVar8;
                      do {
                        pbVar19 = pbVar20 + 1;
                        if (uVar27 <= *pbVar20 + 1) {
                          uVar27 = *pbVar20 + 1;
                        }
                        pbVar20 = pbVar19;
                      } while (pbVar19 < pbVar2 + uVar12);
                    }
                  }
                  if ((uVar18 < (ulong)((long)pbVar3 - lVar29)) ||
                     ((uint)(*(int *)(param_2 + 0x10) - (int)pbVar3) < uVar27 * 8))
                  goto LAB_10973c8fc;
                  iVar13 = *(int *)(param_2 + 0x1c) + uVar27 * -8;
                  *(int *)(param_2 + 0x1c) = iVar13;
                  if ((iVar13 < 1) ||
                     (iVar13 = iVar13 + (uVar26 - uVar27), *(int *)(param_2 + 0x1c) = iVar13,
                     iVar13 < 1)) goto LAB_10973c8fc;
                  if (uVar26 < uVar27) {
                    uVar12 = (uint)(puVar17[4] >> 8) | (puVar17[4] & 0xff00ff) << 8;
                    puVar15 = (ushort *)(pbVar3 + (ulong)uVar26 * 8);
                    do {
                      puVar25 = puVar15 + 4;
                      uVar26 = 0;
                      if (uVar12 != 0) {
                        uVar26 = (int)(((uint)(*puVar15 >> 8) | (*puVar15 & 0xff00ff) << 8) -
                                      ((uint)(puVar17[6] >> 8) | (puVar17[6] & 0xff00ff) << 8)) /
                                 (int)uVar12;
                      }
                      uVar8 = (uint)uVar24;
                      if ((int)uVar26 <= (int)(uint)uVar24) {
                        uVar8 = uVar26;
                      }
                      uVar24 = (ulong)uVar8;
                      if ((int)uVar23 <= (int)uVar26) {
                        uVar23 = uVar26;
                      }
                      puVar15 = puVar25;
                    } while (puVar25 < pbVar3 + (ulong)uVar27 * 8);
                  }
                  bVar28 = (int)uVar24 < (int)uVar22;
                  uVar26 = uVar27;
                } while ((int)uVar24 < (int)uVar22 || iVar21 <= (int)uVar23);
                if ((((byte *)(ulong)*(uint *)(param_2 + 0x18) <
                      (byte *)((long)puVar17 + (0x12 - *(long *)(param_2 + 8)))) ||
                    ((byte *)(ulong)*(uint *)(param_2 + 0x18) <
                     (byte *)((long)puVar16 +
                             (((ulong)*(byte *)((long)puVar17 + 0x11) +
                              (ulong)(byte)puVar17[8] * 0x100) - *(long *)(param_2 + 8))))) ||
                   (*(int *)(param_2 + 0x1c) < 1)) goto LAB_10973c8fc;
              }
            }
            else {
              if (bVar4 == 2) {
                if (uVar22 < uVar24 + 0x16) goto LAB_10973c8fc;
                puVar16 = puVar17 + 4;
                FUN_10973d038(puVar16,param_2);
                if ((int)puVar16 == 0) {
                  return puVar16;
                }
                if ((*(byte *)((long)puVar17 + 0x11) == 0 && (byte)puVar17[8] == 0) ||
                   (*(byte *)((long)puVar17 + 0x13) == 0 && (byte)puVar17[9] == 0))
                goto LAB_10973c8fc;
                bVar4 = (byte)puVar17[10];
                bVar5 = *(byte *)((long)puVar17 + 0x15);
              }
              else {
                if (bVar4 == 4) {
                  puVar16 = puVar17 + 4;
                  FUN_10973baf0(puVar16,param_2);
                  goto joined_r0x00010973cfc4;
                }
                if (bVar4 != 5) goto LAB_10973cfc8;
                if (((uVar22 < uVar24 + 0x12) || (uVar22 < uVar24 + 0x10)) ||
                   ((ushort)(puVar17[4] >> 8 | puVar17[4] << 8) < 4)) goto LAB_10973c8fc;
                puVar16 = puVar17 + 4;
                puVar15 = puVar17 + 5;
                FUN_10973d2a4(puVar15,param_2,puVar16);
                if ((int)puVar15 == 0) {
                  return puVar15;
                }
                bVar28 = false;
                iVar21 = 0;
                uVar22 = 0;
                uVar24 = 0;
                uVar23 = 0;
                pbVar2 = (byte *)((long)puVar16 +
                                 (ulong)*(byte *)((long)puVar17 + 0xd) +
                                 (ulong)(byte)puVar17[6] * 0x100);
                pbVar3 = (byte *)((long)puVar16 +
                                 (ulong)*(byte *)((long)puVar17 + 0xf) +
                                 (ulong)(byte)puVar17[7] * 0x100);
                uVar11 = (uint)(puVar17[4] >> 8) | (puVar17[4] & 0xff00ff) << 8;
                uVar26 = 0;
                do {
                  if (bVar28) {
                    if ((uVar24 * uVar11 & 0xffffffff00000000) != 0) goto LAB_10973c8fc;
                    uVar27 = (int)uVar24 * uVar11;
                    lVar29 = *(long *)(param_2 + 8);
                    uVar18 = (ulong)*(uint *)(param_2 + 0x18);
                    if ((uVar18 < (ulong)((long)(pbVar2 + uVar27) - lVar29)) ||
                       ((uint)(*(int *)(param_2 + 0x10) - (int)(pbVar2 + uVar27)) < -uVar27))
                    goto LAB_10973c8fc;
                    iVar13 = *(int *)(param_2 + 0x1c) + uVar27;
                    *(int *)(param_2 + 0x1c) = iVar13;
                    if (iVar13 < 1) goto LAB_10973c8fc;
                    iVar13 = iVar13 + ((int)uVar24 - (int)uVar22);
                    *(int *)(param_2 + 0x1c) = iVar13;
                    if (uVar27 != 0) {
                      return (ushort *)0x0;
                    }
                    uVar22 = uVar24;
                    if (iVar13 < 1) {
                      return (ushort *)0x0;
                    }
                  }
                  else {
                    lVar29 = *(long *)(param_2 + 8);
                    uVar18 = (ulong)*(uint *)(param_2 + 0x18);
                  }
                  uVar27 = uVar26;
                  if (iVar21 <= (int)uVar23) {
                    if (uVar18 < (ulong)((long)pbVar2 - lVar29)) goto LAB_10973c8fc;
                    iVar13 = uVar23 + 1;
                    uVar12 = iVar13 * uVar11;
                    if ((uint)(*(int *)(param_2 + 0x10) - (int)pbVar2) < uVar12) goto LAB_10973c8fc;
                    iVar1 = *(int *)(param_2 + 0x1c) - uVar12;
                    *(int *)(param_2 + 0x1c) = iVar1;
                    if ((iVar1 < 1) ||
                       (iVar1 = iVar21 + ~uVar23 + iVar1, *(int *)(param_2 + 0x1c) = iVar1,
                       iVar1 < 1)) goto LAB_10973c8fc;
                    uVar8 = iVar21 * uVar11;
                    iVar21 = iVar13;
                    if (uVar8 < uVar12) {
                      pbVar20 = pbVar2 + uVar8;
                      do {
                        pbVar19 = pbVar20 + 1;
                        if (uVar27 <= *pbVar20 + 1) {
                          uVar27 = *pbVar20 + 1;
                        }
                        pbVar20 = pbVar19;
                      } while (pbVar19 < pbVar2 + uVar12);
                    }
                  }
                  if ((uVar18 < (ulong)((long)pbVar3 - lVar29)) ||
                     ((uint)(*(int *)(param_2 + 0x10) - (int)pbVar3) < uVar27 * 8))
                  goto LAB_10973c8fc;
                  iVar13 = *(int *)(param_2 + 0x1c) + uVar27 * -8;
                  *(int *)(param_2 + 0x1c) = iVar13;
                  if ((iVar13 < 1) ||
                     (iVar13 = iVar13 + (uVar26 - uVar27), *(int *)(param_2 + 0x1c) = iVar13,
                     iVar13 < 1)) goto LAB_10973c8fc;
                  if (uVar26 < uVar27) {
                    uVar12 = (uint)(puVar17[4] >> 8) | (puVar17[4] & 0xff00ff) << 8;
                    puVar16 = (ushort *)(pbVar3 + (ulong)uVar26 * 8);
                    do {
                      puVar15 = puVar16 + 4;
                      uVar26 = 0;
                      if (uVar12 != 0) {
                        uVar26 = (int)(((uint)(*puVar16 >> 8) | (*puVar16 & 0xff00ff) << 8) -
                                      ((uint)(puVar17[6] >> 8) | (puVar17[6] & 0xff00ff) << 8)) /
                                 (int)uVar12;
                      }
                      uVar8 = (uint)uVar24;
                      if ((int)uVar26 <= (int)(uint)uVar24) {
                        uVar8 = uVar26;
                      }
                      uVar24 = (ulong)uVar8;
                      if ((int)uVar23 <= (int)uVar26) {
                        uVar23 = uVar26;
                      }
                      puVar16 = puVar15;
                    } while (puVar15 < pbVar3 + (ulong)uVar27 * 8);
                  }
                  bVar28 = (int)uVar24 < (int)uVar22;
                  uVar26 = uVar27;
                } while ((int)uVar24 < (int)uVar22 || iVar21 <= (int)uVar23);
                bVar4 = (byte)puVar17[8];
                bVar5 = *(byte *)((long)puVar17 + 0x11);
              }
              if (bVar5 == 0 && bVar4 == 0) goto LAB_10973c8fc;
            }
LAB_10973cfc8:
            puVar17 = (ushort *)
                      ((long)puVar17 +
                      (ulong)*(byte *)((long)puVar17 + 1) + (ulong)(byte)*puVar17 * 0x100);
            uVar31 = uVar31 + 1;
          } while (uVar31 != uVar10);
        }
        if ((2 < (ushort)(uVar6 >> 8 | uVar6 << 8)) &&
           (FUN_10973b5d4(puVar17,param_2,uVar10), (int)puVar17 == 0)) {
          return puVar17;
        }
        puVar14 = (ushort *)
                  ((long)puVar14 +
                  (ulong)*(byte *)((long)puVar14 + 7) +
                  (ulong)(byte)puVar14[3] * 0x100 +
                  (ulong)(byte)puVar14[2] * 0x1000000 +
                  (ulong)*(byte *)((long)puVar14 + 5) * 0x10000);
        uVar30 = uVar30 + 1;
      } while (uVar30 != uVar9);
    }
    puVar14 = (ushort *)0x1;
  }
  return puVar14;
}



/* Entry: 10973d038; end: 10973d2a3;  */

ushort * FUN_10973d038(ushort *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ushort *puVar8;
  ulong uVar9;
  byte *pbVar10;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  ushort *puVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  long lVar20;
  byte *pbVar11;
  
  if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)param_1 + (8 - *(long *)(param_2 + 8)))) {
    return (ushort *)0x0;
  }
  if ((ushort)(*param_1 >> 8 | *param_1 << 8) < 4) {
LAB_10973d28c:
    puVar8 = (ushort *)0x0;
  }
  else {
    puVar8 = param_1 + 1;
    FUN_10973d2a4(puVar8,param_2,param_1);
    if ((int)puVar8 != 0) {
      bVar19 = false;
      iVar15 = 0;
      uVar14 = 0;
      uVar12 = 0;
      uVar13 = 0;
      lVar2 = (long)param_1 + (ulong)*(byte *)((long)param_1 + 5) + (ulong)(byte)param_1[2] * 0x100;
      lVar3 = (long)param_1 + (ulong)*(byte *)((long)param_1 + 7) + (ulong)(byte)param_1[3] * 0x100;
      uVar5 = (uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8;
      uVar17 = 0;
      do {
        if (bVar19) {
          if ((uVar12 * uVar5 & 0xffffffff00000000) != 0) goto LAB_10973d28c;
          uVar18 = (int)uVar12 * uVar5;
          lVar20 = *(long *)(param_2 + 8);
          uVar9 = (ulong)*(uint *)(param_2 + 0x18);
          if ((uVar9 < (lVar2 + (ulong)uVar18) - lVar20) ||
             ((uint)(*(int *)(param_2 + 0x10) - (int)(lVar2 + (ulong)uVar18)) < -uVar18))
          goto LAB_10973d28c;
          iVar1 = *(int *)(param_2 + 0x1c) + uVar18;
          *(int *)(param_2 + 0x1c) = iVar1;
          if (iVar1 < 1) goto LAB_10973d28c;
          iVar1 = iVar1 + ((int)uVar12 - (int)uVar14);
          *(int *)(param_2 + 0x1c) = iVar1;
          if (uVar18 != 0) {
            return (ushort *)0x0;
          }
          uVar14 = uVar12;
          if (iVar1 < 1) {
            return (ushort *)0x0;
          }
        }
        else {
          lVar20 = *(long *)(param_2 + 8);
          uVar9 = (ulong)*(uint *)(param_2 + 0x18);
        }
        uVar18 = uVar17;
        if (iVar15 <= (int)uVar13) {
          if (uVar9 < (ulong)(lVar2 - lVar20)) goto LAB_10973d28c;
          iVar1 = uVar13 + 1;
          uVar6 = iVar1 * uVar5;
          if ((uint)(*(int *)(param_2 + 0x10) - (int)lVar2) < uVar6) goto LAB_10973d28c;
          iVar7 = *(int *)(param_2 + 0x1c) - uVar6;
          *(int *)(param_2 + 0x1c) = iVar7;
          if ((iVar7 < 1) ||
             (iVar7 = iVar15 + ~uVar13 + iVar7, *(int *)(param_2 + 0x1c) = iVar7, iVar7 < 1))
          goto LAB_10973d28c;
          uVar4 = iVar15 * uVar5;
          iVar15 = iVar1;
          if (uVar4 < uVar6) {
            pbVar11 = (byte *)(lVar2 + (ulong)uVar4);
            do {
              pbVar10 = pbVar11 + 1;
              if (uVar18 <= *pbVar11 + 1) {
                uVar18 = *pbVar11 + 1;
              }
              pbVar11 = pbVar10;
            } while (pbVar10 < (byte *)(lVar2 + (ulong)uVar6));
          }
        }
        if ((uVar9 < (ulong)(lVar3 - lVar20)) ||
           ((uint)(*(int *)(param_2 + 0x10) - (int)lVar3) < uVar18 * 4)) goto LAB_10973d28c;
        iVar1 = *(int *)(param_2 + 0x1c) + uVar18 * -4;
        *(int *)(param_2 + 0x1c) = iVar1;
        if ((iVar1 < 1) ||
           (iVar1 = iVar1 + (uVar17 - uVar18), *(int *)(param_2 + 0x1c) = iVar1, iVar1 < 1))
        goto LAB_10973d28c;
        if (uVar17 < uVar18) {
          uVar6 = (uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8;
          puVar8 = (ushort *)(lVar3 + (ulong)uVar17 * 4);
          do {
            puVar16 = puVar8 + 2;
            uVar17 = 0;
            if (uVar6 != 0) {
              uVar17 = (int)(((uint)(*puVar8 >> 8) | (*puVar8 & 0xff00ff) << 8) -
                            ((uint)(param_1[2] >> 8) | (param_1[2] & 0xff00ff) << 8)) / (int)uVar6;
            }
            uVar4 = (uint)uVar12;
            if ((int)uVar17 <= (int)(uint)uVar12) {
              uVar4 = uVar17;
            }
            uVar12 = (ulong)uVar4;
            if ((int)uVar13 <= (int)uVar17) {
              uVar13 = uVar17;
            }
            puVar8 = puVar16;
          } while (puVar16 < (ushort *)(lVar3 + (ulong)uVar18 * 4));
        }
        bVar19 = (int)uVar12 < (int)uVar14;
        uVar17 = uVar18;
      } while ((int)uVar12 < (int)uVar14 || iVar15 <= (int)uVar13);
      puVar8 = (ushort *)0x1;
    }
  }
  return puVar8;
}



/* Entry: 10973d2a4; end: 10973d333;  */

undefined8 FUN_10973d2a4(byte *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1 + (2 - *(long *)(param_2 + 8)) <= (byte *)(ulong)*(uint *)(param_2 + 0x18)) {
    lVar2 = param_3 + (ulong)*param_1 * 0x100 + (ulong)param_1[1];
    lVar1 = lVar2 + 4;
    if (((((ulong)(lVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) &&
         ((ulong)(lVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))) &&
        (uVar3 = *(ushort *)(lVar2 + 2), uVar4 = (uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8,
        uVar4 <= (uint)(*(int *)(param_2 + 0x10) - (int)lVar1))) &&
       (iVar5 = *(int *)(param_2 + 0x1c) - uVar4, *(int *)(param_2 + 0x1c) = iVar5, 0 < iVar5)) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 10973d334; end: 10973d47f;  */

long FUN_10973d334(long param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  uint uVar7;
  
  uVar7 = (uint)*(byte *)(param_1 + 0xc) << 0x18 | (uint)*(byte *)(param_1 + 0xd) << 0x10 |
          (uint)*(byte *)(param_1 + 0xe) << 8 | (uint)*(byte *)(param_1 + 0xf);
  lVar3 = 1;
  _calloc(1,uVar7 * 0x18);
  if (lVar3 != 0 && uVar7 != 0) {
    uVar4 = 0;
    uVar2 = (*(uint *)(param_1 + 8) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 8) & 0xff00ff) << 8;
    pbVar6 = (byte *)(param_1 + (ulong)((uVar2 >> 0x10 | uVar2 << 0x10) * 0xc) + 0x10);
    do {
      bVar1 = pbVar6[7];
      if (bVar1 < 2) {
        if ((bVar1 != 0) && (bVar1 != 1)) goto LAB_10973d424;
LAB_10973d3ec:
        FUN_10973d480(pbVar6 + (ulong)pbVar6[0x13] +
                               (ulong)pbVar6[0x12] * 0x100 +
                               (ulong)pbVar6[0x10] * 0x1000000 + (ulong)pbVar6[0x11] * 0x10000 + 0xc
                      ,lVar3 + (ulong)uVar4 * 0x18,param_2);
        uVar4 = uVar4 + 1;
      }
      else {
        if (bVar1 == 2) goto LAB_10973d3ec;
        if (bVar1 == 4) {
          puVar5 = (undefined8 *)(lVar3 + (ulong)uVar4 * 0x18);
          puVar5[1] = 0xffffffffffffffff;
          puVar5[2] = 0xffffffffffffffff;
          uVar4 = uVar4 + 1;
          *puVar5 = 0xffffffffffffffff;
        }
        else if (bVar1 == 5) goto LAB_10973d3ec;
      }
LAB_10973d424:
      pbVar6 = pbVar6 + (ulong)pbVar6[3] +
                        (ulong)pbVar6[2] * 0x100 +
                        (ulong)*pbVar6 * 0x1000000 + (ulong)pbVar6[1] * 0x10000;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return lVar3;
}



/* Entry: 10973d480; end: 10973d7af;  */

/* WARNING: Possible PIC construction at 0x00010973d530: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010973d708: Changing call to branch */

ushort * FUN_10973d480(ushort *param_1,ulong *param_2,int param_3)

{
  ulong uVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  ushort *puVar7;
  uint uVar8;
  ushort *puVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  uVar3 = *param_1 >> 8 | *param_1 << 8;
  puVar6 = param_1;
  if (uVar3 < 6) {
    if (uVar3 == 0) {
      uVar8 = param_3 - 1;
      uVar16 = (ulong)uVar8;
      if (*param_2 != 0xffffffffffffffff) {
        uVar15 = *param_2 | (2L << ((ulong)(uVar8 >> 4) & 0x3f)) - 1U;
        if (0x3ef < uVar8) {
          uVar15 = 0xffffffffffffffff;
        }
        *param_2 = uVar15;
      }
      uVar15 = 0;
SUB_10972be80:
      uVar10 = param_2[1];
      if (uVar10 == 0xffffffffffffffff) {
        uVar8 = 0;
      }
      else {
        uVar5 = (uint)uVar16 - (uint)uVar15;
        uVar8 = (uint)(uVar5 < 0x3f);
        uVar12 = 1L << (uVar15 & 0x3f);
        uVar1 = 0xffffffffffffffff;
        if (uVar5 < 0x3f) {
          uVar1 = uVar10 | ((2L << (uVar16 & 0x3f)) - uVar12) -
                           (ulong)((ulong)(1L << (uVar16 & 0x3f)) < uVar12);
        }
        param_2[1] = uVar1;
      }
      if (param_2[2] == 0xffffffffffffffff) {
        uVar5 = 0;
      }
      else {
        uVar14 = (uint)uVar16 >> 9;
        uVar4 = uVar14 - ((uint)uVar15 >> 9);
        uVar5 = (uint)(uVar4 < 0x3f);
        uVar16 = 1L << (uVar15 >> 9 & 0x3f);
        uVar15 = 0xffffffffffffffff;
        if (uVar4 < 0x3f) {
          uVar15 = param_2[2] |
                   ((2L << ((ulong)uVar14 & 0x3f)) - uVar16) -
                   (ulong)((ulong)(1L << ((ulong)uVar14 & 0x3f)) < uVar16);
        }
        param_2[2] = uVar15;
      }
      return (ushort *)(ulong)(uVar8 | uVar5);
    }
    if (uVar3 == 2) {
      uVar8 = (uint)(param_1[2] >> 8) | (param_1[2] & 0xff00ff) << 8;
      puVar7 = param_1 + 1;
      FUN_10973d7b0();
      puVar6 = puVar7;
      if (uVar8 != (uint)puVar7) {
        uVar5 = 0;
        do {
          uVar3 = param_1[2];
          puVar6 = param_1 + 1;
          FUN_10973d7b0();
          puVar9 = (ushort *)&UNK_10dfe4888;
          if (uVar5 < ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8) - (int)puVar6) {
            puVar9 = (ushort *)
                     ((long)param_1 +
                     (ulong)(((uint)(param_1[1] >> 8) | (param_1[1] & 0xff00ff) << 8) * uVar5) + 0xc
                     );
          }
          uVar14 = (uint)(puVar9[1] >> 8) | (puVar9[1] & 0xff00ff) << 8;
          uVar15 = (ulong)uVar14;
          if (uVar14 != 0xffff) {
            uVar16 = (ulong)((uint)(*puVar9 >> 8) | (*puVar9 & 0xff00ff) << 8);
            FUN_10972be18(param_2,uVar15,uVar16);
            goto SUB_10972be80;
          }
          uVar5 = uVar5 + 1;
        } while (uVar8 - (uint)puVar7 != uVar5);
      }
    }
    else if (uVar3 == 4) {
      uVar8 = (uint)(param_1[2] >> 8) | (param_1[2] & 0xff00ff) << 8;
      puVar7 = param_1 + 1;
      FUN_10973ba90();
      puVar6 = puVar7;
      if (uVar8 != (uint)puVar7) {
        iVar13 = 0;
        do {
          puVar6 = param_1 + 1;
          FUN_10973ba30(puVar6,iVar13);
          uVar5 = (uint)(puVar6[1] >> 8) | (puVar6[1] & 0xff00ff) << 8;
          uVar15 = (ulong)uVar5;
          if (uVar5 != 0xffff) {
            uVar16 = (ulong)((uint)(*puVar6 >> 8) | (*puVar6 & 0xff00ff) << 8);
            FUN_10972be18(param_2,uVar15,uVar16);
            goto SUB_10972be80;
          }
          iVar13 = iVar13 + 1;
        } while (uVar8 - (uint)puVar7 != iVar13);
      }
    }
  }
  else if (uVar3 == 6) {
    uVar8 = (uint)(param_1[2] >> 8) | (param_1[2] & 0xff00ff) << 8;
    puVar6 = param_1 + 1;
    func_0x00010973d810();
    uVar5 = (uint)puVar6;
    if (uVar8 != uVar5) {
      uVar14 = 0;
      do {
        uVar3 = param_1[2];
        puVar6 = param_1 + 1;
        func_0x00010973d810();
        pbVar11 = &UNK_10dfe4888;
        if (uVar14 < ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8) - (int)puVar6) {
          pbVar11 = (byte *)((long)param_1 +
                            (ulong)(((uint)(param_1[1] >> 8) | (param_1[1] & 0xff00ff) << 8) *
                                   uVar14) + 0xc);
        }
        bVar2 = *pbVar11;
        uVar3 = CONCAT11(bVar2,pbVar11[1]);
        if (uVar3 != 0xffff) {
          uVar15 = (ulong)CONCAT14(pbVar11[1],(uint)(uVar3 >> 4));
          auVar17._0_8_ = uVar15 & 0x3f;
          auVar17._8_8_ = (uVar15 & 0x3f0000003f) >> 0x20;
          auVar18[8] = 1;
          auVar18._0_8_ = 1;
          auVar18._9_7_ = 0;
          auVar18 = NEON_ushl(auVar18,auVar17,8);
          uVar16 = param_2[1];
          uVar15 = *param_2;
          *(byte *)(param_2 + 1) = (byte)uVar16 | auVar18[8];
          *(byte *)((long)param_2 + 9) = (byte)(uVar16 >> 8) | auVar18[9];
          *(byte *)((long)param_2 + 10) = (byte)(uVar16 >> 0x10) | auVar18[10];
          *(byte *)((long)param_2 + 0xb) = (byte)(uVar16 >> 0x18) | auVar18[0xb];
          *(byte *)((long)param_2 + 0xc) = (byte)(uVar16 >> 0x20) | auVar18[0xc];
          *(byte *)((long)param_2 + 0xd) = (byte)(uVar16 >> 0x28) | auVar18[0xd];
          *(byte *)((long)param_2 + 0xe) = (byte)(uVar16 >> 0x30) | auVar18[0xe];
          *(byte *)((long)param_2 + 0xf) = (byte)(uVar16 >> 0x38) | auVar18[0xf];
          *(byte *)param_2 = (byte)uVar15 | auVar18[0];
          *(byte *)((long)param_2 + 1) = (byte)(uVar15 >> 8) | auVar18[1];
          *(byte *)((long)param_2 + 2) = (byte)(uVar15 >> 0x10) | auVar18[2];
          *(byte *)((long)param_2 + 3) = (byte)(uVar15 >> 0x18) | auVar18[3];
          *(byte *)((long)param_2 + 4) = (byte)(uVar15 >> 0x20) | auVar18[4];
          *(byte *)((long)param_2 + 5) = (byte)(uVar15 >> 0x28) | auVar18[5];
          *(byte *)((long)param_2 + 6) = (byte)(uVar15 >> 0x30) | auVar18[6];
          *(byte *)((long)param_2 + 7) = (byte)(uVar15 >> 0x38) | auVar18[7];
          param_2[2] = param_2[2] | 1L << ((ulong)(bVar2 >> 1) & 0x3f);
        }
        uVar14 = uVar14 + 1;
      } while (uVar8 - uVar5 != uVar14);
    }
  }
  else {
    if (uVar3 == 8) {
      uVar8 = (uint)(param_1[2] >> 8) | (param_1[2] & 0xff00ff) << 8;
      if (uVar8 == 0) {
        return param_1;
      }
      uVar3 = param_1[1];
    }
    else {
      if (uVar3 != 10) {
        return param_1;
      }
      uVar8 = (uint)(param_1[3] >> 8) | (param_1[3] & 0xff00ff) << 8;
      if (uVar8 == 0) {
        return param_1;
      }
      uVar3 = param_1[2];
    }
    uVar5 = (uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8;
    uVar15 = (ulong)uVar5;
    if (uVar5 != 0xffff) {
      uVar16 = (ulong)((uVar8 + uVar5) - 1);
      FUN_10972be18(param_2,uVar15,uVar16);
      goto SUB_10972be80;
    }
  }
  return puVar6;
}



/* Entry: 10973d7b0; end: 10973d84b;  */

bool FUN_10973d7b0(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  
  uVar2 = (uint)(param_1[1] >> 8) | (param_1[1] & 0xff00ff) << 8;
  if (uVar2 == 0) {
    return false;
  }
  bVar3 = false;
  lVar4 = 0;
  do {
    uVar1 = *(ushort *)
             ((long)param_1 +
             lVar4 * 2 +
             (ulong)((uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8) * (ulong)(uVar2 - 1) + 10);
    uVar1 = uVar1 >> 8 | uVar1 << 8;
    if (bVar3) break;
    bVar3 = true;
    lVar4 = 1;
  } while (uVar1 == 0xffff);
  return uVar1 == 0xffff;
}



/* Entry: 10973d84c; end: 10973f3a3;  */

/* WARNING: Possible PIC construction at 0x00010973ec58: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */

ulong ******* FUN_10973d84c(ulong *******param_1,ulong *******param_2,ulong *******param_3)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  ulong *******pppppppuVar9;
  ulong ******ppppppuVar10;
  ulong ******ppppppuVar11;
  ushort *puVar12;
  ulong *******pppppppuVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  uint *puVar18;
  undefined1 *puVar19;
  undefined8 unaff_x19;
  byte *pbVar20;
  ulong *******unaff_x20;
  ulong *******pppppppuVar21;
  uint uVar22;
  uint uVar23;
  ulong *******pppppppuVar24;
  uint uVar25;
  ulong *****pppppuVar26;
  ushort uVar27;
  uint uVar28;
  int iVar29;
  ulong *******pppppppuVar30;
  ulong *******pppppppuVar31;
  uint *puVar32;
  ulong *****pppppuVar33;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  byte bVar34;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  byte bVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auStack_240 [4];
  uint uStack_23c;
  uint *puStack_238;
  ulong *******pppppppuStack_230;
  undefined8 uStack_228;
  ulong *******pppppppuStack_220;
  undefined8 uStack_218;
  ulong *******pppppppuStack_210;
  ulong *******pppppppuStack_208;
  uint uStack_1fc;
  ulong *******pppppppuStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  ulong *******pppppppuStack_1d8;
  ulong *******pppppppuStack_1d0;
  uint uStack_1c4;
  ulong ******ppppppuStack_1c0;
  ulong *******pppppppuStack_1b8;
  ulong *******pppppppuStack_1b0;
  ulong uStack_1a8;
  long lStack_1a0;
  ulong *******pppppppuStack_198;
  uint uStack_190;
  uint auStack_18c [67];
  long lStack_80;
  
  uVar16 = (uint)param_3;
  puVar19 = &stack0xfffffffffffffff0;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar34 = *(byte *)((long)param_1 + 7);
  pppppppuStack_1d8 = param_1;
  pppppppuStack_1d0 = param_2;
  if (bVar34 < 2) {
    if (bVar34 == 0) {
      pppppppuVar24 = (ulong *******)((long)param_1 + 0xc);
      ppppppuVar10 = param_2[3];
      uStack_218 = CONCAT44(uStack_218._4_4_,*(int *)(ppppppuVar10 + 3));
      if (*(int *)(ppppppuVar10 + 3) == -1) {
        FUN_109710978();
        uStack_218 = CONCAT44(uStack_218._4_4_,(int)ppppppuVar10);
      }
      param_2 = (ulong *******)0x0;
      pppppppuVar9 = (ulong *******)0x1;
      param_1 = pppppppuVar24;
      FUN_10973f3a4();
      uVar16 = (uint)pppppppuVar9;
      if ((*(short *)param_1 != 0) ||
         (((uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0),
           ((ulong)pppppppuStack_1d0[0x13] & (ulong)pppppppuStack_1d0[0x10]) != 0 &&
           (uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0),
           ((ulong)pppppppuStack_1d0[0x14] & (ulong)pppppppuStack_1d0[0x11]) != 0)) &&
          (uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0),
          ((ulong)pppppppuStack_1d0[0x15] & (ulong)pppppppuStack_1d0[0x12]) != 0)))) {
        pppppppuVar13 = (ulong *******)pppppppuStack_1d0[4];
        ppppppuVar10 = pppppppuStack_1d0[0xf];
        if ((ppppppuVar10 == (ulong ******)0x0) || (*(uint *)((long)ppppppuVar10 + 4) < 2)) {
          pppppuVar33 = (ulong *****)0x0;
        }
        else {
          pppppuVar33 = ppppppuVar10[1];
        }
        *(uint *)((long)pppppppuVar13 + 0x5c) = 0;
        uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0);
        if (*(char *)(pppppppuVar13 + 0xb) == '\x01') {
          uVar14 = 0;
          uStack_1f0._0_4_ = 0;
          pppppppuStack_1f8 = (ulong *******)((ulong)pppppppuStack_1f8 & 0xffffffff00000000);
          pppppppuVar30 = (ulong *******)0x0;
          pppppppuStack_208 = pppppppuVar24;
LAB_10973e2c4:
          uVar16 = (uint)pppppppuVar9;
          uVar15 = (ulong)*(uint *)(pppppppuVar13 + 0xc);
          if (pppppuVar33 == (ulong *****)0x0) {
LAB_10973e320:
            if (uVar14 < uVar15) {
              iVar29 = *(int *)((long)pppppppuVar13[0xe] + uVar14 * 0x14);
              if (iVar29 == 0xffff) {
                pppppppuVar21 = (ulong *******)0x2;
              }
              else {
                pppppppuVar9 = pppppppuStack_1d0 + 0x13;
                FUN_10972a9e4(pppppppuVar9,iVar29);
                if ((int)pppppppuVar9 != 0) {
                  puVar12 = (ushort *)
                            ((long)pppppppuVar24 +
                            (ulong)*(byte *)((long)pppppppuStack_1d8 + 0x13) +
                            (ulong)*(byte *)((long)pppppppuStack_1d8 + 0x12) * 0x100 +
                            (ulong)*(byte *)(pppppppuStack_1d8 + 2) * 0x1000000 +
                            (ulong)*(byte *)((long)pppppppuStack_1d8 + 0x11) * 0x10000);
                  FUN_10973f414(puVar12,iVar29,uStack_218 & 0xffffffff);
                  if (puVar12 != (ushort *)0x0) {
                    pppppppuVar21 =
                         (ulong *******)(ulong)((uint)(*puVar12 >> 8) | (*puVar12 & 0xff00ff) << 8);
                    goto LAB_10973e394;
                  }
                }
                pppppppuVar21 = (ulong *******)0x1;
              }
            }
            else {
              pppppppuVar21 = (ulong *******)0x0;
            }
LAB_10973e394:
            pppppppuVar31 = pppppppuVar24;
            param_2 = pppppppuVar30;
            pppppppuVar9 = pppppppuVar21;
            FUN_10973f3a4();
            uVar16 = (uint)(*(ushort *)pppppppuVar31 >> 8) |
                     (*(ushort *)pppppppuVar31 & 0xff00ff) << 8;
            uVar14 = (ulong)*(byte *)((long)pppppppuVar31 + 3);
            param_1 = pppppppuVar31;
            if ((*(byte *)((long)pppppppuVar31 + 3) & 0xf) == 0 ||
                (uint)pppppppuStack_1f8 <= (uint)uStack_1f0) {
              if (((int)pppppppuVar30 != 0) &&
                 ((bVar34 = *(byte *)((long)pppppppuVar31 + 2), (bVar34 >> 6 & 1) == 0 ||
                  (uVar16 != 0)))) {
                param_2 = (ulong *******)0x0;
                param_1 = pppppppuVar24;
                FUN_10973f3a4();
                pppppppuVar9 = pppppppuVar21;
                if (((((ulong)*param_1 & 0xf000000) != 0) &&
                    ((uint)uStack_1f0 < (uint)pppppppuStack_1f8)) ||
                   ((uVar16 != ((uint)(*(ushort *)param_1 >> 8) |
                               (*(ushort *)param_1 & 0xff00ff) << 8) ||
                    (((*(byte *)((long)param_1 + 2) ^ bVar34) >> 6 & 1) != 0)))) goto LAB_10973e464;
              }
              pppppppuVar9 = (ulong *******)0x0;
              FUN_10973f3a4();
              param_1 = pppppppuVar24;
              param_2 = pppppppuVar30;
              if ((((ulong)*pppppppuVar24 & 0xf000000) != 0) &&
                 ((uint)uStack_1f0 < (uint)pppppppuStack_1f8)) goto LAB_10973e464;
            }
            else {
LAB_10973e464:
              lVar1 = 100;
              if (*(char *)((long)pppppppuVar13 + 0x5a) == '\0') {
                lVar1 = 0x5c;
              }
              if ((*(int *)((long)pppppppuVar13 + lVar1) != 0) &&
                 (*(uint *)((long)pppppppuVar13 + 0x5c) < *(uint *)(pppppppuVar13 + 0xc))) {
                pppppppuVar9 = (ulong *******)(ulong)(*(int *)((long)pppppppuVar13 + lVar1) - 1);
                param_2 = (ulong *******)0x3;
                param_1 = pppppppuVar13;
                FUN_109710ea8();
                uVar14 = (ulong)*(byte *)((long)pppppppuVar31 + 3);
              }
            }
            if ((char)*(byte *)((long)pppppppuVar31 + 2) < '\0') {
              uStack_1f0._0_4_ = *(uint *)((long)pppppppuVar13 + 0x5c);
            }
            if ((*(byte *)((long)pppppppuVar31 + 2) >> 5 & 1) != 0) {
              uVar23 = *(uint *)(pppppppuVar13 + 0xc);
              if (*(uint *)((long)pppppppuVar13 + 0x5c) + 1 < uVar23) {
                uVar23 = *(uint *)((long)pppppppuVar13 + 0x5c) + 1;
              }
              pppppppuStack_1f8 = (ulong *******)CONCAT44(pppppppuStack_1f8._4_4_,uVar23);
            }
            uVar14 = uVar14 & 0xf;
            uStack_1fc = uVar16;
            if ((int)uVar14 != 0) {
              uVar16 = (uint)pppppppuStack_1f8 - (uint)uStack_1f0;
              if ((uint)uStack_1f0 < (uint)pppppppuStack_1f8) {
                bVar34 = (&UNK_10dfdff20)[uVar14];
                uVar28 = (uint)(bVar34 >> 4);
                uVar23 = uVar28;
                if (1 < uVar28) {
                  uVar23 = 2;
                }
                uVar25 = bVar34 & 0xf;
                if ((bVar34 & 0xe) != 0) {
                  uVar25 = 2;
                }
                if ((uVar16 < 0x41) && (uVar22 = uVar23 + uVar25, uVar22 <= uVar16)) {
                  uVar2 = *(uint *)(pppppppuVar13 + 0xc);
                  if (*(uint *)((long)pppppppuVar13 + 0x5c) + 1 < uVar2) {
                    uVar2 = *(uint *)((long)pppppppuVar13 + 0x5c) + 1;
                  }
                  pppppppuVar9 = (ulong *******)(ulong)uVar2;
                  uStack_23c = uVar22;
                  if (1 < uVar2 - (uint)uStack_1f0) {
                    param_2 = (ulong *******)(ulong)(uint)uStack_1f0;
                    param_1 = pppppppuVar13;
                    func_0x0001096f65e4();
                  }
                  if (1 < uVar16) {
                    param_2 = (ulong *******)(ulong)(uint)uStack_1f0;
                    pppppppuVar9 = (ulong *******)((ulong)pppppppuStack_1f8 & 0xffffffff);
                    param_1 = pppppppuVar13;
                    func_0x0001096f65e4();
                  }
                  pppppppuStack_210 = (ulong *******)pppppppuVar13[0xe];
                  pppppppuVar24 =
                       (ulong *******)((long)pppppppuStack_210 + (ulong)(uint)uStack_1f0 * 0x14);
                  pppppppuVar30 = (ulong *******)(((ulong)uVar23 * 4 + (ulong)uVar23) * 4);
                  pppppppuStack_220 = (ulong *******)(1L << uVar14 & 0xc4);
                  if (pppppppuStack_220 == (ulong *******)0x0) {
                    param_1 = &ppppppuStack_1c0;
                    param_2 = pppppppuVar24;
                    pppppppuVar9 = pppppppuVar30;
                    _memcpy();
                  }
                  pppppppuVar21 = (ulong *******)(((ulong)uVar25 * 4 + (ulong)uVar25) * 4);
                  puVar32 = (uint *)((long)pppppppuStack_210 +
                                    ((ulong)pppppppuStack_1f8 & 0xffffffff) * 0x14);
                  pppppppuStack_230 = pppppppuVar30;
                  if ((bVar34 & 0xf) != 0) {
                    param_2 = (ulong *******)(puVar32 + (long)(int)-uVar25 * 5);
                    param_1 = (ulong *******)&pppppppuStack_198;
                    pppppppuVar9 = pppppppuVar21;
                    _memcpy();
                  }
                  puStack_238 = puVar32;
                  if (uVar23 != uVar25) {
                    param_1 = (ulong *******)((long)pppppppuVar24 + (ulong)uVar25 * 0x14);
                    param_2 = (ulong *******)((long)pppppppuVar24 + (ulong)uVar23 * 0x14);
                    pppppppuVar9 = (ulong *******)
                                   ((ulong)(((uint)pppppppuStack_1f8 - (uint)uStack_1f0) -
                                           uStack_23c) * 0x14);
                    _memmove();
                  }
                  if ((bVar34 & 0xf) != 0) {
                    param_2 = (ulong *******)&pppppppuStack_198;
                    param_1 = pppppppuVar24;
                    _memcpy();
                    pppppppuVar9 = pppppppuVar21;
                  }
                  if (pppppppuStack_220 == (ulong *******)0x0) {
                    param_1 = (ulong *******)(puStack_238 + (long)(int)-uVar23 * 5);
                    param_2 = &ppppppuStack_1c0;
                    pppppppuVar9 = pppppppuStack_230;
                    _memcpy();
                  }
                  if (uVar28 == 3) {
                    puVar32 = (uint *)((long)pppppppuStack_210 +
                                      (ulong)((uint)pppppppuStack_1f8 - 1) * 0x14);
                    ppppppuStack_1c0 = *(ulong *******)puVar32;
                    pppppppuStack_1b8 = *(ulong ********)(puVar32 + 2);
                    uVar16 = puVar32[4];
                    pppppppuStack_1b0 = (ulong *******)CONCAT44(pppppppuStack_1b0._4_4_,uVar16);
                    puVar18 = (uint *)((long)pppppppuStack_210 +
                                      (ulong)((uint)pppppppuStack_1f8 - 2) * 0x14);
                    uVar5 = *(undefined8 *)puVar18;
                    *(undefined8 *)(puVar32 + 2) = *(undefined8 *)(puVar18 + 2);
                    *(undefined8 *)puVar32 = uVar5;
                    puVar32[4] = puVar18[4];
                    *(ulong ********)(puVar18 + 2) = pppppppuStack_1b8;
                    *(ulong *******)puVar18 = ppppppuStack_1c0;
                    puVar18[4] = uVar16;
                  }
                  if ((bVar34 & 0xf) == 3) {
                    ppppppuStack_1c0 = *pppppppuVar24;
                    pppppppuStack_1b8 = (ulong *******)pppppppuVar24[1];
                    uVar16 = *(uint *)(pppppppuVar24 + 2);
                    pppppppuStack_1b0 = (ulong *******)CONCAT44(pppppppuStack_1b0._4_4_,uVar16);
                    puVar32 = (uint *)((long)pppppppuStack_210 +
                                      (ulong)((uint)uStack_1f0 + 1) * 0x14);
                    ppppppuVar10 = *(ulong *******)puVar32;
                    pppppppuVar24[1] = *(ulong *******)(puVar32 + 2);
                    *pppppppuVar24 = ppppppuVar10;
                    *(uint *)(pppppppuVar24 + 2) = puVar32[4];
                    *(ulong ********)(puVar32 + 2) = pppppppuStack_1b8;
                    *(ulong *******)puVar32 = ppppppuStack_1c0;
                    puVar32[4] = uVar16;
                  }
                }
              }
            }
            uVar16 = (uint)pppppppuVar9;
            uVar14 = (ulong)*(uint *)((long)pppppppuVar13 + 0x5c);
            pppppppuVar30 = (ulong *******)(ulong)uStack_1fc;
            uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0);
            if ((uVar14 != *(uint *)(pppppppuVar13 + 0xc)) &&
               (uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0),
               *(char *)(pppppppuVar13 + 0xb) == '\x01')) goto code_r0x00010973e730;
          }
          else {
            if (uVar14 < uVar15) {
              uVar23 = *(uint *)((long)pppppppuVar13[0xe] + uVar14 * 0x14 + 8);
              puVar32 = (uint *)((long)pppppuVar33 + 0xc);
              do {
                pppppuVar33 = (ulong *****)((long)pppppuVar33 + -0xc);
                puVar18 = puVar32 + -2;
                puVar32 = puVar32 + -3;
              } while (uVar23 < *puVar18);
              do {
                puVar32 = (uint *)((long)pppppuVar33 + 0x14);
                pppppuVar33 = (ulong *****)((long)pppppuVar33 + 0xc);
              } while (*puVar32 < uVar23);
            }
            if ((*(uint *)(pppppppuStack_1d0 + 0x1c) & *(uint *)pppppuVar33) != 0)
            goto LAB_10973e320;
            uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0);
            if (uVar14 != uVar15) {
              pppppppuVar30 = (ulong *******)0x0;
              goto LAB_10973e74c;
            }
          }
        }
      }
      goto LAB_10973ec5c;
    }
    uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0);
    if (bVar34 == 1) {
      pppppppuStack_1f8 = (ulong *******)((long)param_1 + 0xc);
      pppppppuStack_220 = (ulong *******)param_2[0xe];
      if ((ushort)(*(ushort *)pppppppuStack_220 >> 8 | *(ushort *)pppppppuStack_220 << 8) == 1) {
        uStack_218 = CONCAT44(uStack_218._4_4_,
                              (uint)(*(char *)((long)pppppppuStack_220 + 5) != '\0' ||
                                    *(char *)((long)pppppppuStack_220 + 4) != '\0'));
      }
      else {
        uStack_218 = (ulong)uStack_218._4_4_ << 0x20;
      }
      bVar34 = *(byte *)((long)param_1 + 0x1c);
      bVar38 = *(byte *)((long)param_1 + 0x1d);
      bVar39 = *(byte *)((long)param_1 + 0x1e);
      bVar40 = *(byte *)((long)param_1 + 0x1f);
      ppppppuVar10 = param_2[3];
      pppppppuStack_208 =
           (ulong *******)CONCAT44(pppppppuStack_208._4_4_,*(int *)(ppppppuVar10 + 3));
      if (*(int *)(ppppppuVar10 + 3) == -1) {
        FUN_109710978();
        pppppppuStack_208 = (ulong *******)CONCAT44(pppppppuStack_208._4_4_,(int)ppppppuVar10);
      }
      pppppppuVar24 = (ulong *******)pppppppuStack_1d0[4];
      uVar23 = *(uint *)((long)pppppppuVar24 + 0x5c);
      uVar28 = *(uint *)(pppppppuVar24 + 0xc);
      param_2 = (ulong *******)0x0;
      uVar14 = 1;
      param_1 = pppppppuStack_1f8;
      FUN_10973f67c();
      uVar16 = (uint)uVar14;
      ppppppuVar10 = *param_1;
      if ((((uVar23 != uVar28) &&
           ((uVar23 = (uint)((ulong)ppppppuVar10 >> 0x28),
            ((uint)((ulong)ppppppuVar10 >> 0x18) & 0xff00 | uVar23 & 0xff) != 0xffff ||
            ((uVar23 & 0xff00 | (uint)(byte)((ulong)ppppppuVar10 >> 0x38)) != 0xffff)))) ||
          (((ulong)ppppppuVar10 & 0xffff) != 0)) ||
         (((uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0),
           ((ulong)pppppppuStack_1d0[0x13] & (ulong)pppppppuStack_1d0[0x10]) != 0 &&
           (uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0),
           ((ulong)pppppppuStack_1d0[0x14] & (ulong)pppppppuStack_1d0[0x11]) != 0)) &&
          (uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0),
          ((ulong)pppppppuStack_1d0[0x15] & (ulong)pppppppuStack_1d0[0x12]) != 0)))) {
        ppppppuVar10 = pppppppuStack_1d0[0xf];
        if ((ppppppuVar10 == (ulong ******)0x0) || (*(uint *)((long)ppppppuVar10 + 4) < 2)) {
          pppppuVar33 = (ulong *****)0x0;
        }
        else {
          pppppuVar33 = ppppppuVar10[1];
        }
        *(uint *)((long)pppppppuVar24 + 0x5c) = 0;
        uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0);
        if (*(char *)(pppppppuVar24 + 0xb) == '\x01') {
          uVar15 = 0;
          uVar17 = 0;
          pppppppuVar9 = (ulong *******)0x0;
          uVar23 = 0;
          pppppppuStack_210 =
               (ulong *******)
               ((long)pppppppuStack_1f8 +
               (ulong)bVar40 +
               (ulong)bVar39 * 0x100 + (ulong)bVar34 * 0x1000000 + (ulong)bVar38 * 0x10000);
          uStack_228 = 1;
          pppppppuStack_230 = (ulong *******)0x1;
LAB_10973ddc8:
          uVar16 = (uint)uVar14;
          uVar25 = (uint)uVar15;
          if (pppppuVar33 != (ulong *****)0x0) {
            if (uVar25 < uVar28) {
              uVar22 = *(uint *)((long)pppppppuVar24[0xe] + uVar15 * 0x14 + 8);
              puVar32 = (uint *)((long)pppppuVar33 + 0xc);
              do {
                pppppuVar33 = (ulong *****)((long)pppppuVar33 + -0xc);
                puVar18 = puVar32 + -2;
                puVar32 = puVar32 + -3;
              } while (uVar22 < *puVar18);
              do {
                puVar32 = (uint *)((long)pppppuVar33 + 0x14);
                pppppuVar33 = (ulong *****)((long)pppppuVar33 + 0xc);
              } while (*puVar32 < uVar22);
            }
            if ((*(uint *)(pppppppuStack_1d0 + 0x1c) & *(uint *)pppppuVar33) != 0)
            goto LAB_10973de20;
            uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0);
            if (uVar25 != uVar28) {
              uStack_1f0._0_4_ = 0;
              goto LAB_10973e264;
            }
            goto LAB_10973ec5c;
          }
LAB_10973de20:
          if (uVar25 < uVar28) {
            iVar29 = *(int *)((long)pppppppuVar24[0xe] + uVar15 * 0x14);
            if (iVar29 == 0xffff) {
              uVar15 = 2;
            }
            else {
              pppppppuVar13 = pppppppuStack_1d0 + 0x13;
              FUN_10972a9e4(pppppppuVar13,iVar29);
              if ((int)pppppppuVar13 != 0) {
                puVar12 = (ushort *)
                          ((long)pppppppuStack_1f8 +
                          (ulong)*(byte *)((long)pppppppuStack_1d8 + 0x13) +
                          (ulong)*(byte *)((long)pppppppuStack_1d8 + 0x12) * 0x100 +
                          (ulong)*(byte *)(pppppppuStack_1d8 + 2) * 0x1000000 +
                          (ulong)*(byte *)((long)pppppppuStack_1d8 + 0x11) * 0x10000);
                FUN_10973f414(puVar12,iVar29,(ulong)pppppppuStack_208 & 0xffffffff);
                if (puVar12 != (ushort *)0x0) {
                  uVar15 = (ulong)((uint)(*puVar12 >> 8) | (*puVar12 & 0xff00ff) << 8);
                  goto LAB_10973de98;
                }
              }
              uVar15 = 1;
            }
          }
          else {
            uVar15 = 0;
          }
LAB_10973de98:
          pppppppuVar13 = pppppppuStack_1f8;
          param_2 = pppppppuVar9;
          uVar14 = uVar15;
          FUN_10973f67c();
          uStack_1f0._0_4_ =
               (uint)(*(ushort *)pppppppuVar13 >> 8) | (*(ushort *)pppppppuVar13 & 0xff00ff) << 8;
          uVar28 = *(uint *)((long)pppppppuVar24 + 0x5c);
          uVar25 = *(uint *)(pppppppuVar24 + 0xc);
          bVar8 = uVar28 == uVar25;
          uStack_1fc = uVar23;
          if ((bVar8 && (uVar23 & 1) == 0) ||
             ((param_1 = pppppppuVar13,
              (ushort)(*(ushort *)((long)pppppppuVar13 + 4) >> 8 |
                      *(ushort *)((long)pppppppuVar13 + 4) << 8) == 0xffff &&
              ((ushort)(*(ushort *)((long)pppppppuVar13 + 6) >> 8 |
                       *(ushort *)((long)pppppppuVar13 + 6) << 8) == 0xffff)))) {
            if (((int)pppppppuVar9 != 0) &&
               ((bVar34 = *(byte *)((long)pppppppuVar13 + 2), (bVar34 >> 6 & 1) == 0 ||
                ((uint)uStack_1f0 != 0)))) {
              param_2 = (ulong *******)0x0;
              param_1 = pppppppuStack_1f8;
              FUN_10973f67c();
              uVar14 = uVar15;
              if ((((!bVar8 || (uVar23 & 1) != 0) &&
                   (((ushort)(*(ushort *)((long)param_1 + 4) >> 8 |
                             *(ushort *)((long)param_1 + 4) << 8) != 0xffff ||
                    ((ushort)(*(ushort *)((long)param_1 + 6) >> 8 |
                             *(ushort *)((long)param_1 + 6) << 8) != 0xffff)))) ||
                  ((uint)uStack_1f0 !=
                   ((uint)(*(ushort *)param_1 >> 8) | (*(ushort *)param_1 & 0xff00ff) << 8))) ||
                 (((*(byte *)((long)param_1 + 2) ^ bVar34) >> 6 & 1) != 0)) goto LAB_10973dfac;
            }
            uVar14 = 0;
            param_1 = pppppppuStack_1f8;
            FUN_10973f67c();
            uVar16 = (uint)uVar14;
            param_2 = pppppppuVar9;
            uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0);
            if (bVar8 && (uVar23 & 1) == 0) goto LAB_10973ec5c;
            if (((ushort)(*(ushort *)((long)param_1 + 4) >> 8 | *(ushort *)((long)param_1 + 4) << 8)
                 != 0xffff) ||
               (uVar23 = uStack_1fc,
               (ushort)(*(ushort *)((long)param_1 + 6) >> 8 | *(ushort *)((long)param_1 + 6) << 8)
               != 0xffff)) goto LAB_10973dfac;
          }
          else {
LAB_10973dfac:
            uVar23 = uStack_1fc;
            lVar1 = 100;
            if (*(char *)((long)pppppppuVar24 + 0x5a) == '\0') {
              lVar1 = 0x5c;
            }
            if ((uVar28 < uVar25) && (*(int *)((long)pppppppuVar24 + lVar1) != 0)) {
              uVar14 = (ulong)(*(int *)((long)pppppppuVar24 + lVar1) - 1);
              param_2 = (ulong *******)0x3;
              param_1 = pppppppuVar24;
              FUN_109710ea8();
              uVar28 = *(uint *)((long)pppppppuVar24 + 0x5c);
              uVar25 = *(uint *)(pppppppuVar24 + 0xc);
            }
          }
          uVar16 = (uint)uVar14;
          uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0);
          if (uVar28 == uVar25 && (uVar23 & 1) == 0) goto LAB_10973ec5c;
          uVar16 = (uint)(*(ushort *)((long)pppppppuVar13 + 4) >> 8) |
                   (*(ushort *)((long)pppppppuVar13 + 4) & 0xff00ff) << 8;
          if (uVar16 != 0xffff) {
            puVar32 = (uint *)((long)pppppppuStack_210 + (ulong)uVar16 * 4);
            param_2 = (ulong *******)(ulong)*(uint *)((long)pppppppuVar24[0xe] + uVar17 * 0x14);
            puVar12 = (ushort *)
                      ((long)pppppppuStack_210 +
                      (ulong)*(byte *)((long)puVar32 + 3) +
                      (ulong)*(byte *)((long)puVar32 + 2) * 0x100 +
                      (ulong)(byte)*puVar32 * 0x1000000 +
                      (ulong)*(byte *)((long)puVar32 + 1) * 0x10000);
            uVar14 = (ulong)pppppppuStack_208 & 0xffffffff;
            FUN_10973f6ec();
            uVar28 = *(uint *)((long)pppppppuVar24 + 0x5c);
            if (puVar12 == (ushort *)0x0) {
              param_1 = (ulong *******)0x0;
            }
            else {
              param_2 = (ulong *******)0x3;
              param_1 = pppppppuVar24;
              uVar14 = uVar17;
              FUN_109710ea8();
              puVar32 = (uint *)((long)pppppppuVar24[0xe] + uVar17 * 0x14);
              *puVar32 = (uint)(*puVar12 >> 8) | (*puVar12 & 0xff00ff) << 8;
              uVar27 = *puVar12;
              uVar15 = (ulong)CONCAT14(*(byte *)((long)puVar12 + 1),
                                       (uint)(ushort)(CONCAT11((byte)uVar27,
                                                               *(byte *)((long)puVar12 + 1)) >> 4));
              auVar54._0_8_ = uVar15 & 0x3f;
              auVar54._8_8_ = (uVar15 & 0x3f0000003f) >> 0x20;
              auVar36._8_8_ = 1;
              auVar36._0_8_ = 1;
              auVar36 = NEON_ushl(auVar36,auVar54,8);
              auVar54 = *(undefined1 (*) [16])(pppppppuStack_1d0 + 0x10);
              *(byte *)(pppppppuStack_1d0 + 0x11) = auVar36[8] | auVar54[8];
              *(byte *)((long)pppppppuStack_1d0 + 0x89) = auVar36[9] | auVar54[9];
              *(byte *)((long)pppppppuStack_1d0 + 0x8a) = auVar36[10] | auVar54[10];
              *(byte *)((long)pppppppuStack_1d0 + 0x8b) = auVar36[0xb] | auVar54[0xb];
              *(byte *)((long)pppppppuStack_1d0 + 0x8c) = auVar36[0xc] | auVar54[0xc];
              *(byte *)((long)pppppppuStack_1d0 + 0x8d) = auVar36[0xd] | auVar54[0xd];
              *(byte *)((long)pppppppuStack_1d0 + 0x8e) = auVar36[0xe] | auVar54[0xe];
              *(byte *)((long)pppppppuStack_1d0 + 0x8f) = auVar36[0xf] | auVar54[0xf];
              *(byte *)(pppppppuStack_1d0 + 0x10) = auVar36[0] | auVar54[0];
              *(byte *)((long)pppppppuStack_1d0 + 0x81) = auVar36[1] | auVar54[1];
              *(byte *)((long)pppppppuStack_1d0 + 0x82) = auVar36[2] | auVar54[2];
              *(byte *)((long)pppppppuStack_1d0 + 0x83) = auVar36[3] | auVar54[3];
              *(byte *)((long)pppppppuStack_1d0 + 0x84) = auVar36[4] | auVar54[4];
              *(byte *)((long)pppppppuStack_1d0 + 0x85) = auVar36[5] | auVar54[5];
              *(byte *)((long)pppppppuStack_1d0 + 0x86) = auVar36[6] | auVar54[6];
              *(byte *)((long)pppppppuStack_1d0 + 0x87) = auVar36[7] | auVar54[7];
              pppppppuStack_1d0[0x12] =
                   (ulong ******)
                   ((ulong)pppppppuStack_1d0[0x12] | 1L << ((ulong)(byte)((byte)uVar27 >> 1) & 0x3f)
                   );
              if ((int)uStack_218 != 0) {
                param_2 = (ulong *******)(ulong)((uint)(*puVar12 >> 8) | (*puVar12 & 0xff00ff) << 8)
                ;
                param_1 = pppppppuStack_220;
                FUN_10972bfb4();
                *(short *)(puVar32 + 3) = (short)param_1;
              }
              uVar28 = *(uint *)((long)pppppppuVar24 + 0x5c);
              uVar23 = uStack_1fc;
            }
          }
          uVar16 = (uint)(*(ushort *)((long)pppppppuVar13 + 6) >> 8) |
                   (*(ushort *)((long)pppppppuVar13 + 6) & 0xff00ff) << 8;
          if (uVar16 != 0xffff) {
            if (*(uint *)(pppppppuVar24 + 0xc) - 1 <= uVar28) {
              uVar28 = *(uint *)(pppppppuVar24 + 0xc) - 1;
            }
            puVar32 = (uint *)((long)pppppppuStack_210 + (ulong)uVar16 * 4);
            param_2 = (ulong *******)
                      (ulong)*(uint *)((long)pppppppuVar24[0xe] + (ulong)uVar28 * 0x14);
            param_1 = (ulong *******)
                      ((long)pppppppuStack_210 +
                      (ulong)*(byte *)((long)puVar32 + 3) +
                      (ulong)*(byte *)((long)puVar32 + 2) * 0x100 +
                      (ulong)(byte)*puVar32 * 0x1000000 +
                      (ulong)*(byte *)((long)puVar32 + 1) * 0x10000);
            uVar14 = (ulong)pppppppuStack_208 & 0xffffffff;
            FUN_10973f6ec();
            if (param_1 != (ulong *******)0x0) {
              puVar32 = (uint *)((long)pppppppuVar24[0xe] + (ulong)uVar28 * 0x14);
              *puVar32 = (uint)(*(ushort *)param_1 >> 8) | (*(ushort *)param_1 & 0xff00ff) << 8;
              bVar34 = *(byte *)param_1;
              uVar15 = (ulong)CONCAT14(*(undefined1 *)((long)param_1 + 1),
                                       (uint)(ushort)(CONCAT11(bVar34,*(undefined1 *)
                                                                       ((long)param_1 + 1)) >> 4));
              auVar37._0_8_ = uVar15 & 0x3f;
              auVar37._8_8_ = (uVar15 & 0x3f0000003f) >> 0x20;
              auVar6._8_8_ = uStack_228;
              auVar6._0_8_ = pppppppuStack_230;
              auVar36 = NEON_ushl(auVar6,auVar37,8);
              auVar54 = *(undefined1 (*) [16])(pppppppuStack_1d0 + 0x10);
              *(byte *)(pppppppuStack_1d0 + 0x11) = auVar36[8] | auVar54[8];
              *(byte *)((long)pppppppuStack_1d0 + 0x89) = auVar36[9] | auVar54[9];
              *(byte *)((long)pppppppuStack_1d0 + 0x8a) = auVar36[10] | auVar54[10];
              *(byte *)((long)pppppppuStack_1d0 + 0x8b) = auVar36[0xb] | auVar54[0xb];
              *(byte *)((long)pppppppuStack_1d0 + 0x8c) = auVar36[0xc] | auVar54[0xc];
              *(byte *)((long)pppppppuStack_1d0 + 0x8d) = auVar36[0xd] | auVar54[0xd];
              *(byte *)((long)pppppppuStack_1d0 + 0x8e) = auVar36[0xe] | auVar54[0xe];
              *(byte *)((long)pppppppuStack_1d0 + 0x8f) = auVar36[0xf] | auVar54[0xf];
              *(byte *)(pppppppuStack_1d0 + 0x10) = auVar36[0] | auVar54[0];
              *(byte *)((long)pppppppuStack_1d0 + 0x81) = auVar36[1] | auVar54[1];
              *(byte *)((long)pppppppuStack_1d0 + 0x82) = auVar36[2] | auVar54[2];
              *(byte *)((long)pppppppuStack_1d0 + 0x83) = auVar36[3] | auVar54[3];
              *(byte *)((long)pppppppuStack_1d0 + 0x84) = auVar36[4] | auVar54[4];
              *(byte *)((long)pppppppuStack_1d0 + 0x85) = auVar36[5] | auVar54[5];
              *(byte *)((long)pppppppuStack_1d0 + 0x86) = auVar36[6] | auVar54[6];
              *(byte *)((long)pppppppuStack_1d0 + 0x87) = auVar36[7] | auVar54[7];
              pppppppuStack_1d0[0x12] =
                   (ulong ******)
                   ((ulong)pppppppuStack_1d0[0x12] | 1L << ((ulong)(bVar34 >> 1) & 0x3f));
              if ((int)uStack_218 != 0) {
                param_2 = (ulong *******)
                          (ulong)((uint)(*(ushort *)param_1 >> 8) |
                                 (*(ushort *)param_1 & 0xff00ff) << 8);
                param_1 = pppppppuStack_220;
                FUN_10972bfb4();
                *(short *)(puVar32 + 3) = (short)param_1;
              }
            }
          }
          uVar16 = (uint)uVar14;
          bVar34 = *(byte *)((long)pppppppuVar13 + 2);
          uVar22 = *(uint *)((long)pppppppuVar24 + 0x5c);
          uVar15 = (ulong)uVar22;
          uVar28 = *(uint *)(pppppppuVar24 + 0xc);
          uVar25 = uVar22;
          if ((char)bVar34 >= '\0') {
            uVar25 = (uint)uVar17;
          }
          uVar17 = (ulong)uVar25;
          uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0);
          if ((uVar22 == uVar28) ||
             (uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0),
             *(char *)(pppppppuVar24 + 0xb) != '\x01')) goto LAB_10973ec5c;
          uVar23 = (char)bVar34 < '\0' | uVar23;
          if ((bVar34 >> 6 & 1) == 0) goto LAB_10973e264;
          uVar16 = *(uint *)(pppppppuVar24 + 0x19);
          pppppppuVar9 = (ulong *******)(ulong)(uint)uStack_1f0;
          *(uint *)(pppppppuVar24 + 0x19) = uVar16 - 1;
          if ((int)uVar16 < 1) {
LAB_10973e264:
            param_1 = pppppppuVar24;
            FUN_109704924();
            uVar16 = (uint)uVar14;
            uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0);
            if (*(char *)(pppppppuVar24 + 0xb) != '\x01') goto LAB_10973ec5c;
            uVar15 = (ulong)*(uint *)((long)pppppppuVar24 + 0x5c);
            uVar28 = *(uint *)(pppppppuVar24 + 0xc);
            pppppppuVar9 = (ulong *******)(ulong)(uint)uStack_1f0;
          }
          goto LAB_10973ddc8;
        }
      }
    }
  }
  else if (bVar34 == 2) {
    unaff_x20 = (ulong *******)((long)param_1 + 0xc);
    ppppppuStack_1c0 = (ulong ******)((ulong)ppppppuStack_1c0 & 0xffffffffffffff00);
    uStack_218 = (long)unaff_x20 +
                 (ulong)*(byte *)((long)param_1 + 0x1f) +
                 (ulong)*(byte *)((long)param_1 + 0x1e) * 0x100 +
                 (ulong)*(byte *)((long)param_1 + 0x1c) * 0x1000000 +
                 (ulong)*(byte *)((long)param_1 + 0x1d) * 0x10000;
    lStack_1a0 = (long)unaff_x20 +
                 (ulong)*(byte *)((long)param_1 + 0x23) +
                 (ulong)*(byte *)((long)param_1 + 0x22) * 0x100 +
                 (ulong)*(byte *)(param_1 + 4) * 0x1000000 +
                 (ulong)*(byte *)((long)param_1 + 0x21) * 0x10000;
    pppppppuStack_208 =
         (ulong *******)
         ((long)unaff_x20 +
         (ulong)*(byte *)((long)param_1 + 0x27) +
         (ulong)*(byte *)((long)param_1 + 0x26) * 0x100 +
         (ulong)*(byte *)((long)param_1 + 0x24) * 0x1000000 +
         (ulong)*(byte *)((long)param_1 + 0x25) * 0x10000);
    uStack_190 = 0;
    ppppppuVar11 = param_2[3];
    ppppppuVar10 = (ulong ******)(ulong)*(uint *)(ppppppuVar11 + 3);
    pppppppuStack_1b8 = param_2;
    pppppppuStack_1b0 = unaff_x20;
    uStack_1a8 = uStack_218;
    pppppppuStack_198 = pppppppuStack_208;
    uStack_1f0 = lStack_1a0;
    if (*(uint *)(ppppppuVar11 + 3) == 0xffffffff) {
      FUN_109710978();
      ppppppuVar10 = ppppppuVar11;
    }
    unaff_x19 = 1;
    param_2 = (ulong *******)0x0;
    uVar16 = 1;
    param_1 = unaff_x20;
    func_0x00010973f9d4();
    if ((((ulong)*param_1 & 0x200000) != 0 ||
         (*(char *)((long)param_1 + 1) != '\0' || *(char *)param_1 != '\0')) ||
       (((((ulong)pppppppuStack_1d0[0x13] & (ulong)pppppppuStack_1d0[0x10]) != 0 &&
         (((ulong)pppppppuStack_1d0[0x14] & (ulong)pppppppuStack_1d0[0x11]) != 0)) &&
        (((ulong)pppppppuStack_1d0[0x15] & (ulong)pppppppuStack_1d0[0x12]) != 0)))) {
      pppppppuVar24 = (ulong *******)pppppppuStack_1d0[4];
      *(undefined2 *)((long)pppppppuVar24 + 0x5a) = 1;
      *(uint *)((long)pppppppuVar24 + 100) = 0;
      pppppppuVar24[0xf] = pppppppuVar24[0xe];
      ppppppuVar11 = pppppppuStack_1d0[0xf];
      if ((ppppppuVar11 == (ulong ******)0x0) || (*(uint *)((long)ppppppuVar11 + 4) < 2)) {
        pppppuVar33 = (ulong *****)0x0;
      }
      else {
        pppppuVar33 = ppppppuVar11[1];
      }
      *(uint *)((long)pppppppuVar24 + 0x5c) = 0;
      if (*(char *)(pppppppuVar24 + 0xb) == '\x01') {
        uVar14 = 0;
        uVar16 = 0;
        puStack_238 = (uint *)CONCAT44(puStack_238._4_4_,(int)ppppppuVar10);
        pppppppuStack_230 = unaff_x20;
        uVar23 = 0;
LAB_10973e7b4:
        unaff_x19 = 0x5c;
        uVar15 = (ulong)*(uint *)(pppppppuVar24 + 0xc);
        if (pppppuVar33 == (ulong *****)0x0) {
LAB_10973e814:
          if (uVar14 < uVar15) {
            iVar29 = *(int *)((long)pppppppuVar24[0xe] + uVar14 * 0x14);
            if (iVar29 == 0xffff) {
              uVar27 = 2;
            }
            else {
              pppppppuVar9 = pppppppuStack_1d0 + 0x13;
              FUN_10972a9e4(pppppppuVar9,iVar29);
              if ((int)pppppppuVar9 != 0) {
                puVar12 = (ushort *)
                          ((long)unaff_x20 +
                          (ulong)*(byte *)((long)pppppppuStack_1d8 + 0x13) +
                          (ulong)*(byte *)((long)pppppppuStack_1d8 + 0x12) * 0x100 +
                          (ulong)*(byte *)(pppppppuStack_1d8 + 2) * 0x1000000 +
                          (ulong)*(byte *)((long)pppppppuStack_1d8 + 0x11) * 0x10000);
                FUN_10973f414(puVar12,iVar29,ppppppuVar10);
                if (puVar12 != (ushort *)0x0) {
                  uVar27 = *puVar12 >> 8 | *puVar12 << 8;
                  goto LAB_10973e88c;
                }
              }
              uVar27 = 1;
            }
          }
          else {
            uVar27 = 0;
          }
LAB_10973e88c:
          pppppppuVar9 = unaff_x20;
          func_0x00010973f9d4(unaff_x20,uVar23,uVar27);
          uStack_1fc = (uint)(*(ushort *)pppppppuVar9 >> 8) |
                       (*(ushort *)pppppppuVar9 & 0xff00ff) << 8;
          bVar34 = *(byte *)((long)pppppppuVar9 + 2);
          uVar28 = (uint)bVar34;
          pppppppuStack_210 = pppppppuVar9;
          if ((bVar34 >> 5 & 1) == 0) {
            if ((uVar23 != 0) && (((bVar34 >> 6 & 1) == 0 || (uStack_1fc != 0)))) {
              pppppppuVar9 = unaff_x20;
              func_0x00010973f9d4(unaff_x20,0,uVar27);
              if (((*(byte *)((long)pppppppuVar9 + 2) >> 5 & 1) != 0) ||
                 ((uStack_1fc !=
                   ((uint)(*(ushort *)pppppppuVar9 >> 8) | (*(ushort *)pppppppuVar9 & 0xff00ff) << 8
                   ) || (((*(byte *)((long)pppppppuVar9 + 2) ^ bVar34) >> 6 & 1) != 0))))
              goto LAB_10973e924;
            }
            pppppppuVar13 = unaff_x20;
            func_0x00010973f9d4(unaff_x20,uVar23,0);
            pppppppuVar9 = pppppppuStack_210;
            if ((*(byte *)((long)pppppppuVar13 + 2) >> 5 & 1) != 0) goto LAB_10973e924;
joined_r0x00010973e974:
            if ((char)bVar34 < '\0') goto LAB_10973e994;
LAB_10973e980:
            if ((uVar28 >> 5 & 1) != 0) goto LAB_10973e9d8;
          }
          else {
LAB_10973e924:
            pppppppuVar9 = pppppppuStack_210;
            lVar1 = 100;
            if (*(char *)((long)pppppppuVar24 + 0x5a) == '\0') {
              lVar1 = 0x5c;
            }
            if (*(int *)((long)pppppppuVar24 + lVar1) == 0) goto joined_r0x00010973e974;
            if (*(uint *)((long)pppppppuVar24 + 0x5c) < *(uint *)(pppppppuVar24 + 0xc)) {
              FUN_109710ea8(pppppppuVar24,3,*(int *)((long)pppppppuVar24 + lVar1) + -1,
                            *(uint *)((long)pppppppuVar24 + 0x5c) + 1,1,1);
              bVar34 = *(byte *)((long)pppppppuVar9 + 2);
              uVar28 = (uint)bVar34;
              goto joined_r0x00010973e974;
            }
            if (-1 < (char)bVar34) goto LAB_10973e980;
LAB_10973e994:
            if (uVar16 == 0) {
              uVar28 = 0;
              uVar23 = *(uint *)((long)pppppppuVar24 + 100);
            }
            else {
              uVar23 = *(uint *)((long)pppppppuVar24 + 100);
              uVar28 = uVar16 - (auStack_18c[uVar16 - 1 & 0x3f] == uVar23);
            }
            uVar16 = uVar28 + 1;
            uStack_190 = uVar16;
            auStack_18c[uVar28 & 0x3f] = uVar23;
            if ((*(byte *)((long)pppppppuVar9 + 2) >> 5 & 1) != 0) {
LAB_10973e9d8:
              if ((uVar16 != 0) &&
                 (*(uint *)((long)pppppppuVar24 + 0x5c) < *(uint *)(pppppppuVar24 + 0xc))) {
                uVar23 = 0;
                pppppppuStack_220 =
                     (ulong *******)
                     CONCAT44(pppppppuStack_220._4_4_,*(uint *)((long)pppppppuVar24 + 100));
                pbVar20 = (byte *)(uStack_218 +
                                  ((ulong)*(byte *)((long)pppppppuVar9 + 5) << 2 |
                                  (ulong)*(byte *)((long)pppppppuVar9 + 4) << 10));
                uVar28 = uVar16;
                do {
                  if (uVar28 == 0) {
                    uVar16 = 0;
                    break;
                  }
                  uVar28 = uVar28 - 1;
                  uVar25 = auStack_18c[uVar28 & 0x3f];
                  pppppppuVar9 = pppppppuVar24;
                  func_0x0001096f6478(pppppppuVar24,uVar25);
                  uVar22 = uVar16;
                  if ((int)pppppppuVar9 == 0) goto LAB_10973ebc8;
                  if ((ulong)*(uint *)(pppppppuStack_1d0 + 8) <
                      (ulong)((long)(pbVar20 + 4) - (long)pppppppuStack_1d0[6])) break;
                  bVar34 = *pbVar20;
                  puVar12 = (ushort *)
                            (uStack_1f0 +
                            (ulong)(((uint)bVar34 << 0x18 & 0x3f000000 | (uint)pbVar20[1] << 0x10 |
                                     -(bVar34 >> 5 & 1) & 0xc0000000 |
                                    (uint)(*(ushort *)(pbVar20 + 2) >> 8) |
                                    (*(ushort *)(pbVar20 + 2) & 0xff00ff) << 8) +
                                   *(int *)((long)pppppppuVar24[0xe] +
                                           (ulong)*(uint *)((long)pppppppuVar24 + 0x5c) * 0x14)) * 2
                            );
                  if ((ulong)*(uint *)(pppppppuStack_1d0 + 8) <
                      (ulong)((long)puVar12 + (2 - (long)pppppppuStack_1d0[6]))) break;
                  uVar27 = *puVar12;
                  uVar23 = uVar23 + ((uint)(uVar27 >> 8) | (uVar27 & 0xff00ff) << 8);
                  if (0x3f < bVar34) {
                    puVar12 = (ushort *)((long)pppppppuStack_208 + (ulong)uVar23 * 2);
                    if ((ulong)*(uint *)(pppppppuStack_1d0 + 8) <
                        (ulong)((long)puVar12 + (2 - (long)pppppppuStack_1d0[6]))) break;
                    uVar27 = *puVar12;
                    uStack_1c4 = (uint)(uVar27 >> 8) | (uVar27 & 0xff00ff) << 8;
                    pppppppuVar9 = pppppppuVar24;
                    FUN_109730ba4(pppppppuVar24,1,1,&uStack_1c4);
                    if ((int)pppppppuVar9 == 0) goto LAB_10973ebc8;
                    pppppppuStack_1f8 = (ulong *******)CONCAT44(pppppppuStack_1f8._4_4_,uVar23);
                    uVar23 = auStack_18c[uVar16 - 1 & 0x3f];
                    while (uVar16 = uVar22 - 1, uVar28 < uVar16) {
                      pppppppuVar9 = pppppppuVar24;
                      func_0x0001096f6478(pppppppuVar24,auStack_18c[uVar16 & 0x3f]);
                      uVar22 = uVar16;
                      if ((int)pppppppuVar9 == 0) goto LAB_10973ebc8;
                      *(ushort *)
                       ((long)pppppppuVar24[0xe] +
                       (ulong)*(uint *)((long)pppppppuVar24 + 0x5c) * 0x14 + 0x10) =
                           *(ushort *)
                            ((long)pppppppuVar24[0xe] +
                            (ulong)*(uint *)((long)pppppppuVar24 + 0x5c) * 0x14 + 0x10) | 0x20;
                      uStack_1c4 = 0xffff;
                      pppppppuVar9 = pppppppuVar24;
                      FUN_109730ba4(pppppppuVar24,1,1,&uStack_1c4);
                      if (((ulong)pppppppuVar9 & 1) == 0) goto LAB_10973ebc8;
                    }
                    pppppppuVar9 = pppppppuVar24;
                    func_0x0001096f6478(pppppppuVar24,uVar23 + 1);
                    uVar16 = uVar22;
                    if ((int)pppppppuVar9 == 0) goto LAB_10973ebc8;
                    func_0x0001096f67a8(pppppppuVar24,uVar25,*(uint *)((long)pppppppuVar24 + 100));
                    uVar23 = (uint)pppppppuStack_1f8;
                  }
                  pbVar20 = pbVar20 + 4;
                } while (-1 < (int)((uint)bVar34 << 0x18));
                uStack_190 = uVar16;
                func_0x0001096f6478(pppppppuVar24,(ulong)pppppppuStack_220 & 0xffffffff);
                uVar22 = uStack_190;
LAB_10973ebc8:
                uStack_190 = uVar22;
                ppppppuVar10 = (ulong ******)((ulong)puStack_238 & 0xffffffff);
                unaff_x20 = pppppppuStack_230;
                pppppppuVar9 = pppppppuStack_210;
              }
            }
          }
          unaff_x19 = 0x5c;
          uVar14 = (ulong)*(uint *)((long)pppppppuVar24 + 0x5c);
          if ((uVar14 != *(uint *)(pppppppuVar24 + 0xc)) &&
             (*(char *)(pppppppuVar24 + 0xb) == '\x01')) goto code_r0x00010973ebf0;
        }
        else {
          if (uVar14 < uVar15) {
            uVar28 = *(uint *)((long)pppppppuVar24[0xe] + uVar14 * 0x14 + 8);
            puVar32 = (uint *)((long)pppppuVar33 + 0xc);
            do {
              pppppuVar33 = (ulong *****)((long)pppppuVar33 + -0xc);
              puVar18 = puVar32 + -2;
              puVar32 = puVar32 + -3;
            } while (uVar28 < *puVar18);
            do {
              puVar32 = (uint *)((long)pppppuVar33 + 0x14);
              pppppuVar33 = (ulong *****)((long)pppppuVar33 + 0xc);
            } while (*puVar32 < uVar28);
          }
          if ((*(uint *)(pppppppuStack_1d0 + 0x1c) & *(uint *)pppppuVar33) != 0) goto LAB_10973e814;
          if (uVar14 != uVar15) {
            uStack_1fc = 0;
            goto LAB_10973ec0c;
          }
        }
      }
LAB_10973ec54:
      unaff_x30 = 0x10973ec5c;
      register0x00000008 = (BADSPACEBASE *)auStack_240;
      unaff_x29 = puVar19;
      goto FUN_1096f6314;
    }
  }
  else if (bVar34 == 4) {
    pppppppuVar24 = (ulong *******)param_2[0xe];
    if ((ushort)(*(ushort *)pppppppuVar24 >> 8 | *(ushort *)pppppppuVar24 << 8) == 1) {
      bVar8 = *(char *)((long)pppppppuVar24 + 5) != '\0' ||
              *(char *)((long)pppppppuVar24 + 4) != '\0';
    }
    else {
      bVar8 = false;
    }
    param_1 = (ulong *******)param_2[3];
    pppppppuVar9 = (ulong *******)(ulong)*(uint *)(param_1 + 3);
    if (*(uint *)(param_1 + 3) == 0xffffffff) {
      FUN_109710978();
      pppppppuVar9 = param_1;
    }
    uVar16 = (uint)param_3;
    uVar23 = *(uint *)(pppppppuStack_1d0[4] + 0xc);
    ppppppuVar10 = pppppppuStack_1d0[0xf];
    if ((ppppppuVar10 == (ulong ******)0x0) || (*(uint *)((long)ppppppuVar10 + 4) < 2)) {
      pppppuVar33 = (ulong *****)0x0;
    }
    else {
      pppppuVar33 = ppppppuVar10[1];
    }
    param_2 = pppppppuStack_1d0;
    uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0);
    if (uVar23 != 0) {
      uVar14 = 0;
      pppppuVar26 = pppppppuStack_1d0[4][0xe];
      uStack_1e8 = 1;
      uStack_1f0._0_4_ = 1;
      uStack_1f0._4_4_ = 0;
      param_2 = pppppppuStack_1d0;
      do {
        if (pppppuVar33 == (ulong *****)0x0) {
LAB_10973dbe8:
          puVar32 = (uint *)((long)pppppuVar26 + uVar14 * 0x14);
          param_1 = (ulong *******)((long)pppppppuStack_1d8 + 0xc);
          param_3 = pppppppuVar9;
          FUN_10973f6ec(param_1,*puVar32);
          param_2 = pppppppuStack_1d0;
          if (param_1 != (ulong *******)0x0) {
            *puVar32 = (uint)(*(ushort *)param_1 >> 8) | (*(ushort *)param_1 & 0xff00ff) << 8;
            bVar34 = *(byte *)param_1;
            uVar15 = (ulong)CONCAT14(*(undefined1 *)((long)param_1 + 1),
                                     (uint)(ushort)(CONCAT11(bVar34,*(undefined1 *)
                                                                     ((long)param_1 + 1)) >> 4));
            auVar35._0_8_ = uVar15 & 0x3f;
            auVar35._8_8_ = (uVar15 & 0x3f0000003f) >> 0x20;
            auVar7._4_4_ = uStack_1f0._4_4_;
            auVar7._0_4_ = (uint)uStack_1f0;
            auVar7._8_8_ = uStack_1e8;
            auVar36 = NEON_ushl(auVar7,auVar35,8);
            auVar54 = *(undefined1 (*) [16])(pppppppuStack_1d0 + 0x10);
            *(byte *)(pppppppuStack_1d0 + 0x11) = auVar36[8] | auVar54[8];
            *(byte *)((long)pppppppuStack_1d0 + 0x89) = auVar36[9] | auVar54[9];
            *(byte *)((long)pppppppuStack_1d0 + 0x8a) = auVar36[10] | auVar54[10];
            *(byte *)((long)pppppppuStack_1d0 + 0x8b) = auVar36[0xb] | auVar54[0xb];
            *(byte *)((long)pppppppuStack_1d0 + 0x8c) = auVar36[0xc] | auVar54[0xc];
            *(byte *)((long)pppppppuStack_1d0 + 0x8d) = auVar36[0xd] | auVar54[0xd];
            *(byte *)((long)pppppppuStack_1d0 + 0x8e) = auVar36[0xe] | auVar54[0xe];
            *(byte *)((long)pppppppuStack_1d0 + 0x8f) = auVar36[0xf] | auVar54[0xf];
            *(byte *)(pppppppuStack_1d0 + 0x10) = auVar36[0] | auVar54[0];
            *(byte *)((long)pppppppuStack_1d0 + 0x81) = auVar36[1] | auVar54[1];
            *(byte *)((long)pppppppuStack_1d0 + 0x82) = auVar36[2] | auVar54[2];
            *(byte *)((long)pppppppuStack_1d0 + 0x83) = auVar36[3] | auVar54[3];
            *(byte *)((long)pppppppuStack_1d0 + 0x84) = auVar36[4] | auVar54[4];
            *(byte *)((long)pppppppuStack_1d0 + 0x85) = auVar36[5] | auVar54[5];
            *(byte *)((long)pppppppuStack_1d0 + 0x86) = auVar36[6] | auVar54[6];
            *(byte *)((long)pppppppuStack_1d0 + 0x87) = auVar36[7] | auVar54[7];
            pppppppuStack_1d0[0x12] =
                 (ulong ******)
                 ((ulong)pppppppuStack_1d0[0x12] | 1L << ((ulong)(bVar34 >> 1) & 0x3f));
            if (bVar8) {
              uVar27 = *(ushort *)param_1;
              param_1 = pppppppuVar24;
              FUN_10972bfb4(pppppppuVar24,uVar27 >> 8 | uVar27 << 8);
              *(short *)(puVar32 + 3) = (short)param_1;
              param_2 = pppppppuStack_1d0;
            }
          }
        }
        else {
          uVar16 = *(uint *)((long)pppppuVar26 + uVar14 * 0x14 + 8);
          puVar32 = (uint *)((long)pppppuVar33 + 0xc);
          do {
            pppppuVar33 = (ulong *****)((long)pppppuVar33 + -0xc);
            puVar18 = puVar32 + -2;
            puVar32 = puVar32 + -3;
          } while (uVar16 < *puVar18);
          do {
            puVar32 = (uint *)((long)pppppuVar33 + 0x14);
            pppppuVar33 = (ulong *****)((long)pppppuVar33 + 0xc);
          } while (*puVar32 < uVar16);
          if ((*(uint *)(param_2 + 0x1c) & *(uint *)pppppuVar33) != 0) goto LAB_10973dbe8;
        }
        uVar16 = (uint)param_3;
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar23);
    }
  }
  else {
    uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0);
    if (bVar34 == 5) {
      pppppppuVar9 = (ulong *******)((long)param_1 + 0xc);
      bVar34 = *(byte *)((long)param_1 + 0x1c);
      bVar38 = *(byte *)((long)param_1 + 0x1d);
      bVar39 = *(byte *)((long)param_1 + 0x1e);
      bVar40 = *(byte *)((long)param_1 + 0x1f);
      ppppppuVar10 = param_2[3];
      pppppppuStack_220 =
           (ulong *******)CONCAT44(pppppppuStack_220._4_4_,*(int *)(ppppppuVar10 + 3));
      if (*(int *)(ppppppuVar10 + 3) == -1) {
        FUN_109710978();
        pppppppuStack_220 = (ulong *******)CONCAT44(pppppppuStack_220._4_4_,(int)ppppppuVar10);
      }
      param_2 = (ulong *******)0x0;
      uVar14 = 1;
      param_1 = pppppppuVar9;
      func_0x00010973fa4c();
      iVar29 = (int)param_2;
      uVar16 = (uint)uVar14;
      ppppppuVar10 = *param_1;
      if (((ulong)ppppppuVar10 & 0x30000) == 0 && (uint)ppppppuVar10 >> 0x18 == 0) {
        if (((ulong)ppppppuVar10 & 0xffff) == 0) goto LAB_10973ecd8;
      }
      else {
        uVar23 = (uint)((ulong)ppppppuVar10 >> 0x20);
        if (((((uint)((ulong)ppppppuVar10 >> 0x18) & 0xff00 | uVar23 >> 8 & 0xff) == 0xffff) &&
            (((ulong)ppppppuVar10 & 0xffff) == 0)) &&
           ((uVar23 >> 8 & 0xff00 | (uint)(byte)((ulong)ppppppuVar10 >> 0x38)) == 0xffff)) {
LAB_10973ecd8:
          uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0);
          if (((((ulong)pppppppuStack_1d0[0x13] & (ulong)pppppppuStack_1d0[0x10]) == 0) ||
              (uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0),
              ((ulong)pppppppuStack_1d0[0x14] & (ulong)pppppppuStack_1d0[0x11]) == 0)) ||
             (uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0),
             ((ulong)pppppppuStack_1d0[0x15] & (ulong)pppppppuStack_1d0[0x12]) == 0))
          goto LAB_10973ec5c;
        }
      }
      pppppppuVar24 = (ulong *******)pppppppuStack_1d0[4];
      *(undefined2 *)((long)pppppppuVar24 + 0x5a) = 1;
      *(uint *)((long)pppppppuVar24 + 100) = 0;
      pppppppuVar24[0xf] = pppppppuVar24[0xe];
      ppppppuVar10 = pppppppuStack_1d0[0xf];
      if ((ppppppuVar10 == (ulong ******)0x0) || (*(uint *)((long)ppppppuVar10 + 4) < 2)) {
        pppppuVar33 = (ulong *****)0x0;
      }
      else {
        pppppuVar33 = ppppppuVar10[1];
      }
      *(uint *)((long)pppppppuVar24 + 0x5c) = 0;
      if (*(char *)(pppppppuVar24 + 0xb) == '\x01') {
        uVar15 = 0;
        uStack_1f0._0_4_ = 0;
        pppppppuStack_210 =
             (ulong *******)
             ((long)pppppppuVar9 +
             (ulong)bVar40 +
             (ulong)bVar39 * 0x100 + (ulong)bVar34 * 0x1000000 + (ulong)bVar38 * 0x10000);
        pppppppuStack_230 =
             (ulong *******)
             ((long)pppppppuStack_1d8 +
             (ulong)bVar34 * 0x1000000 + (ulong)bVar38 * 0x10000 +
             (ulong)bVar39 * 0x100 + (ulong)bVar40 + 0xd);
        pppppppuVar13 = (ulong *******)0x0;
        pppppppuStack_208 = pppppppuVar9;
LAB_10973eda4:
        iVar29 = (int)param_2;
        uVar16 = (uint)uVar14;
        uVar17 = (ulong)*(uint *)(pppppppuVar24 + 0xc);
        if (pppppuVar33 == (ulong *****)0x0) {
LAB_10973ee04:
          if (uVar15 < uVar17) {
            iVar29 = *(int *)((long)pppppppuVar24[0xe] + uVar15 * 0x14);
            if (iVar29 == 0xffff) {
              uVar15 = 2;
            }
            else {
              pppppppuVar30 = pppppppuStack_1d0 + 0x13;
              FUN_10972a9e4(pppppppuVar30,iVar29);
              if ((int)pppppppuVar30 != 0) {
                puVar12 = (ushort *)
                          ((long)pppppppuVar9 +
                          (ulong)*(byte *)((long)pppppppuStack_1d8 + 0x13) +
                          (ulong)*(byte *)((long)pppppppuStack_1d8 + 0x12) * 0x100 +
                          (ulong)*(byte *)(pppppppuStack_1d8 + 2) * 0x1000000 +
                          (ulong)*(byte *)((long)pppppppuStack_1d8 + 0x11) * 0x10000);
                FUN_10973f414(puVar12,iVar29,(ulong)pppppppuStack_220 & 0xffffffff);
                if (puVar12 != (ushort *)0x0) {
                  uVar15 = (ulong)((uint)(*puVar12 >> 8) | (*puVar12 & 0xff00ff) << 8);
                  goto LAB_10973ee78;
                }
              }
              uVar15 = 1;
            }
          }
          else {
            uVar15 = 0;
          }
LAB_10973ee78:
          pppppppuVar30 = pppppppuVar13;
          uVar14 = uVar15;
          func_0x00010973fa4c();
          uVar16 = (uint)(*(ushort *)pppppppuVar9 >> 8) | (*(ushort *)pppppppuVar9 & 0xff00ff) << 8;
          bVar34 = *(byte *)((long)pppppppuVar9 + 2);
          uVar23 = (uint)bVar34;
          uStack_1fc = (uint)bVar34 << 8;
          pppppppuStack_1f8 = (ulong *******)CONCAT44(pppppppuStack_1f8._4_4_,uVar16);
          uVar28 = (uint)*(byte *)((long)pppppppuVar9 + 3);
          if ((*(byte *)((long)pppppppuVar9 + 3) == 0 && (bVar34 & 3) == 0) ||
             ((param_1 = pppppppuVar9,
              (ushort)(*(ushort *)((long)pppppppuVar9 + 4) >> 8 |
                      *(ushort *)((long)pppppppuVar9 + 4) << 8) == 0xffff &&
              ((ushort)(*(ushort *)((long)pppppppuVar9 + 6) >> 8 |
                       *(ushort *)((long)pppppppuVar9 + 6) << 8) == 0xffff)))) {
            if (((int)pppppppuVar13 != 0) && (((bVar34 >> 6 & 1) == 0 || (uVar16 != 0)))) {
              pppppppuVar30 = (ulong *******)0x0;
              param_1 = pppppppuStack_208;
              func_0x00010973fa4c();
              uVar14 = uVar15;
              if ((((*(char *)((long)param_1 + 3) != '\0' || (*(byte *)((long)param_1 + 2) & 3) != 0
                    ) && (((ushort)(*(ushort *)((long)param_1 + 4) >> 8 |
                                   *(ushort *)((long)param_1 + 4) << 8) != 0xffff ||
                          ((ushort)(*(ushort *)((long)param_1 + 6) >> 8 |
                                   *(ushort *)((long)param_1 + 6) << 8) != 0xffff)))) ||
                  (uVar16 != ((uint)(*(ushort *)param_1 >> 8) | (*(ushort *)param_1 & 0xff00ff) << 8
                             ))) || (((*(byte *)((long)param_1 + 2) ^ bVar34) >> 6 & 1) != 0))
              goto LAB_10973ef88;
            }
            uVar14 = 0;
            param_1 = pppppppuStack_208;
            func_0x00010973fa4c();
            if ((*(char *)((long)param_1 + 3) != '\0' || ((ulong)*param_1 & 0x30000) != 0) &&
               ((pppppppuVar30 = pppppppuVar13,
                (ushort)(*(ushort *)((long)param_1 + 4) >> 8 | *(ushort *)((long)param_1 + 4) << 8)
                != 0xffff ||
                ((ushort)(*(ushort *)((long)param_1 + 6) >> 8 | *(ushort *)((long)param_1 + 6) << 8)
                 != 0xffff)))) goto LAB_10973ef88;
          }
          else {
LAB_10973ef88:
            pppppppuVar13 = pppppppuVar30;
            lVar1 = 100;
            if (*(char *)((long)pppppppuVar24 + 0x5a) == '\0') {
              lVar1 = 0x5c;
            }
            if ((*(int *)((long)pppppppuVar24 + lVar1) != 0) &&
               (*(uint *)((long)pppppppuVar24 + 0x5c) < *(uint *)(pppppppuVar24 + 0xc))) {
              uVar14 = (ulong)(*(int *)((long)pppppppuVar24 + lVar1) - 1);
              pppppppuVar13 = (ulong *******)0x3;
              param_1 = pppppppuVar24;
              FUN_109710ea8();
              uVar23 = (uint)*(byte *)((long)pppppppuVar9 + 2);
              uVar28 = (uint)*(byte *)((long)pppppppuVar9 + 3);
              uStack_1fc = (uint)*(byte *)((long)pppppppuVar9 + 2) << 8;
            }
          }
          uVar16 = *(uint *)((long)pppppppuVar24 + 100);
          if ((ushort)(*(ushort *)((long)pppppppuVar9 + 6) >> 8 |
                      *(ushort *)((long)pppppppuVar9 + 6) << 8) == 0xffff) {
LAB_10973f178:
            pppppppuVar30 = pppppppuStack_208;
            if (-1 < (char)uVar23) {
              uVar16 = (uint)uStack_1f0;
            }
            uStack_1f0._0_4_ = uVar16;
            if ((ushort)(*(ushort *)((long)pppppppuVar9 + 4) >> 8 |
                        *(ushort *)((long)pppppppuVar9 + 4) << 8) == 0xffff) goto LAB_10973f1a0;
            pppppppuVar21 = (ulong *******)((ulong)pppppppuStack_1f8 & 0xffffffff);
            uVar28 = (uStack_1fc | uVar28) >> 5 & 0x1f;
            pppppppuVar31 = (ulong *******)(ulong)uVar28;
            uVar16 = *(uint *)(pppppppuVar24 + 0x19);
            *(uint *)(pppppppuVar24 + 0x19) = uVar16 - uVar28;
            if (0 < (int)(uVar16 - uVar28)) {
              uVar15 = (long)pppppppuStack_210 +
                       ((ulong)*(byte *)((long)pppppppuVar9 + 5) << 1 |
                       (ulong)*(byte *)((long)pppppppuVar9 + 4) << 9);
              if ((((ulong)*(uint *)(pppppppuStack_1d0 + 8) < uVar15 - (long)pppppppuStack_1d0[6])
                  || (*(uint *)(pppppppuStack_1d0 + 7) - (int)uVar15 < uVar28 * 2)) ||
                 (uVar16 = *(uint *)((long)pppppppuStack_1d0 + 0x44) + uVar28 * -2,
                 *(uint *)((long)pppppppuStack_1d0 + 0x44) = uVar16, (int)uVar16 < 1)) {
                pppppppuVar31 = (ulong *******)0x0;
              }
              uVar16 = *(uint *)((long)pppppppuVar24 + 100);
              if ((((*(uint *)(pppppppuVar24 + 0xc) <= *(uint *)((long)pppppppuVar24 + 0x5c)) ||
                   ((uVar23 >> 3 & 1) != 0)) ||
                  (param_1 = pppppppuVar24, FUN_10973fabc(), (int)param_1 != 0)) &&
                 (param_1 = pppppppuVar24, pppppppuVar13 = pppppppuVar31, FUN_10973fb3c(),
                 uVar14 = uVar15, (int)param_1 != 0)) {
                if ((*(uint *)((long)pppppppuVar24 + 0x5c) < *(uint *)(pppppppuVar24 + 0xc)) &&
                   ((uVar23 >> 3 & 1) == 0)) {
                  *(uint *)((long)pppppppuVar24 + 0x5c) = *(uint *)((long)pppppppuVar24 + 0x5c) + 1;
                }
                iVar29 = (int)pppppppuVar31;
                if ((uVar23 & 0x40) != 0) {
                  iVar29 = 0;
                }
                pppppppuVar13 = (ulong *******)(ulong)(uVar16 + iVar29);
                param_1 = pppppppuVar24;
                func_0x0001096f6478();
                uVar14 = uVar15;
              }
            }
          }
          else {
            uVar25 = uVar28 & 0x1f;
            pppppppuVar30 = (ulong *******)(ulong)uVar25;
            uVar22 = *(uint *)(pppppppuVar24 + 0x19);
            *(uint *)(pppppppuVar24 + 0x19) = uVar22 - uVar25;
            if (0 < (int)(uVar22 - uVar25)) {
              uVar17 = (ulong)*(byte *)((long)pppppppuVar9 + 7) << 1 |
                       (ulong)*(byte *)((long)pppppppuVar9 + 6) << 9;
              uVar15 = (long)pppppppuStack_210 + uVar17;
              if ((((ulong)*(uint *)(pppppppuStack_1d0 + 8) < uVar15 - (long)pppppppuStack_1d0[6])
                  || (*(uint *)(pppppppuStack_1d0 + 7) - (int)uVar15 < uVar25 * 2)) ||
                 (uVar25 = *(uint *)((long)pppppppuStack_1d0 + 0x44) + uVar25 * -2,
                 *(uint *)((long)pppppppuStack_1d0 + 0x44) = uVar25, (int)uVar25 < 1)) {
                pppppppuVar30 = (ulong *******)0x0;
              }
              uStack_218 = CONCAT44(uStack_218._4_4_,*(uint *)((long)pppppppuVar24 + 100));
              pppppppuVar13 = (ulong *******)(ulong)(uint)uStack_1f0;
              param_1 = pppppppuVar24;
              func_0x0001096f6478();
              if (((int)param_1 != 0) &&
                 ((((*(uint *)(pppppppuVar24 + 0xc) <= *(uint *)((long)pppppppuVar24 + 0x5c) ||
                    ((uVar23 >> 2 & 1) != 0)) ||
                   (param_1 = pppppppuVar24, FUN_10973fabc(), (int)param_1 != 0)) &&
                  (param_1 = pppppppuVar24, pppppppuVar13 = pppppppuVar30, FUN_10973fb3c(),
                  uVar14 = uVar15, (int)param_1 != 0)))) {
                iVar29 = (int)pppppppuVar30;
                if (iVar29 != 0) {
                  bVar34 = *(byte *)(pppppppuStack_1d0 + 0x10);
                  bVar38 = *(byte *)((long)pppppppuStack_1d0 + 0x81);
                  bVar39 = *(byte *)((long)pppppppuStack_1d0 + 0x82);
                  bVar40 = *(byte *)((long)pppppppuStack_1d0 + 0x83);
                  bVar41 = *(byte *)((long)pppppppuStack_1d0 + 0x84);
                  bVar42 = *(byte *)((long)pppppppuStack_1d0 + 0x85);
                  bVar43 = *(byte *)((long)pppppppuStack_1d0 + 0x86);
                  bVar44 = *(byte *)((long)pppppppuStack_1d0 + 0x87);
                  bVar45 = *(byte *)(pppppppuStack_1d0 + 0x11);
                  bVar46 = *(byte *)((long)pppppppuStack_1d0 + 0x89);
                  bVar47 = *(byte *)((long)pppppppuStack_1d0 + 0x8a);
                  bVar48 = *(byte *)((long)pppppppuStack_1d0 + 0x8b);
                  bVar49 = *(byte *)((long)pppppppuStack_1d0 + 0x8c);
                  bVar50 = *(byte *)((long)pppppppuStack_1d0 + 0x8d);
                  bVar51 = *(byte *)((long)pppppppuStack_1d0 + 0x8e);
                  bVar52 = *(byte *)((long)pppppppuStack_1d0 + 0x8f);
                  ppppppuVar10 = pppppppuStack_1d0[0x12];
                  puVar19 = (undefined1 *)((long)pppppppuStack_230 + uVar17);
                  do {
                    bVar3 = puVar19[-1];
                    uVar14 = (ulong)CONCAT14(*puVar19,(uint)(ushort)(CONCAT11(bVar3,*puVar19) >> 4))
                    ;
                    auVar53._0_8_ = uVar14 & 0x3f;
                    auVar53._8_8_ = (uVar14 & 0x3f0000003f) >> 0x20;
                    auVar4._8_8_ = 1;
                    auVar4._0_8_ = 1;
                    auVar54 = NEON_ushl(auVar4,auVar53,8);
                    bVar34 = auVar54[0] | bVar34;
                    bVar38 = auVar54[1] | bVar38;
                    bVar39 = auVar54[2] | bVar39;
                    bVar40 = auVar54[3] | bVar40;
                    bVar41 = auVar54[4] | bVar41;
                    bVar42 = auVar54[5] | bVar42;
                    bVar43 = auVar54[6] | bVar43;
                    bVar44 = auVar54[7] | bVar44;
                    bVar45 = auVar54[8] | bVar45;
                    bVar46 = auVar54[9] | bVar46;
                    bVar47 = auVar54[10] | bVar47;
                    bVar48 = auVar54[0xb] | bVar48;
                    bVar49 = auVar54[0xc] | bVar49;
                    bVar50 = auVar54[0xd] | bVar50;
                    bVar51 = auVar54[0xe] | bVar51;
                    bVar52 = auVar54[0xf] | bVar52;
                    *(byte *)(pppppppuStack_1d0 + 0x11) = bVar45;
                    *(byte *)((long)pppppppuStack_1d0 + 0x89) = bVar46;
                    *(byte *)((long)pppppppuStack_1d0 + 0x8a) = bVar47;
                    *(byte *)((long)pppppppuStack_1d0 + 0x8b) = bVar48;
                    *(byte *)((long)pppppppuStack_1d0 + 0x8c) = bVar49;
                    *(byte *)((long)pppppppuStack_1d0 + 0x8d) = bVar50;
                    *(byte *)((long)pppppppuStack_1d0 + 0x8e) = bVar51;
                    *(byte *)((long)pppppppuStack_1d0 + 0x8f) = bVar52;
                    *(byte *)(pppppppuStack_1d0 + 0x10) = bVar34;
                    *(byte *)((long)pppppppuStack_1d0 + 0x81) = bVar38;
                    *(byte *)((long)pppppppuStack_1d0 + 0x82) = bVar39;
                    *(byte *)((long)pppppppuStack_1d0 + 0x83) = bVar40;
                    *(byte *)((long)pppppppuStack_1d0 + 0x84) = bVar41;
                    *(byte *)((long)pppppppuStack_1d0 + 0x85) = bVar42;
                    *(byte *)((long)pppppppuStack_1d0 + 0x86) = bVar43;
                    *(byte *)((long)pppppppuStack_1d0 + 0x87) = bVar44;
                    ppppppuVar10 = (ulong ******)
                                   (1L << ((ulong)(bVar3 >> 1) & 0x3f) | (ulong)ppppppuVar10);
                    pppppppuStack_1d0[0x12] = ppppppuVar10;
                    pppppppuVar30 = (ulong *******)((long)pppppppuVar30 - 1);
                    puVar19 = puVar19 + 2;
                  } while (pppppppuVar30 != (ulong *******)0x0);
                }
                if (*(uint *)((long)pppppppuVar24 + 0x5c) < *(uint *)(pppppppuVar24 + 0xc) &&
                    (uVar23 & 4) == 0) {
                  *(uint *)((long)pppppppuVar24 + 0x5c) = *(uint *)((long)pppppppuVar24 + 0x5c) + 1;
                }
                pppppppuVar13 = (ulong *******)(ulong)(uint)((int)uStack_218 + iVar29);
                param_1 = pppppppuVar24;
                func_0x0001096f6478();
                uVar14 = uVar15;
                if ((int)param_1 != 0) {
                  pppppppuVar13 = (ulong *******)0x3;
                  uVar14 = (ulong)(uint)uStack_1f0;
                  param_1 = pppppppuVar24;
                  FUN_109710ea8();
                  goto LAB_10973f178;
                }
              }
            }
LAB_10973f1a0:
            pppppppuVar21 = (ulong *******)((ulong)pppppppuStack_1f8 & 0xffffffff);
            pppppppuVar30 = pppppppuStack_208;
          }
          iVar29 = (int)pppppppuVar13;
          uVar16 = (uint)uVar14;
          uVar15 = (ulong)*(uint *)((long)pppppppuVar24 + 0x5c);
          if ((uVar15 != *(uint *)(pppppppuVar24 + 0xc)) &&
             (*(char *)(pppppppuVar24 + 0xb) == '\x01')) goto code_r0x00010973f29c;
        }
        else {
          if (uVar15 < uVar17) {
            uVar23 = *(uint *)((long)pppppppuVar24[0xe] + uVar15 * 0x14 + 8);
            puVar32 = (uint *)((long)pppppuVar33 + 0xc);
            do {
              pppppuVar33 = (ulong *****)((long)pppppuVar33 + -0xc);
              puVar18 = puVar32 + -2;
              puVar32 = puVar32 + -3;
            } while (uVar23 < *puVar18);
            do {
              puVar32 = (uint *)((long)pppppuVar33 + 0x14);
              pppppuVar33 = (ulong *****)((long)pppppuVar33 + 0xc);
            } while (*puVar32 < uVar23);
          }
          if ((*(uint *)(pppppppuStack_1d0 + 0x1c) & *(uint *)pppppuVar33) != 0) goto LAB_10973ee04;
          if (uVar15 != uVar17) {
            pppppppuVar21 = (ulong *******)0x0;
            goto LAB_10973f2b8;
          }
        }
      }
LAB_10973f31c:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
FUN_1096f6314:
        *(ulong ********)((long)register0x00000008 + -0x20) = unaff_x20;
        *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        if (*(char *)(pppppppuVar24 + 0xb) == '\x01') {
          pppppppuVar9 = pppppppuVar24;
          func_0x0001096f638c(pppppppuVar24,
                              *(uint *)(pppppppuVar24 + 0xc) - *(uint *)((long)pppppppuVar24 + 0x5c)
                             );
          if ((int)pppppppuVar9 != 0) {
            if (pppppppuVar24[0xf] != pppppppuVar24[0xe]) {
              pppppppuVar24[0x10] = pppppppuVar24[0xe];
              pppppppuVar24[0xe] = pppppppuVar24[0xf];
            }
            *(uint *)(pppppppuVar24 + 0xc) = *(uint *)((long)pppppppuVar24 + 100);
            pppppppuVar9 = (ulong *******)0x1;
          }
        }
        else {
          pppppppuVar9 = (ulong *******)0x0;
        }
        *(undefined1 *)((long)pppppppuVar24 + 0x5a) = 0;
        *(uint *)((long)pppppppuVar24 + 100) = 0;
        pppppppuVar24[0xf] = pppppppuVar24[0xe];
        *(uint *)((long)pppppppuVar24 + 0x5c) = 0;
        return pppppppuVar9;
      }
      goto LAB_10973f3a0;
    }
  }
LAB_10973ec5c:
  iVar29 = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return param_1;
  }
LAB_10973f3a0:
  ___stack_chk_fail();
  uVar23 = (*(uint *)param_1 & 0xff00ff00) >> 8 | (*(uint *)param_1 & 0xff00ff) << 8;
  uVar23 = uVar23 >> 0x10 | uVar23 << 0x10;
  if (uVar23 <= uVar16) {
    uVar16 = 1;
  }
  pbVar20 = (byte *)((long)param_1 +
                    (ulong)(uVar16 + uVar23 * iVar29) * 2 +
                    (ulong)*(byte *)((long)param_1 + 0xb) +
                    (ulong)*(byte *)((long)param_1 + 10) * 0x100 +
                    (ulong)*(byte *)(param_1 + 1) * 0x1000000 +
                    (ulong)*(byte *)((long)param_1 + 9) * 0x10000);
  return (ulong *******)
         ((long)param_1 +
         (ulong)pbVar20[1] * 4 +
         (ulong)*pbVar20 * 0x400 +
         (ulong)*(byte *)((long)param_1 + 0xf) +
         (ulong)*(byte *)((long)param_1 + 0xe) * 0x100 +
         (ulong)*(byte *)((long)param_1 + 0xc) * 0x1000000 +
         (ulong)*(byte *)((long)param_1 + 0xd) * 0x10000);
code_r0x00010973e730:
  pppppppuVar24 = pppppppuStack_208;
  if (((*(byte *)((long)pppppppuVar31 + 2) >> 6 & 1) == 0) ||
     (uVar16 = *(uint *)(pppppppuVar13 + 0x19), *(uint *)(pppppppuVar13 + 0x19) = uVar16 - 1,
     (int)uVar16 < 1)) {
LAB_10973e74c:
    param_1 = pppppppuVar13;
    FUN_109704924();
    uVar16 = (uint)pppppppuVar9;
    uStack_1f0 = CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0);
    if (*(char *)(pppppppuVar13 + 0xb) != '\x01') goto LAB_10973ec5c;
    uVar14 = (ulong)*(uint *)((long)pppppppuVar13 + 0x5c);
  }
  goto LAB_10973e2c4;
code_r0x00010973ebf0:
  if (((*(byte *)((long)pppppppuVar9 + 2) >> 6 & 1) == 0) ||
     (uVar28 = *(uint *)(pppppppuVar24 + 0x19), *(uint *)(pppppppuVar24 + 0x19) = uVar28 - 1,
     uVar23 = uStack_1fc, (int)uVar28 < 1)) {
LAB_10973ec0c:
    unaff_x19 = 0x5c;
    FUN_109704924(pppppppuVar24);
    if (*(char *)(pppppppuVar24 + 0xb) != '\x01') goto LAB_10973ec54;
    uVar14 = (ulong)*(uint *)((long)pppppppuVar24 + 0x5c);
    uVar23 = uStack_1fc;
  }
  goto LAB_10973e7b4;
code_r0x00010973f29c:
  pbVar20 = (byte *)((long)pppppppuVar9 + 2);
  param_2 = pppppppuVar13;
  pppppppuVar9 = pppppppuVar30;
  if (((*pbVar20 >> 6 & 1) == 0) ||
     (uVar16 = *(uint *)(pppppppuVar24 + 0x19), *(uint *)(pppppppuVar24 + 0x19) = uVar16 - 1,
     pppppppuVar13 = pppppppuVar21, (int)uVar16 < 1)) {
LAB_10973f2b8:
    param_1 = pppppppuVar24;
    FUN_109704924();
    iVar29 = (int)param_2;
    uVar16 = (uint)uVar14;
    if (*(char *)(pppppppuVar24 + 0xb) != '\x01') goto LAB_10973f31c;
    uVar15 = (ulong)*(uint *)((long)pppppppuVar24 + 0x5c);
    pppppppuVar13 = pppppppuVar21;
  }
  goto LAB_10973eda4;
}



/* Entry: 10973f3a4; end: 10973f413;  */

long FUN_10973f3a4(uint *param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  
  uVar2 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  if (uVar2 <= param_3) {
    param_3 = 1;
  }
  pbVar1 = (byte *)((long)param_1 +
                   (ulong)(param_3 + uVar2 * param_2) * 2 +
                   (ulong)*(byte *)((long)param_1 + 0xb) +
                   (ulong)*(byte *)((long)param_1 + 10) * 0x100 +
                   (ulong)(byte)param_1[2] * 0x1000000 +
                   (ulong)*(byte *)((long)param_1 + 9) * 0x10000);
  return (long)param_1 +
         (ulong)pbVar1[1] * 4 +
         (ulong)*pbVar1 * 0x400 +
         (ulong)*(byte *)((long)param_1 + 0xf) +
         (ulong)*(byte *)((long)param_1 + 0xe) * 0x100 +
         (ulong)(byte)param_1[3] * 0x1000000 + (ulong)*(byte *)((long)param_1 + 0xd) * 0x10000;
}



/* Entry: 10973f414; end: 10973f67b;  */

ushort * FUN_10973f414(ushort *param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  
  uVar1 = *param_1 >> 8 | *param_1 << 8;
  iVar8 = (int)param_1;
  if (uVar1 < 4) {
    if (uVar1 == 0) {
      if (param_2 < param_3) {
        return param_1 + (ulong)param_2 + 1;
      }
      return (ushort *)0x0;
    }
    if (uVar1 != 2) {
      return (ushort *)0x0;
    }
    uVar1 = param_1[2];
    iVar8 = iVar8 + 2;
    func_0x00010973d7b0();
    iVar8 = ((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8) - iVar8;
    iVar7 = iVar8 + -1;
    if (0 < iVar8) {
      iVar8 = 0;
      uVar3 = (uint)(param_1[1] >> 8) | (param_1[1] & 0xff00ff) << 8;
      do {
        uVar2 = (uint)(iVar7 + iVar8) >> 1;
        puVar9 = (ushort *)((long)param_1 + (ulong)uVar3 * (ulong)uVar2 + 0xc);
        uVar1 = puVar9[1];
        if (param_2 < ((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8)) {
          iVar7 = uVar2 - 1;
        }
        else {
          uVar1 = *puVar9;
          if (param_2 <= ((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8)) {
            lVar6 = (long)param_1 + (ulong)(uVar2 * uVar3) + 0xc;
            goto LAB_10973f640;
          }
          iVar8 = uVar2 + 1;
        }
      } while (iVar8 <= iVar7);
    }
    lVar6 = 0;
LAB_10973f640:
    puVar9 = (ushort *)(lVar6 + 4);
LAB_10973f644:
    puVar5 = (ushort *)0x0;
    if (lVar6 != 0) {
      puVar5 = puVar9;
    }
  }
  else {
    if (uVar1 == 4) {
      uVar1 = param_1[2];
      iVar8 = iVar8 + 2;
      FUN_10973ba90();
      iVar8 = ((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8) - iVar8;
      iVar7 = iVar8 + -1;
      if (0 < iVar8) {
        iVar8 = 0;
        uVar3 = (uint)(param_1[1] >> 8) | (param_1[1] & 0xff00ff) << 8;
        do {
          uVar2 = (uint)(iVar7 + iVar8) >> 1;
          puVar9 = (ushort *)((long)param_1 + (ulong)uVar3 * (ulong)uVar2 + 0xc);
          uVar1 = puVar9[1];
          if (param_2 < ((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8)) {
            iVar7 = uVar2 - 1;
          }
          else {
            uVar1 = *puVar9;
            if (param_2 <= ((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8)) {
              puVar9 = (ushort *)((long)param_1 + (ulong)(uVar2 * uVar3) + 0xc);
              uVar1 = puVar9[1];
              if ((((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8) <= param_2) &&
                 (param_2 <= ((uint)(*puVar9 >> 8) | (*puVar9 & 0xff00ff) << 8))) {
                return (ushort *)
                       ((long)param_1 +
                       (ulong)(param_2 - ((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8)) * 2 +
                       (ulong)*(byte *)((long)puVar9 + 5) + (ulong)(byte)puVar9[2] * 0x100);
              }
              break;
            }
            iVar8 = uVar2 + 1;
          }
        } while (iVar8 <= iVar7);
      }
    }
    else {
      if (uVar1 == 6) {
        uVar1 = param_1[2];
        iVar8 = iVar8 + 2;
        func_0x00010973d810();
        iVar8 = ((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8) - iVar8;
        iVar7 = iVar8 + -1;
        if (0 < iVar8) {
          iVar8 = 0;
          uVar3 = (uint)(param_1[1] >> 8) | (param_1[1] & 0xff00ff) << 8;
          do {
            uVar2 = (uint)(iVar7 + iVar8) >> 1;
            uVar1 = *(ushort *)((long)param_1 + (ulong)uVar3 * (ulong)uVar2 + 0xc);
            uVar4 = (uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8;
            if (param_2 < uVar4) {
              iVar7 = uVar2 - 1;
            }
            else {
              if (uVar4 == param_2) {
                lVar6 = (long)param_1 + (ulong)(uVar2 * uVar3) + 0xc;
                goto LAB_10973f630;
              }
              iVar8 = uVar2 + 1;
            }
          } while (iVar8 <= iVar7);
        }
        lVar6 = 0;
LAB_10973f630:
        puVar9 = (ushort *)(lVar6 + 2);
        goto LAB_10973f644;
      }
      if (uVar1 != 8) {
        return (ushort *)0x0;
      }
      uVar1 = param_1[1];
      if ((((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8) <= param_2) &&
         (param_2 = param_2 - ((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8),
         param_2 < ((uint)(param_1[2] >> 8) | (param_1[2] & 0xff00ff) << 8))) {
        return param_1 + (ulong)param_2 + 3;
      }
    }
    puVar5 = (ushort *)0x0;
  }
  return puVar5;
}



/* Entry: 10973f67c; end: 10973f6eb;  */

long FUN_10973f67c(uint *param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  
  uVar2 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  if (uVar2 <= param_3) {
    param_3 = 1;
  }
  pbVar1 = (byte *)((long)param_1 +
                   (ulong)(param_3 + uVar2 * param_2) * 2 +
                   (ulong)*(byte *)((long)param_1 + 0xb) +
                   (ulong)*(byte *)((long)param_1 + 10) * 0x100 +
                   (ulong)(byte)param_1[2] * 0x1000000 +
                   (ulong)*(byte *)((long)param_1 + 9) * 0x10000);
  return (long)param_1 +
         (ulong)pbVar1[1] * 8 +
         (ulong)*pbVar1 * 0x800 +
         (ulong)*(byte *)((long)param_1 + 0xf) +
         (ulong)*(byte *)((long)param_1 + 0xe) * 0x100 +
         (ulong)(byte)param_1[3] * 0x1000000 + (ulong)*(byte *)((long)param_1 + 0xd) * 0x10000;
}



/* Entry: 10973f6ec; end: 10973f9d3;  */

ushort * FUN_10973f6ec(ushort *param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  ushort *puVar10;
  
  uVar1 = *param_1 >> 8 | *param_1 << 8;
  if (uVar1 < 4) {
    if (uVar1 == 0) {
      if (param_2 < param_3) {
        return param_1 + (ulong)param_2 + 1;
      }
      return (ushort *)0x0;
    }
    if (uVar1 != 2) {
      return (ushort *)0x0;
    }
    uVar2 = (uint)(param_1[2] >> 8) | (param_1[2] & 0xff00ff) << 8;
    if (uVar2 == 0) {
      iVar9 = 0;
      uVar7 = (uint)CONCAT11((char)param_1[1],*(undefined1 *)((long)param_1 + 3));
    }
    else {
      bVar8 = false;
      lVar5 = 0;
      uVar7 = (uint)CONCAT11((char)param_1[1],*(undefined1 *)((long)param_1 + 3));
      do {
        uVar1 = *(ushort *)((long)param_1 + lVar5 * 2 + (ulong)uVar7 * (ulong)(uVar2 - 1) + 0xc);
        uVar1 = uVar1 >> 8 | uVar1 << 8;
        if (bVar8) break;
        bVar8 = true;
        lVar5 = 1;
      } while (uVar1 == 0xffff);
      iVar9 = -(uint)(uVar1 == 0xffff);
    }
    iVar6 = iVar9 + uVar2 + -1;
    if (0 < (int)(iVar9 + uVar2)) {
      iVar9 = 0;
      do {
        uVar2 = (uint)(iVar6 + iVar9) >> 1;
        puVar10 = (ushort *)((long)param_1 + (ulong)uVar7 * (ulong)uVar2 + 0xc);
        uVar1 = puVar10[1];
        if (param_2 < ((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8)) {
          iVar6 = uVar2 - 1;
        }
        else {
          uVar1 = *puVar10;
          if (param_2 <= ((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8)) {
            lVar5 = (long)param_1 + (ulong)(uVar2 * uVar7) + 0xc;
            goto LAB_10973f978;
          }
          iVar9 = uVar2 + 1;
        }
      } while (iVar9 <= iVar6);
    }
    lVar5 = 0;
LAB_10973f978:
    puVar10 = (ushort *)(lVar5 + 4);
LAB_10973f97c:
    puVar4 = (ushort *)0x0;
    if (lVar5 != 0) {
      puVar4 = puVar10;
    }
  }
  else {
    if (uVar1 == 4) {
      uVar1 = param_1[2];
      iVar9 = (int)param_1 + 2;
      FUN_10973be34();
      iVar9 = ((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8) - iVar9;
      iVar6 = iVar9 + -1;
      if (0 < iVar9) {
        iVar9 = 0;
        uVar2 = (uint)(param_1[1] >> 8) | (param_1[1] & 0xff00ff) << 8;
        do {
          uVar7 = (uint)(iVar6 + iVar9) >> 1;
          puVar10 = (ushort *)((long)param_1 + (ulong)uVar2 * (ulong)uVar7 + 0xc);
          uVar1 = puVar10[1];
          if (param_2 < ((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8)) {
            iVar6 = uVar7 - 1;
          }
          else {
            uVar1 = *puVar10;
            if (param_2 <= ((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8)) {
              puVar10 = (ushort *)((long)param_1 + (ulong)(uVar7 * uVar2) + 0xc);
              uVar1 = puVar10[1];
              if ((((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8) <= param_2) &&
                 (param_2 <= ((uint)(*puVar10 >> 8) | (*puVar10 & 0xff00ff) << 8))) {
                return (ushort *)
                       ((long)param_1 +
                       (ulong)(param_2 - ((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8)) * 2 +
                       (ulong)*(byte *)((long)puVar10 + 5) + (ulong)(byte)puVar10[2] * 0x100);
              }
              break;
            }
            iVar9 = uVar7 + 1;
          }
        } while (iVar9 <= iVar6);
      }
    }
    else {
      if (uVar1 == 6) {
        uVar2 = (uint)(param_1[2] >> 8) | (param_1[2] & 0xff00ff) << 8;
        if (uVar2 == 0) {
          iVar9 = 0;
          uVar7 = (uint)CONCAT11((char)param_1[1],*(undefined1 *)((long)param_1 + 3));
        }
        else {
          uVar7 = (uint)CONCAT11((char)param_1[1],*(undefined1 *)((long)param_1 + 3));
          uVar1 = *(ushort *)((long)param_1 + (ulong)uVar7 * (ulong)(uVar2 - 1) + 0xc);
          iVar9 = -(uint)((ushort)(uVar1 >> 8 | uVar1 << 8) == 0xffff);
        }
        iVar6 = iVar9 + uVar2 + -1;
        if (0 < (int)(iVar9 + uVar2)) {
          iVar9 = 0;
          do {
            uVar2 = (uint)(iVar6 + iVar9) >> 1;
            uVar1 = *(ushort *)((long)param_1 + (ulong)uVar7 * (ulong)uVar2 + 0xc);
            uVar3 = (uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8;
            if (param_2 < uVar3) {
              iVar6 = uVar2 - 1;
            }
            else {
              if (uVar3 == param_2) {
                lVar5 = (long)param_1 + (ulong)(uVar2 * uVar7) + 0xc;
                goto LAB_10973f968;
              }
              iVar9 = uVar2 + 1;
            }
          } while (iVar9 <= iVar6);
        }
        lVar5 = 0;
LAB_10973f968:
        puVar10 = (ushort *)(lVar5 + 2);
        goto LAB_10973f97c;
      }
      if (uVar1 != 8) {
        return (ushort *)0x0;
      }
      uVar1 = param_1[1];
      if ((((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8) <= param_2) &&
         (param_2 = param_2 - ((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8),
         param_2 < ((uint)(param_1[2] >> 8) | (param_1[2] & 0xff00ff) << 8))) {
        return param_1 + (ulong)param_2 + 3;
      }
    }
    puVar4 = (ushort *)0x0;
  }
  return puVar4;
}



/* Entry: 10973f9d4; end: 10973fabb;  */

long FUN_10973f9d4(uint *param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  
  uVar2 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  if (uVar2 <= param_3) {
    param_3 = 1;
  }
  pbVar1 = (byte *)((long)param_1 +
                   (ulong)(param_3 + uVar2 * param_2) * 2 +
                   (ulong)*(byte *)((long)param_1 + 0xb) +
                   (ulong)*(byte *)((long)param_1 + 10) * 0x100 +
                   (ulong)(byte)param_1[2] * 0x1000000 +
                   (ulong)*(byte *)((long)param_1 + 9) * 0x10000);
  return (long)param_1 +
         (ulong)pbVar1[1] * 6 +
         (ulong)*pbVar1 * 0x600 +
         (ulong)*(byte *)((long)param_1 + 0xf) +
         (ulong)*(byte *)((long)param_1 + 0xe) * 0x100 +
         (ulong)(byte)param_1[3] * 0x1000000 + (ulong)*(byte *)((long)param_1 + 0xd) * 0x10000;
}



/* Entry: 10973fabc; end: 10973fb3b;  */

void FUN_10973fabc(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar2 = (int)param_1;
  puVar3 = (undefined8 *)(*(long *)(param_1 + 0x70) + (ulong)*(uint *)(param_1 + 0x5c) * 0x14);
  uVar5 = puVar3[1];
  uVar4 = *puVar3;
  uVar1 = *(undefined4 *)(puVar3 + 2);
  FUN_1096f5fd4(iVar2,0,1);
  if (iVar2 != 0) {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x78) + (ulong)*(uint *)(param_1 + 100) * 0x14);
    puVar3[1] = uVar5;
    *puVar3 = uVar4;
    *(undefined4 *)(puVar3 + 2) = uVar1;
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  }
  return;
}



/* Entry: 10973fb3c; end: 10973fc03;  */

void FUN_10973fb3c(long param_1,ulong param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  iVar2 = (int)param_1;
  FUN_1096f5fd4(iVar2,0,param_2);
  if (iVar2 != 0) {
    uVar3 = *(uint *)(param_1 + 0x5c);
    if (uVar3 < *(uint *)(param_1 + 0x60)) {
      lVar8 = *(long *)(param_1 + 0x78);
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0x70) + (ulong)uVar3 * 0x14);
      uVar6 = *(uint *)(param_1 + 100);
    }
    else {
      lVar8 = *(long *)(param_1 + 0x78);
      uVar6 = *(uint *)(param_1 + 100);
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar6 - 1;
      }
      puVar5 = (undefined8 *)(lVar8 + (ulong)uVar1 * 0x14);
    }
    if ((int)param_2 != 0) {
      uVar7 = param_2 & 0xffffffff;
      param_3 = param_3 + 1;
      puVar4 = (uint *)(lVar8 + (ulong)uVar6 * 0x14);
      do {
        uVar10 = puVar5[1];
        uVar9 = *puVar5;
        puVar4[4] = *(uint *)(puVar5 + 2);
        *(undefined8 *)(puVar4 + 2) = uVar10;
        *(undefined8 *)puVar4 = uVar9;
        *puVar4 = (uint)(*(ushort *)(param_3 + -1) >> 8) |
                  (*(ushort *)(param_3 + -1) & 0xff00ff) << 8;
        param_3 = param_3 + 2;
        uVar7 = uVar7 - 1;
        puVar4 = puVar4 + 5;
      } while (uVar7 != 0);
      uVar3 = *(uint *)(param_1 + 0x5c);
      uVar6 = *(uint *)(param_1 + 100);
    }
    *(uint *)(param_1 + 0x5c) = uVar3;
    *(uint *)(param_1 + 100) = uVar6 + (int)param_2;
  }
  return;
}



/* Entry: 10973fc04; end: 10973fd0b;  */

long FUN_10973fc04(long param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  uint uVar8;
  
  uVar1 = *(undefined1 *)(param_1 + 10);
  uVar2 = *(undefined1 *)(param_1 + 0xb);
  lVar4 = 1;
  _calloc(1,(ulong)CONCAT11(uVar1,uVar2) * 0x18);
  uVar8 = (uint)CONCAT11(uVar1,uVar2);
  if (lVar4 != 0 && uVar8 != 0) {
    uVar5 = 0;
    pbVar7 = (byte *)(param_1 + (ulong)((uint)(*(ushort *)(param_1 + 8) >> 8) |
                                       (*(ushort *)(param_1 + 8) & 0xff00ff) << 8) * 0xc + 0xc);
    do {
      bVar3 = pbVar7[3];
      if (bVar3 < 2) {
        if ((bVar3 != 0) && (bVar3 != 1)) goto LAB_10973fcc4;
LAB_10973fca0:
        FUN_10973fd0c(pbVar7 + (ulong)pbVar7[0xb] + (ulong)pbVar7[10] * 0x100 + 8,
                      lVar4 + (ulong)uVar5 * 0x18);
        uVar5 = uVar5 + 1;
      }
      else {
        if (bVar3 == 2) goto LAB_10973fca0;
        if (bVar3 == 4) {
          puVar6 = (undefined8 *)(lVar4 + (ulong)uVar5 * 0x18);
          puVar6[1] = 0xffffffffffffffff;
          puVar6[2] = 0xffffffffffffffff;
          uVar5 = uVar5 + 1;
          *puVar6 = 0xffffffffffffffff;
        }
        else if (bVar3 == 5) goto LAB_10973fca0;
      }
LAB_10973fcc4:
      pbVar7 = pbVar7 + (ulong)pbVar7[1] + (ulong)*pbVar7 * 0x100;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return lVar4;
}



/* Entry: 10973fd0c; end: 10973fda3;  */

void FUN_10973fd0c(ushort *param_1,byte *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar3 = (ulong)(byte)param_1[1];
  uVar4 = (ulong)*(byte *)((long)param_1 + 3);
  if (*(byte *)((long)param_1 + 3) != 0 || (byte)param_1[1] != 0) {
    uVar2 = 0;
    do {
      if (*(char *)((long)param_1 + uVar2 + 4) != '\x01') {
        uVar1 = (int)uVar2 + ((uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8);
        auVar5._0_8_ = (ulong)(uVar1 >> 4) & 0x3f;
        auVar5._8_8_ = (CONCAT44(uVar1,uVar1 >> 4) & 0x3f0000003f) >> 0x20;
        auVar6._8_8_ = 1;
        auVar6._0_8_ = 1;
        auVar6 = NEON_ushl(auVar6,auVar5,8);
        uVar8 = *(undefined8 *)(param_2 + 8);
        uVar7 = *(undefined8 *)param_2;
        param_2[8] = auVar6[8] | (byte)uVar8;
        param_2[9] = auVar6[9] | (byte)((ulong)uVar8 >> 8);
        param_2[10] = auVar6[10] | (byte)((ulong)uVar8 >> 0x10);
        param_2[0xb] = auVar6[0xb] | (byte)((ulong)uVar8 >> 0x18);
        param_2[0xc] = auVar6[0xc] | (byte)((ulong)uVar8 >> 0x20);
        param_2[0xd] = auVar6[0xd] | (byte)((ulong)uVar8 >> 0x28);
        param_2[0xe] = auVar6[0xe] | (byte)((ulong)uVar8 >> 0x30);
        param_2[0xf] = auVar6[0xf] | (byte)((ulong)uVar8 >> 0x38);
        *param_2 = auVar6[0] | (byte)uVar7;
        param_2[1] = auVar6[1] | (byte)((ulong)uVar7 >> 8);
        param_2[2] = auVar6[2] | (byte)((ulong)uVar7 >> 0x10);
        param_2[3] = auVar6[3] | (byte)((ulong)uVar7 >> 0x18);
        param_2[4] = auVar6[4] | (byte)((ulong)uVar7 >> 0x20);
        param_2[5] = auVar6[5] | (byte)((ulong)uVar7 >> 0x28);
        param_2[6] = auVar6[6] | (byte)((ulong)uVar7 >> 0x30);
        param_2[7] = auVar6[7] | (byte)((ulong)uVar7 >> 0x38);
        *(ulong *)(param_2 + 0x10) = 1L << ((ulong)(uVar1 >> 9) & 0x3f) | *(ulong *)(param_2 + 0x10)
        ;
        uVar3 = (ulong)(byte)param_1[1];
        uVar4 = (ulong)*(byte *)((long)param_1 + 3);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uVar4 | uVar3 << 8));
  }
  return;
}



/* Entry: 10973fda4; end: 10974199b;  */

/* WARNING: Possible PIC construction at 0x0001097405d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001097405d8) */

byte ** FUN_10973fda4(byte **param_1,byte **param_2,byte **param_3)

{
  uint *puVar1;
  undefined1 *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  undefined4 uVar5;
  ushort uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  long lVar14;
  bool bVar15;
  uint uVar16;
  byte **ppbVar17;
  uint uVar18;
  byte *pbVar19;
  byte *pbVar20;
  ulong uVar21;
  undefined1 (*pauVar22) [16];
  uint uVar23;
  ulong uVar24;
  undefined8 uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  byte **unaff_x19;
  byte **unaff_x20;
  byte **ppbVar30;
  int iVar31;
  int iVar32;
  byte **ppbVar33;
  byte **ppbVar34;
  byte **ppbVar35;
  uint uVar36;
  long lVar37;
  uint *puVar38;
  uint *puVar39;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  byte bVar40;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auStack_240 [4];
  uint uStack_23c;
  byte *pbStack_238;
  undefined4 uStack_22c;
  byte **ppbStack_228;
  byte **ppbStack_220;
  byte *pbStack_218;
  byte **ppbStack_210;
  undefined8 uStack_208;
  byte **ppbStack_200;
  byte **ppbStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  byte **ppbStack_1d8;
  byte **ppbStack_1d0;
  uint uStack_1c4;
  byte bStack_1c0;
  byte bStack_1bf;
  byte bStack_1be;
  byte bStack_1bd;
  byte bStack_1bc;
  byte bStack_1bb;
  byte bStack_1ba;
  byte bStack_1b9;
  byte **ppbStack_1b8;
  byte **ppbStack_1b0;
  byte *pbStack_1a8;
  byte *pbStack_1a0;
  byte *pbStack_198;
  uint uStack_190;
  int aiStack_18c [67];
  long lStack_80;
  
  iVar31 = (int)param_3;
  puVar2 = &stack0xfffffffffffffff0;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar40 = *(byte *)((long)param_1 + 3);
  ppbVar17 = param_1;
  ppbStack_1d8 = param_1;
  ppbStack_1d0 = param_2;
  if (bVar40 < 2) {
    if (bVar40 == 0) {
      ppbVar30 = param_1 + 1;
      ppbVar17 = (byte **)param_2[3];
      if (*(int *)(ppbVar17 + 3) == -1) {
        FUN_109710978();
      }
      iVar31 = (int)param_3;
      uVar23 = *(uint *)((long)ppbVar30 +
                        (ulong)*(byte *)((long)ppbVar30 +
                                        (ulong)*(byte *)((long)param_1 + 0xd) +
                                        (ulong)*(byte *)((long)param_1 + 0xc) * 0x100 + 1) * 4 +
                        (ulong)*(byte *)((long)param_1 + 0xf) +
                        (ulong)*(byte *)((long)param_1 + 0xe) * 0x100);
      uVar27 = (uint)(*(ushort *)(param_1 + 1) >> 8) | (*(ushort *)(param_1 + 1) & 0xff00ff) << 8;
      iVar32 = 0;
      if (uVar27 != 0) {
        iVar32 = (int)((((uVar23 & 0xff00ff00) >> 8 | (uVar23 & 0xff00ff) << 8) & 0xffff) -
                      (uint)CONCAT11(*(byte *)((long)param_1 + 0xc),*(byte *)((long)param_1 + 0xd)))
                 / (int)uVar27;
      }
      if ((iVar32 != 0) ||
         (((uStack_1f0 = (byte *)CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0),
           ((ulong)ppbStack_1d0[0x13] & (ulong)ppbStack_1d0[0x10]) != 0 &&
           (uStack_1f0 = (byte *)CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0),
           ((ulong)ppbStack_1d0[0x14] & (ulong)ppbStack_1d0[0x11]) != 0)) &&
          (uStack_1f0 = (byte *)CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0),
          ((ulong)ppbStack_1d0[0x15] & (ulong)ppbStack_1d0[0x12]) != 0)))) {
        ppbVar34 = (byte **)ppbStack_1d0[4];
        pbVar19 = ppbStack_1d0[0xf];
        if ((pbVar19 == (byte *)0x0) || (*(uint *)(pbVar19 + 4) < 2)) {
          puVar38 = (uint *)0x0;
        }
        else {
          puVar38 = *(uint **)(pbVar19 + 8);
        }
        ((ushort *)((long)ppbVar34 + 0x5c))[0] = 0;
        ((ushort *)((long)ppbVar34 + 0x5c))[1] = 0;
        uStack_1f0 = (byte *)CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0);
        if (*(byte *)(ppbVar34 + 0xb) == 1) {
          uVar23 = 0;
          uStack_1f0._0_4_ = 0;
          ppbStack_1f8 = (byte **)((ulong)ppbStack_1f8 & 0xffffffff00000000);
          uVar24 = 0;
          ppbStack_210 = ppbVar30;
LAB_1097413d0:
          ppbVar35 = ppbStack_1d8;
          iVar31 = (int)param_3;
          uVar27 = *(uint *)(ppbVar34 + 0xc);
          if (puVar38 == (uint *)0x0) {
LAB_10974142c:
            if (uVar23 < uVar27) {
              param_2 = (byte **)(ulong)*(uint *)(ppbVar34[0xe] + (ulong)uVar23 * 0x14);
              param_3 = ppbStack_1d0 + 0x13;
              ppbVar17 = ppbVar30;
              FUN_10974199c();
            }
            else {
              ppbVar17 = (byte **)0x0;
            }
            uVar9 = (uint)(*(ushort *)(ppbVar35 + 1) >> 8) |
                    (*(ushort *)(ppbVar35 + 1) & 0xff00ff) << 8;
            uVar16 = (uint)ppbVar17;
            uVar26 = uVar16;
            if (uVar9 <= uVar16) {
              uVar26 = 1;
            }
            lVar37 = (ulong)*(byte *)((long)ppbVar35 + 0xd) +
                     (ulong)*(byte *)((long)ppbVar35 + 0xc) * 0x100;
            lVar14 = (ulong)*(byte *)((long)ppbVar35 + 0xf) +
                     (ulong)*(byte *)((long)ppbVar35 + 0xe) * 0x100;
            uVar8 = uVar9 * (int)uVar24;
            puVar3 = (ushort *)
                     ((long)ppbVar30 +
                     (ulong)*(byte *)((long)ppbVar30 + (ulong)(uVar26 + uVar8) + lVar37) * 4 +
                     lVar14);
            uVar26 = (uint)CONCAT11(*(byte *)((long)ppbVar35 + 0xc),*(byte *)((long)ppbVar35 + 0xd))
            ;
            iVar31 = 0;
            if (uVar9 != 0) {
              iVar31 = (int)(((uint)(*puVar3 >> 8) | (*puVar3 & 0xff00ff) << 8) - uVar26) /
                       (int)uVar9;
            }
            uVar21 = (ulong)*(byte *)((long)puVar3 + 3);
            if ((*(byte *)((long)puVar3 + 3) & 0xf) == 0 || (uint)ppbStack_1f8 <= (uint)uStack_1f0)
            {
              if (((int)uVar24 != 0) && ((((byte)puVar3[1] >> 6 & 1) == 0 || (iVar31 != 0)))) {
                if (uVar9 <= uVar16) {
                  uVar16 = 1;
                }
                puVar4 = (ushort *)
                         ((long)ppbVar30 +
                         (ulong)*(byte *)((long)ppbVar30 + (ulong)uVar16 + lVar37) * 4 + lVar14);
                if ((*(byte *)((long)puVar4 + 3) & 0xf) == 0 ||
                    (uint)ppbStack_1f8 <= (uint)uStack_1f0) {
                  iVar32 = 0;
                  if (uVar9 != 0) {
                    iVar32 = (int)(((uint)(*puVar4 >> 8) | (*puVar4 & 0xff00ff) << 8) - uVar26) /
                             (int)uVar9;
                  }
                  if ((iVar31 == iVar32) &&
                     (((byte)((byte)puVar4[1] ^ (byte)puVar3[1]) >> 6 & 1) == 0))
                  goto LAB_1097414d4;
                }
                goto LAB_109741560;
              }
LAB_1097414d4:
              if ((*(byte *)((long)ppbVar30 +
                            (ulong)*(byte *)((long)ppbVar30 + (ulong)uVar8 + lVar37) * 4 + lVar14 +
                            3) & 0xf) != 0 && (uint)uStack_1f0 < (uint)ppbStack_1f8)
              goto LAB_109741560;
            }
            else {
LAB_109741560:
              lVar37 = 100;
              if (*(byte *)((long)ppbVar34 + 0x5a) == 0) {
                lVar37 = 0x5c;
              }
              if ((uVar23 < uVar27) && (*(int *)((long)ppbVar34 + lVar37) != 0)) {
                param_3 = (byte **)(ulong)(*(int *)((long)ppbVar34 + lVar37) - 1);
                param_2 = (byte **)0x3;
                ppbVar17 = ppbVar34;
                FUN_109710ea8();
                uVar21 = (ulong)*(byte *)((long)puVar3 + 3);
              }
            }
            if ((char)(byte)puVar3[1] < '\0') {
              uStack_1f0._0_4_ = *(uint *)((long)ppbVar34 + 0x5c);
            }
            ppbStack_200 = (byte **)CONCAT44(ppbStack_200._4_4_,iVar31);
            if (((byte)puVar3[1] >> 5 & 1) != 0) {
              uVar23 = *(uint *)(ppbVar34 + 0xc);
              if (*(int *)((long)ppbVar34 + 0x5c) + 1U < uVar23) {
                uVar23 = *(int *)((long)ppbVar34 + 0x5c) + 1;
              }
              ppbStack_1f8 = (byte **)CONCAT44(ppbStack_1f8._4_4_,uVar23);
            }
            uVar21 = uVar21 & 0xf;
            bVar15 = (int)uVar21 == 0;
            if ((!bVar15 && (uint)uStack_1f0 <= (uint)ppbStack_1f8) &&
                (bVar15 || (uint)ppbStack_1f8 != (uint)uStack_1f0)) {
              bVar40 = (&UNK_10dfdff20)[uVar21];
              uVar27 = (uint)(bVar40 >> 4);
              uVar23 = uVar27;
              if (1 < uVar27) {
                uVar23 = 2;
              }
              uVar26 = bVar40 & 0xf;
              uStack_208 = (byte *)(CONCAT44(uStack_208._4_4_,(uint)bVar40) & 0xffffffff0000000f);
              if ((bVar40 & 0xe) != 0) {
                uVar26 = 2;
              }
              uVar16 = (uint)ppbStack_1f8 - (uint)uStack_1f0;
              if ((uVar16 < 0x41) && (uVar23 + uVar26 <= uVar16)) {
                ppbStack_228 = (byte **)CONCAT44(ppbStack_228._4_4_,uVar23 + uVar26);
                uVar9 = *(uint *)(ppbVar34 + 0xc);
                if (*(int *)((long)ppbVar34 + 0x5c) + 1U < uVar9) {
                  uVar9 = *(int *)((long)ppbVar34 + 0x5c) + 1;
                }
                if (1 < uVar9 - (uint)uStack_1f0) {
                  param_2 = (byte **)(ulong)(uint)uStack_1f0;
                  ppbVar17 = ppbVar34;
                  func_0x0001096f65e4();
                }
                if (1 < uVar16) {
                  param_2 = (byte **)(ulong)(uint)uStack_1f0;
                  ppbVar17 = ppbVar34;
                  func_0x0001096f65e4(ppbVar34,param_2,(ulong)ppbStack_1f8 & 0xffffffff);
                }
                pbVar19 = ppbVar34[0xe];
                ppbVar30 = (byte **)(pbVar19 + (ulong)(uint)uStack_1f0 * 0x14);
                param_3 = (byte **)(((ulong)uVar23 * 4 + (ulong)uVar23) * 4);
                ppbStack_220 = (byte **)(1L << uVar21 & 0xc4);
                if (ppbStack_220 == (byte **)0x0) {
                  ppbVar17 = (byte **)&bStack_1c0;
                  param_2 = ppbVar30;
                  _memcpy(ppbVar17,ppbVar30,param_3);
                }
                uVar24 = (ulong)ppbStack_1f8 & 0xffffffff;
                pbStack_218 = pbVar19;
                if ((int)uStack_208 != 0) {
                  param_2 = (byte **)(pbVar19 + (long)(int)-uVar26 * 0x14 + uVar24 * 0x14);
                  ppbVar17 = &pbStack_198;
                  _memcpy(ppbVar17,param_2,uVar26 * 0x14);
                }
                if (uVar23 != uVar26) {
                  ppbVar17 = (byte **)((long)ppbVar30 + (ulong)uVar26 * 0x14);
                  param_2 = (byte **)((long)ppbVar30 + (ulong)uVar23 * 0x14);
                  _memmove(ppbVar17,param_2,
                           (ulong)(((uint)ppbStack_1f8 - (uint)uStack_1f0) - (int)ppbStack_228) *
                           0x14);
                }
                if ((int)uStack_208 != 0) {
                  param_2 = &pbStack_198;
                  ppbVar17 = ppbVar30;
                  _memcpy(ppbVar30,param_2,uVar26 * 0x14);
                }
                if (ppbStack_220 == (byte **)0x0) {
                  ppbVar17 = (byte **)(pbVar19 + (long)(int)-uVar23 * 0x14 + uVar24 * 0x14);
                  param_2 = (byte **)&bStack_1c0;
                  _memcpy();
                }
                if (uVar27 == 3) {
                  pbVar19 = pbStack_218 + (ulong)((uint)ppbStack_1f8 - 1) * 0x14;
                  bStack_1c0 = *pbVar19;
                  bStack_1bf = pbVar19[1];
                  bStack_1be = pbVar19[2];
                  bStack_1bd = pbVar19[3];
                  bStack_1bc = pbVar19[4];
                  bStack_1bb = pbVar19[5];
                  bStack_1ba = pbVar19[6];
                  bStack_1b9 = pbVar19[7];
                  bVar40 = pbVar19[8];
                  bVar44 = pbVar19[9];
                  bVar45 = pbVar19[10];
                  bVar46 = pbVar19[0xb];
                  bVar47 = pbVar19[0xc];
                  bVar48 = pbVar19[0xd];
                  bVar49 = pbVar19[0xe];
                  bVar50 = pbVar19[0xf];
                  ppbStack_1b8 = *(byte ***)(pbVar19 + 8);
                  uVar5 = *(undefined4 *)(pbVar19 + 0x10);
                  ppbStack_1b0 = (byte **)CONCAT44(ppbStack_1b0._4_4_,uVar5);
                  pauVar22 = (undefined1 (*) [16])
                             (pbStack_218 + (ulong)((uint)ppbStack_1f8 - 2) * 0x14);
                  auVar60 = *pauVar22;
                  *(long *)(pbVar19 + 8) = auVar60._8_8_;
                  *(long *)pbVar19 = auVar60._0_8_;
                  *(undefined4 *)(pbVar19 + 0x10) = *(undefined4 *)pauVar22[1];
                  (*pauVar22)[8] = bVar40;
                  (*pauVar22)[9] = bVar44;
                  (*pauVar22)[10] = bVar45;
                  (*pauVar22)[0xb] = bVar46;
                  (*pauVar22)[0xc] = bVar47;
                  (*pauVar22)[0xd] = bVar48;
                  (*pauVar22)[0xe] = bVar49;
                  (*pauVar22)[0xf] = bVar50;
                  (*pauVar22)[0] = bStack_1c0;
                  (*pauVar22)[1] = bStack_1bf;
                  (*pauVar22)[2] = bStack_1be;
                  (*pauVar22)[3] = bStack_1bd;
                  (*pauVar22)[4] = bStack_1bc;
                  (*pauVar22)[5] = bStack_1bb;
                  (*pauVar22)[6] = bStack_1ba;
                  (*pauVar22)[7] = bStack_1b9;
                  *(undefined4 *)pauVar22[1] = uVar5;
                }
                if ((int)uStack_208 == 3) {
                  bStack_1c0 = *(byte *)ppbVar30;
                  bStack_1bf = *(byte *)((long)ppbVar30 + 1);
                  bStack_1be = *(byte *)((long)ppbVar30 + 2);
                  bStack_1bd = *(byte *)((long)ppbVar30 + 3);
                  bStack_1bc = *(byte *)((long)ppbVar30 + 4);
                  bStack_1bb = *(byte *)((long)ppbVar30 + 5);
                  bStack_1ba = *(byte *)((long)ppbVar30 + 6);
                  bStack_1b9 = *(byte *)((long)ppbVar30 + 7);
                  bVar40 = *(byte *)(ppbVar30 + 1);
                  bVar44 = *(byte *)((long)ppbVar30 + 9);
                  bVar45 = *(byte *)((long)ppbVar30 + 10);
                  bVar46 = *(byte *)((long)ppbVar30 + 0xb);
                  bVar47 = *(byte *)((long)ppbVar30 + 0xc);
                  bVar48 = *(byte *)((long)ppbVar30 + 0xd);
                  bVar49 = *(byte *)((long)ppbVar30 + 0xe);
                  bVar50 = *(byte *)((long)ppbVar30 + 0xf);
                  ppbStack_1b8 = (byte **)ppbVar30[1];
                  uVar5 = *(undefined4 *)(ppbVar30 + 2);
                  ppbStack_1b0 = (byte **)CONCAT44(ppbStack_1b0._4_4_,uVar5);
                  pauVar22 = (undefined1 (*) [16])
                             (pbStack_218 + (ulong)((uint)uStack_1f0 + 1) * 0x14);
                  auVar60 = *pauVar22;
                  ppbVar30[1] = auVar60._8_8_;
                  *ppbVar30 = auVar60._0_8_;
                  *(undefined4 *)(ppbVar30 + 2) = *(undefined4 *)pauVar22[1];
                  (*pauVar22)[8] = bVar40;
                  (*pauVar22)[9] = bVar44;
                  (*pauVar22)[10] = bVar45;
                  (*pauVar22)[0xb] = bVar46;
                  (*pauVar22)[0xc] = bVar47;
                  (*pauVar22)[0xd] = bVar48;
                  (*pauVar22)[0xe] = bVar49;
                  (*pauVar22)[0xf] = bVar50;
                  (*pauVar22)[0] = bStack_1c0;
                  (*pauVar22)[1] = bStack_1bf;
                  (*pauVar22)[2] = bStack_1be;
                  (*pauVar22)[3] = bStack_1bd;
                  (*pauVar22)[4] = bStack_1bc;
                  (*pauVar22)[5] = bStack_1bb;
                  (*pauVar22)[6] = bStack_1ba;
                  (*pauVar22)[7] = bStack_1b9;
                  *(undefined4 *)pauVar22[1] = uVar5;
                }
              }
            }
            iVar31 = (int)param_3;
            uVar23 = *(uint *)((long)ppbVar34 + 0x5c);
            uVar24 = (ulong)ppbStack_200 & 0xffffffff;
            uStack_1f0 = (byte *)CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0);
            if ((uVar23 != *(uint *)(ppbVar34 + 0xc)) &&
               (uStack_1f0 = (byte *)CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0),
               *(byte *)(ppbVar34 + 0xb) == 1)) goto code_r0x000109741618;
          }
          else {
            if (uVar23 < uVar27) {
              puVar39 = puVar38 + 3;
              do {
                puVar38 = puVar38 + -3;
                puVar1 = puVar39 + -2;
                puVar39 = puVar39 + -3;
              } while (*(uint *)(ppbVar34[0xe] + (ulong)uVar23 * 0x14 + 8) < *puVar1);
              do {
                puVar39 = puVar38 + 5;
                puVar38 = puVar38 + 3;
              } while (*puVar39 < *(uint *)(ppbVar34[0xe] + (ulong)uVar23 * 0x14 + 8));
            }
            if ((*(uint *)(ppbStack_1d0 + 0x1c) & *puVar38) != 0) goto LAB_10974142c;
            uStack_1f0 = (byte *)CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0);
            if (uVar23 != uVar27) {
              uVar24 = 0;
              goto LAB_109741634;
            }
          }
        }
      }
      goto LAB_109741914;
    }
    uStack_1f0 = (byte *)CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0);
    if (bVar40 == 1) {
      ppbStack_210 = (byte **)param_2[0xe];
      if ((ushort)(*(ushort *)ppbStack_210 >> 8 | *(ushort *)ppbStack_210 << 8) == 1) {
        uStack_208 = (byte *)CONCAT44(uStack_208._4_4_,
                                      (uint)(*(byte *)((long)ppbStack_210 + 5) != 0 ||
                                            *(byte *)((long)ppbStack_210 + 4) != 0));
      }
      else {
        uStack_208 = (byte *)((ulong)uStack_208._4_4_ << 0x20);
      }
      ppbVar30 = param_1 + 1;
      bVar40 = *(byte *)(param_1 + 2);
      bVar44 = *(byte *)((long)param_1 + 0x11);
      ppbVar17 = (byte **)param_2[3];
      if (*(int *)(ppbVar17 + 3) == -1) {
        FUN_109710978();
      }
      iVar31 = (int)param_3;
      ppbVar34 = (byte **)ppbStack_1d0[4];
      uVar23 = *(uint *)(ppbVar34 + 0xc);
      uVar25 = *(undefined8 *)
                ((long)ppbVar30 +
                (ulong)*(byte *)((long)ppbVar30 +
                                (ulong)*(byte *)((long)param_1 + 0xd) +
                                (ulong)*(byte *)((long)param_1 + 0xc) * 0x100 + 1) * 8 +
                (ulong)*(byte *)((long)param_1 + 0xf) +
                (ulong)*(byte *)((long)param_1 + 0xe) * 0x100);
      ppbStack_200 = ppbVar30;
      if ((*(uint *)((long)ppbVar34 + 0x5c) == uVar23) ||
         (uVar27 = (uint)((ulong)uVar25 >> 0x28),
         ((uint)((ulong)uVar25 >> 0x18) & 0xff00 | uVar27 & 0xff) == 0xffff &&
         (uVar27 & 0xff00 | (uint)(byte)((ulong)uVar25 >> 0x38)) == 0xffff)) {
        uVar27 = (uint)(*(ushort *)(param_1 + 1) >> 8) | (*(ushort *)(param_1 + 1) & 0xff00ff) << 8;
        iVar32 = 0;
        if (uVar27 != 0) {
          iVar32 = (int)(((((uint)uVar25 & 0xff00ff00) >> 8 | ((uint)uVar25 & 0xff00ff) << 8) &
                         0xffff) -
                        (uint)CONCAT11(*(byte *)((long)param_1 + 0xc),*(byte *)((long)param_1 + 0xd)
                                      )) / (int)uVar27;
        }
        if ((iVar32 == 0) &&
           (((uStack_1f0 = (byte *)CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0),
             ((ulong)ppbStack_1d0[0x13] & (ulong)ppbStack_1d0[0x10]) == 0 ||
             (uStack_1f0 = (byte *)CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0),
             ((ulong)ppbStack_1d0[0x14] & (ulong)ppbStack_1d0[0x11]) == 0)) ||
            (uStack_1f0 = (byte *)CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0),
            ((ulong)ppbStack_1d0[0x15] & (ulong)ppbStack_1d0[0x12]) == 0)))) goto LAB_109741914;
      }
      pbVar19 = ppbStack_1d0[0xf];
      if ((pbVar19 == (byte *)0x0) || (*(uint *)(pbVar19 + 4) < 2)) {
        puVar38 = (uint *)0x0;
      }
      else {
        puVar38 = *(uint **)(pbVar19 + 8);
      }
      ((ushort *)((long)ppbVar34 + 0x5c))[0] = 0;
      ((ushort *)((long)ppbVar34 + 0x5c))[1] = 0;
      uStack_1f0 = (byte *)CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0);
      if (*(byte *)(ppbVar34 + 0xb) == 1) {
        uVar27 = 0;
        bVar45 = 0;
        ppbVar35 = (byte **)0x0;
        uStack_1f0 = (byte *)((long)ppbVar30 + (ulong)bVar44 + (ulong)bVar40 * 0x100);
        ppbStack_1f8 = (byte **)CONCAT44(ppbStack_1f8._4_4_,(uint)CONCAT11(bVar40,bVar44));
        iVar32 = 0;
LAB_109740ea4:
        ppbVar30 = ppbStack_200;
        iVar31 = (int)param_3;
        if (puVar38 != (uint *)0x0) {
          if (uVar27 < uVar23) {
            puVar39 = puVar38 + 3;
            do {
              puVar38 = puVar38 + -3;
              puVar1 = puVar39 + -2;
              puVar39 = puVar39 + -3;
            } while (*(uint *)(ppbVar34[0xe] + (ulong)uVar27 * 0x14 + 8) < *puVar1);
            do {
              puVar39 = puVar38 + 5;
              puVar38 = puVar38 + 3;
            } while (*puVar39 < *(uint *)(ppbVar34[0xe] + (ulong)uVar27 * 0x14 + 8));
          }
          if ((*(uint *)(ppbStack_1d0 + 0x1c) & *puVar38) != 0) goto LAB_109740f00;
          if (uVar27 != uVar23) {
            iVar32 = 0;
            goto LAB_109741368;
          }
          goto LAB_109741914;
        }
LAB_109740f00:
        if (uVar27 < uVar23) {
          uVar26 = *(uint *)(ppbVar34[0xe] + (ulong)uVar27 * 0x14);
          ppbVar33 = (byte **)(ulong)uVar26;
          if (uVar26 == 0xffff) {
            uVar26 = 2;
          }
          else {
            ppbVar17 = ppbStack_1d0 + 0x13;
            FUN_10972a9e4();
            param_2 = ppbVar33;
            if ((int)ppbVar17 != 0) {
              puVar3 = (ushort *)
                       ((long)ppbVar30 +
                       (ulong)*(byte *)((long)ppbStack_1d8 + 0xb) +
                       (ulong)*(byte *)((long)ppbStack_1d8 + 10) * 0x100);
              uVar26 = uVar26 - ((uint)(*puVar3 >> 8) | (*puVar3 & 0xff00ff) << 8);
              if (uVar26 < ((uint)(puVar3[1] >> 8) | (puVar3[1] & 0xff00ff) << 8)) {
                uVar26 = (uint)*(byte *)((long)puVar3 + (ulong)uVar26 + 4);
                goto LAB_109740f78;
              }
            }
            uVar26 = 1;
          }
        }
        else {
          uVar26 = 0;
        }
LAB_109740f78:
        iVar31 = (int)param_3;
        uVar9 = (uint)(*(ushort *)(ppbStack_1d8 + 1) >> 8) |
                (*(ushort *)(ppbStack_1d8 + 1) & 0xff00ff) << 8;
        uVar16 = uVar26;
        if (uVar9 <= uVar26) {
          uVar16 = 1;
        }
        lVar37 = (ulong)*(byte *)((long)ppbStack_1d8 + 0xd) +
                 (ulong)*(byte *)((long)ppbStack_1d8 + 0xc) * 0x100;
        lVar14 = (ulong)*(byte *)((long)ppbStack_1d8 + 0xf) +
                 (ulong)*(byte *)((long)ppbStack_1d8 + 0xe) * 0x100;
        puVar3 = (ushort *)
                 ((long)ppbVar30 +
                 (ulong)*(byte *)((long)ppbVar30 + (ulong)(uVar16 + uVar9 * iVar32) + lVar37) * 8 +
                 lVar14);
        uVar16 = (uint)CONCAT11(*(byte *)((long)ppbStack_1d8 + 0xc),
                                *(byte *)((long)ppbStack_1d8 + 0xd));
        iVar10 = 0;
        if (uVar9 != 0) {
          iVar10 = (int)(((uint)(*puVar3 >> 8) | (*puVar3 & 0xff00ff) << 8) - uVar16) / (int)uVar9;
        }
        bVar15 = (bool)(uVar27 != uVar23 | bVar45);
        if ((bVar15) &&
           (((ushort)(puVar3[2] >> 8 | puVar3[2] << 8) != 0xffff ||
            ((ushort)(puVar3[3] >> 8 | puVar3[3] << 8) != 0xffff)))) {
LAB_1097410bc:
          lVar37 = 100;
          if (*(byte *)((long)ppbVar34 + 0x5a) == 0) {
            lVar37 = 0x5c;
          }
          if ((uVar27 < uVar23) && (*(int *)((long)ppbVar34 + lVar37) != 0)) {
            param_3 = (byte **)(ulong)(*(int *)((long)ppbVar34 + lVar37) - 1);
            param_2 = (byte **)0x3;
            ppbVar17 = ppbVar34;
            FUN_109710ea8();
            uVar27 = *(uint *)((long)ppbVar34 + 0x5c);
            uVar23 = *(uint *)(ppbVar34 + 0xc);
          }
        }
        else {
          if ((iVar32 != 0) && ((((byte)puVar3[1] >> 6 & 1) == 0 || (iVar10 != 0)))) {
            if (uVar9 <= uVar26) {
              uVar26 = 1;
            }
            puVar4 = (ushort *)
                     ((long)ppbVar30 +
                     (ulong)*(byte *)((long)ppbVar30 + (ulong)uVar26 + lVar37) * 8 + lVar14);
            if ((!bVar15) ||
               (((ushort)(puVar4[2] >> 8 | puVar4[2] << 8) == 0xffff &&
                ((ushort)(puVar4[3] >> 8 | puVar4[3] << 8) == 0xffff)))) {
              iVar11 = 0;
              if (uVar9 != 0) {
                iVar11 = (int)(((uint)(*puVar4 >> 8) | (*puVar4 & 0xff00ff) << 8) - uVar16) /
                         (int)uVar9;
              }
              if ((iVar10 == iVar11) && (((byte)((byte)puVar4[1] ^ (byte)puVar3[1]) >> 6 & 1) == 0))
              goto LAB_109741018;
            }
            goto LAB_1097410bc;
          }
LAB_109741018:
          if (!bVar15) goto LAB_109741914;
          lVar14 = (ulong)*(byte *)((long)ppbVar30 + (ulong)(uVar9 * iVar32) + lVar37) * 8 + lVar14;
          uVar6 = *(ushort *)((long)ppbVar30 + lVar14 + 4);
          if (((ushort)(uVar6 >> 8 | uVar6 << 8) != 0xffff) ||
             (uVar6 = *(ushort *)((long)ppbVar30 + lVar14 + 6),
             (ushort)(uVar6 >> 8 | uVar6 << 8) != 0xffff)) goto LAB_1097410bc;
        }
        iVar31 = (int)param_3;
        if ((bool)(uVar27 != uVar23 | bVar45)) {
          uVar26 = (*(int *)(ppbVar34[0xe] + (long)ppbVar35 * 0x14) +
                   ((uint)(puVar3[2] >> 8) | (puVar3[2] & 0xff00ff) << 8)) * 2;
          uVar23 = 0x3fffffff;
          if ((uint)ppbStack_1f8 <= uVar26) {
            uVar23 = uVar26 - (uint)ppbStack_1f8 >> 1;
          }
          puVar4 = (ushort *)(uStack_1f0 + (ulong)uVar23 * 2);
          if (((byte *)((long)puVar4 + (2 - (long)ppbStack_1d0[6])) <=
               (byte *)(ulong)*(uint *)(ppbStack_1d0 + 8)) &&
             (uVar27 = *(uint *)((long)ppbVar34 + 0x5c),
             *(byte *)((long)puVar4 + 1) != 0 || (byte)*puVar4 != 0)) {
            param_2 = (byte **)0x3;
            ppbVar17 = ppbVar34;
            param_3 = ppbVar35;
            FUN_109710ea8();
            pbVar19 = ppbVar34[0xe];
            *(uint *)(pbVar19 + (long)ppbVar35 * 0x14) =
                 (uint)(*puVar4 >> 8) | (*puVar4 & 0xff00ff) << 8;
            uVar6 = *puVar4;
            uVar24 = (ulong)CONCAT14(*(byte *)((long)puVar4 + 1),
                                     (uint)(ushort)(CONCAT11((byte)uVar6,*(byte *)((long)puVar4 + 1)
                                                            ) >> 4));
            auVar60._0_8_ = uVar24 & 0x3f;
            auVar60._8_8_ = (uVar24 & 0x3f0000003f) >> 0x20;
            auVar42._8_8_ = 1;
            auVar42._0_8_ = 1;
            auVar42 = NEON_ushl(auVar42,auVar60,8);
            auVar60 = *(undefined1 (*) [16])(ppbStack_1d0 + 0x10);
            *(byte *)(ppbStack_1d0 + 0x11) = auVar42[8] | auVar60[8];
            *(byte *)((long)ppbStack_1d0 + 0x89) = auVar42[9] | auVar60[9];
            *(byte *)((long)ppbStack_1d0 + 0x8a) = auVar42[10] | auVar60[10];
            *(byte *)((long)ppbStack_1d0 + 0x8b) = auVar42[0xb] | auVar60[0xb];
            *(byte *)((long)ppbStack_1d0 + 0x8c) = auVar42[0xc] | auVar60[0xc];
            *(byte *)((long)ppbStack_1d0 + 0x8d) = auVar42[0xd] | auVar60[0xd];
            *(byte *)((long)ppbStack_1d0 + 0x8e) = auVar42[0xe] | auVar60[0xe];
            *(byte *)((long)ppbStack_1d0 + 0x8f) = auVar42[0xf] | auVar60[0xf];
            *(byte *)(ppbStack_1d0 + 0x10) = auVar42[0] | auVar60[0];
            *(byte *)((long)ppbStack_1d0 + 0x81) = auVar42[1] | auVar60[1];
            *(byte *)((long)ppbStack_1d0 + 0x82) = auVar42[2] | auVar60[2];
            *(byte *)((long)ppbStack_1d0 + 0x83) = auVar42[3] | auVar60[3];
            *(byte *)((long)ppbStack_1d0 + 0x84) = auVar42[4] | auVar60[4];
            *(byte *)((long)ppbStack_1d0 + 0x85) = auVar42[5] | auVar60[5];
            *(byte *)((long)ppbStack_1d0 + 0x86) = auVar42[6] | auVar60[6];
            *(byte *)((long)ppbStack_1d0 + 0x87) = auVar42[7] | auVar60[7];
            ppbStack_1d0[0x12] =
                 (byte *)((ulong)ppbStack_1d0[0x12] | 1L << ((ulong)(byte)((byte)uVar6 >> 1) & 0x3f)
                         );
            if ((int)uStack_208 != 0) {
              param_2 = (byte **)(ulong)((uint)(*puVar4 >> 8) | (*puVar4 & 0xff00ff) << 8);
              ppbVar17 = ppbStack_210;
              FUN_10972bfb4();
              *(short *)((long)(pbVar19 + (long)ppbVar35 * 0x14) + 0xc) = (short)ppbVar17;
            }
            uVar27 = *(uint *)((long)ppbVar34 + 0x5c);
          }
          if (*(int *)(ppbVar34 + 0xc) - 1U <= uVar27) {
            uVar27 = *(int *)(ppbVar34 + 0xc) - 1U;
          }
          uVar26 = (*(int *)(ppbVar34[0xe] + (ulong)uVar27 * 0x14) +
                   ((uint)(puVar3[3] >> 8) | (puVar3[3] & 0xff00ff) << 8)) * 2;
          uVar23 = 0x3fffffff;
          if ((uint)ppbStack_1f8 <= uVar26) {
            uVar23 = uVar26 - (uint)ppbStack_1f8 >> 1;
          }
          puVar4 = (ushort *)(uStack_1f0 + (ulong)uVar23 * 2);
          if (((byte *)((long)puVar4 + (2 - (long)ppbStack_1d0[6])) <=
               (byte *)(ulong)*(uint *)(ppbStack_1d0 + 8)) &&
             (uVar23 = (uint)(*puVar4 >> 8) | (*puVar4 & 0xff00ff) << 8, uVar23 != 0)) {
            pbVar19 = ppbVar34[0xe];
            *(uint *)(pbVar19 + (ulong)uVar27 * 0x14) = uVar23;
            uVar6 = *puVar4;
            uVar24 = (ulong)CONCAT14(*(byte *)((long)puVar4 + 1),
                                     (uint)(ushort)(CONCAT11((byte)uVar6,*(byte *)((long)puVar4 + 1)
                                                            ) >> 4));
            auVar43._0_8_ = uVar24 & 0x3f;
            auVar43._8_8_ = (uVar24 & 0x3f0000003f) >> 0x20;
            auVar61._8_8_ = 1;
            auVar61._0_8_ = 1;
            auVar42 = NEON_ushl(auVar61,auVar43,8);
            auVar60 = *(undefined1 (*) [16])(ppbStack_1d0 + 0x10);
            *(byte *)(ppbStack_1d0 + 0x11) = auVar42[8] | auVar60[8];
            *(byte *)((long)ppbStack_1d0 + 0x89) = auVar42[9] | auVar60[9];
            *(byte *)((long)ppbStack_1d0 + 0x8a) = auVar42[10] | auVar60[10];
            *(byte *)((long)ppbStack_1d0 + 0x8b) = auVar42[0xb] | auVar60[0xb];
            *(byte *)((long)ppbStack_1d0 + 0x8c) = auVar42[0xc] | auVar60[0xc];
            *(byte *)((long)ppbStack_1d0 + 0x8d) = auVar42[0xd] | auVar60[0xd];
            *(byte *)((long)ppbStack_1d0 + 0x8e) = auVar42[0xe] | auVar60[0xe];
            *(byte *)((long)ppbStack_1d0 + 0x8f) = auVar42[0xf] | auVar60[0xf];
            *(byte *)(ppbStack_1d0 + 0x10) = auVar42[0] | auVar60[0];
            *(byte *)((long)ppbStack_1d0 + 0x81) = auVar42[1] | auVar60[1];
            *(byte *)((long)ppbStack_1d0 + 0x82) = auVar42[2] | auVar60[2];
            *(byte *)((long)ppbStack_1d0 + 0x83) = auVar42[3] | auVar60[3];
            *(byte *)((long)ppbStack_1d0 + 0x84) = auVar42[4] | auVar60[4];
            *(byte *)((long)ppbStack_1d0 + 0x85) = auVar42[5] | auVar60[5];
            *(byte *)((long)ppbStack_1d0 + 0x86) = auVar42[6] | auVar60[6];
            *(byte *)((long)ppbStack_1d0 + 0x87) = auVar42[7] | auVar60[7];
            ppbStack_1d0[0x12] =
                 (byte *)((ulong)ppbStack_1d0[0x12] | 1L << ((ulong)(byte)((byte)uVar6 >> 1) & 0x3f)
                         );
            if ((int)uStack_208 != 0) {
              param_2 = (byte **)(ulong)((uint)(*puVar4 >> 8) | (*puVar4 & 0xff00ff) << 8);
              ppbVar17 = ppbStack_210;
              FUN_10972bfb4();
              *(short *)((long)(pbVar19 + (ulong)uVar27 * 0x14) + 0xc) = (short)ppbVar17;
            }
          }
          iVar31 = (int)param_3;
          bVar40 = (byte)puVar3[1];
          uVar27 = *(uint *)((long)ppbVar34 + 0x5c);
          uVar23 = *(uint *)(ppbVar34 + 0xc);
          uVar26 = uVar27;
          if ((char)bVar40 >= '\0') {
            uVar26 = (uint)ppbVar35;
          }
          ppbVar35 = (byte **)(ulong)uVar26;
          if ((uVar27 != uVar23) && (*(byte *)(ppbVar34 + 0xb) == 1)) goto code_r0x000109741348;
        }
      }
    }
  }
  else {
    if (bVar40 == 2) {
      ppbVar30 = param_1 + 1;
      bStack_1c0 = 0;
      ppbStack_1b8 = param_2;
      ppbStack_1b0 = ppbVar30;
      bVar40 = *(byte *)(param_1 + 2);
      bVar44 = *(byte *)((long)param_1 + 0x11);
      pbStack_238 = (byte *)((long)ppbVar30 + (ulong)bVar44 + (ulong)bVar40 * 0x100);
      bVar45 = *(byte *)((long)param_1 + 0x12);
      bVar46 = *(byte *)((long)param_1 + 0x13);
      uStack_1f0 = (byte *)((long)ppbVar30 + (ulong)bVar46 + (ulong)bVar45 * 0x100);
      pbStack_1a8 = pbStack_238;
      pbStack_1a0 = uStack_1f0;
      bVar47 = *(byte *)((long)param_1 + 0x14);
      bVar48 = *(byte *)((long)param_1 + 0x15);
      uStack_208 = (byte *)((long)ppbVar30 + (ulong)bVar48 + (long)(ulong)bVar47 * 0x100);
      pbStack_198 = uStack_208;
      uStack_190 = 0;
      ppbVar17 = (byte **)param_2[3];
      if (*(int *)(ppbVar17 + 3) == -1) {
        FUN_109710978();
      }
      uVar23 = *(uint *)((long)ppbVar30 +
                        (ulong)*(byte *)((long)ppbVar30 +
                                        (ulong)*(byte *)((long)param_1 + 0xd) +
                                        (ulong)*(byte *)((long)param_1 + 0xc) * 0x100 + 1) * 4 +
                        (ulong)*(byte *)((long)param_1 + 0xf) +
                        (ulong)*(byte *)((long)param_1 + 0xe) * 0x100);
      ppbStack_228 = ppbVar30;
      if ((uVar23 >> 8 & 0x3f00) == 0 && uVar23 >> 0x18 == 0) {
        uVar27 = (uint)(*(ushort *)(param_1 + 1) >> 8) | (*(ushort *)(param_1 + 1) & 0xff00ff) << 8;
        iVar32 = 0;
        if (uVar27 != 0) {
          iVar32 = (int)((((uVar23 & 0xff00ff00) >> 8 | (uVar23 & 0xff00ff) << 8) & 0xffff) -
                        (uint)CONCAT11(*(byte *)((long)param_1 + 0xc),*(byte *)((long)param_1 + 0xd)
                                      )) / (int)uVar27;
        }
        if ((iVar32 == 0) &&
           (((((ulong)ppbStack_1d0[0x13] & (ulong)ppbStack_1d0[0x10]) == 0 ||
             (((ulong)ppbStack_1d0[0x14] & (ulong)ppbStack_1d0[0x11]) == 0)) ||
            (((ulong)ppbStack_1d0[0x15] & (ulong)ppbStack_1d0[0x12]) == 0)))) goto LAB_109741914;
      }
      ppbVar30 = (byte **)ppbStack_1d0[4];
      *(ushort *)((long)ppbVar30 + 0x5a) = 1;
      ((ushort *)((long)ppbVar30 + 100))[0] = 0;
      ((ushort *)((long)ppbVar30 + 100))[1] = 0;
      ppbVar30[0xf] = ppbVar30[0xe];
      pbVar19 = ppbStack_1d0[0xf];
      if ((pbVar19 == (byte *)0x0) || (*(uint *)(pbVar19 + 4) < 2)) {
        puVar38 = (uint *)0x0;
      }
      else {
        puVar38 = *(uint **)(pbVar19 + 8);
      }
      ((ushort *)((long)ppbVar30 + 0x5c))[0] = 0;
      ((ushort *)((long)ppbVar30 + 0x5c))[1] = 0;
      unaff_x19 = (byte **)(ulong)bVar47;
      if (*(byte *)(ppbVar30 + 0xb) == 1) {
        uVar23 = 0;
        ppbVar17 = (byte **)0x0;
        param_1 = (byte **)0x0;
        uStack_23c = (uint)CONCAT11(bVar40,bVar44);
        ppbStack_1f8 = (byte **)CONCAT44(ppbStack_1f8._4_4_,(uint)CONCAT11(bVar45,bVar46));
        ppbStack_210 = (byte **)CONCAT44(ppbStack_210._4_4_,(uint)CONCAT11(bVar47,bVar48));
        while (ppbVar34 = ppbStack_228, uVar27 = *(uint *)(ppbVar30 + 0xc), puVar38 == (uint *)0x0)
        {
LAB_109740190:
          if (uVar23 < uVar27) {
            ppbVar35 = ppbStack_228;
            FUN_10974199c(ppbStack_228,*(undefined4 *)(ppbVar30[0xe] + (ulong)uVar23 * 0x14),
                          ppbStack_1d0 + 0x13);
            uVar26 = (uint)ppbVar35;
          }
          else {
            uVar26 = 0;
          }
          uVar9 = (uint)(*(ushort *)(ppbStack_1d8 + 1) >> 8) |
                  (*(ushort *)(ppbStack_1d8 + 1) & 0xff00ff) << 8;
          uVar16 = uVar26;
          if (uVar9 <= uVar26) {
            uVar16 = 1;
          }
          lVar37 = (ulong)*(byte *)((long)ppbStack_1d8 + 0xd) +
                   (ulong)*(byte *)((long)ppbStack_1d8 + 0xc) * 0x100;
          lVar14 = (ulong)*(byte *)((long)ppbStack_1d8 + 0xf) +
                   (ulong)*(byte *)((long)ppbStack_1d8 + 0xe) * 0x100;
          uVar8 = uVar9 * (int)param_1;
          unaff_x19 = (byte **)((long)ppbVar34 +
                               (ulong)*(byte *)((long)ppbVar34 + (ulong)(uVar16 + uVar8) + lVar37) *
                               4 + lVar14);
          uVar16 = (uint)CONCAT11(*(byte *)((long)ppbStack_1d8 + 0xc),
                                  *(byte *)((long)ppbStack_1d8 + 0xd));
          iVar31 = 0;
          if (uVar9 != 0) {
            iVar31 = (int)(((uint)(*(ushort *)unaff_x19 >> 8) |
                           (*(ushort *)unaff_x19 & 0xff00ff) << 8) - uVar16) / (int)uVar9;
          }
          pbStack_218 = (byte *)CONCAT44(pbStack_218._4_4_,iVar31);
          bVar40 = *(byte *)((long)unaff_x19 + 2);
          uVar18 = (uint)bVar40;
          ppbStack_220 = unaff_x19;
          if (*(byte *)((long)unaff_x19 + 3) == 0 && (bVar40 & 0x3f) == 0) {
            if (((int)param_1 != 0) && (((bVar40 >> 6 & 1) == 0 || (iVar31 != 0)))) {
              if (uVar9 <= uVar26) {
                uVar26 = 1;
              }
              puVar3 = (ushort *)
                       ((long)ppbVar34 +
                       (ulong)*(byte *)((long)ppbVar34 + (ulong)uVar26 + lVar37) * 4 + lVar14);
              if (*(byte *)((long)puVar3 + 3) == 0 && ((byte)puVar3[1] & 0x3f) == 0) {
                iVar32 = 0;
                if (uVar9 != 0) {
                  iVar32 = (int)(((uint)(*puVar3 >> 8) | (*puVar3 & 0xff00ff) << 8) - uVar16) /
                           (int)uVar9;
                }
                if ((iVar31 == iVar32) && (((byte)((byte)puVar3[1] ^ bVar40) >> 6 & 1) == 0))
                goto LAB_109740234;
              }
              goto LAB_109740294;
            }
LAB_109740234:
            lVar14 = (ulong)*(byte *)((long)ppbVar34 + (ulong)uVar8 + lVar37) * 4 + lVar14;
            if (*(byte *)((long)ppbVar34 + lVar14 + 3) != 0 ||
                (*(byte *)((long)ppbVar34 + lVar14 + 2) & 0x3f) != 0) goto LAB_109740294;
          }
          else {
LAB_109740294:
            lVar37 = 100;
            if (*(byte *)((long)ppbVar30 + 0x5a) == 0) {
              lVar37 = 0x5c;
            }
            if ((uVar23 < uVar27) && (*(int *)((long)ppbVar30 + lVar37) != 0)) {
              FUN_109710ea8(ppbVar30,3,*(int *)((long)ppbVar30 + lVar37) + -1,uVar23 + 1,1,1);
              uVar18 = (uint)*(byte *)((long)unaff_x19 + 2);
            }
          }
          ppbVar34 = ppbVar17;
          if (uVar18 >> 7 != 0) {
            iVar31 = (int)ppbVar17;
            if (iVar31 == 0) {
              uVar23 = 0;
              iVar32 = *(int *)((long)ppbVar30 + 100);
            }
            else {
              iVar32 = *(int *)((long)ppbVar30 + 100);
              uVar23 = iVar31 - (uint)(aiStack_18c[iVar31 - 1U & 0x3f] == iVar32);
            }
            ppbVar34 = (byte **)(ulong)(uVar23 + 1);
            aiStack_18c[uVar23 & 0x3f] = iVar32;
          }
          uVar23 = (uint)*(byte *)((long)unaff_x19 + 3) | (uVar18 & 0x3f) << 8;
          ppbVar17 = ppbVar34;
          if (((uVar23 != 0) && ((int)ppbVar34 != 0)) &&
             (*(uint *)((long)ppbVar30 + 0x5c) < *(uint *)(ppbVar30 + 0xc))) {
            uVar27 = 0;
            uStack_22c = *(undefined4 *)((long)ppbVar30 + 100);
            uVar26 = 0x1fffffff;
            if (uStack_23c <= uVar23) {
              uVar26 = uVar23 - uStack_23c >> 2;
            }
            pbVar19 = pbStack_238 + (ulong)uVar26 * 4;
            do {
              if ((int)ppbVar34 == 0) {
                ppbVar17 = (byte **)0x0;
                goto LAB_10974052c;
              }
              uVar23 = (int)ppbVar34 - 1;
              ppbVar34 = (byte **)(ulong)uVar23;
              iVar31 = aiStack_18c[uVar23 & 0x3f];
              ppbVar35 = ppbVar30;
              func_0x0001096f6478(ppbVar30,iVar31);
              param_1 = ppbVar34;
              if ((int)ppbVar35 == 0) {
LAB_1097405ac:
                uStack_190 = (uint)ppbVar17;
                unaff_x19 = ppbStack_220;
                goto LAB_109740554;
              }
              if ((ulong)*(uint *)(ppbStack_1d0 + 8) <
                  (ulong)((long)(pbVar19 + 4) - (long)ppbStack_1d0[6])) break;
              bVar40 = *pbVar19;
              uVar16 = (((uint)bVar40 << 0x18 & 0x3f000000 | (uint)pbVar19[1] << 0x10 |
                         (bVar40 >> 5 & 1) << 0x1e |
                        (uint)(*(ushort *)(pbVar19 + 2) >> 8) |
                        (*(ushort *)(pbVar19 + 2) & 0xff00ff) << 8) +
                       *(int *)(ppbVar30[0xe] + (ulong)*(uint *)((long)ppbVar30 + 0x5c) * 0x14)) * 2
              ;
              uVar26 = 0x3fffffff;
              if ((uint)ppbStack_1f8 <= uVar16) {
                uVar26 = uVar16 - (uint)ppbStack_1f8 >> 1;
              }
              if ((byte *)(ulong)*(uint *)(ppbStack_1d0 + 8) <
                  (byte *)((long)(uStack_1f0 + (ulong)uVar26 * 2) + (2 - (long)ppbStack_1d0[6])))
              break;
              uVar6 = *(ushort *)(uStack_1f0 + (ulong)uVar26 * 2);
              uVar27 = uVar27 + ((uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8);
              if (0x3f < bVar40) {
                bVar15 = (uint)ppbStack_210 <= uVar27;
                uVar26 = uVar27 - (uint)ppbStack_210;
                uVar27 = 0x3fffffff;
                if (bVar15) {
                  uVar27 = uVar26 >> 1;
                }
                if ((byte *)((long)(uStack_208 + (ulong)uVar27 * 2) + (2 - (long)ppbStack_1d0[6]))
                    <= (byte *)(ulong)*(uint *)(ppbStack_1d0 + 8)) {
                  uVar6 = *(ushort *)(uStack_208 + (ulong)uVar27 * 2);
                  uStack_1c4 = (uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8;
                  ppbVar35 = ppbVar30;
                  FUN_109730ba4(ppbVar30,1,1,&uStack_1c4);
                  if ((int)ppbVar35 != 0) {
                    ppbStack_200 = (byte **)CONCAT44(ppbStack_200._4_4_,
                                                     aiStack_18c[(int)ppbVar17 - 1U & 0x3f]);
LAB_109740498:
                    uVar26 = (int)ppbVar17 - 1;
                    if (uVar23 < uVar26) {
                      ppbVar35 = ppbVar30;
                      func_0x0001096f6478(ppbVar30,aiStack_18c[uVar26 & 0x3f]);
                      ppbVar17 = (byte **)(ulong)uVar26;
                      if ((int)ppbVar35 != 0) goto code_r0x0001097404b8;
                      goto LAB_10974053c;
                    }
                    ppbVar35 = ppbVar30;
                    func_0x0001096f6478(ppbVar30,(int)ppbStack_200 + 1);
                    if ((int)ppbVar35 != 0) {
                      func_0x0001096f67a8(ppbVar30,iVar31,*(undefined4 *)((long)ppbVar30 + 100));
                      goto LAB_109740520;
                    }
                  }
                  goto LAB_1097405ac;
                }
                break;
              }
LAB_109740520:
              pbVar19 = pbVar19 + 4;
            } while (-1 < (int)((uint)bVar40 << 0x18));
            uStack_190 = (uint)ppbVar17;
LAB_10974052c:
            func_0x0001096f6478(ppbVar30,uStack_22c);
            unaff_x19 = ppbStack_220;
            param_1 = ppbVar34;
          }
LAB_109740554:
          uVar23 = *(uint *)((long)ppbVar30 + 0x5c);
          if ((uVar23 == *(uint *)(ppbVar30 + 0xc)) || (*(byte *)(ppbVar30 + 0xb) != 1))
          goto LAB_1097405d0;
          if ((*(byte *)((long)unaff_x19 + 2) >> 6 & 1) == 0) goto LAB_109740588;
          iVar31 = *(int *)(ppbVar30 + 0x19);
          param_1 = (byte **)((ulong)pbStack_218 & 0xffffffff);
          *(int *)(ppbVar30 + 0x19) = iVar31 + -1;
          if (iVar31 < 1) {
LAB_109740588:
            FUN_109704924(ppbVar30);
            if (*(byte *)(ppbVar30 + 0xb) != 1) goto LAB_1097405d0;
            uVar23 = *(uint *)((long)ppbVar30 + 0x5c);
            param_1 = (byte **)((ulong)pbStack_218 & 0xffffffff);
          }
        }
        if (uVar23 < uVar27) {
          puVar39 = puVar38 + 3;
          do {
            puVar38 = puVar38 + -3;
            puVar1 = puVar39 + -2;
            puVar39 = puVar39 + -3;
          } while (*(uint *)(ppbVar30[0xe] + (ulong)uVar23 * 0x14 + 8) < *puVar1);
          do {
            puVar39 = puVar38 + 5;
            puVar38 = puVar38 + 3;
          } while (*puVar39 < *(uint *)(ppbVar30[0xe] + (ulong)uVar23 * 0x14 + 8));
        }
        if ((*(uint *)(ppbStack_1d0 + 0x1c) & *puVar38) != 0) goto LAB_109740190;
        unaff_x19 = ppbStack_228;
        if (uVar23 != uVar27) {
          pbStack_218 = (byte *)((ulong)pbStack_218 & 0xffffffff00000000);
          goto LAB_109740588;
        }
      }
LAB_1097405d0:
      unaff_x30 = 0x1097405d8;
      register0x00000008 = (BADSPACEBASE *)auStack_240;
      unaff_x20 = param_1;
      unaff_x29 = puVar2;
      goto FUN_1096f6314;
    }
    if (bVar40 == 4) {
      ppbVar30 = (byte **)param_2[0xe];
      if ((ushort)(*(ushort *)ppbVar30 >> 8 | *(ushort *)ppbVar30 << 8) == 1) {
        bVar15 = *(byte *)((long)ppbVar30 + 5) != 0 || *(byte *)((long)ppbVar30 + 4) != 0;
      }
      else {
        bVar15 = false;
      }
      ppbVar17 = (byte **)param_2[3];
      ppbVar34 = (byte **)(ulong)*(uint *)(ppbVar17 + 3);
      if (*(uint *)(ppbVar17 + 3) == 0xffffffff) {
        FUN_109710978();
        ppbVar34 = ppbVar17;
      }
      iVar31 = (int)param_3;
      uVar23 = *(uint *)(ppbStack_1d0[4] + 0x60);
      pbVar19 = ppbStack_1d0[0xf];
      if ((pbVar19 == (byte *)0x0) || (*(uint *)(pbVar19 + 4) < 2)) {
        puVar38 = (uint *)0x0;
      }
      else {
        puVar38 = *(uint **)(pbVar19 + 8);
      }
      uStack_1f0 = (byte *)CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0);
      if (uVar23 != 0) {
        uVar24 = 0;
        lVar37 = *(long *)(ppbStack_1d0[4] + 0x70);
        uStack_1e8 = 1;
        uStack_1f0._0_4_ = 1;
        uStack_1f0._4_4_ = 0;
        ppbVar35 = ppbStack_1d0;
        do {
          if (puVar38 == (uint *)0x0) {
LAB_109740cb4:
            puVar39 = (uint *)(lVar37 + uVar24 * 0x14);
            param_2 = (byte **)(ulong)*puVar39;
            ppbVar17 = ppbStack_1d8 + 1;
            param_3 = ppbVar34;
            FUN_10973f6ec();
            ppbVar35 = ppbStack_1d0;
            if (ppbVar17 != (byte **)0x0) {
              *puVar39 = (uint)(*(ushort *)ppbVar17 >> 8) | (*(ushort *)ppbVar17 & 0xff00ff) << 8;
              bVar40 = *(byte *)ppbVar17;
              uVar21 = (ulong)CONCAT14(*(byte *)((long)ppbVar17 + 1),
                                       (uint)(ushort)(CONCAT11(bVar40,*(byte *)((long)ppbVar17 + 1))
                                                     >> 4));
              auVar41._0_8_ = uVar21 & 0x3f;
              auVar41._8_8_ = (uVar21 & 0x3f0000003f) >> 0x20;
              auVar13._4_4_ = uStack_1f0._4_4_;
              auVar13._0_4_ = (uint)uStack_1f0;
              auVar13._8_8_ = uStack_1e8;
              auVar42 = NEON_ushl(auVar13,auVar41,8);
              auVar60 = *(undefined1 (*) [16])(ppbStack_1d0 + 0x10);
              *(byte *)(ppbStack_1d0 + 0x11) = auVar42[8] | auVar60[8];
              *(byte *)((long)ppbStack_1d0 + 0x89) = auVar42[9] | auVar60[9];
              *(byte *)((long)ppbStack_1d0 + 0x8a) = auVar42[10] | auVar60[10];
              *(byte *)((long)ppbStack_1d0 + 0x8b) = auVar42[0xb] | auVar60[0xb];
              *(byte *)((long)ppbStack_1d0 + 0x8c) = auVar42[0xc] | auVar60[0xc];
              *(byte *)((long)ppbStack_1d0 + 0x8d) = auVar42[0xd] | auVar60[0xd];
              *(byte *)((long)ppbStack_1d0 + 0x8e) = auVar42[0xe] | auVar60[0xe];
              *(byte *)((long)ppbStack_1d0 + 0x8f) = auVar42[0xf] | auVar60[0xf];
              *(byte *)(ppbStack_1d0 + 0x10) = auVar42[0] | auVar60[0];
              *(byte *)((long)ppbStack_1d0 + 0x81) = auVar42[1] | auVar60[1];
              *(byte *)((long)ppbStack_1d0 + 0x82) = auVar42[2] | auVar60[2];
              *(byte *)((long)ppbStack_1d0 + 0x83) = auVar42[3] | auVar60[3];
              *(byte *)((long)ppbStack_1d0 + 0x84) = auVar42[4] | auVar60[4];
              *(byte *)((long)ppbStack_1d0 + 0x85) = auVar42[5] | auVar60[5];
              *(byte *)((long)ppbStack_1d0 + 0x86) = auVar42[6] | auVar60[6];
              *(byte *)((long)ppbStack_1d0 + 0x87) = auVar42[7] | auVar60[7];
              ppbStack_1d0[0x12] =
                   (byte *)((ulong)ppbStack_1d0[0x12] | 1L << ((ulong)(bVar40 >> 1) & 0x3f));
              if (bVar15) {
                param_2 = (byte **)(ulong)((uint)(*(ushort *)ppbVar17 >> 8) |
                                          (*(ushort *)ppbVar17 & 0xff00ff) << 8);
                ppbVar17 = ppbVar30;
                FUN_10972bfb4();
                *(short *)(puVar39 + 3) = (short)ppbVar17;
                ppbVar35 = ppbStack_1d0;
              }
            }
          }
          else {
            uVar27 = *(uint *)(lVar37 + uVar24 * 0x14 + 8);
            puVar39 = puVar38 + 3;
            do {
              puVar38 = puVar38 + -3;
              puVar1 = puVar39 + -2;
              puVar39 = puVar39 + -3;
            } while (uVar27 < *puVar1);
            do {
              puVar39 = puVar38 + 5;
              puVar38 = puVar38 + 3;
            } while (*puVar39 < uVar27);
            if ((*(uint *)(ppbVar35 + 0x1c) & *puVar38) != 0) goto LAB_109740cb4;
          }
          iVar31 = (int)param_3;
          uVar24 = uVar24 + 1;
          uStack_1f0 = (byte *)CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0);
        } while (uVar24 != uVar23);
      }
    }
    else {
      uStack_1f0 = (byte *)CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0);
      if (bVar40 == 5) {
        ppbVar34 = param_1 + 1;
        bVar40 = *(byte *)(param_1 + 2);
        bVar44 = *(byte *)((long)param_1 + 0x11);
        ppbVar17 = (byte **)param_2[3];
        if (*(int *)(ppbVar17 + 3) == -1) {
          FUN_109710978();
        }
        iVar31 = (int)param_3;
        iVar32 = (int)param_2;
        uVar24 = *(ulong *)((long)ppbVar34 +
                           (ulong)*(byte *)((long)ppbVar34 +
                                           (ulong)*(byte *)((long)param_1 + 0xd) +
                                           (ulong)*(byte *)((long)param_1 + 0xc) * 0x100 + 1) * 8 +
                           (ulong)*(byte *)((long)param_1 + 0xf) +
                           (ulong)*(byte *)((long)param_1 + 0xe) * 0x100);
        uVar23 = (uint)uVar24;
        if (((uVar24 & 0x30000) == 0 && uVar23 >> 0x18 == 0) ||
           (uVar27 = (uint)(uVar24 >> 0x20),
           ((uint)(uVar24 >> 0x18) & 0xff00 | uVar27 >> 8 & 0xff) == 0xffff &&
           (uVar27 >> 8 & 0xff00 | (uint)(byte)(uVar24 >> 0x38)) == 0xffff)) {
          uVar27 = (uint)(*(ushort *)(param_1 + 1) >> 8) |
                   (*(ushort *)(param_1 + 1) & 0xff00ff) << 8;
          iVar10 = 0;
          if (uVar27 != 0) {
            iVar10 = (int)((((uVar23 & 0xff00ff00) >> 8 | (uVar23 & 0xff00ff) << 8) & 0xffff) -
                          (uint)CONCAT11(*(byte *)((long)param_1 + 0xc),
                                         *(byte *)((long)param_1 + 0xd))) / (int)uVar27;
          }
          if ((iVar10 == 0) &&
             (((uStack_1f0 = (byte *)CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0),
               ((ulong)ppbStack_1d0[0x13] & (ulong)ppbStack_1d0[0x10]) == 0 ||
               (uStack_1f0 = (byte *)CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0),
               ((ulong)ppbStack_1d0[0x14] & (ulong)ppbStack_1d0[0x11]) == 0)) ||
              (uStack_1f0 = (byte *)CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0),
              ((ulong)ppbStack_1d0[0x15] & (ulong)ppbStack_1d0[0x12]) == 0)))) goto LAB_109741914;
        }
        ppbVar30 = (byte **)ppbStack_1d0[4];
        *(ushort *)((long)ppbVar30 + 0x5a) = 1;
        ((ushort *)((long)ppbVar30 + 100))[0] = 0;
        ((ushort *)((long)ppbVar30 + 100))[1] = 0;
        ppbVar30[0xf] = ppbVar30[0xe];
        pbVar19 = ppbStack_1d0[0xf];
        if ((pbVar19 == (byte *)0x0) || (*(uint *)(pbVar19 + 4) < 2)) {
          puVar38 = (uint *)0x0;
        }
        else {
          puVar38 = *(uint **)(pbVar19 + 8);
        }
        ((ushort *)((long)ppbVar30 + 0x5c))[0] = 0;
        ((ushort *)((long)ppbVar30 + 0x5c))[1] = 0;
        if (*(byte *)(ppbVar30 + 0xb) == 1) {
          uVar23 = 0;
          uStack_1f0._0_4_ = 0;
          uVar24 = 0;
          ppbStack_200 = (byte **)((long)ppbVar34 + (ulong)bVar44 + (ulong)bVar40 * 0x100);
          ppbStack_220 = (byte **)((long)ppbStack_1d8 + (ulong)bVar40 * 0x100 + (ulong)bVar44 + 9);
          ppbStack_1f8 = ppbVar34;
LAB_10974062c:
          ppbVar35 = ppbStack_1d8;
          iVar31 = (int)param_3;
          iVar32 = (int)param_2;
          uVar27 = *(uint *)(ppbVar30 + 0xc);
          if (puVar38 == (uint *)0x0) {
LAB_10974068c:
            if (uVar23 < uVar27) {
              uVar26 = *(uint *)(ppbVar30[0xe] + (ulong)uVar23 * 0x14);
              ppbVar33 = (byte **)(ulong)uVar26;
              if (uVar26 == 0xffff) {
                uVar26 = 2;
              }
              else {
                ppbVar17 = ppbStack_1d0 + 0x13;
                FUN_10972a9e4();
                param_2 = ppbVar33;
                if ((int)ppbVar17 != 0) {
                  puVar3 = (ushort *)
                           ((long)ppbVar34 +
                           (ulong)*(byte *)((long)ppbVar35 + 0xb) +
                           (ulong)*(byte *)((long)ppbVar35 + 10) * 0x100);
                  uVar26 = uVar26 - ((uint)(*puVar3 >> 8) | (*puVar3 & 0xff00ff) << 8);
                  if (uVar26 < ((uint)(puVar3[1] >> 8) | (puVar3[1] & 0xff00ff) << 8)) {
                    uVar26 = (uint)*(byte *)((long)puVar3 + (ulong)uVar26 + 4);
                    goto LAB_109740704;
                  }
                }
                uVar26 = 1;
              }
            }
            else {
              uVar26 = 0;
            }
LAB_109740704:
            uVar9 = (uint)(*(ushort *)(ppbVar35 + 1) >> 8) |
                    (*(ushort *)(ppbVar35 + 1) & 0xff00ff) << 8;
            uVar16 = uVar26;
            if (uVar9 <= uVar26) {
              uVar16 = 1;
            }
            lVar37 = (ulong)*(byte *)((long)ppbVar35 + 0xd) +
                     (ulong)*(byte *)((long)ppbVar35 + 0xc) * 0x100;
            iVar31 = (int)uVar24;
            uVar8 = uVar9 * iVar31;
            lVar14 = (ulong)*(byte *)((long)ppbVar35 + 0xf) +
                     (ulong)*(byte *)((long)ppbVar35 + 0xe) * 0x100;
            puVar3 = (ushort *)
                     ((long)ppbVar34 +
                     (ulong)*(byte *)((long)ppbVar34 + (ulong)(uVar16 + uVar8) + lVar37) * 8 +
                     lVar14);
            uVar16 = (uint)CONCAT11(*(byte *)((long)ppbVar35 + 0xc),*(byte *)((long)ppbVar35 + 0xd))
            ;
            uVar18 = 0;
            if (uVar9 != 0) {
              uVar18 = (int)(((uint)(*puVar3 >> 8) | (*puVar3 & 0xff00ff) << 8) - uVar16) /
                       (int)uVar9;
            }
            uVar24 = (ulong)uVar18;
            bVar40 = (byte)puVar3[1];
            uVar36 = (uint)bVar40;
            uVar28 = (uint)bVar40 << 8;
            uVar29 = (uint)*(byte *)((long)puVar3 + 3);
            if ((*(byte *)((long)puVar3 + 3) == 0 && (bVar40 & 3) == 0) ||
               (((ushort)(puVar3[2] >> 8 | puVar3[2] << 8) == 0xffff &&
                ((ushort)(puVar3[3] >> 8 | puVar3[3] << 8) == 0xffff)))) {
              if ((iVar31 != 0) && (((bVar40 >> 6 & 1) == 0 || (uVar18 != 0)))) {
                if (uVar9 <= uVar26) {
                  uVar26 = 1;
                }
                puVar4 = (ushort *)
                         ((long)ppbVar34 +
                         (ulong)*(byte *)((long)ppbVar34 + (ulong)uVar26 + lVar37) * 8 + lVar14);
                if ((*(byte *)((long)puVar4 + 3) == 0 && ((byte)puVar4[1] & 3) == 0) ||
                   (((ushort)(puVar4[2] >> 8 | puVar4[2] << 8) == 0xffff &&
                    ((ushort)(puVar4[3] >> 8 | puVar4[3] << 8) == 0xffff)))) {
                  uVar26 = 0;
                  if (uVar9 != 0) {
                    uVar26 = (int)(((uint)(*puVar4 >> 8) | (*puVar4 & 0xff00ff) << 8) - uVar16) /
                             (int)uVar9;
                  }
                  if ((uVar18 == uVar26) && (((byte)((byte)puVar4[1] ^ bVar40) >> 6 & 1) == 0))
                  goto LAB_10974079c;
                }
                goto LAB_109740848;
              }
LAB_10974079c:
              lVar14 = (ulong)*(byte *)((long)ppbVar34 + (ulong)uVar8 + lVar37) * 8 + lVar14;
              if ((*(byte *)((long)ppbVar34 + lVar14 + 3) != 0 ||
                   (*(byte *)((long)ppbVar34 + lVar14 + 2) & 3) != 0) &&
                 ((uVar6 = *(ushort *)((long)ppbVar34 + lVar14 + 4),
                  (ushort)(uVar6 >> 8 | uVar6 << 8) != 0xffff ||
                  (uVar6 = *(ushort *)((long)ppbVar34 + lVar14 + 6),
                  (ushort)(uVar6 >> 8 | uVar6 << 8) != 0xffff)))) goto LAB_109740848;
            }
            else {
LAB_109740848:
              lVar37 = 100;
              if (*(byte *)((long)ppbVar30 + 0x5a) == 0) {
                lVar37 = 0x5c;
              }
              if ((uVar23 < uVar27) && (*(int *)((long)ppbVar30 + lVar37) != 0)) {
                param_3 = (byte **)(ulong)(*(int *)((long)ppbVar30 + lVar37) - 1);
                param_2 = (byte **)0x3;
                ppbVar17 = ppbVar30;
                FUN_109710ea8();
                uVar36 = (uint)(byte)puVar3[1];
                uVar29 = (uint)*(byte *)((long)puVar3 + 3);
                uVar28 = (uint)(byte)puVar3[1] << 8;
              }
            }
            uVar23 = *(uint *)((long)ppbVar30 + 100);
            if ((ushort)(puVar3[3] >> 8 | puVar3[3] << 8) == 0xffff) {
LAB_109740a34:
              if (-1 < (char)uVar36) {
                uVar23 = (uint)uStack_1f0;
              }
              uStack_1f0._0_4_ = uVar23;
              if ((ushort)(puVar3[2] >> 8 | puVar3[2] << 8) != 0xffff) {
                uVar23 = (uVar28 | uVar29) >> 5 & 0x1f;
                ppbVar34 = (byte **)(ulong)uVar23;
                iVar31 = *(int *)(ppbVar30 + 0x19);
                *(uint *)(ppbVar30 + 0x19) = iVar31 - uVar23;
                if (0 < (int)(iVar31 - uVar23)) {
                  ppbVar35 = (byte **)((long)ppbStack_200 +
                                      ((ulong)*(byte *)((long)puVar3 + 5) << 1 |
                                      (ulong)(byte)puVar3[2] << 9));
                  if ((((ulong)*(uint *)(ppbStack_1d0 + 8) <
                        (ulong)((long)ppbVar35 - (long)ppbStack_1d0[6])) ||
                      ((uint)(*(int *)(ppbStack_1d0 + 7) - (int)ppbVar35) < uVar23 * 2)) ||
                     (iVar31 = *(int *)((long)ppbStack_1d0 + 0x44) + uVar23 * -2,
                     *(int *)((long)ppbStack_1d0 + 0x44) = iVar31, iVar31 < 1)) {
                    ppbVar34 = (byte **)0x0;
                  }
                  iVar31 = *(int *)((long)ppbVar30 + 100);
                  if ((((*(uint *)(ppbVar30 + 0xc) <= *(uint *)((long)ppbVar30 + 0x5c)) ||
                       ((uVar36 >> 3 & 1) != 0)) ||
                      (ppbVar17 = ppbVar30, FUN_10973fabc(), (int)ppbVar17 != 0)) &&
                     (ppbVar17 = ppbVar30, param_2 = ppbVar34, FUN_10973fb3c(), param_3 = ppbVar35,
                     (int)ppbVar17 != 0)) {
                    if ((*(uint *)((long)ppbVar30 + 0x5c) < *(uint *)(ppbVar30 + 0xc)) &&
                       ((uVar36 >> 3 & 1) == 0)) {
                      *(uint *)((long)ppbVar30 + 0x5c) = *(uint *)((long)ppbVar30 + 0x5c) + 1;
                    }
                    iVar32 = (int)ppbVar34;
                    if ((uVar36 & 0x40) != 0) {
                      iVar32 = 0;
                    }
                    param_2 = (byte **)(ulong)(uint)(iVar31 + iVar32);
                    ppbVar17 = ppbVar30;
                    func_0x0001096f6478();
                    param_3 = ppbVar35;
                  }
                }
              }
            }
            else {
              uVar27 = uVar29 & 0x1f;
              ppbVar34 = (byte **)(ulong)uVar27;
              iVar31 = *(int *)(ppbVar30 + 0x19);
              *(uint *)(ppbVar30 + 0x19) = iVar31 - uVar27;
              if (0 < (int)(iVar31 - uVar27)) {
                pbStack_218 = (byte *)CONCAT44(pbStack_218._4_4_,uVar29);
                ppbStack_210 = (byte **)CONCAT44(ppbStack_210._4_4_,uVar28);
                uStack_208 = (byte *)CONCAT44(uStack_208._4_4_,uVar18);
                uVar24 = (ulong)*(byte *)((long)puVar3 + 7) << 1 | (ulong)(byte)puVar3[3] << 9;
                ppbVar35 = (byte **)((long)ppbStack_200 + uVar24);
                if ((((ulong)*(uint *)(ppbStack_1d0 + 8) <
                      (ulong)((long)ppbVar35 - (long)ppbStack_1d0[6])) ||
                    ((uint)(*(int *)(ppbStack_1d0 + 7) - (int)ppbVar35) < uVar27 * 2)) ||
                   (iVar31 = *(int *)((long)ppbStack_1d0 + 0x44) + uVar27 * -2,
                   *(int *)((long)ppbStack_1d0 + 0x44) = iVar31, iVar31 < 1)) {
                  ppbVar34 = (byte **)0x0;
                }
                iVar31 = *(int *)((long)ppbVar30 + 100);
                param_2 = (byte **)(ulong)(uint)uStack_1f0;
                ppbVar17 = ppbVar30;
                func_0x0001096f6478();
                if (((int)ppbVar17 != 0) &&
                   ((((*(uint *)(ppbVar30 + 0xc) <= *(uint *)((long)ppbVar30 + 0x5c) ||
                      ((uVar36 >> 2 & 1) != 0)) ||
                     (ppbVar17 = ppbVar30, FUN_10973fabc(), (int)ppbVar17 != 0)) &&
                    (ppbVar17 = ppbVar30, param_2 = ppbVar34, FUN_10973fb3c(), param_3 = ppbVar35,
                    (int)ppbVar17 != 0)))) {
                  iVar32 = (int)ppbVar34;
                  if (iVar32 != 0) {
                    bVar40 = *(byte *)(ppbStack_1d0 + 0x10);
                    bVar44 = *(byte *)((long)ppbStack_1d0 + 0x81);
                    bVar45 = *(byte *)((long)ppbStack_1d0 + 0x82);
                    bVar46 = *(byte *)((long)ppbStack_1d0 + 0x83);
                    bVar47 = *(byte *)((long)ppbStack_1d0 + 0x84);
                    bVar48 = *(byte *)((long)ppbStack_1d0 + 0x85);
                    bVar49 = *(byte *)((long)ppbStack_1d0 + 0x86);
                    bVar50 = *(byte *)((long)ppbStack_1d0 + 0x87);
                    bVar51 = *(byte *)(ppbStack_1d0 + 0x11);
                    bVar52 = *(byte *)((long)ppbStack_1d0 + 0x89);
                    bVar53 = *(byte *)((long)ppbStack_1d0 + 0x8a);
                    bVar54 = *(byte *)((long)ppbStack_1d0 + 0x8b);
                    bVar55 = *(byte *)((long)ppbStack_1d0 + 0x8c);
                    bVar56 = *(byte *)((long)ppbStack_1d0 + 0x8d);
                    bVar57 = *(byte *)((long)ppbStack_1d0 + 0x8e);
                    bVar58 = *(byte *)((long)ppbStack_1d0 + 0x8f);
                    pbVar20 = ppbStack_1d0[0x12];
                    pbVar19 = (byte *)((long)ppbStack_220 + uVar24);
                    do {
                      bVar7 = pbVar19[-1];
                      uVar24 = (ulong)CONCAT14(*pbVar19,(uint)(ushort)(CONCAT11(bVar7,*pbVar19) >> 4
                                                                      ));
                      auVar59._0_8_ = uVar24 & 0x3f;
                      auVar59._8_8_ = (uVar24 & 0x3f0000003f) >> 0x20;
                      auVar12._8_8_ = 1;
                      auVar12._0_8_ = 1;
                      auVar60 = NEON_ushl(auVar12,auVar59,8);
                      bVar40 = auVar60[0] | bVar40;
                      bVar44 = auVar60[1] | bVar44;
                      bVar45 = auVar60[2] | bVar45;
                      bVar46 = auVar60[3] | bVar46;
                      bVar47 = auVar60[4] | bVar47;
                      bVar48 = auVar60[5] | bVar48;
                      bVar49 = auVar60[6] | bVar49;
                      bVar50 = auVar60[7] | bVar50;
                      bVar51 = auVar60[8] | bVar51;
                      bVar52 = auVar60[9] | bVar52;
                      bVar53 = auVar60[10] | bVar53;
                      bVar54 = auVar60[0xb] | bVar54;
                      bVar55 = auVar60[0xc] | bVar55;
                      bVar56 = auVar60[0xd] | bVar56;
                      bVar57 = auVar60[0xe] | bVar57;
                      bVar58 = auVar60[0xf] | bVar58;
                      *(byte *)(ppbStack_1d0 + 0x11) = bVar51;
                      *(byte *)((long)ppbStack_1d0 + 0x89) = bVar52;
                      *(byte *)((long)ppbStack_1d0 + 0x8a) = bVar53;
                      *(byte *)((long)ppbStack_1d0 + 0x8b) = bVar54;
                      *(byte *)((long)ppbStack_1d0 + 0x8c) = bVar55;
                      *(byte *)((long)ppbStack_1d0 + 0x8d) = bVar56;
                      *(byte *)((long)ppbStack_1d0 + 0x8e) = bVar57;
                      *(byte *)((long)ppbStack_1d0 + 0x8f) = bVar58;
                      *(byte *)(ppbStack_1d0 + 0x10) = bVar40;
                      *(byte *)((long)ppbStack_1d0 + 0x81) = bVar44;
                      *(byte *)((long)ppbStack_1d0 + 0x82) = bVar45;
                      *(byte *)((long)ppbStack_1d0 + 0x83) = bVar46;
                      *(byte *)((long)ppbStack_1d0 + 0x84) = bVar47;
                      *(byte *)((long)ppbStack_1d0 + 0x85) = bVar48;
                      *(byte *)((long)ppbStack_1d0 + 0x86) = bVar49;
                      *(byte *)((long)ppbStack_1d0 + 0x87) = bVar50;
                      pbVar20 = (byte *)(1L << ((ulong)(bVar7 >> 1) & 0x3f) | (ulong)pbVar20);
                      ppbStack_1d0[0x12] = pbVar20;
                      ppbVar34 = (byte **)((long)ppbVar34 + -1);
                      pbVar19 = pbVar19 + 2;
                    } while (ppbVar34 != (byte **)0x0);
                  }
                  if (*(uint *)((long)ppbVar30 + 0x5c) < *(uint *)(ppbVar30 + 0xc) &&
                      (uVar36 & 4) == 0) {
                    *(uint *)((long)ppbVar30 + 0x5c) = *(uint *)((long)ppbVar30 + 0x5c) + 1;
                  }
                  param_2 = (byte **)(ulong)(uint)(iVar31 + iVar32);
                  ppbVar17 = ppbVar30;
                  func_0x0001096f6478();
                  param_3 = ppbVar35;
                  if ((int)ppbVar17 != 0) {
                    param_2 = (byte **)0x3;
                    param_3 = (byte **)(ulong)(uint)uStack_1f0;
                    ppbVar17 = ppbVar30;
                    FUN_109710ea8();
                    uVar24 = (ulong)uStack_208 & 0xffffffff;
                    uVar28 = (uint)ppbStack_210;
                    uVar29 = (uint)pbStack_218;
                    goto LAB_109740a34;
                  }
                }
                uVar24 = (ulong)uStack_208 & 0xffffffff;
              }
            }
            iVar31 = (int)param_3;
            iVar32 = (int)param_2;
            uVar23 = *(uint *)((long)ppbVar30 + 0x5c);
            if ((uVar23 != *(uint *)(ppbVar30 + 0xc)) && (*(byte *)(ppbVar30 + 0xb) == 1))
            goto code_r0x000109740b54;
          }
          else {
            if (uVar23 < uVar27) {
              puVar39 = puVar38 + 3;
              do {
                puVar38 = puVar38 + -3;
                puVar1 = puVar39 + -2;
                puVar39 = puVar39 + -3;
              } while (*(uint *)(ppbVar30[0xe] + (ulong)uVar23 * 0x14 + 8) < *puVar1);
              do {
                puVar39 = puVar38 + 5;
                puVar38 = puVar38 + 3;
              } while (*puVar39 < *(uint *)(ppbVar30[0xe] + (ulong)uVar23 * 0x14 + 8));
            }
            if ((*(uint *)(ppbStack_1d0 + 0x1c) & *puVar38) != 0) goto LAB_10974068c;
            if (uVar23 != uVar27) {
              uVar24 = 0;
              goto LAB_109740b70;
            }
          }
        }
LAB_109740bcc:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
FUN_1096f6314:
          *(byte ***)((long)register0x00000008 + -0x20) = unaff_x20;
          *(byte ***)((long)register0x00000008 + -0x18) = unaff_x19;
          *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
          *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
          if (*(byte *)(ppbVar30 + 0xb) == 1) {
            ppbVar17 = ppbVar30;
            func_0x0001096f638c(ppbVar30,*(int *)(ppbVar30 + 0xc) - *(int *)((long)ppbVar30 + 0x5c))
            ;
            if ((int)ppbVar17 != 0) {
              if (ppbVar30[0xf] != ppbVar30[0xe]) {
                ppbVar30[0x10] = ppbVar30[0xe];
                ppbVar30[0xe] = ppbVar30[0xf];
              }
              *(undefined4 *)(ppbVar30 + 0xc) = *(undefined4 *)((long)ppbVar30 + 100);
              ppbVar17 = (byte **)0x1;
            }
          }
          else {
            ppbVar17 = (byte **)0x0;
          }
          *(byte *)((long)ppbVar30 + 0x5a) = 0;
          ((ushort *)((long)ppbVar30 + 100))[0] = 0;
          ((ushort *)((long)ppbVar30 + 100))[1] = 0;
          ppbVar30[0xf] = ppbVar30[0xe];
          ((ushort *)((long)ppbVar30 + 0x5c))[0] = 0;
          ((ushort *)((long)ppbVar30 + 0x5c))[1] = 0;
          return ppbVar17;
        }
        goto LAB_109741998;
      }
    }
  }
LAB_109741914:
  iVar32 = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return ppbVar17;
  }
LAB_109741998:
  ___stack_chk_fail();
  if (iVar32 == 0xffff) {
    return (byte **)0x2;
  }
  FUN_10972a9e4();
  if (iVar31 != 0) {
    puVar3 = (ushort *)
             ((long)ppbVar17 +
             (ulong)*(byte *)((long)ppbVar17 + 3) + (ulong)*(byte *)((long)ppbVar17 + 2) * 0x100);
    uVar23 = iVar32 - ((uint)(*puVar3 >> 8) | (*puVar3 & 0xff00ff) << 8);
    if (uVar23 < ((uint)(puVar3[1] >> 8) | (puVar3[1] & 0xff00ff) << 8)) {
      return (byte **)(ulong)*(byte *)((long)puVar3 + (ulong)uVar23 + 4);
    }
  }
  return (byte **)0x1;
code_r0x000109741618:
  ppbVar30 = ppbStack_210;
  if ((((byte)puVar3[1] >> 6 & 1) == 0) ||
     (iVar31 = *(int *)(ppbVar34 + 0x19), *(int *)(ppbVar34 + 0x19) = iVar31 + -1, iVar31 < 1)) {
LAB_109741634:
    ppbVar17 = ppbVar34;
    FUN_109704924();
    iVar31 = (int)param_3;
    uStack_1f0 = (byte *)CONCAT44(uStack_1f0._4_4_,(uint)uStack_1f0);
    if (*(byte *)(ppbVar34 + 0xb) != 1) goto LAB_109741914;
    uVar23 = *(uint *)((long)ppbVar34 + 0x5c);
  }
  goto LAB_1097413d0;
code_r0x000109741348:
  bVar45 = (char)bVar40 < '\0' | bVar45;
  iVar32 = iVar10;
  if (((bVar40 >> 6 & 1) == 0) ||
     (iVar31 = *(int *)(ppbVar34 + 0x19), *(int *)(ppbVar34 + 0x19) = iVar31 + -1, iVar31 < 1)) {
LAB_109741368:
    ppbVar17 = ppbVar34;
    FUN_109704924();
    iVar31 = (int)param_3;
    if (*(byte *)(ppbVar34 + 0xb) != 1) goto LAB_109741914;
    uVar27 = *(uint *)((long)ppbVar34 + 0x5c);
    uVar23 = *(uint *)(ppbVar34 + 0xc);
  }
  goto LAB_109740ea4;
code_r0x0001097404b8:
  *(ushort *)(ppbVar30[0xe] + (ulong)*(uint *)((long)ppbVar30 + 0x5c) * 0x14 + 0x10) =
       *(ushort *)(ppbVar30[0xe] + (ulong)*(uint *)((long)ppbVar30 + 0x5c) * 0x14 + 0x10) | 0x20;
  uStack_1c4 = 0xffff;
  ppbVar35 = ppbVar30;
  FUN_109730ba4(ppbVar30,1,1,&uStack_1c4);
  if (((ulong)ppbVar35 & 1) == 0) {
LAB_10974053c:
    uStack_190 = uVar26;
    unaff_x19 = ppbStack_220;
    goto LAB_109740554;
  }
  goto LAB_109740498;
code_r0x000109740b54:
  ppbVar34 = ppbStack_1f8;
  if ((((byte)puVar3[1] >> 6 & 1) == 0) ||
     (iVar31 = *(int *)(ppbVar30 + 0x19), *(int *)(ppbVar30 + 0x19) = iVar31 + -1, iVar31 < 1)) {
LAB_109740b70:
    ppbVar17 = ppbVar30;
    FUN_109704924();
    iVar31 = (int)param_3;
    iVar32 = (int)param_2;
    if (*(byte *)(ppbVar30 + 0xb) != 1) goto LAB_109740bcc;
    uVar23 = *(uint *)((long)ppbVar30 + 0x5c);
  }
  goto LAB_10974062c;
}



/* Entry: 10974199c; end: 109741a87;  */

undefined1 FUN_10974199c(long param_1,int param_2,int param_3)

{
  ushort *puVar1;
  uint uVar2;
  
  if (param_2 == 0xffff) {
    return 2;
  }
  FUN_10972a9e4();
  if (param_3 != 0) {
    puVar1 = (ushort *)
             (param_1 + (ulong)*(byte *)(param_1 + 2) * 0x100 + (ulong)*(byte *)(param_1 + 3));
    uVar2 = param_2 - ((uint)(*puVar1 >> 8) | (*puVar1 & 0xff00ff) << 8);
    if (uVar2 < ((uint)(puVar1[1] >> 8) | (puVar1[1] & 0xff00ff) << 8)) {
      return *(undefined1 *)((long)puVar1 + (ulong)uVar2 + 4);
    }
  }
  return 1;
}



/* Entry: 109741a88; end: 109741aeb;  */

void FUN_109741a88(undefined8 *param_1)

{
  if ((param_1 != (undefined8 *)0x0) && (param_1 != (undefined8 *)&UNK_10dfe4888)) {
    FUN_1096f5a5c(*param_1);
    *param_1 = 0;
    if (*(int *)(param_1 + 1) != 0) {
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      _free(param_1[2]);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(param_1);
    return;
  }
  return;
}



/* Entry: 109741aec; end: 1097421b3;  */

undefined8 * FUN_109741aec(int *param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  int *piVar8;
  long lVar9;
  undefined8 uVar10;
  byte *pbVar12;
  long lVar13;
  byte *pbVar14;
  ulong *puVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  uint uVar24;
  byte *pbVar25;
  long lStack_100;
  int iStack_f4;
  undefined4 auStack_f0 [2];
  long lStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  byte bStack_c8;
  int iStack_c4;
  int *piStack_c0;
  int iStack_b8;
  undefined2 uStack_b4;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  int *piVar11;
  
  puVar7 = (undefined8 *)0x1;
  _calloc(1,0x18);
  if (puVar7 != (undefined8 *)0x0) {
    auStack_f0[0] = 0;
    iStack_c4 = 0;
    piStack_c0 = (int *)0x0;
    uStack_e0 = 0;
    lStack_e8 = 0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    bStack_c8 = 0;
    iStack_b8 = 0x10000;
    uStack_b4 = 0;
    iVar6 = param_1[6];
    if (iVar6 == -1) {
      piVar11 = param_1;
      FUN_109710978();
      iVar6 = (int)piVar11;
    }
    uStack_b4 = CONCAT11(uStack_b4._1_1_,1);
    piVar11 = (int *)&UNK_10dfe4888;
    iStack_b8 = iVar6;
    if (*(code **)(param_1 + 8) != (code *)0x0) {
      piVar11 = param_1;
      (**(code **)(param_1 + 8))(param_1,0x6b657278,*(undefined8 *)(param_1 + 10));
      if (piVar11 == (int *)0x0) {
        piVar11 = (int *)&UNK_10dfe4888;
      }
    }
    if (*piVar11 != 0) {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar5) {
          *piVar11 = *piVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    piStack_c0 = piVar11;
    bVar2 = 0;
    do {
      bStack_c8 = bVar2;
      lVar20 = *(long *)(piStack_c0 + 4);
      uStack_d8._0_4_ = piStack_c0[6];
      uStack_e0 = lVar20 + (ulong)(uint)uStack_d8;
      uVar3 = (uint)uStack_d8 << 6;
      if (uVar3 < 0x4001) {
        uVar3 = 0x4000;
      }
      if (0x3ffffffe < uVar3) {
        uVar3 = 0x3fffffff;
      }
      uStack_d8._4_4_ = 0x3fffffff;
      if ((uint)uStack_d8 >> 0x1a == 0) {
        uStack_d8._4_4_ = uVar3;
      }
      auStack_f0[0] = 0;
      iStack_c4 = 0;
      uStack_d0 = uStack_d0 & 0xffffffff;
      lStack_e8 = lVar20;
      if (lVar20 == 0) {
        FUN_1096f5a5c();
        piStack_c0 = (int *)0x0;
        lStack_e8 = 0;
        uStack_e0 = 0;
        uStack_d8 = (ulong)uStack_d8._4_4_ << 0x20;
        goto LAB_109741c94;
      }
      lVar23 = lVar20;
      FUN_1097421b4(lVar20,auStack_f0);
      if ((int)lVar23 != 0) {
        if (iStack_c4 == 0) {
          FUN_1096f5a5c(piStack_c0);
          uStack_d8 = (ulong)uStack_d8._4_4_ << 0x20;
        }
        else {
          iStack_c4 = 0;
          FUN_1097421b4(lVar20,auStack_f0);
          iVar6 = iStack_c4;
          FUN_1096f5a5c(piStack_c0);
          uStack_d8 = (ulong)uStack_d8._4_4_ << 0x20;
          if (((uint)(iVar6 == 0) & (uint)lVar20) == 0) goto LAB_109741c84;
        }
        piStack_c0 = (int *)0x0;
        uStack_e0 = 0;
        lStack_e8 = 0;
        if (piVar11[1] != 0) {
          piVar11[1] = 0;
        }
        goto LAB_109741c94;
      }
      if ((iStack_c4 == 0) || ((bStack_c8 & 1) != 0)) goto LAB_109741c70;
      if ((piVar11[1] == 0) || (piVar8 = piVar11, FUN_1096f59a0(), ((ulong)piVar8 & 1) == 0)) {
        uStack_e0 = (ulong)(uint)piVar11[6];
        lStack_e8 = 0;
        goto LAB_109741c70;
      }
      uStack_e0 = *(long *)(piVar11 + 4) + (ulong)(uint)piVar11[6];
      bVar2 = 1;
    } while (*(long *)(piVar11 + 4) != 0);
    lStack_e8 = 0;
LAB_109741c70:
    FUN_1096f5a5c(piStack_c0);
    uStack_d8 = (ulong)uStack_d8._4_4_ << 0x20;
LAB_109741c84:
    piStack_c0 = (int *)0x0;
    uStack_e0 = 0;
    lStack_e8 = 0;
    FUN_1096f5a5c(piVar11);
    piVar11 = (int *)&UNK_10dfe4888;
LAB_109741c94:
    *puVar7 = piVar11;
    piVar8 = (int *)&UNK_10dfe4888;
    if (7 < (uint)piVar11[6]) {
      piVar8 = *(int **)(piVar11 + 4);
    }
    iStack_f4 = param_1[6];
    if (iStack_f4 == -1) {
      FUN_109710978();
      iStack_f4 = (int)param_1;
    }
    uVar3 = (piVar8[1] & 0xff00ff00U) >> 8 | (piVar8[1] & 0xff00ffU) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    if (uVar3 == 0) {
      uVar22 = 0;
      uVar18 = 0;
      lVar20 = 0;
    }
    else {
      uVar22 = 0;
      uVar18 = 0;
      lVar20 = 0;
      lVar23 = 0;
      lStack_100 = 0;
      uVar19 = 0;
      uVar24 = 0;
      pbVar25 = (byte *)(piVar8 + 2);
      do {
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_b0 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        bVar2 = pbVar25[7];
        if (bVar2 < 2) {
          if (bVar2 == 0) {
            uVar1 = (*(uint *)(pbVar25 + 0xc) & 0xff00ff00) >> 8 |
                    (*(uint *)(pbVar25 + 0xc) & 0xff00ff) << 8;
            uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
            if (uVar1 != 0) {
              uStack_a0 = 0;
              uStack_a8 = 0;
              uStack_b0 = 0;
              uStack_88 = 0;
              uStack_90 = 0;
              uStack_98 = 0;
              pbVar12 = pbVar25 + 0x1c;
              do {
                uStack_98 = 1L << ((ulong)(ushort)(CONCAT11(*pbVar12,pbVar12[1]) >> 4) & 0x3f) |
                            uStack_98;
                uStack_90 = 1L << ((ulong)pbVar12[1] & 0x3f) | uStack_90;
                uStack_88 = 1L << ((ulong)(*pbVar12 >> 1) & 0x3f) | uStack_88;
                uStack_b0 = 1L << ((ulong)(ushort)(CONCAT11(pbVar12[2],pbVar12[3]) >> 4) & 0x3f) |
                            uStack_b0;
                uStack_a8 = 1L << ((ulong)pbVar12[3] & 0x3f) | uStack_a8;
                uStack_a0 = 1L << ((ulong)(pbVar12[2] >> 1) & 0x3f) | uStack_a0;
                pbVar12 = pbVar12 + 6;
              } while (pbVar12 != pbVar25 + (ulong)uVar1 * 6 + 0x1c);
            }
          }
          else if (bVar2 == 1) {
            uStack_78 = 0;
            uStack_70 = 0;
            uStack_80 = 0;
            FUN_10973d480(pbVar25 + (ulong)pbVar25[0x13] +
                                    (ulong)pbVar25[0x12] * 0x100 +
                                    (ulong)pbVar25[0x10] * 0x1000000 +
                                    (ulong)pbVar25[0x11] * 0x10000 + 0xc,&uStack_80,iStack_f4);
            goto LAB_109741e5c;
          }
        }
        else if (bVar2 == 2) {
          FUN_10973d480(pbVar25 + (ulong)pbVar25[0x13] +
                                  (ulong)pbVar25[0x12] * 0x100 +
                                  (ulong)pbVar25[0x10] * 0x1000000 + (ulong)pbVar25[0x11] * 0x10000,
                        &uStack_98,iStack_f4);
          pbVar12 = pbVar25 + 0x14;
          pbVar14 = pbVar25 + 0x15;
          pbVar17 = pbVar25 + 0x16;
          pbVar16 = pbVar25 + 0x17;
LAB_109741df4:
          FUN_10973d480(pbVar25 + (ulong)*pbVar16 +
                                  (ulong)*pbVar17 * 0x100 +
                                  (ulong)*pbVar12 * 0x1000000 + (ulong)*pbVar14 * 0x10000,&uStack_b0
                        ,iStack_f4);
        }
        else if (bVar2 == 4) {
          uStack_78 = 0;
          uStack_70 = 0;
          uStack_80 = 0;
          FUN_10973d480(pbVar25 + (ulong)pbVar25[0x13] +
                                  (ulong)pbVar25[0x12] * 0x100 +
                                  (ulong)pbVar25[0x10] * 0x1000000 + (ulong)pbVar25[0x11] * 0x10000
                                  + 0xc,&uStack_80,iStack_f4);
LAB_109741e5c:
          uStack_98 = uStack_98 | uStack_80;
          uStack_90 = uStack_78;
          uStack_88 = uStack_70;
          uStack_b0 = uStack_b0 | uStack_80;
          uStack_a8 = uStack_78;
          uStack_a0 = uStack_70;
        }
        else if (bVar2 == 6) {
          lVar9 = (ulong)pbVar25[0x16] * 0x100 +
                  (ulong)pbVar25[0x14] * 0x1000000 + (ulong)pbVar25[0x15] * 0x10000;
          if ((pbVar25[0xf] & 1) == 0) {
            FUN_10973d480(pbVar25 + (ulong)pbVar25[0x17] + lVar9,&uStack_98,iStack_f4);
            pbVar12 = pbVar25 + 0x18;
            pbVar14 = pbVar25 + 0x19;
            pbVar17 = pbVar25 + 0x1a;
            pbVar16 = pbVar25 + 0x1b;
            goto LAB_109741df4;
          }
          FUN_109742e14(pbVar25 + (ulong)pbVar25[0x17] + lVar9,&uStack_98,iStack_f4);
          FUN_109742e14(pbVar25 + (ulong)pbVar25[0x1b] +
                                  (ulong)pbVar25[0x1a] * 0x100 +
                                  (ulong)pbVar25[0x18] * 0x1000000 + (ulong)pbVar25[0x19] * 0x10000,
                        &uStack_b0,iStack_f4);
        }
        uVar1 = uVar19 + 1;
        lVar9 = lVar20;
        lVar13 = lVar23;
        uVar21 = uVar22;
        if ((int)uVar19 < (int)uVar22) {
LAB_109741f94:
          puVar15 = (ulong *)(lVar13 + (ulong)uVar19 * 0x30);
          puVar15[2] = uStack_88;
          puVar15[1] = uStack_90;
          *puVar15 = uStack_98;
          puVar15[5] = uStack_a0;
          puVar15[4] = uStack_a8;
          puVar15[3] = uStack_b0;
          lVar23 = lVar13;
          lVar20 = lVar9;
          uVar18 = uVar1;
          uVar19 = uVar1;
          lStack_100 = lVar13;
          uVar22 = uVar21;
        }
        else {
          if (-1 < (int)uVar22) {
            if (uVar22 < uVar1) {
              do {
                uVar21 = uVar21 + (uVar21 >> 1) + 8;
              } while (uVar21 < uVar1);
              if ((0x5555555 < uVar21) ||
                 (lVar9 = lStack_100, FUN_1097431e0(lStack_100,uVar21), lVar13 = lVar9, lVar9 == 0))
              {
                uVar22 = ~uVar22;
                goto LAB_10974204c;
              }
            }
            goto LAB_109741f94;
          }
LAB_10974204c:
          uRam000000011382ab48 = 0;
          uRam000000011382ab40 = 0;
          uRam000000011382ab58 = 0;
          uRam000000011382ab50 = 0;
          uRam000000011382ab38 = 0;
          uRam000000011382ab30 = 0;
        }
        pbVar25 = pbVar25 + (ulong)pbVar25[3] +
                            (ulong)pbVar25[2] * 0x100 +
                            (ulong)*pbVar25 * 0x1000000 + (ulong)pbVar25[1] * 0x10000;
        uVar24 = uVar24 + 1;
      } while (uVar24 != uVar3);
    }
    iVar6 = *(int *)(puVar7 + 1);
    *(uint *)(puVar7 + 1) = uVar22;
    *(uint *)((long)puVar7 + 0xc) = uVar18;
    uVar10 = puVar7[2];
    puVar7[2] = lVar20;
    if (iVar6 != 0) {
      _free(uVar10);
    }
    FUN_109710c0c(auStack_f0);
  }
  return puVar7;
}



/* Entry: 1097421b4; end: 1097429a7;  */

bool FUN_1097421b4(ushort *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  bool bVar6;
  uint *puVar7;
  uint *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ushort uVar17;
  int iVar18;
  uint uVar19;
  byte *pbVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  int iVar26;
  uint *puVar27;
  uint uVar28;
  uint uVar5;
  
  if (((ulong)((long)param_1 + (2 - *(long *)(param_2 + 8))) <= (ulong)*(uint *)(param_2 + 0x18)) &&
     (uVar17 = *param_1 >> 8 | *param_1 << 8, 1 < uVar17)) {
    puVar27 = (uint *)(param_1 + 4);
    lVar14 = *(long *)(param_2 + 8);
    uVar15 = (ulong)*(uint *)(param_2 + 0x18);
    if ((ulong)((long)puVar27 - lVar14) <= uVar15) {
      uVar4 = (*(uint *)(param_1 + 2) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 2) & 0xff00ff) << 8;
      uVar5 = uVar4 >> 0x10 | uVar4 << 0x10;
      if (uVar5 != 0) {
        uVar28 = 0;
        do {
          puVar8 = puVar27 + 3;
          if (uVar15 < (ulong)((long)puVar8 - lVar14)) {
            return false;
          }
          puVar7 = puVar27;
          if (uVar5 - 1 <= uVar28) {
            puVar7 = (uint *)0x0;
          }
          FUN_1097429a8(param_2,puVar7);
          if (((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar8 - *(long *)(param_2 + 8))) ||
             (uVar12 = (*puVar27 & 0xff00ff00) >> 8 | (*puVar27 & 0xff00ff) << 8,
             uVar12 = uVar12 >> 0x10 | uVar12 << 0x10, uVar12 < 0xc)) goto LAB_109742950;
          uVar16 = (long)puVar27 - *(long *)(param_2 + 8);
          uVar15 = (ulong)*(uint *)(param_2 + 0x18);
          if ((uVar15 < uVar16) ||
             ((iVar26 = (int)puVar27, (uint)(*(int *)(param_2 + 0x10) - iVar26) < uVar12 ||
              (iVar13 = *(int *)(param_2 + 0x1c) - uVar12, *(int *)(param_2 + 0x1c) = iVar13,
              iVar13 < 1)))) goto LAB_109742950;
          bVar3 = *(byte *)((long)puVar27 + 7);
          if (bVar3 < 2) {
            if (bVar3 == 0) {
              if ((((uVar15 < uVar16 + 0x14) ||
                   (uVar12 = (puVar27[3] & 0xff00ff00) >> 8 | (puVar27[3] & 0xff00ff) << 8,
                   uVar15 = (ulong)(uVar12 >> 0x10 | uVar12 << 0x10) * 6,
                   (uVar15 & 0xffffffff00000000) != 0)) ||
                  ((ulong)*(uint *)(param_2 + 0x18) <
                   (ulong)((long)(puVar27 + 7) - *(long *)(param_2 + 8)))) ||
                 (uVar12 = (uint)uVar15,
                 (uint)(*(int *)(param_2 + 0x10) - (int)(puVar27 + 7)) < uVar12))
              goto LAB_109742950;
              iVar13 = *(int *)(param_2 + 0x1c) - uVar12;
LAB_1097428c4:
              *(int *)(param_2 + 0x1c) = iVar13;
              if (iVar13 < 1) {
LAB_109742950:
                lVar14 = *(long *)(*(long *)(param_2 + 0x30) + 0x10);
                uVar5 = *(uint *)(*(long *)(param_2 + 0x30) + 0x18);
                *(long *)(param_2 + 8) = lVar14;
                *(ulong *)(param_2 + 0x10) = lVar14 + (ulong)uVar5;
                *(uint *)(param_2 + 0x18) = uVar5;
                return false;
              }
            }
            else if (bVar3 == 1) {
              if (((uVar15 < uVar16 + 0x20) || (uVar15 < uVar16 + 0x1c)) ||
                 (uVar12 = (puVar27[3] & 0xff00ff00) >> 8 | (puVar27[3] & 0xff00ff) << 8,
                 (uVar12 >> 0x10 | uVar12 << 0x10) < 4)) goto LAB_109742950;
              puVar7 = puVar27 + 4;
              FUN_10973b6ec(puVar7,param_2,puVar8);
              if (((int)puVar7 == 0) || ((int)((uint)(byte)puVar27[3] << 0x18) < 0))
              goto LAB_109742950;
              uVar19 = 0;
              uVar11 = 0;
              lVar14 = (long)puVar8 +
                       (ulong)*(byte *)((long)puVar27 + 0x17) +
                       (ulong)*(byte *)((long)puVar27 + 0x16) * 0x100 +
                       (ulong)(byte)puVar27[5] * 0x1000000 +
                       (ulong)*(byte *)((long)puVar27 + 0x15) * 0x10000;
              lVar2 = (long)puVar8 +
                      (ulong)*(byte *)((long)puVar27 + 0x1b) +
                      (ulong)*(byte *)((long)puVar27 + 0x1a) * 0x100 +
                      (ulong)(byte)puVar27[6] * 0x1000000 +
                      (ulong)*(byte *)((long)puVar27 + 0x19) * 0x10000;
              uVar12 = (uint)*(byte *)((long)puVar27 + 0xf) |
                       (uint)*(byte *)((long)puVar27 + 0xd) << 0x10 |
                       (uint)*(byte *)((long)puVar27 + 0xe) << 8 | (uint)(byte)puVar27[3] << 0x18;
              uVar21 = 0;
              do {
                uVar22 = uVar21;
                if (uVar11 < uVar19) {
                  lVar25 = *(long *)(param_2 + 8);
                  uVar16 = (ulong)*(uint *)(param_2 + 0x18);
                }
                else {
                  uVar1 = uVar11 + 1;
                  uVar15 = (ulong)uVar1 * (ulong)(uVar12 << 1);
                  if ((uVar15 & 0xffffffff00000000) != 0) goto LAB_109742950;
                  lVar25 = *(long *)(param_2 + 8);
                  uVar16 = (ulong)*(uint *)(param_2 + 0x18);
                  if ((uVar16 < (ulong)(lVar14 - lVar25)) ||
                     (uVar23 = (uint)uVar15, (uint)(*(int *)(param_2 + 0x10) - (int)lVar14) < uVar23
                     )) goto LAB_109742950;
                  iVar26 = *(int *)(param_2 + 0x1c) - uVar23;
                  *(int *)(param_2 + 0x1c) = iVar26;
                  if ((iVar26 < 1) ||
                     ((iVar26 = uVar19 + ~uVar11 + iVar26, *(int *)(param_2 + 0x1c) = iVar26,
                      iVar26 < 1 || (((ulong)uVar1 * (ulong)uVar12 & 0xffffffff00000000) != 0))))
                  goto LAB_109742950;
                  uVar23 = uVar19 * uVar12;
                  uVar19 = uVar1;
                  if (uVar23 < uVar1 * uVar12) {
                    puVar10 = (ushort *)(lVar14 + (ulong)uVar23 * 2);
                    do {
                      puVar9 = puVar10 + 1;
                      uVar23 = (uint)(*puVar10 >> 8) | (*puVar10 & 0xff00ff) << 8;
                      if (uVar22 <= uVar23 + 1) {
                        uVar22 = uVar23 + 1;
                      }
                      puVar10 = puVar9;
                    } while (puVar9 < (ushort *)(lVar14 + (ulong)(uVar1 * uVar12) * 2));
                  }
                }
                if ((uVar16 < (ulong)(lVar2 - lVar25)) ||
                   ((uint)(*(int *)(param_2 + 0x10) - (int)lVar2) < uVar22 * 6)) goto LAB_109742950;
                iVar26 = *(int *)(param_2 + 0x1c) + uVar22 * -6;
                *(int *)(param_2 + 0x1c) = iVar26;
                if ((iVar26 < 1) ||
                   (iVar26 = iVar26 + (uVar21 - uVar22), *(int *)(param_2 + 0x1c) = iVar26,
                   iVar26 < 1)) goto LAB_109742950;
                if (uVar21 < uVar22) {
                  puVar10 = (ushort *)(lVar2 + (ulong)uVar21 * 6);
                  do {
                    puVar9 = puVar10 + 3;
                    uVar17 = *puVar10;
                    if (uVar11 <= ((uint)(uVar17 >> 8) | (uVar17 & 0xff00ff) << 8)) {
                      uVar11 = (uint)(uVar17 >> 8) | (uVar17 & 0xff00ff) << 8;
                    }
                    puVar10 = puVar9;
                  } while (puVar9 < (ushort *)(lVar2 + (ulong)uVar22 * 6));
                }
                uVar21 = uVar22;
              } while (uVar19 <= uVar11);
            }
          }
          else {
            if (bVar3 == 2) {
              if (uVar15 < uVar16 + 0x1c) goto LAB_109742950;
              puVar8 = puVar27 + 4;
              FUN_10973b6ec(puVar8,param_2,puVar27);
              if ((int)puVar8 == 0) goto LAB_109742950;
              puVar8 = puVar27 + 5;
              FUN_10973b6ec(puVar8,param_2,puVar27);
              if ((((int)puVar8 == 0) ||
                  ((ulong)*(uint *)(param_2 + 0x18) <
                   (ulong)((long)puVar27 - *(long *)(param_2 + 8)))) ||
                 (uVar12 = (puVar27[6] & 0xff00ff00) >> 8 | (puVar27[6] & 0xff00ff) << 8,
                 uVar12 = uVar12 >> 0x10 | uVar12 << 0x10,
                 (uint)(*(int *)(param_2 + 0x10) - iVar26) < uVar12)) goto LAB_109742950;
              iVar13 = *(int *)(param_2 + 0x1c) - uVar12;
              goto LAB_1097428c4;
            }
            if (bVar3 == 4) {
              if (((uVar15 < uVar16 + 0x20) || (uVar15 < uVar16 + 0x1c)) ||
                 (uVar12 = (puVar27[3] & 0xff00ff00) >> 8 | (puVar27[3] & 0xff00ff) << 8,
                 (uVar12 >> 0x10 | uVar12 << 0x10) < 4)) goto LAB_109742950;
              puVar7 = puVar27 + 4;
              FUN_10973b6ec(puVar7,param_2,puVar8);
              if (((int)puVar7 == 0) || ((int)((uint)(byte)puVar27[3] << 0x18) < 0))
              goto LAB_109742950;
              uVar19 = 0;
              uVar11 = 0;
              lVar14 = (long)puVar8 +
                       (ulong)*(byte *)((long)puVar27 + 0x17) +
                       (ulong)*(byte *)((long)puVar27 + 0x16) * 0x100 +
                       (ulong)(byte)puVar27[5] * 0x1000000 +
                       (ulong)*(byte *)((long)puVar27 + 0x15) * 0x10000;
              lVar2 = (long)puVar8 +
                      (ulong)*(byte *)((long)puVar27 + 0x1b) +
                      (ulong)*(byte *)((long)puVar27 + 0x1a) * 0x100 +
                      (ulong)(byte)puVar27[6] * 0x1000000 +
                      (ulong)*(byte *)((long)puVar27 + 0x19) * 0x10000;
              uVar12 = (uint)*(byte *)((long)puVar27 + 0xf) |
                       (uint)*(byte *)((long)puVar27 + 0xd) << 0x10 |
                       (uint)*(byte *)((long)puVar27 + 0xe) << 8 | (uint)(byte)puVar27[3] << 0x18;
              uVar21 = 0;
              do {
                uVar22 = uVar21;
                if (uVar11 < uVar19) {
                  lVar25 = *(long *)(param_2 + 8);
                  uVar16 = (ulong)*(uint *)(param_2 + 0x18);
                }
                else {
                  uVar1 = uVar11 + 1;
                  uVar15 = (ulong)uVar1 * (ulong)(uVar12 << 1);
                  if ((uVar15 & 0xffffffff00000000) != 0) goto LAB_109742950;
                  lVar25 = *(long *)(param_2 + 8);
                  uVar16 = (ulong)*(uint *)(param_2 + 0x18);
                  if ((uVar16 < (ulong)(lVar14 - lVar25)) ||
                     (uVar23 = (uint)uVar15, (uint)(*(int *)(param_2 + 0x10) - (int)lVar14) < uVar23
                     )) goto LAB_109742950;
                  iVar26 = *(int *)(param_2 + 0x1c) - uVar23;
                  *(int *)(param_2 + 0x1c) = iVar26;
                  if ((iVar26 < 1) ||
                     ((iVar26 = uVar19 + ~uVar11 + iVar26, *(int *)(param_2 + 0x1c) = iVar26,
                      iVar26 < 1 || (((ulong)uVar1 * (ulong)uVar12 & 0xffffffff00000000) != 0))))
                  goto LAB_109742950;
                  uVar23 = uVar19 * uVar12;
                  uVar19 = uVar1;
                  if (uVar23 < uVar1 * uVar12) {
                    puVar10 = (ushort *)(lVar14 + (ulong)uVar23 * 2);
                    do {
                      puVar9 = puVar10 + 1;
                      uVar23 = (uint)(*puVar10 >> 8) | (*puVar10 & 0xff00ff) << 8;
                      if (uVar22 <= uVar23 + 1) {
                        uVar22 = uVar23 + 1;
                      }
                      puVar10 = puVar9;
                    } while (puVar9 < (ushort *)(lVar14 + (ulong)(uVar1 * uVar12) * 2));
                  }
                }
                if ((uVar16 < (ulong)(lVar2 - lVar25)) ||
                   ((uint)(*(int *)(param_2 + 0x10) - (int)lVar2) < uVar22 * 6)) goto LAB_109742950;
                iVar26 = *(int *)(param_2 + 0x1c) + uVar22 * -6;
                *(int *)(param_2 + 0x1c) = iVar26;
                if ((iVar26 < 1) ||
                   (iVar26 = iVar26 + (uVar21 - uVar22), *(int *)(param_2 + 0x1c) = iVar26,
                   iVar26 < 1)) goto LAB_109742950;
                if (uVar21 < uVar22) {
                  puVar10 = (ushort *)(lVar2 + (ulong)uVar21 * 6);
                  do {
                    puVar9 = puVar10 + 3;
                    uVar17 = *puVar10;
                    if (uVar11 <= ((uint)(uVar17 >> 8) | (uVar17 & 0xff00ff) << 8)) {
                      uVar11 = (uint)(uVar17 >> 8) | (uVar17 & 0xff00ff) << 8;
                    }
                    puVar10 = puVar9;
                  } while (puVar9 < (ushort *)(lVar2 + (ulong)uVar22 * 6));
                }
                uVar21 = uVar22;
              } while (uVar19 <= uVar11);
            }
            else if (bVar3 == 6) {
              if (uVar15 < uVar16 + 0x24) goto LAB_109742950;
              if ((*(byte *)((long)puVar27 + 0xf) & 1) == 0) {
                puVar8 = puVar27 + 5;
                FUN_10973b6ec(puVar8,param_2,puVar27);
                if ((int)puVar8 == 0) goto LAB_109742950;
                puVar8 = puVar27 + 6;
                FUN_10973b6ec(puVar8,param_2,puVar27);
                if ((int)puVar8 == 0) goto LAB_109742950;
                lVar14 = *(long *)(param_2 + 8);
                uVar15 = (ulong)*(uint *)(param_2 + 0x18);
                if (uVar15 < (ulong)((long)puVar27 - lVar14)) goto LAB_109742950;
                uVar12 = (puVar27[7] & 0xff00ff00) >> 8 | (puVar27[7] & 0xff00ff) << 8;
                uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
                iVar18 = (int)*(undefined8 *)(param_2 + 0x10);
                if ((uint)(iVar18 - iVar26) < uVar12) goto LAB_109742950;
                iVar13 = *(int *)(param_2 + 0x1c) - uVar12;
                *(int *)(param_2 + 0x1c) = iVar13;
              }
              else {
                puVar8 = puVar27 + 5;
                FUN_109742a0c(puVar8,param_2,puVar27);
                if ((int)puVar8 == 0) goto LAB_109742950;
                puVar8 = puVar27 + 6;
                FUN_109742a0c(puVar8,param_2,puVar27);
                if ((int)puVar8 == 0) goto LAB_109742950;
                lVar14 = *(long *)(param_2 + 8);
                uVar15 = (ulong)*(uint *)(param_2 + 0x18);
                if (uVar15 < (ulong)((long)puVar27 - lVar14)) goto LAB_109742950;
                uVar12 = (puVar27[7] & 0xff00ff00) >> 8 | (puVar27[7] & 0xff00ff) << 8;
                uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
                iVar18 = (int)*(undefined8 *)(param_2 + 0x10);
                if ((uint)(iVar18 - iVar26) < uVar12) goto LAB_109742950;
                iVar13 = *(int *)(param_2 + 0x1c) - uVar12;
                *(int *)(param_2 + 0x1c) = iVar13;
              }
              if (iVar13 < 1) goto LAB_109742950;
              if ((*(char *)((long)puVar27 + 9) != '\0' || (char)puVar27[2] != '\0') ||
                  (*(char *)((long)puVar27 + 10) != '\0' || *(char *)((long)puVar27 + 0xb) != '\0'))
              {
                if ((uVar15 < (ulong)((long)puVar27 - lVar14)) ||
                   (uVar12 = (puVar27[8] & 0xff00ff00) >> 8 | (puVar27[8] & 0xff00ff) << 8,
                   uVar12 = uVar12 >> 0x10 | uVar12 << 0x10, (uint)(iVar18 - iVar26) < uVar12))
                goto LAB_109742950;
                iVar13 = iVar13 - uVar12;
                goto LAB_1097428c4;
              }
            }
          }
          puVar27 = (uint *)((long)puVar27 +
                            (ulong)*(byte *)((long)puVar27 + 3) +
                            (ulong)*(byte *)((long)puVar27 + 2) * 0x100 +
                            (ulong)(byte)*puVar27 * 0x1000000 +
                            (ulong)*(byte *)((long)puVar27 + 1) * 0x10000);
          lVar14 = *(long *)(*(long *)(param_2 + 0x30) + 0x10);
          uVar12 = *(uint *)(*(long *)(param_2 + 0x30) + 0x18);
          uVar15 = (ulong)uVar12;
          *(long *)(param_2 + 8) = lVar14;
          *(ulong *)(param_2 + 0x10) = lVar14 + uVar15;
          *(uint *)(param_2 + 0x18) = uVar12;
          uVar28 = uVar28 + 1;
        } while (uVar28 != uVar5);
        uVar17 = *param_1 >> 8 | *param_1 << 8;
      }
      if (uVar17 < 3) {
        return true;
      }
      if ((uVar4 & 0xffff) >> 0xe == 0) {
        lVar14 = *(long *)(param_2 + 8);
        uVar15 = (ulong)*(uint *)(param_2 + 0x18);
        if ((((ulong)((long)puVar27 - lVar14) <= uVar15) &&
            (uVar5 * 4 <= (uint)(*(int *)(param_2 + 0x10) - (int)puVar27))) &&
           (iVar26 = *(int *)(param_2 + 0x1c) + uVar5 * -4, *(int *)(param_2 + 0x1c) = iVar26,
           0 < iVar26)) {
          if (uVar5 == 0) {
            return true;
          }
          bVar6 = false;
          uVar4 = *(int *)(param_2 + 0x38) + 7U >> 3;
          pbVar20 = (byte *)((long)puVar27 + 3);
          uVar16 = 1;
          uVar24 = (ulong)uVar5;
          puVar8 = puVar27;
          do {
            puVar8 = puVar8 + 1;
            uVar28 = (*(uint *)(pbVar20 + -3) & 0xff00ff00) >> 8 |
                     (*(uint *)(pbVar20 + -3) & 0xff00ff) << 8;
            if (1 < (uVar28 >> 0x10 | uVar28 << 0x10) + 1) {
              if (uVar15 < (ulong)((long)puVar8 - lVar14)) {
                return bVar6;
              }
              lVar2 = (long)puVar27 +
                      (ulong)*pbVar20 +
                      (ulong)pbVar20[-1] * 0x100 +
                      (ulong)pbVar20[-3] * 0x1000000 + (ulong)pbVar20[-2] * 0x10000;
              lVar14 = *(long *)(param_2 + 8);
              uVar15 = (ulong)*(uint *)(param_2 + 0x18);
              if (uVar15 < (ulong)(lVar2 - lVar14)) {
                return bVar6;
              }
              if ((uint)(*(int *)(param_2 + 0x10) - (int)lVar2) < uVar4) {
                return bVar6;
              }
              iVar26 = *(int *)(param_2 + 0x1c) - uVar4;
              *(int *)(param_2 + 0x1c) = iVar26;
              if (iVar26 < 1) {
                return bVar6;
              }
            }
            bVar6 = uVar5 <= uVar16;
            uVar16 = uVar16 + 1;
            pbVar20 = pbVar20 + 4;
            uVar24 = uVar24 - 1;
            if (uVar24 == 0) {
              return bVar6;
            }
          } while( true );
        }
      }
      return false;
    }
  }
  return false;
}



/* Entry: 1097429a8; end: 109742a0b;  */

void FUN_1097429a8(long param_1,uint *param_2)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  
  puVar5 = *(uint **)(*(long *)(param_1 + 0x30) + 0x10);
  *(undefined8 *)(param_1 + 8) = puVar5;
  uVar3 = *(uint *)(*(long *)(param_1 + 0x30) + 0x18);
  puVar1 = (uint *)((long)puVar5 + (ulong)uVar3);
  *(uint **)(param_1 + 0x10) = puVar1;
  *(uint *)(param_1 + 0x18) = uVar3;
  if (param_2 != (uint *)0x0) {
    if (param_2 < puVar5 || puVar1 <= param_2) {
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      return;
    }
    *(uint **)(param_1 + 8) = param_2;
    uVar3 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
    uVar4 = (ulong)(uVar3 >> 0x10 | uVar3 << 0x10);
    uVar2 = (long)puVar1 - (long)param_2;
    if (uVar4 <= (ulong)((long)puVar1 - (long)param_2)) {
      uVar2 = uVar4;
    }
    *(ulong *)(param_1 + 0x10) = (long)param_2 + uVar2;
    *(int *)(param_1 + 0x18) = (int)uVar2;
  }
  return;
}



/* Entry: 109742a0c; end: 109742d53;  */

bool FUN_109742a0c(byte *param_1,long param_2,long param_3)

{
  ushort *puVar1;
  long lVar2;
  ushort uVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  int iVar10;
  
  if ((byte *)(ulong)*(uint *)(param_2 + 0x18) < param_1 + (4 - *(long *)(param_2 + 8))) {
    return false;
  }
  puVar1 = (ushort *)
           (param_3 + (ulong)param_1[1] * 0x10000 + (ulong)*param_1 * 0x1000000 +
            (ulong)param_1[2] * 0x100 + (ulong)param_1[3]);
  puVar9 = puVar1 + 1;
  if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar9 - *(long *)(param_2 + 8))) {
    return false;
  }
  uVar3 = *puVar1 >> 8 | *puVar1 << 8;
  if (uVar3 < 6) {
    if (uVar3 == 0) {
      if (*(uint *)(param_2 + 0x38) >> 0x1e != 0) {
        return false;
      }
      if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar9 - *(long *)(param_2 + 8))) {
        return false;
      }
      uVar7 = *(uint *)(param_2 + 0x38) << 2;
      uVar8 = *(int *)(param_2 + 0x10) - (int)puVar9;
      goto LAB_109742d2c;
    }
    if (uVar3 != 2) {
      if (uVar3 != 4) {
        return true;
      }
      puVar5 = puVar1 + 6;
      if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar5 - *(long *)(param_2 + 8))) {
        return false;
      }
      uVar7 = (uint)(puVar1[1] >> 8) | (puVar1[1] & 0xff00ff) << 8;
      if (uVar7 < 6) {
        return false;
      }
      if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar5 - *(long *)(param_2 + 8))) {
        return false;
      }
      uVar7 = ((uint)(puVar1[2] >> 8) | (puVar1[2] & 0xff00ff) << 8) * uVar7;
      if ((uint)(*(int *)(param_2 + 0x10) - (int)puVar5) < uVar7) {
        return false;
      }
      iVar10 = *(int *)(param_2 + 0x1c) - uVar7;
      *(int *)(param_2 + 0x1c) = iVar10;
      if (iVar10 < 1) {
        return false;
      }
      uVar7 = (uint)(puVar1[2] >> 8) | (puVar1[2] & 0xff00ff) << 8;
      puVar5 = puVar9;
      FUN_109742db4();
      if (uVar7 != (uint)puVar5) {
        iVar10 = 0;
        do {
          puVar6 = puVar9;
          FUN_109742d54(puVar9,iVar10);
          if ((ulong)*(uint *)(param_2 + 0x18) <
              (ulong)((long)puVar6 + (6 - *(long *)(param_2 + 8)))) {
            return false;
          }
          uVar3 = puVar6[1];
          uVar8 = (uint)(*puVar6 >> 8) | (*puVar6 & 0xff00ff) << 8;
          if (uVar8 < ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8)) {
            return false;
          }
          if ((ulong)*(uint *)(param_2 + 0x18) <
              (ulong)((long)puVar6 + (6 - *(long *)(param_2 + 8)))) {
            return false;
          }
          lVar2 = (long)puVar1 + (ulong)*(byte *)((long)puVar6 + 5) + (ulong)(byte)puVar6[2] * 0x100
          ;
          if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)(lVar2 - *(long *)(param_2 + 8))) {
            return false;
          }
          uVar8 = (uVar8 - ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8)) * 4 + 4;
          if ((uint)(*(int *)(param_2 + 0x10) - (int)lVar2) < uVar8) {
            return false;
          }
          iVar4 = *(int *)(param_2 + 0x1c) - uVar8;
          *(int *)(param_2 + 0x1c) = iVar4;
          if (iVar4 < 1) {
            return false;
          }
          iVar10 = iVar10 + 1;
        } while (uVar7 - (uint)puVar5 != iVar10);
      }
      return true;
    }
    if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar1 + (0xc - *(long *)(param_2 + 8)))) {
      return false;
    }
    uVar7 = (uint)(puVar1[1] >> 8) | (puVar1[1] & 0xff00ff) << 8;
    if (uVar7 < 8) {
      return false;
    }
LAB_109742cd8:
    puVar9 = puVar1 + 6;
    if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar9 - *(long *)(param_2 + 8))) {
      return false;
    }
    uVar3 = puVar1[2];
LAB_109742cf0:
    uVar7 = ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8) * uVar7;
  }
  else {
    if (uVar3 == 6) {
      if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar1 + (0xc - *(long *)(param_2 + 8))))
      {
        return false;
      }
      uVar7 = (uint)(puVar1[1] >> 8) | (puVar1[1] & 0xff00ff) << 8;
      if (uVar7 < 6) {
        return false;
      }
      goto LAB_109742cd8;
    }
    if (uVar3 != 8) {
      if (uVar3 != 10) {
        return true;
      }
      puVar9 = puVar1 + 4;
      if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar9 - *(long *)(param_2 + 8))) {
        return false;
      }
      uVar7 = (uint)(puVar1[1] >> 8) | (puVar1[1] & 0xff00ff) << 8;
      if (4 < uVar7) {
        return false;
      }
      if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar9 - *(long *)(param_2 + 8))) {
        return false;
      }
      uVar3 = puVar1[3];
      goto LAB_109742cf0;
    }
    puVar9 = puVar1 + 3;
    if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar9 - *(long *)(param_2 + 8))) {
      return false;
    }
    uVar7 = (uint)(byte)puVar1[2] << 10 | (uint)*(byte *)((long)puVar1 + 5) << 2;
  }
  uVar8 = *(int *)(param_2 + 0x10) - (int)puVar9;
LAB_109742d2c:
  if (uVar8 < uVar7) {
    return false;
  }
  iVar10 = *(int *)(param_2 + 0x1c) - uVar7;
  *(int *)(param_2 + 0x1c) = iVar10;
  return 0 < iVar10;
}



/* Entry: 109742d54; end: 109742db3;  */

undefined * FUN_109742d54(ushort *param_1,uint param_2)

{
  ushort uVar1;
  ushort *puVar2;
  undefined *puVar3;
  
  uVar1 = param_1[1];
  puVar2 = param_1;
  FUN_109742db4();
  if (param_2 < ((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8) - (int)puVar2) {
    puVar3 = (undefined *)
             ((long)param_1 +
             (ulong)(((uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8) * param_2) + 10);
  }
  else {
    puVar3 = &UNK_10dfe4888;
  }
  return puVar3;
}



/* Entry: 109742db4; end: 109742e13;  */

bool FUN_109742db4(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  
  uVar2 = (uint)(param_1[1] >> 8) | (param_1[1] & 0xff00ff) << 8;
  if (uVar2 == 0) {
    return false;
  }
  bVar3 = false;
  lVar4 = 0;
  do {
    uVar1 = *(ushort *)
             ((long)param_1 +
             lVar4 * 2 +
             (ulong)((uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8) * (ulong)(uVar2 - 1) + 10);
    uVar1 = uVar1 >> 8 | uVar1 << 8;
    if (bVar3) break;
    bVar3 = true;
    lVar4 = 1;
  } while (uVar1 == 0xffff);
  return uVar1 == 0xffff;
}



/* Entry: 109742e14; end: 109743143;  */

/* WARNING: Possible PIC construction at 0x000109742ec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010974309c: Changing call to branch */

ushort * FUN_109742e14(ushort *param_1,ulong *param_2,int param_3)

{
  ulong uVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  ushort *puVar7;
  uint uVar8;
  ushort *puVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  uVar3 = *param_1 >> 8 | *param_1 << 8;
  puVar6 = param_1;
  if (uVar3 < 6) {
    if (uVar3 == 0) {
      uVar8 = param_3 - 1;
      uVar16 = (ulong)uVar8;
      if (*param_2 != 0xffffffffffffffff) {
        uVar15 = *param_2 | (2L << ((ulong)(uVar8 >> 4) & 0x3f)) - 1U;
        if (0x3ef < uVar8) {
          uVar15 = 0xffffffffffffffff;
        }
        *param_2 = uVar15;
      }
      uVar15 = 0;
SUB_10972be80:
      uVar10 = param_2[1];
      if (uVar10 == 0xffffffffffffffff) {
        uVar8 = 0;
      }
      else {
        uVar5 = (uint)uVar16 - (uint)uVar15;
        uVar8 = (uint)(uVar5 < 0x3f);
        uVar12 = 1L << (uVar15 & 0x3f);
        uVar1 = 0xffffffffffffffff;
        if (uVar5 < 0x3f) {
          uVar1 = uVar10 | ((2L << (uVar16 & 0x3f)) - uVar12) -
                           (ulong)((ulong)(1L << (uVar16 & 0x3f)) < uVar12);
        }
        param_2[1] = uVar1;
      }
      if (param_2[2] == 0xffffffffffffffff) {
        uVar5 = 0;
      }
      else {
        uVar14 = (uint)uVar16 >> 9;
        uVar4 = uVar14 - ((uint)uVar15 >> 9);
        uVar5 = (uint)(uVar4 < 0x3f);
        uVar16 = 1L << (uVar15 >> 9 & 0x3f);
        uVar15 = 0xffffffffffffffff;
        if (uVar4 < 0x3f) {
          uVar15 = param_2[2] |
                   ((2L << ((ulong)uVar14 & 0x3f)) - uVar16) -
                   (ulong)((ulong)(1L << ((ulong)uVar14 & 0x3f)) < uVar16);
        }
        param_2[2] = uVar15;
      }
      return (ushort *)(ulong)(uVar8 | uVar5);
    }
    if (uVar3 == 2) {
      uVar8 = (uint)(param_1[2] >> 8) | (param_1[2] & 0xff00ff) << 8;
      puVar7 = param_1 + 1;
      FUN_109743144();
      puVar6 = puVar7;
      if (uVar8 != (uint)puVar7) {
        uVar5 = 0;
        do {
          uVar3 = param_1[2];
          puVar6 = param_1 + 1;
          FUN_109743144();
          puVar9 = (ushort *)&UNK_10dfe4888;
          if (uVar5 < ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8) - (int)puVar6) {
            puVar9 = (ushort *)
                     ((long)param_1 +
                     (ulong)(((uint)(param_1[1] >> 8) | (param_1[1] & 0xff00ff) << 8) * uVar5) + 0xc
                     );
          }
          uVar14 = (uint)(puVar9[1] >> 8) | (puVar9[1] & 0xff00ff) << 8;
          uVar15 = (ulong)uVar14;
          if (uVar14 != 0xffff) {
            uVar16 = (ulong)((uint)(*puVar9 >> 8) | (*puVar9 & 0xff00ff) << 8);
            FUN_10972be18(param_2,uVar15,uVar16);
            goto SUB_10972be80;
          }
          uVar5 = uVar5 + 1;
        } while (uVar8 - (uint)puVar7 != uVar5);
      }
    }
    else if (uVar3 == 4) {
      uVar8 = (uint)(param_1[2] >> 8) | (param_1[2] & 0xff00ff) << 8;
      puVar7 = param_1 + 1;
      FUN_109742db4();
      puVar6 = puVar7;
      if (uVar8 != (uint)puVar7) {
        iVar13 = 0;
        do {
          puVar6 = param_1 + 1;
          FUN_109742d54(puVar6,iVar13);
          uVar5 = (uint)(puVar6[1] >> 8) | (puVar6[1] & 0xff00ff) << 8;
          uVar15 = (ulong)uVar5;
          if (uVar5 != 0xffff) {
            uVar16 = (ulong)((uint)(*puVar6 >> 8) | (*puVar6 & 0xff00ff) << 8);
            FUN_10972be18(param_2,uVar15,uVar16);
            goto SUB_10972be80;
          }
          iVar13 = iVar13 + 1;
        } while (uVar8 - (uint)puVar7 != iVar13);
      }
    }
  }
  else if (uVar3 == 6) {
    uVar8 = (uint)(param_1[2] >> 8) | (param_1[2] & 0xff00ff) << 8;
    puVar6 = param_1 + 1;
    func_0x0001097431a4();
    uVar5 = (uint)puVar6;
    if (uVar8 != uVar5) {
      uVar14 = 0;
      do {
        uVar3 = param_1[2];
        puVar6 = param_1 + 1;
        func_0x0001097431a4();
        pbVar11 = &UNK_10dfe4888;
        if (uVar14 < ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8) - (int)puVar6) {
          pbVar11 = (byte *)((long)param_1 +
                            (ulong)(((uint)(param_1[1] >> 8) | (param_1[1] & 0xff00ff) << 8) *
                                   uVar14) + 0xc);
        }
        bVar2 = *pbVar11;
        uVar3 = CONCAT11(bVar2,pbVar11[1]);
        if (uVar3 != 0xffff) {
          uVar15 = (ulong)CONCAT14(pbVar11[1],(uint)(uVar3 >> 4));
          auVar17._0_8_ = uVar15 & 0x3f;
          auVar17._8_8_ = (uVar15 & 0x3f0000003f) >> 0x20;
          auVar18[8] = 1;
          auVar18._0_8_ = 1;
          auVar18._9_7_ = 0;
          auVar18 = NEON_ushl(auVar18,auVar17,8);
          uVar16 = param_2[1];
          uVar15 = *param_2;
          *(byte *)(param_2 + 1) = (byte)uVar16 | auVar18[8];
          *(byte *)((long)param_2 + 9) = (byte)(uVar16 >> 8) | auVar18[9];
          *(byte *)((long)param_2 + 10) = (byte)(uVar16 >> 0x10) | auVar18[10];
          *(byte *)((long)param_2 + 0xb) = (byte)(uVar16 >> 0x18) | auVar18[0xb];
          *(byte *)((long)param_2 + 0xc) = (byte)(uVar16 >> 0x20) | auVar18[0xc];
          *(byte *)((long)param_2 + 0xd) = (byte)(uVar16 >> 0x28) | auVar18[0xd];
          *(byte *)((long)param_2 + 0xe) = (byte)(uVar16 >> 0x30) | auVar18[0xe];
          *(byte *)((long)param_2 + 0xf) = (byte)(uVar16 >> 0x38) | auVar18[0xf];
          *(byte *)param_2 = (byte)uVar15 | auVar18[0];
          *(byte *)((long)param_2 + 1) = (byte)(uVar15 >> 8) | auVar18[1];
          *(byte *)((long)param_2 + 2) = (byte)(uVar15 >> 0x10) | auVar18[2];
          *(byte *)((long)param_2 + 3) = (byte)(uVar15 >> 0x18) | auVar18[3];
          *(byte *)((long)param_2 + 4) = (byte)(uVar15 >> 0x20) | auVar18[4];
          *(byte *)((long)param_2 + 5) = (byte)(uVar15 >> 0x28) | auVar18[5];
          *(byte *)((long)param_2 + 6) = (byte)(uVar15 >> 0x30) | auVar18[6];
          *(byte *)((long)param_2 + 7) = (byte)(uVar15 >> 0x38) | auVar18[7];
          param_2[2] = param_2[2] | 1L << ((ulong)(bVar2 >> 1) & 0x3f);
        }
        uVar14 = uVar14 + 1;
      } while (uVar8 - uVar5 != uVar14);
    }
  }
  else {
    if (uVar3 == 8) {
      uVar8 = (uint)(param_1[2] >> 8) | (param_1[2] & 0xff00ff) << 8;
      if (uVar8 == 0) {
        return param_1;
      }
      uVar3 = param_1[1];
    }
    else {
      if (uVar3 != 10) {
        return param_1;
      }
      uVar8 = (uint)(param_1[3] >> 8) | (param_1[3] & 0xff00ff) << 8;
      if (uVar8 == 0) {
        return param_1;
      }
      uVar3 = param_1[2];
    }
    uVar5 = (uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8;
    uVar15 = (ulong)uVar5;
    if (uVar5 != 0xffff) {
      uVar16 = (ulong)((uVar8 + uVar5) - 1);
      FUN_10972be18(param_2,uVar15,uVar16);
      goto SUB_10972be80;
    }
  }
  return puVar6;
}



/* Entry: 109743144; end: 1097431df;  */

bool FUN_109743144(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  
  uVar2 = (uint)(param_1[1] >> 8) | (param_1[1] & 0xff00ff) << 8;
  if (uVar2 == 0) {
    return false;
  }
  bVar3 = false;
  lVar4 = 0;
  do {
    uVar1 = *(ushort *)
             ((long)param_1 +
             lVar4 * 2 +
             (ulong)((uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8) * (ulong)(uVar2 - 1) + 10);
    uVar1 = uVar1 >> 8 | uVar1 << 8;
    if (bVar3) break;
    bVar3 = true;
    lVar4 = 1;
  } while (uVar1 == 0xffff);
  return uVar1 == 0xffff;
}



/* Entry: 1097431e0; end: 109743207;  */

undefined8 FUN_1097431e0(undefined8 param_1,uint param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__realloc_11034ca10)(param_1,(ulong)param_2 * 0x30);
    return param_1;
  }
  _free();
  return 0;
}



/* Entry: 109743208; end: 109743453;  */

int * FUN_109743208(int *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  uint uVar7;
  long lVar8;
  undefined4 auStack_80 [2];
  long lStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  byte bStack_58;
  int iStack_54;
  int *piStack_50;
  int iStack_48;
  undefined2 uStack_44;
  int *piVar6;
  
  auStack_80[0] = 0;
  iStack_54 = 0;
  piStack_50 = (int *)0x0;
  uStack_70 = 0;
  lStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  bStack_58 = 0;
  iStack_48 = 0x10000;
  uStack_44 = 0;
  iVar4 = param_1[6];
  if (iVar4 == -1) {
    piVar6 = param_1;
    FUN_109710978();
    iVar4 = (int)piVar6;
  }
  uStack_44 = CONCAT11(uStack_44._1_1_,1);
  iStack_48 = iVar4;
  if (*(code **)(param_1 + 8) == (code *)0x0) {
    param_1 = (int *)&UNK_10dfe4888;
  }
  else {
    (**(code **)(param_1 + 8))(param_1,0x616e6b72,*(undefined8 *)(param_1 + 10));
    if (param_1 == (int *)0x0) {
      param_1 = (int *)&UNK_10dfe4888;
    }
  }
  if (*param_1 != 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = *param_1 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  piStack_50 = param_1;
  bVar3 = 0;
  while( true ) {
    bStack_58 = bVar3;
    lVar8 = *(long *)(piStack_50 + 4);
    uStack_68._0_4_ = piStack_50[6];
    uStack_70 = lVar8 + (ulong)(uint)uStack_68;
    uVar7 = (uint)uStack_68 << 6;
    if (uVar7 < 0x4001) {
      uVar7 = 0x4000;
    }
    if (0x3ffffffe < uVar7) {
      uVar7 = 0x3fffffff;
    }
    uStack_68._4_4_ = 0x3fffffff;
    if ((uint)uStack_68 >> 0x1a == 0) {
      uStack_68._4_4_ = uVar7;
    }
    iStack_54 = 0;
    auStack_80[0] = 0;
    uStack_60 = uStack_60 & 0xffffffff;
    lStack_78 = lVar8;
    if (lVar8 == 0) {
      FUN_1096f5a5c();
      piStack_50 = (int *)0x0;
      lStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
      goto LAB_109743388;
    }
    lVar5 = lVar8;
    FUN_109743454(lVar8,auStack_80);
    if ((int)lVar5 != 0) break;
    if ((iStack_54 == 0) || ((bStack_58 & 1) != 0)) goto LAB_109743364;
    if ((param_1[1] == 0) || (piVar6 = param_1, FUN_1096f59a0(), ((ulong)piVar6 & 1) == 0)) {
      uStack_70 = (ulong)(uint)param_1[6];
      lStack_78 = 0;
      goto LAB_109743364;
    }
    uStack_70 = *(long *)(param_1 + 4) + (ulong)(uint)param_1[6];
    bVar3 = 1;
    if (*(long *)(param_1 + 4) == 0) {
      lStack_78 = 0;
LAB_109743364:
      FUN_1096f5a5c(piStack_50);
      uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
LAB_109743378:
      piStack_50 = (int *)0x0;
      uStack_70 = 0;
      lStack_78 = 0;
      FUN_1096f5a5c(param_1);
      param_1 = (int *)&UNK_10dfe4888;
LAB_109743388:
      FUN_109710c0c(auStack_80);
      return param_1;
    }
  }
  if (iStack_54 == 0) {
    FUN_1096f5a5c(piStack_50);
    uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
  }
  else {
    iStack_54 = 0;
    FUN_109743454(lVar8,auStack_80);
    iVar4 = iStack_54;
    FUN_1096f5a5c(piStack_50);
    uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
    uVar7 = 0;
    if (iVar4 == 0) {
      uVar7 = (uint)lVar8;
    }
    if ((uVar7 & 1) == 0) goto LAB_109743378;
  }
  piStack_50 = (int *)0x0;
  uStack_70 = 0;
  lStack_78 = 0;
  if (param_1[1] != 0) {
    param_1[1] = 0;
  }
  goto LAB_109743388;
}



/* Entry: 109743454; end: 109743a43;  */

undefined8 FUN_109743454(char *param_1,long param_2)

{
  ushort *puVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  char *pcVar7;
  ushort *puVar8;
  ushort *puVar9;
  char *pcVar10;
  ushort *puVar11;
  ushort *puVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  
  if ((char *)(ulong)*(uint *)(param_2 + 0x18) < param_1 + (0xc - *(long *)(param_2 + 8))) {
    return 0;
  }
  if (param_1[1] == '\0' && *param_1 == '\0') {
    if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)param_1 - *(long *)(param_2 + 8))) {
      return 0;
    }
    uVar2 = *(uint *)(param_1 + 8);
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    if ((uint)(*(int *)(param_2 + 0x10) - (int)param_1) < uVar2) {
      return 0;
    }
    iVar5 = *(int *)(param_2 + 0x1c) - uVar2;
    *(int *)(param_2 + 0x1c) = iVar5;
    if (iVar5 < 1) {
      return 0;
    }
    if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)(param_1 + 8) - *(long *)(param_2 + 8))) {
      return 0;
    }
    uVar13 = (ulong)(byte)param_1[0xb];
    uVar2 = (*(uint *)(param_1 + 4) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 4) & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    if (uVar2 == 0) {
      return 1;
    }
    puVar11 = (ushort *)(param_1 + uVar2);
    puVar12 = puVar11 + 1;
    if ((ulong)((long)puVar12 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) {
      lVar6 = (ulong)(byte)param_1[10] * 0x100 +
              (ulong)(byte)param_1[8] * 0x1000000 + (ulong)(byte)param_1[9] * 0x10000;
      uVar3 = *puVar11 >> 8 | *puVar11 << 8;
      if (uVar3 < 6) {
        if (uVar3 == 0) {
          uVar2 = *(uint *)(param_2 + 0x38);
          uVar14 = (ulong)uVar2;
          if ((((-1 < (int)uVar2) &&
               ((ulong)((long)puVar12 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))
               ) && (uVar2 * 2 <= (uint)(*(int *)(param_2 + 0x10) - (int)puVar12))) &&
             (iVar5 = *(int *)(param_2 + 0x1c) + uVar2 * -2, *(int *)(param_2 + 0x1c) = iVar5,
             0 < iVar5)) {
            if (uVar2 == 0) {
              return 1;
            }
            while (puVar11 = puVar12, func_0x000109743a44(puVar12,param_2,param_1 + uVar13 + lVar6),
                  ((ulong)puVar11 & 1) != 0) {
              puVar12 = puVar12 + 1;
              uVar14 = uVar14 - 1;
              if (uVar14 == 0) {
                return 1;
              }
            }
          }
        }
        else if (uVar3 == 2) {
          puVar1 = puVar11 + 6;
          if ((((ulong)((long)puVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))
              && (uVar2 = (uint)(puVar11[1] >> 8) | (puVar11[1] & 0xff00ff) << 8, 5 < uVar2)) &&
             (((ulong)((long)puVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18) &&
              ((uVar2 = ((uint)(puVar11[2] >> 8) | (puVar11[2] & 0xff00ff) << 8) * uVar2,
               uVar2 <= (uint)(*(int *)(param_2 + 0x10) - (int)puVar1) &&
               (iVar5 = *(int *)(param_2 + 0x1c) - uVar2, *(int *)(param_2 + 0x1c) = iVar5,
               0 < iVar5)))))) {
            uVar2 = (uint)(puVar11[2] >> 8) | (puVar11[2] & 0xff00ff) << 8;
            puVar8 = puVar12;
            func_0x000109743af4();
            if (uVar2 == (uint)puVar8) {
              return 1;
            }
            uVar15 = 0;
            while( true ) {
              uVar3 = puVar11[2];
              puVar9 = puVar12;
              func_0x000109743af4();
              if (uVar15 < ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8) - (int)puVar9) {
                pcVar10 = (char *)((long)puVar1 +
                                  (ulong)(((uint)(puVar11[1] >> 8) | (puVar11[1] & 0xff00ff) << 8) *
                                         uVar15));
              }
              else {
                pcVar10 = "";
              }
              if ((char *)(ulong)*(uint *)(param_2 + 0x18) < pcVar10 + (6 - *(long *)(param_2 + 8)))
              break;
              pcVar10 = pcVar10 + 4;
              func_0x000109743a44(pcVar10,param_2,param_1 + uVar13 + lVar6);
              if (((ulong)pcVar10 & 1) == 0) break;
              uVar15 = uVar15 + 1;
              if (uVar2 - (uint)puVar8 == uVar15) {
                return 1;
              }
            }
          }
        }
        else {
          if (uVar3 != 4) {
            return 1;
          }
          puVar1 = puVar11 + 6;
          if (((((ulong)((long)puVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))
               && (uVar2 = (uint)(puVar11[1] >> 8) | (puVar11[1] & 0xff00ff) << 8, 5 < uVar2)) &&
              ((ulong)((long)puVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)))
             && ((uVar2 = ((uint)(puVar11[2] >> 8) | (puVar11[2] & 0xff00ff) << 8) * uVar2,
                 uVar2 <= (uint)(*(int *)(param_2 + 0x10) - (int)puVar1) &&
                 (iVar5 = *(int *)(param_2 + 0x1c) - uVar2, *(int *)(param_2 + 0x1c) = iVar5,
                 0 < iVar5)))) {
            uVar2 = (uint)(puVar11[2] >> 8) | (puVar11[2] & 0xff00ff) << 8;
            puVar8 = puVar12;
            func_0x000109743b54();
            if (uVar2 == (uint)puVar8) {
              return 1;
            }
            uVar15 = 0;
            while( true ) {
              uVar3 = puVar11[2];
              puVar9 = puVar12;
              func_0x000109743b54();
              if (uVar15 < ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8) - (int)puVar9) {
                puVar9 = (ushort *)
                         ((long)puVar1 +
                         (ulong)(((uint)(puVar11[1] >> 8) | (puVar11[1] & 0xff00ff) << 8) * uVar15))
                ;
              }
              else {
                puVar9 = (ushort *)&UNK_10dfe4888;
              }
              if ((char *)(ulong)*(uint *)(param_2 + 0x18) <
                  (char *)((long)puVar9 + (6 - *(long *)(param_2 + 8)))) break;
              uVar3 = puVar9[1];
              uVar4 = (uint)(*puVar9 >> 8) | (*puVar9 & 0xff00ff) << 8;
              if (((uVar4 < ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8)) ||
                  ((char *)(ulong)*(uint *)(param_2 + 0x18) <
                   (char *)((long)puVar9 + (6 - *(long *)(param_2 + 8))))) ||
                 (pcVar10 = (char *)((long)puVar11 +
                                    (ulong)*(byte *)((long)puVar9 + 5) +
                                    (ulong)(byte)puVar9[2] * 0x100),
                 (ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)pcVar10 - *(long *)(param_2 + 8)))
                 ) break;
              uVar4 = (uVar4 - ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8)) + 1;
              uVar14 = (ulong)uVar4;
              if (((uint)(*(int *)(param_2 + 0x10) - (int)pcVar10) < uVar4 * 2) ||
                 (iVar5 = *(int *)(param_2 + 0x1c) + uVar4 * -2, *(int *)(param_2 + 0x1c) = iVar5,
                 iVar5 < 1)) break;
              do {
                pcVar7 = pcVar10;
                func_0x000109743a44(pcVar10,param_2,param_1 + uVar13 + lVar6);
                if (((ulong)pcVar7 & 1) == 0) goto LAB_10974352c;
                pcVar10 = pcVar10 + 2;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
              uVar15 = uVar15 + 1;
              if (uVar15 == uVar2 - (uint)puVar8) {
                return 1;
              }
            }
          }
        }
      }
      else if (uVar3 == 6) {
        puVar1 = puVar11 + 6;
        if (((((ulong)((long)puVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))
             && (uVar2 = (uint)(puVar11[1] >> 8) | (puVar11[1] & 0xff00ff) << 8, 3 < uVar2)) &&
            ((ulong)((long)puVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))) &&
           ((uVar2 = ((uint)(puVar11[2] >> 8) | (puVar11[2] & 0xff00ff) << 8) * uVar2,
            uVar2 <= (uint)(*(int *)(param_2 + 0x10) - (int)puVar1) &&
            (iVar5 = *(int *)(param_2 + 0x1c) - uVar2, *(int *)(param_2 + 0x1c) = iVar5, 0 < iVar5))
           )) {
          uVar2 = (uint)(puVar11[2] >> 8) | (puVar11[2] & 0xff00ff) << 8;
          puVar8 = puVar12;
          func_0x000109743bb4();
          if (uVar2 == (uint)puVar8) {
            return 1;
          }
          uVar15 = 0;
          while( true ) {
            uVar3 = puVar11[2];
            puVar9 = puVar12;
            func_0x000109743bb4();
            if (uVar15 < ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8) - (int)puVar9) {
              pcVar10 = (char *)((long)puVar1 +
                                (ulong)(((uint)(puVar11[1] >> 8) | (puVar11[1] & 0xff00ff) << 8) *
                                       uVar15));
            }
            else {
              pcVar10 = "";
            }
            if ((char *)(ulong)*(uint *)(param_2 + 0x18) < pcVar10 + (4 - *(long *)(param_2 + 8)))
            break;
            pcVar10 = pcVar10 + 2;
            func_0x000109743a44(pcVar10,param_2,param_1 + uVar13 + lVar6);
            if (((ulong)pcVar10 & 1) == 0) break;
            uVar15 = uVar15 + 1;
            if (uVar2 - (uint)puVar8 == uVar15) {
              return 1;
            }
          }
        }
      }
      else if (uVar3 == 8) {
        puVar12 = puVar11 + 3;
        if ((ulong)((long)puVar12 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) {
          uVar2 = (uint)(puVar11[2] >> 8) | (puVar11[2] & 0xff00ff) << 8;
          uVar14 = (ulong)uVar2;
          if ((uVar2 * 2 <= (uint)(*(int *)(param_2 + 0x10) - (int)puVar12)) &&
             (iVar5 = *(int *)(param_2 + 0x1c) + uVar2 * -2, *(int *)(param_2 + 0x1c) = iVar5,
             0 < iVar5)) {
            if (uVar2 == 0) {
              return 1;
            }
            while (puVar11 = puVar12, func_0x000109743a44(puVar12,param_2,param_1 + uVar13 + lVar6),
                  ((ulong)puVar11 & 1) != 0) {
              puVar12 = puVar12 + 1;
              uVar14 = uVar14 - 1;
              if (uVar14 == 0) {
                return 1;
              }
            }
          }
        }
      }
      else if (uVar3 != 10) {
        return 1;
      }
    }
LAB_10974352c:
    if ((*(uint *)(param_2 + 0x2c) < 0x20) &&
       (*(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1,
       *(char *)(param_2 + 0x28) == '\x01')) {
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      return 1;
    }
  }
  return 0;
}



/* Entry: 109743a44; end: 109743cdf;  */

bool FUN_109743a44(byte *param_1,long param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 + (2 - *(long *)(param_2 + 8)) <= (byte *)(ulong)*(uint *)(param_2 + 0x18)) {
    pbVar2 = (byte *)(param_3 + (ulong)*param_1 * 0x100 + (ulong)param_1[1]);
    pbVar1 = pbVar2 + 4;
    if (((((ulong)((long)pbVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) &&
         (*pbVar2 < 0x40)) &&
        ((ulong)((long)pbVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))) &&
       (uVar3 = ((uint)*pbVar2 << 0x18 | (uint)pbVar2[1] << 0x10 | (uint)pbVar2[3]) << 2 |
                (uint)pbVar2[2] << 10, uVar3 <= (uint)(*(int *)(param_2 + 0x10) - (int)pbVar1))) {
      iVar4 = *(int *)(param_2 + 0x1c) - uVar3;
      *(int *)(param_2 + 0x1c) = iVar4;
      return 0 < iVar4;
    }
  }
  return false;
}



/* Entry: 109743ce0; end: 109743fc3;  */

uint * FUN_109743ce0(long param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  
  uVar4 = (*(uint *)(param_1 + 4) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 4) & 0xff00ff) << 8;
  uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
  puVar6 = (ushort *)&UNK_10dfe4b08;
  if (uVar4 != 0) {
    puVar6 = (ushort *)(param_1 + (ulong)uVar4);
  }
  uVar2 = *puVar6 >> 8 | *puVar6 << 8;
  iVar8 = (int)puVar6;
  if (uVar2 < 4) {
    if (uVar2 != 0) {
      if (uVar2 != 2) {
        return (uint *)&UNK_10dfe4888;
      }
      uVar2 = puVar6[2];
      iVar8 = iVar8 + 2;
      func_0x000109743af4();
      iVar8 = ((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8) - iVar8;
      iVar7 = iVar8 + -1;
      if (0 < iVar8) {
        iVar8 = 0;
        uVar4 = (uint)(puVar6[1] >> 8) | (puVar6[1] & 0xff00ff) << 8;
        do {
          uVar3 = (uint)(iVar7 + iVar8) >> 1;
          puVar9 = (ushort *)((long)puVar6 + (ulong)uVar4 * (ulong)uVar3 + 0xc);
          uVar2 = puVar9[1];
          if (param_2 < ((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8)) {
            iVar7 = uVar3 - 1;
          }
          else {
            uVar2 = *puVar9;
            if (param_2 <= ((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8)) {
              puVar6 = (ushort *)((long)puVar6 + (ulong)(uVar3 * uVar4) + 0x10);
              goto LAB_109743ef8;
            }
            iVar8 = uVar3 + 1;
          }
          if (iVar7 < iVar8) {
            return (uint *)&UNK_10dfe4888;
          }
        } while( true );
      }
      goto LAB_109743f6c;
    }
    if (param_4 <= param_2) {
      return (uint *)&UNK_10dfe4888;
    }
    puVar6 = puVar6 + param_2;
LAB_109743ef4:
    puVar6 = puVar6 + 1;
  }
  else {
    if (uVar2 == 4) {
      uVar2 = puVar6[2];
      iVar8 = iVar8 + 2;
      func_0x000109743b54();
      iVar8 = ((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8) - iVar8;
      iVar7 = iVar8 + -1;
      if (0 < iVar8) {
        iVar8 = 0;
        uVar4 = (uint)(puVar6[1] >> 8) | (puVar6[1] & 0xff00ff) << 8;
        do {
          uVar3 = (uint)(iVar7 + iVar8) >> 1;
          puVar9 = (ushort *)((long)puVar6 + (ulong)uVar4 * (ulong)uVar3 + 0xc);
          uVar2 = puVar9[1];
          if (param_2 < ((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8)) {
            iVar7 = uVar3 - 1;
          }
          else {
            uVar2 = *puVar9;
            if (param_2 <= ((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8)) {
              puVar9 = (ushort *)((long)puVar6 + (ulong)(uVar3 * uVar4) + 0xc);
              uVar2 = puVar9[1];
              if ((param_2 < ((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8)) ||
                 (((uint)(*puVar9 >> 8) | (*puVar9 & 0xff00ff) << 8) < param_2)) break;
              puVar6 = (ushort *)
                       ((long)puVar6 +
                       (ulong)(param_2 - ((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8)) * 2 +
                       (ulong)*(byte *)((long)puVar9 + 5) + (ulong)(byte)puVar9[2] * 0x100);
              goto LAB_109743ef8;
            }
            iVar8 = uVar3 + 1;
          }
          if (iVar7 < iVar8) {
            return (uint *)&UNK_10dfe4888;
          }
        } while( true );
      }
      goto LAB_109743f6c;
    }
    if (uVar2 == 6) {
      uVar2 = puVar6[2];
      iVar8 = iVar8 + 2;
      func_0x000109743bb4();
      iVar8 = ((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8) - iVar8;
      iVar7 = iVar8 + -1;
      if (0 < iVar8) {
        iVar8 = 0;
        uVar4 = (uint)(puVar6[1] >> 8) | (puVar6[1] & 0xff00ff) << 8;
        do {
          uVar3 = (uint)(iVar7 + iVar8) >> 1;
          uVar2 = *(ushort *)((long)puVar6 + (ulong)uVar4 * (ulong)uVar3 + 0xc);
          uVar5 = (uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8;
          if (param_2 < uVar5) {
            iVar7 = uVar3 - 1;
          }
          else {
            if (uVar5 == param_2) {
              puVar6 = (ushort *)((long)puVar6 + (ulong)(uVar3 * uVar4) + 0xc);
              goto LAB_109743ef4;
            }
            iVar8 = uVar3 + 1;
          }
          if (iVar7 < iVar8) {
            return (uint *)&UNK_10dfe4888;
          }
        } while( true );
      }
      goto LAB_109743f6c;
    }
    if (uVar2 != 8) {
      return (uint *)&UNK_10dfe4888;
    }
    uVar2 = puVar6[1];
    if (param_2 < ((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8)) {
      return (uint *)&UNK_10dfe4888;
    }
    param_2 = param_2 - ((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8);
    if (((uint)(puVar6[2] >> 8) | (puVar6[2] & 0xff00ff) << 8) <= param_2) {
      return (uint *)&UNK_10dfe4888;
    }
    puVar6 = puVar6 + (ulong)param_2 + 3;
  }
LAB_109743ef8:
  puVar1 = (uint *)(param_1 + (ulong)*(byte *)(param_1 + 9) * 0x10000 +
                    (ulong)*(byte *)(param_1 + 8) * 0x1000000 +
                    (ulong)*(byte *)(param_1 + 10) * 0x100 + (ulong)*(byte *)(param_1 + 0xb) +
                    (ulong)(byte)*puVar6 * 0x100 + (ulong)*(byte *)((long)puVar6 + 1));
  uVar4 = *puVar1;
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  if (param_3 < (uVar4 >> 0x10 | uVar4 << 0x10)) {
    return puVar1 + (ulong)param_3 + 1;
  }
LAB_109743f6c:
  return (uint *)&UNK_10dfe4888;
}



/* Entry: 109743fc4; end: 10974404f;  */

void FUN_109743fc4(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = *param_1;
  do {
    if ((lVar3 != 0) || (puVar4 = (undefined *)param_1[-0x1f], puVar4 == (undefined *)0x0)) {
      return;
    }
    FUN_109744050();
    if (puVar4 == (undefined *)0x0) {
      if (*param_1 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = (long)&UNK_10dfe4888;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    }
    else {
      if (*param_1 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = (long)puVar4;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      if (puVar4 != &UNK_10dfe4888) {
        FUN_1096f5a5c();
      }
    }
    lVar3 = *param_1;
  } while( true );
}



/* Entry: 109744050; end: 10974429b;  */

int * FUN_109744050(int *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  uint uVar7;
  long lVar8;
  undefined4 auStack_80 [2];
  long lStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  byte bStack_58;
  int iStack_54;
  int *piStack_50;
  int iStack_48;
  undefined2 uStack_44;
  int *piVar6;
  
  auStack_80[0] = 0;
  iStack_54 = 0;
  piStack_50 = (int *)0x0;
  uStack_70 = 0;
  lStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  bStack_58 = 0;
  iStack_48 = 0x10000;
  uStack_44 = 0;
  iVar4 = param_1[6];
  if (iVar4 == -1) {
    piVar6 = param_1;
    FUN_109710978();
    iVar4 = (int)piVar6;
  }
  uStack_44 = CONCAT11(uStack_44._1_1_,1);
  iStack_48 = iVar4;
  if (*(code **)(param_1 + 8) == (code *)0x0) {
    param_1 = (int *)&UNK_10dfe4888;
  }
  else {
    (**(code **)(param_1 + 8))(param_1,0x7472616b,*(undefined8 *)(param_1 + 10));
    if (param_1 == (int *)0x0) {
      param_1 = (int *)&UNK_10dfe4888;
    }
  }
  if (*param_1 != 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = *param_1 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  piStack_50 = param_1;
  bVar3 = 0;
  while( true ) {
    bStack_58 = bVar3;
    lVar8 = *(long *)(piStack_50 + 4);
    uStack_68._0_4_ = piStack_50[6];
    uStack_70 = lVar8 + (ulong)(uint)uStack_68;
    uVar7 = (uint)uStack_68 << 6;
    if (uVar7 < 0x4001) {
      uVar7 = 0x4000;
    }
    if (0x3ffffffe < uVar7) {
      uVar7 = 0x3fffffff;
    }
    uStack_68._4_4_ = 0x3fffffff;
    if ((uint)uStack_68 >> 0x1a == 0) {
      uStack_68._4_4_ = uVar7;
    }
    iStack_54 = 0;
    auStack_80[0] = 0;
    uStack_60 = uStack_60 & 0xffffffff;
    lStack_78 = lVar8;
    if (lVar8 == 0) {
      FUN_1096f5a5c();
      piStack_50 = (int *)0x0;
      lStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
      goto LAB_1097441d0;
    }
    lVar5 = lVar8;
    FUN_10974429c(lVar8,auStack_80);
    if ((int)lVar5 != 0) break;
    if ((iStack_54 == 0) || ((bStack_58 & 1) != 0)) goto LAB_1097441ac;
    if ((param_1[1] == 0) || (piVar6 = param_1, FUN_1096f59a0(), ((ulong)piVar6 & 1) == 0)) {
      uStack_70 = (ulong)(uint)param_1[6];
      lStack_78 = 0;
      goto LAB_1097441ac;
    }
    uStack_70 = *(long *)(param_1 + 4) + (ulong)(uint)param_1[6];
    bVar3 = 1;
    if (*(long *)(param_1 + 4) == 0) {
      lStack_78 = 0;
LAB_1097441ac:
      FUN_1096f5a5c(piStack_50);
      uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
LAB_1097441c0:
      piStack_50 = (int *)0x0;
      uStack_70 = 0;
      lStack_78 = 0;
      FUN_1096f5a5c(param_1);
      param_1 = (int *)&UNK_10dfe4888;
LAB_1097441d0:
      FUN_109710c0c(auStack_80);
      return param_1;
    }
  }
  if (iStack_54 == 0) {
    FUN_1096f5a5c(piStack_50);
    uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
  }
  else {
    iStack_54 = 0;
    FUN_10974429c(lVar8,auStack_80);
    iVar4 = iStack_54;
    FUN_1096f5a5c(piStack_50);
    uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
    uVar7 = 0;
    if (iVar4 == 0) {
      uVar7 = (uint)lVar8;
    }
    if ((uVar7 & 1) == 0) goto LAB_1097441c0;
  }
  piStack_50 = (int *)0x0;
  uStack_70 = 0;
  lStack_78 = 0;
  if (param_1[1] != 0) {
    param_1[1] = 0;
  }
  goto LAB_1097441d0;
}



/* Entry: 10974429c; end: 109744317;  */

undefined8 FUN_10974429c(ushort *param_1,long param_2)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ushort *puVar8;
  byte *pbVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  
  if (((ulong)((long)param_1 + (0xc - *(long *)(param_2 + 8))) <= (ulong)*(uint *)(param_2 + 0x18))
     && ((ushort)(*param_1 >> 8 | *param_1 << 8) == 1)) {
    puVar8 = param_1 + 3;
    FUN_109744318(puVar8,param_2,param_1,param_1);
    if ((int)puVar8 != 0) {
      puVar8 = param_1 + 4;
      if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar8 + (2 - *(long *)(param_2 + 8)))) {
        return 0;
      }
      uVar6 = (uint)(*puVar8 >> 8) | (*puVar8 & 0xff00ff) << 8;
      if (uVar6 != 0) {
        pbVar1 = (byte *)((long)param_1 + (ulong)uVar6);
        pbVar9 = pbVar1 + 8;
        if (((ulong)((long)pbVar9 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) &&
           ((ulong)((long)pbVar9 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))) {
          lVar12 = (long)param_1 +
                   (ulong)pbVar1[7] +
                   (ulong)pbVar1[6] * 0x100 +
                   (ulong)pbVar1[4] * 0x1000000 + (ulong)pbVar1[5] * 0x10000;
          if ((ulong)(lVar12 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) {
            uVar5 = (uint)pbVar1[2] << 10 | (uint)pbVar1[3] << 2;
            iVar11 = (int)*(undefined8 *)(param_2 + 0x10);
            if (uVar5 <= (uint)(iVar11 - (int)lVar12)) {
              iVar7 = *(int *)(param_2 + 0x1c) - uVar5;
              *(int *)(param_2 + 0x1c) = iVar7;
              if ((0 < iVar7) &&
                 ((ulong)((long)pbVar9 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)
                 )) {
                bVar3 = *pbVar1;
                bVar4 = pbVar1[1];
                uVar5 = (uint)CONCAT11(bVar3,bVar4);
                if ((uVar5 * 8 <= (uint)(iVar11 - (int)pbVar9)) &&
                   (iVar7 = iVar7 + uVar5 * -8, *(int *)(param_2 + 0x1c) = iVar7, 0 < iVar7)) {
                  if (uVar5 == 0) {
                    return 1;
                  }
                  lVar13 = *(long *)(param_2 + 8);
                  uVar14 = (ulong)*(uint *)(param_2 + 0x18);
                  uVar10 = (ulong)((uint)bVar3 * 0x100 + (uint)bVar4);
                  lVar12 = (long)param_1 + (ulong)uVar6 + 0x10;
                  pbVar9 = (byte *)((long)param_1 + (ulong)uVar6 + 0xf);
                  while ((ulong)(lVar12 - lVar13) <= uVar14) {
                    lVar2 = (long)param_1 + (ulong)*pbVar9 + (ulong)pbVar9[-1] * 0x100;
                    lVar13 = *(long *)(param_2 + 8);
                    uVar14 = (ulong)*(uint *)(param_2 + 0x18);
                    if (((uVar14 < (ulong)(lVar2 - lVar13)) ||
                        (uVar6 = (uint)pbVar1[3] << 1 | (uint)pbVar1[2] << 9,
                        (uint)(*(int *)(param_2 + 0x10) - (int)lVar2) < uVar6)) ||
                       (iVar11 = *(int *)(param_2 + 0x1c) - uVar6, *(int *)(param_2 + 0x1c) = iVar11
                       , iVar11 < 1)) break;
                    lVar12 = lVar12 + 8;
                    uVar10 = uVar10 - 1;
                    pbVar9 = pbVar9 + 8;
                    if (uVar10 == 0) {
                      return 1;
                    }
                  }
                }
              }
            }
          }
        }
        if (0x1f < *(uint *)(param_2 + 0x2c)) {
          return 0;
        }
        *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1;
        if (*(char *)(param_2 + 0x28) != '\x01') {
          return 0;
        }
        *puVar8 = 0;
      }
      return 1;
    }
  }
  return 0;
}



/* Entry: 109744318; end: 1097444d7;  */

undefined8 FUN_109744318(ushort *param_1,long param_2,long param_3,long param_4)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)param_1 + (2 - *(long *)(param_2 + 8)))) {
    return 0;
  }
  uVar6 = (uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8;
  if (uVar6 != 0) {
    pbVar1 = (byte *)(param_3 + (ulong)uVar6);
    pbVar8 = pbVar1 + 8;
    if (((ulong)((long)pbVar8 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) &&
       ((ulong)((long)pbVar8 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))) {
      lVar11 = param_4 + (ulong)pbVar1[5] * 0x10000 + (ulong)pbVar1[4] * 0x1000000 +
               (ulong)pbVar1[6] * 0x100 + (ulong)pbVar1[7];
      if ((ulong)(lVar11 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) {
        uVar5 = (uint)pbVar1[2] << 10 | (uint)pbVar1[3] << 2;
        iVar10 = (int)*(undefined8 *)(param_2 + 0x10);
        if (uVar5 <= (uint)(iVar10 - (int)lVar11)) {
          iVar7 = *(int *)(param_2 + 0x1c) - uVar5;
          *(int *)(param_2 + 0x1c) = iVar7;
          if ((0 < iVar7) &&
             ((ulong)((long)pbVar8 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))) {
            bVar3 = *pbVar1;
            bVar4 = pbVar1[1];
            uVar5 = (uint)CONCAT11(bVar3,bVar4);
            if ((uVar5 * 8 <= (uint)(iVar10 - (int)pbVar8)) &&
               (iVar7 = iVar7 + uVar5 * -8, *(int *)(param_2 + 0x1c) = iVar7, 0 < iVar7)) {
              if (uVar5 == 0) {
                return 1;
              }
              lVar12 = *(long *)(param_2 + 8);
              uVar13 = (ulong)*(uint *)(param_2 + 0x18);
              uVar9 = (ulong)((uint)bVar3 * 0x100 + (uint)bVar4);
              lVar11 = param_3 + (ulong)uVar6 + 0x10;
              pbVar8 = (byte *)(param_3 + (ulong)uVar6 + 0xf);
              while ((ulong)(lVar11 - lVar12) <= uVar13) {
                lVar2 = param_4 + (ulong)pbVar8[-1] * 0x100 + (ulong)*pbVar8;
                lVar12 = *(long *)(param_2 + 8);
                uVar13 = (ulong)*(uint *)(param_2 + 0x18);
                if (((uVar13 < (ulong)(lVar2 - lVar12)) ||
                    (uVar6 = (uint)pbVar1[3] << 1 | (uint)pbVar1[2] << 9,
                    (uint)(*(int *)(param_2 + 0x10) - (int)lVar2) < uVar6)) ||
                   (iVar10 = *(int *)(param_2 + 0x1c) - uVar6, *(int *)(param_2 + 0x1c) = iVar10,
                   iVar10 < 1)) break;
                lVar11 = lVar11 + 8;
                uVar9 = uVar9 - 1;
                pbVar8 = pbVar8 + 8;
                if (uVar9 == 0) {
                  return 1;
                }
              }
            }
          }
        }
      }
    }
    if (0x1f < *(uint *)(param_2 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1;
    if (*(char *)(param_2 + 0x28) != '\x01') {
      return 0;
    }
    *param_1 = 0;
  }
  return 1;
}



/* Entry: 1097444d8; end: 10974456f;  */

void FUN_1097444d8(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (*param_1 == 0) {
    do {
      puVar3 = (undefined *)param_1[-0x21];
      if (puVar3 == (undefined *)0x0) {
        return;
      }
      FUN_109744570();
      if (puVar3 == (undefined *)0x0) {
        if (*param_1 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar2) {
            *param_1 = (long)&UNK_10dfe4888;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') {
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      }
      else {
        if (*param_1 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar2) {
            *param_1 = (long)puVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') {
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        if (puVar3 != &UNK_10dfe4888) {
          FUN_1096f5a5c();
        }
      }
    } while (*param_1 == 0);
  }
  return;
}



/* Entry: 109744570; end: 1097447bb;  */

int * FUN_109744570(int *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  uint uVar7;
  long lVar8;
  undefined4 auStack_80 [2];
  long lStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  byte bStack_58;
  int iStack_54;
  int *piStack_50;
  int iStack_48;
  undefined2 uStack_44;
  int *piVar6;
  
  auStack_80[0] = 0;
  iStack_54 = 0;
  piStack_50 = (int *)0x0;
  uStack_70 = 0;
  lStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  bStack_58 = 0;
  iStack_48 = 0x10000;
  uStack_44 = 0;
  iVar4 = param_1[6];
  if (iVar4 == -1) {
    piVar6 = param_1;
    FUN_109710978();
    iVar4 = (int)piVar6;
  }
  uStack_44 = CONCAT11(uStack_44._1_1_,1);
  iStack_48 = iVar4;
  if (*(code **)(param_1 + 8) == (code *)0x0) {
    param_1 = (int *)&UNK_10dfe4888;
  }
  else {
    (**(code **)(param_1 + 8))(param_1,0x66656174,*(undefined8 *)(param_1 + 10));
    if (param_1 == (int *)0x0) {
      param_1 = (int *)&UNK_10dfe4888;
    }
  }
  if (*param_1 != 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = *param_1 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  piStack_50 = param_1;
  bVar3 = 0;
  while( true ) {
    bStack_58 = bVar3;
    lVar8 = *(long *)(piStack_50 + 4);
    uStack_68._0_4_ = piStack_50[6];
    uStack_70 = lVar8 + (ulong)(uint)uStack_68;
    uVar7 = (uint)uStack_68 << 6;
    if (uVar7 < 0x4001) {
      uVar7 = 0x4000;
    }
    if (0x3ffffffe < uVar7) {
      uVar7 = 0x3fffffff;
    }
    uStack_68._4_4_ = 0x3fffffff;
    if ((uint)uStack_68 >> 0x1a == 0) {
      uStack_68._4_4_ = uVar7;
    }
    iStack_54 = 0;
    auStack_80[0] = 0;
    uStack_60 = uStack_60 & 0xffffffff;
    lStack_78 = lVar8;
    if (lVar8 == 0) {
      FUN_1096f5a5c();
      piStack_50 = (int *)0x0;
      lStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
      goto LAB_1097446f0;
    }
    lVar5 = lVar8;
    FUN_1097447bc(lVar8,auStack_80);
    if ((int)lVar5 != 0) break;
    if ((iStack_54 == 0) || ((bStack_58 & 1) != 0)) goto LAB_1097446cc;
    if ((param_1[1] == 0) || (piVar6 = param_1, FUN_1096f59a0(), ((ulong)piVar6 & 1) == 0)) {
      uStack_70 = (ulong)(uint)param_1[6];
      lStack_78 = 0;
      goto LAB_1097446cc;
    }
    uStack_70 = *(long *)(param_1 + 4) + (ulong)(uint)param_1[6];
    bVar3 = 1;
    if (*(long *)(param_1 + 4) == 0) {
      lStack_78 = 0;
LAB_1097446cc:
      FUN_1096f5a5c(piStack_50);
      uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
LAB_1097446e0:
      piStack_50 = (int *)0x0;
      uStack_70 = 0;
      lStack_78 = 0;
      FUN_1096f5a5c(param_1);
      param_1 = (int *)&UNK_10dfe4888;
LAB_1097446f0:
      FUN_109710c0c(auStack_80);
      return param_1;
    }
  }
  if (iStack_54 == 0) {
    FUN_1096f5a5c(piStack_50);
    uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
  }
  else {
    iStack_54 = 0;
    FUN_1097447bc(lVar8,auStack_80);
    iVar4 = iStack_54;
    FUN_1096f5a5c(piStack_50);
    uStack_68 = (ulong)uStack_68._4_4_ << 0x20;
    uVar7 = 0;
    if (iVar4 == 0) {
      uVar7 = (uint)lVar8;
    }
    if ((uVar7 & 1) == 0) goto LAB_1097446e0;
  }
  piStack_50 = (int *)0x0;
  uStack_70 = 0;
  lStack_78 = 0;
  if (param_1[1] != 0) {
    param_1[1] = 0;
  }
  goto LAB_1097446f0;
}



/* Entry: 1097447bc; end: 1097448e3;  */

undefined8 FUN_1097447bc(ushort *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  ushort uVar5;
  ulong uVar6;
  ushort *puVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  
  puVar7 = param_1 + 6;
  if ((((ulong)((long)puVar7 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) &&
      ((ushort)(*param_1 >> 8 | *param_1 << 8) == 1)) &&
     ((ulong)((long)puVar7 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))) {
    uVar5 = param_1[2];
    bVar3 = *(byte *)((long)param_1 + 5);
    uVar2 = (uint)CONCAT11((byte)uVar5,bVar3);
    if ((uVar2 * 0xc <= (uint)(*(int *)(param_2 + 0x10) - (int)puVar7)) &&
       (iVar4 = *(int *)(param_2 + 0x1c) + uVar2 * -0xc, *(int *)(param_2 + 0x1c) = iVar4, 0 < iVar4
       )) {
      if (uVar2 != 0) {
        lVar9 = *(long *)(param_2 + 8);
        uVar10 = (ulong)*(uint *)(param_2 + 0x18);
        uVar6 = (ulong)((uint)(byte)uVar5 * 0x100 + (uint)bVar3);
        puVar7 = param_1 + 0xc;
        pbVar8 = (byte *)((long)param_1 + 0x13);
        do {
          if (uVar10 < (ulong)((long)puVar7 - lVar9)) {
            return 0;
          }
          lVar1 = (long)param_1 +
                  (ulong)*pbVar8 +
                  (ulong)pbVar8[-1] * 0x100 +
                  (ulong)pbVar8[-3] * 0x1000000 + (ulong)pbVar8[-2] * 0x10000;
          lVar9 = *(long *)(param_2 + 8);
          uVar10 = (ulong)*(uint *)(param_2 + 0x18);
          if (uVar10 < (ulong)(lVar1 - lVar9)) {
            return 0;
          }
          uVar2 = (uint)pbVar8[-5] << 10 | (uint)pbVar8[-4] << 2;
          if ((uint)(*(int *)(param_2 + 0x10) - (int)lVar1) < uVar2) {
            return 0;
          }
          iVar4 = *(int *)(param_2 + 0x1c) - uVar2;
          *(int *)(param_2 + 0x1c) = iVar4;
          if (iVar4 < 1) {
            return 0;
          }
          puVar7 = puVar7 + 6;
          pbVar8 = pbVar8 + 0xc;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      return 1;
    }
  }
  return 0;
}



/* Entry: 1097448e4; end: 109744933;  */

undefined8 FUN_1097448e4(undefined8 param_1,uint param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__realloc_11034ca10)(param_1,(ulong)param_2 * 0x18);
    return param_1;
  }
  _free();
  return 0;
}



/* Entry: 109744934; end: 1097449ef;  */

undefined8 FUN_109744934(uint *param_1,uint param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar3 = *param_1;
  uVar4 = (ulong)uVar3;
  if ((int)uVar3 < 0) {
    return 0;
  }
  if (param_3 == 0) {
    if (param_2 <= uVar3) {
      return 1;
    }
    do {
      uVar5 = (uint)uVar4 + ((uint)uVar4 >> 1) + 8;
      uVar4 = (ulong)uVar5;
    } while (uVar5 < param_2);
  }
  else {
    uVar5 = param_1[1];
    if (param_1[1] <= param_2) {
      uVar5 = param_2;
    }
    uVar4 = (ulong)uVar5;
    if (uVar5 <= uVar3 && uVar3 >> 2 <= uVar5) {
      return 1;
    }
  }
  uVar5 = (uint)uVar4;
  if (uVar4 >> 0x1c == 0) {
    lVar1 = *(long *)(param_1 + 2);
    if (uVar5 == 0) {
      _free();
      lVar1 = 0;
    }
    else {
      _realloc(lVar1,uVar5 << 4);
      if (lVar1 == 0) {
        uVar3 = *param_1;
        if (uVar5 <= uVar3) {
          return 1;
        }
        goto LAB_109744994;
      }
    }
    *(long *)(param_1 + 2) = lVar1;
    uVar2 = 1;
  }
  else {
LAB_109744994:
    uVar2 = 0;
    uVar5 = ~uVar3;
  }
  *param_1 = uVar5;
  return uVar2;
}



/* Entry: 1097449f0; end: 109744a63;  */

bool FUN_1097449f0(long param_1,long param_2,long param_3,long param_4,int param_5)

{
  bool bVar1;
  long lVar2;
  long lStack_28;
  long lStack_20;
  long lStack_18;
  
  if (param_2 != 0) {
    if ((param_5 == 0) || (param_3 != 0 || param_4 != 0)) {
      lVar2 = param_1 + 0x40;
      lStack_28 = param_2;
      lStack_20 = param_3;
      lStack_18 = param_4;
      FUN_109744b5c(lVar2,&lStack_28,param_1,param_5 != 0);
      bVar1 = lVar2 != 0;
    }
    else {
      FUN_109744a64(param_1 + 0x40,param_2,param_1);
      bVar1 = true;
    }
    return bVar1;
  }
  return false;
}



/* Entry: 109744a64; end: 109744b5b;  */

void FUN_109744a64(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  _pthread_mutex_lock(param_3);
  uVar2 = *(uint *)(param_1 + 4);
  if (uVar2 == 0) {
code_r0x00010bdbf81c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__pthread_mutex_unlock_11034c918)(param_3);
    return;
  }
  plVar3 = *(long **)(param_1 + 8);
  plVar5 = plVar3;
  if (*plVar3 != param_2) {
    uVar6 = 0;
    do {
      if ((ulong)uVar2 - 1 == uVar6) goto code_r0x00010bdbf81c;
      plVar5 = plVar5 + 3;
      uVar6 = uVar6 + 1;
    } while (*plVar5 != param_2);
    if (uVar2 <= uVar6) goto code_r0x00010bdbf81c;
  }
  lVar1 = plVar5[1];
  UNRECOVERED_JUMPTABLE = (code *)plVar5[2];
  plVar3 = plVar3 + (ulong)(uVar2 - 1) * 3;
  lVar4 = plVar3[2];
  lVar7 = *plVar3;
  plVar5[1] = plVar3[1];
  *plVar5 = lVar7;
  plVar5[2] = lVar4;
  if (*(int *)(param_1 + 4) != 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  }
  _pthread_mutex_unlock(param_3);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000109744b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(lVar1);
  return;
}



/* Entry: 109744b5c; end: 109744c17;  */

int * FUN_109744b5c(int *param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 uVar6;
  
  _pthread_mutex_lock(param_3);
  piVar5 = param_1;
  FUN_109744c18(param_1,param_2,0);
  if (piVar5 == (int *)0x0) {
    piVar5 = param_1;
    FUN_109744c78(param_1,param_2);
    _pthread_mutex_unlock(param_3);
  }
  else if (param_4 == 0) {
    _pthread_mutex_unlock(param_3);
    piVar5 = (int *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(piVar5 + 2);
    pcVar3 = *(code **)(piVar5 + 4);
    uVar4 = param_2[2];
    uVar6 = *param_2;
    *(undefined8 *)(piVar5 + 2) = param_2[1];
    *(undefined8 *)piVar5 = uVar6;
    *(undefined8 *)(piVar5 + 4) = uVar4;
    _pthread_mutex_unlock(param_3);
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar2);
    }
  }
  piVar1 = (int *)0x0;
  if (-1 < *param_1) {
    piVar1 = piVar5;
  }
  return piVar1;
}



/* Entry: 109744c18; end: 109744c77;  */

long * FUN_109744c18(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 != 0) {
    plVar2 = *(long **)(param_1 + 8);
    if (*param_2 == *plVar2) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      plVar4 = plVar2;
      do {
        plVar4 = plVar4 + 3;
        if ((ulong)uVar1 - 1 == uVar3) {
          return param_3;
        }
        uVar3 = uVar3 + 1;
      } while (*param_2 != *plVar4);
      if (uVar1 <= uVar3) {
        return param_3;
      }
    }
    param_3 = plVar2 + uVar3 * 3;
  }
  return param_3;
}



/* Entry: 109744c78; end: 109744dbb;  */

void FUN_109744c78(int *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = param_1[1];
  if (*param_1 <= (int)uVar3) {
    piVar1 = param_1;
    func_0x000109744cf4(param_1,uVar3 + 1,0);
    if ((int)piVar1 == 0) {
      uRam000000011382ab30 = 0;
      uRam000000011382ab38 = 0;
      uRam000000011382ab40 = 0;
      return;
    }
    uVar3 = param_1[1];
  }
  param_1[1] = uVar3 + 1;
  puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar3 * 0x18);
  uVar5 = param_2[1];
  uVar4 = *param_2;
  puVar2[2] = param_2[2];
  puVar2[1] = uVar5;
  *puVar2 = uVar4;
  return;
}



/* Entry: 109744dbc; end: 109744e6b;  */

undefined8 FUN_109744dbc(long param_1,long param_2,long *param_3,undefined8 param_4)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  _pthread_mutex_lock(param_4);
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 == 0) {
LAB_109744e28:
    uVar5 = 0;
  }
  else {
    plVar2 = *(long **)(param_1 + 8);
    if (*plVar2 == param_2) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      plVar4 = plVar2;
      do {
        plVar4 = plVar4 + 3;
        if ((ulong)uVar1 - 1 == uVar3) goto LAB_109744e28;
        uVar3 = uVar3 + 1;
      } while (*plVar4 != param_2);
      if (uVar1 <= uVar3) goto LAB_109744e28;
    }
    plVar2 = plVar2 + uVar3 * 3;
    lVar7 = plVar2[1];
    lVar6 = *plVar2;
    param_3[2] = plVar2[2];
    param_3[1] = lVar7;
    *param_3 = lVar6;
    uVar5 = 1;
  }
  _pthread_mutex_unlock(param_4);
  return uVar5;
}



/* Entry: 109744e6c; end: 109744e8f;  */

undefined8 FUN_109744e6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__realloc_11034ca10)(param_1,param_2);
    return param_1;
  }
  _free();
  return 0;
}



/* Entry: 109744e90; end: 109744f2b;  */

char * FUN_109744e90(char *param_1,char *param_2,undefined4 *param_3,undefined8 param_4)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = param_1 + -1;
  pcVar3 = pcVar4;
  if (param_2 < pcVar4) {
    lVar1 = 1;
    pcVar2 = pcVar4;
    do {
      pcVar3 = pcVar2;
      if (-0x41 < *pcVar2 || 3 < lVar1) break;
      pcVar2 = pcVar2 + -1;
      lVar1 = lVar1 + 1;
      pcVar3 = param_2;
    } while (param_2 < pcVar2);
  }
  pcVar2 = pcVar3;
  FUN_109744f2c(pcVar3,param_1,param_3,param_4);
  if (pcVar2 != param_1) {
    *param_3 = (int)param_4;
    pcVar3 = pcVar4;
  }
  return pcVar3;
}



/* Entry: 109744f2c; end: 109745047;  */

byte * FUN_109744f2c(byte *param_1,byte *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  
  pbVar3 = param_1 + 1;
  uVar1 = (uint)*param_1;
  uVar4 = uVar1;
  if ((char)*param_1 < '\0') {
    uVar4 = param_4;
    if (uVar1 - 0xc2 < 0x1e) {
      if ((pbVar3 < param_2) && (param_1[1] - 0x80 < 0x40)) {
        pbVar3 = param_1 + 2;
        uVar4 = param_1[1] - 0x80 | (uVar1 & 0x1f) << 6;
      }
    }
    else if ((uVar1 & 0xf0) == 0xe0) {
      if (((1 < (long)param_2 - (long)pbVar3) && (*pbVar3 - 0x80 < 0x40)) &&
         ((param_1[2] - 0x80 < 0x40 &&
          ((uVar2 = (uVar1 & 0xf) << 0xc, uVar1 = (*pbVar3 - 0x80) * 0x40,
           (uVar2 | uVar1 & 0xf800) != 0xd800 &&
           (uVar1 = param_1[2] - 0x80 | uVar2 | uVar1, 0x7ff < uVar1)))))) {
        pbVar3 = param_1 + 3;
        uVar4 = uVar1;
      }
    }
    else if ((((uVar1 - 0xf0 < 5 && 2 < (long)param_2 - (long)pbVar3) && (*pbVar3 - 0x80 < 0x40)) &&
             (param_1[2] - 0x80 < 0x40)) &&
            ((param_1[3] - 0x80 < 0x40 &&
             (uVar1 = param_1[3] - 0x80 |
                      (uVar1 & 7) << 0x12 | (*pbVar3 - 0x80) * 0x1000 | (param_1[2] - 0x80) * 0x40,
             uVar1 - 0x10000 < 0x100000)))) {
      pbVar3 = param_1 + 4;
      uVar4 = uVar1;
    }
  }
  *param_3 = uVar4;
  return pbVar3;
}



/* Entry: 109745048; end: 109745603;  */

bool FUN_109745048(uint *param_1,long param_2)

{
  uint uVar1;
  ushort *puVar2;
  long lVar3;
  ushort *puVar4;
  long lVar5;
  byte *pbVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  ushort uVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  ushort uVar19;
  bool bVar20;
  int iVar21;
  ulong uVar22;
  ushort *puVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  uint *puVar27;
  ulong uVar28;
  uint *puVar29;
  long lVar30;
  
  puVar27 = param_1 + 1;
  if ((ulong)((long)puVar27 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) {
    uVar14 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
    uVar14 = uVar14 >> 0x10 | uVar14 << 0x10;
    if ((int)uVar14 < 0x74727565) {
      if (uVar14 == 0x100) {
        if ((ulong)*(uint *)(param_2 + 0x18) <
            (ulong)((long)param_1 + (0x10 - *(long *)(param_2 + 8)))) {
          return false;
        }
        if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar27 - *(long *)(param_2 + 8))) {
          return false;
        }
        lVar3 = (long)param_1 +
                (ulong)*(byte *)((long)param_1 + 3) +
                (ulong)*(byte *)((long)param_1 + 2) * 0x100 +
                (ulong)(byte)*param_1 * 0x1000000 + (ulong)*(byte *)((long)param_1 + 1) * 0x10000;
        if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)(lVar3 - *(long *)(param_2 + 8))) {
          return false;
        }
        uVar14 = param_1[2];
        uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
        uVar14 = uVar14 >> 0x10 | uVar14 << 0x10;
        if ((uint)(*(int *)(param_2 + 0x10) - (int)lVar3) < uVar14) {
          return false;
        }
        iVar21 = *(int *)(param_2 + 0x1c) - uVar14;
        *(int *)(param_2 + 0x1c) = iVar21;
        if (iVar21 < 1) {
          return false;
        }
        if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)(param_1 + 2) - *(long *)(param_2 + 8))
           ) {
          return false;
        }
        uVar14 = *param_1;
        bVar7 = *(byte *)((long)param_1 + 1);
        bVar8 = *(byte *)((long)param_1 + 2);
        bVar9 = *(byte *)((long)param_1 + 3);
        uVar18 = param_1[1];
        bVar10 = *(byte *)((long)param_1 + 5);
        bVar11 = *(byte *)((long)param_1 + 6);
        bVar12 = *(byte *)((long)param_1 + 7);
        lVar3 = (ulong)bVar12 +
                (ulong)bVar11 * 0x100 + (ulong)(byte)uVar18 * 0x1000000 + (ulong)bVar10 * 0x10000;
        if ((ulong)*(uint *)(param_2 + 0x18) <
            (ulong)((long)param_1 + (lVar3 - *(long *)(param_2 + 8)) + 0x1c)) {
          return false;
        }
        if ((ulong)*(uint *)(param_2 + 0x18) <
            (ulong)((long)param_1 + (lVar3 - *(long *)(param_2 + 8)) + 0x1a)) {
          return false;
        }
        uVar22 = (ulong)*(byte *)((long)param_1 + lVar3 + 0x18);
        uVar26 = (ulong)*(byte *)((long)param_1 + lVar3 + 0x19);
        puVar4 = (ushort *)
                 ((long)param_1 +
                 (ulong)*(byte *)((long)param_1 + lVar3 + 0x19) +
                 (ulong)*(byte *)((long)param_1 + lVar3 + 0x18) * 0x100 + lVar3);
        puVar2 = puVar4 + 1;
        if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar2 - *(long *)(param_2 + 8))) {
          return false;
        }
        if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar2 - *(long *)(param_2 + 8))) {
          return false;
        }
        uVar1 = ((uint)(byte)*puVar4 << 0xb | (uint)*(byte *)((long)puVar4 + 1) << 3) + 8;
        if ((uint)(*(int *)(param_2 + 0x10) - (int)puVar2) < uVar1) {
          return false;
        }
        iVar21 = *(int *)(param_2 + 0x1c) - uVar1;
        *(int *)(param_2 + 0x1c) = iVar21;
        if (iVar21 < 1) {
          return false;
        }
        uVar28 = 0;
        lVar16 = (ulong)bVar9 +
                 (ulong)bVar8 * 0x100 + (ulong)(byte)uVar14 * 0x1000000 + (ulong)bVar7 * 0x10000;
        uVar13 = *puVar4;
        do {
          puVar4 = puVar2 + uVar28 * 4;
          if ((byte *)(ulong)*(uint *)(param_2 + 0x18) <
              (byte *)((long)puVar4 + (8 - *(long *)(param_2 + 8)))) {
            return false;
          }
          puVar23 = puVar4;
          FUN_109711688();
          if ((byte *)(ulong)*(uint *)(param_2 + 0x18) <
              (byte *)((long)puVar4 + (8 - *(long *)(param_2 + 8)))) {
            return false;
          }
          uVar19 = puVar4[3];
          bVar7 = *(byte *)((long)puVar4 + 7);
          lVar5 = (long)param_1 +
                  (ulong)bVar7 + (ulong)(byte)uVar19 * 0x100 + uVar26 + uVar22 * 0x100 + lVar3;
          if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)(lVar5 - *(long *)(param_2 + 8))) {
            return false;
          }
          iVar21 = (int)puVar23;
          if ((uint)(*(int *)(param_2 + 0x10) - (int)lVar5) < (uint)(iVar21 * 0xc)) {
            return false;
          }
          iVar15 = *(int *)(param_2 + 0x1c) + iVar21 * -0xc;
          *(int *)(param_2 + 0x1c) = iVar15;
          if (iVar15 < 1) {
            return false;
          }
          if (iVar21 != 0) {
            lVar30 = 0;
            lVar17 = (ulong)(byte)uVar19 * 0x100 + (ulong)bVar7 +
                     (ulong)(byte)uVar18 * 0x1000000 + (ulong)bVar10 * 0x10000 +
                     (ulong)bVar11 * 0x100 + uVar26 + uVar22 * 0x100 + (ulong)bVar12 + 5;
            do {
              lVar25 = (lVar5 + lVar30) - *(long *)(param_2 + 8);
              if ((ulong)*(uint *)(param_2 + 0x18) < lVar25 + 0xcU) {
                return false;
              }
              if ((ulong)*(uint *)(param_2 + 0x18) < lVar25 + 8U) {
                return false;
              }
              pbVar6 = (byte *)((long)param_1 + lVar30 + lVar17);
              puVar29 = (uint *)((long)param_1 +
                                (ulong)pbVar6[2] +
                                (ulong)*pbVar6 * 0x10000 + (ulong)pbVar6[1] * 0x100 + lVar16);
              puVar27 = puVar29 + 1;
              if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar27 - *(long *)(param_2 + 8))
                 ) {
                return false;
              }
              if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar27 - *(long *)(param_2 + 8))
                 ) {
                return false;
              }
              uVar14 = *puVar29;
              uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
              uVar14 = uVar14 >> 0x10 | uVar14 << 0x10;
              if ((uint)(*(int *)(param_2 + 0x10) - (int)puVar27) < uVar14) {
                return false;
              }
              iVar21 = *(int *)(param_2 + 0x1c) - uVar14;
              *(int *)(param_2 + 0x1c) = iVar21;
              if (iVar21 < 1) {
                return false;
              }
              lVar25 = (ulong)pbVar6[2] +
                       (ulong)*(byte *)((long)param_1 + lVar30 + lVar17) * 0x10000 +
                       (ulong)pbVar6[1] * 0x100 + lVar16;
              if ((ulong)*(uint *)(param_2 + 0x18) <
                  (ulong)((long)param_1 + (lVar25 - *(long *)(param_2 + 8)) + 0x10)) {
                return false;
              }
              uVar24 = (long)param_1 + lVar25 + 8;
              FUN_109745604(uVar24,param_2);
              if ((uVar24 & 1) == 0) {
                return false;
              }
              lVar30 = lVar30 + 0xc;
            } while (((ulong)puVar23 & 0xffffffff) * 0xc - lVar30 != 0);
          }
          bVar20 = uVar28 == ((uint)(uVar13 >> 8) | (uVar13 & 0xff00ff) << 8);
          uVar28 = uVar28 + 1;
          if (bVar20) {
            return true;
          }
        } while( true );
      }
      if (uVar14 != 0x10000 && uVar14 != 0x4f54544f) {
        return true;
      }
    }
    else if (uVar14 != 0x74797031) {
      if (uVar14 == 0x74746366) {
        if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)param_1 + (8 - *(long *)(param_2 + 8)))
           ) {
          return false;
        }
        if (1 < ((uint)(ushort)((ushort)param_1[1] >> 8) | ((ushort)param_1[1] & 0xff00ff) << 8) - 1
           ) {
          return true;
        }
        puVar27 = param_1 + 3;
        if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar27 - *(long *)(param_2 + 8))) {
          return false;
        }
        if (0x3f < (byte)param_1[2]) {
          return false;
        }
        if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar27 - *(long *)(param_2 + 8))) {
          return false;
        }
        uVar14 = ((uint)(byte)param_1[2] << 0x18 | (uint)*(byte *)((long)param_1 + 9) << 0x10 |
                 (uint)*(byte *)((long)param_1 + 0xb)) << 2 |
                 (uint)*(byte *)((long)param_1 + 10) << 10;
        if ((uint)(*(int *)(param_2 + 0x10) - (int)puVar27) < uVar14) {
          return false;
        }
        iVar21 = *(int *)(param_2 + 0x1c) - uVar14;
        *(int *)(param_2 + 0x1c) = iVar21;
        if (iVar21 < 1) {
          return false;
        }
        uVar14 = (param_1[2] & 0xff00ff00) >> 8 | (param_1[2] & 0xff00ff) << 8;
        uVar14 = uVar14 >> 0x10 | uVar14 << 0x10;
        uVar22 = (ulong)uVar14;
        if (uVar14 == 0) {
          return true;
        }
        puVar29 = param_1 + 4;
        do {
          if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar29 - *(long *)(param_2 + 8))) {
            return false;
          }
          uVar14 = (*puVar27 & 0xff00ff00) >> 8 | (*puVar27 & 0xff00ff) << 8;
          uVar14 = uVar14 >> 0x10 | uVar14 << 0x10;
          if (uVar14 != 0) {
            if ((long)param_1 + ((ulong)uVar14 - *(long *)(param_2 + 8)) + 0xc <=
                (ulong)*(uint *)(param_2 + 0x18)) {
              uVar26 = (long)param_1 + (ulong)uVar14 + 4;
              FUN_109745604(uVar26,param_2);
              if ((uVar26 & 1) != 0) goto LAB_1097455ec;
            }
            if (0x1f < *(uint *)(param_2 + 0x2c)) {
              return false;
            }
            *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1;
            if (*(char *)(param_2 + 0x28) != '\x01') {
              return false;
            }
            *puVar27 = 0;
          }
LAB_1097455ec:
          puVar27 = puVar27 + 1;
          puVar29 = puVar29 + 1;
          uVar22 = uVar22 - 1;
          if (uVar22 == 0) {
            return true;
          }
        } while( true );
      }
      if (uVar14 != 0x74727565) {
        return true;
      }
    }
    if ((ulong)((long)param_1 + (0xc - *(long *)(param_2 + 8))) <= (ulong)*(uint *)(param_2 + 0x18))
    {
      puVar29 = param_1 + 3;
      if ((((ulong)((long)puVar29 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) &&
          ((ulong)((long)puVar29 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))) &&
         (uVar14 = (uint)(byte)*puVar27 << 0xc | (uint)*(byte *)((long)param_1 + 5) << 4,
         uVar14 <= (uint)(*(int *)(param_2 + 0x10) - (int)puVar29))) {
        iVar21 = *(int *)(param_2 + 0x1c) - uVar14;
        *(int *)(param_2 + 0x1c) = iVar21;
        return 0 < iVar21;
      }
      return false;
    }
  }
  return false;
}



/* Entry: 109745604; end: 10974566f;  */

bool FUN_109745604(byte *param_1,long param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  
  pbVar1 = param_1 + 8;
  if ((((ulong)((long)pbVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) &&
      ((ulong)((long)pbVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))) &&
     (uVar2 = (uint)*param_1 << 0xc | (uint)param_1[1] << 4,
     uVar2 <= (uint)(*(int *)(param_2 + 0x10) - (int)pbVar1))) {
    iVar3 = *(int *)(param_2 + 0x1c) - uVar2;
    *(int *)(param_2 + 0x1c) = iVar3;
    return 0 < iVar3;
  }
  return false;
}


