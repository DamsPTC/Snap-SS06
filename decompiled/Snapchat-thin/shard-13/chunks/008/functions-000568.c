/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10adf88a4; end: 10adf8917;  */

void FUN_10adf88a4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x10) ^ 2);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 3) != 0) {
    puVar1 = (undefined8 *)0x0;
  }
  if ((puVar1 == (undefined8 *)0x0) || (-1 < *(char *)((long)puVar2 + 0x17))) {
    __ZdlPv();
  }
  else {
    __ZdlPv(*puVar2);
    __ZdlPv(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10adf8918; end: 10adf8967;  */

undefined ** FUN_10adf8918(void)

{
  return &PTR_DAT_110c76ee0;
}



/* Entry: 10adf8968; end: 10adf8c4f;  */

/* WARNING: Removing unreachable block (ram,0x00010adf8b34) */
/* WARNING: Removing unreachable block (ram,0x00010adf8b3c) */
/* WARNING: Removing unreachable block (ram,0x00010adf8b2c) */

long * FUN_10adf8968(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  char cVar4;
  ulong *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  long *plVar11;
  ulong *puVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  undefined1 *puVar18;
  
  puVar12 = (ulong *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  cVar4 = *(char *)((long)puVar12 + 0x17);
  uVar15 = (ulong)cVar4;
  if ((long)uVar15 < 0) {
    if (puVar12[1] != 0) {
      puVar3 = (ulong *)*puVar12;
      uVar16 = puVar12[1];
      goto joined_r0x00010adf89c0;
    }
  }
  else {
    puVar3 = puVar12;
    uVar16 = uVar15;
    if ((int)cVar4 != 0) {
joined_r0x00010adf89c0:
      if (uVar16 << 0x20 == 0) {
LAB_10adf8a80:
        if (((uint)(int)cVar4 >> 7 & 1) == 0) goto LAB_10adf8a84;
LAB_10adf8ab8:
        uVar15 = puVar12[1];
        if ((long)uVar15 < 0x80) goto LAB_10adf8ac4;
      }
      else {
        lVar8 = (long)(uVar16 << 0x20) >> 0x20;
        puVar2 = (ulong *)((long)puVar3 + lVar8);
        puVar10 = puVar3;
        for (; (7 < lVar8 && ((*puVar3 & 0x8080808080808080) == 0)); puVar3 = puVar3 + 1) {
          puVar10 = puVar10 + 1;
          lVar8 = lVar8 + -8;
        }
        puVar5 = puVar3;
        if (puVar3 < puVar2) {
          uVar9 = (long)puVar2 - (long)puVar10;
          puVar10 = puVar3;
          for (uVar16 = uVar9 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            puVar5 = puVar10;
            if ((char)*puVar10 < '\0') goto LAB_10adf8a74;
            puVar10 = (ulong *)((long)puVar10 + 1);
          }
          puVar3 = (ulong *)((long)puVar3 + uVar9);
          puVar5 = puVar3;
          if (2 < uVar9 - 1) {
            puVar10 = (ulong *)((long)puVar10 + 3);
            do {
              puVar5 = puVar10;
              if ((char)*puVar10 < '\0') break;
              puVar1 = (ulong *)((long)puVar10 + 1);
              puVar10 = (ulong *)((long)puVar10 + 4);
              puVar5 = puVar3;
            } while (puVar1 != puVar3);
          }
        }
LAB_10adf8a74:
        func_0x000107c34ffc(puVar5,puVar2,0);
        if (puVar5 != (ulong *)0x0) goto LAB_10adf8a80;
        func_0x00010b4d3bf8(&UNK_10f7741f2,0,&UNK_10f6af241,0x1d,&UNK_10f774276);
        uVar15 = (ulong)*(byte *)((long)puVar12 + 0x17);
        if ((char)*(byte *)((long)puVar12 + 0x17) < '\0') goto LAB_10adf8ab8;
LAB_10adf8a84:
        uVar15 = uVar15 & 0xff;
LAB_10adf8ac4:
        if ((long)uVar15 <= (*param_3 - (long)param_2) + 0xe) {
          *(undefined1 *)param_2 = 10;
          *(char *)((long)param_2 + 1) = (char)uVar15;
          puVar3 = (ulong *)*puVar12;
          if (-1 < *(char *)((long)puVar12 + 0x17)) {
            puVar3 = puVar12;
          }
          _memcpy((undefined1 *)((long)param_2 + 2),puVar3,uVar15);
          param_2 = (long *)((undefined1 *)((long)param_2 + 2) + uVar15);
          goto LAB_10adf8b08;
        }
      }
      plVar6 = param_3;
      func_0x00010b4d50d0(param_3,1,puVar12,param_2);
      uVar15 = *(ulong *)(param_1 + 8);
      goto joined_r0x00010adf8b0c;
    }
  }
LAB_10adf8b08:
  uVar15 = *(ulong *)(param_1 + 8);
  plVar6 = param_2;
joined_r0x00010adf8b0c:
  if ((uVar15 & 1) != 0) {
    uVar15 = uVar15 & 0xfffffffffffffffe;
    uVar16 = (ulong)*(char *)(uVar15 + 0x1f);
    if ((long)uVar16 < 0) {
      lVar8 = *(long *)(uVar15 + 8);
      uVar16 = (ulong)*(uint *)(uVar15 + 0x10);
    }
    else {
      lVar8 = uVar15 + 8;
    }
    uVar14 = (uint)uVar16;
    if (*param_3 - (long)plVar6 < (long)(int)uVar14) {
      puVar18 = (undefined1 *)((*param_3 - (long)plVar6) + 0x10);
      if ((int)puVar18 < (int)uVar14) {
        do {
          lVar13 = (long)(int)puVar18;
          _memcpy(plVar6,lVar8,lVar13);
          uVar14 = (int)uVar16 - (int)puVar18;
          uVar16 = (ulong)uVar14;
          lVar8 = lVar8 + lVar13;
          plVar6 = (long *)((long)plVar6 + lVar13);
          plVar11 = (long *)*param_3;
          do {
            if ((*(byte *)(param_3 + 7) & 1) != 0) {
              puVar18 = (undefined1 *)((long)plVar11 + (0x10 - (long)(param_3 + 2)));
              iVar17 = (int)puVar18;
              plVar6 = param_3 + 2;
              goto joined_r0x00010adf8c30;
            }
            plVar7 = param_3;
            func_0x000107c303dc();
            plVar6 = (long *)((long)plVar7 + (long)((int)plVar6 - (int)plVar11));
            plVar11 = (long *)*param_3;
          } while (plVar11 <= plVar6);
          puVar18 = (undefined1 *)((long)plVar11 + (0x10 - (long)plVar6));
          iVar17 = (int)puVar18;
joined_r0x00010adf8c30:
        } while (iVar17 < (int)uVar14);
      }
      _memcpy(plVar6,lVar8,(long)(int)uVar14);
      plVar6 = (long *)((long)plVar6 + (long)(int)uVar14);
    }
    else {
      _memcpy(plVar6,lVar8,uVar16 & 0xffffffff);
      plVar6 = (long *)((long)plVar6 + (long)(int)uVar14);
    }
  }
  return plVar6;
}



/* Entry: 10adf8c50; end: 10adf8cd3;  */

long FUN_10adf8c50(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  lVar2 = lVar3;
  if (lVar3 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 == 0) {
    lVar2 = 0;
    uVar1 = *(ulong *)(param_1 + 8);
  }
  else {
    lVar2 = *(long *)(uVar1 + 8);
    if (-1 < *(char *)(uVar1 + 0x17)) {
      lVar2 = lVar3;
    }
    lVar2 = lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if ((uVar1 & 1) != 0) {
    lVar3 = (long)*(char *)((uVar1 & 0xfffffffffffffffe) + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)((uVar1 & 0xfffffffffffffffe) + 0x10);
    }
    *(int *)(param_1 + 0x18) = (int)(lVar3 + lVar2);
    return lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x18) = (int)lVar2;
  return lVar2;
}



/* Entry: 10adf8cd4; end: 10adf8f1b;  */

void FUN_10adf8cd4(long param_1,long param_2)

{
  char cVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar8 = (undefined8 *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
  cVar1 = *(char *)((long)puVar8 + 0x17);
  uVar9 = (ulong)cVar1;
  uVar7 = uVar9;
  if ((long)uVar9 < 0) {
    uVar7 = puVar8[1];
  }
  if (uVar7 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    if (((ulong)plVar5 & 1) == 0) {
      uVar7 = *(ulong *)(param_1 + 0x10);
    }
    else {
      plVar5 = *(long **)((ulong)plVar5 & 0xfffffffffffffffe);
      uVar7 = *(ulong *)(param_1 + 0x10);
    }
    if ((uVar7 & 3) == 0) {
      uVar7 = puVar8[1];
      puVar6 = (undefined8 *)*puVar8;
      if (-1 < cVar1) {
        uVar7 = uVar9;
        puVar6 = puVar8;
      }
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)0x18;
        __Znwm();
        if (0x7ffffffffffffff6 < uVar7) goto LAB_10adf8f00;
        if (0x16 < uVar7) {
          plVar10 = (long *)0x19;
          if ((uVar7 | 7) != 0x17) {
            plVar10 = (long *)((uVar7 | 7) + 1);
          }
          plVar4 = plVar10;
          __Znwm();
          *plVar5 = (long)plVar4;
          uVar9 = 2;
          goto LAB_10adf8ea0;
        }
        *(char *)((long)plVar5 + 0x17) = (char)uVar7;
        uVar9 = 2;
        plVar4 = plVar5;
        plVar10 = plVar5;
        if (uVar7 != 0) goto LAB_10adf8eb0;
      }
      else {
        func_0x00010b4d80a4();
        if (0x7ffffffffffffff6 < uVar7) {
          func_0x000104bd47d4();
LAB_10adf8f00:
          func_0x000104bd47d4();
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10adf8f08);
          (*pcVar3)();
        }
        if (uVar7 < 0x17) {
          *(char *)((long)plVar5 + 0x17) = (char)uVar7;
          uVar9 = 3;
          plVar4 = plVar5;
          plVar10 = plVar5;
          if (uVar7 == 0) goto LAB_10adf8ec0;
        }
        else {
          plVar10 = (long *)0x19;
          if ((uVar7 | 7) != 0x17) {
            plVar10 = (long *)((uVar7 | 7) + 1);
          }
          plVar4 = plVar10;
          __Znwm();
          *plVar5 = (long)plVar4;
          uVar9 = 3;
LAB_10adf8ea0:
          plVar5[1] = uVar7;
          plVar5[2] = (ulong)plVar10 | 0x8000000000000000;
          plVar10 = plVar5;
        }
LAB_10adf8eb0:
        _memmove(plVar4,puVar6,uVar7);
        plVar5 = plVar4;
      }
LAB_10adf8ec0:
      *(undefined1 *)((long)plVar5 + uVar7) = 0;
      *(ulong *)(param_1 + 0x10) = uVar9 | (ulong)plVar10;
      uVar7 = *(ulong *)(param_2 + 8);
      goto joined_r0x00010adf8d4c;
    }
    puVar6 = (undefined8 *)(uVar7 & 0xfffffffffffffffc);
    if (puVar6 != puVar8) {
      if (*(char *)((long)puVar6 + 0x17) < '\0') {
        uVar7 = puVar8[1];
        puVar2 = (undefined8 *)*puVar8;
        if (-1 < cVar1) {
          uVar7 = uVar9;
          puVar2 = puVar8;
        }
        func_0x000107c27ba0(puVar6,puVar2,uVar7);
      }
      else {
        if (-1 < cVar1) {
          uVar12 = puVar8[1];
          uVar11 = *puVar8;
          puVar6[2] = puVar8[2];
          puVar6[1] = uVar12;
          *puVar6 = uVar11;
          uVar7 = *(ulong *)(param_2 + 8);
          goto joined_r0x00010adf8d4c;
        }
        func_0x000107c27ba4(puVar6,*puVar8,puVar8[1]);
      }
    }
  }
  uVar7 = *(ulong *)(param_2 + 8);
joined_r0x00010adf8d4c:
  if ((uVar7 & 1) != 0) {
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



/* Entry: 10adf8f1c; end: 10adf9017;  */

void FUN_10adf8f1c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 != 0) {
    if ((*(byte *)(lVar4 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    puVar2 = (undefined8 *)(*(ulong *)(lVar4 + 0x10) ^ 2);
    puVar1 = puVar2;
    if (((ulong)puVar2 & 3) != 0) {
      puVar1 = (undefined8 *)0x0;
    }
    if ((puVar1 != (undefined8 *)0x0) && (*(char *)((long)puVar2 + 0x17) < '\0')) {
      __ZdlPv(*puVar2);
    }
    __ZdlPv(puVar1);
    __ZdlPv(lVar4);
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    if (*(int *)(param_1 + 0x30) == 2) {
      uVar3 = *(ulong *)(param_1 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      if ((uVar3 == 0) && (lVar4 = *(long *)(param_1 + 0x28), lVar4 != 0)) {
        if ((*(byte *)(lVar4 + 8) & 1) != 0) {
          func_0x0001053936ac();
        }
        puVar2 = (undefined8 *)(*(ulong *)(lVar4 + 0x10) ^ 2);
        puVar1 = puVar2;
        if (((ulong)puVar2 & 3) != 0) {
          puVar1 = (undefined8 *)0x0;
        }
        if ((puVar1 != (undefined8 *)0x0) && (*(char *)((long)puVar2 + 0x17) < '\0')) {
          __ZdlPv(*puVar2);
        }
        __ZdlPv(puVar1);
        __ZdlPv(lVar4);
      }
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}



/* Entry: 10adf9018; end: 10adf90f3;  */

long FUN_10adf9018(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_10adf8f1c(param_1);
  return param_1;
}



/* Entry: 10adf90f4; end: 10adf90ff;  */

undefined ** FUN_10adf90f4(void)

{
  return &PTR_DAT_110c76f18;
}



/* Entry: 10adf9100; end: 10adf91d7;  */

void FUN_10adf9100(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  long lVar5;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10adf3ee0(*(undefined8 *)(param_1 + 0x18));
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x30) == 2) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if ((uVar2 == 0) && (lVar5 = *(long *)(param_1 + 0x28), lVar5 != 0)) {
      if ((*(byte *)(lVar5 + 8) & 1) != 0) {
        func_0x0001053936ac();
      }
      puVar3 = (undefined8 *)(*(ulong *)(lVar5 + 0x10) ^ 2);
      puVar1 = puVar3;
      if (((ulong)puVar3 & 3) != 0) {
        puVar1 = (undefined8 *)0x0;
      }
      if ((puVar1 != (undefined8 *)0x0) && (*(char *)((long)puVar3 + 0x17) < '\0')) {
        __ZdlPv(*puVar3);
      }
      __ZdlPv(puVar1);
      __ZdlPv(lVar5);
    }
  }
  puVar4 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar4 & 1) == 0) {
    return;
  }
  if ((*puVar4 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar4 = (ulong *)((*puVar4 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar4 + 0x17) < '\0') {
    *(undefined1 *)*puVar4 = 0;
    puVar4[1] = 0;
    return;
  }
  *(byte *)puVar4 = 0;
  *(byte *)((long)puVar4 + 0x17) = 0;
  return;
}



/* Entry: 10adf91d8; end: 10adf9543;  */

/* WARNING: Type propagation algorithm not settling */

byte * FUN_10adf91d8(long param_1,byte *param_2,long *param_3)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  int iVar11;
  ulong uStack_48;
  
  uVar6 = *(uint *)(param_1 + 0x20);
  if (uVar6 != 0) {
    pbVar9 = (byte *)*param_3;
    if (param_2 < pbVar9) {
      *param_2 = 8;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          uVar6 = *(uint *)(param_1 + 0x20);
          pbVar9 = (byte *)((long)param_3 + 0x11);
          *(undefined1 *)(param_3 + 2) = 8;
          goto joined_r0x00010adf9414;
        }
        plVar3 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar3 + (long)((int)param_2 - (int)pbVar9));
        pbVar9 = (byte *)*param_3;
      } while (pbVar9 <= param_2);
      uVar6 = *(uint *)(param_1 + 0x20);
      *param_2 = 8;
    }
    pbVar9 = param_2 + 1;
joined_r0x00010adf9414:
    pbVar8 = pbVar9;
    uVar5 = uVar6;
    if (0x7f < uVar6) {
      do {
        pbVar9 = pbVar8 + 1;
        *pbVar8 = (byte)uVar5 | 0x80;
        uVar6 = uVar5 >> 7;
        uVar2 = uVar5 >> 0xe;
        pbVar8 = pbVar9;
        uVar5 = uVar6;
      } while (uVar2 != 0);
    }
    param_2 = pbVar9 + 1;
    *pbVar9 = (byte)uVar6;
  }
  if (*(int *)(param_1 + 0x30) == 2) {
    pbVar9 = *(byte **)(param_1 + 0x28);
    uVar6 = *(uint *)(pbVar9 + 0x1c);
    pbVar8 = (byte *)*param_3;
    if (pbVar8 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          pbVar8 = (byte *)((long)param_3 + 0x11);
          *param_2 = 0x12;
          goto joined_r0x00010adf9434;
        }
        plVar3 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar3 + (long)((int)param_2 - (int)pbVar8));
        pbVar8 = (byte *)*param_3;
      } while (pbVar8 <= param_2);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 0x12;
joined_r0x00010adf9434:
    if (0x7f < uVar6) {
      do {
        param_2 = pbVar8;
        pbVar8 = param_2 + 1;
        *param_2 = (byte)uVar6 | 0x80;
        uVar5 = uVar6 >> 0xe;
        uVar6 = uVar6 >> 7;
      } while (uVar5 != 0);
    }
    *pbVar8 = (byte)uVar6;
    (**(code **)(*(long *)pbVar9 + 0x38))(pbVar9,param_2 + 2,param_3);
    bVar1 = *(byte *)(param_1 + 0x10);
    param_2 = pbVar9;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x10);
  }
  if ((bVar1 & 1) == 0) {
    uVar7 = *(ulong *)(param_1 + 8);
  }
  else {
    pbVar9 = *(byte **)(param_1 + 0x18);
    uVar6 = *(uint *)(pbVar9 + 0x1c);
    pbVar8 = (byte *)*param_3;
    if (pbVar8 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = (byte *)(param_3 + 2);
          pbVar8 = (byte *)((long)param_3 + 0x11);
          *param_2 = 0x1a;
          goto joined_r0x00010adf946c;
        }
        plVar3 = param_3;
        func_0x000107c303dc();
        param_2 = (byte *)((long)plVar3 + (long)((int)param_2 - (int)pbVar8));
        pbVar8 = (byte *)*param_3;
      } while (pbVar8 <= param_2);
    }
    pbVar8 = param_2 + 1;
    *param_2 = 0x1a;
joined_r0x00010adf946c:
    if (0x7f < uVar6) {
      do {
        param_2 = pbVar8;
        pbVar8 = param_2 + 1;
        *param_2 = (byte)uVar6 | 0x80;
        uVar5 = uVar6 >> 0xe;
        uVar6 = uVar6 >> 7;
      } while (uVar5 != 0);
    }
    *pbVar8 = (byte)uVar6;
    (**(code **)(*(long *)pbVar9 + 0x38))(pbVar9,param_2 + 2,param_3);
    uVar7 = *(ulong *)(param_1 + 8);
    param_2 = pbVar9;
  }
  if ((uVar7 & 1) != 0) {
    uVar7 = uVar7 & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar4 = *(long *)(uVar7 + 8);
      uStack_48 = (ulong)*(uint *)(uVar7 + 0x10);
    }
    else {
      lVar4 = uVar7 + 8;
    }
    uVar6 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar6) {
      pbVar9 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar9 < (int)uVar6) {
        do {
          lVar10 = (long)(int)pbVar9;
          _memcpy(param_2,lVar4,lVar10);
          uVar6 = (int)uStack_48 - (int)pbVar9;
          uStack_48 = (ulong)uVar6;
          lVar4 = lVar4 + lVar10;
          param_2 = param_2 + lVar10;
          pbVar9 = (byte *)*param_3;
          do {
            if ((*(byte *)(param_3 + 7) & 1) != 0) {
              pbVar9 = pbVar9 + (0x10 - (long)(param_3 + 2));
              iVar11 = (int)pbVar9;
              param_2 = (byte *)(param_3 + 2);
              goto joined_r0x00010adf9520;
            }
            plVar3 = param_3;
            func_0x000107c303dc();
            param_2 = (byte *)((long)plVar3 + (long)((int)param_2 - (int)pbVar9));
            pbVar9 = (byte *)*param_3;
          } while (pbVar9 <= param_2);
          pbVar9 = pbVar9 + (0x10 - (long)param_2);
          iVar11 = (int)pbVar9;
joined_r0x00010adf9520:
        } while (iVar11 < (int)uVar6);
      }
      uStack_48._0_4_ = uVar6;
      _memcpy(param_2,lVar4,(long)(int)(uint)uStack_48);
      param_2 = param_2 + (int)(uint)uStack_48;
    }
    else {
      _memcpy(param_2,lVar4,uStack_48 & 0xffffffff);
      param_2 = param_2 + (int)uVar6;
    }
  }
  return param_2;
}



/* Entry: 10adf9544; end: 10adf973b;  */

long FUN_10adf9544(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x18);
    uVar3 = *(ulong *)(lVar2 + 0x10) & 0xfffffffffffffffc;
    lVar4 = (long)*(char *)(uVar3 + 0x17);
    if (lVar4 < 0) {
      if (*(long *)(uVar3 + 8) != 0) goto LAB_10adf956c;
LAB_10adf96e4:
      lVar4 = 0;
      iVar1 = *(int *)(lVar2 + 0x18);
    }
    else {
      if (lVar4 == 0) goto LAB_10adf96e4;
LAB_10adf956c:
      lVar5 = *(long *)(uVar3 + 8);
      if (-1 < *(char *)(uVar3 + 0x17)) {
        lVar5 = lVar4;
      }
      lVar4 = lVar5 + (ulong)((int)LZCOUNT((int)lVar5) * -9 + 0x160U >> 6) + 1;
      iVar1 = *(int *)(lVar2 + 0x18);
    }
    if (iVar1 != 0) {
      lVar4 = lVar4 + (ulong)((int)LZCOUNT((long)iVar1) * -9 + 0x280U >> 6) + 1;
    }
    if ((*(ulong *)(lVar2 + 8) & 1) != 0) {
      uVar3 = *(ulong *)(lVar2 + 8) & 0xfffffffffffffffe;
      lVar5 = (long)*(char *)(uVar3 + 0x1f);
      if (lVar5 < 0) {
        lVar5 = *(long *)(uVar3 + 0x10);
      }
      lVar4 = lVar5 + lVar4;
    }
    *(int *)(lVar2 + 0x1c) = (int)lVar4;
    lVar2 = lVar4 + (ulong)((int)LZCOUNT((int)lVar4) * -9 + 0x160U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar2 = lVar2 + (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x20)) * -9 + 0x1a0U >> 6);
  }
  if (*(int *)(param_1 + 0x30) != 2) {
    uVar3 = *(ulong *)(param_1 + 8);
    goto joined_r0x00010adf96b8;
  }
  lVar4 = *(long *)(param_1 + 0x28);
  uVar3 = *(ulong *)(lVar4 + 0x10) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    if (*(long *)(uVar3 + 8) != 0) goto LAB_10adf963c;
LAB_10adf96fc:
    lVar5 = 0;
    iVar1 = *(int *)(lVar4 + 0x18);
  }
  else {
    if (lVar5 == 0) goto LAB_10adf96fc;
LAB_10adf963c:
    lVar6 = *(long *)(uVar3 + 8);
    if (-1 < *(char *)(uVar3 + 0x17)) {
      lVar6 = lVar5;
    }
    lVar5 = lVar6 + (ulong)((int)LZCOUNT((int)lVar6) * -9 + 0x160U >> 6) + 1;
    iVar1 = *(int *)(lVar4 + 0x18);
  }
  if (iVar1 != 0) {
    lVar5 = lVar5 + (ulong)((int)LZCOUNT((long)iVar1) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(lVar4 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(lVar4 + 8) & 0xfffffffffffffffe;
    lVar6 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)(uVar3 + 0x10);
    }
    lVar5 = lVar6 + lVar5;
  }
  *(int *)(lVar4 + 0x1c) = (int)lVar5;
  lVar2 = lVar2 + lVar5 + (ulong)((int)LZCOUNT((int)lVar5) * -9 + 0x160U >> 6) + 1;
  uVar3 = *(ulong *)(param_1 + 8);
joined_r0x00010adf96b8:
  if ((uVar3 & 1) == 0) {
    *(int *)(param_1 + 0x14) = (int)lVar2;
    return lVar2;
  }
  lVar4 = (long)*(char *)((uVar3 & 0xfffffffffffffffe) + 0x1f);
  if (lVar4 < 0) {
    lVar4 = *(long *)((uVar3 & 0xfffffffffffffffe) + 0x10);
  }
  *(int *)(param_1 + 0x14) = (int)(lVar4 + lVar2);
  return lVar4 + lVar2;
}



/* Entry: 10adf973c; end: 10adf9c0b;  */

/* WARNING: Possible PIC construction at 0x00010adf9968: Changing call to branch */

void FUN_10adf973c(long param_1,long param_2)

{
  undefined1 *puVar1;
  ulong *puVar2;
  int iVar3;
  char cVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long *plVar8;
  ulong *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong *unaff_x19;
  ulong *puVar16;
  long unaff_x20;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  uint uVar21;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined1 auStack_70 [8];
  ulong *puStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar16 = (ulong *)(param_1 + 8);
  uVar17 = *puVar16;
  if ((uVar17 & 1) == 0) {
    uVar21 = *(uint *)(param_2 + 0x10);
    if ((uVar21 & 1) == 0) goto LAB_10adf996c;
LAB_10adf9778:
    lVar20 = *(long *)(param_1 + 0x18);
    lVar18 = *(long *)(param_2 + 0x18);
    if (lVar20 == 0) {
      uVar15 = uVar17;
      FUN_10adfbd58(uVar17,lVar18);
      *(ulong *)(param_1 + 0x18) = uVar15;
      goto LAB_10adf996c;
    }
    puVar12 = (ulong *)(*(ulong *)(lVar18 + 0x10) & 0xfffffffffffffffc);
    cVar4 = *(char *)((long)puVar12 + 0x17);
    puVar14 = (ulong *)(long)cVar4;
    if ((long)puVar14 < 0) {
      if (puVar12[1] != 0) goto LAB_10adf97b8;
LAB_10adf9948:
      if (*(int *)(lVar18 + 0x18) != 0) {
        *(int *)(lVar20 + 0x18) = *(int *)(lVar18 + 0x18);
      }
      if ((*(ulong *)(lVar18 + 8) & 1) != 0) {
        unaff_x30 = 0x10adf996c;
        register0x00000008 = (BADSPACEBASE *)auStack_70;
        puVar12 = (ulong *)(lVar20 + 8);
        unaff_x19 = puVar16;
        unaff_x20 = param_2;
        unaff_x29 = puVar1;
        goto code_r0x00010b4d197c;
      }
      goto LAB_10adf996c;
    }
    if (puVar14 == (ulong *)0x0) goto LAB_10adf9948;
LAB_10adf97b8:
    plVar8 = *(long **)(lVar20 + 8);
    if (((ulong)plVar8 & 1) == 0) {
      uVar15 = *(ulong *)(lVar20 + 0x10);
    }
    else {
      plVar8 = *(long **)((ulong)plVar8 & 0xfffffffffffffffe);
      uVar15 = *(ulong *)(lVar20 + 0x10);
    }
    if ((uVar15 & 3) != 0) {
      puVar9 = (ulong *)(uVar15 & 0xfffffffffffffffc);
      if (puVar9 != puVar12) {
        if (*(char *)((long)puVar9 + 0x17) < '\0') {
          puVar2 = (ulong *)puVar12[1];
          puVar5 = (ulong *)*puVar12;
          if (-1 < cVar4) {
            puVar2 = puVar14;
            puVar5 = puVar12;
          }
          func_0x000107c27ba0(puVar9,puVar5,puVar2);
        }
        else if (cVar4 < '\0') {
          func_0x000107c27ba4(puVar9,*puVar12,puVar12[1]);
        }
        else {
          uVar23 = puVar12[1];
          uVar15 = *puVar12;
          puVar9[2] = puVar12[2];
          puVar9[1] = uVar23;
          *puVar9 = uVar15;
        }
      }
      goto LAB_10adf9948;
    }
    puVar9 = (ulong *)puVar12[1];
    puStack_68 = (ulong *)*puVar12;
    if (-1 < cVar4) {
      puVar9 = puVar14;
      puStack_68 = puVar12;
    }
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x18;
      __Znwm();
      if ((ulong *)0x7ffffffffffffff6 < puVar9) goto LAB_10adf9bf0;
      if ((ulong *)0x16 < puVar9) {
        plVar19 = (long *)0x19;
        if (((ulong)puVar9 | 7) != 0x17) {
          plVar19 = (long *)(((ulong)puVar9 | 7) + 1);
        }
        plVar10 = plVar19;
        __Znwm();
        *plVar8 = (long)plVar10;
        uVar15 = 2;
        goto LAB_10adf98fc;
      }
      *(char *)((long)plVar8 + 0x17) = (char)puVar9;
      uVar15 = 2;
LAB_10adf98ac:
      plVar10 = plVar8;
      if (puVar9 != (ulong *)0x0) {
LAB_10adf990c:
        puVar12 = puStack_68;
        puStack_68 = puVar9;
        _memmove(plVar10,puVar12,puVar9);
        puVar9 = puStack_68;
      }
      *(undefined1 *)((long)plVar10 + (long)puVar9) = 0;
      *(ulong *)(lVar20 + 0x10) = uVar15 | (ulong)plVar8;
      goto LAB_10adf9948;
    }
    func_0x00010b4d80a4();
    if (puVar9 < (ulong *)0x7ffffffffffffff7) {
      if (puVar9 < (ulong *)0x17) {
        *(char *)((long)plVar8 + 0x17) = (char)puVar9;
        uVar15 = 3;
        goto LAB_10adf98ac;
      }
      plVar19 = (long *)0x19;
      if (((ulong)puVar9 | 7) != 0x17) {
        plVar19 = (long *)(((ulong)puVar9 | 7) + 1);
      }
      plVar10 = plVar19;
      __Znwm();
      *plVar8 = (long)plVar10;
      uVar15 = 3;
LAB_10adf98fc:
      plVar8[1] = (long)puVar9;
      plVar8[2] = (ulong)plVar19 | 0x8000000000000000;
      goto LAB_10adf990c;
    }
LAB_10adf9bec:
    func_0x000104bd47d4();
LAB_10adf9bf0:
    func_0x000104bd47d4();
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10adf9bf8);
    (*pcVar7)();
  }
  uVar17 = *(ulong *)(uVar17 & 0xfffffffffffffffe);
  uVar21 = *(uint *)(param_2 + 0x10);
  if ((uVar21 & 1) != 0) goto LAB_10adf9778;
LAB_10adf996c:
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar21;
  iVar3 = *(int *)(param_2 + 0x30);
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x30) == iVar3) {
      if (iVar3 == 2) {
        lVar18 = *(long *)(param_1 + 0x28);
        lVar20 = *(long *)(param_2 + 0x28);
        puVar13 = (undefined8 *)(*(ulong *)(lVar20 + 0x10) & 0xfffffffffffffffc);
        cVar4 = *(char *)((long)puVar13 + 0x17);
        uVar15 = (ulong)cVar4;
        uVar17 = uVar15;
        if ((long)uVar15 < 0) {
          uVar17 = puVar13[1];
        }
        if (uVar17 != 0) {
          puVar12 = *(ulong **)(lVar18 + 8);
          if (((ulong)puVar12 & 1) == 0) {
            uVar17 = *(ulong *)(lVar18 + 0x10);
          }
          else {
            puVar12 = *(ulong **)((ulong)puVar12 & 0xfffffffffffffffe);
            uVar17 = *(ulong *)(lVar18 + 0x10);
          }
          if ((uVar17 & 3) == 0) {
            uVar17 = puVar13[1];
            puVar11 = (undefined8 *)*puVar13;
            if (-1 < cVar4) {
              uVar17 = uVar15;
              puVar11 = puVar13;
            }
            if (puVar12 == (ulong *)0x0) {
              func_0x000107c39894(puVar11,uVar17);
              *(undefined8 **)(lVar18 + 0x10) = puVar11;
            }
            else {
              func_0x00010b4d80a4();
              if (0x7ffffffffffffff6 < uVar17) goto LAB_10adf9bec;
              if (uVar17 < 0x17) {
                *(char *)((long)puVar12 + 0x17) = (char)uVar17;
                puVar9 = puVar12;
                if (uVar17 != 0) goto LAB_10adf9b58;
              }
              else {
                puVar14 = (ulong *)0x19;
                if ((uVar17 | 7) != 0x17) {
                  puVar14 = (ulong *)((uVar17 | 7) + 1);
                }
                puVar9 = puVar14;
                __Znwm();
                puVar12[1] = uVar17;
                puVar12[2] = (ulong)puVar14 | 0x8000000000000000;
                *puVar12 = (ulong)puVar9;
LAB_10adf9b58:
                _memmove(puVar9,puVar11,uVar17);
              }
              *(undefined1 *)((long)puVar9 + uVar17) = 0;
              *(ulong *)(lVar18 + 0x10) = (ulong)puVar12 | 3;
            }
          }
          else {
            puVar11 = (undefined8 *)(uVar17 & 0xfffffffffffffffc);
            if (puVar11 != puVar13) {
              if (*(char *)((long)puVar11 + 0x17) < '\0') {
                uVar17 = puVar13[1];
                puVar6 = (undefined8 *)*puVar13;
                if (-1 < cVar4) {
                  uVar17 = uVar15;
                  puVar6 = puVar13;
                }
                func_0x000107c27ba0(puVar11,puVar6,uVar17);
              }
              else if (cVar4 < '\0') {
                func_0x000107c27ba4(puVar11,*puVar13,puVar13[1]);
              }
              else {
                uVar24 = puVar13[1];
                uVar22 = *puVar13;
                puVar11[2] = puVar13[2];
                puVar11[1] = uVar24;
                *puVar11 = uVar22;
              }
            }
          }
        }
        if (*(int *)(lVar20 + 0x18) != 0) {
          *(int *)(lVar18 + 0x18) = *(int *)(lVar20 + 0x18);
        }
        if ((*(ulong *)(lVar20 + 8) & 1) != 0) {
          func_0x00010b4d197c(lVar18 + 8,(*(ulong *)(lVar20 + 8) & 0xfffffffffffffffe) + 8);
        }
      }
    }
    else {
      if (*(int *)(param_1 + 0x30) == 2) {
        uVar15 = *puVar16;
        if ((uVar15 & 1) != 0) {
          uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
        }
        if ((uVar15 == 0) && (lVar18 = *(long *)(param_1 + 0x28), lVar18 != 0)) {
          if ((*(byte *)(lVar18 + 8) & 1) != 0) {
            func_0x0001053936ac();
          }
          puVar11 = (undefined8 *)(*(ulong *)(lVar18 + 0x10) ^ 2);
          puVar13 = puVar11;
          if (((ulong)puVar11 & 3) != 0) {
            puVar13 = (undefined8 *)0x0;
          }
          if ((puVar13 != (undefined8 *)0x0) && (*(char *)((long)puVar11 + 0x17) < '\0')) {
            __ZdlPv(*puVar11);
          }
          __ZdlPv(puVar13);
          __ZdlPv(lVar18);
        }
      }
      *(int *)(param_1 + 0x30) = iVar3;
      if (iVar3 == 2) {
        FUN_10adfc764(uVar17,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar17;
      }
    }
  }
  puVar12 = puVar16;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
code_r0x00010b4d197c:
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if ((*puVar12 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10adf9c0c; end: 10adf9c7f;  */

void FUN_10adf9c0c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x10) ^ 2);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 3) != 0) {
    puVar1 = (undefined8 *)0x0;
  }
  if ((puVar1 == (undefined8 *)0x0) || (-1 < *(char *)((long)puVar2 + 0x17))) {
    __ZdlPv();
  }
  else {
    __ZdlPv(*puVar2);
    __ZdlPv(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10adf9c80; end: 10adf9cd7;  */

undefined ** FUN_10adf9c80(void)

{
  return &PTR_DAT_110c76f58;
}



/* Entry: 10adf9cd8; end: 10adfa053;  */

/* WARNING: Removing unreachable block (ram,0x00010adf9ed4) */
/* WARNING: Removing unreachable block (ram,0x00010adf9edc) */
/* WARNING: Removing unreachable block (ram,0x00010adf9ecc) */

byte * FUN_10adf9cd8(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  char cVar4;
  ulong *puVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong *puVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  
  uVar14 = *(uint *)(param_1 + 0x18);
  if (uVar14 != 0) {
    pbVar11 = *(byte **)param_3;
    if (param_2 < pbVar11) {
      *param_2 = 8;
    }
    else {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar10 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar10 + ((int)param_2 - (int)pbVar11);
        pbVar11 = *(byte **)param_3;
      } while (pbVar11 <= param_2);
      uVar14 = *(uint *)(param_1 + 0x18);
      *param_2 = 8;
    }
    uVar15 = (ulong)(int)uVar14;
    pbVar11 = param_2 + 1;
    uVar16 = uVar15;
    pbVar10 = pbVar11;
    if (0x7f < uVar14) {
      do {
        pbVar11 = pbVar10 + 1;
        *pbVar10 = (byte)uVar16 | 0x80;
        uVar15 = uVar16 >> 7;
        uVar8 = uVar16 >> 0xe;
        uVar16 = uVar15;
        pbVar10 = pbVar11;
      } while (uVar8 != 0);
    }
    param_2 = pbVar11 + 1;
    *pbVar11 = (byte)uVar15;
  }
  puVar12 = (ulong *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  cVar4 = *(char *)((long)puVar12 + 0x17);
  uVar15 = (ulong)cVar4;
  if ((long)uVar15 < 0) {
    if (puVar12[1] != 0) {
      puVar3 = (ulong *)*puVar12;
      uVar16 = puVar12[1];
      goto joined_r0x00010adf9d60;
    }
  }
  else {
    puVar3 = puVar12;
    uVar16 = uVar15;
    if ((int)cVar4 != 0) {
joined_r0x00010adf9d60:
      if (uVar16 << 0x20 == 0) {
LAB_10adf9e20:
        if (((uint)(int)cVar4 >> 7 & 1) != 0) goto LAB_10adf9e58;
LAB_10adf9e24:
        uVar15 = uVar15 & 0xff;
LAB_10adf9e64:
        if ((long)uVar15 <= (*(long *)param_3 - (long)param_2) + 0xe) {
          *param_2 = 0x12;
          param_2[1] = (byte)uVar15;
          puVar3 = (ulong *)*puVar12;
          if (-1 < *(char *)((long)puVar12 + 0x17)) {
            puVar3 = puVar12;
          }
          _memcpy(param_2 + 2,puVar3,uVar15);
          param_2 = param_2 + 2 + uVar15;
          goto LAB_10adf9ea8;
        }
      }
      else {
        lVar7 = (long)(uVar16 << 0x20) >> 0x20;
        puVar2 = (ulong *)((long)puVar3 + lVar7);
        puVar9 = puVar3;
        for (; (7 < lVar7 && ((*puVar3 & 0x8080808080808080) == 0)); puVar3 = puVar3 + 1) {
          puVar9 = puVar9 + 1;
          lVar7 = lVar7 + -8;
        }
        puVar5 = puVar3;
        if (puVar3 < puVar2) {
          uVar8 = (long)puVar2 - (long)puVar9;
          puVar9 = puVar3;
          for (uVar16 = uVar8 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            puVar5 = puVar9;
            if ((char)*puVar9 < '\0') goto LAB_10adf9e14;
            puVar9 = (ulong *)((long)puVar9 + 1);
          }
          puVar3 = (ulong *)((long)puVar3 + uVar8);
          puVar5 = puVar3;
          if (2 < uVar8 - 1) {
            puVar9 = (ulong *)((long)puVar9 + 3);
            do {
              puVar5 = puVar9;
              if ((char)*puVar9 < '\0') break;
              puVar1 = (ulong *)((long)puVar9 + 1);
              puVar9 = (ulong *)((long)puVar9 + 4);
              puVar5 = puVar3;
            } while (puVar1 != puVar3);
          }
        }
LAB_10adf9e14:
        func_0x000107c34ffc(puVar5,puVar2,0);
        if (puVar5 != (ulong *)0x0) goto LAB_10adf9e20;
        func_0x00010b4d3bf8(&UNK_10f7741f2,0,&UNK_10f6af25f,0x1c,&UNK_10f774276);
        uVar15 = (ulong)*(byte *)((long)puVar12 + 0x17);
        if (-1 < (char)*(byte *)((long)puVar12 + 0x17)) goto LAB_10adf9e24;
LAB_10adf9e58:
        uVar15 = puVar12[1];
        if ((long)uVar15 < 0x80) goto LAB_10adf9e64;
      }
      pbVar11 = param_3;
      func_0x00010b4d50d0(param_3,2,puVar12,param_2);
      uVar15 = *(ulong *)(param_1 + 8);
      goto joined_r0x00010adf9eac;
    }
  }
LAB_10adf9ea8:
  uVar15 = *(ulong *)(param_1 + 8);
  pbVar11 = param_2;
joined_r0x00010adf9eac:
  if ((uVar15 & 1) != 0) {
    uVar15 = uVar15 & 0xfffffffffffffffe;
    uVar16 = (ulong)*(char *)(uVar15 + 0x1f);
    if ((long)uVar16 < 0) {
      lVar7 = *(long *)(uVar15 + 8);
      uVar16 = (ulong)*(uint *)(uVar15 + 0x10);
    }
    else {
      lVar7 = uVar15 + 8;
    }
    uVar14 = (uint)uVar16;
    if (*(long *)param_3 - (long)pbVar11 < (long)(int)uVar14) {
      pbVar10 = (byte *)((*(long *)param_3 - (long)pbVar11) + 0x10);
      if ((int)pbVar10 < (int)uVar14) {
        do {
          lVar13 = (long)(int)pbVar10;
          _memcpy(pbVar11,lVar7,lVar13);
          uVar14 = (int)uVar16 - (int)pbVar10;
          uVar16 = (ulong)uVar14;
          lVar7 = lVar7 + lVar13;
          pbVar11 = pbVar11 + lVar13;
          pbVar10 = *(byte **)param_3;
          do {
            if ((param_3[0x38] & 1) != 0) {
              pbVar10 = pbVar10 + (0x10 - (long)(param_3 + 0x10));
              iVar17 = (int)pbVar10;
              pbVar11 = param_3 + 0x10;
              goto joined_r0x00010adfa034;
            }
            pbVar6 = param_3;
            func_0x000107c303dc();
            pbVar11 = pbVar6 + ((int)pbVar11 - (int)pbVar10);
            pbVar10 = *(byte **)param_3;
          } while (pbVar10 <= pbVar11);
          pbVar10 = pbVar10 + (0x10 - (long)pbVar11);
          iVar17 = (int)pbVar10;
joined_r0x00010adfa034:
        } while (iVar17 < (int)uVar14);
      }
      _memcpy(pbVar11,lVar7,(long)(int)uVar14);
      pbVar11 = pbVar11 + (int)uVar14;
    }
    else {
      _memcpy(pbVar11,lVar7,uVar16 & 0xffffffff);
      pbVar11 = pbVar11 + (int)uVar14;
    }
  }
  return pbVar11;
}



/* Entry: 10adfa054; end: 10adfa0ff;  */

long FUN_10adfa054(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  lVar3 = lVar4;
  if (lVar4 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 == 0) {
    lVar3 = 0;
    iVar1 = *(int *)(param_1 + 0x18);
  }
  else {
    lVar3 = *(long *)(uVar2 + 8);
    if (-1 < *(char *)(uVar2 + 0x17)) {
      lVar3 = lVar4;
    }
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
    iVar1 = *(int *)(param_1 + 0x18);
  }
  if (iVar1 != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)iVar1) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x1c) = (int)lVar3;
    return lVar3;
  }
  uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  lVar4 = (long)*(char *)(uVar2 + 0x1f);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 0x10);
  }
  *(int *)(param_1 + 0x1c) = (int)(lVar4 + lVar3);
  return lVar4 + lVar3;
}



/* Entry: 10adfa100; end: 10adfa34b;  */

void FUN_10adfa100(long param_1,long param_2)

{
  char cVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar8 = (undefined8 *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
  cVar1 = *(char *)((long)puVar8 + 0x17);
  uVar9 = (ulong)cVar1;
  uVar7 = uVar9;
  if ((long)uVar9 < 0) {
    uVar7 = puVar8[1];
  }
  if (uVar7 == 0) goto LAB_10adfa2dc;
  plVar5 = *(long **)(param_1 + 8);
  if (((ulong)plVar5 & 1) == 0) {
    uVar7 = *(ulong *)(param_1 + 0x10);
  }
  else {
    plVar5 = *(long **)((ulong)plVar5 & 0xfffffffffffffffe);
    uVar7 = *(ulong *)(param_1 + 0x10);
  }
  if ((uVar7 & 3) != 0) {
    puVar6 = (undefined8 *)(uVar7 & 0xfffffffffffffffc);
    if (puVar6 != puVar8) {
      if (*(char *)((long)puVar6 + 0x17) < '\0') {
        uVar7 = puVar8[1];
        puVar2 = (undefined8 *)*puVar8;
        if (-1 < cVar1) {
          uVar7 = uVar9;
          puVar2 = puVar8;
        }
        func_0x000107c27ba0(puVar6,puVar2,uVar7);
      }
      else if (cVar1 < '\0') {
        func_0x000107c27ba4(puVar6,*puVar8,puVar8[1]);
      }
      else {
        uVar12 = puVar8[1];
        uVar11 = *puVar8;
        puVar6[2] = puVar8[2];
        puVar6[1] = uVar12;
        *puVar6 = uVar11;
      }
    }
    goto LAB_10adfa2dc;
  }
  uVar7 = puVar8[1];
  puVar6 = (undefined8 *)*puVar8;
  if (-1 < cVar1) {
    uVar7 = uVar9;
    puVar6 = puVar8;
  }
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)0x18;
    __Znwm();
    if (0x7ffffffffffffff6 < uVar7) goto LAB_10adfa330;
    if (0x16 < uVar7) {
      plVar10 = (long *)0x19;
      if ((uVar7 | 7) != 0x17) {
        plVar10 = (long *)((uVar7 | 7) + 1);
      }
      plVar4 = plVar10;
      __Znwm();
      *plVar5 = (long)plVar4;
      uVar9 = 2;
      goto LAB_10adfa2a8;
    }
    *(char *)((long)plVar5 + 0x17) = (char)uVar7;
    uVar9 = 2;
    plVar4 = plVar5;
    plVar10 = plVar5;
    if (uVar7 != 0) goto LAB_10adfa2b8;
  }
  else {
    func_0x00010b4d80a4();
    if (0x7ffffffffffffff6 < uVar7) {
      func_0x000104bd47d4();
LAB_10adfa330:
      func_0x000104bd47d4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10adfa338);
      (*pcVar3)();
    }
    if (uVar7 < 0x17) {
      *(char *)((long)plVar5 + 0x17) = (char)uVar7;
      uVar9 = 3;
      plVar4 = plVar5;
      plVar10 = plVar5;
      if (uVar7 == 0) goto LAB_10adfa2c8;
    }
    else {
      plVar10 = (long *)0x19;
      if ((uVar7 | 7) != 0x17) {
        plVar10 = (long *)((uVar7 | 7) + 1);
      }
      plVar4 = plVar10;
      __Znwm();
      *plVar5 = (long)plVar4;
      uVar9 = 3;
LAB_10adfa2a8:
      plVar5[1] = uVar7;
      plVar5[2] = (ulong)plVar10 | 0x8000000000000000;
      plVar10 = plVar5;
    }
LAB_10adfa2b8:
    _memmove(plVar4,puVar6,uVar7);
    plVar5 = plVar4;
  }
LAB_10adfa2c8:
  *(undefined1 *)((long)plVar5 + uVar7) = 0;
  *(ulong *)(param_1 + 0x10) = uVar9 | (ulong)plVar10;
LAB_10adfa2dc:
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
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



/* Entry: 10adfa34c; end: 10adfa41b;  */

void FUN_10adfa34c(undefined8 param_1,long *param_2)

{
  undefined **ppuVar1;
  long *plVar2;
  long *plVar3;
  long *plStack_28;
  
  if (param_2 == (long *)0x0) {
    plVar2 = (long *)0x28;
    __Znwm();
    plStack_28 = plVar2;
  }
  else {
    ppuVar1 = &PTR___tlv_bootstrap_11340dac8;
    (*(code *)PTR___tlv_bootstrap_11340dac8)();
    if (ppuVar1[1] == (undefined *)*param_2) {
      plVar3 = (long *)ppuVar1[2];
      plVar2 = plVar3;
      func_0x00010b4d755c(plVar3,0x28,&plStack_28);
      if ((int)plVar2 == 0) {
        func_0x00010b4d7498(plVar3,0x28);
        plStack_28 = plVar3;
      }
    }
    else {
      plVar2 = param_2;
      func_0x00010b4d7124(param_2,0x28);
      plStack_28 = plVar2;
    }
  }
  *plStack_28 = (long)&PTR_FUN_110c760e0;
  plStack_28[1] = (long)param_2;
  *(undefined4 *)(plStack_28 + 4) = 0;
  plStack_28[2] = (long)&DAT_11383d918;
  plStack_28[3] = 0;
  return;
}



/* Entry: 10adfa41c; end: 10adfa5cb;  */

ulong * FUN_10adfa41c(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  
  uVar1 = *param_1;
  if (uVar1 == 0) {
    return param_1;
  }
  if (param_1[2] != 0) goto LAB_10adfa494;
  if ((uVar1 & 1) == 0) {
    uVar2 = 1;
    puVar3 = param_1;
LAB_10adfa46c:
    do {
      if ((long *)*puVar3 != (long *)0x0) {
        (**(code **)(*(long *)*puVar3 + 8))();
      }
      uVar2 = uVar2 - 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 != 0);
    uVar1 = *param_1;
    if ((uVar1 & 1) == 0) goto LAB_10adfa494;
  }
  else {
    uVar2 = (ulong)*(uint *)(uVar1 - 1);
    if (0 < (int)*(uint *)(uVar1 - 1)) {
      puVar3 = (ulong *)(uVar1 + 7);
      goto LAB_10adfa46c;
    }
  }
  __ZdlPv(uVar1 - 1);
LAB_10adfa494:
  *param_1 = 0;
  return param_1;
}



/* Entry: 10adfa5cc; end: 10adfb1c3;  */

void FUN_10adfa5cc(long *param_1)

{
  undefined **ppuVar1;
  long *plVar2;
  long *plVar3;
  long *plStack_28;
  
  if (param_1 == (long *)0x0) {
    plVar2 = (long *)0x28;
    __Znwm();
    plStack_28 = plVar2;
  }
  else {
    ppuVar1 = &PTR___tlv_bootstrap_11340dac8;
    (*(code *)PTR___tlv_bootstrap_11340dac8)();
    if (ppuVar1[1] == (undefined *)*param_1) {
      plVar3 = (long *)ppuVar1[2];
      plVar2 = plVar3;
      func_0x00010b4d755c(plVar3,0x28,&plStack_28);
      if ((int)plVar2 == 0) {
        func_0x00010b4d7498(plVar3,0x28);
        plStack_28 = plVar3;
      }
    }
    else {
      plVar2 = param_1;
      func_0x00010b4d7124(param_1,0x28);
      plStack_28 = plVar2;
    }
  }
  *plStack_28 = (long)&PTR_FUN_110c760e0;
  plStack_28[1] = (long)param_1;
  *(undefined4 *)(plStack_28 + 4) = 0;
  plStack_28[2] = (long)&DAT_11383d918;
  plStack_28[3] = 0;
  return;
}



/* Entry: 10adfb1c4; end: 10adfb9a3;  */

long * FUN_10adfb1c4(long *param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plStack_68;
  
  if (param_1 == (long *)0x0) {
    plVar4 = (long *)0xa8;
    __Znwm();
  }
  else {
    ppuVar3 = &PTR___tlv_bootstrap_11340dac8;
    (*(code *)PTR___tlv_bootstrap_11340dac8)();
    if (ppuVar3[1] == (undefined *)*param_1) {
      plVar9 = (long *)ppuVar3[2];
      plVar6 = plVar9;
      func_0x00010b4d755c(plVar9,0xa8,&plStack_68);
      plVar4 = plStack_68;
      if ((int)plVar6 == 0) {
        func_0x00010b4d7498(plVar9,0xa8);
        plVar4 = plVar9;
      }
    }
    else {
      plVar4 = param_1;
      func_0x00010b4d7124(param_1,0xa8);
    }
  }
  plVar4[1] = (long)param_1;
  *plVar4 = (long)&PTR_FUN_110c767c0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(plVar4 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  plVar4[2] = 0;
  plVar4[3] = 0;
  plVar4[4] = (long)param_1;
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(plVar4 + 2,param_2 + 0x10);
  }
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = (long)param_1;
  if (*(int *)(param_2 + 0x30) != 0) {
    func_0x000107c303c4(plVar4 + 5,param_2 + 0x28);
  }
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = (long)param_1;
  if (*(int *)(param_2 + 0x48) != 0) {
    func_0x000107c303c4(plVar4 + 8,param_2 + 0x40);
  }
  uVar7 = *(ulong *)(param_2 + 0x58);
  if ((uVar7 & 3) != 0) {
    puVar8 = (undefined8 *)(uVar7 & 0xfffffffffffffffc);
    bVar1 = *(byte *)((long)puVar8 + 0x17);
    uVar7 = (ulong)bVar1;
    if (param_1 == (long *)0x0) {
      if ((char)bVar1 < '\0') {
        uVar7 = puVar8[1];
        puVar8 = (undefined8 *)*puVar8;
      }
      plVar6 = (long *)0x18;
      __Znwm();
      if (0x7ffffffffffffff6 < uVar7) {
        func_0x000104bd47d4();
        goto LAB_10adfb920;
      }
      if (uVar7 < 0x17) {
        *(char *)((long)plVar6 + 0x17) = (char)uVar7;
        plVar5 = plVar6;
        if (uVar7 != 0) goto LAB_10adfb3d4;
      }
      else {
        plVar9 = (long *)0x19;
        if ((uVar7 | 7) != 0x17) {
          plVar9 = (long *)((uVar7 | 7) + 1);
        }
        plVar5 = plVar9;
        __Znwm();
        plVar6[1] = uVar7;
        plVar6[2] = (ulong)plVar9 | 0x8000000000000000;
        *plVar6 = (long)plVar5;
LAB_10adfb3d4:
        _memmove(plVar5,puVar8,uVar7);
      }
      *(undefined1 *)((long)plVar5 + uVar7) = 0;
      uVar7 = 2;
LAB_10adfb3ec:
      uVar7 = uVar7 | (ulong)plVar6;
      goto LAB_10adfb3f0;
    }
    if ((char)bVar1 < '\0') {
      uVar7 = puVar8[1];
      puVar8 = (undefined8 *)*puVar8;
    }
    plVar6 = param_1;
    func_0x00010b4d80a4();
    if (uVar7 < 0x7ffffffffffffff7) {
      if (uVar7 < 0x17) {
        *(char *)((long)plVar6 + 0x17) = (char)uVar7;
        plVar5 = plVar6;
        if (uVar7 != 0) goto LAB_10adfb358;
      }
      else {
        plVar9 = (long *)0x19;
        if ((uVar7 | 7) != 0x17) {
          plVar9 = (long *)((uVar7 | 7) + 1);
        }
        plVar5 = plVar9;
        __Znwm();
        plVar6[1] = uVar7;
        plVar6[2] = (ulong)plVar9 | 0x8000000000000000;
        *plVar6 = (long)plVar5;
LAB_10adfb358:
        _memmove(plVar5,puVar8,uVar7);
      }
      *(undefined1 *)((long)plVar5 + uVar7) = 0;
      uVar7 = 3;
      goto LAB_10adfb3ec;
    }
LAB_10adfb8f4:
    func_0x000104bd47d4();
LAB_10adfb920:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10adfb924);
    (*pcVar2)();
  }
LAB_10adfb3f0:
  plVar4[0xb] = uVar7;
  uVar7 = *(ulong *)(param_2 + 0x60);
  if ((uVar7 & 3) != 0) {
    puVar8 = (undefined8 *)(uVar7 & 0xfffffffffffffffc);
    bVar1 = *(byte *)((long)puVar8 + 0x17);
    uVar7 = (ulong)bVar1;
    if (param_1 == (long *)0x0) {
      if ((char)bVar1 < '\0') {
        uVar7 = puVar8[1];
        puVar8 = (undefined8 *)*puVar8;
      }
      plVar6 = (long *)0x18;
      __Znwm();
      if (0x7ffffffffffffff6 < uVar7) {
        func_0x000104bd47d4();
        goto LAB_10adfb920;
      }
      if (uVar7 < 0x17) {
        *(char *)((long)plVar6 + 0x17) = (char)uVar7;
        plVar5 = plVar6;
        if (uVar7 != 0) goto LAB_10adfb500;
      }
      else {
        plVar9 = (long *)0x19;
        if ((uVar7 | 7) != 0x17) {
          plVar9 = (long *)((uVar7 | 7) + 1);
        }
        plVar5 = plVar9;
        __Znwm();
        plVar6[1] = uVar7;
        plVar6[2] = (ulong)plVar9 | 0x8000000000000000;
        *plVar6 = (long)plVar5;
LAB_10adfb500:
        _memmove(plVar5,puVar8,uVar7);
      }
      *(undefined1 *)((long)plVar5 + uVar7) = 0;
      uVar7 = 2;
    }
    else {
      if ((char)bVar1 < '\0') {
        uVar7 = puVar8[1];
        puVar8 = (undefined8 *)*puVar8;
      }
      plVar6 = param_1;
      func_0x00010b4d80a4();
      if (0x7ffffffffffffff6 < uVar7) goto LAB_10adfb8f4;
      if (uVar7 < 0x17) {
        *(char *)((long)plVar6 + 0x17) = (char)uVar7;
        plVar5 = plVar6;
        if (uVar7 != 0) goto LAB_10adfb484;
      }
      else {
        plVar9 = (long *)0x19;
        if ((uVar7 | 7) != 0x17) {
          plVar9 = (long *)((uVar7 | 7) + 1);
        }
        plVar5 = plVar9;
        __Znwm();
        plVar6[1] = uVar7;
        plVar6[2] = (ulong)plVar9 | 0x8000000000000000;
        *plVar6 = (long)plVar5;
LAB_10adfb484:
        _memmove(plVar5,puVar8,uVar7);
      }
      *(undefined1 *)((long)plVar5 + uVar7) = 0;
      uVar7 = 3;
    }
    uVar7 = uVar7 | (ulong)plVar6;
  }
  plVar4[0xc] = uVar7;
  uVar7 = *(ulong *)(param_2 + 0x68);
  if ((uVar7 & 3) != 0) {
    puVar8 = (undefined8 *)(uVar7 & 0xfffffffffffffffc);
    bVar1 = *(byte *)((long)puVar8 + 0x17);
    uVar7 = (ulong)bVar1;
    if (param_1 == (long *)0x0) {
      if ((char)bVar1 < '\0') {
        uVar7 = puVar8[1];
        puVar8 = (undefined8 *)*puVar8;
      }
      plVar6 = (long *)0x18;
      __Znwm();
      if (0x7ffffffffffffff6 < uVar7) {
        func_0x000104bd47d4();
        goto LAB_10adfb920;
      }
      if (uVar7 < 0x17) {
        *(char *)((long)plVar6 + 0x17) = (char)uVar7;
        plVar5 = plVar6;
        if (uVar7 != 0) goto LAB_10adfb62c;
      }
      else {
        plVar9 = (long *)0x19;
        if ((uVar7 | 7) != 0x17) {
          plVar9 = (long *)((uVar7 | 7) + 1);
        }
        plVar5 = plVar9;
        __Znwm();
        plVar6[1] = uVar7;
        plVar6[2] = (ulong)plVar9 | 0x8000000000000000;
        *plVar6 = (long)plVar5;
LAB_10adfb62c:
        _memmove(plVar5,puVar8,uVar7);
      }
      *(undefined1 *)((long)plVar5 + uVar7) = 0;
      uVar7 = 2;
    }
    else {
      if ((char)bVar1 < '\0') {
        uVar7 = puVar8[1];
        puVar8 = (undefined8 *)*puVar8;
      }
      plVar6 = param_1;
      func_0x00010b4d80a4();
      if (0x7ffffffffffffff6 < uVar7) goto LAB_10adfb8f4;
      if (uVar7 < 0x17) {
        *(char *)((long)plVar6 + 0x17) = (char)uVar7;
        plVar5 = plVar6;
        if (uVar7 != 0) goto LAB_10adfb5b0;
      }
      else {
        plVar9 = (long *)0x19;
        if ((uVar7 | 7) != 0x17) {
          plVar9 = (long *)((uVar7 | 7) + 1);
        }
        plVar5 = plVar9;
        __Znwm();
        plVar6[1] = uVar7;
        plVar6[2] = (ulong)plVar9 | 0x8000000000000000;
        *plVar6 = (long)plVar5;
LAB_10adfb5b0:
        _memmove(plVar5,puVar8,uVar7);
      }
      *(undefined1 *)((long)plVar5 + uVar7) = 0;
      uVar7 = 3;
    }
    uVar7 = uVar7 | (ulong)plVar6;
  }
  plVar4[0xd] = uVar7;
  uVar7 = *(ulong *)(param_2 + 0x70);
  if ((uVar7 & 3) != 0) {
    puVar8 = (undefined8 *)(uVar7 & 0xfffffffffffffffc);
    bVar1 = *(byte *)((long)puVar8 + 0x17);
    uVar7 = (ulong)bVar1;
    if (param_1 == (long *)0x0) {
      if ((char)bVar1 < '\0') {
        uVar7 = puVar8[1];
        puVar8 = (undefined8 *)*puVar8;
      }
      plVar6 = (long *)0x18;
      __Znwm();
      if (0x7ffffffffffffff6 < uVar7) {
        func_0x000104bd47d4();
        goto LAB_10adfb920;
      }
      if (uVar7 < 0x17) {
        *(char *)((long)plVar6 + 0x17) = (char)uVar7;
        plVar5 = plVar6;
        if (uVar7 != 0) goto LAB_10adfb758;
      }
      else {
        plVar9 = (long *)0x19;
        if ((uVar7 | 7) != 0x17) {
          plVar9 = (long *)((uVar7 | 7) + 1);
        }
        plVar5 = plVar9;
        __Znwm();
        plVar6[1] = uVar7;
        plVar6[2] = (ulong)plVar9 | 0x8000000000000000;
        *plVar6 = (long)plVar5;
LAB_10adfb758:
        _memmove(plVar5,puVar8,uVar7);
      }
      *(undefined1 *)((long)plVar5 + uVar7) = 0;
      uVar7 = 2;
    }
    else {
      if ((char)bVar1 < '\0') {
        uVar7 = puVar8[1];
        puVar8 = (undefined8 *)*puVar8;
      }
      plVar6 = param_1;
      func_0x00010b4d80a4();
      if (0x7ffffffffffffff6 < uVar7) goto LAB_10adfb8f4;
      if (uVar7 < 0x17) {
        *(char *)((long)plVar6 + 0x17) = (char)uVar7;
        plVar5 = plVar6;
        if (uVar7 != 0) goto LAB_10adfb6dc;
      }
      else {
        plVar9 = (long *)0x19;
        if ((uVar7 | 7) != 0x17) {
          plVar9 = (long *)((uVar7 | 7) + 1);
        }
        plVar5 = plVar9;
        __Znwm();
        plVar6[1] = uVar7;
        plVar6[2] = (ulong)plVar9 | 0x8000000000000000;
        *plVar6 = (long)plVar5;
LAB_10adfb6dc:
        _memmove(plVar5,puVar8,uVar7);
      }
      *(undefined1 *)((long)plVar5 + uVar7) = 0;
      uVar7 = 3;
    }
    uVar7 = uVar7 | (ulong)plVar6;
  }
  plVar4[0xe] = uVar7;
  uVar7 = *(ulong *)(param_2 + 0x78);
  if ((uVar7 & 3) == 0) goto LAB_10adfb8a0;
  puVar8 = (undefined8 *)(uVar7 & 0xfffffffffffffffc);
  bVar1 = *(byte *)((long)puVar8 + 0x17);
  uVar7 = (ulong)bVar1;
  if (param_1 == (long *)0x0) {
    if ((char)bVar1 < '\0') {
      uVar7 = puVar8[1];
      puVar8 = (undefined8 *)*puVar8;
    }
    param_1 = (long *)0x18;
    __Znwm();
    if (0x7ffffffffffffff6 < uVar7) {
      func_0x000104bd47d4();
      goto LAB_10adfb920;
    }
    if (uVar7 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)uVar7;
      plVar9 = param_1;
      if (uVar7 != 0) goto LAB_10adfb884;
    }
    else {
      plVar6 = (long *)0x19;
      if ((uVar7 | 7) != 0x17) {
        plVar6 = (long *)((uVar7 | 7) + 1);
      }
      plVar9 = plVar6;
      __Znwm();
      param_1[1] = uVar7;
      param_1[2] = (ulong)plVar6 | 0x8000000000000000;
      *param_1 = (long)plVar9;
LAB_10adfb884:
      _memmove(plVar9,puVar8,uVar7);
    }
    *(undefined1 *)((long)plVar9 + uVar7) = 0;
    uVar7 = 2;
  }
  else {
    if ((char)bVar1 < '\0') {
      uVar7 = puVar8[1];
      puVar8 = (undefined8 *)*puVar8;
    }
    func_0x00010b4d80a4();
    if (0x7ffffffffffffff6 < uVar7) goto LAB_10adfb8f4;
    if (uVar7 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)uVar7;
      plVar9 = param_1;
      if (uVar7 != 0) goto LAB_10adfb808;
    }
    else {
      plVar6 = (long *)0x19;
      if ((uVar7 | 7) != 0x17) {
        plVar6 = (long *)((uVar7 | 7) + 1);
      }
      plVar9 = plVar6;
      __Znwm();
      param_1[1] = uVar7;
      param_1[2] = (ulong)plVar6 | 0x8000000000000000;
      *param_1 = (long)plVar9;
LAB_10adfb808:
      _memmove(plVar9,puVar8,uVar7);
    }
    *(undefined1 *)((long)plVar9 + uVar7) = 0;
    uVar7 = 3;
  }
  uVar7 = uVar7 | (ulong)param_1;
LAB_10adfb8a0:
  plVar4[0xf] = uVar7;
  *(undefined4 *)(plVar4 + 0x14) = 0;
  lVar10 = *(long *)(param_2 + 0x80);
  lVar12 = *(long *)(param_2 + 0x98);
  lVar11 = *(long *)(param_2 + 0x90);
  plVar4[0x11] = *(long *)(param_2 + 0x88);
  plVar4[0x10] = lVar10;
  plVar4[0x13] = lVar12;
  plVar4[0x12] = lVar11;
  return plVar4;
}



/* Entry: 10adfb9a4; end: 10adfbd57;  */

long * FUN_10adfb9a4(long *param_1,long param_2)

{
  uint uVar1;
  undefined **ppuVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plStack_38;
  
  if (param_1 == (long *)0x0) {
    plVar4 = (long *)0x20;
    __Znwm();
  }
  else {
    ppuVar2 = &PTR___tlv_bootstrap_11340dac8;
    (*(code *)PTR___tlv_bootstrap_11340dac8)();
    if (ppuVar2[1] == (undefined *)*param_1) {
      plVar5 = (long *)ppuVar2[2];
      plVar3 = plVar5;
      func_0x00010b4d755c(plVar5,0x20,&plStack_38);
      plVar4 = plStack_38;
      if ((int)plVar3 == 0) {
        func_0x00010b4d7498(plVar5,0x20);
        plVar4 = plVar5;
      }
    }
    else {
      plVar4 = param_1;
      func_0x00010b4d7124(param_1,0x20);
    }
  }
  plVar4[1] = (long)param_1;
  *plVar4 = (long)&PTR_FUN_110c76810;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(plVar4 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(plVar4 + 2) = uVar1;
  *(undefined4 *)((long)plVar4 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = (long *)0x0;
  }
  else {
    FUN_10adfb1c4(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  plVar4[3] = (long)param_1;
  return plVar4;
}



/* Entry: 10adfbd58; end: 10adfbfab;  */

long * FUN_10adfbd58(long *param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plStack_58;
  
  if (param_1 == (long *)0x0) {
    plVar5 = (long *)0x20;
    __Znwm();
  }
  else {
    ppuVar3 = &PTR___tlv_bootstrap_11340dac8;
    (*(code *)PTR___tlv_bootstrap_11340dac8)();
    if (ppuVar3[1] == (undefined *)*param_1) {
      plVar7 = (long *)ppuVar3[2];
      plVar4 = plVar7;
      func_0x00010b4d755c(plVar7,0x20,&plStack_58);
      plVar5 = plStack_58;
      if ((int)plVar4 == 0) {
        func_0x00010b4d7498(plVar7,0x20);
        plVar5 = plVar7;
      }
    }
    else {
      plVar5 = param_1;
      func_0x00010b4d7124(param_1,0x20);
    }
  }
  plVar5[1] = (long)param_1;
  *plVar5 = (long)&PTR_FUN_110c761d0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(plVar5 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar6 = *(ulong *)(param_2 + 0x10);
  if ((uVar6 & 3) == 0) goto LAB_10adfbf3c;
  puVar8 = (undefined8 *)(uVar6 & 0xfffffffffffffffc);
  bVar1 = *(byte *)((long)puVar8 + 0x17);
  uVar6 = (ulong)bVar1;
  if (param_1 == (long *)0x0) {
    if ((char)bVar1 < '\0') {
      puVar9 = (undefined8 *)*puVar8;
      uVar6 = puVar8[1];
      param_1 = (long *)0x18;
      __Znwm();
      if (0x7ffffffffffffff6 < uVar6) goto LAB_10adfbf90;
      if (uVar6 < 0x17) goto LAB_10adfbe4c;
LAB_10adfbef8:
      plVar7 = (long *)0x19;
      if ((uVar6 | 7) != 0x17) {
        plVar7 = (long *)((uVar6 | 7) + 1);
      }
      plVar4 = plVar7;
      __Znwm();
      param_1[1] = uVar6;
      param_1[2] = (ulong)plVar7 | 0x8000000000000000;
      *param_1 = (long)plVar4;
LAB_10adfbf20:
      _memmove(plVar4,puVar9,uVar6);
    }
    else {
      param_1 = (long *)0x18;
      __Znwm();
      puVar9 = puVar8;
      if (0x16 < uVar6) goto LAB_10adfbef8;
LAB_10adfbe4c:
      *(char *)((long)param_1 + 0x17) = (char)uVar6;
      plVar4 = param_1;
      if (uVar6 != 0) goto LAB_10adfbf20;
    }
    *(undefined1 *)((long)plVar4 + uVar6) = 0;
    uVar6 = 2;
  }
  else {
    if ((char)bVar1 < '\0') {
      puVar9 = (undefined8 *)*puVar8;
      uVar6 = puVar8[1];
      func_0x00010b4d80a4();
      if (0x7ffffffffffffff6 < uVar6) {
        func_0x000104bd47d4();
LAB_10adfbf90:
        func_0x000104bd47d4();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10adfbf98);
        (*pcVar2)();
      }
      if (uVar6 < 0x17) goto LAB_10adfbe24;
LAB_10adfbe88:
      plVar7 = (long *)0x19;
      if ((uVar6 | 7) != 0x17) {
        plVar7 = (long *)((uVar6 | 7) + 1);
      }
      plVar4 = plVar7;
      __Znwm();
      param_1[1] = uVar6;
      param_1[2] = (ulong)plVar7 | 0x8000000000000000;
      *param_1 = (long)plVar4;
LAB_10adfbeb0:
      _memmove(plVar4,puVar9,uVar6);
    }
    else {
      func_0x00010b4d80a4();
      puVar9 = puVar8;
      if (0x16 < uVar6) goto LAB_10adfbe88;
LAB_10adfbe24:
      *(char *)((long)param_1 + 0x17) = (char)uVar6;
      plVar4 = param_1;
      if (uVar6 != 0) goto LAB_10adfbeb0;
    }
    *(undefined1 *)((long)plVar4 + uVar6) = 0;
    uVar6 = 3;
  }
  uVar6 = uVar6 | (ulong)param_1;
LAB_10adfbf3c:
  plVar5[2] = uVar6;
  *(undefined4 *)((long)plVar5 + 0x1c) = 0;
  *(undefined4 *)(plVar5 + 3) = *(undefined4 *)(param_2 + 0x18);
  return plVar5;
}



/* Entry: 10adfbfac; end: 10adfc097;  */

long * FUN_10adfbfac(long *param_1,long param_2)

{
  undefined **ppuVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plStack_38;
  
  if (param_1 == (long *)0x0) {
    plVar3 = (long *)0x30;
    __Znwm();
  }
  else {
    ppuVar1 = &PTR___tlv_bootstrap_11340dac8;
    (*(code *)PTR___tlv_bootstrap_11340dac8)();
    if (ppuVar1[1] == (undefined *)*param_1) {
      plVar4 = (long *)ppuVar1[2];
      plVar2 = plVar4;
      func_0x00010b4d755c(plVar4,0x30,&plStack_38);
      plVar3 = plStack_38;
      if ((int)plVar2 == 0) {
        func_0x00010b4d7498(plVar4,0x30);
        plVar3 = plVar4;
      }
    }
    else {
      plVar3 = param_1;
      func_0x00010b4d7124(param_1,0x30);
    }
  }
  plVar3[1] = (long)param_1;
  *plVar3 = (long)&PTR_FUN_110c76310;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(plVar3 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  plVar3[2] = 0;
  plVar3[3] = 0;
  plVar3[4] = (long)param_1;
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303bc(plVar3 + 2,param_2 + 0x10);
  }
  *(undefined4 *)(plVar3 + 5) = 0;
  return plVar3;
}



/* Entry: 10adfc098; end: 10adfc2db;  */

long * FUN_10adfc098(long *param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plStack_48;
  
  if (param_1 == (long *)0x0) {
    plVar5 = (long *)0x20;
    __Znwm();
  }
  else {
    ppuVar3 = &PTR___tlv_bootstrap_11340dac8;
    (*(code *)PTR___tlv_bootstrap_11340dac8)();
    if (ppuVar3[1] == (undefined *)*param_1) {
      plVar7 = (long *)ppuVar3[2];
      plVar4 = plVar7;
      func_0x00010b4d755c(plVar7,0x20,&plStack_48);
      plVar5 = plStack_48;
      if ((int)plVar4 == 0) {
        func_0x00010b4d7498(plVar7,0x20);
        plVar5 = plVar7;
      }
    }
    else {
      plVar5 = param_1;
      func_0x00010b4d7124(param_1,0x20);
    }
  }
  plVar5[1] = (long)param_1;
  *plVar5 = (long)&PTR_FUN_110c76400;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(plVar5 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar6 = *(ulong *)(param_2 + 0x10);
  if ((uVar6 & 3) == 0) goto LAB_10adfc278;
  puVar8 = (undefined8 *)(uVar6 & 0xfffffffffffffffc);
  bVar1 = *(byte *)((long)puVar8 + 0x17);
  uVar6 = (ulong)bVar1;
  if (param_1 == (long *)0x0) {
    if ((char)bVar1 < '\0') {
      puVar9 = (undefined8 *)*puVar8;
      uVar6 = puVar8[1];
      param_1 = (long *)0x18;
      __Znwm();
      if (0x7ffffffffffffff6 < uVar6) goto LAB_10adfc2c0;
      if (uVar6 < 0x17) goto LAB_10adfc188;
LAB_10adfc234:
      plVar7 = (long *)0x19;
      if ((uVar6 | 7) != 0x17) {
        plVar7 = (long *)((uVar6 | 7) + 1);
      }
      plVar4 = plVar7;
      __Znwm();
      param_1[1] = uVar6;
      param_1[2] = (ulong)plVar7 | 0x8000000000000000;
      *param_1 = (long)plVar4;
LAB_10adfc25c:
      _memmove(plVar4,puVar9,uVar6);
    }
    else {
      param_1 = (long *)0x18;
      __Znwm();
      puVar9 = puVar8;
      if (0x16 < uVar6) goto LAB_10adfc234;
LAB_10adfc188:
      *(char *)((long)param_1 + 0x17) = (char)uVar6;
      plVar4 = param_1;
      if (uVar6 != 0) goto LAB_10adfc25c;
    }
    *(undefined1 *)((long)plVar4 + uVar6) = 0;
    uVar6 = 2;
  }
  else {
    if ((char)bVar1 < '\0') {
      puVar9 = (undefined8 *)*puVar8;
      uVar6 = puVar8[1];
      func_0x00010b4d80a4();
      if (0x7ffffffffffffff6 < uVar6) {
        func_0x000104bd47d4();
LAB_10adfc2c0:
        func_0x000104bd47d4();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10adfc2c8);
        (*pcVar2)();
      }
      if (uVar6 < 0x17) goto LAB_10adfc160;
LAB_10adfc1c4:
      plVar7 = (long *)0x19;
      if ((uVar6 | 7) != 0x17) {
        plVar7 = (long *)((uVar6 | 7) + 1);
      }
      plVar4 = plVar7;
      __Znwm();
      param_1[1] = uVar6;
      param_1[2] = (ulong)plVar7 | 0x8000000000000000;
      *param_1 = (long)plVar4;
LAB_10adfc1ec:
      _memmove(plVar4,puVar9,uVar6);
    }
    else {
      func_0x00010b4d80a4();
      puVar9 = puVar8;
      if (0x16 < uVar6) goto LAB_10adfc1c4;
LAB_10adfc160:
      *(char *)((long)param_1 + 0x17) = (char)uVar6;
      plVar4 = param_1;
      if (uVar6 != 0) goto LAB_10adfc1ec;
    }
    *(undefined1 *)((long)plVar4 + uVar6) = 0;
    uVar6 = 3;
  }
  uVar6 = uVar6 | (ulong)param_1;
LAB_10adfc278:
  plVar5[2] = uVar6;
  *(undefined4 *)(plVar5 + 3) = 0;
  return plVar5;
}



/* Entry: 10adfc2dc; end: 10adfc51f;  */

long * FUN_10adfc2dc(long *param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plStack_48;
  
  if (param_1 == (long *)0x0) {
    plVar5 = (long *)0x20;
    __Znwm();
  }
  else {
    ppuVar3 = &PTR___tlv_bootstrap_11340dac8;
    (*(code *)PTR___tlv_bootstrap_11340dac8)();
    if (ppuVar3[1] == (undefined *)*param_1) {
      plVar7 = (long *)ppuVar3[2];
      plVar4 = plVar7;
      func_0x00010b4d755c(plVar7,0x20,&plStack_48);
      plVar5 = plStack_48;
      if ((int)plVar4 == 0) {
        func_0x00010b4d7498(plVar7,0x20);
        plVar5 = plVar7;
      }
    }
    else {
      plVar5 = param_1;
      func_0x00010b4d7124(param_1,0x20);
    }
  }
  plVar5[1] = (long)param_1;
  *plVar5 = (long)&PTR_DAT_110c76130;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(plVar5 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar6 = *(ulong *)(param_2 + 0x10);
  if ((uVar6 & 3) == 0) goto LAB_10adfc4bc;
  puVar8 = (undefined8 *)(uVar6 & 0xfffffffffffffffc);
  bVar1 = *(byte *)((long)puVar8 + 0x17);
  uVar6 = (ulong)bVar1;
  if (param_1 == (long *)0x0) {
    if ((char)bVar1 < '\0') {
      puVar9 = (undefined8 *)*puVar8;
      uVar6 = puVar8[1];
      param_1 = (long *)0x18;
      __Znwm();
      if (0x7ffffffffffffff6 < uVar6) goto LAB_10adfc504;
      if (uVar6 < 0x17) goto LAB_10adfc3cc;
LAB_10adfc478:
      plVar7 = (long *)0x19;
      if ((uVar6 | 7) != 0x17) {
        plVar7 = (long *)((uVar6 | 7) + 1);
      }
      plVar4 = plVar7;
      __Znwm();
      param_1[1] = uVar6;
      param_1[2] = (ulong)plVar7 | 0x8000000000000000;
      *param_1 = (long)plVar4;
LAB_10adfc4a0:
      _memmove(plVar4,puVar9,uVar6);
    }
    else {
      param_1 = (long *)0x18;
      __Znwm();
      puVar9 = puVar8;
      if (0x16 < uVar6) goto LAB_10adfc478;
LAB_10adfc3cc:
      *(char *)((long)param_1 + 0x17) = (char)uVar6;
      plVar4 = param_1;
      if (uVar6 != 0) goto LAB_10adfc4a0;
    }
    *(undefined1 *)((long)plVar4 + uVar6) = 0;
    uVar6 = 2;
  }
  else {
    if ((char)bVar1 < '\0') {
      puVar9 = (undefined8 *)*puVar8;
      uVar6 = puVar8[1];
      func_0x00010b4d80a4();
      if (0x7ffffffffffffff6 < uVar6) {
        func_0x000104bd47d4();
LAB_10adfc504:
        func_0x000104bd47d4();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10adfc50c);
        (*pcVar2)();
      }
      if (uVar6 < 0x17) goto LAB_10adfc3a4;
LAB_10adfc408:
      plVar7 = (long *)0x19;
      if ((uVar6 | 7) != 0x17) {
        plVar7 = (long *)((uVar6 | 7) + 1);
      }
      plVar4 = plVar7;
      __Znwm();
      param_1[1] = uVar6;
      param_1[2] = (ulong)plVar7 | 0x8000000000000000;
      *param_1 = (long)plVar4;
LAB_10adfc430:
      _memmove(plVar4,puVar9,uVar6);
    }
    else {
      func_0x00010b4d80a4();
      puVar9 = puVar8;
      if (0x16 < uVar6) goto LAB_10adfc408;
LAB_10adfc3a4:
      *(char *)((long)param_1 + 0x17) = (char)uVar6;
      plVar4 = param_1;
      if (uVar6 != 0) goto LAB_10adfc430;
    }
    *(undefined1 *)((long)plVar4 + uVar6) = 0;
    uVar6 = 3;
  }
  uVar6 = uVar6 | (ulong)param_1;
LAB_10adfc4bc:
  plVar5[2] = uVar6;
  *(undefined4 *)(plVar5 + 3) = 0;
  return plVar5;
}



/* Entry: 10adfc520; end: 10adfc763;  */

long * FUN_10adfc520(long *param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plStack_48;
  
  if (param_1 == (long *)0x0) {
    plVar5 = (long *)0x20;
    __Znwm();
  }
  else {
    ppuVar3 = &PTR___tlv_bootstrap_11340dac8;
    (*(code *)PTR___tlv_bootstrap_11340dac8)();
    if (ppuVar3[1] == (undefined *)*param_1) {
      plVar7 = (long *)ppuVar3[2];
      plVar4 = plVar7;
      func_0x00010b4d755c(plVar7,0x20,&plStack_48);
      plVar5 = plStack_48;
      if ((int)plVar4 == 0) {
        func_0x00010b4d7498(plVar7,0x20);
        plVar5 = plVar7;
      }
    }
    else {
      plVar5 = param_1;
      func_0x00010b4d7124(param_1,0x20);
    }
  }
  plVar5[1] = (long)param_1;
  *plVar5 = (long)&PTR_FUN_110c762c0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(plVar5 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar6 = *(ulong *)(param_2 + 0x10);
  if ((uVar6 & 3) == 0) goto LAB_10adfc700;
  puVar8 = (undefined8 *)(uVar6 & 0xfffffffffffffffc);
  bVar1 = *(byte *)((long)puVar8 + 0x17);
  uVar6 = (ulong)bVar1;
  if (param_1 == (long *)0x0) {
    if ((char)bVar1 < '\0') {
      puVar9 = (undefined8 *)*puVar8;
      uVar6 = puVar8[1];
      param_1 = (long *)0x18;
      __Znwm();
      if (0x7ffffffffffffff6 < uVar6) goto LAB_10adfc748;
      if (uVar6 < 0x17) goto LAB_10adfc610;
LAB_10adfc6bc:
      plVar7 = (long *)0x19;
      if ((uVar6 | 7) != 0x17) {
        plVar7 = (long *)((uVar6 | 7) + 1);
      }
      plVar4 = plVar7;
      __Znwm();
      param_1[1] = uVar6;
      param_1[2] = (ulong)plVar7 | 0x8000000000000000;
      *param_1 = (long)plVar4;
LAB_10adfc6e4:
      _memmove(plVar4,puVar9,uVar6);
    }
    else {
      param_1 = (long *)0x18;
      __Znwm();
      puVar9 = puVar8;
      if (0x16 < uVar6) goto LAB_10adfc6bc;
LAB_10adfc610:
      *(char *)((long)param_1 + 0x17) = (char)uVar6;
      plVar4 = param_1;
      if (uVar6 != 0) goto LAB_10adfc6e4;
    }
    *(undefined1 *)((long)plVar4 + uVar6) = 0;
    uVar6 = 2;
  }
  else {
    if ((char)bVar1 < '\0') {
      puVar9 = (undefined8 *)*puVar8;
      uVar6 = puVar8[1];
      func_0x00010b4d80a4();
      if (0x7ffffffffffffff6 < uVar6) {
        func_0x000104bd47d4();
LAB_10adfc748:
        func_0x000104bd47d4();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10adfc750);
        (*pcVar2)();
      }
      if (uVar6 < 0x17) goto LAB_10adfc5e8;
LAB_10adfc64c:
      plVar7 = (long *)0x19;
      if ((uVar6 | 7) != 0x17) {
        plVar7 = (long *)((uVar6 | 7) + 1);
      }
      plVar4 = plVar7;
      __Znwm();
      param_1[1] = uVar6;
      param_1[2] = (ulong)plVar7 | 0x8000000000000000;
      *param_1 = (long)plVar4;
LAB_10adfc674:
      _memmove(plVar4,puVar9,uVar6);
    }
    else {
      func_0x00010b4d80a4();
      puVar9 = puVar8;
      if (0x16 < uVar6) goto LAB_10adfc64c;
LAB_10adfc5e8:
      *(char *)((long)param_1 + 0x17) = (char)uVar6;
      plVar4 = param_1;
      if (uVar6 != 0) goto LAB_10adfc674;
    }
    *(undefined1 *)((long)plVar4 + uVar6) = 0;
    uVar6 = 3;
  }
  uVar6 = uVar6 | (ulong)param_1;
LAB_10adfc700:
  plVar5[2] = uVar6;
  *(undefined4 *)(plVar5 + 3) = 0;
  return plVar5;
}



/* Entry: 10adfc764; end: 10adfc9b7;  */

long * FUN_10adfc764(long *param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plStack_58;
  
  if (param_1 == (long *)0x0) {
    plVar5 = (long *)0x20;
    __Znwm();
  }
  else {
    ppuVar3 = &PTR___tlv_bootstrap_11340dac8;
    (*(code *)PTR___tlv_bootstrap_11340dac8)();
    if (ppuVar3[1] == (undefined *)*param_1) {
      plVar7 = (long *)ppuVar3[2];
      plVar4 = plVar7;
      func_0x00010b4d755c(plVar7,0x20,&plStack_58);
      plVar5 = plStack_58;
      if ((int)plVar4 == 0) {
        func_0x00010b4d7498(plVar7,0x20);
        plVar5 = plVar7;
      }
    }
    else {
      plVar5 = param_1;
      func_0x00010b4d7124(param_1,0x20);
    }
  }
  plVar5[1] = (long)param_1;
  *plVar5 = (long)&PTR_DAT_110c76270;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(plVar5 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar6 = *(ulong *)(param_2 + 0x10);
  if ((uVar6 & 3) == 0) goto LAB_10adfc948;
  puVar8 = (undefined8 *)(uVar6 & 0xfffffffffffffffc);
  bVar1 = *(byte *)((long)puVar8 + 0x17);
  uVar6 = (ulong)bVar1;
  if (param_1 == (long *)0x0) {
    if ((char)bVar1 < '\0') {
      puVar9 = (undefined8 *)*puVar8;
      uVar6 = puVar8[1];
      param_1 = (long *)0x18;
      __Znwm();
      if (0x7ffffffffffffff6 < uVar6) goto LAB_10adfc99c;
      if (uVar6 < 0x17) goto LAB_10adfc858;
LAB_10adfc904:
      plVar7 = (long *)0x19;
      if ((uVar6 | 7) != 0x17) {
        plVar7 = (long *)((uVar6 | 7) + 1);
      }
      plVar4 = plVar7;
      __Znwm();
      param_1[1] = uVar6;
      param_1[2] = (ulong)plVar7 | 0x8000000000000000;
      *param_1 = (long)plVar4;
LAB_10adfc92c:
      _memmove(plVar4,puVar9,uVar6);
    }
    else {
      param_1 = (long *)0x18;
      __Znwm();
      puVar9 = puVar8;
      if (0x16 < uVar6) goto LAB_10adfc904;
LAB_10adfc858:
      *(char *)((long)param_1 + 0x17) = (char)uVar6;
      plVar4 = param_1;
      if (uVar6 != 0) goto LAB_10adfc92c;
    }
    *(undefined1 *)((long)plVar4 + uVar6) = 0;
    uVar6 = 2;
  }
  else {
    if ((char)bVar1 < '\0') {
      puVar9 = (undefined8 *)*puVar8;
      uVar6 = puVar8[1];
      func_0x00010b4d80a4();
      if (0x7ffffffffffffff6 < uVar6) {
        func_0x000104bd47d4();
LAB_10adfc99c:
        func_0x000104bd47d4();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10adfc9a4);
        (*pcVar2)();
      }
      if (uVar6 < 0x17) goto LAB_10adfc830;
LAB_10adfc894:
      plVar7 = (long *)0x19;
      if ((uVar6 | 7) != 0x17) {
        plVar7 = (long *)((uVar6 | 7) + 1);
      }
      plVar4 = plVar7;
      __Znwm();
      param_1[1] = uVar6;
      param_1[2] = (ulong)plVar7 | 0x8000000000000000;
      *param_1 = (long)plVar4;
LAB_10adfc8bc:
      _memmove(plVar4,puVar9,uVar6);
    }
    else {
      func_0x00010b4d80a4();
      puVar9 = puVar8;
      if (0x16 < uVar6) goto LAB_10adfc894;
LAB_10adfc830:
      *(char *)((long)param_1 + 0x17) = (char)uVar6;
      plVar4 = param_1;
      if (uVar6 != 0) goto LAB_10adfc8bc;
    }
    *(undefined1 *)((long)plVar4 + uVar6) = 0;
    uVar6 = 3;
  }
  uVar6 = uVar6 | (ulong)param_1;
LAB_10adfc948:
  plVar5[2] = uVar6;
  *(undefined4 *)((long)plVar5 + 0x1c) = 0;
  *(undefined4 *)(plVar5 + 3) = *(undefined4 *)(param_2 + 0x18);
  return plVar5;
}



/* Entry: 10adfc9b8; end: 10adfcbd7;  */

long FUN_10adfc9b8(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x10) ^ 2);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 3) != 0) {
    puVar1 = (undefined8 *)0x0;
  }
  if ((puVar1 != (undefined8 *)0x0) && (*(char *)((long)puVar2 + 0x17) < '\0')) {
    __ZdlPv(*puVar2);
  }
  __ZdlPv(puVar1);
  puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x18) ^ 2);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 3) != 0) {
    puVar1 = (undefined8 *)0x0;
  }
  if ((puVar1 != (undefined8 *)0x0) && (*(char *)((long)puVar2 + 0x17) < '\0')) {
    __ZdlPv(*puVar2);
  }
  __ZdlPv(puVar1);
  puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x20) ^ 2);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 3) != 0) {
    puVar1 = (undefined8 *)0x0;
  }
  if ((puVar1 != (undefined8 *)0x0) && (*(char *)((long)puVar2 + 0x17) < '\0')) {
    __ZdlPv(*puVar2);
  }
  __ZdlPv(puVar1);
  puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x28) ^ 2);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 3) != 0) {
    puVar1 = (undefined8 *)0x0;
  }
  if ((puVar1 != (undefined8 *)0x0) && (*(char *)((long)puVar2 + 0x17) < '\0')) {
    __ZdlPv(*puVar2);
    __ZdlPv(puVar1);
    return param_1;
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10adfcbd8; end: 10adfcce3;  */

undefined ** FUN_10adfcbd8(void)

{
  return &PTR_DAT_110c77390;
}



/* Entry: 10adfcce4; end: 10adfd747;  */

/* WARNING: Removing unreachable block (ram,0x00010adfd518) */
/* WARNING: Removing unreachable block (ram,0x00010adfd2bc) */
/* WARNING: Removing unreachable block (ram,0x00010adfd2c4) */
/* WARNING: Removing unreachable block (ram,0x00010adfd108) */
/* WARNING: Removing unreachable block (ram,0x00010adfced8) */
/* WARNING: Removing unreachable block (ram,0x00010adfcee8) */
/* WARNING: Removing unreachable block (ram,0x00010adfcee0) */
/* WARNING: Removing unreachable block (ram,0x00010adfd100) */
/* WARNING: Removing unreachable block (ram,0x00010adfd0f8) */
/* WARNING: Removing unreachable block (ram,0x00010adfd2cc) */
/* WARNING: Removing unreachable block (ram,0x00010adfd510) */
/* WARNING: Removing unreachable block (ram,0x00010adfd508) */

byte * FUN_10adfcce4(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  char cVar4;
  uint uVar5;
  ulong *puVar6;
  byte *pbVar7;
  long lVar8;
  uint uVar9;
  ulong *puVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong *puVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  
  uVar16 = *(uint *)(param_1 + 0x30);
  if (uVar16 != 0) {
    pbVar11 = *(byte **)param_3;
    if (param_2 < pbVar11) {
      *param_2 = 8;
    }
    else {
      do {
        if (param_3[0x38] == 1) {
          param_2 = param_3 + 0x10;
          break;
        }
        pbVar13 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar13 + ((int)param_2 - (int)pbVar11);
        pbVar11 = *(byte **)param_3;
      } while (pbVar11 <= param_2);
      uVar16 = *(uint *)(param_1 + 0x30);
      *param_2 = 8;
    }
    uVar17 = (ulong)(int)uVar16;
    pbVar11 = param_2 + 1;
    uVar18 = uVar17;
    pbVar13 = pbVar11;
    if (0x7f < uVar16) {
      do {
        pbVar11 = pbVar13 + 1;
        *pbVar13 = (byte)uVar18 | 0x80;
        uVar17 = uVar18 >> 7;
        uVar12 = uVar18 >> 0xe;
        uVar18 = uVar17;
        pbVar13 = pbVar11;
      } while (uVar12 != 0);
    }
    param_2 = pbVar11 + 1;
    *pbVar11 = (byte)uVar17;
  }
  puVar14 = (ulong *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  cVar4 = *(char *)((long)puVar14 + 0x17);
  uVar17 = (ulong)cVar4;
  if ((long)uVar17 < 0) {
    if (puVar14[1] != 0) {
      puVar3 = (ulong *)*puVar14;
      uVar18 = puVar14[1];
      goto joined_r0x00010adfcd6c;
    }
LAB_10adfceb4:
    puVar14 = (ulong *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    uVar17 = (ulong)*(char *)((long)puVar14 + 0x17);
    pbVar11 = param_2;
    if (-1 < (long)uVar17) goto LAB_10adfcec4;
LAB_10adfcf7c:
    if (puVar14[1] != 0) {
      puVar3 = (ulong *)*puVar14;
      pbVar13 = pbVar11;
      uVar18 = puVar14[1];
      goto joined_r0x00010adfcf8c;
    }
LAB_10adfd0d4:
    puVar14 = (ulong *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
    uVar17 = (ulong)*(char *)((long)puVar14 + 0x17);
    if (-1 < (long)uVar17) goto LAB_10adfd0e4;
LAB_10adfd140:
    if (puVar14[1] != 0) {
      puVar3 = (ulong *)*puVar14;
      pbVar13 = pbVar11;
      uVar18 = puVar14[1];
      goto joined_r0x00010adfd150;
    }
LAB_10adfd298:
    puVar14 = (ulong *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
    uVar17 = (ulong)*(char *)((long)puVar14 + 0x17);
    if (-1 < (long)uVar17) goto LAB_10adfd2a8;
LAB_10adfd304:
    if (puVar14[1] != 0) {
      puVar3 = (ulong *)*puVar14;
      uVar18 = puVar14[1];
      goto joined_r0x00010adfd314;
    }
  }
  else {
    puVar3 = puVar14;
    uVar18 = uVar17;
    if ((int)cVar4 == 0) goto LAB_10adfceb4;
joined_r0x00010adfcd6c:
    if (uVar18 << 0x20 == 0) {
LAB_10adfce2c:
      if (((uint)(int)cVar4 >> 7 & 1) != 0) goto LAB_10adfce64;
LAB_10adfce30:
      uVar17 = uVar17 & 0xff;
LAB_10adfce70:
      if ((long)uVar17 <= (*(long *)param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x12;
        param_2[1] = (byte)uVar17;
        puVar3 = (ulong *)*puVar14;
        if (-1 < *(char *)((long)puVar14 + 0x17)) {
          puVar3 = puVar14;
        }
        _memcpy(param_2 + 2,puVar3,uVar17);
        param_2 = param_2 + 2 + uVar17;
        goto LAB_10adfceb4;
      }
    }
    else {
      lVar8 = (long)(uVar18 << 0x20) >> 0x20;
      puVar2 = (ulong *)((long)puVar3 + lVar8);
      puVar10 = puVar3;
      for (; (7 < lVar8 && ((*puVar3 & 0x8080808080808080) == 0)); puVar3 = puVar3 + 1) {
        puVar10 = puVar10 + 1;
        lVar8 = lVar8 + -8;
      }
      puVar6 = puVar3;
      if (puVar3 < puVar2) {
        uVar12 = (long)puVar2 - (long)puVar10;
        puVar10 = puVar3;
        for (uVar18 = uVar12 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          puVar6 = puVar10;
          if ((char)*puVar10 < '\0') goto LAB_10adfce20;
          puVar10 = (ulong *)((long)puVar10 + 1);
        }
        puVar3 = (ulong *)((long)puVar3 + uVar12);
        puVar6 = puVar3;
        if (2 < uVar12 - 1) {
          puVar10 = (ulong *)((long)puVar10 + 3);
          do {
            puVar6 = puVar10;
            if ((char)*puVar10 < '\0') break;
            puVar1 = (ulong *)((long)puVar10 + 1);
            puVar10 = (ulong *)((long)puVar10 + 4);
            puVar6 = puVar3;
          } while (puVar1 != puVar3);
        }
      }
LAB_10adfce20:
      func_0x000107c34ffc(puVar6,puVar2,0);
      if (puVar6 != (ulong *)0x0) goto LAB_10adfce2c;
      func_0x00010b4d3bf8(&UNK_10f7741f2,0,&UNK_10f6af27c,0x2a,&UNK_10f774276);
      uVar17 = (ulong)*(byte *)((long)puVar14 + 0x17);
      if (-1 < (char)*(byte *)((long)puVar14 + 0x17)) goto LAB_10adfce30;
LAB_10adfce64:
      uVar17 = puVar14[1];
      if ((long)uVar17 < 0x80) goto LAB_10adfce70;
    }
    pbVar11 = param_3;
    func_0x00010b4d50d0(param_3,2,puVar14,param_2);
    puVar14 = (ulong *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    uVar17 = (ulong)*(char *)((long)puVar14 + 0x17);
    if ((long)uVar17 < 0) goto LAB_10adfcf7c;
LAB_10adfcec4:
    puVar3 = puVar14;
    pbVar13 = pbVar11;
    uVar18 = uVar17;
    if ((int)uVar17 == 0) goto LAB_10adfd0d4;
joined_r0x00010adfcf8c:
    if (uVar18 << 0x20 == 0) {
LAB_10adfd04c:
      if (((uint)uVar17 >> 7 & 1) != 0) goto LAB_10adfd084;
LAB_10adfd050:
      uVar17 = uVar17 & 0xff;
LAB_10adfd090:
      if ((long)uVar17 <= (*(long *)param_3 - (long)pbVar13) + 0xe) {
        *pbVar13 = 0x1a;
        pbVar13[1] = (byte)uVar17;
        puVar3 = (ulong *)*puVar14;
        if (-1 < *(char *)((long)puVar14 + 0x17)) {
          puVar3 = puVar14;
        }
        _memcpy(pbVar13 + 2,puVar3,uVar17);
        pbVar11 = pbVar13 + 2 + uVar17;
        goto LAB_10adfd0d4;
      }
    }
    else {
      lVar8 = (long)(uVar18 << 0x20) >> 0x20;
      puVar2 = (ulong *)((long)puVar3 + lVar8);
      puVar10 = puVar3;
      for (; (7 < lVar8 && ((*puVar3 & 0x8080808080808080) == 0)); puVar3 = puVar3 + 1) {
        puVar10 = puVar10 + 1;
        lVar8 = lVar8 + -8;
      }
      puVar6 = puVar3;
      if (puVar3 < puVar2) {
        uVar12 = (long)puVar2 - (long)puVar10;
        puVar10 = puVar3;
        for (uVar18 = uVar12 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          puVar6 = puVar10;
          if ((char)*puVar10 < '\0') goto LAB_10adfd040;
          puVar10 = (ulong *)((long)puVar10 + 1);
        }
        puVar3 = (ulong *)((long)puVar3 + uVar12);
        puVar6 = puVar3;
        if (2 < uVar12 - 1) {
          puVar10 = (ulong *)((long)puVar10 + 3);
          do {
            puVar6 = puVar10;
            if ((char)*puVar10 < '\0') break;
            puVar1 = (ulong *)((long)puVar10 + 1);
            puVar10 = (ulong *)((long)puVar10 + 4);
            puVar6 = puVar3;
          } while (puVar1 != puVar3);
        }
      }
LAB_10adfd040:
      func_0x000107c34ffc(puVar6,puVar2,0);
      if (puVar6 != (ulong *)0x0) goto LAB_10adfd04c;
      func_0x00010b4d3bf8(&UNK_10f7741f2,0,&UNK_10f6af2a7,0x30,&UNK_10f774276);
      uVar17 = (ulong)*(byte *)((long)puVar14 + 0x17);
      if (-1 < (char)*(byte *)((long)puVar14 + 0x17)) goto LAB_10adfd050;
LAB_10adfd084:
      uVar17 = puVar14[1];
      if ((long)uVar17 < 0x80) goto LAB_10adfd090;
    }
    pbVar11 = param_3;
    func_0x00010b4d50d0(param_3,3,puVar14,pbVar13);
    puVar14 = (ulong *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
    uVar17 = (ulong)*(char *)((long)puVar14 + 0x17);
    if ((long)uVar17 < 0) goto LAB_10adfd140;
LAB_10adfd0e4:
    puVar3 = puVar14;
    pbVar13 = pbVar11;
    uVar18 = uVar17;
    if ((int)uVar17 == 0) goto LAB_10adfd298;
joined_r0x00010adfd150:
    if (uVar18 << 0x20 == 0) {
LAB_10adfd210:
      if (((uint)uVar17 >> 7 & 1) != 0) goto LAB_10adfd248;
LAB_10adfd214:
      uVar17 = uVar17 & 0xff;
LAB_10adfd254:
      if ((long)uVar17 <= (*(long *)param_3 - (long)pbVar13) + 0xe) {
        *pbVar13 = 0x22;
        pbVar13[1] = (byte)uVar17;
        puVar3 = (ulong *)*puVar14;
        if (-1 < *(char *)((long)puVar14 + 0x17)) {
          puVar3 = puVar14;
        }
        _memcpy(pbVar13 + 2,puVar3,uVar17);
        pbVar11 = pbVar13 + 2 + uVar17;
        goto LAB_10adfd298;
      }
    }
    else {
      lVar8 = (long)(uVar18 << 0x20) >> 0x20;
      puVar2 = (ulong *)((long)puVar3 + lVar8);
      puVar10 = puVar3;
      for (; (7 < lVar8 && ((*puVar3 & 0x8080808080808080) == 0)); puVar3 = puVar3 + 1) {
        puVar10 = puVar10 + 1;
        lVar8 = lVar8 + -8;
      }
      puVar6 = puVar3;
      if (puVar3 < puVar2) {
        uVar12 = (long)puVar2 - (long)puVar10;
        puVar10 = puVar3;
        for (uVar18 = uVar12 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
          puVar6 = puVar10;
          if ((char)*puVar10 < '\0') goto LAB_10adfd204;
          puVar10 = (ulong *)((long)puVar10 + 1);
        }
        puVar3 = (ulong *)((long)puVar3 + uVar12);
        puVar6 = puVar3;
        if (2 < uVar12 - 1) {
          puVar10 = (ulong *)((long)puVar10 + 3);
          do {
            puVar6 = puVar10;
            if ((char)*puVar10 < '\0') break;
            puVar1 = (ulong *)((long)puVar10 + 1);
            puVar10 = (ulong *)((long)puVar10 + 4);
            puVar6 = puVar3;
          } while (puVar1 != puVar3);
        }
      }
LAB_10adfd204:
      func_0x000107c34ffc(puVar6,puVar2,0);
      if (puVar6 != (ulong *)0x0) goto LAB_10adfd210;
      func_0x00010b4d3bf8(&UNK_10f7741f2,0,&UNK_10f6af2d8,0x2d,&UNK_10f774276);
      uVar17 = (ulong)*(byte *)((long)puVar14 + 0x17);
      if (-1 < (char)*(byte *)((long)puVar14 + 0x17)) goto LAB_10adfd214;
LAB_10adfd248:
      uVar17 = puVar14[1];
      if ((long)uVar17 < 0x80) goto LAB_10adfd254;
    }
    pbVar11 = param_3;
    func_0x00010b4d50d0(param_3,4,puVar14,pbVar13);
    puVar14 = (ulong *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
    uVar17 = (ulong)*(char *)((long)puVar14 + 0x17);
    if ((long)uVar17 < 0) goto LAB_10adfd304;
LAB_10adfd2a8:
    puVar3 = puVar14;
    uVar18 = uVar17;
    if ((int)uVar17 != 0) {
joined_r0x00010adfd314:
      if (uVar18 << 0x20 == 0) {
LAB_10adfd3d4:
        if (((uint)uVar17 >> 7 & 1) != 0) goto LAB_10adfd40c;
LAB_10adfd3d8:
        uVar17 = uVar17 & 0xff;
LAB_10adfd418:
        if ((long)uVar17 <= (*(long *)param_3 - (long)pbVar11) + 0xe) {
          *pbVar11 = 0x2a;
          pbVar11[1] = (byte)uVar17;
          puVar3 = (ulong *)*puVar14;
          if (-1 < *(char *)((long)puVar14 + 0x17)) {
            puVar3 = puVar14;
          }
          _memcpy(pbVar11 + 2,puVar3,uVar17);
          pbVar11 = pbVar11 + 2 + uVar17;
          goto LAB_10adfd45c;
        }
      }
      else {
        lVar8 = (long)(uVar18 << 0x20) >> 0x20;
        puVar2 = (ulong *)((long)puVar3 + lVar8);
        puVar10 = puVar3;
        for (; (7 < lVar8 && ((*puVar3 & 0x8080808080808080) == 0)); puVar3 = puVar3 + 1) {
          puVar10 = puVar10 + 1;
          lVar8 = lVar8 + -8;
        }
        puVar6 = puVar3;
        if (puVar3 < puVar2) {
          uVar12 = (long)puVar2 - (long)puVar10;
          puVar10 = puVar3;
          for (uVar18 = uVar12 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
            puVar6 = puVar10;
            if ((char)*puVar10 < '\0') goto LAB_10adfd3c8;
            puVar10 = (ulong *)((long)puVar10 + 1);
          }
          puVar3 = (ulong *)((long)puVar3 + uVar12);
          puVar6 = puVar3;
          if (2 < uVar12 - 1) {
            puVar10 = (ulong *)((long)puVar10 + 3);
            do {
              puVar6 = puVar10;
              if ((char)*puVar10 < '\0') break;
              puVar1 = (ulong *)((long)puVar10 + 1);
              puVar10 = (ulong *)((long)puVar10 + 4);
              puVar6 = puVar3;
            } while (puVar1 != puVar3);
          }
        }
LAB_10adfd3c8:
        func_0x000107c34ffc(puVar6,puVar2,0);
        if (puVar6 != (ulong *)0x0) goto LAB_10adfd3d4;
        func_0x00010b4d3bf8(&UNK_10f7741f2,0,&UNK_10f6af306,0x28,&UNK_10f774276);
        uVar17 = (ulong)*(byte *)((long)puVar14 + 0x17);
        if (-1 < (char)*(byte *)((long)puVar14 + 0x17)) goto LAB_10adfd3d8;
LAB_10adfd40c:
        uVar17 = puVar14[1];
        if ((long)uVar17 < 0x80) goto LAB_10adfd418;
      }
      pbVar13 = param_3;
      func_0x00010b4d50d0(param_3,5,puVar14,pbVar11);
      uVar16 = *(uint *)(param_1 + 0x34);
      goto joined_r0x00010adfd460;
    }
  }
LAB_10adfd45c:
  uVar16 = *(uint *)(param_1 + 0x34);
  pbVar13 = pbVar11;
joined_r0x00010adfd460:
  if (uVar16 != 0) {
    pbVar11 = *(byte **)param_3;
    if (pbVar13 < pbVar11) {
      *pbVar13 = 0x30;
    }
    else {
      do {
        if (param_3[0x38] == 1) {
          pbVar13 = param_3 + 0x10;
          break;
        }
        pbVar7 = param_3;
        func_0x000107c303dc();
        pbVar13 = pbVar7 + ((int)pbVar13 - (int)pbVar11);
        pbVar11 = *(byte **)param_3;
      } while (pbVar11 <= pbVar13);
      uVar16 = *(uint *)(param_1 + 0x34);
      *pbVar13 = 0x30;
    }
    uVar17 = (ulong)(int)uVar16;
    pbVar11 = pbVar13 + 1;
    uVar18 = uVar17;
    pbVar13 = pbVar11;
    if (0x7f < uVar16) {
      do {
        pbVar11 = pbVar13 + 1;
        *pbVar13 = (byte)uVar18 | 0x80;
        uVar17 = uVar18 >> 7;
        uVar12 = uVar18 >> 0xe;
        uVar18 = uVar17;
        pbVar13 = pbVar11;
      } while (uVar12 != 0);
    }
    pbVar13 = pbVar11 + 1;
    *pbVar11 = (byte)uVar17;
  }
  uVar16 = *(uint *)(param_1 + 0x38);
  if (uVar16 != 0) {
    pbVar11 = *(byte **)param_3;
    if (pbVar13 < pbVar11) {
      *pbVar13 = 0x38;
    }
    else {
      do {
        if (param_3[0x38] == 1) {
          uVar16 = *(uint *)(param_1 + 0x38);
          pbVar11 = param_3 + 0x11;
          param_3[0x10] = 0x38;
          goto joined_r0x00010adfd698;
        }
        pbVar7 = param_3;
        func_0x000107c303dc();
        pbVar13 = pbVar7 + ((int)pbVar13 - (int)pbVar11);
        pbVar11 = *(byte **)param_3;
      } while (pbVar11 <= pbVar13);
      uVar16 = *(uint *)(param_1 + 0x38);
      *pbVar13 = 0x38;
    }
    pbVar11 = pbVar13 + 1;
joined_r0x00010adfd698:
    pbVar13 = pbVar11;
    uVar9 = uVar16;
    if (0x7f < uVar16) {
      do {
        pbVar11 = pbVar13 + 1;
        *pbVar13 = (byte)uVar9 | 0x80;
        uVar16 = uVar9 >> 7;
        uVar5 = uVar9 >> 0xe;
        pbVar13 = pbVar11;
        uVar9 = uVar16;
      } while (uVar5 != 0);
    }
    pbVar13 = pbVar11 + 1;
    *pbVar11 = (byte)uVar16;
  }
  iVar19 = *(int *)(param_1 + 0x3c);
  if (iVar19 != 0) {
    pbVar11 = *(byte **)param_3;
    if (pbVar11 <= pbVar13) {
      do {
        if (param_3[0x38] == 1) {
          pbVar13 = param_3 + 0x10;
          break;
        }
        pbVar7 = param_3;
        func_0x000107c303dc();
        pbVar13 = pbVar7 + ((int)pbVar13 - (int)pbVar11);
        pbVar11 = *(byte **)param_3;
      } while (pbVar11 <= pbVar13);
      iVar19 = *(int *)(param_1 + 0x3c);
    }
    *pbVar13 = 0x45;
    *(int *)(pbVar13 + 1) = iVar19;
    pbVar13 = pbVar13 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar17 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar18 = (ulong)*(char *)(uVar17 + 0x1f);
    if ((long)uVar18 < 0) {
      lVar8 = *(long *)(uVar17 + 8);
      uVar18 = (ulong)*(uint *)(uVar17 + 0x10);
    }
    else {
      lVar8 = uVar17 + 8;
    }
    uVar16 = (uint)uVar18;
    if (*(long *)param_3 - (long)pbVar13 < (long)(int)uVar16) {
      pbVar11 = (byte *)((*(long *)param_3 - (long)pbVar13) + 0x10);
      if ((int)pbVar11 < (int)uVar16) {
        do {
          lVar15 = (long)(int)pbVar11;
          _memcpy(pbVar13,lVar8,lVar15);
          uVar16 = (int)uVar18 - (int)pbVar11;
          uVar18 = (ulong)uVar16;
          lVar8 = lVar8 + lVar15;
          pbVar13 = pbVar13 + lVar15;
          pbVar11 = *(byte **)param_3;
          do {
            if ((param_3[0x38] & 1) != 0) {
              pbVar11 = pbVar11 + (0x10 - (long)(param_3 + 0x10));
              iVar19 = (int)pbVar11;
              pbVar13 = param_3 + 0x10;
              goto joined_r0x00010adfd728;
            }
            pbVar7 = param_3;
            func_0x000107c303dc();
            pbVar13 = pbVar7 + ((int)pbVar13 - (int)pbVar11);
            pbVar11 = *(byte **)param_3;
          } while (pbVar11 <= pbVar13);
          pbVar11 = pbVar11 + (0x10 - (long)pbVar13);
          iVar19 = (int)pbVar11;
joined_r0x00010adfd728:
        } while (iVar19 < (int)uVar16);
      }
      _memcpy(pbVar13,lVar8,(long)(int)uVar16);
      pbVar13 = pbVar13 + (int)uVar16;
    }
    else {
      _memcpy(pbVar13,lVar8,uVar18 & 0xffffffff);
      pbVar13 = pbVar13 + (int)uVar16;
    }
  }
  return pbVar13;
}



/* Entry: 10adfd748; end: 10adfd92b;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_10adfd748(long param_1)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  lVar3 = lVar4;
  if (lVar4 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 == 0) {
    lVar3 = 0;
    uVar2 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
    cVar1 = *(char *)(uVar2 + 0x17);
  }
  else {
    lVar3 = *(long *)(uVar2 + 8);
    if (-1 < *(char *)(uVar2 + 0x17)) {
      lVar3 = lVar4;
    }
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
    uVar2 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
    cVar1 = *(char *)(uVar2 + 0x17);
  }
  lVar5 = (long)cVar1;
  lVar4 = lVar5;
  if (lVar5 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    lVar4 = *(long *)(uVar2 + 8);
    if (-1 < cVar1) {
      lVar4 = lVar5;
    }
    lVar3 = lVar3 + lVar4 + (ulong)((int)LZCOUNT((int)lVar4) * -9 + 0x160U >> 6) + 1;
  }
  uVar2 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar2 + 0x17);
  lVar4 = lVar5;
  if (lVar5 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    lVar4 = *(long *)(uVar2 + 8);
    if (-1 < *(char *)(uVar2 + 0x17)) {
      lVar4 = lVar5;
    }
    lVar3 = lVar3 + lVar4 + (ulong)((int)LZCOUNT((int)lVar4) * -9 + 0x160U >> 6) + 1;
  }
  uVar2 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar2 + 0x17);
  lVar4 = lVar5;
  if (lVar5 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    lVar4 = *(long *)(uVar2 + 8);
    if (-1 < *(char *)(uVar2 + 0x17)) {
      lVar4 = lVar5;
    }
    lVar3 = lVar3 + lVar4 + (ulong)((int)LZCOUNT((int)lVar4) * -9 + 0x160U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x30)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x34)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x38)) * -9 + 0x1a0U >> 6);
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    lVar3 = lVar3 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar2 + 0x10);
    }
    *(int *)(param_1 + 0x40) = (int)(lVar4 + lVar3);
    return lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x40) = (int)lVar3;
  return lVar3;
}



/* Entry: 10adfd92c; end: 10adfe037;  */

void FUN_10adfd92c(long param_1,long param_2)

{
  char cVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar7 = (undefined8 *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
  cVar1 = *(char *)((long)puVar7 + 0x17);
  uVar8 = (ulong)cVar1;
  if (-1 < (long)uVar8) {
    if (uVar8 == 0) goto LAB_10adfdacc;
LAB_10adfd96c:
    plVar5 = *(long **)(param_1 + 8);
    if (((ulong)plVar5 & 1) == 0) {
      uVar9 = *(ulong *)(param_1 + 0x10);
    }
    else {
      plVar5 = *(long **)((ulong)plVar5 & 0xfffffffffffffffe);
      uVar9 = *(ulong *)(param_1 + 0x10);
    }
    if ((uVar9 & 3) != 0) {
      puVar6 = (undefined8 *)(uVar9 & 0xfffffffffffffffc);
      if (puVar6 != puVar7) {
        if (*(char *)((long)puVar6 + 0x17) < '\0') {
          uVar9 = puVar7[1];
          puVar2 = (undefined8 *)*puVar7;
          if (-1 < cVar1) {
            uVar9 = uVar8;
            puVar2 = puVar7;
          }
          func_0x000107c27ba0(puVar6,puVar2,uVar9);
        }
        else if (cVar1 < '\0') {
          func_0x000107c27ba4(puVar6,*puVar7,puVar7[1]);
        }
        else {
          uVar12 = puVar7[1];
          uVar11 = *puVar7;
          puVar6[2] = puVar7[2];
          puVar6[1] = uVar12;
          *puVar6 = uVar11;
        }
      }
      goto LAB_10adfdacc;
    }
    uVar9 = puVar7[1];
    puVar6 = (undefined8 *)*puVar7;
    if (-1 < cVar1) {
      uVar9 = uVar8;
      puVar6 = puVar7;
    }
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)0x18;
      __Znwm();
      if (uVar9 < 0x7ffffffffffffff7) {
        if (uVar9 < 0x17) {
          *(char *)((long)plVar5 + 0x17) = (char)uVar9;
          uVar8 = 2;
          plVar4 = plVar5;
          plVar10 = plVar5;
          if (uVar9 == 0) goto LAB_10adfdac0;
        }
        else {
          plVar10 = (long *)0x19;
          if ((uVar9 | 7) != 0x17) {
            plVar10 = (long *)((uVar9 | 7) + 1);
          }
          plVar4 = plVar10;
          __Znwm();
          *plVar5 = (long)plVar4;
          uVar8 = 2;
LAB_10adfdaa0:
          plVar5[1] = uVar9;
          plVar5[2] = (ulong)plVar10 | 0x8000000000000000;
          plVar10 = plVar5;
        }
LAB_10adfdab0:
        _memmove(plVar4,puVar6,uVar9);
        plVar5 = plVar4;
LAB_10adfdac0:
        *(undefined1 *)((long)plVar5 + uVar9) = 0;
        *(ulong *)(param_1 + 0x10) = uVar8 | (ulong)plVar10;
        goto LAB_10adfdacc;
      }
    }
    else {
      func_0x00010b4d80a4();
      if (uVar9 < 0x7ffffffffffffff7) {
        if (0x16 < uVar9) {
          plVar10 = (long *)0x19;
          if ((uVar9 | 7) != 0x17) {
            plVar10 = (long *)((uVar9 | 7) + 1);
          }
          plVar4 = plVar10;
          __Znwm();
          *plVar5 = (long)plVar4;
          uVar8 = 3;
          goto LAB_10adfdaa0;
        }
        *(char *)((long)plVar5 + 0x17) = (char)uVar9;
        uVar8 = 3;
        plVar4 = plVar5;
        plVar10 = plVar5;
        if (uVar9 != 0) goto LAB_10adfdab0;
        goto LAB_10adfdac0;
      }
LAB_10adfdfc4:
      func_0x000104bd47d4();
    }
    func_0x000104bd47d4();
LAB_10adfdfe4:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10adfdfe8);
    (*pcVar3)();
  }
  if (puVar7[1] != 0) goto LAB_10adfd96c;
LAB_10adfdacc:
  puVar7 = (undefined8 *)(*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc);
  cVar1 = *(char *)((long)puVar7 + 0x17);
  uVar9 = (ulong)cVar1;
  uVar8 = uVar9;
  if ((long)uVar9 < 0) {
    uVar8 = puVar7[1];
  }
  if (uVar8 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    if (((ulong)plVar5 & 1) == 0) {
      uVar8 = *(ulong *)(param_1 + 0x18);
    }
    else {
      plVar5 = *(long **)((ulong)plVar5 & 0xfffffffffffffffe);
      uVar8 = *(ulong *)(param_1 + 0x18);
    }
    if ((uVar8 & 3) == 0) {
      uVar8 = puVar7[1];
      puVar6 = (undefined8 *)*puVar7;
      if (-1 < cVar1) {
        uVar8 = uVar9;
        puVar6 = puVar7;
      }
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)0x18;
        __Znwm();
        if (0x7ffffffffffffff6 < uVar8) {
          func_0x000104bd47d4();
          goto LAB_10adfdfe4;
        }
        if (0x16 < uVar8) {
          plVar10 = (long *)0x19;
          if ((uVar8 | 7) != 0x17) {
            plVar10 = (long *)((uVar8 | 7) + 1);
          }
          plVar4 = plVar10;
          __Znwm();
          *plVar5 = (long)plVar4;
          uVar9 = 2;
          goto LAB_10adfdc20;
        }
        *(char *)((long)plVar5 + 0x17) = (char)uVar8;
        uVar9 = 2;
        plVar4 = plVar5;
        plVar10 = plVar5;
        if (uVar8 != 0) goto LAB_10adfdc30;
      }
      else {
        func_0x00010b4d80a4();
        if (0x7ffffffffffffff6 < uVar8) goto LAB_10adfdfc4;
        if (uVar8 < 0x17) {
          *(char *)((long)plVar5 + 0x17) = (char)uVar8;
          uVar9 = 3;
          plVar4 = plVar5;
          plVar10 = plVar5;
          if (uVar8 == 0) goto LAB_10adfdc40;
        }
        else {
          plVar10 = (long *)0x19;
          if ((uVar8 | 7) != 0x17) {
            plVar10 = (long *)((uVar8 | 7) + 1);
          }
          plVar4 = plVar10;
          __Znwm();
          *plVar5 = (long)plVar4;
          uVar9 = 3;
LAB_10adfdc20:
          plVar5[1] = uVar8;
          plVar5[2] = (ulong)plVar10 | 0x8000000000000000;
          plVar10 = plVar5;
        }
LAB_10adfdc30:
        _memmove(plVar4,puVar6,uVar8);
        plVar5 = plVar4;
      }
LAB_10adfdc40:
      *(undefined1 *)((long)plVar5 + uVar8) = 0;
      *(ulong *)(param_1 + 0x18) = uVar9 | (ulong)plVar10;
    }
    else {
      puVar6 = (undefined8 *)(uVar8 & 0xfffffffffffffffc);
      if (puVar6 != puVar7) {
        if (*(char *)((long)puVar6 + 0x17) < '\0') {
          uVar8 = puVar7[1];
          puVar2 = (undefined8 *)*puVar7;
          if (-1 < cVar1) {
            uVar8 = uVar9;
            puVar2 = puVar7;
          }
          func_0x000107c27ba0(puVar6,puVar2,uVar8);
        }
        else if (cVar1 < '\0') {
          func_0x000107c27ba4(puVar6,*puVar7,puVar7[1]);
        }
        else {
          uVar12 = puVar7[1];
          uVar11 = *puVar7;
          puVar6[2] = puVar7[2];
          puVar6[1] = uVar12;
          *puVar6 = uVar11;
        }
      }
    }
  }
  puVar7 = (undefined8 *)(*(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc);
  cVar1 = *(char *)((long)puVar7 + 0x17);
  uVar9 = (ulong)cVar1;
  uVar8 = uVar9;
  if ((long)uVar9 < 0) {
    uVar8 = puVar7[1];
  }
  if (uVar8 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    if (((ulong)plVar5 & 1) == 0) {
      uVar8 = *(ulong *)(param_1 + 0x20);
    }
    else {
      plVar5 = *(long **)((ulong)plVar5 & 0xfffffffffffffffe);
      uVar8 = *(ulong *)(param_1 + 0x20);
    }
    if ((uVar8 & 3) == 0) {
      uVar8 = puVar7[1];
      puVar6 = (undefined8 *)*puVar7;
      if (-1 < cVar1) {
        uVar8 = uVar9;
        puVar6 = puVar7;
      }
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)0x18;
        __Znwm();
        if (0x7ffffffffffffff6 < uVar8) {
          func_0x000104bd47d4();
          goto LAB_10adfdfe4;
        }
        if (0x16 < uVar8) {
          plVar10 = (long *)0x19;
          if ((uVar8 | 7) != 0x17) {
            plVar10 = (long *)((uVar8 | 7) + 1);
          }
          plVar4 = plVar10;
          __Znwm();
          *plVar5 = (long)plVar4;
          uVar9 = 2;
          goto LAB_10adfdda0;
        }
        *(char *)((long)plVar5 + 0x17) = (char)uVar8;
        uVar9 = 2;
        plVar4 = plVar5;
        plVar10 = plVar5;
        if (uVar8 != 0) goto LAB_10adfddb0;
      }
      else {
        func_0x00010b4d80a4();
        if (0x7ffffffffffffff6 < uVar8) goto LAB_10adfdfc4;
        if (uVar8 < 0x17) {
          *(char *)((long)plVar5 + 0x17) = (char)uVar8;
          uVar9 = 3;
          plVar4 = plVar5;
          plVar10 = plVar5;
          if (uVar8 == 0) goto LAB_10adfddc0;
        }
        else {
          plVar10 = (long *)0x19;
          if ((uVar8 | 7) != 0x17) {
            plVar10 = (long *)((uVar8 | 7) + 1);
          }
          plVar4 = plVar10;
          __Znwm();
          *plVar5 = (long)plVar4;
          uVar9 = 3;
LAB_10adfdda0:
          plVar5[1] = uVar8;
          plVar5[2] = (ulong)plVar10 | 0x8000000000000000;
          plVar10 = plVar5;
        }
LAB_10adfddb0:
        _memmove(plVar4,puVar6,uVar8);
        plVar5 = plVar4;
      }
LAB_10adfddc0:
      *(undefined1 *)((long)plVar5 + uVar8) = 0;
      *(ulong *)(param_1 + 0x20) = uVar9 | (ulong)plVar10;
    }
    else {
      puVar6 = (undefined8 *)(uVar8 & 0xfffffffffffffffc);
      if (puVar6 != puVar7) {
        if (*(char *)((long)puVar6 + 0x17) < '\0') {
          uVar8 = puVar7[1];
          puVar2 = (undefined8 *)*puVar7;
          if (-1 < cVar1) {
            uVar8 = uVar9;
            puVar2 = puVar7;
          }
          func_0x000107c27ba0(puVar6,puVar2,uVar8);
        }
        else if (cVar1 < '\0') {
          func_0x000107c27ba4(puVar6,*puVar7,puVar7[1]);
        }
        else {
          uVar12 = puVar7[1];
          uVar11 = *puVar7;
          puVar6[2] = puVar7[2];
          puVar6[1] = uVar12;
          *puVar6 = uVar11;
        }
      }
    }
  }
  puVar7 = (undefined8 *)(*(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc);
  cVar1 = *(char *)((long)puVar7 + 0x17);
  uVar9 = (ulong)cVar1;
  uVar8 = uVar9;
  if ((long)uVar9 < 0) {
    uVar8 = puVar7[1];
  }
  if (uVar8 == 0) goto LAB_10adfdf4c;
  plVar5 = *(long **)(param_1 + 8);
  if (((ulong)plVar5 & 1) == 0) {
    uVar8 = *(ulong *)(param_1 + 0x28);
  }
  else {
    plVar5 = *(long **)((ulong)plVar5 & 0xfffffffffffffffe);
    uVar8 = *(ulong *)(param_1 + 0x28);
  }
  if ((uVar8 & 3) != 0) {
    puVar6 = (undefined8 *)(uVar8 & 0xfffffffffffffffc);
    if (puVar6 != puVar7) {
      if (*(char *)((long)puVar6 + 0x17) < '\0') {
        uVar8 = puVar7[1];
        puVar2 = (undefined8 *)*puVar7;
        if (-1 < cVar1) {
          uVar8 = uVar9;
          puVar2 = puVar7;
        }
        func_0x000107c27ba0(puVar6,puVar2,uVar8);
      }
      else if (cVar1 < '\0') {
        func_0x000107c27ba4(puVar6,*puVar7,puVar7[1]);
      }
      else {
        uVar12 = puVar7[1];
        uVar11 = *puVar7;
        puVar6[2] = puVar7[2];
        puVar6[1] = uVar12;
        *puVar6 = uVar11;
      }
    }
    goto LAB_10adfdf4c;
  }
  uVar8 = puVar7[1];
  puVar6 = (undefined8 *)*puVar7;
  if (-1 < cVar1) {
    uVar8 = uVar9;
    puVar6 = puVar7;
  }
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)0x18;
    __Znwm();
    if (0x7ffffffffffffff6 < uVar8) {
      func_0x000104bd47d4();
      goto LAB_10adfdfe4;
    }
    if (0x16 < uVar8) {
      plVar10 = (long *)0x19;
      if ((uVar8 | 7) != 0x17) {
        plVar10 = (long *)((uVar8 | 7) + 1);
      }
      plVar4 = plVar10;
      __Znwm();
      *plVar5 = (long)plVar4;
      uVar9 = 2;
      goto LAB_10adfdf20;
    }
    *(char *)((long)plVar5 + 0x17) = (char)uVar8;
    uVar9 = 2;
    plVar4 = plVar5;
    plVar10 = plVar5;
    if (uVar8 != 0) goto LAB_10adfdf30;
  }
  else {
    func_0x00010b4d80a4();
    if (0x7ffffffffffffff6 < uVar8) goto LAB_10adfdfc4;
    if (uVar8 < 0x17) {
      *(char *)((long)plVar5 + 0x17) = (char)uVar8;
      uVar9 = 3;
      plVar4 = plVar5;
      plVar10 = plVar5;
      if (uVar8 == 0) goto LAB_10adfdf40;
    }
    else {
      plVar10 = (long *)0x19;
      if ((uVar8 | 7) != 0x17) {
        plVar10 = (long *)((uVar8 | 7) + 1);
      }
      plVar4 = plVar10;
      __Znwm();
      *plVar5 = (long)plVar4;
      uVar9 = 3;
LAB_10adfdf20:
      plVar5[1] = uVar8;
      plVar5[2] = (ulong)plVar10 | 0x8000000000000000;
      plVar10 = plVar5;
    }
LAB_10adfdf30:
    _memmove(plVar4,puVar6,uVar8);
    plVar5 = plVar4;
  }
LAB_10adfdf40:
  *(undefined1 *)((long)plVar5 + uVar8) = 0;
  *(ulong *)(param_1 + 0x28) = uVar9 | (ulong)plVar10;
LAB_10adfdf4c:
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_2 + 0x34);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_2 + 0x38);
  }
  if (*(int *)(param_2 + 0x3c) != 0) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_2 + 0x3c);
  }
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



/* Entry: 10adfe038; end: 10adfe17f;  */

long FUN_10adfe038(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar3 = (undefined8 *)(*(ulong *)(param_1 + 0x40) ^ 2);
  puVar2 = puVar3;
  if (((ulong)puVar3 & 3) != 0) {
    puVar2 = (undefined8 *)0x0;
  }
  if ((puVar2 != (undefined8 *)0x0) && (*(char *)((long)puVar3 + 0x17) < '\0')) {
    __ZdlPv(*puVar3);
  }
  puVar1 = (ulong *)(param_1 + 0x10);
  __ZdlPv(puVar2);
  puVar5 = (ulong *)(param_1 + 0x28);
  uVar4 = *puVar5;
  if (uVar4 != 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
      if ((uVar4 & 1) == 0) {
        uVar6 = 1;
        puVar7 = puVar5;
LAB_10adfe0d4:
        do {
          if ((long *)*puVar7 != (long *)0x0) {
            (**(code **)(*(long *)*puVar7 + 8))();
          }
          uVar6 = uVar6 - 1;
          puVar7 = puVar7 + 1;
        } while (uVar6 != 0);
        uVar4 = *puVar5;
        if ((uVar4 & 1) == 0) goto LAB_10adfe0fc;
      }
      else {
        uVar6 = (ulong)*(uint *)(uVar4 - 1);
        if (0 < (int)*(uint *)(uVar4 - 1)) {
          puVar7 = (ulong *)(uVar4 + 7);
          goto LAB_10adfe0d4;
        }
      }
      __ZdlPv(uVar4 - 1);
    }
LAB_10adfe0fc:
    *puVar5 = 0;
  }
  uVar4 = *puVar1;
  if (uVar4 == 0) {
    return param_1;
  }
  if (*(long *)(param_1 + 0x20) != 0) goto LAB_10adfe164;
  if ((uVar4 & 1) == 0) {
    uVar6 = 1;
    puVar5 = puVar1;
LAB_10adfe13c:
    do {
      if ((long *)*puVar5 != (long *)0x0) {
        (**(code **)(*(long *)*puVar5 + 8))();
      }
      uVar6 = uVar6 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar6 != 0);
    uVar4 = *puVar1;
    if ((uVar4 & 1) == 0) goto LAB_10adfe164;
  }
  else {
    uVar6 = (ulong)*(uint *)(uVar4 - 1);
    if (0 < (int)*(uint *)(uVar4 - 1)) {
      puVar5 = (ulong *)(uVar4 + 7);
      goto LAB_10adfe13c;
    }
  }
  __ZdlPv(uVar4 - 1);
LAB_10adfe164:
  *puVar1 = 0;
  return param_1;
}



/* Entry: 10adfe180; end: 10adfe183;  */

long FUN_10adfe180(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar3 = (undefined8 *)(*(ulong *)(param_1 + 0x40) ^ 2);
  puVar2 = puVar3;
  if (((ulong)puVar3 & 3) != 0) {
    puVar2 = (undefined8 *)0x0;
  }
  if ((puVar2 != (undefined8 *)0x0) && (*(char *)((long)puVar3 + 0x17) < '\0')) {
    __ZdlPv(*puVar3);
  }
  puVar1 = (ulong *)(param_1 + 0x10);
  __ZdlPv(puVar2);
  puVar5 = (ulong *)(param_1 + 0x28);
  uVar4 = *puVar5;
  if (uVar4 != 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
      if ((uVar4 & 1) == 0) {
        uVar6 = 1;
        puVar7 = puVar5;
LAB_10adfe0d4:
        do {
          if ((long *)*puVar7 != (long *)0x0) {
            (**(code **)(*(long *)*puVar7 + 8))();
          }
          uVar6 = uVar6 - 1;
          puVar7 = puVar7 + 1;
        } while (uVar6 != 0);
        uVar4 = *puVar5;
        if ((uVar4 & 1) == 0) goto LAB_10adfe0fc;
      }
      else {
        uVar6 = (ulong)*(uint *)(uVar4 - 1);
        if (0 < (int)*(uint *)(uVar4 - 1)) {
          puVar7 = (ulong *)(uVar4 + 7);
          goto LAB_10adfe0d4;
        }
      }
      __ZdlPv(uVar4 - 1);
    }
LAB_10adfe0fc:
    *puVar5 = 0;
  }
  uVar4 = *puVar1;
  if (uVar4 == 0) {
    return param_1;
  }
  if (*(long *)(param_1 + 0x20) != 0) goto LAB_10adfe164;
  if ((uVar4 & 1) == 0) {
    uVar6 = 1;
    puVar5 = puVar1;
LAB_10adfe13c:
    do {
      if ((long *)*puVar5 != (long *)0x0) {
        (**(code **)(*(long *)*puVar5 + 8))();
      }
      uVar6 = uVar6 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar6 != 0);
    uVar4 = *puVar1;
    if ((uVar4 & 1) == 0) goto LAB_10adfe164;
  }
  else {
    uVar6 = (ulong)*(uint *)(uVar4 - 1);
    if (0 < (int)*(uint *)(uVar4 - 1)) {
      puVar5 = (ulong *)(uVar4 + 7);
      goto LAB_10adfe13c;
    }
  }
  __ZdlPv(uVar4 - 1);
LAB_10adfe164:
  *puVar1 = 0;
  return param_1;
}



/* Entry: 10adfe184; end: 10adfe197;  */

void FUN_10adfe184(void)

{
  FUN_10adfe038();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10adfe198; end: 10adfe1a3;  */

undefined ** FUN_10adfe198(void)

{
  return &PTR_DAT_110c773d8;
}



/* Entry: 10adfe1a4; end: 10adfe23b;  */

void FUN_10adfe1a4(long param_1)

{
  byte bVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  if (0 < *(int *)(param_1 + 0x30)) {
    func_0x0001053936e4(param_1 + 0x28);
  }
  if ((*(ulong *)(param_1 + 0x40) & 3) != 0) {
    puVar3 = (undefined8 *)(*(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar3 + 0x17) < '\0') {
      *(undefined1 *)*puVar3 = 0;
      puVar3[1] = 0;
      bVar1 = *(byte *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0x48) = 0;
      goto joined_r0x00010adfe228;
    }
    *(undefined1 *)puVar3 = 0;
    *(undefined1 *)((long)puVar3 + 0x17) = 0;
  }
  bVar1 = *(byte *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x48) = 0;
joined_r0x00010adfe228:
  if ((bVar1 & 1) == 0) {
    return;
  }
  puVar2 = (ulong *)(param_1 + 8);
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (*(char *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(undefined1 *)puVar2 = 0;
  *(undefined1 *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 10adfe23c; end: 10adfe7eb;  */

void FUN_10adfe23c(long param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  ulong *puVar2;
  uint uVar3;
  byte *pbVar4;
  long *plVar5;
  byte *pbVar6;
  long lVar7;
  ulong *puVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  int iVar17;
  int iVar18;
  byte *pbVar19;
  undefined8 uVar20;
  byte *pbStack_70;
  uint uStack_64;
  
  puVar8 = (ulong *)(*(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc);
  uVar13 = (ulong)*(char *)((long)puVar8 + 0x17);
  if ((long)uVar13 < 0) {
    uVar13 = puVar8[1];
    if (uVar13 == 0) goto LAB_10adfe2d8;
    if ((long)uVar13 < 0x80) goto LAB_10adfe294;
  }
  else {
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_10adfe2d8;
LAB_10adfe294:
    if ((long)uVar13 <= (*(long *)param_3 - (long)param_2) + 0xe) {
      *param_2 = 10;
      param_2[1] = (byte)uVar13;
      puVar2 = (ulong *)*puVar8;
      if (-1 < *(char *)((long)puVar8 + 0x17)) {
        puVar2 = puVar8;
      }
      _memcpy(param_2 + 2,puVar2,uVar13);
      param_2 = param_2 + 2 + uVar13;
      goto LAB_10adfe2d8;
    }
  }
  pbVar10 = param_3;
  func_0x00010b4d50d0(param_3,1,puVar8,param_2);
  param_2 = pbVar10;
LAB_10adfe2d8:
  iVar18 = *(int *)(param_1 + 0x18);
  if (iVar18 != 0) {
    iVar17 = 0;
    pbVar6 = param_3 + 0x10;
    pbVar1 = param_3 + 0x20;
    pbVar10 = param_2;
    do {
      uVar13 = *(ulong *)(param_1 + 0x10);
      puVar8 = (ulong *)(param_1 + 0x10);
      if ((uVar13 & 1) != 0) {
        puVar8 = (ulong *)(uVar13 + (long)iVar17 * 8 + 7);
      }
      param_2 = (byte *)*puVar8;
      uVar15 = *(uint *)(param_2 + 0x20);
      pbVar19 = *(byte **)param_3;
      pbVar4 = pbVar10;
      if (pbVar19 <= pbVar10) {
        do {
          pbVar4 = pbVar6;
          if ((param_3[0x38] & 1) != 0) break;
          pbVar11 = pbVar1;
          if (*(long *)(param_3 + 0x30) == 0) {
            param_3[0x38] = 1;
LAB_10adfe440:
            *(byte **)param_3 = pbVar11;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar20 = *(undefined8 *)pbVar19;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar19 + 8);
              *(undefined8 *)pbVar6 = uVar20;
              *(byte **)(param_3 + 8) = pbVar19;
              goto LAB_10adfe440;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar6,(long)pbVar19 - (long)pbVar6);
            do {
              plVar5 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar5 + 0x10))(plVar5,&pbStack_70,&uStack_64);
              if (((ulong)plVar5 & 1) == 0) {
                param_3[0x38] = 1;
                *(byte **)param_3 = pbVar1;
                goto LAB_10adfe39c;
              }
            } while (uStack_64 == 0);
            puVar12 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar20 = *puVar12;
              *(undefined8 *)(param_3 + 0x18) = puVar12[1];
              *(undefined8 *)pbVar6 = uVar20;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar11 = pbVar6 + (int)uStack_64;
              goto LAB_10adfe440;
            }
            uVar20 = *puVar12;
            *(undefined8 *)(pbStack_70 + 8) = puVar12[1];
            *(undefined8 *)pbStack_70 = uVar20;
            *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            param_3[8] = 0;
            param_3[9] = 0;
            param_3[10] = 0;
            param_3[0xb] = 0;
            param_3[0xc] = 0;
            param_3[0xd] = 0;
            param_3[0xe] = 0;
            param_3[0xf] = 0;
            pbVar4 = pbStack_70;
            pbVar11 = pbStack_70 + ((ulong)uStack_64 - 0x10);
          }
LAB_10adfe39c:
          pbVar10 = pbVar4 + ((int)pbVar10 - (int)pbVar19);
          pbVar4 = pbVar10;
          pbVar19 = pbVar11;
        } while (pbVar11 <= pbVar10);
      }
      pbVar10 = pbVar4 + 1;
      *pbVar4 = 0x12;
      if (0x7f < uVar15) {
        do {
          pbVar4 = pbVar10;
          pbVar10 = pbVar4 + 1;
          *pbVar4 = (byte)uVar15 | 0x80;
          uVar9 = uVar15 >> 0xe;
          uVar15 = uVar15 >> 7;
        } while (uVar9 != 0);
      }
      *pbVar10 = (byte)uVar15;
      (**(code **)(*(long *)param_2 + 0x38))(param_2,pbVar4 + 2,param_3);
      iVar17 = iVar17 + 1;
      pbVar10 = param_2;
    } while (iVar17 != iVar18);
  }
  iVar18 = *(int *)(param_1 + 0x30);
  if (iVar18 != 0) {
    iVar17 = 0;
    pbVar6 = param_3 + 0x10;
    pbVar1 = param_3 + 0x20;
    pbVar10 = param_2;
    do {
      uVar13 = *(ulong *)(param_1 + 0x28);
      puVar8 = (ulong *)(param_1 + 0x28);
      if ((uVar13 & 1) != 0) {
        puVar8 = (ulong *)(uVar13 + (long)iVar17 * 8 + 7);
      }
      param_2 = (byte *)*puVar8;
      uVar15 = *(uint *)(param_2 + 0x24);
      pbVar19 = *(byte **)param_3;
      pbVar4 = pbVar10;
      if (pbVar19 <= pbVar10) {
        do {
          pbVar4 = pbVar6;
          if ((param_3[0x38] & 1) != 0) break;
          pbVar11 = pbVar1;
          if (*(long *)(param_3 + 0x30) == 0) {
            param_3[0x38] = 1;
LAB_10adfe5e0:
            *(byte **)param_3 = pbVar11;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar20 = *(undefined8 *)pbVar19;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar19 + 8);
              *(undefined8 *)pbVar6 = uVar20;
              *(byte **)(param_3 + 8) = pbVar19;
              goto LAB_10adfe5e0;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar6,(long)pbVar19 - (long)pbVar6);
            do {
              plVar5 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar5 + 0x10))(plVar5,&pbStack_70,&uStack_64);
              if (((ulong)plVar5 & 1) == 0) {
                param_3[0x38] = 1;
                *(byte **)param_3 = pbVar1;
                goto LAB_10adfe53c;
              }
            } while (uStack_64 == 0);
            puVar12 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar20 = *puVar12;
              *(undefined8 *)(param_3 + 0x18) = puVar12[1];
              *(undefined8 *)pbVar6 = uVar20;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar11 = pbVar6 + (int)uStack_64;
              goto LAB_10adfe5e0;
            }
            uVar20 = *puVar12;
            *(undefined8 *)(pbStack_70 + 8) = puVar12[1];
            *(undefined8 *)pbStack_70 = uVar20;
            *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            param_3[8] = 0;
            param_3[9] = 0;
            param_3[10] = 0;
            param_3[0xb] = 0;
            param_3[0xc] = 0;
            param_3[0xd] = 0;
            param_3[0xe] = 0;
            param_3[0xf] = 0;
            pbVar4 = pbStack_70;
            pbVar11 = pbStack_70 + ((ulong)uStack_64 - 0x10);
          }
LAB_10adfe53c:
          pbVar10 = pbVar4 + ((int)pbVar10 - (int)pbVar19);
          pbVar4 = pbVar10;
          pbVar19 = pbVar11;
        } while (pbVar11 <= pbVar10);
      }
      pbVar10 = pbVar4 + 1;
      *pbVar4 = 0x1a;
      if (0x7f < uVar15) {
        do {
          pbVar4 = pbVar10;
          pbVar10 = pbVar4 + 1;
          *pbVar4 = (byte)uVar15 | 0x80;
          uVar9 = uVar15 >> 0xe;
          uVar15 = uVar15 >> 7;
        } while (uVar9 != 0);
      }
      *pbVar10 = (byte)uVar15;
      (**(code **)(*(long *)param_2 + 0x38))(param_2,pbVar4 + 2,param_3);
      iVar17 = iVar17 + 1;
      pbVar10 = param_2;
    } while (iVar17 != iVar18);
  }
  uVar15 = *(uint *)(param_1 + 0x48);
  if (uVar15 != 0) {
    pbVar10 = *(byte **)param_3;
    if (param_2 < pbVar10) {
      pbVar10 = param_2 + 1;
      *param_2 = 0x20;
    }
    else {
      do {
        if (param_3[0x38] == 1) {
          uVar15 = *(uint *)(param_1 + 0x48);
          pbVar10 = param_3 + 0x11;
          param_3[0x10] = 0x20;
          goto joined_r0x00010adfe6ac;
        }
        pbVar6 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar6 + ((int)param_2 - (int)pbVar10);
        pbVar10 = *(byte **)param_3;
      } while (pbVar10 <= param_2);
      uVar15 = *(uint *)(param_1 + 0x48);
      pbVar10 = param_2 + 1;
      *param_2 = 0x20;
    }
joined_r0x00010adfe6ac:
    pbVar6 = pbVar10;
    uVar9 = uVar15;
    if (0x7f < uVar15) {
      do {
        pbVar10 = pbVar6 + 1;
        *pbVar6 = (byte)uVar9 | 0x80;
        uVar15 = uVar9 >> 7;
        uVar3 = uVar9 >> 0xe;
        pbVar6 = pbVar10;
        uVar9 = uVar15;
      } while (uVar3 != 0);
    }
    param_2 = pbVar10 + 1;
    *pbVar10 = (byte)uVar15;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar13 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar16 = (ulong)*(char *)(uVar13 + 0x1f);
    if ((long)uVar16 < 0) {
      lVar7 = *(long *)(uVar13 + 8);
      uVar16 = (ulong)*(uint *)(uVar13 + 0x10);
    }
    else {
      lVar7 = uVar13 + 8;
    }
    uVar15 = (uint)uVar16;
    if (*(long *)param_3 - (long)param_2 < (long)(int)uVar15) {
      pbVar10 = (byte *)((*(long *)param_3 - (long)param_2) + 0x10);
      if ((int)pbVar10 < (int)uVar15) {
        do {
          lVar14 = (long)(int)pbVar10;
          _memcpy(param_2,lVar7,lVar14);
          uVar15 = (int)uVar16 - (int)pbVar10;
          uVar16 = (ulong)uVar15;
          lVar7 = lVar7 + lVar14;
          param_2 = param_2 + lVar14;
          pbVar10 = *(byte **)param_3;
          do {
            if ((param_3[0x38] & 1) != 0) {
              pbVar10 = pbVar10 + (0x10 - (long)(param_3 + 0x10));
              iVar18 = (int)pbVar10;
              param_2 = param_3 + 0x10;
              goto joined_r0x00010adfe7cc;
            }
            pbVar6 = param_3;
            func_0x000107c303dc();
            param_2 = pbVar6 + ((int)param_2 - (int)pbVar10);
            pbVar10 = *(byte **)param_3;
          } while (pbVar10 <= param_2);
          pbVar10 = pbVar10 + (0x10 - (long)param_2);
          iVar18 = (int)pbVar10;
joined_r0x00010adfe7cc:
        } while (iVar18 < (int)uVar15);
      }
      _memcpy(param_2,lVar7,(long)(int)uVar15);
    }
    else {
      _memcpy();
    }
  }
  return;
}



/* Entry: 10adfe7ec; end: 10adfea93;  */

long FUN_10adfe7ec(long param_1)

{
  int iVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  lVar2 = (long)*(int *)(param_1 + 0x18);
  puVar3 = (ulong *)(param_1 + 0x10);
  if ((uVar4 & 1) != 0) {
    puVar3 = (ulong *)(uVar4 + 7);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar2 = 0;
  }
  else {
    lVar5 = lVar2 << 3;
    do {
      uVar4 = *puVar3;
      uVar6 = *(ulong *)(uVar4 + 0x10) & 0xfffffffffffffffc;
      lVar7 = (long)*(char *)(uVar6 + 0x17);
      if (lVar7 < 0) {
        if (*(long *)(uVar6 + 8) != 0) goto LAB_10adfe830;
LAB_10adfe8c0:
        lVar7 = 0;
        iVar1 = *(int *)(uVar4 + 0x18);
      }
      else {
        if (lVar7 == 0) goto LAB_10adfe8c0;
LAB_10adfe830:
        lVar8 = *(long *)(uVar6 + 8);
        if (-1 < *(char *)(uVar6 + 0x17)) {
          lVar8 = lVar7;
        }
        lVar7 = lVar8 + (ulong)((int)LZCOUNT((int)lVar8) * -9 + 0x160U >> 6) + 1;
        iVar1 = *(int *)(uVar4 + 0x18);
      }
      if (iVar1 != 0) {
        lVar7 = (ulong)((int)LZCOUNT((long)iVar1) * -9 + 0x2c0U >> 6) + lVar7;
      }
      if (*(int *)(uVar4 + 0x1c) != 0) {
        lVar7 = (ulong)((int)LZCOUNT((long)*(int *)(uVar4 + 0x1c)) * -9 + 0x2c0U >> 6) + lVar7;
      }
      if ((*(ulong *)(uVar4 + 8) & 1) != 0) {
        uVar6 = *(ulong *)(uVar4 + 8) & 0xfffffffffffffffe;
        lVar8 = (long)*(char *)(uVar6 + 0x1f);
        if (lVar8 < 0) {
          lVar8 = *(long *)(uVar6 + 0x10);
        }
        lVar7 = lVar8 + lVar7;
      }
      *(int *)(uVar4 + 0x20) = (int)lVar7;
      lVar2 = lVar7 + lVar2 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6);
      puVar3 = puVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  uVar4 = *(ulong *)(param_1 + 0x28);
  iVar1 = *(int *)(param_1 + 0x30);
  lVar2 = lVar2 + iVar1;
  puVar3 = (ulong *)(param_1 + 0x28);
  if ((uVar4 & 1) != 0) {
    puVar3 = (ulong *)(uVar4 + 7);
  }
  if (iVar1 != 0) {
    lVar5 = (long)iVar1 << 3;
    do {
      uVar4 = *puVar3;
      uVar6 = *(ulong *)(uVar4 + 0x10) & 0xfffffffffffffffc;
      lVar7 = (long)*(char *)(uVar6 + 0x17);
      if (lVar7 < 0) {
        if (*(long *)(uVar6 + 8) != 0) goto LAB_10adfe930;
LAB_10adfe9c8:
        lVar7 = 0;
        iVar1 = *(int *)(uVar4 + 0x18);
      }
      else {
        if (lVar7 == 0) goto LAB_10adfe9c8;
LAB_10adfe930:
        lVar8 = *(long *)(uVar6 + 8);
        if (-1 < *(char *)(uVar6 + 0x17)) {
          lVar8 = lVar7;
        }
        lVar7 = lVar8 + (ulong)((int)LZCOUNT((int)lVar8) * -9 + 0x160U >> 6) + 1;
        iVar1 = *(int *)(uVar4 + 0x18);
      }
      if (iVar1 != 0) {
        lVar7 = (ulong)((int)LZCOUNT((long)iVar1) * -9 + 0x2c0U >> 6) + lVar7;
      }
      if (*(int *)(uVar4 + 0x1c) != 0) {
        lVar7 = (ulong)((int)LZCOUNT((long)*(int *)(uVar4 + 0x1c)) * -9 + 0x2c0U >> 6) + lVar7;
      }
      lVar7 = lVar7 + (ulong)*(byte *)(uVar4 + 0x20) * 2;
      if ((*(ulong *)(uVar4 + 8) & 1) != 0) {
        uVar6 = *(ulong *)(uVar4 + 8) & 0xfffffffffffffffe;
        lVar8 = (long)*(char *)(uVar6 + 0x1f);
        if (lVar8 < 0) {
          lVar8 = *(long *)(uVar6 + 0x10);
        }
        lVar7 = lVar8 + lVar7;
      }
      *(int *)(uVar4 + 0x24) = (int)lVar7;
      lVar2 = lVar7 + lVar2 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6);
      puVar3 = puVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  uVar4 = *(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar4 + 0x17);
  lVar5 = lVar7;
  if (lVar7 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    lVar5 = *(long *)(uVar4 + 8);
    if (-1 < *(char *)(uVar4 + 0x17)) {
      lVar5 = lVar7;
    }
    lVar2 = lVar2 + lVar5 + (ulong)((int)LZCOUNT((int)lVar5) * -9 + 0x160U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    lVar2 = lVar2 + (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x48)) * -9 + 0x1a0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar4 + 0x10);
    }
    *(int *)(param_1 + 0x4c) = (int)(lVar5 + lVar2);
    return lVar5 + lVar2;
  }
  *(int *)(param_1 + 0x4c) = (int)lVar2;
  return lVar2;
}



/* Entry: 10adfea94; end: 10adfecd3;  */

void FUN_10adfea94(long param_1,long param_2)

{
  char cVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    func_0x000107c303c4(param_1 + 0x28,param_2 + 0x28);
  }
  puVar7 = (undefined8 *)(*(ulong *)(param_2 + 0x40) & 0xfffffffffffffffc);
  cVar1 = *(char *)((long)puVar7 + 0x17);
  uVar8 = (ulong)cVar1;
  uVar9 = uVar8;
  if ((long)uVar8 < 0) {
    uVar9 = puVar7[1];
  }
  if (uVar9 == 0) goto LAB_10adfec64;
  plVar4 = *(long **)(param_1 + 8);
  if (((ulong)plVar4 & 1) == 0) {
    uVar9 = *(ulong *)(param_1 + 0x40);
  }
  else {
    plVar4 = *(long **)((ulong)plVar4 & 0xfffffffffffffffe);
    uVar9 = *(ulong *)(param_1 + 0x40);
  }
  if ((uVar9 & 3) != 0) {
    puVar5 = (undefined8 *)(uVar9 & 0xfffffffffffffffc);
    if (puVar5 != puVar7) {
      if (*(char *)((long)puVar5 + 0x17) < '\0') {
        uVar9 = puVar7[1];
        puVar2 = (undefined8 *)*puVar7;
        if (-1 < cVar1) {
          uVar9 = uVar8;
          puVar2 = puVar7;
        }
        func_0x000107c27ba0(puVar5,puVar2,uVar9);
      }
      else if (cVar1 < '\0') {
        func_0x000107c27ba4(puVar5,*puVar7,puVar7[1]);
      }
      else {
        uVar12 = puVar7[1];
        uVar11 = *puVar7;
        puVar5[2] = puVar7[2];
        puVar5[1] = uVar12;
        *puVar5 = uVar11;
      }
    }
    goto LAB_10adfec64;
  }
  uVar9 = puVar7[1];
  puVar5 = (undefined8 *)*puVar7;
  if (-1 < cVar1) {
    uVar9 = uVar8;
    puVar5 = puVar7;
  }
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)0x18;
    __Znwm();
    if (0x7ffffffffffffff6 < uVar9) goto LAB_10adfecb8;
    if (0x16 < uVar9) {
      plVar10 = (long *)0x19;
      if ((uVar9 | 7) != 0x17) {
        plVar10 = (long *)((uVar9 | 7) + 1);
      }
      plVar6 = plVar10;
      __Znwm();
      *plVar4 = (long)plVar6;
      uVar8 = 2;
      goto LAB_10adfec38;
    }
    *(char *)((long)plVar4 + 0x17) = (char)uVar9;
    uVar8 = 2;
    plVar6 = plVar4;
    plVar10 = plVar4;
    if (uVar9 != 0) goto LAB_10adfec48;
  }
  else {
    func_0x00010b4d80a4();
    if (0x7ffffffffffffff6 < uVar9) {
      func_0x000104bd47d4();
LAB_10adfecb8:
      func_0x000104bd47d4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10adfecc0);
      (*pcVar3)();
    }
    if (uVar9 < 0x17) {
      *(char *)((long)plVar4 + 0x17) = (char)uVar9;
      uVar8 = 3;
      plVar6 = plVar4;
      plVar10 = plVar4;
      if (uVar9 == 0) goto LAB_10adfec58;
    }
    else {
      plVar10 = (long *)0x19;
      if ((uVar9 | 7) != 0x17) {
        plVar10 = (long *)((uVar9 | 7) + 1);
      }
      plVar6 = plVar10;
      __Znwm();
      *plVar4 = (long)plVar6;
      uVar8 = 3;
LAB_10adfec38:
      plVar4[1] = uVar9;
      plVar4[2] = (ulong)plVar10 | 0x8000000000000000;
      plVar10 = plVar4;
    }
LAB_10adfec48:
    _memmove(plVar6,puVar5,uVar9);
    plVar4 = plVar6;
  }
LAB_10adfec58:
  *(undefined1 *)((long)plVar4 + uVar9) = 0;
  *(ulong *)(param_1 + 0x40) = uVar8 | (ulong)plVar10;
LAB_10adfec64:
  if (*(int *)(param_2 + 0x48) != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_2 + 0x48);
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



/* Entry: 10adfecd4; end: 10adfee77;  */

long FUN_10adfecd4(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar1 = (ulong *)(param_1 + 0x10);
  puVar3 = (undefined8 *)(*(ulong *)(param_1 + 0x28) ^ 2);
  puVar2 = puVar3;
  if (((ulong)puVar3 & 3) != 0) {
    puVar2 = (undefined8 *)0x0;
  }
  if ((puVar2 != (undefined8 *)0x0) && (*(char *)((long)puVar3 + 0x17) < '\0')) {
    __ZdlPv(*puVar3);
  }
  __ZdlPv(puVar2);
  uVar4 = *puVar1;
  if (uVar4 == 0) {
    return param_1;
  }
  if (*(long *)(param_1 + 0x20) != 0) goto LAB_10adfed90;
  if ((uVar4 & 1) == 0) {
    uVar5 = 1;
    puVar6 = puVar1;
LAB_10adfed68:
    do {
      if ((long *)*puVar6 != (long *)0x0) {
        (**(code **)(*(long *)*puVar6 + 8))();
      }
      uVar5 = uVar5 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar5 != 0);
    uVar4 = *puVar1;
    if ((uVar4 & 1) == 0) goto LAB_10adfed90;
  }
  else {
    uVar5 = (ulong)*(uint *)(uVar4 - 1);
    if (0 < (int)*(uint *)(uVar4 - 1)) {
      puVar6 = (ulong *)(uVar4 + 7);
      goto LAB_10adfed68;
    }
  }
  __ZdlPv(uVar4 - 1);
LAB_10adfed90:
  *puVar1 = 0;
  return param_1;
}



/* Entry: 10adfee78; end: 10adfee83;  */

undefined ** FUN_10adfee78(void)

{
  return &PTR_DAT_110c77420;
}



/* Entry: 10adfee84; end: 10adfef07;  */

void FUN_10adfee84(long param_1)

{
  byte bVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  if ((*(ulong *)(param_1 + 0x28) & 3) != 0) {
    puVar3 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar3 + 0x17) < '\0') {
      *(undefined1 *)*puVar3 = 0;
      puVar3[1] = 0;
      bVar1 = *(byte *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0x30) = 0;
      goto joined_r0x00010adfeef4;
    }
    *(undefined1 *)puVar3 = 0;
    *(undefined1 *)((long)puVar3 + 0x17) = 0;
  }
  bVar1 = *(byte *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x30) = 0;
joined_r0x00010adfeef4:
  if ((bVar1 & 1) == 0) {
    return;
  }
  puVar2 = (ulong *)(param_1 + 8);
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (*(char *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(undefined1 *)puVar2 = 0;
  *(undefined1 *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 10adfef08; end: 10adff457;  */

/* WARNING: Removing unreachable block (ram,0x00010adff270) */
/* WARNING: Removing unreachable block (ram,0x00010adff278) */
/* WARNING: Removing unreachable block (ram,0x00010adff268) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10adfef08(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  byte *pbVar2;
  ulong *puVar3;
  ulong *puVar4;
  char cVar5;
  uint uVar6;
  ulong *puVar7;
  byte *pbVar8;
  long *plVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  ulong *puVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  ulong *puVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  int iVar23;
  int iVar24;
  byte *pbVar25;
  undefined8 uVar26;
  byte *pbStack_70;
  uint uStack_64;
  
  puVar18 = (ulong *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
  cVar5 = *(char *)((long)puVar18 + 0x17);
  uVar21 = (ulong)cVar5;
  if ((long)uVar21 < 0) {
    if (puVar18[1] != 0) {
      puVar4 = (ulong *)*puVar18;
      uVar22 = puVar18[1];
      goto joined_r0x00010adfef68;
    }
  }
  else {
    puVar4 = puVar18;
    uVar22 = uVar21;
    if ((int)cVar5 != 0) {
joined_r0x00010adfef68:
      if (uVar22 << 0x20 == 0) {
LAB_10adff038:
        if (((uint)(int)cVar5 >> 7 & 1) != 0) goto LAB_10adff074;
LAB_10adff03c:
        uVar21 = uVar21 & 0xff;
LAB_10adff084:
        if ((long)uVar21 <= (*(long *)param_3 - (long)param_2) + 0xe) {
          *param_2 = 10;
          param_2[1] = (byte)uVar21;
          puVar4 = (ulong *)*puVar18;
          if (-1 < *(char *)((long)puVar18 + 0x17)) {
            puVar4 = puVar18;
          }
          _memcpy(param_2 + 2,puVar4,uVar21);
          param_2 = param_2 + 2 + uVar21;
          iVar24 = *(int *)(param_1 + 0x18);
          goto joined_r0x00010adff020;
        }
      }
      else {
        lVar11 = (long)(uVar22 << 0x20) >> 0x20;
        puVar3 = (ulong *)((long)puVar4 + lVar11);
        puVar14 = puVar4;
        for (; (7 < lVar11 && ((*puVar4 & 0x8080808080808080) == 0)); puVar4 = puVar4 + 1) {
          puVar14 = puVar14 + 1;
          lVar11 = lVar11 + -8;
        }
        puVar7 = puVar4;
        if (puVar4 < puVar3) {
          uVar13 = (long)puVar3 - (long)puVar14;
          puVar14 = puVar4;
          for (uVar22 = uVar13 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
            puVar7 = puVar14;
            if ((char)*puVar14 < '\0') goto LAB_10adff02c;
            puVar14 = (ulong *)((long)puVar14 + 1);
          }
          puVar4 = (ulong *)((long)puVar4 + uVar13);
          puVar7 = puVar4;
          if (2 < uVar13 - 1) {
            puVar14 = (ulong *)((long)puVar14 + 3);
            do {
              puVar7 = puVar14;
              if ((char)*puVar14 < '\0') break;
              puVar1 = (ulong *)((long)puVar14 + 1);
              puVar14 = (ulong *)((long)puVar14 + 4);
              puVar7 = puVar4;
            } while (puVar1 != puVar4);
          }
        }
LAB_10adff02c:
        func_0x000107c34ffc(puVar7,puVar3,0);
        if (puVar7 != (ulong *)0x0) goto LAB_10adff038;
        func_0x00010b4d3bf8(&UNK_10f7741f2,0,&UNK_10f6af32f,0x3c,&UNK_10f774276);
        uVar21 = (ulong)*(byte *)((long)puVar18 + 0x17);
        if (-1 < (char)*(byte *)((long)puVar18 + 0x17)) goto LAB_10adff03c;
LAB_10adff074:
        uVar21 = puVar18[1];
        if ((long)uVar21 < 0x80) goto LAB_10adff084;
      }
      param_2 = param_3;
      func_0x00010b4d50d0(param_3,1,puVar18);
      iVar24 = *(int *)(param_1 + 0x18);
      goto joined_r0x00010adff020;
    }
  }
  iVar24 = *(int *)(param_1 + 0x18);
joined_r0x00010adff020:
  if (iVar24 != 0) {
    iVar23 = 0;
    pbVar10 = param_3 + 0x10;
    pbVar2 = param_3 + 0x20;
    pbVar15 = param_2;
    do {
      uVar21 = *(ulong *)(param_1 + 0x10);
      puVar18 = (ulong *)(param_1 + 0x10);
      if ((uVar21 & 1) != 0) {
        puVar18 = (ulong *)(uVar21 + (long)iVar23 * 8 + 7);
      }
      param_2 = (byte *)*puVar18;
      uVar20 = *(uint *)(param_2 + 0x20);
      pbVar25 = *(byte **)param_3;
      pbVar8 = pbVar15;
      if (pbVar25 <= pbVar15) {
        do {
          pbVar8 = pbVar10;
          if ((param_3[0x38] & 1) != 0) break;
          pbVar16 = pbVar2;
          if (*(long *)(param_3 + 0x30) == 0) {
            param_3[0x38] = 1;
LAB_10adff230:
            *(byte **)param_3 = pbVar16;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar26 = *(undefined8 *)pbVar25;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar25 + 8);
              *(undefined8 *)pbVar10 = uVar26;
              *(byte **)(param_3 + 8) = pbVar25;
              goto LAB_10adff230;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar10,(long)pbVar25 - (long)pbVar10);
            do {
              plVar9 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar9 + 0x10))(plVar9,&pbStack_70,&uStack_64);
              if (((ulong)plVar9 & 1) == 0) {
                param_3[0x38] = 1;
                *(byte **)param_3 = pbVar2;
                goto LAB_10adff18c;
              }
            } while (uStack_64 == 0);
            puVar17 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar26 = *puVar17;
              *(undefined8 *)(param_3 + 0x18) = puVar17[1];
              *(undefined8 *)pbVar10 = uVar26;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar16 = pbVar10 + (int)uStack_64;
              goto LAB_10adff230;
            }
            uVar26 = *puVar17;
            *(undefined8 *)(pbStack_70 + 8) = puVar17[1];
            *(undefined8 *)pbStack_70 = uVar26;
            *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            param_3[8] = 0;
            param_3[9] = 0;
            param_3[10] = 0;
            param_3[0xb] = 0;
            param_3[0xc] = 0;
            param_3[0xd] = 0;
            param_3[0xe] = 0;
            param_3[0xf] = 0;
            pbVar8 = pbStack_70;
            pbVar16 = pbStack_70 + ((ulong)uStack_64 - 0x10);
          }
LAB_10adff18c:
          pbVar15 = pbVar8 + ((int)pbVar15 - (int)pbVar25);
          pbVar8 = pbVar15;
          pbVar25 = pbVar16;
        } while (pbVar16 <= pbVar15);
      }
      pbVar15 = pbVar8 + 1;
      *pbVar8 = 0x12;
      if (0x7f < uVar20) {
        do {
          pbVar8 = pbVar15;
          pbVar15 = pbVar8 + 1;
          *pbVar8 = (byte)uVar20 | 0x80;
          uVar12 = uVar20 >> 0xe;
          uVar20 = uVar20 >> 7;
        } while (uVar12 != 0);
      }
      *pbVar15 = (byte)uVar20;
      (**(code **)(*(long *)param_2 + 0x38))(param_2,pbVar8 + 2,param_3);
      iVar23 = iVar23 + 1;
      pbVar15 = param_2;
    } while (iVar23 != iVar24);
  }
  uVar20 = *(uint *)(param_1 + 0x30);
  if (uVar20 != 0) {
    pbVar15 = *(byte **)param_3;
    if (param_2 < pbVar15) {
      *param_2 = 0x18;
    }
    else {
      do {
        if (param_3[0x38] == 1) {
          uVar20 = *(uint *)(param_1 + 0x30);
          pbVar15 = param_3 + 0x11;
          param_3[0x10] = 0x18;
          goto joined_r0x00010adff3a4;
        }
        pbVar10 = param_3;
        func_0x000107c303dc();
        param_2 = pbVar10 + ((int)param_2 - (int)pbVar15);
        pbVar15 = *(byte **)param_3;
      } while (pbVar15 <= param_2);
      uVar20 = *(uint *)(param_1 + 0x30);
      *param_2 = 0x18;
    }
    pbVar15 = param_2 + 1;
joined_r0x00010adff3a4:
    pbVar10 = pbVar15;
    uVar12 = uVar20;
    if (0x7f < uVar20) {
      do {
        pbVar15 = pbVar10 + 1;
        *pbVar10 = (byte)uVar12 | 0x80;
        uVar20 = uVar12 >> 7;
        uVar6 = uVar12 >> 0xe;
        pbVar10 = pbVar15;
        uVar12 = uVar20;
      } while (uVar6 != 0);
    }
    param_2 = pbVar15 + 1;
    *pbVar15 = (byte)uVar20;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar21 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar22 = (ulong)*(char *)(uVar21 + 0x1f);
    if ((long)uVar22 < 0) {
      lVar11 = *(long *)(uVar21 + 8);
      uVar22 = (ulong)*(uint *)(uVar21 + 0x10);
    }
    else {
      lVar11 = uVar21 + 8;
    }
    uVar20 = (uint)uVar22;
    if (*(long *)param_3 - (long)param_2 < (long)(int)uVar20) {
      pbVar15 = (byte *)((*(long *)param_3 - (long)param_2) + 0x10);
      if ((int)pbVar15 < (int)uVar20) {
        do {
          lVar19 = (long)(int)pbVar15;
          _memcpy(param_2,lVar11,lVar19);
          uVar20 = (int)uVar22 - (int)pbVar15;
          uVar22 = (ulong)uVar20;
          lVar11 = lVar11 + lVar19;
          param_2 = param_2 + lVar19;
          pbVar15 = *(byte **)param_3;
          do {
            if ((param_3[0x38] & 1) != 0) {
              pbVar15 = pbVar15 + (0x10 - (long)(param_3 + 0x10));
              iVar24 = (int)pbVar15;
              param_2 = param_3 + 0x10;
              goto joined_r0x00010adff438;
            }
            pbVar10 = param_3;
            func_0x000107c303dc();
            param_2 = pbVar10 + ((int)param_2 - (int)pbVar15);
            pbVar15 = *(byte **)param_3;
          } while (pbVar15 <= param_2);
          pbVar15 = pbVar15 + (0x10 - (long)param_2);
          iVar24 = (int)pbVar15;
joined_r0x00010adff438:
        } while (iVar24 < (int)uVar20);
      }
      _memcpy(param_2,lVar11,(long)(int)uVar20);
    }
    else {
      _memcpy();
    }
  }
  return;
}



/* Entry: 10adff458; end: 10adff5f7;  */

long FUN_10adff458(long param_1)

{
  int iVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  lVar2 = (long)*(int *)(param_1 + 0x18);
  puVar3 = (ulong *)(param_1 + 0x10);
  if ((uVar4 & 1) != 0) {
    puVar3 = (ulong *)(uVar4 + 7);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar2 = 0;
  }
  else {
    lVar5 = lVar2 << 3;
    do {
      uVar4 = *puVar3;
      uVar6 = *(ulong *)(uVar4 + 0x10) & 0xfffffffffffffffc;
      lVar7 = (long)*(char *)(uVar6 + 0x17);
      if (lVar7 < 0) {
        if (*(long *)(uVar6 + 8) != 0) goto LAB_10adff49c;
LAB_10adff52c:
        lVar7 = 0;
        iVar1 = *(int *)(uVar4 + 0x18);
      }
      else {
        if (lVar7 == 0) goto LAB_10adff52c;
LAB_10adff49c:
        lVar8 = *(long *)(uVar6 + 8);
        if (-1 < *(char *)(uVar6 + 0x17)) {
          lVar8 = lVar7;
        }
        lVar7 = lVar8 + (ulong)((int)LZCOUNT((int)lVar8) * -9 + 0x160U >> 6) + 1;
        iVar1 = *(int *)(uVar4 + 0x18);
      }
      if (iVar1 != 0) {
        lVar7 = (ulong)((int)LZCOUNT((long)iVar1) * -9 + 0x2c0U >> 6) + lVar7;
      }
      if (*(int *)(uVar4 + 0x1c) != 0) {
        lVar7 = (ulong)((int)LZCOUNT((long)*(int *)(uVar4 + 0x1c)) * -9 + 0x2c0U >> 6) + lVar7;
      }
      if ((*(ulong *)(uVar4 + 8) & 1) != 0) {
        uVar6 = *(ulong *)(uVar4 + 8) & 0xfffffffffffffffe;
        lVar8 = (long)*(char *)(uVar6 + 0x1f);
        if (lVar8 < 0) {
          lVar8 = *(long *)(uVar6 + 0x10);
        }
        lVar7 = lVar8 + lVar7;
      }
      *(int *)(uVar4 + 0x20) = (int)lVar7;
      lVar2 = lVar7 + lVar2 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6);
      puVar3 = puVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  uVar4 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar4 + 0x17);
  lVar5 = lVar7;
  if (lVar7 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    lVar5 = *(long *)(uVar4 + 8);
    if (-1 < *(char *)(uVar4 + 0x17)) {
      lVar5 = lVar7;
    }
    lVar2 = lVar2 + lVar5 + (ulong)((int)LZCOUNT((int)lVar5) * -9 + 0x160U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    lVar2 = lVar2 + (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x30)) * -9 + 0x1a0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar4 + 0x10);
    }
    *(int *)(param_1 + 0x34) = (int)(lVar5 + lVar2);
    return lVar5 + lVar2;
  }
  *(int *)(param_1 + 0x34) = (int)lVar2;
  return lVar2;
}



/* Entry: 10adff5f8; end: 10adff823;  */

void FUN_10adff5f8(long param_1,long param_2)

{
  char cVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  puVar7 = (undefined8 *)(*(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc);
  cVar1 = *(char *)((long)puVar7 + 0x17);
  uVar8 = (ulong)cVar1;
  uVar9 = uVar8;
  if ((long)uVar8 < 0) {
    uVar9 = puVar7[1];
  }
  if (uVar9 == 0) goto LAB_10adff7b4;
  plVar4 = *(long **)(param_1 + 8);
  if (((ulong)plVar4 & 1) == 0) {
    uVar9 = *(ulong *)(param_1 + 0x28);
  }
  else {
    plVar4 = *(long **)((ulong)plVar4 & 0xfffffffffffffffe);
    uVar9 = *(ulong *)(param_1 + 0x28);
  }
  if ((uVar9 & 3) != 0) {
    puVar5 = (undefined8 *)(uVar9 & 0xfffffffffffffffc);
    if (puVar5 != puVar7) {
      if (*(char *)((long)puVar5 + 0x17) < '\0') {
        uVar9 = puVar7[1];
        puVar2 = (undefined8 *)*puVar7;
        if (-1 < cVar1) {
          uVar9 = uVar8;
          puVar2 = puVar7;
        }
        func_0x000107c27ba0(puVar5,puVar2,uVar9);
      }
      else if (cVar1 < '\0') {
        func_0x000107c27ba4(puVar5,*puVar7,puVar7[1]);
      }
      else {
        uVar12 = puVar7[1];
        uVar11 = *puVar7;
        puVar5[2] = puVar7[2];
        puVar5[1] = uVar12;
        *puVar5 = uVar11;
      }
    }
    goto LAB_10adff7b4;
  }
  uVar9 = puVar7[1];
  puVar5 = (undefined8 *)*puVar7;
  if (-1 < cVar1) {
    uVar9 = uVar8;
    puVar5 = puVar7;
  }
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)0x18;
    __Znwm();
    if (0x7ffffffffffffff6 < uVar9) goto LAB_10adff808;
    if (0x16 < uVar9) {
      plVar10 = (long *)0x19;
      if ((uVar9 | 7) != 0x17) {
        plVar10 = (long *)((uVar9 | 7) + 1);
      }
      plVar6 = plVar10;
      __Znwm();
      *plVar4 = (long)plVar6;
      uVar8 = 2;
      goto LAB_10adff788;
    }
    *(char *)((long)plVar4 + 0x17) = (char)uVar9;
    uVar8 = 2;
    plVar6 = plVar4;
    plVar10 = plVar4;
    if (uVar9 != 0) goto LAB_10adff798;
  }
  else {
    func_0x00010b4d80a4();
    if (0x7ffffffffffffff6 < uVar9) {
      func_0x000104bd47d4();
LAB_10adff808:
      func_0x000104bd47d4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10adff810);
      (*pcVar3)();
    }
    if (uVar9 < 0x17) {
      *(char *)((long)plVar4 + 0x17) = (char)uVar9;
      uVar8 = 3;
      plVar6 = plVar4;
      plVar10 = plVar4;
      if (uVar9 == 0) goto LAB_10adff7a8;
    }
    else {
      plVar10 = (long *)0x19;
      if ((uVar9 | 7) != 0x17) {
        plVar10 = (long *)((uVar9 | 7) + 1);
      }
      plVar6 = plVar10;
      __Znwm();
      *plVar4 = (long)plVar6;
      uVar8 = 3;
LAB_10adff788:
      plVar4[1] = uVar9;
      plVar4[2] = (ulong)plVar10 | 0x8000000000000000;
      plVar10 = plVar4;
    }
LAB_10adff798:
    _memmove(plVar6,puVar5,uVar9);
    plVar4 = plVar6;
  }
LAB_10adff7a8:
  *(undefined1 *)((long)plVar4 + uVar9) = 0;
  *(ulong *)(param_1 + 0x28) = uVar8 | (ulong)plVar10;
LAB_10adff7b4:
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
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



/* Entry: 10adff824; end: 10adff90b;  */

long FUN_10adff824(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x10) ^ 2);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 3) != 0) {
    puVar1 = (undefined8 *)0x0;
  }
  if ((puVar1 != (undefined8 *)0x0) && (*(char *)((long)puVar2 + 0x17) < '\0')) {
    __ZdlPv(*puVar2);
    __ZdlPv(puVar1);
    return param_1;
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10adff90c; end: 10adff963;  */

undefined ** FUN_10adff90c(void)

{
  return &PTR_DAT_110c77470;
}



/* Entry: 10adff964; end: 10adffc7b;  */

/* WARNING: Removing unreachable block (ram,0x00010adffb60) */
/* WARNING: Removing unreachable block (ram,0x00010adffb68) */
/* WARNING: Removing unreachable block (ram,0x00010adffb58) */

long * FUN_10adff964(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  char cVar4;
  long *plVar5;
  ulong *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  long *plVar11;
  ulong *puVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  undefined1 *puVar18;
  
  plVar5 = param_2;
  if (*(int *)(param_1 + 0x18) != 0) {
    plVar5 = param_3;
    func_0x000107c282e4(param_3,*(int *)(param_1 + 0x18),param_2);
  }
  plVar11 = plVar5;
  if (*(int *)(param_1 + 0x1c) != 0) {
    plVar11 = param_3;
    func_0x00010598f43c(param_3,*(int *)(param_1 + 0x1c),plVar5);
  }
  puVar12 = (ulong *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  cVar4 = *(char *)((long)puVar12 + 0x17);
  uVar15 = (ulong)cVar4;
  if ((long)uVar15 < 0) {
    if (puVar12[1] != 0) {
      puVar3 = (ulong *)*puVar12;
      uVar16 = puVar12[1];
      goto joined_r0x00010adff9ec;
    }
  }
  else {
    puVar3 = puVar12;
    uVar16 = uVar15;
    if ((int)cVar4 != 0) {
joined_r0x00010adff9ec:
      if (uVar16 << 0x20 == 0) {
LAB_10adffaac:
        if (((uint)(int)cVar4 >> 7 & 1) == 0) goto LAB_10adffab0;
LAB_10adffae4:
        uVar15 = puVar12[1];
        if ((long)uVar15 < 0x80) goto LAB_10adffaf0;
      }
      else {
        lVar8 = (long)(uVar16 << 0x20) >> 0x20;
        puVar2 = (ulong *)((long)puVar3 + lVar8);
        puVar10 = puVar3;
        for (; (7 < lVar8 && ((*puVar3 & 0x8080808080808080) == 0)); puVar3 = puVar3 + 1) {
          puVar10 = puVar10 + 1;
          lVar8 = lVar8 + -8;
        }
        puVar6 = puVar3;
        if (puVar3 < puVar2) {
          uVar9 = (long)puVar2 - (long)puVar10;
          puVar10 = puVar3;
          for (uVar16 = uVar9 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            puVar6 = puVar10;
            if ((char)*puVar10 < '\0') goto LAB_10adffaa0;
            puVar10 = (ulong *)((long)puVar10 + 1);
          }
          puVar3 = (ulong *)((long)puVar3 + uVar9);
          puVar6 = puVar3;
          if (2 < uVar9 - 1) {
            puVar10 = (ulong *)((long)puVar10 + 3);
            do {
              puVar6 = puVar10;
              if ((char)*puVar10 < '\0') break;
              puVar1 = (ulong *)((long)puVar10 + 1);
              puVar10 = (ulong *)((long)puVar10 + 4);
              puVar6 = puVar3;
            } while (puVar1 != puVar3);
          }
        }
LAB_10adffaa0:
        func_0x000107c34ffc(puVar6,puVar2,0);
        if (puVar6 != (ulong *)0x0) goto LAB_10adffaac;
        func_0x00010b4d3bf8(&UNK_10f7741f2,0,&UNK_10f6af36c,0x19,&UNK_10f774276);
        uVar15 = (ulong)*(byte *)((long)puVar12 + 0x17);
        if ((char)*(byte *)((long)puVar12 + 0x17) < '\0') goto LAB_10adffae4;
LAB_10adffab0:
        uVar15 = uVar15 & 0xff;
LAB_10adffaf0:
        if ((long)uVar15 <= (*param_3 - (long)plVar11) + 0xe) {
          *(undefined1 *)plVar11 = 0x1a;
          *(char *)((long)plVar11 + 1) = (char)uVar15;
          puVar3 = (ulong *)*puVar12;
          if (-1 < *(char *)((long)puVar12 + 0x17)) {
            puVar3 = puVar12;
          }
          _memcpy((long)plVar11 + 2,puVar3,uVar15);
          plVar11 = (long *)((long)plVar11 + 2 + uVar15);
          goto LAB_10adffb34;
        }
      }
      plVar5 = param_3;
      func_0x00010b4d50d0(param_3,3,puVar12,plVar11);
      uVar15 = *(ulong *)(param_1 + 8);
      goto joined_r0x00010adffb38;
    }
  }
LAB_10adffb34:
  uVar15 = *(ulong *)(param_1 + 8);
  plVar5 = plVar11;
joined_r0x00010adffb38:
  if ((uVar15 & 1) != 0) {
    uVar15 = uVar15 & 0xfffffffffffffffe;
    uVar16 = (ulong)*(char *)(uVar15 + 0x1f);
    if ((long)uVar16 < 0) {
      lVar8 = *(long *)(uVar15 + 8);
      uVar16 = (ulong)*(uint *)(uVar15 + 0x10);
    }
    else {
      lVar8 = uVar15 + 8;
    }
    uVar14 = (uint)uVar16;
    if (*param_3 - (long)plVar5 < (long)(int)uVar14) {
      puVar18 = (undefined1 *)((*param_3 - (long)plVar5) + 0x10);
      if ((int)puVar18 < (int)uVar14) {
        do {
          lVar13 = (long)(int)puVar18;
          _memcpy(plVar5,lVar8,lVar13);
          uVar14 = (int)uVar16 - (int)puVar18;
          uVar16 = (ulong)uVar14;
          lVar8 = lVar8 + lVar13;
          plVar5 = (long *)((long)plVar5 + lVar13);
          plVar11 = (long *)*param_3;
          do {
            if ((*(byte *)(param_3 + 7) & 1) != 0) {
              puVar18 = (undefined1 *)((long)plVar11 + (0x10 - (long)(param_3 + 2)));
              iVar17 = (int)puVar18;
              plVar5 = param_3 + 2;
              goto joined_r0x00010adffc5c;
            }
            plVar7 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar7 + (long)((int)plVar5 - (int)plVar11));
            plVar11 = (long *)*param_3;
          } while (plVar11 <= plVar5);
          puVar18 = (undefined1 *)((long)plVar11 + (0x10 - (long)plVar5));
          iVar17 = (int)puVar18;
joined_r0x00010adffc5c:
        } while (iVar17 < (int)uVar14);
      }
      _memcpy(plVar5,lVar8,(long)(int)uVar14);
      plVar5 = (long *)((long)plVar5 + (long)(int)uVar14);
    }
    else {
      _memcpy(plVar5,lVar8,uVar16 & 0xffffffff);
      plVar5 = (long *)((long)plVar5 + (long)(int)uVar14);
    }
  }
  return plVar5;
}



/* Entry: 10adffc7c; end: 10adffd43;  */

long FUN_10adffc7c(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  lVar3 = lVar4;
  if (lVar4 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 == 0) {
    lVar3 = 0;
    iVar1 = *(int *)(param_1 + 0x18);
  }
  else {
    lVar3 = *(long *)(uVar2 + 8);
    if (-1 < *(char *)(uVar2 + 0x17)) {
      lVar3 = lVar4;
    }
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
    iVar1 = *(int *)(param_1 + 0x18);
  }
  if (iVar1 != 0) {
    lVar3 = (ulong)((int)LZCOUNT((long)iVar1) * -9 + 0x2c0U >> 6) + lVar3;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x2c0U >> 6) + lVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x20) = (int)lVar3;
    return lVar3;
  }
  uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  lVar4 = (long)*(char *)(uVar2 + 0x1f);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 0x10);
  }
  *(int *)(param_1 + 0x20) = (int)(lVar4 + lVar3);
  return lVar4 + lVar3;
}



/* Entry: 10adffd44; end: 10adfff9b;  */

void FUN_10adffd44(long param_1,long param_2)

{
  char cVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar8 = (undefined8 *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
  cVar1 = *(char *)((long)puVar8 + 0x17);
  uVar9 = (ulong)cVar1;
  uVar7 = uVar9;
  if ((long)uVar9 < 0) {
    uVar7 = puVar8[1];
  }
  if (uVar7 == 0) goto LAB_10adfff20;
  plVar5 = *(long **)(param_1 + 8);
  if (((ulong)plVar5 & 1) == 0) {
    uVar7 = *(ulong *)(param_1 + 0x10);
  }
  else {
    plVar5 = *(long **)((ulong)plVar5 & 0xfffffffffffffffe);
    uVar7 = *(ulong *)(param_1 + 0x10);
  }
  if ((uVar7 & 3) != 0) {
    puVar6 = (undefined8 *)(uVar7 & 0xfffffffffffffffc);
    if (puVar6 != puVar8) {
      if (*(char *)((long)puVar6 + 0x17) < '\0') {
        uVar7 = puVar8[1];
        puVar2 = (undefined8 *)*puVar8;
        if (-1 < cVar1) {
          uVar7 = uVar9;
          puVar2 = puVar8;
        }
        func_0x000107c27ba0(puVar6,puVar2,uVar7);
      }
      else if (cVar1 < '\0') {
        func_0x000107c27ba4(puVar6,*puVar8,puVar8[1]);
      }
      else {
        uVar12 = puVar8[1];
        uVar11 = *puVar8;
        puVar6[2] = puVar8[2];
        puVar6[1] = uVar12;
        *puVar6 = uVar11;
      }
    }
    goto LAB_10adfff20;
  }
  uVar7 = puVar8[1];
  puVar6 = (undefined8 *)*puVar8;
  if (-1 < cVar1) {
    uVar7 = uVar9;
    puVar6 = puVar8;
  }
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)0x18;
    __Znwm();
    if (0x7ffffffffffffff6 < uVar7) goto LAB_10adfff80;
    if (0x16 < uVar7) {
      plVar10 = (long *)0x19;
      if ((uVar7 | 7) != 0x17) {
        plVar10 = (long *)((uVar7 | 7) + 1);
      }
      plVar4 = plVar10;
      __Znwm();
      *plVar5 = (long)plVar4;
      uVar9 = 2;
      goto LAB_10adffeec;
    }
    *(char *)((long)plVar5 + 0x17) = (char)uVar7;
    uVar9 = 2;
    plVar4 = plVar5;
    plVar10 = plVar5;
    if (uVar7 != 0) goto LAB_10adffefc;
  }
  else {
    func_0x00010b4d80a4();
    if (0x7ffffffffffffff6 < uVar7) {
      func_0x000104bd47d4();
LAB_10adfff80:
      func_0x000104bd47d4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10adfff88);
      (*pcVar3)();
    }
    if (uVar7 < 0x17) {
      *(char *)((long)plVar5 + 0x17) = (char)uVar7;
      uVar9 = 3;
      plVar4 = plVar5;
      plVar10 = plVar5;
      if (uVar7 == 0) goto LAB_10adfff0c;
    }
    else {
      plVar10 = (long *)0x19;
      if ((uVar7 | 7) != 0x17) {
        plVar10 = (long *)((uVar7 | 7) + 1);
      }
      plVar4 = plVar10;
      __Znwm();
      *plVar5 = (long)plVar4;
      uVar9 = 3;
LAB_10adffeec:
      plVar5[1] = uVar7;
      plVar5[2] = (ulong)plVar10 | 0x8000000000000000;
      plVar10 = plVar5;
    }
LAB_10adffefc:
    _memmove(plVar4,puVar6,uVar7);
    plVar5 = plVar4;
  }
LAB_10adfff0c:
  *(undefined1 *)((long)plVar5 + uVar7) = 0;
  *(ulong *)(param_1 + 0x10) = uVar9 | (ulong)plVar10;
LAB_10adfff20:
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_2 + 0x1c);
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



/* Entry: 10adfff9c; end: 10ae00083;  */

long FUN_10adfff9c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x10) ^ 2);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 3) != 0) {
    puVar1 = (undefined8 *)0x0;
  }
  if ((puVar1 != (undefined8 *)0x0) && (*(char *)((long)puVar2 + 0x17) < '\0')) {
    __ZdlPv(*puVar2);
    __ZdlPv(puVar1);
    return param_1;
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10ae00084; end: 10ae000e3;  */

undefined ** FUN_10ae00084(void)

{
  return &PTR_DAT_110c774a8;
}



/* Entry: 10ae000e4; end: 10ae00463;  */

/* WARNING: Removing unreachable block (ram,0x00010ae0030c) */
/* WARNING: Removing unreachable block (ram,0x00010ae00314) */
/* WARNING: Removing unreachable block (ram,0x00010ae00304) */

long * FUN_10ae000e4(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  char cVar4;
  ulong *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined1 uVar9;
  ulong uVar10;
  ulong *puVar11;
  long *plVar12;
  ulong *puVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  undefined1 *puVar19;
  
  puVar13 = (ulong *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  cVar4 = *(char *)((long)puVar13 + 0x17);
  uVar16 = (ulong)cVar4;
  if ((long)uVar16 < 0) {
    if (puVar13[1] != 0) {
      puVar3 = (ulong *)*puVar13;
      uVar17 = puVar13[1];
      goto joined_r0x00010ae0013c;
    }
  }
  else {
    puVar3 = puVar13;
    uVar17 = uVar16;
    if ((int)cVar4 != 0) {
joined_r0x00010ae0013c:
      if (uVar17 << 0x20 == 0) {
LAB_10ae001fc:
        if (((uint)(int)cVar4 >> 7 & 1) == 0) goto LAB_10ae00200;
LAB_10ae00234:
        uVar16 = puVar13[1];
        if ((long)uVar16 < 0x80) goto LAB_10ae00240;
      }
      else {
        lVar8 = (long)(uVar17 << 0x20) >> 0x20;
        puVar2 = (ulong *)((long)puVar3 + lVar8);
        puVar11 = puVar3;
        for (; (7 < lVar8 && ((*puVar3 & 0x8080808080808080) == 0)); puVar3 = puVar3 + 1) {
          puVar11 = puVar11 + 1;
          lVar8 = lVar8 + -8;
        }
        puVar5 = puVar3;
        if (puVar3 < puVar2) {
          uVar10 = (long)puVar2 - (long)puVar11;
          puVar11 = puVar3;
          for (uVar17 = uVar10 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
            puVar5 = puVar11;
            if ((char)*puVar11 < '\0') goto LAB_10ae001f0;
            puVar11 = (ulong *)((long)puVar11 + 1);
          }
          puVar3 = (ulong *)((long)puVar3 + uVar10);
          puVar5 = puVar3;
          if (2 < uVar10 - 1) {
            puVar11 = (ulong *)((long)puVar11 + 3);
            do {
              puVar5 = puVar11;
              if ((char)*puVar11 < '\0') break;
              puVar1 = (ulong *)((long)puVar11 + 1);
              puVar11 = (ulong *)((long)puVar11 + 4);
              puVar5 = puVar3;
            } while (puVar1 != puVar3);
          }
        }
LAB_10ae001f0:
        func_0x000107c34ffc(puVar5,puVar2,0);
        if (puVar5 != (ulong *)0x0) goto LAB_10ae001fc;
        func_0x00010b4d3bf8(&UNK_10f7741f2,0,&UNK_10f6af386,0x1f,&UNK_10f774276);
        uVar16 = (ulong)*(byte *)((long)puVar13 + 0x17);
        if ((char)*(byte *)((long)puVar13 + 0x17) < '\0') goto LAB_10ae00234;
LAB_10ae00200:
        uVar16 = uVar16 & 0xff;
LAB_10ae00240:
        if ((long)uVar16 <= (*param_3 - (long)param_2) + 0xe) {
          *(undefined1 *)param_2 = 10;
          *(char *)((long)param_2 + 1) = (char)uVar16;
          puVar3 = (ulong *)*puVar13;
          if (-1 < *(char *)((long)puVar13 + 0x17)) {
            puVar3 = puVar13;
          }
          _memcpy((undefined1 *)((long)param_2 + 2),puVar3,uVar16);
          param_2 = (long *)((undefined1 *)((long)param_2 + 2) + uVar16);
          goto LAB_10ae00284;
        }
      }
      plVar7 = param_3;
      func_0x00010b4d50d0(param_3,1,puVar13,param_2);
      iVar18 = *(int *)(param_1 + 0x18);
      goto joined_r0x00010ae00288;
    }
  }
LAB_10ae00284:
  iVar18 = *(int *)(param_1 + 0x18);
  plVar7 = param_2;
joined_r0x00010ae00288:
  plVar12 = plVar7;
  if (iVar18 != 0) {
    plVar12 = param_3;
    func_0x00010598f43c(param_3,iVar18,plVar7);
  }
  plVar7 = plVar12;
  if (*(int *)(param_1 + 0x1c) != 0) {
    plVar7 = param_3;
    func_0x000107c282ac(param_3,*(int *)(param_1 + 0x1c),plVar12);
  }
  if (*(char *)(param_1 + 0x20) == '\x01') {
    plVar12 = (long *)*param_3;
    if (plVar7 < plVar12) {
      uVar9 = 1;
    }
    else {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar7 = param_3 + 2;
          break;
        }
        plVar6 = param_3;
        func_0x000107c303dc();
        plVar7 = (long *)((long)plVar6 + (long)((int)plVar7 - (int)plVar12));
        plVar12 = (long *)*param_3;
      } while (plVar12 <= plVar7);
      uVar9 = *(undefined1 *)(param_1 + 0x20);
    }
    *(undefined1 *)plVar7 = 0x20;
    *(undefined1 *)((long)plVar7 + 1) = uVar9;
    plVar7 = (long *)((long)plVar7 + 2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar16 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar17 = (ulong)*(char *)(uVar16 + 0x1f);
    if ((long)uVar17 < 0) {
      lVar8 = *(long *)(uVar16 + 8);
      uVar17 = (ulong)*(uint *)(uVar16 + 0x10);
    }
    else {
      lVar8 = uVar16 + 8;
    }
    uVar15 = (uint)uVar17;
    if (*param_3 - (long)plVar7 < (long)(int)uVar15) {
      puVar19 = (undefined1 *)((*param_3 - (long)plVar7) + 0x10);
      if ((int)puVar19 < (int)uVar15) {
        do {
          lVar14 = (long)(int)puVar19;
          _memcpy(plVar7,lVar8,lVar14);
          uVar15 = (int)uVar17 - (int)puVar19;
          uVar17 = (ulong)uVar15;
          lVar8 = lVar8 + lVar14;
          plVar7 = (long *)((long)plVar7 + lVar14);
          plVar12 = (long *)*param_3;
          do {
            if ((*(byte *)(param_3 + 7) & 1) != 0) {
              puVar19 = (undefined1 *)((long)plVar12 + (0x10 - (long)(param_3 + 2)));
              iVar18 = (int)puVar19;
              plVar7 = param_3 + 2;
              goto joined_r0x00010ae00444;
            }
            plVar6 = param_3;
            func_0x000107c303dc();
            plVar7 = (long *)((long)plVar6 + (long)((int)plVar7 - (int)plVar12));
            plVar12 = (long *)*param_3;
          } while (plVar12 <= plVar7);
          puVar19 = (undefined1 *)((long)plVar12 + (0x10 - (long)plVar7));
          iVar18 = (int)puVar19;
joined_r0x00010ae00444:
        } while (iVar18 < (int)uVar15);
      }
      _memcpy(plVar7,lVar8,(long)(int)uVar15);
      plVar7 = (long *)((long)plVar7 + (long)(int)uVar15);
    }
    else {
      _memcpy(plVar7,lVar8,uVar17 & 0xffffffff);
      plVar7 = (long *)((long)plVar7 + (long)(int)uVar15);
    }
  }
  return plVar7;
}



/* Entry: 10ae00464; end: 10ae00533;  */

long FUN_10ae00464(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  lVar3 = lVar4;
  if (lVar4 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 == 0) {
    lVar3 = 0;
    iVar1 = *(int *)(param_1 + 0x18);
  }
  else {
    lVar3 = *(long *)(uVar2 + 8);
    if (-1 < *(char *)(uVar2 + 0x17)) {
      lVar3 = lVar4;
    }
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
    iVar1 = *(int *)(param_1 + 0x18);
  }
  if (iVar1 != 0) {
    lVar3 = (ulong)((int)LZCOUNT((long)iVar1) * -9 + 0x2c0U >> 6) + lVar3;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x2c0U >> 6) + lVar3;
  }
  lVar3 = lVar3 + (ulong)*(byte *)(param_1 + 0x20) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x24) = (int)lVar3;
    return lVar3;
  }
  uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  lVar4 = (long)*(char *)(uVar2 + 0x1f);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 0x10);
  }
  *(int *)(param_1 + 0x24) = (int)(lVar4 + lVar3);
  return lVar4 + lVar3;
}



/* Entry: 10ae00534; end: 10ae0079b;  */

void FUN_10ae00534(long param_1,long param_2)

{
  char cVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar8 = (undefined8 *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
  cVar1 = *(char *)((long)puVar8 + 0x17);
  uVar9 = (ulong)cVar1;
  uVar7 = uVar9;
  if ((long)uVar9 < 0) {
    uVar7 = puVar8[1];
  }
  if (uVar7 == 0) goto LAB_10ae00710;
  plVar5 = *(long **)(param_1 + 8);
  if (((ulong)plVar5 & 1) == 0) {
    uVar7 = *(ulong *)(param_1 + 0x10);
  }
  else {
    plVar5 = *(long **)((ulong)plVar5 & 0xfffffffffffffffe);
    uVar7 = *(ulong *)(param_1 + 0x10);
  }
  if ((uVar7 & 3) != 0) {
    puVar6 = (undefined8 *)(uVar7 & 0xfffffffffffffffc);
    if (puVar6 != puVar8) {
      if (*(char *)((long)puVar6 + 0x17) < '\0') {
        uVar7 = puVar8[1];
        puVar2 = (undefined8 *)*puVar8;
        if (-1 < cVar1) {
          uVar7 = uVar9;
          puVar2 = puVar8;
        }
        func_0x000107c27ba0(puVar6,puVar2,uVar7);
      }
      else if (cVar1 < '\0') {
        func_0x000107c27ba4(puVar6,*puVar8,puVar8[1]);
      }
      else {
        uVar12 = puVar8[1];
        uVar11 = *puVar8;
        puVar6[2] = puVar8[2];
        puVar6[1] = uVar12;
        *puVar6 = uVar11;
      }
    }
    goto LAB_10ae00710;
  }
  uVar7 = puVar8[1];
  puVar6 = (undefined8 *)*puVar8;
  if (-1 < cVar1) {
    uVar7 = uVar9;
    puVar6 = puVar8;
  }
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)0x18;
    __Znwm();
    if (0x7ffffffffffffff6 < uVar7) goto LAB_10ae00780;
    if (0x16 < uVar7) {
      plVar10 = (long *)0x19;
      if ((uVar7 | 7) != 0x17) {
        plVar10 = (long *)((uVar7 | 7) + 1);
      }
      plVar4 = plVar10;
      __Znwm();
      *plVar5 = (long)plVar4;
      uVar9 = 2;
      goto LAB_10ae006dc;
    }
    *(char *)((long)plVar5 + 0x17) = (char)uVar7;
    uVar9 = 2;
    plVar4 = plVar5;
    plVar10 = plVar5;
    if (uVar7 != 0) goto LAB_10ae006ec;
  }
  else {
    func_0x00010b4d80a4();
    if (0x7ffffffffffffff6 < uVar7) {
      func_0x000104bd47d4();
LAB_10ae00780:
      func_0x000104bd47d4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10ae00788);
      (*pcVar3)();
    }
    if (uVar7 < 0x17) {
      *(char *)((long)plVar5 + 0x17) = (char)uVar7;
      uVar9 = 3;
      plVar4 = plVar5;
      plVar10 = plVar5;
      if (uVar7 == 0) goto LAB_10ae006fc;
    }
    else {
      plVar10 = (long *)0x19;
      if ((uVar7 | 7) != 0x17) {
        plVar10 = (long *)((uVar7 | 7) + 1);
      }
      plVar4 = plVar10;
      __Znwm();
      *plVar5 = (long)plVar4;
      uVar9 = 3;
LAB_10ae006dc:
      plVar5[1] = uVar7;
      plVar5[2] = (ulong)plVar10 | 0x8000000000000000;
      plVar10 = plVar5;
    }
LAB_10ae006ec:
    _memmove(plVar4,puVar6,uVar7);
    plVar5 = plVar4;
  }
LAB_10ae006fc:
  *(undefined1 *)((long)plVar5 + uVar7) = 0;
  *(ulong *)(param_1 + 0x10) = uVar9 | (ulong)plVar10;
LAB_10ae00710:
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_2 + 0x1c);
  }
  if (*(char *)(param_2 + 0x20) == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 1;
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



/* Entry: 10ae0079c; end: 10ae007c3;  */

void FUN_10ae0079c(undefined8 param_1,long *param_2)

{
  undefined **ppuVar1;
  long *plVar2;
  long *plVar3;
  long *plStack_28;
  
  if (param_2 == (long *)0x0) {
    plVar2 = (long *)0x28;
    __Znwm();
    plStack_28 = plVar2;
  }
  else {
    ppuVar1 = &PTR___tlv_bootstrap_11340dac8;
    (*(code *)PTR___tlv_bootstrap_11340dac8)();
    if (ppuVar1[1] == (undefined *)*param_2) {
      plVar3 = (long *)ppuVar1[2];
      plVar2 = plVar3;
      func_0x00010b4d755c(plVar3,0x28,&plStack_28);
      if ((int)plVar2 == 0) {
        func_0x00010b4d7498(plVar3,0x28);
        plStack_28 = plVar3;
      }
    }
    else {
      plVar2 = param_2;
      func_0x00010b4d7124(param_2,0x28);
      plStack_28 = plVar2;
    }
  }
  *plStack_28 = (long)&PTR_FUN_110c77210;
  plStack_28[1] = (long)param_2;
  *(undefined4 *)(plStack_28 + 4) = 0;
  plStack_28[2] = (long)&DAT_11383d918;
  plStack_28[3] = 0;
  return;
}



/* Entry: 10ae007c4; end: 10ae00b37;  */

void FUN_10ae007c4(long *param_1)

{
  undefined **ppuVar1;
  long *plVar2;
  long *plVar3;
  long *plStack_28;
  
  if (param_1 == (long *)0x0) {
    plVar2 = (long *)0x28;
    __Znwm();
    plStack_28 = plVar2;
  }
  else {
    ppuVar1 = &PTR___tlv_bootstrap_11340dac8;
    (*(code *)PTR___tlv_bootstrap_11340dac8)();
    if (ppuVar1[1] == (undefined *)*param_1) {
      plVar3 = (long *)ppuVar1[2];
      plVar2 = plVar3;
      func_0x00010b4d755c(plVar3,0x28,&plStack_28);
      if ((int)plVar2 == 0) {
        func_0x00010b4d7498(plVar3,0x28);
        plStack_28 = plVar3;
      }
    }
    else {
      plVar2 = param_1;
      func_0x00010b4d7124(param_1,0x28);
      plStack_28 = plVar2;
    }
  }
  *plStack_28 = (long)&PTR_FUN_110c77210;
  plStack_28[1] = (long)param_1;
  *(undefined4 *)(plStack_28 + 4) = 0;
  plStack_28[2] = (long)&DAT_11383d918;
  plStack_28[3] = 0;
  return;
}



/* Entry: 10ae00b38; end: 10ae00cdb;  */

long FUN_10ae00b38(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar1 = (ulong *)(param_1 + 0x10);
  puVar3 = (undefined8 *)(*(ulong *)(param_1 + 0x28) ^ 2);
  puVar2 = puVar3;
  if (((ulong)puVar3 & 3) != 0) {
    puVar2 = (undefined8 *)0x0;
  }
  if ((puVar2 != (undefined8 *)0x0) && (*(char *)((long)puVar3 + 0x17) < '\0')) {
    __ZdlPv(*puVar3);
  }
  __ZdlPv(puVar2);
  uVar4 = *puVar1;
  if (uVar4 == 0) {
    return param_1;
  }
  if (*(long *)(param_1 + 0x20) != 0) goto LAB_10ae00bf4;
  if ((uVar4 & 1) == 0) {
    uVar5 = 1;
    puVar6 = puVar1;
LAB_10ae00bcc:
    do {
      if ((long *)*puVar6 != (long *)0x0) {
        (**(code **)(*(long *)*puVar6 + 8))();
      }
      uVar5 = uVar5 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar5 != 0);
    uVar4 = *puVar1;
    if ((uVar4 & 1) == 0) goto LAB_10ae00bf4;
  }
  else {
    uVar5 = (ulong)*(uint *)(uVar4 - 1);
    if (0 < (int)*(uint *)(uVar4 - 1)) {
      puVar6 = (ulong *)(uVar4 + 7);
      goto LAB_10ae00bcc;
    }
  }
  __ZdlPv(uVar4 - 1);
LAB_10ae00bf4:
  *puVar1 = 0;
  return param_1;
}



/* Entry: 10ae00cdc; end: 10ae00ce7;  */

undefined ** FUN_10ae00cdc(void)

{
  return &PTR_DAT_110c77698;
}



/* Entry: 10ae00ce8; end: 10ae00d63;  */

void FUN_10ae00ce8(long param_1)

{
  byte bVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  if ((*(ulong *)(param_1 + 0x28) & 3) != 0) {
    puVar3 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar3 + 0x17) < '\0') {
      *(undefined1 *)*puVar3 = 0;
      puVar3[1] = 0;
      bVar1 = *(byte *)(param_1 + 8);
      goto joined_r0x00010ae00d50;
    }
    *(undefined1 *)puVar3 = 0;
    *(undefined1 *)((long)puVar3 + 0x17) = 0;
  }
  bVar1 = *(byte *)(param_1 + 8);
joined_r0x00010ae00d50:
  if ((bVar1 & 1) == 0) {
    return;
  }
  puVar2 = (ulong *)(param_1 + 8);
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (*(char *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(undefined1 *)puVar2 = 0;
  *(undefined1 *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 10ae00d64; end: 10ae01213;  */

/* WARNING: Removing unreachable block (ram,0x00010ae010cc) */
/* WARNING: Removing unreachable block (ram,0x00010ae010d4) */
/* WARNING: Removing unreachable block (ram,0x00010ae010c4) */

void FUN_10ae00d64(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  byte *pbVar2;
  ulong *puVar3;
  ulong *puVar4;
  char cVar5;
  uint uVar6;
  ulong *puVar7;
  byte *pbVar8;
  long *plVar9;
  byte *pbVar10;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  ulong *puVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  int iVar22;
  int iVar23;
  byte *pbVar24;
  undefined8 uVar25;
  byte *pbStack_70;
  uint uStack_64;
  
  puVar17 = (ulong *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
  cVar5 = *(char *)((long)puVar17 + 0x17);
  uVar20 = (ulong)cVar5;
  if ((long)uVar20 < 0) {
    if (puVar17[1] == 0) goto LAB_10ae00e74;
    puVar4 = (ulong *)*puVar17;
    uVar21 = puVar17[1];
  }
  else {
    puVar4 = puVar17;
    uVar21 = uVar20;
    if ((int)cVar5 == 0) {
LAB_10ae00e74:
      iVar23 = *(int *)(param_1 + 0x18);
      goto joined_r0x00010ae00e7c;
    }
  }
  if (uVar21 << 0x20 == 0) {
LAB_10ae00e94:
    if (((uint)(int)cVar5 >> 7 & 1) == 0) goto LAB_10ae00e98;
LAB_10ae00ed0:
    uVar20 = puVar17[1];
    if ((long)uVar20 < 0x80) goto LAB_10ae00ee0;
  }
  else {
    lVar11 = (long)(uVar21 << 0x20) >> 0x20;
    puVar3 = (ulong *)((long)puVar4 + lVar11);
    puVar13 = puVar4;
    for (; (7 < lVar11 && ((*puVar4 & 0x8080808080808080) == 0)); puVar4 = puVar4 + 1) {
      puVar13 = puVar13 + 1;
      lVar11 = lVar11 + -8;
    }
    puVar7 = puVar4;
    if (puVar4 < puVar3) {
      uVar12 = (long)puVar3 - (long)puVar13;
      puVar13 = puVar4;
      for (uVar21 = uVar12 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
        puVar7 = puVar13;
        if ((char)*puVar13 < '\0') goto LAB_10ae00e88;
        puVar13 = (ulong *)((long)puVar13 + 1);
      }
      puVar4 = (ulong *)((long)puVar4 + uVar12);
      puVar7 = puVar4;
      if (2 < uVar12 - 1) {
        puVar13 = (ulong *)((long)puVar13 + 3);
        do {
          puVar7 = puVar13;
          if ((char)*puVar13 < '\0') break;
          puVar1 = (ulong *)((long)puVar13 + 1);
          puVar13 = (ulong *)((long)puVar13 + 4);
          puVar7 = puVar4;
        } while (puVar1 != puVar4);
      }
    }
LAB_10ae00e88:
    func_0x000107c34ffc(puVar7,puVar3,0);
    if (puVar7 != (ulong *)0x0) goto LAB_10ae00e94;
    func_0x00010b4d3bf8(&UNK_10f7741f2,0,&UNK_10f6af3a6,0x22,&UNK_10f774276);
    uVar20 = (ulong)*(byte *)((long)puVar17 + 0x17);
    if ((char)*(byte *)((long)puVar17 + 0x17) < '\0') goto LAB_10ae00ed0;
LAB_10ae00e98:
    uVar20 = uVar20 & 0xff;
LAB_10ae00ee0:
    if ((long)uVar20 <= (*(long *)param_3 - (long)param_2) + 0xe) {
      *param_2 = 10;
      param_2[1] = (byte)uVar20;
      puVar4 = (ulong *)*puVar17;
      if (-1 < *(char *)((long)puVar17 + 0x17)) {
        puVar4 = puVar17;
      }
      _memcpy(param_2 + 2,puVar4,uVar20);
      param_2 = param_2 + 2 + uVar20;
      iVar23 = *(int *)(param_1 + 0x18);
      goto joined_r0x00010ae00e7c;
    }
  }
  param_2 = param_3;
  func_0x00010b4d50d0(param_3,1,puVar17);
  iVar23 = *(int *)(param_1 + 0x18);
joined_r0x00010ae00e7c:
  if (iVar23 != 0) {
    iVar22 = 0;
    pbVar10 = param_3 + 0x10;
    pbVar2 = param_3 + 0x20;
    pbVar14 = param_2;
    do {
      uVar20 = *(ulong *)(param_1 + 0x10);
      puVar17 = (ulong *)(param_1 + 0x10);
      if ((uVar20 & 1) != 0) {
        puVar17 = (ulong *)(uVar20 + (long)iVar22 * 8 + 7);
      }
      param_2 = (byte *)*puVar17;
      uVar19 = *(uint *)(param_2 + 0x1c);
      pbVar24 = *(byte **)param_3;
      pbVar8 = pbVar14;
      if (pbVar24 <= pbVar14) {
        do {
          pbVar8 = pbVar10;
          if ((param_3[0x38] & 1) != 0) break;
          pbVar15 = pbVar2;
          if (*(long *)(param_3 + 0x30) == 0) {
            param_3[0x38] = 1;
LAB_10ae0108c:
            *(byte **)param_3 = pbVar15;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar25 = *(undefined8 *)pbVar24;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar24 + 8);
              *(undefined8 *)pbVar10 = uVar25;
              *(byte **)(param_3 + 8) = pbVar24;
              goto LAB_10ae0108c;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar10,(long)pbVar24 - (long)pbVar10);
            do {
              plVar9 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar9 + 0x10))(plVar9,&pbStack_70,&uStack_64);
              if (((ulong)plVar9 & 1) == 0) {
                param_3[0x38] = 1;
                *(byte **)param_3 = pbVar2;
                goto LAB_10ae00fe8;
              }
            } while (uStack_64 == 0);
            puVar16 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar25 = *puVar16;
              *(undefined8 *)(param_3 + 0x18) = puVar16[1];
              *(undefined8 *)pbVar10 = uVar25;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar15 = pbVar10 + (int)uStack_64;
              goto LAB_10ae0108c;
            }
            uVar25 = *puVar16;
            *(undefined8 *)(pbStack_70 + 8) = puVar16[1];
            *(undefined8 *)pbStack_70 = uVar25;
            *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
            param_3[8] = 0;
            param_3[9] = 0;
            param_3[10] = 0;
            param_3[0xb] = 0;
            param_3[0xc] = 0;
            param_3[0xd] = 0;
            param_3[0xe] = 0;
            param_3[0xf] = 0;
            pbVar8 = pbStack_70;
            pbVar15 = pbStack_70 + ((ulong)uStack_64 - 0x10);
          }
LAB_10ae00fe8:
          pbVar14 = pbVar8 + ((int)pbVar14 - (int)pbVar24);
          pbVar8 = pbVar14;
          pbVar24 = pbVar15;
        } while (pbVar15 <= pbVar14);
      }
      pbVar14 = pbVar8 + 1;
      *pbVar8 = 0x12;
      if (0x7f < uVar19) {
        do {
          pbVar8 = pbVar14;
          pbVar14 = pbVar8 + 1;
          *pbVar8 = (byte)uVar19 | 0x80;
          uVar6 = uVar19 >> 0xe;
          uVar19 = uVar19 >> 7;
        } while (uVar6 != 0);
      }
      *pbVar14 = (byte)uVar19;
      (**(code **)(*(long *)param_2 + 0x38))(param_2,pbVar8 + 2,param_3);
      iVar22 = iVar22 + 1;
      pbVar14 = param_2;
    } while (iVar22 != iVar23);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar20 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar21 = (ulong)*(char *)(uVar20 + 0x1f);
    if ((long)uVar21 < 0) {
      lVar11 = *(long *)(uVar20 + 8);
      uVar21 = (ulong)*(uint *)(uVar20 + 0x10);
    }
    else {
      lVar11 = uVar20 + 8;
    }
    uVar19 = (uint)uVar21;
    if (*(long *)param_3 - (long)param_2 < (long)(int)uVar19) {
      pbVar14 = (byte *)((*(long *)param_3 - (long)param_2) + 0x10);
      if ((int)pbVar14 < (int)uVar19) {
        do {
          lVar18 = (long)(int)pbVar14;
          _memcpy(param_2,lVar11,lVar18);
          uVar19 = (int)uVar21 - (int)pbVar14;
          uVar21 = (ulong)uVar19;
          lVar11 = lVar11 + lVar18;
          param_2 = param_2 + lVar18;
          pbVar14 = *(byte **)param_3;
          do {
            if ((param_3[0x38] & 1) != 0) {
              pbVar14 = pbVar14 + (0x10 - (long)(param_3 + 0x10));
              iVar23 = (int)pbVar14;
              param_2 = param_3 + 0x10;
              goto joined_r0x00010ae011f4;
            }
            pbVar10 = param_3;
            func_0x000107c303dc();
            param_2 = pbVar10 + ((int)param_2 - (int)pbVar14);
            pbVar14 = *(byte **)param_3;
          } while (pbVar14 <= param_2);
          pbVar14 = pbVar14 + (0x10 - (long)param_2);
          iVar23 = (int)pbVar14;
joined_r0x00010ae011f4:
        } while (iVar23 < (int)uVar19);
      }
      _memcpy(param_2,lVar11,(long)(int)uVar19);
    }
    else {
      _memcpy();
    }
  }
  return;
}



/* Entry: 10ae01214; end: 10ae0137b;  */

long FUN_10ae01214(long param_1)

{
  int iVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  lVar2 = (long)*(int *)(param_1 + 0x18);
  puVar3 = (ulong *)(param_1 + 0x10);
  if ((uVar4 & 1) != 0) {
    puVar3 = (ulong *)(uVar4 + 7);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar2 = 0;
  }
  else {
    lVar5 = lVar2 << 3;
    do {
      uVar4 = *puVar3;
      uVar6 = *(ulong *)(uVar4 + 0x10) & 0xfffffffffffffffc;
      lVar7 = (long)*(char *)(uVar6 + 0x17);
      if (lVar7 < 0) {
        if (*(long *)(uVar6 + 8) != 0) goto LAB_10ae01254;
LAB_10ae012d0:
        lVar7 = 0;
        iVar1 = *(int *)(uVar4 + 0x18);
      }
      else {
        if (lVar7 == 0) goto LAB_10ae012d0;
LAB_10ae01254:
        lVar8 = *(long *)(uVar6 + 8);
        if (-1 < *(char *)(uVar6 + 0x17)) {
          lVar8 = lVar7;
        }
        lVar7 = lVar8 + (ulong)((int)LZCOUNT((int)lVar8) * -9 + 0x160U >> 6) + 1;
        iVar1 = *(int *)(uVar4 + 0x18);
      }
      if (iVar1 != 0) {
        lVar7 = (ulong)((int)LZCOUNT((long)iVar1) * -9 + 0x2c0U >> 6) + lVar7;
      }
      if ((*(ulong *)(uVar4 + 8) & 1) != 0) {
        uVar6 = *(ulong *)(uVar4 + 8) & 0xfffffffffffffffe;
        lVar8 = (long)*(char *)(uVar6 + 0x1f);
        if (lVar8 < 0) {
          lVar8 = *(long *)(uVar6 + 0x10);
        }
        lVar7 = lVar8 + lVar7;
      }
      *(int *)(uVar4 + 0x1c) = (int)lVar7;
      lVar2 = lVar7 + lVar2 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6);
      puVar3 = puVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  uVar4 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar4 + 0x17);
  lVar5 = lVar7;
  if (lVar7 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    lVar5 = *(long *)(uVar4 + 8);
    if (-1 < *(char *)(uVar4 + 0x17)) {
      lVar5 = lVar7;
    }
    lVar2 = lVar2 + lVar5 + (ulong)((int)LZCOUNT((int)lVar5) * -9 + 0x160U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar4 + 0x10);
    }
    *(int *)(param_1 + 0x30) = (int)(lVar5 + lVar2);
    return lVar5 + lVar2;
  }
  *(int *)(param_1 + 0x30) = (int)lVar2;
  return lVar2;
}



/* Entry: 10ae0137c; end: 10ae015af;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10ae0137c(long param_1,long param_2)

{
  char cVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  puVar7 = (undefined8 *)(*(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc);
  cVar1 = *(char *)((long)puVar7 + 0x17);
  uVar9 = (ulong)cVar1;
  uVar8 = uVar9;
  if ((long)uVar9 < 0) {
    uVar8 = puVar7[1];
  }
  if (uVar8 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    if (((ulong)plVar4 & 1) == 0) {
      uVar8 = *(ulong *)(param_1 + 0x28);
    }
    else {
      plVar4 = *(long **)((ulong)plVar4 & 0xfffffffffffffffe);
      uVar8 = *(ulong *)(param_1 + 0x28);
    }
    if ((uVar8 & 3) == 0) {
      uVar8 = puVar7[1];
      puVar5 = (undefined8 *)*puVar7;
      if (-1 < cVar1) {
        uVar8 = uVar9;
        puVar5 = puVar7;
      }
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)0x18;
        __Znwm();
        if (0x7ffffffffffffff6 < uVar8) goto LAB_10ae01594;
        if (0x16 < uVar8) {
          plVar10 = (long *)0x19;
          if ((uVar8 | 7) != 0x17) {
            plVar10 = (long *)((uVar8 | 7) + 1);
          }
          plVar6 = plVar10;
          __Znwm();
          *plVar4 = (long)plVar6;
          uVar9 = 2;
          goto LAB_10ae01538;
        }
        *(char *)((long)plVar4 + 0x17) = (char)uVar8;
        uVar9 = 2;
        plVar6 = plVar4;
        plVar10 = plVar4;
        if (uVar8 != 0) goto LAB_10ae01548;
      }
      else {
        func_0x00010b4d80a4();
        if (0x7ffffffffffffff6 < uVar8) {
          func_0x000104bd47d4();
LAB_10ae01594:
          func_0x000104bd47d4();
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10ae0159c);
          (*pcVar3)();
        }
        if (uVar8 < 0x17) {
          *(char *)((long)plVar4 + 0x17) = (char)uVar8;
          uVar9 = 3;
          plVar6 = plVar4;
          plVar10 = plVar4;
          if (uVar8 == 0) goto LAB_10ae01558;
        }
        else {
          plVar10 = (long *)0x19;
          if ((uVar8 | 7) != 0x17) {
            plVar10 = (long *)((uVar8 | 7) + 1);
          }
          plVar6 = plVar10;
          __Znwm();
          *plVar4 = (long)plVar6;
          uVar9 = 3;
LAB_10ae01538:
          plVar4[1] = uVar8;
          plVar4[2] = (ulong)plVar10 | 0x8000000000000000;
          plVar10 = plVar4;
        }
LAB_10ae01548:
        _memmove(plVar6,puVar5,uVar8);
        plVar4 = plVar6;
      }
LAB_10ae01558:
      *(undefined1 *)((long)plVar4 + uVar8) = 0;
      *(ulong *)(param_1 + 0x28) = uVar9 | (ulong)plVar10;
      uVar8 = *(ulong *)(param_2 + 8);
      goto joined_r0x00010ae01410;
    }
    puVar5 = (undefined8 *)(uVar8 & 0xfffffffffffffffc);
    if (puVar5 != puVar7) {
      if (*(char *)((long)puVar5 + 0x17) < '\0') {
        uVar8 = puVar7[1];
        puVar2 = (undefined8 *)*puVar7;
        if (-1 < cVar1) {
          uVar8 = uVar9;
          puVar2 = puVar7;
        }
        func_0x000107c27ba0(puVar5,puVar2,uVar8);
        uVar8 = *(ulong *)(param_2 + 8);
        goto joined_r0x00010ae01410;
      }
      if (-1 < cVar1) {
        uVar12 = puVar7[1];
        uVar11 = *puVar7;
        puVar5[2] = puVar7[2];
        puVar5[1] = uVar12;
        *puVar5 = uVar11;
        uVar8 = *(ulong *)(param_2 + 8);
        goto joined_r0x00010ae01410;
      }
      func_0x000107c27ba4(puVar5,*puVar7,puVar7[1]);
    }
  }
  uVar8 = *(ulong *)(param_2 + 8);
joined_r0x00010ae01410:
  if ((uVar8 & 1) == 0) {
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



/* Entry: 10ae015b0; end: 10ae01697;  */

long FUN_10ae015b0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar2 = (undefined8 *)(*(ulong *)(param_1 + 0x10) ^ 2);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 3) != 0) {
    puVar1 = (undefined8 *)0x0;
  }
  if ((puVar1 != (undefined8 *)0x0) && (*(char *)((long)puVar2 + 0x17) < '\0')) {
    __ZdlPv(*puVar2);
    __ZdlPv(puVar1);
    return param_1;
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10ae01698; end: 10ae016ef;  */

undefined ** FUN_10ae01698(void)

{
  return &PTR_DAT_110c776d8;
}



/* Entry: 10ae016f0; end: 10ae019ef;  */

/* WARNING: Removing unreachable block (ram,0x00010ae018d4) */
/* WARNING: Removing unreachable block (ram,0x00010ae018dc) */
/* WARNING: Removing unreachable block (ram,0x00010ae018cc) */

long * FUN_10ae016f0(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  char cVar4;
  ulong *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  long *plVar11;
  ulong *puVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  undefined1 *puVar18;
  
  plVar11 = param_2;
  if (*(int *)(param_1 + 0x18) != 0) {
    plVar11 = param_3;
    func_0x000107c282e4(param_3,*(int *)(param_1 + 0x18),param_2);
  }
  puVar12 = (ulong *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  cVar4 = *(char *)((long)puVar12 + 0x17);
  uVar15 = (ulong)cVar4;
  if ((long)uVar15 < 0) {
    if (puVar12[1] != 0) {
      puVar3 = (ulong *)*puVar12;
      uVar16 = puVar12[1];
      goto joined_r0x00010ae01760;
    }
  }
  else {
    puVar3 = puVar12;
    uVar16 = uVar15;
    if ((int)cVar4 != 0) {
joined_r0x00010ae01760:
      if (uVar16 << 0x20 == 0) {
LAB_10ae01820:
        if (((uint)(int)cVar4 >> 7 & 1) == 0) goto LAB_10ae01824;
LAB_10ae01858:
        uVar15 = puVar12[1];
        if ((long)uVar15 < 0x80) goto LAB_10ae01864;
      }
      else {
        lVar8 = (long)(uVar16 << 0x20) >> 0x20;
        puVar2 = (ulong *)((long)puVar3 + lVar8);
        puVar10 = puVar3;
        for (; (7 < lVar8 && ((*puVar3 & 0x8080808080808080) == 0)); puVar3 = puVar3 + 1) {
          puVar10 = puVar10 + 1;
          lVar8 = lVar8 + -8;
        }
        puVar5 = puVar3;
        if (puVar3 < puVar2) {
          uVar9 = (long)puVar2 - (long)puVar10;
          puVar10 = puVar3;
          for (uVar16 = uVar9 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            puVar5 = puVar10;
            if ((char)*puVar10 < '\0') goto LAB_10ae01814;
            puVar10 = (ulong *)((long)puVar10 + 1);
          }
          puVar3 = (ulong *)((long)puVar3 + uVar9);
          puVar5 = puVar3;
          if (2 < uVar9 - 1) {
            puVar10 = (ulong *)((long)puVar10 + 3);
            do {
              puVar5 = puVar10;
              if ((char)*puVar10 < '\0') break;
              puVar1 = (ulong *)((long)puVar10 + 1);
              puVar10 = (ulong *)((long)puVar10 + 4);
              puVar5 = puVar3;
            } while (puVar1 != puVar3);
          }
        }
LAB_10ae01814:
        func_0x000107c34ffc(puVar5,puVar2,0);
        if (puVar5 != (ulong *)0x0) goto LAB_10ae01820;
        func_0x00010b4d3bf8(&UNK_10f7741f2,0,&UNK_10f6af3c9,0x22,&UNK_10f774276);
        uVar15 = (ulong)*(byte *)((long)puVar12 + 0x17);
        if ((char)*(byte *)((long)puVar12 + 0x17) < '\0') goto LAB_10ae01858;
LAB_10ae01824:
        uVar15 = uVar15 & 0xff;
LAB_10ae01864:
        if ((long)uVar15 <= (*param_3 - (long)plVar11) + 0xe) {
          *(undefined1 *)plVar11 = 0x12;
          *(char *)((long)plVar11 + 1) = (char)uVar15;
          puVar3 = (ulong *)*puVar12;
          if (-1 < *(char *)((long)puVar12 + 0x17)) {
            puVar3 = puVar12;
          }
          _memcpy((long)plVar11 + 2,puVar3,uVar15);
          plVar11 = (long *)((long)plVar11 + 2 + uVar15);
          goto LAB_10ae018a8;
        }
      }
      plVar6 = param_3;
      func_0x00010b4d50d0(param_3,2,puVar12,plVar11);
      uVar15 = *(ulong *)(param_1 + 8);
      goto joined_r0x00010ae018ac;
    }
  }
LAB_10ae018a8:
  uVar15 = *(ulong *)(param_1 + 8);
  plVar6 = plVar11;
joined_r0x00010ae018ac:
  if ((uVar15 & 1) != 0) {
    uVar15 = uVar15 & 0xfffffffffffffffe;
    uVar16 = (ulong)*(char *)(uVar15 + 0x1f);
    if ((long)uVar16 < 0) {
      lVar8 = *(long *)(uVar15 + 8);
      uVar16 = (ulong)*(uint *)(uVar15 + 0x10);
    }
    else {
      lVar8 = uVar15 + 8;
    }
    uVar14 = (uint)uVar16;
    if (*param_3 - (long)plVar6 < (long)(int)uVar14) {
      puVar18 = (undefined1 *)((*param_3 - (long)plVar6) + 0x10);
      if ((int)puVar18 < (int)uVar14) {
        do {
          lVar13 = (long)(int)puVar18;
          _memcpy(plVar6,lVar8,lVar13);
          uVar14 = (int)uVar16 - (int)puVar18;
          uVar16 = (ulong)uVar14;
          lVar8 = lVar8 + lVar13;
          plVar6 = (long *)((long)plVar6 + lVar13);
          plVar11 = (long *)*param_3;
          do {
            if ((*(byte *)(param_3 + 7) & 1) != 0) {
              puVar18 = (undefined1 *)((long)plVar11 + (0x10 - (long)(param_3 + 2)));
              iVar17 = (int)puVar18;
              plVar6 = param_3 + 2;
              goto joined_r0x00010ae019d0;
            }
            plVar7 = param_3;
            func_0x000107c303dc();
            plVar6 = (long *)((long)plVar7 + (long)((int)plVar6 - (int)plVar11));
            plVar11 = (long *)*param_3;
          } while (plVar11 <= plVar6);
          puVar18 = (undefined1 *)((long)plVar11 + (0x10 - (long)plVar6));
          iVar17 = (int)puVar18;
joined_r0x00010ae019d0:
        } while (iVar17 < (int)uVar14);
      }
      _memcpy(plVar6,lVar8,(long)(int)uVar14);
      plVar6 = (long *)((long)plVar6 + (long)(int)uVar14);
    }
    else {
      _memcpy(plVar6,lVar8,uVar16 & 0xffffffff);
      plVar6 = (long *)((long)plVar6 + (long)(int)uVar14);
    }
  }
  return plVar6;
}



/* Entry: 10ae019f0; end: 10ae01a97;  */

long FUN_10ae019f0(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  lVar3 = lVar4;
  if (lVar4 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 == 0) {
    lVar3 = 0;
    iVar1 = *(int *)(param_1 + 0x18);
  }
  else {
    lVar3 = *(long *)(uVar2 + 8);
    if (-1 < *(char *)(uVar2 + 0x17)) {
      lVar3 = lVar4;
    }
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
    iVar1 = *(int *)(param_1 + 0x18);
  }
  if (iVar1 != 0) {
    lVar3 = (ulong)((int)LZCOUNT((long)iVar1) * -9 + 0x2c0U >> 6) + lVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x1c) = (int)lVar3;
    return lVar3;
  }
  uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  lVar4 = (long)*(char *)(uVar2 + 0x1f);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 0x10);
  }
  *(int *)(param_1 + 0x1c) = (int)(lVar4 + lVar3);
  return lVar4 + lVar3;
}



/* Entry: 10ae01a98; end: 10ae01ce3;  */

void FUN_10ae01a98(long param_1,long param_2)

{
  char cVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar8 = (undefined8 *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
  cVar1 = *(char *)((long)puVar8 + 0x17);
  uVar9 = (ulong)cVar1;
  uVar7 = uVar9;
  if ((long)uVar9 < 0) {
    uVar7 = puVar8[1];
  }
  if (uVar7 == 0) goto LAB_10ae01c74;
  plVar5 = *(long **)(param_1 + 8);
  if (((ulong)plVar5 & 1) == 0) {
    uVar7 = *(ulong *)(param_1 + 0x10);
  }
  else {
    plVar5 = *(long **)((ulong)plVar5 & 0xfffffffffffffffe);
    uVar7 = *(ulong *)(param_1 + 0x10);
  }
  if ((uVar7 & 3) != 0) {
    puVar6 = (undefined8 *)(uVar7 & 0xfffffffffffffffc);
    if (puVar6 != puVar8) {
      if (*(char *)((long)puVar6 + 0x17) < '\0') {
        uVar7 = puVar8[1];
        puVar2 = (undefined8 *)*puVar8;
        if (-1 < cVar1) {
          uVar7 = uVar9;
          puVar2 = puVar8;
        }
        func_0x000107c27ba0(puVar6,puVar2,uVar7);
      }
      else if (cVar1 < '\0') {
        func_0x000107c27ba4(puVar6,*puVar8,puVar8[1]);
      }
      else {
        uVar12 = puVar8[1];
        uVar11 = *puVar8;
        puVar6[2] = puVar8[2];
        puVar6[1] = uVar12;
        *puVar6 = uVar11;
      }
    }
    goto LAB_10ae01c74;
  }
  uVar7 = puVar8[1];
  puVar6 = (undefined8 *)*puVar8;
  if (-1 < cVar1) {
    uVar7 = uVar9;
    puVar6 = puVar8;
  }
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)0x18;
    __Znwm();
    if (0x7ffffffffffffff6 < uVar7) goto LAB_10ae01cc8;
    if (0x16 < uVar7) {
      plVar10 = (long *)0x19;
      if ((uVar7 | 7) != 0x17) {
        plVar10 = (long *)((uVar7 | 7) + 1);
      }
      plVar4 = plVar10;
      __Znwm();
      *plVar5 = (long)plVar4;
      uVar9 = 2;
      goto LAB_10ae01c40;
    }
    *(char *)((long)plVar5 + 0x17) = (char)uVar7;
    uVar9 = 2;
    plVar4 = plVar5;
    plVar10 = plVar5;
    if (uVar7 != 0) goto LAB_10ae01c50;
  }
  else {
    func_0x00010b4d80a4();
    if (0x7ffffffffffffff6 < uVar7) {
      func_0x000104bd47d4();
LAB_10ae01cc8:
      func_0x000104bd47d4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10ae01cd0);
      (*pcVar3)();
    }
    if (uVar7 < 0x17) {
      *(char *)((long)plVar5 + 0x17) = (char)uVar7;
      uVar9 = 3;
      plVar4 = plVar5;
      plVar10 = plVar5;
      if (uVar7 == 0) goto LAB_10ae01c60;
    }
    else {
      plVar10 = (long *)0x19;
      if ((uVar7 | 7) != 0x17) {
        plVar10 = (long *)((uVar7 | 7) + 1);
      }
      plVar4 = plVar10;
      __Znwm();
      *plVar5 = (long)plVar4;
      uVar9 = 3;
LAB_10ae01c40:
      plVar5[1] = uVar7;
      plVar5[2] = (ulong)plVar10 | 0x8000000000000000;
      plVar10 = plVar5;
    }
LAB_10ae01c50:
    _memmove(plVar4,puVar6,uVar7);
    plVar5 = plVar4;
  }
LAB_10ae01c60:
  *(undefined1 *)((long)plVar5 + uVar7) = 0;
  *(ulong *)(param_1 + 0x10) = uVar9 | (ulong)plVar10;
LAB_10ae01c74:
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
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



/* Entry: 10ae01ce4; end: 10ae01e1f;  */

long FUN_10ae01ce4(long param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  puVar2 = (ulong *)(param_1 + 0x10);
  uVar1 = *puVar2;
  if (uVar1 == 0) {
    return param_1;
  }
  if (*(long *)(param_1 + 0x20) != 0) goto LAB_10ae01d6c;
  if ((uVar1 & 1) == 0) {
    uVar3 = 1;
    puVar4 = puVar2;
LAB_10ae01d44:
    do {
      if ((long *)*puVar4 != (long *)0x0) {
        (**(code **)(*(long *)*puVar4 + 8))();
      }
      uVar3 = uVar3 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar3 != 0);
    uVar1 = *puVar2;
    if ((uVar1 & 1) == 0) goto LAB_10ae01d6c;
  }
  else {
    uVar3 = (ulong)*(uint *)(uVar1 - 1);
    if (0 < (int)*(uint *)(uVar1 - 1)) {
      puVar4 = (ulong *)(uVar1 + 7);
      goto LAB_10ae01d44;
    }
  }
  __ZdlPv(uVar1 - 1);
LAB_10ae01d6c:
  *puVar2 = 0;
  return param_1;
}



/* Entry: 10ae01e20; end: 10ae01e2b;  */

undefined ** FUN_10ae01e20(void)

{
  return &PTR_DAT_110c77718;
}



/* Entry: 10ae01e2c; end: 10ae01e73;  */

void FUN_10ae01e2c(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
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



/* Entry: 10ae01e74; end: 10ae0215b;  */

void FUN_10ae01e74(long param_1,byte *param_2,long *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong *puVar3;
  uint uVar4;
  byte *pbVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  byte *pbVar17;
  undefined8 uVar18;
  byte *pbStack_70;
  uint uStack_64;
  
  iVar16 = *(int *)(param_1 + 0x18);
  if (iVar16 != 0) {
    iVar15 = 0;
    pbVar1 = (byte *)(param_3 + 2);
    pbVar2 = (byte *)(param_3 + 4);
    pbVar9 = param_2;
    do {
      uVar8 = *(ulong *)(param_1 + 0x10);
      puVar3 = (ulong *)(param_1 + 0x10);
      if ((uVar8 & 1) != 0) {
        puVar3 = (ulong *)(uVar8 + (long)iVar15 * 8 + 7);
      }
      param_2 = (byte *)*puVar3;
      uVar13 = *(uint *)(param_2 + 0x20);
      pbVar17 = (byte *)*param_3;
      pbVar5 = pbVar9;
      if (pbVar17 <= pbVar9) {
        do {
          pbVar5 = pbVar1;
          if ((*(byte *)(param_3 + 7) & 1) != 0) break;
          pbVar10 = pbVar2;
          if (param_3[6] == 0) {
            *(undefined1 *)(param_3 + 7) = 1;
LAB_10ae02008:
            *param_3 = (long)pbVar10;
          }
          else {
            if (param_3[1] == 0) {
              uVar18 = *(undefined8 *)pbVar17;
              param_3[3] = *(long *)(pbVar17 + 8);
              *(undefined8 *)pbVar1 = uVar18;
              param_3[1] = (long)pbVar17;
              goto LAB_10ae02008;
            }
            _memcpy(param_3[1],pbVar1,(long)pbVar17 - (long)pbVar1);
            do {
              plVar6 = (long *)param_3[6];
              (**(code **)(*plVar6 + 0x10))(plVar6,&pbStack_70,&uStack_64);
              if (((ulong)plVar6 & 1) == 0) {
                *(undefined1 *)(param_3 + 7) = 1;
                *param_3 = (long)pbVar2;
                goto LAB_10ae01f64;
              }
            } while (uStack_64 == 0);
            puVar11 = (undefined8 *)*param_3;
            if ((int)uStack_64 < 0x11) {
              uVar18 = *puVar11;
              param_3[3] = puVar11[1];
              *(undefined8 *)pbVar1 = uVar18;
              param_3[1] = (long)pbStack_70;
              pbVar10 = pbVar1 + (int)uStack_64;
              goto LAB_10ae02008;
            }
            uVar18 = *puVar11;
            *(undefined8 *)(pbStack_70 + 8) = puVar11[1];
            *(undefined8 *)pbStack_70 = uVar18;
            *param_3 = (long)(pbStack_70 + ((ulong)uStack_64 - 0x10));
            param_3[1] = 0;
            pbVar5 = pbStack_70;
            pbVar10 = pbStack_70 + ((ulong)uStack_64 - 0x10);
          }
LAB_10ae01f64:
          pbVar9 = pbVar5 + ((int)pbVar9 - (int)pbVar17);
          pbVar5 = pbVar9;
          pbVar17 = pbVar10;
        } while (pbVar10 <= pbVar9);
      }
      pbVar9 = pbVar5 + 1;
      *pbVar5 = 10;
      if (0x7f < uVar13) {
        do {
          pbVar5 = pbVar9;
          pbVar9 = pbVar5 + 1;
          *pbVar5 = (byte)uVar13 | 0x80;
          uVar4 = uVar13 >> 0xe;
          uVar13 = uVar13 >> 7;
        } while (uVar4 != 0);
      }
      *pbVar9 = (byte)uVar13;
      (**(code **)(*(long *)param_2 + 0x38))(param_2,pbVar5 + 2,param_3);
      iVar15 = iVar15 + 1;
      pbVar9 = param_2;
    } while (iVar15 != iVar16);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar14 = (ulong)*(char *)(uVar8 + 0x1f);
    if ((long)uVar14 < 0) {
      lVar7 = *(long *)(uVar8 + 8);
      uVar14 = (ulong)*(uint *)(uVar8 + 0x10);
    }
    else {
      lVar7 = uVar8 + 8;
    }
    uVar13 = (uint)uVar14;
    if (*param_3 - (long)param_2 < (long)(int)uVar13) {
      pbVar9 = (byte *)((*param_3 - (long)param_2) + 0x10);
      if ((int)pbVar9 < (int)uVar13) {
        do {
          lVar12 = (long)(int)pbVar9;
          _memcpy(param_2,lVar7,lVar12);
          uVar13 = (int)uVar14 - (int)pbVar9;
          uVar14 = (ulong)uVar13;
          lVar7 = lVar7 + lVar12;
          param_2 = param_2 + lVar12;
          pbVar9 = (byte *)*param_3;
          do {
            if ((*(byte *)(param_3 + 7) & 1) != 0) {
              pbVar9 = pbVar9 + (0x10 - (long)(param_3 + 2));
              iVar16 = (int)pbVar9;
              param_2 = (byte *)(param_3 + 2);
              goto joined_r0x00010ae0213c;
            }
            plVar6 = param_3;
            func_0x000107c303dc();
            param_2 = (byte *)((long)plVar6 + (long)((int)param_2 - (int)pbVar9));
            pbVar9 = (byte *)*param_3;
          } while (pbVar9 <= param_2);
          pbVar9 = pbVar9 + (0x10 - (long)param_2);
          iVar16 = (int)pbVar9;
joined_r0x00010ae0213c:
        } while (iVar16 < (int)uVar13);
      }
      _memcpy(param_2,lVar7,(long)(int)uVar13);
    }
    else {
      _memcpy();
    }
  }
  return;
}



/* Entry: 10ae0215c; end: 10ae02297;  */

long FUN_10ae0215c(long param_1)

{
  int iVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  lVar2 = (long)*(int *)(param_1 + 0x18);
  puVar3 = (ulong *)(param_1 + 0x10);
  if ((uVar4 & 1) != 0) {
    puVar3 = (ulong *)(uVar4 + 7);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar2 = 0;
  }
  else {
    lVar5 = lVar2 << 3;
    do {
      uVar4 = *puVar3;
      uVar6 = *(ulong *)(uVar4 + 0x10) & 0xfffffffffffffffc;
      lVar7 = (long)*(char *)(uVar6 + 0x17);
      if (lVar7 < 0) {
        if (*(long *)(uVar6 + 8) == 0) goto LAB_10ae02238;
LAB_10ae021a4:
        lVar8 = *(long *)(uVar6 + 8);
        if (-1 < *(char *)(uVar6 + 0x17)) {
          lVar8 = lVar7;
        }
        lVar7 = lVar8 + (ulong)((int)LZCOUNT((int)lVar8) * -9 + 0x160U >> 6) + 1;
        iVar1 = *(int *)(uVar4 + 0x18);
      }
      else {
        if (lVar7 != 0) goto LAB_10ae021a4;
LAB_10ae02238:
        lVar7 = 0;
        iVar1 = *(int *)(uVar4 + 0x18);
      }
      if (iVar1 != 0) {
        lVar7 = (ulong)((int)LZCOUNT((long)iVar1) * -9 + 0x2c0U >> 6) + lVar7;
      }
      if (*(int *)(uVar4 + 0x1c) != 0) {
        lVar7 = lVar7 + (ulong)((int)LZCOUNT((long)*(int *)(uVar4 + 0x1c)) * -9 + 0x280U >> 6) + 1;
      }
      if ((*(ulong *)(uVar4 + 8) & 1) != 0) {
        uVar6 = *(ulong *)(uVar4 + 8) & 0xfffffffffffffffe;
        lVar8 = (long)*(char *)(uVar6 + 0x1f);
        if (lVar8 < 0) {
          lVar8 = *(long *)(uVar6 + 0x10);
        }
        lVar7 = lVar8 + lVar7;
      }
      *(int *)(uVar4 + 0x20) = (int)lVar7;
      lVar2 = lVar7 + lVar2 + (ulong)((int)LZCOUNT((int)lVar7) * -9 + 0x160U >> 6);
      puVar3 = puVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x28) = (int)lVar2;
    return lVar2;
  }
  uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  lVar5 = (long)*(char *)(uVar4 + 0x1f);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 0x10);
  }
  *(int *)(param_1 + 0x28) = (int)(lVar5 + lVar2);
  return lVar5 + lVar2;
}



/* Entry: 10ae02298; end: 10ae023d3;  */

void FUN_10ae02298(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10ae023d4; end: 10ae0242b;  */

undefined ** FUN_10ae023d4(void)

{
  return &PTR_DAT_110c77758;
}



/* Entry: 10ae0242c; end: 10ae027c3;  */

/* WARNING: Removing unreachable block (ram,0x00010ae02640) */
/* WARNING: Removing unreachable block (ram,0x00010ae02648) */
/* WARNING: Removing unreachable block (ram,0x00010ae02638) */

byte * FUN_10ae0242c(long param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  char cVar4;
  ulong *puVar5;
  byte *pbVar6;
  long lVar7;
  ulong *puVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong *puVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  
  pbVar9 = param_2;
  if (*(int *)(param_1 + 0x18) != 0) {
    pbVar9 = param_3;
    func_0x000107c282e4(param_3,*(int *)(param_1 + 0x18),param_2);
  }
  puVar12 = (ulong *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  cVar4 = *(char *)((long)puVar12 + 0x17);
  uVar15 = (ulong)cVar4;
  if ((long)uVar15 < 0) {
    if (puVar12[1] != 0) {
      puVar3 = (ulong *)*puVar12;
      uVar16 = puVar12[1];
      goto joined_r0x00010ae0249c;
    }
  }
  else {
    puVar3 = puVar12;
    uVar16 = uVar15;
    if ((int)cVar4 != 0) {
joined_r0x00010ae0249c:
      if (uVar16 << 0x20 == 0) {
LAB_10ae0255c:
        if (((uint)(int)cVar4 >> 7 & 1) != 0) goto LAB_10ae02594;
LAB_10ae02560:
        uVar15 = uVar15 & 0xff;
LAB_10ae025a0:
        if ((long)uVar15 <= (*(long *)param_3 - (long)pbVar9) + 0xe) {
          *pbVar9 = 0x12;
          pbVar9[1] = (byte)uVar15;
          puVar3 = (ulong *)*puVar12;
          if (-1 < *(char *)((long)puVar12 + 0x17)) {
            puVar3 = puVar12;
          }
          _memcpy(pbVar9 + 2,puVar3,uVar15);
          pbVar9 = pbVar9 + 2 + uVar15;
          goto LAB_10ae025e4;
        }
      }
      else {
        lVar7 = (long)(uVar16 << 0x20) >> 0x20;
        puVar2 = (ulong *)((long)puVar3 + lVar7);
        puVar8 = puVar3;
        for (; (7 < lVar7 && ((*puVar3 & 0x8080808080808080) == 0)); puVar3 = puVar3 + 1) {
          puVar8 = puVar8 + 1;
          lVar7 = lVar7 + -8;
        }
        puVar5 = puVar3;
        if (puVar3 < puVar2) {
          uVar10 = (long)puVar2 - (long)puVar8;
          puVar8 = puVar3;
          for (uVar16 = uVar10 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            puVar5 = puVar8;
            if ((char)*puVar8 < '\0') goto LAB_10ae02550;
            puVar8 = (ulong *)((long)puVar8 + 1);
          }
          puVar3 = (ulong *)((long)puVar3 + uVar10);
          puVar5 = puVar3;
          if (2 < uVar10 - 1) {
            puVar8 = (ulong *)((long)puVar8 + 3);
            do {
              puVar5 = puVar8;
              if ((char)*puVar8 < '\0') break;
              puVar1 = (ulong *)((long)puVar8 + 1);
              puVar8 = (ulong *)((long)puVar8 + 4);
              puVar5 = puVar3;
            } while (puVar1 != puVar3);
          }
        }
LAB_10ae02550:
        func_0x000107c34ffc(puVar5,puVar2,0);
        if (puVar5 != (ulong *)0x0) goto LAB_10ae0255c;
        func_0x00010b4d3bf8(&UNK_10f7741f2,0,&UNK_10f6af3ec,0x21,&UNK_10f774276);
        uVar15 = (ulong)*(byte *)((long)puVar12 + 0x17);
        if (-1 < (char)*(byte *)((long)puVar12 + 0x17)) goto LAB_10ae02560;
LAB_10ae02594:
        uVar15 = puVar12[1];
        if ((long)uVar15 < 0x80) goto LAB_10ae025a0;
      }
      pbVar11 = param_3;
      func_0x00010b4d50d0(param_3,2,puVar12,pbVar9);
      uVar14 = *(uint *)(param_1 + 0x1c);
      goto joined_r0x00010ae025e8;
    }
  }
LAB_10ae025e4:
  uVar14 = *(uint *)(param_1 + 0x1c);
  pbVar11 = pbVar9;
joined_r0x00010ae025e8:
  if (uVar14 != 0) {
    pbVar9 = *(byte **)param_3;
    if (pbVar11 < pbVar9) {
      *pbVar11 = 0x18;
    }
    else {
      do {
        if (param_3[0x38] == 1) {
          pbVar11 = param_3 + 0x10;
          break;
        }
        pbVar6 = param_3;
        func_0x000107c303dc();
        pbVar11 = pbVar6 + ((int)pbVar11 - (int)pbVar9);
        pbVar9 = *(byte **)param_3;
      } while (pbVar9 <= pbVar11);
      uVar14 = *(uint *)(param_1 + 0x1c);
      *pbVar11 = 0x18;
    }
    uVar15 = (ulong)(int)uVar14;
    pbVar9 = pbVar11 + 1;
    uVar16 = uVar15;
    pbVar11 = pbVar9;
    if (0x7f < uVar14) {
      do {
        pbVar9 = pbVar11 + 1;
        *pbVar11 = (byte)uVar16 | 0x80;
        uVar15 = uVar16 >> 7;
        uVar10 = uVar16 >> 0xe;
        uVar16 = uVar15;
        pbVar11 = pbVar9;
      } while (uVar10 != 0);
    }
    pbVar11 = pbVar9 + 1;
    *pbVar9 = (byte)uVar15;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar15 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar16 = (ulong)*(char *)(uVar15 + 0x1f);
    if ((long)uVar16 < 0) {
      lVar7 = *(long *)(uVar15 + 8);
      uVar16 = (ulong)*(uint *)(uVar15 + 0x10);
    }
    else {
      lVar7 = uVar15 + 8;
    }
    uVar14 = (uint)uVar16;
    if (*(long *)param_3 - (long)pbVar11 < (long)(int)uVar14) {
      pbVar9 = (byte *)((*(long *)param_3 - (long)pbVar11) + 0x10);
      if ((int)pbVar9 < (int)uVar14) {
        do {
          lVar13 = (long)(int)pbVar9;
          _memcpy(pbVar11,lVar7,lVar13);
          uVar14 = (int)uVar16 - (int)pbVar9;
          uVar16 = (ulong)uVar14;
          lVar7 = lVar7 + lVar13;
          pbVar11 = pbVar11 + lVar13;
          pbVar9 = *(byte **)param_3;
          do {
            if ((param_3[0x38] & 1) != 0) {
              pbVar9 = pbVar9 + (0x10 - (long)(param_3 + 0x10));
              iVar17 = (int)pbVar9;
              pbVar11 = param_3 + 0x10;
              goto joined_r0x00010ae027a4;
            }
            pbVar6 = param_3;
            func_0x000107c303dc();
            pbVar11 = pbVar6 + ((int)pbVar11 - (int)pbVar9);
            pbVar9 = *(byte **)param_3;
          } while (pbVar9 <= pbVar11);
          pbVar9 = pbVar9 + (0x10 - (long)pbVar11);
          iVar17 = (int)pbVar9;
joined_r0x00010ae027a4:
        } while (iVar17 < (int)uVar14);
      }
      _memcpy(pbVar11,lVar7,(long)(int)uVar14);
      pbVar11 = pbVar11 + (int)uVar14;
    }
    else {
      _memcpy(pbVar11,lVar7,uVar16 & 0xffffffff);
      pbVar11 = pbVar11 + (int)uVar14;
    }
  }
  return pbVar11;
}



/* Entry: 10ae027c4; end: 10ae0288f;  */

long FUN_10ae027c4(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  lVar3 = lVar4;
  if (lVar4 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 == 0) {
    lVar3 = 0;
    iVar1 = *(int *)(param_1 + 0x18);
  }
  else {
    lVar3 = *(long *)(uVar2 + 8);
    if (-1 < *(char *)(uVar2 + 0x17)) {
      lVar3 = lVar4;
    }
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
    iVar1 = *(int *)(param_1 + 0x18);
  }
  if (iVar1 != 0) {
    lVar3 = (ulong)((int)LZCOUNT((long)iVar1) * -9 + 0x2c0U >> 6) + lVar3;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x20) = (int)lVar3;
    return lVar3;
  }
  uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  lVar4 = (long)*(char *)(uVar2 + 0x1f);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 0x10);
  }
  *(int *)(param_1 + 0x20) = (int)(lVar4 + lVar3);
  return lVar4 + lVar3;
}



/* Entry: 10ae02890; end: 10ae02ae7;  */

void FUN_10ae02890(long param_1,long param_2)

{
  char cVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar8 = (undefined8 *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
  cVar1 = *(char *)((long)puVar8 + 0x17);
  uVar9 = (ulong)cVar1;
  uVar7 = uVar9;
  if ((long)uVar9 < 0) {
    uVar7 = puVar8[1];
  }
  if (uVar7 == 0) goto LAB_10ae02a6c;
  plVar5 = *(long **)(param_1 + 8);
  if (((ulong)plVar5 & 1) == 0) {
    uVar7 = *(ulong *)(param_1 + 0x10);
  }
  else {
    plVar5 = *(long **)((ulong)plVar5 & 0xfffffffffffffffe);
    uVar7 = *(ulong *)(param_1 + 0x10);
  }
  if ((uVar7 & 3) != 0) {
    puVar6 = (undefined8 *)(uVar7 & 0xfffffffffffffffc);
    if (puVar6 != puVar8) {
      if (*(char *)((long)puVar6 + 0x17) < '\0') {
        uVar7 = puVar8[1];
        puVar2 = (undefined8 *)*puVar8;
        if (-1 < cVar1) {
          uVar7 = uVar9;
          puVar2 = puVar8;
        }
        func_0x000107c27ba0(puVar6,puVar2,uVar7);
      }
      else if (cVar1 < '\0') {
        func_0x000107c27ba4(puVar6,*puVar8,puVar8[1]);
      }
      else {
        uVar12 = puVar8[1];
        uVar11 = *puVar8;
        puVar6[2] = puVar8[2];
        puVar6[1] = uVar12;
        *puVar6 = uVar11;
      }
    }
    goto LAB_10ae02a6c;
  }
  uVar7 = puVar8[1];
  puVar6 = (undefined8 *)*puVar8;
  if (-1 < cVar1) {
    uVar7 = uVar9;
    puVar6 = puVar8;
  }
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)0x18;
    __Znwm();
    if (0x7ffffffffffffff6 < uVar7) goto LAB_10ae02acc;
    if (0x16 < uVar7) {
      plVar10 = (long *)0x19;
      if ((uVar7 | 7) != 0x17) {
        plVar10 = (long *)((uVar7 | 7) + 1);
      }
      plVar4 = plVar10;
      __Znwm();
      *plVar5 = (long)plVar4;
      uVar9 = 2;
      goto LAB_10ae02a38;
    }
    *(char *)((long)plVar5 + 0x17) = (char)uVar7;
    uVar9 = 2;
    plVar4 = plVar5;
    plVar10 = plVar5;
    if (uVar7 != 0) goto LAB_10ae02a48;
  }
  else {
    func_0x00010b4d80a4();
    if (0x7ffffffffffffff6 < uVar7) {
      func_0x000104bd47d4();
LAB_10ae02acc:
      func_0x000104bd47d4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10ae02ad4);
      (*pcVar3)();
    }
    if (uVar7 < 0x17) {
      *(char *)((long)plVar5 + 0x17) = (char)uVar7;
      uVar9 = 3;
      plVar4 = plVar5;
      plVar10 = plVar5;
      if (uVar7 == 0) goto LAB_10ae02a58;
    }
    else {
      plVar10 = (long *)0x19;
      if ((uVar7 | 7) != 0x17) {
        plVar10 = (long *)((uVar7 | 7) + 1);
      }
      plVar4 = plVar10;
      __Znwm();
      *plVar5 = (long)plVar4;
      uVar9 = 3;
LAB_10ae02a38:
      plVar5[1] = uVar7;
      plVar5[2] = (ulong)plVar10 | 0x8000000000000000;
      plVar10 = plVar5;
    }
LAB_10ae02a48:
    _memmove(plVar4,puVar6,uVar7);
    plVar5 = plVar4;
  }
LAB_10ae02a58:
  *(undefined1 *)((long)plVar5 + uVar7) = 0;
  *(ulong *)(param_1 + 0x10) = uVar9 | (ulong)plVar10;
LAB_10ae02a6c:
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_2 + 0x1c);
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



/* Entry: 10ae02ae8; end: 10ae02b07;  */

void FUN_10ae02ae8(undefined8 param_1,long *param_2)

{
  undefined **ppuVar1;
  long *plVar2;
  long *plVar3;
  long *plStack_28;
  
  if (param_2 == (long *)0x0) {
    plVar2 = (long *)0x28;
    __Znwm();
    plStack_28 = plVar2;
  }
  else {
    ppuVar1 = &PTR___tlv_bootstrap_11340dac8;
    (*(code *)PTR___tlv_bootstrap_11340dac8)();
    if (ppuVar1[1] == (undefined *)*param_2) {
      plVar3 = (long *)ppuVar1[2];
      plVar2 = plVar3;
      func_0x00010b4d755c(plVar3,0x28,&plStack_28);
      if ((int)plVar2 == 0) {
        func_0x00010b4d7498(plVar3,0x28);
        plStack_28 = plVar3;
      }
    }
    else {
      plVar2 = param_2;
      func_0x00010b4d7124(param_2,0x28);
      plStack_28 = plVar2;
    }
  }
  *plStack_28 = (long)&PTR_DAT_110c77568;
  plStack_28[1] = (long)param_2;
  *(undefined4 *)(plStack_28 + 4) = 0;
  plStack_28[2] = (long)&DAT_11383d918;
  plStack_28[3] = 0;
  return;
}



/* Entry: 10ae02b08; end: 10ae02d0b;  */

void FUN_10ae02b08(long *param_1)

{
  undefined **ppuVar1;
  long *plVar2;
  long *plVar3;
  long *plStack_28;
  
  if (param_1 == (long *)0x0) {
    plVar2 = (long *)0x28;
    __Znwm();
    plStack_28 = plVar2;
  }
  else {
    ppuVar1 = &PTR___tlv_bootstrap_11340dac8;
    (*(code *)PTR___tlv_bootstrap_11340dac8)();
    if (ppuVar1[1] == (undefined *)*param_1) {
      plVar3 = (long *)ppuVar1[2];
      plVar2 = plVar3;
      func_0x00010b4d755c(plVar3,0x28,&plStack_28);
      if ((int)plVar2 == 0) {
        func_0x00010b4d7498(plVar3,0x28);
        plStack_28 = plVar3;
      }
    }
    else {
      plVar2 = param_1;
      func_0x00010b4d7124(param_1,0x28);
      plStack_28 = plVar2;
    }
  }
  *plStack_28 = (long)&PTR_DAT_110c77568;
  plStack_28[1] = (long)param_1;
  *(undefined4 *)(plStack_28 + 4) = 0;
  plStack_28[2] = (long)&DAT_11383d918;
  plStack_28[3] = 0;
  return;
}



/* Entry: 10ae02d0c; end: 10ae02d87;  */

undefined * FUN_10ae02d0c(uint param_1)

{
  if (param_1 < 0x11) {
    return (&PTR_DAT_110c777f8)[param_1];
  }
  return &DAT_10f6af52f;
}



/* Entry: 10ae02d88; end: 10ae02ea7;  */

long * FUN_10ae02d88(long *param_1,long *param_2,undefined1 *param_3,int param_4)

{
  int *piVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  int *piVar5;
  ulong uVar6;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
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
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar5 = (int *)(*param_1 + 3U & 0xfffffffffffffffc);
  piVar1 = (int *)(param_1[1] + *param_1);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uVar6 = (long)piVar1 - (long)piVar5;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  plVar3 = param_1;
  if ((piVar1 < piVar5 || uVar6 == 0) || uVar6 < 4) {
    piVar5 = (int *)0x0;
  }
  else {
    uVar6 = uVar6 >> 2;
    plVar4 = param_2;
    do {
      if ((*piVar5 == 0) ||
         (____mb_cur_max(), param_3 < (undefined1 *)((long)plVar4 + (long)(int)plVar3)))
      goto LAB_10ae02e54;
      plVar3 = plVar4;
      _wcrtomb(plVar4,*piVar5,&uStack_e0);
      if (plVar3 == (long *)0xffffffffffffffff) {
        param_2 = (long *)((long)plVar4 + 1);
        *(undefined1 *)plVar4 = 0x2e;
      }
      else {
        param_2 = (long *)((long)plVar4 + (long)plVar3);
      }
      piVar5 = piVar5 + 1;
      uVar6 = uVar6 - 1;
      plVar4 = param_2;
    } while (uVar6 != 0);
  }
  *(undefined1 *)(param_1 + 2) = 1;
  plVar4 = param_2;
LAB_10ae02e54:
  if (param_4 != 0) {
    lVar2 = *param_1;
    *param_1 = (long)piVar5;
    param_1[1] = (lVar2 - (long)piVar5) + param_1[1];
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return plVar4;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  return (long *)(((ulong)((long)plVar3 + 1) & 0xfffffffffffffffe) + 2);
}



/* Entry: 10ae02ea8; end: 10ae02fff;  */

long FUN_10ae02ea8(long param_1)

{
  return (param_1 + 1U & 0xfffffffffffffffe) + 2;
}



/* Entry: 10ae03000; end: 10ae03037;  */

long FUN_10ae03000(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0x11330a9e0;
  if (param_2 != 0) {
    lVar1 = param_2;
  }
  _strlen(lVar1);
  return param_1 + lVar1 + 1;
}



/* Entry: 10ae03038; end: 10ae0309f;  */

undefined1 * FUN_10ae03038(undefined1 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  
  puVar3 = (undefined1 *)0x0;
  if (param_1 != (undefined1 *)0x0) {
    lVar1 = 0x11330a9e0;
    if (param_2 != 0) {
      lVar1 = param_2;
    }
    lVar2 = lVar1;
    _strlen();
    puVar3 = param_1;
    _stpncpy(param_1,lVar1,lVar2);
    if ((long)puVar3 - (long)param_1 == lVar2) {
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 1;
  }
  return puVar3;
}



/* Entry: 10ae030a0; end: 10ae030d7;  */

long FUN_10ae030a0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0x11330a9e0;
  if (param_2 != 0) {
    lVar1 = param_2;
  }
  _strlen(lVar1);
  return param_1 + lVar1 + 1;
}



/* Entry: 10ae030d8; end: 10ae0313f;  */

undefined1 * FUN_10ae030d8(undefined1 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  
  puVar3 = (undefined1 *)0x0;
  if (param_1 != (undefined1 *)0x0) {
    lVar1 = 0x11330a9e0;
    if (param_2 != 0) {
      lVar1 = param_2;
    }
    lVar2 = lVar1;
    _strlen();
    puVar3 = param_1;
    _stpncpy(param_1,lVar1,lVar2);
    if ((long)puVar3 - (long)param_1 == lVar2) {
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 1;
  }
  return puVar3;
}



/* Entry: 10ae03140; end: 10ae0314b;  */

long FUN_10ae03140(long param_1,undefined8 param_2,long param_3)

{
  return param_1 + param_3 + 1;
}



/* Entry: 10ae0314c; end: 10ae03187;  */

undefined1 * FUN_10ae0314c(undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x0;
  if (param_1 != (undefined1 *)0x0) {
    puVar1 = param_1;
    _stpncpy();
    if ((long)puVar1 - (long)param_1 == param_3) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return puVar1;
}



/* Entry: 10ae03188; end: 10ae03207;  */

void FUN_10ae03188(undefined1 *param_1,long param_2,undefined1 *param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  undefined1 *puStack_20;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  if (param_2 == 0 || param_1 == (undefined1 *)0x0) {
    param_2 = 1;
    param_1 = &uStack_11;
  }
  if (param_4 == 0 || param_3 == (undefined1 *)0x0) {
    param_4 = 1;
    param_3 = &uStack_12;
  }
  puStack_38 = param_1 + param_2;
  puStack_20 = param_3 + param_4;
  puStack_48 = param_1;
  puStack_40 = param_1;
  puStack_30 = param_3;
  puStack_28 = param_3;
  FUN_10ae032c8(&puStack_48,param_5,param_6,param_7,param_8);
  return;
}



/* Entry: 10ae03208; end: 10ae032c7;  */

void FUN_10ae03208(ulong *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_2 + 8);
  uVar2 = uVar1;
  if (uVar1 < *(ulong *)(param_2 + 0x10)) {
    uVar2 = *(ulong *)(param_2 + 0x10) - uVar1;
    if (param_4 <= uVar2) {
      uVar2 = param_4;
    }
    if (uVar2 != 0) {
      _memmove(uVar1,param_3,uVar2);
    }
    uVar2 = uVar1 + uVar2;
  }
  *(ulong *)(param_2 + 8) = uVar2;
  *param_1 = uVar1;
  param_1[1] = uVar2 - uVar1;
  uVar1 = *(ulong *)(param_2 + 0x20);
  uVar2 = uVar1;
  if (uVar1 < *(ulong *)(param_2 + 0x28)) {
    uVar2 = *(ulong *)(param_2 + 0x28) - uVar1;
    if (param_4 <= uVar2) {
      uVar2 = param_4;
    }
    if (uVar2 != 0) {
      _memmove(uVar1,param_3,uVar2);
    }
    uVar2 = uVar1 + uVar2;
  }
  *(ulong *)(param_2 + 0x20) = uVar2;
  param_1[2] = uVar1;
  param_1[3] = uVar2 - uVar1;
  return;
}



/* Entry: 10ae032c8; end: 10ae040eb;  */

void FUN_10ae032c8(ulong *param_1,ulong *param_2,undefined8 param_3,ulong param_4,ulong *param_5,
                  long param_6)

{
  ushort *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  code *pcVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  ulong **ppuVar11;
  undefined *puVar12;
  ushort *puVar13;
  ulong *puVar14;
  uint *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  undefined4 uVar22;
  ulong *puVar23;
  ulong uVar24;
  ulong *puVar25;
  ulong *puVar26;
  ulong *puStack_e0;
  ulong uStack_d8;
  ulong *puStack_d0;
  ulong uStack_c8;
  int iStack_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  uint uStack_b4;
  int iStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  ulong *puStack_88;
  long lStack_80;
  byte bStack_78;
  
  param_2[1] = *param_2;
  puVar23 = param_2 + 3;
  param_2[4] = *puVar23;
  bStack_78 = 0;
  uVar10 = param_3;
  puStack_88 = param_5;
  lStack_80 = param_6;
  _strlen();
  uStack_90 = 0;
  uStack_a8 = param_3;
  uStack_a0 = uVar10;
  uStack_98 = param_3;
  FUN_10ae040ec(&iStack_c0,&uStack_a8);
  uVar24 = 1;
  do {
    uVar22 = uStack_b8;
    if (iStack_b0 == 0) {
      FUN_10ae03208(&puStack_e0,param_2,CONCAT44(iStack_bc,iStack_c0),CONCAT44(uStack_b4,uStack_b8))
      ;
    }
    else if (iStack_b0 == 1) {
      uVar18 = 0;
      uVar3 = (uint)param_4 & 3;
      puVar26 = param_2;
      puVar25 = puVar23;
      if (iStack_c0 < 3) {
        if (iStack_c0 == 0) {
          FUN_10ae03208(&puStack_e0,param_2,&UNK_10f6c3410,0x17);
          puVar25 = puStack_d0;
          uVar21 = uStack_d8;
          uVar18 = uStack_c8;
          puVar26 = puStack_e0;
        }
        else {
          if (iStack_c0 == 1) {
            if (iStack_bc < 2) {
              if (iStack_bc == 0) {
                if (puStack_88 < (ulong *)(lStack_80 + (long)puStack_88)) {
                  uVar18 = (ulong)(byte)*puStack_88;
                  lStack_80 = lStack_80 + -1;
                  uVar21 = uVar18;
                  puStack_88 = (ulong *)((long)puStack_88 + 1);
                  FUN_10ae045bc(param_2,uVar18,uStack_b8);
                  if (uVar3 == 1 || (param_4 & 3) == 0) {
                    if ((param_4 & 3) != 0) goto LAB_10ae03b38;
                  }
                  else {
                    if (uVar3 != 2) goto LAB_10ae03f78;
                    if ((ulong *)(lStack_80 + (long)puStack_88) <= puStack_88) goto LAB_10ae03580;
                    uVar18 = (ulong)(byte)*puStack_88;
                    lStack_80 = lStack_80 + -1;
                    puStack_88 = (ulong *)((long)puStack_88 + 1);
                  }
                  FUN_10ae045bc(puVar23,uVar18,uVar22);
                  puStack_e0 = puVar26;
                  uStack_d8 = uVar21;
                  puStack_d0 = puVar25;
                  goto LAB_10ae03fc8;
                }
              }
              else {
                if (iStack_bc != 1) {
LAB_10ae03844:
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(0xf000,0x10ae03848);
                  (*pcVar8)();
                }
                puVar13 = (ushort *)((long)puStack_88 + 1U & 0xfffffffffffffffe);
                puVar1 = (ushort *)(lStack_80 + (long)puStack_88);
                if ((puVar13 < puVar1) && (1 < (ulong)((long)puVar1 - (long)puVar13))) {
                  puStack_88 = (ulong *)(puVar13 + 1);
                  uVar18 = (ulong)*puVar13;
                  lStack_80 = (long)puVar1 - (long)puStack_88;
                  uVar21 = uVar18;
                  FUN_10ae04f78(param_2,uVar18,uStack_b8);
                  if (uVar3 == 1 || (param_4 & 3) == 0) {
                    if ((param_4 & 3) != 0) goto LAB_10ae03b38;
                  }
                  else {
                    if (uVar3 != 2) goto LAB_10ae03f78;
                    puVar13 = (ushort *)((long)puStack_88 + 1U & 0xfffffffffffffffe);
                    puVar1 = (ushort *)(lStack_80 + (long)puStack_88);
                    if ((puVar1 <= puVar13) || ((ulong)((long)puVar1 - (long)puVar13) < 2))
                    goto LAB_10ae03580;
                    puStack_88 = (ulong *)(puVar13 + 1);
                    uVar18 = (ulong)*puVar13;
                    lStack_80 = (long)puVar1 - (long)puStack_88;
                  }
                  FUN_10ae04f78(puVar23,uVar18,uVar22);
                  puStack_e0 = puVar26;
                  uStack_d8 = uVar21;
                  puStack_d0 = puVar25;
                  goto LAB_10ae03fc8;
                }
              }
            }
            else if (iStack_bc == 2) {
              puVar15 = (uint *)((long)puStack_88 + 3U & 0xfffffffffffffffc);
              puVar2 = (uint *)(lStack_80 + (long)puStack_88);
              if ((puVar15 < puVar2) && (3 < (ulong)((long)puVar2 - (long)puVar15))) {
                puStack_88 = (ulong *)(puVar15 + 1);
                uVar18 = (ulong)*puVar15;
                lStack_80 = (long)puVar2 - (long)puStack_88;
                uVar21 = uVar18;
                FUN_10ae051dc(param_2,uVar18,uStack_b8);
                if (uVar3 == 1 || (param_4 & 3) == 0) {
                  if ((param_4 & 3) != 0) {
LAB_10ae03b38:
                    puVar25 = (ulong *)param_2[4];
                    puVar17 = puVar25;
                    if (puVar25 < (ulong *)param_2[5]) {
                      uVar18 = (long)param_2[5] - (long)puVar25;
                      if (2 < uVar18) {
                        uVar18 = 3;
                      }
                      _memcpy(puVar25,&UNK_10f6c3441,uVar18);
                      puVar17 = (ulong *)((long)puVar25 + uVar18);
                    }
                    param_2[4] = (ulong)puVar17;
                    uVar18 = (long)puVar17 - (long)puVar25;
                    puStack_e0 = puVar26;
                    uStack_d8 = uVar21;
                    puStack_d0 = puVar25;
                    goto LAB_10ae03fc8;
                  }
                }
                else {
                  if (uVar3 != 2) {
LAB_10ae03f78:
                    /* WARNING: Does not return */
                    pcVar8 = (code *)SoftwareBreakpoint(0xf000,0x10ae03f7c);
                    (*pcVar8)();
                  }
                  puVar15 = (uint *)((long)puStack_88 + 3U & 0xfffffffffffffffc);
                  puVar2 = (uint *)(lStack_80 + (long)puStack_88);
                  if ((puVar2 <= puVar15) || ((ulong)((long)puVar2 - (long)puVar15) < 4))
                  goto LAB_10ae03580;
                  puStack_88 = (ulong *)(puVar15 + 1);
                  uVar18 = (ulong)*puVar15;
                  lStack_80 = (long)puVar2 - (long)puStack_88;
                }
                FUN_10ae051dc(puVar23,uVar18,uVar22);
                puStack_e0 = puVar26;
                uStack_d8 = uVar21;
                puStack_d0 = puVar25;
                goto LAB_10ae03fc8;
              }
            }
            else {
              if (iStack_bc != 3) {
                if (iStack_bc != 4) goto LAB_10ae03844;
                puVar14 = (ulong *)((long)puStack_88 + 7U & 0xfffffffffffffff8);
                puVar17 = (ulong *)(lStack_80 + (long)puStack_88);
                if ((puVar14 < puVar17) && (7 < (ulong)((long)puVar17 - (long)puVar14))) {
                  puStack_88 = puVar14 + 1;
                  uVar18 = *puVar14;
                  lStack_80 = (long)puVar17 - (long)puStack_88;
                  uVar21 = uVar18;
                  FUN_10ae05b74(param_2,uVar18,uStack_b8);
                  if (uVar3 == 1 || (param_4 & 3) == 0) {
                    if ((param_4 & 3) != 0) goto LAB_10ae03b38;
                  }
                  else {
                    if (uVar3 != 2) goto LAB_10ae03f78;
                    puVar14 = (ulong *)((long)puStack_88 + 7U & 0xfffffffffffffff8);
                    puVar17 = (ulong *)(lStack_80 + (long)puStack_88);
                    if ((puVar17 <= puVar14) || ((ulong)((long)puVar17 - (long)puVar14) < 8))
                    goto LAB_10ae03ec4;
                    puStack_88 = puVar14 + 1;
                    uVar18 = *puVar14;
                    lStack_80 = (long)puVar17 - (long)puStack_88;
                  }
                  FUN_10ae05b74(puVar23,uVar18,uVar22);
                  puStack_e0 = puVar26;
                  uStack_d8 = uVar21;
                  puStack_d0 = puVar25;
                }
                else {
LAB_10ae03ec4:
                  bStack_78 = 1;
                  uStack_d8 = 0;
                  puStack_e0 = (ulong *)0x0;
                  uStack_c8 = 0;
                  puStack_d0 = (ulong *)0x0;
                  puVar25 = (ulong *)0x0;
                  uVar21 = 0;
                  uVar18 = 0;
                  puVar26 = (ulong *)0x0;
                }
                goto LAB_10ae03fc8;
              }
              puVar14 = (ulong *)((long)puStack_88 + 7U & 0xfffffffffffffff8);
              puVar17 = (ulong *)(lStack_80 + (long)puStack_88);
              if ((puVar14 < puVar17) && (7 < (ulong)((long)puVar17 - (long)puVar14))) {
                puStack_88 = puVar14 + 1;
                uVar18 = *puVar14;
                lStack_80 = (long)puVar17 - (long)puStack_88;
                uVar21 = uVar18;
                FUN_10ae0543c(param_2,uVar18,uStack_b8);
                if (uVar3 == 1 || (param_4 & 3) == 0) {
                  if ((param_4 & 3) != 0) goto LAB_10ae03b38;
                }
                else {
                  if (uVar3 != 2) goto LAB_10ae03f78;
                  puVar14 = (ulong *)((long)puStack_88 + 7U & 0xfffffffffffffff8);
                  puVar17 = (ulong *)(lStack_80 + (long)puStack_88);
                  if ((puVar17 <= puVar14) || ((ulong)((long)puVar17 - (long)puVar14) < 8))
                  goto LAB_10ae03580;
                  puStack_88 = puVar14 + 1;
                  uVar18 = *puVar14;
                  lStack_80 = (long)puVar17 - (long)puStack_88;
                }
                FUN_10ae0543c(puVar23,uVar18,uVar22);
                puStack_e0 = puVar26;
                uStack_d8 = uVar21;
                puStack_d0 = puVar25;
                goto LAB_10ae03fc8;
              }
            }
            goto LAB_10ae03580;
          }
          puVar25 = (ulong *)0x0;
          uVar21 = 0;
          puVar26 = (ulong *)0x0;
          if (iStack_c0 == 2) {
            if (iStack_bc < 2) {
              if (iStack_bc == 0) {
                if (puStack_88 < (ulong *)(lStack_80 + (long)puStack_88)) {
                  uVar18 = (ulong)(byte)*puStack_88;
                  lStack_80 = lStack_80 + -1;
                  puVar26 = param_2;
                  uVar21 = uVar18;
                  puStack_88 = (ulong *)((long)puStack_88 + 1);
                  FUN_10ae05dd4(param_2,uVar18,uStack_b8);
                  if (uVar3 == 1 || (param_4 & 3) == 0) {
                    if ((param_4 & 3) != 0) goto LAB_10ae03b38;
                  }
                  else {
                    if (uVar3 != 2) goto LAB_10ae03f78;
                    if ((ulong *)(lStack_80 + (long)puStack_88) <= puStack_88) goto LAB_10ae03580;
                    uVar18 = (ulong)(byte)*puStack_88;
                    lStack_80 = lStack_80 + -1;
                    puStack_88 = (ulong *)((long)puStack_88 + 1);
                  }
                  puVar25 = puVar23;
                  FUN_10ae05dd4(puVar23,uVar18,uVar22);
                  puStack_e0 = puVar26;
                  uStack_d8 = uVar21;
                  puStack_d0 = puVar25;
                  goto LAB_10ae03fc8;
                }
              }
              else {
                if (iStack_bc != 1) goto LAB_10ae03844;
                puVar13 = (ushort *)((long)puStack_88 + 1U & 0xfffffffffffffffe);
                puVar1 = (ushort *)(lStack_80 + (long)puStack_88);
                if ((puVar13 < puVar1) && (1 < (ulong)((long)puVar1 - (long)puVar13))) {
                  puStack_88 = (ulong *)(puVar13 + 1);
                  uVar18 = (ulong)*puVar13;
                  lStack_80 = (long)puVar1 - (long)puStack_88;
                  puVar26 = param_2;
                  uVar21 = uVar18;
                  FUN_10ae06024(param_2,uVar18,uStack_b8);
                  if (uVar3 == 1 || (param_4 & 3) == 0) {
                    if ((param_4 & 3) != 0) goto LAB_10ae03b38;
                  }
                  else {
                    if (uVar3 != 2) goto LAB_10ae03f78;
                    puVar13 = (ushort *)((long)puStack_88 + 1U & 0xfffffffffffffffe);
                    puVar1 = (ushort *)(lStack_80 + (long)puStack_88);
                    if ((puVar1 <= puVar13) || ((ulong)((long)puVar1 - (long)puVar13) < 2))
                    goto LAB_10ae03580;
                    puStack_88 = (ulong *)(puVar13 + 1);
                    uVar18 = (ulong)*puVar13;
                    lStack_80 = (long)puVar1 - (long)puStack_88;
                  }
                  puVar25 = puVar23;
                  FUN_10ae06024(puVar23,uVar18,uVar22);
                  puStack_e0 = puVar26;
                  uStack_d8 = uVar21;
                  puStack_d0 = puVar25;
                  goto LAB_10ae03fc8;
                }
              }
              goto LAB_10ae03580;
            }
            if (iStack_bc == 2) {
              puVar15 = (uint *)((long)puStack_88 + 3U & 0xfffffffffffffffc);
              puVar2 = (uint *)(lStack_80 + (long)puStack_88);
              if ((puVar2 <= puVar15) || ((ulong)((long)puVar2 - (long)puVar15) < 4))
              goto LAB_10ae03580;
              puStack_88 = (ulong *)(puVar15 + 1);
              uVar18 = (ulong)*puVar15;
              lStack_80 = (long)puVar2 - (long)puStack_88;
              puVar26 = param_2;
              uVar21 = uVar18;
              FUN_10ae06274(param_2,uVar18,uStack_b8);
              if (uVar3 == 1 || (param_4 & 3) == 0) {
                if ((param_4 & 3) != 0) goto LAB_10ae03b38;
              }
              else {
                if (uVar3 != 2) goto LAB_10ae03f78;
                puVar15 = (uint *)((long)puStack_88 + 3U & 0xfffffffffffffffc);
                puVar2 = (uint *)(lStack_80 + (long)puStack_88);
                if ((puVar2 <= puVar15) || ((ulong)((long)puVar2 - (long)puVar15) < 4))
                goto LAB_10ae03580;
                puStack_88 = (ulong *)(puVar15 + 1);
                uVar18 = (ulong)*puVar15;
                lStack_80 = (long)puVar2 - (long)puStack_88;
              }
              puVar25 = puVar23;
              FUN_10ae06274(puVar23,uVar18,uVar22);
              puStack_e0 = puVar26;
              uStack_d8 = uVar21;
              puStack_d0 = puVar25;
            }
            else if (iStack_bc == 3) {
              puVar25 = (ulong *)((long)puStack_88 + 7U & 0xfffffffffffffff8);
              puVar26 = (ulong *)(lStack_80 + (long)puStack_88);
              if ((puVar26 <= puVar25) || ((ulong)((long)puVar26 - (long)puVar25) < 8))
              goto LAB_10ae03580;
              puStack_88 = puVar25 + 1;
              uVar18 = *puVar25;
              lStack_80 = (long)puVar26 - (long)puStack_88;
              puVar26 = param_2;
              uVar21 = uVar18;
              FUN_10ae064c4(param_2,uVar18,uStack_b8);
              if (uVar3 == 1 || (param_4 & 3) == 0) {
                if ((param_4 & 3) != 0) goto LAB_10ae03b38;
              }
              else {
                if (uVar3 != 2) goto LAB_10ae03f78;
                puVar17 = (ulong *)((long)puStack_88 + 7U & 0xfffffffffffffff8);
                puVar25 = (ulong *)(lStack_80 + (long)puStack_88);
                if ((puVar25 <= puVar17) || ((ulong)((long)puVar25 - (long)puVar17) < 8))
                goto LAB_10ae03580;
                puStack_88 = puVar17 + 1;
                uVar18 = *puVar17;
                lStack_80 = (long)puVar25 - (long)puStack_88;
              }
              puVar25 = puVar23;
              FUN_10ae064c4(puVar23,uVar18,uVar22);
              puStack_e0 = puVar26;
              uStack_d8 = uVar21;
              puStack_d0 = puVar25;
            }
            else {
              if (iStack_bc != 4) goto LAB_10ae03844;
              puVar25 = (ulong *)((long)puStack_88 + 7U & 0xfffffffffffffff8);
              puVar26 = (ulong *)(lStack_80 + (long)puStack_88);
              if ((puVar26 <= puVar25) || ((ulong)((long)puVar26 - (long)puVar25) < 8))
              goto LAB_10ae03ec4;
              puStack_88 = puVar25 + 1;
              uVar18 = *puVar25;
              lStack_80 = (long)puVar26 - (long)puStack_88;
              puVar26 = param_2;
              uVar21 = uVar18;
              FUN_10ae06714(param_2,uVar18,uStack_b8);
              if (uVar3 == 1 || (param_4 & 3) == 0) {
                if ((param_4 & 3) != 0) goto LAB_10ae03b38;
              }
              else {
                if (uVar3 != 2) goto LAB_10ae03f78;
                puVar17 = (ulong *)((long)puStack_88 + 7U & 0xfffffffffffffff8);
                puVar25 = (ulong *)(lStack_80 + (long)puStack_88);
                if ((puVar25 <= puVar17) || ((ulong)((long)puVar25 - (long)puVar17) < 8))
                goto LAB_10ae03ec4;
                puStack_88 = puVar17 + 1;
                uVar18 = *puVar17;
                lStack_80 = (long)puVar25 - (long)puStack_88;
              }
              puVar25 = puVar23;
              FUN_10ae06714(puVar23,uVar18,uVar22);
              puStack_e0 = puVar26;
              uStack_d8 = uVar21;
              puStack_d0 = puVar25;
            }
          }
        }
      }
      else if (iStack_c0 < 5) {
        if (iStack_c0 == 3) {
          puVar26 = (ulong *)param_2[1];
          puVar25 = (ulong *)param_2[2];
          if ((param_4 & 3) == 0) {
            puVar17 = puVar26;
            puVar14 = puVar26;
            puVar16 = puStack_88;
            lVar19 = lStack_80;
            if (puStack_88 < (ulong *)(lStack_80 + (long)puStack_88)) {
              do {
                puVar14 = puVar17;
                if ((char)*puVar16 == '\0' || puVar17 == puVar25) goto LAB_10ae0390c;
                puVar14 = (ulong *)((long)puVar17 + 1);
                *(char *)puVar17 = (char)*puVar16;
                lVar19 = lVar19 + -1;
                puVar17 = puVar14;
                puVar16 = (ulong *)((long)puVar16 + 1);
              } while (lVar19 != 0);
            }
            bStack_78 = 1;
LAB_10ae0390c:
            param_2[1] = (ulong)puVar14;
            uVar21 = (long)puVar14 - (long)puVar26;
          }
          else {
            ppuVar11 = &puStack_88;
            func_0x00010ae06964(ppuVar11,puVar26);
            param_2[1] = (ulong)ppuVar11;
            uVar21 = (long)ppuVar11 - (long)puVar26;
            if (uVar3 != 2) {
LAB_10ae03558:
              if (uVar3 != 1) {
LAB_10ae038b4:
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(0xf000,0x10ae038b8);
                (*pcVar8)();
              }
LAB_10ae03654:
              puVar25 = (ulong *)param_2[4];
              puVar17 = puVar25;
              if (puVar25 < (ulong *)param_2[5]) {
                uVar18 = (long)param_2[5] - (long)puVar25;
                if (2 < uVar18) {
                  uVar18 = 3;
                }
                _memcpy(puVar25,&UNK_10f6c3441,uVar18);
                puVar17 = (ulong *)((long)puVar25 + uVar18);
              }
              param_2[4] = (ulong)puVar17;
              uVar18 = (long)puVar17 - (long)puVar25;
              goto LAB_10ae03fc8;
            }
          }
          puVar25 = (ulong *)param_2[4];
          ppuVar11 = &puStack_88;
          func_0x00010ae06964(ppuVar11,puVar25,param_2[5]);
        }
        else {
          puVar25 = (ulong *)0x0;
          uVar21 = 0;
          puVar26 = (ulong *)0x0;
          if (iStack_c0 != 4) goto LAB_10ae03fc8;
          puVar26 = (ulong *)param_2[1];
          ppuVar11 = &puStack_88;
          if ((param_4 & 3) == 0) {
            FUN_10ae02d88(ppuVar11,puVar26,param_2[2],0);
            param_2[1] = (ulong)ppuVar11;
            uVar21 = (long)ppuVar11 - (long)puVar26;
          }
          else {
            func_0x00010ae069d8();
            param_2[1] = (ulong)ppuVar11;
            uVar21 = (long)ppuVar11 - (long)puVar26;
            if (uVar3 != 2) goto LAB_10ae03558;
          }
          puVar25 = (ulong *)param_2[4];
          ppuVar11 = &puStack_88;
          func_0x00010ae069d8(ppuVar11,puVar25,param_2[5]);
        }
        param_2[4] = (ulong)ppuVar11;
        uVar18 = (long)ppuVar11 - (long)puVar25;
      }
      else if (iStack_c0 == 5) {
        puVar14 = (ulong *)((long)puStack_88 + 7U & 0xfffffffffffffff8);
        puVar17 = (ulong *)(lStack_80 + (long)puStack_88);
        if (puVar17 <= puVar14 || (ulong)((long)puVar17 - (long)puVar14) < 8) goto LAB_10ae03580;
        puStack_88 = puVar14 + 1;
        uVar18 = *puVar14;
        lStack_80 = (long)puVar17 - (long)puStack_88;
        uVar21 = uVar18;
        FUN_10ae06a5c();
        if (uVar3 == 1 || (param_4 & 3) == 0) {
          if ((param_4 & 3) != 0) goto LAB_10ae03654;
        }
        else {
          if (uVar3 != 2) goto LAB_10ae038b4;
          puVar14 = (ulong *)((long)puStack_88 + 7U & 0xfffffffffffffff8);
          puVar17 = (ulong *)(lStack_80 + (long)puStack_88);
          if ((puVar17 <= puVar14) || ((ulong)((long)puVar17 - (long)puVar14) < 8))
          goto LAB_10ae03580;
          puStack_88 = puVar14 + 1;
          uVar18 = *puVar14;
          lStack_80 = (long)puVar17 - (long)puStack_88;
        }
        FUN_10ae06a5c();
      }
      else {
        puVar25 = (ulong *)0x0;
        uVar21 = 0;
        puVar26 = (ulong *)0x0;
        if (iStack_c0 != 6) goto LAB_10ae03fc8;
        if (iStack_bc == 5) {
          uVar21 = (long)puStack_88 + 7U & 0xfffffffffffffff8;
          uVar18 = lStack_80 + (long)puStack_88;
          if ((uVar18 <= uVar21) || (uVar18 - uVar21 < 8)) goto LAB_10ae03580;
          puStack_88 = (ulong *)(uVar21 + 8);
          lStack_80 = uVar18 - (long)puStack_88;
          puVar26 = (ulong *)param_2[1];
          uVar18 = param_2[2];
          uVar20 = uVar18 - (long)puVar26;
          puVar25 = puVar26;
          _snprintf(puVar26,uVar20,&UNK_10f3b254f);
          uVar21 = (long)puVar26 + (long)(int)puVar25;
          if (uVar20 <= (ulong)(long)(int)puVar25) {
            uVar21 = uVar18;
          }
          param_2[1] = uVar21;
          if (uVar3 == 1 || (param_4 & 3) == 0) {
            if ((param_4 & 3) != 0) goto LAB_10ae03bb8;
            puVar25 = (ulong *)param_2[4];
            puVar17 = (ulong *)param_2[5];
            uVar18 = (long)puVar17 - (long)puVar25;
          }
          else {
            if (uVar3 != 2) goto LAB_10ae03c48;
            uVar20 = (long)puStack_88 + 7U & 0xfffffffffffffff8;
            uVar18 = lStack_80 + (long)puStack_88;
            if ((uVar18 <= uVar20) || (uVar18 - uVar20 < 8)) goto LAB_10ae03d30;
            puStack_88 = (ulong *)(uVar20 + 8);
            lStack_80 = uVar18 - (long)puStack_88;
            puVar25 = (ulong *)param_2[4];
            puVar17 = (ulong *)param_2[5];
            uVar18 = (long)puVar17 - (long)puVar25;
          }
          puVar12 = &UNK_10f3b254f;
LAB_10ae03c34:
          puVar14 = puVar25;
          _snprintf(puVar25,uVar18,puVar12);
          puVar16 = (ulong *)((long)puVar25 + (long)(int)puVar14);
          if (uVar18 <= (ulong)(long)(int)puVar14) {
            puVar16 = puVar17;
          }
        }
        else {
          if (iStack_bc != 2) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(0xf000,0x10ae0382c);
            (*pcVar8)();
          }
          uVar21 = (long)puStack_88 + 7U & 0xfffffffffffffff8;
          uVar18 = lStack_80 + (long)puStack_88;
          if ((uVar18 <= uVar21) || (uVar18 - uVar21 < 8)) {
LAB_10ae03580:
            bStack_78 = 1;
            puVar25 = (ulong *)0x0;
            uVar21 = 0;
            uVar18 = 0;
            puVar26 = (ulong *)0x0;
            goto LAB_10ae03fc8;
          }
          puStack_88 = (ulong *)(uVar21 + 8);
          lStack_80 = uVar18 - (long)puStack_88;
          puVar26 = (ulong *)param_2[1];
          uVar18 = param_2[2];
          uVar20 = uVar18 - (long)puVar26;
          puVar25 = puVar26;
          _snprintf(puVar26,uVar20,&DAT_10f2e3e8d);
          uVar21 = (long)puVar26 + (long)(int)puVar25;
          if (uVar20 <= (ulong)(long)(int)puVar25) {
            uVar21 = uVar18;
          }
          param_2[1] = uVar21;
          if (uVar3 != 1 && (param_4 & 3) != 0) {
            if (uVar3 != 2) {
LAB_10ae03c48:
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(0xf000,0x10ae03c4c);
              (*pcVar8)();
            }
            uVar20 = (long)puStack_88 + 7U & 0xfffffffffffffff8;
            uVar18 = lStack_80 + (long)puStack_88;
            if ((uVar18 <= uVar20) || (uVar18 - uVar20 < 8)) {
LAB_10ae03d30:
              uVar18 = 0;
              puVar25 = (ulong *)0x0;
              uVar21 = 0;
              puVar26 = (ulong *)0x0;
              bStack_78 = 1;
              goto LAB_10ae03fc8;
            }
            puStack_88 = (ulong *)(uVar20 + 8);
            lStack_80 = uVar18 - (long)puStack_88;
            puVar25 = (ulong *)param_2[4];
            puVar17 = (ulong *)param_2[5];
            uVar18 = (long)puVar17 - (long)puVar25;
LAB_10ae03ba4:
            puVar12 = &DAT_10f2e3e8d;
            goto LAB_10ae03c34;
          }
          if ((param_4 & 3) == 0) {
            puVar25 = (ulong *)param_2[4];
            puVar17 = (ulong *)param_2[5];
            uVar18 = (long)puVar17 - (long)puVar25;
            goto LAB_10ae03ba4;
          }
LAB_10ae03bb8:
          puVar25 = (ulong *)param_2[4];
          puVar16 = puVar25;
          if (puVar25 < (ulong *)param_2[5]) {
            uVar18 = (long)param_2[5] - (long)puVar25;
            if (2 < uVar18) {
              uVar18 = 3;
            }
            _memcpy(puVar25,&UNK_10f6c3441,uVar18);
            puVar16 = (ulong *)((long)puVar25 + uVar18);
          }
        }
        param_2[4] = (ulong)puVar16;
        uVar18 = (long)puVar16 - (long)puVar25;
        uVar21 = uVar21 - (long)puVar26;
        puStack_e0 = puVar26;
        uStack_d8 = uVar21;
        puStack_d0 = puVar25;
      }
LAB_10ae03fc8:
      if ((bStack_78 & 1) != 0) {
        uVar22 = 2;
        goto LAB_10ae040c4;
      }
      param_4 = param_4 >> 2;
      if ((uStack_b4 & 1) != 0) {
        for (; uVar21 != 0; uVar21 = uVar21 - 1) {
          uVar9 = (undefined1)*puVar26;
          ___toupper();
          *(undefined1 *)puVar26 = uVar9;
          puVar26 = (ulong *)((long)puVar26 + 1);
        }
        for (; uVar18 != 0; uVar18 = uVar18 - 1) {
          uVar9 = (undefined1)*puVar25;
          ___toupper();
          *(undefined1 *)puVar25 = uVar9;
          puVar25 = (ulong *)((long)puVar25 + 1);
        }
      }
      uVar24 = uVar24 + 1;
    }
    else if (iStack_b0 == 2) {
      if ((char)iStack_c0 == '\x01') {
        *param_1 = uVar24;
        uVar22 = 1;
      }
      else {
        puVar4 = (undefined1 *)param_2[1];
        puVar6 = (undefined1 *)param_2[2];
        if (puVar6 <= puVar4) {
          puVar6[-1] = 0;
          uVar18 = *param_2;
          uVar24 = param_2[2] + ~uVar18;
        }
        else {
          *puVar4 = 0;
          uVar18 = *param_2;
          uVar24 = param_2[1] - uVar18;
        }
        puVar5 = (undefined1 *)param_2[4];
        puVar7 = (undefined1 *)param_2[5];
        if (puVar7 <= puVar5) {
          puVar7[-1] = 0;
          uVar20 = param_2[3];
          uVar21 = param_2[5] + ~uVar20;
        }
        else {
          *puVar5 = 0;
          uVar20 = param_2[3];
          uVar21 = param_2[4] - uVar20;
        }
        uVar22 = 0;
        *param_1 = uVar18;
        param_1[1] = uVar24;
        *(bool *)(param_1 + 2) = puVar6 <= puVar4;
        param_1[3] = uVar20;
        param_1[4] = uVar21;
        *(bool *)(param_1 + 5) = puVar7 <= puVar5;
      }
LAB_10ae040c4:
      *(undefined4 *)(param_1 + 6) = uVar22;
      return;
    }
    FUN_10ae040ec(&iStack_c0,&uStack_a8);
  } while( true );
}



/* Entry: 10ae040ec; end: 10ae045bb;  */

/* WARNING: Possible PIC construction at 0x00010ae046e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae046e4) */

undefined1  [16] FUN_10ae040ec(long *param_1,long *param_2,int param_3)

{
  char *pcVar1;
  byte *pbVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  bool bVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  long *plVar11;
  char *pcVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 uVar16;
  byte *pbVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  char cVar21;
  byte *pbVar22;
  uint uVar23;
  int iVar24;
  long lVar25;
  ulong uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_98;
  char *pcStack_90;
  long lStack_88;
  char *pcStack_80;
  ulong uStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  plVar7 = param_1;
  pcVar12 = (char *)param_2;
  if ((char)param_2[3] == '\x01') {
LAB_10ae04114:
    *(char *)param_1 = '\x01';
    param_2 = (long *)pcVar12;
  }
  else {
    uVar18 = param_2[1];
    pcVar4 = (char *)param_2[2];
    lVar25 = *param_2;
    pcVar3 = (char *)(lVar25 + uVar18);
    if (pcVar4 != pcVar3) {
      if (*pcVar4 == '%') {
        pcVar1 = pcVar4 + 1;
        param_2[2] = (long)pcVar1;
        if (pcVar1 != pcVar3) {
          if (*pcVar1 == '%') {
            uVar16 = 0;
            param_2[2] = (long)(pcVar4 + 2);
            *param_1 = (long)"%";
            param_1[1] = 1;
            goto LAB_10ae04184;
          }
          pcVar12 = &UNK_10f6c3428;
          plVar7 = param_2;
          func_0x0001099a20dc(param_2,&UNK_10f6c3428,(long)pcVar1 - lVar25);
          lVar25 = *param_2;
          plVar13 = (long *)param_2[1];
          if (plVar7 == (long *)0xffffffffffffffff) {
            pbVar22 = (byte *)(lVar25 + (long)plVar13);
            plVar10 = plVar13;
LAB_10ae04268:
            param_2[2] = (long)pbVar22;
          }
          else {
            pbVar17 = (byte *)(lVar25 + (long)plVar7);
            param_2[2] = (long)pbVar17;
            plVar10 = plVar7;
            pbVar22 = pbVar17;
            if (plVar7 != plVar13) {
              pbVar22 = pbVar17 + 1;
              plVar10 = plVar13;
              if (*pbVar17 != 0x2a) {
                pcVar12 = "0123456789";
                plVar7 = param_2;
                func_0x0001099a20dc(param_2,"0123456789");
                lVar25 = *param_2;
                plVar13 = (long *)param_2[1];
                if (plVar7 != (long *)0xffffffffffffffff) {
                  plVar13 = plVar7;
                }
                pbVar22 = (byte *)(lVar25 + (long)plVar13);
                plVar10 = (long *)param_2[1];
              }
              goto LAB_10ae04268;
            }
          }
          pbVar17 = pbVar22;
          if ((pbVar22 != (byte *)(lVar25 + (long)plVar10)) && (*pbVar22 == 0x2e)) {
            pbVar17 = pbVar22 + 1;
            param_2[2] = (long)pbVar17;
            if (pbVar17 != (byte *)(lVar25 + (long)plVar10)) {
              bVar5 = *pbVar17;
              if ((bVar5 == 0x2d) || (bVar5 == 0x2b)) {
                pbVar17 = pbVar22 + 2;
                param_2[2] = (long)pbVar17;
LAB_10ae042cc:
                pcVar12 = "0123456789";
                plVar7 = param_2;
                func_0x0001099a20dc(param_2,"0123456789",(long)pbVar17 - lVar25);
                lVar25 = *param_2;
                plVar10 = (long *)param_2[1];
                plVar13 = plVar10;
                if (plVar7 != (long *)0xffffffffffffffff) {
                  plVar13 = plVar7;
                }
                pbVar17 = (byte *)(lVar25 + (long)plVar13);
              }
              else {
                if (bVar5 != 0x2a) goto LAB_10ae042cc;
                pbVar17 = pbVar22 + 2;
              }
              param_2[2] = (long)pbVar17;
            }
          }
          pbVar22 = (byte *)(lVar25 + (long)plVar10);
          if (pbVar17 != pbVar22) {
            bVar5 = *pbVar17;
            uVar23 = 3;
            uVar19 = 2;
            lVar25 = 1;
            if (bVar5 < 0x6c) {
              if (bVar5 == 0x4c) {
                lVar25 = 1;
                uVar23 = 5;
LAB_10ae043a8:
                uVar19 = uVar23;
                param_2[2] = (long)(pbVar17 + lVar25);
                pbVar17 = pbVar17 + lVar25;
              }
              else if (bVar5 == 0x68) {
                pbVar2 = pbVar17 + 1;
                param_2[2] = (long)pbVar2;
                if (pbVar2 == pbVar22) goto LAB_10ae0459c;
                if (*pbVar2 == 0x68) {
                  uVar23 = 0;
                  goto LAB_10ae043a4;
                }
                uVar19 = 1;
                pbVar17 = pbVar2;
              }
              else if (bVar5 == 0x6a) goto LAB_10ae043a8;
            }
            else if (bVar5 == 0x6c) {
              pbVar2 = pbVar17 + 1;
              param_2[2] = (long)pbVar2;
              if (pbVar2 == pbVar22) goto LAB_10ae0459c;
              if (*pbVar2 == 0x6c) {
                uVar23 = 4;
LAB_10ae043a4:
                lVar25 = 2;
                goto LAB_10ae043a8;
              }
              uVar19 = 3;
              pbVar17 = pbVar2;
            }
            else if ((bVar5 == 0x74) || (bVar5 == 0x7a)) goto LAB_10ae043a8;
            if (pbVar17 != pbVar22) {
              bVar5 = *pbVar17;
              if (bVar5 < 99) {
                if (bVar5 == 0x46) {
                  cVar21 = '\x01';
                  goto code_r0x00010ae044d8;
                }
                if (bVar5 == 0x58) {
                  bVar6 = false;
                  iVar24 = 2;
                  uVar23 = 4;
                  cVar21 = '\x01';
                }
                else {
                  if (bVar5 != 0x59) goto LAB_10ae0459c;
                  bVar6 = false;
                  cVar21 = '\x01';
                  uVar23 = 5;
                  iVar24 = 1;
                }
              }
              else {
                cVar21 = '\0';
                uVar23 = 0;
                bVar6 = false;
                iVar24 = 1;
                switch(bVar5) {
                case 99:
                  cVar21 = '\0';
                  bVar6 = false;
                  uVar23 = 1;
                  break;
                case 100:
                case 0x69:
                  break;
                default:
                  goto LAB_10ae0459c;
                case 0x66:
                  cVar21 = '\0';
code_r0x00010ae044d8:
                  iVar24 = 6;
                  uVar23 = 0;
                  bVar6 = true;
                  break;
                case 0x6f:
                  cVar21 = '\0';
                  bVar6 = false;
                  iVar24 = 2;
                  uVar23 = 3;
                  break;
                case 0x70:
                  cVar21 = '\0';
                  uVar23 = 0;
                  bVar6 = false;
                  iVar24 = 5;
                  break;
                case 0x73:
                  cVar21 = '\0';
                  uVar23 = 0;
                  bVar6 = false;
                  iVar24 = 3;
                  break;
                case 0x75:
                  cVar21 = '\0';
                  uVar23 = 0;
                  bVar6 = false;
                  iVar24 = 2;
                  break;
                case 0x78:
                  cVar21 = '\0';
                  bVar6 = false;
                  iVar24 = 2;
                  uVar23 = 4;
                  break;
                case 0x79:
                  cVar21 = '\0';
                  bVar6 = false;
                  uVar23 = 5;
                }
              }
              if (uVar19 < 4) {
                if (uVar19 < 2) {
LAB_10ae04538:
                  if (((uVar23 & 3) != 1) && (0xfffffffd < iVar24 - 3U)) goto LAB_10ae04580;
                  goto LAB_10ae0459c;
                }
                if (uVar19 != 3) goto LAB_10ae04580;
                if (iVar24 != 6) {
                  if (iVar24 == 5) goto LAB_10ae0459c;
                  if (iVar24 == 3) {
                    iVar24 = 4;
                  }
                  else {
                    if (uVar23 == 5) goto LAB_10ae0459c;
                    if (uVar23 != 1) {
                      uVar19 = 3;
                      goto LAB_10ae04580;
                    }
                    iVar24 = 1;
                    uVar23 = 2;
                  }
                }
                uVar19 = 2;
              }
              else if (uVar19 == 5) {
                if (!bVar6) goto LAB_10ae0459c;
                iVar24 = 6;
                uVar19 = 5;
              }
              else if (uVar19 == 4) goto LAB_10ae04538;
LAB_10ae04580:
              param_2[2] = (long)(pbVar17 + 1);
              *(int *)param_1 = iVar24;
              *(uint *)((long)param_1 + 4) = uVar19;
              *(uint *)(param_1 + 1) = uVar23;
              uVar16 = 1;
              *(char *)((long)param_1 + 0xc) = cVar21;
              goto LAB_10ae04184;
            }
          }
        }
LAB_10ae0459c:
        *(char *)(param_2 + 3) = '\x01';
        goto LAB_10ae04114;
      }
      uVar26 = (long)pcVar4 - lVar25;
      uVar15 = uVar18 - uVar26;
      if (uVar18 < uVar26 || uVar15 == 0) {
LAB_10ae041cc:
        param_2[2] = (long)pcVar3;
        uVar14 = uVar18 - uVar26;
        if (uVar18 < uVar26) {
          puVar8 = &UNK_10f2fca6e;
          func_0x000109262df8();
          pcStack_58 = FUN_10ae045bc;
          lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
          plVar7 = *(long **)(puVar8 + 8);
          plVar13 = *(long **)(puVar8 + 0x10);
          cVar21 = (char)pcVar12;
          plVar10 = plVar7;
          pcStack_90 = pcVar3;
          lStack_88 = lVar25;
          pcStack_80 = pcVar4;
          uStack_78 = uVar15;
          plStack_70 = param_2;
          plStack_68 = param_1;
          puStack_60 = &stack0xfffffffffffffff0;
          if (param_3 < 3) {
            if (param_3 == 1) {
              if (plVar7 < plVar13) {
                plVar10 = (long *)((long)plVar7 + 1);
                *(char *)plVar7 = cVar21;
              }
            }
            else {
              if (param_3 != 2) goto LAB_10ae046e0;
              uVar18 = (long)plVar13 - (long)plVar7;
              puVar9 = puVar8;
              ____mb_cur_max();
              if ((long)uVar18 < (long)(int)puVar9) {
                if (plVar7 < plVar13) {
                  if (2 < uVar18) {
                    uVar18 = 3;
                  }
                  pcVar12 = &UNK_10f6c3454;
LAB_10ae0473c:
                  uVar15 = uVar18;
                  _memcpy(plVar7);
                  param_3 = (int)uVar15;
                  plVar10 = (long *)((long)plVar7 + uVar18);
                }
              }
              else {
                uStack_b8 = 0;
                uStack_c0 = 0;
                uStack_a8 = 0;
                uStack_b0 = 0;
                uStack_d8 = 0;
                uStack_e0 = 0;
                uStack_c8 = 0;
                uStack_d0 = 0;
                uStack_f8 = 0;
                uStack_100 = 0;
                uStack_e8 = 0;
                uStack_f0 = 0;
                pcVar12 = (char *)(ulong)(uint)(int)cVar21;
                uStack_118 = 0;
                uStack_120 = 0;
                uStack_108 = 0;
                uStack_110 = 0;
                plVar11 = plVar7;
                param_3 = (int)&uStack_120;
                _wcrtomb();
                if (plVar11 == (long *)0xffffffffffffffff) {
                  if (plVar7 < plVar13) {
                    if (2 < uVar18) {
                      uVar18 = 3;
                    }
                    pcVar12 = &DAT_10f4944a3;
                    goto LAB_10ae0473c;
                  }
                }
                else {
                  plVar10 = (long *)((long)plVar7 + (long)plVar11);
                }
              }
            }
          }
          else {
            if (((param_3 == 3) || (param_3 == 4)) || (param_3 != 5)) {
LAB_10ae046e0:
              param_3 = (int)cVar21;
              goto FUN_10ae04790;
            }
            if (plVar7 < plVar13) {
              bVar6 = ((ulong)pcVar12 & 0xff) != 0;
              pcVar12 = &DAT_10f6842c6;
              if (bVar6) {
                pcVar12 = "true";
              }
              uVar15 = 4;
              if (!bVar6) {
                uVar15 = 5;
              }
              uVar18 = (long)plVar13 - (long)plVar7;
              if (uVar15 <= (ulong)((long)plVar13 - (long)plVar7)) {
                uVar18 = uVar15;
              }
              goto LAB_10ae0473c;
            }
          }
          *(long **)(puVar8 + 8) = plVar10;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
            auVar28._8_8_ = (long)plVar10 - (long)plVar7;
            auVar28._0_8_ = plVar7;
            return auVar28;
          }
          ___stack_chk_fail();
          __Unwind_Resume();
          plVar7 = plVar10;
          plVar13 = (long *)pcVar12;
FUN_10ae04790:
          plVar10 = plVar7;
          if ((plVar7 != plVar13) && (param_3 < 0)) {
            *(char *)plVar7 = '-';
            plVar10 = (long *)((long)plVar7 + 1);
          }
          plVar11 = plVar13;
          func_0x00010ae04820(plVar10);
          if (((int)plVar11 != 0) && (plVar10 = plVar7, plVar7 < plVar13)) {
            uVar18 = (long)plVar13 - (long)plVar7;
            if (2 < uVar18) {
              uVar18 = 3;
            }
            plVar11 = (long *)&UNK_10f6c3454;
            _memcpy(plVar7,&UNK_10f6c3454,uVar18);
            plVar10 = (long *)((long)plVar7 + uVar18);
          }
          auVar29._8_8_ = plVar11;
          auVar29._0_8_ = plVar10;
          return auVar29;
        }
      }
      else {
        plVar7 = (long *)(lVar25 + uVar26);
        pcVar12 = (char *)0x25;
        uVar14 = uVar15;
        _memchr();
        param_3 = (int)uVar14;
        lVar20 = (long)plVar7 - lVar25;
        if (plVar7 == (long *)0x0 || lVar20 == -1) goto LAB_10ae041cc;
        param_2[2] = lVar25 + lVar20;
        uVar14 = uVar15;
        if (lVar20 - uVar26 <= uVar15) {
          uVar14 = lVar20 - uVar26;
        }
      }
      uVar16 = 0;
      *param_1 = (long)pcVar4;
      param_1[1] = uVar14;
      goto LAB_10ae04184;
    }
    *(char *)param_1 = '\0';
  }
  uVar16 = 2;
  pcVar12 = (char *)param_2;
LAB_10ae04184:
  *(undefined4 *)(param_1 + 2) = uVar16;
  auVar27._8_8_ = pcVar12;
  auVar27._0_8_ = plVar7;
  return auVar27;
}



/* Entry: 10ae045bc; end: 10ae0478f;  */

/* WARNING: Possible PIC construction at 0x00010ae046e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae046e4) */

undefined1  [16] FUN_10ae045bc(long param_1,char *param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
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
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = *(char **)(param_1 + 8);
  pcVar7 = *(char **)(param_1 + 0x10);
  cVar1 = (char)param_2;
  pcVar4 = pcVar6;
  if (param_3 < 3) {
    if (param_3 == 1) {
      if (pcVar6 < pcVar7) {
        pcVar4 = pcVar6 + 1;
        *pcVar6 = cVar1;
      }
    }
    else {
      if (param_3 != 2) goto LAB_10ae046e0;
      uVar9 = (long)pcVar7 - (long)pcVar6;
      lVar3 = param_1;
      ____mb_cur_max();
      if ((long)uVar9 < (long)(int)lVar3) {
        if (pcVar6 < pcVar7) {
          if (2 < uVar9) {
            uVar9 = 3;
          }
          param_2 = "~~~";
LAB_10ae0473c:
          uVar8 = uVar9;
          _memcpy(pcVar6);
          param_3 = (int)uVar8;
          pcVar4 = pcVar6 + uVar9;
        }
      }
      else {
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        param_2 = (char *)(ulong)(uint)(int)cVar1;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        pcVar5 = pcVar6;
        param_3 = (int)&uStack_d0;
        _wcrtomb();
        if (pcVar5 == (char *)0xffffffffffffffff) {
          if (pcVar6 < pcVar7) {
            if (2 < uVar9) {
              uVar9 = 3;
            }
            param_2 = "???";
            goto LAB_10ae0473c;
          }
        }
        else {
          pcVar4 = pcVar6 + (long)pcVar5;
        }
      }
    }
  }
  else {
    if (((param_3 == 3) || (param_3 == 4)) || (param_3 != 5)) {
LAB_10ae046e0:
      param_3 = (int)cVar1;
      goto FUN_10ae04790;
    }
    if (pcVar6 < pcVar7) {
      bVar2 = ((ulong)param_2 & 0xff) != 0;
      param_2 = "false";
      if (bVar2) {
        param_2 = "true";
      }
      uVar8 = 4;
      if (!bVar2) {
        uVar8 = 5;
      }
      uVar9 = (long)pcVar7 - (long)pcVar6;
      if (uVar8 <= (ulong)((long)pcVar7 - (long)pcVar6)) {
        uVar9 = uVar8;
      }
      goto LAB_10ae0473c;
    }
  }
  *(char **)(param_1 + 8) = pcVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar10._8_8_ = (long)pcVar4 - (long)pcVar6;
    auVar10._0_8_ = pcVar6;
    return auVar10;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcVar6 = pcVar4;
  pcVar7 = param_2;
FUN_10ae04790:
  pcVar4 = pcVar6;
  if ((pcVar6 != pcVar7) && (param_3 < 0)) {
    *pcVar6 = '-';
    pcVar4 = pcVar6 + 1;
  }
  pcVar5 = pcVar7;
  func_0x00010ae04820(pcVar4);
  if (((int)pcVar5 != 0) && (pcVar4 = pcVar6, pcVar6 < pcVar7)) {
    uVar9 = (long)pcVar7 - (long)pcVar6;
    if (2 < uVar9) {
      uVar9 = 3;
    }
    pcVar5 = "~~~";
    _memcpy(pcVar6,&UNK_10f6c3454,uVar9);
    pcVar4 = pcVar6 + uVar9;
  }
  auVar11._8_8_ = pcVar5;
  auVar11._0_8_ = pcVar4;
  return auVar11;
}



/* Entry: 10ae04790; end: 10ae0497b;  */

undefined1 * FUN_10ae04790(undefined1 *param_1,undefined1 *param_2,ulong param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  
  puVar1 = param_1;
  if ((param_1 != param_2) && ((int)param_3 < 0)) {
    *param_1 = 0x2d;
    param_3 = (ulong)(uint)-(int)param_3;
    puVar1 = param_1 + 1;
  }
  puVar2 = param_2;
  func_0x00010ae04820(puVar1,param_2,param_3);
  if (((int)puVar2 != 0) && (puVar1 = param_1, param_1 < param_2)) {
    uVar3 = (long)param_2 - (long)param_1;
    if (2 < uVar3) {
      uVar3 = 3;
    }
    _memcpy(param_1,&UNK_10f6c3454,uVar3);
    puVar1 = param_1 + uVar3;
  }
  return puVar1;
}



/* Entry: 10ae0497c; end: 10ae04f77;  */

int FUN_10ae0497c(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 < param_2) {
    return 1;
  }
  uVar1 = param_2 * param_2;
  uVar2 = uVar1 * uVar1;
  iVar4 = 4;
  do {
    iVar5 = iVar4;
    if (param_1 < uVar1) {
      return iVar5 + -2;
    }
    if (param_1 < uVar1 * param_2) {
      return iVar5 + -1;
    }
    if (param_1 < uVar2) {
      return iVar5;
    }
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = param_1 / uVar2;
    }
    param_1 = uVar3;
    iVar4 = iVar5 + 4;
  } while (param_2 <= uVar3);
  return iVar5 + 1;
}



/* Entry: 10ae04f78; end: 10ae0514b;  */

undefined1  [16] FUN_10ae04f78(long param_1,char *param_2,int param_3)

{
  short sVar1;
  bool bVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
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
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = *(char **)(param_1 + 8);
  pcVar7 = *(char **)(param_1 + 0x10);
  sVar1 = (short)param_2;
  pcVar4 = pcVar6;
  if (param_3 < 3) {
    if (param_3 == 1) {
      if (pcVar6 < pcVar7) {
        pcVar4 = pcVar6 + 1;
        *pcVar6 = (char)param_2;
      }
      goto LAB_10ae05108;
    }
    if (param_3 == 2) {
      uVar9 = (long)pcVar7 - (long)pcVar6;
      lVar3 = param_1;
      ____mb_cur_max();
      if ((long)uVar9 < (long)(int)lVar3) {
        if (pcVar7 <= pcVar6) goto LAB_10ae05108;
        if (2 < uVar9) {
          uVar9 = 3;
        }
        param_2 = "~~~";
      }
      else {
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        param_2 = (char *)(ulong)(uint)(int)sVar1;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        pcVar5 = pcVar6;
        param_3 = (int)&uStack_d0;
        _wcrtomb();
        if (pcVar5 != (char *)0xffffffffffffffff) {
          pcVar4 = pcVar6 + (long)pcVar5;
          goto LAB_10ae05108;
        }
        if (pcVar7 <= pcVar6) goto LAB_10ae05108;
        if (2 < uVar9) {
          uVar9 = 3;
        }
        param_2 = "???";
      }
      goto LAB_10ae050f8;
    }
  }
  else if (((param_3 != 3) && (param_3 != 4)) && (param_3 == 5)) {
    if (pcVar7 <= pcVar6) goto LAB_10ae05108;
    bVar2 = ((ulong)param_2 & 0xffff) != 0;
    param_2 = "false";
    if (bVar2) {
      param_2 = "true";
    }
    uVar8 = 4;
    if (!bVar2) {
      uVar8 = 5;
    }
    uVar9 = (long)pcVar7 - (long)pcVar6;
    if (uVar8 <= (ulong)((long)pcVar7 - (long)pcVar6)) {
      uVar9 = uVar8;
    }
LAB_10ae050f8:
    uVar8 = uVar9;
    _memcpy(pcVar6);
    param_3 = (int)uVar8;
    pcVar4 = pcVar6 + uVar9;
    goto LAB_10ae05108;
  }
  param_3 = (int)sVar1;
  FUN_10ae0514c();
  param_2 = pcVar7;
LAB_10ae05108:
  *(char **)(param_1 + 8) = pcVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    __Unwind_Resume();
    pcVar6 = pcVar4;
    if ((pcVar4 != param_2) && (param_3 < 0)) {
      *pcVar4 = '-';
      pcVar6 = pcVar4 + 1;
    }
    pcVar7 = param_2;
    func_0x00010ae04820(pcVar6);
    if (((int)pcVar7 != 0) && (pcVar6 = pcVar4, pcVar4 < param_2)) {
      uVar9 = (long)param_2 - (long)pcVar4;
      if (2 < uVar9) {
        uVar9 = 3;
      }
      pcVar7 = "~~~";
      _memcpy(pcVar4,&UNK_10f6c3454,uVar9);
      pcVar6 = pcVar4 + uVar9;
    }
    auVar11._8_8_ = pcVar7;
    auVar11._0_8_ = pcVar6;
    return auVar11;
  }
  auVar10._8_8_ = (long)pcVar4 - (long)pcVar6;
  auVar10._0_8_ = pcVar6;
  return auVar10;
}



/* Entry: 10ae0514c; end: 10ae051db;  */

undefined1 * FUN_10ae0514c(undefined1 *param_1,undefined1 *param_2,ulong param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  
  puVar1 = param_1;
  if ((param_1 != param_2) && ((int)param_3 < 0)) {
    *param_1 = 0x2d;
    param_3 = (ulong)(uint)-(int)param_3;
    puVar1 = param_1 + 1;
  }
  puVar2 = param_2;
  func_0x00010ae04820(puVar1,param_2,param_3);
  if (((int)puVar2 != 0) && (puVar1 = param_1, param_1 < param_2)) {
    uVar3 = (long)param_2 - (long)param_1;
    if (2 < uVar3) {
      uVar3 = 3;
    }
    _memcpy(param_1,&UNK_10f6c3454,uVar3);
    puVar1 = param_1 + uVar3;
  }
  return puVar1;
}


