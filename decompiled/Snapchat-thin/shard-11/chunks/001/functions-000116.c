/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1081fe848; end: 1081fe87b;  */

void FUN_1081fe848(undefined8 *param_1,undefined8 param_2)

{
  FUN_1081fe9c0();
                    /* WARNING: Could not recover jumptable at 0x0001081fe878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x20))((long *)*param_1,param_2);
  return;
}



/* Entry: 1081fe87c; end: 1081fe97f;  */

void FUN_1081fe87c(long param_1,undefined1 *param_2,int param_3)

{
  undefined1 *puVar1;
  long lVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  long lStack_50;
  long *plStack_48;
  
  if (0 < param_3) {
    plVar6 = (long *)(param_1 + 0x10);
    lVar2 = *(long *)(param_1 + 0x18);
    lVar7 = (long)param_3;
    plVar8 = (long *)(param_1 + 0x20);
    if (lVar7 <= *plVar8 - lVar2) {
      puVar1 = param_2 + param_3;
      puVar4 = *(undefined1 **)(param_1 + 0x18);
      for (; param_2 != puVar1; param_2 = param_2 + 1) {
        *puVar4 = *param_2;
        puVar4 = puVar4 + 1;
      }
      *(undefined1 **)(param_1 + 0x18) = puVar4;
      return;
    }
    plVar3 = plVar6;
    func_0x0001068896a8(plVar6,(lVar7 - *plVar6) + lVar2);
    lVar5 = *plVar6;
    plStack_68 = (long *)0x0;
    plStack_48 = plVar8;
    if (plVar3 != (long *)0x0) {
      func_0x000107c278bc();
      plStack_68 = plVar8;
    }
    puStack_60 = (undefined1 *)((long)plStack_68 + (lVar2 - lVar5));
    lStack_50 = (long)plStack_68 + (long)plVar3;
    puStack_58 = puStack_60 + lVar7;
    puVar1 = puStack_60;
    for (; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
      param_2 = param_2 + 1;
    }
    FUN_108186d30(plVar6,&plStack_68,lVar2);
    func_0x00010688972c(&plStack_68);
  }
  return;
}



/* Entry: 1081fe980; end: 1081fe98b;  */

/* WARNING: Removing unreachable block (ram,0x0001081ffec8) */
/* WARNING: Removing unreachable block (ram,0x0001081ffeec) */
/* WARNING: Removing unreachable block (ram,0x0001081ffef4) */
/* WARNING: Removing unreachable block (ram,0x0001081fff14) */

undefined8 FUN_1081fe980(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    return 0;
  }
  if (*(int *)(lVar1 + 0x398) != 2) {
    *(undefined4 *)(lVar1 + 0x398) = 2;
    return 1;
  }
  *(undefined4 *)(lVar1 + 0x228) = 0x24;
  return 0;
}



/* Entry: 1081fe98c; end: 1081fe9b7;  */

long FUN_1081fe98c(long param_1)

{
  func_0x000107c28338(param_1 + 0x10);
  func_0x0001081fea04(param_1 + 8);
  return param_1;
}



/* Entry: 1081fe9b8; end: 1081fe9bf;  */

/* WARNING: Removing unreachable block (ram,0x00010841082c) */

undefined8 FUN_1081fe9b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  _malloc();
  FUN_1084107ec(param_1,uVar1);
  return uVar1;
}



/* Entry: 1081fe9c0; end: 1081fea27;  */

void FUN_1081fe9c0(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != param_1[3]) {
    (**(code **)(*(long *)*param_1 + 0x28))((long *)*param_1,lVar1,(int)param_1[3] - (int)lVar1);
    param_1[3] = param_1[2];
  }
  return;
}



/* Entry: 1081fea28; end: 1081fea4f;  */

void FUN_1081fea28(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_1081ff268();
  }
  return;
}



/* Entry: 1081fea50; end: 1081fea6f;  */

void FUN_1081fea50(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x0001081fea54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1081fea70; end: 1081feef3;  */

undefined8 * FUN_1081fea70(long param_1,undefined8 *param_2,undefined1 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  undefined *puVar9;
  int *piVar10;
  code *pcVar11;
  int *piStack_48;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x3f0;
    _malloc();
    puVar9 = PTR__realloc_11034ca10;
    pcVar11 = (code *)PTR__malloc_11034c5e8;
    if (puVar3 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    puVar3[3] = PTR__malloc_11034c5e8;
    puVar3[4] = puVar9;
    puVar9 = PTR__free_11034c310;
  }
  else {
    puVar3 = (undefined8 *)0x3f0;
    (*(code *)*param_2)();
    if (puVar3 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    pcVar11 = (code *)*param_2;
    puVar3[4] = param_2[1];
    puVar3[3] = pcVar11;
    puVar9 = (undefined *)param_2[2];
  }
  puVar3[5] = puVar9;
  puVar3[2] = 0;
  puVar3[8] = 0;
  *(undefined4 *)(puVar3 + 0x5c) = 0x10;
  lVar4 = 0x200;
  (*pcVar11)();
  puVar3[0x5e] = lVar4;
  if (lVar4 != 0) {
    lVar4 = 0x400;
    (*(code *)puVar3[3])();
    puVar3[0xd] = lVar4;
    if (lVar4 != 0) {
      puVar1 = puVar3 + 3;
      puVar3[0xe] = lVar4 + 0x400;
      puVar5 = param_4;
      if (param_4 != (undefined8 *)0x0) {
LAB_1081febbc:
        puVar3[0x56] = puVar5;
        puVar3[0x5b] = 0;
        puVar3[0x59] = 0;
        puVar3[0x4a] = 0;
        *(undefined4 *)(puVar3 + 0x71) = 0;
        puVar3[0x70] = 0;
        puVar3[0x21] = 0;
        puVar3[0x3e] = 0;
        *(undefined1 *)((long)puVar3 + 0x38c) = 0x21;
        *(undefined2 *)(puVar3 + 0x3b) = 0;
        puVar3[0x3a] = 0;
        puVar3[0x65] = 0;
        puVar3[100] = 0;
        puVar3[0x67] = 0;
        puVar3[0x66] = 0;
        puVar3[0x68] = 0;
        *(undefined1 *)(puVar3 + 0x61) = 0;
        puVar3[0x60] = 0;
        puVar3[0x5f] = 0;
        puVar3[0x69] = puVar1;
        puVar3[0x6e] = 0;
        puVar3[0x6b] = 0;
        puVar3[0x6a] = 0;
        puVar3[0x6d] = 0;
        puVar3[0x6c] = 0;
        puVar3[0x44] = FUN_108200020;
        puVar3[0x6f] = puVar1;
        puVar3[0x40] = FUN_108209fd0;
        puVar3[0x42] = 0x100000000;
        *(undefined4 *)(puVar3 + 0x43) = 0;
        if (param_1 != 0) {
          lVar6 = param_1;
          _strlen();
          lVar4 = lVar6 + 1;
          (*(code *)*puVar1)();
          if (lVar4 != 0) {
            _memcpy(lVar4,param_1,lVar6 + 1);
          }
          puVar3[0x3a] = lVar4;
        }
        puVar3[0x57] = 0;
        iVar2 = 0;
        FUN_10820c85c();
        if (iVar2 != -1) {
          *(char *)((long)puVar3 + 0x1bd) = (char)iVar2;
          puVar3[0x33] = 0x10820cad0;
          puVar3[0x38] = puVar3 + 0x26;
          puVar3[0x27] = 0x10820ca90;
          puVar3[0x28] = 0x10820cab0;
          puVar3[0x26] = puVar3 + 0x27;
        }
        puVar3[1] = 0;
        *puVar3 = 0;
        puVar3[0x10] = 0;
        puVar3[0xf] = 0;
        puVar3[0x12] = 0;
        puVar3[0x11] = 0;
        puVar3[0x14] = 0;
        puVar3[0x13] = 0;
        puVar3[0x16] = 0;
        puVar3[0x15] = 0;
        puVar3[0x18] = 0;
        puVar3[0x17] = 0;
        puVar3[0x1a] = 0;
        puVar3[0x19] = 0;
        puVar3[0x1c] = 0;
        puVar3[0x1b] = 0;
        puVar3[0x1e] = 0;
        puVar3[0x1d] = 0;
        puVar3[0x1f] = puVar3;
        puVar3[0x20] = 0;
        puVar3[0x23] = 0;
        puVar3[0x22] = 0;
        puVar3[0x25] = 0;
        puVar3[0x24] = 0;
        puVar3[6] = puVar3[2];
        puVar3[7] = puVar3[2];
        puVar3[0xb] = 0;
        puVar3[10] = 0;
        puVar3[9] = 0;
        *(undefined1 *)(puVar3 + 0xc) = 1;
        *(undefined4 *)((long)puVar3 + 100) = 0;
        puVar3[0x4d] = 0;
        puVar3[0x4c] = 0;
        puVar3[0x4f] = 0;
        puVar3[0x4e] = 0;
        puVar3[0x51] = 0;
        puVar3[0x50] = 0;
        puVar3[0x53] = 0;
        puVar3[0x52] = 0;
        *(undefined8 *)((long)puVar3 + 0x2a2) = 0;
        *(undefined8 *)((long)puVar3 + 0x29a) = 0;
        puVar3[99] = 0;
        puVar3[0x62] = 0;
        *(undefined4 *)(puVar3 + 0x45) = 0;
        puVar3[0x47] = 0;
        puVar3[0x46] = 0;
        puVar3[0x49] = 0;
        puVar3[0x48] = 0;
        *(undefined1 *)(puVar3 + 0x4b) = 1;
        *(undefined4 *)((long)puVar3 + 0x25c) = 0;
        puVar3[0x58] = 0;
        puVar3[0x5a] = 0;
        *(undefined4 *)((long)puVar3 + 0x2e4) = 0;
        puVar3[0x3f] = 0;
        puVar3[0x72] = 0;
        *(undefined4 *)(puVar3 + 0x73) = 0;
        *(undefined2 *)(puVar3 + 0x74) = 0;
        *(undefined4 *)((long)puVar3 + 0x3a4) = 0;
        puVar3[0x75] = 0;
        puVar3[0x3c] = 0;
        puVar3[0x3d] = 0;
        puVar3[0x77] = 0;
        puVar3[0x76] = 0;
        puVar3[0x79] = 0;
        puVar3[0x78] = 0;
        puVar3[0x7a] = 0;
        piVar7 = (int *)&UNK_10f47f880;
        _getenv();
        if (piVar7 == (int *)0x0) {
          piVar10 = (int *)0x0;
        }
        else {
          piVar10 = piVar7;
          ___error();
          *piVar10 = 0;
          piStack_48 = (int *)0x0;
          piVar10 = piVar7;
          _strtoul(piVar7,&piStack_48,10);
          piVar8 = piVar10;
          ___error();
          if (((*piVar8 != 0) || (piStack_48 == piVar7)) || ((char)*piStack_48 != '\0')) {
            ___error();
            piVar10 = (int *)0x0;
            *piVar8 = 0;
          }
        }
        puVar3[0x78] = piVar10;
        *(undefined4 *)(puVar3 + 0x79) = 0x42c80000;
        puVar3[0x7a] = 0x800000;
        puVar3[0x7b] = 0;
        puVar3[0x7d] = 0;
        puVar3[0x7c] = 0;
        piVar7 = (int *)&UNK_10f47f897;
        _getenv();
        if (piVar7 == (int *)0x0) {
          piVar10 = (int *)0x0;
        }
        else {
          piVar10 = piVar7;
          ___error();
          *piVar10 = 0;
          piStack_48 = (int *)0x0;
          piVar10 = piVar7;
          _strtoul(piVar7,&piStack_48,10);
          piVar8 = piVar10;
          ___error();
          if (((*piVar8 != 0) || (piStack_48 == piVar7)) || ((char)*piStack_48 != '\0')) {
            ___error();
            piVar10 = (int *)0x0;
            *piVar8 = 0;
          }
        }
        puVar3[0x7d] = piVar10;
        if ((param_1 != 0) && (puVar3[0x3a] == 0)) {
          if (param_4 != (undefined8 *)0x0) {
            puVar3[0x56] = 0;
          }
          FUN_1081ff268(puVar3);
          return (undefined8 *)0x0;
        }
        if (param_3 == (undefined1 *)0x0) {
          puVar3[0x39] = &PTR_FUN_110a30c20;
          return puVar3;
        }
        *(undefined1 *)(puVar3 + 0x3b) = 1;
        puVar3[0x39] = &PTR_FUN_110a31568;
        *(undefined1 *)((long)puVar3 + 0x38c) = *param_3;
        return puVar3;
      }
      puVar5 = (undefined8 *)0x168;
      (*(code *)*puVar1)();
      if (puVar5 != (undefined8 *)0x0) {
        puVar5[0x15] = 0;
        puVar5[0x14] = 0;
        puVar5[0x17] = 0;
        puVar5[0x16] = 0;
        puVar5[0x18] = 0;
        puVar5[0x19] = puVar1;
        puVar5[0x1b] = 0;
        puVar5[0x1a] = 0;
        puVar5[0x1d] = 0;
        puVar5[0x1c] = 0;
        puVar5[0x1e] = 0;
        puVar5[0x1f] = puVar1;
        *(undefined1 *)(puVar5 + 1) = 0;
        *puVar5 = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        *(undefined1 *)(puVar5 + 6) = 0;
        puVar5[4] = puVar1;
        puVar5[5] = 0;
        puVar5[7] = 0;
        puVar5[8] = 0;
        *(undefined1 *)(puVar5 + 0xb) = 0;
        puVar5[9] = puVar1;
        puVar5[10] = 0;
        puVar5[0xc] = 0;
        puVar5[0xd] = 0;
        *(undefined1 *)(puVar5 + 0x10) = 0;
        puVar5[0xe] = puVar1;
        puVar5[0xf] = 0;
        puVar5[0x11] = 0;
        puVar5[0x12] = 0;
        puVar5[0x13] = puVar1;
        *(undefined1 *)(puVar5 + 0x22) = 0;
        puVar5[0x21] = 0;
        puVar5[0x23] = 0;
        puVar5[0x24] = 0;
        puVar5[0x25] = puVar1;
        puVar5[0x26] = 0;
        puVar5[0x27] = 0;
        *(undefined1 *)(puVar5 + 0x28) = 0;
        puVar5[0x2a] = 0;
        puVar5[0x29] = 0;
        puVar5[0x2c] = 0;
        puVar5[0x2b] = 0;
        *(undefined4 *)(puVar5 + 0x20) = 1;
        goto LAB_1081febbc;
      }
      puVar3[0x56] = 0;
      (*(code *)puVar3[5])(puVar3[0xd]);
    }
    (*(code *)puVar3[5])(puVar3[0x5e]);
  }
  (*(code *)puVar3[5])(puVar3);
  return (undefined8 *)0x0;
}



/* Entry: 1081feef4; end: 1081ff267;  */

undefined8 FUN_1081feef4(long *param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  char cVar6;
  undefined1 *puVar7;
  long lVar8;
  char *pcVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 *puVar13;
  char *pcVar14;
  undefined8 uVar15;
  char *pcVar16;
  long *plVar17;
  
  if (param_2 == (char *)0x0) {
LAB_1081ff23c:
    uVar15 = 0;
  }
  else {
    uVar15 = 1;
    if (*param_2 != '\0') {
      plVar17 = (long *)param_1[0x56];
      pcVar16 = param_2;
      do {
        while( true ) {
          cVar6 = *param_2;
          iVar2 = (int)param_1;
          if (cVar6 != '\0') break;
LAB_1081fefb8:
          puVar7 = (undefined1 *)param_1[0x67];
          if (puVar7 == (undefined1 *)param_1[0x66]) {
            iVar2 = iVar2 + 800;
            FUN_108203a0c();
            if (iVar2 == 0) goto LAB_1081ff23c;
            puVar7 = (undefined1 *)param_1[0x67];
            param_1[0x67] = (long)(puVar7 + 1);
            *puVar7 = 0;
            lVar8 = plVar17[2];
          }
          else {
            param_1[0x67] = (long)(puVar7 + 1);
            *puVar7 = 0;
            lVar8 = plVar17[2];
          }
          if (lVar8 != 0) {
            pcVar16 = (char *)param_1[0x68];
            plVar4 = param_1;
            FUN_108205534(param_1,pcVar16);
            lVar8 = plVar17[2];
            uVar11 = lVar8 - 1U & (ulong)plVar4;
            lVar10 = *plVar17;
            puVar13 = *(undefined8 **)(lVar10 + uVar11 * 8);
            if (puVar13 != (undefined8 *)0x0) {
              uVar12 = 0;
              do {
                while( true ) {
                  pcVar14 = (char *)*puVar13;
                  pcVar9 = pcVar16;
                  cVar6 = *pcVar16;
                  if (*pcVar16 == *pcVar14) {
                    do {
                      pcVar14 = pcVar14 + 1;
                      if (cVar6 == '\0') {
                        *(undefined1 *)(puVar13 + 7) = 1;
                        goto LAB_1081fef7c;
                      }
                      cVar6 = pcVar9[1];
                      pcVar9 = pcVar9 + 1;
                    } while (cVar6 == *pcVar14);
                  }
                  if (uVar12 == 0) break;
                  lVar1 = lVar8;
                  if (uVar12 <= uVar11) {
                    lVar1 = 0;
                  }
                  uVar11 = lVar1 + (uVar11 - uVar12);
                  puVar13 = *(undefined8 **)(lVar10 + uVar11 * 8);
                  if (puVar13 == (undefined8 *)0x0) goto LAB_1081fef7c;
                }
                uVar12 = (uint)(((ulong)plVar4 & -lVar8) >>
                               ((ulong)(*(byte *)(plVar17 + 1) - 1) & 0x3f)) &
                         (uint)(lVar8 - 1U >> 2) & 0xff | 1;
                lVar1 = lVar8;
                if (uVar12 <= uVar11) {
                  lVar1 = 0;
                }
                uVar11 = lVar1 + (uVar11 - uVar12);
                puVar13 = *(undefined8 **)(lVar10 + uVar11 * 8);
              } while (puVar13 != (undefined8 *)0x0);
            }
          }
LAB_1081fef7c:
          if (*param_2 != '\0') {
            param_2 = param_2 + 1;
          }
          param_1[0x67] = param_1[0x68];
          cVar6 = *param_2;
          pcVar16 = param_2;
joined_r0x0001081fef58:
          if (cVar6 == '\0') goto LAB_1081ff234;
        }
        if (cVar6 != '=') {
          if (cVar6 == '\f') goto LAB_1081fefb8;
          pcVar9 = (char *)param_1[0x67];
          if (pcVar9 == (char *)param_1[0x66]) {
            iVar2 = iVar2 + 800;
            FUN_108203a0c();
            if (iVar2 == 0) goto LAB_1081ff23c;
            cVar6 = *param_2;
            pcVar9 = (char *)param_1[0x67];
          }
          param_1[0x67] = (long)(pcVar9 + 1);
          *pcVar9 = cVar6;
          param_2 = param_2 + 1;
          cVar6 = *pcVar16;
          goto joined_r0x0001081fef58;
        }
        puVar7 = (undefined1 *)param_1[0x67];
        pcVar16 = param_2;
        plVar4 = plVar17 + 0x26;
        if (puVar7 != (undefined1 *)param_1[0x68]) {
          if (puVar7 == (undefined1 *)param_1[0x66]) {
            iVar3 = iVar2 + 800;
            FUN_108203a0c();
            if (iVar3 == 0) goto LAB_1081ff23c;
            puVar7 = (undefined1 *)param_1[0x67];
          }
          param_1[0x67] = (long)(puVar7 + 1);
          *puVar7 = 0;
          plVar4 = param_1;
          FUN_10820312c(param_1,plVar17 + 0xf,param_1[0x68],0x10);
          if (plVar4 == (long *)0x0) goto LAB_1081ff23c;
          pcVar9 = (char *)*plVar4;
          pcVar14 = (char *)param_1[0x68];
          if (pcVar9 == pcVar14) {
            do {
              pcVar14 = (char *)plVar17[0x17];
              if (pcVar14 == (char *)plVar17[0x16]) {
                plVar5 = plVar17 + 0x14;
                FUN_108203a0c();
                if (((ulong)plVar5 & 1) == 0) {
                  *plVar4 = 0;
                  return 0;
                }
                pcVar14 = (char *)plVar17[0x17];
              }
              cVar6 = *pcVar9;
              plVar17[0x17] = (long)(pcVar14 + 1);
              *pcVar14 = cVar6;
              cVar6 = *pcVar9;
              pcVar9 = pcVar9 + 1;
            } while (cVar6 != '\0');
            lVar8 = plVar17[0x18];
            plVar17[0x18] = plVar17[0x17];
            *plVar4 = lVar8;
            if (lVar8 == 0) goto LAB_1081ff23c;
            pcVar14 = (char *)param_1[0x68];
          }
          param_1[0x67] = (long)pcVar14;
        }
        while( true ) {
          param_2 = pcVar16 + 1;
          cVar6 = *param_2;
          if (cVar6 == '\0' || cVar6 == '\f') break;
          pcVar16 = (char *)param_1[0x67];
          if (pcVar16 == (char *)param_1[0x66]) {
            iVar3 = iVar2 + 800;
            FUN_108203a0c();
            if (iVar3 == 0) goto LAB_1081ff23c;
            cVar6 = *param_2;
            pcVar16 = (char *)param_1[0x67];
          }
          param_1[0x67] = (long)(pcVar16 + 1);
          *pcVar16 = cVar6;
          pcVar16 = param_2;
        }
        puVar7 = (undefined1 *)param_1[0x67];
        if (puVar7 == (undefined1 *)param_1[0x66]) {
          iVar2 = iVar2 + 800;
          FUN_108203a0c();
          if (iVar2 == 0) goto LAB_1081ff23c;
          puVar7 = (undefined1 *)param_1[0x67];
        }
        param_1[0x67] = (long)(puVar7 + 1);
        *puVar7 = 0;
        plVar5 = param_1;
        FUN_108208c7c(param_1,plVar4,0,param_1[0x68],param_1 + 0x5a);
        if ((int)plVar5 != 0) goto LAB_1081ff23c;
        param_1[0x67] = param_1[0x68];
        if (*param_2 != '\0') {
          param_2 = pcVar16 + 2;
        }
        pcVar16 = param_2;
      } while (*param_2 != '\0');
LAB_1081ff234:
      uVar15 = 1;
    }
  }
  return uVar15;
}



/* Entry: 1081ff268; end: 1081ff6c7;  */

void FUN_1081ff268(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  if (param_1 == 0) {
    return;
  }
  plVar1 = *(long **)(param_1 + 0x2c0);
  do {
    if (plVar1 == (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x2c8);
      if (plVar2 == (long *)0x0) {
        lVar3 = *(long *)(param_1 + 0x248);
        do {
          if (lVar3 == 0) {
            lVar3 = *(long *)(param_1 + 0x250);
            if (lVar3 == 0) {
              lVar3 = *(long *)(param_1 + 0x2d8);
              while (lVar3 != 0) {
                lVar4 = *(long *)(lVar3 + 8);
                (**(code **)(param_1 + 0x28))(*(undefined8 *)(lVar3 + 0x20));
                (**(code **)(param_1 + 0x28))(lVar3);
                lVar3 = lVar4;
              }
              lVar3 = *(long *)(param_1 + 0x2d0);
              while (lVar3 != 0) {
                lVar4 = *(long *)(lVar3 + 8);
                (**(code **)(param_1 + 0x28))(*(undefined8 *)(lVar3 + 0x20));
                (**(code **)(param_1 + 0x28))(lVar3);
                lVar3 = lVar4;
              }
              plVar1 = *(long **)(param_1 + 800);
              while (plVar1 != (long *)0x0) {
                plVar1 = (long *)*plVar1;
                (**(code **)(*(long *)(param_1 + 0x348) + 0x10))();
              }
              plVar1 = *(long **)(param_1 + 0x328);
              while (plVar1 != (long *)0x0) {
                plVar1 = (long *)*plVar1;
                (**(code **)(*(long *)(param_1 + 0x348) + 0x10))();
              }
              plVar1 = *(long **)(param_1 + 0x350);
              while (plVar1 != (long *)0x0) {
                plVar1 = (long *)*plVar1;
                (**(code **)(*(long *)(param_1 + 0x378) + 0x10))();
              }
              plVar1 = *(long **)(param_1 + 0x358);
              while (plVar1 != (long *)0x0) {
                plVar1 = (long *)*plVar1;
                (**(code **)(*(long *)(param_1 + 0x378) + 0x10))();
              }
              (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x1d0));
              if ((*(char *)(param_1 + 0x3a0) == '\0') &&
                 (plVar1 = *(long **)(param_1 + 0x2b0), plVar1 != (long *)0x0)) {
                plVar2 = (long *)plVar1[5];
                if (plVar2 == (long *)0x0) {
                  plVar7 = (long *)0x0;
                }
                else {
                  plVar7 = plVar2 + plVar1[7];
                }
                lVar3 = *(long *)(param_1 + 0x390);
                while (plVar2 != plVar7) {
                  plVar5 = plVar2 + 1;
                  lVar4 = *plVar2;
                  plVar2 = plVar5;
                  if ((lVar4 != 0) && (*(int *)(lVar4 + 0x1c) != 0)) {
                    (**(code **)(param_1 + 0x28))(*(undefined8 *)(lVar4 + 0x20));
                  }
                }
                if (plVar1[2] != 0) {
                  uVar6 = 0;
                  do {
                    (**(code **)(plVar1[4] + 0x10))(*(undefined8 *)(*plVar1 + uVar6 * 8));
                    uVar6 = uVar6 + 1;
                  } while (uVar6 < (ulong)plVar1[2]);
                }
                (**(code **)(plVar1[4] + 0x10))(*plVar1);
                if (plVar1[0x23] != 0) {
                  uVar6 = 0;
                  do {
                    (**(code **)(plVar1[0x25] + 0x10))(*(undefined8 *)(plVar1[0x21] + uVar6 * 8));
                    uVar6 = uVar6 + 1;
                  } while (uVar6 < (ulong)plVar1[0x23]);
                }
                (**(code **)(plVar1[0x25] + 0x10))(plVar1[0x21]);
                if (plVar1[7] != 0) {
                  uVar6 = 0;
                  do {
                    (**(code **)(plVar1[9] + 0x10))(*(undefined8 *)(plVar1[5] + uVar6 * 8));
                    uVar6 = uVar6 + 1;
                  } while (uVar6 < (ulong)plVar1[7]);
                }
                (**(code **)(plVar1[9] + 0x10))(plVar1[5]);
                if (plVar1[0xc] != 0) {
                  uVar6 = 0;
                  do {
                    (**(code **)(plVar1[0xe] + 0x10))(*(undefined8 *)(plVar1[10] + uVar6 * 8));
                    uVar6 = uVar6 + 1;
                  } while (uVar6 < (ulong)plVar1[0xc]);
                }
                (**(code **)(plVar1[0xe] + 0x10))(plVar1[10]);
                if (plVar1[0x11] != 0) {
                  uVar6 = 0;
                  do {
                    (**(code **)(plVar1[0x13] + 0x10))(*(undefined8 *)(plVar1[0xf] + uVar6 * 8));
                    uVar6 = uVar6 + 1;
                  } while (uVar6 < (ulong)plVar1[0x11]);
                }
                (**(code **)(plVar1[0x13] + 0x10))(plVar1[0xf]);
                plVar2 = (long *)plVar1[0x14];
                while (plVar2 != (long *)0x0) {
                  plVar2 = (long *)*plVar2;
                  (**(code **)(plVar1[0x19] + 0x10))();
                }
                plVar2 = (long *)plVar1[0x15];
                while (plVar2 != (long *)0x0) {
                  plVar2 = (long *)*plVar2;
                  (**(code **)(plVar1[0x19] + 0x10))();
                }
                plVar2 = (long *)plVar1[0x1a];
                while (plVar2 != (long *)0x0) {
                  plVar2 = (long *)*plVar2;
                  (**(code **)(plVar1[0x1f] + 0x10))();
                }
                plVar2 = (long *)plVar1[0x1b];
                while (plVar2 != (long *)0x0) {
                  plVar2 = (long *)*plVar2;
                  (**(code **)(plVar1[0x1f] + 0x10))();
                }
                if (lVar3 == 0) {
                  (**(code **)(param_1 + 0x28))(plVar1[0x2c]);
                  (**(code **)(param_1 + 0x28))(plVar1[0x29]);
                }
                (**(code **)(param_1 + 0x28))(plVar1);
              }
              (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x2f0));
              (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x380));
              (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x10));
              (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x68));
              (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x2f8));
              (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x1e0));
              if (*(code **)(param_1 + 0x1f8) != (code *)0x0) {
                (**(code **)(param_1 + 0x1f8))(*(undefined8 *)(param_1 + 0x1e8));
              }
                    /* WARNING: Could not recover jumptable at 0x0001081ff6c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(param_1 + 0x28))(param_1);
              return;
            }
            *(undefined8 *)(param_1 + 0x250) = 0;
          }
          lVar3 = *(long *)(lVar3 + 0x10);
          (**(code **)(param_1 + 0x28))();
        } while( true );
      }
      *(undefined8 *)(param_1 + 0x2c8) = 0;
      plVar1 = (long *)*plVar2;
      (**(code **)(param_1 + 0x28))(plVar2[8]);
      lVar3 = plVar2[10];
    }
    else {
      lVar4 = *plVar1;
      (**(code **)(param_1 + 0x28))(plVar1[8]);
      lVar3 = plVar1[10];
      plVar2 = plVar1;
      plVar1 = (long *)lVar4;
    }
    while (lVar3 != 0) {
      lVar4 = *(long *)(lVar3 + 8);
      (**(code **)(param_1 + 0x28))(*(undefined8 *)(lVar3 + 0x20));
      (**(code **)(param_1 + 0x28))(lVar3);
      lVar3 = lVar4;
    }
    (**(code **)(param_1 + 0x28))(plVar2);
  } while( true );
}



/* Entry: 1081ff6c8; end: 1081ff6fb;  */

undefined8 FUN_1081ff6c8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  do {
    lVar1 = param_1;
    if (lVar1 == 0) {
      return 0;
    }
    param_1 = *(long *)(lVar1 + 0x390);
  } while (*(long *)(lVar1 + 0x390) != 0);
  if ((*(uint *)(lVar1 + 0x398) | 2) != 3) {
    *(undefined8 *)(lVar1 + 0x3a8) = param_2;
    return 1;
  }
  return 0;
}



/* Entry: 1081ff6fc; end: 1081ff803;  */

undefined4 FUN_1081ff6fc(ulong param_1,long param_2,ulong param_3,uint param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  if ((param_1 == 0) || (iVar3 = (int)param_3, iVar3 < 0)) {
    if (param_1 == 0) {
      return 0;
    }
  }
  else if ((param_2 != 0) || (iVar3 == 0)) {
    iVar2 = *(int *)(param_1 + 0x398);
    if (iVar2 == 0) {
      if ((*(long *)(param_1 + 0x390) == 0) && (uVar7 = param_1, FUN_1081ff804(), (uVar7 & 1) == 0))
      {
        uVar5 = 1;
        goto LAB_1081ff744;
      }
    }
    else {
      if (iVar2 == 2) {
        uVar5 = 0x24;
        goto LAB_1081ff744;
      }
      if (iVar2 == 3) {
        uVar5 = 0x21;
        goto LAB_1081ff744;
      }
    }
    *(undefined4 *)(param_1 + 0x398) = 1;
    uVar7 = param_1;
    FUN_1081ff934(param_1,param_3);
    if (uVar7 == 0) {
      return 0;
    }
    if (iVar3 != 0) {
      _memcpy();
    }
    if (param_1 == 0) {
      return 0;
    }
    if (iVar3 < 0) {
      *(undefined4 *)(param_1 + 0x228) = 0x29;
      return 0;
    }
    iVar3 = *(int *)(param_1 + 0x398);
    if (iVar3 == 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        *(undefined4 *)(param_1 + 0x228) = 0x2a;
        return 0;
      }
      if ((*(long *)(param_1 + 0x390) == 0) && (uVar7 = param_1, FUN_1081ff804(), (uVar7 & 1) == 0))
      {
        *(undefined4 *)(param_1 + 0x228) = 1;
        return 0;
      }
    }
    else {
      if (iVar3 == 2) {
        *(undefined4 *)(param_1 + 0x228) = 0x24;
        return 0;
      }
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x228) = 0x21;
        return 0;
      }
    }
    lVar9 = *(long *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x398) = 1;
    *(long *)(param_1 + 0x240) = lVar9;
    lVar6 = *(long *)(param_1 + 0x38);
    lVar4 = lVar6 + (param_3 & 0xffffffff);
    *(long *)(param_1 + 0x38) = lVar4;
    *(ulong *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + (param_3 & 0xffffffff);
    *(long *)(param_1 + 0x50) = lVar4;
    *(char *)(param_1 + 0x39c) = (char)param_4;
    uVar7 = lVar4 - lVar9;
    if (lVar6 == 0 || lVar9 == 0) {
      uVar7 = 0;
    }
    if (((param_4 & 0xff) == 0) && (*(char *)(param_1 + 0x60) != '\0')) {
      if (lVar9 == 0) {
        uVar8 = 0;
        if (uVar7 < (ulong)(*(long *)(param_1 + 0x58) << 1)) goto LAB_1081ffd60;
        goto LAB_1081ffd8c;
      }
      uVar8 = 0;
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar8 = lVar9 - *(long *)(param_1 + 0x10);
      }
      if ((ulong)(*(long *)(param_1 + 0x58) << 1) <= uVar7) goto LAB_1081ffd8c;
LAB_1081ffd60:
      lVar1 = 0;
      if (lVar6 != 0 && *(long *)(param_1 + 0x40) != 0) {
        lVar1 = *(long *)(param_1 + 0x40) - lVar4;
      }
      lVar6 = 0;
      if (0x3ff < uVar8) {
        lVar6 = uVar8 - 0x400;
      }
      if ((ulong)(lVar1 + lVar6) < (ulong)(long)*(int *)(param_1 + 100)) goto LAB_1081ffd8c;
      *(undefined4 *)(param_1 + 0x228) = 0;
      lVar4 = lVar9;
    }
    else {
LAB_1081ffd8c:
      uVar8 = param_1;
      (**(code **)(param_1 + 0x220))(param_1,lVar9,lVar4);
      if ((int)uVar8 != 0) {
        *(int *)(param_1 + 0x228) = (int)uVar8;
        *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_1 + 0x230);
        *(code **)(param_1 + 0x220) = FUN_1081ffea4;
        return 0;
      }
      lVar4 = *(long *)(param_1 + 0x30);
      if (lVar4 != lVar9) {
        uVar7 = 0;
      }
      *(ulong *)(param_1 + 0x58) = uVar7;
      *(undefined4 *)(param_1 + 0x228) = 0;
      if (1 < *(uint *)(param_1 + 0x398)) {
        uVar5 = 1;
        if (*(uint *)(param_1 + 0x398) == 3) {
          uVar5 = 2;
        }
        goto LAB_1081ffe4c;
      }
    }
    if (param_4 != 0) {
      *(undefined4 *)(param_1 + 0x398) = 2;
      return 1;
    }
    uVar5 = 1;
LAB_1081ffe4c:
    (**(code **)(*(long *)(param_1 + 0x130) + 0x60))
              (*(long *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x240),lVar4,param_1 + 0x310);
    *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(param_1 + 0x30);
    return uVar5;
  }
  uVar5 = 0x29;
LAB_1081ff744:
  *(undefined4 *)(param_1 + 0x228) = uVar5;
  return 0;
}



/* Entry: 1081ff804; end: 1081ff933;  */

long FUN_1081ff804(long param_1)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  long lVar7;
  undefined *puVar8;
  long lStack_58;
  undefined1 auStack_50 [8];
  uint uStack_48;
  undefined1 *puVar6;
  
  if (*(long *)(param_1 + 0x3a8) == 0) {
    piVar4 = (int *)&UNK_10f47f9e4;
    _open(&UNK_10f47f9e4,0);
    if (-1 < (int)piVar4) {
      puVar8 = (undefined *)0x0;
      do {
        piVar5 = piVar4;
        _read(piVar4,auStack_50 + (long)(puVar8 + -8),8 - (long)puVar8);
        puVar1 = (undefined *)((long)piVar5 + (long)puVar8);
        if (((long)piVar5 >= 1 && (undefined *)0x6 < puVar1) &&
            ((long)piVar5 < 1 || puVar1 != (undefined *)0x7)) {
          _close(piVar4);
          puVar8 = &UNK_10f47f9e4;
          lVar7 = lStack_58;
          goto LAB_1081ff900;
        }
        if (0 < (long)piVar5) {
          puVar8 = puVar1;
        }
        ___error();
      } while (*piVar5 == 4);
      _close(piVar4);
    }
    puVar6 = auStack_50;
    _gettimeofday(puVar6,0);
    uVar3 = (uint)puVar6;
    _getpid();
    lStack_58 = (long)(int)(uVar3 ^ uStack_48);
    puVar8 = &UNK_10f47f9f1;
    lVar7 = ((ulong)(uVar3 ^ uStack_48) << 0x3d) - lStack_58;
LAB_1081ff900:
    FUN_108209efc(puVar8,lVar7);
    *(long *)(param_1 + 0x3a8) = lVar7;
    cVar2 = *(char *)(param_1 + 0x1d8);
  }
  else {
    cVar2 = *(char *)(param_1 + 0x1d8);
  }
  if (cVar2 != '\0') {
    FUN_1081feef4(param_1,&UNK_10df09b6f);
    return param_1;
  }
  return 1;
}



/* Entry: 1081ff934; end: 1081ffea3;  */

ulong FUN_1081ff934(long param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((int)param_2 < 0) goto LAB_1081ffa10;
  if (*(int *)(param_1 + 0x398) == 2) {
    *(undefined4 *)(param_1 + 0x228) = 0x24;
    return 0;
  }
  if (*(int *)(param_1 + 0x398) == 3) {
    *(undefined4 *)(param_1 + 0x228) = 0x21;
    return 0;
  }
  *(uint *)(param_1 + 100) = param_2;
  lVar6 = *(long *)(param_1 + 0x40);
  if (lVar6 == 0) {
    if ((ulong)param_2 == 0) goto LAB_1081ff9b8;
  }
  else {
    lVar7 = 0;
    if (*(long *)(param_1 + 0x38) != 0) {
      lVar7 = lVar6 - *(long *)(param_1 + 0x38);
    }
    if ((long)(ulong)param_2 <= lVar7) {
LAB_1081ff9b8:
      if (*(long *)(param_1 + 0x10) != 0) {
        return *(ulong *)(param_1 + 0x38);
      }
    }
  }
  uVar4 = *(ulong *)(param_1 + 0x38);
  if (uVar4 != 0) {
    iVar8 = 0;
    if (*(long *)(param_1 + 0x30) != 0) {
      iVar8 = (int)uVar4 - (int)*(long *)(param_1 + 0x30);
    }
    param_2 = iVar8 + param_2;
  }
  if ((int)param_2 < 0) {
LAB_1081ffa10:
    *(undefined4 *)(param_1 + 0x228) = 1;
    return 0;
  }
  lVar7 = *(long *)(param_1 + 0x30);
  if (lVar7 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = 0;
    if (*(long *)(param_1 + 0x10) != 0) {
      iVar8 = (int)lVar7 - (int)*(long *)(param_1 + 0x10);
    }
  }
  if (0x3ff < iVar8) {
    iVar8 = 0x400;
  }
  if ((int)(param_2 ^ 0x7fffffff) < iVar8) goto LAB_1081ffb70;
  iVar1 = iVar8 + param_2;
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) {
LAB_1081ffac8:
    uVar9 = 0x400;
LAB_1081ffacc:
    do {
      uVar3 = (int)uVar9 * 2;
      uVar9 = (ulong)uVar3;
    } while ((iVar1 > (int)uVar3 && uVar3 != 0) && (iVar1 <= (int)uVar3 || -1 < (int)uVar3));
    if ((int)uVar3 < 1) {
LAB_1081ffb70:
      *(undefined4 *)(param_1 + 0x228) = 1;
      return 0;
    }
    uVar4 = uVar9;
    (**(code **)(param_1 + 0x18))();
    if (uVar4 == 0) {
      *(undefined4 *)(param_1 + 0x228) = 1;
      return 0;
    }
    *(ulong *)(param_1 + 0x40) = uVar4 + uVar9;
    lVar6 = *(long *)(param_1 + 0x30);
    if (lVar6 == 0) {
      *(ulong *)(param_1 + 0x38) = uVar4;
      *(ulong *)(param_1 + 0x10) = uVar4;
      uVar9 = uVar4;
    }
    else {
      lVar5 = (long)iVar8;
      lVar7 = 0;
      if (*(long *)(param_1 + 0x38) != 0) {
        lVar7 = *(long *)(param_1 + 0x38) - lVar6;
      }
      _memcpy(uVar4,lVar6 - lVar5,lVar7 + lVar5);
      (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x10));
      *(ulong *)(param_1 + 0x10) = uVar4;
      lVar7 = *(long *)(param_1 + 0x38);
      lVar6 = lVar7;
      if (lVar7 != 0) {
        lVar6 = 0;
        if (*(long *)(param_1 + 0x30) != 0) {
          lVar6 = lVar7 - *(long *)(param_1 + 0x30);
        }
      }
      uVar9 = uVar4 + lVar5;
      uVar4 = uVar9 + lVar6;
      *(ulong *)(param_1 + 0x38) = uVar4;
    }
  }
  else {
    if (lVar7 == 0) {
      uVar9 = lVar6 - lVar5;
LAB_1081ffac0:
      if ((lVar6 == 0) || ((int)uVar9 == 0)) goto LAB_1081ffac8;
      goto LAB_1081ffacc;
    }
    uVar9 = lVar6 - lVar5;
    uVar2 = 0;
    if (lVar6 != 0) {
      uVar2 = uVar9;
    }
    if ((long)uVar2 < (long)iVar1) goto LAB_1081ffac0;
    if (lVar7 - lVar5 <= (long)iVar8) goto LAB_1081ffbc0;
    lVar6 = (long)(int)(lVar7 - lVar5) - (long)iVar8;
    _memmove(lVar5,lVar5 + lVar6,(uVar4 - lVar7) + (long)iVar8);
    uVar4 = *(long *)(param_1 + 0x38) - lVar6;
    *(ulong *)(param_1 + 0x38) = uVar4;
    uVar9 = *(long *)(param_1 + 0x30) - lVar6;
  }
  *(ulong *)(param_1 + 0x30) = uVar9;
LAB_1081ffbc0:
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  return uVar4;
}



/* Entry: 1081ffea4; end: 1081fff23;  */

undefined4 FUN_1081ffea4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x228);
}



/* Entry: 1081fff24; end: 10820000b;  */

void FUN_1081fff24(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = param_3;
  if (*(char *)(param_2 + 0x84) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001081fff78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0xb0))(*(undefined8 *)(param_1 + 8),param_3,(int)param_4 - (int)param_3);
    return;
  }
  if (param_2 == *(long *)(param_1 + 0x130)) {
    puVar2 = (undefined8 *)(param_1 + 0x230);
    puVar3 = (undefined8 *)(param_1 + 0x238);
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 0x248);
    puVar3 = puVar2 + 1;
  }
  do {
    uStack_50 = *(undefined8 *)(param_1 + 0x68);
    lVar1 = param_2;
    (**(code **)(param_2 + 0x70))
              (param_2,&uStack_48,param_4,&uStack_50,*(undefined8 *)(param_1 + 0x70));
    *puVar3 = uStack_48;
    (**(code **)(param_1 + 0xb0))
              (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x68),
               (int)uStack_50 - (int)*(undefined8 *)(param_1 + 0x68));
    *puVar2 = uStack_48;
  } while (1 < (uint)lVar1);
  return;
}



/* Entry: 10820000c; end: 10820001f;  */

undefined * FUN_10820000c(uint param_1)

{
  return (&PTR_DAT_110a30250)[param_1 ^ 0x80];
}



/* Entry: 108200020; end: 1082001cb;  */

void FUN_108200020(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 auStack_468 [128];
  undefined8 uStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  
  pcVar5 = FUN_10820c7ec;
  if (*(char *)(param_1 + 0x1d8) != '\0') {
    pcVar5 = FUN_10820d038;
  }
  lVar1 = param_1 + 0x138;
  (*pcVar5)(lVar1,param_1 + 0x130,*(undefined8 *)(param_1 + 0x1d0));
  if ((int)lVar1 == 0) {
    pcVar5 = *(code **)(param_1 + 0x108);
    if (pcVar5 == (code *)0x0) {
      return;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x1d0);
    _memset(auStack_468,0xff,0x400);
    uStack_68 = 0;
    pcStack_58 = (code *)0x0;
    uStack_60 = 0;
    uVar3 = *(undefined8 *)(param_1 + 0x1f0);
    (*pcVar5)(uVar3,uVar4,auStack_468);
    if ((int)uVar3 != 0) {
      puVar2 = (undefined8 *)0x7e0;
      (**(code **)(param_1 + 0x18))();
      *(undefined8 **)(param_1 + 0x1e0) = puVar2;
      if (puVar2 != (undefined8 *)0x0) {
        pcVar5 = FUN_10820c128;
        if (*(char *)(param_1 + 0x1d8) != '\0') {
          pcVar5 = FUN_10820d278;
        }
        (*pcVar5)();
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x1e8) = uStack_68;
          *(code **)(param_1 + 0x1f8) = pcStack_58;
          *(undefined8 **)(param_1 + 0x130) = puVar2;
          goto LAB_108200080;
        }
      }
    }
    if (pcStack_58 != (code *)0x0) {
      (*pcStack_58)(uStack_68);
    }
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 0x130);
LAB_108200080:
    *(code **)(param_1 + 0x220) = FUN_1082001cc;
    auStack_468[0] = param_2;
    (*(code *)*puVar2)();
    FUN_108200368(param_1,*(undefined8 *)(param_1 + 0x130),param_2,param_3,puVar2,auStack_468[0],
                  param_4,*(char *)(param_1 + 0x39c) == '\0',1,0);
  }
  return;
}



/* Entry: 1082001cc; end: 108200367;  */

void FUN_1082001cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x130);
  (*(code *)*puVar1)();
  FUN_108200368(param_1,*(undefined8 *)(param_1 + 0x130),param_2,param_3,puVar1,param_2,param_4,
                *(char *)(param_1 + 0x39c) == '\0',1,0);
  return;
}



/* Entry: 108200368; end: 108202ad3;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_108200368(long *param_1,undefined8 *param_2,char *param_3,char *param_4,
                    undefined8 *param_5,char *param_6,undefined8 *param_7,int param_8,char param_9,
                    undefined4 param_10)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined1 uVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined4 *puVar12;
  byte *pbVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  byte *pbVar19;
  code *pcVar20;
  char *pcVar21;
  char *pcVar22;
  long lVar23;
  char *pcVar24;
  byte *pbVar25;
  long *plVar26;
  long *plVar27;
  undefined8 uVar28;
  ulong uVar29;
  byte *pbVar30;
  byte bVar31;
  char *pcVar32;
  long lVar33;
  int *piVar34;
  char *pcVar35;
  int iVar36;
  undefined4 uVar37;
  undefined8 *puVar38;
  long lVar39;
  long *plVar40;
  uint uVar41;
  uint uVar42;
  long lVar43;
  char *pcVar44;
  long *plStack_a0;
  char *pcStack_80;
  long lStack_78;
  char *apcStack_70 [2];
  
  lVar39 = param_1[0x56];
  if (param_2 == (undefined8 *)param_1[0x26]) {
    plStack_a0 = param_1 + 0x46;
    plVar16 = param_1 + 0x47;
  }
  else {
    plStack_a0 = (long *)param_1[0x49];
    plVar16 = plStack_a0 + 1;
  }
  plVar15 = param_1 + 0x40;
  plVar1 = param_1 + 0x51;
  plVar2 = param_1 + 100;
  plVar3 = param_1 + 0x66;
  plVar4 = param_1 + 0x67;
  *plStack_a0 = (long)param_3;
  *plVar16 = (long)param_6;
  pcStack_80 = param_6;
  if (0 < (int)param_5) goto LAB_108200488;
LAB_108200430:
  iVar10 = (int)param_5;
  if ((param_8 != 0) && (iVar10 != 0)) {
LAB_108202584:
    *param_7 = param_3;
    return (long *)0x0;
  }
  if (iVar10 < -4) {
    if (iVar10 == -0xf) {
      param_5 = (undefined8 *)0xf;
      goto LAB_108200488;
    }
  }
  else if (iVar10 < -1) {
    if (iVar10 == -4) {
      if (param_2 == (undefined8 *)param_1[0x26]) {
        if ((char)param_1[0x74] == '\0') {
          return (long *)0x3;
        }
      }
      else if (*(char *)(param_1[0x49] + 0x24) == '\0') goto LAB_108202584;
      (*(code *)*plVar15)(plVar15,0xfffffffc,param_4,param_4,param_2);
      if ((int)plVar15 == -1) {
        return (long *)0x1d;
      }
      goto LAB_108202584;
    }
    if (iVar10 == -2) {
      return (long *)0x6;
    }
  }
  else {
    if (iVar10 == -1) {
      return (long *)0x5;
    }
    if (iVar10 == 0) {
      *plStack_a0 = (long)pcStack_80;
      return (long *)0x4;
    }
  }
  param_5 = (undefined8 *)(ulong)(uint)-iVar10;
  pcStack_80 = param_4;
LAB_108200488:
  plVar26 = plVar15;
  (*(code *)*plVar15)(plVar15,param_5,param_3,pcStack_80,param_2);
  uVar8 = (uint)plVar26;
  if ((0x39 < uVar8 || (1L << ((ulong)plVar26 & 0x3f) & 0x200000000000006U) == 0) &&
     (plVar26 = param_1, func_0x000108202778(param_1,param_5,param_3,pcStack_80,0x12ba,param_10),
     ((ulong)plVar26 & 1) == 0)) {
    do {
      plVar16 = param_1;
      param_1 = (long *)plVar16[0x72];
    } while (param_1 != (long *)0x0);
    if (plVar16[0x78] != 0) {
      _fprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f47f8b8);
    }
    return (long *)0x2b;
  }
  pcVar44 = pcStack_80;
  uVar37 = 0;
  uVar42 = 1;
  uVar41 = 1;
  iVar36 = (int)param_5;
  iVar10 = (int)lVar39;
  plVar26 = param_1;
  switch(uVar8) {
  case 0:
    if (iVar36 != 0xe) break;
    goto code_r0x00010820235c;
  case 1:
    FUN_108202ad4(param_1,0,param_3,pcStack_80);
    iVar10 = (int)plVar26;
    goto joined_r0x0001082009d0;
  case 2:
    if (*(char *)((long)param_1 + 0x3a1) != '\0') {
      uVar5 = *(undefined1 *)(lVar39 + 0x101);
      *(undefined1 *)(lVar39 + 0x101) = 1;
      if ((*(int *)((long)param_1 + 0x3a4) != 0) && (param_1[0x1e] != 0)) {
        plVar16 = param_1;
        FUN_10820312c(param_1,lVar39 + 0x108,&DAT_10df09b36,0x40);
        if (plVar16 == (long *)0x0) {
          return (long *)0x1;
        }
        lVar23 = param_1[0x57];
        plVar16[4] = lVar23;
        *(undefined1 *)(lVar39 + 0x103) = 0;
        lVar14 = param_1[0x1f];
        (*(code *)param_1[0x1e])(lVar14,0,lVar23,plVar16[3],plVar16[5]);
        if ((int)lVar14 == 0) {
          return (long *)0x15;
        }
        if (*(char *)(lVar39 + 0x103) == '\0') {
          *(undefined1 *)(lVar39 + 0x101) = uVar5;
        }
        else if ((*(char *)(lVar39 + 0x102) == '\0') && ((code *)param_1[0x1d] != (code *)0x0)) {
          iVar10 = (int)param_1[1];
          (*(code *)param_1[0x1d])();
          if (iVar10 == 0) {
            return (long *)0x16;
          }
        }
      }
    }
    param_1[0x44] = 0x1082034a0;
    plVar16 = param_1;
    FUN_108205998(param_1,0,param_1[0x26],param_3,param_4,param_7,
                  *(char *)((long)param_1 + 0x39c) == '\0',0);
    if ((int)plVar16 != 0) {
      return plVar16;
    }
    FUN_108206e60();
    return (long *)(ulong)((int)param_1 == 0);
  case 3:
    lVar14 = param_1[0x17];
    goto joined_r0x00010820134c;
  case 4:
    if (param_1[0x17] != 0) {
      apcStack_70[0] = param_3;
      if ((*plVar4 == 0) && (plVar26 = plVar2, FUN_108203a0c(), (int)plVar26 == 0)) {
code_r0x00010820251c:
        param_1[0x4d] = 0;
        return (long *)0x1;
      }
      while (puVar38 = param_2, (*(code *)param_2[0xe])(param_2,apcStack_70,pcVar44,plVar4,*plVar3),
            1 < (uint)puVar38) {
        plVar26 = plVar2;
        FUN_108203a0c();
        if (((ulong)plVar26 & 1) == 0) goto code_r0x00010820251c;
      }
      if (param_1[0x68] == 0) goto code_r0x00010820251c;
      puVar18 = (undefined1 *)*plVar4;
      if (puVar18 == (undefined1 *)*plVar3) {
        plVar26 = plVar2;
        FUN_108203a0c();
        if ((int)plVar26 == 0) goto code_r0x00010820251c;
        puVar18 = (undefined1 *)*plVar4;
      }
      param_1[0x67] = (long)(puVar18 + 1);
      *puVar18 = 0;
      param_1[0x4d] = param_1[0x68];
      if (param_1[0x68] == 0) {
        return (long *)0x1;
      }
      uVar41 = 0;
      param_1[0x68] = param_1[0x67];
      param_1[0x4f] = 0;
    }
    param_1[0x4e] = 0;
    goto joined_r0x00010820098c;
  case 5:
    *(undefined1 *)((long)param_1 + 0x3a1) = 0;
    *(undefined1 *)(lVar39 + 0x101) = 1;
    if (param_1[0x17] == 0) {
      param_1[0x4e] = (long)&DAT_10df09b36;
      cVar7 = *(char *)(lVar39 + 0x102);
    }
    else {
      iVar36 = *(int *)(param_2 + 0x10);
      apcStack_70[0] = param_3 + iVar36;
      if ((*plVar4 == 0) && (plVar26 = plVar2, FUN_108203a0c(), (int)plVar26 == 0)) {
code_r0x000108202510:
        param_1[0x4e] = 0;
        return (long *)0x1;
      }
      while (puVar38 = param_2,
            (*(code *)param_2[0xe])(param_2,apcStack_70,(long)pcVar44 - (long)iVar36,plVar4,*plVar3)
            , 1 < (uint)puVar38) {
        plVar26 = plVar2;
        FUN_108203a0c();
        if (((ulong)plVar26 & 1) == 0) goto code_r0x000108202510;
      }
      if (param_1[0x68] == 0) goto code_r0x000108202510;
      puVar18 = (undefined1 *)*plVar4;
      if (puVar18 == (undefined1 *)*plVar3) {
        plVar26 = plVar2;
        FUN_108203a0c();
        if ((int)plVar26 == 0) goto code_r0x000108202510;
        puVar18 = (undefined1 *)*plVar4;
      }
      param_1[0x67] = (long)(puVar18 + 1);
      *puVar18 = 0;
      param_1[0x4e] = param_1[0x68];
      if (param_1[0x68] == 0) {
        return (long *)0x1;
      }
      uVar42 = 0;
      param_1[0x68] = param_1[0x67];
      cVar7 = *(char *)(lVar39 + 0x102);
    }
    if (((cVar7 == '\0') && (*(int *)((long)param_1 + 0x3a4) == 0)) &&
       ((code *)param_1[0x1d] != (code *)0x0)) {
      iVar36 = (int)param_1[1];
      (*(code *)param_1[0x1d])();
      if (iVar36 == 0) {
        return (long *)0x16;
      }
    }
    if (param_1[0x4c] == 0) {
      plVar26 = param_1;
      FUN_10820312c(param_1,lVar39 + 0x108,&DAT_10df09b36,0x40);
      param_1[0x4c] = (long)plVar26;
      if (plVar26 == (long *)0x0) {
        return (long *)0x1;
      }
      plVar26[5] = 0;
    }
  case 0xd:
    pcVar44 = pcStack_80;
    uVar41 = uVar42;
    if ((*(char *)(lVar39 + 0x100) == '\0') || (param_1[0x4c] == 0)) goto joined_r0x00010820098c;
    iVar36 = *(int *)(param_2 + 0x10);
    apcStack_70[0] = param_3 + iVar36;
    if (*(long *)(lVar39 + 0xb8) == 0) {
      iVar9 = iVar10 + 0xa0;
      FUN_108203a0c();
      if (iVar9 == 0) goto code_r0x000108202500;
    }
    while (puVar38 = param_2,
          (*(code *)param_2[0xe])
                    (param_2,apcStack_70,(long)pcVar44 - (long)iVar36,lVar39 + 0xb8,
                     *(undefined8 *)(lVar39 + 0xb0)), 1 < (uint)puVar38) {
      uVar29 = lVar39 + 0xa0;
      FUN_108203a0c();
      if ((uVar29 & 1) == 0) goto code_r0x000108202500;
    }
    if (*(long *)(lVar39 + 0xc0) == 0) {
code_r0x000108202500:
      *(undefined8 *)(param_1[0x4c] + 0x18) = 0;
      return (long *)0x1;
    }
    puVar18 = *(undefined1 **)(lVar39 + 0xb8);
    if (puVar18 == *(undefined1 **)(lVar39 + 0xb0)) {
      iVar10 = iVar10 + 0xa0;
      FUN_108203a0c();
      if (iVar10 == 0) goto code_r0x000108202500;
      puVar18 = *(undefined1 **)(lVar39 + 0xb8);
    }
    *(undefined1 **)(lVar39 + 0xb8) = puVar18 + 1;
    *puVar18 = 0;
    lVar23 = *(long *)(lVar39 + 0xc0);
    lVar14 = param_1[0x4c];
    *(long *)(lVar14 + 0x18) = lVar23;
    if (lVar23 == 0) {
      return (long *)0x1;
    }
    *(long *)(lVar14 + 0x20) = param_1[0x57];
    *(undefined8 *)(lVar39 + 0xc0) = *(undefined8 *)(lVar39 + 0xb8);
    if (uVar8 != 0xd) goto joined_r0x00010820098c;
    goto code_r0x000108201ac0;
  case 6:
    *(undefined1 *)((long)param_1 + 0x3a1) = 0;
    plVar26 = param_1;
    FUN_10820312c(param_1,lVar39 + 0x108,&DAT_10df09b36,0x40);
    param_1[0x4c] = (long)plVar26;
    if (plVar26 == (long *)0x0) {
      return (long *)0x1;
    }
    *(undefined1 *)(lVar39 + 0x101) = 1;
    if (param_1[0x17] != 0) {
      puVar38 = param_2;
      (*(code *)param_2[0xd])(param_2,param_3,pcStack_80,plStack_a0);
      pcVar44 = pcStack_80;
      if ((int)puVar38 == 0) {
        return (long *)0x20;
      }
      iVar36 = *(int *)(param_2 + 0x10);
      apcStack_70[0] = param_3 + iVar36;
      if ((*plVar4 == 0) && (plVar26 = plVar2, FUN_108203a0c(), (int)plVar26 == 0)) {
        return (long *)0x1;
      }
      while (puVar38 = param_2,
            (*(code *)param_2[0xe])(param_2,apcStack_70,(long)pcVar44 - (long)iVar36,plVar4,*plVar3)
            , 1 < (uint)puVar38) {
        plVar26 = plVar2;
        FUN_108203a0c();
        if (((ulong)plVar26 & 1) == 0) {
          return (long *)0x1;
        }
      }
      if (param_1[0x68] == 0) {
        return (long *)0x1;
      }
      puVar18 = (undefined1 *)*plVar4;
      if (puVar18 == (undefined1 *)*plVar3) {
        plVar26 = plVar2;
        FUN_108203a0c();
        if ((int)plVar26 == 0) {
          return (long *)0x1;
        }
        puVar18 = (undefined1 *)*plVar4;
      }
      param_1[0x67] = (long)(puVar18 + 1);
      *puVar18 = 0;
      pbVar19 = (byte *)param_1[0x68];
      pbVar25 = pbVar19;
      pbVar30 = pbVar19;
      if (pbVar19 == (byte *)0x0) {
        return (long *)0x1;
      }
      do {
        bVar31 = *pbVar30;
        if (bVar31 < 0xd) {
          if (bVar31 == 10) goto code_r0x000108201a68;
          if (bVar31 == 0) goto code_r0x000108201afc;
code_r0x000108201a34:
          *pbVar25 = bVar31;
          pbVar13 = pbVar25 + 1;
        }
        else {
          if (bVar31 != 0x20 && bVar31 != 0xd) goto code_r0x000108201a34;
code_r0x000108201a68:
          pbVar13 = pbVar19;
          if ((pbVar25 != pbVar19) && (pbVar13 = pbVar25, pbVar25[-1] != 0x20)) {
            bVar31 = 0x20;
            goto code_r0x000108201a34;
          }
        }
        pbVar25 = pbVar13;
        pbVar30 = pbVar30 + 1;
      } while( true );
    }
  case 0xe:
    puVar38 = param_2;
    (*(code *)param_2[0xd])(param_2,param_3,pcStack_80,plStack_a0);
    if ((int)puVar38 == 0) {
      return (long *)0x20;
    }
    if (*(char *)(lVar39 + 0x100) == '\0') goto joined_r0x00010820098c;
    goto code_r0x0001082010d8;
  case 7:
    if ((code *)param_1[0x17] == (code *)0x0) break;
    (*(code *)param_1[0x17])(param_1[1],param_1[0x4d],param_1[0x4e],param_1[0x4f],1);
    param_1[0x4d] = 0;
    plVar26 = (long *)param_1[100];
    if ((long *)param_1[0x65] == (long *)0x0) {
code_r0x00010820211c:
      param_1[0x65] = (long)plVar26;
    }
    else {
      plVar40 = (long *)param_1[0x65];
      plVar27 = plVar26;
      if (plVar26 != (long *)0x0) {
        do {
          plVar26 = plVar27;
          plVar27 = (long *)*plVar26;
          *plVar26 = (long)plVar40;
          plVar40 = plVar26;
        } while (plVar27 != (long *)0x0);
        goto code_r0x00010820211c;
      }
    }
code_r0x000108202120:
    *plVar2 = 0;
    param_1[0x67] = 0;
    param_1[0x68] = 0;
    *plVar3 = 0;
    goto code_r0x00010820235c;
  case 8:
    if (param_9 == '\0') {
      return (long *)0x4;
    }
    if (param_1[0x4d] != 0) {
      (*(code *)param_1[0x17])(param_1[1],param_1[0x4d],param_1[0x4e],param_1[0x4f],0);
      plVar26 = (long *)param_1[100];
      if ((long *)param_1[0x65] == (long *)0x0) {
code_r0x000108201bf0:
        param_1[0x65] = (long)plVar26;
      }
      else {
        plVar40 = (long *)param_1[0x65];
        plVar27 = plVar26;
        if (plVar26 != (long *)0x0) {
          do {
            plVar26 = plVar27;
            plVar27 = (long *)*plVar26;
            *plVar26 = (long)plVar40;
            plVar40 = plVar26;
          } while (plVar27 != (long *)0x0);
          goto code_r0x000108201bf0;
        }
      }
      uVar42 = 0;
      *plVar2 = 0;
      param_1[0x67] = 0;
      param_1[0x68] = 0;
      *plVar3 = 0;
    }
    if ((param_1[0x4e] != 0) || (*(char *)((long)param_1 + 0x3a1) != '\0')) {
      uVar5 = *(undefined1 *)(lVar39 + 0x101);
      *(undefined1 *)(lVar39 + 0x101) = 1;
      if ((*(int *)((long)param_1 + 0x3a4) != 0) && (param_1[0x1e] != 0)) {
        plVar26 = param_1;
        FUN_10820312c(param_1,lVar39 + 0x108,&DAT_10df09b36,0x40);
        if (plVar26 == (long *)0x0) {
          return (long *)0x1;
        }
        if (*(char *)((long)param_1 + 0x3a1) == '\0') {
          lVar14 = plVar26[4];
        }
        else {
          lVar14 = param_1[0x57];
          plVar26[4] = lVar14;
        }
        *(undefined1 *)(lVar39 + 0x103) = 0;
        lVar23 = param_1[0x1f];
        (*(code *)param_1[0x1e])(lVar23,0,lVar14,plVar26[3],plVar26[5]);
        if ((int)lVar23 == 0) {
          return (long *)0x15;
        }
        if (*(char *)(lVar39 + 0x103) == '\0') {
          if (param_1[0x4e] == 0) {
            *(undefined1 *)(lVar39 + 0x101) = uVar5;
          }
        }
        else if ((*(char *)(lVar39 + 0x102) == '\0') && ((code *)param_1[0x1d] != (code *)0x0)) {
          iVar10 = (int)param_1[1];
          (*(code *)param_1[0x1d])();
          if (iVar10 == 0) {
            return (long *)0x16;
          }
        }
      }
      *(undefined1 *)((long)param_1 + 0x3a1) = 0;
    }
    uVar41 = uVar42;
    if ((code *)param_1[0x18] == (code *)0x0) goto joined_r0x00010820098c;
    (*(code *)param_1[0x18])(param_1[1]);
    goto code_r0x00010820235c;
  case 9:
    puVar38 = param_2;
    (*(code *)param_2[0xb])(param_2,param_3,pcStack_80);
    pcVar44 = pcStack_80;
    if ((int)puVar38 == 0) {
      if (*(char *)(lVar39 + 0x100) != '\0') {
        apcStack_70[0] = param_3;
        if (*(long *)(lVar39 + 0xb8) == 0) {
          iVar36 = iVar10 + 0xa0;
          FUN_108203a0c();
          if (iVar36 == 0) {
            return (long *)0x1;
          }
        }
        while (puVar38 = param_2,
              (*(code *)param_2[0xe])
                        (param_2,apcStack_70,pcVar44,lVar39 + 0xb8,*(undefined8 *)(lVar39 + 0xb0)),
              1 < (uint)puVar38) {
          uVar29 = lVar39 + 0xa0;
          FUN_108203a0c();
          if ((uVar29 & 1) == 0) {
            return (long *)0x1;
          }
        }
        if (*(long *)(lVar39 + 0xc0) == 0) {
          return (long *)0x1;
        }
        puVar18 = *(undefined1 **)(lVar39 + 0xb8);
        if (puVar18 == *(undefined1 **)(lVar39 + 0xb0)) {
          iVar10 = iVar10 + 0xa0;
          FUN_108203a0c();
          if (iVar10 == 0) {
            return (long *)0x1;
          }
          puVar18 = *(undefined1 **)(lVar39 + 0xb8);
        }
        *(undefined1 **)(lVar39 + 0xb8) = puVar18 + 1;
        *puVar18 = 0;
        lVar14 = *(long *)(lVar39 + 0xc0);
        if (lVar14 == 0) {
          return (long *)0x1;
        }
        FUN_10820312c(param_1,lVar39,lVar14,0x40);
        param_1[0x4c] = (long)plVar26;
        if (plVar26 == (long *)0x0) {
          return (long *)0x1;
        }
        if (*plVar26 == lVar14) {
          bVar6 = false;
          *(undefined8 *)(lVar39 + 0xc0) = *(undefined8 *)(lVar39 + 0xb8);
          plVar26[5] = 0;
          *(undefined1 *)((long)plVar26 + 0x39) = 0;
          if (param_1[0x72] == 0) goto code_r0x00010820240c;
code_r0x000108202418:
          *(bool *)((long)plVar26 + 0x3a) = bVar6;
          goto code_r0x000108200b74;
        }
      }
      goto code_r0x000108202288;
    }
    param_1[0x4c] = 0;
    break;
  case 10:
    if (*(char *)(lVar39 + 0x100) != '\0') {
      apcStack_70[0] = param_3;
      if (*(long *)(lVar39 + 0xb8) == 0) {
        iVar36 = iVar10 + 0xa0;
        FUN_108203a0c();
        if (iVar36 == 0) {
          return (long *)0x1;
        }
      }
      while (puVar38 = param_2,
            (*(code *)param_2[0xe])
                      (param_2,apcStack_70,pcVar44,lVar39 + 0xb8,*(undefined8 *)(lVar39 + 0xb0)),
            1 < (uint)puVar38) {
        uVar29 = lVar39 + 0xa0;
        FUN_108203a0c();
        if ((uVar29 & 1) == 0) {
          return (long *)0x1;
        }
      }
      if (*(long *)(lVar39 + 0xc0) == 0) {
        return (long *)0x1;
      }
      puVar18 = *(undefined1 **)(lVar39 + 0xb8);
      if (puVar18 == *(undefined1 **)(lVar39 + 0xb0)) {
        iVar10 = iVar10 + 0xa0;
        FUN_108203a0c();
        if (iVar10 == 0) {
          return (long *)0x1;
        }
        puVar18 = *(undefined1 **)(lVar39 + 0xb8);
      }
      *(undefined1 **)(lVar39 + 0xb8) = puVar18 + 1;
      *puVar18 = 0;
      lVar14 = *(long *)(lVar39 + 0xc0);
      if (lVar14 == 0) {
        return (long *)0x1;
      }
      FUN_10820312c(param_1,lVar39 + 0x108,lVar14,0x40);
      param_1[0x4c] = (long)plVar26;
      if (plVar26 == (long *)0x0) {
        return (long *)0x1;
      }
      if (*plVar26 == lVar14) {
        *(undefined8 *)(lVar39 + 0xc0) = *(undefined8 *)(lVar39 + 0xb8);
        plVar26[5] = 0;
        *(undefined1 *)((long)plVar26 + 0x39) = 1;
        if (param_1[0x72] == 0) {
code_r0x00010820240c:
          bVar6 = param_1[0x49] == 0;
          goto code_r0x000108202418;
        }
        *(undefined1 *)((long)plVar26 + 0x3a) = 0;
        goto code_r0x000108200b74;
      }
    }
code_r0x000108202288:
    *(undefined8 *)(lVar39 + 0xb8) = *(undefined8 *)(lVar39 + 0xc0);
    param_1[0x4c] = 0;
    break;
  case 0xb:
    if (*(char *)(lVar39 + 0x100) == '\0') break;
code_r0x000108200b74:
    lVar14 = param_1[0x24];
    goto joined_r0x000108200a74;
  case 0xc:
    if (*(char *)(lVar39 + 0x100) != '\0') {
      plVar26 = param_1;
      func_0x000108203c30(param_1,param_2,param_3 + *(int *)(param_2 + 0x10),
                          (long)pcStack_80 - (long)*(int *)(param_2 + 0x10),2);
      puVar38 = (undefined8 *)param_1[0x4c];
      uVar17 = *(undefined8 *)(lVar39 + 0xf0);
      if (puVar38 == (undefined8 *)0x0) {
        *(undefined8 *)(lVar39 + 0xe8) = uVar17;
      }
      else {
        puVar38[1] = uVar17;
        uVar28 = *(undefined8 *)(lVar39 + 0xe8);
        iVar10 = (int)uVar28 - (int)uVar17;
        *(int *)(puVar38 + 2) = iVar10;
        *(undefined8 *)(lVar39 + 0xf0) = uVar28;
        pcVar20 = (code *)param_1[0x24];
        if (pcVar20 != (code *)0x0) {
          *plVar16 = (long)param_3;
          (*pcVar20)(param_1[1],*puVar38,*(undefined1 *)((long)puVar38 + 0x39),puVar38[1],iVar10,
                     param_1[0x57],0,0,0);
          uVar41 = 0;
        }
      }
      if ((int)plVar26 != 0) {
        return plVar26;
      }
      goto joined_r0x00010820098c;
    }
    break;
  case 0xf:
    if (((*(char *)(lVar39 + 0x100) == '\0') ||
        (puVar38 = (undefined8 *)param_1[0x4c], puVar38 == (undefined8 *)0x0)) ||
       (pcVar20 = (code *)param_1[0x24], pcVar20 == (code *)0x0)) break;
    *plVar16 = (long)param_3;
    (*pcVar20)(param_1[1],*puVar38,*(undefined1 *)((long)puVar38 + 0x39),0,0,puVar38[4],puVar38[3],
               puVar38[5],0);
    goto code_r0x00010820235c;
  case 0x10:
    if ((*(char *)(lVar39 + 0x100) == '\0') || (param_1[0x4c] == 0)) break;
    apcStack_70[0] = param_3;
    if (*(long *)(lVar39 + 0xb8) == 0) {
      iVar36 = iVar10 + 0xa0;
      FUN_108203a0c();
      if (iVar36 == 0) goto code_r0x000108202538;
    }
    while (puVar38 = param_2,
          (*(code *)param_2[0xe])
                    (param_2,apcStack_70,pcVar44,lVar39 + 0xb8,*(undefined8 *)(lVar39 + 0xb0)),
          1 < (uint)puVar38) {
      uVar29 = lVar39 + 0xa0;
      FUN_108203a0c();
      if ((uVar29 & 1) == 0) goto code_r0x000108202538;
    }
    if (*(long *)(lVar39 + 0xc0) == 0) {
code_r0x000108202538:
      *(undefined8 *)(param_1[0x4c] + 0x30) = 0;
      return (long *)0x1;
    }
    puVar18 = *(undefined1 **)(lVar39 + 0xb8);
    if (puVar18 == *(undefined1 **)(lVar39 + 0xb0)) {
      iVar10 = iVar10 + 0xa0;
      FUN_108203a0c();
      if (iVar10 == 0) goto code_r0x000108202538;
      puVar18 = *(undefined1 **)(lVar39 + 0xb8);
    }
    *(undefined1 **)(lVar39 + 0xb8) = puVar18 + 1;
    *puVar18 = 0;
    lVar14 = *(long *)(lVar39 + 0xc0);
    puVar38 = (undefined8 *)param_1[0x4c];
    puVar38[6] = lVar14;
    if (lVar14 == 0) {
      return (long *)0x1;
    }
    *(undefined8 *)(lVar39 + 0xc0) = *(undefined8 *)(lVar39 + 0xb8);
    pcVar20 = (code *)param_1[0x19];
    if (pcVar20 == (code *)0x0) {
      pcVar20 = (code *)param_1[0x24];
      if (pcVar20 == (code *)0x0) break;
      *plVar16 = (long)param_3;
      (*pcVar20)(param_1[1],*puVar38,0,0,0,puVar38[4],puVar38[3],puVar38[5],puVar38[6]);
    }
    else {
      *plVar16 = (long)param_3;
      (*pcVar20)(param_1[1],*puVar38,puVar38[4],puVar38[3],puVar38[5],puVar38[6]);
    }
    goto code_r0x00010820235c;
  case 0x11:
    lVar14 = param_1[0x1a];
    goto joined_r0x00010820134c;
  case 0x12:
    *plVar1 = 0;
    param_1[0x52] = 0;
    if (param_1[0x1a] == 0) break;
    apcStack_70[0] = param_3;
    if ((*plVar4 == 0) && (plVar26 = plVar2, FUN_108203a0c(), (int)plVar26 == 0)) {
code_r0x000108202528:
      *plVar1 = 0;
      return (long *)0x1;
    }
    while (puVar38 = param_2, (*(code *)param_2[0xe])(param_2,apcStack_70,pcVar44,plVar4,*plVar3),
          1 < (uint)puVar38) {
      plVar26 = plVar2;
      FUN_108203a0c();
      if (((ulong)plVar26 & 1) == 0) goto code_r0x000108202528;
    }
    if (param_1[0x68] == 0) goto code_r0x000108202528;
    puVar18 = (undefined1 *)*plVar4;
    if (puVar18 == (undefined1 *)*plVar3) {
      plVar26 = plVar2;
      FUN_108203a0c();
      if ((int)plVar26 == 0) goto code_r0x000108202528;
      puVar18 = (undefined1 *)*plVar4;
    }
    param_1[0x67] = (long)(puVar18 + 1);
    *puVar18 = 0;
    param_1[0x51] = param_1[0x68];
    if (param_1[0x68] == 0) {
      return (long *)0x1;
    }
    goto code_r0x000108201af0;
  case 0x13:
    if ((*plVar1 != 0) && (param_1[0x1a] != 0)) {
      iVar10 = *(int *)(param_2 + 0x10);
      apcStack_70[0] = param_3 + iVar10;
      if ((*plVar4 == 0) && (plVar26 = plVar2, FUN_108203a0c(), (int)plVar26 == 0)) {
        return (long *)0x1;
      }
      while (puVar38 = param_2,
            (*(code *)param_2[0xe])(param_2,apcStack_70,(long)pcVar44 - (long)iVar10,plVar4,*plVar3)
            , 1 < (uint)puVar38) {
        plVar26 = plVar2;
        FUN_108203a0c();
        if (((ulong)plVar26 & 1) == 0) {
          return (long *)0x1;
        }
      }
      if (param_1[0x68] == 0) {
        return (long *)0x1;
      }
      puVar18 = (undefined1 *)*plVar4;
      if (puVar18 == (undefined1 *)*plVar3) {
        plVar26 = plVar2;
        FUN_108203a0c();
        if ((int)plVar26 == 0) {
          return (long *)0x1;
        }
        puVar18 = (undefined1 *)*plVar4;
      }
      param_1[0x67] = (long)(puVar18 + 1);
      *puVar18 = 0;
      lVar14 = param_1[0x68];
      if (lVar14 == 0) {
        return (long *)0x1;
      }
      *plVar16 = (long)param_3;
      (*(code *)param_1[0x1a])(param_1[1],param_1[0x51],param_1[0x57],lVar14,param_1[0x52]);
      uVar42 = 0;
    }
    plVar40 = (long *)param_1[100];
    if ((long *)param_1[0x65] == (long *)0x0) goto code_r0x000108201f18;
    plVar26 = (long *)param_1[0x65];
    plVar27 = plVar40;
    if (plVar40 != (long *)0x0) {
      do {
        plVar40 = plVar27;
        plVar27 = (long *)*plVar40;
        *plVar40 = (long)plVar26;
        plVar26 = plVar40;
      } while (plVar27 != (long *)0x0);
      goto code_r0x000108201f18;
    }
    goto code_r0x000108201f1c;
  case 0x14:
    if ((param_1[0x52] != 0) && (pcVar20 = (code *)param_1[0x1a], pcVar20 != (code *)0x0)) {
      *plVar16 = (long)param_3;
      (*pcVar20)(param_1[1],param_1[0x51],param_1[0x57],0,param_1[0x52]);
      uVar42 = 0;
    }
    plVar40 = (long *)param_1[100];
    if ((long *)param_1[0x65] != (long *)0x0) {
      plVar26 = (long *)param_1[0x65];
      plVar27 = plVar40;
      if (plVar40 == (long *)0x0) goto code_r0x000108201f1c;
      do {
        plVar40 = plVar27;
        plVar27 = (long *)*plVar40;
        *plVar40 = (long)plVar26;
        plVar26 = plVar40;
      } while (plVar27 != (long *)0x0);
    }
    goto code_r0x000108201f18;
  case 0x15:
    puVar38 = param_2;
    (*(code *)param_2[0xd])(param_2,param_3,pcStack_80,plStack_a0);
    pcVar44 = pcStack_80;
    if ((int)puVar38 == 0) {
      return (long *)0x20;
    }
    if (*plVar1 != 0) {
      iVar10 = *(int *)(param_2 + 0x10);
      apcStack_70[0] = param_3 + iVar10;
      if ((*plVar4 == 0) && (plVar26 = plVar2, FUN_108203a0c(), (int)plVar26 == 0)) {
        return (long *)0x1;
      }
      while (puVar38 = param_2,
            (*(code *)param_2[0xe])(param_2,apcStack_70,(long)pcVar44 - (long)iVar10,plVar4,*plVar3)
            , 1 < (uint)puVar38) {
        plVar26 = plVar2;
        FUN_108203a0c();
        if (((ulong)plVar26 & 1) == 0) {
          return (long *)0x1;
        }
      }
      if (param_1[0x68] == 0) {
        return (long *)0x1;
      }
      puVar18 = (undefined1 *)*plVar4;
      if (puVar18 == (undefined1 *)*plVar3) {
        plVar26 = plVar2;
        FUN_108203a0c();
        if ((int)plVar26 == 0) {
          return (long *)0x1;
        }
        puVar18 = (undefined1 *)*plVar4;
      }
      param_1[0x67] = (long)(puVar18 + 1);
      *puVar18 = 0;
      pbVar19 = (byte *)param_1[0x68];
      pbVar25 = pbVar19;
      pbVar30 = pbVar19;
      if (pbVar19 == (byte *)0x0) {
        return (long *)0x1;
      }
      do {
        bVar31 = *pbVar30;
        if (bVar31 < 0xd) {
          if (bVar31 == 10) goto code_r0x0001082019c0;
          if (bVar31 == 0) goto code_r0x000108201acc;
code_r0x00010820198c:
          *pbVar25 = bVar31;
          pbVar13 = pbVar25 + 1;
        }
        else {
          if (bVar31 != 0x20 && bVar31 != 0xd) goto code_r0x00010820198c;
code_r0x0001082019c0:
          pbVar13 = pbVar19;
          if ((pbVar25 != pbVar19) && (pbVar13 = pbVar25, pbVar25[-1] != 0x20)) {
            bVar31 = 0x20;
            goto code_r0x00010820198c;
          }
        }
        pbVar25 = pbVar13;
        pbVar30 = pbVar30 + 1;
      } while( true );
    }
    break;
  case 0x16:
    plVar26 = param_1;
    FUN_10820372c(param_1,param_2,param_3,pcStack_80);
    param_1[0x54] = (long)plVar26;
    if (plVar26 == (long *)0x0) {
      return (long *)0x1;
    }
    *(undefined2 *)(param_1 + 0x55) = 0;
    param_1[0x50] = 0;
    cVar7 = *(char *)(lVar39 + 0x100);
    goto joined_r0x0001082009a4;
  case 0x17:
    *(undefined1 *)(param_1 + 0x55) = 1;
    param_1[0x50] = (long)&UNK_10df09b38;
    cVar7 = *(char *)(lVar39 + 0x100);
    goto joined_r0x00010820115c;
  case 0x18:
    *(undefined1 *)((long)param_1 + 0x2a9) = 1;
    param_1[0x50] = (long)&UNK_10df09b3e;
    cVar7 = *(char *)(lVar39 + 0x100);
    goto joined_r0x0001082009a4;
  case 0x19:
    param_1[0x50] = (long)&UNK_10df09b41;
    cVar7 = *(char *)(lVar39 + 0x100);
joined_r0x0001082009a4:
    if (cVar7 == '\0') break;
    goto code_r0x000108201160;
  case 0x1a:
    param_1[0x50] = (long)&UNK_10df09b47;
    cVar7 = *(char *)(lVar39 + 0x100);
    goto joined_r0x00010820115c;
  case 0x1b:
    param_1[0x50] = (long)&UNK_10df09b4e;
    cVar7 = *(char *)(lVar39 + 0x100);
    goto joined_r0x00010820115c;
  case 0x1c:
    param_1[0x50] = (long)&UNK_10df09b55;
    cVar7 = *(char *)(lVar39 + 0x100);
    goto joined_r0x00010820115c;
  case 0x1d:
    param_1[0x50] = (long)&UNK_10df09b5e;
    cVar7 = *(char *)(lVar39 + 0x100);
    goto joined_r0x00010820115c;
  case 0x1e:
    param_1[0x50] = (long)&UNK_10df09b66;
    cVar7 = *(char *)(lVar39 + 0x100);
    goto joined_r0x00010820115c;
  case 0x1f:
  case 0x20:
    if ((*(char *)(lVar39 + 0x100) == '\0') || (param_1[0x23] == 0)) break;
    pcVar44 = "NOTATION(";
    if (uVar8 != 0x20) {
      pcVar44 = "(";
    }
    if (param_1[0x50] != 0) {
      pcVar44 = "|";
    }
    cVar7 = *pcVar44;
    pcVar24 = pcStack_80;
    while (pcStack_80 = pcVar24, cVar7 != '\0') {
      pcVar44 = pcVar44 + 1;
      pcVar24 = (char *)*plVar4;
      if (pcVar24 == (char *)*plVar3) {
        plVar26 = plVar2;
        FUN_108203a0c();
        if ((int)plVar26 == 0) {
          return (long *)0x1;
        }
        pcVar24 = (char *)*plVar4;
      }
      *plVar4 = (long)(pcVar24 + 1);
      *pcVar24 = cVar7;
      pcVar24 = pcStack_80;
      cVar7 = *pcVar44;
    }
    if (param_1[0x68] == 0) {
      return (long *)0x1;
    }
    apcStack_70[0] = param_3;
    if ((*plVar4 == 0) && (plVar26 = plVar2, FUN_108203a0c(), (int)plVar26 == 0)) {
      return (long *)0x1;
    }
    while (puVar38 = param_2, (*(code *)param_2[0xe])(param_2,apcStack_70,pcVar24,plVar4,*plVar3),
          1 < (uint)puVar38) {
      plVar26 = plVar2;
      FUN_108203a0c();
      if (((ulong)plVar26 & 1) == 0) {
        return (long *)0x1;
      }
    }
    if (param_1[0x68] == 0) {
      return (long *)0x1;
    }
    param_1[0x50] = param_1[0x68];
    goto code_r0x00010820235c;
  case 0x21:
    goto code_r0x000108201158;
  case 0x22:
    plVar26 = param_1;
    func_0x0001082035e0(param_1,param_2,param_3,pcStack_80);
    param_1[0x53] = (long)plVar26;
    if (plVar26 == (long *)0x0) {
      return (long *)0x1;
    }
code_r0x000108201158:
    cVar7 = *(char *)(lVar39 + 0x100);
joined_r0x00010820115c:
    if (cVar7 != '\0') {
code_r0x000108201160:
      lVar14 = param_1[0x23];
joined_r0x000108200a74:
      if (lVar14 != 0) goto code_r0x00010820235c;
    }
    break;
  case 0x23:
  case 0x24:
    if (*(char *)(lVar39 + 0x100) == '\0') {
code_r0x000108201ef4:
      plVar26 = (long *)param_1[0x65];
      plVar40 = (long *)param_1[100];
joined_r0x000108201efc:
      uVar42 = 1;
    }
    else {
      lVar23 = param_1[0x53];
      lVar33 = param_1[0x54];
      lVar14 = param_1[0x55];
      uVar41 = *(uint *)(lVar23 + 0x18);
      uVar29 = (ulong)uVar41;
      if (*(char *)((long)param_1 + 0x2a9) != '\0') {
        if (0 < (int)uVar41) {
          plVar26 = *(long **)(lVar23 + 0x20);
          do {
            if (lVar33 == *plVar26) goto code_r0x000108201e00;
            uVar29 = uVar29 - 1;
            plVar26 = plVar26 + 3;
          } while (uVar29 != 0);
        }
        if ((*(long *)(lVar23 + 0x10) == 0) && (*(char *)(lVar33 + 0x11) == '\0')) {
          *(long *)(lVar23 + 0x10) = lVar33;
        }
      }
      if (uVar41 == *(uint *)(lVar23 + 0x1c)) {
        if (uVar41 == 0) {
          *(undefined4 *)(lVar23 + 0x1c) = 8;
          lVar43 = 0xc0;
          (*(code *)param_1[3])();
          *(long *)(lVar23 + 0x20) = lVar43;
          if (lVar43 == 0) {
            *(undefined4 *)(lVar23 + 0x1c) = 0;
            return (long *)0x1;
          }
        }
        else {
          if (0x3fffffff < (int)uVar41) {
            return (long *)0x1;
          }
          lVar43 = *(long *)(lVar23 + 0x20);
          (*(code *)param_1[4])(lVar43,(long)(int)(uVar41 << 1) * 0x18);
          if (lVar43 == 0) {
            return (long *)0x1;
          }
          *(uint *)(lVar23 + 0x1c) = uVar41 << 1;
          *(long *)(lVar23 + 0x20) = lVar43;
        }
      }
      else {
        lVar43 = *(long *)(lVar23 + 0x20);
      }
      iVar10 = *(int *)(lVar23 + 0x18);
      plVar26 = (long *)(lVar43 + (long)iVar10 * 0x18);
      *plVar26 = lVar33;
      plVar26[2] = 0;
      *(char *)(plVar26 + 1) = (char)lVar14;
      if ((char)lVar14 == '\0') {
        *(undefined1 *)(lVar33 + 0x10) = 1;
      }
      *(int *)(lVar23 + 0x18) = iVar10 + 1;
code_r0x000108201e00:
      pcVar20 = (code *)param_1[0x23];
      if (pcVar20 == (code *)0x0) goto code_r0x000108201ef4;
      pcVar44 = (char *)param_1[0x50];
      if (pcVar44 == (char *)0x0) {
        plVar26 = (long *)param_1[0x65];
        plVar40 = (long *)param_1[100];
        goto joined_r0x000108201efc;
      }
      if ((*pcVar44 == '(') || ((*pcVar44 == 'N' && (pcVar44[1] == 'O')))) {
        puVar18 = (undefined1 *)*plVar4;
        if (puVar18 == (undefined1 *)*plVar3) {
          plVar26 = plVar2;
          FUN_108203a0c();
          if ((int)plVar26 == 0) {
            return (long *)0x1;
          }
          puVar18 = (undefined1 *)*plVar4;
        }
        *plVar4 = (long)(puVar18 + 1);
        *puVar18 = 0x29;
        puVar18 = (undefined1 *)*plVar4;
        if (puVar18 == (undefined1 *)*plVar3) {
          plVar26 = plVar2;
          FUN_108203a0c();
          if ((int)plVar26 == 0) {
            return (long *)0x1;
          }
          puVar18 = (undefined1 *)*plVar4;
        }
        param_1[0x67] = (long)(puVar18 + 1);
        *puVar18 = 0;
        param_1[0x50] = param_1[0x68];
        param_1[0x68] = param_1[0x67];
        pcVar20 = (code *)param_1[0x23];
      }
      *plVar16 = (long)param_3;
      (*pcVar20)(param_1[1],*(undefined8 *)param_1[0x53],*(undefined8 *)param_1[0x54],param_1[0x50],
                 0,uVar8 == 0x24);
      uVar42 = 0;
      plVar26 = (long *)param_1[0x65];
      plVar40 = (long *)param_1[100];
    }
    if (plVar26 != (long *)0x0) {
      plVar27 = plVar40;
      if (plVar40 == (long *)0x0) goto code_r0x000108201f1c;
      do {
        plVar40 = plVar27;
        plVar27 = (long *)*plVar40;
        *plVar40 = (long)plVar26;
        plVar26 = plVar40;
      } while (plVar27 != (long *)0x0);
    }
code_r0x000108201f18:
    param_1[0x65] = (long)plVar40;
code_r0x000108201f1c:
    *plVar2 = 0;
    param_1[0x67] = 0;
    param_1[0x68] = 0;
    *plVar3 = 0;
    uVar41 = uVar42;
    goto joined_r0x00010820098c;
  case 0x25:
  case 0x26:
    if (*(char *)(lVar39 + 0x100) != '\0') {
      lVar14 = param_1[0x55];
      plVar26 = param_1;
      FUN_108209300(param_1,param_2,(char)lVar14,param_3 + *(int *)(param_2 + 0x10),
                    (long)pcStack_80 - (long)*(int *)(param_2 + 0x10),lVar39 + 0xa0,2);
      if ((int)plVar26 != 0) {
        return plVar26;
      }
      pcVar44 = *(char **)(lVar39 + 0xb8);
      if ((((char)lVar14 == '\0') && (pcVar44 != *(char **)(lVar39 + 0xc0))) &&
         (pcVar24 = pcVar44 + -1, *pcVar24 == ' ')) {
        *(char **)(lVar39 + 0xb8) = pcVar24;
        pcVar44 = pcVar24;
      }
      if (pcVar44 == *(char **)(lVar39 + 0xb0)) {
        iVar10 = iVar10 + 0xa0;
        FUN_108203a0c();
        if (iVar10 == 0) {
          return (long *)0x1;
        }
        pcVar44 = *(char **)(lVar39 + 0xb8);
      }
      *(char **)(lVar39 + 0xb8) = pcVar44 + 1;
      *pcVar44 = '\0';
      lVar14 = *(long *)(lVar39 + 0xc0);
      *(undefined8 *)(lVar39 + 0xc0) = *(undefined8 *)(lVar39 + 0xb8);
      lVar43 = param_1[0x53];
      lVar33 = param_1[0x54];
      lVar23 = param_1[0x55];
      uVar41 = *(uint *)(lVar43 + 0x18);
      uVar29 = (ulong)uVar41;
      if ((lVar14 != 0) && (0 < (int)uVar41)) {
        plVar26 = *(long **)(lVar43 + 0x20);
        do {
          if (lVar33 == *plVar26) goto code_r0x000108202004;
          uVar29 = uVar29 - 1;
          plVar26 = plVar26 + 3;
        } while (uVar29 != 0);
      }
      if (uVar41 == *(uint *)(lVar43 + 0x1c)) {
        if (uVar41 == 0) {
          *(undefined4 *)(lVar43 + 0x1c) = 8;
          lVar11 = 0xc0;
          (*(code *)param_1[3])();
          *(long *)(lVar43 + 0x20) = lVar11;
          if (lVar11 == 0) {
            *(undefined4 *)(lVar43 + 0x1c) = 0;
            return (long *)0x1;
          }
        }
        else {
          if (0x3fffffff < (int)uVar41) {
            return (long *)0x1;
          }
          lVar11 = *(long *)(lVar43 + 0x20);
          (*(code *)param_1[4])(lVar11,(long)(int)(uVar41 << 1) * 0x18);
          if (lVar11 == 0) {
            return (long *)0x1;
          }
          *(uint *)(lVar43 + 0x1c) = uVar41 << 1;
          *(long *)(lVar43 + 0x20) = lVar11;
        }
      }
      else {
        lVar11 = *(long *)(lVar43 + 0x20);
      }
      iVar10 = *(int *)(lVar43 + 0x18);
      plVar26 = (long *)(lVar11 + (long)iVar10 * 0x18);
      *plVar26 = lVar33;
      plVar26[2] = lVar14;
      *(char *)(plVar26 + 1) = (char)lVar23;
      if ((char)lVar23 == '\0') {
        *(undefined1 *)(lVar33 + 0x10) = 1;
      }
      *(int *)(lVar43 + 0x18) = iVar10 + 1;
code_r0x000108202004:
      pcVar20 = (code *)param_1[0x23];
      if ((pcVar20 != (code *)0x0) && (pcVar44 = (char *)param_1[0x50], pcVar44 != (char *)0x0)) {
        if ((*pcVar44 == '(') || ((*pcVar44 == 'N' && (pcVar44[1] == 'O')))) {
          puVar18 = (undefined1 *)*plVar4;
          if (puVar18 == (undefined1 *)*plVar3) {
            plVar26 = plVar2;
            FUN_108203a0c();
            if ((int)plVar26 == 0) {
              return (long *)0x1;
            }
            puVar18 = (undefined1 *)*plVar4;
          }
          *plVar4 = (long)(puVar18 + 1);
          *puVar18 = 0x29;
          puVar18 = (undefined1 *)*plVar4;
          if (puVar18 == (undefined1 *)*plVar3) {
            plVar26 = plVar2;
            FUN_108203a0c();
            if ((int)plVar26 == 0) {
              return (long *)0x1;
            }
            puVar18 = (undefined1 *)*plVar4;
          }
          param_1[0x67] = (long)(puVar18 + 1);
          *puVar18 = 0;
          param_1[0x50] = param_1[0x68];
          param_1[0x68] = param_1[0x67];
          pcVar20 = (code *)param_1[0x23];
        }
        *plVar16 = (long)param_3;
        (*pcVar20)(param_1[1],*(undefined8 *)param_1[0x53],*(undefined8 *)param_1[0x54],
                   param_1[0x50],lVar14,uVar8 == 0x26);
        plVar26 = (long *)param_1[100];
        if ((long *)param_1[0x65] != (long *)0x0) {
          plVar40 = (long *)param_1[0x65];
          plVar27 = plVar26;
          if (plVar26 == (long *)0x0) goto code_r0x000108202120;
          do {
            plVar26 = plVar27;
            plVar27 = (long *)*plVar26;
            *plVar26 = (long)plVar40;
            plVar40 = plVar26;
          } while (plVar27 != (long *)0x0);
        }
        goto code_r0x00010820211c;
      }
    }
    break;
  case 0x27:
code_r0x000108201378:
    lVar14 = param_1[0x22];
joined_r0x00010820134c:
    if (lVar14 == 0) break;
    goto code_r0x00010820235c;
  case 0x28:
    if (param_1[0x22] == 0) break;
    plVar26 = param_1;
    func_0x0001082035e0(param_1,param_2,param_3,pcStack_80);
    param_1[0x53] = (long)plVar26;
    if (plVar26 == (long *)0x0) {
      return (long *)0x1;
    }
    *(undefined8 *)(lVar39 + 0x158) = 0;
    *(undefined1 *)(lVar39 + 0x140) = 1;
    goto code_r0x00010820235c;
  case 0x29:
  case 0x2a:
    if (*(char *)(lVar39 + 0x140) != '\0') {
      if (param_1[0x22] != 0) {
        puVar12 = (undefined4 *)0x20;
        (*(code *)param_1[3])();
        if (puVar12 == (undefined4 *)0x0) {
          return (long *)0x1;
        }
        *(undefined8 *)(puVar12 + 6) = 0;
        uVar37 = 1;
        if (uVar8 == 0x29) {
          uVar37 = 2;
        }
        *(undefined8 *)(puVar12 + 3) = 0;
        *(undefined8 *)(puVar12 + 1) = 0;
        *puVar12 = uVar37;
        *plVar16 = (long)param_3;
        (*(code *)param_1[0x22])(param_1[1],*(undefined8 *)param_1[0x53],puVar12);
        uVar41 = 0;
      }
      *(undefined1 *)(lVar39 + 0x140) = 0;
      if (uVar41 == 0) goto code_r0x00010820235c;
    }
    break;
  case 0x2b:
    if (*(char *)(lVar39 + 0x140) != '\0') {
      *(undefined4 *)
       (*(long *)(lVar39 + 0x148) +
       (long)*(int *)(*(long *)(lVar39 + 0x160) + (long)*(int *)(lVar39 + 0x15c) * 4 + -4) * 0x20) =
           3;
      lVar14 = param_1[0x22];
      goto joined_r0x00010820134c;
    }
    break;
  case 0x2c:
    uVar8 = *(uint *)(param_1 + 0x71);
    if (uVar8 <= *(uint *)(param_1 + 0x41)) {
      if (uVar8 == 0) {
        *(undefined4 *)(param_1 + 0x71) = 0x20;
        lVar14 = 0x20;
        (*(code *)param_1[3])();
        param_1[0x70] = lVar14;
        if (lVar14 == 0) {
          *(undefined4 *)(param_1 + 0x71) = 0;
          return (long *)0x1;
        }
      }
      else {
        if ((int)uVar8 < 0) {
          return (long *)0x1;
        }
        lVar14 = param_1[0x70];
        *(uint *)(param_1 + 0x71) = uVar8 << 1;
        (*(code *)param_1[4])();
        if (lVar14 == 0) {
          *(uint *)(param_1 + 0x71) = *(uint *)(param_1 + 0x71) >> 1;
          return (long *)0x1;
        }
        param_1[0x70] = lVar14;
        lVar14 = *(long *)(lVar39 + 0x160);
        if (lVar14 != 0) {
          (*(code *)param_1[4])(lVar14,(ulong)*(uint *)(param_1 + 0x71) << 2);
          if (lVar14 == 0) {
            return (long *)0x1;
          }
          *(long *)(lVar39 + 0x160) = lVar14;
        }
      }
    }
    *(undefined1 *)(param_1[0x70] + (ulong)*(uint *)(param_1 + 0x41)) = 0;
    if (*(char *)(lVar39 + 0x140) != '\0') {
      plVar26 = param_1;
      FUN_108204978();
      if ((int)plVar26 < 0) {
        return (long *)0x1;
      }
      *(int *)(*(long *)(lVar39 + 0x160) + (long)*(int *)(lVar39 + 0x15c) * 4) = (int)plVar26;
      *(int *)(lVar39 + 0x15c) = *(int *)(lVar39 + 0x15c) + 1;
      *(undefined4 *)(*(long *)(lVar39 + 0x148) + ((ulong)plVar26 & 0xffffffff) * 0x20) = 6;
      lVar14 = param_1[0x22];
      goto joined_r0x000108200a74;
    }
    break;
  case 0x2d:
    goto code_r0x000108200bcc;
  case 0x2e:
    uVar37 = 2;
    cVar7 = *(char *)(lVar39 + 0x140);
    goto joined_r0x000108200d94;
  case 0x2f:
    uVar37 = 1;
code_r0x000108200bcc:
    cVar7 = *(char *)(lVar39 + 0x140);
    goto joined_r0x000108200d94;
  case 0x30:
    uVar37 = 3;
    cVar7 = *(char *)(lVar39 + 0x140);
joined_r0x000108200d94:
    if (cVar7 != '\0') {
      lVar14 = param_1[0x22];
      uVar41 = (uint)(lVar14 == 0);
      lVar23 = (long)*(int *)(lVar39 + 0x15c) + -1;
      iVar10 = (int)lVar23;
      *(int *)(lVar39 + 0x15c) = iVar10;
      *(undefined4 *)
       (*(long *)(lVar39 + 0x148) + (long)*(int *)(*(long *)(lVar39 + 0x160) + lVar23 * 4) * 0x20 +
       4) = uVar37;
      if (iVar10 == 0) {
        if (lVar14 != 0) {
          lVar14 = param_1[0x56];
          pcVar44 = (char *)((ulong)*(uint *)(lVar14 + 0x150) +
                            (ulong)*(uint *)(lVar14 + 0x158) * 0x20);
          (*(code *)param_1[3])();
          if (pcVar44 == (char *)0x0) {
            return (long *)0x1;
          }
          uVar8 = *(uint *)(lVar14 + 0x158);
          pcVar44[0x10] = '\0';
          pcVar44[0x11] = '\0';
          pcVar44[0x12] = '\0';
          pcVar44[0x13] = '\0';
          if (uVar8 != 0) {
            pcVar35 = pcVar44 + (ulong)uVar8 * 0x20;
            pcVar24 = pcVar44 + 0x20;
            pcVar22 = pcVar35;
            do {
              lVar33 = (long)*(int *)(pcVar44 + 0x10);
              lVar23 = *(long *)(lVar14 + 0x148);
              iVar10 = *(int *)(lVar23 + lVar33 * 0x20);
              *(undefined8 *)pcVar44 = *(undefined8 *)(lVar23 + lVar33 * 0x20);
              if (iVar10 == 4) {
                *(char **)(pcVar44 + 8) = pcVar22;
                pcVar21 = pcVar22;
                pcVar32 = *(char **)(lVar23 + lVar33 * 0x20 + 8);
                do {
                  cVar7 = *pcVar32;
                  pcVar22 = pcVar21 + 1;
                  *pcVar21 = cVar7;
                  pcVar21 = pcVar22;
                  pcVar32 = pcVar32 + 1;
                } while (cVar7 != '\0');
                pcVar44[0x10] = '\0';
                pcVar44[0x11] = '\0';
                pcVar44[0x12] = '\0';
                pcVar44[0x13] = '\0';
                pcVar44[0x18] = '\0';
                pcVar44[0x19] = '\0';
                pcVar44[0x1a] = '\0';
                pcVar44[0x1b] = '\0';
                pcVar44[0x1c] = '\0';
                pcVar44[0x1d] = '\0';
                pcVar44[0x1e] = '\0';
                pcVar44[0x1f] = '\0';
              }
              else {
                pcVar44[8] = '\0';
                pcVar44[9] = '\0';
                pcVar44[10] = '\0';
                pcVar44[0xb] = '\0';
                pcVar44[0xc] = '\0';
                pcVar44[0xd] = '\0';
                pcVar44[0xe] = '\0';
                pcVar44[0xf] = '\0';
                lVar33 = lVar23 + lVar33 * 0x20;
                iVar10 = *(int *)(lVar33 + 0x18);
                *(int *)(pcVar44 + 0x10) = iVar10;
                *(char **)(pcVar44 + 0x18) = pcVar24;
                if (iVar10 != 0) {
                  uVar8 = 0;
                  piVar34 = (int *)(lVar33 + 0x10);
                  do {
                    iVar10 = *piVar34;
                    *(int *)(pcVar24 + 0x10) = iVar10;
                    pcVar24 = pcVar24 + 0x20;
                    uVar8 = uVar8 + 1;
                    piVar34 = (int *)(lVar23 + (long)iVar10 * 0x20 + 0x1c);
                  } while (uVar8 < *(uint *)(pcVar44 + 0x10));
                }
              }
              pcVar44 = pcVar44 + 0x20;
            } while (pcVar44 < pcVar35);
          }
          *plVar16 = (long)param_3;
          (*(code *)param_1[0x22])(param_1[1],*(undefined8 *)param_1[0x53]);
        }
        *(undefined1 *)(lVar39 + 0x140) = 0;
        *(undefined4 *)(lVar39 + 0x150) = 0;
      }
      goto joined_r0x00010820098c;
    }
    break;
  case 0x31:
    lVar14 = param_1[0x70];
    uVar8 = *(uint *)(param_1 + 0x41);
    cVar7 = *(char *)(lVar14 + (ulong)uVar8);
    if (cVar7 == ',') {
      return (long *)0x2;
    }
    if ((cVar7 == '\0' && *(char *)(lVar39 + 0x140) != '\0') &&
       (piVar34 = (int *)(*(long *)(lVar39 + 0x148) +
                         (long)*(int *)(*(long *)(lVar39 + 0x160) +
                                        (long)*(int *)(lVar39 + 0x15c) * 4 + -4) * 0x20),
       *piVar34 != 3)) {
      *piVar34 = 5;
      uVar41 = (uint)(param_1[0x22] == 0);
    }
    *(undefined1 *)(lVar14 + (ulong)uVar8) = 0x7c;
    goto joined_r0x00010820098c;
  case 0x32:
    if (*(char *)(param_1[0x70] + (ulong)*(uint *)(param_1 + 0x41)) == '|') {
      return (long *)0x2;
    }
    *(undefined1 *)(param_1[0x70] + (ulong)*(uint *)(param_1 + 0x41)) = 0x2c;
    if (*(char *)(lVar39 + 0x140) != '\0') goto code_r0x000108201378;
    break;
  case 0x33:
    if (*(char *)(lVar39 + 0x140) == '\0') break;
    uVar42 = 0;
    FUN_108204978();
    iVar10 = (int)plVar26;
    goto joined_r0x000108200908;
  case 0x34:
    uVar42 = 2;
    cVar7 = *(char *)(lVar39 + 0x140);
    goto joined_r0x000108200854;
  case 0x35:
    goto code_r0x000108200850;
  case 0x36:
    uVar42 = 3;
code_r0x000108200850:
    cVar7 = *(char *)(lVar39 + 0x140);
joined_r0x000108200854:
    if (cVar7 == '\0') break;
    pcVar44 = pcStack_80 + -(long)*(int *)(param_2 + 0x10);
    FUN_108204978();
    iVar10 = (int)plVar26;
joined_r0x000108200908:
    if (iVar10 < 0) {
      return (long *)0x1;
    }
    puVar12 = (undefined4 *)(*(long *)(lVar39 + 0x148) + ((ulong)plVar26 & 0xffffffff) * 0x20);
    *puVar12 = 4;
    puVar12[1] = uVar42;
    plVar40 = param_1;
    func_0x0001082035e0(param_1,param_2,param_3,pcVar44);
    if (plVar40 == (long *)0x0) {
      return (long *)0x1;
    }
    lVar14 = *plVar40;
    *(long *)(*(long *)(lVar39 + 0x148) + ((ulong)plVar26 & 0xffffffff) * 0x20 + 8) = lVar14;
    _strlen();
    if ((ulong)~*(uint *)(lVar39 + 0x150) < lVar14 + 1U) {
      return (long *)0x1;
    }
    *(uint *)(lVar39 + 0x150) = *(uint *)(lVar39 + 0x150) + (int)(lVar14 + 1U);
    lVar14 = param_1[0x22];
    goto joined_r0x000108200a74;
  case 0x37:
    plVar26 = param_1;
    FUN_108204f68(param_1,param_2,param_3,pcStack_80);
    iVar10 = (int)plVar26;
    goto joined_r0x00010820139c;
  case 0x38:
    plVar26 = param_1;
    FUN_10820528c(param_1,param_2,param_3,pcStack_80);
    iVar10 = (int)plVar26;
joined_r0x00010820139c:
    if (iVar10 == 0) {
      return (long *)0x1;
    }
    goto code_r0x00010820235c;
  case 0x39:
    FUN_108202ad4(param_1,1,param_3,pcStack_80);
    iVar10 = (int)plVar26;
joined_r0x0001082009d0:
    if (iVar10 != 0) {
      return plVar26;
    }
    param_2 = (undefined8 *)param_1[0x26];
    goto code_r0x00010820235c;
  case 0x3a:
    if ((code *)param_1[0x16] != (code *)0x0) {
      if (*(char *)((long)param_2 + 0x84) == '\0') {
        plVar40 = param_1 + 0x46;
        plVar26 = param_1 + 0x47;
        apcStack_70[0] = param_3;
        if (param_2 != (undefined8 *)param_1[0x26]) {
          plVar40 = (long *)param_1[0x49];
          plVar26 = plVar40 + 1;
        }
        do {
          lStack_78 = param_1[0xd];
          puVar38 = param_2;
          (*(code *)param_2[0xe])(param_2,apcStack_70,pcVar44,&lStack_78,param_1[0xe]);
          *plVar26 = (long)apcStack_70[0];
          (*(code *)param_1[0x16])(param_1[1],param_1[0xd],(int)lStack_78 - (int)param_1[0xd]);
          *plVar40 = (long)apcStack_70[0];
        } while (1 < (uint)puVar38);
      }
      else {
        apcStack_70[0] = param_3;
        (*(code *)param_1[0x16])(param_1[1],param_3,(int)pcStack_80 - (int)param_3);
      }
    }
    plVar26 = param_1;
    func_0x000108204610(param_1,param_2,&pcStack_80,param_4,param_7,param_8);
    if ((int)plVar26 != 0) {
      return plVar26;
    }
    if (pcStack_80 == (char *)0x0) {
      param_1[0x44] = (long)FUN_108204888;
      return (long *)0x0;
    }
    goto code_r0x00010820235c;
  case 0x3b:
  case 0x3c:
    *(undefined1 *)(lVar39 + 0x101) = 1;
    if (*(int *)((long)param_1 + 0x3a4) == 0) {
      cVar7 = *(char *)(lVar39 + 0x102);
      *(char *)(lVar39 + 0x100) = cVar7;
joined_r0x0001082021d4:
      if ((cVar7 == '\0') && (uVar41 = uVar42, (code *)param_1[0x1d] != (code *)0x0)) {
        iVar10 = (int)param_1[1];
        (*(code *)param_1[0x1d])();
        if (iVar10 == 0) {
          return (long *)0x16;
        }
      }
      goto joined_r0x00010820098c;
    }
    iVar36 = *(int *)(param_2 + 0x10);
    apcStack_70[0] = param_3 + iVar36;
    if (*(long *)(lVar39 + 0xb8) == 0) {
      iVar9 = iVar10 + 0xa0;
      FUN_108203a0c();
      if (iVar9 == 0) {
        return (long *)0x1;
      }
    }
    while (puVar38 = param_2,
          (*(code *)param_2[0xe])
                    (param_2,apcStack_70,(long)pcVar44 - (long)iVar36,lVar39 + 0xb8,
                     *(undefined8 *)(lVar39 + 0xb0)), 1 < (uint)puVar38) {
      uVar29 = lVar39 + 0xa0;
      FUN_108203a0c();
      if ((uVar29 & 1) == 0) {
        return (long *)0x1;
      }
    }
    if (*(long *)(lVar39 + 0xc0) == 0) {
      return (long *)0x1;
    }
    puVar18 = *(undefined1 **)(lVar39 + 0xb8);
    if (puVar18 == *(undefined1 **)(lVar39 + 0xb0)) {
      iVar10 = iVar10 + 0xa0;
      FUN_108203a0c();
      if (iVar10 == 0) {
        return (long *)0x1;
      }
      puVar18 = *(undefined1 **)(lVar39 + 0xb8);
    }
    *(undefined1 **)(lVar39 + 0xb8) = puVar18 + 1;
    *puVar18 = 0;
    pcVar44 = *(char **)(lVar39 + 0xc0);
    if (pcVar44 == (char *)0x0) {
      return (long *)0x1;
    }
    if (*(long *)(lVar39 + 0x118) == 0) {
      puVar38 = (undefined8 *)0x0;
    }
    else {
      plVar26 = param_1;
      FUN_108205534(param_1,pcVar44);
      lVar14 = *(long *)(lVar39 + 0x118);
      uVar29 = lVar14 - 1U & (ulong)plVar26;
      lVar23 = *(long *)(lVar39 + 0x108);
      puVar38 = *(undefined8 **)(lVar23 + uVar29 * 8);
      if (puVar38 != (undefined8 *)0x0) {
        uVar41 = 0;
        do {
          while( true ) {
            pcVar35 = (char *)*puVar38;
            pcVar24 = pcVar44;
            cVar7 = *pcVar44;
            if (*pcVar44 == *pcVar35) {
              do {
                pcVar35 = pcVar35 + 1;
                if (cVar7 == '\0') goto code_r0x000108201c68;
                cVar7 = pcVar24[1];
                pcVar24 = pcVar24 + 1;
              } while (cVar7 == *pcVar35);
            }
            if (uVar41 == 0) break;
            lVar33 = lVar14;
            if (uVar41 <= uVar29) {
              lVar33 = 0;
            }
            uVar29 = lVar33 + (uVar29 - uVar41);
            puVar38 = *(undefined8 **)(lVar23 + uVar29 * 8);
            if (puVar38 == (undefined8 *)0x0) goto code_r0x000108201c68;
          }
          uVar41 = (uint)(((ulong)plVar26 & -lVar14) >>
                         ((ulong)(*(byte *)(lVar39 + 0x110) - 1) & 0x3f)) & (uint)(lVar14 - 1U >> 2)
                   & 0xff | 1;
          lVar33 = lVar14;
          if (uVar41 <= uVar29) {
            lVar33 = 0;
          }
          uVar29 = lVar33 + (uVar29 - uVar41);
          puVar38 = *(undefined8 **)(lVar23 + uVar29 * 8);
        } while (puVar38 != (undefined8 *)0x0);
      }
    }
code_r0x000108201c68:
    *(undefined8 *)(lVar39 + 0xb8) = *(undefined8 *)(lVar39 + 0xc0);
    if (*(int *)((long)param_1 + 0x214) != 0) {
      if (*(char *)(lVar39 + 0x102) == '\0') {
        if (*(char *)(lVar39 + 0x101) == '\0') goto code_r0x00010820213c;
        goto code_r0x000108201c88;
      }
      if (param_1[0x49] != 0) goto code_r0x000108201c88;
code_r0x00010820213c:
      if (puVar38 == (undefined8 *)0x0) {
        return (long *)0xb;
      }
      if (*(char *)((long)puVar38 + 0x3a) == '\0') {
        return (long *)0x18;
      }
code_r0x000108202148:
      if (*(char *)(puVar38 + 7) != '\0') {
        return (long *)0xc;
      }
      if (puVar38[1] == 0) {
        if (param_1[0x1e] == 0) {
          *(undefined1 *)(lVar39 + 0x100) = *(undefined1 *)(lVar39 + 0x102);
          break;
        }
        *(undefined1 *)(lVar39 + 0x103) = 0;
        *(undefined1 *)(puVar38 + 7) = 1;
        FUN_108204de8(param_1,puVar38);
        lVar14 = param_1[0x1f];
        (*(code *)param_1[0x1e])(lVar14,0,puVar38[4],puVar38[3],puVar38[5]);
        if ((int)lVar14 == 0) {
          FUN_108204eb0(param_1,puVar38,0x15b0);
          *(undefined1 *)(puVar38 + 7) = 0;
          return (long *)0x15;
        }
        FUN_108204eb0(param_1,puVar38,0x15b4);
        *(undefined1 *)(puVar38 + 7) = 0;
        cVar7 = *(char *)(lVar39 + 0x102);
        if (*(char *)(lVar39 + 0x103) != '\0') {
          uVar42 = 0;
          uVar41 = 0;
          goto joined_r0x0001082021d4;
        }
        *(char *)(lVar39 + 0x100) = cVar7;
      }
      else {
        plVar26 = param_1;
        FUN_108204abc(param_1,puVar38,uVar8 == 0x3c);
        if ((int)plVar26 != 0) {
          return plVar26;
        }
      }
      goto code_r0x00010820235c;
    }
code_r0x000108201c88:
    if (puVar38 != (undefined8 *)0x0) goto code_r0x000108202148;
    *(undefined1 *)(lVar39 + 0x100) = *(undefined1 *)(lVar39 + 0x102);
    if ((uVar8 != 0x3c) || (pcVar20 = (code *)param_1[0x20], pcVar20 == (code *)0x0)) break;
    lVar14 = param_1[1];
    iVar10 = 1;
    goto code_r0x0001082022e4;
  case 0xffffffff:
    uVar8 = 0x11;
    if (iVar36 != 0xc) {
      uVar8 = 2;
    }
    uVar41 = 10;
    if (iVar36 != 0x1c) {
      uVar41 = uVar8;
    }
    return (long *)(ulong)uVar41;
  }
  goto LAB_1082022c0;
code_r0x000108201acc:
  pbVar30 = pbVar19;
  if ((pbVar25 != pbVar19) && (pbVar30 = pbVar25 + -1, pbVar25[-1] != 0x20)) {
    pbVar30 = pbVar25;
  }
  *pbVar30 = 0;
  param_1[0x52] = (long)pbVar19;
code_r0x000108201af0:
  param_1[0x68] = param_1[0x67];
  goto code_r0x00010820235c;
code_r0x000108201afc:
  pbVar30 = pbVar19;
  if ((pbVar25 != pbVar19) && (pbVar30 = pbVar25 + -1, pbVar25[-1] != 0x20)) {
    pbVar30 = pbVar25;
  }
  uVar42 = 0;
  *pbVar30 = 0;
  param_1[0x68] = param_1[0x67];
  param_1[0x4f] = (long)pbVar19;
  uVar41 = 0;
  if (*(char *)(lVar39 + 0x100) != '\0') {
code_r0x0001082010d8:
    pcVar44 = pcStack_80;
    uVar41 = uVar42;
    if (param_1[0x4c] != 0) {
      iVar36 = *(int *)(param_2 + 0x10);
      apcStack_70[0] = param_3 + iVar36;
      if (*(long *)(lVar39 + 0xb8) == 0) {
        iVar9 = iVar10 + 0xa0;
        FUN_108203a0c();
        if (iVar9 == 0) {
          return (long *)0x1;
        }
      }
      while (puVar38 = param_2,
            (*(code *)param_2[0xe])
                      (param_2,apcStack_70,(long)pcVar44 - (long)iVar36,lVar39 + 0xb8,
                       *(undefined8 *)(lVar39 + 0xb0)), 1 < (uint)puVar38) {
        uVar29 = lVar39 + 0xa0;
        FUN_108203a0c();
        if ((uVar29 & 1) == 0) {
          return (long *)0x1;
        }
      }
      if (*(long *)(lVar39 + 0xc0) != 0) {
        puVar18 = *(undefined1 **)(lVar39 + 0xb8);
        if (puVar18 == *(undefined1 **)(lVar39 + 0xb0)) {
          iVar10 = iVar10 + 0xa0;
          FUN_108203a0c();
          if (iVar10 == 0) {
            return (long *)0x1;
          }
          puVar18 = *(undefined1 **)(lVar39 + 0xb8);
        }
        *(undefined1 **)(lVar39 + 0xb8) = puVar18 + 1;
        *puVar18 = 0;
        pbVar19 = *(byte **)(lVar39 + 0xc0);
        pbVar25 = pbVar19;
        pbVar30 = pbVar19;
        if (pbVar19 != (byte *)0x0) {
          do {
            bVar31 = *pbVar30;
            if (bVar31 < 0xd) {
              if (bVar31 == 10) goto code_r0x000108201918;
              if (bVar31 == 0) goto code_r0x000108201a88;
code_r0x0001082018e4:
              *pbVar25 = bVar31;
              pbVar13 = pbVar25 + 1;
            }
            else {
              if (bVar31 != 0x20 && bVar31 != 0xd) goto code_r0x0001082018e4;
code_r0x000108201918:
              pbVar13 = pbVar19;
              if ((pbVar25 != pbVar19) && (pbVar13 = pbVar25, pbVar25[-1] != 0x20)) {
                bVar31 = 0x20;
                goto code_r0x0001082018e4;
              }
            }
            pbVar25 = pbVar13;
            pbVar30 = pbVar30 + 1;
          } while( true );
        }
      }
      return (long *)0x1;
    }
  }
joined_r0x00010820098c:
  if (uVar41 != 0) {
LAB_1082022c0:
    pcVar44 = pcStack_80;
    pcVar20 = (code *)param_1[0x16];
    if (pcVar20 != (code *)0x0) {
      if (*(char *)((long)param_2 + 0x84) == '\0') {
        plVar40 = param_1 + 0x46;
        plVar26 = param_1 + 0x47;
        apcStack_70[0] = param_3;
        if (param_2 != (undefined8 *)param_1[0x26]) {
          plVar40 = (long *)param_1[0x49];
          plVar26 = plVar40 + 1;
        }
        do {
          lStack_78 = param_1[0xd];
          puVar38 = param_2;
          (*(code *)param_2[0xe])(param_2,apcStack_70,pcVar44,&lStack_78,param_1[0xe]);
          *plVar26 = (long)apcStack_70[0];
          (*(code *)param_1[0x16])(param_1[1],param_1[0xd],(int)lStack_78 - (int)param_1[0xd]);
          *plVar40 = (long)apcStack_70[0];
        } while (1 < (uint)puVar38);
      }
      else {
        lVar14 = param_1[1];
        iVar10 = (int)pcStack_80 - (int)param_3;
        pcVar44 = param_3;
        apcStack_70[0] = param_3;
code_r0x0001082022e4:
        (*pcVar20)(lVar14,pcVar44,iVar10);
      }
    }
  }
code_r0x00010820235c:
  param_3 = pcStack_80;
  if ((int)param_1[0x73] == 2) {
    return (long *)0x23;
  }
  if ((int)param_1[0x73] == 3) {
    *param_7 = pcStack_80;
    return (long *)0x0;
  }
  param_5 = param_2;
  (*(code *)*param_2)(param_2,pcStack_80,param_4,&pcStack_80);
  *plStack_a0 = (long)param_3;
  *plVar16 = (long)pcStack_80;
  if ((int)param_5 < 1) goto LAB_108200430;
  goto LAB_108200488;
code_r0x000108201a88:
  pbVar30 = pbVar19;
  if ((pbVar25 != pbVar19) && (pbVar30 = pbVar25 + -1, pbVar25[-1] != 0x20)) {
    pbVar30 = pbVar25;
  }
  *pbVar30 = 0;
  *(byte **)(param_1[0x4c] + 0x28) = pbVar19;
  *(undefined8 *)(lVar39 + 0xc0) = *(undefined8 *)(lVar39 + 0xb8);
  if (uVar8 == 0xe) {
code_r0x000108201ac0:
    uVar41 = uVar42;
    if (param_1[0x24] != 0) goto code_r0x00010820235c;
  }
  goto joined_r0x00010820098c;
}



/* Entry: 108202ad4; end: 10820305b;  */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_108202ad4(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined1 *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  int iStack_74;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_60 = 0;
  lStack_58 = 0;
  lStack_70 = 0;
  lStack_68 = 0;
  iStack_74 = -1;
  uVar7 = param_1;
  func_0x000108202778(param_1,0xc,param_3,param_4,0x110b,0);
  if ((uVar7 & 1) == 0) {
    do {
      uVar7 = param_1;
      param_1 = *(ulong *)(uVar7 + 0x390);
    } while (param_1 != 0);
    if (*(long *)(uVar7 + 0x3c0) != 0) {
      _fprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f47f8b8);
    }
    return 0x2b;
  }
  pcVar2 = FUN_10820cbb8;
  if (*(char *)(param_1 + 0x1d8) != '\0') {
    pcVar2 = FUN_10820d0e8;
  }
  plVar13 = (long *)(param_1 + 0x230);
  uVar8 = param_2;
  (*pcVar2)(param_2,*(undefined8 *)(param_1 + 0x130),param_3,param_4,plVar13,&lStack_68,&lStack_70,
            &lStack_58,&lStack_60,&iStack_74);
  lVar18 = lStack_58;
  if ((int)uVar8 == 0) {
    uVar9 = 0x1e;
    if ((int)param_2 != 0) {
      uVar9 = 0x1f;
    }
    return (ulong)uVar9;
  }
  if ((((int)param_2 == 0) && (iStack_74 == 1)) &&
     (*(undefined1 *)(*(long *)(param_1 + 0x2b0) + 0x102) = 1, *(int *)(param_1 + 0x3a4) == 1)) {
    *(undefined4 *)(param_1 + 0x3a4) = 0;
  }
  if (*(long *)(param_1 + 0x128) == 0) {
    if (*(code **)(param_1 + 0xb0) == (code *)0x0) {
      lVar18 = *(long *)(param_1 + 0x1d0);
    }
    else {
      lVar18 = *(long *)(param_1 + 0x130);
      lStack_48 = param_3;
      if (*(char *)(lVar18 + 0x84) == '\0') {
        do {
          uStack_50 = *(undefined8 *)(param_1 + 0x68);
          lVar16 = lVar18;
          (**(code **)(lVar18 + 0x70))
                    (lVar18,&lStack_48,param_4,&uStack_50,*(undefined8 *)(param_1 + 0x70));
          *(long *)(param_1 + 0x238) = lStack_48;
          (**(code **)(param_1 + 0xb0))
                    (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x68),
                     (int)uStack_50 - (int)*(undefined8 *)(param_1 + 0x68));
          *(long *)(param_1 + 0x230) = lStack_48;
        } while (1 < (uint)lVar16);
      }
      else {
        (**(code **)(param_1 + 0xb0))
                  (*(undefined8 *)(param_1 + 8),param_3,(int)param_4 - (int)param_3);
      }
      lVar18 = *(long *)(param_1 + 0x1d0);
    }
    bVar3 = false;
    lVar16 = 0;
    lVar15 = lStack_58;
  }
  else {
    iVar6 = (int)param_1;
    if (lStack_58 == 0) {
      lVar16 = 0;
      lVar18 = lStack_70;
    }
    else {
      lVar15 = *(long *)(param_1 + 0x130);
      lVar16 = lVar15;
      (**(code **)(lVar15 + 0x38))(lVar15,lStack_58);
      lStack_48 = lVar18;
      if (*(long *)(param_1 + 0x368) == 0) {
        iVar4 = iVar6 + 0x350;
        FUN_108203a0c();
        if (iVar4 == 0) {
          return 1;
        }
      }
      while (lVar17 = lVar15,
            (**(code **)(lVar15 + 0x70))
                      (lVar15,&lStack_48,lVar18 + (int)lVar16,(undefined8 *)(param_1 + 0x368),
                       *(undefined8 *)(param_1 + 0x360)), 1 < (uint)lVar17) {
        uVar7 = param_1 + 0x350;
        FUN_108203a0c();
        if ((uVar7 & 1) == 0) {
          return 1;
        }
      }
      if (*(long *)(param_1 + 0x370) == 0) {
        return 1;
      }
      puVar10 = *(undefined1 **)(param_1 + 0x368);
      if (puVar10 == *(undefined1 **)(param_1 + 0x360)) {
        iVar4 = iVar6 + 0x350;
        FUN_108203a0c();
        if (iVar4 == 0) {
          return 1;
        }
        puVar10 = *(undefined1 **)(param_1 + 0x368);
      }
      *(undefined1 **)(param_1 + 0x368) = puVar10 + 1;
      *puVar10 = 0;
      lVar16 = *(long *)(param_1 + 0x370);
      if (lVar16 == 0) {
        return 1;
      }
      *(undefined8 *)(param_1 + 0x370) = *(undefined8 *)(param_1 + 0x368);
      lVar18 = lStack_70;
    }
    lStack_70 = lVar18;
    if (lStack_68 == 0) {
      lVar18 = 0;
    }
    else {
      lVar15 = *(long *)(param_1 + 0x130);
      iVar4 = *(int *)(lVar15 + 0x80);
      lStack_48 = lStack_68;
      if (*(long *)(param_1 + 0x368) == 0) {
        iVar5 = iVar6 + 0x350;
        FUN_108203a0c();
        if (iVar5 == 0) {
          return 1;
        }
      }
      while (lVar17 = lVar15,
            (**(code **)(lVar15 + 0x70))
                      (lVar15,&lStack_48,lVar18 - iVar4,(undefined8 *)(param_1 + 0x368),
                       *(undefined8 *)(param_1 + 0x360)), 1 < (uint)lVar17) {
        uVar7 = param_1 + 0x350;
        FUN_108203a0c();
        if ((uVar7 & 1) == 0) {
          return 1;
        }
      }
      if (*(long *)(param_1 + 0x370) == 0) {
        return 1;
      }
      puVar10 = *(undefined1 **)(param_1 + 0x368);
      if (puVar10 == *(undefined1 **)(param_1 + 0x360)) {
        iVar6 = iVar6 + 0x350;
        FUN_108203a0c();
        if (iVar6 == 0) {
          return 1;
        }
        puVar10 = *(undefined1 **)(param_1 + 0x368);
      }
      *(undefined1 **)(param_1 + 0x368) = puVar10 + 1;
      *puVar10 = 0;
      lVar18 = *(long *)(param_1 + 0x370);
      if (lVar18 == 0) {
        return 1;
      }
    }
    (**(code **)(param_1 + 0x128))(*(undefined8 *)(param_1 + 8),lVar18,lVar16,iStack_74);
    bVar3 = lVar18 != 0;
    lVar18 = *(long *)(param_1 + 0x1d0);
    lVar15 = lStack_58;
  }
  if (lVar18 == 0) {
    if (lStack_60 == 0) {
      if (lVar15 != 0) {
        lStack_58 = lVar15;
        if (lVar16 == 0) {
          lVar17 = *(long *)(param_1 + 0x130);
          lVar18 = lVar17;
          (**(code **)(lVar17 + 0x38))(lVar17,lVar15);
          lVar16 = param_1 + 0x350;
          FUN_10820305c(lVar16,lVar17,lVar15,lVar15 + (int)lVar18);
          if (lVar16 == 0) {
            return 1;
          }
        }
        uVar7 = param_1;
        func_0x000108200250(param_1,lVar16);
        plVar11 = *(long **)(param_1 + 0x350);
        if (*(long **)(param_1 + 0x358) != (long *)0x0) {
          plVar14 = *(long **)(param_1 + 0x358);
          plVar12 = plVar11;
          if (plVar11 == (long *)0x0) goto LAB_108203024;
          do {
            plVar11 = plVar12;
            plVar12 = (long *)*plVar11;
            *plVar11 = (long)plVar14;
            plVar14 = plVar11;
          } while (plVar12 != (long *)0x0);
        }
        *(long **)(param_1 + 0x358) = plVar11;
LAB_108203024:
        *(undefined8 *)(param_1 + 0x350) = 0;
        *(undefined8 *)(param_1 + 0x360) = 0;
        *(undefined8 *)(param_1 + 0x370) = 0;
        *(undefined8 *)(param_1 + 0x368) = 0;
        if ((int)uVar7 == 0x12) {
          *plVar13 = lStack_58;
          return uVar7;
        }
        return uVar7;
      }
    }
    else {
      if ((*(int *)(lStack_60 + 0x80) != *(int *)(*(long *)(param_1 + 0x130) + 0x80)) ||
         (*(int *)(lStack_60 + 0x80) == 2 && lStack_60 != *(long *)(param_1 + 0x130))) {
        *plVar13 = lVar15;
        return 0x13;
      }
      *(long *)(param_1 + 0x130) = lStack_60;
    }
  }
  bVar1 = false;
  if (lVar16 == 0) {
    bVar1 = (bool)(bVar3 ^ 1);
  }
  if (bVar1) {
    return 0;
  }
  plVar13 = *(long **)(param_1 + 0x350);
  if (*(long **)(param_1 + 0x358) != (long *)0x0) {
    plVar11 = *(long **)(param_1 + 0x358);
    plVar14 = plVar13;
    if (plVar13 == (long *)0x0) goto LAB_108202ff0;
    do {
      plVar13 = plVar14;
      plVar14 = (long *)*plVar13;
      *plVar13 = (long)plVar11;
      plVar11 = plVar13;
    } while (plVar14 != (long *)0x0);
  }
  *(long **)(param_1 + 0x358) = plVar13;
LAB_108202ff0:
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined8 *)(param_1 + 0x370) = 0;
  *(undefined8 *)(param_1 + 0x368) = 0;
  return 0;
}



/* Entry: 10820305c; end: 10820312b;  */

undefined8 FUN_10820305c(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined8 uStack_38;
  
  plVar4 = (long *)(param_1 + 0x18);
  uStack_38 = param_3;
  if ((*plVar4 != 0) || (uVar1 = param_1, FUN_108203a0c(), (int)uVar1 != 0)) {
    do {
      lVar2 = param_2;
      (**(code **)(param_2 + 0x70))
                (param_2,&uStack_38,param_4,plVar4,*(undefined8 *)(param_1 + 0x10));
      if ((uint)lVar2 < 2) {
        if (*(long *)(param_1 + 0x20) == 0) {
          return 0;
        }
        puVar3 = *(undefined1 **)(param_1 + 0x18);
        if (puVar3 == *(undefined1 **)(param_1 + 0x10)) {
          uVar1 = param_1;
          FUN_108203a0c();
          if ((int)uVar1 == 0) {
            return 0;
          }
          puVar3 = (undefined1 *)*plVar4;
        }
        *(undefined1 **)(param_1 + 0x18) = puVar3 + 1;
        *puVar3 = 0;
        return *(undefined8 *)(param_1 + 0x20);
      }
      uVar1 = param_1;
      FUN_108203a0c();
    } while ((uVar1 & 1) != 0);
  }
  return 0;
}



/* Entry: 10820312c; end: 10820349f;  */

undefined8 * FUN_10820312c(ulong param_1,long *param_2,char *param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  char cVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  char *pcVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  
  if (param_2[2] == 0) {
    *(undefined1 *)(param_2 + 1) = 6;
    param_2[2] = 0x40;
    puVar9 = (undefined8 *)0x200;
    (**(code **)param_2[4])();
    *param_2 = (long)puVar9;
    if (puVar9 == (undefined8 *)0x0) {
      param_2[2] = 0;
      return (undefined8 *)0x0;
    }
    puVar9[0x3d] = 0;
    puVar9[0x3c] = 0;
    puVar9[0x3f] = 0;
    puVar9[0x3e] = 0;
    puVar9[0x39] = 0;
    puVar9[0x38] = 0;
    puVar9[0x3b] = 0;
    puVar9[0x3a] = 0;
    puVar9[0x35] = 0;
    puVar9[0x34] = 0;
    puVar9[0x37] = 0;
    puVar9[0x36] = 0;
    puVar9[0x31] = 0;
    puVar9[0x30] = 0;
    puVar9[0x33] = 0;
    puVar9[0x32] = 0;
    puVar9[0x2d] = 0;
    puVar9[0x2c] = 0;
    puVar9[0x2f] = 0;
    puVar9[0x2e] = 0;
    puVar9[0x29] = 0;
    puVar9[0x28] = 0;
    puVar9[0x2b] = 0;
    puVar9[0x2a] = 0;
    puVar9[0x25] = 0;
    puVar9[0x24] = 0;
    puVar9[0x27] = 0;
    puVar9[0x26] = 0;
    puVar9[0x21] = 0;
    puVar9[0x20] = 0;
    puVar9[0x23] = 0;
    puVar9[0x22] = 0;
    puVar9[0x1d] = 0;
    puVar9[0x1c] = 0;
    puVar9[0x1f] = 0;
    puVar9[0x1e] = 0;
    puVar9[0x19] = 0;
    puVar9[0x18] = 0;
    puVar9[0x1b] = 0;
    puVar9[0x1a] = 0;
    puVar9[0x15] = 0;
    puVar9[0x14] = 0;
    puVar9[0x17] = 0;
    puVar9[0x16] = 0;
    puVar9[0x11] = 0;
    puVar9[0x10] = 0;
    puVar9[0x13] = 0;
    puVar9[0x12] = 0;
    puVar9[0xd] = 0;
    puVar9[0xc] = 0;
    puVar9[0xf] = 0;
    puVar9[0xe] = 0;
    puVar9[9] = 0;
    puVar9[8] = 0;
    puVar9[0xb] = 0;
    puVar9[10] = 0;
    puVar9[5] = 0;
    puVar9[4] = 0;
    puVar9[7] = 0;
    puVar9[6] = 0;
    puVar9[1] = 0;
    *puVar9 = 0;
    puVar9[3] = 0;
    puVar9[2] = 0;
    FUN_108205534(param_1,param_3);
    uVar15 = param_2[2] - 1U & param_1;
  }
  else {
    uVar5 = param_1;
    FUN_108205534(param_1,param_3);
    lVar10 = param_2[2];
    uVar15 = lVar10 - 1U & uVar5;
    lVar12 = *param_2;
    puVar9 = *(undefined8 **)(lVar12 + uVar15 * 8);
    if (puVar9 != (undefined8 *)0x0) {
      uVar13 = 0;
      do {
        while( true ) {
          pcVar14 = (char *)*puVar9;
          pcVar4 = param_3;
          cVar8 = *param_3;
          if (*param_3 == *pcVar14) {
            do {
              pcVar14 = pcVar14 + 1;
              if (cVar8 == '\0') {
                return puVar9;
              }
              cVar8 = pcVar4[1];
              pcVar4 = pcVar4 + 1;
            } while (cVar8 == *pcVar14);
          }
          if (uVar13 == 0) break;
          lVar3 = lVar10;
          if (uVar13 <= uVar15) {
            lVar3 = 0;
          }
          uVar15 = lVar3 + (uVar15 - uVar13);
          puVar9 = *(undefined8 **)(lVar12 + uVar15 * 8);
          if (puVar9 == (undefined8 *)0x0) goto LAB_108203220;
        }
        uVar13 = (uint)((uVar5 & -lVar10) >> ((ulong)(*(byte *)(param_2 + 1) - 1) & 0x3f)) &
                 (uint)(lVar10 - 1U >> 2) & 0xff | 1;
        lVar3 = lVar10;
        if (uVar13 <= uVar15) {
          lVar3 = 0;
        }
        uVar15 = lVar3 + (uVar15 - uVar13);
        puVar9 = *(undefined8 **)(lVar12 + uVar15 * 8);
      } while (puVar9 != (undefined8 *)0x0);
    }
LAB_108203220:
    if ((ulong)param_2[3] >> ((ulong)(*(byte *)(param_2 + 1) - 1) & 0x3f) != 0) {
      uVar13 = *(byte *)(param_2 + 1) + 1;
      uVar1 = uVar13 & 0xff;
      if (0x3f < uVar1) {
        return (undefined8 *)0x0;
      }
      if (0x3c < uVar1) {
        return (undefined8 *)0x0;
      }
      lVar10 = 8L << ((ulong)uVar13 & 0x3f);
      (**(code **)param_2[4])();
      if (lVar10 == 0) {
        return (undefined8 *)0x0;
      }
      lVar12 = 1L << ((ulong)uVar13 & 0x3f);
      uVar17 = lVar12 - 1;
      _bzero();
      uVar15 = param_2[2];
      if (uVar15 != 0) {
        uVar16 = 0;
        do {
          puVar9 = *(undefined8 **)(*param_2 + uVar16 * 8);
          if (puVar9 != (undefined8 *)0x0) {
            uVar7 = param_1;
            FUN_108205534(param_1,*puVar9);
            uVar15 = uVar7 & uVar17;
            if (*(long *)(lVar10 + uVar15 * 8) != 0) {
              uVar11 = 0;
              do {
                uVar2 = (uint)((uVar7 & -lVar12) >> ((ulong)(uVar1 - 1) & 0x3f)) &
                        (uint)(uVar17 >> 2) & 0xff | 1;
                if ((uint)uVar11 != 0) {
                  uVar2 = (uint)uVar11;
                }
                uVar11 = (ulong)uVar2;
                lVar3 = lVar12;
                if (uVar11 <= uVar15) {
                  lVar3 = 0;
                }
                uVar15 = lVar3 + (uVar15 - uVar11);
              } while (*(long *)(lVar10 + uVar15 * 8) != 0);
            }
            *(undefined8 *)(lVar10 + uVar15 * 8) = *(undefined8 *)(*param_2 + uVar16 * 8);
            uVar15 = param_2[2];
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar15);
      }
      (**(code **)(param_2[4] + 0x10))(*param_2);
      *param_2 = lVar10;
      *(char *)(param_2 + 1) = (char)uVar13;
      param_2[2] = lVar12;
      uVar15 = uVar17 & uVar5;
      if (*(long *)(lVar10 + uVar15 * 8) != 0) {
        uVar16 = 0;
        do {
          uVar13 = (uint)((uVar5 & -lVar12) >> ((ulong)(uVar1 - 1) & 0x3f)) & (uint)uVar17 >> 2 &
                   0xff | 1;
          if ((uint)uVar16 != 0) {
            uVar13 = (uint)uVar16;
          }
          uVar16 = (ulong)uVar13;
          lVar3 = lVar12;
          if (uVar16 <= uVar15) {
            lVar3 = 0;
          }
          uVar15 = lVar3 + (uVar15 - uVar16);
        } while (*(long *)(lVar10 + uVar15 * 8) != 0);
      }
    }
  }
  uVar6 = param_4;
  (**(code **)param_2[4])();
  *(undefined8 *)(*param_2 + uVar15 * 8) = uVar6;
  lVar10 = *(long *)(*param_2 + uVar15 * 8);
  if (lVar10 == 0) {
    return (undefined8 *)0x0;
  }
  _bzero(lVar10,param_4);
  lVar10 = *param_2;
  **(undefined8 **)(lVar10 + uVar15 * 8) = param_3;
  param_2[3] = param_2[3] + 1;
  return *(undefined8 **)(lVar10 + uVar15 * 8);
}



/* Entry: 1082034a0; end: 10820372b;  */

long FUN_1082034a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar1 = param_1;
  FUN_108205998(param_1,0,*(undefined8 *)(param_1 + 0x130),param_2,param_3,param_4,
                *(char *)(param_1 + 0x39c) == '\0',0);
  if ((int)lVar1 != 0) {
    return lVar1;
  }
  plVar7 = *(long **)(param_1 + 0x2c0);
  while( true ) {
    if (plVar7 == (long *)0x0) {
      return 0;
    }
    lVar1 = (long)*(int *)(plVar7 + 6) + 1;
    lVar2 = plVar7[8];
    lVar5 = lVar2 + lVar1;
    lVar3 = plVar7[1];
    if (lVar3 == lVar5) break;
    uVar4 = (ulong)*(int *)(plVar7 + 2);
    if (0x7fffffffU - lVar1 < uVar4) {
      return 1;
    }
    lVar6 = (long)(*(int *)(plVar7 + 2) + (int)lVar1);
    if (plVar7[9] - lVar2 < lVar6) {
      (**(code **)(param_1 + 0x20))(lVar2,lVar6);
      if (lVar2 == 0) {
        return 1;
      }
      if (plVar7[3] == plVar7[8]) {
        plVar7[3] = lVar2;
      }
      if (plVar7[4] != 0) {
        plVar7[4] = lVar2 + (plVar7[4] - plVar7[8]);
      }
      plVar7[8] = lVar2;
      plVar7[9] = lVar2 + lVar6;
      lVar5 = lVar2 + lVar1;
      lVar3 = plVar7[1];
      uVar4 = (ulong)*(int *)(plVar7 + 2);
    }
    _memcpy(lVar5,lVar3,uVar4);
    plVar7[1] = lVar5;
    plVar7 = (long *)*plVar7;
  }
  return 0;
}



/* Entry: 10820372c; end: 108203a0b;  */

void FUN_10820372c(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined1 *puVar6;
  long lVar7;
  char *pcVar8;
  char cVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_58;
  
  lVar11 = param_1[0x56];
  plVar10 = (long *)(lVar11 + 0xb8);
  puVar6 = (undefined1 *)*plVar10;
  iVar3 = (int)lVar11;
  if (puVar6 == *(undefined1 **)(lVar11 + 0xb0)) {
    iVar2 = iVar3 + 0xa0;
    FUN_108203a0c();
    if (iVar2 == 0) {
      return;
    }
    puVar6 = (undefined1 *)*plVar10;
    *plVar10 = (long)(puVar6 + 1);
    *puVar6 = 0;
    lVar7 = *plVar10;
  }
  else {
    *plVar10 = (long)(puVar6 + 1);
    *puVar6 = 0;
    lVar7 = *plVar10;
  }
  uStack_58 = param_3;
  if (lVar7 == 0) {
    iVar2 = iVar3 + 0xa0;
    FUN_108203a0c();
    if (iVar2 == 0) {
      return;
    }
  }
  while (lVar7 = param_2,
        (**(code **)(param_2 + 0x70))
                  (param_2,&uStack_58,param_4,plVar10,*(undefined8 *)(lVar11 + 0xb0)),
        1 < (uint)lVar7) {
    uVar4 = lVar11 + 0xa0;
    FUN_108203a0c();
    if ((uVar4 & 1) == 0) {
      return;
    }
  }
  if (*(long *)(lVar11 + 0xc0) == 0) {
    return;
  }
  puVar6 = *(undefined1 **)(lVar11 + 0xb8);
  if (puVar6 == *(undefined1 **)(lVar11 + 0xb0)) {
    iVar2 = iVar3 + 0xa0;
    FUN_108203a0c();
    if (iVar2 == 0) {
      return;
    }
    puVar6 = (undefined1 *)*plVar10;
    *(undefined1 **)(lVar11 + 0xb8) = puVar6 + 1;
    *puVar6 = 0;
    lVar7 = *(long *)(lVar11 + 0xc0);
  }
  else {
    *(undefined1 **)(lVar11 + 0xb8) = puVar6 + 1;
    *puVar6 = 0;
    lVar7 = *(long *)(lVar11 + 0xc0);
  }
  if (lVar7 == 0) {
    return;
  }
  pcVar1 = (char *)(lVar7 + 1);
  plVar5 = param_1;
  FUN_10820312c(param_1,lVar11 + 0x50,pcVar1,0x18);
  if (plVar5 == (long *)0x0) {
    return;
  }
  if ((char *)*plVar5 != pcVar1) {
    *(undefined8 *)(lVar11 + 0xb8) = *(undefined8 *)(lVar11 + 0xc0);
    return;
  }
  puVar6 = *(undefined1 **)(lVar11 + 0xb8);
  *(undefined1 **)(lVar11 + 0xc0) = puVar6;
  if ((char)param_1[0x3b] == '\0') {
    return;
  }
  cVar9 = *pcVar1;
  if ((((cVar9 == 'x') && (*(char *)(lVar7 + 2) == 'm')) && (*(char *)(lVar7 + 3) == 'l')) &&
     ((*(char *)(lVar7 + 4) == 'n' && (*(char *)(lVar7 + 5) == 's')))) {
    if (*(char *)(lVar7 + 6) == ':') {
      FUN_10820312c(param_1,lVar11 + 0x78,lVar7 + 7,0x10);
    }
    else {
      if (*(char *)(lVar7 + 6) != '\0') goto LAB_1082038e0;
      param_1 = (long *)(lVar11 + 0x130);
    }
    plVar5[1] = (long)param_1;
    *(undefined1 *)((long)plVar5 + 0x11) = 1;
    return;
  }
LAB_1082038e0:
  lVar12 = 0;
  if (cVar9 == '\0') {
    return;
  }
  do {
    if (cVar9 == ':') {
      if (lVar12 != 0) {
        lVar7 = 0;
        do {
          pcVar8 = *(char **)(lVar11 + 0xb8);
          if (pcVar8 == *(char **)(lVar11 + 0xb0)) {
            iVar2 = iVar3 + 0xa0;
            FUN_108203a0c();
            if (iVar2 == 0) {
              return;
            }
            pcVar8 = (char *)*plVar10;
          }
          cVar9 = pcVar1[lVar7];
          *plVar10 = (long)(pcVar8 + 1);
          *pcVar8 = cVar9;
          lVar7 = lVar7 + 1;
        } while (lVar12 != lVar7);
        puVar6 = (undefined1 *)*plVar10;
      }
      if (puVar6 == *(undefined1 **)(lVar11 + 0xb0)) {
        iVar3 = iVar3 + 0xa0;
        FUN_108203a0c();
        if (iVar3 == 0) {
          return;
        }
        puVar6 = (undefined1 *)*plVar10;
      }
      *(undefined1 **)(lVar11 + 0xb8) = puVar6 + 1;
      *puVar6 = 0;
      FUN_10820312c(param_1,lVar11 + 0x78,*(undefined8 *)(lVar11 + 0xc0),0x10);
      plVar5[1] = (long)param_1;
      if (param_1 != (long *)0x0) {
        if (*param_1 == *(long *)(lVar11 + 0xc0)) {
          *(undefined8 *)(lVar11 + 0xc0) = *(undefined8 *)(lVar11 + 0xb8);
        }
        else {
          *plVar10 = *(long *)(lVar11 + 0xc0);
        }
      }
      return;
    }
    cVar9 = *(char *)(lVar7 + 2 + lVar12);
    lVar12 = lVar12 + 1;
  } while (cVar9 != '\0');
  return;
}



/* Entry: 108203a0c; end: 108203c2f;  */

undefined8 FUN_108203a0c(long *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  
  plVar4 = (long *)param_1[1];
  lVar2 = param_1[4];
  if (plVar4 == (long *)0x0) {
    lVar5 = param_1[2];
  }
  else {
    if (lVar2 == 0) {
      lVar2 = *plVar4;
      *param_1 = (long)plVar4;
      param_1[1] = lVar2;
      *plVar4 = 0;
      lVar2 = (long)plVar4 + 0xc;
      param_1[4] = lVar2;
      param_1[2] = lVar2 + (int)plVar4[1];
      param_1[3] = lVar2;
      return 1;
    }
    lVar5 = param_1[2];
    if (lVar5 - lVar2 < (long)(int)plVar4[1]) {
      lVar2 = *plVar4;
      *plVar4 = *param_1;
      *param_1 = (long)plVar4;
      param_1[1] = lVar2;
      _memcpy((long)plVar4 + 0xc);
      lVar2 = *param_1 + 0xc;
      lVar5 = param_1[4];
      param_1[4] = lVar2;
      param_1[2] = lVar2 + *(int *)(*param_1 + 8);
      param_1[3] = lVar2 + (param_1[3] - lVar5);
      return 1;
    }
  }
  lVar3 = *param_1;
  uVar6 = (int)lVar5 - (int)lVar2;
  if (lVar3 == 0 || lVar2 != lVar3 + 0xc) {
    if (-1 < (int)uVar6) {
      if (uVar6 < 0x400) {
        uVar6 = 0x400;
      }
      else {
        uVar6 = uVar6 * 2;
        if ((int)uVar6 < 0) {
          return 0;
        }
      }
      uVar1 = uVar6 + 0xc & ((int)(uVar6 + 0xc) >> 0x1f ^ 0xffffffffU);
      plVar4 = (long *)(ulong)uVar1;
      if (uVar1 != 0) {
        (**(code **)param_1[5])();
        if (plVar4 == (long *)0x0) {
          return 0;
        }
        *(uint *)(plVar4 + 1) = uVar6;
        *plVar4 = *param_1;
        *param_1 = (long)plVar4;
        lVar2 = param_1[3];
        lVar5 = lVar2 - param_1[4];
        lVar3 = lVar2;
        if (lVar5 != 0) {
          _memcpy((long)plVar4 + 0xc,param_1[4],lVar5);
          lVar2 = param_1[4];
          lVar3 = param_1[3];
        }
        lVar5 = (long)plVar4 + 0xc;
        param_1[3] = lVar5 + (lVar3 - lVar2);
        param_1[4] = lVar5;
        param_1[2] = lVar5 + (ulong)uVar6;
        return 1;
      }
    }
  }
  else {
    uVar6 = uVar6 * 2;
    if (-1 < (int)uVar6) {
      uVar1 = uVar6 + 0xc & ((int)(uVar6 + 0xc) >> 0x1f ^ 0xffffffffU);
      if (uVar6 != 0 && uVar1 != 0) {
        lVar5 = param_1[3];
        (**(code **)(param_1[5] + 8))(lVar3,uVar1);
        if (lVar3 != 0) {
          *param_1 = lVar3;
          *(uint *)(lVar3 + 8) = uVar6;
          lVar3 = lVar3 + 0xc;
          param_1[3] = lVar3 + (lVar5 - lVar2);
          param_1[4] = lVar3;
          param_1[2] = lVar3 + (ulong)uVar6;
          return 1;
        }
      }
      return 0;
    }
  }
  return 0;
}



/* Entry: 108203c30; end: 108204887;  */

void FUN_108203c30(ulong param_1,long param_2,long param_3,undefined8 param_4,ulong param_5)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  code *pcVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  char cVar17;
  uint uVar18;
  long lVar19;
  long *plVar20;
  bool bVar21;
  int iVar22;
  undefined8 *puVar23;
  bool bVar24;
  char *pcVar25;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  long lStack_70;
  long lStack_68;
  
  lVar19 = *(long *)(param_1 + 0x2b0);
  plVar20 = (long *)(lVar19 + 0xd0);
  lVar9 = *plVar20;
  uVar2 = *(undefined4 *)(param_1 + 0x218);
  *(undefined4 *)(param_1 + 0x218) = 1;
  if ((lVar9 == 0) && (plVar6 = plVar20, FUN_108203a0c(), (int)plVar6 == 0)) {
    return;
  }
  puVar3 = PTR____stderrp_11034bdc8;
  plVar6 = (long *)(param_1 + 0x338);
LAB_108203c98:
  do {
    while( true ) {
      lVar14 = param_2;
      lStack_70 = param_3;
      (**(code **)(param_2 + 0x28))(param_2,param_3,param_4,&lStack_70);
      uVar15 = param_1;
      func_0x000108202778(param_1,lVar14,param_3,lStack_70,0x1845,param_5);
      lVar9 = lStack_70;
      uVar13 = param_1;
      if ((uVar15 & 1) == 0) goto LAB_108204480;
      iVar22 = (int)lVar14;
      if (8 < iVar22) break;
      if (iVar22 < 0) {
        if (iVar22 != -3) {
          if (iVar22 != -4) {
            if (iVar22 == -1) {
              if (param_2 == *(long *)(param_1 + 0x130)) {
                *(long *)(param_1 + 0x230) = param_3;
              }
            }
            else {
LAB_10820455c:
              if (param_2 == *(long *)(param_1 + 0x130)) {
                *(long *)(param_1 + 0x230) = param_3;
              }
            }
          }
          goto LAB_1082045ec;
        }
        lStack_70 = param_3 + *(int *)(param_2 + 0x80);
        puVar10 = *(undefined1 **)(lVar19 + 0xe8);
        if (*(undefined1 **)(lVar19 + 0xe0) == puVar10) {
LAB_108203e00:
          plVar7 = plVar20;
          FUN_108203a0c();
          if ((int)plVar7 == 0) goto LAB_1082045ec;
          puVar10 = *(undefined1 **)(lVar19 + 0xe8);
        }
      }
      else {
        if (iVar22 == 6) goto LAB_108203d90;
        if (iVar22 != 7) {
          if (iVar22 != 0) goto LAB_10820455c;
          if (param_2 == *(long *)(param_1 + 0x130)) {
            *(long *)(param_1 + 0x230) = lStack_70;
          }
          goto LAB_1082045ec;
        }
        puVar10 = *(undefined1 **)(lVar19 + 0xe8);
        if (*(undefined1 **)(lVar19 + 0xe0) == puVar10) goto LAB_108203e00;
      }
      *(undefined1 **)(lVar19 + 0xe8) = puVar10 + 1;
      *puVar10 = 10;
      param_3 = lStack_70;
    }
    if (iVar22 == 9) {
LAB_108203d90:
      lStack_68 = param_3;
      if ((*(long *)(lVar19 + 0xe8) == 0) && (plVar7 = plVar20, FUN_108203a0c(), (int)plVar7 == 0))
      goto LAB_1082045ec;
      while (lVar14 = param_2,
            (**(code **)(param_2 + 0x70))
                      (param_2,&lStack_68,lVar9,lVar19 + 0xe8,*(undefined8 *)(lVar19 + 0xe0)),
            1 < (uint)lVar14) {
        plVar7 = plVar20;
        FUN_108203a0c();
        if (((ulong)plVar7 & 1) == 0) goto LAB_1082045ec;
      }
      param_3 = lStack_70;
      if (*(long *)(lVar19 + 0xf0) == 0) goto LAB_1082045ec;
      goto LAB_108203c98;
    }
    if (iVar22 != 10) {
      if (iVar22 != 0x1c) goto LAB_10820455c;
      if ((*(char *)(param_1 + 0x3a0) == '\0') && (param_2 == *(long *)(param_1 + 0x130))) {
        *(long *)(param_1 + 0x230) = param_3;
        goto LAB_1082045ec;
      }
      iVar22 = *(int *)(param_2 + 0x80);
      lStack_68 = param_3 + iVar22;
      if (*plVar6 == 0) {
        iVar4 = (int)param_1 + 800;
        FUN_108203a0c();
        if (iVar4 == 0) goto LAB_1082045ec;
      }
      while (lVar14 = param_2,
            (**(code **)(param_2 + 0x70))
                      (param_2,&lStack_68,lVar9 - iVar22,plVar6,*(undefined8 *)(param_1 + 0x330)),
            1 < (uint)lVar14) {
        uVar15 = param_1 + 800;
        FUN_108203a0c();
        if ((uVar15 & 1) == 0) goto LAB_1082045ec;
      }
      if (*(long *)(param_1 + 0x340) == 0) goto LAB_1082045ec;
      puVar10 = *(undefined1 **)(param_1 + 0x338);
      if (puVar10 == *(undefined1 **)(param_1 + 0x330)) {
        iVar22 = (int)param_1 + 800;
        FUN_108203a0c();
        if (iVar22 == 0) goto LAB_1082045ec;
        puVar10 = (undefined1 *)*plVar6;
      }
      *(undefined1 **)(param_1 + 0x338) = puVar10 + 1;
      *puVar10 = 0;
      pcVar25 = *(char **)(param_1 + 0x340);
      if (pcVar25 == (char *)0x0) goto LAB_1082045ec;
      if (*(long *)(lVar19 + 0x118) == 0) {
LAB_108204520:
        *(undefined8 *)(param_1 + 0x338) = *(undefined8 *)(param_1 + 0x340);
        *(undefined1 *)(lVar19 + 0x100) = *(undefined1 *)(lVar19 + 0x102);
        goto LAB_1082045ec;
      }
      FUN_108205534(param_1,pcVar25);
      lVar9 = *(long *)(lVar19 + 0x118);
      uVar15 = lVar9 - 1U & uVar13;
      lVar14 = *(long *)(lVar19 + 0x108);
      puVar23 = *(undefined8 **)(lVar14 + uVar15 * 8);
      if (puVar23 == (undefined8 *)0x0) goto LAB_108204520;
      uVar5 = 0;
      while (*pcVar25 != *(char *)*puVar23) {
LAB_108203f14:
        if (uVar5 == 0) {
          uVar5 = (uint)((uVar13 & -lVar9) >> ((ulong)(*(byte *)(lVar19 + 0x110) - 1) & 0x3f)) &
                  (uint)(lVar9 - 1U >> 2) & 0xff | 1;
          lVar16 = lVar9;
          if (uVar5 <= uVar15) {
            lVar16 = 0;
          }
          uVar15 = lVar16 + (uVar15 - uVar5);
          puVar23 = *(undefined8 **)(lVar14 + uVar15 * 8);
        }
        else {
          lVar16 = lVar9;
          if (uVar5 <= uVar15) {
            lVar16 = 0;
          }
          uVar15 = lVar16 + (uVar15 - uVar5);
          puVar23 = *(undefined8 **)(lVar14 + uVar15 * 8);
        }
        if (puVar23 == (undefined8 *)0x0) goto LAB_108204520;
      }
      lVar16 = 1;
      cVar17 = *pcVar25;
      while (cVar17 != '\0') {
        cVar17 = pcVar25[lVar16];
        pcVar1 = (char *)*puVar23 + lVar16;
        lVar16 = lVar16 + 1;
        if (cVar17 != *pcVar1) goto LAB_108203f14;
      }
      *(undefined8 *)(param_1 + 0x338) = *(undefined8 *)(param_1 + 0x340);
      if ((*(char *)(puVar23 + 7) != '\0') || (puVar23 == *(undefined8 **)(param_1 + 0x260))) {
        if (param_2 == *(long *)(param_1 + 0x130)) {
          *(long *)(param_1 + 0x230) = param_3;
        }
        goto LAB_1082045ec;
      }
      lVar9 = puVar23[3];
      if (lVar9 == 0) {
        *(undefined1 *)(puVar23 + 7) = 1;
        uVar15 = param_1;
        do {
          uVar13 = uVar15;
          uVar15 = *(ulong *)(uVar13 + 0x390);
        } while (*(ulong *)(uVar13 + 0x390) != 0);
        *(int *)(uVar13 + 0x3d8) = *(int *)(uVar13 + 0x3d8) + 1;
        uVar5 = *(int *)(uVar13 + 0x3dc) + 1;
        *(uint *)(uVar13 + 0x3dc) = uVar5;
        if (*(uint *)(uVar13 + 0x3e0) < uVar5) {
          *(uint *)(uVar13 + 0x3e0) = *(uint *)(uVar13 + 0x3e0) + 1;
        }
        if (*(long *)(uVar13 + 1000) != 0) {
          _fprintf(*(undefined8 *)puVar3,&UNK_10f47f98f);
        }
        uVar15 = param_1;
        FUN_108203c30(param_1,*(undefined8 *)(param_1 + 0x1c8),puVar23[1],
                      puVar23[1] + (long)*(int *)(puVar23 + 2),1);
        uVar13 = param_1;
        do {
          uVar11 = uVar13;
          uVar13 = *(ulong *)(uVar11 + 0x390);
        } while (*(ulong *)(uVar11 + 0x390) != 0);
        if (*(long *)(uVar11 + 1000) != 0) {
          _fprintf(*(undefined8 *)puVar3,&UNK_10f47f98f);
        }
        *(int *)(uVar11 + 0x3dc) = *(int *)(uVar11 + 0x3dc) + -1;
        *(undefined1 *)(puVar23 + 7) = 0;
        param_3 = lStack_70;
        if ((int)uVar15 != 0) goto LAB_1082045ec;
      }
      else {
        pcVar12 = *(code **)(param_1 + 0xf0);
        if (pcVar12 == (code *)0x0) goto LAB_108204244;
        *(undefined1 *)(lVar19 + 0x103) = 0;
        *(undefined1 *)(puVar23 + 7) = 1;
        uVar15 = param_1;
        do {
          uVar13 = uVar15;
          uVar15 = *(ulong *)(uVar13 + 0x390);
        } while (*(ulong *)(uVar13 + 0x390) != 0);
        *(int *)(uVar13 + 0x3d8) = *(int *)(uVar13 + 0x3d8) + 1;
        uVar5 = *(int *)(uVar13 + 0x3dc) + 1;
        *(uint *)(uVar13 + 0x3dc) = uVar5;
        if (*(uint *)(uVar13 + 0x3e0) < uVar5) {
          *(uint *)(uVar13 + 0x3e0) = *(uint *)(uVar13 + 0x3e0) + 1;
        }
        if (*(long *)(uVar13 + 1000) != 0) {
          _fprintf(*(undefined8 *)puVar3,&UNK_10f47f98f);
          pcVar12 = *(code **)(param_1 + 0xf0);
          lVar9 = puVar23[3];
        }
        uVar8 = *(undefined8 *)(param_1 + 0xf8);
        (*pcVar12)(uVar8,0,puVar23[4],lVar9,puVar23[5]);
        uVar15 = param_1;
        if ((int)uVar8 == 0) {
          FUN_108204eb0(param_1,puVar23,0x1873);
          *(undefined1 *)(puVar23 + 7) = 0;
          goto LAB_1082045ec;
        }
        do {
          uVar13 = uVar15;
          uVar15 = *(ulong *)(uVar13 + 0x390);
        } while (*(ulong *)(uVar13 + 0x390) != 0);
        if (*(long *)(uVar13 + 1000) != 0) {
          _fprintf(*(undefined8 *)puVar3,&UNK_10f47f98f);
        }
        *(int *)(uVar13 + 0x3dc) = *(int *)(uVar13 + 0x3dc) + -1;
        *(undefined1 *)(puVar23 + 7) = 0;
        param_3 = lStack_70;
        if (*(char *)(lVar19 + 0x103) == '\0') {
LAB_108204244:
          *(undefined1 *)(lVar19 + 0x100) = *(undefined1 *)(lVar19 + 0x102);
          param_3 = lStack_70;
        }
      }
      goto LAB_108203c98;
    }
    lVar9 = param_2;
    (**(code **)(param_2 + 0x50))(param_2,param_3);
    uVar5 = (uint)lVar9;
    if ((int)uVar5 < 0) {
      if (param_2 == *(long *)(param_1 + 0x130)) {
        *(long *)(param_1 + 0x230) = param_3;
      }
      goto LAB_1082045ec;
    }
    param_3 = lStack_70;
    if (uVar5 < 0x80) {
      bVar24 = false;
      bVar21 = false;
      puVar10 = *(undefined1 **)(lVar19 + 0xe8);
      uVar18 = uVar5;
      if (*(undefined1 **)(lVar19 + 0xe0) == puVar10) goto LAB_108203fc8;
LAB_108203e60:
      *(undefined1 **)(lVar19 + 0xe8) = puVar10 + 1;
      *puVar10 = (char)uVar18;
    }
    else {
      if (uVar5 < 0x800) {
        bVar21 = false;
        uVar18 = uVar5 >> 6 | 0xffffffc0;
        uStack_84 = uVar5 & 0x3f | 0xffffff80;
        bVar24 = true;
        puVar10 = *(undefined1 **)(lVar19 + 0xe8);
        if (*(undefined1 **)(lVar19 + 0xe0) == puVar10) goto LAB_108203fc8;
        goto LAB_108203e60;
      }
      if (uVar5 >> 0x10 != 0) {
        if (uVar5 >> 0x10 < 0x11) {
          bVar24 = false;
          bVar21 = false;
          uVar18 = uVar5 >> 0x12 | 0xfffffff0;
          uStack_84 = uVar5 >> 0xc & 0x3f | 0xffffff80;
          uStack_88 = uVar5 >> 6 & 0x3f | 0xffffff80;
          uStack_8c = uVar5 & 0x3f | 0xffffff80;
          puVar10 = *(undefined1 **)(lVar19 + 0xe8);
          if (*(undefined1 **)(lVar19 + 0xe0) == puVar10) goto LAB_108203fc8;
          goto LAB_108203e60;
        }
        goto LAB_108203c98;
      }
      bVar24 = false;
      uVar18 = uVar5 >> 0xc | 0xffffffe0;
      uStack_84 = uVar5 >> 6 & 0x3f | 0xffffff80;
      uStack_88 = uVar5 & 0x3f | 0xffffff80;
      bVar21 = true;
      puVar10 = *(undefined1 **)(lVar19 + 0xe8);
      if (*(undefined1 **)(lVar19 + 0xe0) != puVar10) goto LAB_108203e60;
LAB_108203fc8:
      plVar7 = plVar20;
      FUN_108203a0c();
      if ((int)plVar7 == 0) goto LAB_1082045ec;
      puVar10 = *(undefined1 **)(lVar19 + 0xe8);
      *(undefined1 **)(lVar19 + 0xe8) = puVar10 + 1;
      *puVar10 = (char)uVar18;
      param_3 = lStack_70;
    }
    if (uVar5 < 0x80) {
      param_5 = param_5 & 0xffffffff;
    }
    else {
      puVar10 = *(undefined1 **)(lVar19 + 0xe8);
      param_5 = param_5 & 0xffffffff;
      lStack_70 = param_3;
      if (*(undefined1 **)(lVar19 + 0xe0) == puVar10) {
        plVar7 = plVar20;
        FUN_108203a0c();
        if ((int)plVar7 == 0) goto LAB_1082045ec;
        puVar10 = *(undefined1 **)(lVar19 + 0xe8);
      }
      *(undefined1 **)(lVar19 + 0xe8) = puVar10 + 1;
      *puVar10 = (char)uStack_84;
      param_3 = lStack_70;
      if (!bVar24) {
        puVar10 = *(undefined1 **)(lVar19 + 0xe8);
        if (*(undefined1 **)(lVar19 + 0xe0) == puVar10) {
          plVar7 = plVar20;
          FUN_108203a0c();
          if ((int)plVar7 == 0) goto LAB_1082045ec;
          puVar10 = *(undefined1 **)(lVar19 + 0xe8);
        }
        *(undefined1 **)(lVar19 + 0xe8) = puVar10 + 1;
        *puVar10 = (char)uStack_88;
        param_3 = lStack_70;
        if (!bVar21) {
          puVar10 = *(undefined1 **)(lVar19 + 0xe8);
          if (*(undefined1 **)(lVar19 + 0xe0) == puVar10) {
            plVar7 = plVar20;
            FUN_108203a0c();
            if ((int)plVar7 == 0) goto LAB_1082045ec;
            puVar10 = *(undefined1 **)(lVar19 + 0xe8);
          }
          *(undefined1 **)(lVar19 + 0xe8) = puVar10 + 1;
          *puVar10 = (char)uStack_8c;
          param_3 = lStack_70;
        }
      }
    }
  } while( true );
LAB_108204480:
  do {
    uVar15 = uVar13;
    uVar13 = *(ulong *)(uVar15 + 0x390);
  } while (uVar13 != 0);
  if (*(long *)(uVar15 + 0x3c0) != 0) {
    _fprintf(*(undefined8 *)puVar3,&UNK_10f47f8b8);
  }
LAB_1082045ec:
  *(undefined4 *)(param_1 + 0x218) = uVar2;
  return;
}



/* Entry: 108204888; end: 108204977;  */

long FUN_108204888(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  lStack_40 = param_2;
  func_0x000108204610(param_1,*(undefined8 *)(param_1 + 0x130),&lStack_40,param_3,param_4,
                      *(char *)(param_1 + 0x39c) == '\0');
  lVar1 = lStack_40;
  if ((int)lVar2 != 0) {
    return lVar2;
  }
  if (lStack_40 != 0) {
    *(code **)(param_1 + 0x220) = FUN_1082001cc;
    lStack_38 = lStack_40;
    puVar3 = *(undefined8 **)(param_1 + 0x130);
    (*(code *)*puVar3)(puVar3,lStack_40,param_3,&lStack_38);
    FUN_108200368(param_1,*(undefined8 *)(param_1 + 0x130),lVar1,param_3,puVar3,lStack_38,param_4,
                  *(char *)(param_1 + 0x39c) == '\0',1,0);
    return param_1;
  }
  return 0;
}



/* Entry: 108204978; end: 108204abb;  */

uint FUN_108204978(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined4 *puVar4;
  int iVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x2b0);
  if (*(long *)(lVar6 + 0x160) == 0) {
    puVar4 = (undefined4 *)((ulong)*(uint *)(param_1 + 0x388) << 2);
    (**(code **)(param_1 + 0x18))();
    *(undefined4 **)(lVar6 + 0x160) = puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      return 0xffffffff;
    }
    *puVar4 = 0;
    uVar1 = *(uint *)(lVar6 + 0x158);
    uVar2 = *(uint *)(lVar6 + 0x154);
    lVar3 = *(long *)(lVar6 + 0x148);
    if (uVar2 <= uVar1) goto LAB_108204a04;
  }
  else {
    uVar1 = *(uint *)(lVar6 + 0x158);
    uVar2 = *(uint *)(lVar6 + 0x154);
    lVar3 = *(long *)(lVar6 + 0x148);
    if (uVar2 <= uVar1) {
LAB_108204a04:
      if (lVar3 == 0) {
        lVar3 = 0x400;
        (**(code **)(param_1 + 0x18))();
        if (lVar3 == 0) {
          return 0xffffffff;
        }
        iVar5 = 0x20;
      }
      else {
        if (((int)uVar2 < 0) || ((**(code **)(param_1 + 0x20))(lVar3,(ulong)uVar2 << 6), lVar3 == 0)
           ) {
          return 0xffffffff;
        }
        iVar5 = *(int *)(lVar6 + 0x154) << 1;
      }
      *(int *)(lVar6 + 0x154) = iVar5;
      *(long *)(lVar6 + 0x148) = lVar3;
      uVar1 = *(uint *)(lVar6 + 0x158);
      *(uint *)(lVar6 + 0x158) = uVar1 + 1;
      iVar5 = *(int *)(lVar6 + 0x15c);
      goto joined_r0x000108204a58;
    }
  }
  *(uint *)(lVar6 + 0x158) = uVar1 + 1;
  iVar5 = *(int *)(lVar6 + 0x15c);
joined_r0x000108204a58:
  if (iVar5 != 0) {
    lVar6 = lVar3 + (long)*(int *)(*(long *)(lVar6 + 0x160) + (long)iVar5 * 4 + -4) * 0x20;
    if (*(int *)(lVar6 + 0x14) != 0) {
      *(uint *)(lVar3 + (long)*(int *)(lVar6 + 0x14) * 0x20 + 0x1c) = uVar1;
    }
    if (*(int *)(lVar6 + 0x18) == 0) {
      *(uint *)(lVar6 + 0x10) = uVar1;
    }
    *(uint *)(lVar6 + 0x14) = uVar1;
    *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1;
    lVar3 = lVar3 + (long)(int)uVar1 * 0x20;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    return uVar1;
  }
  lVar3 = lVar3 + (long)(int)uVar1 * 0x20;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  return uVar1;
}



/* Entry: 108204abc; end: 108204de7;  */

long FUN_108204abc(long param_1,long param_2,undefined1 param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined4 in_stack_ffffffffffffff60;
  long lStack_48;
  
  puVar7 = *(undefined8 **)(param_1 + 0x250);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x28;
    (**(code **)(param_1 + 0x18))();
    if (puVar7 == (undefined8 *)0x0) {
      return 1;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x250) = puVar7[2];
  }
  *(undefined1 *)(param_2 + 0x38) = 1;
  lVar2 = param_1;
  do {
    lVar4 = lVar2;
    lVar2 = *(long *)(lVar4 + 0x390);
  } while (*(long *)(lVar4 + 0x390) != 0);
  *(int *)(lVar4 + 0x3d8) = *(int *)(lVar4 + 0x3d8) + 1;
  uVar1 = *(int *)(lVar4 + 0x3dc) + 1;
  *(uint *)(lVar4 + 0x3dc) = uVar1;
  if (*(uint *)(lVar4 + 0x3e0) < uVar1) {
    *(uint *)(lVar4 + 0x3e0) = *(uint *)(lVar4 + 0x3e0) + 1;
  }
  if (*(long *)(lVar4 + 1000) != 0) {
    _fprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f47f98f);
    in_stack_ffffffffffffff60 = (undefined4)lVar4;
  }
  *(undefined4 *)(param_2 + 0x14) = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x248);
  *(undefined8 **)(param_1 + 0x248) = puVar7;
  puVar7[2] = uVar6;
  puVar7[3] = param_2;
  *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(param_1 + 0x25c);
  *(undefined1 *)((long)puVar7 + 0x24) = param_3;
  *puVar7 = 0;
  puVar7[1] = 0;
  lVar8 = *(long *)(param_2 + 8);
  lVar2 = lVar8 + *(int *)(param_2 + 0x10);
  puVar5 = *(undefined8 **)(param_1 + 0x1c8);
  lVar4 = param_1;
  lStack_48 = lVar8;
  if (*(char *)(param_2 + 0x39) == '\0') {
    FUN_108205998();
    iVar3 = (int)lVar4;
  }
  else {
    (*(code *)*puVar5)(puVar5,lVar8,lVar2,&lStack_48);
    FUN_108200368(param_1,*(undefined8 *)(param_1 + 0x1c8),lVar8,lVar2,puVar5,lStack_48,&lStack_48,0
                  ,CONCAT44(1,in_stack_ffffffffffffff60) & 0xffffffffffffff00);
    iVar3 = (int)lVar4;
  }
  if (iVar3 != 0) {
    return lVar4;
  }
  if ((lVar2 != lStack_48) && (*(int *)(param_1 + 0x398) == 3)) {
    *(int *)(param_2 + 0x14) = (int)lStack_48 - (int)lVar8;
    *(code **)(param_1 + 0x220) = FUN_108209c44;
    return 0;
  }
  lVar2 = param_1;
  if (*(long *)(*(long *)(param_1 + 0x248) + 0x18) == param_2) {
    do {
      lVar4 = lVar2;
      lVar2 = *(long *)(lVar4 + 0x390);
    } while (*(long *)(lVar4 + 0x390) != 0);
    if (*(long *)(lVar4 + 1000) != 0) {
      _fprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f47f98f);
    }
    *(int *)(lVar4 + 0x3dc) = *(int *)(lVar4 + 0x3dc) + -1;
    *(undefined1 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x248) = puVar7[2];
    puVar7[2] = *(undefined8 *)(param_1 + 0x250);
    *(undefined8 **)(param_1 + 0x250) = puVar7;
    return 0;
  }
  return 0;
}



/* Entry: 108204de8; end: 108204eaf;  */

void FUN_108204de8(long param_1)

{
  uint uVar1;
  long lVar2;
  
  do {
    lVar2 = param_1;
    param_1 = *(long *)(lVar2 + 0x390);
  } while (*(long *)(lVar2 + 0x390) != 0);
  *(int *)(lVar2 + 0x3d8) = *(int *)(lVar2 + 0x3d8) + 1;
  uVar1 = *(int *)(lVar2 + 0x3dc) + 1;
  *(uint *)(lVar2 + 0x3dc) = uVar1;
  if (*(uint *)(lVar2 + 0x3e0) < uVar1) {
    *(uint *)(lVar2 + 0x3e0) = *(uint *)(lVar2 + 0x3e0) + 1;
  }
  if (*(long *)(lVar2 + 1000) != 0) {
    _fprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f47f98f);
  }
  return;
}



/* Entry: 108204eb0; end: 108204f67;  */

void FUN_108204eb0(long param_1)

{
  long lVar1;
  
  do {
    lVar1 = param_1;
    param_1 = *(long *)(lVar1 + 0x390);
  } while (*(long *)(lVar1 + 0x390) != 0);
  if (*(long *)(lVar1 + 1000) != 0) {
    _fprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f47f98f);
  }
  *(int *)(lVar1 + 0x3dc) = *(int *)(lVar1 + 0x3dc) + -1;
  return;
}



/* Entry: 108204f68; end: 10820528b;  */

void FUN_108204f68(long param_1,long param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  char *pcVar7;
  undefined1 *puVar8;
  char *pcVar9;
  long *plVar10;
  long *plVar11;
  char *pcVar12;
  char cVar13;
  long lVar14;
  long *plVar15;
  undefined8 uStack_60;
  long lStack_58;
  
  if (*(long *)(param_1 + 0x90) == 0) {
    if (*(code **)(param_1 + 0xb0) == (code *)0x0) {
      return;
    }
    lStack_58 = param_3;
    if (*(char *)(param_2 + 0x84) != '\0') {
      (**(code **)(param_1 + 0xb0))
                (*(undefined8 *)(param_1 + 8),param_3,(int)param_4 - (int)param_3);
      return;
    }
    if (param_2 == *(long *)(param_1 + 0x130)) {
      plVar15 = (long *)(param_1 + 0x230);
      plVar10 = (long *)(param_1 + 0x238);
    }
    else {
      plVar15 = *(long **)(param_1 + 0x248);
      plVar10 = plVar15 + 1;
    }
    do {
      uStack_60 = *(undefined8 *)(param_1 + 0x68);
      lVar14 = param_2;
      (**(code **)(param_2 + 0x70))
                (param_2,&lStack_58,param_4,&uStack_60,*(undefined8 *)(param_1 + 0x70));
      *plVar10 = lStack_58;
      (**(code **)(param_1 + 0xb0))
                (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x68),
                 (int)uStack_60 - (int)*(undefined8 *)(param_1 + 0x68));
      *plVar15 = lStack_58;
    } while (1 < (uint)lVar14);
    return;
  }
  param_3 = param_3 + (long)*(int *)(param_2 + 0x80) * 2;
  lVar14 = param_2;
  (**(code **)(param_2 + 0x38))(param_2,param_3);
  puVar1 = (undefined8 *)(param_1 + 800);
  lStack_58 = param_3;
  if ((*(long *)(param_1 + 0x338) == 0) && (puVar4 = puVar1, FUN_108203a0c(), (int)puVar4 == 0)) {
    return;
  }
  param_3 = param_3 + (int)lVar14;
  puVar4 = (undefined8 *)(param_1 + 0x338);
  puVar2 = (undefined8 *)(param_1 + 0x330);
  while (lVar14 = param_2, (**(code **)(param_2 + 0x70))(param_2,&lStack_58,param_3,puVar4,*puVar2),
        1 < (uint)lVar14) {
    puVar5 = puVar1;
    FUN_108203a0c();
    if (((ulong)puVar5 & 1) == 0) {
      return;
    }
  }
  if (*(long *)(param_1 + 0x340) == 0) {
    return;
  }
  puVar8 = (undefined1 *)*puVar4;
  if (puVar8 == (undefined1 *)*puVar2) {
    puVar5 = puVar1;
    FUN_108203a0c();
    if ((int)puVar5 == 0) {
      return;
    }
    puVar8 = (undefined1 *)*puVar4;
    *(undefined1 **)(param_1 + 0x338) = puVar8 + 1;
    *puVar8 = 0;
    lVar14 = *(long *)(param_1 + 0x340);
  }
  else {
    *(undefined1 **)(param_1 + 0x338) = puVar8 + 1;
    *puVar8 = 0;
    lVar14 = *(long *)(param_1 + 0x340);
  }
  if (lVar14 == 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_1 + 0x338);
  lVar6 = param_2;
  (**(code **)(param_2 + 0x40))(param_2,param_3);
  iVar3 = *(int *)(param_2 + 0x80);
  lStack_58 = lVar6;
  if ((*(long *)(param_1 + 0x338) == 0) && (puVar5 = puVar1, FUN_108203a0c(), (int)puVar5 == 0)) {
    return;
  }
  while (lVar6 = param_2,
        (**(code **)(param_2 + 0x70))(param_2,&lStack_58,param_4 + (long)iVar3 * -2,puVar4,*puVar2),
        1 < (uint)lVar6) {
    puVar5 = puVar1;
    FUN_108203a0c();
    if (((ulong)puVar5 & 1) == 0) {
      return;
    }
  }
  if (*(long *)(param_1 + 0x340) == 0) {
    return;
  }
  puVar8 = (undefined1 *)*puVar4;
  if (puVar8 == (undefined1 *)*puVar2) {
    puVar5 = puVar1;
    FUN_108203a0c();
    if ((int)puVar5 == 0) {
      return;
    }
    puVar8 = (undefined1 *)*puVar4;
  }
  *(undefined1 **)(param_1 + 0x338) = puVar8 + 1;
  *puVar8 = 0;
  pcVar7 = *(char **)(param_1 + 0x340);
  if (pcVar7 == (char *)0x0) {
    return;
  }
  cVar13 = *pcVar7;
  while( true ) {
    if (cVar13 == '\0') goto LAB_108205238;
    if (cVar13 == '\r') break;
    pcVar7 = pcVar7 + 1;
    cVar13 = *pcVar7;
  }
  cVar13 = '\r';
  pcVar9 = pcVar7;
  do {
    pcVar12 = pcVar9;
    if (cVar13 == '\r') {
      *pcVar12 = '\n';
      pcVar9 = pcVar7 + 1;
      if (*pcVar9 == '\n') {
        pcVar9 = pcVar7 + 2;
      }
      cVar13 = *pcVar9;
      pcVar7 = pcVar9;
    }
    else {
      *pcVar12 = cVar13;
      cVar13 = pcVar7[1];
      pcVar7 = pcVar7 + 1;
    }
    pcVar9 = pcVar12 + 1;
  } while (cVar13 != '\0');
  pcVar12[1] = '\0';
LAB_108205238:
  (**(code **)(param_1 + 0x90))(*(undefined8 *)(param_1 + 8),lVar14);
  plVar10 = *(long **)(param_1 + 800);
  if (*(long **)(param_1 + 0x328) != (long *)0x0) {
    plVar15 = *(long **)(param_1 + 0x328);
    plVar11 = plVar10;
    if (plVar10 == (long *)0x0) goto LAB_108205278;
    do {
      plVar10 = plVar11;
      plVar11 = (long *)*plVar10;
      *plVar10 = (long)plVar15;
      plVar15 = plVar10;
    } while (plVar11 != (long *)0x0);
  }
  *(long **)(param_1 + 0x328) = plVar10;
LAB_108205278:
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *puVar2 = 0;
  return;
}



/* Entry: 10820528c; end: 108205533;  */

undefined8 * FUN_10820528c(long param_1,long param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  char *pcVar7;
  undefined1 *puVar8;
  long *plVar9;
  char *pcVar10;
  long *plVar11;
  long *plVar12;
  char *pcVar13;
  char cVar14;
  undefined8 uStack_50;
  long lStack_48;
  
  if (*(long *)(param_1 + 0x98) == 0) {
    if (*(code **)(param_1 + 0xb0) != (code *)0x0) {
      lStack_48 = param_3;
      if (*(char *)(param_2 + 0x84) == '\0') {
        if (param_2 == *(long *)(param_1 + 0x130)) {
          plVar11 = (long *)(param_1 + 0x230);
          plVar9 = (long *)(param_1 + 0x238);
        }
        else {
          plVar11 = *(long **)(param_1 + 0x248);
          plVar9 = plVar11 + 1;
        }
        do {
          uStack_50 = *(undefined8 *)(param_1 + 0x68);
          lVar6 = param_2;
          (**(code **)(param_2 + 0x70))
                    (param_2,&lStack_48,param_4,&uStack_50,*(undefined8 *)(param_1 + 0x70));
          *plVar9 = lStack_48;
          (**(code **)(param_1 + 0xb0))
                    (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x68),
                     (int)uStack_50 - (int)*(undefined8 *)(param_1 + 0x68));
          *plVar11 = lStack_48;
        } while (1 < (uint)lVar6);
      }
      else {
        (**(code **)(param_1 + 0xb0))
                  (*(undefined8 *)(param_1 + 8),param_3,(int)param_4 - (int)param_3);
      }
    }
    return (undefined8 *)0x1;
  }
  puVar1 = (undefined8 *)(param_1 + 800);
  iVar3 = *(int *)(param_2 + 0x80);
  lStack_48 = param_3 + (long)iVar3 * 4;
  if ((*(long *)(param_1 + 0x338) != 0) || (puVar4 = puVar1, FUN_108203a0c(), (int)puVar4 != 0)) {
    puVar4 = (undefined8 *)(param_1 + 0x338);
    puVar2 = (undefined8 *)(param_1 + 0x330);
    do {
      lVar6 = param_2;
      (**(code **)(param_2 + 0x70))(param_2,&lStack_48,param_4 + (long)iVar3 * -3,puVar4,*puVar2);
      if ((uint)lVar6 < 2) {
        if (*(long *)(param_1 + 0x340) != 0) {
          puVar8 = (undefined1 *)*puVar4;
          if (puVar8 == (undefined1 *)*puVar2) {
            puVar5 = puVar1;
            FUN_108203a0c();
            if ((int)puVar5 == 0) {
              return puVar5;
            }
            puVar8 = (undefined1 *)*puVar4;
            *(undefined1 **)(param_1 + 0x338) = puVar8 + 1;
            *puVar8 = 0;
            pcVar7 = *(char **)(param_1 + 0x340);
          }
          else {
            *(undefined1 **)(param_1 + 0x338) = puVar8 + 1;
            *puVar8 = 0;
            pcVar7 = *(char **)(param_1 + 0x340);
          }
          if (pcVar7 != (char *)0x0) {
            cVar14 = *pcVar7;
            goto joined_r0x000108205398;
          }
        }
        return (undefined8 *)0x0;
      }
      puVar5 = puVar1;
      FUN_108203a0c();
    } while (((ulong)puVar5 & 1) != 0);
  }
  return (undefined8 *)0x0;
joined_r0x000108205398:
  if (cVar14 == '\0') {
    (**(code **)(param_1 + 0x98))(*(undefined8 *)(param_1 + 8));
    plVar9 = *(long **)(param_1 + 0x328);
    plVar11 = *(long **)(param_1 + 800);
  }
  else {
    if (cVar14 != '\r') goto code_r0x0001082053a4;
    cVar14 = '\r';
    pcVar10 = pcVar7;
    do {
      pcVar13 = pcVar10;
      if (cVar14 == '\r') {
        *pcVar13 = '\n';
        pcVar10 = pcVar7 + 1;
        if (*pcVar10 == '\n') {
          pcVar10 = pcVar7 + 2;
        }
        cVar14 = *pcVar10;
        pcVar7 = pcVar10;
      }
      else {
        *pcVar13 = cVar14;
        pcVar7 = pcVar7 + 1;
        cVar14 = *pcVar7;
      }
      pcVar10 = pcVar13 + 1;
    } while (cVar14 != '\0');
    pcVar13[1] = '\0';
    (**(code **)(param_1 + 0x98))(*(undefined8 *)(param_1 + 8));
    plVar9 = *(long **)(param_1 + 0x328);
    plVar11 = *(long **)(param_1 + 800);
  }
  goto joined_r0x0001082053c0;
code_r0x0001082053a4:
  pcVar7 = pcVar7 + 1;
  cVar14 = *pcVar7;
  goto joined_r0x000108205398;
joined_r0x0001082053c0:
  if (plVar9 != (long *)0x0) {
    plVar12 = plVar11;
    if (plVar11 == (long *)0x0) goto LAB_108205494;
    do {
      plVar11 = plVar12;
      plVar12 = (long *)*plVar11;
      *plVar11 = (long)plVar9;
      plVar9 = plVar11;
    } while (plVar12 != (long *)0x0);
  }
  *(long **)(param_1 + 0x328) = plVar11;
LAB_108205494:
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *puVar2 = 0;
  return (undefined8 *)0x1;
}



/* Entry: 108205534; end: 1082056f7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_108205534(long param_1,char *param_2,long param_3)

{
  ulong *puVar1;
  ulong uVar2;
  char cVar3;
  char *******pppppppcVar4;
  char *******pppppppcVar5;
  bool bVar6;
  ulong *puVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uStack_70;
  ulong uStack_68;
  char *pcStack_60;
  ulong uStack_58;
  char ******ppppppcStack_50;
  char *******pppppppcStack_48;
  long lStack_40;
  long lStack_38;
  
  puVar7 = &uStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    lVar13 = param_1;
    param_1 = *(long *)(lVar13 + 0x390);
  } while (param_1 != 0);
  uStack_58 = *(ulong *)(lVar13 + 0x3a8);
  uStack_68 = uStack_58 ^ 0x646f72616e646f6d;
  uStack_70 = 0x736f6d6570736575;
  uStack_58 = uStack_58 ^ 0x7465646279746573;
  pcStack_60 = (char *)0x6c7967656e657261;
  lStack_40 = 0;
  pcVar8 = param_2;
  pppppppcStack_48 = &ppppppcStack_50;
  if (*param_2 == '\0') {
    pcVar9 = (char *)0x0;
  }
  else {
    pcVar9 = param_2 + 1;
    _strlen();
    pcVar9 = pcVar9 + 1;
  }
  pcVar11 = param_2;
  do {
    if (param_2 + (long)pcVar9 <= pcVar11) break;
    lVar13 = (long)(param_2 + (long)pcVar9) - (long)pcVar11;
    pcVar10 = pcVar11;
    do {
      pppppppcVar4 = pppppppcStack_48;
      pcVar11 = pcVar10;
      if (&pppppppcStack_48 <= pppppppcStack_48) break;
      pppppppcVar5 = (char *******)((long)pppppppcStack_48 + 1);
      *(char *)pppppppcStack_48 = *pcVar10;
      pppppppcStack_48 = pppppppcVar5;
      lVar13 = lVar13 + -1;
      pcVar10 = pcVar10 + 1;
      pcVar11 = param_2 + (long)pcVar9;
    } while (lVar13 != 0);
    if (pppppppcStack_48 < &pppppppcStack_48) break;
    uStack_58 = (ulong)ppppppcStack_50 ^ uStack_58;
    uStack_70 = uStack_70 + uStack_68;
    uVar14 = uStack_70 ^ (uStack_68 >> 0x33 | uStack_68 << 0xd);
    uVar12 = (ulong)(pcStack_60 + uStack_58) ^ (uStack_58 >> 0x30 | uStack_58 << 0x10);
    uVar2 = uVar12 + (uStack_70 >> 0x20 | uStack_70 << 0x20);
    uVar12 = uVar2 ^ (uVar12 >> 0x2b | uVar12 << 0x15);
    pcVar8 = pcStack_60 + uStack_58 + uVar14;
    uVar14 = (ulong)pcVar8 ^ (uVar14 >> 0x2f | uVar14 << 0x11);
    uVar2 = uVar2 + uVar14;
    uVar14 = uVar2 ^ (uVar14 >> 0x33 | uVar14 << 0xd);
    uStack_68 = uVar12 + ((ulong)pcVar8 >> 0x20 | (long)pcVar8 << 0x20);
    uVar12 = uStack_68 ^ (uVar12 >> 0x30 | uVar12 << 0x10);
    uStack_70 = uVar12 + (uVar2 >> 0x20 | uVar2 << 0x20);
    uStack_58 = uStack_70 ^ (uVar12 >> 0x2b | uVar12 << 0x15);
    uStack_68 = uStack_68 + uVar14;
    pcVar8 = (char *)(uStack_68 >> 0x20 | uStack_68 << 0x20);
    uStack_68 = uStack_68 ^ (uVar14 >> 0x2f | uVar14 << 0x11);
    uStack_70 = uStack_70 ^ (ulong)ppppppcStack_50;
    lStack_40 = lStack_40 + 8;
    pcStack_60 = pcVar8;
    pppppppcStack_48 = &ppppppcStack_50;
  } while (&pppppppcStack_48 <= pppppppcVar4);
  func_0x0001082057d8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = puVar7 + 5;
  pcVar9 = pcVar8;
  do {
    if (pcVar9 < pcVar8 + param_3) {
      lVar13 = (long)(pcVar8 + param_3) - (long)pcVar9;
      pcVar11 = pcVar9;
      do {
        puVar16 = (ulong *)*puVar1;
        bVar6 = puVar1 <= puVar16;
        pcVar9 = pcVar11;
        if (bVar6) break;
        cVar3 = *pcVar11;
        *puVar1 = (long)puVar16 + 1;
        *(char *)puVar16 = cVar3;
        lVar13 = lVar13 + -1;
        pcVar9 = pcVar8 + param_3;
        pcVar11 = pcVar11 + 1;
      } while (lVar13 != 0);
    }
    else {
      bVar6 = false;
    }
    if ((ulong *)*puVar1 < puVar1) {
      return;
    }
    uVar12 = puVar7[1];
    uVar14 = puVar7[4] ^ puVar7[3];
    uVar2 = *puVar7 + uVar12;
    uVar17 = uVar2 ^ (uVar12 >> 0x33 | uVar12 << 0xd);
    uVar15 = puVar7[2] + uVar14 ^ (uVar14 >> 0x30 | uVar14 << 0x10);
    uVar12 = uVar15 + (uVar2 >> 0x20 | uVar2 << 0x20);
    uVar15 = uVar12 ^ (uVar15 >> 0x2b | uVar15 << 0x15);
    uVar2 = puVar7[2] + uVar14 + uVar17;
    uVar14 = uVar2 ^ (uVar17 >> 0x2f | uVar17 << 0x11);
    uVar12 = uVar12 + uVar14;
    uVar17 = uVar12 ^ (uVar14 >> 0x33 | uVar14 << 0xd);
    uVar14 = uVar15 + (uVar2 >> 0x20 | uVar2 << 0x20);
    uVar15 = uVar14 ^ (uVar15 >> 0x30 | uVar15 << 0x10);
    uVar2 = uVar15 + (uVar12 >> 0x20 | uVar12 << 0x20);
    uVar14 = uVar14 + uVar17;
    puVar7[2] = uVar14 >> 0x20 | uVar14 << 0x20;
    puVar7[3] = uVar2 ^ (uVar15 >> 0x2b | uVar15 << 0x15);
    *puVar7 = uVar2 ^ puVar7[4];
    puVar7[1] = uVar14 ^ (uVar17 >> 0x2f | uVar17 << 0x11);
    puVar7[5] = (ulong)(puVar7 + 4);
    puVar7[6] = puVar7[6] + 8;
    if (!bVar6) {
      return;
    }
  } while( true );
}



/* Entry: 1082056f8; end: 108205997;  */

void FUN_1082056f8(ulong *param_1,undefined1 *param_2,long param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  
  puVar1 = param_1 + 5;
  puVar7 = param_2;
  do {
    if (puVar7 < param_2 + param_3) {
      lVar8 = (long)(param_2 + param_3) - (long)puVar7;
      puVar6 = puVar7;
      do {
        puVar11 = (ulong *)*puVar1;
        bVar5 = puVar1 <= puVar11;
        puVar7 = puVar6;
        if (bVar5) break;
        uVar4 = *puVar6;
        *puVar1 = (long)puVar11 + 1;
        *(undefined1 *)puVar11 = uVar4;
        lVar8 = lVar8 + -1;
        puVar7 = param_2 + param_3;
        puVar6 = puVar6 + 1;
      } while (lVar8 != 0);
    }
    else {
      bVar5 = false;
    }
    if ((ulong *)*puVar1 < puVar1) {
      return;
    }
    uVar3 = param_1[1];
    uVar9 = param_1[4] ^ param_1[3];
    uVar2 = *param_1 + uVar3;
    uVar12 = uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
    uVar10 = param_1[2] + uVar9 ^ (uVar9 >> 0x30 | uVar9 << 0x10);
    uVar3 = uVar10 + (uVar2 >> 0x20 | uVar2 << 0x20);
    uVar10 = uVar3 ^ (uVar10 >> 0x2b | uVar10 << 0x15);
    uVar2 = param_1[2] + uVar9 + uVar12;
    uVar9 = uVar2 ^ (uVar12 >> 0x2f | uVar12 << 0x11);
    uVar3 = uVar3 + uVar9;
    uVar12 = uVar3 ^ (uVar9 >> 0x33 | uVar9 << 0xd);
    uVar9 = uVar10 + (uVar2 >> 0x20 | uVar2 << 0x20);
    uVar10 = uVar9 ^ (uVar10 >> 0x30 | uVar10 << 0x10);
    uVar2 = uVar10 + (uVar3 >> 0x20 | uVar3 << 0x20);
    uVar9 = uVar9 + uVar12;
    param_1[2] = uVar9 >> 0x20 | uVar9 << 0x20;
    param_1[3] = uVar2 ^ (uVar10 >> 0x2b | uVar10 << 0x15);
    *param_1 = uVar2 ^ param_1[4];
    param_1[1] = uVar9 ^ (uVar12 >> 0x2f | uVar12 << 0x11);
    param_1[5] = (ulong)(param_1 + 4);
    param_1[6] = param_1[6] + 8;
    if (!bVar5) {
      return;
    }
  } while( true );
}



/* Entry: 108205998; end: 108206e5f;  */

ulong FUN_108205998(ulong param_1,int param_2,ulong param_3,undefined8 *param_4,undefined8 *param_5,
                   long *param_6,int param_7,undefined4 param_8)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char *pcVar12;
  code *pcVar13;
  undefined1 *puVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  char *pcVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  char *pcVar23;
  ulong uVar24;
  long *plVar25;
  long *plVar26;
  undefined8 *puVar27;
  long lVar28;
  undefined4 uVar29;
  int iVar30;
  undefined8 *puVar31;
  long *plVar32;
  undefined8 uStack_b8;
  long *plStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 *apuStack_70 [2];
  
  plVar21 = *(long **)(param_1 + 0x2b0);
  if (param_3 == *(ulong *)(param_1 + 0x130)) {
    plVar26 = (long *)(param_1 + 0x230);
    plVar18 = (long *)(param_1 + 0x238);
  }
  else {
    plVar26 = *(long **)(param_1 + 0x248);
    plVar18 = plVar26 + 1;
  }
  plVar20 = (long *)(param_1 + 0x230);
  *plVar26 = (long)param_4;
  plVar25 = (long *)(param_1 + 0x238);
  puVar1 = (undefined8 *)(param_1 + 800);
  plVar2 = (long *)(param_1 + 0x338);
  puVar3 = (undefined8 *)(param_1 + 0x330);
  puStack_80 = param_4;
  do {
    puStack_88 = puStack_80;
    uVar24 = param_3;
    (**(code **)(param_3 + 8))(param_3,puStack_80,param_5,&puStack_88);
    iVar6 = (int)uVar24;
    uVar9 = param_1;
    if (iVar6 == -3 || iVar6 == -5) {
      puVar31 = param_5;
      if (param_7 != 0) {
        puVar31 = puStack_80;
      }
      func_0x000108202778(param_1,uVar24,puStack_80,puVar31,0xb20,param_8);
      puVar27 = puStack_88;
      puVar31 = puStack_80;
    }
    else {
      func_0x000108202778(param_1,uVar24,puStack_80,puStack_88,0xb20,param_8);
      puVar27 = puStack_88;
      puVar31 = puStack_80;
    }
    puStack_88 = puVar27;
    puStack_80 = puVar31;
    if ((uVar9 & 1) == 0) {
      do {
        uVar24 = param_1;
        param_1 = *(ulong *)(uVar24 + 0x390);
      } while (param_1 != 0);
      if (*(long *)(uVar24 + 0x3c0) == 0) {
        uVar24 = 0x2b;
      }
      else {
        _fprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f47f8b8);
        uVar24 = 0x2b;
      }
LAB_108206a68:
      return uVar24;
    }
    *plVar18 = (long)puVar27;
    iVar30 = (int)puVar27;
    iVar8 = (int)puVar31;
    uVar24 = 0x11;
    uStack_b8._1_7_ = (undefined7)((ulong)uStack_b8 >> 8);
    switch(iVar6) {
    case 0:
      *plVar26 = (long)puVar27;
      return 4;
    case 1:
    case 2:
      puVar31 = *(undefined8 **)(param_1 + 0x2c8);
      if (puVar31 == (undefined8 *)0x0) {
        puVar31 = (undefined8 *)0x58;
        (**(code **)(param_1 + 0x18))();
        if (puVar31 == (undefined8 *)0x0) {
          return 1;
        }
        lVar15 = 0x20;
        (**(code **)(param_1 + 0x18))();
        puVar31[8] = lVar15;
        if (lVar15 == 0) {
          (**(code **)(param_1 + 0x28))(puVar31);
          return 1;
        }
        puVar31[9] = lVar15 + 0x20;
      }
      else {
        *(undefined8 *)(param_1 + 0x2c8) = *puVar31;
      }
      puVar31[10] = 0;
      *puVar31 = *(undefined8 *)(param_1 + 0x2c0);
      *(undefined8 **)(param_1 + 0x2c0) = puVar31;
      puVar31[4] = 0;
      puVar31[5] = 0;
      puVar31[1] = (long)puStack_80 + (long)*(int *)(param_3 + 0x80);
      uVar24 = param_3;
      (**(code **)(param_3 + 0x38))();
      *(int *)(puVar31 + 2) = (int)uVar24;
      *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x25c) + 1;
      uStack_b8 = (undefined8 *)puVar31[1];
      puVar27 = (undefined8 *)((long)uStack_b8 + (long)(int)uVar24);
      uStack_78 = (undefined1 *)puVar31[8];
      uVar24 = param_3;
      (**(code **)(param_3 + 0x70))(param_3,&uStack_b8,puVar27,&uStack_78,puVar31[9] + -1);
      lVar15 = puVar31[8];
      lVar17 = (long)uStack_78 - lVar15;
      uVar29 = (undefined4)lVar17;
      if ((uStack_b8 < puVar27) && ((int)uVar24 != 1)) {
        do {
          lVar28 = (long)((*(int *)(puVar31 + 9) - (int)lVar15) * 2);
          (**(code **)(param_1 + 0x20))(lVar15,lVar28);
          if (lVar15 == 0) {
            return 1;
          }
          lVar28 = lVar15 + lVar28;
          puVar31[8] = lVar15;
          puVar31[9] = lVar28;
          uStack_78 = (undefined1 *)(lVar15 + (int)lVar17);
          uVar24 = param_3;
          (**(code **)(param_3 + 0x70))(param_3,&uStack_b8,puVar27,&uStack_78,lVar28 + -1);
          lVar15 = puVar31[8];
          lVar17 = (long)uStack_78 - lVar15;
          uVar29 = (undefined4)lVar17;
        } while (uStack_b8 < puVar27 && (int)uVar24 != 1);
      }
      *(undefined4 *)(puVar31 + 6) = uVar29;
      puVar31[3] = lVar15;
      *uStack_78 = 0;
      uVar24 = param_1;
      func_0x0001082072c4(param_1,param_3,puStack_80,puVar31 + 3,puVar31 + 10,param_8);
      puVar27 = puStack_88;
      if ((int)uVar24 != 0) {
        return uVar24;
      }
      if (*(code **)(param_1 + 0x78) == (code *)0x0) {
        if (*(code **)(param_1 + 0xb0) != (code *)0x0) {
          uStack_b8 = puStack_80;
          if (*(char *)(param_3 + 0x84) == '\0') {
            plVar22 = plVar20;
            plVar32 = plVar25;
            if (param_3 != *(ulong *)(param_1 + 0x130)) {
              plVar22 = *(long **)(param_1 + 0x248);
              plVar32 = plVar22 + 1;
            }
            do {
              apuStack_70[0] = *(undefined8 **)(param_1 + 0x68);
              uVar24 = param_3;
              (**(code **)(param_3 + 0x70))
                        (param_3,&uStack_b8,puVar27,apuStack_70,*(undefined8 *)(param_1 + 0x70));
              *plVar32 = (long)uStack_b8;
              (**(code **)(param_1 + 0xb0))
                        (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x68),
                         (int)apuStack_70[0] - (int)*(undefined8 *)(param_1 + 0x68));
              *plVar22 = (long)uStack_b8;
            } while (1 < (uint)uVar24);
          }
          else {
            (**(code **)(param_1 + 0xb0))
                      (*(undefined8 *)(param_1 + 8),puStack_80,(int)puStack_88 - (int)puStack_80);
          }
        }
      }
      else {
        (**(code **)(param_1 + 0x78))
                  (*(undefined8 *)(param_1 + 8),puVar31[3],*(undefined8 *)(param_1 + 0x2f0));
      }
      plVar32 = *(long **)(param_1 + 800);
      if (*(long **)(param_1 + 0x328) == (long *)0x0) {
code_r0x0001082065a0:
        *(long **)(param_1 + 0x328) = plVar32;
      }
      else {
        plVar22 = *(long **)(param_1 + 0x328);
        plVar16 = plVar32;
        if (plVar32 != (long *)0x0) {
          do {
            plVar32 = plVar16;
            plVar16 = (long *)*plVar32;
            *plVar32 = (long)plVar22;
            plVar22 = plVar32;
          } while (plVar16 != (long *)0x0);
          goto code_r0x0001082065a0;
        }
      }
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x338) = 0;
      *(undefined8 *)(param_1 + 0x340) = 0;
      *puVar3 = 0;
      break;
    case 3:
    case 4:
      puVar31 = (undefined8 *)((long)puVar31 + (long)*(int *)(param_3 + 0x80));
      plStack_90 = (long *)0x0;
      uVar24 = param_3;
      (**(code **)(param_3 + 0x38))(param_3,puVar31);
      apuStack_70[0] = puVar31;
      if ((*plVar2 == 0) && (puVar27 = puVar1, FUN_108203a0c(), (int)puVar27 == 0)) {
        return 1;
      }
      while (uVar9 = param_3,
            (**(code **)(param_3 + 0x70))
                      (param_3,apuStack_70,(long)puVar31 + (long)(int)uVar24,plVar2,*puVar3),
            1 < (uint)uVar9) {
        puVar27 = puVar1;
        FUN_108203a0c();
        if (((ulong)puVar27 & 1) == 0) {
          return 1;
        }
      }
      if (*(long *)(param_1 + 0x340) == 0) {
        return 1;
      }
      puVar14 = (undefined1 *)*plVar2;
      if (puVar14 == (undefined1 *)*puVar3) {
        puVar31 = puVar1;
        FUN_108203a0c();
        if ((int)puVar31 == 0) {
          return 1;
        }
        puVar14 = (undefined1 *)*plVar2;
      }
      *(undefined1 **)(param_1 + 0x338) = puVar14 + 1;
      *puVar14 = 0;
      uStack_b8 = *(undefined8 **)(param_1 + 0x340);
      if (uStack_b8 == (undefined8 *)0x0) {
        return 1;
      }
      *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_1 + 0x338);
      uVar24 = param_1;
      func_0x0001082072c4(param_1,param_3,puStack_80,&uStack_b8,&plStack_90,2);
      puVar27 = puStack_88;
      puVar31 = uStack_b8;
      if ((int)uVar24 != 0) {
        if (plStack_90 == (long *)0x0) {
          return uVar24;
        }
        pcVar13 = *(code **)(param_1 + 0xe0);
        plVar21 = plStack_90;
        if (pcVar13 != (code *)0x0) {
          while( true ) {
            if (pcVar13 != (code *)0x0) {
              (*pcVar13)(*(undefined8 *)(param_1 + 8),*(undefined8 *)*plVar21);
            }
            plVar18 = (long *)plVar21[1];
            plVar21[1] = *(long *)(param_1 + 0x2d8);
            *(long **)(param_1 + 0x2d8) = plVar21;
            *(long *)(*plVar21 + 8) = plVar21[2];
            if (plVar18 == (long *)0x0) break;
            pcVar13 = *(code **)(param_1 + 0xe0);
            plVar21 = plVar18;
          }
          return uVar24;
        }
        plVar21 = *(long **)(param_1 + 0x2d8);
        do {
          plVar18 = plStack_90;
          plStack_90 = (long *)plVar18[1];
          plVar18[1] = (long)plVar21;
          *(long *)(*plVar18 + 8) = plVar18[2];
          plVar21 = plVar18;
        } while (plStack_90 != (long *)0x0);
        *(long **)(param_1 + 0x2d8) = plVar18;
        return uVar24;
      }
      *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_1 + 0x338);
      if (*(code **)(param_1 + 0x78) == (code *)0x0) {
        pcVar13 = *(code **)(param_1 + 0x80);
        if (pcVar13 != (code *)0x0) goto code_r0x0001082062a4;
        if (*(code **)(param_1 + 0xb0) != (code *)0x0) {
          apuStack_70[0] = puStack_80;
          if (*(char *)(param_3 + 0x84) == '\0') {
            plVar22 = plVar20;
            plVar32 = plVar25;
            if (param_3 != *(ulong *)(param_1 + 0x130)) {
              plVar22 = *(long **)(param_1 + 0x248);
              plVar32 = plVar22 + 1;
            }
            do {
              uStack_78 = *(undefined1 **)(param_1 + 0x68);
              uVar24 = param_3;
              (**(code **)(param_3 + 0x70))
                        (param_3,apuStack_70,puVar27,&uStack_78,*(undefined8 *)(param_1 + 0x70));
              *plVar32 = (long)apuStack_70[0];
              (**(code **)(param_1 + 0xb0))
                        (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x68),
                         (int)uStack_78 - (int)*(undefined8 *)(param_1 + 0x68));
              *plVar22 = (long)apuStack_70[0];
            } while (1 < (uint)uVar24);
          }
          else {
            (**(code **)(param_1 + 0xb0))
                      (*(undefined8 *)(param_1 + 8),puStack_80,(int)puStack_88 - (int)puStack_80);
          }
        }
      }
      else {
        (**(code **)(param_1 + 0x78))
                  (*(undefined8 *)(param_1 + 8),uStack_b8,*(undefined8 *)(param_1 + 0x2f0));
        pcVar13 = *(code **)(param_1 + 0x80);
        if (pcVar13 != (code *)0x0) {
          if (*(long *)(param_1 + 0x78) != 0) {
            *plVar26 = *plVar18;
          }
code_r0x0001082062a4:
          (*pcVar13)(*(undefined8 *)(param_1 + 8),puVar31);
        }
      }
      plVar32 = *(long **)(param_1 + 800);
      if (*(long **)(param_1 + 0x328) == (long *)0x0) {
code_r0x0001082062dc:
        *(long **)(param_1 + 0x328) = plVar32;
      }
      else {
        plVar22 = *(long **)(param_1 + 0x328);
        plVar16 = plVar32;
        if (plVar32 != (long *)0x0) {
          do {
            plVar32 = plVar16;
            plVar16 = (long *)*plVar32;
            *plVar32 = (long)plVar22;
            plVar22 = plVar32;
          } while (plVar16 != (long *)0x0);
          goto code_r0x0001082062dc;
        }
      }
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x338) = 0;
      *(undefined8 *)(param_1 + 0x340) = 0;
      *puVar3 = 0;
      plVar32 = plStack_90;
      while (plVar32 != (long *)0x0) {
        if (*(code **)(param_1 + 0xe0) != (code *)0x0) {
          (**(code **)(param_1 + 0xe0))(*(undefined8 *)(param_1 + 8),*(undefined8 *)*plVar32);
        }
        plVar22 = (long *)plVar32[1];
        plVar32[1] = *(long *)(param_1 + 0x2d8);
        *(long **)(param_1 + 0x2d8) = plVar32;
        *(long *)(*plVar32 + 8) = plVar32[2];
        plVar32 = plVar22;
      }
      if (*(int *)(param_1 + 0x25c) == 0) goto code_r0x000108206ab4;
      break;
    case 5:
      if (*(int *)(param_1 + 0x25c) == param_2) {
        return 0xd;
      }
      puVar27 = *(undefined8 **)(param_1 + 0x2c0);
      lVar15 = (long)puVar31 + (long)*(int *)(param_3 + 0x80) * 2;
      uVar24 = param_3;
      (**(code **)(param_3 + 0x38))(param_3,lVar15);
      if ((int)uVar24 != *(int *)(puVar27 + 2)) {
code_r0x000108206aa4:
        *plVar26 = lVar15;
        return 7;
      }
      uVar11 = puVar27[1];
      _memcmp(uVar11,lVar15,(long)(int)uVar24);
      puVar31 = puStack_88;
      if ((int)uVar11 != 0) goto code_r0x000108206aa4;
      *(undefined8 *)(param_1 + 0x2c0) = *puVar27;
      *puVar27 = *(undefined8 *)(param_1 + 0x2c8);
      *(undefined8 **)(param_1 + 0x2c8) = puVar27;
      *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x25c) + -1;
      pcVar13 = *(code **)(param_1 + 0x80);
      if (pcVar13 == (code *)0x0) {
        if (*(code **)(param_1 + 0xb0) != (code *)0x0) {
          uStack_b8 = puStack_80;
          if (*(char *)(param_3 + 0x84) == '\0') {
            plVar22 = plVar20;
            plVar32 = plVar25;
            if (param_3 != *(ulong *)(param_1 + 0x130)) {
              plVar22 = *(long **)(param_1 + 0x248);
              plVar32 = plVar22 + 1;
            }
            do {
              apuStack_70[0] = *(undefined8 **)(param_1 + 0x68);
              uVar24 = param_3;
              (**(code **)(param_3 + 0x70))
                        (param_3,&uStack_b8,puVar31,apuStack_70,*(undefined8 *)(param_1 + 0x70));
              *plVar32 = (long)uStack_b8;
              (**(code **)(param_1 + 0xb0))
                        (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x68),
                         (int)apuStack_70[0] - (int)*(undefined8 *)(param_1 + 0x68));
              *plVar22 = (long)uStack_b8;
            } while (1 < (uint)uVar24);
          }
          else {
            (**(code **)(param_1 + 0xb0))
                      (*(undefined8 *)(param_1 + 8),puStack_80,(int)puStack_88 - (int)puStack_80);
          }
        }
      }
      else {
        if ((*(char *)(param_1 + 0x1d8) != '\0') &&
           (pcVar23 = (char *)puVar27[4], pcVar23 != (char *)0x0)) {
          cVar5 = *pcVar23;
          pcVar12 = (char *)(puVar27[3] + (long)*(int *)((long)puVar27 + 0x34));
          while (cVar5 != '\0') {
            pcVar23 = pcVar23 + 1;
            *pcVar12 = cVar5;
            pcVar12 = pcVar12 + 1;
            cVar5 = *pcVar23;
          }
          pcVar23 = (char *)puVar27[5];
          if (*(char *)(param_1 + 0x1d9) != '\0' && pcVar23 != (char *)0x0) {
            *pcVar12 = *(char *)(param_1 + 0x38c);
            cVar5 = *pcVar23;
            while (pcVar12 = pcVar12 + 1, cVar5 != '\0') {
              pcVar23 = pcVar23 + 1;
              *pcVar12 = cVar5;
              cVar5 = *pcVar23;
            }
          }
          *pcVar12 = '\0';
          pcVar13 = *(code **)(param_1 + 0x80);
        }
        (*pcVar13)(*(undefined8 *)(param_1 + 8),puVar27[3]);
      }
      plVar32 = (long *)puVar27[10];
      while (plVar32 != (long *)0x0) {
        plVar22 = plVar32;
        if (*(code **)(param_1 + 0xe0) != (code *)0x0) {
          (**(code **)(param_1 + 0xe0))(*(undefined8 *)(param_1 + 8),*(undefined8 *)*plVar32);
          plVar22 = (long *)puVar27[10];
        }
        plVar22 = (long *)plVar22[1];
        puVar27[10] = plVar22;
        plVar32[1] = *(long *)(param_1 + 0x2d8);
        *(long **)(param_1 + 0x2d8) = plVar32;
        *(long *)(*plVar32 + 8) = plVar32[2];
        plVar32 = plVar22;
      }
      if (*(int *)(param_1 + 0x25c) != 0) break;
code_r0x000108206ab4:
      if (*(int *)(param_1 + 0x398) == 2) {
        *plVar26 = (long)puStack_88;
        return 0x23;
      }
      if (*(int *)(param_1 + 0x398) != 3) {
        FUN_108208060(param_1,puStack_88,param_5,param_6);
        return param_1;
      }
      *(code **)(param_1 + 0x220) = FUN_108208060;
      *plVar26 = (long)puStack_88;
      puVar31 = puStack_88;
      goto LAB_108206ba4;
    case 6:
      pcVar13 = *(code **)(param_1 + 0x88);
      if (pcVar13 == (code *)0x0) {
        pcVar13 = *(code **)(param_1 + 0xb0);
        if (pcVar13 != (code *)0x0) {
          if (*(char *)(param_3 + 0x84) != '\0') goto LAB_108206144;
          plVar22 = plVar20;
          plVar32 = plVar25;
          uStack_b8 = puVar31;
          if (param_3 != *(ulong *)(param_1 + 0x130)) {
            plVar22 = *(long **)(param_1 + 0x248);
            plVar32 = plVar22 + 1;
          }
          do {
            apuStack_70[0] = *(undefined8 **)(param_1 + 0x68);
            uVar24 = param_3;
            (**(code **)(param_3 + 0x70))
                      (param_3,&uStack_b8,puVar27,apuStack_70,*(undefined8 *)(param_1 + 0x70));
            *plVar32 = (long)uStack_b8;
            (**(code **)(param_1 + 0xb0))
                      (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x68),
                       (int)apuStack_70[0] - (int)*(undefined8 *)(param_1 + 0x68));
            *plVar22 = (long)uStack_b8;
          } while (1 < (uint)uVar24);
        }
      }
      else if (*(char *)(param_3 + 0x84) == '\0') {
        while( true ) {
          uStack_b8 = *(undefined8 **)(param_1 + 0x68);
          uVar24 = param_3;
          (**(code **)(param_3 + 0x70))
                    (param_3,&puStack_80,puStack_88,&uStack_b8,*(undefined8 *)(param_1 + 0x70));
          *plVar18 = (long)puStack_80;
          (*pcVar13)(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x68),
                     (int)uStack_b8 - (int)*(undefined8 *)(param_1 + 0x68));
          if ((uint)uVar24 < 2) break;
          *plVar26 = (long)puStack_80;
        }
      }
      else {
        (*pcVar13)(*(undefined8 *)(param_1 + 8),puVar31,iVar30 - iVar8);
      }
      break;
    case 7:
      pcVar13 = *(code **)(param_1 + 0x88);
      if (pcVar13 == (code *)0x0) {
        pcVar13 = *(code **)(param_1 + 0xb0);
        if (pcVar13 != (code *)0x0) {
          if (*(char *)(param_3 + 0x84) != '\0') goto LAB_108206144;
          plVar22 = plVar20;
          plVar32 = plVar25;
          uStack_b8 = puVar31;
          if (param_3 != *(ulong *)(param_1 + 0x130)) {
            plVar22 = *(long **)(param_1 + 0x248);
            plVar32 = plVar22 + 1;
          }
          do {
            apuStack_70[0] = *(undefined8 **)(param_1 + 0x68);
            uVar24 = param_3;
            (**(code **)(param_3 + 0x70))
                      (param_3,&uStack_b8,puVar27,apuStack_70,*(undefined8 *)(param_1 + 0x70));
            *plVar32 = (long)uStack_b8;
            (**(code **)(param_1 + 0xb0))
                      (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x68),
                       (int)apuStack_70[0] - (int)*(undefined8 *)(param_1 + 0x68));
            *plVar22 = (long)uStack_b8;
          } while (1 < (uint)uVar24);
        }
      }
      else {
        uStack_b8 = (undefined8 *)CONCAT71(uStack_b8._1_7_,10);
        uVar10 = *(undefined8 *)(param_1 + 8);
        pcVar23 = (char *)&uStack_b8;
code_r0x000108205e60:
        uVar11 = 1;
code_r0x000108206910:
        (*pcVar13)(uVar10,pcVar23,uVar11);
      }
      break;
    case 8:
      if (*(code **)(param_1 + 0xa0) == (code *)0x0) {
        if (*(code **)(param_1 + 0xb0) != (code *)0x0) {
          if (*(char *)(param_3 + 0x84) == '\0') {
            plVar22 = plVar20;
            plVar32 = plVar25;
            uStack_b8 = puVar31;
            if (param_3 != *(ulong *)(param_1 + 0x130)) {
              plVar22 = *(long **)(param_1 + 0x248);
              plVar32 = plVar22 + 1;
            }
            do {
              apuStack_70[0] = *(undefined8 **)(param_1 + 0x68);
              uVar24 = param_3;
              (**(code **)(param_3 + 0x70))
                        (param_3,&uStack_b8,puVar27,apuStack_70,*(undefined8 *)(param_1 + 0x70));
              *plVar32 = (long)uStack_b8;
              (**(code **)(param_1 + 0xb0))
                        (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x68),
                         (int)apuStack_70[0] - (int)*(undefined8 *)(param_1 + 0x68));
              *plVar22 = (long)uStack_b8;
            } while (1 < (uint)uVar24);
          }
          else {
            uStack_b8 = puVar31;
            (**(code **)(param_1 + 0xb0))(*(undefined8 *)(param_1 + 8),puVar31,iVar30 - iVar8);
          }
        }
      }
      else {
        (**(code **)(param_1 + 0xa0))(*(undefined8 *)(param_1 + 8));
      }
      uVar24 = param_1;
      FUN_108208424(param_1,param_3,&puStack_88,param_5,param_6,param_7,param_8);
      if ((int)uVar24 != 0) {
        return uVar24;
      }
      if (puStack_88 == (undefined8 *)0x0) {
        *(code **)(param_1 + 0x220) = FUN_1082088e4;
        return 0;
      }
      break;
    case 9:
      uVar24 = param_3;
      (**(code **)(param_3 + 0x58))
                (param_3,(long)puVar31 + (long)*(int *)(param_3 + 0x80),
                 (long)puVar27 - (long)*(int *)(param_3 + 0x80));
      puVar31 = puStack_88;
      uStack_78 = (undefined1 *)CONCAT71(uStack_78._1_7_,(char)uVar24);
      if ((uVar24 & 0xff) == 0) {
        iVar6 = *(int *)(param_3 + 0x80);
        uStack_b8 = (undefined8 *)((long)puStack_80 + (long)iVar6);
        if (plVar21[0x17] == 0) {
          iVar8 = (int)plVar21 + 0xa0;
          FUN_108203a0c();
          if (iVar8 == 0) {
            return 1;
          }
        }
        while (uVar24 = param_3,
              (**(code **)(param_3 + 0x70))
                        (param_3,&uStack_b8,(long)puVar31 - (long)iVar6,plVar21 + 0x17,plVar21[0x16]
                        ), 1 < (uint)uVar24) {
          plVar32 = plVar21 + 0x14;
          FUN_108203a0c();
          if (((ulong)plVar32 & 1) == 0) {
            return 1;
          }
        }
        if (plVar21[0x18] == 0) {
          return 1;
        }
        puVar14 = (undefined1 *)plVar21[0x17];
        if (puVar14 == (undefined1 *)plVar21[0x16]) {
          iVar6 = (int)plVar21 + 0xa0;
          FUN_108203a0c();
          if (iVar6 == 0) {
            return 1;
          }
          puVar14 = (undefined1 *)plVar21[0x17];
        }
        plVar21[0x17] = (long)(puVar14 + 1);
        *puVar14 = 0;
        pcVar23 = (char *)plVar21[0x18];
        if (pcVar23 == (char *)0x0) {
          return 1;
        }
        if (plVar21[2] == 0) {
          plVar32 = (long *)0x0;
        }
        else {
          uVar9 = param_1;
          FUN_108205534(param_1,pcVar23);
          lVar15 = plVar21[2];
          uVar24 = lVar15 - 1U & uVar9;
          lVar17 = *plVar21;
          plVar32 = *(long **)(lVar17 + uVar24 * 8);
          if (plVar32 != (long *)0x0) {
            uVar7 = 0;
            do {
              while( true ) {
                pcVar19 = (char *)*plVar32;
                pcVar12 = pcVar23;
                cVar5 = *pcVar23;
                if (*pcVar23 == *pcVar19) {
                  do {
                    pcVar19 = pcVar19 + 1;
                    if (cVar5 == '\0') goto code_r0x0001082067d8;
                    cVar5 = pcVar12[1];
                    pcVar12 = pcVar12 + 1;
                  } while (cVar5 == *pcVar19);
                }
                if (uVar7 == 0) break;
                lVar28 = lVar15;
                if (uVar7 <= uVar24) {
                  lVar28 = 0;
                }
                uVar24 = lVar28 + (uVar24 - uVar7);
                plVar32 = *(long **)(lVar17 + uVar24 * 8);
                if (plVar32 == (long *)0x0) goto code_r0x0001082067d8;
              }
              uVar7 = (uint)((uVar9 & -lVar15) >> ((ulong)(*(byte *)(plVar21 + 1) - 1) & 0x3f)) &
                      (uint)(lVar15 - 1U >> 2) & 0xff | 1;
              lVar28 = lVar15;
              if (uVar7 <= uVar24) {
                lVar28 = 0;
              }
              uVar24 = lVar28 + (uVar24 - uVar7);
              plVar32 = *(long **)(lVar17 + uVar24 * 8);
            } while (plVar32 != (long *)0x0);
          }
        }
code_r0x0001082067d8:
        plVar21[0x17] = plVar21[0x18];
        if ((*(char *)((long)plVar21 + 0x101) == '\0') || (*(char *)((long)plVar21 + 0x102) != '\0')
           ) {
          if (plVar32 == (long *)0x0) {
            return 0xb;
          }
          if (*(char *)((long)plVar32 + 0x3a) == '\0') {
            return 0x18;
          }
code_r0x000108206800:
          if ((char)plVar32[7] != '\0') {
            return 0xc;
          }
          if (plVar32[6] != 0) {
            return 0xf;
          }
          if (plVar32[1] == 0) {
            if (*(long *)(param_1 + 0xf0) == 0) goto code_r0x000108206950;
            *(undefined1 *)(plVar32 + 7) = 1;
            uVar24 = param_1;
            FUN_108206f6c();
            *(undefined1 *)(plVar32 + 7) = 0;
            if (uVar24 == 0) {
              return 1;
            }
            uVar11 = *(undefined8 *)(param_1 + 0xf8);
            (**(code **)(param_1 + 0xf0))(uVar11,uVar24,plVar32[4],plVar32[3],plVar32[5]);
            if ((int)uVar11 == 0) {
              return 0x15;
            }
            *(undefined8 *)(param_1 + 0x338) = *(undefined8 *)(param_1 + 0x340);
          }
          else {
            if (*(char *)(param_1 + 600) == '\0') {
              pcVar13 = *(code **)(param_1 + 0x100);
              if (pcVar13 != (code *)0x0) {
                uVar10 = *(undefined8 *)(param_1 + 8);
                pcVar23 = (char *)*plVar32;
                goto code_r0x000108206948;
              }
              goto code_r0x000108206950;
            }
            uVar24 = param_1;
            FUN_108204abc(param_1,plVar32,0);
            if ((int)uVar24 != 0) {
              return uVar24;
            }
          }
        }
        else {
          if (plVar32 != (long *)0x0) goto code_r0x000108206800;
          pcVar13 = *(code **)(param_1 + 0x100);
          if (pcVar13 != (code *)0x0) {
            uVar10 = *(undefined8 *)(param_1 + 8);
code_r0x000108206948:
            uVar11 = 0;
            goto code_r0x000108206910;
          }
code_r0x000108206950:
          if (*(long *)(param_1 + 0xb0) != 0) {
            FUN_1081fff24(param_1,param_3,puStack_80,puStack_88);
          }
        }
      }
      else {
        func_0x000108202778(param_1,9,&uStack_78,(long)&uStack_78 + 1,0xb62,1);
        puVar31 = puStack_88;
        pcVar13 = *(code **)(param_1 + 0x88);
        if (pcVar13 != (code *)0x0) {
          uVar10 = *(undefined8 *)(param_1 + 8);
          pcVar23 = (char *)&uStack_78;
          goto code_r0x000108205e60;
        }
        pcVar13 = *(code **)(param_1 + 0xb0);
        if (pcVar13 != (code *)0x0) {
          uStack_b8 = puStack_80;
          if (*(char *)(param_3 + 0x84) != '\0') goto code_r0x000108206384;
          plVar22 = plVar20;
          plVar32 = plVar25;
          if (param_3 != *(ulong *)(param_1 + 0x130)) {
            plVar22 = *(long **)(param_1 + 0x248);
            plVar32 = plVar22 + 1;
          }
          do {
            apuStack_70[0] = *(undefined8 **)(param_1 + 0x68);
            uVar24 = param_3;
            (**(code **)(param_3 + 0x70))
                      (param_3,&uStack_b8,puVar31,apuStack_70,*(undefined8 *)(param_1 + 0x70));
            *plVar32 = (long)uStack_b8;
            (**(code **)(param_1 + 0xb0))
                      (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x68),
                       (int)apuStack_70[0] - (int)*(undefined8 *)(param_1 + 0x68));
            *plVar22 = (long)uStack_b8;
          } while (1 < (uint)uVar24);
        }
      }
      break;
    case 10:
      uVar24 = param_3;
      (**(code **)(param_3 + 0x50))(param_3,puVar31);
      puVar31 = puStack_88;
      uVar7 = (uint)uVar24;
      if ((int)uVar7 < 0) {
        return 0xe;
      }
      pcVar13 = *(code **)(param_1 + 0x88);
      if (pcVar13 != (code *)0x0) {
        uVar4 = (undefined1)uVar24;
        if (uVar7 < 0x80) {
          uStack_b8 = (undefined8 *)CONCAT71(uStack_b8._1_7_,uVar4);
          uVar11 = 1;
        }
        else if (uVar7 < 0x800) {
          uStack_b8 = (undefined8 *)
                      (CONCAT62(uStack_b8._2_6_,CONCAT11(uVar4,(char)(uVar7 >> 6))) &
                       0xffffffffffff3fff | 0x80c0);
          uVar11 = 2;
        }
        else if (uVar7 >> 0x10 == 0) {
          uVar24 = CONCAT62(uStack_b8._2_6_,CONCAT11((char)(uVar7 >> 6),(char)(uVar7 >> 0xc))) &
                   0xffffffffffff3fff;
          uStack_b8._3_5_ = (undefined5)(uVar24 >> 0x18);
          uStack_b8 = (undefined8 *)
                      (CONCAT53(uStack_b8._3_5_,CONCAT12(uVar4,(short)uVar24)) & 0xffffffffff3fffff
                      | 0x8080e0);
          uVar11 = 3;
        }
        else if (uVar7 >> 0x10 < 0x11) {
          uVar24 = CONCAT62(uStack_b8._2_6_,CONCAT11((char)(uVar7 >> 0xc),(char)(uVar7 >> 0x12))) &
                   0xffffffffffff3fff;
          uStack_b8._3_5_ = (undefined5)(uVar24 >> 0x18);
          uVar24 = CONCAT53(uStack_b8._3_5_,CONCAT12((char)(uVar7 >> 6),(short)uVar24)) &
                   0xffffffffff3fffff;
          uStack_b8._4_4_ = (undefined4)(uVar24 >> 0x20);
          uStack_b8 = (undefined8 *)
                      (CONCAT44(uStack_b8._4_4_,CONCAT13(uVar4,(int3)uVar24)) & 0xffffffff3fffffff |
                      0x808080f0);
          uVar11 = 4;
        }
        else {
          uVar11 = 0;
        }
        uVar10 = *(undefined8 *)(param_1 + 8);
        pcVar23 = (char *)&uStack_b8;
        goto code_r0x000108206910;
      }
      pcVar13 = *(code **)(param_1 + 0xb0);
      if (pcVar13 != (code *)0x0) {
        uStack_b8 = puStack_80;
        if (*(char *)(param_3 + 0x84) == '\0') {
          plVar22 = plVar20;
          plVar32 = plVar25;
          if (param_3 != *(ulong *)(param_1 + 0x130)) {
            plVar22 = *(long **)(param_1 + 0x248);
            plVar32 = plVar22 + 1;
          }
          do {
            apuStack_70[0] = *(undefined8 **)(param_1 + 0x68);
            uVar24 = param_3;
            (**(code **)(param_3 + 0x70))
                      (param_3,&uStack_b8,puVar31,apuStack_70,*(undefined8 *)(param_1 + 0x70));
            *plVar32 = (long)uStack_b8;
            (**(code **)(param_1 + 0xb0))
                      (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x68),
                       (int)apuStack_70[0] - (int)*(undefined8 *)(param_1 + 0x68));
            *plVar22 = (long)uStack_b8;
          } while (1 < (uint)uVar24);
        }
        else {
code_r0x000108206384:
          uStack_b8 = puStack_80;
          (*pcVar13)(*(undefined8 *)(param_1 + 8),puStack_80,(int)puStack_88 - (int)puStack_80);
        }
      }
      break;
    case 0xb:
      uVar24 = param_1;
      FUN_108204f68(param_1,param_3,puVar31,puVar27);
      iVar6 = (int)uVar24;
      goto joined_r0x000108205c2c;
    case 0xc:
      goto LAB_108206a68;
    case 0xd:
      uVar24 = param_1;
      FUN_10820528c(param_1,param_3,puVar31,puVar27);
      iVar6 = (int)uVar24;
joined_r0x000108205c2c:
      if (iVar6 == 0) {
        return 1;
      }
      break;
    case -5:
      if (param_7 == 0) {
        pcVar13 = *(code **)(param_1 + 0x88);
        if (pcVar13 == (code *)0x0) {
          pcVar13 = *(code **)(param_1 + 0xb0);
          if (pcVar13 == (code *)0x0) goto code_r0x000108206d3c;
          if (*(char *)(param_3 + 0x84) == '\0') {
            uStack_b8 = puVar31;
            if (param_3 != *(ulong *)(param_1 + 0x130)) {
              plVar20 = *(long **)(param_1 + 0x248);
              plVar25 = plVar20 + 1;
            }
            do {
              apuStack_70[0] = *(undefined8 **)(param_1 + 0x68);
              uVar24 = param_3;
              (**(code **)(param_3 + 0x70))
                        (param_3,&uStack_b8,param_5,apuStack_70,*(undefined8 *)(param_1 + 0x70));
              *plVar25 = (long)uStack_b8;
              (**(code **)(param_1 + 0xb0))
                        (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x68),
                         (int)apuStack_70[0] - (int)*(undefined8 *)(param_1 + 0x68));
              *plVar20 = (long)uStack_b8;
            } while (1 < (uint)uVar24);
code_r0x000108206d3c:
            if (param_2 == 0) {
              *plVar26 = (long)param_5;
              return 3;
            }
            if (*(int *)(param_1 + 0x25c) != param_2) {
              *plVar26 = (long)param_5;
              return 0xd;
            }
code_r0x000108206d50:
            *param_6 = (long)param_5;
            return 0;
          }
          uVar11 = *(undefined8 *)(param_1 + 8);
          uStack_b8 = puVar31;
code_r0x000108206cec:
          iVar8 = (int)param_5 - iVar8;
        }
        else {
          if (*(char *)(param_3 + 0x84) != '\0') {
            uVar11 = *(undefined8 *)(param_1 + 8);
            goto code_r0x000108206cec;
          }
          uStack_b8 = *(undefined8 **)(param_1 + 0x68);
          (**(code **)(param_3 + 0x70))
                    (param_3,&puStack_80,param_5,&uStack_b8,*(undefined8 *)(param_1 + 0x70));
          pcVar13 = *(code **)(param_1 + 0x88);
          uVar11 = *(undefined8 *)(param_1 + 8);
          puVar31 = *(undefined8 **)(param_1 + 0x68);
          iVar8 = (int)uStack_b8 - (int)puVar31;
        }
        (*pcVar13)(uVar11,puVar31,iVar8);
        goto code_r0x000108206d3c;
      }
      goto LAB_108206ba4;
    case -4:
      if (param_7 == 0) {
        if (param_2 < 1) {
          return 3;
        }
        if (*(int *)(param_1 + 0x25c) != param_2) {
          return 0xd;
        }
      }
      goto LAB_108206ba4;
    case -3:
      if (param_7 == 0) {
        *plVar18 = (long)param_5;
        pcVar13 = *(code **)(param_1 + 0x88);
        if (pcVar13 == (code *)0x0) {
          pcVar13 = *(code **)(param_1 + 0xb0);
          if (pcVar13 == (code *)0x0) goto code_r0x000108206b24;
          if (*(char *)(param_3 + 0x84) == '\0') {
            uStack_b8 = puVar31;
            if (param_3 != *(ulong *)(param_1 + 0x130)) {
              plVar20 = *(long **)(param_1 + 0x248);
              plVar25 = plVar20 + 1;
            }
            do {
              apuStack_70[0] = *(undefined8 **)(param_1 + 0x68);
              uVar24 = param_3;
              (**(code **)(param_3 + 0x70))
                        (param_3,&uStack_b8,param_5,apuStack_70,*(undefined8 *)(param_1 + 0x70));
              *plVar25 = (long)uStack_b8;
              (**(code **)(param_1 + 0xb0))
                        (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x68),
                         (int)apuStack_70[0] - (int)*(undefined8 *)(param_1 + 0x68));
              *plVar20 = (long)uStack_b8;
            } while (1 < (uint)uVar24);
code_r0x000108206b24:
            if (param_2 == 0) {
              return 3;
            }
            if (*(int *)(param_1 + 0x25c) != param_2) {
              return 0xd;
            }
            goto code_r0x000108206d50;
          }
          uVar11 = *(undefined8 *)(param_1 + 8);
          iVar8 = (int)param_5 - iVar8;
          uStack_b8 = puVar31;
        }
        else {
          uStack_b8 = (undefined8 *)CONCAT71(uStack_b8._1_7_,10);
          uVar11 = *(undefined8 *)(param_1 + 8);
          iVar8 = 1;
          puVar31 = &uStack_b8;
        }
        (*pcVar13)(uVar11,puVar31,iVar8);
        goto code_r0x000108206b24;
      }
      goto LAB_108206ba4;
    case -2:
      if (param_7 == 0) {
        return 6;
      }
      goto LAB_108206ba4;
    case -1:
      if (param_7 == 0) {
        return 5;
      }
      goto LAB_108206ba4;
    default:
      pcVar13 = *(code **)(param_1 + 0xb0);
      if (pcVar13 != (code *)0x0) {
        if (*(char *)(param_3 + 0x84) == '\0') {
          plVar22 = plVar20;
          plVar32 = plVar25;
          uStack_b8 = puVar31;
          if (param_3 != *(ulong *)(param_1 + 0x130)) {
            plVar22 = *(long **)(param_1 + 0x248);
            plVar32 = plVar22 + 1;
          }
          do {
            apuStack_70[0] = *(undefined8 **)(param_1 + 0x68);
            uVar24 = param_3;
            (**(code **)(param_3 + 0x70))
                      (param_3,&uStack_b8,puVar27,apuStack_70,*(undefined8 *)(param_1 + 0x70));
            *plVar32 = (long)uStack_b8;
            (**(code **)(param_1 + 0xb0))
                      (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x68),
                       (int)apuStack_70[0] - (int)*(undefined8 *)(param_1 + 0x68));
            *plVar22 = (long)uStack_b8;
          } while (1 < (uint)uVar24);
        }
        else {
LAB_108206144:
          uStack_b8 = puVar31;
          (*pcVar13)(*(undefined8 *)(param_1 + 8),puVar31,iVar30 - iVar8);
        }
      }
    }
    iVar6 = *(int *)(param_1 + 0x398);
    puStack_80 = puStack_88;
    *plVar26 = (long)puStack_88;
    if (iVar6 == 2) {
      return 0x23;
    }
    puVar31 = puStack_88;
  } while (iVar6 != 3);
LAB_108206ba4:
  *param_6 = (long)puVar31;
  return 0;
}



/* Entry: 108206e60; end: 108206f6b;  */

undefined8 FUN_108206e60(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  plVar7 = *(long **)(param_1 + 0x2c0);
  while( true ) {
    if (plVar7 == (long *)0x0) {
      return 1;
    }
    lVar1 = (long)*(int *)(plVar7 + 6) + 1;
    lVar2 = plVar7[8];
    lVar5 = lVar2 + lVar1;
    lVar3 = plVar7[1];
    if (lVar3 == lVar5) break;
    uVar4 = (ulong)*(int *)(plVar7 + 2);
    if (0x7fffffffU - lVar1 < uVar4) {
      return 0;
    }
    lVar6 = (long)(*(int *)(plVar7 + 2) + (int)lVar1);
    if (plVar7[9] - lVar2 < lVar6) {
      (**(code **)(param_1 + 0x20))(lVar2,lVar6);
      if (lVar2 == 0) {
        return 0;
      }
      if (plVar7[3] == plVar7[8]) {
        plVar7[3] = lVar2;
        lVar5 = plVar7[4];
      }
      else {
        lVar5 = plVar7[4];
      }
      if (lVar5 != 0) {
        plVar7[4] = lVar2 + (lVar5 - plVar7[8]);
      }
      plVar7[8] = lVar2;
      plVar7[9] = lVar2 + lVar6;
      lVar5 = lVar2 + lVar1;
      lVar3 = plVar7[1];
      uVar4 = (ulong)*(int *)(plVar7 + 2);
    }
    _memcpy(lVar5,lVar3,uVar4);
    plVar7[1] = lVar5;
    plVar7 = (long *)*plVar7;
  }
  return 1;
}



/* Entry: 108206f6c; end: 10820805f;  */

undefined8 FUN_108206f6c(long param_1)

{
  undefined1 uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  char cVar7;
  undefined1 *puVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  
  puVar11 = *(undefined8 **)(param_1 + 0x2b0);
  bVar3 = puVar11[0x27] == 0;
  iVar5 = (int)param_1;
  if (puVar11[0x27] == 0) {
LAB_108207040:
    puVar16 = (undefined8 *)puVar11[0xf];
    if (puVar16 == (undefined8 *)0x0) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      puVar12 = puVar16 + puVar11[0x11];
    }
    while (puVar15 = puVar16, puVar15 != puVar12) {
      puVar14 = (undefined8 *)*puVar15;
      puVar16 = puVar15 + 1;
      if ((puVar14 != (undefined8 *)0x0) && (puVar14[1] != 0)) {
        if (!bVar3) {
          puVar8 = *(undefined1 **)(param_1 + 0x338);
          if (puVar8 == *(undefined1 **)(param_1 + 0x330)) {
            iVar4 = iVar5 + 800;
            FUN_108203a0c();
            if (iVar4 == 0) goto LAB_1082072a4;
            puVar8 = *(undefined1 **)(param_1 + 0x338);
          }
          *(undefined1 **)(param_1 + 0x338) = puVar8 + 1;
          *puVar8 = 0xc;
        }
        cVar7 = *(char *)*puVar14;
        pcVar10 = (char *)*puVar14;
        while (cVar7 != '\0') {
          pcVar9 = *(char **)(param_1 + 0x338);
          if (pcVar9 == *(char **)(param_1 + 0x330)) {
            iVar4 = iVar5 + 800;
            FUN_108203a0c();
            if (iVar4 == 0) goto LAB_1082072a4;
            cVar7 = *pcVar10;
            pcVar9 = *(char **)(param_1 + 0x338);
          }
          *(char **)(param_1 + 0x338) = pcVar9 + 1;
          *pcVar9 = cVar7;
          cVar7 = pcVar10[1];
          pcVar10 = pcVar10 + 1;
        }
        puVar8 = *(undefined1 **)(param_1 + 0x338);
        if (puVar8 == *(undefined1 **)(param_1 + 0x330)) {
          iVar4 = iVar5 + 800;
          FUN_108203a0c();
          if (iVar4 == 0) goto LAB_1082072a4;
          puVar8 = *(undefined1 **)(param_1 + 0x338);
        }
        bVar3 = false;
        *(undefined1 **)(param_1 + 0x338) = puVar8 + 1;
        *puVar8 = 0x3d;
        uVar2 = *(int *)(puVar14[1] + 0x28) - (uint)(*(char *)(param_1 + 0x38c) != '\0');
        puVar16 = puVar15 + 1;
        if (0 < (int)uVar2) {
          uVar13 = 0;
          do {
            puVar8 = *(undefined1 **)(param_1 + 0x338);
            if (puVar8 == *(undefined1 **)(param_1 + 0x330)) {
              iVar4 = iVar5 + 800;
              FUN_108203a0c();
              if (iVar4 == 0) goto LAB_1082072a4;
              puVar8 = *(undefined1 **)(param_1 + 0x338);
            }
            uVar1 = *(undefined1 *)(*(long *)(puVar14[1] + 0x20) + uVar13);
            *(undefined1 **)(param_1 + 0x338) = puVar8 + 1;
            *puVar8 = uVar1;
            uVar13 = uVar13 + 1;
          } while (uVar2 != uVar13);
          bVar3 = false;
        }
      }
    }
    puVar16 = (undefined8 *)*puVar11;
    if (puVar16 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      puVar11 = puVar16 + puVar11[2];
    }
    while (puVar12 = puVar16, puVar12 != puVar11) {
      puVar15 = (undefined8 *)*puVar12;
      puVar16 = puVar12 + 1;
      if ((puVar15 != (undefined8 *)0x0) && (*(char *)(puVar15 + 7) != '\0')) {
        if (!bVar3) {
          puVar8 = *(undefined1 **)(param_1 + 0x338);
          if (puVar8 == *(undefined1 **)(param_1 + 0x330)) {
            iVar4 = iVar5 + 800;
            FUN_108203a0c();
            if (iVar4 == 0) goto LAB_1082072a4;
            puVar8 = *(undefined1 **)(param_1 + 0x338);
          }
          *(undefined1 **)(param_1 + 0x338) = puVar8 + 1;
          *puVar8 = 0xc;
        }
        bVar3 = false;
        pcVar10 = (char *)*puVar15;
        cVar7 = *pcVar10;
        puVar16 = puVar12 + 1;
        if (cVar7 != '\0') {
          do {
            pcVar9 = *(char **)(param_1 + 0x338);
            if (pcVar9 == *(char **)(param_1 + 0x330)) {
              iVar4 = iVar5 + 800;
              FUN_108203a0c();
              if (iVar4 == 0) goto LAB_1082072a4;
              cVar7 = *pcVar10;
              pcVar9 = *(char **)(param_1 + 0x338);
            }
            *(char **)(param_1 + 0x338) = pcVar9 + 1;
            *pcVar9 = cVar7;
            cVar7 = pcVar10[1];
            pcVar10 = pcVar10 + 1;
          } while (cVar7 != '\0');
          bVar3 = false;
        }
      }
    }
    puVar8 = *(undefined1 **)(param_1 + 0x338);
    if (puVar8 == *(undefined1 **)(param_1 + 0x330)) {
      iVar5 = iVar5 + 800;
      FUN_108203a0c();
      if (iVar5 == 0) goto LAB_1082072a4;
      puVar8 = *(undefined1 **)(param_1 + 0x338);
    }
    *(undefined1 **)(param_1 + 0x338) = puVar8 + 1;
    *puVar8 = 0;
    uVar6 = *(undefined8 *)(param_1 + 0x340);
  }
  else {
    puVar8 = *(undefined1 **)(param_1 + 0x338);
    if (puVar8 != *(undefined1 **)(param_1 + 0x330)) {
LAB_108206fc0:
      *(undefined1 **)(param_1 + 0x338) = puVar8 + 1;
      *puVar8 = 0x3d;
      uVar2 = *(int *)(puVar11[0x27] + 0x28) - (uint)(*(char *)(param_1 + 0x38c) != '\0');
      if (0 < (int)uVar2) {
        uVar13 = 0;
        do {
          puVar8 = *(undefined1 **)(param_1 + 0x338);
          if (puVar8 == *(undefined1 **)(param_1 + 0x330)) {
            iVar4 = iVar5 + 800;
            FUN_108203a0c();
            if (iVar4 == 0) goto LAB_1082072a4;
            puVar8 = *(undefined1 **)(param_1 + 0x338);
          }
          uVar1 = *(undefined1 *)(*(long *)(puVar11[0x27] + 0x20) + uVar13);
          *(undefined1 **)(param_1 + 0x338) = puVar8 + 1;
          *puVar8 = uVar1;
          uVar13 = uVar13 + 1;
        } while (uVar2 != uVar13);
      }
      goto LAB_108207040;
    }
    iVar4 = iVar5 + 800;
    FUN_108203a0c();
    if (iVar4 != 0) {
      puVar8 = *(undefined1 **)(param_1 + 0x338);
      goto LAB_108206fc0;
    }
LAB_1082072a4:
    uVar6 = 0;
  }
  return uVar6;
}



/* Entry: 108208060; end: 108208423;  */

undefined8 FUN_108208060(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  *(code **)(param_1 + 0x220) = FUN_108208060;
  *(undefined8 *)(param_1 + 0x230) = param_2;
  while( true ) {
    uStack_58 = 0;
    puVar3 = *(undefined8 **)(param_1 + 0x130);
    (*(code *)*puVar3)(puVar3,param_2,param_3,&uStack_58);
    uVar4 = param_1;
    func_0x000108202778(param_1,puVar3,param_2,uStack_58,0x1681,0);
    uVar1 = uStack_58;
    if ((uVar4 & 1) == 0) {
      do {
        uVar4 = param_1;
        param_1 = *(ulong *)(uVar4 + 0x390);
      } while (param_1 != 0);
      if (*(long *)(uVar4 + 0x3c0) != 0) {
        _fprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f47f8b8);
      }
      return 0x2b;
    }
    *(undefined8 *)(param_1 + 0x238) = uStack_58;
    iVar2 = (int)puVar3;
    if (iVar2 < 0xb) break;
    if (iVar2 == 0xb) {
      uVar4 = param_1;
      FUN_108204f68(param_1,*(undefined8 *)(param_1 + 0x130),param_2,uStack_58);
      iVar2 = (int)uVar4;
joined_r0x00010820819c:
      if (iVar2 == 0) {
        return 1;
      }
    }
    else {
      if (iVar2 == 0xd) {
        uVar4 = param_1;
        FUN_10820528c(param_1,*(undefined8 *)(param_1 + 0x130),param_2,uStack_58);
        iVar2 = (int)uVar4;
        goto joined_r0x00010820819c;
      }
      if (iVar2 != 0xf) {
        return 9;
      }
      if (*(code **)(param_1 + 0xb0) != (code *)0x0) {
        lVar6 = *(long *)(param_1 + 0x130);
        uStack_48 = param_2;
        if (*(char *)(lVar6 + 0x84) == '\0') {
          do {
            uStack_50 = *(undefined8 *)(param_1 + 0x68);
            lVar5 = lVar6;
            (**(code **)(lVar6 + 0x70))
                      (lVar6,&uStack_48,uVar1,&uStack_50,*(undefined8 *)(param_1 + 0x70));
            *(undefined8 *)(param_1 + 0x238) = uStack_48;
            (**(code **)(param_1 + 0xb0))
                      (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x68),
                       (int)uStack_50 - (int)*(undefined8 *)(param_1 + 0x68));
            *(undefined8 *)(param_1 + 0x230) = uStack_48;
          } while (1 < (uint)lVar5);
        }
        else {
          (**(code **)(param_1 + 0xb0))
                    (*(undefined8 *)(param_1 + 8),param_2,(int)uStack_58 - (int)param_2);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x230) = uStack_58;
    if (*(int *)(param_1 + 0x398) == 2) {
      return 0x23;
    }
    param_2 = uStack_58;
    if (*(int *)(param_1 + 0x398) == 3) {
LAB_1082083c4:
      *param_4 = param_2;
      return 0;
    }
  }
  if (iVar2 < -2) {
    if (iVar2 == -0xf) {
      if (*(code **)(param_1 + 0xb0) != (code *)0x0) {
        lVar6 = *(long *)(param_1 + 0x130);
        uStack_48 = param_2;
        if (*(char *)(lVar6 + 0x84) == '\0') {
          do {
            uStack_50 = *(undefined8 *)(param_1 + 0x68);
            lVar5 = lVar6;
            (**(code **)(lVar6 + 0x70))
                      (lVar6,&uStack_48,uVar1,&uStack_50,*(undefined8 *)(param_1 + 0x70));
            *(undefined8 *)(param_1 + 0x238) = uStack_48;
            (**(code **)(param_1 + 0xb0))
                      (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x68),
                       (int)uStack_50 - (int)*(undefined8 *)(param_1 + 0x68));
            *(undefined8 *)(param_1 + 0x230) = uStack_48;
          } while (1 < (uint)lVar5);
        }
        else {
          (**(code **)(param_1 + 0xb0))
                    (*(undefined8 *)(param_1 + 8),param_2,(int)uStack_58 - (int)param_2);
        }
        if (*(int *)(param_1 + 0x398) == 2) {
          return 0x23;
        }
      }
      *param_4 = uStack_58;
      return 0;
    }
    if (iVar2 == -4) goto LAB_1082083c4;
  }
  else {
    if (iVar2 == -2) {
      if (*(char *)(param_1 + 0x39c) != '\0') {
        return 6;
      }
      goto LAB_1082083c4;
    }
    if (iVar2 == -1) {
      if (*(char *)(param_1 + 0x39c) != '\0') {
        return 5;
      }
      goto LAB_1082083c4;
    }
    if (iVar2 == 0) {
      *(undefined8 *)(param_1 + 0x230) = uStack_58;
      return 4;
    }
  }
  return 9;
}



/* Entry: 108208424; end: 1082088e3;  */

undefined4
FUN_108208424(ulong param_1,long param_2,undefined8 *param_3,undefined8 param_4,undefined8 *param_5,
             int param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_78 = *param_3;
  if (param_2 == *(long *)(param_1 + 0x130)) {
    puVar13 = (undefined8 *)(param_1 + 0x230);
    *(undefined8 *)(param_1 + 0x230) = uStack_78;
    puVar6 = (undefined8 *)(param_1 + 0x238);
  }
  else {
    puVar13 = *(undefined8 **)(param_1 + 0x248);
    puVar6 = puVar13 + 1;
  }
  *puVar13 = uStack_78;
  *param_3 = 0;
  puVar9 = (undefined8 *)(param_1 + 0x230);
  puVar10 = (undefined8 *)(param_1 + 0x238);
  do {
    uStack_80 = uStack_78;
    lVar2 = param_2;
    (**(code **)(param_2 + 0x10))(param_2,uStack_78,param_4,&uStack_80);
    uVar3 = param_1;
    func_0x000108202778(param_1,lVar2,uStack_78,uStack_80,0x1017,param_7);
    uVar1 = uStack_80;
    if ((uVar3 & 1) == 0) {
      do {
        uVar3 = param_1;
        param_1 = *(ulong *)(uVar3 + 0x390);
      } while (param_1 != 0);
      if (*(long *)(uVar3 + 0x3c0) != 0) {
        _fprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f47f8b8);
        return 0x2b;
      }
      return 0x2b;
    }
    *puVar6 = uStack_80;
    iVar12 = (int)lVar2;
    if (iVar12 < 6) {
      if (iVar12 < -1) {
        if (iVar12 != -4) {
          if (iVar12 != -2) goto LAB_1082087fc;
          if (param_6 == 0) {
            return 6;
          }
          goto LAB_1082087b8;
        }
      }
      else if (iVar12 != -1) {
        if (iVar12 == 0) {
          *puVar13 = uStack_80;
          return 4;
        }
LAB_1082087fc:
        *puVar13 = uStack_80;
        return 0x17;
      }
      if (param_6 == 0) {
        return 0x14;
      }
LAB_1082087b8:
      *param_5 = uStack_78;
      return 0;
    }
    iVar11 = (int)uStack_80;
    iVar4 = (int)uStack_78;
    if (iVar12 == 6) {
      pcVar5 = *(code **)(param_1 + 0x88);
      if (pcVar5 == (code *)0x0) {
        pcVar5 = *(code **)(param_1 + 0xb0);
        if (pcVar5 != (code *)0x0) {
          uStack_68 = uStack_78;
          if (*(char *)(param_2 + 0x84) == '\0') {
            puVar7 = puVar10;
            puVar8 = puVar9;
            if (param_2 != *(long *)(param_1 + 0x130)) {
              puVar8 = *(undefined8 **)(param_1 + 0x248);
              puVar7 = puVar8 + 1;
            }
            do {
              uStack_70 = *(undefined8 *)(param_1 + 0x68);
              lVar2 = param_2;
              (**(code **)(param_2 + 0x70))
                        (param_2,&uStack_68,uVar1,&uStack_70,*(undefined8 *)(param_1 + 0x70));
              *puVar7 = uStack_68;
              (**(code **)(param_1 + 0xb0))
                        (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x68),
                         (int)uStack_70 - (int)*(undefined8 *)(param_1 + 0x68));
              *puVar8 = uStack_68;
            } while (1 < (uint)lVar2);
          }
          else {
LAB_108208644:
            uStack_68 = uStack_78;
            (*pcVar5)(*(undefined8 *)(param_1 + 8),uStack_78,iVar11 - iVar4);
          }
        }
      }
      else if (*(char *)(param_2 + 0x84) == '\0') {
        while( true ) {
          uStack_68 = *(undefined8 *)(param_1 + 0x68);
          lVar2 = param_2;
          (**(code **)(param_2 + 0x70))
                    (param_2,&uStack_78,uStack_80,&uStack_68,*(undefined8 *)(param_1 + 0x70));
          *puVar6 = uStack_80;
          (*pcVar5)(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x68),
                    (int)uStack_68 - (int)*(undefined8 *)(param_1 + 0x68));
          if ((uint)lVar2 < 2) break;
          *puVar13 = uStack_78;
        }
      }
      else {
        (*pcVar5)(*(undefined8 *)(param_1 + 8),uStack_78,iVar11 - iVar4);
      }
    }
    else {
      if (iVar12 != 7) {
        if (iVar12 == 0x28) {
          if (*(code **)(param_1 + 0xa8) == (code *)0x0) {
            if (*(code **)(param_1 + 0xb0) != (code *)0x0) {
              uStack_68 = uStack_78;
              if (*(char *)(param_2 + 0x84) == '\0') {
                if (param_2 != *(long *)(param_1 + 0x130)) {
                  puVar9 = *(undefined8 **)(param_1 + 0x248);
                  puVar10 = puVar9 + 1;
                }
                do {
                  uStack_70 = *(undefined8 *)(param_1 + 0x68);
                  lVar2 = param_2;
                  (**(code **)(param_2 + 0x70))
                            (param_2,&uStack_68,uVar1,&uStack_70,*(undefined8 *)(param_1 + 0x70));
                  *puVar10 = uStack_68;
                  (**(code **)(param_1 + 0xb0))
                            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x68),
                             (int)uStack_70 - (int)*(undefined8 *)(param_1 + 0x68));
                  *puVar9 = uStack_68;
                } while (1 < (uint)lVar2);
              }
              else {
                (**(code **)(param_1 + 0xb0))(*(undefined8 *)(param_1 + 8),uStack_78,iVar11 - iVar4)
                ;
              }
            }
          }
          else {
            (**(code **)(param_1 + 0xa8))(*(undefined8 *)(param_1 + 8));
          }
          *param_3 = uStack_80;
          *param_5 = uStack_80;
          if (*(int *)(param_1 + 0x398) == 2) {
            return 0x23;
          }
          return 0;
        }
        goto LAB_1082087fc;
      }
      if (*(code **)(param_1 + 0x88) == (code *)0x0) {
        pcVar5 = *(code **)(param_1 + 0xb0);
        if (pcVar5 != (code *)0x0) {
          uStack_68 = uStack_78;
          if (*(char *)(param_2 + 0x84) != '\0') goto LAB_108208644;
          puVar7 = puVar10;
          puVar8 = puVar9;
          if (param_2 != *(long *)(param_1 + 0x130)) {
            puVar8 = *(undefined8 **)(param_1 + 0x248);
            puVar7 = puVar8 + 1;
          }
          do {
            uStack_70 = *(undefined8 *)(param_1 + 0x68);
            lVar2 = param_2;
            (**(code **)(param_2 + 0x70))
                      (param_2,&uStack_68,uVar1,&uStack_70,*(undefined8 *)(param_1 + 0x70));
            *puVar7 = uStack_68;
            (**(code **)(param_1 + 0xb0))
                      (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x68),
                       (int)uStack_70 - (int)*(undefined8 *)(param_1 + 0x68));
            *puVar8 = uStack_68;
          } while (1 < (uint)lVar2);
        }
      }
      else {
        uStack_68 = CONCAT71(uStack_68._1_7_,10);
        (**(code **)(param_1 + 0x88))(*(undefined8 *)(param_1 + 8),&uStack_68,1);
      }
    }
    uStack_78 = uStack_80;
    *puVar13 = uStack_80;
    if (*(int *)(param_1 + 0x398) == 2) {
      return 0x23;
    }
    if (*(int *)(param_1 + 0x398) == 3) {
      *param_5 = uStack_80;
      return 0;
    }
  } while( true );
}



/* Entry: 1082088e4; end: 108208c7b;  */

long FUN_1082088e4(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lStack_48;
  
  lVar1 = param_1;
  lStack_48 = param_2;
  FUN_108208424(param_1,*(undefined8 *)(param_1 + 0x130),&lStack_48,param_3,param_4,
                *(char *)(param_1 + 0x39c) == '\0',0);
  if ((int)lVar1 == 0) {
    if (lStack_48 == 0) {
      return 0;
    }
    if (*(long *)(param_1 + 0x390) == 0) {
      *(code **)(param_1 + 0x220) = FUN_1082034a0;
      lVar1 = param_1;
      FUN_108205998(param_1,0,*(undefined8 *)(param_1 + 0x130),lStack_48,param_3,param_4,
                    *(char *)(param_1 + 0x39c) == '\0',0);
      if ((int)lVar1 == 0) {
        plVar7 = *(long **)(param_1 + 0x2c0);
        if (plVar7 == (long *)0x0) {
          return 0;
        }
        do {
          lVar1 = (long)(int)plVar7[6] + 1;
          lVar2 = plVar7[8];
          lVar5 = lVar2 + lVar1;
          lVar3 = plVar7[1];
          if (lVar3 == lVar5) {
            return 0;
          }
          uVar4 = (ulong)(int)plVar7[2];
          if (0x7fffffffU - lVar1 < uVar4) {
            return 1;
          }
          lVar6 = (long)((int)plVar7[2] + (int)lVar1);
          if (plVar7[9] - lVar2 < lVar6) {
            (**(code **)(param_1 + 0x20))(lVar2,lVar6);
            if (lVar2 == 0) {
              return 1;
            }
            if (plVar7[3] == plVar7[8]) {
              plVar7[3] = lVar2;
            }
            if (plVar7[4] != 0) {
              plVar7[4] = lVar2 + (plVar7[4] - plVar7[8]);
            }
            plVar7[8] = lVar2;
            plVar7[9] = lVar2 + lVar6;
            lVar5 = lVar2 + lVar1;
            lVar3 = plVar7[1];
            uVar4 = (ulong)(int)plVar7[2];
          }
          _memcpy(lVar5,lVar3,uVar4);
          lVar1 = 0;
          plVar7[1] = lVar5;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
    else {
      *(code **)(param_1 + 0x220) = FUN_1082091c0;
      lVar1 = param_1;
      FUN_108205998(param_1,1,*(undefined8 *)(param_1 + 0x130),lStack_48,param_3,param_4,
                    *(char *)(param_1 + 0x39c) == '\0',1);
      if ((int)lVar1 == 0) {
        plVar7 = *(long **)(param_1 + 0x2c0);
        if (plVar7 == (long *)0x0) {
          return 0;
        }
        do {
          lVar1 = (long)(int)plVar7[6] + 1;
          lVar2 = plVar7[8];
          lVar5 = lVar2 + lVar1;
          lVar3 = plVar7[1];
          if (lVar3 == lVar5) {
            return 0;
          }
          uVar4 = (ulong)(int)plVar7[2];
          if (0x7fffffffU - lVar1 < uVar4) {
            return 1;
          }
          lVar6 = (long)((int)plVar7[2] + (int)lVar1);
          if (plVar7[9] - lVar2 < lVar6) {
            (**(code **)(param_1 + 0x20))(lVar2,lVar6);
            if (lVar2 == 0) {
              return 1;
            }
            if (plVar7[3] == plVar7[8]) {
              plVar7[3] = lVar2;
            }
            if (plVar7[4] != 0) {
              plVar7[4] = lVar2 + (plVar7[4] - plVar7[8]);
            }
            plVar7[8] = lVar2;
            plVar7[9] = lVar2 + lVar6;
            lVar5 = lVar2 + lVar1;
            lVar3 = plVar7[1];
            uVar4 = (ulong)(int)plVar7[2];
          }
          _memcpy(lVar5,lVar3,uVar4);
          lVar1 = 0;
          plVar7[1] = lVar5;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  return lVar1;
}



/* Entry: 108208c7c; end: 1082091bf;  */

undefined8
FUN_108208c7c(long param_1,undefined8 *param_2,long param_3,byte *param_4,undefined8 *param_5)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  char *pcVar8;
  undefined8 uVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  undefined8 *puVar15;
  
  bVar10 = *param_4;
  pcVar8 = (char *)*param_2;
  if (bVar10 == 0) {
    if (pcVar8 != (char *)0x0) {
      return 0x1c;
    }
    iVar14 = 0;
    uVar7 = 0;
    iVar11 = 1;
    uVar9 = 0x28;
    bVar6 = true;
  }
  else {
    if ((((pcVar8 != (char *)0x0) && (*pcVar8 == 'x')) && (pcVar8[1] == 'm')) && (pcVar8[2] == 'l'))
    {
      if (pcVar8[3] == '\0') {
        if (*(char *)(param_1 + 0x1d8) == '\0') {
          bVar5 = true;
          iVar14 = 1;
          bVar6 = true;
          uVar13 = 0;
          do {
            if (bVar5) {
              if ((uVar13 < 0x25) && (bVar10 == (&UNK_10f47f946)[uVar13])) {
                iVar11 = 1;
                bVar5 = true;
              }
              else {
                iVar11 = 0;
                bVar5 = false;
              }
            }
            else {
              iVar11 = 0;
            }
            uVar7 = uVar13 + 1;
            bVar10 = param_4[uVar13 + 1];
            uVar9 = 0x26;
            uVar13 = uVar7;
          } while (bVar10 != 0);
        }
        else {
          bVar3 = *(byte *)(param_1 + 0x38c);
          uVar12 = bVar3 - 0x21;
          uVar4 = bVar3 - 0x61;
          bVar5 = true;
          iVar14 = 1;
          bVar6 = true;
          uVar13 = 0;
          do {
            if (bVar5) {
              if ((0x24 < uVar13) || (bVar10 != (&UNK_10f47f946)[uVar13])) {
                bVar5 = false;
                goto joined_r0x0001082090e4;
              }
              iVar11 = 1;
              bVar5 = true;
            }
            else {
joined_r0x0001082090e4:
              iVar11 = 0;
            }
            if ((bVar10 == bVar3) &&
               ((0x3e < uVar12 || ((1L << ((ulong)uVar12 & 0x3f) & 0x57ffffffd7fffffdU) == 0)))) {
              if (0x1d < uVar4) {
                return 2;
              }
              if ((1 << (ulong)(uVar4 & 0x1f) & 0x23ffffffU) == 0) {
                return 2;
              }
            }
            uVar7 = uVar13 + 1;
            bVar10 = param_4[uVar13 + 1];
            uVar9 = 0x26;
            uVar13 = uVar7;
          } while (bVar10 != 0);
        }
        goto LAB_108208e78;
      }
      if (((pcVar8[3] == 'n') && (pcVar8[4] == 's')) && (pcVar8[5] == '\0')) {
        return 0x27;
      }
    }
    if (*(char *)(param_1 + 0x1d8) == '\0') {
      bVar6 = true;
      bVar5 = true;
      uVar13 = 0;
      do {
        if (bVar5) {
          if ((uVar13 < 0x25) && (bVar10 == (&UNK_10f47f946)[uVar13])) {
            iVar11 = 1;
            bVar5 = true;
          }
          else {
            iVar11 = 0;
            bVar5 = false;
          }
        }
        else {
          iVar11 = 0;
        }
        if (bVar6) {
          if ((uVar13 < 0x1e) && (bVar10 == (&UNK_10f47f96b)[uVar13])) {
            bVar6 = true;
          }
          else {
            bVar6 = false;
          }
        }
        uVar7 = uVar13 + 1;
        bVar10 = param_4[uVar13 + 1];
        uVar13 = uVar7;
      } while (bVar10 != 0);
    }
    else {
      bVar3 = *(byte *)(param_1 + 0x38c);
      uVar12 = bVar3 - 0x21;
      uVar4 = bVar3 - 0x61;
      bVar6 = true;
      bVar5 = true;
      uVar13 = 0;
      do {
        if (bVar5) {
          if ((uVar13 < 0x25) && (bVar10 == (&UNK_10f47f946)[uVar13])) {
            iVar11 = 1;
            bVar5 = true;
          }
          else {
            iVar11 = 0;
            bVar5 = false;
          }
        }
        else {
          iVar11 = 0;
        }
        if (bVar6) {
          if ((uVar13 < 0x1e) && (bVar10 == (&UNK_10f47f96b)[uVar13])) {
            bVar6 = true;
          }
          else {
            bVar6 = false;
          }
        }
        if (((bVar10 == bVar3) &&
            ((0x3e < uVar12 || ((1L << ((ulong)uVar12 & 0x3f) & 0x57ffffffd7fffffdU) == 0)))) &&
           ((0x1d < uVar4 || ((1 << (ulong)(uVar4 & 0x1f) & 0x23ffffffU) == 0)))) {
          return 2;
        }
        uVar7 = uVar13 + 1;
        bVar10 = param_4[uVar13 + 1];
        uVar13 = uVar7;
      } while (bVar10 != 0);
    }
    iVar14 = 0;
    uVar9 = 0x28;
  }
LAB_108208e78:
  uVar12 = (uint)uVar7;
  iVar1 = 0;
  if (uVar12 == 0x24) {
    iVar1 = iVar11;
  }
  if (iVar14 != iVar1) {
    return uVar9;
  }
  bVar5 = false;
  if (uVar12 == 0x1d) {
    bVar5 = bVar6;
  }
  if (!bVar5) {
    if (*(char *)(param_1 + 0x38c) != '\0') {
      uVar12 = uVar12 + 1;
    }
    puVar15 = *(undefined8 **)(param_1 + 0x2d8);
    if (puVar15 == (undefined8 *)0x0) {
      puVar15 = (undefined8 *)0x30;
      (**(code **)(param_1 + 0x18))();
      if (puVar15 == (undefined8 *)0x0) {
        return 1;
      }
      if (0x7fffffe7 < uVar12) {
        return 1;
      }
      uVar7 = (ulong)(uVar12 + 0x18);
      (**(code **)(param_1 + 0x18))();
      puVar15[4] = uVar7;
      if (uVar7 == 0) {
        (**(code **)(param_1 + 0x28))(puVar15);
        return 1;
      }
      *(uint *)((long)puVar15 + 0x2c) = uVar12 + 0x18;
    }
    else {
      if (*(int *)((long)puVar15 + 0x2c) < (int)uVar12) {
        if (0x7fffffe7 < uVar12) {
          return 1;
        }
        uVar7 = puVar15[4];
        (**(code **)(param_1 + 0x20))(uVar7,uVar12 + 0x18);
        if (uVar7 == 0) {
          return 1;
        }
        puVar15[4] = uVar7;
        *(uint *)((long)puVar15 + 0x2c) = uVar12 + 0x18;
      }
      else {
        uVar7 = puVar15[4];
      }
      *(undefined8 *)(param_1 + 0x2d8) = puVar15[1];
    }
    *(uint *)(puVar15 + 5) = uVar12;
    _memcpy(uVar7,param_4,(ulong)uVar12);
    if (*(char *)(param_1 + 0x38c) != '\0') {
      *(char *)(puVar15[4] + (ulong)uVar12 + -1) = *(char *)(param_1 + 0x38c);
    }
    *puVar15 = param_2;
    puVar15[2] = param_2[1];
    puVar15[3] = param_3;
    if ((*param_4 == 0) && (param_2 == (undefined8 *)(*(long *)(param_1 + 0x2b0) + 0x130))) {
      param_2[1] = 0;
      puVar15[1] = *param_5;
      *param_5 = puVar15;
    }
    else {
      param_2[1] = puVar15;
      puVar15[1] = *param_5;
      *param_5 = puVar15;
    }
    if ((param_3 != 0) && (*(code **)(param_1 + 0xd8) != (code *)0x0)) {
      pbVar2 = (byte *)0x0;
      if (param_2[1] != 0) {
        pbVar2 = param_4;
      }
      (**(code **)(param_1 + 0xd8))(*(undefined8 *)(param_1 + 8),*param_2,pbVar2);
    }
    return 0;
  }
  return 0x28;
}



/* Entry: 1082091c0; end: 1082092ff;  */

long FUN_1082091c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar1 = param_1;
  FUN_108205998(param_1,1,*(undefined8 *)(param_1 + 0x130),param_2,param_3,param_4,
                *(char *)(param_1 + 0x39c) == '\0',1);
  if ((int)lVar1 != 0) {
    return lVar1;
  }
  plVar7 = *(long **)(param_1 + 0x2c0);
  while( true ) {
    if (plVar7 == (long *)0x0) {
      return 0;
    }
    lVar1 = (long)*(int *)(plVar7 + 6) + 1;
    lVar2 = plVar7[8];
    lVar5 = lVar2 + lVar1;
    lVar3 = plVar7[1];
    if (lVar3 == lVar5) break;
    uVar4 = (ulong)*(int *)(plVar7 + 2);
    if (0x7fffffffU - lVar1 < uVar4) {
      return 1;
    }
    lVar6 = (long)(*(int *)(plVar7 + 2) + (int)lVar1);
    if (plVar7[9] - lVar2 < lVar6) {
      (**(code **)(param_1 + 0x20))(lVar2,lVar6);
      if (lVar2 == 0) {
        return 1;
      }
      if (plVar7[3] == plVar7[8]) {
        plVar7[3] = lVar2;
      }
      if (plVar7[4] != 0) {
        plVar7[4] = lVar2 + (plVar7[4] - plVar7[8]);
      }
      plVar7[8] = lVar2;
      plVar7[9] = lVar2 + lVar6;
      lVar5 = lVar2 + lVar1;
      lVar3 = plVar7[1];
      uVar4 = (ulong)*(int *)(plVar7 + 2);
    }
    _memcpy(lVar5,lVar3,uVar4);
    plVar7[1] = lVar5;
    plVar7 = (long *)*plVar7;
  }
  return 0;
}



/* Entry: 108209300; end: 108209c43;  */

void FUN_108209300(ulong param_1,ulong param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long *param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined1 *puVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  char *pcVar17;
  char cVar18;
  undefined8 *puVar19;
  bool bVar20;
  int iVar21;
  char *pcVar22;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  undefined1 uStack_71;
  long lStack_70;
  long lStack_68;
  
  plVar12 = *(long **)(param_1 + 0x2b0);
  plVar1 = (long *)(param_1 + 0x368);
LAB_108209364:
  do {
    lVar11 = param_4;
    uVar10 = param_2;
    lStack_70 = lVar11;
    (**(code **)(param_2 + 0x20))(param_2,lVar11,param_5,&lStack_70);
    uVar8 = param_1;
    func_0x000108202778(param_1,uVar10,lVar11,lStack_70,6000,param_7);
    lVar14 = lStack_70;
    if ((uVar8 & 1) == 0) {
      do {
        uVar10 = param_1;
        param_1 = *(ulong *)(uVar10 + 0x390);
      } while (param_1 != 0);
      if (*(long *)(uVar10 + 0x3c0) != 0) {
        _fprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f47f8b8);
      }
      return;
    }
    iVar21 = (int)uVar10;
    if (iVar21 < 9) {
      if (iVar21 < 0) {
        if (iVar21 != -3) {
          if (iVar21 == -4) {
            return;
          }
          if (iVar21 == -1) {
            if (param_2 != *(ulong *)(param_1 + 0x130)) {
              return;
            }
            *(long *)(param_1 + 0x230) = lVar11;
            return;
          }
          goto LAB_108209b8c;
        }
        lStack_70 = lVar11 + *(int *)(param_2 + 0x80);
        puVar13 = (undefined1 *)param_6[3];
      }
      else {
        if (iVar21 == 6) {
          lStack_68 = lVar11;
          if ((param_6[3] == 0) && (plVar9 = param_6, FUN_108203a0c(), (int)plVar9 == 0)) {
            return;
          }
          while (uVar10 = param_2,
                (**(code **)(param_2 + 0x70))(param_2,&lStack_68,lVar14,param_6 + 3,param_6[2]),
                1 < (uint)uVar10) {
            plVar9 = param_6;
            FUN_108203a0c();
            if (((ulong)plVar9 & 1) == 0) {
              return;
            }
          }
          param_4 = lStack_70;
          if (param_6[4] == 0) {
            return;
          }
          goto LAB_108209364;
        }
        if (iVar21 != 7) {
          if (iVar21 == 0) {
            if (param_2 != *(ulong *)(param_1 + 0x130)) {
              return;
            }
            *(long *)(param_1 + 0x230) = lStack_70;
            return;
          }
LAB_108209b8c:
          if (param_2 != *(ulong *)(param_1 + 0x130)) {
            return;
          }
          *(long *)(param_1 + 0x230) = lVar11;
          return;
        }
LAB_1082093dc:
        puVar13 = (undefined1 *)param_6[3];
      }
      if (((int)param_3 != 0) ||
         ((param_4 = lStack_70, puVar13 != (undefined1 *)param_6[4] && (puVar13[-1] != ' ')))) {
        if (puVar13 == (undefined1 *)param_6[2]) {
          plVar9 = param_6;
          FUN_108203a0c();
          if ((int)plVar9 == 0) {
            return;
          }
          puVar13 = (undefined1 *)param_6[3];
        }
        param_6[3] = (long)(puVar13 + 1);
        *puVar13 = 0x20;
        param_4 = lStack_70;
      }
      goto LAB_108209364;
    }
    if (iVar21 != 9) {
      if (iVar21 != 10) {
        if (iVar21 != 0x27) goto LAB_108209b8c;
        goto LAB_1082093dc;
      }
      uVar10 = param_2;
      (**(code **)(param_2 + 0x50))(param_2,lVar11);
      uVar6 = (uint)uVar10;
      if ((int)uVar6 < 0) {
        if (param_2 != *(ulong *)(param_1 + 0x130)) {
          return;
        }
        *(long *)(param_1 + 0x230) = lVar11;
        return;
      }
      if (((int)param_3 == 0) && (uVar6 == 0x20)) {
        param_4 = lStack_70;
        if ((param_6[3] == param_6[4]) || (param_4 = lStack_70, *(char *)(param_6[3] + -1) == ' '))
        goto LAB_108209364;
LAB_10820955c:
        bVar20 = false;
        bVar5 = false;
        bVar4 = true;
        puVar13 = (undefined1 *)param_6[3];
        if (puVar13 != (undefined1 *)param_6[2]) goto LAB_108209574;
LAB_108209818:
        plVar9 = param_6;
        FUN_108203a0c();
        if ((int)plVar9 == 0) {
          return;
        }
        puVar13 = (undefined1 *)param_6[3];
        param_6[3] = (long)(puVar13 + 1);
        *puVar13 = (char)uVar10;
        param_4 = lStack_70;
        if (bVar4) goto LAB_108209364;
      }
      else {
        if (uVar6 < 0x80) goto LAB_10820955c;
        if (0x7ff < uVar6) {
          if (uVar6 >> 0x10 == 0) {
            bVar4 = false;
            bVar20 = false;
            uStack_90 = uVar6 >> 6 & 0x3f | 0xffffff80;
            uStack_94 = uVar6 & 0x3f | 0xffffff80;
            uVar6 = uVar6 >> 0xc | 0xffffffe0;
            uVar10 = (ulong)uVar6;
            bVar5 = true;
            puVar13 = (undefined1 *)param_6[3];
            if (puVar13 == (undefined1 *)param_6[2]) goto LAB_108209818;
            goto LAB_108209574;
          }
          param_4 = lStack_70;
          if (uVar6 >> 0x10 < 0x11) {
            bVar4 = false;
            bVar20 = false;
            uStack_90 = uVar6 >> 0xc & 0x3f | 0xffffff80;
            bVar5 = false;
            uStack_94 = uVar6 >> 6 & 0x3f | 0xffffff80;
            uStack_98 = uVar6 & 0x3f | 0xffffff80;
            uVar6 = uVar6 >> 0x12 | 0xfffffff0;
            uVar10 = (ulong)uVar6;
            puVar13 = (undefined1 *)param_6[3];
            if (puVar13 != (undefined1 *)param_6[2]) goto LAB_108209574;
            goto LAB_108209818;
          }
          goto LAB_108209364;
        }
        bVar4 = false;
        uStack_90 = uVar6 & 0x3f | 0xffffff80;
        bVar5 = false;
        uVar6 = uVar6 >> 6 | 0xffffffc0;
        uVar10 = (ulong)uVar6;
        bVar20 = true;
        puVar13 = (undefined1 *)param_6[3];
        if (puVar13 == (undefined1 *)param_6[2]) goto LAB_108209818;
LAB_108209574:
        param_6[3] = (long)(puVar13 + 1);
        *puVar13 = (char)uVar6;
        param_4 = lStack_70;
        if (bVar4) goto LAB_108209364;
      }
      puVar13 = (undefined1 *)param_6[3];
      if (puVar13 == (undefined1 *)param_6[2]) {
        plVar9 = param_6;
        FUN_108203a0c();
        if ((int)plVar9 == 0) {
          return;
        }
        puVar13 = (undefined1 *)param_6[3];
      }
      param_6[3] = (long)(puVar13 + 1);
      *puVar13 = (char)uStack_90;
      param_4 = lStack_70;
      if (!bVar20) {
        puVar13 = (undefined1 *)param_6[3];
        if (puVar13 == (undefined1 *)param_6[2]) {
          plVar9 = param_6;
          FUN_108203a0c();
          if ((int)plVar9 == 0) {
            return;
          }
          puVar13 = (undefined1 *)param_6[3];
        }
        param_6[3] = (long)(puVar13 + 1);
        *puVar13 = (char)uStack_94;
        param_4 = lStack_70;
        if (!bVar5) {
          puVar13 = (undefined1 *)param_6[3];
          if (puVar13 == (undefined1 *)param_6[2]) {
            plVar9 = param_6;
            FUN_108203a0c();
            if ((int)plVar9 == 0) {
              return;
            }
            puVar13 = (undefined1 *)param_6[3];
          }
          param_6[3] = (long)(puVar13 + 1);
          *puVar13 = (char)uStack_98;
          param_4 = lStack_70;
        }
      }
      goto LAB_108209364;
    }
    uVar10 = param_2;
    (**(code **)(param_2 + 0x58))
              (param_2,lVar11 + *(int *)(param_2 + 0x80),lStack_70 - *(int *)(param_2 + 0x80));
    lVar14 = lStack_70;
    uStack_71 = (undefined1)uVar10;
    if ((uVar10 & 0xff) != 0) {
      func_0x000108202778(param_1,9,&uStack_71,&lStack_70,0x17b5,1);
      puVar13 = (undefined1 *)param_6[3];
      if (puVar13 == (undefined1 *)param_6[2]) {
        plVar9 = param_6;
        FUN_108203a0c();
        if ((int)plVar9 == 0) {
          return;
        }
        puVar13 = (undefined1 *)param_6[3];
      }
      param_6[3] = (long)(puVar13 + 1);
      *puVar13 = uStack_71;
      param_4 = lStack_70;
      goto LAB_108209364;
    }
    iVar21 = *(int *)(param_2 + 0x80);
    lStack_68 = lVar11 + iVar21;
    if (*plVar1 == 0) {
      iVar7 = (int)param_1 + 0x350;
      FUN_108203a0c();
      if (iVar7 == 0) {
        return;
      }
    }
    while (uVar10 = param_2,
          (**(code **)(param_2 + 0x70))
                    (param_2,&lStack_68,lVar14 - iVar21,plVar1,*(undefined8 *)(param_1 + 0x360)),
          1 < (uint)uVar10) {
      uVar10 = param_1 + 0x350;
      FUN_108203a0c();
      if ((uVar10 & 1) == 0) {
        return;
      }
    }
    if (*(long *)(param_1 + 0x370) == 0) {
      return;
    }
    puVar13 = *(undefined1 **)(param_1 + 0x368);
    if (puVar13 == *(undefined1 **)(param_1 + 0x360)) {
      iVar21 = (int)param_1 + 0x350;
      FUN_108203a0c();
      if (iVar21 == 0) {
        return;
      }
      puVar13 = (undefined1 *)*plVar1;
    }
    *(undefined1 **)(param_1 + 0x368) = puVar13 + 1;
    *puVar13 = 0;
    pcVar22 = *(char **)(param_1 + 0x370);
    if (pcVar22 == (char *)0x0) {
      return;
    }
    if (plVar12[2] == 0) {
      puVar19 = (undefined8 *)0x0;
      *(undefined8 *)(param_1 + 0x368) = *(undefined8 *)(param_1 + 0x370);
      if (param_6 == plVar12 + 0x14) goto LAB_1082097b4;
LAB_108209734:
      if ((*(char *)((long)plVar12 + 0x101) != '\0') && (*(char *)((long)plVar12 + 0x102) == '\0'))
      goto LAB_1082098ec;
LAB_108209744:
      if (puVar19 == (undefined8 *)0x0) {
        return;
      }
      if (*(char *)((long)puVar19 + 0x3a) == '\0') {
        return;
      }
    }
    else {
      uVar8 = param_1;
      FUN_108205534(param_1,pcVar22);
      lVar14 = plVar12[2];
      uVar10 = lVar14 - 1U & uVar8;
      lVar16 = *plVar12;
      puVar19 = *(undefined8 **)(lVar16 + uVar10 * 8);
      if (puVar19 != (undefined8 *)0x0) {
        uVar6 = 0;
        do {
          while( true ) {
            pcVar17 = (char *)*puVar19;
            pcVar3 = pcVar22;
            cVar18 = *pcVar22;
            if (*pcVar22 == *pcVar17) {
              do {
                pcVar17 = pcVar17 + 1;
                if (cVar18 == '\0') goto LAB_108209720;
                cVar18 = pcVar3[1];
                pcVar3 = pcVar3 + 1;
              } while (cVar18 == *pcVar17);
            }
            if (uVar6 == 0) break;
            lVar2 = lVar14;
            if (uVar6 <= uVar10) {
              lVar2 = 0;
            }
            uVar10 = lVar2 + (uVar10 - uVar6);
            puVar19 = *(undefined8 **)(lVar16 + uVar10 * 8);
            if (puVar19 == (undefined8 *)0x0) goto LAB_108209720;
          }
          uVar6 = (uint)((uVar8 & -lVar14) >> ((ulong)(*(byte *)(plVar12 + 1) - 1) & 0x3f)) &
                  (uint)(lVar14 - 1U >> 2) & 0xff | 1;
          lVar2 = lVar14;
          if (uVar6 <= uVar10) {
            lVar2 = 0;
          }
          uVar10 = lVar2 + (uVar10 - uVar6);
          puVar19 = *(undefined8 **)(lVar16 + uVar10 * 8);
        } while (puVar19 != (undefined8 *)0x0);
      }
LAB_108209720:
      *(undefined8 *)(param_1 + 0x368) = *(undefined8 *)(param_1 + 0x370);
      if (param_6 != plVar12 + 0x14) goto LAB_108209734;
LAB_1082097b4:
      if (*(int *)(param_1 + 0x214) != 0) {
        if (*(char *)((long)plVar12 + 0x102) == '\0') {
          if (*(char *)((long)plVar12 + 0x101) == '\0') goto LAB_108209744;
          goto LAB_1082098ec;
        }
        if (*(long *)(param_1 + 0x248) != 0) goto LAB_1082098ec;
        goto LAB_108209744;
      }
LAB_1082098ec:
      param_4 = lStack_70;
      if (puVar19 == (undefined8 *)0x0) goto LAB_108209364;
    }
    if (*(char *)(puVar19 + 7) != '\0') {
      if (param_2 != *(ulong *)(param_1 + 0x130)) {
        return;
      }
      *(long *)(param_1 + 0x230) = lVar11;
      return;
    }
    if (puVar19[6] != 0) {
      if (param_2 != *(ulong *)(param_1 + 0x130)) {
        return;
      }
      *(long *)(param_1 + 0x230) = lVar11;
      return;
    }
    lVar14 = puVar19[1];
    if (lVar14 == 0) {
      if (param_2 != *(ulong *)(param_1 + 0x130)) {
        return;
      }
      *(long *)(param_1 + 0x230) = lVar11;
      return;
    }
    iVar21 = *(int *)(puVar19 + 2);
    *(undefined1 *)(puVar19 + 7) = 1;
    uVar10 = param_1;
    do {
      uVar8 = uVar10;
      uVar10 = *(ulong *)(uVar8 + 0x390);
    } while (*(ulong *)(uVar8 + 0x390) != 0);
    *(int *)(uVar8 + 0x3d8) = *(int *)(uVar8 + 0x3d8) + 1;
    uVar6 = *(int *)(uVar8 + 0x3dc) + 1;
    *(uint *)(uVar8 + 0x3dc) = uVar6;
    if (*(uint *)(uVar8 + 0x3e0) < uVar6) {
      *(uint *)(uVar8 + 0x3e0) = *(uint *)(uVar8 + 0x3e0) + 1;
    }
    lVar11 = lVar14;
    if (*(long *)(uVar8 + 1000) != 0) {
      _fprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f47f98f);
      lVar11 = puVar19[1];
    }
    uVar10 = param_1;
    FUN_108209300(param_1,*(undefined8 *)(param_1 + 0x1c8),param_3,lVar11,lVar14 + iVar21,param_6,1)
    ;
    uVar8 = param_1;
    do {
      uVar15 = uVar8;
      uVar8 = *(ulong *)(uVar15 + 0x390);
    } while (*(ulong *)(uVar15 + 0x390) != 0);
    if (*(long *)(uVar15 + 1000) != 0) {
      _fprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f47f98f);
    }
    *(int *)(uVar15 + 0x3dc) = *(int *)(uVar15 + 0x3dc) + -1;
    *(undefined1 *)(puVar19 + 7) = 0;
    param_4 = lStack_70;
    if ((int)uVar10 != 0) {
      return;
    }
  } while( true );
}



/* Entry: 108209c44; end: 108209efb;  */

void FUN_108209c44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  long in_stack_ffffffffffffff50;
  long lStack_58;
  
  uVar8 = (undefined4)in_stack_ffffffffffffff50;
  lVar7 = *(long *)(param_1 + 0x248);
  if (lVar7 != 0) {
    lVar6 = *(long *)(lVar7 + 0x18);
    lVar4 = *(long *)(lVar6 + 8) + (long)*(int *)(lVar6 + 0x14);
    lVar5 = *(long *)(lVar6 + 8) + (long)*(int *)(lVar6 + 0x10);
    lStack_58 = lVar4;
    if (*(char *)(lVar6 + 0x39) == '\0') {
      lVar3 = param_1;
      FUN_108205998(param_1,*(undefined4 *)(lVar7 + 0x20),*(undefined8 *)(param_1 + 0x1c8),lVar4,
                    lVar5,&lStack_58,0,1);
      iVar1 = (int)lVar3;
    }
    else {
      puVar2 = *(undefined8 **)(param_1 + 0x1c8);
      (*(code *)*puVar2)(puVar2,lVar4,lVar5,&lStack_58);
      in_stack_ffffffffffffff50 = CONCAT71((int7)(CONCAT44(1,uVar8) >> 8),1);
      lVar3 = param_1;
      FUN_108200368(param_1,*(undefined8 *)(param_1 + 0x1c8),lVar4,lVar5,puVar2,lStack_58,&lStack_58
                    ,0,in_stack_ffffffffffffff50);
      iVar1 = (int)lVar3;
    }
    if (iVar1 == 0) {
      lVar4 = param_1;
      if ((lVar5 == lStack_58) || (*(int *)(param_1 + 0x398) != 3)) {
        do {
          lVar5 = lVar4;
          lVar4 = *(long *)(lVar5 + 0x390);
        } while (*(long *)(lVar5 + 0x390) != 0);
        if (*(long *)(lVar5 + 1000) != 0) {
          in_stack_ffffffffffffff50 = lVar5;
          _fprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f47f98f);
        }
        *(int *)(lVar5 + 0x3dc) = *(int *)(lVar5 + 0x3dc) + -1;
        *(undefined1 *)(lVar6 + 0x38) = 0;
        lVar4 = *(long *)(lVar7 + 0x10);
        *(long *)(param_1 + 0x248) = lVar4;
        *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(param_1 + 0x250);
        *(long *)(param_1 + 0x250) = lVar7;
        if ((lVar4 == 0) || (*(int *)(param_1 + 0x398) != 3)) {
          if (*(char *)(lVar6 + 0x39) == '\0') {
            *(code **)(param_1 + 0x220) = FUN_1082034a0;
            FUN_108205998(param_1,*(long *)(param_1 + 0x390) != 0,*(undefined8 *)(param_1 + 0x130),
                          param_2,param_3,param_4,*(char *)(param_1 + 0x39c) == '\0',0);
            if ((int)param_1 == 0) {
              FUN_108206e60();
            }
          }
          else {
            *(code **)(param_1 + 0x220) = FUN_1082001cc;
            puVar2 = *(undefined8 **)(param_1 + 0x130);
            (*(code *)*puVar2)(puVar2,param_2,param_3,&lStack_58);
            FUN_108200368(param_1,*(undefined8 *)(param_1 + 0x130),param_2,param_3,puVar2,lStack_58,
                          param_4,*(char *)(param_1 + 0x39c) == '\0',
                          CONCAT71((uint7)((ulong)in_stack_ffffffffffffff50 >> 8) & 0xffffff,1));
          }
        }
      }
      else {
        *(int *)(lVar6 + 0x14) = (int)lStack_58 - *(int *)(lVar6 + 8);
      }
    }
  }
  return;
}



/* Entry: 108209efc; end: 108209fcf;  */

undefined8 FUN_108209efc(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piStack_38;
  
  piVar1 = (int *)&UNK_10f47f9fd;
  _getenv();
  if (piVar1 != (int *)0x0) {
    piVar2 = piVar1;
    ___error();
    *piVar2 = 0;
    piStack_38 = (int *)0x0;
    piVar2 = piVar1;
    _strtoul(piVar1,&piStack_38,10);
    piVar3 = piVar2;
    ___error();
    if (((*piVar3 == 0) && (piStack_38 != piVar1)) && ((char)*piStack_38 == '\0')) {
      if (piVar2 != (int *)0x0) {
        _fprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f47fa11);
        return param_2;
      }
    }
    else {
      ___error();
      *piVar3 = 0;
    }
  }
  return param_2;
}



/* Entry: 108209fd0; end: 10820a1cf;  */

undefined8
FUN_108209fd0(undefined8 *param_1,int param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  
  if (param_2 < 0xe) {
    if (param_2 == 0xb) {
      uVar1 = 0x37;
      pcVar2 = (code *)0x10820a0e8;
      goto LAB_10820a0dc;
    }
    if (param_2 == 0xc) {
      uVar1 = 1;
      pcVar2 = (code *)0x10820a0e8;
      goto LAB_10820a0dc;
    }
    if (param_2 == 0xd) {
      uVar1 = 0x38;
      pcVar2 = (code *)0x10820a0e8;
      goto LAB_10820a0dc;
    }
LAB_10820a050:
    if ((param_2 == 0x1c) && (*(int *)((long)param_1 + 0x14) == 0)) {
      return 0x3b;
    }
LAB_10820a0d0:
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 < 0x10) {
      uVar1 = 0;
      if (param_2 == 0xe) {
        return 0;
      }
      if (param_2 == 0xf) {
        pcVar2 = (code *)0x10820a0e8;
        goto LAB_10820a0dc;
      }
      goto LAB_10820a050;
    }
    if (param_2 == 0x10) {
      (**(code **)(param_5 + 0x30))
                (param_5,param_3 + (long)*(int *)(param_5 + 0x80) * 2,param_4,&UNK_10df09b98);
      if ((int)param_5 != 0) {
        uVar1 = 3;
        pcVar2 = FUN_10820a1d0;
        goto LAB_10820a0dc;
      }
      goto LAB_10820a0d0;
    }
    if (param_2 != 0x1d) goto LAB_10820a050;
    uVar1 = 2;
  }
  pcVar2 = (code *)0x10820a22c;
LAB_10820a0dc:
  *param_1 = pcVar2;
  return uVar1;
}



/* Entry: 10820a1d0; end: 10820a233;  */

undefined8 FUN_10820a1d0(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  
  if (param_2 == 0xf) {
    return 3;
  }
  uVar1 = 4;
  pcVar2 = FUN_10820a234;
  if ((param_2 != 0x12) && (param_2 != 0x29)) {
    uVar1 = 0xffffffff;
    pcVar2 = (code *)0x10820a22c;
    if ((param_2 == 0x1c) && (pcVar2 = (code *)0x10820a22c, *(int *)((long)param_1 + 0x14) == 0)) {
      return 0x3b;
    }
  }
  *param_1 = pcVar2;
  return uVar1;
}



/* Entry: 10820a234; end: 10820a5e3;  */

undefined8
FUN_10820a234(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  
  if (param_2 < 0x12) {
    if (param_2 == 0xf) {
      return 3;
    }
    if (param_2 == 0x11) {
      *param_1 = FUN_10820a5e4;
      return 8;
    }
  }
  else {
    if (param_2 == 0x12) {
      lVar1 = param_5;
      (**(code **)(param_5 + 0x30))(param_5,param_3,param_4,&UNK_10df09ba0);
      if ((int)lVar1 != 0) {
        *param_1 = 0x10820a668;
        return 3;
      }
      (**(code **)(param_5 + 0x30))(param_5,param_3,param_4,&UNK_10df09ba7);
      if ((int)param_5 != 0) {
        *param_1 = 0x10820a6bc;
        return 3;
      }
      goto LAB_10820a398;
    }
    if (param_2 == 0x19) {
      *param_1 = 0x10820a3bc;
      return 7;
    }
  }
  if ((param_2 == 0x1c) && (*(int *)((long)param_1 + 0x14) == 0)) {
    return 0x3b;
  }
LAB_10820a398:
  *param_1 = 0x10820a22c;
  return 0xffffffff;
}



/* Entry: 10820a5e4; end: 10820a92b;  */

undefined8 FUN_10820a5e4(undefined8 *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_2 - 0xbU >> 1 | (param_2 - 0xbU) * -0x80000000;
  if ((int)uVar1 < 2) {
    if (uVar1 == 0) {
      return 0x37;
    }
    if (uVar1 == 1) {
      return 0x38;
    }
  }
  else {
    if (uVar1 == 2) {
      return 0;
    }
    if (uVar1 == 9) {
      *param_1 = 0x10820a22c;
      return 2;
    }
  }
  if ((param_2 == 0x1c) && (*(int *)((long)param_1 + 0x14) == 0)) {
    return 0x3b;
  }
  *param_1 = 0x10820a22c;
  return 0xffffffff;
}



/* Entry: 10820a92c; end: 10820abb3;  */

undefined8
FUN_10820a92c(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  
  if (param_2 == 0xf) {
    return 0xb;
  }
  if (param_2 == 0x1b) {
    *param_1 = 0x10820ac5c;
    *(undefined4 *)((long)param_1 + 0xc) = 0xb;
    return 0xc;
  }
  if (param_2 == 0x12) {
    lVar1 = param_5;
    (**(code **)(param_5 + 0x30))(param_5,param_3,param_4,&UNK_10df09ba0);
    if ((int)lVar1 != 0) {
      *param_1 = 0x10820af8c;
      return 0xb;
    }
    (**(code **)(param_5 + 0x30))(param_5,param_3,param_4,&UNK_10df09ba7);
    if ((int)param_5 != 0) {
      *param_1 = 0x10820afe0;
      return 0xb;
    }
  }
  else if ((param_2 == 0x1c) && (*(int *)((long)param_1 + 0x14) == 0)) {
    return 0x3b;
  }
  *param_1 = 0x10820a22c;
  return 0xffffffff;
}



/* Entry: 10820abb4; end: 10820adb3;  */

undefined8 FUN_10820abb4(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 == 0xf) {
    return 0xb;
  }
  if (param_2 == 0x1b) {
    uVar1 = 0xd;
    uVar2 = 0x10820acc8;
  }
  else {
    uVar1 = 0xffffffff;
    uVar2 = 0x10820a22c;
    if ((param_2 == 0x1c) && (*(int *)((long)param_1 + 0x14) == 0)) {
      return 0x3b;
    }
  }
  *param_1 = uVar2;
  return uVar1;
}



/* Entry: 10820adb4; end: 10820aedb;  */

undefined8
FUN_10820adb4(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  
  if (param_2 == 0xf) {
    return 0;
  }
  if (param_2 == 0x12) {
    lVar1 = param_5;
    (**(code **)(param_5 + 0x30))(param_5,param_3,param_4,&UNK_10df09bce);
    if ((int)lVar1 != 0) {
      *param_1 = FUN_10820aedc;
      return 0;
    }
    (**(code **)(param_5 + 0x30))(param_5,param_3,param_4,&UNK_10df09bd6);
    if ((int)param_5 != 0) {
      *param_1 = 0x10820af38;
      return 0;
    }
  }
  else if ((param_2 == 0x1c) && (*(int *)((long)param_1 + 0x14) == 0)) {
    return 0x3b;
  }
  *param_1 = 0x10820a22c;
  return 0xffffffff;
}



/* Entry: 10820aedc; end: 10820b033;  */

undefined8 FUN_10820aedc(undefined8 *param_1,int param_2)

{
  if (param_2 != 0xf) {
    if (param_2 != 0x19) {
      if ((param_2 == 0x1c) && (*(int *)((long)param_1 + 0x14) == 0)) {
        return 0x3b;
      }
      *param_1 = 0x10820a22c;
      return 0xffffffff;
    }
    *param_1 = 0x10820ad30;
    *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + 1;
  }
  return 0;
}



/* Entry: 10820b034; end: 10820b10b;  */

undefined8
FUN_10820b034(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  
  if (param_2 == 0xf) {
    return 0xb;
  }
  if (param_2 == 0x12) {
    (**(code **)(param_5 + 0x30))(param_5,param_3,param_4,&UNK_10df09bdd);
    if ((int)param_5 != 0) {
      *param_1 = FUN_10820b10c;
      return 0xb;
    }
  }
  else {
    if (param_2 == 0x11) {
      uVar1 = 0x10820ad30;
      if (*(int *)((long)param_1 + 0x14) != 0) {
        uVar1 = 0x10820a3bc;
      }
      *param_1 = uVar1;
      return 0xf;
    }
    if ((param_2 == 0x1c) && (*(int *)((long)param_1 + 0x14) == 0)) {
      return 0x3b;
    }
  }
  *param_1 = 0x10820a22c;
  return 0xffffffff;
}



/* Entry: 10820b10c; end: 10820b203;  */

undefined8 FUN_10820b10c(undefined8 *param_1,int param_2)

{
  if (param_2 == 0xf) {
    return 0xb;
  }
  if (param_2 == 0x12) {
    *param_1 = 0x10820ac5c;
    *(undefined4 *)((long)param_1 + 0xc) = 0xb;
    return 0x10;
  }
  if ((param_2 == 0x1c) && (*(int *)((long)param_1 + 0x14) == 0)) {
    return 0x3b;
  }
  *param_1 = 0x10820a22c;
  return 0xffffffff;
}



/* Entry: 10820b204; end: 10820b5b3;  */

undefined8
FUN_10820b204(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0x21;
  if (param_2 != 0xf) {
    if (param_2 == 0x17) {
      *param_1 = 0x10820b600;
      return uVar1;
    }
    if (param_2 == 0x12) {
      lVar2 = param_5;
      (**(code **)(param_5 + 0x30))(param_5,param_3,param_4,&UNK_10df09be3);
      if ((int)lVar2 == 0) {
        lVar2 = param_5;
        (**(code **)(param_5 + 0x30))(param_5,param_3,param_4,&UNK_10df09be9);
        if ((int)lVar2 == 0) {
          lVar2 = param_5;
          (**(code **)(param_5 + 0x30))(param_5,param_3,param_4,&UNK_10df09bec);
          if ((int)lVar2 == 0) {
            lVar2 = param_5;
            (**(code **)(param_5 + 0x30))(param_5,param_3,param_4,&UNK_10df09bf2);
            if ((int)lVar2 == 0) {
              lVar2 = param_5;
              (**(code **)(param_5 + 0x30))(param_5,param_3,param_4,&UNK_10df09bae);
              if ((int)lVar2 == 0) {
                lVar2 = param_5;
                (**(code **)(param_5 + 0x30))(param_5,param_3,param_4,&UNK_10df09bf9);
                if ((int)lVar2 == 0) {
                  lVar2 = param_5;
                  (**(code **)(param_5 + 0x30))(param_5,param_3,param_4,&UNK_10df09c02);
                  if ((int)lVar2 == 0) {
                    lVar2 = param_5;
                    (**(code **)(param_5 + 0x30))(param_5,param_3,param_4,&UNK_10df09c0a);
                    if ((int)lVar2 == 0) {
                      (**(code **)(param_5 + 0x30))(param_5,param_3,param_4,&UNK_10df09bc5);
                      if ((int)param_5 != 0) {
                        *param_1 = FUN_10820b5b4;
                        return 0x21;
                      }
                      goto LAB_10820b424;
                    }
                    uVar1 = 0x1e;
                  }
                  else {
                    uVar1 = 0x1d;
                  }
                }
                else {
                  uVar1 = 0x1c;
                }
              }
              else {
                uVar1 = 0x1b;
              }
            }
            else {
              uVar1 = 0x1a;
            }
          }
          else {
            uVar1 = 0x19;
          }
        }
        else {
          uVar1 = 0x18;
        }
      }
      else {
        uVar1 = 0x17;
      }
      *param_1 = 0x10820b444;
      return uVar1;
    }
    if ((param_2 != 0x1c) || (*(int *)((long)param_1 + 0x14) != 0)) {
LAB_10820b424:
      *param_1 = 0x10820a22c;
      return 0xffffffff;
    }
    uVar1 = 0x3b;
  }
  return uVar1;
}



/* Entry: 10820b5b4; end: 10820b7cf;  */

undefined8 FUN_10820b5b4(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x21;
  if (param_2 == 0xf) {
    return 0x21;
  }
  if (param_2 == 0x17) {
    uVar2 = 0x10820b6b4;
  }
  else {
    uVar1 = 0xffffffff;
    uVar2 = 0x10820a22c;
    if ((param_2 == 0x1c) && (*(int *)((long)param_1 + 0x14) == 0)) {
      return 0x3b;
    }
  }
  *param_1 = uVar2;
  return uVar1;
}



/* Entry: 10820b7d0; end: 10820b923;  */

undefined8
FUN_10820b7d0(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  
  if (param_2 == 0xf) {
    return 0x27;
  }
  if (param_2 == 0x17) {
    *param_1 = FUN_10820b924;
    *(undefined4 *)(param_1 + 1) = 1;
    return 0x2c;
  }
  if (param_2 == 0x12) {
    lVar1 = param_5;
    (**(code **)(param_5 + 0x30))(param_5,param_3,param_4,&UNK_10df09c2a);
    if ((int)lVar1 != 0) {
      *param_1 = 0x10820ac5c;
      *(undefined4 *)((long)param_1 + 0xc) = 0x27;
      return 0x2a;
    }
    (**(code **)(param_5 + 0x30))(param_5,param_3,param_4,&UNK_10df09c30);
    if ((int)param_5 != 0) {
      *param_1 = 0x10820ac5c;
      *(undefined4 *)((long)param_1 + 0xc) = 0x27;
      return 0x29;
    }
  }
  else if ((param_2 == 0x1c) && (*(int *)((long)param_1 + 0x14) == 0)) {
    return 0x3b;
  }
  *param_1 = 0x10820a22c;
  return 0xffffffff;
}



/* Entry: 10820b924; end: 10820ba7b;  */

undefined8
FUN_10820b924(undefined8 *param_1,int param_2,long param_3,undefined8 param_4,long param_5)

{
  if (param_2 < 0x1e) {
    if (param_2 < 0x14) {
      if (param_2 == 0xf) {
        return 0x27;
      }
      if (param_2 == 0x12) {
LAB_10820b950:
        *param_1 = 0x10820bc04;
        return 0x33;
      }
    }
    else {
      if (param_2 == 0x14) {
        (**(code **)(param_5 + 0x30))
                  (param_5,param_3 + *(int *)(param_5 + 0x80),param_4,&UNK_10df09c34);
        if ((int)param_5 != 0) {
          *param_1 = FUN_10820ba7c;
          return 0x2b;
        }
        goto LAB_10820ba64;
      }
      if (param_2 == 0x17) {
        *(undefined4 *)(param_1 + 1) = 2;
        *param_1 = 0x10820bb24;
        return 0x2c;
      }
    }
  }
  else if (param_2 < 0x20) {
    if (param_2 == 0x1e) {
      *param_1 = 0x10820bc04;
      return 0x35;
    }
    if (param_2 == 0x1f) {
      *param_1 = 0x10820bc04;
      return 0x34;
    }
  }
  else {
    if (param_2 == 0x20) {
      *param_1 = 0x10820bc04;
      return 0x36;
    }
    if (param_2 == 0x29) goto LAB_10820b950;
  }
  if ((param_2 == 0x1c) && (*(int *)((long)param_1 + 0x14) == 0)) {
    return 0x3b;
  }
LAB_10820ba64:
  *param_1 = 0x10820a22c;
  return 0xffffffff;
}



/* Entry: 10820ba7c; end: 10820be47;  */

undefined8 FUN_10820ba7c(undefined8 *param_1,int param_2)

{
  if (param_2 < 0x18) {
    if (param_2 == 0xf) {
      return 0x27;
    }
    if (param_2 == 0x15) {
      *param_1 = 0x10820bd78;
      return 0x27;
    }
  }
  else {
    if (param_2 == 0x24) {
      *param_1 = 0x10820ac5c;
      *(undefined4 *)((long)param_1 + 0xc) = 0x27;
      return 0x2e;
    }
    if (param_2 == 0x18) {
      *param_1 = 0x10820ac5c;
      *(undefined4 *)((long)param_1 + 0xc) = 0x27;
      return 0x2d;
    }
  }
  if ((param_2 == 0x1c) && (*(int *)((long)param_1 + 0x14) == 0)) {
    return 0x3b;
  }
  *param_1 = 0x10820a22c;
  return 0xffffffff;
}



/* Entry: 10820be48; end: 10820bf6f;  */

undefined8
FUN_10820be48(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  
  if (param_2 == 0xf) {
    return 0x11;
  }
  if (param_2 == 0x12) {
    lVar1 = param_5;
    (**(code **)(param_5 + 0x30))(param_5,param_3,param_4,&UNK_10df09ba0);
    if ((int)lVar1 != 0) {
      *param_1 = FUN_10820bf70;
      return 0x11;
    }
    (**(code **)(param_5 + 0x30))(param_5,param_3,param_4,&UNK_10df09ba7);
    if ((int)param_5 != 0) {
      *param_1 = 0x10820bfd0;
      return 0x11;
    }
  }
  else if ((param_2 == 0x1c) && (*(int *)((long)param_1 + 0x14) == 0)) {
    return 0x3b;
  }
  *param_1 = 0x10820a22c;
  return 0xffffffff;
}



/* Entry: 10820bf70; end: 10820c127;  */

undefined8 FUN_10820bf70(undefined8 *param_1,int param_2)

{
  if (param_2 == 0xf) {
    return 0x11;
  }
  if (param_2 == 0x1b) {
    *param_1 = 0x10820ac5c;
    *(undefined4 *)((long)param_1 + 0xc) = 0x11;
    return 0x13;
  }
  if ((param_2 == 0x1c) && (*(int *)((long)param_1 + 0x14) == 0)) {
    return 0x3b;
  }
  *param_1 = 0x10820a22c;
  return 0xffffffff;
}



/* Entry: 10820c128; end: 10820c41f;  */

long FUN_10820c128(long param_1,long param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  byte bVar7;
  undefined1 uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  
  _memcpy(param_1,&PTR_FUN_110a30a50,0x1d0);
  uVar10 = 0;
  do {
    if (((&UNK_110a30ad8)[uVar10] != '\0' && (&UNK_110a30ad8)[uVar10] != '\x1c') &&
       (uVar10 != *(uint *)(param_2 + uVar10 * 4))) {
      return 0;
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 != 0x80);
  lVar11 = 0;
  uVar10 = 0;
  do {
    uVar1 = *(uint *)(param_2 + uVar10 * 4);
    uVar6 = (ulong)uVar1;
    if (uVar1 == 0xffffffff) {
      *(undefined1 *)(param_1 + uVar10 + 0x88) = 1;
LAB_10820c1f4:
      *(undefined2 *)(param_1 + uVar10 * 2 + 0x1e0) = 0xffff;
      *(undefined2 *)(param_1 + lVar11 + 0x3e0) = 1;
    }
    else {
      bVar4 = (byte)uVar1;
      if ((int)uVar1 < 0) {
        if ((param_3 == 0) || (uVar1 < 0xfffffffc)) {
          return 0;
        }
        *(byte *)(param_1 + uVar10 + 0x88) = '\x03' - bVar4;
        *(undefined1 *)(param_1 + lVar11 + 0x3e0) = 0;
        *(undefined2 *)(param_1 + uVar10 * 2 + 0x1e0) = 0;
      }
      else {
        if (0x7f < uVar1) {
          uVar9 = uVar1 >> 8;
          if (7 < uVar9 - 0xd8) {
            if (uVar9 == 0xff) {
              if ((uVar1 & 0x7ffffffe) != 0xfffe) goto LAB_10820c2e0;
            }
            else if ((uVar9 != 0) || ((&UNK_110a30ad8)[uVar6] != '\0')) {
LAB_10820c2e0:
              if (uVar1 >> 0x10 != 0) {
                return 0;
              }
              uVar5 = uVar1 >> 5 & 7;
              uVar3 = 1 << (ulong)(uVar1 & 0x1f);
              if ((*(uint *)(&UNK_10df09f7c +
                            (ulong)(uVar5 | (uint)(byte)(&UNK_10df0a47c)[uVar9] << 3) * 4) & uVar3)
                  == 0) {
                if ((*(uint *)(&UNK_10df09f7c +
                              (ulong)(uVar5 | (uint)(byte)(&UNK_10df0a57c)[uVar9] << 3) * 4) & uVar3
                    ) == 0) {
                  *(undefined1 *)(param_1 + uVar10 + 0x88) = 0x1c;
                  goto joined_r0x00010820c3a0;
                }
                *(undefined1 *)(param_1 + uVar10 + 0x88) = 0x1a;
                if (uVar1 < 0x800) goto LAB_10820c318;
LAB_10820c354:
                bVar7 = (byte)(uVar1 >> 0xc) | 0xe0;
                uVar9 = uVar1 >> 6;
                *(byte *)(param_1 + lVar11 + 0x3e3) = bVar4 & 0x3f | 0x80;
                uVar8 = 3;
              }
              else {
                *(undefined1 *)(param_1 + uVar10 + 0x88) = 0x16;
joined_r0x00010820c3a0:
                if (0x7ff < uVar1) goto LAB_10820c354;
LAB_10820c318:
                bVar7 = (byte)(uVar1 >> 6) | 0xc0;
                uVar8 = 2;
                uVar9 = uVar1;
              }
              *(byte *)(param_1 + lVar11 + 0x3e1) = bVar7;
              *(byte *)(param_1 + lVar11 + 0x3e2) = (byte)uVar9 & 0x3f | 0x80;
              *(undefined1 *)(param_1 + lVar11 + 0x3e0) = uVar8;
              *(short *)(param_1 + uVar10 * 2 + 0x1e0) = (short)uVar1;
              goto LAB_10820c204;
            }
          }
          *(undefined1 *)(param_1 + uVar10 + 0x88) = 0;
          goto LAB_10820c1f4;
        }
        cVar2 = (&UNK_110a30ad8)[uVar6];
        if ((cVar2 != '\0' && cVar2 != '\x1c') && uVar10 != uVar6) {
          return 0;
        }
        *(char *)(param_1 + uVar10 + 0x88) = cVar2;
        *(undefined1 *)(param_1 + lVar11 + 0x3e0) = 1;
        *(byte *)(param_1 + lVar11 + 0x3e1) = bVar4;
        if (uVar1 == 0) {
          uVar1 = 0xffffffff;
        }
        *(short *)(param_1 + uVar10 * 2 + 0x1e0) = (short)uVar1;
      }
    }
LAB_10820c204:
    uVar10 = uVar10 + 1;
    lVar11 = lVar11 + 4;
    if (uVar10 == 0x100) {
      *(long *)(param_1 + 0x1d0) = param_3;
      *(undefined8 *)(param_1 + 0x1d8) = param_4;
      if (param_3 != 0) {
        *(code **)(param_1 + 0x188) = FUN_10820c420;
        *(code **)(param_1 + 400) = FUN_10820c420;
        *(code **)(param_1 + 0x198) = FUN_10820c420;
        *(undefined8 *)(param_1 + 0x1a0) = 0x10820c480;
        *(undefined8 *)(param_1 + 0x1a8) = 0x10820c480;
        *(undefined8 *)(param_1 + 0x1b0) = 0x10820c480;
        *(undefined8 *)(param_1 + 0x1b8) = 0x10820c4e0;
        *(undefined8 *)(param_1 + 0x1c0) = 0x10820c4e0;
        *(undefined8 *)(param_1 + 0x1c8) = 0x10820c4e0;
      }
      *(code **)(param_1 + 0x70) = FUN_10820c550;
      *(undefined8 *)(param_1 + 0x78) = 0x10820c704;
      return param_1;
    }
  } while( true );
}



/* Entry: 10820c420; end: 10820c54f;  */

uint FUN_10820c420(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x1d8);
  (**(code **)(param_1 + 0x1d0))();
  if ((uVar1 & 0xffff0000) == 0) {
    return *(uint *)(&UNK_10df09f7c +
                    (ulong)((uint)uVar1 >> 5 & 7 |
                           (uint)(byte)(&UNK_10df0a57c)[(uVar1 & 0xffffffff) >> 8] << 3) * 4) &
           1 << (ulong)((uint)uVar1 & 0x1f);
  }
  return 0;
}



/* Entry: 10820c550; end: 10820c7eb;  */

undefined8 FUN_10820c550(long param_1,long *param_2,byte *param_3,long *param_4,long param_5)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  byte bStack_54;
  byte bStack_53;
  byte bStack_52;
  byte bStack_51;
  
  pbVar4 = (byte *)*param_2;
  if (pbVar4 != param_3) {
    do {
      pcVar1 = (char *)(param_1 + 0x3e0 + (ulong)*pbVar4 * 4);
      pbVar5 = (byte *)(pcVar1 + 1);
      iVar6 = (int)*pcVar1;
      if (iVar6 == 0) {
        uVar3 = (uint)*(undefined8 *)(param_1 + 0x1d8);
        (**(code **)(param_1 + 0x1d0))();
        if ((int)uVar3 < 0) {
LAB_10820c6ac:
          lVar7 = 0;
        }
        else {
          bVar2 = (byte)uVar3;
          if (uVar3 < 0x80) {
            lVar7 = 1;
            bStack_54 = bVar2;
          }
          else if (uVar3 < 0x800) {
            bStack_54 = (byte)(uVar3 >> 6) | 0xc0;
            bStack_53 = bVar2 & 0x3f | 0x80;
            lVar7 = 2;
          }
          else if (uVar3 >> 0x10 == 0) {
            bStack_54 = (byte)(uVar3 >> 0xc) | 0xe0;
            bStack_53 = (byte)(uVar3 >> 6) & 0x3f | 0x80;
            bStack_52 = bVar2 & 0x3f | 0x80;
            lVar7 = 3;
          }
          else {
            if (0x10 < uVar3 >> 0x10) goto LAB_10820c6ac;
            bStack_54 = (byte)(uVar3 >> 0x12) | 0xf0;
            bStack_53 = (byte)(uVar3 >> 0xc) & 0x3f | 0x80;
            bStack_52 = (byte)(uVar3 >> 6) & 0x3f | 0x80;
            bStack_51 = bVar2 & 0x3f | 0x80;
            lVar7 = 4;
          }
        }
        iVar6 = (int)lVar7;
        if (param_5 - *param_4 < lVar7) {
          return 2;
        }
        pbVar4 = (byte *)*param_2 +
                 ((ulong)*(byte *)(param_1 + 0x88 + (ulong)*(byte *)*param_2) - 3);
        pbVar5 = &bStack_54;
      }
      else {
        if (param_5 - *param_4 < (long)iVar6) {
          return 2;
        }
        pbVar4 = pbVar4 + 1;
      }
      *param_2 = (long)pbVar4;
      _memcpy(*param_4,pbVar5,(long)iVar6);
      *param_4 = *param_4 + (long)iVar6;
      pbVar4 = (byte *)*param_2;
    } while (pbVar4 != param_3);
  }
  return 0;
}



/* Entry: 10820c7ec; end: 10820c85b;  */

undefined8 FUN_10820c7ec(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  FUN_10820c85c();
  if (param_3 != -1) {
    *(char *)((long)param_1 + 0x85) = (char)param_3;
    *param_1 = 0x10820ca90;
    param_1[1] = 0x10820cab0;
    param_1[0xc] = 0x10820cad0;
    param_1[0x11] = param_2;
    *param_2 = param_1;
    return 1;
  }
  return 0;
}



/* Entry: 10820c85c; end: 10820cbb7;  */

int FUN_10820c85c(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  
  if (param_1 == (byte *)0x0) {
    iVar5 = 6;
  }
  else {
    pbVar4 = &UNK_10f47fa3d;
    pbVar6 = param_1;
    do {
      bVar1 = *pbVar6;
      bVar2 = *pbVar4;
      uVar3 = bVar1 - 0x20;
      if (0x19 < bVar1 - 0x61) {
        uVar3 = (uint)bVar1;
      }
      uVar7 = bVar2 - 0x20;
      if (0x19 < bVar2 - 0x61) {
        uVar7 = (uint)bVar2;
      }
      iVar5 = 2;
      if ((uVar3 & 0xff) != 0) {
        iVar5 = 0;
      }
      if ((uVar3 & 0xff) != (uVar7 & 0xff)) {
        iVar5 = 1;
      }
      pbVar4 = pbVar4 + 1;
      pbVar6 = pbVar6 + 1;
    } while (iVar5 == 0);
    if (iVar5 == 2) {
      return 0;
    }
    pbVar4 = &UNK_10f47fa48;
    pbVar6 = param_1;
    do {
      bVar1 = *pbVar6;
      bVar2 = *pbVar4;
      uVar3 = bVar1 - 0x20;
      if (0x19 < bVar1 - 0x61) {
        uVar3 = (uint)bVar1;
      }
      uVar7 = bVar2 - 0x20;
      if (0x19 < bVar2 - 0x61) {
        uVar7 = (uint)bVar2;
      }
      iVar5 = 2;
      if ((uVar3 & 0xff) != 0) {
        iVar5 = 0;
      }
      if ((uVar3 & 0xff) != (uVar7 & 0xff)) {
        iVar5 = 1;
      }
      pbVar4 = pbVar4 + 1;
      pbVar6 = pbVar6 + 1;
    } while (iVar5 == 0);
    if (iVar5 == 2) {
      return 1;
    }
    pbVar4 = &UNK_10f47fa51;
    pbVar6 = param_1;
    do {
      bVar1 = *pbVar6;
      bVar2 = *pbVar4;
      uVar3 = bVar1 - 0x20;
      if (0x19 < bVar1 - 0x61) {
        uVar3 = (uint)bVar1;
      }
      uVar7 = bVar2 - 0x20;
      if (0x19 < bVar2 - 0x61) {
        uVar7 = (uint)bVar2;
      }
      iVar5 = 2;
      if ((uVar3 & 0xff) != 0) {
        iVar5 = 0;
      }
      if ((uVar3 & 0xff) != (uVar7 & 0xff)) {
        iVar5 = 1;
      }
      pbVar4 = pbVar4 + 1;
      pbVar6 = pbVar6 + 1;
    } while (iVar5 == 0);
    if (iVar5 != 2) {
      pbVar4 = &UNK_10f47fa57;
      pbVar6 = param_1;
      do {
        bVar1 = *pbVar6;
        bVar2 = *pbVar4;
        uVar3 = bVar1 - 0x20;
        if (0x19 < bVar1 - 0x61) {
          uVar3 = (uint)bVar1;
        }
        uVar7 = bVar2 - 0x20;
        if (0x19 < bVar2 - 0x61) {
          uVar7 = (uint)bVar2;
        }
        iVar5 = 2;
        if ((uVar3 & 0xff) != 0) {
          iVar5 = 0;
        }
        if ((uVar3 & 0xff) != (uVar7 & 0xff)) {
          iVar5 = 1;
        }
        pbVar4 = pbVar4 + 1;
        pbVar6 = pbVar6 + 1;
      } while (iVar5 == 0);
      if (iVar5 == 2) {
        return 3;
      }
      pbVar4 = &UNK_10f47fa5e;
      pbVar6 = param_1;
      do {
        bVar1 = *pbVar6;
        bVar2 = *pbVar4;
        uVar3 = bVar1 - 0x20;
        if (0x19 < bVar1 - 0x61) {
          uVar3 = (uint)bVar1;
        }
        uVar7 = bVar2 - 0x20;
        if (0x19 < bVar2 - 0x61) {
          uVar7 = (uint)bVar2;
        }
        iVar5 = 2;
        if ((uVar3 & 0xff) != 0) {
          iVar5 = 0;
        }
        if ((uVar3 & 0xff) != (uVar7 & 0xff)) {
          iVar5 = 1;
        }
        pbVar4 = pbVar4 + 1;
        pbVar6 = pbVar6 + 1;
      } while (iVar5 == 0);
      if (iVar5 == 2) {
        return 4;
      }
      pbVar4 = &UNK_10f47fa67;
      do {
        bVar1 = *param_1;
        bVar2 = *pbVar4;
        uVar3 = bVar1 - 0x20;
        if (0x19 < bVar1 - 0x61) {
          uVar3 = (uint)bVar1;
        }
        uVar7 = bVar2 - 0x20;
        if (0x19 < bVar2 - 0x61) {
          uVar7 = (uint)bVar2;
        }
        iVar5 = 2;
        if ((uVar3 & 0xff) != 0) {
          iVar5 = 0;
        }
        if ((uVar3 & 0xff) != (uVar7 & 0xff)) {
          iVar5 = 1;
        }
        param_1 = param_1 + 1;
        pbVar4 = pbVar4 + 1;
      } while (iVar5 == 0);
      if (iVar5 == 1) {
        return -1;
      }
      return 5;
    }
  }
  return iVar5;
}



/* Entry: 10820cbb8; end: 10820cc07;  */

void FUN_10820cbb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  FUN_10820cc08(FUN_10820cef8,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                param_9,param_10);
  return;
}



/* Entry: 10820cc08; end: 10820cef7;  */

undefined8
FUN_10820cc08(code *param_1,int param_2,long param_3,long param_4,long param_5,long *param_6,
             long *param_7,long *param_8,long *param_9,long *param_10,undefined4 *param_11)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  char *pcStack_78;
  char cStack_69;
  long lStack_68;
  
  lStack_90 = 0;
  lStack_88 = 0;
  uStack_98 = 0;
  lStack_80 = param_4 + (long)*(int *)(param_3 + 0x80) * 5;
  param_5 = param_5 + (long)*(int *)(param_3 + 0x80) * -2;
  lVar2 = param_3;
  func_0x000108219120(param_3,lStack_80,param_5,&lStack_90,&uStack_98,&lStack_88,&lStack_80);
  lVar4 = lStack_90;
  uVar8 = uStack_98;
  lVar3 = lStack_80;
  if ((int)lVar2 == 0 || lStack_90 == 0) goto LAB_10820cc8c;
  lVar3 = param_3;
  (**(code **)(param_3 + 0x30))(param_3,lStack_90,uStack_98,&UNK_10df0a67c);
  if ((int)lVar3 == 0) {
    lVar3 = lVar4;
    if (param_2 == 0) goto LAB_10820cc8c;
  }
  else {
    if (param_7 != (long *)0x0) {
      *param_7 = lStack_88;
    }
    if (param_8 != (long *)0x0) {
      *param_8 = lStack_80;
    }
    lVar4 = param_3;
    func_0x000108219120(param_3,lStack_80,param_5,&lStack_90,&uStack_98,&lStack_88,&lStack_80);
    lVar3 = lStack_80;
    if ((int)lVar4 == 0) goto LAB_10820cc8c;
    lVar4 = lStack_90;
    uVar8 = uStack_98;
    if (lStack_90 == 0) {
      if (param_2 == 0) {
        return 1;
      }
      goto LAB_10820cc8c;
    }
  }
  lVar2 = param_3;
  (**(code **)(param_3 + 0x30))(param_3,lVar4,uVar8,&UNK_10df0a684);
  lVar3 = lStack_88;
  if ((int)lVar2 != 0) {
    lStack_68 = lStack_88;
    pcStack_78 = &cStack_69;
    (**(code **)(param_3 + 0x70))(param_3,&lStack_68,param_5,&pcStack_78,&lStack_68);
    lVar4 = lStack_80;
    if ((pcStack_78 == &cStack_69) || (0x19 < ((int)cStack_69 & 0xffffffdfU) - 0x41))
    goto LAB_10820cc8c;
    if (param_9 != (long *)0x0) {
      *param_9 = lVar3;
    }
    if (param_10 != (long *)0x0) {
      lVar2 = param_3;
      (*param_1)(param_3,lVar3,lStack_80 - *(int *)(param_3 + 0x80));
      *param_10 = lVar2;
    }
    lVar2 = param_3;
    func_0x000108219120(param_3,lVar4,param_5,&lStack_90,&uStack_98,&lStack_88,&lStack_80);
    lVar3 = lStack_80;
    if ((int)lVar2 == 0) goto LAB_10820cc8c;
    lVar4 = lStack_90;
    uVar8 = uStack_98;
    if (lStack_90 == 0) {
      return 1;
    }
  }
  lVar5 = param_3;
  (**(code **)(param_3 + 0x30))(param_3,lVar4,uVar8,&UNK_10df0a68d);
  lVar2 = lStack_80;
  lVar1 = lStack_88;
  lVar3 = lVar4;
  if ((param_2 != 0) || ((int)lVar5 == 0)) goto LAB_10820cc8c;
  lVar4 = param_3;
  (**(code **)(param_3 + 0x30))
            (param_3,lStack_88,lStack_80 - *(int *)(param_3 + 0x80),&UNK_10df0a698);
  if ((int)lVar4 == 0) {
    lVar4 = param_3;
    (**(code **)(param_3 + 0x30))(param_3,lVar1,lVar2 - *(int *)(param_3 + 0x80),&UNK_10df0a69c);
    lVar3 = lVar1;
    if ((int)lVar4 == 0) goto LAB_10820cc8c;
    if (param_11 != (undefined4 *)0x0) {
      uVar6 = 0;
      goto LAB_10820ce7c;
    }
  }
  else if (param_11 != (undefined4 *)0x0) {
    uVar6 = 1;
LAB_10820ce7c:
    *param_11 = uVar6;
  }
  while( true ) {
    pcStack_78 = &cStack_69;
    lStack_68 = lVar2;
    (**(code **)(param_3 + 0x70))(param_3,&lStack_68,param_5,&pcStack_78,&lStack_68);
    uVar7 = (uint)cStack_69;
    if (pcStack_78 == &cStack_69) {
      uVar7 = 0xffffffff;
    }
    if (0x20 < uVar7 || (1L << ((ulong)uVar7 & 0x3f) & 0x100002600U) == 0) break;
    lVar2 = lVar2 + *(int *)(param_3 + 0x80);
  }
  lVar3 = lVar2;
  if (lVar2 == param_5) {
    return 1;
  }
LAB_10820cc8c:
  *param_6 = lVar3;
  return 0;
}



/* Entry: 10820cef8; end: 10820d037;  */

void FUN_10820cef8(undefined *param_1,long param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  byte *pbVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *pbStack_d0;
  long lStack_c8;
  byte abStack_c0 [136];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  abStack_c0[0x68] = 0;
  abStack_c0[0x69] = 0;
  abStack_c0[0x6a] = 0;
  abStack_c0[0x6b] = 0;
  abStack_c0[0x6c] = 0;
  abStack_c0[0x6d] = 0;
  abStack_c0[0x6e] = 0;
  abStack_c0[0x6f] = 0;
  abStack_c0[0x60] = 0;
  abStack_c0[0x61] = 0;
  abStack_c0[0x62] = 0;
  abStack_c0[99] = 0;
  abStack_c0[100] = 0;
  abStack_c0[0x65] = 0;
  abStack_c0[0x66] = 0;
  abStack_c0[0x67] = 0;
  abStack_c0[0x78] = 0;
  abStack_c0[0x79] = 0;
  abStack_c0[0x7a] = 0;
  abStack_c0[0x7b] = 0;
  abStack_c0[0x7c] = 0;
  abStack_c0[0x7d] = 0;
  abStack_c0[0x7e] = 0;
  abStack_c0[0x7f] = 0;
  abStack_c0[0x70] = 0;
  abStack_c0[0x71] = 0;
  abStack_c0[0x72] = 0;
  abStack_c0[0x73] = 0;
  abStack_c0[0x74] = 0;
  abStack_c0[0x75] = 0;
  abStack_c0[0x76] = 0;
  abStack_c0[0x77] = 0;
  abStack_c0[0x48] = 0;
  abStack_c0[0x49] = 0;
  abStack_c0[0x4a] = 0;
  abStack_c0[0x4b] = 0;
  abStack_c0[0x4c] = 0;
  abStack_c0[0x4d] = 0;
  abStack_c0[0x4e] = 0;
  abStack_c0[0x4f] = 0;
  abStack_c0[0x40] = 0;
  abStack_c0[0x41] = 0;
  abStack_c0[0x42] = 0;
  abStack_c0[0x43] = 0;
  abStack_c0[0x44] = 0;
  abStack_c0[0x45] = 0;
  abStack_c0[0x46] = 0;
  abStack_c0[0x47] = 0;
  abStack_c0[0x58] = 0;
  abStack_c0[0x59] = 0;
  abStack_c0[0x5a] = 0;
  abStack_c0[0x5b] = 0;
  abStack_c0[0x5c] = 0;
  abStack_c0[0x5d] = 0;
  abStack_c0[0x5e] = 0;
  abStack_c0[0x5f] = 0;
  abStack_c0[0x50] = 0;
  abStack_c0[0x51] = 0;
  abStack_c0[0x52] = 0;
  abStack_c0[0x53] = 0;
  abStack_c0[0x54] = 0;
  abStack_c0[0x55] = 0;
  abStack_c0[0x56] = 0;
  abStack_c0[0x57] = 0;
  abStack_c0[0x28] = 0;
  abStack_c0[0x29] = 0;
  abStack_c0[0x2a] = 0;
  abStack_c0[0x2b] = 0;
  abStack_c0[0x2c] = 0;
  abStack_c0[0x2d] = 0;
  abStack_c0[0x2e] = 0;
  abStack_c0[0x2f] = 0;
  abStack_c0[0x20] = 0;
  abStack_c0[0x21] = 0;
  abStack_c0[0x22] = 0;
  abStack_c0[0x23] = 0;
  abStack_c0[0x24] = 0;
  abStack_c0[0x25] = 0;
  abStack_c0[0x26] = 0;
  abStack_c0[0x27] = 0;
  abStack_c0[0x38] = 0;
  abStack_c0[0x39] = 0;
  abStack_c0[0x3a] = 0;
  abStack_c0[0x3b] = 0;
  abStack_c0[0x3c] = 0;
  abStack_c0[0x3d] = 0;
  abStack_c0[0x3e] = 0;
  abStack_c0[0x3f] = 0;
  abStack_c0[0x30] = 0;
  abStack_c0[0x31] = 0;
  abStack_c0[0x32] = 0;
  abStack_c0[0x33] = 0;
  abStack_c0[0x34] = 0;
  abStack_c0[0x35] = 0;
  abStack_c0[0x36] = 0;
  abStack_c0[0x37] = 0;
  abStack_c0[8] = 0;
  abStack_c0[9] = 0;
  abStack_c0[10] = 0;
  abStack_c0[0xb] = 0;
  abStack_c0[0xc] = 0;
  abStack_c0[0xd] = 0;
  abStack_c0[0xe] = 0;
  abStack_c0[0xf] = 0;
  abStack_c0[0] = 0;
  abStack_c0[1] = 0;
  abStack_c0[2] = 0;
  abStack_c0[3] = 0;
  abStack_c0[4] = 0;
  abStack_c0[5] = 0;
  abStack_c0[6] = 0;
  abStack_c0[7] = 0;
  abStack_c0[0x18] = 0;
  abStack_c0[0x19] = 0;
  abStack_c0[0x1a] = 0;
  abStack_c0[0x1b] = 0;
  abStack_c0[0x1c] = 0;
  abStack_c0[0x1d] = 0;
  abStack_c0[0x1e] = 0;
  abStack_c0[0x1f] = 0;
  abStack_c0[0x10] = 0;
  abStack_c0[0x11] = 0;
  abStack_c0[0x12] = 0;
  abStack_c0[0x13] = 0;
  abStack_c0[0x14] = 0;
  abStack_c0[0x15] = 0;
  abStack_c0[0x16] = 0;
  abStack_c0[0x17] = 0;
  pbStack_d0 = abStack_c0;
  lStack_c8 = param_2;
  (**(code **)(param_1 + 0x70))(param_1,&lStack_c8,param_3,&pbStack_d0,abStack_c0 + 0x7f);
  if (lStack_c8 == param_3) goto LAB_10820cf80;
LAB_10820cf60:
  puVar3 = (undefined *)0x0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  do {
    ___stack_chk_fail(puVar3);
LAB_10820cf80:
    lVar5 = 0;
    *pbStack_d0 = 0;
    do {
      bVar1 = abStack_c0[lVar5];
      bVar2 = (&UNK_10f47fa57)[lVar5];
      uVar7 = bVar1 - 0x20;
      if (0x19 < bVar1 - 0x61) {
        uVar7 = (uint)bVar1;
      }
      uVar8 = bVar2 - 0x20;
      if (0x19 < bVar2 - 0x61) {
        uVar8 = (uint)bVar2;
      }
      iVar6 = 2;
      if ((uVar7 & 0xff) != 0) {
        iVar6 = 0;
      }
      if ((uVar7 & 0xff) != (uVar8 & 0xff)) {
        iVar6 = 1;
      }
      lVar5 = lVar5 + 1;
    } while (iVar6 == 0);
    if ((iVar6 == 1) || (puVar3 = param_1, *(int *)(param_1 + 0x80) != 2)) {
      pbVar4 = abStack_c0;
      FUN_10820c85c();
      if ((int)pbVar4 == -1) goto LAB_10820cf60;
      puVar3 = (&PTR_PTR_110a30df0)[(ulong)pbVar4 & 0xffffffff];
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
  } while( true );
}



/* Entry: 10820d038; end: 10820d0a7;  */

undefined8 FUN_10820d038(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  FUN_10820c85c();
  if (param_3 != -1) {
    *(char *)((long)param_1 + 0x85) = (char)param_3;
    *param_1 = FUN_10820d0a8;
    param_1[1] = 0x10820d0c8;
    param_1[0xc] = 0x10820cad0;
    param_1[0x11] = param_2;
    *param_2 = param_1;
    return 1;
  }
  return 0;
}



/* Entry: 10820d0a8; end: 10820d0e7;  */

/* WARNING: Removing unreachable block (ram,0x00010821550c) */
/* WARNING: Removing unreachable block (ram,0x00010821543c) */
/* WARNING: Removing unreachable block (ram,0x0001082154d4) */
/* WARNING: Removing unreachable block (ram,0x0001082153b0) */
/* WARNING: Removing unreachable block (ram,0x0001082153bc) */
/* WARNING: Removing unreachable block (ram,0x000108215534) */
/* WARNING: Removing unreachable block (ram,0x0001082154fc) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10820d0a8(long param_1,byte *param_2,byte *param_3,long *param_4)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  uint uStack_54;
  
  if (param_3 <= param_2) {
    return (byte *)0xfffffffc;
  }
  puVar13 = *(undefined8 **)(param_1 + 0x88);
  if (param_2 + 1 == param_3) {
    if (*(byte *)(param_1 + 0x85) - 3 < 3) {
      return (byte *)0xffffffff;
    }
    bVar1 = *param_2;
    uVar11 = bVar1 - 0xef;
    if (((uVar11 < 0x11 && (1 << (ulong)(uVar11 & 0x1f) & 0x18001U) != 0) || (bVar1 == 0)) ||
       (bVar1 == 0x3c)) {
      return (byte *)0xffffffff;
    }
    goto LAB_108215540;
  }
  uVar5 = CONCAT11(*param_2,param_2[1]);
  if (0xfefe < uVar5) {
    if (uVar5 == 0xfffe) {
      *param_4 = (long)(param_2 + 2);
      *puVar13 = &PTR_DAT_110a31eb0;
      return (byte *)0xe;
    }
    if (uVar5 == 0xfeff) {
      *param_4 = (long)(param_2 + 2);
      *puVar13 = &PTR_DAT_110a31ce0;
      return (byte *)0xe;
    }
LAB_108215494:
    if (*param_2 != 0) {
      if (param_2[1] != 0) {
LAB_108215540:
        pbVar9 = (&PTR_PTR_110a31738)[*(char *)(param_1 + 0x85)];
        *puVar13 = pbVar9;
                    /* WARNING: Could not emulate address calculation at 0x00010821554c */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)pbVar9)(pbVar9,param_2,param_3,param_4);
        return pbVar9;
      }
      *puVar13 = &PTR_DAT_110a31eb0;
      goto DAT_10821183c;
    }
    *puVar13 = &PTR_DAT_110a31ce0;
    if (param_3 <= param_2) {
      return (byte *)0xfffffffc;
    }
    uVar12 = (long)param_3 - (long)param_2;
    if ((uVar12 & 0xfffffffffffffffe) != 0 && (uVar12 & 1) != 0) {
      param_3 = param_2 + (uVar12 & 0xfffffffffffffffe);
    }
    if (uVar12 == 1) {
      return (byte *)0xffffffff;
    }
    bVar1 = *param_2;
    uVar11 = (uint)bVar1;
    if (0xdb < bVar1) {
      if (uVar11 - 0xdc < 4) goto code_r0x000108215648;
      if (uVar11 != 0xff) goto code_r0x0001082156d0;
      uVar12 = (ulong)param_2[1];
      if (0xfd < param_2[1]) goto code_r0x000108215648;
code_r0x0001082156d4:
      uVar14 = (uint)(uVar12 >> 5);
      uVar11 = 1 << (ulong)((uint)uVar12 & 0x1f);
      if ((uVar11 & *(uint *)(&UNK_10df09f7c +
                             (ulong)(uVar14 | (uint)(byte)(&UNK_10df0a47c)[bVar1] << 3) * 4)) == 0)
      {
        if ((*(uint *)(&UNK_10df09f7c +
                      (ulong)(uVar14 | (uint)(byte)(&UNK_10df0a57c)[bVar1] << 3) * 4) & uVar11) == 0
           ) goto code_r0x000108215648;
code_r0x000108215738:
        pbVar9 = (byte *)0x13;
        goto joined_r0x000108215748;
      }
code_r0x000108215708:
      pbVar9 = (byte *)0x12;
joined_r0x000108215748:
      uVar12 = (long)param_3 - (long)(param_2 + 2);
      if (1 < (long)uVar12) {
        param_2 = param_2 + 2;
        do {
          bVar1 = *param_2;
          uVar11 = (uint)bVar1;
          if (bVar1 < 0xdc) {
            if (uVar11 == 0) {
              uVar16 = (ulong)param_2[1];
              iVar6 = (int)pbVar9;
              switch((&UNK_110a31d68)[uVar16]) {
              case 6:
                if (uVar12 == 2) {
                  return (byte *)0xfffffffe;
                }
                break;
              case 7:
                goto code_r0x000108215904;
              case 9:
              case 10:
              case 0xb:
              case 0x14:
              case 0x15:
              case 0x1e:
              case 0x20:
              case 0x23:
              case 0x24:
                *param_4 = (long)param_2;
                return pbVar9;
              case 0xf:
                if (iVar6 != 0x13) {
                  *param_4 = (long)(param_2 + 2);
                  return (byte *)0x1e;
                }
                break;
              case 0x16:
              case 0x18:
              case 0x19:
              case 0x1a:
              case 0x1b:
                goto code_r0x00010821582c;
              case 0x17:
                pbVar7 = param_2 + 2;
                if (iVar6 == 0x29) {
code_r0x0001082157d4:
                  pbVar9 = (byte *)0x13;
                }
                else {
                  if (iVar6 != 0x12) goto code_r0x000108215830;
                  uVar12 = (long)param_3 - (long)pbVar7;
                  if ((long)uVar12 < 2) {
                    return (byte *)0xffffffff;
                  }
                  bVar1 = *pbVar7;
                  uVar11 = (uint)bVar1;
                  if (0xdb < bVar1) {
                    if (3 < uVar11 - 0xdc) {
                      if (uVar11 != 0xff) goto code_r0x000108215898;
                      uVar16 = (ulong)param_2[3];
                      if (param_2[3] < 0xfe) goto code_r0x00010821589c;
                    }
                    goto code_r0x0001082157d4;
                  }
                  if (uVar11 == 0) {
                    uVar16 = (ulong)param_2[3];
                    bVar3 = (&UNK_110a31d68)[uVar16];
                    pbVar9 = (byte *)0x13;
                    uVar11 = (uint)bVar3;
                    if (bVar3 < 0x18) {
                      if (bVar3 < 0x16) {
                        if (uVar11 == 5) goto code_r0x000108215c64;
                        if (uVar11 == 6) {
                          if (uVar12 == 2) {
                            return (byte *)0xfffffffe;
                          }
                          goto code_r0x000108215c64;
                        }
                        if (uVar11 == 7) goto code_r0x0001082158ec;
                      }
                      else if (uVar11 == 0x16) goto code_r0x0001082158b4;
                    }
                    else {
                      if (uVar11 - 0x18 < 4) goto code_r0x0001082158b4;
                      if (uVar11 == 0x1d) goto code_r0x00010821589c;
                    }
                  }
                  else {
                    if (uVar11 - 0xd8 < 4) {
code_r0x0001082158ec:
                      if (uVar12 < 4) {
                        return (byte *)0xfffffffe;
                      }
                      goto code_r0x000108215c64;
                    }
code_r0x000108215898:
                    uVar16 = (ulong)param_2[3];
code_r0x00010821589c:
                    if ((*(uint *)(&UNK_10df09f7c +
                                  (ulong)((uint)(uVar16 >> 5) |
                                         (uint)(byte)(&UNK_10df0a57c)[bVar1] << 3) * 4) >>
                         (ulong)((uint)uVar16 & 0x1f) & 1) == 0) {
code_r0x000108215c64:
                      *param_4 = (long)pbVar7;
                      return (byte *)0x0;
                    }
code_r0x0001082158b4:
                    pbVar9 = (byte *)0x29;
                    pbVar7 = param_2 + 4;
                  }
                }
                goto code_r0x000108215830;
              case 0x1d:
                goto code_r0x000108215814;
              case 0x21:
                if (iVar6 != 0x13) {
                  *param_4 = (long)(param_2 + 2);
                  return (byte *)0x1f;
                }
                break;
              case 0x22:
                if (iVar6 != 0x13) {
                  *param_4 = (long)(param_2 + 2);
                  return (byte *)0x20;
                }
              }
            }
            else {
              if (3 < uVar11 - 0xd8) goto code_r0x000108215810;
code_r0x000108215904:
              if (uVar12 < 4) {
                return (byte *)0xfffffffe;
              }
            }
code_r0x000108215b8c:
            *param_4 = (long)param_2;
            return (byte *)0x0;
          }
          if (uVar11 == 0xff) {
            uVar16 = (ulong)param_2[1];
            if (0xfd < param_2[1]) goto code_r0x000108215b8c;
          }
          else {
            if (uVar11 - 0xdc < 4) goto code_r0x000108215b8c;
code_r0x000108215810:
            uVar16 = (ulong)param_2[1];
          }
code_r0x000108215814:
          if ((*(uint *)(&UNK_10df09f7c +
                        (ulong)((uint)(uVar16 >> 5) | (uint)(byte)(&UNK_10df0a57c)[bVar1] << 3) * 4)
               >> (ulong)((uint)uVar16 & 0x1f) & 1) == 0) goto code_r0x000108215b8c;
code_r0x00010821582c:
          pbVar7 = param_2 + 2;
code_r0x000108215830:
          param_2 = pbVar7;
          uVar12 = (long)param_3 - (long)param_2;
        } while (1 < (long)uVar12);
      }
      return (byte *)(ulong)(uint)-(int)pbVar9;
    }
    if (uVar11 - 0xd8 < 4) {
code_r0x000108215628:
      if ((long)param_3 - (long)param_2 < 4) {
        return (byte *)0xfffffffe;
      }
      goto code_r0x000108215648;
    }
    if (uVar11 != 0) {
code_r0x0001082156d0:
      uVar12 = (ulong)param_2[1];
      goto code_r0x0001082156d4;
    }
    uVar12 = (ulong)param_2[1];
    switch((&UNK_110a31d68)[uVar12]) {
    case 2:
      pbVar9 = param_2 + 2;
      if ((long)param_3 - (long)pbVar9 < 2) {
        return (byte *)0xffffffff;
      }
      bVar1 = *pbVar9;
      if (bVar1 - 0xdc < 4) {
code_r0x0001082156ac:
        *param_4 = (long)pbVar9;
        return (byte *)0x0;
      }
      if (bVar1 != 0) {
        if ((bVar1 != 0xff) || (param_2[3] < 0xfe)) {
code_r0x000108215be8:
          *param_4 = (long)param_2;
          return (byte *)0x1d;
        }
        goto code_r0x0001082156ac;
      }
      if (0x1d < (byte)(&UNK_110a31d68)[param_2[3]]) goto code_r0x0001082156ac;
      uVar11 = (uint)(byte)(&UNK_110a31d68)[param_2[3]];
      if ((1 << (ulong)(uVar11 & 0x1f) & 0x214000e0U) != 0) goto code_r0x000108215be8;
      if (uVar11 != 0xf) {
        if (uVar11 != 0x10) goto code_r0x0001082156ac;
        pbVar9 = param_2 + 4;
        if (1 < (long)param_3 - (long)pbVar9) {
          if (*pbVar9 != 0) {
code_r0x000108217a7c:
            *param_4 = (long)pbVar9;
            return (byte *)0x0;
          }
          bVar1 = (&UNK_110a31d68)[param_2[5]];
          if (bVar1 < 0x18) {
            if (bVar1 == 0x14) {
              *param_4 = (long)(param_2 + 6);
              return (byte *)0x21;
            }
            if (bVar1 != 0x16) goto code_r0x000108217a7c;
          }
          else if (bVar1 != 0x18) {
            if (bVar1 != 0x1b) goto code_r0x000108217a7c;
            pbVar9 = param_2 + 6;
            if ((long)param_3 - (long)pbVar9 < 2) {
              return (byte *)0xffffffff;
            }
            if ((*pbVar9 != 0) || (param_2[7] != 0x2d)) {
code_r0x00010821859c:
              pbVar8 = (byte *)0x0;
              pbVar10 = pbVar9;
code_r0x0001082185a0:
              *param_4 = (long)pbVar10;
              return pbVar8;
            }
            pbVar9 = param_2 + 8;
            uVar12 = (long)param_3 - (long)pbVar9;
            if ((long)uVar12 < 2) {
              return (byte *)0xffffffff;
            }
code_r0x0001082184e4:
            bVar1 = *pbVar9;
            uVar11 = (uint)bVar1;
            if (uVar11 < 0xdc) {
              if (uVar11 - 0xd8 < 4) {
code_r0x0001082184fc:
                if (uVar12 < 4) {
                  return (byte *)0xfffffffe;
                }
                pbVar7 = pbVar9 + 4;
                goto code_r0x0001082184d4;
              }
              if (uVar11 == 0) {
                bVar1 = (&UNK_110a31d68)[pbVar9[1]];
                if (bVar1 < 7) {
                  if (bVar1 == 5) goto code_r0x0001082184d0;
                  if (bVar1 == 6) {
                    if (uVar12 == 2) {
                      return (byte *)0xfffffffe;
                    }
                    pbVar7 = pbVar9 + 3;
                    goto code_r0x0001082184d4;
                  }
                  if (bVar1 < 2) goto code_r0x00010821859c;
                }
                else {
                  if (bVar1 == 7) goto code_r0x0001082184fc;
                  if (bVar1 == 0x1b) {
                    pbVar7 = pbVar9 + 2;
                    if ((long)param_3 - (long)pbVar7 < 2) {
                      return (byte *)0xffffffff;
                    }
                    if ((*pbVar7 != 0) || (pbVar9[3] != 0x2d)) goto code_r0x0001082184d4;
                    pbVar7 = pbVar9 + 4;
                    if ((long)param_3 - (long)pbVar7 < 2) {
                      return (byte *)0xffffffff;
                    }
                    if (*pbVar7 == 0) {
                      pbVar10 = pbVar9 + 6;
                      if (pbVar9[5] != 0x3e) {
                        pbVar10 = pbVar7;
                      }
                      uVar11 = 0xd;
                      if (pbVar9[5] != 0x3e) {
                        uVar11 = 0;
                      }
                      pbVar8 = (byte *)(ulong)uVar11;
                    }
                    else {
                      pbVar8 = (byte *)0x0;
                      pbVar10 = pbVar7;
                    }
                    goto code_r0x0001082185a0;
                  }
                  if (bVar1 == 8) goto code_r0x00010821859c;
                }
              }
            }
            else if (bVar1 == 0xff) {
              if (0xfd < pbVar9[1]) goto code_r0x00010821859c;
            }
            else if (bVar1 - 0xdc < 4) goto code_r0x00010821859c;
code_r0x0001082184d0:
            pbVar7 = pbVar9 + 2;
code_r0x0001082184d4:
            pbVar9 = pbVar7;
            uVar12 = (long)param_3 - (long)pbVar9;
            if ((long)uVar12 < 2) {
              return (byte *)0xffffffff;
            }
            goto code_r0x0001082184e4;
          }
          param_2 = param_2 + 6;
          uVar12 = (long)param_3 - (long)param_2;
          if (1 < (long)uVar12) {
            while( true ) {
              if ((*param_2 != 0) || (0x1e < (byte)(&UNK_110a31d68)[param_2[1]]))
              goto code_r0x000108217b90;
              uVar11 = (uint)(byte)(&UNK_110a31d68)[param_2[1]];
              if ((1 << (ulong)(uVar11 & 0x1f) & 0x1400000U) == 0) break;
              param_2 = param_2 + 2;
              uVar12 = uVar12 - 2;
              if ((long)uVar12 < 2) {
                return (byte *)0xffffffff;
              }
            }
            if ((1 << (ulong)(uVar11 & 0x1f) & 0x200600U) == 0) {
              if (uVar11 == 0x1e) {
                if (uVar12 < 4) {
                  return (byte *)0xffffffff;
                }
                if ((param_2[2] != 0) ||
                   (0x1e < (byte)(&UNK_110a31d68)[param_2[3]] ||
                    (1 << (ulong)((byte)(&UNK_110a31d68)[param_2[3]] & 0x1f) & 0x40200600U) == 0))
                goto code_r0x000108217b44;
              }
code_r0x000108217b90:
              *param_4 = (long)param_2;
              return (byte *)0x0;
            }
code_r0x000108217b44:
            *param_4 = (long)param_2;
            return (byte *)0x10;
          }
        }
        return (byte *)0xffffffff;
      }
      pbVar9 = param_2 + 4;
      uVar12 = (long)param_3 - (long)pbVar9;
      if ((long)uVar12 < 2) {
LAB_108217fc8:
        pbVar7 = (byte *)0xffffffff;
      }
      else {
        bVar1 = *pbVar9;
        uVar11 = (uint)bVar1;
        if (bVar1 == 0) {
          uVar16 = (ulong)param_2[5];
          bVar1 = (&UNK_110a31d68)[uVar16];
          if (bVar1 < 0x16) {
            if (bVar1 != 5) {
              if (bVar1 == 6) {
                if (uVar12 == 2) {
                  return (byte *)0xfffffffe;
                }
              }
              else if (bVar1 == 7) goto LAB_108217c30;
            }
          }
          else {
            if (bVar1 == 0x16 || bVar1 == 0x18) {
LAB_108217c84:
              if (1 < (long)param_3 - (long)(param_2 + 6)) {
                lVar18 = 0;
                lVar15 = 3;
                do {
                  bVar1 = pbVar9[lVar15 + -1];
                  uVar14 = (uint)bVar1;
                  if (0xdb < uVar14) {
                    if (bVar1 == 0xff) {
                      uVar17 = (ulong)pbVar9[lVar15];
                      if (pbVar9[lVar15] < 0xfe) {
LAB_108217ccc:
                        uVar14 = *(uint *)(&UNK_10df09f7c +
                                          (ulong)((uint)(uVar17 >> 5) |
                                                 (uint)(byte)(&UNK_10df0a57c)[bVar1] << 3) * 4) >>
                                 (ulong)((uint)uVar17 & 0x1f);
                        goto joined_r0x000108217d6c;
                      }
                    }
                    else if (3 < bVar1 - 0xdc) goto LAB_108217d54;
LAB_108217e28:
                    pbVar7 = pbVar9 + (2 - lVar18);
                    goto LAB_108217e34;
                  }
                  if (uVar14 == 0) {
                    uVar17 = (ulong)pbVar9[lVar15];
                    bVar3 = (&UNK_110a31d68)[uVar17];
                    uVar14 = (uint)bVar3;
                    if (bVar3 < 0x18) {
                      if (bVar3 < 0xf) {
                        if (bVar3 < 9) {
                          if (uVar14 != 5) {
                            if (bVar3 != 6) {
                              if (bVar3 == 7) goto LAB_108217dcc;
                              goto LAB_108217e28;
                            }
                            if (uVar12 + lVar18 == 4) {
                              return (byte *)0xfffffffe;
                            }
                          }
                          goto LAB_108217ddc;
                        }
                        if (1 < uVar14 - 9) goto LAB_108217e28;
LAB_108217df8:
                        pbVar7 = (byte *)0xb;
                        if ((uVar11 == 0) && (lVar18 == -4)) {
                          if ((int)uVar16 == 0x78) {
                            bVar4 = false;
                          }
                          else {
                            if ((int)uVar16 != 0x58) goto LAB_108217ec0;
                            bVar4 = true;
                          }
                          if (param_2[6] == 0) {
                            if (param_2[7] != 0x6d) {
                              if (param_2[7] != 0x4d) goto LAB_108217ec0;
                              bVar4 = true;
                            }
                            if (param_2[8] == 0) {
                              if (param_2[9] == 0x4c) {
LAB_108218020:
                                pbVar7 = pbVar9 + 6;
LAB_108217e34:
                                *param_4 = (long)pbVar7;
                                return (byte *)0x0;
                              }
                              if (param_2[9] == 0x6c) {
                                if (bVar4) goto LAB_108218020;
                                pbVar7 = (byte *)0xc;
                              }
                            }
                          }
                        }
LAB_108217ec0:
                        uVar12 = (uVar12 + lVar18) - 4;
                        if ((long)uVar12 < 2) break;
                        pbVar9 = pbVar9 + (4 - lVar18);
                        goto LAB_108217f04;
                      }
                      if (bVar3 != 0x16) {
                        if (bVar3 != 0xf) {
                          if (bVar3 == 0x15) goto LAB_108217df8;
                          goto LAB_108217e28;
                        }
                        pbVar7 = pbVar9;
                        func_0x0001082185f8(pbVar9,pbVar9 + (2 - lVar18),&uStack_54);
                        if ((int)pbVar7 == 0) {
                          *param_4 = (long)(pbVar9 + (2 - lVar18));
                          return pbVar7;
                        }
                        if (1 < (long)(uVar12 + lVar18 + -4)) {
                          pbVar7 = pbVar9 + (4 - lVar18);
                          if ((pbVar9[lVar15 + 1] == 0) && (pbVar9[lVar15 + 2] == 0x3e)) {
                            *param_4 = (long)(pbVar9 + (6 - lVar18));
                            return (byte *)(ulong)uStack_54;
                          }
                          goto LAB_108217e34;
                        }
                        break;
                      }
                    }
                    else if (3 < bVar3 - 0x18) {
                      if (uVar14 == 0x1d) goto LAB_108217ccc;
                      goto LAB_108217e28;
                    }
                  }
                  else {
                    if (uVar14 - 0xd8 < 4) {
LAB_108217dcc:
                      if ((uVar12 + lVar18) - 2 < 4) {
                        return (byte *)0xfffffffe;
                      }
                      goto LAB_108217ddc;
                    }
LAB_108217d54:
                    uVar14 = *(uint *)(&UNK_10df09f7c +
                                      (ulong)((uint)(pbVar9[lVar15] >> 5) |
                                             (uint)(byte)(&UNK_10df0a57c)[bVar1] << 3) * 4) >>
                             (ulong)(pbVar9[lVar15] & 0x1f);
joined_r0x000108217d6c:
                    if ((uVar14 & 1) == 0) {
LAB_108217ddc:
                      pbVar7 = pbVar9 + (2 - lVar18);
                      goto LAB_108217e34;
                    }
                  }
                  lVar18 = lVar18 + -2;
                  lVar15 = lVar15 + 2;
                  if ((long)(uVar12 + lVar18 + -2) < 2) {
                    return (byte *)0xffffffff;
                  }
                } while( true );
              }
              goto LAB_108217fc8;
            }
            if (bVar1 == 0x1d) goto LAB_108217c5c;
          }
        }
        else if (bVar1 - 0xd8 < 4) {
LAB_108217c30:
          if (uVar12 < 4) {
            return (byte *)0xfffffffe;
          }
        }
        else if (3 < uVar11 - 0xdc) {
          if (uVar11 == 0xff) {
            uVar16 = (ulong)param_2[5];
            if (0xfd < param_2[5]) goto LAB_108217da0;
          }
          else {
            uVar16 = (ulong)param_2[5];
          }
LAB_108217c5c:
          if ((*(uint *)(&UNK_10df09f7c +
                        (ulong)((uint)(uVar16 >> 5) | (uint)(byte)(&UNK_10df0a47c)[uVar11] << 3) * 4
                        ) >> (ulong)((uint)uVar16 & 0x1f) & 1) != 0) goto LAB_108217c84;
        }
LAB_108217da0:
        pbVar7 = (byte *)0x0;
        *param_4 = (long)pbVar9;
      }
      return pbVar7;
    case 4:
      pbVar9 = param_2 + 2;
      if ((long)param_3 - (long)pbVar9 < 2) {
        return (byte *)0xffffffe6;
      }
      if ((*pbVar9 == 0) && (param_2[3] == 0x5d)) {
        if ((ulong)((long)param_3 - (long)pbVar9) < 4) {
          return (byte *)0xffffffff;
        }
        if ((param_2[4] == 0) && (param_2[5] == 0x3e)) {
          *param_4 = (long)(param_2 + 6);
          return (byte *)0x22;
        }
      }
      *param_4 = (long)pbVar9;
      return (byte *)0x1a;
    case 5:
      if ((long)param_3 - (long)param_2 < 2) {
        return (byte *)0xfffffffe;
      }
      break;
    case 6:
      if ((long)param_3 - (long)param_2 < 3) {
        return (byte *)0xfffffffe;
      }
      break;
    case 7:
      goto code_r0x000108215628;
    case 9:
      if (param_2 + 2 == param_3) {
        *param_4 = (long)param_3;
        return (byte *)0xfffffff1;
      }
    case 10:
    case 0x15:
      param_2 = param_2 + 2;
      lVar15 = (long)param_3 - (long)param_2;
      for (; ((1 < lVar15 && (*param_2 == 0)) &&
             ((cVar2 = (&UNK_110a31d68)[param_2[1]], cVar2 == '\x15' || cVar2 == '\n' ||
              (cVar2 == '\t' && param_2 + 2 != param_3)))); param_2 = param_2 + 2) {
        lVar15 = lVar15 + -2;
      }
      *param_4 = (long)param_2;
      return (byte *)0xf;
    case 0xb:
      *param_4 = (long)(param_2 + 2);
      return (byte *)0x11;
    case 0xc:
      uVar11 = 0xc;
      goto code_r0x000108217914;
    case 0xd:
      uVar11 = 0xd;
code_r0x000108217914:
      pbVar9 = param_2 + 2;
joined_r0x00010821791c:
      pbVar7 = pbVar9;
      uVar12 = (long)param_3 - (long)pbVar7;
      if ((long)uVar12 < 2) {
        return (byte *)0xffffffff;
      }
      bVar1 = *pbVar7;
      uVar14 = (uint)bVar1;
      if (0xdb < uVar14) {
        if (bVar1 == 0xff) {
          if (0xfd < pbVar7[1]) {
code_r0x0001082179f4:
            *param_4 = (long)pbVar7;
            return (byte *)0x0;
          }
        }
        else if (bVar1 - 0xdc < 4) goto code_r0x0001082179f4;
        goto code_r0x00010821793c;
      }
      if (uVar14 - 0xd8 < 4) {
code_r0x000108217968:
        if (uVar12 < 4) {
          return (byte *)0xfffffffe;
        }
        pbVar9 = pbVar7 + 4;
        goto joined_r0x00010821791c;
      }
      if (uVar14 == 0) {
        bVar1 = (&UNK_110a31d68)[pbVar7[1]];
        uVar14 = (uint)bVar1;
        if (6 < bVar1) {
          if (1 < uVar14 - 0xc) {
            if (bVar1 == 7) goto code_r0x000108217968;
            if (bVar1 == 8) goto code_r0x0001082179f4;
            goto code_r0x00010821793c;
          }
          pbVar9 = pbVar7 + 2;
          if (uVar11 == uVar14) {
            if ((long)param_3 - (long)pbVar9 < 2) {
              return (byte *)0xffffffe5;
            }
            *param_4 = (long)pbVar9;
            if ((*pbVar9 == 0) &&
               ((byte)(&UNK_110a31d68)[pbVar7[3]] < 0x1f &&
                (1 << (ulong)((byte)(&UNK_110a31d68)[pbVar7[3]] & 0x1f) & 0x40300e00U) != 0)) {
              return (byte *)0x1b;
            }
            return (byte *)0x0;
          }
          goto joined_r0x00010821791c;
        }
        if (bVar1 != 5) {
          if (bVar1 != 6) {
            if (uVar14 < 2) goto code_r0x0001082179f4;
            goto code_r0x00010821793c;
          }
          if (uVar12 == 2) {
            return (byte *)0xfffffffe;
          }
          pbVar9 = pbVar7 + 3;
          goto joined_r0x00010821791c;
        }
      }
code_r0x00010821793c:
      pbVar9 = pbVar7 + 2;
      goto joined_r0x00010821791c;
    case 0x13:
      pbVar9 = param_2 + 2;
      uVar12 = (long)param_3 - (long)pbVar9;
      if ((long)uVar12 < 2) {
        return (byte *)0xffffffff;
      }
      bVar1 = *pbVar9;
      uVar11 = (uint)bVar1;
      if (bVar1 < 0xdc) {
        if (uVar11 - 0xd8 < 4) {
code_r0x0001082182b4:
          if (uVar12 < 4) {
            return (byte *)0xfffffffe;
          }
        }
        else {
          if (uVar11 == 0) {
            pbVar7 = (byte *)0x0;
            uVar16 = (ulong)param_2[3];
            bVar3 = (&UNK_110a31d68)[uVar16];
            if (bVar3 < 0x16) {
              if (bVar3 == 6) {
                if (uVar12 == 2) {
                  return (byte *)0xfffffffe;
                }
                goto code_r0x0001082182d8;
              }
              if (bVar3 != 7) goto code_r0x0001082182dc;
              goto code_r0x0001082182b4;
            }
            if (bVar3 != 0x16 && bVar3 != 0x18) {
              if (bVar3 != 0x1d) goto code_r0x0001082182dc;
              goto code_r0x00010821833c;
            }
          }
          else {
code_r0x000108218338:
            uVar16 = (ulong)param_2[3];
code_r0x00010821833c:
            if ((*(uint *)(&UNK_10df09f7c +
                          (ulong)((uint)(uVar16 >> 5) | (uint)(byte)(&UNK_10df0a47c)[bVar1] << 3) *
                          4) >> (ulong)((uint)uVar16 & 0x1f) & 1) == 0) goto code_r0x0001082182d8;
          }
          pbVar9 = param_2 + 4;
          uVar12 = (long)param_3 - (long)pbVar9;
          if ((long)uVar12 < 2) {
            return (byte *)0xffffffec;
          }
          while( true ) {
            bVar1 = *pbVar9;
            uVar11 = (uint)bVar1;
            if (uVar11 < 0xdc) break;
            if (bVar1 == 0xff) {
              uVar16 = (ulong)pbVar9[1];
              if (0xfd < pbVar9[1]) goto code_r0x0001082182d8;
            }
            else {
              if (bVar1 - 0xdc < 4) goto code_r0x0001082182d8;
code_r0x000108218428:
              uVar16 = (ulong)pbVar9[1];
            }
code_r0x0001082183a8:
            if ((*(uint *)(&UNK_10df09f7c +
                          (ulong)((uint)(uVar16 >> 5) | (uint)(byte)(&UNK_10df0a57c)[bVar1] << 3) *
                          4) >> (ulong)((uint)uVar16 & 0x1f) & 1) == 0) goto code_r0x0001082182d8;
code_r0x0001082183c0:
            pbVar9 = pbVar9 + 2;
            uVar12 = uVar12 - 2;
            if ((long)uVar12 < 2) {
              return (byte *)0xffffffec;
            }
          }
          if (uVar11 == 0) {
            pbVar7 = (byte *)0x0;
            uVar16 = (ulong)pbVar9[1];
            switch((&UNK_110a31d68)[uVar16]) {
            case 6:
              if (uVar12 == 2) {
                return (byte *)0xfffffffe;
              }
              goto code_r0x0001082182d8;
            case 7:
              goto code_r0x00010821844c;
            default:
              goto code_r0x0001082182dc;
            case 9:
            case 10:
            case 0xb:
            case 0x15:
            case 0x1e:
            case 0x20:
            case 0x24:
              pbVar7 = (byte *)0x14;
              goto code_r0x0001082182dc;
            case 0x16:
            case 0x18:
            case 0x19:
            case 0x1a:
            case 0x1b:
              goto code_r0x0001082183c0;
            case 0x1d:
              goto code_r0x0001082183a8;
            }
          }
          if (3 < uVar11 - 0xd8) goto code_r0x000108218428;
code_r0x00010821844c:
          if (uVar12 < 4) {
            return (byte *)0xfffffffe;
          }
        }
      }
      else if (3 < uVar11 - 0xdc) {
        if (uVar11 != 0xff) goto code_r0x000108218338;
        uVar16 = (ulong)param_2[3];
        if (param_2[3] < 0xfe) goto code_r0x00010821833c;
      }
code_r0x0001082182d8:
      pbVar7 = (byte *)0x0;
code_r0x0001082182dc:
      *param_4 = (long)pbVar9;
      return pbVar7;
    case 0x14:
      *param_4 = (long)(param_2 + 2);
      return (byte *)0x19;
    case 0x16:
    case 0x18:
      goto code_r0x000108215708;
    case 0x17:
    case 0x19:
    case 0x1a:
    case 0x1b:
      goto code_r0x000108215738;
    case 0x1d:
      goto code_r0x0001082156d4;
    case 0x1e:
      pbVar9 = param_2 + 2;
      uVar16 = (long)param_3 - (long)pbVar9;
      uVar12 = uVar16 - 2;
      if ((long)uVar16 < 2) {
        return (byte *)0xffffffff;
      }
      bVar1 = *pbVar9;
      uVar11 = (uint)bVar1;
      if (bVar1 < 0xdc) {
        if (uVar11 - 0xd8 < 4) {
LAB_108218074:
          if (uVar16 < 4) {
            return (byte *)0xfffffffe;
          }
        }
        else if (uVar11 == 0) {
          uVar17 = (ulong)param_2[3];
          uVar11 = (uint)(byte)(&UNK_110a31d68)[uVar17];
          if ((byte)(&UNK_110a31d68)[uVar17] < 0x1f) {
            uVar14 = 1 << (ulong)(uVar11 & 0x1f);
            if ((uVar14 & 0x40200600) != 0) {
              pbVar7 = (byte *)0x16;
              goto LAB_108218094;
            }
            if ((uVar14 & 0x1400000) != 0) goto LAB_108218118;
            if (uVar11 == 0x1d) goto LAB_1082180f0;
          }
          if (uVar11 == 6) {
            if (uVar16 == 2) {
              return (byte *)0xfffffffe;
            }
          }
          else if (uVar11 == 7) goto LAB_108218074;
        }
        else {
LAB_1082180ec:
          uVar17 = (ulong)param_2[3];
LAB_1082180f0:
          if ((*(uint *)(&UNK_10df09f7c +
                        (ulong)((uint)(uVar17 >> 5) | (uint)(byte)(&UNK_10df0a47c)[bVar1] << 3) * 4)
               >> (ulong)((uint)uVar17 & 0x1f) & 1) != 0) {
LAB_108218118:
            if ((long)uVar12 < 2) {
              return (byte *)0xffffffff;
            }
            pbVar9 = param_2 + 6;
LAB_108218184:
            bVar1 = pbVar9[-2];
            uVar11 = (uint)bVar1;
            if (uVar11 < 0xdc) {
              if (uVar11 != 0) {
                if (uVar11 - 0xd8 < 4) {
LAB_108218264:
                  if (uVar12 < 4) {
                    return (byte *)0xfffffffe;
                  }
                }
                else {
LAB_1082181d8:
                  uVar11 = *(uint *)(&UNK_10df09f7c +
                                    (ulong)((uint)(pbVar9[-1] >> 5) |
                                           (uint)(byte)(&UNK_10df0a57c)[bVar1] << 3) * 4) >>
                           (ulong)(pbVar9[-1] & 0x1f);
joined_r0x0001082181f0:
                  if ((uVar11 & 1) != 0) goto LAB_108218174;
                }
                goto LAB_108218284;
              }
              uVar16 = (ulong)pbVar9[-1];
              bVar3 = (&UNK_110a31d68)[uVar16];
              uVar11 = (uint)bVar3;
              if (0x17 < bVar3) {
                if (3 < uVar11 - 0x18) {
                  if (uVar11 == 0x1d) goto LAB_10821815c;
                  goto LAB_108218284;
                }
LAB_108218174:
                uVar12 = uVar12 - 2;
                pbVar9 = pbVar9 + 2;
                if ((long)uVar12 < 2) {
                  return (byte *)0xffffffff;
                }
                goto LAB_108218184;
              }
              if (bVar3 < 0x16) {
                if (uVar11 == 6) {
                  if (uVar12 == 2) {
                    return (byte *)0xfffffffe;
                  }
                  goto LAB_108218284;
                }
                if (uVar11 == 7) goto LAB_108218264;
                if (uVar11 == 0x12) {
                  pbVar7 = (byte *)0x1c;
                  goto LAB_108218094;
                }
              }
              else if (uVar11 == 0x16) goto LAB_108218174;
            }
            else if (bVar1 == 0xff) {
              uVar16 = (ulong)pbVar9[-1];
              if (pbVar9[-1] < 0xfe) {
LAB_10821815c:
                uVar11 = *(uint *)(&UNK_10df09f7c +
                                  (ulong)((uint)(uVar16 >> 5) |
                                         (uint)(byte)(&UNK_10df0a57c)[bVar1] << 3) * 4) >>
                         (ulong)((uint)uVar16 & 0x1f);
                goto joined_r0x0001082181f0;
              }
            }
            else if (3 < bVar1 - 0xdc) goto LAB_1082181d8;
LAB_108218284:
            pbVar7 = (byte *)0x0;
            pbVar9 = pbVar9 + -2;
            goto LAB_108218094;
          }
        }
      }
      else if (3 < uVar11 - 0xdc) {
        if (uVar11 != 0xff) goto LAB_1082180ec;
        uVar17 = (ulong)param_2[3];
        if (param_2[3] < 0xfe) goto LAB_1082180f0;
      }
      pbVar7 = (byte *)0x0;
LAB_108218094:
      *param_4 = (long)pbVar9;
      return pbVar7;
    case 0x1f:
      *param_4 = (long)(param_2 + 2);
      return (byte *)0x17;
    case 0x20:
      pbVar9 = param_2 + 2;
      if ((long)param_3 - (long)pbVar9 < 2) {
        return (byte *)0xffffffe8;
      }
      if (*pbVar9 == 0) {
        bVar1 = (&UNK_110a31d68)[param_2[3]];
        uVar12 = (ulong)bVar1;
        if (bVar1 < 0x25) {
          if ((1L << (uVar12 & 0x3f) & 0x1900200000U) != 0) goto code_r0x000108215ba4;
          if (uVar12 == 0x21) {
            *param_4 = (long)(param_2 + 4);
            return (byte *)0x24;
          }
          if (uVar12 == 0x22) {
            *param_4 = (long)(param_2 + 4);
            return (byte *)0x25;
          }
        }
        if (bVar1 - 9 < 3) {
code_r0x000108215ba4:
          *param_4 = (long)pbVar9;
          return (byte *)0x18;
        }
        if (bVar1 == 0xf) {
          *param_4 = (long)(param_2 + 4);
          return (byte *)0x23;
        }
      }
      *param_4 = (long)pbVar9;
      return (byte *)0x0;
    case 0x23:
      *param_4 = (long)(param_2 + 2);
      return (byte *)0x26;
    case 0x24:
      *param_4 = (long)(param_2 + 2);
      return (byte *)0x15;
    }
code_r0x000108215648:
    *param_4 = (long)param_2;
    return (byte *)0x0;
  }
  if (uVar5 != 0x3c00) {
    if (uVar5 == 0xefbb) {
      if (param_2 + 2 == param_3) {
        return (byte *)0xffffffff;
      }
      if (param_2[2] == 0xbf) {
        *param_4 = (long)(param_2 + 3);
        *puVar13 = &PTR_FUN_110a31b10;
        return (byte *)0xe;
      }
      goto LAB_108215540;
    }
    goto LAB_108215494;
  }
  *puVar13 = &PTR_DAT_110a31eb0;
DAT_10821183c:
  if (param_3 <= param_2) {
    return (byte *)0xfffffffc;
  }
  uVar12 = (long)param_3 - (long)param_2;
  if ((uVar12 & 0xfffffffffffffffe) != 0 && (uVar12 & 1) != 0) {
    param_3 = param_2 + (uVar12 & 0xfffffffffffffffe);
  }
  if (uVar12 == 1) {
    return (byte *)0xffffffff;
  }
  bVar1 = param_2[1];
  uVar11 = (uint)bVar1;
  if (0xdb < bVar1) {
    if (uVar11 - 0xdc < 4) goto code_r0x0001082118b4;
    if (uVar11 != 0xff) goto code_r0x00010821193c;
    uVar12 = (ulong)*param_2;
    if (0xfd < *param_2) goto code_r0x0001082118b4;
code_r0x000108211940:
    uVar14 = (uint)(uVar12 >> 5);
    uVar11 = 1 << (ulong)((uint)uVar12 & 0x1f);
    if ((uVar11 & *(uint *)(&UNK_10df09f7c +
                           (ulong)(uVar14 | (uint)(byte)(&UNK_10df0a47c)[bVar1] << 3) * 4)) == 0) {
      if ((*(uint *)(&UNK_10df09f7c + (ulong)(uVar14 | (uint)(byte)(&UNK_10df0a57c)[bVar1] << 3) * 4
                    ) & uVar11) == 0) goto code_r0x0001082118b4;
code_r0x0001082119a4:
      pbVar9 = (byte *)0x13;
      goto joined_r0x0001082119b4;
    }
code_r0x000108211974:
    pbVar9 = (byte *)0x12;
joined_r0x0001082119b4:
    uVar12 = (long)param_3 - (long)(param_2 + 2);
    if (1 < (long)uVar12) {
      param_2 = param_2 + 2;
      do {
        bVar1 = param_2[1];
        uVar11 = (uint)bVar1;
        if (bVar1 < 0xdc) {
          if (uVar11 == 0) {
            uVar16 = (ulong)*param_2;
            iVar6 = (int)pbVar9;
            switch((&UNK_110a31f38)[uVar16]) {
            case 6:
              if (uVar12 == 2) {
                return (byte *)0xfffffffe;
              }
              break;
            case 7:
              goto code_r0x000108211b70;
            case 9:
            case 10:
            case 0xb:
            case 0x14:
            case 0x15:
            case 0x1e:
            case 0x20:
            case 0x23:
            case 0x24:
              *param_4 = (long)param_2;
              return pbVar9;
            case 0xf:
              if (iVar6 != 0x13) {
                *param_4 = (long)(param_2 + 2);
                return (byte *)0x1e;
              }
              break;
            case 0x16:
            case 0x18:
            case 0x19:
            case 0x1a:
            case 0x1b:
              goto code_r0x000108211a98;
            case 0x17:
              pbVar7 = param_2 + 2;
              if (iVar6 == 0x29) {
code_r0x000108211a40:
                pbVar9 = (byte *)0x13;
              }
              else {
                if (iVar6 != 0x12) goto code_r0x000108211a9c;
                uVar12 = (long)param_3 - (long)pbVar7;
                if ((long)uVar12 < 2) {
                  return (byte *)0xffffffff;
                }
                bVar1 = param_2[3];
                uVar11 = (uint)bVar1;
                if (0xdb < bVar1) {
                  if (3 < uVar11 - 0xdc) {
                    if (uVar11 != 0xff) goto code_r0x000108211b04;
                    uVar16 = (ulong)*pbVar7;
                    if (*pbVar7 < 0xfe) goto code_r0x000108211b08;
                  }
                  goto code_r0x000108211a40;
                }
                if (uVar11 == 0) {
                  uVar16 = (ulong)*pbVar7;
                  bVar3 = (&UNK_110a31f38)[uVar16];
                  pbVar9 = (byte *)0x13;
                  uVar11 = (uint)bVar3;
                  if (bVar3 < 0x18) {
                    if (bVar3 < 0x16) {
                      if (uVar11 == 5) goto code_r0x000108211ed0;
                      if (uVar11 == 6) {
                        if (uVar12 == 2) {
                          return (byte *)0xfffffffe;
                        }
                        goto code_r0x000108211ed0;
                      }
                      if (uVar11 == 7) goto code_r0x000108211b58;
                    }
                    else if (uVar11 == 0x16) goto code_r0x000108211b20;
                  }
                  else {
                    if (uVar11 - 0x18 < 4) goto code_r0x000108211b20;
                    if (uVar11 == 0x1d) goto code_r0x000108211b08;
                  }
                }
                else {
                  if (uVar11 - 0xd8 < 4) {
code_r0x000108211b58:
                    if (uVar12 < 4) {
                      return (byte *)0xfffffffe;
                    }
                    goto code_r0x000108211ed0;
                  }
code_r0x000108211b04:
                  uVar16 = (ulong)*pbVar7;
code_r0x000108211b08:
                  if ((*(uint *)(&UNK_10df09f7c +
                                (ulong)((uint)(uVar16 >> 5) |
                                       (uint)(byte)(&UNK_10df0a57c)[bVar1] << 3) * 4) >>
                       (ulong)((uint)uVar16 & 0x1f) & 1) == 0) {
code_r0x000108211ed0:
                    *param_4 = (long)pbVar7;
                    return (byte *)0x0;
                  }
code_r0x000108211b20:
                  pbVar9 = (byte *)0x29;
                  pbVar7 = param_2 + 4;
                }
              }
              goto code_r0x000108211a9c;
            case 0x1d:
              goto code_r0x000108211a80;
            case 0x21:
              if (iVar6 != 0x13) {
                *param_4 = (long)(param_2 + 2);
                return (byte *)0x1f;
              }
              break;
            case 0x22:
              if (iVar6 != 0x13) {
                *param_4 = (long)(param_2 + 2);
                return (byte *)0x20;
              }
            }
          }
          else {
            if (3 < uVar11 - 0xd8) goto code_r0x000108211a7c;
code_r0x000108211b70:
            if (uVar12 < 4) {
              return (byte *)0xfffffffe;
            }
          }
code_r0x000108211df8:
          *param_4 = (long)param_2;
          return (byte *)0x0;
        }
        if (uVar11 == 0xff) {
          uVar16 = (ulong)*param_2;
          if (0xfd < *param_2) goto code_r0x000108211df8;
        }
        else {
          if (uVar11 - 0xdc < 4) goto code_r0x000108211df8;
code_r0x000108211a7c:
          uVar16 = (ulong)*param_2;
        }
code_r0x000108211a80:
        if ((*(uint *)(&UNK_10df09f7c +
                      (ulong)((uint)(uVar16 >> 5) | (uint)(byte)(&UNK_10df0a57c)[bVar1] << 3) * 4)
             >> (ulong)((uint)uVar16 & 0x1f) & 1) == 0) goto code_r0x000108211df8;
code_r0x000108211a98:
        pbVar7 = param_2 + 2;
code_r0x000108211a9c:
        param_2 = pbVar7;
        uVar12 = (long)param_3 - (long)param_2;
      } while (1 < (long)uVar12);
    }
    return (byte *)(ulong)(uint)-(int)pbVar9;
  }
  if (uVar11 - 0xd8 < 4) {
code_r0x000108211894:
    if ((long)param_3 - (long)param_2 < 4) {
      return (byte *)0xfffffffe;
    }
    goto code_r0x0001082118b4;
  }
  if (uVar11 != 0) {
code_r0x00010821193c:
    uVar12 = (ulong)*param_2;
    goto code_r0x000108211940;
  }
  uVar12 = (ulong)*param_2;
  switch((&UNK_110a31f38)[uVar12]) {
  case 2:
    pbVar9 = param_2 + 2;
    if ((long)param_3 - (long)pbVar9 < 2) {
      return (byte *)0xffffffff;
    }
    bVar1 = param_2[3];
    if (bVar1 - 0xdc < 4) {
code_r0x000108211918:
      *param_4 = (long)pbVar9;
      return (byte *)0x0;
    }
    if (bVar1 != 0) {
      if ((bVar1 != 0xff) || (*pbVar9 < 0xfe)) {
code_r0x000108211e54:
        *param_4 = (long)param_2;
        return (byte *)0x1d;
      }
      goto code_r0x000108211918;
    }
    if (0x1d < (byte)(&UNK_110a31f38)[*pbVar9]) goto code_r0x000108211918;
    uVar11 = (uint)(byte)(&UNK_110a31f38)[*pbVar9];
    if ((1 << (ulong)(uVar11 & 0x1f) & 0x214000e0U) != 0) goto code_r0x000108211e54;
    if (uVar11 != 0xf) {
      if (uVar11 != 0x10) goto code_r0x000108211918;
      pbVar9 = param_2 + 4;
      if (1 < (long)param_3 - (long)pbVar9) {
        if (param_2[5] != 0) {
code_r0x000108213ca8:
          *param_4 = (long)pbVar9;
          return (byte *)0x0;
        }
        bVar1 = (&UNK_110a31f38)[*pbVar9];
        if (bVar1 < 0x18) {
          if (bVar1 == 0x14) {
            *param_4 = (long)(param_2 + 6);
            return (byte *)0x21;
          }
          if (bVar1 != 0x16) goto code_r0x000108213ca8;
        }
        else if (bVar1 != 0x18) {
          if (bVar1 != 0x1b) goto code_r0x000108213ca8;
          pbVar9 = param_2 + 6;
          if ((long)param_3 - (long)pbVar9 < 2) {
            return (byte *)0xffffffff;
          }
          if ((param_2[7] != 0) || (*pbVar9 != 0x2d)) {
code_r0x0001082147bc:
            pbVar8 = (byte *)0x0;
            pbVar10 = pbVar9;
code_r0x0001082147c0:
            *param_4 = (long)pbVar10;
            return pbVar8;
          }
          pbVar9 = param_2 + 8;
          uVar12 = (long)param_3 - (long)pbVar9;
          if ((long)uVar12 < 2) {
            return (byte *)0xffffffff;
          }
code_r0x000108214704:
          bVar1 = pbVar9[1];
          uVar11 = (uint)bVar1;
          if (uVar11 < 0xdc) {
            if (uVar11 - 0xd8 < 4) {
code_r0x00010821471c:
              if (uVar12 < 4) {
                return (byte *)0xfffffffe;
              }
              pbVar7 = pbVar9 + 4;
              goto code_r0x0001082146f4;
            }
            if (uVar11 == 0) {
              bVar1 = (&UNK_110a31f38)[*pbVar9];
              if (bVar1 < 7) {
                if (bVar1 == 5) goto code_r0x0001082146f0;
                if (bVar1 == 6) {
                  if (uVar12 == 2) {
                    return (byte *)0xfffffffe;
                  }
                  pbVar7 = pbVar9 + 3;
                  goto code_r0x0001082146f4;
                }
                if (bVar1 < 2) goto code_r0x0001082147bc;
              }
              else {
                if (bVar1 == 7) goto code_r0x00010821471c;
                if (bVar1 == 0x1b) {
                  pbVar7 = pbVar9 + 2;
                  if ((long)param_3 - (long)pbVar7 < 2) {
                    return (byte *)0xffffffff;
                  }
                  if ((pbVar9[3] != 0) || (*pbVar7 != 0x2d)) goto code_r0x0001082146f4;
                  pbVar7 = pbVar9 + 4;
                  if ((long)param_3 - (long)pbVar7 < 2) {
                    return (byte *)0xffffffff;
                  }
                  if (pbVar9[5] == 0) {
                    pbVar10 = pbVar9 + 6;
                    if (pbVar9[4] != 0x3e) {
                      pbVar10 = pbVar7;
                    }
                    uVar11 = 0xd;
                    if (pbVar9[4] != 0x3e) {
                      uVar11 = 0;
                    }
                    pbVar8 = (byte *)(ulong)uVar11;
                  }
                  else {
                    pbVar8 = (byte *)0x0;
                    pbVar10 = pbVar7;
                  }
                  goto code_r0x0001082147c0;
                }
                if (bVar1 == 8) goto code_r0x0001082147bc;
              }
            }
          }
          else if (bVar1 == 0xff) {
            if (0xfd < *pbVar9) goto code_r0x0001082147bc;
          }
          else if (bVar1 - 0xdc < 4) goto code_r0x0001082147bc;
code_r0x0001082146f0:
          pbVar7 = pbVar9 + 2;
code_r0x0001082146f4:
          pbVar9 = pbVar7;
          uVar12 = (long)param_3 - (long)pbVar9;
          if ((long)uVar12 < 2) {
            return (byte *)0xffffffff;
          }
          goto code_r0x000108214704;
        }
        param_2 = param_2 + 6;
        uVar12 = (long)param_3 - (long)param_2;
        if (1 < (long)uVar12) {
          while( true ) {
            if ((param_2[1] != 0) || (0x1e < (byte)(&UNK_110a31f38)[*param_2]))
            goto code_r0x000108213dbc;
            uVar11 = (uint)(byte)(&UNK_110a31f38)[*param_2];
            if ((1 << (ulong)(uVar11 & 0x1f) & 0x1400000U) == 0) break;
            param_2 = param_2 + 2;
            uVar12 = uVar12 - 2;
            if ((long)uVar12 < 2) {
              return (byte *)0xffffffff;
            }
          }
          if ((1 << (ulong)(uVar11 & 0x1f) & 0x200600U) == 0) {
            if (uVar11 == 0x1e) {
              if (uVar12 < 4) {
                return (byte *)0xffffffff;
              }
              if ((param_2[3] != 0) ||
                 (0x1e < (byte)(&UNK_110a31f38)[param_2[2]] ||
                  (1 << (ulong)((byte)(&UNK_110a31f38)[param_2[2]] & 0x1f) & 0x40200600U) == 0))
              goto code_r0x000108213d70;
            }
code_r0x000108213dbc:
            *param_4 = (long)param_2;
            return (byte *)0x0;
          }
code_r0x000108213d70:
          *param_4 = (long)param_2;
          return (byte *)0x10;
        }
      }
      return (byte *)0xffffffff;
    }
    pbVar9 = param_2 + 4;
    uVar12 = (long)param_3 - (long)pbVar9;
    if ((long)uVar12 < 2) {
LAB_1082141f0:
      pbVar7 = (byte *)0xffffffff;
    }
    else {
      bVar1 = param_2[5];
      uVar11 = (uint)bVar1;
      if (bVar1 == 0) {
        uVar16 = (ulong)*pbVar9;
        bVar1 = (&UNK_110a31f38)[uVar16];
        if (bVar1 < 0x16) {
          if (bVar1 != 5) {
            if (bVar1 == 6) {
              if (uVar12 == 2) {
                return (byte *)0xfffffffe;
              }
            }
            else if (bVar1 == 7) goto LAB_108213e5c;
          }
        }
        else {
          if (bVar1 == 0x16 || bVar1 == 0x18) {
LAB_108213eb0:
            if (1 < (long)param_3 - (long)(param_2 + 6)) {
              lVar18 = 0;
              lVar15 = 3;
              do {
                pbVar7 = pbVar9 + lVar15;
                bVar1 = *pbVar7;
                uVar14 = (uint)bVar1;
                if (0xdb < uVar14) {
                  if (bVar1 == 0xff) {
                    uVar17 = (ulong)pbVar7[-1];
                    if (pbVar7[-1] < 0xfe) {
LAB_108213ef8:
                      uVar14 = *(uint *)(&UNK_10df09f7c +
                                        (ulong)((uint)(uVar17 >> 5) |
                                               (uint)(byte)(&UNK_10df0a57c)[bVar1] << 3) * 4) >>
                               (ulong)((uint)uVar17 & 0x1f);
                      goto joined_r0x000108213f98;
                    }
                  }
                  else if (3 < bVar1 - 0xdc) goto LAB_108213f80;
LAB_108214054:
                  pbVar7 = pbVar9 + (2 - lVar18);
                  goto LAB_108214060;
                }
                if (uVar14 == 0) {
                  uVar17 = (ulong)pbVar7[-1];
                  bVar3 = (&UNK_110a31f38)[uVar17];
                  uVar14 = (uint)bVar3;
                  if (bVar3 < 0x18) {
                    if (bVar3 < 0xf) {
                      if (bVar3 < 9) {
                        if (uVar14 != 5) {
                          if (bVar3 != 6) {
                            if (bVar3 == 7) goto LAB_108213ff8;
                            goto LAB_108214054;
                          }
                          if (uVar12 + lVar18 == 4) {
                            return (byte *)0xfffffffe;
                          }
                        }
                        goto LAB_108214008;
                      }
                      if (1 < uVar14 - 9) goto LAB_108214054;
LAB_108214024:
                      pbVar7 = (byte *)0xb;
                      if ((uVar11 == 0) && (lVar18 == -4)) {
                        if ((int)uVar16 == 0x78) {
                          bVar4 = false;
                        }
                        else {
                          if ((int)uVar16 != 0x58) goto LAB_1082140e8;
                          bVar4 = true;
                        }
                        if (param_2[7] == 0) {
                          bVar1 = param_2[6];
                          if (bVar1 != 0x6d) {
                            if (bVar1 != 0x4d) goto LAB_1082140e8;
                            bVar4 = true;
                          }
                          if (param_2[9] == 0) {
                            if (param_2[8] == 0x4c) {
LAB_108214248:
                              pbVar7 = pbVar9 + 6;
LAB_108214060:
                              *param_4 = (long)pbVar7;
                              return (byte *)0x0;
                            }
                            if (param_2[8] == 0x6c) {
                              if (bVar4) goto LAB_108214248;
                              pbVar7 = (byte *)0xc;
                            }
                          }
                        }
                      }
LAB_1082140e8:
                      uVar12 = (uVar12 + lVar18) - 4;
                      if ((long)uVar12 < 2) break;
                      pbVar9 = pbVar9 + (4 - lVar18);
                      goto LAB_10821412c;
                    }
                    if (bVar3 != 0x16) {
                      if (bVar3 != 0xf) {
                        if (bVar3 == 0x15) goto LAB_108214024;
                        goto LAB_108214054;
                      }
                      pbVar7 = pbVar9;
                      func_0x000108214818(pbVar9,pbVar9 + (2 - lVar18),&uStack_54);
                      if ((int)pbVar7 == 0) {
                        *param_4 = (long)(pbVar9 + (2 - lVar18));
                        return pbVar7;
                      }
                      if (1 < (long)(uVar12 + lVar18 + -4)) {
                        pbVar7 = pbVar9 + (4 - lVar18);
                        if ((pbVar9[lVar15 + 2] == 0) && (pbVar9[lVar15 + 1] == 0x3e)) {
                          *param_4 = (long)(pbVar9 + (6 - lVar18));
                          return (byte *)(ulong)uStack_54;
                        }
                        goto LAB_108214060;
                      }
                      break;
                    }
                  }
                  else if (3 < bVar3 - 0x18) {
                    if (uVar14 == 0x1d) goto LAB_108213ef8;
                    goto LAB_108214054;
                  }
                }
                else {
                  if (uVar14 - 0xd8 < 4) {
LAB_108213ff8:
                    if ((uVar12 + lVar18) - 2 < 4) {
                      return (byte *)0xfffffffe;
                    }
                    goto LAB_108214008;
                  }
LAB_108213f80:
                  uVar14 = *(uint *)(&UNK_10df09f7c +
                                    (ulong)((uint)(pbVar7[-1] >> 5) |
                                           (uint)(byte)(&UNK_10df0a57c)[bVar1] << 3) * 4) >>
                           (ulong)(pbVar7[-1] & 0x1f);
joined_r0x000108213f98:
                  if ((uVar14 & 1) == 0) {
LAB_108214008:
                    pbVar7 = pbVar9 + (2 - lVar18);
                    goto LAB_108214060;
                  }
                }
                lVar18 = lVar18 + -2;
                lVar15 = lVar15 + 2;
                if ((long)(uVar12 + lVar18 + -2) < 2) {
                  return (byte *)0xffffffff;
                }
              } while( true );
            }
            goto LAB_1082141f0;
          }
          if (bVar1 == 0x1d) goto LAB_108213e88;
        }
      }
      else if (bVar1 - 0xd8 < 4) {
LAB_108213e5c:
        if (uVar12 < 4) {
          return (byte *)0xfffffffe;
        }
      }
      else if (3 < uVar11 - 0xdc) {
        if (uVar11 == 0xff) {
          uVar16 = (ulong)*pbVar9;
          if (0xfd < *pbVar9) goto LAB_108213fcc;
        }
        else {
          uVar16 = (ulong)*pbVar9;
        }
LAB_108213e88:
        if ((*(uint *)(&UNK_10df09f7c +
                      (ulong)((uint)(uVar16 >> 5) | (uint)(byte)(&UNK_10df0a47c)[uVar11] << 3) * 4)
             >> (ulong)((uint)uVar16 & 0x1f) & 1) != 0) goto LAB_108213eb0;
      }
LAB_108213fcc:
      pbVar7 = (byte *)0x0;
      *param_4 = (long)pbVar9;
    }
    return pbVar7;
  case 4:
    pbVar9 = param_2 + 2;
    if ((long)param_3 - (long)pbVar9 < 2) {
      return (byte *)0xffffffe6;
    }
    if ((param_2[3] == 0) && (*pbVar9 == 0x5d)) {
      if ((ulong)((long)param_3 - (long)pbVar9) < 4) {
        return (byte *)0xffffffff;
      }
      if ((param_2[5] == 0) && (param_2[4] == 0x3e)) {
        *param_4 = (long)(param_2 + 6);
        return (byte *)0x22;
      }
    }
    *param_4 = (long)pbVar9;
    return (byte *)0x1a;
  case 5:
    if ((long)param_3 - (long)param_2 < 2) {
      return (byte *)0xfffffffe;
    }
    break;
  case 6:
    if ((long)param_3 - (long)param_2 < 3) {
      return (byte *)0xfffffffe;
    }
    break;
  case 7:
    goto code_r0x000108211894;
  case 9:
    if (param_2 + 2 == param_3) {
      *param_4 = (long)param_3;
      return (byte *)0xfffffff1;
    }
  case 10:
  case 0x15:
    param_2 = param_2 + 2;
    lVar15 = (long)param_3 - (long)param_2;
    for (; ((1 < lVar15 && (param_2[1] == 0)) &&
           ((cVar2 = (&UNK_110a31f38)[*param_2], cVar2 == '\x15' || cVar2 == '\n' ||
            (cVar2 == '\t' && param_2 + 2 != param_3)))); param_2 = param_2 + 2) {
      lVar15 = lVar15 + -2;
    }
    *param_4 = (long)param_2;
    return (byte *)0xf;
  case 0xb:
    *param_4 = (long)(param_2 + 2);
    return (byte *)0x11;
  case 0xc:
    uVar11 = 0xc;
    goto code_r0x000108213b40;
  case 0xd:
    uVar11 = 0xd;
code_r0x000108213b40:
    pbVar9 = param_2 + 2;
joined_r0x000108213b48:
    pbVar7 = pbVar9;
    uVar12 = (long)param_3 - (long)pbVar7;
    if ((long)uVar12 < 2) {
      return (byte *)0xffffffff;
    }
    bVar1 = pbVar7[1];
    uVar14 = (uint)bVar1;
    if (0xdb < uVar14) {
      if (bVar1 == 0xff) {
        if (0xfd < *pbVar7) {
code_r0x000108213c20:
          *param_4 = (long)pbVar7;
          return (byte *)0x0;
        }
      }
      else if (bVar1 - 0xdc < 4) goto code_r0x000108213c20;
      goto code_r0x000108213b68;
    }
    if (uVar14 - 0xd8 < 4) {
code_r0x000108213b94:
      if (uVar12 < 4) {
        return (byte *)0xfffffffe;
      }
      pbVar9 = pbVar7 + 4;
      goto joined_r0x000108213b48;
    }
    if (uVar14 == 0) {
      bVar1 = (&UNK_110a31f38)[*pbVar7];
      uVar14 = (uint)bVar1;
      if (6 < bVar1) {
        if (1 < uVar14 - 0xc) {
          if (bVar1 == 7) goto code_r0x000108213b94;
          if (bVar1 == 8) goto code_r0x000108213c20;
          goto code_r0x000108213b68;
        }
        pbVar9 = pbVar7 + 2;
        if (uVar11 == uVar14) {
          if ((long)param_3 - (long)pbVar9 < 2) {
            return (byte *)0xffffffe5;
          }
          *param_4 = (long)pbVar9;
          if ((pbVar7[3] == 0) &&
             ((byte)(&UNK_110a31f38)[*pbVar9] < 0x1f &&
              (1 << (ulong)((byte)(&UNK_110a31f38)[*pbVar9] & 0x1f) & 0x40300e00U) != 0)) {
            return (byte *)0x1b;
          }
          return (byte *)0x0;
        }
        goto joined_r0x000108213b48;
      }
      if (bVar1 != 5) {
        if (bVar1 != 6) {
          if (uVar14 < 2) goto code_r0x000108213c20;
          goto code_r0x000108213b68;
        }
        if (uVar12 == 2) {
          return (byte *)0xfffffffe;
        }
        pbVar9 = pbVar7 + 3;
        goto joined_r0x000108213b48;
      }
    }
code_r0x000108213b68:
    pbVar9 = pbVar7 + 2;
    goto joined_r0x000108213b48;
  case 0x13:
    pbVar9 = param_2 + 2;
    uVar12 = (long)param_3 - (long)pbVar9;
    if ((long)uVar12 < 2) {
      return (byte *)0xffffffff;
    }
    bVar1 = param_2[3];
    uVar11 = (uint)bVar1;
    if (bVar1 < 0xdc) {
      if (uVar11 - 0xd8 < 4) {
code_r0x0001082144d4:
        if (uVar12 < 4) {
          return (byte *)0xfffffffe;
        }
      }
      else {
        if (uVar11 == 0) {
          pbVar7 = (byte *)0x0;
          uVar16 = (ulong)*pbVar9;
          bVar3 = (&UNK_110a31f38)[uVar16];
          if (bVar3 < 0x16) {
            if (bVar3 == 6) {
              if (uVar12 == 2) {
                return (byte *)0xfffffffe;
              }
              goto code_r0x0001082144f8;
            }
            if (bVar3 != 7) goto code_r0x0001082144fc;
            goto code_r0x0001082144d4;
          }
          if (bVar3 != 0x16 && bVar3 != 0x18) {
            if (bVar3 != 0x1d) goto code_r0x0001082144fc;
            goto code_r0x00010821455c;
          }
        }
        else {
code_r0x000108214558:
          uVar16 = (ulong)*pbVar9;
code_r0x00010821455c:
          if ((*(uint *)(&UNK_10df09f7c +
                        (ulong)((uint)(uVar16 >> 5) | (uint)(byte)(&UNK_10df0a47c)[bVar1] << 3) * 4)
               >> (ulong)((uint)uVar16 & 0x1f) & 1) == 0) goto code_r0x0001082144f8;
        }
        pbVar9 = param_2 + 4;
        uVar12 = (long)param_3 - (long)pbVar9;
        if ((long)uVar12 < 2) {
          return (byte *)0xffffffec;
        }
        while( true ) {
          bVar1 = pbVar9[1];
          uVar11 = (uint)bVar1;
          if (uVar11 < 0xdc) break;
          if (bVar1 == 0xff) {
            uVar16 = (ulong)*pbVar9;
            if (0xfd < *pbVar9) goto code_r0x0001082144f8;
          }
          else {
            if (bVar1 - 0xdc < 4) goto code_r0x0001082144f8;
code_r0x000108214648:
            uVar16 = (ulong)*pbVar9;
          }
code_r0x0001082145c8:
          if ((*(uint *)(&UNK_10df09f7c +
                        (ulong)((uint)(uVar16 >> 5) | (uint)(byte)(&UNK_10df0a57c)[bVar1] << 3) * 4)
               >> (ulong)((uint)uVar16 & 0x1f) & 1) == 0) goto code_r0x0001082144f8;
code_r0x0001082145e0:
          pbVar9 = pbVar9 + 2;
          uVar12 = uVar12 - 2;
          if ((long)uVar12 < 2) {
            return (byte *)0xffffffec;
          }
        }
        if (uVar11 == 0) {
          pbVar7 = (byte *)0x0;
          uVar16 = (ulong)*pbVar9;
          switch((&UNK_110a31f38)[uVar16]) {
          case 6:
            if (uVar12 == 2) {
              return (byte *)0xfffffffe;
            }
            goto code_r0x0001082144f8;
          case 7:
            goto code_r0x00010821466c;
          default:
            goto code_r0x0001082144fc;
          case 9:
          case 10:
          case 0xb:
          case 0x15:
          case 0x1e:
          case 0x20:
          case 0x24:
            pbVar7 = (byte *)0x14;
            goto code_r0x0001082144fc;
          case 0x16:
          case 0x18:
          case 0x19:
          case 0x1a:
          case 0x1b:
            goto code_r0x0001082145e0;
          case 0x1d:
            goto code_r0x0001082145c8;
          }
        }
        if (3 < uVar11 - 0xd8) goto code_r0x000108214648;
code_r0x00010821466c:
        if (uVar12 < 4) {
          return (byte *)0xfffffffe;
        }
      }
    }
    else if (3 < uVar11 - 0xdc) {
      if (uVar11 != 0xff) goto code_r0x000108214558;
      uVar16 = (ulong)*pbVar9;
      if (*pbVar9 < 0xfe) goto code_r0x00010821455c;
    }
code_r0x0001082144f8:
    pbVar7 = (byte *)0x0;
code_r0x0001082144fc:
    *param_4 = (long)pbVar9;
    return pbVar7;
  case 0x14:
    *param_4 = (long)(param_2 + 2);
    return (byte *)0x19;
  case 0x16:
  case 0x18:
    goto code_r0x000108211974;
  case 0x17:
  case 0x19:
  case 0x1a:
  case 0x1b:
    goto code_r0x0001082119a4;
  case 0x1d:
    goto code_r0x000108211940;
  case 0x1e:
    pbVar9 = param_2 + 2;
    uVar12 = (long)param_3 - (long)pbVar9;
    if ((long)uVar12 < 2) {
      return (byte *)0xffffffff;
    }
    bVar1 = param_2[3];
    uVar11 = (uint)bVar1;
    if (bVar1 < 0xdc) {
      if (uVar11 - 0xd8 < 4) {
LAB_10821429c:
        if (uVar12 < 4) {
          return (byte *)0xfffffffe;
        }
      }
      else if (uVar11 == 0) {
        uVar16 = (ulong)*pbVar9;
        uVar11 = (uint)(byte)(&UNK_110a31f38)[uVar16];
        if ((byte)(&UNK_110a31f38)[uVar16] < 0x1f) {
          uVar14 = 1 << (ulong)(uVar11 & 0x1f);
          if ((uVar14 & 0x40200600) != 0) {
            pbVar7 = (byte *)0x16;
            goto LAB_1082142bc;
          }
          if ((uVar14 & 0x1400000) != 0) goto LAB_108214340;
          if (uVar11 == 0x1d) goto LAB_108214318;
        }
        if (uVar11 == 6) {
          if (uVar12 == 2) {
            return (byte *)0xfffffffe;
          }
        }
        else if (uVar11 == 7) goto LAB_10821429c;
      }
      else {
LAB_108214314:
        uVar16 = (ulong)*pbVar9;
LAB_108214318:
        if ((*(uint *)(&UNK_10df09f7c +
                      (ulong)((uint)(uVar16 >> 5) | (uint)(byte)(&UNK_10df0a47c)[bVar1] << 3) * 4)
             >> (ulong)((uint)uVar16 & 0x1f) & 1) != 0) {
LAB_108214340:
          pbVar9 = param_2 + 4;
          uVar12 = (long)param_3 - (long)pbVar9;
          if ((long)uVar12 < 2) {
            return (byte *)0xffffffff;
          }
          do {
            bVar1 = pbVar9[1];
            uVar11 = (uint)bVar1;
            if (uVar11 < 0xdc) {
              if (uVar11 != 0) {
                if (3 < uVar11 - 0xd8) {
LAB_108214404:
                  uVar11 = *(uint *)(&UNK_10df09f7c +
                                    (ulong)((uint)(*pbVar9 >> 5) |
                                           (uint)(byte)(&UNK_10df0a57c)[bVar1] << 3) * 4) >>
                           (ulong)(*pbVar9 & 0x1f);
                  goto joined_r0x00010821441c;
                }
LAB_108214494:
                if (uVar12 < 4) {
                  return (byte *)0xfffffffe;
                }
                break;
              }
              uVar16 = (ulong)*pbVar9;
              bVar3 = (&UNK_110a31f38)[uVar16];
              uVar11 = (uint)bVar3;
              if (bVar3 < 0x18) {
                if (bVar3 < 0x16) {
                  if (uVar11 == 6) {
                    if (uVar12 == 2) {
                      return (byte *)0xfffffffe;
                    }
                    break;
                  }
                  if (uVar11 == 7) goto LAB_108214494;
                  if (uVar11 != 0x12) break;
                  pbVar9 = pbVar9 + 2;
                  pbVar7 = (byte *)0x1c;
                  goto LAB_1082142bc;
                }
                if (uVar11 != 0x16) break;
              }
              else if (3 < uVar11 - 0x18) {
                if (uVar11 == 0x1d) goto LAB_108214388;
                break;
              }
            }
            else {
              if (bVar1 != 0xff) {
                if (3 < bVar1 - 0xdc) goto LAB_108214404;
                break;
              }
              uVar16 = (ulong)*pbVar9;
              if (0xfd < *pbVar9) break;
LAB_108214388:
              uVar11 = *(uint *)(&UNK_10df09f7c +
                                (ulong)((uint)(uVar16 >> 5) |
                                       (uint)(byte)(&UNK_10df0a57c)[bVar1] << 3) * 4) >>
                       (ulong)((uint)uVar16 & 0x1f);
joined_r0x00010821441c:
              if ((uVar11 & 1) == 0) break;
            }
            pbVar9 = pbVar9 + 2;
            uVar12 = uVar12 - 2;
            if ((long)uVar12 < 2) {
              return (byte *)0xffffffff;
            }
          } while( true );
        }
      }
    }
    else if (3 < uVar11 - 0xdc) {
      if (uVar11 != 0xff) goto LAB_108214314;
      uVar16 = (ulong)*pbVar9;
      if (*pbVar9 < 0xfe) goto LAB_108214318;
    }
    pbVar7 = (byte *)0x0;
LAB_1082142bc:
    *param_4 = (long)pbVar9;
    return pbVar7;
  case 0x1f:
    *param_4 = (long)(param_2 + 2);
    return (byte *)0x17;
  case 0x20:
    pbVar9 = param_2 + 2;
    if ((long)param_3 - (long)pbVar9 < 2) {
      return (byte *)0xffffffe8;
    }
    if (param_2[3] == 0) {
      bVar1 = (&UNK_110a31f38)[*pbVar9];
      uVar12 = (ulong)bVar1;
      if (bVar1 < 0x25) {
        if ((1L << (uVar12 & 0x3f) & 0x1900200000U) != 0) goto code_r0x000108211e10;
        if (uVar12 == 0x21) {
          *param_4 = (long)(param_2 + 4);
          return (byte *)0x24;
        }
        if (uVar12 == 0x22) {
          *param_4 = (long)(param_2 + 4);
          return (byte *)0x25;
        }
      }
      if (bVar1 - 9 < 3) {
code_r0x000108211e10:
        *param_4 = (long)pbVar9;
        return (byte *)0x18;
      }
      if (bVar1 == 0xf) {
        *param_4 = (long)(param_2 + 4);
        return (byte *)0x23;
      }
    }
    *param_4 = (long)pbVar9;
    return (byte *)0x0;
  case 0x23:
    *param_4 = (long)(param_2 + 2);
    return (byte *)0x26;
  case 0x24:
    *param_4 = (long)(param_2 + 2);
    return (byte *)0x15;
  }
code_r0x0001082118b4:
  *param_4 = (long)param_2;
  return (byte *)0x0;
LAB_108217f04:
  bVar1 = *pbVar9;
  uVar11 = (uint)bVar1;
  if (uVar11 < 0xdc) {
    if (uVar11 - 0xd8 < 4) {
LAB_108217f1c:
      if (uVar12 < 4) {
        return (byte *)0xfffffffe;
      }
      pbVar10 = pbVar9 + 4;
      goto LAB_108217ef4;
    }
    if (uVar11 == 0) {
      bVar1 = (&UNK_110a31d68)[pbVar9[1]];
      if (bVar1 < 7) {
        if (bVar1 != 5) {
          if (bVar1 == 6) {
            if (uVar12 == 2) {
              return (byte *)0xfffffffe;
            }
            pbVar10 = pbVar9 + 3;
            goto LAB_108217ef4;
          }
          if (bVar1 < 2) goto LAB_108217fbc;
        }
        goto LAB_108217ef0;
      }
      if (bVar1 == 7) goto LAB_108217f1c;
      if (bVar1 == 0xf) {
        pbVar10 = pbVar9 + 2;
        if (1 < (long)param_3 - (long)pbVar10) {
          if ((*pbVar10 == 0) && (pbVar9[3] == 0x3e)) {
            *param_4 = (long)(pbVar9 + 4);
            return pbVar7;
          }
          goto LAB_108217ef4;
        }
        goto LAB_108217fc8;
      }
      if (bVar1 == 8) goto LAB_108217fbc;
    }
  }
  else if (bVar1 == 0xff) {
    if (0xfd < pbVar9[1]) {
LAB_108217fbc:
      *param_4 = (long)pbVar9;
      return (byte *)0x0;
    }
  }
  else if (bVar1 - 0xdc < 4) goto LAB_108217fbc;
LAB_108217ef0:
  pbVar10 = pbVar9 + 2;
LAB_108217ef4:
  pbVar9 = pbVar10;
  uVar12 = (long)param_3 - (long)pbVar9;
  if ((long)uVar12 < 2) {
    return (byte *)0xffffffff;
  }
  goto LAB_108217f04;
LAB_10821412c:
  bVar1 = pbVar9[1];
  uVar11 = (uint)bVar1;
  if (uVar11 < 0xdc) {
    if (uVar11 - 0xd8 < 4) {
LAB_108214144:
      if (uVar12 < 4) {
        return (byte *)0xfffffffe;
      }
      pbVar10 = pbVar9 + 4;
      goto LAB_10821411c;
    }
    if (uVar11 == 0) {
      bVar1 = (&UNK_110a31f38)[*pbVar9];
      if (bVar1 < 7) {
        if (bVar1 != 5) {
          if (bVar1 == 6) {
            if (uVar12 == 2) {
              return (byte *)0xfffffffe;
            }
            pbVar10 = pbVar9 + 3;
            goto LAB_10821411c;
          }
          if (bVar1 < 2) goto LAB_1082141e4;
        }
        goto LAB_108214118;
      }
      if (bVar1 == 7) goto LAB_108214144;
      if (bVar1 == 0xf) {
        pbVar10 = pbVar9 + 2;
        if (1 < (long)param_3 - (long)pbVar10) {
          if ((pbVar9[3] == 0) && (*pbVar10 == 0x3e)) {
            *param_4 = (long)(pbVar9 + 4);
            return pbVar7;
          }
          goto LAB_10821411c;
        }
        goto LAB_1082141f0;
      }
      if (bVar1 == 8) goto LAB_1082141e4;
    }
  }
  else if (bVar1 == 0xff) {
    if (0xfd < *pbVar9) {
LAB_1082141e4:
      *param_4 = (long)pbVar9;
      return (byte *)0x0;
    }
  }
  else if (bVar1 - 0xdc < 4) goto LAB_1082141e4;
LAB_108214118:
  pbVar10 = pbVar9 + 2;
LAB_10821411c:
  pbVar9 = pbVar10;
  uVar12 = (long)param_3 - (long)pbVar9;
  if ((long)uVar12 < 2) {
    return (byte *)0xffffffff;
  }
  goto LAB_10821412c;
}



/* Entry: 10820d0e8; end: 10820d137;  */

void FUN_10820d0e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  FUN_10820cc08(FUN_10820d138,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                param_9,param_10);
  return;
}



/* Entry: 10820d138; end: 10820d277;  */

void FUN_10820d138(undefined *param_1,long param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  byte *pbVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *pbStack_d0;
  long lStack_c8;
  byte abStack_c0 [136];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  abStack_c0[0x68] = 0;
  abStack_c0[0x69] = 0;
  abStack_c0[0x6a] = 0;
  abStack_c0[0x6b] = 0;
  abStack_c0[0x6c] = 0;
  abStack_c0[0x6d] = 0;
  abStack_c0[0x6e] = 0;
  abStack_c0[0x6f] = 0;
  abStack_c0[0x60] = 0;
  abStack_c0[0x61] = 0;
  abStack_c0[0x62] = 0;
  abStack_c0[99] = 0;
  abStack_c0[100] = 0;
  abStack_c0[0x65] = 0;
  abStack_c0[0x66] = 0;
  abStack_c0[0x67] = 0;
  abStack_c0[0x78] = 0;
  abStack_c0[0x79] = 0;
  abStack_c0[0x7a] = 0;
  abStack_c0[0x7b] = 0;
  abStack_c0[0x7c] = 0;
  abStack_c0[0x7d] = 0;
  abStack_c0[0x7e] = 0;
  abStack_c0[0x7f] = 0;
  abStack_c0[0x70] = 0;
  abStack_c0[0x71] = 0;
  abStack_c0[0x72] = 0;
  abStack_c0[0x73] = 0;
  abStack_c0[0x74] = 0;
  abStack_c0[0x75] = 0;
  abStack_c0[0x76] = 0;
  abStack_c0[0x77] = 0;
  abStack_c0[0x48] = 0;
  abStack_c0[0x49] = 0;
  abStack_c0[0x4a] = 0;
  abStack_c0[0x4b] = 0;
  abStack_c0[0x4c] = 0;
  abStack_c0[0x4d] = 0;
  abStack_c0[0x4e] = 0;
  abStack_c0[0x4f] = 0;
  abStack_c0[0x40] = 0;
  abStack_c0[0x41] = 0;
  abStack_c0[0x42] = 0;
  abStack_c0[0x43] = 0;
  abStack_c0[0x44] = 0;
  abStack_c0[0x45] = 0;
  abStack_c0[0x46] = 0;
  abStack_c0[0x47] = 0;
  abStack_c0[0x58] = 0;
  abStack_c0[0x59] = 0;
  abStack_c0[0x5a] = 0;
  abStack_c0[0x5b] = 0;
  abStack_c0[0x5c] = 0;
  abStack_c0[0x5d] = 0;
  abStack_c0[0x5e] = 0;
  abStack_c0[0x5f] = 0;
  abStack_c0[0x50] = 0;
  abStack_c0[0x51] = 0;
  abStack_c0[0x52] = 0;
  abStack_c0[0x53] = 0;
  abStack_c0[0x54] = 0;
  abStack_c0[0x55] = 0;
  abStack_c0[0x56] = 0;
  abStack_c0[0x57] = 0;
  abStack_c0[0x28] = 0;
  abStack_c0[0x29] = 0;
  abStack_c0[0x2a] = 0;
  abStack_c0[0x2b] = 0;
  abStack_c0[0x2c] = 0;
  abStack_c0[0x2d] = 0;
  abStack_c0[0x2e] = 0;
  abStack_c0[0x2f] = 0;
  abStack_c0[0x20] = 0;
  abStack_c0[0x21] = 0;
  abStack_c0[0x22] = 0;
  abStack_c0[0x23] = 0;
  abStack_c0[0x24] = 0;
  abStack_c0[0x25] = 0;
  abStack_c0[0x26] = 0;
  abStack_c0[0x27] = 0;
  abStack_c0[0x38] = 0;
  abStack_c0[0x39] = 0;
  abStack_c0[0x3a] = 0;
  abStack_c0[0x3b] = 0;
  abStack_c0[0x3c] = 0;
  abStack_c0[0x3d] = 0;
  abStack_c0[0x3e] = 0;
  abStack_c0[0x3f] = 0;
  abStack_c0[0x30] = 0;
  abStack_c0[0x31] = 0;
  abStack_c0[0x32] = 0;
  abStack_c0[0x33] = 0;
  abStack_c0[0x34] = 0;
  abStack_c0[0x35] = 0;
  abStack_c0[0x36] = 0;
  abStack_c0[0x37] = 0;
  abStack_c0[8] = 0;
  abStack_c0[9] = 0;
  abStack_c0[10] = 0;
  abStack_c0[0xb] = 0;
  abStack_c0[0xc] = 0;
  abStack_c0[0xd] = 0;
  abStack_c0[0xe] = 0;
  abStack_c0[0xf] = 0;
  abStack_c0[0] = 0;
  abStack_c0[1] = 0;
  abStack_c0[2] = 0;
  abStack_c0[3] = 0;
  abStack_c0[4] = 0;
  abStack_c0[5] = 0;
  abStack_c0[6] = 0;
  abStack_c0[7] = 0;
  abStack_c0[0x18] = 0;
  abStack_c0[0x19] = 0;
  abStack_c0[0x1a] = 0;
  abStack_c0[0x1b] = 0;
  abStack_c0[0x1c] = 0;
  abStack_c0[0x1d] = 0;
  abStack_c0[0x1e] = 0;
  abStack_c0[0x1f] = 0;
  abStack_c0[0x10] = 0;
  abStack_c0[0x11] = 0;
  abStack_c0[0x12] = 0;
  abStack_c0[0x13] = 0;
  abStack_c0[0x14] = 0;
  abStack_c0[0x15] = 0;
  abStack_c0[0x16] = 0;
  abStack_c0[0x17] = 0;
  pbStack_d0 = abStack_c0;
  lStack_c8 = param_2;
  (**(code **)(param_1 + 0x70))(param_1,&lStack_c8,param_3,&pbStack_d0,abStack_c0 + 0x7f);
  if (lStack_c8 == param_3) goto LAB_10820d1c0;
LAB_10820d1a0:
  puVar3 = (undefined *)0x0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  do {
    ___stack_chk_fail(puVar3);
LAB_10820d1c0:
    lVar5 = 0;
    *pbStack_d0 = 0;
    do {
      bVar1 = abStack_c0[lVar5];
      bVar2 = (&UNK_10f47fa57)[lVar5];
      uVar7 = bVar1 - 0x20;
      if (0x19 < bVar1 - 0x61) {
        uVar7 = (uint)bVar1;
      }
      uVar8 = bVar2 - 0x20;
      if (0x19 < bVar2 - 0x61) {
        uVar8 = (uint)bVar2;
      }
      iVar6 = 2;
      if ((uVar7 & 0xff) != 0) {
        iVar6 = 0;
      }
      if ((uVar7 & 0xff) != (uVar8 & 0xff)) {
        iVar6 = 1;
      }
      lVar5 = lVar5 + 1;
    } while (iVar6 == 0);
    if ((iVar6 == 1) || (puVar3 = param_1, *(int *)(param_1 + 0x80) != 2)) {
      pbVar4 = abStack_c0;
      FUN_10820c85c();
      if ((int)pbVar4 == -1) goto LAB_10820d1a0;
      puVar3 = (&PTR_PTR_110a31738)[(ulong)pbVar4 & 0xffffffff];
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
  } while( true );
}



/* Entry: 10820d278; end: 10820d297;  */

void FUN_10820d278(long param_1)

{
  FUN_10820c128();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0xc2) = 0x17;
  }
  return;
}



/* Entry: 10820d298; end: 10820e8bb;  */

/* WARNING: Type propagation algorithm not settling */

byte * FUN_10820d298(byte *param_1,byte *param_2,byte *param_3,long *param_4)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  uint uStack_54;
  
  if (param_3 <= param_2) {
    return (byte *)0xfffffffc;
  }
  pbVar4 = (byte *)0x12;
  pbVar5 = param_1;
  switch(param_1[(ulong)*param_2 + 0x88]) {
  case 2:
    if ((long)param_3 - (long)(param_2 + 1) < 1) {
      return (byte *)0xffffffff;
    }
    if (param_1[(ulong)param_2[1] + 0x88] < 0x1e) {
      uVar6 = (uint)param_1[(ulong)param_2[1] + 0x88];
      if ((1 << (ulong)(uVar6 & 0x1f) & 0x214000e0U) != 0) {
        *param_4 = (long)param_2;
        return (byte *)0x1d;
      }
      if (uVar6 == 0xf) {
        pbVar4 = param_2 + 2;
        uVar8 = (long)param_3 - (long)pbVar4;
        if ((long)uVar8 < 1) {
          return (byte *)0xffffffff;
        }
        bVar1 = param_1[(ulong)*pbVar4 + 0x88];
        if (bVar1 < 0x16) {
          if (bVar1 == 5) {
            if (uVar8 == 1) {
              return (byte *)0xfffffffe;
            }
            (**(code **)(param_1 + 0x1b8))(param_1,pbVar4);
            if (((int)pbVar5 == 0) &&
               (pbVar5 = param_1, (**(code **)(param_1 + 0x1a0))(param_1,pbVar4), (int)pbVar5 != 0))
            {
              lVar9 = 2;
              goto LAB_10820fc50;
            }
          }
          else if (bVar1 == 6) {
            if (uVar8 < 3) {
              return (byte *)0xfffffffe;
            }
            (**(code **)(param_1 + 0x1c0))(param_1,pbVar4);
            if (((int)pbVar5 == 0) &&
               (pbVar5 = param_1, (**(code **)(param_1 + 0x1a8))(param_1,pbVar4), (int)pbVar5 != 0))
            {
              lVar9 = 3;
              goto LAB_10820fc50;
            }
          }
          else if (bVar1 == 7) {
            if (uVar8 < 4) {
              return (byte *)0xfffffffe;
            }
            (**(code **)(param_1 + 0x1c8))(param_1,pbVar4);
            if (((int)pbVar5 == 0) &&
               (pbVar5 = param_1, (**(code **)(param_1 + 0x1b0))(param_1,pbVar4), (int)pbVar5 != 0))
            {
              lVar9 = 4;
              goto LAB_10820fc50;
            }
          }
        }
        else if (bVar1 == 0x16 || bVar1 == 0x18) {
          lVar9 = 1;
LAB_10820fc50:
          pbVar5 = pbVar4 + lVar9;
          do {
            uVar8 = (long)param_3 - (long)pbVar5;
            if ((long)uVar8 < 1) {
              return (byte *)0xffffffff;
            }
            bVar1 = param_1[(ulong)*pbVar5 + 0x88];
            uVar6 = (uint)bVar1;
            pbVar10 = pbVar5;
            if (bVar1 < 0x16) {
              if (bVar1 < 7) {
                if (bVar1 == 5) {
                  if (uVar8 == 1) {
                    return (byte *)0xfffffffe;
                  }
                  pbVar10 = param_1;
                  (**(code **)(param_1 + 0x1b8))(param_1,pbVar5);
                  if (((int)pbVar10 != 0) ||
                     (pbVar10 = param_1, (**(code **)(param_1 + 0x188))(param_1,pbVar5),
                     (int)pbVar10 == 0)) goto LAB_10820fed0;
                  lVar9 = 2;
                }
                else {
                  if (bVar1 != 6) goto LAB_10820fe90;
                  if (uVar8 < 3) {
                    return (byte *)0xfffffffe;
                  }
                  pbVar10 = param_1;
                  (**(code **)(param_1 + 0x1c0))(param_1,pbVar5);
                  if (((int)pbVar10 != 0) ||
                     (pbVar10 = param_1, (**(code **)(param_1 + 400))(param_1,pbVar5),
                     (int)pbVar10 == 0)) goto LAB_10820fed0;
                  lVar9 = 3;
                }
              }
              else {
                if (8 < bVar1) {
                  if (1 < uVar6 - 9) {
                    if (uVar6 == 0xf) {
                      FUN_108210740(pbVar4,pbVar5,&uStack_54);
                      if ((int)pbVar4 != 0) {
                        pbVar10 = pbVar5 + 1;
                        if ((long)param_3 - (long)pbVar10 < 1) {
                          return (byte *)0xffffffff;
                        }
                        if (*pbVar10 == 0x3e) {
                          *param_4 = (long)(pbVar5 + 2);
                          return (byte *)(ulong)uStack_54;
                        }
                        goto LAB_10820fe90;
                      }
                      goto LAB_10820fed4;
                    }
                    if (uVar6 != 0x15) {
LAB_10820fe90:
                      *param_4 = (long)pbVar10;
                      return (byte *)0x0;
                    }
                  }
                  pbVar10 = (byte *)0xb;
                  uStack_54 = 0xb;
                  if ((long)pbVar5 - (long)pbVar4 == 3) {
                    if (*pbVar4 == 0x78) {
                      bVar2 = false;
                    }
                    else {
                      if (*pbVar4 != 0x58) goto LAB_10820fefc;
                      bVar2 = true;
                    }
                    if (param_2[3] != 0x6d) {
                      if (param_2[3] != 0x4d) goto LAB_10820fefc;
                      bVar2 = true;
                    }
                    if (param_2[4] == 0x4c) {
LAB_10820fed0:
                      pbVar4 = (byte *)0x0;
LAB_10820fed4:
                      *param_4 = (long)pbVar5;
                      return pbVar4;
                    }
                    if (param_2[4] == 0x6c) {
                      if (bVar2) goto LAB_10820fed0;
                      pbVar10 = (byte *)0xc;
                      uStack_54 = 0xc;
                    }
                  }
LAB_10820fefc:
                  uVar8 = (long)param_3 - (long)(pbVar5 + 1);
                  pbVar4 = pbVar5 + 1;
                  if ((long)uVar8 < 1) {
                    return (byte *)0xffffffff;
                  }
                  goto LAB_10820ff30;
                }
                if (bVar1 != 7) goto LAB_10820fe90;
                if (uVar8 < 4) {
                  return (byte *)0xfffffffe;
                }
                pbVar10 = param_1;
                (**(code **)(param_1 + 0x1c8))(param_1,pbVar5);
                if (((int)pbVar10 != 0) ||
                   (pbVar10 = param_1, (**(code **)(param_1 + 0x198))(param_1,pbVar5),
                   (int)pbVar10 == 0)) goto LAB_10820fed0;
                lVar9 = 4;
              }
            }
            else {
              if (3 < uVar6 - 0x18 && uVar6 != 0x16) {
                if (bVar1 != 0x1d) goto LAB_10820fe90;
                goto LAB_10820fed0;
              }
              lVar9 = 1;
            }
            pbVar5 = pbVar5 + lVar9;
          } while( true );
        }
LAB_10820fd74:
        *param_4 = (long)pbVar4;
        return (byte *)0x0;
      }
      if (uVar6 == 0x10) {
        pbVar4 = param_2 + 2;
        if (0 < (long)param_3 - (long)pbVar4) {
          bVar1 = param_1[(ulong)*pbVar4 + 0x88];
          if (bVar1 < 0x18) {
            if (bVar1 == 0x14) {
              *param_4 = (long)(param_2 + 3);
              return (byte *)0x21;
            }
            if (bVar1 != 0x16) {
LAB_10820fb10:
              *param_4 = (long)pbVar4;
              return (byte *)0x0;
            }
          }
          else if (bVar1 != 0x18) {
            if (bVar1 == 0x1b) {
              pbVar4 = param_2 + 3;
              if ((long)param_3 - (long)pbVar4 < 1) {
                return (byte *)0xffffffff;
              }
              if (*pbVar4 != 0x2d) {
LAB_1082106b4:
                *param_4 = (long)pbVar4;
                return (byte *)0x0;
              }
              pbVar5 = param_2 + 4;
joined_r0x0001082105bc:
              do {
                while( true ) {
                  pbVar4 = pbVar5;
                  uVar8 = (long)param_3 - (long)pbVar4;
                  if ((long)uVar8 < 1) {
                    return (byte *)0xffffffff;
                  }
                  bVar1 = param_1[(ulong)*pbVar4 + 0x88];
                  if (6 < bVar1) break;
                  if (bVar1 == 5) {
                    if (uVar8 == 1) {
                      return (byte *)0xfffffffe;
                    }
                    pbVar5 = param_1;
                    (**(code **)(param_1 + 0x1b8))(param_1,pbVar4);
                    if ((int)pbVar5 != 0) goto LAB_1082106b4;
                    pbVar5 = pbVar4 + 2;
                  }
                  else if (bVar1 == 6) {
                    if (uVar8 < 3) {
                      return (byte *)0xfffffffe;
                    }
                    pbVar5 = param_1;
                    (**(code **)(param_1 + 0x1c0))(param_1,pbVar4);
                    if ((int)pbVar5 != 0) goto LAB_1082106b4;
                    pbVar5 = pbVar4 + 3;
                  }
                  else {
                    if (bVar1 < 2) goto LAB_1082106b4;
LAB_1082105dc:
                    pbVar5 = pbVar4 + 1;
                  }
                }
                if (bVar1 == 7) {
                  if (uVar8 < 4) {
                    return (byte *)0xfffffffe;
                  }
                  pbVar5 = param_1;
                  (**(code **)(param_1 + 0x1c8))(param_1,pbVar4);
                  if ((int)pbVar5 != 0) goto LAB_1082106b4;
                  pbVar5 = pbVar4 + 4;
                  goto joined_r0x0001082105bc;
                }
                if (bVar1 != 0x1b) {
                  if (bVar1 != 8) goto LAB_1082105dc;
                  goto LAB_1082106b4;
                }
                pbVar5 = pbVar4 + 1;
                if ((long)param_3 - (long)pbVar5 < 1) {
                  return (byte *)0xffffffff;
                }
                if (*pbVar5 == 0x2d) {
                  if (0 < (long)param_3 - (long)(pbVar4 + 2)) {
                    pbVar5 = pbVar4 + 3;
                    if (pbVar4[2] != 0x3e) {
                      pbVar5 = pbVar4 + 2;
                    }
                    uVar6 = 0xd;
                    if (pbVar4[2] != 0x3e) {
                      uVar6 = 0;
                    }
                    *param_4 = (long)pbVar5;
                    return (byte *)(ulong)uVar6;
                  }
                  return (byte *)0xffffffff;
                }
              } while( true );
            }
            goto LAB_10820fb10;
          }
          param_2 = param_2 + 3;
          for (lVar9 = (long)param_3 - (long)param_2; 0 < lVar9; lVar9 = lVar9 + -1) {
            if (0x1e < param_1[(ulong)*param_2 + 0x88]) goto LAB_10820fb90;
            uVar6 = (uint)param_1[(ulong)*param_2 + 0x88];
            if ((1 << (ulong)(uVar6 & 0x1f) & 0x1400000U) == 0) {
              if ((1 << (ulong)(uVar6 & 0x1f) & 0x200600U) != 0) {
LAB_10820fb44:
                *param_4 = (long)param_2;
                return (byte *)0x10;
              }
              if (uVar6 == 0x1e) {
                if (lVar9 == 1) {
                  return (byte *)0xffffffff;
                }
                if (0x1e < param_1[(ulong)param_2[1] + 0x88] ||
                    (1 << (ulong)(param_1[(ulong)param_2[1] + 0x88] & 0x1f) & 0x40200600U) == 0)
                goto LAB_10820fb44;
              }
LAB_10820fb90:
              *param_4 = (long)param_2;
              return (byte *)0x0;
            }
            param_2 = param_2 + 1;
          }
        }
        return (byte *)0xffffffff;
      }
    }
    goto code_r0x00010820db60;
  default:
    *param_4 = (long)param_2;
    return (byte *)0x0;
  case 4:
    pbVar4 = param_2 + 1;
    if ((long)param_3 - (long)pbVar4 < 1) {
      return (byte *)0xffffffe6;
    }
    if (*pbVar4 == 0x5d) {
      if ((long)param_3 - (long)pbVar4 == 1) {
        return (byte *)0xffffffff;
      }
      if (param_2[2] == 0x3e) {
        *param_4 = (long)(param_2 + 3);
        return (byte *)0x22;
      }
    }
    *param_4 = (long)pbVar4;
    return (byte *)0x1a;
  case 5:
    if ((long)param_3 - (long)param_2 < 2) {
      return (byte *)0xfffffffe;
    }
    pbVar4 = param_1;
    (**(code **)(param_1 + 0x1b8))();
    if ((int)pbVar4 == 0) {
      pbVar4 = param_1;
      (**(code **)(param_1 + 0x1a0))(param_1,param_2);
      if ((int)pbVar4 == 0) {
        (**(code **)(param_1 + 0x188))(param_1,param_2);
        if ((int)pbVar5 == 0) goto code_r0x00010820d978;
        pbVar4 = (byte *)0x13;
      }
      else {
        pbVar4 = (byte *)0x12;
      }
      lVar9 = 2;
code_r0x00010820dbdc:
      pbVar5 = param_2 + lVar9;
      goto joined_r0x00010820d308;
    }
    break;
  case 6:
    if ((long)param_3 - (long)param_2 < 3) {
      return (byte *)0xfffffffe;
    }
    pbVar4 = param_1;
    (**(code **)(param_1 + 0x1c0))();
    if ((int)pbVar4 == 0) {
      pbVar4 = param_1;
      (**(code **)(param_1 + 0x1a8))(param_1,param_2);
      if ((int)pbVar4 == 0) {
        (**(code **)(param_1 + 400))(param_1,param_2);
        if ((int)pbVar5 == 0) goto code_r0x00010820d978;
        pbVar4 = (byte *)0x13;
        lVar9 = 3;
      }
      else {
        pbVar4 = (byte *)0x12;
        lVar9 = 3;
      }
      goto code_r0x00010820dbdc;
    }
    break;
  case 7:
    if ((long)param_3 - (long)param_2 < 4) {
      return (byte *)0xfffffffe;
    }
    pbVar4 = param_1;
    (**(code **)(param_1 + 0x1c8))();
    if ((int)pbVar4 == 0) {
      pbVar4 = param_1;
      (**(code **)(param_1 + 0x1b0))(param_1,param_2);
      if ((int)pbVar4 == 0) {
        (**(code **)(param_1 + 0x198))(param_1,param_2);
        if ((int)pbVar5 == 0) goto code_r0x00010820d978;
        pbVar4 = (byte *)0x13;
        lVar9 = 4;
      }
      else {
        pbVar4 = (byte *)0x12;
        lVar9 = 4;
      }
      goto code_r0x00010820dbdc;
    }
    break;
  case 9:
    if (param_2 + 1 == param_3) {
      *param_4 = (long)param_3;
      return (byte *)0xfffffff1;
    }
  case 10:
  case 0x15:
    param_2 = param_2 + 1;
    lVar9 = (long)param_3 - (long)param_2;
    pbVar4 = param_2;
    for (; (0 < lVar9 &&
           ((bVar1 = param_1[(ulong)*param_2 + 0x88], bVar1 == 0x15 || bVar1 == 10 ||
            (pbVar4 = param_2, bVar1 == 9 && param_2 + 1 != param_3)))); param_2 = param_2 + 1) {
      lVar9 = lVar9 + -1;
      pbVar4 = param_3;
    }
    *param_4 = (long)pbVar4;
    return (byte *)0xf;
  case 0xb:
    *param_4 = (long)(param_2 + 1);
    return (byte *)0x11;
  case 0xc:
    uVar6 = 0xc;
    goto code_r0x00010820d69c;
  case 0xd:
    uVar6 = 0xd;
code_r0x00010820d69c:
    param_2 = param_2 + 1;
    uVar8 = (long)param_3 - (long)param_2;
    if ((long)uVar8 < 1) {
      return (byte *)0xffffffff;
    }
    do {
      bVar1 = param_1[(ulong)*param_2 + 0x88];
      uVar7 = (uint)bVar1;
      if (bVar1 < 7) {
        if (bVar1 == 5) {
          if (uVar8 == 1) {
            return (byte *)0xfffffffe;
          }
          pbVar4 = param_1;
          (**(code **)(param_1 + 0x1b8))(param_1,param_2);
          if ((int)pbVar4 != 0) goto LAB_10820f9b0;
          param_2 = param_2 + 2;
        }
        else {
          if (bVar1 != 6) {
            if (uVar7 < 2) goto LAB_10820f9b0;
            goto LAB_10820f9a0;
          }
          if (uVar8 < 3) {
            return (byte *)0xfffffffe;
          }
          pbVar4 = param_1;
          (**(code **)(param_1 + 0x1c0))(param_1,param_2);
          if ((int)pbVar4 != 0) goto LAB_10820f9b0;
          param_2 = param_2 + 3;
        }
      }
      else if (uVar7 - 0xc < 2) {
        param_2 = param_2 + 1;
        if (uVar6 == uVar7) {
          if ((long)param_3 - (long)param_2 < 1) {
            return (byte *)0xffffffe5;
          }
          *param_4 = (long)param_2;
          if (0x1e < param_1[(ulong)*param_2 + 0x88] ||
              (1 << (ulong)(param_1[(ulong)*param_2 + 0x88] & 0x1f) & 0x40300e00U) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1b;
        }
      }
      else if (uVar7 == 7) {
        if (uVar8 < 4) {
          return (byte *)0xfffffffe;
        }
        pbVar4 = param_1;
        (**(code **)(param_1 + 0x1c8))(param_1,param_2);
        if ((int)pbVar4 != 0) {
LAB_10820f9b0:
          *param_4 = (long)param_2;
          return (byte *)0x0;
        }
        param_2 = param_2 + 4;
      }
      else {
        if (uVar7 == 8) goto LAB_10820f9b0;
LAB_10820f9a0:
        param_2 = param_2 + 1;
      }
      uVar8 = (long)param_3 - (long)param_2;
      if ((long)uVar8 < 1) {
        return (byte *)0xffffffff;
      }
    } while( true );
  case 0x13:
    param_2 = param_2 + 1;
    uVar8 = (long)param_3 - (long)param_2;
    if ((long)uVar8 < 1) {
      return (byte *)0xffffffff;
    }
    pbVar4 = (byte *)0x0;
    bVar1 = param_1[(ulong)*param_2 + 0x88];
    if (bVar1 < 7) {
      if (bVar1 == 5) {
        if (uVar8 == 1) {
          return (byte *)0xfffffffe;
        }
        pbVar4 = param_1;
        (**(code **)(param_1 + 0x1b8))(param_1,param_2);
        if ((int)pbVar4 != 0) {
code_r0x000108210508:
          *param_4 = (long)param_2;
          return (byte *)0x0;
        }
        pbVar4 = param_1;
        (**(code **)(param_1 + 0x1a0))(param_1,param_2);
        if ((int)pbVar4 != 0) {
          lVar9 = 2;
          goto code_r0x000108210334;
        }
      }
      else if (bVar1 == 6) {
        if (uVar8 < 3) {
          return (byte *)0xfffffffe;
        }
        pbVar4 = param_1;
        (**(code **)(param_1 + 0x1c0))(param_1,param_2);
        if ((int)pbVar4 != 0) goto code_r0x000108210508;
        pbVar4 = param_1;
        (**(code **)(param_1 + 0x1a8))(param_1,param_2);
        if ((int)pbVar4 != 0) {
          lVar9 = 3;
          goto code_r0x000108210334;
        }
      }
    }
    else if (bVar1 == 7) {
      if (uVar8 < 4) {
        return (byte *)0xfffffffe;
      }
      pbVar4 = param_1;
      (**(code **)(param_1 + 0x1c8))(param_1,param_2);
      if ((int)pbVar4 == 0) {
        pbVar4 = param_1;
        (**(code **)(param_1 + 0x1b0))(param_1,param_2);
        if ((int)pbVar4 != 0) {
          lVar9 = 4;
          goto code_r0x000108210334;
        }
      }
      else {
        pbVar4 = (byte *)0x0;
      }
    }
    else if (bVar1 == 0x16 || bVar1 == 0x18) {
      lVar9 = 1;
code_r0x000108210334:
      param_2 = param_2 + lVar9;
      do {
        uVar8 = (long)param_3 - (long)param_2;
        if ((long)uVar8 < 1) {
          return (byte *)0xffffffec;
        }
        pbVar4 = (byte *)0x0;
        lVar9 = 1;
        switch(param_1[(ulong)*param_2 + 0x88]) {
        case 5:
          if (uVar8 == 1) {
            return (byte *)0xfffffffe;
          }
          pbVar4 = param_1;
          (**(code **)(param_1 + 0x1b8))(param_1,param_2);
          if ((int)pbVar4 != 0) goto code_r0x000108210508;
          pbVar4 = param_1;
          (**(code **)(param_1 + 0x188))(param_1,param_2);
          if ((int)pbVar4 == 0) goto code_r0x0001082104bc;
          lVar9 = 2;
          break;
        case 6:
          if (uVar8 < 3) {
            return (byte *)0xfffffffe;
          }
          pbVar4 = param_1;
          (**(code **)(param_1 + 0x1c0))(param_1,param_2);
          if ((int)pbVar4 != 0) goto code_r0x000108210508;
          pbVar4 = param_1;
          (**(code **)(param_1 + 400))(param_1,param_2);
          if ((int)pbVar4 == 0) goto code_r0x0001082104bc;
          lVar9 = 3;
          break;
        case 7:
          if (uVar8 < 4) {
            return (byte *)0xfffffffe;
          }
          pbVar4 = param_1;
          (**(code **)(param_1 + 0x1c8))(param_1,param_2);
          if ((int)pbVar4 != 0) goto code_r0x000108210508;
          pbVar4 = param_1;
          (**(code **)(param_1 + 0x198))(param_1,param_2);
          if ((int)pbVar4 == 0) goto code_r0x0001082104bc;
          lVar9 = 4;
          break;
        default:
          goto code_r0x0001082104bc;
        case 9:
        case 10:
        case 0xb:
        case 0x15:
        case 0x1e:
        case 0x20:
        case 0x24:
          *param_4 = (long)param_2;
          return (byte *)0x14;
        case 0x16:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
          break;
        }
        param_2 = param_2 + lVar9;
      } while( true );
    }
code_r0x0001082104bc:
    *param_4 = (long)param_2;
    return pbVar4;
  case 0x14:
    *param_4 = (long)(param_2 + 1);
    return (byte *)0x19;
  case 0x17:
  case 0x19:
  case 0x1a:
  case 0x1b:
    pbVar4 = (byte *)0x13;
  case 0x16:
  case 0x18:
    pbVar5 = param_2 + 1;
joined_r0x00010820d308:
    pbVar10 = pbVar5;
    uVar8 = (long)param_3 - (long)pbVar10;
    iVar3 = (int)pbVar4;
    if ((long)uVar8 < 1) {
      return (byte *)(ulong)(uint)-iVar3;
    }
    switch(param_1[(ulong)*pbVar10 + 0x88]) {
    case 5:
      if (uVar8 == 1) {
        return (byte *)0xfffffffe;
      }
      pbVar5 = param_1;
      (**(code **)(param_1 + 0x1b8))(param_1,pbVar10);
      if (((int)pbVar5 != 0) ||
         (pbVar5 = param_1, (**(code **)(param_1 + 0x188))(param_1,pbVar10), (int)pbVar5 == 0))
      goto code_r0x00010820d938;
      pbVar5 = pbVar10 + 2;
      goto joined_r0x00010820d308;
    case 6:
      if (uVar8 < 3) {
        return (byte *)0xfffffffe;
      }
      pbVar5 = param_1;
      (**(code **)(param_1 + 0x1c0))(param_1,pbVar10);
      if (((int)pbVar5 != 0) ||
         (pbVar5 = param_1, (**(code **)(param_1 + 400))(param_1,pbVar10), (int)pbVar5 == 0))
      goto code_r0x00010820d938;
      pbVar5 = pbVar10 + 3;
      goto joined_r0x00010820d308;
    case 7:
      if (uVar8 < 4) {
        return (byte *)0xfffffffe;
      }
      pbVar5 = param_1;
      (**(code **)(param_1 + 0x1c8))(param_1,pbVar10);
      if (((int)pbVar5 != 0) ||
         (pbVar5 = param_1, (**(code **)(param_1 + 0x198))(param_1,pbVar10), (int)pbVar5 == 0)) {
code_r0x00010820d938:
        *param_4 = (long)pbVar10;
        return (byte *)0x0;
      }
      pbVar5 = pbVar10 + 4;
      goto joined_r0x00010820d308;
    case 9:
    case 10:
    case 0xb:
    case 0x14:
    case 0x15:
    case 0x1e:
    case 0x20:
    case 0x23:
    case 0x24:
      goto code_r0x00010820db18;
    case 0xf:
      if (iVar3 != 0x13) {
        *param_4 = (long)(pbVar10 + 1);
        return (byte *)0x1e;
      }
      break;
    case 0x16:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
      pbVar5 = pbVar10 + 1;
      goto joined_r0x00010820d308;
    case 0x17:
      pbVar5 = pbVar10 + 1;
      if (iVar3 == 0x29) {
        pbVar4 = (byte *)0x13;
      }
      else if (iVar3 == 0x12) {
        uVar8 = (long)param_3 - (long)pbVar5;
        if ((long)uVar8 < 1) {
          return (byte *)0xffffffff;
        }
        pbVar4 = (byte *)0x13;
        uVar6 = (uint)param_1[(ulong)*pbVar5 + 0x88];
        if (0x15 < param_1[(ulong)*pbVar5 + 0x88]) goto code_r0x00010820d47c;
        if (uVar6 == 5) {
          if (uVar8 == 1) {
            return (byte *)0xfffffffe;
          }
          pbVar4 = param_1;
          (**(code **)(param_1 + 0x1b8))(param_1,pbVar5);
          if (((int)pbVar4 != 0) ||
             (pbVar4 = param_1, (**(code **)(param_1 + 0x188))(param_1,pbVar5), (int)pbVar4 == 0))
          goto code_r0x00010820dc78;
          pbVar5 = pbVar10 + 3;
        }
        else if (uVar6 == 6) {
          if (uVar8 < 3) {
            return (byte *)0xfffffffe;
          }
          pbVar4 = param_1;
          (**(code **)(param_1 + 0x1c0))(param_1,pbVar5);
          if (((int)pbVar4 != 0) ||
             (pbVar4 = param_1, (**(code **)(param_1 + 400))(param_1,pbVar5), (int)pbVar4 == 0))
          goto code_r0x00010820dc78;
          pbVar5 = pbVar10 + 4;
        }
        else {
          if (uVar6 != 7) goto joined_r0x00010820d308;
          if (uVar8 < 4) {
            return (byte *)0xfffffffe;
          }
          pbVar4 = param_1;
          (**(code **)(param_1 + 0x1c8))(param_1,pbVar5);
          if (((int)pbVar4 != 0) ||
             (pbVar4 = param_1, (**(code **)(param_1 + 0x198))(param_1,pbVar5), (int)pbVar4 == 0)) {
code_r0x00010820dc78:
            *param_4 = (long)pbVar5;
            return (byte *)0x0;
          }
          pbVar5 = pbVar10 + 5;
        }
        pbVar4 = (byte *)0x29;
      }
      goto joined_r0x00010820d308;
    case 0x21:
      if (iVar3 != 0x13) {
        *param_4 = (long)(pbVar10 + 1);
        return (byte *)0x1f;
      }
      break;
    case 0x22:
      if (iVar3 != 0x13) {
        *param_4 = (long)(pbVar10 + 1);
        return (byte *)0x20;
      }
    }
    pbVar4 = (byte *)0x0;
code_r0x00010820db18:
    *param_4 = (long)pbVar10;
    return pbVar4;
  case 0x1e:
    param_2 = param_2 + 1;
    uVar8 = (long)param_3 - (long)param_2;
    if ((long)uVar8 < 1) {
      return (byte *)0xffffffff;
    }
    bVar1 = param_1[(ulong)*param_2 + 0x88];
    uVar6 = (uint)bVar1;
    pbVar4 = param_1;
    if (bVar1 < 0x1f) {
      lVar9 = 1;
      if ((1 << (ulong)(uVar6 & 0x1f) & 0x40200600U) != 0) {
        *param_4 = (long)param_2;
        return (byte *)0x16;
      }
      if ((1 << (ulong)(uVar6 & 0x1f) & 0x1400000U) != 0) goto LAB_10821009c;
      if (bVar1 != 7) goto LAB_1082101f8;
      if (uVar8 < 4) {
        return (byte *)0xfffffffe;
      }
      (**(code **)(param_1 + 0x1c8))(param_1,param_2);
      if ((int)pbVar5 == 0) {
        (**(code **)(param_1 + 0x1b0))(param_1,param_2);
        if ((int)pbVar4 != 0) {
          lVar9 = 4;
          goto LAB_10821009c;
        }
        goto LAB_108210278;
      }
    }
    else {
LAB_1082101f8:
      if (bVar1 == 6) {
        if (uVar8 < 3) {
          return (byte *)0xfffffffe;
        }
        (**(code **)(param_1 + 0x1c0))(param_1,param_2);
        if ((int)pbVar5 == 0) {
          (**(code **)(param_1 + 0x1a8))(param_1,param_2);
          if ((int)pbVar4 != 0) {
            lVar9 = 3;
LAB_10821009c:
            param_2 = param_2 + lVar9;
            do {
              uVar8 = (long)param_3 - (long)param_2;
              if ((long)uVar8 < 1) {
                return (byte *)0xffffffff;
              }
              bVar1 = param_1[(ulong)*param_2 + 0x88];
              if (bVar1 < 0x12) {
                if (bVar1 == 5) {
                  if (uVar8 == 1) {
                    return (byte *)0xfffffffe;
                  }
                  pbVar4 = param_1;
                  (**(code **)(param_1 + 0x1b8))(param_1,param_2);
                  if ((int)pbVar4 != 0) goto LAB_108210274;
                  pbVar4 = param_1;
                  (**(code **)(param_1 + 0x188))(param_1,param_2);
                  if ((int)pbVar4 == 0) break;
                  lVar9 = 2;
                }
                else if (bVar1 == 6) {
                  if (uVar8 < 3) {
                    return (byte *)0xfffffffe;
                  }
                  pbVar4 = param_1;
                  (**(code **)(param_1 + 0x1c0))(param_1,param_2);
                  if ((int)pbVar4 != 0) goto LAB_108210274;
                  pbVar4 = param_1;
                  (**(code **)(param_1 + 400))(param_1,param_2);
                  if ((int)pbVar4 == 0) break;
                  lVar9 = 3;
                }
                else {
                  if (bVar1 != 7) goto LAB_108210274;
                  if (uVar8 < 4) {
                    return (byte *)0xfffffffe;
                  }
                  pbVar4 = param_1;
                  (**(code **)(param_1 + 0x1c8))(param_1,param_2);
                  if ((int)pbVar4 != 0) goto LAB_108210274;
                  pbVar4 = param_1;
                  (**(code **)(param_1 + 0x198))(param_1,param_2);
                  if ((int)pbVar4 == 0) break;
                  lVar9 = 4;
                }
              }
              else {
                if (3 < bVar1 - 0x18 && bVar1 != 0x16) {
                  if (bVar1 == 0x12) {
                    *param_4 = (long)(param_2 + 1);
                    return (byte *)0x1c;
                  }
                  goto LAB_108210274;
                }
                lVar9 = 1;
              }
              param_2 = param_2 + lVar9;
            } while( true );
          }
          goto LAB_108210278;
        }
      }
      else if (uVar6 == 5) {
        if (uVar8 == 1) {
          return (byte *)0xfffffffe;
        }
        (**(code **)(param_1 + 0x1b8))(param_1,param_2);
        if ((int)pbVar5 == 0) {
          (**(code **)(param_1 + 0x1a0))(param_1,param_2);
          if ((int)pbVar4 != 0) {
            lVar9 = 2;
            goto LAB_10821009c;
          }
          goto LAB_108210278;
        }
      }
    }
LAB_108210274:
    pbVar4 = (byte *)0x0;
LAB_108210278:
    *param_4 = (long)param_2;
    return pbVar4;
  case 0x1f:
    *param_4 = (long)(param_2 + 1);
    return (byte *)0x17;
  case 0x20:
    pbVar4 = param_2 + 1;
    if ((long)param_3 - (long)pbVar4 < 1) {
      return (byte *)0xffffffe8;
    }
    bVar1 = param_1[(ulong)*pbVar4 + 0x88];
    uVar8 = (ulong)bVar1;
    if (bVar1 < 0x25) {
      if ((1L << (uVar8 & 0x3f) & 0x1900200000U) != 0) goto code_r0x00010820d9f8;
      if (uVar8 == 0x21) {
        *param_4 = (long)(param_2 + 2);
        return (byte *)0x24;
      }
      if (uVar8 == 0x22) {
        *param_4 = (long)(param_2 + 2);
        return (byte *)0x25;
      }
    }
    if (bVar1 - 9 < 3) {
code_r0x00010820d9f8:
      *param_4 = (long)pbVar4;
      return (byte *)0x18;
    }
    if (bVar1 == 0xf) {
      *param_4 = (long)(param_2 + 2);
      return (byte *)0x23;
    }
code_r0x00010820db60:
    *param_4 = (long)(param_2 + 1);
    return (byte *)0x0;
  case 0x23:
    *param_4 = (long)(param_2 + 1);
    return (byte *)0x26;
  case 0x24:
    *param_4 = (long)(param_2 + 1);
    return (byte *)0x15;
  }
  pbVar5 = (byte *)0x0;
code_r0x00010820d978:
  *param_4 = (long)param_2;
  return pbVar5;
code_r0x00010820d47c:
  if (uVar6 - 0x18 < 4 || uVar6 == 0x16) {
    pbVar4 = (byte *)0x29;
    pbVar5 = pbVar10 + 2;
  }
  else if (uVar6 == 0x1d) {
    *param_4 = (long)pbVar5;
    return (byte *)0x0;
  }
  goto joined_r0x00010820d308;
LAB_10820ff30:
  bVar1 = param_1[(ulong)*pbVar4 + 0x88];
  if (bVar1 < 7) {
    if (bVar1 == 5) {
      if (uVar8 == 1) {
        return (byte *)0xfffffffe;
      }
      pbVar5 = param_1;
      (**(code **)(param_1 + 0x1b8))(param_1,pbVar4);
      if ((int)pbVar5 != 0) goto LAB_10820fd74;
      pbVar5 = pbVar4 + 2;
    }
    else if (bVar1 == 6) {
      if (uVar8 < 3) {
        return (byte *)0xfffffffe;
      }
      pbVar5 = param_1;
      (**(code **)(param_1 + 0x1c0))(param_1,pbVar4);
      if ((int)pbVar5 != 0) goto LAB_10820fd74;
      pbVar5 = pbVar4 + 3;
    }
    else {
      if (bVar1 < 2) goto LAB_10820fd74;
LAB_10820ff18:
      pbVar5 = pbVar4 + 1;
    }
  }
  else if (bVar1 == 7) {
    if (uVar8 < 4) {
      return (byte *)0xfffffffe;
    }
    pbVar5 = param_1;
    (**(code **)(param_1 + 0x1c8))(param_1,pbVar4);
    if ((int)pbVar5 != 0) goto LAB_10820fd74;
    pbVar5 = pbVar4 + 4;
  }
  else {
    if (bVar1 != 0xf) {
      if (bVar1 != 8) goto LAB_10820ff18;
      goto LAB_10820fd74;
    }
    pbVar5 = pbVar4 + 1;
    if ((long)param_3 - (long)pbVar5 < 1) {
      return (byte *)0xffffffff;
    }
    if (*pbVar5 == 0x3e) {
      *param_4 = (long)(pbVar4 + 2);
      return pbVar10;
    }
  }
  uVar8 = (long)param_3 - (long)pbVar5;
  pbVar4 = pbVar5;
  if ((long)uVar8 < 1) {
    return (byte *)0xffffffff;
  }
  goto LAB_10820ff30;
}



/* Entry: 10820e8bc; end: 10820ee03;  */

undefined8 FUN_10820e8bc(long param_1,byte *param_2,byte *param_3,long *param_4)

{
  long lVar1;
  byte *pbVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  
  if (param_3 <= param_2) {
    return 0xfffffffc;
  }
  lVar1 = param_1 + 0x88;
  bVar3 = *(byte *)(lVar1 + (ulong)*param_2);
  if (bVar3 < 7) {
    if (bVar3 < 5) {
      if (bVar3 < 2) {
LAB_10820e90c:
        *param_4 = (long)param_2;
        return 0;
      }
      if (bVar3 == 4) {
        pbVar2 = param_2 + 1;
        if ((long)param_3 - (long)pbVar2 < 1) {
          return 0xffffffff;
        }
        if (*pbVar2 == 0x5d) {
          if ((long)param_3 - (long)(param_2 + 2) < 1) {
            return 0xffffffff;
          }
          if (param_2[2] == 0x3e) {
            *param_4 = (long)(param_2 + 3);
            return 0x28;
          }
        }
        goto joined_r0x00010820eaa0;
      }
      goto LAB_10820ea94;
    }
    if (bVar3 == 5) {
      if ((long)param_3 - (long)param_2 < 2) {
        return 0xfffffffe;
      }
      lVar6 = param_1;
      (**(code **)(param_1 + 0x1b8))();
      if ((int)lVar6 != 0) {
LAB_10820ebd8:
        uVar5 = 0;
        goto LAB_10820ebdc;
      }
      pbVar2 = param_2 + 2;
    }
    else {
      if (bVar3 != 6) goto LAB_10820ea94;
      if ((long)param_3 - (long)param_2 < 3) {
        return 0xfffffffe;
      }
      lVar6 = param_1;
      (**(code **)(param_1 + 0x1c0))();
      if ((int)lVar6 != 0) goto LAB_10820ebd8;
      pbVar2 = param_2 + 3;
    }
  }
  else {
    if (bVar3 < 9) {
      if (bVar3 == 7) {
        if ((long)param_3 - (long)param_2 < 4) {
          return 0xfffffffe;
        }
        lVar6 = param_1;
        (**(code **)(param_1 + 0x1c8))();
        if ((int)lVar6 != 0) goto LAB_10820ebd8;
        pbVar2 = param_2 + 4;
        goto joined_r0x00010820eaa0;
      }
      if (bVar3 == 8) goto LAB_10820e90c;
    }
    else {
      if (bVar3 == 9) {
        if ((long)param_3 - (long)(param_2 + 1) < 1) {
          return 0xffffffff;
        }
        pbVar2 = param_2 + 2;
        if (*(char *)(lVar1 + (ulong)param_2[1]) != '\n') {
          pbVar2 = param_2 + 1;
        }
        *param_4 = (long)pbVar2;
        return 7;
      }
      if (bVar3 == 10) {
        *param_4 = (long)(param_2 + 1);
        return 7;
      }
    }
LAB_10820ea94:
    pbVar2 = param_2 + 1;
  }
joined_r0x00010820eaa0:
  while (param_2 = pbVar2, uVar4 = (long)param_3 - (long)param_2, 0 < (long)uVar4) {
    uVar5 = 6;
    uVar7 = (uint)*(byte *)(lVar1 + (ulong)*param_2);
    if (uVar7 < 6) {
      if (uVar7 == 5) {
        if (uVar4 == 1) goto LAB_10820ebdc;
        lVar6 = param_1;
        (**(code **)(param_1 + 0x1b8))(param_1,param_2);
        if ((int)lVar6 != 0) break;
        lVar6 = 2;
      }
      else {
        lVar6 = 1;
        if (uVar7 < 2 || uVar7 == 4) goto LAB_10820ebdc;
      }
    }
    else if (uVar7 == 6) {
      if (uVar4 < 3) goto LAB_10820ebdc;
      lVar6 = param_1;
      (**(code **)(param_1 + 0x1c0))(param_1,param_2);
      if ((int)lVar6 != 0) break;
      lVar6 = 3;
    }
    else if (uVar7 == 7) {
      if (uVar4 < 4) goto LAB_10820ebdc;
      lVar6 = param_1;
      (**(code **)(param_1 + 0x1c8))(param_1,param_2);
      if ((int)lVar6 != 0) break;
      lVar6 = 4;
    }
    else {
      lVar6 = 1;
      if (uVar7 - 8 < 3) goto LAB_10820ebdc;
    }
    pbVar2 = param_2 + lVar6;
  }
  uVar5 = 6;
LAB_10820ebdc:
  *param_4 = (long)param_2;
  return uVar5;
}



/* Entry: 10820ee04; end: 10820ef4f;  */

long FUN_10820ee04(long param_1,byte *param_2,byte *param_3,long *param_4)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  byte *pbVar7;
  
  if (param_3 <= param_2) {
    return 0xfffffffc;
  }
  if ((long)param_3 - (long)param_2 < 1) {
    return 0xffffffff;
  }
  pbVar3 = param_2;
  do {
    bVar1 = *(byte *)(param_1 + 0x88 + (ulong)*pbVar3);
    if (bVar1 < 7) {
      if (bVar1 < 6) {
        if (bVar1 != 5) {
          if (bVar1 == 2) {
            *param_4 = (long)pbVar3;
            return 0;
          }
          if (bVar1 != 3) goto LAB_10820eea0;
          if (pbVar3 == param_2) {
            pbVar3 = param_2 + 1;
            uVar4 = (long)param_3 - (long)pbVar3;
            if ((long)uVar4 < 1) {
              return 0xffffffff;
            }
            lVar2 = 0;
            lVar6 = param_1 + 0x88;
            bVar1 = *(byte *)(lVar6 + (ulong)*pbVar3);
            if (bVar1 < 0x13) {
              if (bVar1 == 5) {
                if (uVar4 == 1) {
                  return 0xfffffffe;
                }
                lVar2 = param_1;
                (**(code **)(param_1 + 0x1b8))(param_1,pbVar3);
                if ((int)lVar2 != 0) goto LAB_108210a94;
                lVar2 = param_1;
                (**(code **)(param_1 + 0x1a0))(param_1,pbVar3);
                if ((int)lVar2 == 0) goto LAB_108210b24;
                lVar2 = 2;
              }
              else if (bVar1 == 6) {
                if (uVar4 < 3) {
                  return 0xfffffffe;
                }
                lVar2 = param_1;
                (**(code **)(param_1 + 0x1c0))(param_1,pbVar3);
                if ((int)lVar2 != 0) goto LAB_108210a94;
                lVar2 = param_1;
                (**(code **)(param_1 + 0x1a8))(param_1,pbVar3);
                if ((int)lVar2 == 0) goto LAB_108210b24;
                lVar2 = 3;
              }
              else {
                if (bVar1 != 7) goto LAB_108210b24;
                if (uVar4 < 4) {
                  return 0xfffffffe;
                }
                lVar2 = param_1;
                (**(code **)(param_1 + 0x1c8))(param_1,pbVar3);
                if ((int)lVar2 != 0) goto LAB_108210a94;
                lVar2 = param_1;
                (**(code **)(param_1 + 0x1b0))(param_1,pbVar3);
                if ((int)lVar2 == 0) goto LAB_108210b24;
                lVar2 = 4;
              }
            }
            else {
              if (bVar1 == 0x13) {
                pbVar3 = param_2 + 2;
                if ((long)param_3 - (long)pbVar3 < 1) {
                  return 0xffffffff;
                }
                if ((ulong)*pbVar3 == 0x78) {
                  pbVar3 = param_2 + 3;
                  if ((long)param_3 - (long)pbVar3 < 1) {
                    return 0xffffffff;
                  }
                  if ((*(byte *)(lVar6 + (ulong)*pbVar3) & 0xfe) != 0x18) {
                    *param_4 = (long)pbVar3;
                    return 0;
                  }
                  pbVar3 = param_2 + 4;
                  lVar2 = (long)param_3 - (long)pbVar3;
                  if (lVar2 < 1) {
                    return 0xffffffff;
                  }
                  while (*(byte *)(lVar6 + (ulong)*pbVar3) - 0x18 < 2) {
                    pbVar3 = pbVar3 + 1;
                    lVar2 = lVar2 + -1;
                    if (lVar2 < 1) {
                      return 0xffffffff;
                    }
                  }
                  if (*(byte *)(lVar6 + (ulong)*pbVar3) == 0x12) {
                    pbVar7 = pbVar3 + 1;
LAB_108210ba8:
                    *param_4 = (long)pbVar7;
                    return 10;
                  }
                  goto LAB_108210a94;
                }
                if (*(char *)(lVar6 + (ulong)*pbVar3) != '\x19') {
                  *param_4 = (long)pbVar3;
                  return 0;
                }
                lVar2 = uVar4 - 2;
                pbVar7 = param_2 + 3;
                do {
                  pbVar3 = pbVar7;
                  if (lVar2 < 1) {
                    return 0xffffffff;
                  }
                  pbVar7 = pbVar3 + 1;
                  lVar2 = lVar2 + -1;
                } while (*(char *)(lVar6 + (ulong)*pbVar3) == '\x19');
                if (*(char *)(lVar6 + (ulong)*pbVar3) == '\x12') goto LAB_108210ba8;
                lVar2 = 0;
                goto LAB_108210b24;
              }
              if (bVar1 != 0x16 && bVar1 != 0x18) goto LAB_108210b24;
              lVar2 = 1;
            }
            pbVar3 = pbVar3 + lVar2;
            uVar4 = (long)param_3 - (long)pbVar3;
            if ((long)uVar4 < 1) {
              return 0xffffffff;
            }
            goto LAB_108210898;
          }
          break;
        }
        lVar6 = 2;
      }
      else {
        lVar6 = 3;
      }
    }
    else {
      if (bVar1 < 9) {
        if (bVar1 == 7) {
          lVar6 = 4;
          goto LAB_10820ee28;
        }
      }
      else {
        if (bVar1 == 9) {
          if (pbVar3 == param_2) {
            if ((long)param_3 - (long)(param_2 + 1) < 1) {
              return 0xfffffffd;
            }
            pbVar3 = param_2 + 2;
            if (*(char *)(param_1 + 0x88 + (ulong)param_2[1]) != '\n') {
              pbVar3 = param_2 + 1;
            }
            *param_4 = (long)pbVar3;
            return 7;
          }
          break;
        }
        if (bVar1 == 10) {
          if (pbVar3 == param_2) {
            *param_4 = (long)(param_2 + 1);
            return 7;
          }
          break;
        }
        if (bVar1 == 0x15) {
          if (pbVar3 == param_2) {
            *param_4 = (long)(param_2 + 1);
            return 0x27;
          }
          break;
        }
      }
LAB_10820eea0:
      lVar6 = 1;
    }
LAB_10820ee28:
    pbVar3 = pbVar3 + lVar6;
  } while (0 < (long)param_3 - (long)pbVar3);
  *param_4 = (long)pbVar3;
  return 6;
LAB_108210898:
  bVar1 = *(byte *)(lVar6 + (ulong)*pbVar3);
  uVar5 = (uint)bVar1;
  if (bVar1 < 0x12) {
    if (bVar1 == 5) {
      if (uVar4 == 1) {
        return 0xfffffffe;
      }
      lVar2 = param_1;
      (**(code **)(param_1 + 0x1b8))(param_1,pbVar3);
      if ((int)lVar2 != 0) goto LAB_108210a94;
      lVar2 = param_1;
      (**(code **)(param_1 + 0x188))(param_1,pbVar3);
      if ((int)lVar2 == 0) {
LAB_108210b24:
        *param_4 = (long)pbVar3;
        return lVar2;
      }
      lVar2 = 2;
    }
    else if (uVar5 == 6) {
      if (uVar4 < 3) {
        return 0xfffffffe;
      }
      lVar2 = param_1;
      (**(code **)(param_1 + 0x1c0))(param_1,pbVar3);
      if ((int)lVar2 != 0) goto LAB_108210a94;
      lVar2 = param_1;
      (**(code **)(param_1 + 400))(param_1,pbVar3);
      if ((int)lVar2 == 0) goto LAB_108210b24;
      lVar2 = 3;
    }
    else {
      if (uVar5 != 7) goto LAB_108210a94;
      if (uVar4 < 4) {
        return 0xfffffffe;
      }
      lVar2 = param_1;
      (**(code **)(param_1 + 0x1c8))(param_1,pbVar3);
      if ((int)lVar2 != 0) goto LAB_108210a94;
      lVar2 = param_1;
      (**(code **)(param_1 + 0x198))(param_1,pbVar3);
      if ((int)lVar2 == 0) goto LAB_108210b24;
      lVar2 = 4;
    }
  }
  else {
    if (3 < uVar5 - 0x18 && uVar5 != 0x16) {
      if (bVar1 == 0x12) {
        *param_4 = (long)(pbVar3 + 1);
        return 9;
      }
LAB_108210a94:
      *param_4 = (long)pbVar3;
      return 0;
    }
    lVar2 = 1;
  }
  pbVar3 = pbVar3 + lVar2;
  uVar4 = (long)param_3 - (long)pbVar3;
  if ((long)uVar4 < 1) {
    return 0xffffffff;
  }
  goto LAB_108210898;
}



/* Entry: 10820ef50; end: 10820f0b7;  */

ulong FUN_10820ef50(ulong param_1,byte *param_2,byte *param_3,long *param_4)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  byte *pbVar8;
  
  if (param_3 <= param_2) {
    return 0xfffffffc;
  }
  if ((long)param_3 - (long)param_2 < 1) {
    return 0xffffffff;
  }
  pbVar3 = param_2;
  do {
    bVar1 = *(byte *)(param_1 + 0x88 + (ulong)*pbVar3);
    if (bVar1 < 7) {
      if (bVar1 == 5) {
        lVar7 = 2;
      }
      else {
        if (bVar1 != 6) {
          if (bVar1 != 3) goto LAB_10820eff0;
          if (pbVar3 == param_2) {
            pbVar3 = param_2 + 1;
            uVar4 = (long)param_3 - (long)pbVar3;
            if ((long)uVar4 < 1) {
              return 0xffffffff;
            }
            uVar2 = 0;
            lVar7 = param_1 + 0x88;
            bVar1 = *(byte *)(lVar7 + (ulong)*pbVar3);
            if (bVar1 < 0x13) {
              if (bVar1 == 5) {
                if (uVar4 == 1) {
                  return 0xfffffffe;
                }
                uVar4 = param_1;
                (**(code **)(param_1 + 0x1b8))(param_1,pbVar3);
                if ((int)uVar4 != 0) goto LAB_108210a94;
                uVar2 = param_1;
                (**(code **)(param_1 + 0x1a0))(param_1,pbVar3);
                if ((int)uVar2 == 0) goto LAB_108210b24;
                lVar5 = 2;
              }
              else if (bVar1 == 6) {
                if (uVar4 < 3) {
                  return 0xfffffffe;
                }
                uVar4 = param_1;
                (**(code **)(param_1 + 0x1c0))(param_1,pbVar3);
                if ((int)uVar4 != 0) goto LAB_108210a94;
                uVar2 = param_1;
                (**(code **)(param_1 + 0x1a8))(param_1,pbVar3);
                if ((int)uVar2 == 0) goto LAB_108210b24;
                lVar5 = 3;
              }
              else {
                if (bVar1 != 7) goto LAB_108210b24;
                if (uVar4 < 4) {
                  return 0xfffffffe;
                }
                uVar4 = param_1;
                (**(code **)(param_1 + 0x1c8))(param_1,pbVar3);
                if ((int)uVar4 != 0) goto LAB_108210a94;
                uVar2 = param_1;
                (**(code **)(param_1 + 0x1b0))(param_1,pbVar3);
                if ((int)uVar2 == 0) goto LAB_108210b24;
                lVar5 = 4;
              }
            }
            else {
              if (bVar1 == 0x13) {
                pbVar3 = param_2 + 2;
                if ((long)param_3 - (long)pbVar3 < 1) {
                  return 0xffffffff;
                }
                if ((ulong)*pbVar3 == 0x78) {
                  pbVar3 = param_2 + 3;
                  if ((long)param_3 - (long)pbVar3 < 1) {
                    return 0xffffffff;
                  }
                  if ((*(byte *)(lVar7 + (ulong)*pbVar3) & 0xfe) != 0x18) {
                    *param_4 = (long)pbVar3;
                    return 0;
                  }
                  pbVar3 = param_2 + 4;
                  lVar5 = (long)param_3 - (long)pbVar3;
                  if (lVar5 < 1) {
                    return 0xffffffff;
                  }
                  while (*(byte *)(lVar7 + (ulong)*pbVar3) - 0x18 < 2) {
                    pbVar3 = pbVar3 + 1;
                    lVar5 = lVar5 + -1;
                    if (lVar5 < 1) {
                      return 0xffffffff;
                    }
                  }
                  if (*(byte *)(lVar7 + (ulong)*pbVar3) == 0x12) {
                    pbVar8 = pbVar3 + 1;
LAB_108210ba8:
                    *param_4 = (long)pbVar8;
                    return 10;
                  }
                  goto LAB_108210a94;
                }
                if (*(char *)(lVar7 + (ulong)*pbVar3) != '\x19') {
                  *param_4 = (long)pbVar3;
                  return 0;
                }
                lVar5 = uVar4 - 2;
                pbVar8 = param_2 + 3;
                do {
                  pbVar3 = pbVar8;
                  if (lVar5 < 1) {
                    return 0xffffffff;
                  }
                  pbVar8 = pbVar3 + 1;
                  lVar5 = lVar5 + -1;
                } while (*(char *)(lVar7 + (ulong)*pbVar3) == '\x19');
                if (*(char *)(lVar7 + (ulong)*pbVar3) == '\x12') goto LAB_108210ba8;
                uVar2 = 0;
                goto LAB_108210b24;
              }
              if (bVar1 != 0x16 && bVar1 != 0x18) goto LAB_108210b24;
              lVar5 = 1;
            }
            pbVar3 = pbVar3 + lVar5;
            uVar4 = (long)param_3 - (long)pbVar3;
            if ((long)uVar4 < 1) {
              return 0xffffffff;
            }
            goto LAB_108210898;
          }
          break;
        }
        lVar7 = 3;
      }
    }
    else {
      if (bVar1 < 9) {
        if (bVar1 == 7) {
          lVar7 = 4;
          goto LAB_10820ef7c;
        }
      }
      else {
        if (bVar1 == 9) {
          if (pbVar3 == param_2) {
            if ((long)param_3 - (long)(param_2 + 1) < 1) {
              return 0xfffffffd;
            }
            pbVar3 = param_2 + 2;
            if (*(char *)(param_1 + 0x88 + (ulong)param_2[1]) != '\n') {
              pbVar3 = param_2 + 1;
            }
            *param_4 = (long)pbVar3;
            return 7;
          }
          break;
        }
        if (bVar1 == 10) {
          if (pbVar3 == param_2) {
            *param_4 = (long)(param_2 + 1);
            return 7;
          }
          break;
        }
        if (bVar1 == 0x1e) {
          if (pbVar3 == param_2) {
            FUN_108210008(param_1,param_2 + 1);
            uVar6 = 0;
            if ((uint)param_1 != 0x16) {
              uVar6 = (uint)param_1;
            }
            return (ulong)uVar6;
          }
          break;
        }
      }
LAB_10820eff0:
      lVar7 = 1;
    }
LAB_10820ef7c:
    pbVar3 = pbVar3 + lVar7;
  } while (0 < (long)param_3 - (long)pbVar3);
  *param_4 = (long)pbVar3;
  return 6;
LAB_108210898:
  bVar1 = *(byte *)(lVar7 + (ulong)*pbVar3);
  uVar6 = (uint)bVar1;
  if (bVar1 < 0x12) {
    if (bVar1 == 5) {
      if (uVar4 == 1) {
        return 0xfffffffe;
      }
      uVar4 = param_1;
      (**(code **)(param_1 + 0x1b8))(param_1,pbVar3);
      if ((int)uVar4 != 0) goto LAB_108210a94;
      uVar2 = param_1;
      (**(code **)(param_1 + 0x188))(param_1,pbVar3);
      if ((int)uVar2 == 0) {
LAB_108210b24:
        *param_4 = (long)pbVar3;
        return uVar2;
      }
      lVar5 = 2;
    }
    else if (uVar6 == 6) {
      if (uVar4 < 3) {
        return 0xfffffffe;
      }
      uVar4 = param_1;
      (**(code **)(param_1 + 0x1c0))(param_1,pbVar3);
      if ((int)uVar4 != 0) goto LAB_108210a94;
      uVar2 = param_1;
      (**(code **)(param_1 + 400))(param_1,pbVar3);
      if ((int)uVar2 == 0) goto LAB_108210b24;
      lVar5 = 3;
    }
    else {
      if (uVar6 != 7) goto LAB_108210a94;
      if (uVar4 < 4) {
        return 0xfffffffe;
      }
      uVar4 = param_1;
      (**(code **)(param_1 + 0x1c8))(param_1,pbVar3);
      if ((int)uVar4 != 0) goto LAB_108210a94;
      uVar2 = param_1;
      (**(code **)(param_1 + 0x198))(param_1,pbVar3);
      if ((int)uVar2 == 0) goto LAB_108210b24;
      lVar5 = 4;
    }
  }
  else {
    if (3 < uVar6 - 0x18 && uVar6 != 0x16) {
      if (bVar1 == 0x12) {
        *param_4 = (long)(pbVar3 + 1);
        return 9;
      }
LAB_108210a94:
      *param_4 = (long)pbVar3;
      return 0;
    }
    lVar5 = 1;
  }
  pbVar3 = pbVar3 + lVar5;
  uVar4 = (long)param_3 - (long)pbVar3;
  if ((long)uVar4 < 1) {
    return 0xffffffff;
  }
  goto LAB_108210898;
}



/* Entry: 10820f0b8; end: 10820f897;  */

bool FUN_10820f0b8(undefined8 param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  long lVar2;
  char cVar3;
  
  cVar3 = *param_4;
  if (cVar3 != '\0') {
    pcVar1 = param_2;
    lVar2 = (long)param_3 - (long)param_2;
    do {
      param_4 = param_4 + 1;
      if ((lVar2 < 1) || (param_2 = pcVar1 + 1, *pcVar1 != cVar3)) {
        return false;
      }
      cVar3 = *param_4;
      pcVar1 = param_2;
      lVar2 = lVar2 + -1;
    } while (cVar3 != '\0');
  }
  return param_2 == param_3;
}



/* Entry: 10820f898; end: 10820fa7b;  */

undefined8 FUN_10820f898(uint param_1,long param_2,byte *param_3,long param_4,long *param_5)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar3 = param_4 - (long)param_3;
  if ((long)uVar3 < 1) {
    return 0xffffffff;
  }
  do {
    bVar1 = *(byte *)(param_2 + 0x88 + (ulong)*param_3);
    uVar4 = (uint)bVar1;
    if (bVar1 < 7) {
      if (bVar1 == 5) {
        if (uVar3 == 1) {
          return 0xfffffffe;
        }
        lVar2 = param_2;
        (**(code **)(param_2 + 0x1b8))(param_2,param_3);
        if ((int)lVar2 != 0) goto LAB_10820f9b0;
        param_3 = param_3 + 2;
      }
      else {
        if (bVar1 != 6) {
          if (uVar4 < 2) goto LAB_10820f9b0;
          goto LAB_10820f9a0;
        }
        if (uVar3 < 3) {
          return 0xfffffffe;
        }
        lVar2 = param_2;
        (**(code **)(param_2 + 0x1c0))(param_2,param_3);
        if ((int)lVar2 != 0) goto LAB_10820f9b0;
        param_3 = param_3 + 3;
      }
    }
    else if (uVar4 - 0xc < 2) {
      param_3 = param_3 + 1;
      if (param_1 == uVar4) {
        if (param_4 - (long)param_3 < 1) {
          return 0xffffffe5;
        }
        *param_5 = (long)param_3;
        bVar1 = *(byte *)(param_2 + 0x88 + (ulong)*param_3);
        if (0x1e < bVar1 || (1 << (ulong)(bVar1 & 0x1f) & 0x40300e00U) == 0) {
          return 0;
        }
        return 0x1b;
      }
    }
    else if (uVar4 == 7) {
      if (uVar3 < 4) {
        return 0xfffffffe;
      }
      lVar2 = param_2;
      (**(code **)(param_2 + 0x1c8))(param_2,param_3);
      if ((int)lVar2 != 0) {
LAB_10820f9b0:
        *param_5 = (long)param_3;
        return 0;
      }
      param_3 = param_3 + 4;
    }
    else {
      if (uVar4 == 8) goto LAB_10820f9b0;
LAB_10820f9a0:
      param_3 = param_3 + 1;
    }
    uVar3 = param_4 - (long)param_3;
    if ((long)uVar3 < 1) {
      return 0xffffffff;
    }
  } while( true );
}



/* Entry: 10820fa7c; end: 10820fb9b;  */

undefined4 FUN_10820fa7c(long param_1,byte *param_2,long param_3,long *param_4)

{
  byte bVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  
  if (0 < param_3 - (long)param_2) {
    lVar2 = param_1 + 0x88;
    bVar1 = *(byte *)(lVar2 + (ulong)*param_2);
    if (bVar1 < 0x18) {
      if (bVar1 == 0x14) {
        *param_4 = (long)(param_2 + 1);
        return 0x21;
      }
      if (bVar1 != 0x16) {
LAB_10820fb10:
        *param_4 = (long)param_2;
        return 0;
      }
    }
    else if (bVar1 != 0x18) {
      if (bVar1 == 0x1b) {
        pbVar7 = param_2 + 1;
        if (param_3 - (long)pbVar7 < 1) {
          return 0xffffffff;
        }
        if (*pbVar7 == 0x2d) {
          uVar4 = param_3 - (long)(param_2 + 2);
          if (0 < (long)uVar4) {
            pbVar7 = param_2 + 2;
            do {
              bVar1 = *(byte *)(param_1 + 0x88 + (ulong)*pbVar7);
              if (bVar1 < 7) {
                if (bVar1 == 5) {
                  if (uVar4 == 1) {
                    return 0xfffffffe;
                  }
                  lVar2 = param_1;
                  (**(code **)(param_1 + 0x1b8))(param_1,pbVar7);
                  if ((int)lVar2 != 0) goto LAB_1082106b4;
                  pbVar5 = pbVar7 + 2;
                }
                else if (bVar1 == 6) {
                  if (uVar4 < 3) {
                    return 0xfffffffe;
                  }
                  lVar2 = param_1;
                  (**(code **)(param_1 + 0x1c0))(param_1,pbVar7);
                  if ((int)lVar2 != 0) goto LAB_1082106b4;
                  pbVar5 = pbVar7 + 3;
                }
                else {
                  if (bVar1 < 2) goto LAB_1082106b4;
LAB_1082105dc:
                  pbVar5 = pbVar7 + 1;
                }
              }
              else if (bVar1 == 7) {
                if (uVar4 < 4) {
                  return 0xfffffffe;
                }
                lVar2 = param_1;
                (**(code **)(param_1 + 0x1c8))(param_1,pbVar7);
                if ((int)lVar2 != 0) goto LAB_1082106b4;
                pbVar5 = pbVar7 + 4;
              }
              else {
                if (bVar1 != 0x1b) {
                  if (bVar1 != 8) goto LAB_1082105dc;
                  goto LAB_1082106b4;
                }
                pbVar5 = pbVar7 + 1;
                if (param_3 - (long)pbVar5 < 1) {
                  return 0xffffffff;
                }
                if (*pbVar5 == 0x2d) {
                  if (param_3 - (long)(pbVar7 + 2) < 1) {
                    return 0xffffffff;
                  }
                  pbVar5 = pbVar7 + 3;
                  if (pbVar7[2] != 0x3e) {
                    pbVar5 = pbVar7 + 2;
                  }
                  uVar3 = 0xd;
                  if (pbVar7[2] != 0x3e) {
                    uVar3 = 0;
                  }
                  *param_4 = (long)pbVar5;
                  return uVar3;
                }
              }
              uVar4 = param_3 - (long)pbVar5;
              pbVar7 = pbVar5;
            } while (0 < (long)uVar4);
          }
          return 0xffffffff;
        }
LAB_1082106b4:
        *param_4 = (long)pbVar7;
        return 0;
      }
      goto LAB_10820fb10;
    }
    param_2 = param_2 + 1;
    for (param_3 = param_3 - (long)param_2; 0 < param_3; param_3 = param_3 + -1) {
      if (0x1e < *(byte *)(lVar2 + (ulong)*param_2)) goto LAB_10820fb90;
      uVar6 = (uint)*(byte *)(lVar2 + (ulong)*param_2);
      if ((1 << (ulong)(uVar6 & 0x1f) & 0x1400000U) == 0) {
        if ((1 << (ulong)(uVar6 & 0x1f) & 0x200600U) == 0) {
          if (uVar6 == 0x1e) {
            if (param_3 == 1) {
              return 0xffffffff;
            }
            if (0x1e < *(byte *)(lVar2 + (ulong)param_2[1]) ||
                (1 << (ulong)(*(byte *)(lVar2 + (ulong)param_2[1]) & 0x1f) & 0x40200600U) == 0)
            goto LAB_10820fb44;
          }
LAB_10820fb90:
          *param_4 = (long)param_2;
          return 0;
        }
LAB_10820fb44:
        *param_4 = (long)param_2;
        return 0x10;
      }
      param_2 = param_2 + 1;
    }
  }
  return 0xffffffff;
}



/* Entry: 10820fb9c; end: 108210007;  */

byte * FUN_10820fb9c(long param_1,byte *param_2,long param_3,long *param_4)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uStack_54;
  
  uVar4 = param_3 - (long)param_2;
  if ((long)uVar4 < 1) {
    return (byte *)0xffffffff;
  }
  lVar1 = param_1 + 0x88;
  bVar2 = *(byte *)(lVar1 + (ulong)*param_2);
  if (bVar2 < 0x16) {
    if (bVar2 == 5) {
      if (uVar4 == 1) {
        return (byte *)0xfffffffe;
      }
      lVar5 = param_1;
      (**(code **)(param_1 + 0x1b8))(param_1,param_2);
      if (((int)lVar5 == 0) &&
         (lVar5 = param_1, (**(code **)(param_1 + 0x1a0))(param_1,param_2), (int)lVar5 != 0)) {
        lVar5 = 2;
        goto LAB_10820fc50;
      }
    }
    else if (bVar2 == 6) {
      if (uVar4 < 3) {
        return (byte *)0xfffffffe;
      }
      lVar5 = param_1;
      (**(code **)(param_1 + 0x1c0))(param_1,param_2);
      if (((int)lVar5 == 0) &&
         (lVar5 = param_1, (**(code **)(param_1 + 0x1a8))(param_1,param_2), (int)lVar5 != 0)) {
        lVar5 = 3;
        goto LAB_10820fc50;
      }
    }
    else if (bVar2 == 7) {
      if (uVar4 < 4) {
        return (byte *)0xfffffffe;
      }
      lVar5 = param_1;
      (**(code **)(param_1 + 0x1c8))(param_1,param_2);
      if (((int)lVar5 == 0) &&
         (lVar5 = param_1, (**(code **)(param_1 + 0x1b0))(param_1,param_2), (int)lVar5 != 0)) {
        lVar5 = 4;
        goto LAB_10820fc50;
      }
    }
  }
  else if (bVar2 == 0x16 || bVar2 == 0x18) {
    lVar5 = 1;
LAB_10820fc50:
    pbVar7 = param_2 + lVar5;
    do {
      uVar4 = param_3 - (long)pbVar7;
      if ((long)uVar4 < 1) {
        return (byte *)0xffffffff;
      }
      bVar2 = *(byte *)(lVar1 + (ulong)*pbVar7);
      uVar6 = (uint)bVar2;
      pbVar8 = pbVar7;
      if (bVar2 < 0x16) {
        if (bVar2 < 7) {
          if (bVar2 == 5) {
            if (uVar4 == 1) {
              return (byte *)0xfffffffe;
            }
            lVar5 = param_1;
            (**(code **)(param_1 + 0x1b8))(param_1,pbVar7);
            if (((int)lVar5 != 0) ||
               (lVar5 = param_1, (**(code **)(param_1 + 0x188))(param_1,pbVar7), (int)lVar5 == 0))
            goto LAB_10820fed0;
            lVar5 = 2;
          }
          else {
            if (bVar2 != 6) goto LAB_10820fe90;
            if (uVar4 < 3) {
              return (byte *)0xfffffffe;
            }
            lVar5 = param_1;
            (**(code **)(param_1 + 0x1c0))(param_1,pbVar7);
            if (((int)lVar5 != 0) ||
               (lVar5 = param_1, (**(code **)(param_1 + 400))(param_1,pbVar7), (int)lVar5 == 0))
            goto LAB_10820fed0;
            lVar5 = 3;
          }
        }
        else {
          if (8 < bVar2) {
            if (1 < uVar6 - 9) {
              if (uVar6 == 0xf) {
                FUN_108210740(param_2,pbVar7,&uStack_54);
                if ((int)param_2 != 0) {
                  pbVar8 = pbVar7 + 1;
                  if (param_3 - (long)pbVar8 < 1) {
                    return (byte *)0xffffffff;
                  }
                  if (*pbVar8 == 0x3e) {
                    *param_4 = (long)(pbVar7 + 2);
                    return (byte *)(ulong)uStack_54;
                  }
                  goto LAB_10820fe90;
                }
                goto LAB_10820fed4;
              }
              if (uVar6 != 0x15) {
LAB_10820fe90:
                *param_4 = (long)pbVar8;
                return (byte *)0x0;
              }
            }
            pbVar8 = (byte *)0xb;
            uStack_54 = 0xb;
            if ((long)pbVar7 - (long)param_2 == 3) {
              if (*param_2 == 0x78) {
                bVar3 = false;
              }
              else {
                if (*param_2 != 0x58) goto LAB_10820fefc;
                bVar3 = true;
              }
              if (param_2[1] != 0x6d) {
                if (param_2[1] != 0x4d) goto LAB_10820fefc;
                bVar3 = true;
              }
              if (param_2[2] == 0x4c) {
LAB_10820fed0:
                param_2 = (byte *)0x0;
LAB_10820fed4:
                *param_4 = (long)pbVar7;
                return param_2;
              }
              if (param_2[2] == 0x6c) {
                if (bVar3) goto LAB_10820fed0;
                pbVar8 = (byte *)0xc;
                uStack_54 = 0xc;
              }
            }
LAB_10820fefc:
            uVar4 = param_3 - (long)(pbVar7 + 1);
            param_2 = pbVar7 + 1;
            if ((long)uVar4 < 1) {
              return (byte *)0xffffffff;
            }
            goto LAB_10820ff30;
          }
          if (bVar2 != 7) goto LAB_10820fe90;
          if (uVar4 < 4) {
            return (byte *)0xfffffffe;
          }
          lVar5 = param_1;
          (**(code **)(param_1 + 0x1c8))(param_1,pbVar7);
          if (((int)lVar5 != 0) ||
             (lVar5 = param_1, (**(code **)(param_1 + 0x198))(param_1,pbVar7), (int)lVar5 == 0))
          goto LAB_10820fed0;
          lVar5 = 4;
        }
      }
      else {
        if (3 < uVar6 - 0x18 && uVar6 != 0x16) {
          if (bVar2 != 0x1d) goto LAB_10820fe90;
          goto LAB_10820fed0;
        }
        lVar5 = 1;
      }
      pbVar7 = pbVar7 + lVar5;
    } while( true );
  }
LAB_10820fd74:
  *param_4 = (long)param_2;
  return (byte *)0x0;
LAB_10820ff30:
  bVar2 = *(byte *)(lVar1 + (ulong)*param_2);
  if (bVar2 < 7) {
    if (bVar2 == 5) {
      if (uVar4 == 1) {
        return (byte *)0xfffffffe;
      }
      lVar5 = param_1;
      (**(code **)(param_1 + 0x1b8))(param_1,param_2);
      if ((int)lVar5 != 0) goto LAB_10820fd74;
      pbVar7 = param_2 + 2;
    }
    else if (bVar2 == 6) {
      if (uVar4 < 3) {
        return (byte *)0xfffffffe;
      }
      lVar5 = param_1;
      (**(code **)(param_1 + 0x1c0))(param_1,param_2);
      if ((int)lVar5 != 0) goto LAB_10820fd74;
      pbVar7 = param_2 + 3;
    }
    else {
      if (bVar2 < 2) goto LAB_10820fd74;
LAB_10820ff18:
      pbVar7 = param_2 + 1;
    }
  }
  else if (bVar2 == 7) {
    if (uVar4 < 4) {
      return (byte *)0xfffffffe;
    }
    lVar5 = param_1;
    (**(code **)(param_1 + 0x1c8))(param_1,param_2);
    if ((int)lVar5 != 0) goto LAB_10820fd74;
    pbVar7 = param_2 + 4;
  }
  else {
    if (bVar2 != 0xf) {
      if (bVar2 != 8) goto LAB_10820ff18;
      goto LAB_10820fd74;
    }
    pbVar7 = param_2 + 1;
    if (param_3 - (long)pbVar7 < 1) {
      return (byte *)0xffffffff;
    }
    if (*pbVar7 == 0x3e) {
      *param_4 = (long)(param_2 + 2);
      return pbVar8;
    }
  }
  uVar4 = param_3 - (long)pbVar7;
  param_2 = pbVar7;
  if ((long)uVar4 < 1) {
    return (byte *)0xffffffff;
  }
  goto LAB_10820ff30;
}



/* Entry: 108210008; end: 10821073f;  */

long FUN_108210008(long param_1,byte *param_2,long param_3,long *param_4)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  uVar2 = param_3 - (long)param_2;
  if ((long)uVar2 < 1) {
    return 0xffffffff;
  }
  bVar1 = *(byte *)(param_1 + 0x88 + (ulong)*param_2);
  uVar5 = (uint)bVar1;
  lVar3 = param_1;
  if (bVar1 < 0x1f) {
    lVar4 = 1;
    if ((1 << (ulong)(uVar5 & 0x1f) & 0x40200600U) != 0) {
      *param_4 = (long)param_2;
      return 0x16;
    }
    if ((1 << (ulong)(uVar5 & 0x1f) & 0x1400000U) != 0) goto LAB_10821009c;
    if (bVar1 != 7) goto LAB_1082101f8;
    if (uVar2 < 4) {
      return 0xfffffffe;
    }
    lVar4 = param_1;
    (**(code **)(param_1 + 0x1c8))(param_1,param_2);
    if ((int)lVar4 == 0) {
      (**(code **)(param_1 + 0x1b0))(param_1,param_2);
      if ((int)lVar3 != 0) {
        lVar4 = 4;
        goto LAB_10821009c;
      }
      goto LAB_108210278;
    }
  }
  else {
LAB_1082101f8:
    if (bVar1 == 6) {
      if (uVar2 < 3) {
        return 0xfffffffe;
      }
      lVar4 = param_1;
      (**(code **)(param_1 + 0x1c0))(param_1,param_2);
      if ((int)lVar4 == 0) {
        (**(code **)(param_1 + 0x1a8))(param_1,param_2);
        if ((int)lVar3 != 0) {
          lVar4 = 3;
LAB_10821009c:
          param_2 = param_2 + lVar4;
          do {
            uVar2 = param_3 - (long)param_2;
            if ((long)uVar2 < 1) {
              return 0xffffffff;
            }
            bVar1 = *(byte *)(param_1 + 0x88 + (ulong)*param_2);
            if (bVar1 < 0x12) {
              if (bVar1 == 5) {
                if (uVar2 == 1) {
                  return 0xfffffffe;
                }
                lVar3 = param_1;
                (**(code **)(param_1 + 0x1b8))(param_1,param_2);
                if ((int)lVar3 != 0) goto LAB_108210274;
                lVar3 = param_1;
                (**(code **)(param_1 + 0x188))(param_1,param_2);
                if ((int)lVar3 == 0) break;
                lVar3 = 2;
              }
              else if (bVar1 == 6) {
                if (uVar2 < 3) {
                  return 0xfffffffe;
                }
                lVar3 = param_1;
                (**(code **)(param_1 + 0x1c0))(param_1,param_2);
                if ((int)lVar3 != 0) goto LAB_108210274;
                lVar3 = param_1;
                (**(code **)(param_1 + 400))(param_1,param_2);
                if ((int)lVar3 == 0) break;
                lVar3 = 3;
              }
              else {
                if (bVar1 != 7) goto LAB_108210274;
                if (uVar2 < 4) {
                  return 0xfffffffe;
                }
                lVar3 = param_1;
                (**(code **)(param_1 + 0x1c8))(param_1,param_2);
                if ((int)lVar3 != 0) goto LAB_108210274;
                lVar3 = param_1;
                (**(code **)(param_1 + 0x198))(param_1,param_2);
                if ((int)lVar3 == 0) break;
                lVar3 = 4;
              }
            }
            else {
              if (3 < bVar1 - 0x18 && bVar1 != 0x16) {
                if (bVar1 == 0x12) {
                  *param_4 = (long)(param_2 + 1);
                  return 0x1c;
                }
                goto LAB_108210274;
              }
              lVar3 = 1;
            }
            param_2 = param_2 + lVar3;
          } while( true );
        }
        goto LAB_108210278;
      }
    }
    else if (uVar5 == 5) {
      if (uVar2 == 1) {
        return 0xfffffffe;
      }
      lVar4 = param_1;
      (**(code **)(param_1 + 0x1b8))(param_1,param_2);
      if ((int)lVar4 == 0) {
        (**(code **)(param_1 + 0x1a0))(param_1,param_2);
        if ((int)lVar3 != 0) {
          lVar4 = 2;
          goto LAB_10821009c;
        }
        goto LAB_108210278;
      }
    }
  }
LAB_108210274:
  lVar3 = 0;
LAB_108210278:
  *param_4 = (long)param_2;
  return lVar3;
}



/* Entry: 108210740; end: 1082107cf;  */

bool FUN_108210740(char *param_1,long param_2,undefined4 *param_3)

{
  char cVar1;
  bool bVar2;
  
  *param_3 = 0xb;
  if (param_2 - (long)param_1 == 3) {
    if (*param_1 == 'x') {
      bVar2 = false;
      cVar1 = param_1[1];
    }
    else {
      if (*param_1 != 'X') {
        return true;
      }
      bVar2 = true;
      cVar1 = param_1[1];
    }
    if (cVar1 != 'm') {
      if (cVar1 != 'M') {
        return true;
      }
      bVar2 = true;
    }
    if (param_1[2] != 'l') {
      return param_1[2] != 'L';
    }
    if (bVar2) {
      return false;
    }
    *param_3 = 0xc;
  }
  return true;
}



/* Entry: 1082107d0; end: 108210bc3;  */

long FUN_1082107d0(long param_1,byte *param_2,long param_3,long *param_4)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  byte *pbVar6;
  
  uVar4 = param_3 - (long)param_2;
  if ((long)uVar4 < 1) {
    return 0xffffffff;
  }
  lVar3 = 0;
  lVar1 = param_1 + 0x88;
  bVar2 = *(byte *)(lVar1 + (ulong)*param_2);
  if (bVar2 < 0x13) {
    if (bVar2 == 5) {
      if (uVar4 == 1) {
        return 0xfffffffe;
      }
      lVar3 = param_1;
      (**(code **)(param_1 + 0x1b8))(param_1,param_2);
      if ((int)lVar3 != 0) {
LAB_108210a94:
        *param_4 = (long)param_2;
        return 0;
      }
      lVar3 = param_1;
      (**(code **)(param_1 + 0x1a0))(param_1,param_2);
      if ((int)lVar3 != 0) {
        lVar3 = 2;
        goto LAB_108210870;
      }
    }
    else if (bVar2 == 6) {
      if (uVar4 < 3) {
        return 0xfffffffe;
      }
      lVar3 = param_1;
      (**(code **)(param_1 + 0x1c0))(param_1,param_2);
      if ((int)lVar3 != 0) goto LAB_108210a94;
      lVar3 = param_1;
      (**(code **)(param_1 + 0x1a8))(param_1,param_2);
      if ((int)lVar3 != 0) {
        lVar3 = 3;
        goto LAB_108210870;
      }
    }
    else if (bVar2 == 7) {
      if (uVar4 < 4) {
        return 0xfffffffe;
      }
      lVar3 = param_1;
      (**(code **)(param_1 + 0x1c8))(param_1,param_2);
      if ((int)lVar3 != 0) goto LAB_108210a94;
      lVar3 = param_1;
      (**(code **)(param_1 + 0x1b0))(param_1,param_2);
      if ((int)lVar3 != 0) {
        lVar3 = 4;
        goto LAB_108210870;
      }
    }
  }
  else {
    if (bVar2 == 0x13) {
      pbVar6 = param_2 + 1;
      if (param_3 - (long)pbVar6 < 1) {
        return 0xffffffff;
      }
      if ((ulong)*pbVar6 == 0x78) {
        pbVar6 = param_2 + 2;
        if (param_3 - (long)pbVar6 < 1) {
          return 0xffffffff;
        }
        if ((*(byte *)(lVar1 + (ulong)*pbVar6) & 0xfe) != 0x18) {
          *param_4 = (long)pbVar6;
          return 0;
        }
        param_2 = param_2 + 3;
        param_3 = param_3 - (long)param_2;
        while( true ) {
          if (param_3 < 1) {
            return 0xffffffff;
          }
          if (1 < *(byte *)(lVar1 + (ulong)*param_2) - 0x18) break;
          param_2 = param_2 + 1;
          param_3 = param_3 + -1;
        }
        if (*(byte *)(lVar1 + (ulong)*param_2) != 0x12) goto LAB_108210a94;
        pbVar6 = param_2 + 1;
      }
      else {
        if (*(char *)(lVar1 + (ulong)*pbVar6) != '\x19') {
          *param_4 = (long)pbVar6;
          return 0;
        }
        lVar3 = uVar4 - 2;
        pbVar6 = param_2 + 2;
        do {
          param_2 = pbVar6;
          if (lVar3 < 1) {
            return 0xffffffff;
          }
          pbVar6 = param_2 + 1;
          lVar3 = lVar3 + -1;
        } while (*(char *)(lVar1 + (ulong)*param_2) == '\x19');
        if (*(char *)(lVar1 + (ulong)*param_2) != '\x12') {
          lVar3 = 0;
          goto LAB_108210b24;
        }
      }
      *param_4 = (long)pbVar6;
      return 10;
    }
    if (bVar2 == 0x16 || bVar2 == 0x18) {
      lVar3 = 1;
LAB_108210870:
      param_2 = param_2 + lVar3;
      do {
        uVar4 = param_3 - (long)param_2;
        if ((long)uVar4 < 1) {
          return 0xffffffff;
        }
        bVar2 = *(byte *)(lVar1 + (ulong)*param_2);
        uVar5 = (uint)bVar2;
        if (bVar2 < 0x12) {
          if (bVar2 == 5) {
            if (uVar4 == 1) {
              return 0xfffffffe;
            }
            lVar3 = param_1;
            (**(code **)(param_1 + 0x1b8))(param_1,param_2);
            if ((int)lVar3 != 0) goto LAB_108210a94;
            lVar3 = param_1;
            (**(code **)(param_1 + 0x188))(param_1,param_2);
            if ((int)lVar3 == 0) break;
            lVar3 = 2;
          }
          else if (uVar5 == 6) {
            if (uVar4 < 3) {
              return 0xfffffffe;
            }
            lVar3 = param_1;
            (**(code **)(param_1 + 0x1c0))(param_1,param_2);
            if ((int)lVar3 != 0) goto LAB_108210a94;
            lVar3 = param_1;
            (**(code **)(param_1 + 400))(param_1,param_2);
            if ((int)lVar3 == 0) break;
            lVar3 = 3;
          }
          else {
            if (uVar5 != 7) goto LAB_108210a94;
            if (uVar4 < 4) {
              return 0xfffffffe;
            }
            lVar3 = param_1;
            (**(code **)(param_1 + 0x1c8))(param_1,param_2);
            if ((int)lVar3 != 0) goto LAB_108210a94;
            lVar3 = param_1;
            (**(code **)(param_1 + 0x198))(param_1,param_2);
            if ((int)lVar3 == 0) break;
            lVar3 = 4;
          }
        }
        else {
          if (3 < uVar5 - 0x18 && uVar5 != 0x16) {
            if (bVar2 == 0x12) {
              *param_4 = (long)(param_2 + 1);
              return 9;
            }
            goto LAB_108210a94;
          }
          lVar3 = 1;
        }
        param_2 = param_2 + lVar3;
      } while( true );
    }
  }
LAB_108210b24:
  *param_4 = (long)param_2;
  return lVar3;
}



/* Entry: 108210bc4; end: 108210c67;  */

undefined4 FUN_108210bc4(char *param_1,long param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  if (param_2 - (long)param_1 < 6) {
    return 0xffffffff;
  }
  if (*param_1 == 'C') {
    pcVar3 = param_1 + 1;
    if ((((*pcVar3 == 'D') && (pcVar3 = param_1 + 2, *pcVar3 == 'A')) &&
        (pcVar3 = param_1 + 3, *pcVar3 == 'T')) && (pcVar3 = param_1 + 4, *pcVar3 == 'A')) {
      bVar1 = param_1[5] != '[';
      pcVar3 = param_1 + 6;
      if (bVar1) {
        pcVar3 = param_1 + 5;
      }
      uVar2 = 8;
      if (bVar1) {
        uVar2 = 0;
      }
      *param_3 = pcVar3;
      return uVar2;
    }
    *param_3 = pcVar3;
    return 0;
  }
  *param_3 = param_1;
  return 0;
}



/* Entry: 108210c68; end: 10821137b;  */

void FUN_108210c68(long param_1,byte *param_2,long param_3,long *param_4)

{
  long lVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbStack_68;
  
  uVar5 = param_3 - (long)param_2;
  if ((long)uVar5 < 1) {
    return;
  }
  bVar4 = false;
  lVar1 = param_1 + 0x88;
LAB_108210cc0:
  bVar3 = *(byte *)(lVar1 + (ulong)*param_2);
  uVar12 = (uint)bVar3;
  pbVar10 = param_2;
  if (bVar3 < 0x15) {
    if (8 < bVar3) {
      if (1 < uVar12 - 9) {
        if (uVar12 != 0xe) goto LAB_1082112ac;
        goto LAB_108210e20;
      }
LAB_108210dc8:
      param_2 = param_2 + 1;
      lVar6 = param_3 - (long)param_2;
      if (lVar6 < 1) {
        return;
      }
      while (bVar3 = *(byte *)(lVar1 + (ulong)*param_2), bVar3 - 9 < 2 || bVar3 == 0x15) {
        param_2 = param_2 + 1;
        lVar6 = lVar6 + -1;
        if (lVar6 < 1) {
          return;
        }
      }
      pbVar10 = param_2;
      if (bVar3 == 0xe) {
LAB_108210e20:
        pbVar10 = param_2 + 1;
        if (param_3 - (long)pbVar10 < 1) {
          return;
        }
        uVar12 = (uint)*(byte *)(lVar1 + (ulong)*pbVar10);
        if ((*(byte *)(lVar1 + (ulong)*pbVar10) & 0xfe) != 0xc) {
          lVar6 = (param_3 + -2) - (long)param_2;
          do {
            param_2 = pbVar10;
            pbVar10 = param_2;
            if ((0x15 < uVar12) || ((1 << (ulong)(uVar12 & 0x1f) & 0x200600U) == 0))
            goto LAB_1082112ac;
            if (lVar6 < 1) {
              return;
            }
            uVar12 = (uint)*(byte *)(lVar1 + (ulong)param_2[1]);
            lVar6 = lVar6 + -1;
            pbVar10 = param_2 + 1;
          } while ((uVar12 & 0xfe) != 0xc);
        }
joined_r0x000108210e90:
        pbStack_68 = param_2 + 2;
joined_r0x000108210e90:
        uVar5 = param_3 - (long)pbStack_68;
        if ((long)uVar5 < 1) {
          return;
        }
        do {
          param_2 = pbStack_68;
          bVar3 = *(byte *)(lVar1 + (ulong)*pbStack_68);
          uVar8 = (uint)bVar3;
          if (uVar8 == uVar12) {
            pbVar11 = pbStack_68 + 1;
            if (param_3 - (long)pbVar11 < 1) {
              return;
            }
            uVar12 = (uint)*(byte *)(lVar1 + (ulong)*pbVar11);
            pbVar10 = pbVar11;
            if (*(byte *)(lVar1 + (ulong)*pbVar11) < 0xb) {
              if (1 < uVar12 - 9) break;
            }
            else if (uVar12 != 0x15) {
              if (uVar12 == 0xb) goto LAB_108211344;
              if (uVar12 != 0x11) break;
              goto LAB_1082112dc;
            }
            pbVar10 = pbStack_68 + 2;
            if (param_3 - (long)pbVar10 < 1) {
              return;
            }
            lVar7 = 0;
            lVar9 = param_3 - (long)pbStack_68;
            lVar6 = 2;
            goto LAB_108211180;
          }
          pbVar10 = param_2;
          if (uVar8 < 6) {
            if (bVar3 != 3) goto code_r0x000108210f44;
            lVar6 = param_1;
            FUN_1082107d0(param_1,pbStack_68 + 1,param_3,&pbStack_68);
            if ((int)lVar6 < 1) {
              pbVar10 = pbStack_68;
              if ((int)lVar6 != 0) {
                return;
              }
              break;
            }
          }
          else {
            if (uVar8 == 6) {
              if (uVar5 < 3) {
                return;
              }
              lVar6 = param_1;
              (**(code **)(param_1 + 0x1c0))(param_1,pbStack_68);
              if ((int)lVar6 != 0) break;
              pbStack_68 = param_2 + 3;
              goto joined_r0x000108210e90;
            }
            if (bVar3 != 7) {
              if (bVar3 == 8) break;
              goto LAB_108210f10;
            }
            if (uVar5 < 4) {
              return;
            }
            lVar6 = param_1;
            (**(code **)(param_1 + 0x1c8))(param_1,pbStack_68);
            if ((int)lVar6 != 0) break;
            pbStack_68 = param_2 + 4;
          }
          uVar5 = param_3 - (long)pbStack_68;
          if ((long)uVar5 < 1) {
            return;
          }
        } while( true );
      }
      goto LAB_1082112ac;
    }
    pbStack_68 = param_2;
    if (uVar12 == 5) {
      if (uVar5 == 1) {
        return;
      }
      lVar6 = param_1;
      (**(code **)(param_1 + 0x1b8))(param_1,param_2);
      if (((int)lVar6 != 0) ||
         (lVar6 = param_1, (**(code **)(param_1 + 0x188))(param_1,param_2), (int)lVar6 == 0))
      goto LAB_1082112ac;
      param_2 = param_2 + 2;
    }
    else if (uVar12 == 6) {
      if (uVar5 < 3) {
        return;
      }
      lVar6 = param_1;
      (**(code **)(param_1 + 0x1c0))(param_1,param_2);
      if (((int)lVar6 != 0) ||
         (lVar6 = param_1, (**(code **)(param_1 + 400))(param_1,param_2), (int)lVar6 == 0))
      goto LAB_1082112ac;
      param_2 = param_2 + 3;
    }
    else {
      if (bVar3 != 7) goto LAB_1082112ac;
      if (uVar5 < 4) {
        return;
      }
      lVar6 = param_1;
      (**(code **)(param_1 + 0x1c8))(param_1,param_2);
      if (((int)lVar6 != 0) ||
         (lVar6 = param_1, (**(code **)(param_1 + 0x198))(param_1,param_2), (int)lVar6 == 0))
      goto LAB_1082112ac;
LAB_108210d50:
      param_2 = param_2 + 4;
    }
  }
  else {
    if (bVar3 < 0x18) {
      if (uVar12 == 0x15) goto LAB_108210dc8;
      if (uVar12 != 0x16) {
        if ((uVar12 != 0x17) || (bVar4)) goto LAB_1082112ac;
        pbVar10 = param_2 + 1;
        uVar5 = param_3 - (long)pbVar10;
        if ((long)uVar5 < 1) {
          return;
        }
        bVar3 = *(byte *)(lVar1 + (ulong)*pbVar10);
        pbStack_68 = pbVar10;
        if (bVar3 < 7) {
          if (bVar3 == 5) {
            if (uVar5 == 1) {
              return;
            }
            lVar6 = param_1;
            (**(code **)(param_1 + 0x1b8))(param_1,pbVar10);
            if (((int)lVar6 != 0) ||
               (lVar6 = param_1, (**(code **)(param_1 + 0x1a0))(param_1,pbVar10), (int)lVar6 == 0))
            goto LAB_1082112ac;
            param_2 = param_2 + 3;
            bVar4 = true;
          }
          else {
            if (bVar3 != 6) goto LAB_1082112ac;
            if (uVar5 < 3) {
              return;
            }
            lVar6 = param_1;
            (**(code **)(param_1 + 0x1c0))(param_1,pbVar10);
            if (((int)lVar6 != 0) ||
               (lVar6 = param_1, (**(code **)(param_1 + 0x1a8))(param_1,pbVar10), (int)lVar6 == 0))
            goto LAB_1082112ac;
            param_2 = param_2 + 4;
            bVar4 = true;
          }
        }
        else if (bVar3 == 7) {
          if (uVar5 < 4) {
            return;
          }
          lVar6 = param_1;
          (**(code **)(param_1 + 0x1c8))(param_1,pbVar10);
          if (((int)lVar6 != 0) ||
             (lVar6 = param_1, (**(code **)(param_1 + 0x1b0))(param_1,pbVar10), (int)lVar6 == 0))
          goto LAB_1082112ac;
          param_2 = param_2 + 5;
          bVar4 = true;
        }
        else {
          if (bVar3 != 0x18 && bVar3 != 0x16) goto LAB_1082112ac;
          param_2 = param_2 + 2;
          bVar4 = true;
        }
        goto LAB_108210cec;
      }
    }
    else if (3 < uVar12 - 0x18) goto LAB_1082112ac;
    param_2 = param_2 + 1;
  }
  goto LAB_108210cec;
LAB_108211180:
  bVar3 = *(byte *)(lVar1 + (ulong)pbStack_68[lVar6]);
  if (bVar3 < 0xb) {
    if (bVar3 < 9) {
      if (bVar3 == 5) {
        if (lVar9 + lVar7 == 3) {
          return;
        }
        param_2 = pbStack_68 + -lVar7;
        lVar6 = param_1;
        pbStack_68 = pbVar11;
        (**(code **)(param_1 + 0x1b8))(param_1,param_2 + 2);
        if ((int)lVar6 != 0) goto LAB_1082112ac;
        lVar6 = param_1;
        (**(code **)(param_1 + 0x1a0))(param_1,param_2 + 2);
        if ((int)lVar6 != 0) {
          bVar4 = false;
          goto LAB_108210d50;
        }
        pbVar10 = param_2 + 2;
        goto LAB_1082112ac;
      }
      if (bVar3 == 6) {
        if ((lVar9 + lVar7) - 2U < 3) {
          return;
        }
        pbVar2 = pbStack_68 + (2 - lVar7);
        lVar6 = param_1;
        pbStack_68 = pbVar11;
        (**(code **)(param_1 + 0x1c0))(param_1,pbVar2);
        if (((int)lVar6 != 0) ||
           (lVar6 = param_1, (**(code **)(param_1 + 0x1a8))(param_1,param_2 + (2 - lVar7)),
           (int)lVar6 == 0)) goto LAB_1082112ac;
        bVar4 = false;
        param_2 = param_2 + (5 - lVar7);
      }
      else {
        if (bVar3 != 7) goto LAB_108211350;
        if ((lVar9 + lVar7) - 2U < 4) {
          return;
        }
        pbVar2 = pbStack_68 + (2 - lVar7);
        lVar6 = param_1;
        pbStack_68 = pbVar11;
        (**(code **)(param_1 + 0x1c8))(param_1,pbVar2);
        if (((int)lVar6 != 0) ||
           (lVar6 = param_1, (**(code **)(param_1 + 0x1b0))(param_1,param_2 + (2 - lVar7)),
           (int)lVar6 == 0)) goto LAB_1082112ac;
        bVar4 = false;
        param_2 = param_2 + (6 - lVar7);
      }
      goto LAB_108210cec;
    }
  }
  else {
    if (bVar3 < 0x15) {
      if (bVar3 == 0xb) {
        pbVar11 = pbStack_68 + (2 - lVar7);
LAB_108211344:
        pbVar10 = pbVar11 + 1;
        goto LAB_1082112ac;
      }
      if (bVar3 != 0x11) goto LAB_108211350;
      pbVar11 = pbStack_68 + (2 - lVar7);
LAB_1082112dc:
      if (param_3 - (long)(pbVar11 + 1) < 1) {
        return;
      }
      pbVar10 = pbVar11 + 2;
      if (pbVar11[1] != 0x3e) {
        pbVar10 = pbVar11 + 1;
      }
      goto LAB_1082112ac;
    }
    if (bVar3 != 0x15) goto code_r0x0001082111a0;
  }
  pbVar10 = pbVar10 + 1;
  lVar7 = lVar7 + -1;
  lVar6 = lVar6 + 1;
  if (lVar9 + lVar7 + -2 < 1) {
    return;
  }
  goto LAB_108211180;
code_r0x000108210f44:
  if (bVar3 != 5) {
    if (bVar3 < 3) goto LAB_1082112ac;
LAB_108210f10:
    pbStack_68 = pbStack_68 + 1;
    goto joined_r0x000108210e90;
  }
  if (uVar5 == 1) {
    return;
  }
  lVar6 = param_1;
  (**(code **)(param_1 + 0x1b8))(param_1,pbStack_68);
  if ((int)lVar6 != 0) goto LAB_1082112ac;
  goto joined_r0x000108210e90;
code_r0x0001082111a0:
  if (bVar3 == 0x18 || bVar3 == 0x16) {
    bVar4 = false;
    param_2 = pbStack_68 + (3 - lVar7);
LAB_108210cec:
    uVar5 = param_3 - (long)param_2;
    if ((long)uVar5 < 1) {
      return;
    }
    goto LAB_108210cc0;
  }
LAB_108211350:
  pbVar10 = pbStack_68 + (2 - lVar7);
LAB_1082112ac:
  *param_4 = (long)pbVar10;
  return;
}



/* Entry: 10821137c; end: 1082114ab;  */

undefined1 FUN_10821137c(undefined8 param_1,long *param_2,byte *param_3,long *param_4,long param_5)

{
  undefined1 uVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  long lVar8;
  byte *pbVar7;
  
  pbVar4 = (byte *)*param_2;
  param_5 = param_5 - *param_4;
  pbVar2 = pbVar4 + param_5;
  if ((long)param_3 - (long)pbVar4 <= param_5) {
    pbVar2 = param_3;
  }
  pbVar5 = pbVar2;
  if (pbVar4 < pbVar2) {
    lVar8 = 0;
    pbVar7 = pbVar2;
    do {
      pbVar6 = pbVar7 + -1;
      bVar3 = *pbVar6;
      if ((bVar3 & 0xf8) == 0xf0) {
        if (lVar8 - 3U < 0xfffffffffffffffc) {
          pbVar5 = pbVar7 + 3;
          break;
        }
LAB_10821141c:
        lVar8 = 0;
      }
      else {
        if ((bVar3 & 0xf0) == 0xe0) {
          if (0xfffffffffffffffc < lVar8 - 2U) goto LAB_10821141c;
          pbVar5 = pbVar7 + 2;
          break;
        }
        if ((bVar3 & 0xe0) == 0xc0) {
          if (0xfffffffffffffffd < lVar8 - 1U) goto LAB_10821141c;
          pbVar5 = pbVar7 + 1;
          break;
        }
        pbVar5 = pbVar7;
        if (-1 < (char)bVar3) break;
      }
      lVar8 = lVar8 + 1;
      pbVar5 = pbVar4;
      pbVar7 = pbVar6;
    } while (pbVar4 < pbVar6);
  }
  lVar8 = (long)pbVar5 - (long)pbVar4;
  _memcpy(*param_4,pbVar4,lVar8);
  *param_2 = *param_2 + lVar8;
  *param_4 = *param_4 + lVar8;
  uVar1 = 2;
  if ((long)param_3 - (long)pbVar4 <= param_5) {
    uVar1 = pbVar5 < pbVar2;
  }
  return uVar1;
}



/* Entry: 1082114ac; end: 108212ea3;  */

undefined4
FUN_1082114ac(long param_1,undefined8 *param_2,byte *param_3,undefined8 *param_4,ushort *param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  ushort *puVar6;
  ushort *puVar7;
  byte *pbVar8;
  undefined4 uVar9;
  
  puVar6 = (ushort *)*param_4;
  pbVar8 = (byte *)*param_2;
  bVar5 = pbVar8 < param_3;
  if (bVar5 && puVar6 < param_5) {
    puVar7 = puVar6;
    do {
      bVar1 = *pbVar8;
      cVar4 = *(char *)(param_1 + 0x88 + (ulong)bVar1);
      if (cVar4 == '\a') {
        if ((long)param_5 - (long)puVar7 < 3) {
          *param_2 = pbVar8;
          *param_4 = puVar7;
          return 2;
        }
        if ((long)param_3 - (long)pbVar8 < 4) {
LAB_1082115d4:
          *param_2 = pbVar8;
          *param_4 = puVar7;
          return 1;
        }
        bVar2 = pbVar8[2];
        bVar3 = pbVar8[3];
        *puVar7 = (ushort)(((pbVar8[1] & 0x3f) << 0xc | ((int)(char)bVar1 & 7U) << 0x12 |
                           (bVar2 & 0x3f) << 6) + 0xff0000 >> 10) | 0xd800;
        puVar7[1] = bVar3 & 0x3f | (ushort)((bVar2 & 0x3f) << 6) | 0xdc00;
        puVar6 = puVar7 + 2;
        pbVar8 = pbVar8 + 4;
      }
      else if (cVar4 == '\x06') {
        if ((long)param_3 - (long)pbVar8 < 3) goto LAB_1082115d4;
        puVar6 = puVar7 + 1;
        *puVar7 = (ushort)bVar1 << 0xc | (pbVar8[1] & 0x3f) << 6 | pbVar8[2] & 0x3f;
        pbVar8 = pbVar8 + 3;
      }
      else if (cVar4 == '\x05') {
        if ((long)param_3 - (long)pbVar8 < 2) goto LAB_1082115d4;
        puVar6 = puVar7 + 1;
        *puVar7 = pbVar8[1] & 0x3f | (bVar1 & 0x1f) << 6;
        pbVar8 = pbVar8 + 2;
      }
      else {
        pbVar8 = pbVar8 + 1;
        puVar6 = puVar7 + 1;
        *puVar7 = (short)(char)bVar1;
      }
      bVar5 = pbVar8 < param_3;
    } while ((bVar5) && (puVar7 = puVar6, puVar6 < param_5));
  }
  uVar9 = 2;
  if (!bVar5) {
    uVar9 = 0;
  }
  *param_2 = pbVar8;
  *param_4 = puVar6;
  return uVar9;
}



/* Entry: 108212ea4; end: 108213027;  */

/* WARNING: Type propagation algorithm not settling */

int FUN_108212ea4(long param_1,byte *param_2,byte *param_3,long *param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  
  if (param_3 <= param_2) {
    return -4;
  }
  if ((long)param_3 - (long)param_2 < 2) {
    return -1;
  }
  pbVar7 = param_2;
  do {
    if (pbVar7[1] - 0xd8 < 4) {
LAB_108212ecc:
      lVar8 = 4;
    }
    else if (pbVar7[1] == 0) {
      bVar1 = *(byte *)(param_1 + 0x88 + (ulong)*pbVar7);
      if (bVar1 < 7) {
        if (bVar1 == 6) {
          lVar8 = 3;
        }
        else {
          lVar8 = 2;
          if (bVar1 == 3) {
            if (pbVar7 == param_2) {
              pbVar7 = param_2 + 2;
              uVar5 = (long)param_3 - (long)pbVar7;
              if ((long)uVar5 < 2) {
                return -1;
              }
              bVar1 = param_2[3];
              uVar9 = (uint)bVar1;
              pbVar4 = pbVar7;
              if (bVar1 < 0xdc) {
                if (uVar9 - 0xd8 < 4) goto joined_r0x000108214b70;
                if (uVar9 != 0) {
LAB_108214988:
                  uVar10 = (ulong)*pbVar7;
                  goto LAB_10821498c;
                }
                iVar3 = 0;
                lVar8 = param_1 + 0x88;
                uVar10 = (ulong)*pbVar7;
                bVar2 = *(byte *)(lVar8 + uVar10);
                if (bVar2 < 0x16) {
                  if (bVar2 == 6) goto joined_r0x000108214bd4;
                  if (bVar2 == 7) goto joined_r0x000108214b70;
                  if (bVar2 != 0x13) goto LAB_108214908;
                  pbVar7 = param_2 + 4;
                  if ((long)param_3 - (long)pbVar7 < 2) {
                    return -1;
                  }
                  if (param_2[5] == 0) {
                    if ((ulong)*pbVar7 == 0x78) {
                      pbVar7 = param_2 + 6;
                      if ((long)param_3 - (long)pbVar7 < 2) {
                        return -1;
                      }
                      if ((param_2[7] == 0) && ((*(byte *)(lVar8 + (ulong)*pbVar7) & 0xfe) == 0x18))
                      {
                        pbVar4 = param_2 + 8;
                        lVar6 = (long)param_3 - (long)pbVar4;
                        goto joined_r0x000108214b14;
                      }
                      iVar3 = 0;
                      goto LAB_108214908;
                    }
                    if (*(char *)(lVar8 + (ulong)*pbVar7) == '\x19') {
                      lVar6 = uVar5 - 4;
                      pbVar7 = param_2 + 6;
                      goto LAB_108214b8c;
                    }
                  }
                  iVar3 = 0;
                  goto LAB_108214908;
                }
                if (bVar2 != 0x16 && bVar2 != 0x18) {
                  if (bVar2 == 0x1d) goto LAB_10821498c;
                  goto LAB_108214908;
                }
              }
              else {
                if (uVar9 - 0xdc < 4) goto LAB_108214904;
                if (uVar9 != 0xff) goto LAB_108214988;
                uVar10 = (ulong)*pbVar7;
                if (0xfd < *pbVar7) goto LAB_108214904;
LAB_10821498c:
                if ((*(uint *)(&UNK_10df09f7c +
                              (ulong)((uint)(uVar10 >> 5) | (uint)(byte)(&UNK_10df0a47c)[bVar1] << 3
                                     ) * 4) >> (ulong)((uint)uVar10 & 0x1f) & 1) == 0)
                goto LAB_108214904;
              }
              pbVar7 = param_2 + 4;
              uVar5 = (long)param_3 - (long)pbVar7;
              if ((long)uVar5 < 2) {
                return -1;
              }
              goto LAB_108214a2c;
            }
            break;
          }
        }
      }
      else if (bVar1 < 9) {
        lVar8 = 2;
        if (bVar1 == 7) goto LAB_108212ecc;
      }
      else {
        if (bVar1 == 9) {
          if (pbVar7 == param_2) {
            pbVar7 = param_2 + 2;
            if (1 < (long)param_3 - (long)pbVar7) {
              pbVar4 = pbVar7;
              if ((param_2[3] == 0) &&
                 (pbVar4 = param_2 + 4, *(char *)(param_1 + 0x88 + (ulong)param_2[2]) != '\n')) {
                pbVar4 = pbVar7;
              }
              *param_4 = (long)pbVar4;
              return 7;
            }
            return -3;
          }
          break;
        }
        if (bVar1 == 10) {
          if (pbVar7 == param_2) {
            *param_4 = (long)(param_2 + 2);
            return 7;
          }
          break;
        }
        lVar8 = 2;
        if (bVar1 == 0x1e) {
          if (pbVar7 == param_2) {
            FUN_108214278(param_1,param_2 + 2);
            iVar3 = 0;
            if ((int)param_1 != 0x16) {
              iVar3 = (int)param_1;
            }
            return iVar3;
          }
          break;
        }
      }
    }
    else {
      lVar8 = 2;
    }
    pbVar7 = pbVar7 + lVar8;
  } while (1 < (long)param_3 - (long)pbVar7);
  *param_4 = (long)pbVar7;
  return 6;
joined_r0x000108214b14:
  if (lVar6 < 2) {
    return -1;
  }
  if (pbVar4[1] != 0) goto LAB_108214904;
  if (1 < *(byte *)(lVar8 + (ulong)*pbVar4) - 0x18) {
    if (*(byte *)(lVar8 + (ulong)*pbVar4) != 0x12) goto LAB_108214904;
    pbVar7 = pbVar4 + 2;
    iVar3 = 10;
    goto LAB_108214908;
  }
  pbVar4 = pbVar4 + 2;
  lVar6 = lVar6 + -2;
  goto joined_r0x000108214b14;
LAB_108214a2c:
  bVar1 = pbVar7[1];
  uVar9 = (uint)bVar1;
  pbVar4 = pbVar7;
  if (uVar9 < 0xdc) {
    if (uVar9 != 0) {
      if (3 < uVar9 - 0xd8) {
LAB_108214a80:
        uVar9 = *(uint *)(&UNK_10df09f7c +
                         (ulong)((uint)(*pbVar7 >> 5) | (uint)(byte)(&UNK_10df0a57c)[bVar1] << 3) *
                         4) >> (ulong)(*pbVar7 & 0x1f);
        goto joined_r0x000108214a98;
      }
      goto joined_r0x000108214b70;
    }
    uVar10 = (ulong)*pbVar7;
    bVar2 = *(byte *)(param_1 + 0x88 + uVar10);
    uVar9 = (uint)bVar2;
    if (bVar2 < 0x18) {
      if (bVar2 < 0x16) {
        if (uVar9 == 6) goto joined_r0x000108214bd4;
        if (uVar9 == 7) goto joined_r0x000108214b70;
        if (uVar9 != 0x12) goto LAB_108214904;
        pbVar7 = pbVar7 + 2;
        iVar3 = 9;
        goto LAB_108214908;
      }
      if (uVar9 != 0x16) goto LAB_108214904;
    }
    else if (3 < uVar9 - 0x18) {
      if (uVar9 == 0x1d) goto LAB_108214a04;
      goto LAB_108214904;
    }
  }
  else {
    if (bVar1 != 0xff) {
      if (3 < bVar1 - 0xdc) goto LAB_108214a80;
      goto LAB_108214904;
    }
    uVar10 = (ulong)*pbVar7;
    if (0xfd < *pbVar7) goto LAB_108214904;
LAB_108214a04:
    uVar9 = *(uint *)(&UNK_10df09f7c +
                     (ulong)((uint)(uVar10 >> 5) | (uint)(byte)(&UNK_10df0a57c)[bVar1] << 3) * 4) >>
            (ulong)((uint)uVar10 & 0x1f);
joined_r0x000108214a98:
    if ((uVar9 & 1) == 0) goto LAB_108214904;
  }
  pbVar7 = pbVar7 + 2;
  uVar5 = uVar5 - 2;
  if ((long)uVar5 < 2) {
    return -1;
  }
  goto LAB_108214a2c;
joined_r0x000108214bd4:
  pbVar4 = pbVar7;
  if (uVar5 == 2) {
    return -2;
  }
  goto LAB_108214904;
joined_r0x000108214b70:
  pbVar4 = pbVar7;
  if (uVar5 < 4) {
    return -2;
  }
  goto LAB_108214904;
  while( true ) {
    pbVar7 = pbVar4 + 2;
    lVar6 = lVar6 + -2;
    if (*(char *)(lVar8 + (ulong)*pbVar4) != '\x19') break;
LAB_108214b8c:
    pbVar4 = pbVar7;
    if (lVar6 < 2) {
      return -1;
    }
    if (pbVar4[1] != 0) goto LAB_108214904;
  }
  if (*(char *)(lVar8 + (ulong)*pbVar4) == '\x12') {
    iVar3 = 10;
    goto LAB_108214908;
  }
LAB_108214904:
  pbVar7 = pbVar4;
  iVar3 = 0;
LAB_108214908:
  *param_4 = (long)pbVar7;
  return iVar3;
}



/* Entry: 108213028; end: 108213dcf;  */

bool FUN_108213028(undefined8 param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  
  cVar2 = *param_4;
  if (cVar2 != '\0') {
    pcVar1 = param_2;
    lVar3 = (long)param_3 - (long)param_2;
    do {
      param_4 = param_4 + 1;
      if (((lVar3 < 2) || (pcVar1[1] != '\0')) || (param_2 = pcVar1 + 2, *pcVar1 != cVar2)) {
        return false;
      }
      cVar2 = *param_4;
      pcVar1 = param_2;
      lVar3 = lVar3 + -2;
    } while (cVar2 != '\0');
  }
  return param_2 == param_3;
}



/* Entry: 108213dd0; end: 108214277;  */

void FUN_108213dd0(long param_1,byte *param_2,long param_3,long *param_4)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_54 [4];
  
  uVar9 = param_3 - (long)param_2;
  if ((long)uVar9 < 2) {
    return;
  }
  bVar1 = param_2[1];
  uVar6 = (uint)bVar1;
  if (bVar1 == 0) {
    uVar5 = (ulong)*param_2;
    bVar1 = *(byte *)(param_1 + uVar5 + 0x88);
    if (bVar1 < 0x16) {
      if (bVar1 == 5) goto LAB_108213fcc;
      if (bVar1 == 6) {
        if (uVar9 == 2) {
          return;
        }
        goto LAB_108213fcc;
      }
      if (bVar1 != 7) goto LAB_108213fcc;
      goto LAB_108213e5c;
    }
    if (bVar1 == 0x16 || bVar1 == 0x18) goto LAB_108213eb0;
    if (bVar1 != 0x1d) goto LAB_108213fcc;
  }
  else {
    if (bVar1 - 0xd8 < 4) {
LAB_108213e5c:
      if (uVar9 < 4) {
        return;
      }
      goto LAB_108213fcc;
    }
    if (uVar6 - 0xdc < 4) goto LAB_108213fcc;
    if (uVar6 == 0xff) {
      uVar5 = (ulong)*param_2;
      if (0xfd < *param_2) goto LAB_108213fcc;
    }
    else {
      uVar5 = (ulong)*param_2;
    }
  }
  if ((*(uint *)(&UNK_10df09f7c +
                (ulong)((uint)(uVar5 >> 5) | (uint)(byte)(&UNK_10df0a47c)[uVar6] << 3) * 4) >>
       (ulong)((uint)uVar5 & 0x1f) & 1) != 0) {
LAB_108213eb0:
    if (param_3 - (long)(param_2 + 2) < 2) {
      return;
    }
    lVar10 = 0;
    lVar11 = 3;
    do {
      pbVar4 = param_2 + lVar11;
      bVar1 = *pbVar4;
      uVar7 = (uint)bVar1;
      if (0xdb < uVar7) {
        if (bVar1 == 0xff) {
          uVar8 = (ulong)pbVar4[-1];
          if (pbVar4[-1] < 0xfe) {
LAB_108213ef8:
            uVar7 = *(uint *)(&UNK_10df09f7c +
                             (ulong)((uint)(uVar8 >> 5) | (uint)(byte)(&UNK_10df0a57c)[bVar1] << 3)
                             * 4) >> (ulong)((uint)uVar8 & 0x1f);
            goto joined_r0x000108213f0c;
          }
        }
        else if (3 < bVar1 - 0xdc) goto LAB_108213f80;
LAB_108214054:
        pbVar4 = param_2 + (2 - lVar10);
        goto LAB_108214060;
      }
      if (uVar7 == 0) {
        uVar8 = (ulong)pbVar4[-1];
        bVar2 = *(byte *)(param_1 + 0x88 + uVar8);
        uVar7 = (uint)bVar2;
        if (bVar2 < 0x18) {
          if (bVar2 < 0xf) {
            if (bVar2 < 9) {
              if (uVar7 != 5) {
                if (bVar2 != 6) {
                  if (bVar2 == 7) goto LAB_108213ff8;
                  goto LAB_108214054;
                }
                if (uVar9 + lVar10 == 4) {
                  return;
                }
              }
              goto LAB_108214008;
            }
            if (1 < uVar7 - 9) goto LAB_108214054;
LAB_108214024:
            if ((uVar6 == 0) && (lVar10 == -4)) {
              if ((int)uVar5 == 0x78) {
                bVar3 = false;
              }
              else {
                if ((int)uVar5 != 0x58) goto LAB_1082140e8;
                bVar3 = true;
              }
              if (param_2[3] == 0) {
                bVar1 = param_2[2];
                if (bVar1 != 0x6d) {
                  if (bVar1 != 0x4d) goto LAB_1082140e8;
                  bVar3 = true;
                }
                if ((param_2[5] == 0) && ((param_2[4] == 0x4c || ((param_2[4] == 0x6c && (bVar3)))))
                   ) {
                  pbVar4 = param_2 + 6;
LAB_108214060:
                  *param_4 = (long)pbVar4;
                  return;
                }
              }
            }
LAB_1082140e8:
            uVar9 = (uVar9 + lVar10) - 4;
            if ((long)uVar9 < 2) {
              return;
            }
            param_2 = param_2 + (4 - lVar10);
            goto LAB_10821412c;
          }
          if (bVar2 != 0x16) {
            if (bVar2 == 0xf) {
              pbVar4 = param_2;
              func_0x000108214818(param_2,param_2 + (2 - lVar10),auStack_54);
              if ((int)pbVar4 == 0) {
                *param_4 = (long)(param_2 + (2 - lVar10));
                return;
              }
              if ((long)(uVar9 + lVar10 + -4) < 2) {
                return;
              }
              pbVar4 = param_2 + (4 - lVar10);
              if ((param_2[lVar11 + 2] == 0) && (param_2[lVar11 + 1] == 0x3e)) {
                *param_4 = (long)(param_2 + (6 - lVar10));
                return;
              }
              goto LAB_108214060;
            }
            if (bVar2 == 0x15) goto LAB_108214024;
            goto LAB_108214054;
          }
        }
        else if (3 < bVar2 - 0x18) {
          if (uVar7 == 0x1d) goto LAB_108213ef8;
          goto LAB_108214054;
        }
      }
      else {
        if (uVar7 - 0xd8 < 4) {
LAB_108213ff8:
          if ((uVar9 + lVar10) - 2 < 4) {
            return;
          }
          goto LAB_108214008;
        }
LAB_108213f80:
        uVar7 = *(uint *)(&UNK_10df09f7c +
                         (ulong)((uint)(pbVar4[-1] >> 5) | (uint)(byte)(&UNK_10df0a57c)[bVar1] << 3)
                         * 4) >> (ulong)(pbVar4[-1] & 0x1f);
joined_r0x000108213f0c:
        if ((uVar7 & 1) == 0) {
LAB_108214008:
          pbVar4 = param_2 + (2 - lVar10);
          goto LAB_108214060;
        }
      }
      lVar10 = lVar10 + -2;
      lVar11 = lVar11 + 2;
      if ((long)(uVar9 + lVar10 + -2) < 2) {
        return;
      }
    } while( true );
  }
LAB_108213fcc:
  *param_4 = (long)param_2;
  return;
LAB_10821412c:
  bVar1 = param_2[1];
  uVar6 = (uint)bVar1;
  if (uVar6 < 0xdc) {
    if (3 < uVar6 - 0xd8) {
      if (uVar6 == 0) {
        bVar1 = *(byte *)(param_1 + 0x88 + (ulong)*param_2);
        if (bVar1 < 7) {
          if (bVar1 != 5) {
            if (bVar1 == 6) {
              if (uVar9 == 2) {
                return;
              }
              pbVar4 = param_2 + 3;
              goto LAB_10821411c;
            }
            if (bVar1 < 2) goto LAB_1082141e4;
          }
        }
        else {
          if (bVar1 == 7) goto LAB_108214144;
          if (bVar1 == 0xf) {
            pbVar4 = param_2 + 2;
            if (param_3 - (long)pbVar4 < 2) {
              return;
            }
            if ((param_2[3] == 0) && (*pbVar4 == 0x3e)) {
              *param_4 = (long)(param_2 + 4);
              return;
            }
            goto LAB_10821411c;
          }
          if (bVar1 == 8) goto LAB_1082141e4;
        }
      }
      goto LAB_108214118;
    }
LAB_108214144:
    if (uVar9 < 4) {
      return;
    }
    pbVar4 = param_2 + 4;
  }
  else {
    if (bVar1 == 0xff) {
      if (0xfd < *param_2) {
LAB_1082141e4:
        *param_4 = (long)param_2;
        return;
      }
    }
    else if (bVar1 - 0xdc < 4) goto LAB_1082141e4;
LAB_108214118:
    pbVar4 = param_2 + 2;
  }
LAB_10821411c:
  param_2 = pbVar4;
  uVar9 = param_3 - (long)param_2;
  if ((long)uVar9 < 2) {
    return;
  }
  goto LAB_10821412c;
}



/* Entry: 108214278; end: 108214cd3;  */

undefined8 FUN_108214278(long param_1,byte *param_2,long param_3,long *param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar5 = param_3 - (long)param_2;
  if ((long)uVar5 < 2) {
    return 0xffffffff;
  }
  bVar1 = param_2[1];
  uVar7 = (uint)bVar1;
  if (bVar1 < 0xdc) {
    if (uVar7 - 0xd8 < 4) {
LAB_10821429c:
      if (uVar5 < 4) {
        return 0xfffffffe;
      }
    }
    else if (uVar7 == 0) {
      uVar6 = (ulong)*param_2;
      bVar2 = *(byte *)(param_1 + uVar6 + 0x88);
      uVar7 = (uint)bVar2;
      if (bVar2 < 0x1f) {
        uVar3 = 1 << (ulong)(uVar7 & 0x1f);
        if ((uVar3 & 0x40200600) != 0) {
          uVar4 = 0x16;
          goto LAB_1082142bc;
        }
        if ((uVar3 & 0x1400000) != 0) goto LAB_108214340;
        if (uVar7 == 0x1d) goto LAB_108214318;
      }
      if (uVar7 == 6) {
        if (uVar5 == 2) {
          return 0xfffffffe;
        }
      }
      else if (uVar7 == 7) goto LAB_10821429c;
    }
    else {
LAB_108214314:
      uVar6 = (ulong)*param_2;
LAB_108214318:
      if ((*(uint *)(&UNK_10df09f7c +
                    (ulong)((uint)(uVar6 >> 5) | (uint)(byte)(&UNK_10df0a47c)[bVar1] << 3) * 4) >>
           (ulong)((uint)uVar6 & 0x1f) & 1) != 0) {
LAB_108214340:
        param_2 = param_2 + 2;
        uVar5 = param_3 - (long)param_2;
        if ((long)uVar5 < 2) {
          return 0xffffffff;
        }
        do {
          bVar1 = param_2[1];
          uVar7 = (uint)bVar1;
          if (uVar7 < 0xdc) {
            if (uVar7 != 0) {
              if (3 < uVar7 - 0xd8) {
LAB_108214404:
                uVar7 = *(uint *)(&UNK_10df09f7c +
                                 (ulong)((uint)(*param_2 >> 5) |
                                        (uint)(byte)(&UNK_10df0a57c)[bVar1] << 3) * 4) >>
                        (ulong)(*param_2 & 0x1f);
                goto joined_r0x00010821441c;
              }
LAB_108214494:
              if (uVar5 < 4) {
                return 0xfffffffe;
              }
              break;
            }
            uVar6 = (ulong)*param_2;
            bVar2 = *(byte *)(param_1 + 0x88 + uVar6);
            uVar7 = (uint)bVar2;
            if (bVar2 < 0x18) {
              if (bVar2 < 0x16) {
                if (uVar7 == 6) {
                  if (uVar5 == 2) {
                    return 0xfffffffe;
                  }
                  break;
                }
                if (uVar7 == 7) goto LAB_108214494;
                if (uVar7 != 0x12) break;
                param_2 = param_2 + 2;
                uVar4 = 0x1c;
                goto LAB_1082142bc;
              }
              if (uVar7 != 0x16) break;
            }
            else if (3 < uVar7 - 0x18) {
              if (uVar7 == 0x1d) goto LAB_108214388;
              break;
            }
          }
          else {
            if (bVar1 != 0xff) {
              if (3 < bVar1 - 0xdc) goto LAB_108214404;
              break;
            }
            uVar6 = (ulong)*param_2;
            if (0xfd < *param_2) break;
LAB_108214388:
            uVar7 = *(uint *)(&UNK_10df09f7c +
                             (ulong)((uint)(uVar6 >> 5) | (uint)(byte)(&UNK_10df0a57c)[bVar1] << 3)
                             * 4) >> (ulong)((uint)uVar6 & 0x1f);
joined_r0x00010821441c:
            if ((uVar7 & 1) == 0) break;
          }
          param_2 = param_2 + 2;
          uVar5 = uVar5 - 2;
          if ((long)uVar5 < 2) {
            return 0xffffffff;
          }
        } while( true );
      }
    }
  }
  else if (3 < uVar7 - 0xdc) {
    if (uVar7 != 0xff) goto LAB_108214314;
    uVar6 = (ulong)*param_2;
    if (*param_2 < 0xfe) goto LAB_108214318;
  }
  uVar4 = 0;
LAB_1082142bc:
  *param_4 = (long)param_2;
  return uVar4;
}



/* Entry: 108214cd4; end: 108215363;  */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_108214cd4(ulong param_1,byte *param_2,long param_3,long *param_4)

{
  long lVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  byte *pbStack_68;
  
  uVar8 = param_3 - (long)param_2;
  if ((long)uVar8 < 2) {
    return 0xffffffff;
  }
  bVar4 = false;
  lVar1 = param_1 + 0x88;
LAB_108214d30:
  bVar3 = param_2[1];
  uVar6 = (uint)bVar3;
  if (0xdb < bVar3) {
    if (uVar6 == 0xff) {
      uVar10 = (ulong)*param_2;
      if (*param_2 < 0xfe) goto LAB_108214da8;
    }
    else if (3 < uVar6 - 0xdc) goto LAB_108214da4;
    goto LAB_108215234;
  }
  if (uVar6 == 0) {
    uVar10 = (ulong)*param_2;
    bVar5 = *(byte *)(lVar1 + uVar10);
    uVar6 = (uint)bVar5;
    if (bVar5 < 0x17) {
      if (bVar5 < 0xe) {
        if (uVar6 - 9 < 2) {
LAB_108214e08:
          param_2 = param_2 + 2;
          lVar7 = param_3 - (long)param_2;
          while( true ) {
            if (lVar7 < 2) {
              return 0xffffffff;
            }
            if (param_2[1] != 0) goto LAB_108215234;
            bVar3 = *(byte *)(lVar1 + (ulong)*param_2);
            if (1 < bVar3 - 9 && bVar3 != 0x15) break;
            param_2 = param_2 + 2;
            lVar7 = lVar7 + -2;
          }
          if (bVar3 == 0xe) {
LAB_108214ea4:
            param_2 = param_2 + 2;
            lVar7 = param_3 - (long)param_2;
            if (lVar7 < 2) {
              return 0xffffffff;
            }
            while( true ) {
              if (param_2[1] != 0) goto LAB_108215234;
              bVar3 = *(byte *)(lVar1 + (ulong)*param_2);
              if ((bVar3 & 0xfe) == 0xc) break;
              if (0x15 < bVar3 || (1 << (ulong)(bVar3 & 0x1f) & 0x200600U) == 0) goto LAB_108215234;
              param_2 = param_2 + 2;
              lVar7 = lVar7 + -2;
              if (lVar7 < 2) {
                return 0xffffffff;
              }
            }
            pbStack_68 = param_2 + 2;
            uVar8 = lVar7 - 2;
            if ((long)uVar8 < 2) {
              return 0xffffffff;
            }
            do {
              uVar6 = (uint)pbStack_68[1];
              if (pbStack_68[1] < 0xdc) {
                if (uVar6 - 0xd8 < 4) {
                  bVar5 = 7;
                }
                else if (uVar6 == 0) {
                  bVar5 = *(byte *)(lVar1 + (ulong)*pbStack_68);
                }
                else {
LAB_108214fac:
                  bVar5 = 0x1d;
                }
              }
              else if (uVar6 - 0xdc < 4) {
                bVar5 = 8;
              }
              else {
                if ((uVar6 != 0xff) || (*pbStack_68 < 0xfe)) goto LAB_108214fac;
                bVar5 = 0;
              }
              if (bVar5 == bVar3) goto LAB_1082150bc;
              if (bVar5 < 6) {
                if (bVar5 == 3) {
                  uVar8 = param_1;
                  func_0x0001082148c4(param_1,pbStack_68 + 2,param_3,&pbStack_68);
                  if ((int)uVar8 < 1) {
                    param_2 = pbStack_68;
                    if ((int)uVar8 != 0) {
                      return uVar8;
                    }
                    goto LAB_108215238;
                  }
                }
                else {
                  if ((bVar5 != 5) && (bVar5 < 3)) goto LAB_10821526c;
LAB_108214f34:
                  pbStack_68 = pbStack_68 + 2;
                }
              }
              else if (bVar5 == 6) {
                if (uVar8 == 2) {
                  return 0xfffffffe;
                }
                pbStack_68 = pbStack_68 + 3;
              }
              else {
                if (bVar5 != 7) {
                  if (bVar5 != 8) goto LAB_108214f34;
                  goto LAB_10821526c;
                }
                if (uVar8 < 4) {
                  return 0xfffffffe;
                }
                pbStack_68 = pbStack_68 + 4;
              }
              uVar8 = param_3 - (long)pbStack_68;
              if ((long)uVar8 < 2) {
                return 0xffffffff;
              }
            } while( true );
          }
        }
        else if (uVar6 == 6) {
          if (uVar8 == 2) {
            return 0xfffffffe;
          }
        }
        else if (uVar6 == 7) goto LAB_10821521c;
      }
      else {
        if (uVar6 == 0xe) goto LAB_108214ea4;
        if (uVar6 == 0x15) goto LAB_108214e08;
        if (uVar6 == 0x16) goto LAB_108214dc0;
      }
      goto LAB_108215234;
    }
    if (uVar6 - 0x18 < 4) goto LAB_108214dc0;
    if (uVar6 != 0x17) {
      if (uVar6 == 0x1d) goto LAB_108214da8;
      goto LAB_108215234;
    }
    if (bVar4) goto LAB_108215234;
    pbStack_68 = param_2 + 2;
    uVar8 = param_3 - (long)pbStack_68;
    if ((long)uVar8 < 2) {
      return 0xffffffff;
    }
    bVar3 = param_2[3];
    uVar6 = (uint)bVar3;
    if (bVar3 < 0xdc) {
      if (uVar6 == 0) {
        uVar10 = (ulong)*pbStack_68;
        bVar5 = *(byte *)(lVar1 + uVar10);
        if (bVar5 < 0x18) {
          if (bVar5 == 0x16) goto LAB_1082150b0;
          if (bVar5 == 6) {
            if (uVar8 == 2) {
              return 0xfffffffe;
            }
          }
          else if (bVar5 == 7) goto LAB_108215264;
        }
        else {
          if (bVar5 == 0x18) {
LAB_1082150b0:
            param_2 = param_2 + 4;
            bVar4 = true;
            goto LAB_108214dc4;
          }
          if (bVar5 == 0x1d) goto LAB_108215098;
        }
      }
      else if (uVar6 - 0xd8 < 4) {
LAB_108215264:
        if (uVar8 < 4) {
          return 0xfffffffe;
        }
      }
      else {
LAB_108215094:
        uVar10 = (ulong)*pbStack_68;
LAB_108215098:
        if ((*(uint *)(&UNK_10df09f7c +
                      (ulong)((uint)(uVar10 >> 5) | (uint)(byte)(&UNK_10df0a47c)[bVar3] << 3) * 4)
             >> (ulong)((uint)uVar10 & 0x1f) & 1) != 0) goto LAB_1082150b0;
      }
    }
    else if (uVar6 == 0xff) {
      uVar10 = (ulong)*pbStack_68;
      if (*pbStack_68 < 0xfe) goto LAB_108215098;
    }
    else if (3 < uVar6 - 0xdc) goto LAB_108215094;
    goto LAB_10821526c;
  }
  if (3 < uVar6 - 0xd8) {
LAB_108214da4:
    uVar10 = (ulong)*param_2;
LAB_108214da8:
    if ((*(uint *)(&UNK_10df09f7c +
                  (ulong)((uint)(uVar10 >> 5) | (uint)(byte)(&UNK_10df0a57c)[bVar3] << 3) * 4) >>
         (ulong)((uint)uVar10 & 0x1f) & 1) == 0) goto LAB_108215234;
LAB_108214dc0:
    param_2 = param_2 + 2;
    goto LAB_108214dc4;
  }
LAB_10821521c:
  if (uVar8 < 4) {
    return 0xfffffffe;
  }
  goto LAB_108215234;
LAB_1082150bc:
  param_2 = pbStack_68 + 2;
  if (param_3 - (long)param_2 < 2) {
    return 0xffffffff;
  }
  if (pbStack_68[3] == 0) {
    uVar6 = (uint)*(byte *)(lVar1 + (ulong)*param_2);
    uVar8 = 0;
    if (*(byte *)(lVar1 + (ulong)*param_2) < 0xb) {
      if (1 < uVar6 - 9) goto LAB_108215238;
    }
    else if (uVar6 != 0x15) {
      if (uVar6 == 0xb) {
LAB_108215348:
        uVar8 = 1;
        param_2 = param_2 + 2;
      }
      else if (uVar6 == 0x11) {
LAB_1082152e0:
        pbStack_68 = param_2 + 2;
        if (param_3 - (long)pbStack_68 < 2) {
          return 0xffffffff;
        }
        if (param_2[3] == 0) {
          pbVar2 = param_2 + 4;
          if (param_2[2] != 0x3e) {
            pbVar2 = pbStack_68;
          }
          uVar6 = 3;
          if (param_2[2] != 0x3e) {
            uVar6 = 0;
          }
          uVar8 = (ulong)uVar6;
          param_2 = pbVar2;
        }
        else {
LAB_10821526c:
          uVar8 = 0;
          param_2 = pbStack_68;
        }
      }
      goto LAB_108215238;
    }
    param_2 = pbStack_68 + 4;
    if (param_3 - (long)param_2 < 2) {
      return 0xffffffff;
    }
    lVar9 = 0;
    lVar11 = param_3 - (long)pbStack_68;
    lVar7 = 4;
    while( true ) {
      bVar3 = (pbStack_68 + lVar7)[1];
      if (bVar3 != 0) break;
      bVar3 = *(byte *)(lVar1 + (ulong)pbStack_68[lVar7]);
      if (bVar3 < 0xb) {
        if (1 < bVar3 - 9) {
          if (bVar3 == 6) {
            if (lVar11 + lVar9 == 6) {
              return 0xfffffffe;
            }
            goto LAB_108215298;
          }
          if (bVar3 != 7) goto LAB_108215298;
          goto LAB_108215288;
        }
      }
      else {
        if (0x15 < bVar3) {
          if (bVar3 == 0x16 || bVar3 == 0x18) goto LAB_1082151fc;
          if (bVar3 != 0x1d) goto LAB_108215298;
          goto LAB_1082151c8;
        }
        if (bVar3 != 0x15) {
          if (bVar3 == 0xb) {
            param_2 = pbStack_68 + (4 - lVar9);
            goto LAB_108215348;
          }
          if (bVar3 != 0x11) goto LAB_108215298;
          param_2 = pbStack_68 + (4 - lVar9);
          goto LAB_1082152e0;
        }
      }
      param_2 = param_2 + 2;
      lVar9 = lVar9 + -2;
      lVar7 = lVar7 + 2;
      if (lVar11 + lVar9 + -4 < 2) {
        return 0xffffffff;
      }
    }
    if (bVar3 - 0xd8 < 4) {
LAB_108215288:
      if ((lVar11 + lVar9) - 4U < 4) {
        return 0xfffffffe;
      }
    }
    else if (3 < bVar3 - 0xdc) {
      if ((bVar3 != 0xff) || (pbStack_68[lVar7] < 0xfe)) {
LAB_1082151c8:
        param_2 = pbStack_68 + (4 - lVar9);
        if ((*(uint *)(&UNK_10df09f7c +
                      (ulong)((uint)(pbStack_68[lVar7] >> 5) |
                             (uint)(byte)(&UNK_10df0a47c)[pbStack_68[5 - lVar9]] << 3) * 4) >>
             (ulong)(pbStack_68[lVar7] & 0x1f) & 1) != 0) {
LAB_1082151fc:
          bVar4 = false;
          param_2 = pbStack_68 + (6 - lVar9);
LAB_108214dc4:
          uVar8 = param_3 - (long)param_2;
          if ((long)uVar8 < 2) {
            return 0xffffffff;
          }
          goto LAB_108214d30;
        }
      }
      goto LAB_108215234;
    }
LAB_108215298:
    uVar8 = 0;
    param_2 = pbStack_68 + (4 - lVar9);
  }
  else {
LAB_108215234:
    uVar8 = 0;
  }
LAB_108215238:
  *param_4 = (long)param_2;
  return uVar8;
}



/* Entry: 108215364; end: 108216c7b;  */

undefined8 *
FUN_108215364(long param_1,long param_2,uint param_3,byte *param_4,byte *param_5,long *param_6)

{
  byte bVar1;
  uint uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  if (param_5 <= param_4) {
    return (undefined8 *)0xfffffffc;
  }
  plVar5 = *(long **)(param_2 + 0x88);
  if (param_4 + 1 == param_5) {
    if (*(byte *)(param_2 + 0x85) - 3 < 3) {
      return (undefined8 *)0xffffffff;
    }
    bVar1 = *param_4;
    uVar2 = bVar1 - 0xef;
    if (uVar2 < 0x11 && (1 << (ulong)(uVar2 & 0x1f) & 0x18001U) != 0) {
      if (param_3 == 0) {
        return (undefined8 *)0xffffffff;
      }
      if (*(byte *)(param_2 + 0x85) != 0) {
        return (undefined8 *)0xffffffff;
      }
    }
    else if ((bVar1 == 0) || (bVar1 == 0x3c)) {
      return (undefined8 *)0xffffffff;
    }
    goto LAB_108215540;
  }
  uVar3 = CONCAT11(*param_4,param_4[1]);
  if (uVar3 < 0xfeff) {
    if (uVar3 == 0x3c00) {
      if (*(char *)(param_2 + 0x85) == '\x04') {
        if (param_3 == 0) {
LAB_108215514:
          puVar4 = *(undefined8 **)(param_1 + 0x28);
          *plVar5 = (long)puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010821552c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)puVar4[param_3])(puVar4,param_4,param_5,param_6);
          return puVar4;
        }
      }
      else if ((param_3 == 0) || (*(char *)(param_2 + 0x85) != '\x03')) goto LAB_108215514;
      goto LAB_108215540;
    }
    if (uVar3 == 0xefbb) {
      if (((param_3 == 0) || (5 < *(byte *)(param_2 + 0x85))) ||
         ((1 << (ulong)(*(byte *)(param_2 + 0x85) & 0x1f) & 0x39U) == 0)) {
        if (param_4 + 2 == param_5) {
          return (undefined8 *)0xffffffff;
        }
        if (param_4[2] == 0xbf) {
          *param_6 = (long)(param_4 + 3);
          *plVar5 = *(long *)(param_1 + 0x10);
          return (undefined8 *)0xe;
        }
      }
      goto LAB_108215540;
    }
  }
  else {
    if (uVar3 == 0xfffe) {
      if ((param_3 == 0) || (*(char *)(param_2 + 0x85) != '\0')) {
        *param_6 = (long)(param_4 + 2);
        *plVar5 = *(long *)(param_1 + 0x28);
        return (undefined8 *)0xe;
      }
      goto LAB_108215540;
    }
    if (uVar3 == 0xfeff) {
      if ((param_3 == 0) || (*(char *)(param_2 + 0x85) != '\0')) {
        *param_6 = (long)(param_4 + 2);
        *plVar5 = *(long *)(param_1 + 0x20);
        return (undefined8 *)0xe;
      }
      goto LAB_108215540;
    }
  }
  if (*param_4 == 0) {
    if ((param_3 == 0) || (*(char *)(param_2 + 0x85) != '\x05')) {
      puVar4 = *(undefined8 **)(param_1 + 0x20);
      *plVar5 = (long)puVar4;
                    /* WARNING: Could not recover jumptable at 0x000108215578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)puVar4[param_3])(puVar4,param_4,param_5,param_6);
      return puVar4;
    }
  }
  else if ((param_3 == 0) && (param_4[1] == 0)) {
    puVar4 = *(undefined8 **)(param_1 + 0x28);
    *plVar5 = (long)puVar4;
                    /* WARNING: Could not recover jumptable at 0x0001082154b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar4)(puVar4,param_4,param_5,param_6);
    return puVar4;
  }
LAB_108215540:
  puVar4 = *(undefined8 **)(param_1 + (long)*(char *)(param_2 + 0x85) * 8);
  *plVar5 = (long)puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010821555c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)puVar4[param_3])(puVar4,param_4,param_5,param_6);
  return puVar4;
}



/* Entry: 108216c7c; end: 108216dff;  */

int FUN_108216c7c(long param_1,byte *param_2,byte *param_3,long *param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  
  if (param_3 <= param_2) {
    return -4;
  }
  if ((long)param_3 - (long)param_2 < 2) {
    return -1;
  }
  pbVar5 = param_2;
  do {
    if (*pbVar5 - 0xd8 < 4) {
LAB_108216ca4:
      lVar9 = 4;
    }
    else if (*pbVar5 == 0) {
      bVar1 = *(byte *)(param_1 + 0x88 + (ulong)pbVar5[1]);
      if (bVar1 < 7) {
        if (bVar1 == 6) {
          lVar9 = 3;
        }
        else {
          lVar9 = 2;
          if (bVar1 == 3) {
            if (pbVar5 == param_2) {
              pbVar5 = param_2 + 2;
              uVar8 = (long)param_3 - (long)pbVar5;
              uVar6 = uVar8 - 2;
              if ((long)uVar8 < 2) {
                return -1;
              }
              bVar1 = *pbVar5;
              uVar10 = (uint)bVar1;
              pbVar4 = pbVar5;
              if (0xdb < bVar1) {
                if (uVar10 - 0xdc < 4) goto LAB_1082186e4;
                if (uVar10 == 0xff) {
                  uVar11 = (ulong)param_2[3];
                  if (0xfd < param_2[3]) goto LAB_1082186e4;
                }
                else {
LAB_108218768:
                  uVar11 = (ulong)param_2[3];
                }
LAB_10821876c:
                if ((*(uint *)(&UNK_10df09f7c +
                              (ulong)((uint)(uVar11 >> 5) | (uint)(byte)(&UNK_10df0a47c)[bVar1] << 3
                                     ) * 4) >> (ulong)((uint)uVar11 & 0x1f) & 1) == 0)
                goto LAB_1082186e4;
LAB_1082187a4:
                if ((long)uVar6 < 2) {
                  return -1;
                }
                pbVar5 = param_2 + 6;
                goto LAB_108218808;
              }
              if (3 < uVar10 - 0xd8) {
                if (uVar10 != 0) goto LAB_108218768;
                iVar3 = 0;
                lVar9 = param_1 + 0x88;
                uVar11 = (ulong)param_2[3];
                bVar2 = *(byte *)(lVar9 + uVar11);
                if (0x15 < bVar2) {
                  if (bVar2 == 0x16 || bVar2 == 0x18) goto LAB_1082187a4;
                  if (bVar2 == 0x1d) goto LAB_10821876c;
                  goto LAB_1082186e8;
                }
                if (bVar2 == 6) {
                  if (uVar8 == 2) {
                    return -2;
                  }
                  goto LAB_1082186e4;
                }
                if (bVar2 != 7) {
                  if (bVar2 != 0x13) goto LAB_1082186e8;
                  pbVar5 = param_2 + 4;
                  if ((long)param_3 - (long)pbVar5 < 2) {
                    return -1;
                  }
                  if (*pbVar5 == 0) {
                    if ((ulong)param_2[5] == 0x78) {
                      pbVar5 = param_2 + 6;
                      if ((long)param_3 - (long)pbVar5 < 2) {
                        return -1;
                      }
                      if ((*pbVar5 == 0) && ((*(byte *)(lVar9 + (ulong)param_2[7]) & 0xfe) == 0x18))
                      {
                        pbVar4 = param_2 + 8;
                        lVar7 = (long)param_3 - (long)pbVar4;
                        if (lVar7 < 2) {
                          return -1;
                        }
                        goto LAB_1082188f8;
                      }
                    }
                    else if (*(char *)(lVar9 + (ulong)param_2[5]) == '\x19') {
                      lVar7 = uVar8 - 4;
                      pbVar5 = param_2 + 6;
                      goto LAB_10821896c;
                    }
                  }
                  iVar3 = 0;
                  goto LAB_1082186e8;
                }
              }
              if (uVar8 < 4) {
                return -2;
              }
              goto LAB_1082186e4;
            }
            break;
          }
        }
      }
      else if (bVar1 < 9) {
        lVar9 = 2;
        if (bVar1 == 7) goto LAB_108216ca4;
      }
      else {
        if (bVar1 == 9) {
          if (pbVar5 == param_2) {
            pbVar5 = param_2 + 2;
            if ((long)param_3 - (long)pbVar5 < 2) {
              return -3;
            }
            pbVar4 = pbVar5;
            if ((*pbVar5 == 0) &&
               (pbVar4 = param_2 + 4, *(char *)(param_1 + 0x88 + (ulong)param_2[3]) != '\n')) {
              pbVar4 = pbVar5;
            }
            *param_4 = (long)pbVar4;
            return 7;
          }
          break;
        }
        if (bVar1 == 10) {
          if (pbVar5 == param_2) {
            *param_4 = (long)(param_2 + 2);
            return 7;
          }
          break;
        }
        lVar9 = 2;
        if (bVar1 == 0x1e) {
          if (pbVar5 == param_2) {
            FUN_108218050(param_1,param_2 + 2);
            iVar3 = 0;
            if ((int)param_1 != 0x16) {
              iVar3 = (int)param_1;
            }
            return iVar3;
          }
          break;
        }
      }
    }
    else {
      lVar9 = 2;
    }
    pbVar5 = pbVar5 + lVar9;
  } while (1 < (long)param_3 - (long)pbVar5);
  *param_4 = (long)pbVar5;
  return 6;
LAB_108218808:
  bVar1 = pbVar5[-2];
  uVar10 = (uint)bVar1;
  if (uVar10 < 0xdc) {
    if (uVar10 != 0) {
      if (uVar10 - 0xd8 < 4) {
LAB_108218948:
        if (uVar6 < 4) {
          return -2;
        }
      }
      else {
LAB_10821885c:
        uVar10 = *(uint *)(&UNK_10df09f7c +
                          (ulong)((uint)(pbVar5[-1] >> 5) | (uint)(byte)(&UNK_10df0a57c)[bVar1] << 3
                                 ) * 4) >> (ulong)(pbVar5[-1] & 0x1f);
joined_r0x000108218874:
        if ((uVar10 & 1) != 0) goto LAB_1082187f8;
      }
      goto LAB_1082189c0;
    }
    uVar8 = (ulong)pbVar5[-1];
    bVar2 = *(byte *)(param_1 + 0x88 + uVar8);
    uVar10 = (uint)bVar2;
    if (0x17 < bVar2) {
      if (3 < uVar10 - 0x18) {
        if (uVar10 == 0x1d) goto LAB_1082187e0;
        goto LAB_1082189c0;
      }
LAB_1082187f8:
      uVar6 = uVar6 - 2;
      pbVar5 = pbVar5 + 2;
      if ((long)uVar6 < 2) {
        return -1;
      }
      goto LAB_108218808;
    }
    if (bVar2 < 0x16) {
      if (uVar10 != 6) {
        if (uVar10 == 7) goto LAB_108218948;
        if (uVar10 != 0x12) goto LAB_1082189c0;
        iVar3 = 9;
        goto LAB_1082186e8;
      }
      if (uVar6 == 2) {
        return -2;
      }
    }
    else if (uVar10 == 0x16) goto LAB_1082187f8;
  }
  else if (bVar1 == 0xff) {
    uVar8 = (ulong)pbVar5[-1];
    if (pbVar5[-1] < 0xfe) {
LAB_1082187e0:
      uVar10 = *(uint *)(&UNK_10df09f7c +
                        (ulong)((uint)(uVar8 >> 5) | (uint)(byte)(&UNK_10df0a57c)[bVar1] << 3) * 4)
               >> (ulong)((uint)uVar8 & 0x1f);
      goto joined_r0x000108218874;
    }
  }
  else if (3 < bVar1 - 0xdc) goto LAB_10821885c;
LAB_1082189c0:
  iVar3 = 0;
  pbVar5 = pbVar5 + -2;
  goto LAB_1082186e8;
LAB_1082188f8:
  if (*pbVar4 != 0) goto LAB_1082186e4;
  if (1 < *(byte *)(lVar9 + (ulong)pbVar4[1]) - 0x18) {
    if (*(byte *)(lVar9 + (ulong)pbVar4[1]) != 0x12) goto LAB_1082186e4;
    pbVar5 = pbVar4 + 2;
    iVar3 = 10;
    goto LAB_1082186e8;
  }
  pbVar4 = pbVar4 + 2;
  lVar7 = lVar7 + -2;
  if (lVar7 < 2) {
    return -1;
  }
  goto LAB_1082188f8;
  while( true ) {
    pbVar5 = pbVar4 + 2;
    lVar7 = lVar7 + -2;
    if (*(char *)(lVar9 + (ulong)pbVar4[1]) != '\x19') break;
LAB_10821896c:
    pbVar4 = pbVar5;
    if (lVar7 < 2) {
      return -1;
    }
    if (*pbVar4 != 0) goto LAB_1082186e4;
  }
  if (*(char *)(lVar9 + (ulong)pbVar4[1]) == '\x12') {
    iVar3 = 10;
  }
  else {
LAB_1082186e4:
    pbVar5 = pbVar4;
    iVar3 = 0;
  }
LAB_1082186e8:
  *param_4 = (long)pbVar5;
  return iVar3;
}


