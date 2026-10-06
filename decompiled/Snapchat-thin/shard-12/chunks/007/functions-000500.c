/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109711154; end: 10971127b;  */

void FUN_109711154(long param_1,long param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  
  if (param_4 != param_3) {
    uVar3 = (ulong)param_3;
    if (*(int *)(param_1 + 0x1c) != 2) {
      uVar1 = *(uint *)(param_2 + (ulong)(param_4 - 1) * 0x14 + 8);
      uVar2 = *(uint *)(param_2 + uVar3 * 0x14 + 8);
      if (uVar2 == param_5 || uVar1 == param_5) {
        if (uVar2 != param_5) {
          iVar7 = param_4 - param_3;
          if (param_4 < param_3 || iVar7 == 0) {
            return;
          }
          puVar4 = (uint *)(param_2 + uVar3 * 0x14 + 4);
          do {
            if (puVar4[1] == uVar1) {
              return;
            }
            *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 0x20;
            *puVar4 = *puVar4 | param_6;
            iVar7 = iVar7 + -1;
            puVar4 = puVar4 + 5;
          } while (iVar7 != 0);
          return;
        }
        if (param_4 <= param_3) {
          return;
        }
        uVar5 = (ulong)param_4;
        puVar4 = (uint *)(param_2 + (ulong)param_4 * 0x14 + -0x10);
        do {
          if (puVar4[1] == param_5) {
            return;
          }
          uVar5 = uVar5 - 1;
          *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 0x20;
          *puVar4 = *puVar4 | param_6;
          puVar4 = puVar4 + -5;
        } while (uVar3 < uVar5);
        return;
      }
    }
    if (param_3 < param_4) {
      lVar6 = param_4 - uVar3;
      puVar4 = (uint *)(param_2 + uVar3 * 0x14 + 4);
      do {
        if (puVar4[1] != param_5) {
          *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 0x20;
          *puVar4 = *puVar4 | param_6;
        }
        puVar4 = puVar4 + 5;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  return;
}



/* Entry: 10971127c; end: 109711307;  */

long FUN_10971127c(long param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  
  lVar3 = param_2;
  _strlen();
  pbVar1 = (byte *)(lVar3 + 1);
  pbVar4 = pbVar1;
  _malloc();
  *(byte **)(param_1 + 8) = pbVar4;
  if (pbVar4 != (byte *)0x0) {
    if (pbVar1 == (byte *)0x0) {
      uVar5 = 0;
    }
    else {
      _memcpy(pbVar4,param_2,pbVar1);
      uVar5 = (ulong)*pbVar4;
      if (*pbVar4 == 0) {
        return param_1;
      }
    }
    do {
      *pbVar4 = (&UNK_10dfe4c27)[uVar5];
      bVar2 = pbVar4[1];
      uVar5 = (ulong)bVar2;
      pbVar4 = pbVar4 + 1;
    } while (bVar2 != 0);
  }
  return param_1;
}



/* Entry: 109711308; end: 109711367;  */

/* WARNING: Removing unreachable block (ram,0x000109711338) */

void FUN_109711308(void)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  do {
    puVar4 = puRam000000011382adb0;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x11382adb0,0x10);
    if (bVar3) {
      puRam000000011382adb0 = (undefined8 *)0x0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  while (puVar4 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar4;
    _free(puVar4[1]);
    _free(puVar4);
    puVar4 = puVar1;
  }
  return;
}



/* Entry: 109711368; end: 1097114af;  */

undefined8 FUN_109711368(long *param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  pbVar3 = (byte *)*param_1;
  if (pbVar3 < param_2) {
    do {
      if ((4 < *pbVar3 - 9) && (*pbVar3 != 0x20)) break;
      pbVar3 = pbVar3 + 1;
      *param_1 = (long)pbVar3;
    } while (pbVar3 != param_2);
  }
  if (pbVar3 < param_2) {
    bVar1 = *pbVar3;
    uVar6 = (uint)bVar1;
    if ((bVar1 != 0x27) && (bVar1 != 0x22)) goto LAB_1097113e8;
    pbVar3 = pbVar3 + 1;
    *param_1 = (long)pbVar3;
  }
  else {
LAB_1097113e8:
    uVar6 = 0;
  }
  pbVar8 = pbVar3;
  pbVar7 = pbVar3;
  if (pbVar3 < param_2) {
    do {
      uVar2 = *pbVar7 - 0x20;
      pbVar8 = pbVar7;
      if ((uVar2 < 0x3c && (1L << ((ulong)uVar2 & 0x3f) & 0x800000020000001U) != 0) ||
         (*pbVar7 == uVar6)) break;
      pbVar7 = pbVar7 + 1;
      *param_1 = (long)pbVar7;
      pbVar8 = param_2;
    } while (pbVar7 != param_2);
  }
  if ((pbVar3 == pbVar8) || (lVar5 = (long)pbVar8 - (long)pbVar3, 4 < lVar5)) {
LAB_109711458:
    uVar4 = 0;
  }
  else {
    FUN_1096f5c50(pbVar3,lVar5);
    *param_3 = (int)pbVar3;
    if (uVar6 != 0) {
      if (pbVar8 == param_2) {
        return 0;
      }
      if (lVar5 != 4) {
        return 0;
      }
      if (*pbVar8 != uVar6) goto LAB_109711458;
      *param_1 = (long)(pbVar8 + 1);
    }
    uVar4 = 1;
  }
  return uVar4;
}



/* Entry: 1097114b0; end: 1097114ff;  */

void FUN_1097114b0(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  if (*(undefined8 **)(param_1 + 0x38) == (undefined8 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = **(undefined8 **)(param_1 + 0x38);
  }
  (**(code **)(param_1 + 0x10))(param_3[3],param_3[4],param_1,param_2,param_3,uVar1);
  *param_3 = 1;
  *(undefined8 *)(param_3 + 1) = *(undefined8 *)(param_3 + 3);
  return;
}



/* Entry: 109711500; end: 1097115cb;  */

void FUN_109711500(int *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  
  if (param_1[1] != 0) {
    _pthread_mutex_lock(param_2);
    iVar3 = param_1[1];
    while (iVar3 != 0) {
      lVar4 = *(long *)(param_1 + 2) + (ulong)(iVar3 - 1U) * 0x18;
      uVar1 = *(undefined8 *)(lVar4 + 8);
      pcVar2 = *(code **)(lVar4 + 0x10);
      param_1[1] = iVar3 - 1U;
      _pthread_mutex_unlock(param_2);
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(uVar1);
      }
      _pthread_mutex_lock(param_2);
      iVar3 = param_1[1];
    }
    if (*param_1 != 0) {
      param_1[1] = 0;
      _free(*(undefined8 *)(param_1 + 2));
    }
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__pthread_mutex_unlock_11034c918)(param_2);
    return;
  }
  if (*param_1 != 0) {
    param_1[1] = 0;
    _free(*(undefined8 *)(param_1 + 2));
  }
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



/* Entry: 1097115cc; end: 109711687;  */

undefined8 FUN_1097115cc(uint *param_1,uint param_2,int param_3)

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
  if (uVar4 >> 0x1e == 0) {
    lVar1 = *(long *)(param_1 + 2);
    if (uVar5 == 0) {
      _free();
      lVar1 = 0;
    }
    else {
      _realloc(lVar1,uVar5 << 2);
      if (lVar1 == 0) {
        uVar3 = *param_1;
        if (uVar5 <= uVar3) {
          return 1;
        }
        goto LAB_10971162c;
      }
    }
    *(long *)(param_1 + 2) = lVar1;
    uVar2 = 1;
  }
  else {
LAB_10971162c:
    uVar2 = 0;
    uVar5 = ~uVar3;
  }
  *param_1 = uVar5;
  return uVar2;
}



/* Entry: 109711688; end: 1097116b7;  */

int FUN_109711688(uint *param_1)

{
  uint uVar1;
  
  uVar1 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  if ((uVar1 >> 0x10 | uVar1 << 0x10) == 0x73666e74) {
    return ((uint)(ushort)((ushort)param_1[1] >> 8) | ((ushort)param_1[1] & 0xff00ff) << 8) + 1;
  }
  return 0;
}



/* Entry: 1097116b8; end: 109711923;  */

uint * FUN_1097116b8(uint *param_1,uint param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  uint *puVar9;
  ulong uVar10;
  uint *puVar11;
  ulong uVar12;
  uint *puVar13;
  ulong uVar14;
  byte *pbVar15;
  
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  uVar8 = *param_1;
  bVar1 = *(byte *)((long)param_1 + 1);
  bVar2 = *(byte *)((long)param_1 + 2);
  bVar3 = *(byte *)((long)param_1 + 3);
  uVar6 = (uint)(byte)uVar8 << 0x18 | (uint)bVar1 << 0x10 | (uint)bVar2 << 8 | (uint)bVar3;
  if ((int)uVar6 < 0x74727565) {
    if (uVar6 == 0x100) {
      uVar14 = 0;
      lVar7 = (ulong)*(byte *)((long)param_1 + 7) +
              (ulong)*(byte *)((long)param_1 + 6) * 0x100 +
              (ulong)(byte)param_1[1] * 0x1000000 + (ulong)*(byte *)((long)param_1 + 5) * 0x10000;
      uVar4 = *(ushort *)
               ((long)param_1 +
               (ulong)*(byte *)((long)param_1 + lVar7 + 0x19) +
               (ulong)*(byte *)((long)param_1 + lVar7 + 0x18) * 0x100 + lVar7);
      pbVar15 = (byte *)((long)param_1 +
                        ((ulong)*(byte *)((long)param_1 + 5) << 0x10 |
                         (ulong)(byte)param_1[1] << 0x18 | (ulong)*(byte *)((long)param_1 + 6) << 8
                        | (ulong)*(byte *)((long)param_1 + 7)) + 2);
      puVar11 = (uint *)&UNK_10dfe4888;
      while( true ) {
        uVar12 = (ulong)*(byte *)((long)param_1 + lVar7 + 0x18);
        uVar10 = (ulong)*(byte *)((long)param_1 + lVar7 + 0x19);
        uVar5 = *(ushort *)((long)param_1 + uVar10 + uVar12 * 0x100 + lVar7);
        puVar13 = puVar11;
        if (uVar14 <= ((uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8)) {
          puVar13 = (uint *)(pbVar15 + uVar12 * 0x100 + uVar10);
        }
        uVar6 = (*puVar13 & 0xff00ff00) >> 8 | (*puVar13 & 0xff00ff) << 8;
        if (((uVar6 >> 0x10 | uVar6 << 0x10) == 0x73666e74) &&
           (puVar9 = puVar13, FUN_109711688(), param_2 < (uint)puVar9)) break;
        uVar14 = uVar14 + 1;
        pbVar15 = pbVar15 + 8;
        if ((ulong)((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8) + 1 == uVar14) {
LAB_1097118e8:
          if (param_3 == (int *)0x0) {
            return puVar11;
          }
          *param_3 = (int)puVar11 - (int)param_1;
          return puVar11;
        }
      }
      lVar7 = (ulong)param_2 * 0xc +
              (ulong)*(byte *)((long)puVar13 + 7) +
              (ulong)*(byte *)((long)puVar13 + 6) * 0x100 +
              (ulong)*(byte *)((long)param_1 + lVar7 + 0x19) +
              (ulong)*(byte *)((long)param_1 + lVar7 + 0x18) * 0x100 + lVar7;
      puVar11 = (uint *)((long)param_1 +
                        (ulong)*(byte *)((long)param_1 + lVar7 + 7) +
                        (ulong)*(byte *)((long)param_1 + lVar7 + 5) * 0x10000 +
                        (ulong)*(byte *)((long)param_1 + lVar7 + 6) * 0x100 +
                        (ulong)bVar3 +
                        (ulong)bVar2 * 0x100 +
                        (ulong)(byte)uVar8 * 0x1000000 + (ulong)bVar1 * 0x10000 + 4);
      goto LAB_1097118e8;
    }
    if (uVar6 == 0x10000 || uVar6 == 0x4f54544f) {
      return param_1;
    }
  }
  else {
    if (uVar6 == 0x74727565 || uVar6 == 0x74797031) {
      return param_1;
    }
    if ((uVar6 == 0x74746366) &&
       (((uint)(ushort)((ushort)param_1[1] >> 8) | ((ushort)param_1[1] & 0xff00ff) << 8) - 1 < 2)) {
      uVar6 = (param_1[2] & 0xff00ff00) >> 8 | (param_1[2] & 0xff00ff) << 8;
      puVar11 = (uint *)&UNK_10dfe4888;
      if (param_2 < (uVar6 >> 0x10 | uVar6 << 0x10)) {
        puVar11 = param_1 + (ulong)param_2 + 3;
      }
      uVar6 = (*puVar11 & 0xff00ff00) >> 8 | (*puVar11 & 0xff00ff) << 8;
      uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
      if (uVar6 == 0) {
        return (uint *)&UNK_10dfe4888;
      }
      return (uint *)((long)param_1 + (ulong)uVar6);
    }
  }
  return (uint *)&UNK_10dfe4888;
}



/* Entry: 109711924; end: 109711a0f;  */

void FUN_109711924(ushort *param_1,long param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  ushort *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ushort *puVar11;
  uint *puVar12;
  
  uVar3 = *param_1 >> 8 | *param_1 << 8;
  if (uVar3 < 10) {
    if (uVar3 == 0) {
      lVar8 = 0;
      do {
        if (*(char *)((long)param_1 + lVar8 + 6) != '\0') {
          func_0x000109739eb0(param_2 + 0x10,lVar8);
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 != 0x100);
    }
    else {
      if (uVar3 == 4) {
        func_0x000109711ecc(&stack0xffffffffffffffc0,param_2);
        return;
      }
      if (uVar3 == 6) {
        uVar4 = (uint)(param_1[4] >> 8) | (param_1[4] & 0xff00ff) << 8;
        uVar9 = (ulong)uVar4;
        if (uVar4 != 0) {
          uVar10 = 0;
          puVar11 = param_1 + 5;
          uVar4 = (uint)(param_1[3] >> 8) | (param_1[3] & 0xff00ff) << 8;
          do {
            puVar7 = (ushort *)&UNK_10dfe4888;
            if (uVar10 < ((uint)(param_1[4] >> 8) | (param_1[4] & 0xff00ff) << 8)) {
              puVar7 = puVar11;
            }
            if (*(char *)((long)puVar7 + 1) != '\0' || (char)*puVar7 != '\0') {
              func_0x000109739eb0(param_2 + 0x10,uVar4);
            }
            uVar10 = uVar10 + 1;
            puVar11 = puVar11 + 1;
            uVar4 = uVar4 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        return;
      }
    }
  }
  else {
    if (uVar3 == 10) {
      uVar4 = (*(uint *)(param_1 + 8) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 8) & 0xff00ff) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar9 = (ulong)uVar4;
      if (uVar4 != 0) {
        uVar10 = 0;
        puVar11 = param_1 + 10;
        iVar1 = (uint)(byte)param_1[6] * 0x1000000 + (uint)*(byte *)((long)param_1 + 0xd) * 0x10000
                + (uint)(byte)param_1[7] * 0x100 + (uint)*(byte *)((long)param_1 + 0xf);
        do {
          uVar4 = (*(uint *)(param_1 + 8) & 0xff00ff00) >> 8 |
                  (*(uint *)(param_1 + 8) & 0xff00ff) << 8;
          puVar7 = (ushort *)&UNK_10dfe4888;
          if (uVar10 < (uVar4 >> 0x10 | uVar4 << 0x10)) {
            puVar7 = puVar11;
          }
          if (*(char *)((long)puVar7 + 1) != '\0' || (char)*puVar7 != '\0') {
            func_0x000109739eb0(param_2 + 0x10,iVar1);
          }
          uVar10 = uVar10 + 1;
          puVar11 = puVar11 + 1;
          iVar1 = iVar1 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      return;
    }
    if (uVar3 == 0xc) {
      if ((*(char *)((long)param_1 + 0xd) != '\0' || (char)param_1[6] != '\0') ||
          ((char)param_1[7] != '\0' || *(char *)((long)param_1 + 0xf) != '\0')) {
        uVar9 = 0;
        puVar12 = (uint *)(param_1 + 8);
        do {
          uVar4 = (*(uint *)(param_1 + 6) & 0xff00ff00) >> 8 |
                  (*(uint *)(param_1 + 6) & 0xff00ff) << 8;
          uVar10 = (ulong)(uVar4 >> 0x10 | uVar4 << 0x10);
          puVar5 = (uint *)&UNK_10dfe4b1b;
          if (uVar9 < uVar10) {
            uVar4 = (*(uint *)(param_1 + 6) & 0xff00ff00) >> 8 |
                    (*(uint *)(param_1 + 6) & 0xff00ff) << 8;
            uVar10 = (ulong)(uVar4 >> 0x10 | uVar4 << 0x10);
            puVar5 = puVar12;
          }
          uVar2 = (uint)(byte)puVar5[1] << 0x18 | (uint)*(byte *)((long)puVar5 + 5) << 0x10;
          uVar4 = 0x10ffff;
          if (uVar2 < 0x110000) {
            uVar4 = uVar2 | (uint)(*(ushort *)((long)puVar5 + 6) >> 8) |
                            (*(ushort *)((long)puVar5 + 6) & 0xff00ff) << 8;
          }
          puVar5 = (uint *)&UNK_10dfe4b1b;
          if (uVar9 < uVar10) {
            puVar5 = puVar12;
          }
          uVar2 = (*puVar12 & 0xff00ff00) >> 8 | (*puVar12 & 0xff00ff) << 8;
          uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
          uVar6 = (puVar5[2] & 0xff00ff00) >> 8 | (puVar5[2] & 0xff00ff) << 8;
          uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
          if (uVar6 == 0) {
            uVar6 = (*(uint *)(param_1 + 6) & 0xff00ff00) >> 8 |
                    (*(uint *)(param_1 + 6) & 0xff00ff) << 8;
            puVar5 = (uint *)&UNK_10dfe4b1b;
            if (uVar9 < (uVar6 >> 0x10 | uVar6 << 0x10)) {
              puVar5 = puVar12;
            }
            FUN_109712054(puVar5,uVar4);
            if ((int)puVar5 != 0) {
              uVar2 = uVar2 + 1;
              uVar6 = 1;
              goto LAB_109711cd8;
            }
          }
          else {
LAB_109711cd8:
            if (uVar6 < param_3) {
              if (param_3 <= (uVar4 - uVar2) + uVar6) {
                uVar4 = (uVar2 + param_3) - uVar6;
              }
              if (0x10fffe < uVar4) {
                uVar4 = 0x10ffff;
              }
              FUN_109739f84(param_2 + 0x10,uVar2,uVar4);
            }
          }
          uVar9 = uVar9 + 1;
          uVar4 = (*(uint *)(param_1 + 6) & 0xff00ff00) >> 8 |
                  (*(uint *)(param_1 + 6) & 0xff00ff) << 8;
          puVar12 = puVar12 + 3;
        } while (uVar9 < (uVar4 >> 0x10 | uVar4 << 0x10));
      }
      return;
    }
    if (uVar3 == 0xd) {
      if ((*(char *)((long)param_1 + 0xd) != '\0' || (char)param_1[6] != '\0') ||
          ((char)param_1[7] != '\0' || *(char *)((long)param_1 + 0xf) != '\0')) {
        uVar9 = 0;
        puVar12 = (uint *)(param_1 + 8);
        do {
          uVar4 = (*(uint *)(param_1 + 6) & 0xff00ff00) >> 8 |
                  (*(uint *)(param_1 + 6) & 0xff00ff) << 8;
          uVar10 = (ulong)(uVar4 >> 0x10 | uVar4 << 0x10);
          puVar5 = (uint *)&UNK_10dfe4b1b;
          if (uVar9 < uVar10) {
            uVar4 = (*(uint *)(param_1 + 6) & 0xff00ff00) >> 8 |
                    (*(uint *)(param_1 + 6) & 0xff00ff) << 8;
            uVar10 = (ulong)(uVar4 >> 0x10 | uVar4 << 0x10);
            puVar5 = puVar12;
          }
          uVar2 = (uint)(byte)puVar5[1] << 0x18 | (uint)*(byte *)((long)puVar5 + 5) << 0x10;
          uVar4 = 0x10ffff;
          if (uVar2 < 0x110000) {
            uVar4 = uVar2 | (uint)(*(ushort *)((long)puVar5 + 6) >> 8) |
                            (*(ushort *)((long)puVar5 + 6) & 0xff00ff) << 8;
          }
          puVar5 = (uint *)&UNK_10dfe4b1b;
          if (uVar9 < uVar10) {
            puVar5 = puVar12;
          }
          uVar2 = (*puVar12 & 0xff00ff00) >> 8 | (*puVar12 & 0xff00ff) << 8;
          uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
          uVar6 = (puVar5[2] & 0xff00ff00) >> 8 | (puVar5[2] & 0xff00ff) << 8;
          uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
          if (uVar6 == 0) {
            uVar6 = (*(uint *)(param_1 + 6) & 0xff00ff00) >> 8 |
                    (*(uint *)(param_1 + 6) & 0xff00ff) << 8;
            puVar5 = (uint *)&UNK_10dfe4b1b;
            if (uVar9 < (uVar6 >> 0x10 | uVar6 << 0x10)) {
              puVar5 = puVar12;
            }
            if ((*(char *)((long)puVar5 + 9) != '\0' || (char)puVar5[2] != '\0') ||
                (*(char *)((long)puVar5 + 10) != '\0' || *(char *)((long)puVar5 + 0xb) != '\0')) {
              uVar2 = uVar2 + 1;
              uVar6 = 1;
              goto LAB_109711e50;
            }
          }
          else {
LAB_109711e50:
            if (uVar6 < param_3) {
              if (param_3 <= (uVar4 - uVar2) + uVar6) {
                uVar4 = (uVar2 + param_3) - uVar6;
              }
              if (0x10fffe < uVar4) {
                uVar4 = 0x10ffff;
              }
              FUN_109739f84(param_2 + 0x10,uVar2,uVar4);
            }
          }
          uVar9 = uVar9 + 1;
          uVar4 = (*(uint *)(param_1 + 6) & 0xff00ff00) >> 8 |
                  (*(uint *)(param_1 + 6) & 0xff00ff) << 8;
          puVar12 = puVar12 + 3;
        } while (uVar9 < (uVar4 >> 0x10 | uVar4 << 0x10));
      }
      return;
    }
  }
  return;
}



/* Entry: 109711a10; end: 109711a7b;  */

void FUN_109711a10(long param_1)

{
  ulong uVar1;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  long lStack_20;
  uint uStack_18;
  uint uStack_14;
  
  uStack_18 = ((uint)(*(ushort *)(param_1 + 6) >> 8) | (*(ushort *)(param_1 + 6) & 0xff00ff) << 8)
              >> 1;
  lStack_40 = param_1 + 0xe;
  uVar1 = (ulong)(uStack_18 << 1);
  lStack_38 = lStack_40 + uVar1 + 2;
  lStack_30 = lStack_38 + uVar1;
  lStack_28 = lStack_30 + uVar1;
  lStack_20 = lStack_28 + uVar1;
  uStack_14 = (((uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8)
              + uStack_18 * -8) - 0x10 >> 1;
  func_0x000109711ecc(&lStack_40);
  return;
}



/* Entry: 109711a7c; end: 109711bf3;  */

void FUN_109711a7c(long param_1,long param_2)

{
  uint uVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  
  uVar1 = (uint)(*(ushort *)(param_1 + 8) >> 8) | (*(ushort *)(param_1 + 8) & 0xff00ff) << 8;
  uVar3 = (ulong)uVar1;
  if (uVar1 != 0) {
    uVar4 = 0;
    pcVar5 = (char *)(param_1 + 10);
    uVar1 = (uint)(*(ushort *)(param_1 + 6) >> 8) | (*(ushort *)(param_1 + 6) & 0xff00ff) << 8;
    do {
      pcVar2 = "";
      if (uVar4 < ((uint)(*(ushort *)(param_1 + 8) >> 8) |
                  (*(ushort *)(param_1 + 8) & 0xff00ff) << 8)) {
        pcVar2 = pcVar5;
      }
      if (pcVar2[1] != '\0' || *pcVar2 != '\0') {
        func_0x000109739eb0(param_2 + 0x10,uVar1);
      }
      uVar4 = uVar4 + 1;
      pcVar5 = pcVar5 + 2;
      uVar1 = uVar1 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Entry: 109711bf4; end: 109711d5b;  */

void FUN_109711bf4(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint *puVar7;
  
  if ((*(char *)(param_1 + 0xd) != '\0' || *(char *)(param_1 + 0xc) != '\0') ||
      (*(char *)(param_1 + 0xe) != '\0' || *(char *)(param_1 + 0xf) != '\0')) {
    uVar6 = 0;
    puVar7 = (uint *)(param_1 + 0x10);
    do {
      uVar2 = (*(uint *)(param_1 + 0xc) & 0xff00ff00) >> 8 |
              (*(uint *)(param_1 + 0xc) & 0xff00ff) << 8;
      uVar5 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
      puVar3 = (uint *)&UNK_10dfe4b1b;
      if (uVar6 < uVar5) {
        uVar2 = (*(uint *)(param_1 + 0xc) & 0xff00ff00) >> 8 |
                (*(uint *)(param_1 + 0xc) & 0xff00ff) << 8;
        uVar5 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
        puVar3 = puVar7;
      }
      uVar1 = (uint)(byte)puVar3[1] << 0x18 | (uint)*(byte *)((long)puVar3 + 5) << 0x10;
      uVar2 = 0x10ffff;
      if (uVar1 < 0x110000) {
        uVar2 = uVar1 | (uint)(*(ushort *)((long)puVar3 + 6) >> 8) |
                        (*(ushort *)((long)puVar3 + 6) & 0xff00ff) << 8;
      }
      puVar3 = (uint *)&UNK_10dfe4b1b;
      if (uVar6 < uVar5) {
        puVar3 = puVar7;
      }
      uVar1 = (*puVar7 & 0xff00ff00) >> 8 | (*puVar7 & 0xff00ff) << 8;
      uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar4 = (puVar3[2] & 0xff00ff00) >> 8 | (puVar3[2] & 0xff00ff) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      if (uVar4 == 0) {
        uVar4 = (*(uint *)(param_1 + 0xc) & 0xff00ff00) >> 8 |
                (*(uint *)(param_1 + 0xc) & 0xff00ff) << 8;
        puVar3 = (uint *)&UNK_10dfe4b1b;
        if (uVar6 < (uVar4 >> 0x10 | uVar4 << 0x10)) {
          puVar3 = puVar7;
        }
        FUN_109712054(puVar3,uVar2);
        if ((int)puVar3 != 0) {
          uVar1 = uVar1 + 1;
          uVar4 = 1;
          goto LAB_109711cd8;
        }
      }
      else {
LAB_109711cd8:
        if (uVar4 < param_3) {
          if (param_3 <= (uVar2 - uVar1) + uVar4) {
            uVar2 = (uVar1 + param_3) - uVar4;
          }
          if (0x10fffe < uVar2) {
            uVar2 = 0x10ffff;
          }
          FUN_109739f84(param_2 + 0x10,uVar1,uVar2);
        }
      }
      uVar6 = uVar6 + 1;
      uVar2 = (*(uint *)(param_1 + 0xc) & 0xff00ff00) >> 8 |
              (*(uint *)(param_1 + 0xc) & 0xff00ff) << 8;
      puVar7 = puVar7 + 3;
    } while (uVar6 < (uVar2 >> 0x10 | uVar2 << 0x10));
  }
  return;
}



/* Entry: 109711d5c; end: 109712053;  */

void FUN_109711d5c(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint *puVar7;
  
  if ((*(char *)(param_1 + 0xd) != '\0' || *(char *)(param_1 + 0xc) != '\0') ||
      (*(char *)(param_1 + 0xe) != '\0' || *(char *)(param_1 + 0xf) != '\0')) {
    uVar6 = 0;
    puVar7 = (uint *)(param_1 + 0x10);
    do {
      uVar2 = (*(uint *)(param_1 + 0xc) & 0xff00ff00) >> 8 |
              (*(uint *)(param_1 + 0xc) & 0xff00ff) << 8;
      uVar5 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
      puVar3 = (uint *)&UNK_10dfe4b1b;
      if (uVar6 < uVar5) {
        uVar2 = (*(uint *)(param_1 + 0xc) & 0xff00ff00) >> 8 |
                (*(uint *)(param_1 + 0xc) & 0xff00ff) << 8;
        uVar5 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
        puVar3 = puVar7;
      }
      uVar1 = (uint)(byte)puVar3[1] << 0x18 | (uint)*(byte *)((long)puVar3 + 5) << 0x10;
      uVar2 = 0x10ffff;
      if (uVar1 < 0x110000) {
        uVar2 = uVar1 | (uint)(*(ushort *)((long)puVar3 + 6) >> 8) |
                        (*(ushort *)((long)puVar3 + 6) & 0xff00ff) << 8;
      }
      puVar3 = (uint *)&UNK_10dfe4b1b;
      if (uVar6 < uVar5) {
        puVar3 = puVar7;
      }
      uVar1 = (*puVar7 & 0xff00ff00) >> 8 | (*puVar7 & 0xff00ff) << 8;
      uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar4 = (puVar3[2] & 0xff00ff00) >> 8 | (puVar3[2] & 0xff00ff) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      if (uVar4 == 0) {
        uVar4 = (*(uint *)(param_1 + 0xc) & 0xff00ff00) >> 8 |
                (*(uint *)(param_1 + 0xc) & 0xff00ff) << 8;
        puVar3 = (uint *)&UNK_10dfe4b1b;
        if (uVar6 < (uVar4 >> 0x10 | uVar4 << 0x10)) {
          puVar3 = puVar7;
        }
        if ((*(char *)((long)puVar3 + 9) != '\0' || (char)puVar3[2] != '\0') ||
            (*(char *)((long)puVar3 + 10) != '\0' || *(char *)((long)puVar3 + 0xb) != '\0')) {
          uVar1 = uVar1 + 1;
          uVar4 = 1;
          goto LAB_109711e50;
        }
      }
      else {
LAB_109711e50:
        if (uVar4 < param_3) {
          if (param_3 <= (uVar2 - uVar1) + uVar4) {
            uVar2 = (uVar1 + param_3) - uVar4;
          }
          if (0x10fffe < uVar2) {
            uVar2 = 0x10ffff;
          }
          FUN_109739f84(param_2 + 0x10,uVar1,uVar2);
        }
      }
      uVar6 = uVar6 + 1;
      uVar2 = (*(uint *)(param_1 + 0xc) & 0xff00ff00) >> 8 |
              (*(uint *)(param_1 + 0xc) & 0xff00ff) << 8;
      puVar7 = puVar7 + 3;
    } while (uVar6 < (uVar2 >> 0x10 | uVar2 << 0x10));
  }
  return;
}



/* Entry: 109712054; end: 109712083;  */

int FUN_109712054(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar2 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
  if (uVar1 <= (uVar2 >> 0x10 | uVar2 << 0x10)) {
    uVar2 = (param_1[2] & 0xff00ff00) >> 8 | (param_1[2] & 0xff00ff) << 8;
    return (param_2 - uVar1) + (uVar2 >> 0x10 | uVar2 << 0x10);
  }
  return 0;
}



/* Entry: 109712084; end: 1097120db;  */

long FUN_109712084(long param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x20);
  if (*piVar1 != 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    _free(*(undefined8 *)(param_1 + 0x28));
  }
  piVar1[0] = 0;
  piVar1[1] = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  piVar1 = (int *)(param_1 + 0x10);
  if (*piVar1 != 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    _free(*(undefined8 *)(param_1 + 0x18));
  }
  piVar1[0] = 0;
  piVar1[1] = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return param_1;
}



/* Entry: 1097120dc; end: 10971210b;  */

long FUN_1097120dc(long param_1)

{
  FUN_10971210c();
  FUN_109712084(param_1 + 0x10);
  return param_1;
}



/* Entry: 10971210c; end: 1097121b3;  */

void FUN_10971210c(undefined4 *param_1)

{
  long lVar1;
  int *piVar2;
  
  *param_1 = 0xffff2153;
  lVar1 = *(long *)(param_1 + 2);
  if (lVar1 != 0) {
    FUN_109711500(lVar1 + 0x40,lVar1);
    _pthread_mutex_destroy(lVar1);
    _free(lVar1);
    *(undefined8 *)(param_1 + 2) = 0;
  }
  piVar2 = param_1 + 8;
  if (*piVar2 != 0) {
    param_1[9] = 0;
    _free(*(undefined8 *)(param_1 + 10));
  }
  piVar2[0] = 0;
  piVar2[1] = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  piVar2 = param_1 + 0xc;
  if (*piVar2 != 0) {
    param_1[0xd] = 0;
    _free(*(undefined8 *)(param_1 + 0xe));
  }
  piVar2[0] = 0;
  piVar2[1] = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  return;
}



/* Entry: 1097121b4; end: 109712373;  */

void FUN_1097121b4(long param_1,int *param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == 0) {
    iVar4 = *param_3;
  }
  else {
    iVar4 = *param_2;
    iVar1 = *(int *)(lVar3 + 0x28);
    if (iVar1 != *(int *)(param_1 + 0x28)) {
      lVar2 = (long)iVar4;
      iVar4 = 0;
      if ((long)iVar1 != 0) {
        iVar4 = (int)((*(int *)(param_1 + 0x28) * lVar2) / (long)iVar1);
      }
    }
    *param_2 = iVar4;
    iVar4 = *param_3;
    iVar1 = *(int *)(lVar3 + 0x2c);
    if (iVar1 != *(int *)(param_1 + 0x2c)) {
      lVar3 = (long)iVar4;
      iVar4 = 0;
      if ((long)iVar1 != 0) {
        iVar4 = (int)((*(int *)(param_1 + 0x2c) * lVar3) / (long)iVar1);
      }
    }
  }
  *param_3 = iVar4;
  return;
}



/* Entry: 109712374; end: 1097123ef;  */

void FUN_109712374(long param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x90) + 0x10);
  if (puVar5 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar5;
  }
  lVar2 = param_1;
  (**(code **)(*(long *)(param_1 + 0x90) + 0x20))
            (param_1,*(undefined8 *)(param_1 + 0x98),param_2,uVar3);
  if ((int)lVar2 == 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    iVar4 = (int)((double)iVar1 * 0.8);
    *param_2 = iVar4;
    param_2[1] = iVar4 - iVar1;
    param_2[2] = 0;
  }
  return;
}



/* Entry: 1097123f0; end: 109712633;  */

void FUN_1097123f0(long param_1,undefined8 param_2,int *param_3,int *param_4)

{
  undefined8 uVar1;
  long lVar2;
  int iStack_38;
  int iStack_34;
  
  *param_4 = 0;
  *param_3 = 0;
  lVar2 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(lVar2 + 0x48);
  }
  lVar2 = param_1;
  (**(code **)(*(long *)(param_1 + 0x90) + 0x68))
            (param_1,*(undefined8 *)(param_1 + 0x98),param_2,param_3,param_4,uVar1);
  if ((int)lVar2 == 0) {
    *param_4 = 0;
    *param_3 = 0;
    lVar2 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(lVar2 + 0x50);
    }
    lVar2 = param_1;
    (**(code **)(*(long *)(param_1 + 0x90) + 0x70))
              (param_1,*(undefined8 *)(param_1 + 0x98),param_2,param_3,param_4,uVar1);
    if ((int)lVar2 != 0) {
      func_0x0001097125b8(param_1,param_2,&iStack_34,&iStack_38);
      *param_3 = *param_3 - iStack_34;
      *param_4 = *param_4 - iStack_38;
    }
  }
  return;
}



/* Entry: 109712634; end: 10971288f;  */

void FUN_109712634(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  lVar3 = *param_1;
  do {
    if (lVar3 != 0) {
      return;
    }
    lVar3 = 0;
    func_0x0001097126b8();
    if (lVar3 == 0) {
      if (*param_1 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = 0x1132e0078;
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
          *param_1 = lVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      if (lVar3 != 0x1132e0078) {
        func_0x0001096f9948();
      }
    }
    lVar3 = *param_1;
  } while( true );
}



/* Entry: 109712890; end: 1097129cf;  */

undefined8 FUN_109712890(long param_1,long param_2,undefined8 param_3,uint *param_4)

{
  char *pcVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lStack_48;
  
  lStack_48 = param_2 + 8;
  _pthread_mutex_lock();
  lVar6 = *(long *)(param_2 + 0x48);
  if ((lVar6 == 0) || (lVar4 = *(long *)(lVar6 + 0xa8), lVar4 == 0)) {
LAB_1097128f4:
    if (*(char *)(param_2 + 4) == '\x01') {
      lVar6 = *(long *)(param_1 + 0x20) + 0x90;
      FUN_109746db4();
      pcVar1 = "";
      if (0x4d < *(uint *)(lVar6 + 0x18)) {
        pcVar1 = *(char **)(lVar6 + 0x10);
      }
      if (pcVar1[1] == '\0' && *pcVar1 == '\0') {
        bVar2 = pcVar1[0x3e] == '\0';
      }
      else {
        bVar2 = true;
      }
      uVar5 = 0;
      if ((0xff < (uint)param_3) || (!bVar2)) goto LAB_109712904;
      lVar6 = *(long *)(param_2 + 0x48);
      if ((lVar6 != 0) && (lVar4 = *(long *)(lVar6 + 0xa8), lVar4 != 0)) {
        (**(code **)(*(long *)(lVar4 + 0x10) + 0x18))(lVar4,(uint)param_3 | 0xf000);
        uVar3 = (uint)lVar4;
        if (uVar3 != 0 && uVar3 < *(uint *)(lVar6 + 0x20)) goto LAB_1097129b0;
      }
    }
    uVar5 = 0;
  }
  else {
    (**(code **)(*(long *)(lVar4 + 0x10) + 0x18))(lVar4,param_3);
    uVar3 = (uint)lVar4;
    if (uVar3 == 0 || *(uint *)(lVar6 + 0x20) <= uVar3) goto LAB_1097128f4;
LAB_1097129b0:
    *param_4 = uVar3;
    uVar5 = 1;
  }
LAB_109712904:
  FUN_109713cfc(&lStack_48);
  return uVar5;
}



/* Entry: 1097129d0; end: 109712a9b;  */

ulong FUN_1097129d0(undefined8 param_1,long param_2,ulong param_3,undefined4 *param_4,ulong param_5,
                   uint *param_6,ulong param_7)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lStack_58;
  
  lStack_58 = param_2 + 8;
  _pthread_mutex_lock();
  uVar3 = 0;
  uVar4 = uVar3;
  if ((uint)param_3 != 0) {
    do {
      lVar5 = *(long *)(param_2 + 0x48);
      uVar4 = uVar3;
      if ((lVar5 == 0) || (lVar2 = *(long *)(lVar5 + 0xa8), lVar2 == 0)) {
LAB_109712a70:
        *param_6 = 0;
        break;
      }
      (**(code **)(*(long *)(lVar2 + 0x10) + 0x18))(lVar2,*param_4);
      uVar1 = (uint)lVar2;
      if (*(uint *)(lVar5 + 0x20) <= uVar1) goto LAB_109712a70;
      *param_6 = uVar1;
      if (uVar1 == 0) break;
      param_4 = (undefined4 *)((long)param_4 + (param_5 & 0xffffffff));
      param_6 = (uint *)((long)param_6 + (param_7 & 0xffffffff));
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulong)uVar1;
      uVar4 = param_3;
    } while ((uint)param_3 != uVar1);
  }
  FUN_109713cfc(&lStack_58);
  return uVar4;
}



/* Entry: 109712a9c; end: 109712c13;  */

bool FUN_109712a9c(undefined8 param_1,long param_2,undefined4 param_3,undefined4 param_4,
                  int *param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lStack_38;
  
  lStack_38 = param_2 + 8;
  _pthread_mutex_lock();
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  FUN_109755afc(uVar2,param_3,param_4);
  iVar1 = (int)uVar2;
  if (iVar1 != 0) {
    *param_5 = iVar1;
  }
  FUN_109713cfc(&lStack_38);
  return iVar1 != 0;
}



/* Entry: 109712c14; end: 109712da3;  */

void FUN_109712c14(long param_1,undefined4 *param_2,int param_3,uint *param_4,ulong param_5,
                  uint *param_6,uint param_7)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint *puVar7;
  int iVar8;
  ulong uVar9;
  ulong uStack_80;
  undefined4 *puStack_78;
  
  puStack_78 = param_2 + 2;
  _pthread_mutex_lock();
  if (param_3 != 0) {
    uVar6 = *(undefined8 *)(param_2 + 0x12);
    uVar4 = *param_2;
    iVar2 = *(int *)(param_1 + 0x28);
    puVar7 = param_6;
    iVar8 = param_3;
    do {
      uStack_80 = 0;
      uVar3 = *param_4;
      uVar9 = (ulong)uVar3 & 0xff;
      uVar5 = param_2[uVar9 + 0x15];
      if ((uVar5 == 0xffffffff) || (uVar5 >> 0x18 != uVar3 >> 8)) {
        FUN_109752978(uVar6,(ulong)uVar3,uVar4,&uStack_80);
        uVar1 = -uStack_80;
        if (-1 < (long)uStack_80) {
          uVar1 = uStack_80;
        }
        uVar5 = (int)((float)(int)(iVar2 >> 0x1f | 1) * (float)uVar1 + 512.0) >> 10;
        if ((uVar3 >> 0x10 == 0) && (uVar5 >> 0x18 == 0)) {
          param_2[uVar9 + 0x15] = uVar5 | (uVar3 >> 8) << 0x18;
        }
      }
      else {
        uVar5 = uVar5 & 0xffffff;
      }
      *puVar7 = uVar5;
      param_4 = (uint *)((long)param_4 + (param_5 & 0xffffffff));
      puVar7 = (uint *)((long)puVar7 + (ulong)param_7);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  iVar2 = *(int *)(param_1 + 0x3c);
  if ((iVar2 != 0) && ((*(byte *)(param_1 + 0x38) & 1) == 0)) {
    iVar8 = -iVar2;
    if (-1 < *(int *)(param_1 + 0x28)) {
      iVar8 = iVar2;
    }
    if (param_3 != 0) {
      do {
        iVar2 = 0;
        if (*param_6 != 0) {
          iVar2 = iVar8;
        }
        *param_6 = iVar2 + *param_6;
        param_6 = (uint *)((long)param_6 + (ulong)param_7);
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  FUN_109713cfc(&puStack_78);
  return;
}



/* Entry: 109712da4; end: 109712e5f;  */

int FUN_109712da4(long param_1,uint *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  long lStack_40;
  uint *puStack_38;
  
  puStack_38 = param_2 + 2;
  _pthread_mutex_lock();
  iVar2 = *(int *)(param_1 + 0x2c);
  uVar3 = *(undefined8 *)(param_2 + 0x12);
  FUN_109752978(uVar3,param_3,*param_2 | 0x10,&lStack_40);
  if ((int)uVar3 == 0) {
    iVar1 = -*(int *)(param_1 + 0x40);
    if (-1 < *(int *)(param_1 + 0x2c)) {
      iVar1 = *(int *)(param_1 + 0x40);
    }
    iVar4 = 0;
    if (*(char *)(param_1 + 0x38) == '\0') {
      iVar4 = iVar1;
    }
    iVar4 = (int)(0x200U - (long)(int)((float)(int)(iVar2 >> 0x1f | 1) * (float)lStack_40) >> 10) +
            iVar4;
  }
  else {
    iVar4 = 0;
  }
  FUN_109713cfc(&puStack_38);
  return iVar4;
}



/* Entry: 109712e60; end: 109712f63;  */

bool FUN_109712e60(long param_1,undefined4 *param_2,undefined8 param_3,int *param_4,int *param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined4 *puStack_58;
  
  puStack_58 = param_2 + 2;
  _pthread_mutex_lock();
  lVar5 = *(long *)(param_2 + 0x12);
  iVar2 = *(int *)(param_1 + 0x28);
  iVar3 = *(int *)(param_1 + 0x2c);
  lVar4 = lVar5;
  FUN_109752c30(lVar5,param_3,*param_2);
  bVar1 = (int)lVar4 == 0;
  if (bVar1) {
    lVar4 = *(long *)(lVar5 + 0x98);
    *param_4 = *(int *)(lVar4 + 0x40) - *(int *)(lVar4 + 0x58);
    *param_5 = *(int *)(lVar4 + 0x60) + *(int *)(lVar4 + 0x48);
    *param_4 = (int)((float)(int)(iVar2 >> 0x1f | 1) * (float)*param_4);
    *param_5 = (int)((float)(int)(iVar3 >> 0x1f | 1) * (float)*param_5);
  }
  FUN_109713cfc(&puStack_58);
  return bVar1;
}



/* Entry: 109712f64; end: 109713107;  */

undefined8 FUN_109712f64(long param_1,undefined4 *param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 *puStack_68;
  
  puStack_68 = param_2 + 2;
  _pthread_mutex_lock();
  lVar8 = *(long *)(param_2 + 0x12);
  fVar15 = *(float *)(param_1 + 0x48);
  iVar2 = *(int *)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 0x2c);
  lVar5 = lVar8;
  FUN_109752c30(lVar8,param_3,*param_2);
  if ((int)lVar5 == 0) {
    fVar10 = (float)(int)(iVar2 >> 0x1f | 1);
    fVar13 = (float)(int)(iVar4 >> 0x1f | 1);
    lVar5 = *(long *)(lVar8 + 0x98);
    fVar11 = fVar10 * (float)*(long *)(lVar5 + 0x40);
    fVar9 = fVar13 * (float)*(long *)(lVar5 + 0x48);
    fVar12 = fVar11 + (float)*(long *)(lVar5 + 0x30) * fVar10;
    fVar10 = fVar9 + (float)-*(long *)(lVar5 + 0x38) * fVar13;
    if (fVar15 != 0.0) {
      fVar13 = fVar15 * fVar9;
      fVar15 = fVar15 * fVar10;
      fVar14 = fVar13;
      if (fVar15 < fVar13) {
        fVar14 = fVar15;
      }
      fVar11 = fVar11 + fVar14;
      if (fVar13 < fVar15) {
        fVar13 = fVar15;
      }
      fVar12 = fVar12 + fVar13;
    }
    iVar6 = (int)((float)(int)fVar10 - (float)(int)(float)(int)fVar9);
    *param_4 = (int)fVar11;
    param_4[1] = (int)fVar9;
    param_4[2] = (int)((float)(int)fVar12 - (float)(int)(float)(int)fVar11);
    param_4[3] = iVar6;
    iVar2 = *(int *)(param_1 + 0x3c);
    iVar4 = *(int *)(param_1 + 0x40);
    if (iVar2 != 0 || iVar4 != 0) {
      iVar3 = *(int *)(param_1 + 0x28);
      iVar1 = -iVar4;
      if (-1 < *(int *)(param_1 + 0x2c)) {
        iVar1 = iVar4;
      }
      param_4[1] = iVar1 + (int)fVar9;
      param_4[3] = iVar6 - iVar1;
      iVar4 = -iVar2;
      if (-1 < iVar3) {
        iVar4 = iVar2;
      }
      if (*(char *)(param_1 + 0x38) == '\x01') {
        *param_4 = (int)fVar11 - iVar4 / 2;
      }
      param_4[2] = iVar4 + (int)((float)(int)fVar12 - (float)(int)(float)(int)fVar11);
    }
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  FUN_109713cfc(&puStack_68);
  return uVar7;
}



/* Entry: 109713108; end: 1097131d3;  */

undefined8
FUN_109713108(undefined8 param_1,undefined4 *param_2,undefined8 param_3,uint param_4,
             undefined4 *param_5,undefined4 *param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *puStack_48;
  
  puStack_48 = param_2 + 2;
  _pthread_mutex_lock();
  lVar4 = *(long *)(param_2 + 0x12);
  lVar2 = lVar4;
  FUN_109752c30(lVar4,param_3,*param_2);
  if ((((int)lVar2 == 0) && (lVar2 = *(long *)(lVar4 + 0x98), *(int *)(lVar2 + 0x90) == 0x6f75746c))
     && (param_4 < *(ushort *)(lVar2 + 0xca))) {
    puVar1 = (undefined8 *)(*(long *)(lVar2 + 0xd0) + (ulong)param_4 * 0x10);
    uVar3 = puVar1[1];
    *param_5 = (int)*puVar1;
    *param_6 = (int)uVar3;
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  FUN_109713cfc(&puStack_48);
  return uVar3;
}



/* Entry: 1097131d4; end: 109713253;  */

bool FUN_1097131d4(undefined8 param_1,long param_2,undefined8 param_3,char *param_4,
                  undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  long lStack_38;
  
  lStack_38 = param_2 + 8;
  _pthread_mutex_lock();
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  FUN_109755cd4(uVar2,param_3,param_4,param_5);
  bVar1 = (int)uVar2 == 0;
  if (((int)param_5 != 0) && ((int)uVar2 == 0)) {
    bVar1 = *param_4 != '\0';
  }
  FUN_109713cfc(&lStack_38);
  return bVar1;
}



/* Entry: 109713254; end: 10971337f;  */

uint ** FUN_109713254(undefined8 param_1,long param_2,uint *param_3,uint *param_4,int *param_5)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  int *piVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  uint **ppuVar13;
  long lVar14;
  undefined8 uVar15;
  float fStack_198;
  undefined1 uStack_194;
  uint *puStack_190;
  int *piStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  code *pcStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  uint *puStack_118;
  long lStack_d0;
  uint auStack_c8 [32];
  long lStack_48;
  
  plVar12 = &lStack_d0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_d0 = param_2 + 8;
  puVar6 = param_3;
  puVar7 = param_4;
  piVar8 = param_5;
  _pthread_mutex_lock();
  uVar15 = *(undefined8 *)(param_2 + 0x48);
  uVar9 = (uint)param_4;
  if ((int)uVar9 < 0) {
    uVar4 = uVar15;
    puVar5 = param_3;
    func_0x000109755c34();
    iVar3 = (int)uVar4;
  }
  else {
    if (0x7e < uVar9) {
      uVar9 = 0x7f;
    }
    param_4 = (uint *)(ulong)uVar9;
    puVar6 = param_4;
    _strncpy(auStack_c8,param_3,param_4);
    *(undefined1 *)((long)auStack_c8 + (long)param_4) = 0;
    puVar5 = auStack_c8;
    uVar4 = uVar15;
    func_0x000109755c34();
    iVar3 = (int)uVar4;
  }
  *param_5 = iVar3;
  if (iVar3 == 0) {
    puVar6 = auStack_c8;
    puVar7 = (uint *)0x80;
    FUN_109755cd4(uVar15,0,puVar6);
    if (((int)param_4 < 0) && ((int)uVar15 == 0)) {
      iVar3 = (int)auStack_c8;
      _strcmp();
      puVar5 = param_3;
    }
    else {
      puVar6 = (uint *)(long)(int)param_4;
      puVar5 = auStack_c8;
      _strncmp(puVar5,param_3,puVar6);
      iVar3 = (int)puVar5;
      puVar5 = param_3;
    }
    if (iVar3 != 0) {
      ppuVar13 = (uint **)(ulong)(*param_5 != 0);
      goto LAB_109713340;
    }
  }
  ppuVar13 = (uint **)0x1;
LAB_109713340:
  FUN_109713cfc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar13;
  }
  ___stack_chk_fail();
  puStack_118 = puVar5 + 2;
  _pthread_mutex_lock();
  lVar14 = *(long *)(puVar5 + 0x12);
  lVar10 = lVar14;
  FUN_109752c30(lVar14,puVar6,*puVar5 | 8);
  if (((int)lVar10 == 0) &&
     (lVar10 = *(long *)(lVar14 + 0x98), *(int *)(lVar10 + 0x90) == 0x6f75746c)) {
    puStack_148 = (undefined *)0x109713e08;
    pcStack_150 = FUN_109713d2c;
    pcStack_138 = FUN_109713ff4;
    pcStack_140 = FUN_109713edc;
    uStack_128 = 0;
    uStack_130 = 0;
    fStack_198 = *(float *)((long)plVar12 + 0x48);
    uStack_194 = fStack_198 == 0.0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    puStack_190 = puVar7;
    piStack_188 = piVar8;
    if (*(int *)((long)plVar12 + 0x3c) != 0 || *(int *)((long)plVar12 + 0x40) != 0) {
      FUN_109756e38(lVar10 + 200,(long)*(int *)((long)plVar12 + 0x3c),
                    (long)*(int *)((long)plVar12 + 0x40));
      if (*(char *)((long)plVar12 + 0x38) == '\x01') {
        iVar3 = -(*(int *)((long)plVar12 + 0x3c) / 2);
      }
      else if (*(int *)((long)plVar12 + 0x28) < 0) {
        iVar3 = -*(int *)((long)plVar12 + 0x3c);
      }
      else {
        iVar3 = 0;
      }
      if (*(int *)((long)plVar12 + 0x2c) < 0) {
        iVar11 = -*(int *)((long)plVar12 + 0x40);
      }
      else {
        iVar11 = 0;
      }
      lVar10 = *(long *)(lVar14 + 0x98);
      if (iVar3 != 0 || iVar11 != 0) {
        plVar12 = *(long **)(lVar10 + 0xd0);
        plVar1 = plVar12 + (ulong)*(ushort *)
                                   (*(long *)(lVar10 + 0xe0) + (ulong)*(ushort *)(lVar10 + 200) * 2
                                   + -2) * 2;
        do {
          *plVar12 = *plVar12 + (long)iVar3;
          plVar12[1] = plVar12[1] + (long)iVar11;
          bVar2 = plVar12 != plVar1;
          plVar12 = plVar12 + 2;
        } while (bVar2);
      }
    }
    func_0x00010975687c(lVar10 + 200,&pcStack_150,&fStack_198);
    FUN_109714130(&fStack_198);
  }
  ppuVar13 = &puStack_118;
  FUN_109713cfc(ppuVar13);
  return ppuVar13;
}



/* Entry: 109713380; end: 109713533;  */

void FUN_109713380(long param_1,uint *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  float fStack_c8;
  undefined1 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  uint *puStack_48;
  
  puStack_48 = param_2 + 2;
  _pthread_mutex_lock();
  lVar7 = *(long *)(param_2 + 0x12);
  lVar3 = lVar7;
  FUN_109752c30(lVar7,param_3,*param_2 | 8);
  if (((int)lVar3 == 0) && (lVar3 = *(long *)(lVar7 + 0x98), *(int *)(lVar3 + 0x90) == 0x6f75746c))
  {
    puStack_78 = (undefined *)0x109713e08;
    pcStack_80 = FUN_109713d2c;
    pcStack_68 = FUN_109713ff4;
    pcStack_70 = FUN_109713edc;
    uStack_58 = 0;
    uStack_60 = 0;
    fStack_c8 = *(float *)(param_1 + 0x48);
    uStack_c4 = fStack_c8 == 0.0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_c0 = param_4;
    uStack_b8 = param_5;
    if (*(int *)(param_1 + 0x3c) != 0 || *(int *)(param_1 + 0x40) != 0) {
      FUN_109756e38(lVar3 + 200,(long)*(int *)(param_1 + 0x3c),(long)*(int *)(param_1 + 0x40));
      if (*(char *)(param_1 + 0x38) == '\x01') {
        iVar4 = -(*(int *)(param_1 + 0x3c) / 2);
      }
      else if (*(int *)(param_1 + 0x28) < 0) {
        iVar4 = -*(int *)(param_1 + 0x3c);
      }
      else {
        iVar4 = 0;
      }
      if (*(int *)(param_1 + 0x2c) < 0) {
        iVar5 = -*(int *)(param_1 + 0x40);
      }
      else {
        iVar5 = 0;
      }
      lVar3 = *(long *)(lVar7 + 0x98);
      if (iVar4 != 0 || iVar5 != 0) {
        plVar6 = *(long **)(lVar3 + 0xd0);
        plVar1 = plVar6 + (ulong)*(ushort *)
                                  (*(long *)(lVar3 + 0xe0) + (ulong)*(ushort *)(lVar3 + 200) * 2 +
                                  -2) * 2;
        do {
          *plVar6 = *plVar6 + (long)iVar4;
          plVar6[1] = plVar6[1] + (long)iVar5;
          bVar2 = plVar6 != plVar1;
          plVar6 = plVar6 + 2;
        } while (bVar2);
      }
    }
    func_0x00010975687c(lVar3 + 200,&pcStack_80,&fStack_c8);
    FUN_109714130(&fStack_c8);
  }
  FUN_109713cfc(&puStack_48);
  return;
}



/* Entry: 109713534; end: 109713cb3;  */

void FUN_109713534(long param_1,uint *param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  uint param_6,ulong param_7)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  int *piVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  float fVar18;
  int iVar19;
  long lStack_258;
  uint *puStack_250;
  uint *puStack_248;
  long lStack_240;
  undefined4 *puStack_238;
  int *piStack_230;
  long lStack_228;
  uint uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined8 uStack_210;
  undefined1 uStack_208;
  undefined8 uStack_206;
  undefined8 uStack_1fe;
  undefined2 uStack_1f6;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined8 uStack_1e0;
  undefined1 uStack_1d8;
  undefined8 uStack_1d6;
  undefined8 uStack_1ce;
  undefined2 uStack_1c6;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  int aiStack_1b0 [2];
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_148;
  uint *puStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  uint uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined8 uStack_fe;
  undefined8 uStack_f6;
  undefined2 uStack_ee;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined8 uStack_ce;
  undefined8 uStack_c6;
  undefined2 uStack_be;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  uint uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  uint auStack_7c [3];
  
  puVar1 = param_2 + 2;
  puStack_250 = puVar1;
  _pthread_mutex_lock(puVar1);
  lVar9 = *(long *)(param_2 + 0x12);
  lVar10 = lVar9;
  FUN_109752c30(lVar9,param_3,*param_2 | 0x100000);
  if ((int)lVar10 != 0) goto LAB_109713bf8;
  lVar10 = *(long *)(lVar9 + 0x98);
  if (*(int *)(lVar10 + 0x90) != 0x62697473) {
    if (*(int *)(lVar10 + 0x90) != 0x6f75746c) goto LAB_109713bf8;
    uVar8 = (uint)param_3;
    puVar11 = *(undefined4 **)(param_2 + 0x12);
    auStack_7c[0] = uVar8;
    if (puVar11 != (undefined4 *)0x0) {
      if (((*(byte *)(puVar11 + 4) >> 3 & 1) == 0) ||
         (puVar4 = puVar11,
         (**(code **)(*(long *)(puVar11 + 0xdc) + 0x110))(puVar11,param_6 & 0xffff),
         (int)puVar4 != 0)) {
        lStack_258 = 0;
      }
      else {
        *(short *)(puVar11 + 0x110) = (short)param_6;
        lStack_258 = *(long *)(puVar11 + 0x112);
      }
      uStack_a8 = 0;
      uStack_a0 = 0;
      if ((((*(byte *)(puVar11 + 4) >> 3 & 1) != 0) &&
          (*(code **)(*(long *)(puVar11 + 0xdc) + 0x120) != (code *)0x0)) &&
         (puVar4 = puVar11,
         (**(code **)(*(long *)(puVar11 + 0xdc) + 0x120))(puVar11,param_3,1,&uStack_a8),
         (int)puVar4 != 0)) {
        lStack_120 = lStack_258;
        uStack_110 = 1;
        uStack_10c = 1;
        uStack_108 = 0;
        uStack_100 = 1;
        uStack_e8 = 0;
        uStack_f6 = 0;
        uStack_fe = 0;
        uStack_ee = 0;
        uStack_e0 = 1;
        uStack_dc = 1;
        uStack_d8 = 0;
        uStack_d0 = 1;
        uStack_b8 = 0;
        uStack_c6 = 0;
        uStack_ce = 0;
        uStack_be = 0;
        uStack_b0 = 0x80000000040;
        puVar4 = &uStack_110;
        puStack_140 = param_2;
        lStack_138 = param_1;
        lStack_130 = param_4;
        uStack_128 = param_5;
        uStack_118 = param_6;
        uStack_114 = (int)param_7;
        FUN_109714db8(puVar4,auStack_7c,uVar8 * -0x61c8864f);
        if ((((*(byte *)(puVar11 + 4) >> 3 & 1) == 0) ||
            (*(code **)(*(long *)(puVar11 + 0xdc) + 0x128) == (code *)0x0)) ||
           ((**(code **)(*(long *)(puVar11 + 0xdc) + 0x128))(puVar11,param_3,&lStack_180),
           puVar4 = puVar11, (int)puVar11 == 0)) {
          FUN_10974e9fc();
          FUN_109714f14(aiStack_1b0);
          lStack_228 = lStack_258;
          uStack_218 = 1;
          uStack_214 = 1;
          uStack_210 = 0;
          uStack_208 = 1;
          uStack_1f0 = 0;
          uStack_1fe = 0;
          uStack_206 = 0;
          uStack_1f6 = 0;
          uStack_1e8 = 1;
          uStack_1e4 = 1;
          uStack_1e0 = 0;
          uStack_1d8 = 1;
          uStack_1c0 = 0;
          uStack_1ce = 0;
          uStack_1d6 = 0;
          uStack_1c6 = 0;
          uStack_1b8 = 0x80000000040;
          puStack_248 = param_2;
          lStack_240 = param_1;
          puStack_238 = puVar4;
          piStack_230 = aiStack_1b0;
          uStack_220 = param_6;
          uStack_21c = (int)param_7;
          FUN_109714db8(&uStack_218,auStack_7c,uVar8 * -0x61c8864f);
          FUN_1097141dc(puStack_238,piStack_230,param_1);
          FUN_109714270(&puStack_248,uStack_a8,uStack_a0);
          if (*(long *)(puStack_238 + 0x20) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(puStack_238 + 0x20) + 8);
          }
          (**(code **)(puStack_238 + 6))(puStack_238,piStack_230,uVar6);
          if (uStack_190._4_4_ == 0) {
            bVar3 = false;
            uRam000000011382ab30 = 0;
            uRam000000011382ab38 = 0;
            uRam000000011382ab40 = 0;
            iVar13 = 0;
            iVar14 = 0;
            iVar17 = 0;
            iVar19 = 0;
          }
          else {
            piVar7 = (int *)(lStack_188 + (ulong)(uStack_190._4_4_ - 1) * 0x14);
            iVar13 = piVar7[1];
            iVar14 = piVar7[2];
            iVar17 = piVar7[3];
            iVar19 = piVar7[4];
            bVar3 = *piVar7 != 0;
          }
          if (*(long *)(lStack_130 + 0x80) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(lStack_130 + 0x80) + 0x20);
          }
          (**(code **)(lStack_130 + 0x30))(iVar13,iVar14,iVar17,iVar19,lStack_130,uStack_128,uVar6);
          FUN_10972c54c(&uStack_1e8);
          FUN_10972c54c(&uStack_218);
          if ((uint)uStack_190 != 0) {
            uStack_190 = (ulong)(uint)uStack_190;
            _free(lStack_188);
          }
          uStack_190 = 0;
          lStack_188 = 0;
          if ((uint)uStack_1a0 != 0) {
            uStack_1a0 = (ulong)(uint)uStack_1a0;
            _free(uStack_198);
          }
          uStack_1a0 = 0;
          uStack_198 = 0;
          if (aiStack_1b0[0] != 0) {
            aiStack_1b0[1] = 0;
            _free(uStack_1a8);
          }
        }
        else {
          fVar15 = *(float *)(param_1 + 0x48);
          fVar18 = fVar15 * (float)lStack_178;
          if (fVar15 * (float)lStack_168 < fVar18) {
            fVar18 = fVar15 * (float)lStack_168;
          }
          fVar16 = fVar15 * (float)lStack_148;
          if (fVar15 * (float)lStack_148 < fVar15 * (float)lStack_158) {
            fVar16 = fVar15 * (float)lStack_158;
          }
          if (*(long *)(lStack_130 + 0x80) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(lStack_130 + 0x80) + 0x20);
          }
          (**(code **)(lStack_130 + 0x30))
                    ((float)(int)(fVar18 + 0.5) + (float)lStack_180,(float)lStack_178,
                     (float)(int)(fVar16 + 0.5) + (float)lStack_160,lStack_130,uStack_128,uVar6);
          bVar3 = true;
        }
        FUN_1097141dc(lStack_130,uStack_128,param_1);
        if (bVar3) {
          FUN_109714270(&puStack_140,uStack_a8,uStack_a0);
        }
        if (*(long *)(lStack_130 + 0x80) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined8 *)(*(long *)(lStack_130 + 0x80) + 8);
        }
        (**(code **)(lStack_130 + 0x18))(lStack_130,uStack_128,uVar6);
        if (*(long *)(lStack_130 + 0x80) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined8 *)(*(long *)(lStack_130 + 0x80) + 0x28);
        }
        (**(code **)(lStack_130 + 0x38))(lStack_130,uStack_128,uVar6);
        FUN_10972c54c(&uStack_e0);
        FUN_10972c54c(&uStack_110);
        goto LAB_109713bf8;
      }
      uStack_88 = 0;
      if (((uVar8 < (uint)puVar11[8]) && ((*(byte *)(puVar11 + 4) >> 3 & 1) != 0)) &&
         ((*(code **)(*(long *)(puVar11 + 0xdc) + 0x118) != (code *)0x0 &&
          ((puVar4 = puVar11,
           (**(code **)(*(long *)(puVar11 + 0xdc) + 0x118))
                     (puVar11,param_3,&uStack_94,&uStack_98,auStack_90), lStack_258 != 0 &&
           ((int)puVar4 != 0)))))) {
        do {
          bVar3 = uStack_98 != 0xffff;
          uVar12 = param_7;
          if (bVar3) {
            uVar2 = *(uint *)(lStack_258 + (ulong)uStack_98 * 4);
            uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
            uVar12 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
          }
          _pthread_mutex_unlock(puVar1);
          if (*(long *)(param_4 + 0x80) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(param_4 + 0x80) + 0x18);
          }
          (**(code **)(param_4 + 0x28))(param_4,param_5,uStack_94,param_1,uVar6);
          _pthread_mutex_lock(puVar1);
          if (*(long *)(param_4 + 0x80) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(param_4 + 0x80) + 0x30);
          }
          (**(code **)(param_4 + 0x40))(param_4,param_5,!bVar3,uVar12,uVar6);
          if (*(long *)(param_4 + 0x80) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(param_4 + 0x80) + 0x28);
          }
          (**(code **)(param_4 + 0x38))(param_4,param_5,uVar6);
        } while ((((uVar8 < (uint)puVar11[8]) && ((*(byte *)(puVar11 + 4) >> 3 & 1) != 0)) &&
                 (*(code **)(*(long *)(puVar11 + 0xdc) + 0x118) != (code *)0x0)) &&
                (puVar4 = puVar11,
                (**(code **)(*(long *)(puVar11 + 0xdc) + 0x118))
                          (puVar11,param_3,&uStack_94,&uStack_98,auStack_90), (int)puVar4 != 0));
        goto LAB_109713bf8;
      }
    }
    _pthread_mutex_unlock(puVar1);
    if (*(long *)(param_4 + 0x80) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(*(long *)(param_4 + 0x80) + 0x18);
    }
    (**(code **)(param_4 + 0x28))(param_4,param_5,param_3,param_1,uVar6);
    _pthread_mutex_lock(puVar1);
    if (*(long *)(param_4 + 0x80) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(*(long *)(param_4 + 0x80) + 0x30);
    }
    (**(code **)(param_4 + 0x40))(param_4,param_5,1,param_7,uVar6);
    if (*(long *)(param_4 + 0x80) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(*(long *)(param_4 + 0x80) + 0x28);
    }
    (**(code **)(param_4 + 0x38))(param_4,param_5,uVar6);
    goto LAB_109713bf8;
  }
  if ((*(char *)(lVar10 + 0xb2) != '\a') || (*(int *)(lVar10 + 0xa0) != *(int *)(lVar10 + 0x9c) * 4)
     ) goto LAB_109713bf8;
  _pthread_mutex_unlock(puVar1);
  iVar14 = *(int *)(lVar10 + 0x98) * *(int *)(lVar10 + 0xa0);
  if (iVar14 == 0) {
LAB_1097137ac:
    puVar5 = &UNK_10dfe4888;
  }
  else {
    puVar5 = *(undefined **)(lVar10 + 0xa8);
    FUN_1096f58ec(puVar5,iVar14,0,0,0);
    if (puVar5 == (undefined *)0x0) goto LAB_1097137ac;
  }
  puStack_140 = (uint *)0x0;
  lStack_138 = 0;
  lVar9 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
  if (lVar9 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(lVar9 + 0x68);
  }
  lVar9 = param_1;
  (**(code **)(*(long *)(param_1 + 0x90) + 0x88))
            (param_1,*(undefined8 *)(param_1 + 0x98),param_3,&puStack_140,uVar6);
  if ((int)lVar9 != 0) {
    if (*(long *)(param_4 + 0x80) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(*(long *)(param_4 + 0x80) + 0x38);
    }
    (**(code **)(param_4 + 0x48))
              (*(undefined4 *)(param_1 + 0x48),param_4,param_5,puVar5,*(undefined4 *)(lVar10 + 0x9c)
               ,*(undefined4 *)(lVar10 + 0x98),0x42475241,&puStack_140,uVar6);
  }
  FUN_1096f5a5c(puVar5);
  _pthread_mutex_lock(puVar1);
LAB_109713bf8:
  FUN_109713cfc(&puStack_250);
  return;
}



/* Entry: 109713cb4; end: 109713cfb;  */

/* WARNING: Removing unreachable block (ram,0x000109713cdc) */

void FUN_109713cb4(void)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  do {
    piVar4 = piRam000000011382adb8;
    if (piRam000000011382adb8 == (int *)0x0) {
      return;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x11382adb8,0x10);
    if (bVar3) {
      piRam000000011382adb8 = (int *)0x0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (piVar4 == (int *)0x1132e0078) {
    return;
  }
  if ((piVar4 != (int *)0x0) && (*piVar4 != 0)) {
    do {
      iVar1 = *piVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar3) {
        *piVar4 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      *piVar4 = -0xdead;
      lVar7 = *(long *)(piVar4 + 2);
      if (lVar7 != 0) {
        FUN_109711500(lVar7 + 0x40,lVar7);
        _pthread_mutex_destroy(lVar7);
        _free(lVar7);
        piVar4[2] = 0;
        piVar4[3] = 0;
      }
      puVar5 = *(undefined8 **)(piVar4 + 6);
      if (puVar5 != (undefined8 *)0x0) {
        if ((code *)*puVar5 != (code *)0x0) {
          if (*(undefined8 **)(piVar4 + 4) == (undefined8 *)0x0) {
            uVar6 = 0;
          }
          else {
            uVar6 = **(undefined8 **)(piVar4 + 4);
          }
          (*(code *)*puVar5)(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 6);
        }
        if ((code *)puVar5[1] != (code *)0x0) {
          if (*(long *)(piVar4 + 4) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 4) + 8);
          }
          (*(code *)puVar5[1])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 6);
        }
        if ((code *)puVar5[2] != (code *)0x0) {
          if (*(long *)(piVar4 + 4) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 4) + 0x10);
          }
          (*(code *)puVar5[2])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 6);
        }
        if ((code *)puVar5[3] != (code *)0x0) {
          if (*(long *)(piVar4 + 4) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 4) + 0x18);
          }
          (*(code *)puVar5[3])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 6);
        }
        if ((code *)puVar5[4] != (code *)0x0) {
          if (*(long *)(piVar4 + 4) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 4) + 0x20);
          }
          (*(code *)puVar5[4])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 6);
        }
        if ((code *)puVar5[5] != (code *)0x0) {
          if (*(long *)(piVar4 + 4) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 4) + 0x28);
          }
          (*(code *)puVar5[5])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 6);
        }
        if ((code *)puVar5[6] != (code *)0x0) {
          if (*(long *)(piVar4 + 4) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 4) + 0x30);
          }
          (*(code *)puVar5[6])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 6);
        }
        if ((code *)puVar5[7] != (code *)0x0) {
          if (*(long *)(piVar4 + 4) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 4) + 0x38);
          }
          (*(code *)puVar5[7])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 6);
        }
        if ((code *)puVar5[8] != (code *)0x0) {
          if (*(long *)(piVar4 + 4) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 4) + 0x40);
          }
          (*(code *)puVar5[8])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 6);
        }
        if ((code *)puVar5[9] != (code *)0x0) {
          if (*(long *)(piVar4 + 4) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 4) + 0x48);
          }
          (*(code *)puVar5[9])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 6);
        }
        if ((code *)puVar5[10] != (code *)0x0) {
          if (*(long *)(piVar4 + 4) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 4) + 0x50);
          }
          (*(code *)puVar5[10])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 6);
        }
        if ((code *)puVar5[0xb] != (code *)0x0) {
          if (*(long *)(piVar4 + 4) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 4) + 0x58);
          }
          (*(code *)puVar5[0xb])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 6);
        }
        if ((code *)puVar5[0xc] != (code *)0x0) {
          if (*(long *)(piVar4 + 4) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 4) + 0x60);
          }
          (*(code *)puVar5[0xc])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 6);
        }
        if ((code *)puVar5[0xd] != (code *)0x0) {
          if (*(long *)(piVar4 + 4) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 4) + 0x68);
          }
          (*(code *)puVar5[0xd])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 6);
        }
        if ((code *)puVar5[0xe] != (code *)0x0) {
          if (*(long *)(piVar4 + 4) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 4) + 0x70);
          }
          (*(code *)puVar5[0xe])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 6);
        }
        if ((code *)puVar5[0xf] != (code *)0x0) {
          if (*(long *)(piVar4 + 4) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 4) + 0x78);
          }
          (*(code *)puVar5[0xf])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 6);
        }
        if ((code *)puVar5[0x10] != (code *)0x0) {
          if (*(long *)(piVar4 + 4) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 4) + 0x80);
          }
          (*(code *)puVar5[0x10])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 6);
        }
        if ((code *)puVar5[0x11] != (code *)0x0) {
          if (*(long *)(piVar4 + 4) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 4) + 0x88);
          }
          (*(code *)puVar5[0x11])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 6);
        }
        if ((code *)puVar5[0x12] != (code *)0x0) {
          if (*(long *)(piVar4 + 4) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 4) + 0x90);
          }
          (*(code *)puVar5[0x12])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 6);
        }
      }
      _free(puVar5);
      _free(*(undefined8 *)(piVar4 + 4));
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(piVar4);
      return;
    }
  }
  return;
}



/* Entry: 109713cfc; end: 109713d2b;  */

long * FUN_109713cfc(long *param_1)

{
  if (*param_1 != 0) {
    _pthread_mutex_unlock();
  }
  return param_1;
}



/* Entry: 109713d2c; end: 109713edb;  */

undefined8 FUN_109713d2c(long *param_1,float *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  
  lVar2 = param_1[1];
  fVar6 = (float)*param_1;
  lVar1 = *(long *)(param_2 + 2);
  uVar3 = *(undefined8 *)(param_2 + 4);
  if (*(char *)(param_2 + 1) == '\x01') {
    fVar4 = param_2[6];
  }
  else {
    fVar6 = fVar6 + *param_2 * (float)lVar2;
    fVar4 = param_2[6];
  }
  if (fVar4 != 0.0) {
    if ((param_2[7] != param_2[9]) || (param_2[8] != param_2[10])) {
      if (*(long *)(lVar1 + 0x38) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(*(long *)(lVar1 + 0x38) + 8);
      }
      (**(code **)(lVar1 + 0x18))(lVar1,uVar3,param_2 + 6,uVar5);
    }
    if (*(long *)(lVar1 + 0x38) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(*(long *)(lVar1 + 0x38) + 0x20);
    }
    (**(code **)(lVar1 + 0x30))(lVar1,uVar3,param_2 + 6,uVar5);
    param_2[8] = 0.0;
    param_2[6] = 0.0;
    param_2[7] = 0.0;
  }
  param_2[9] = fVar6;
  param_2[10] = (float)lVar2;
  return 0;
}



/* Entry: 109713edc; end: 109713ff3;  */

undefined8 FUN_109713edc(long *param_1,long *param_2,float *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar2 = param_1[1];
  fVar9 = (float)*param_1;
  fVar8 = (float)*param_2;
  fVar7 = (float)param_2[1];
  lVar1 = *(long *)(param_3 + 2);
  uVar3 = *(undefined8 *)(param_3 + 4);
  if (*(char *)(param_3 + 1) == '\x01') {
    if (param_3[6] == 0.0) {
      FUN_1097114b0(lVar1,uVar3,param_3 + 6);
    }
    pcVar5 = *(code **)(lVar1 + 0x20);
    if (*(long *)(lVar1 + 0x38) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(*(long *)(lVar1 + 0x38) + 0x10);
    }
  }
  else {
    fVar6 = *param_3;
    if (param_3[6] == 0.0) {
      FUN_1097114b0(lVar1,uVar3,param_3 + 6);
    }
    fVar9 = fVar9 + fVar6 * (float)lVar2;
    fVar8 = fVar8 + fVar6 * fVar7;
    pcVar5 = *(code **)(lVar1 + 0x20);
    if (*(long *)(lVar1 + 0x38) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(*(long *)(lVar1 + 0x38) + 0x10);
    }
  }
  (*pcVar5)(fVar9,(float)lVar2,fVar8,fVar7,lVar1,uVar3,param_3 + 6,uVar4);
  param_3[9] = fVar8;
  param_3[10] = fVar7;
  return 0;
}



/* Entry: 109713ff4; end: 10971412f;  */

undefined8 FUN_109713ff4(long *param_1,long *param_2,long *param_3,float *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar2 = param_1[1];
  fVar10 = (float)*param_1;
  lVar3 = param_2[1];
  fVar11 = (float)*param_2;
  fVar9 = (float)*param_3;
  fVar8 = (float)param_3[1];
  lVar1 = *(long *)(param_4 + 2);
  uVar4 = *(undefined8 *)(param_4 + 4);
  if (*(char *)(param_4 + 1) == '\x01') {
    if (param_4[6] == 0.0) {
      FUN_1097114b0(lVar1,uVar4,param_4 + 6);
    }
    pcVar6 = *(code **)(lVar1 + 0x28);
    if (*(long *)(lVar1 + 0x38) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(*(long *)(lVar1 + 0x38) + 0x18);
    }
  }
  else {
    fVar7 = *param_4;
    if (param_4[6] == 0.0) {
      FUN_1097114b0(lVar1,uVar4,param_4 + 6);
    }
    fVar10 = fVar10 + fVar7 * (float)lVar2;
    fVar11 = fVar11 + fVar7 * (float)lVar3;
    pcVar6 = *(code **)(lVar1 + 0x28);
    fVar9 = fVar9 + fVar7 * fVar8;
    if (*(long *)(lVar1 + 0x38) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(*(long *)(lVar1 + 0x38) + 0x18);
    }
  }
  (*pcVar6)(fVar10,(float)lVar2,fVar11,(float)lVar3,fVar9,fVar8,lVar1,uVar4,param_4 + 6,uVar5);
  param_4[9] = fVar9;
  param_4[10] = fVar8;
  return 0;
}



/* Entry: 109714130; end: 1097141db;  */

long FUN_109714130(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = (int *)(param_1 + 0x18);
  if (*piVar4 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    if ((*(float *)(param_1 + 0x1c) != *(float *)(param_1 + 0x24)) ||
       (*(float *)(param_1 + 0x20) != *(float *)(param_1 + 0x28))) {
      if (*(long *)(lVar1 + 0x38) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(*(long *)(lVar1 + 0x38) + 8);
      }
      (**(code **)(lVar1 + 0x18))(lVar1,uVar2,piVar4,uVar3);
    }
    if (*(long *)(lVar1 + 0x38) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(*(long *)(lVar1 + 0x38) + 0x20);
    }
    (**(code **)(lVar1 + 0x30))(lVar1,uVar2,piVar4,uVar3);
  }
  piVar4[0] = 0;
  piVar4[1] = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return param_1;
}



/* Entry: 1097141dc; end: 10971426f;  */

void FUN_1097141dc(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  float fVar4;
  
  uVar3 = *(ulong *)(param_3 + 0x20);
  uVar1 = (ulong)*(uint *)(uVar3 + 0x14);
  if (*(uint *)(uVar3 + 0x14) == 0) {
    func_0x0001097109c0(uVar3);
    uVar1 = uVar3;
  }
  if (*(undefined8 **)(param_1 + 0x80) == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = **(undefined8 **)(param_1 + 0x80);
  }
  fVar4 = (float)(uVar1 & 0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x000109714260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            ((float)*(int *)(param_3 + 0x28) / fVar4,0,
             (*(float *)(param_3 + 0x48) * (float)*(int *)(param_3 + 0x2c)) / fVar4,
             (float)*(int *)(param_3 + 0x2c) / fVar4,0,0,param_1,param_2,uVar2);
  return;
}



/* Entry: 109714270; end: 109714d0f;  */

/* WARNING: Heritage AFTER dead removal. Example location: d2 : 0x00010971498c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_109714270(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  ushort uVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  code *pcVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 auStack_134 [4];
  ushort *puStack_130;
  code *pcStack_128;
  long *plStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  ushort uStack_c0;
  short sStack_be;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  if ((int)param_4[0x12] < 1) {
    return;
  }
  if (*(int *)((long)param_4 + 0x94) < 1) {
    return;
  }
  *(int *)(param_4 + 0x12) = (int)param_4[0x12] + -1;
  *(int *)((long)param_4 + 0x94) = *(int *)((long)param_4 + 0x94) + -1;
  lVar17 = *(long *)(*param_4 + 0x48);
  if ((((lVar17 == 0) || ((*(byte *)(lVar17 + 0x10) >> 3 & 1) == 0)) ||
      (pcVar14 = *(code **)(*(long *)(lVar17 + 0x370) + 0x140), pcVar14 == (code *)0x0)) ||
     (lVar9 = lVar17, (*pcVar14)(), uVar5 = uStack_c0, (int)lVar9 == 0)) goto LAB_109714ba4;
  plStack_120 = param_4;
  switch(uStack_c8) {
  case 1:
    puStack_130 = (ushort *)0x0;
    pcStack_128 = (code *)0x0;
    bVar3 = *(byte *)(lVar17 + 0x10);
    while ((((bVar3 >> 3 & 1) != 0 &&
            (pcVar14 = *(code **)(*(long *)(lVar17 + 0x370) + 0x130), pcVar14 != (code *)0x0)) &&
           (lVar9 = lVar17, (*pcVar14)(lVar17,&uStack_c0,&puStack_130), (int)lVar9 != 0))) {
      uVar18 = (ulong)puStack_130 & 0xffffffff;
      uStack_148 = CONCAT44(uStack_148._4_4_,(uint)puStack_130);
      iVar8 = (uint)puStack_130 * -0x61c8864f;
      if (param_4[0x11] == 0) {
code_r0x00010971436c:
        FUN_109714db8(param_4 + 0xc,&uStack_148,iVar8);
        lVar9 = param_4[2];
        if (*(long *)(lVar9 + 0x80) == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = *(undefined8 *)(*(long *)(lVar9 + 0x80) + 0x58);
        }
        (**(code **)(lVar9 + 0x68))(lVar9,param_4[3],uVar13);
        FUN_109714270(param_4,puStack_130,pcStack_128);
        lVar9 = param_4[2];
        if (*(long *)(lVar9 + 0x80) == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = *(undefined8 *)(*(long *)(lVar9 + 0x80) + 0x60);
        }
        (**(code **)(lVar9 + 0x70))(lVar9,param_4[3],3,uVar13);
        FUN_1096fc87c(param_4 + 0xc,uVar18);
      }
      else {
        plVar10 = param_4 + 0xc;
        FUN_109739e3c(plVar10,uVar18,iVar8);
        if (plVar10 == (long *)0x0) goto code_r0x00010971436c;
      }
      bVar3 = *(byte *)(lVar17 + 0x10);
    }
    break;
  case 2:
    if (uStack_c0 == 0xffff) {
      uVar2 = *(uint *)((long)param_4 + 0x2c);
code_r0x0001097148c8:
      uVar4 = (uVar2 & 0xff) * (int)sStack_be;
    }
    else {
      lVar17 = param_4[2];
      if (*(long *)(lVar17 + 0x80) == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = *(undefined8 *)(*(long *)(lVar17 + 0x80) + 0x68);
      }
      (**(code **)(lVar17 + 0x78))(lVar17,param_4[3],uStack_c0,&puStack_130,uVar13);
      if ((int)lVar17 != 0) {
        uVar2 = (uint)puStack_130;
        goto code_r0x0001097148c8;
      }
      pbVar1 = (byte *)(param_4[4] + (ulong)uStack_c0 * 4);
      uVar2 = (uint)*pbVar1 << 0x18 | (uint)pbVar1[1] << 0x10 | (uint)pbVar1[2] << 8;
      uVar4 = (int)sStack_be * (uint)pbVar1[3];
    }
    uVar2 = uVar2 & 0xffffff00 | uVar4 >> 0xe & 0xff;
    puStack_130 = (ushort *)CONCAT44(puStack_130._4_4_,uVar2);
    lVar17 = param_4[2];
    if (*(long *)(lVar17 + 0x80) == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(undefined8 *)(*(long *)(lVar17 + 0x80) + 0x30);
    }
    (**(code **)(lVar17 + 0x40))(lVar17,param_4[3],uVar5 == 0xffff,uVar2,uVar13);
    break;
  case 4:
    lVar17 = param_4[2];
    lVar9 = param_4[3];
    fVar20 = (float)lStack_a0 / 65536.0;
    fVar21 = (float)lStack_98 / 65536.0;
    fVar22 = (float)lStack_88 / 65536.0;
    fVar23 = (float)lStack_80 / 65536.0;
    fVar19 = (float)lStack_78 / 65536.0;
    pcVar14 = *(code **)(lVar17 + 0x50);
    if (*(long *)(lVar17 + 0x80) == 0) {
code_r0x000109714770:
      uVar13 = 0;
    }
    else {
      uVar13 = *(undefined8 *)(*(long *)(lVar17 + 0x80) + 0x40);
    }
    goto code_r0x000109714774;
  case 6:
    lVar17 = param_4[2];
    lVar9 = param_4[3];
    fVar20 = (float)lStack_a0 / 65536.0;
    fVar21 = (float)lStack_98 / 65536.0;
    fVar22 = (float)lStack_88 / 65536.0;
    fVar23 = (float)lStack_80 / 65536.0;
    fVar19 = (float)lStack_78 / 65536.0;
    pcVar14 = *(code **)(lVar17 + 0x58);
    if (*(long *)(lVar17 + 0x80) == 0) goto code_r0x000109714770;
    uVar13 = *(undefined8 *)(*(long *)(lVar17 + 0x80) + 0x48);
code_r0x000109714774:
    puStack_130 = &uStack_c0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    pcStack_118 = FUN_109715390;
    pcStack_128 = FUN_1097151c8;
    (*pcVar14)(fVar20,fVar21,param_3,fVar22,fVar23,fVar19,lVar17,lVar9,&puStack_130,uVar13);
    break;
  case 8:
    puStack_130 = &uStack_c0;
    pcStack_128 = FUN_1097151c8;
    pcStack_118 = FUN_109715390;
    uStack_d0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lVar17 = param_4[2];
    if (*(long *)(lVar17 + 0x80) == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(undefined8 *)(*(long *)(lVar17 + 0x80) + 0x50);
    }
    (**(code **)(lVar17 + 0x60))
              ((float)lStack_a0 / 65536.0,(float)lStack_98 / 65536.0,param_3,
               ((float)lStack_88 / 65536.0 + 1.0) * 3.1415927,lVar17,param_4[3],&puStack_130,uVar13)
    ;
    break;
  case 10:
    FUN_1097153a8(param_4[2],param_4[3],param_4[1]);
    _pthread_mutex_unlock(*param_4 + 8);
    lVar17 = param_4[2];
    if (*(long *)(lVar17 + 0x80) == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(undefined8 *)(*(long *)(lVar17 + 0x80) + 0x18);
    }
    (**(code **)(lVar17 + 0x28))(lVar17,param_4[3],iStack_b0,param_4[1],uVar13);
    _pthread_mutex_lock(*param_4 + 8);
    FUN_1097141dc(param_4[2],param_4[3],param_4[1]);
    FUN_109714270(param_4,CONCAT44(uStack_bc,CONCAT22(sStack_be,uStack_c0)),uStack_b8);
    lVar17 = param_4[2];
    if (*(long *)(lVar17 + 0x80) == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(undefined8 *)(*(long *)(lVar17 + 0x80) + 8);
    }
    (**(code **)(lVar17 + 0x18))(lVar17,param_4[3],uVar13);
    lVar17 = param_4[2];
    if (*(long *)(lVar17 + 0x80) == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(undefined8 *)(*(long *)(lVar17 + 0x80) + 0x28);
    }
    (**(code **)(lVar17 + 0x38))(lVar17,param_4[3],uVar13);
    goto code_r0x000109714b84;
  case 0xb:
    iVar8 = CONCAT22(sStack_be,uStack_c0);
    if (param_4[0xb] != 0) {
      plVar10 = param_4 + 6;
      FUN_109739e3c(plVar10,iVar8,iVar8 * -0x61c8864f);
      if (plVar10 != (long *)0x0) break;
    }
    FUN_109714db8(param_4 + 6,auStack_134,iVar8 * -0x61c8864f);
    FUN_1097153a8(param_4[2],param_4[3],param_4[1]);
    _pthread_mutex_unlock(*param_4 + 8);
    lVar9 = param_4[2];
    if (*(long *)(lVar9 + 0x80) == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(undefined8 *)(*(long *)(lVar9 + 0x80) + 0x18);
    }
    (**(code **)(lVar9 + 0x20))(lVar9,param_4[3],iVar8,param_4[1],uVar13);
    _pthread_mutex_lock(*param_4 + 8);
    lVar11 = param_4[2];
    lVar12 = param_4[3];
    pcVar14 = *(code **)(lVar11 + 0x18);
    lVar16 = *(long *)(lVar11 + 0x80);
    if ((int)lVar9 == 0) {
      if (lVar16 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = *(undefined8 *)(lVar16 + 8);
      }
      (*pcVar14)(lVar11,lVar12,uVar13);
      uStack_148 = 0;
      uStack_140 = 0;
      if ((((*(byte *)(lVar17 + 0x10) >> 3 & 1) == 0) ||
          (pcVar14 = *(code **)(*(long *)(lVar17 + 0x370) + 0x120), pcVar14 == (code *)0x0)) ||
         (lVar9 = lVar17, (*pcVar14)(lVar17,iVar8,1,&uStack_148), (int)lVar9 == 0)) break;
      if ((((*(byte *)(lVar17 + 0x10) >> 3 & 1) != 0) &&
          (pcVar14 = *(code **)(*(long *)(lVar17 + 0x370) + 0x128), pcVar14 != (code *)0x0)) &&
         ((*pcVar14)(lVar17,CONCAT22(sStack_be,uStack_c0),&puStack_130), (int)lVar17 != 0)) {
        lVar17 = param_4[1];
        uVar15 = *(ulong *)(lVar17 + 0x20);
        uVar18 = (ulong)*(uint *)(uVar15 + 0x14);
        if (*(uint *)(uVar15 + 0x14) == 0) {
          func_0x0001097109c0(uVar15);
          lVar17 = param_4[1];
          uVar18 = uVar15;
        }
        fVar21 = (float)(uVar18 & 0xffffffff);
        fVar20 = fVar21;
        if (*(int *)(lVar17 + 0x28) != 0) {
          fVar20 = (float)*(int *)(lVar17 + 0x28);
        }
        fVar22 = fVar21;
        if (*(int *)(lVar17 + 0x2c) != 0) {
          fVar22 = (float)*(int *)(lVar17 + 0x2c);
        }
        lVar17 = param_4[2];
        if (*(long *)(lVar17 + 0x80) == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = *(undefined8 *)(*(long *)(lVar17 + 0x80) + 0x20);
        }
        (**(code **)(lVar17 + 0x30))
                  ((fVar21 / fVar20) * (float)(long)puStack_130,
                   (fVar21 / fVar22) * (float)(long)pcStack_128,param_3,
                   (fVar21 / fVar22) * (float)lStack_108,lVar17,param_4[3],uVar13);
        FUN_109714270(param_4,uStack_148,uStack_140);
        lVar11 = param_4[2];
        lVar12 = param_4[3];
        pcVar14 = *(code **)(lVar11 + 0x38);
        if (*(long *)(lVar11 + 0x80) == 0) goto code_r0x000109714ce8;
        uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0x80) + 0x28);
        goto code_r0x000109714cec;
      }
      FUN_109714270(param_4,uStack_148,uStack_140);
    }
    else {
      if (lVar16 == 0) {
code_r0x000109714ce8:
        uVar13 = 0;
      }
      else {
        uVar13 = *(undefined8 *)(lVar16 + 8);
      }
code_r0x000109714cec:
      (*pcVar14)(lVar11,lVar12,uVar13);
    }
    FUN_1096fc87c(param_4 + 6,iVar8);
    break;
  case 0xc:
    fVar22 = (float)CONCAT44(uStack_ac,iStack_b0) / 65536.0;
    fVar23 = (float)lStack_98 / 65536.0;
    fVar19 = (float)lStack_90 / 65536.0;
    lVar17 = param_4[2];
    lVar9 = param_4[3];
    fVar20 = (float)lStack_a0 / 65536.0;
    fVar21 = (float)lStack_88 / 65536.0;
    pcVar14 = *(code **)(lVar17 + 0x10);
    if (*(undefined8 **)(lVar17 + 0x80) == (undefined8 *)0x0) {
      uVar13 = 0;
    }
    else {
      uVar13 = **(undefined8 **)(lVar17 + 0x80);
    }
    goto code_r0x000109714b74;
  case 0xe:
    fVar20 = (float)CONCAT44(uStack_ac,iStack_b0) / 65536.0;
    fVar21 = (float)lStack_a8 / 65536.0;
    lVar17 = param_4[2];
    lVar9 = param_4[3];
    if ((fVar20 == 0.0) && (fVar21 == 0.0)) {
      FUN_109714270(param_4,CONCAT44(uStack_bc,CONCAT22(sStack_be,uStack_c0)),uStack_b8);
      break;
    }
    pcVar14 = *(code **)(lVar17 + 0x10);
    if (*(undefined8 **)(lVar17 + 0x80) == (undefined8 *)0x0) {
      uVar13 = 0;
    }
    else {
      uVar13 = **(undefined8 **)(lVar17 + 0x80);
    }
    fVar22 = 1.0;
    fVar23 = 0.0;
    fVar19 = 1.0;
code_r0x000109714b74:
    (*pcVar14)(fVar22,fVar23,param_3,fVar19,fVar20,fVar21,lVar17,lVar9,uVar13);
    FUN_109714270(param_4,CONCAT44(uStack_bc,CONCAT22(sStack_be,uStack_c0)),uStack_b8);
    goto code_r0x000109714b84;
  case 0x10:
    fVar20 = (float)lStack_a0 / 65536.0;
    fVar21 = (float)lStack_98 / 65536.0;
    fVar22 = (float)CONCAT44(uStack_ac,iStack_b0) / 65536.0;
    fVar23 = (float)lStack_a8 / 65536.0;
    lVar17 = param_4[2];
    lVar9 = param_4[3];
    bVar6 = fVar20 != 0.0;
    bVar7 = fVar21 != 0.0;
    if (bVar7 || bVar6) {
      if (*(undefined8 **)(lVar17 + 0x80) == (undefined8 *)0x0) {
        uVar13 = 0;
      }
      else {
        uVar13 = **(undefined8 **)(lVar17 + 0x80);
      }
      (**(code **)(lVar17 + 0x10))
                (0x3f800000,0,param_3,0x3f800000,fVar20,fVar21,lVar17,lVar9,uVar13);
      lVar17 = param_4[2];
      lVar9 = param_4[3];
    }
    if (fVar23 != 1.0 || fVar22 != 1.0) {
      if (*(undefined8 **)(lVar17 + 0x80) == (undefined8 *)0x0) {
        uVar13 = 0;
      }
      else {
        uVar13 = **(undefined8 **)(lVar17 + 0x80);
      }
      (**(code **)(lVar17 + 0x10))(fVar22,0,param_3,fVar23,0,0,lVar17,lVar9,uVar13);
      lVar17 = param_4[2];
      lVar9 = param_4[3];
    }
    if (bVar7 || bVar6) {
      if (*(undefined8 **)(lVar17 + 0x80) == (undefined8 *)0x0) {
        uVar13 = 0;
      }
      else {
        uVar13 = **(undefined8 **)(lVar17 + 0x80);
      }
      (**(code **)(lVar17 + 0x10))
                (0x3f800000,0,param_3,0x3f800000,-fVar20,-fVar21,lVar17,lVar9,uVar13);
      FUN_109714270(param_4,CONCAT44(uStack_bc,CONCAT22(sStack_be,uStack_c0)),uStack_b8);
      lVar17 = param_4[2];
      if (*(long *)(lVar17 + 0x80) == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = *(undefined8 *)(*(long *)(lVar17 + 0x80) + 8);
      }
      (**(code **)(lVar17 + 0x18))(lVar17,param_4[3],uVar13);
    }
    else {
      FUN_109714270(param_4,CONCAT44(uStack_bc,CONCAT22(sStack_be,uStack_c0)),uStack_b8);
    }
    if (fVar23 != 1.0 || fVar22 != 1.0) {
      lVar17 = param_4[2];
      if (*(long *)(lVar17 + 0x80) == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = *(undefined8 *)(*(long *)(lVar17 + 0x80) + 8);
      }
      (**(code **)(lVar17 + 0x18))(lVar17,param_4[3],uVar13);
    }
    if (!bVar7 && !bVar6) break;
    goto code_r0x000109714b84;
  case 0x18:
    fVar20 = (float)lStack_a8 / 65536.0;
    fVar21 = (float)lStack_a0 / 65536.0;
    lVar17 = param_4[2];
    lVar9 = param_4[3];
    bVar6 = fVar21 != 0.0 || fVar20 != 0.0;
    if (bVar6) {
      if (*(undefined8 **)(lVar17 + 0x80) == (undefined8 *)0x0) {
        uVar13 = 0;
      }
      else {
        uVar13 = **(undefined8 **)(lVar17 + 0x80);
      }
      (**(code **)(lVar17 + 0x10))
                (0x3f800000,0,param_3,0x3f800000,fVar20,fVar21,lVar17,lVar9,uVar13);
      lVar17 = param_4[2];
      lVar9 = param_4[3];
    }
    FUN_10971545c((float)CONCAT44(uStack_ac,iStack_b0) / 65536.0,lVar17,lVar9);
    iVar8 = (int)lVar17;
    goto code_r0x0001097149a0;
  case 0x1c:
    fVar20 = (float)lStack_a0 / 65536.0;
    fVar21 = (float)lStack_98 / 65536.0;
    lVar17 = param_4[2];
    lVar9 = param_4[3];
    bVar6 = fVar21 != 0.0 || fVar20 != 0.0;
    if (bVar6) {
      if (*(undefined8 **)(lVar17 + 0x80) == (undefined8 *)0x0) {
        uVar13 = 0;
      }
      else {
        uVar13 = **(undefined8 **)(lVar17 + 0x80);
      }
      (**(code **)(lVar17 + 0x10))
                (0x3f800000,0,param_3,0x3f800000,fVar20,fVar21,lVar17,lVar9,uVar13);
      lVar17 = param_4[2];
      lVar9 = param_4[3];
    }
    FUN_1097154e8((float)CONCAT44(uStack_ac,iStack_b0) / 65536.0,(float)lStack_a8 / 65536.0,lVar17,
                  lVar9);
    iVar8 = (int)lVar17;
code_r0x0001097149a0:
    if (bVar6) {
      lVar17 = param_4[2];
      if (*(undefined8 **)(lVar17 + 0x80) == (undefined8 *)0x0) {
        uVar13 = 0;
      }
      else {
        uVar13 = **(undefined8 **)(lVar17 + 0x80);
      }
      (**(code **)(lVar17 + 0x10))
                (0x3f800000,0,param_3,0x3f800000,-fVar20,-fVar21,lVar17,param_4[3],uVar13);
      FUN_109714270(param_4,CONCAT44(uStack_bc,CONCAT22(sStack_be,uStack_c0)),uStack_b8);
      lVar17 = param_4[2];
      if (*(long *)(lVar17 + 0x80) == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = *(undefined8 *)(*(long *)(lVar17 + 0x80) + 8);
      }
      (**(code **)(lVar17 + 0x18))(lVar17,param_4[3],uVar13);
    }
    else {
      FUN_109714270(param_4,CONCAT44(uStack_bc,CONCAT22(sStack_be,uStack_c0)),uStack_b8);
    }
    if (iVar8 != 0) {
      lVar17 = param_4[2];
      if (*(long *)(lVar17 + 0x80) == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = *(undefined8 *)(*(long *)(lVar17 + 0x80) + 8);
      }
      (**(code **)(lVar17 + 0x18))(lVar17,param_4[3],uVar13);
    }
    if (!bVar6) break;
code_r0x000109714b84:
    lVar17 = param_4[2];
    if (*(long *)(lVar17 + 0x80) == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(undefined8 *)(*(long *)(lVar17 + 0x80) + 8);
    }
    (**(code **)(lVar17 + 0x18))(lVar17,param_4[3],uVar13);
    break;
  case 0x20:
    FUN_109714270(param_4,lStack_a8,lStack_a0);
    lVar17 = param_4[2];
    if (*(long *)(lVar17 + 0x80) == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(undefined8 *)(*(long *)(lVar17 + 0x80) + 0x58);
    }
    (**(code **)(lVar17 + 0x68))(lVar17,param_4[3],uVar13);
    FUN_109714270(param_4,CONCAT44(uStack_bc,CONCAT22(sStack_be,uStack_c0)),uStack_b8);
    lVar17 = param_4[2];
    if (0x1a < iStack_b0 - 1U) {
      iStack_b0 = 0;
    }
    if (*(long *)(lVar17 + 0x80) == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(undefined8 *)(*(long *)(lVar17 + 0x80) + 0x60);
    }
    (**(code **)(lVar17 + 0x70))(lVar17,param_4[3],iStack_b0,uVar13);
  }
LAB_109714ba4:
  *(int *)(param_4 + 0x12) = (int)param_4[0x12] + 1;
  return;
}



/* Entry: 109714d10; end: 109714d47;  */

long FUN_109714d10(long param_1)

{
  FUN_10972c54c(param_1 + 0x60);
  FUN_10972c54c(param_1 + 0x30);
  return param_1;
}



/* Entry: 109714d48; end: 109714db7;  */

int * FUN_109714d48(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1 + 8;
  if (*piVar1 != 0) {
    param_1[9] = 0;
    _free(*(undefined8 *)(param_1 + 10));
  }
  piVar1[0] = 0;
  piVar1[1] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  piVar1 = param_1 + 4;
  if (*piVar1 != 0) {
    param_1[5] = 0;
    _free(*(undefined8 *)(param_1 + 6));
  }
  piVar1[0] = 0;
  piVar1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (*param_1 != 0) {
    param_1[1] = 0;
    _free(*(undefined8 *)(param_1 + 2));
  }
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}



/* Entry: 109714db8; end: 109714f13;  */

long FUN_109714db8(long param_1,int *param_2,uint param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  
  lVar13 = param_1;
  if ((*(char *)(param_1 + 0x10) != '\x01') ||
     ((*(uint *)(param_1 + 0x1c) <= *(uint *)(param_1 + 0x18) + (*(uint *)(param_1 + 0x18) >> 1) &&
      (FUN_109700f08(param_1,0), (int)lVar13 == 0)))) {
    return lVar13;
  }
  uVar9 = *(uint *)(param_1 + 0x20);
  uVar11 = 0;
  if (uVar9 != 0) {
    uVar11 = (param_3 & 0x3fffffff) / uVar9;
  }
  uVar9 = (param_3 & 0x3fffffff) - uVar11 * uVar9;
  lVar7 = *(long *)(param_1 + 0x28);
  piVar5 = (int *)(lVar7 + (ulong)uVar9 * 0xc);
  uVar11 = piVar5[1];
  if ((uVar11 >> 1 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    uVar10 = 0xffffffff;
    do {
      if (*piVar5 == *param_2) break;
      if ((uVar11 & 1) == 0 && uVar10 == 0xffffffff) {
        uVar10 = uVar9;
      }
      uVar6 = uVar6 + 1;
      uVar9 = *(uint *)(param_1 + 0x1c) & uVar6 + uVar9;
      piVar5 = (int *)(lVar7 + (ulong)uVar9 * 0xc);
      uVar11 = piVar5[1];
    } while ((uVar11 >> 1 & 1) != 0);
    if (uVar10 != 0xffffffff) {
      uVar9 = uVar10;
    }
    piVar5 = (int *)(lVar7 + (ulong)uVar9 * 0xc);
    if ((*(byte *)(piVar5 + 1) >> 1 & 1) != 0) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - (piVar5[1] & 1U);
    }
  }
  *piVar5 = *param_2;
  piVar5[1] = param_3 << 2 | 3;
  piVar5[2] = -1;
  iVar14 = (int)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20) + 1;
  *(ulong *)(param_1 + 0x14) = CONCAT44(iVar14,(int)*(undefined8 *)(param_1 + 0x14) + 1);
  if (uVar6 <= *(ushort *)(param_1 + 0x12)) {
    return lVar13;
  }
  if ((uint)(iVar14 * 8) <= *(uint *)(param_1 + 0x1c)) {
    return lVar13;
  }
  uVar9 = *(uint *)(param_1 + 0x1c) - 8;
  if (*(char *)(param_1 + 0x10) != '\x01') {
    return 0;
  }
  if ((uVar9 == 0) || (*(uint *)(param_1 + 0x1c) <= uVar9 + (uVar9 >> 1))) {
    uVar11 = *(uint *)(param_1 + 0x14);
    if (*(uint *)(param_1 + 0x14) <= uVar9) {
      uVar11 = uVar9;
    }
    iVar14 = uVar11 * 2 + 8;
    uVar9 = 0;
    if (iVar14 != 0) {
      uVar9 = 0x20 - (int)LZCOUNT(iVar14);
    }
    uVar12 = 0xcL << ((ulong)uVar9 & 0x3f);
    uVar1 = uVar12;
    _malloc();
    if (uVar1 == 0) {
      *(undefined1 *)(param_1 + 0x10) = 0;
      return 0;
    }
    uVar12 = uVar12 & 0xfffffffc;
    if (uVar12 != 0) {
      _bzero(uVar1,uVar12);
    }
    uVar11 = *(int *)(param_1 + 0x1c) + 1;
    lVar13 = *(long *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(int *)(param_1 + 0x1c) = ~(-1 << (ulong)(uVar9 & 0x1f));
    if (uVar9 < 0x20) {
      uVar3 = *(undefined4 *)(&UNK_10dfebaf8 + (ulong)uVar9 * 4);
    }
    else {
      uVar3 = 0x7fffffff;
    }
    *(undefined4 *)(param_1 + 0x20) = uVar3;
    *(short *)(param_1 + 0x12) = (short)(uVar9 << 1);
    *(ulong *)(param_1 + 0x28) = uVar1;
    if (1 < uVar11) {
      uVar12 = 0;
      if (uVar11 < 2) {
        uVar11 = 1;
      }
      do {
        piVar5 = (int *)(lVar13 + uVar12 * 0xc);
        uVar9 = piVar5[1];
        if ((((uVar9 & 1) != 0) && (*(char *)(param_1 + 0x10) == '\x01')) &&
           ((*(uint *)(param_1 + 0x18) + (*(uint *)(param_1 + 0x18) >> 1) <
             *(uint *)(param_1 + 0x1c) ||
            (lVar7 = param_1, FUN_109700f08(param_1,0), (int)lVar7 != 0)))) {
          uVar6 = *(uint *)(param_1 + 0x20);
          uVar10 = 0;
          if (uVar6 != 0) {
            uVar10 = (uVar9 >> 2) / uVar6;
          }
          uVar6 = (uVar9 >> 2) - uVar10 * uVar6;
          lVar7 = *(long *)(param_1 + 0x28);
          piVar4 = (int *)(lVar7 + (ulong)uVar6 * 0xc);
          uVar10 = piVar4[1];
          if ((uVar10 >> 1 & 1) == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = 0;
            uVar8 = 0xffffffff;
            do {
              if (*piVar4 == *piVar5) break;
              if ((uVar10 & 1) == 0 && uVar8 == 0xffffffff) {
                uVar8 = uVar6;
              }
              uVar2 = uVar2 + 1;
              uVar6 = *(uint *)(param_1 + 0x1c) & uVar2 + uVar6;
              piVar4 = (int *)(lVar7 + (ulong)uVar6 * 0xc);
              uVar10 = piVar4[1];
            } while ((uVar10 >> 1 & 1) != 0);
            if (uVar8 != 0xffffffff) {
              uVar6 = uVar8;
            }
            piVar4 = (int *)(lVar7 + (ulong)uVar6 * 0xc);
            if ((*(byte *)(piVar4 + 1) >> 1 & 1) != 0) {
              *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
              *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - (piVar4[1] & 1U);
            }
          }
          *piVar4 = *piVar5;
          iVar14 = piVar5[2];
          piVar4[1] = uVar9 | 3;
          piVar4[2] = iVar14;
          iVar14 = (int)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20) + 1;
          *(ulong *)(param_1 + 0x14) = CONCAT44(iVar14,(int)*(undefined8 *)(param_1 + 0x14) + 1);
          if ((*(ushort *)(param_1 + 0x12) < uVar2) &&
             (*(uint *)(param_1 + 0x1c) < (uint)(iVar14 * 8))) {
            FUN_109700f08(param_1,*(uint *)(param_1 + 0x1c) - 8);
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar11);
    }
    _free(lVar13);
  }
  return 1;
}



/* Entry: 109714f14; end: 1097150db;  */

undefined8 * FUN_109714f14(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  puVar2 = param_1;
  func_0x000109715040(param_1,1);
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = (undefined8 *)0x11382ab30;
    uRam000000011382ab30 = 0;
    uRam000000011382ab38 = 0;
  }
  else {
    uVar1 = *(uint *)((long)param_1 + 4);
    *(uint *)((long)param_1 + 4) = uVar1 + 1;
    puVar2 = (undefined8 *)(param_1[1] + (ulong)uVar1 * 0x18);
    puVar2[1] = 0x3f80000000000000;
    *puVar2 = 0x3f800000;
  }
  puVar2[2] = 0;
  uStack_34 = 0;
  uStack_28 = 0xbf800000bf800000;
  uStack_30 = 0;
  func_0x000109714fc8(param_1 + 2,&uStack_34);
  uStack_34 = 2;
  uStack_28 = 0xbf800000bf800000;
  uStack_30 = 0;
  func_0x000109714fc8(param_1 + 4,&uStack_34);
  return param_1;
}



/* Entry: 1097150dc; end: 109715103;  */

undefined8 FUN_1097150dc(undefined8 param_1,uint param_2)

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



/* Entry: 109715104; end: 10971519f;  */

undefined8 FUN_109715104(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *param_1;
  if ((int)uVar3 < 0) {
    return 0;
  }
  uVar4 = uVar3;
  if (param_2 <= uVar3) {
    return 1;
  }
  do {
    uVar4 = uVar4 + (uVar4 >> 1) + 8;
  } while (uVar4 < param_2);
  if (uVar4 < 0xccccccd) {
    lVar1 = *(long *)(param_1 + 2);
    FUN_1097151a0(lVar1,uVar4);
    if (lVar1 != 0) {
      *(long *)(param_1 + 2) = lVar1;
      uVar2 = 1;
      goto LAB_109715170;
    }
    uVar3 = *param_1;
    if (uVar4 <= uVar3) {
      return 1;
    }
  }
  uVar2 = 0;
  uVar4 = ~uVar3;
LAB_109715170:
  *param_1 = uVar4;
  return uVar2;
}



/* Entry: 1097151a0; end: 1097151c7;  */

undefined8 FUN_1097151a0(undefined8 param_1,uint param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__realloc_11034ca10)(param_1,(ulong)param_2 * 0x14);
    return param_1;
  }
  _free();
  return 0;
}



/* Entry: 1097151c8; end: 10971538f;  */

uint FUN_1097151c8(undefined8 param_1,long param_2,uint param_3,int *param_4,long param_5,
                  long *param_6)

{
  byte *pbVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_60;
  ushort uStack_58;
  short sStack_56;
  
  if (param_4 != (int *)0x0) {
    puVar7 = (uint *)(param_2 + 8);
    uStack_78 = *(undefined8 *)(param_2 + 0x10);
    uStack_80 = *(undefined8 *)puVar7;
    uStack_70 = *(undefined8 *)(param_2 + 0x18);
    if (*puVar7 <= param_3) {
      *param_4 = 0;
      return *puVar7;
    }
    do {
      do {
        if (param_3 <= *(uint *)(param_2 + 0xc)) {
          if (*param_4 != 0) {
            iVar9 = 0;
            puVar8 = (uint *)(param_5 + 8);
            goto LAB_109715278;
          }
          iVar9 = 0;
          goto LAB_10971535c;
        }
        lVar2 = *(long *)(*param_6 + 0x48);
      } while (((lVar2 == 0) || ((*(byte *)(lVar2 + 0x10) >> 3 & 1) == 0)) ||
              (pcVar6 = *(code **)(*(long *)(lVar2 + 0x370) + 0x138), pcVar6 == (code *)0x0));
      (*pcVar6)(lVar2,&lStack_60,puVar7);
    } while( true );
  }
  goto LAB_109715370;
LAB_109715278:
  do {
    lVar2 = *(long *)(*param_6 + 0x48);
    if ((((lVar2 == 0) || ((*(byte *)(lVar2 + 0x10) >> 3 & 1) == 0)) ||
        (pcVar6 = *(code **)(*(long *)(lVar2 + 0x370) + 0x138), pcVar6 == (code *)0x0)) ||
       ((*pcVar6)(lVar2,&lStack_60,puVar7), (int)lVar2 == 0)) break;
    puVar8[-2] = (uint)((float)lStack_60 / 65536.0);
    puVar8[-1] = (uint)(uStack_58 == 0xffff);
    if (uStack_58 == 0xffff) {
      uVar4 = *(uint *)((long)param_6 + 0x2c);
LAB_109715300:
      uVar5 = (uVar4 & 0xff) * (int)sStack_56;
    }
    else {
      lVar2 = param_6[2];
      if (*(long *)(lVar2 + 0x80) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x80) + 0x68);
      }
      (**(code **)(lVar2 + 0x78))(lVar2,param_6[3],uStack_58,&uStack_84,uVar3);
      uVar4 = uStack_84;
      if ((int)lVar2 != 0) goto LAB_109715300;
      pbVar1 = (byte *)(param_6[4] + (ulong)uStack_58 * 4);
      uVar4 = (uint)*pbVar1 << 0x18 | (uint)pbVar1[1] << 0x10 | (uint)pbVar1[2] << 8;
      uVar5 = (int)sStack_56 * (uint)pbVar1[3];
    }
    *puVar8 = uVar4 & 0xffffff00 | uVar5 >> 0xe & 0xff;
    iVar9 = iVar9 + 1;
    puVar8 = puVar8 + 3;
  } while (*param_4 != 0);
LAB_10971535c:
  *param_4 = iVar9;
  *(undefined8 *)(param_2 + 0x10) = uStack_78;
  *(undefined8 *)puVar7 = uStack_80;
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
LAB_109715370:
  return *(uint *)(param_2 + 8);
}



/* Entry: 109715390; end: 1097153a7;  */

uint FUN_109715390(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  if (uVar1 != 2) {
    uVar1 = (uint)(uVar1 == 1);
  }
  return uVar1;
}



/* Entry: 1097153a8; end: 10971545b;  */

void FUN_1097153a8(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar3 = *(ulong *)(param_3 + 0x20);
  uVar1 = (ulong)*(uint *)(uVar3 + 0x14);
  if (*(uint *)(uVar3 + 0x14) == 0) {
    func_0x0001097109c0(uVar3);
    uVar1 = uVar3;
  }
  if (*(undefined8 **)(param_1 + 0x80) == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = **(undefined8 **)(param_1 + 0x80);
  }
  fVar4 = (float)(uVar1 & 0xffffffff);
  fVar5 = fVar4;
  if (*(int *)(param_3 + 0x2c) != 0) {
    fVar5 = (float)*(int *)(param_3 + 0x2c);
  }
  fVar6 = fVar4;
  if (*(int *)(param_3 + 0x28) != 0) {
    fVar6 = (float)*(int *)(param_3 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010971544c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            (fVar4 / (float)(int)fVar6,0,-(*(float *)(param_3 + 0x48) * fVar4) / (float)(int)fVar6,
             fVar4 / (float)(int)fVar5,0,0,param_1,param_2,uVar2);
  return;
}



/* Entry: 10971545c; end: 1097154e7;  */

bool FUN_10971545c(float param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (param_1 != 0.0) {
    uVar2 = (ulong)(uint)(param_1 * 3.1415927);
    ___sincosf_stret(uVar2);
    if (*(undefined8 **)(param_3 + 0x80) == (undefined8 *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = **(undefined8 **)(param_3 + 0x80);
    }
    (**(code **)(param_3 + 0x10))(param_2,uVar2,-(float)uVar2,param_2,0,0,param_3,param_4,uVar1);
  }
  return param_1 != 0.0;
}



/* Entry: 1097154e8; end: 109715597;  */

bool FUN_1097154e8(float param_1,float param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  bVar1 = param_2 != 0.0 || param_1 != 0.0;
  if (bVar1) {
    param_1 = param_1 * -3.1415927;
    uVar3 = 0;
    _tanf(param_1);
    param_2 = param_2 * 3.1415927;
    uVar4 = 0;
    _tanf(param_2);
    if (*(undefined8 **)(param_3 + 0x80) == (undefined8 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = **(undefined8 **)(param_3 + 0x80);
    }
    (**(code **)(param_3 + 0x10))
              (0x3f800000,CONCAT44(uVar4,param_2),CONCAT44(uVar3,param_1),0x3f800000,0,0,param_3,
               param_4,uVar2);
  }
  return bVar1;
}



/* Entry: 109715598; end: 1097156c7;  */

undefined8 * FUN_109715598(undefined8 *param_1,undefined8 *param_2,ushort *param_3,ushort *param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  _bzero((long)param_1 + 0x14,0x100c);
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  param_1[0x205] = 0;
  param_1[0x204] = 0;
  *(undefined1 *)(param_1 + 0x209) = 0;
  *(undefined4 *)((long)param_1 + 0x104c) = 0;
  lVar4 = -0xf0;
  do {
    *(undefined8 *)((long)param_1 + lVar4 + 0x1148) = 0;
    *(undefined8 *)((long)param_1 + lVar4 + 0x1140) = 0;
    lVar4 = lVar4 + 0x18;
  } while (lVar4 != 0);
  param_1[0x22d] = 0;
  param_1[0x22c] = 0;
  uVar1 = *(uint *)(param_2 + 1);
  param_1[0x204] = *param_2;
  param_1[0x205] = (ulong)uVar1;
  param_1[0x206] = 0;
  *(undefined2 *)((long)param_1 + 0x1039) = 1;
  *(undefined4 *)((long)param_1 + 0x103c) = 0;
  param_1[0x208] = 0;
  param_1[0x22d] = 0;
  param_1[0x22c] = 0;
  param_1[0x229] = param_3;
  if (param_3 == (ushort *)0x0) {
    uVar3 = 0x6b;
  }
  else {
    uVar2 = *param_3 >> 8 | *param_3 << 8;
    uVar5 = 0x46b;
    if (0x846b < uVar2) {
      uVar5 = 0x8000;
    }
    uVar3 = 0x6b;
    if (0x4d7 < uVar2) {
      uVar3 = uVar5;
    }
  }
  *(undefined4 *)(param_1 + 0x228) = uVar3;
  param_1[0x22b] = param_4;
  if (param_4 == (ushort *)0x0) {
    uVar3 = 0x6b;
  }
  else {
    uVar2 = *param_4 >> 8 | *param_4 << 8;
    uVar5 = 0x46b;
    if (0x846b < uVar2) {
      uVar5 = 0x8000;
    }
    uVar3 = 0x6b;
    if (0x4d7 < uVar2) {
      uVar3 = uVar5;
    }
  }
  *(undefined4 *)(param_1 + 0x22a) = uVar3;
  return param_1;
}



/* Entry: 1097156c8; end: 1097158db;  */

ulong FUN_1097156c8(long param_1,uint param_2)

{
  ushort *puVar1;
  uint uVar2;
  char cVar3;
  ushort uVar4;
  ulong uVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if (0xff < param_2) {
    return 0;
  }
  pcVar7 = *(char **)(param_1 + 0x50);
  uVar6 = (uint)(byte)(&UNK_10dfe0c42)[param_2];
  if (pcVar7 == "") {
    if (*(int *)(param_1 + 0xf4) != 0 || 0xe4 < param_2) {
      uVar6 = 0;
    }
    return (ulong)uVar6;
  }
  uVar2 = *(uint *)(param_1 + 0x128);
  cVar3 = *pcVar7;
  if (cVar3 == '\x02') {
    if (uVar6 == 0) {
      return 0;
    }
    if (uVar2 < 2) {
      return 0;
    }
    uVar5 = 0;
    uVar8 = 1;
    do {
      puVar1 = (ushort *)(pcVar7 + uVar5 * 4 + 1);
      uVar9 = (uint)(*puVar1 >> 8) | (*puVar1 & 0xff00ff) << 8;
      if (uVar6 < uVar9) {
        uVar10 = (uint)CONCAT11((char)puVar1[1],*(char *)((long)puVar1 + 3));
      }
      else {
        uVar10 = (uint)CONCAT11((char)puVar1[1],*(char *)((long)puVar1 + 3));
        if (uVar6 <= uVar10 + uVar9) goto LAB_10971584c;
      }
      uVar8 = uVar8 + uVar10 + 1;
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (uVar8 < uVar2);
  }
  else if (cVar3 == '\x01') {
    if (uVar6 == 0) {
      return 0;
    }
    if (uVar2 < 2) {
      return 0;
    }
    uVar5 = 0;
    uVar8 = 1;
    do {
      uVar4 = *(ushort *)(pcVar7 + uVar5 * 3 + 1);
      uVar9 = (uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8;
      uVar10 = (uint)(byte)*(ushort *)((long)(pcVar7 + uVar5 * 3 + 1) + 2);
      if (uVar9 <= uVar6 && uVar6 <= uVar10 + ((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8)) {
LAB_10971584c:
        return (ulong)((uVar8 + uVar6) - uVar9);
      }
      uVar8 = uVar8 + uVar10 + 1;
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (uVar8 < uVar2);
  }
  else if (cVar3 == '\0') {
    if (uVar6 == 0) {
      return 0;
    }
    if (uVar2 < 2) {
      return 0;
    }
    uVar5 = 1;
    do {
      if (uVar6 == ((uint)(*(ushort *)(pcVar7 + 1) >> 8) | (*(ushort *)(pcVar7 + 1) & 0xff00ff) << 8
                   )) {
        return uVar5;
      }
      uVar5 = uVar5 + 1;
      pcVar7 = pcVar7 + 2;
    } while (uVar2 != uVar5);
  }
  return 0;
}



/* Entry: 1097158dc; end: 1097159e3;  */

void FUN_1097158dc(undefined8 *param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  if (*(int *)((long)param_1 + 0x14) == 0) {
    *(undefined1 *)(param_1 + 2) = 1;
    uRam000000011382ab30 = 0;
    iVar5 = 0;
  }
  else {
    uVar3 = *(int *)((long)param_1 + 0x14) - 1;
    *(uint *)((long)param_1 + 0x14) = uVar3;
    iVar5 = (int)(double)param_1[(ulong)uVar3 + 3];
  }
  uVar3 = *param_2 + iVar5;
  uVar6 = (ulong)uVar3;
  if (((((int)uVar3 < 0) || (*(ushort **)(param_2 + 2) == (ushort *)0x0)) ||
      (uVar2 = **(ushort **)(param_2 + 2), ((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8) <= uVar3))
     || (uVar1 = *(uint *)((long)param_1 + 0x104c), 9 < uVar1)) {
    *(int *)((long)param_1 + 0xc) = *(int *)(param_1 + 1) + 1;
    return;
  }
  uVar7 = *param_1;
  param_1[0x205] = param_1[1];
  param_1[0x204] = uVar7;
  *(uint *)((long)param_1 + 0x104c) = uVar1 + 1;
  param_1[(ulong)uVar1 * 3 + 0x20b] = param_1[1];
  param_1[(ulong)uVar1 * 3 + 0x20a] = uVar7;
  param_1[(ulong)uVar1 * 3 + 0x20c] = param_1[0x206];
  puVar4 = *(ushort **)(param_2 + 2);
  if (puVar4 != (ushort *)0x0) {
    if (uVar3 < ((uint)(*puVar4 >> 8) | (*puVar4 & 0xff00ff) << 8)) {
      FUN_1097007f0();
      uVar6 = uVar6 & 0xffffffff;
      goto LAB_10971598c;
    }
    puVar4 = (ushort *)0x0;
  }
  uVar6 = 0;
LAB_10971598c:
  param_1[0x204] = puVar4;
  param_1[0x205] = uVar6;
  *(undefined4 *)(param_1 + 0x206) = param_3;
  *(uint *)((long)param_1 + 0x1034) = uVar3;
  param_1[1] = param_1[0x205];
  *param_1 = param_1[0x204];
  return;
}



/* Entry: 1097159e4; end: 109715c07;  */

void FUN_1097159e4(int param_1,long *param_2)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  double *pdVar8;
  byte *pbVar9;
  double dVar10;
  
  if (param_1 - 0xf7U < 4) {
    uVar5 = *(uint *)((long)param_2 + 0xc);
    if (uVar5 < *(uint *)(param_2 + 1)) {
      pbVar9 = (byte *)(*param_2 + (ulong)uVar5);
    }
    else {
      uVar5 = *(uint *)(param_2 + 1) + 1;
      *(uint *)((long)param_2 + 0xc) = uVar5;
      pbVar9 = &UNK_10dfe4888;
    }
    bVar2 = *pbVar9;
    uVar1 = *(uint *)((long)param_2 + 0x14);
    if (uVar1 < 0x201) {
      *(uint *)((long)param_2 + 0x14) = uVar1 + 1;
      pdVar8 = (double *)(param_2 + (ulong)uVar1 + 3);
    }
    else {
      *(undefined1 *)(param_2 + 2) = 1;
      pdVar8 = (double *)0x11382ab30;
      uRam000000011382ab30 = 0;
    }
    dVar10 = (double)(param_1 * 0x100 + (uint)bVar2 + 0x96c & 0xffff);
  }
  else {
    if (3 < param_1 - 0xfbU) {
      if (param_1 != 0x1c) {
        if (param_1 - 0x20U < 0xd7) {
          uVar5 = *(uint *)((long)param_2 + 0x14);
          if (uVar5 < 0x201) {
            *(uint *)((long)param_2 + 0x14) = uVar5 + 1;
            pdVar8 = (double *)(param_2 + (ulong)uVar5 + 3);
          }
          else {
            *(undefined1 *)(param_2 + 2) = 1;
            pdVar8 = (double *)0x11382ab30;
            uRam000000011382ab30 = 0;
          }
          *pdVar8 = (double)(param_1 + -0x8b);
          return;
        }
        *(undefined4 *)((long)param_2 + 0x14) = 0;
        return;
      }
      uVar1 = *(uint *)(param_2 + 1);
      uVar5 = *(uint *)((long)param_2 + 0xc);
      if (uVar5 < uVar1) {
        puVar7 = (undefined *)(*param_2 + (ulong)uVar5);
      }
      else {
        uVar5 = uVar1 + 1;
        *(uint *)((long)param_2 + 0xc) = uVar5;
        puVar7 = &UNK_10dfe4888;
      }
      uVar3 = *puVar7;
      if (uVar5 + 1 < uVar1) {
        puVar7 = (undefined *)(*param_2 + (ulong)(uVar5 + 1));
      }
      else {
        uVar5 = uVar1 + 1;
        *(uint *)((long)param_2 + 0xc) = uVar5;
        puVar7 = &UNK_10dfe4888;
      }
      uVar4 = *puVar7;
      uVar1 = *(uint *)((long)param_2 + 0x14);
      if (uVar1 < 0x201) {
        *(uint *)((long)param_2 + 0x14) = uVar1 + 1;
        pdVar8 = (double *)(param_2 + (ulong)uVar1 + 3);
      }
      else {
        *(undefined1 *)(param_2 + 2) = 1;
        pdVar8 = (double *)0x11382ab30;
        uRam000000011382ab30 = 0;
      }
      *pdVar8 = (double)(int)CONCAT11(uVar3,uVar4);
      iVar6 = uVar5 + 2;
      goto LAB_109715aa0;
    }
    uVar5 = *(uint *)((long)param_2 + 0xc);
    if (uVar5 < *(uint *)(param_2 + 1)) {
      pbVar9 = (byte *)(*param_2 + (ulong)uVar5);
    }
    else {
      uVar5 = *(uint *)(param_2 + 1) + 1;
      *(uint *)((long)param_2 + 0xc) = uVar5;
      pbVar9 = &UNK_10dfe4888;
    }
    bVar2 = *pbVar9;
    uVar1 = *(uint *)((long)param_2 + 0x14);
    if (uVar1 < 0x201) {
      *(uint *)((long)param_2 + 0x14) = uVar1 + 1;
      pdVar8 = (double *)(param_2 + (ulong)uVar1 + 3);
    }
    else {
      *(undefined1 *)(param_2 + 2) = 1;
      pdVar8 = (double *)0x11382ab30;
      uRam000000011382ab30 = 0;
    }
    dVar10 = (double)(int)(-0x6c - (param_1 * 0x10000 - 0xfb0000U >> 8 | (uint)bVar2));
  }
  *pdVar8 = dVar10;
  iVar6 = uVar5 + 1;
LAB_109715aa0:
  *(int *)((long)param_2 + 0xc) = iVar6;
  return;
}



/* Entry: 109715c08; end: 109715c67;  */

void FUN_109715c08(long param_1,byte *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  double dVar2;
  
  if ((*param_2 & 1) == 0) {
    *param_2 = 1;
    FUN_109715c68(param_2 + 8,param_1 + 0x1160);
  }
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x1168) = param_3[1];
  *(undefined8 *)(param_1 + 0x1160) = uVar1;
  dVar2 = *(double *)(param_1 + 0x1160);
  if (dVar2 < *(double *)(param_2 + 8)) {
    *(double *)(param_2 + 8) = dVar2;
    dVar2 = *(double *)(param_1 + 0x1160);
  }
  if (*(double *)(param_2 + 0x18) < dVar2) {
    *(double *)(param_2 + 0x18) = dVar2;
  }
  dVar2 = *(double *)(param_1 + 0x1168);
  if (dVar2 < *(double *)(param_2 + 0x10)) {
    *(double *)(param_2 + 0x10) = dVar2;
    dVar2 = *(double *)(param_1 + 0x1168);
  }
  if (*(double *)(param_2 + 0x20) < dVar2) {
    *(double *)(param_2 + 0x20) = dVar2;
  }
  return;
}



/* Entry: 109715c68; end: 109715cbb;  */

void FUN_109715c68(double *param_1,double *param_2)

{
  double dVar1;
  
  dVar1 = *param_2;
  if (dVar1 < *param_1) {
    *param_1 = dVar1;
    dVar1 = *param_2;
  }
  if (param_1[2] < dVar1) {
    param_1[2] = dVar1;
  }
  dVar1 = param_2[1];
  if (dVar1 < param_1[1]) {
    param_1[1] = dVar1;
    dVar1 = param_2[1];
  }
  if (param_1[3] < dVar1) {
    param_1[3] = dVar1;
  }
  return;
}



/* Entry: 109715cbc; end: 109715d43;  */

void FUN_109715cbc(long param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  double dVar1;
  undefined8 uVar2;
  
  if ((*param_2 & 1) == 0) {
    *param_2 = 1;
    FUN_109715c68(param_2 + 8,param_1 + 0x1160);
  }
  FUN_109715c68(param_2 + 8,param_3);
  FUN_109715c68(param_2 + 8,param_4);
  uVar2 = *param_5;
  *(undefined8 *)(param_1 + 0x1168) = param_5[1];
  *(undefined8 *)(param_1 + 0x1160) = uVar2;
  dVar1 = *(double *)(param_1 + 0x1160);
  if (dVar1 < *(double *)(param_2 + 8)) {
    *(double *)(param_2 + 8) = dVar1;
    dVar1 = *(double *)(param_1 + 0x1160);
  }
  if (*(double *)(param_2 + 0x18) < dVar1) {
    *(double *)(param_2 + 0x18) = dVar1;
  }
  dVar1 = *(double *)(param_1 + 0x1168);
  if (dVar1 < *(double *)(param_2 + 0x10)) {
    *(double *)(param_2 + 0x10) = dVar1;
    dVar1 = *(double *)(param_1 + 0x1168);
  }
  if (*(double *)(param_2 + 0x20) < dVar1) {
    *(double *)(param_2 + 0x20) = dVar1;
  }
  return;
}



/* Entry: 109715d44; end: 109715de3;  */

void FUN_109715d44(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  
  piVar4 = (int *)(param_1 + 0x18);
  if (*piVar4 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    if ((*(float *)(param_1 + 0x1c) != *(float *)(param_1 + 0x24)) ||
       (*(float *)(param_1 + 0x20) != *(float *)(param_1 + 0x28))) {
      if (*(long *)(lVar1 + 0x38) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(*(long *)(lVar1 + 0x38) + 8);
      }
      (**(code **)(lVar1 + 0x18))(lVar1,uVar2,piVar4,uVar3);
    }
    if (*(long *)(lVar1 + 0x38) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(*(long *)(lVar1 + 0x38) + 0x20);
    }
    (**(code **)(lVar1 + 0x30))(lVar1,uVar2,piVar4,uVar3);
  }
  piVar4[0] = 0;
  piVar4[1] = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 109715de4; end: 109715fc3;  */

void FUN_109715de4(double param_1,double param_2,long *param_3)

{
  long lVar1;
  float *pfVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 uVar5;
  double *pdVar6;
  float fVar7;
  float fVar8;
  
  pdVar6 = (double *)param_3[2];
  if (pdVar6 != (double *)0x0) {
    param_1 = param_1 + *pdVar6;
    param_2 = param_2 + pdVar6[1];
  }
  pfVar2 = (float *)param_3[1];
  fVar7 = *(float *)(*param_3 + 0x4c) * (float)param_1;
  fVar8 = *(float *)(*param_3 + 0x50) * (float)param_2;
  lVar1 = *(long *)(pfVar2 + 2);
  uVar3 = *(undefined8 *)(pfVar2 + 4);
  if (*(char *)(pfVar2 + 1) == '\x01') {
    fVar4 = pfVar2[6];
  }
  else {
    fVar7 = fVar7 + *pfVar2 * fVar8;
    fVar4 = pfVar2[6];
  }
  if (fVar4 != 0.0) {
    if ((pfVar2[7] != pfVar2[9]) || (pfVar2[8] != pfVar2[10])) {
      if (*(long *)(lVar1 + 0x38) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(*(long *)(lVar1 + 0x38) + 8);
      }
      (**(code **)(lVar1 + 0x18))(lVar1,uVar3,pfVar2 + 6,uVar5);
    }
    if (*(long *)(lVar1 + 0x38) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(*(long *)(lVar1 + 0x38) + 0x20);
    }
    (**(code **)(lVar1 + 0x30))(lVar1,uVar3,pfVar2 + 6,uVar5);
    pfVar2[8] = 0.0;
    pfVar2[6] = 0.0;
    pfVar2[7] = 0.0;
  }
  pfVar2[9] = fVar7;
  pfVar2[10] = fVar8;
  return;
}



/* Entry: 109715fc4; end: 10971612f;  */

void FUN_109715fc4(double param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,long *param_7)

{
  long lVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double *pdVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  pdVar5 = (double *)param_7[2];
  if (pdVar5 != (double *)0x0) {
    dVar9 = *pdVar5;
    dVar11 = pdVar5[1];
    param_1 = param_1 + dVar9;
    param_2 = param_2 + dVar11;
    param_3 = param_3 + dVar9;
    param_4 = param_4 + dVar11;
    param_5 = param_5 + dVar9;
    param_6 = param_6 + dVar11;
  }
  pfVar2 = (float *)param_7[1];
  fVar8 = *(float *)(*param_7 + 0x4c);
  fVar10 = *(float *)(*param_7 + 0x50);
  fVar13 = fVar8 * (float)param_1;
  fVar14 = fVar8 * (float)param_3;
  fVar8 = fVar8 * (float)param_5;
  fVar12 = fVar10 * (float)param_6;
  lVar1 = *(long *)(pfVar2 + 2);
  uVar3 = *(undefined8 *)(pfVar2 + 4);
  if (*(char *)(pfVar2 + 1) == '\x01') {
    if (pfVar2[6] == 0.0) {
      FUN_1097114b0(lVar1,uVar3,pfVar2 + 6);
    }
    pcVar6 = *(code **)(lVar1 + 0x28);
    if (*(long *)(lVar1 + 0x38) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(*(long *)(lVar1 + 0x38) + 0x18);
    }
  }
  else {
    fVar7 = *pfVar2;
    if (pfVar2[6] == 0.0) {
      FUN_1097114b0(lVar1,uVar3,pfVar2 + 6);
    }
    fVar13 = fVar13 + fVar7 * fVar10 * (float)param_2;
    fVar14 = fVar14 + fVar7 * fVar10 * (float)param_4;
    pcVar6 = *(code **)(lVar1 + 0x28);
    fVar8 = fVar8 + fVar7 * fVar12;
    if (*(long *)(lVar1 + 0x38) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(*(long *)(lVar1 + 0x38) + 0x18);
    }
  }
  (*pcVar6)(fVar13,fVar10 * (float)param_2,fVar14,fVar10 * (float)param_4,fVar8,fVar12,lVar1,uVar3,
            pfVar2 + 6,uVar4);
  pfVar2[9] = fVar8;
  pfVar2[10] = fVar12;
  return;
}



/* Entry: 109716130; end: 1097161d3;  */

char FUN_109716130(ushort *param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  
  if (*(char *)((long)param_1 + 1) == '\0' && (char)*param_1 == '\0') {
    puVar4 = (ushort *)&UNK_10dfe4888;
  }
  else {
    puVar4 = param_1 + 1;
  }
  uVar1 = *param_1;
  uVar3 = (uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8;
  iVar5 = uVar3 - 2;
  if (1 < uVar3) {
    iVar6 = 0;
    do {
      uVar2 = (uint)(iVar5 + iVar6) >> 1;
      puVar7 = (ushort *)((long)puVar4 + (ulong)uVar2 * 3);
      if (param_2 < ((uint)(*puVar7 >> 8) | (*puVar7 & 0xff00ff) << 8)) {
        iVar5 = uVar2 - 1;
      }
      else {
        if (param_2 < ((uint)(*(ushort *)((long)puVar7 + 3) >> 8) |
                      (*(ushort *)((long)puVar7 + 3) & 0xff00ff) << 8)) goto LAB_1097161b4;
        iVar6 = uVar2 + 1;
      }
    } while (iVar6 <= iVar5);
  }
  if (uVar1 == 0) {
    puVar7 = (ushort *)&UNK_10dfe4888;
  }
  else {
    puVar7 = (ushort *)((long)param_1 + (ulong)(uVar3 - 1) * 3 + 2);
  }
LAB_1097161b4:
  return (char)puVar7[1];
}



/* Entry: 1097161d4; end: 10971624f;  */

void FUN_1097161d4(void)

{
  FUN_109716250();
  return;
}



/* Entry: 109716250; end: 1097162ab;  */

ushort * FUN_109716250(long param_1,uint param_2)

{
  uint uVar1;
  ushort *puVar2;
  uint uStack_24;
  
  uVar1 = (*(uint *)(param_1 + 0xe) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 0xe) & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  puVar2 = (ushort *)&UNK_10dfe4888;
  if (uVar1 != 0) {
    puVar2 = (ushort *)(param_1 + (ulong)uVar1);
  }
  uStack_24 = param_2;
  FUN_1097162ac(puVar2,&uStack_24);
  if (param_2 != ((uint)(*puVar2 >> 8) | (*puVar2 & 0xff00ff) << 8)) {
    puVar2 = (ushort *)0x0;
  }
  return puVar2;
}



/* Entry: 1097162ac; end: 10971630f;  */

long FUN_1097162ac(uint *param_1,uint *param_2,long param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  iVar5 = uVar3 - 1;
  if (0 < (int)uVar3) {
    iVar6 = 0;
    uVar3 = *param_2;
    do {
      uVar2 = (uint)(iVar5 + iVar6) >> 1;
      uVar1 = *(ushort *)((long)param_1 + (ulong)uVar2 * 6 + 4);
      uVar4 = (uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8;
      if (uVar3 <= uVar4 && uVar4 != uVar3) {
        iVar5 = uVar2 - 1;
      }
      else {
        if (uVar3 <= uVar4) {
          return (long)param_1 + (ulong)uVar2 * 6 + 4;
        }
        iVar6 = uVar2 + 1;
      }
    } while (iVar6 <= iVar5);
  }
  return param_3;
}



/* Entry: 109716310; end: 10971648f;  */

/* WARNING: Possible PIC construction at 0x000109716398: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010971639c) */
/* WARNING: Removing unreachable block (ram,0x0001097163a8) */
/* WARNING: Removing unreachable block (ram,0x0001097163d0) */
/* WARNING: Removing unreachable block (ram,0x0001097163d8) */
/* WARNING: Removing unreachable block (ram,0x0001097163e8) */
/* WARNING: Removing unreachable block (ram,0x000109716404) */
/* WARNING: Removing unreachable block (ram,0x000109716408) */
/* WARNING: Removing unreachable block (ram,0x00010971640c) */
/* WARNING: Removing unreachable block (ram,0x000109716414) */
/* WARNING: Removing unreachable block (ram,0x00010971641c) */
/* WARNING: Removing unreachable block (ram,0x000109716424) */
/* WARNING: Removing unreachable block (ram,0x000109716430) */
/* WARNING: Removing unreachable block (ram,0x000109716438) */
/* WARNING: Removing unreachable block (ram,0x000109716448) */

uint * FUN_109716310(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar1 = &UNK_10dfe4888;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_1;
  }
  puVar2 = &UNK_10dfe4888;
  if (7 < *(uint *)(puVar1 + 0x18)) {
    puVar2 = *(undefined **)(puVar1 + 0x10);
  }
  if (((puVar2[4] != '\0' || puVar2[5] != '\0') || puVar2[6] != '\0') || puVar2[7] != '\0') {
    uVar3 = (*(uint *)(puVar2 + 4) & 0xff00ff00) >> 8 | (*(uint *)(puVar2 + 4) & 0xff00ff) << 8;
    puVar4 = (uint *)&UNK_10dfe4888;
    if (uVar3 >> 0x10 != 0 || (uVar3 & 0xffff) != 0) {
      puVar4 = (uint *)(puVar2 + 8);
    }
    uVar3 = (*puVar4 & 0xff00ff00) >> 8 | (*puVar4 & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    puVar4 = (uint *)&UNK_10dfe4888;
    if (uVar3 != 0) {
      puVar4 = (uint *)(puVar2 + uVar3);
    }
    return puVar4;
  }
  return (uint *)&UNK_10dfe4888;
}



/* Entry: 109716490; end: 1097168c3;  */

undefined4 *
FUN_109716490(ushort *param_1,ulong param_2,int *param_3,uint *param_4,uint *param_5,ulong param_6,
             uint *param_7)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined4 *puVar9;
  int iVar10;
  long lVar11;
  
  uVar4 = (uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8;
  if (uVar4 != 0) {
    param_2 = param_2 & 0xffffffff;
    iVar6 = (int)param_1 - param_3[4];
    iVar10 = -9;
    do {
      if ((param_6 & 0xffffffff) <= param_2) break;
      uVar2 = *(uint *)(param_1 + param_2 * 2 + 2);
      uVar3 = *(uint *)((long)(param_1 + param_2 * 2 + 2) + 4);
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar7 = uVar3 - uVar2;
      if ((uVar3 < uVar2 || uVar7 == 0) || (uVar7 < 9 || (uint)(param_3[6] - iVar6) < uVar3)) break;
      uVar7 = uVar7 - 8;
      pbVar1 = &UNK_10dfe4888;
      if (uVar2 != 0) {
        pbVar1 = (byte *)((long)param_1 + (ulong)uVar2);
      }
      uVar3 = (*(uint *)(pbVar1 + 4) & 0xff00ff00) >> 8 | (*(uint *)(pbVar1 + 4) & 0xff00ff) << 8;
      uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
      if (uVar3 != 0x64757065) {
        if (uVar3 == 0x706e6720) {
          *param_7 = uVar4;
          *param_4 = (int)(short)((ushort)*pbVar1 << 8) | (uint)pbVar1[1];
          *param_5 = (int)(short)((ushort)pbVar1[2] << 8) | (uint)pbVar1[3];
          uVar4 = iVar6 + uVar2 + 8;
          if (((param_3 != (int *)0x0) && (uVar7 != 0)) &&
             (uVar2 = param_3[6] - uVar4, uVar4 <= (uint)param_3[6] && uVar2 != 0)) {
            if (param_3[1] != 0) {
              param_3[1] = 0;
            }
            lVar11 = *(long *)(param_3 + 4);
            if (uVar7 <= uVar2) {
              uVar2 = uVar7;
            }
            if (*param_3 != 0) {
              do {
                cVar5 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(param_3,0x10);
                if (bVar8) {
                  *param_3 = *param_3 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            if (-1 < (int)uVar2) {
              puVar9 = (undefined4 *)0x1;
              _calloc(1,0x30);
              if (puVar9 != (undefined4 *)0x0) {
                *puVar9 = 1;
                puVar9[1] = 1;
                *(undefined8 *)(puVar9 + 2) = 0;
                *(ulong *)(puVar9 + 4) = lVar11 + (ulong)uVar4;
                puVar9[6] = uVar2;
                puVar9[7] = 1;
                *(int **)(puVar9 + 8) = param_3;
                *(code **)(puVar9 + 10) = FUN_1096f5bc8;
                return puVar9;
              }
            }
            FUN_1096f5a5c(param_3);
          }
          return (undefined4 *)&UNK_10dfe4888;
        }
        break;
      }
      if (uVar7 < 2) break;
      param_2 = (ulong)((uint)(*(ushort *)(pbVar1 + 8) >> 8) |
                       (*(ushort *)(pbVar1 + 8) & 0xff00ff) << 8);
      bVar8 = iVar10 != -1;
      iVar10 = iVar10 + 1;
    } while (bVar8);
  }
  return (undefined4 *)&UNK_10dfe4888;
}



/* Entry: 1097168c4; end: 109716b1f;  */

void FUN_1097168c4(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  lVar3 = *param_1;
  do {
    if (lVar3 != 0) {
      return;
    }
    lVar3 = 0;
    func_0x000109716948();
    if (lVar3 == 0) {
      if (*param_1 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = 0x1132e0078;
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
          *param_1 = lVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      if (lVar3 != 0x1132e0078) {
        func_0x0001096f9948();
      }
    }
    lVar3 = *param_1;
  } while( true );
}



/* Entry: 109716b20; end: 109716b63;  */

void FUN_109716b20(undefined8 param_1,long *param_2)

{
  FUN_109745670(*param_2 + 0x18);
  FUN_10971d7fc();
  return;
}



/* Entry: 109716b64; end: 109716c67;  */

ulong FUN_109716b64(undefined8 param_1,long *param_2,ulong param_3,uint *param_4,ulong param_5,
                   uint *param_6,ulong param_7)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar1 = param_2[1];
  lVar4 = *param_2 + 0x18;
  FUN_109745670();
  uVar7 = 0;
  if (((uint)param_3 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    uVar6 = 0;
    do {
      uVar2 = *param_4;
      uVar7 = (ulong)uVar2;
      if ((lVar1 == 0) ||
         (uVar3 = *(uint *)(lVar1 + (uVar7 & 0xff) * 4), uVar3 >> 0x10 != uVar2 >> 8)) {
        uVar5 = *(undefined8 *)(lVar4 + 0x18);
        (**(code **)(lVar4 + 0x10))(uVar5,uVar7,param_6);
        if ((lVar1 == 0) || ((int)uVar5 == 0)) {
          if ((int)uVar5 == 0) {
            return uVar6;
          }
        }
        else if ((uVar2 >> 0x15 == 0) && (*param_6 >> 0x10 == 0)) {
          *(uint *)(lVar1 + (uVar7 & 0xff) * 4) = *param_6 | (uVar2 & 0x1fff00) << 8;
        }
      }
      else {
        *param_6 = uVar3 & 0xffff;
      }
      param_4 = (uint *)((long)param_4 + (param_5 & 0xffffffff));
      param_6 = (uint *)((long)param_6 + (param_7 & 0xffffffff));
      uVar2 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar2;
      uVar7 = param_3;
    } while ((uint)param_3 != uVar2);
  }
  return uVar7;
}



/* Entry: 109716c68; end: 109716edf;  */

void FUN_109716c68(undefined8 param_1,long *param_2,uint param_3,uint param_4,uint *param_5)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  
  lVar6 = *param_2 + 0x18;
  FUN_109745670();
  puVar7 = (uint *)&UNK_10dfe4888;
  puVar2 = puVar7;
  if (*(uint **)(lVar6 + 8) != (uint *)0x0) {
    puVar2 = *(uint **)(lVar6 + 8);
  }
  uVar5 = (*(uint *)((long)puVar2 + 6) & 0xff00ff00) >> 8 |
          (*(uint *)((long)puVar2 + 6) & 0xff00ff) << 8;
  uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
  iVar9 = uVar5 - 1;
  puVar8 = puVar7;
  if (0 < (int)uVar5) {
    iVar10 = 0;
    puVar8 = (uint *)&UNK_10dfe4888;
    do {
      uVar5 = (uint)(iVar9 + iVar10) >> 1;
      pbVar11 = (byte *)((long)puVar2 + (ulong)uVar5 * 0xb + 10);
      uVar4 = (uint)*pbVar11 << 0x10 | (uint)pbVar11[1] << 8 | (uint)pbVar11[2];
      if (param_4 < uVar4) {
        iVar9 = uVar5 - 1;
      }
      else {
        if (uVar4 == param_4) {
          puVar8 = (uint *)((long)puVar2 + (ulong)uVar5 * 0xb + 10);
          break;
        }
        iVar10 = uVar5 + 1;
      }
    } while (iVar10 <= iVar9);
  }
  uVar5 = (*(uint *)((long)puVar8 + 3) & 0xff00ff00) >> 8 |
          (*(uint *)((long)puVar8 + 3) & 0xff00ff) << 8;
  uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
  puVar3 = puVar7;
  if (uVar5 != 0) {
    puVar3 = (uint *)((long)puVar2 + (ulong)uVar5);
  }
  uVar5 = (*puVar3 & 0xff00ff00) >> 8 | (*puVar3 & 0xff00ff) << 8;
  uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
  iVar9 = uVar5 - 1;
  if (0 < (int)uVar5) {
    iVar10 = 0;
    do {
      uVar5 = (uint)(iVar9 + iVar10) >> 1;
      puVar1 = puVar3 + (ulong)uVar5 + 1;
      uVar4 = (uint)(byte)*puVar1 << 0x10 | (uint)*(byte *)((long)puVar1 + 1) << 8 |
              (uint)*(byte *)((long)puVar1 + 2);
      if (param_3 < uVar4) {
        iVar9 = uVar5 - 1;
      }
      else {
        if (param_3 <= uVar4 + *(byte *)((long)puVar1 + 3)) {
          FUN_10971d7fc();
          return;
        }
        iVar10 = uVar5 + 1;
      }
    } while (iVar10 <= iVar9);
  }
  uVar5 = (*(uint *)((long)puVar8 + 7) & 0xff00ff00) >> 8 |
          (*(uint *)((long)puVar8 + 7) & 0xff00ff) << 8;
  uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
  puVar8 = puVar7;
  if (uVar5 != 0) {
    puVar8 = (uint *)((long)puVar2 + (ulong)uVar5);
  }
  uVar5 = (*puVar8 & 0xff00ff00) >> 8 | (*puVar8 & 0xff00ff) << 8;
  uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
  iVar9 = uVar5 - 1;
  if (0 < (int)uVar5) {
    iVar10 = 0;
    puVar7 = (uint *)&UNK_10dfe4888;
    do {
      uVar5 = (uint)(iVar9 + iVar10) >> 1;
      pbVar11 = (byte *)((long)puVar8 + (ulong)uVar5 * 5 + 4);
      uVar4 = (uint)*pbVar11 << 0x10 | (uint)pbVar11[1] << 8 | (uint)pbVar11[2];
      if (param_3 < uVar4) {
        iVar9 = uVar5 - 1;
      }
      else {
        if (uVar4 == param_3) {
          puVar7 = (uint *)((long)puVar8 + (ulong)uVar5 * 5 + 4);
          break;
        }
        iVar10 = uVar5 + 1;
      }
    } while (iVar10 <= iVar9);
  }
  uVar5 = (uint)(*(ushort *)((long)puVar7 + 3) >> 8) |
          (*(ushort *)((long)puVar7 + 3) & 0xff00ff) << 8;
  if (uVar5 != 0) {
    *param_5 = uVar5;
  }
  return;
}



/* Entry: 109716ee0; end: 1097171a3;  */

void FUN_109716ee0(long param_1,long *param_2,int param_3,uint *param_4,ulong param_5,int *param_6,
                  uint param_7)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  long lVar10;
  long lVar11;
  int *piVar12;
  int iVar13;
  undefined *puVar14;
  ulong uVar9;
  
  uVar8 = *param_2 + 0x28;
  FUN_10971da04();
  iVar13 = *(int *)(param_1 + 0x78);
  if ((uint)(iVar13 * param_3) < 0x80) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = &UNK_10dfe4888;
    if (*(undefined **)(uVar8 + 0x20) != (undefined *)0x0) {
      puVar14 = *(undefined **)(uVar8 + 0x20);
    }
    puVar3 = &UNK_10dfe4888;
    if (0x13 < *(uint *)(puVar14 + 0x18)) {
      puVar3 = *(undefined **)(puVar14 + 0x10);
    }
    uVar4 = (*(uint *)(puVar3 + 4) & 0xff00ff00) >> 8 | (*(uint *)(puVar3 + 4) & 0xff00ff) << 8;
    uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
    puVar14 = &UNK_10dfe4888;
    if (uVar4 != 0) {
      puVar14 = puVar3 + uVar4;
    }
    FUN_10971d8b8(puVar14);
    iVar13 = *(int *)(param_1 + 0x78);
  }
  if (iVar13 == 0) {
LAB_1097170cc:
    if (param_3 != 0) {
      piVar12 = param_6;
      iVar13 = param_3;
      do {
        uVar9 = uVar8;
        FUN_10971d92c(uVar8,*param_4,param_1,puVar14);
        *piVar12 = (int)((ulong)((long)(short)uVar9 * *(long *)(param_1 + 0x58) + 0x8000) >> 0x10);
        param_4 = (uint *)((long)param_4 + (param_5 & 0xffffffff));
        piVar12 = (int *)((long)piVar12 + (ulong)param_7);
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
  }
  else {
    plVar1 = param_2 + 3;
    lVar10 = *plVar1;
    while (lVar10 == 0) {
      lVar10 = 1;
      _calloc(1,0x400);
      if (lVar10 == 0) goto LAB_1097170cc;
      lVar11 = 0;
      do {
        *(undefined4 *)(lVar10 + lVar11) = 0xffffffff;
        lVar11 = lVar11 + 4;
      } while (lVar11 != 0x400);
      if (*plVar1 == 0) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x14);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      _free();
      lVar10 = *plVar1;
    }
    if ((int)param_2[2] != *(int *)(param_1 + 0x14)) {
      lVar10 = 0;
      lVar11 = *plVar1;
      do {
        *(undefined4 *)(lVar11 + lVar10) = 0xffffffff;
        lVar10 = lVar10 + 4;
      } while (lVar10 != 0x400);
      *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x14);
    }
    if (param_3 != 0) {
      piVar12 = param_6;
      iVar13 = param_3;
      do {
        uVar4 = *param_4;
        uVar7 = *(uint *)(*plVar1 + ((ulong)uVar4 & 0xff) * 4);
        if ((uVar7 == 0xffffffff) || (uVar7 >> 0x10 != uVar4 >> 8)) {
          uVar9 = uVar8;
          FUN_10971d92c(uVar8,(ulong)uVar4,param_1,puVar14);
          uVar7 = (uint)uVar9;
          uVar4 = *param_4;
          if ((uVar9 & 0xffff0000) == 0 && (uVar4 & 0xff000000) == 0) {
            *(uint *)(*plVar1 + ((ulong)uVar4 & 0xff) * 4) = uVar7 | (uVar4 >> 8) << 0x10;
          }
        }
        *piVar12 = (int)((ulong)((long)(short)uVar7 * *(long *)(param_1 + 0x58) + 0x8000) >> 0x10);
        param_4 = (uint *)((long)param_4 + (param_5 & 0xffffffff));
        piVar12 = (int *)((long)piVar12 + (ulong)param_7);
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
  }
  _free(puVar14);
  iVar13 = *(int *)(param_1 + 0x3c);
  if ((iVar13 != 0) && ((*(byte *)(param_1 + 0x38) & 1) == 0)) {
    iVar2 = -iVar13;
    if (-1 < *(int *)(param_1 + 0x28)) {
      iVar2 = iVar13;
    }
    if (param_3 != 0) {
      do {
        iVar13 = 0;
        if (*param_6 != 0) {
          iVar13 = iVar2;
        }
        *param_6 = iVar13 + *param_6;
        param_6 = (int *)((long)param_6 + (ulong)param_7);
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  return;
}



/* Entry: 1097171a4; end: 10971720b;  */

void FUN_1097171a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_109703f24(param_1,0x76617363);
  if (((int)uVar1 != 0) &&
     (uVar1 = param_1, FUN_109703f24(param_1,0x76647363,param_3 + 4), (int)uVar1 != 0)) {
    FUN_109703f24(param_1,0x766c6770,param_3 + 8);
  }
  return;
}



/* Entry: 10971720c; end: 10971744f;  */

void FUN_10971720c(float param_1,long param_2,long *param_3,int param_4,uint *param_5,ulong param_6,
                  int *param_7,uint param_8)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  short sVar5;
  int iVar6;
  ulong uVar7;
  int iVar9;
  int *piVar10;
  undefined *puStack_b0;
  int iStack_a0;
  int iStack_9c;
  ulong uVar8;
  
  uVar7 = *param_3 + 0x60;
  FUN_10971ed6c();
  if (*(int *)(uVar7 + 4) == 0) {
    FUN_109712374(param_2,&iStack_a0);
    if (param_4 != 0) {
      piVar10 = param_7;
      iVar9 = param_4;
      do {
        *piVar10 = iStack_9c - iStack_a0;
        piVar10 = (int *)((long)piVar10 + (ulong)param_8);
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  else {
    if (*(int *)(param_2 + 0x78) == 0) {
      puStack_b0 = (undefined *)0x0;
    }
    else {
      puVar2 = &UNK_10dfe4888;
      if (*(undefined **)(uVar7 + 0x20) != (undefined *)0x0) {
        puVar2 = *(undefined **)(uVar7 + 0x20);
      }
      puVar3 = &UNK_10dfe4888;
      if (0x17 < *(uint *)(puVar2 + 0x18)) {
        puVar3 = *(undefined **)(puVar2 + 0x10);
      }
      uVar4 = (*(uint *)(puVar3 + 4) & 0xff00ff00) >> 8 | (*(uint *)(puVar3 + 4) & 0xff00ff) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      puStack_b0 = &UNK_10dfe4888;
      if (uVar4 != 0) {
        puStack_b0 = puVar3 + uVar4;
      }
      FUN_10971d8b8();
    }
    if (param_4 != 0) {
      piVar10 = param_7;
      iVar9 = param_4;
      do {
        uVar4 = *param_5;
        uVar8 = uVar7;
        FUN_10971f318(uVar7,uVar4);
        sVar5 = (short)uVar8;
        if ((uVar4 < *(uint *)(uVar7 + 4)) && (*(int *)(param_2 + 0x78) != 0)) {
          puVar2 = &UNK_10dfe4888;
          if (*(undefined **)(uVar7 + 0x20) != (undefined *)0x0) {
            puVar2 = *(undefined **)(uVar7 + 0x20);
          }
          if (*(uint *)(puVar2 + 0x18) == 0) {
            iVar6 = (int)*(undefined8 *)(param_2 + 0x20) + 0xd8;
            FUN_10974a39c();
            FUN_109710a1c();
            iVar1 = (int)uVar8;
            if (iVar6 != 0) {
              iVar1 = iVar6;
            }
            sVar5 = (short)iVar1;
          }
          else {
            puVar3 = &UNK_10dfe4888;
            if (0x17 < *(uint *)(puVar2 + 0x18)) {
              puVar3 = *(undefined **)(puVar2 + 0x10);
            }
            FUN_10971e8bc(puVar3,uVar4,*(undefined8 *)(param_2 + 0x80),*(int *)(param_2 + 0x78),
                          puStack_b0);
            param_1 = (float)(int)(param_1 + 0.5) + (float)(uVar8 & 0xffffffff);
            sVar5 = (short)(int)param_1;
          }
        }
        *piVar10 = (int)((ulong)((long)-sVar5 * *(long *)(param_2 + 0x60) + 0x8000) >> 0x10);
        param_5 = (uint *)((long)param_5 + (param_6 & 0xffffffff));
        piVar10 = (int *)((long)piVar10 + (ulong)param_8);
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    _free(puStack_b0);
  }
  iVar9 = *(int *)(param_2 + 0x40);
  if ((iVar9 != 0) && ((*(byte *)(param_2 + 0x38) & 1) == 0)) {
    iVar6 = -iVar9;
    if (-1 < *(int *)(param_2 + 0x2c)) {
      iVar6 = iVar9;
    }
    if (param_4 != 0) {
      do {
        iVar9 = 0;
        if (*param_7 != 0) {
          iVar9 = iVar6;
        }
        *param_7 = iVar9 + *param_7;
        param_7 = (int *)((long)param_7 + (ulong)param_8);
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
  }
  return;
}



/* Entry: 109717450; end: 10971788b;  */

undefined8
FUN_109717450(ulong param_1,long param_2,undefined8 *param_3,undefined8 param_4,int *param_5,
             int *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  undefined8 *puVar9;
  char *pcVar10;
  long *plVar11;
  char *pcVar12;
  undefined8 uVar13;
  short sVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  long *plVar19;
  float fVar20;
  ulong uVar21;
  int aiStack_ec [5];
  long lStack_d8;
  undefined1 *puStack_d0;
  int *piStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_bc;
  undefined8 uStack_b4;
  undefined1 auStack_a8 [4];
  int iStack_a4;
  int iStack_98;
  int iStack_94;
  float fStack_7c;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_3 = (undefined8 *)*param_3;
  lVar15 = *(long *)(*(long *)(param_2 + 0x90) + 0x10);
  if (lVar15 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined8 *)(lVar15 + 0x28);
  }
  lVar15 = param_2;
  (**(code **)(*(long *)(param_2 + 0x90) + 0x48))
            (param_2,*(undefined8 *)(param_2 + 0x98),param_4,uVar13);
  *param_5 = (int)lVar15 / 2;
  plVar19 = param_3 + 0xd;
  pcVar1 = "";
  pcVar10 = (char *)*plVar19;
  if ((char *)*plVar19 == (char *)0x0) goto LAB_109717844;
LAB_1097174dc:
  pcVar12 = pcVar1;
  if (7 < *(uint *)(pcVar10 + 0x18)) {
    pcVar12 = *(char **)(pcVar10 + 0x10);
  }
  uVar18 = (uint)param_4;
  if ((pcVar12[1] != '\0' || *pcVar12 != '\0') || (pcVar12[2] != '\0' || pcVar12[3] != '\0')) {
    puVar9 = param_3 + 0xc;
    FUN_10971ed6c();
    plVar19 = (long *)(ulong)*(uint *)(param_2 + 0x78);
    fVar20 = 0.0;
    if (*(uint *)(param_2 + 0x78) != 0) {
      pcVar10 = pcVar1;
      if ((char *)puVar9[4] != (char *)0x0) {
        pcVar10 = (char *)puVar9[4];
      }
      pcVar3 = pcVar1;
      if (0x17 < *(uint *)(pcVar10 + 0x18)) {
        pcVar3 = *(char **)(pcVar10 + 0x10);
      }
      uVar5 = (*(uint *)(pcVar3 + 0x14) & 0xff00ff00) >> 8 |
              (*(uint *)(pcVar3 + 0x14) & 0xff00ff) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      if (uVar5 != 0) {
        param_3 = *(undefined8 **)(param_2 + 0x80);
        pcVar10 = pcVar3 + uVar5;
        fVar20 = 0.0;
        FUN_10971e940(pcVar10,param_4);
        uVar5 = (*(uint *)(pcVar3 + 4) & 0xff00ff00) >> 8 | (*(uint *)(pcVar3 + 4) & 0xff00ff) << 8;
        uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
        pcVar2 = pcVar1;
        if (uVar5 != 0) {
          pcVar2 = pcVar3 + uVar5;
        }
        FUN_10971ea00(pcVar2,(ulong)pcVar10 >> 0x10 & 0xffff,(uint)pcVar10 & 0xffff,param_3,plVar19,
                      0);
      }
    }
    uVar5 = (uint)(*(ushort *)(pcVar12 + 6) >> 8) | (*(ushort *)(pcVar12 + 6) & 0xff00ff) << 8;
    if (uVar5 != 0) {
      iVar17 = 0;
      iVar16 = uVar5 - 1;
      do {
        uVar4 = (uint)(iVar16 + iVar17) >> 1;
        uVar6 = (uint)(*(ushort *)(pcVar12 + (ulong)uVar4 * 4 + 8) >> 8) |
                (*(ushort *)(pcVar12 + (ulong)uVar4 * 4 + 8) & 0xff00ff) << 8;
        if (uVar18 < uVar6) {
          iVar16 = uVar4 - 1;
        }
        else {
          if (uVar6 == uVar18) {
            if (uVar4 < uVar5) {
              pcVar12 = pcVar12 + (ulong)uVar4 * 4 + 8;
            }
            else {
              pcVar12 = "";
            }
            pcVar10 = pcVar12 + 2;
            pcVar12 = pcVar12 + 3;
            goto LAB_1097176dc;
          }
          iVar17 = uVar4 + 1;
        }
      } while (iVar17 <= iVar16);
    }
    pcVar10 = pcVar12 + 4;
    pcVar12 = pcVar12 + 5;
LAB_1097176dc:
    fVar20 = *(float *)(param_2 + 0x50) * (fVar20 + (float)(int)CONCAT11(*pcVar10,*pcVar12)) + 0.5;
    param_1 = (ulong)(uint)fVar20;
    iVar17 = (int)fVar20;
    goto LAB_109717708;
  }
  aiStack_ec[1] = 0;
  aiStack_ec[2] = 0;
  aiStack_ec[3] = 0;
  aiStack_ec[4] = 0;
  iVar17 = (int)param_3 + 0x78;
  FUN_10974a39c();
  FUN_10971f374();
  if (iVar17 == 0) {
    FUN_109712374(param_2,&iStack_98);
    iVar17 = iStack_98;
    goto LAB_109717708;
  }
  plVar19 = param_3 + 0xc;
  FUN_10971ed6c();
  aiStack_ec[0] = 0;
  param_3 = (undefined8 *)(ulong)*(uint *)(param_2 + 0x78);
  if (*(uint *)(param_2 + 0x78) == 0) {
    plVar11 = plVar19;
    func_0x0001097211cc(plVar19,param_4,aiStack_ec);
    if ((int)plVar11 == 0) goto LAB_1097177f0;
    sVar14 = (short)aiStack_ec[0];
  }
  else {
    pcVar10 = pcVar1;
    if ((char *)plVar19[4] != (char *)0x0) {
      pcVar10 = (char *)plVar19[4];
    }
    pcVar12 = pcVar1;
    if (0x17 < *(uint *)(pcVar10 + 0x18)) {
      pcVar12 = *(char **)(pcVar10 + 0x10);
    }
    uVar5 = (*(uint *)(pcVar12 + 0xc) & 0xff00ff00) >> 8 |
            (*(uint *)(pcVar12 + 0xc) & 0xff00ff) << 8;
    uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
    uVar21 = param_1;
    if (uVar5 == 0) {
LAB_109717748:
      lVar15 = *(long *)(param_2 + 0x20) + 0xd8;
      FUN_10974a39c();
      param_1 = uVar21;
      if (uVar18 < *(uint *)(lVar15 + 0x1c)) {
        puStack_d0 = auStack_a8;
        piStack_c8 = &iStack_98;
        uStack_c0 = 0;
        param_1 = 0x7f7fffff7f7fffff;
        uStack_b4 = 0xff7fffffff7fffff;
        uStack_bc = 0x7f7fffff7f7fffff;
        lStack_d8 = param_2;
        FUN_10971f824();
        if ((int)lVar15 != 0) {
          fVar20 = (float)(int)(fStack_7c + 0.5) - (float)iStack_a4;
          goto LAB_1097177b0;
        }
      }
LAB_1097177f0:
      FUN_109712374(param_2,&iStack_98);
      iVar17 = aiStack_ec[2] + ((iStack_98 - iStack_94) + aiStack_ec[4] >> 1);
      goto LAB_109717708;
    }
    uVar13 = *(undefined8 *)(param_2 + 0x80);
    pcVar10 = pcVar12 + uVar5;
    FUN_10971e940(pcVar10,param_4);
    uVar5 = (*(uint *)(pcVar12 + 4) & 0xff00ff00) >> 8 | (*(uint *)(pcVar12 + 4) & 0xff00ff) << 8;
    uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
    pcVar3 = pcVar1;
    if (uVar5 != 0) {
      pcVar3 = pcVar12 + uVar5;
    }
    FUN_10971ea00(pcVar3,(ulong)pcVar10 >> 0x10 & 0xffff,(uint)pcVar10 & 0xffff,uVar13,param_3,0);
    plVar11 = plVar19;
    uVar21 = param_1;
    func_0x0001097211cc(plVar19,param_4,aiStack_ec);
    if ((int)plVar11 == 0) goto LAB_109717748;
    fVar20 = (float)(int)((float)param_1 + 0.5) + (float)aiStack_ec[0];
LAB_1097177b0:
    param_1 = (ulong)(uint)fVar20;
    sVar14 = (short)(int)fVar20;
  }
  iVar17 = aiStack_ec[2] + (int)((ulong)((long)sVar14 * *(long *)(param_2 + 0x60) + 0x8000) >> 0x10)
  ;
LAB_109717708:
  *param_6 = iVar17;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return 1;
  }
  ___stack_chk_fail();
  do {
    if (*plVar19 == 0) {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar8) {
        *plVar19 = (long)&UNK_10dfe4888;
        cVar7 = ExclusiveMonitorsStatus();
      }
      pcVar10 = pcVar1;
      if (cVar7 == '\0') goto LAB_1097174dc;
    }
    else {
      ClearExclusiveLocal();
    }
    while( true ) {
      pcVar10 = (char *)*plVar19;
      if ((char *)*plVar19 != (char *)0x0) goto LAB_1097174dc;
LAB_109717844:
      pcVar12 = (char *)*param_3;
      pcVar10 = pcVar1;
      if (pcVar12 == (char *)0x0) goto LAB_1097174dc;
      FUN_10971f574();
      if (pcVar12 == (char *)0x0) break;
      if (*plVar19 == 0) {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar8) {
          *plVar19 = (long)pcVar12;
          cVar7 = ExclusiveMonitorsStatus();
        }
        pcVar10 = pcVar12;
        if (cVar7 == '\0') goto LAB_1097174dc;
      }
      else {
        ClearExclusiveLocal();
      }
      if (pcVar12 != "") {
        FUN_1096f5a5c();
      }
    }
  } while( true );
}



/* Entry: 10971788c; end: 10971aa7b;  */

void FUN_10971788c(undefined8 param_1,ulong param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6,undefined8 *param_7)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined7 uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  double *pdVar16;
  double *pdVar17;
  uint uVar18;
  code *pcVar19;
  long *plVar20;
  ulong uVar21;
  float *pfVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  double *pdVar26;
  uint *puVar27;
  ulong uVar28;
  float *pfVar29;
  ulong uVar30;
  float *pfVar31;
  uint *puVar32;
  uint uVar33;
  int iVar34;
  long lVar35;
  undefined8 uVar36;
  ulong uVar37;
  uint uVar38;
  undefined8 uVar39;
  int iVar40;
  char *pcVar41;
  uint uVar42;
  long lVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  double dVar47;
  ulong uVar48;
  double dVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  double dVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  double dVar60;
  float fVar61;
  double dVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  double dVar66;
  double dVar67;
  float fVar68;
  double dVar69;
  double dVar70;
  double dVar71;
  ulong uVar72;
  ulong uStack_1360;
  ulong uStack_1340;
  ulong uStack_1330;
  ulong uStack_1320;
  ulong uStack_1310;
  ulong uStack_1300;
  ulong uStack_12f0;
  undefined8 *puStack_12e0;
  float fStack_12c8;
  char cStack_12c4;
  long lStack_12c0;
  undefined8 *puStack_12b8;
  undefined8 uStack_12b0;
  float fStack_12a8;
  float fStack_12a4;
  float fStack_12a0;
  undefined4 uStack_129c;
  undefined8 uStack_1298;
  undefined8 uStack_1290;
  undefined8 uStack_1288;
  undefined8 uStack_1280;
  long lStack_1278;
  undefined8 uStack_1270;
  uint *puStack_1268;
  undefined8 uStack_1260;
  undefined8 uStack_1258;
  undefined8 uStack_1250;
  double adStack_1248 [513];
  long lStack_240;
  long lStack_238;
  long lStack_230;
  byte bStack_228;
  byte bStack_227;
  byte bStack_226;
  int iStack_224;
  int iStack_220;
  uint uStack_21c;
  byte bStack_218;
  uint uStack_214;
  long alStack_210 [30];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  double dStack_100;
  double dStack_f8;
  uint uStack_d8;
  int iStack_d0;
  uint uStack_cc;
  float *pfStack_c8;
  char cStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  if (*(int *)(param_3 + 0x3c) == 0) {
    lStack_1278 = 0;
    uStack_1280 = 0;
    puStack_1268 = (uint *)0x0;
    uStack_1270 = 0;
    if (*(int *)(param_3 + 0x40) != 0) goto LAB_109717904;
    bVar11 = false;
    lStack_12c0 = param_6;
    puStack_12b8 = param_7;
  }
  else {
LAB_109717904:
    puStack_1268 = (uint *)0x0;
    uStack_1270 = 0;
    lStack_1278 = 0;
    uStack_1280 = 0;
    lVar43 = lRam0000000113735dd0;
    if (lRam0000000113735dd0 == 0) {
      do {
        lVar43 = lRam0000000113735dd0;
        FUN_10974e67c();
        if (lVar43 == 0) {
          if (lRam0000000113735dd0 == 0) {
            cVar5 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(0x113735dd0,0x10);
            if (bVar11) {
              lRam0000000113735dd0 = 0x1132dfdd0;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              bVar11 = true;
              lStack_12c0 = 0x1132dfdd0;
              puStack_12b8 = &uStack_1280;
              goto LAB_109717920;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        }
        else {
          if (lRam0000000113735dd0 == 0) {
            cVar5 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(0x113735dd0,0x10);
            if (bVar11) {
              cVar5 = ExclusiveMonitorsStatus();
              lRam0000000113735dd0 = lVar43;
            }
            if (cVar5 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
          if (lVar43 != 0x1132dfdd0) {
            FUN_1096f86d8();
          }
        }
        lVar43 = lRam0000000113735dd0;
      } while (lRam0000000113735dd0 == 0);
    }
    bVar11 = true;
    lStack_12c0 = lVar43;
    puStack_12b8 = &uStack_1280;
  }
LAB_109717920:
  fStack_12c8 = *(float *)(param_3 + 0x48);
  cStack_12c4 = fStack_12c8 == 0.0;
  uVar21 = 0;
  fStack_12a8 = 0.0;
  fStack_12a4 = 0.0;
  uStack_12b0 = 0;
  uStack_1298 = 0;
  fStack_12a0 = 0.0;
  uStack_129c = 0;
  uStack_1288 = 0;
  uStack_1290 = 0;
  lVar43 = *(long *)(param_3 + 0x20) + 0xd8;
  FUN_10974a39c();
  if ((uint)param_5 < *(uint *)(lVar43 + 0x1c)) {
    uVar3 = *(undefined4 *)(param_3 + 0x78);
    uVar39 = *(undefined8 *)(param_3 + 0x80);
    uStack_b8 = 0;
    lStack_b0 = 0;
    FUN_10971fa1c(&uStack_1260,lVar43,param_5);
    puVar13 = &uStack_1260;
    FUN_10971fb24(puVar13,param_3,lVar43,&uStack_b8,0,uVar39,uVar3,0,0);
    if (((ulong)puVar13 & 1) != 0) {
      uVar18 = uStack_b8._4_4_;
      if (uStack_b8._4_4_ - 4 <= uStack_b8._4_4_) {
        uVar18 = uStack_b8._4_4_ - 4;
      }
      if (uVar18 != 0) {
        bVar6 = false;
        bVar10 = false;
        bVar9 = false;
        pcVar41 = (char *)(lStack_b0 + 9);
        lVar43 = (ulong)uVar18 * 0xc;
        uStack_1360 = param_2;
        uStack_1320 = uVar21;
        uStack_1310 = uVar21;
        uStack_1300 = uVar21;
        uStack_12f0 = uVar21;
        do {
          puVar7 = puStack_12b8;
          lVar35 = lStack_12c0;
          fVar51 = fStack_12c8;
          bVar4 = pcVar41[-1];
          fVar50 = (float)*(undefined8 *)(pcVar41 + -9) * (float)*(undefined8 *)(param_3 + 0x4c);
          fVar53 = (float)((ulong)*(undefined8 *)(pcVar41 + -9) >> 0x20) *
                   (float)((ulong)*(undefined8 *)(param_3 + 0x4c) >> 0x20);
          uVar37 = CONCAT44(fVar53,fVar50);
          uVar28 = (ulong)(uint)fVar53;
          uStack_1330 = uVar37;
          puStack_12e0 = (undefined8 *)uVar37;
          if (bVar9) {
            if (bVar10) {
              fVar57 = (float)uStack_1300;
              fVar44 = (float)(uStack_1300 >> 0x20);
              if ((bVar4 & 1) == 0) {
                fVar50 = (fVar57 + fVar50) * 0.5;
                fVar53 = (fVar44 + fVar53) * 0.5;
                uStack_1340 = CONCAT44(fVar53,fVar50);
                if (cStack_12c4 == '\x01') {
                  if ((int)uStack_12b0 == 0) {
                    FUN_1097114b0(lStack_12c0,puStack_12b8,&uStack_12b0);
                  }
                  if (*(long *)(lVar35 + 0x38) == 0) {
                    uVar39 = 0;
                  }
                  else {
                    uVar39 = *(undefined8 *)(*(long *)(lVar35 + 0x38) + 0x10);
                  }
                  (**(code **)(lVar35 + 0x20))
                            (uStack_1300,uStack_1300 >> 0x20,uStack_1340,fVar53,lVar35,puVar7,
                             &uStack_12b0,uVar39);
LAB_109717b00:
                  bVar10 = true;
                  uStack_1330 = uVar37;
                  puStack_12e0 = (undefined8 *)uStack_1340;
                  uStack_1300 = uVar37;
                }
                else {
                  if ((int)uStack_12b0 == 0) {
                    FUN_1097114b0(lStack_12c0,puStack_12b8,&uStack_12b0);
                  }
                  if (*(long *)(lVar35 + 0x38) == 0) {
                    uVar39 = 0;
                  }
                  else {
                    uVar39 = *(undefined8 *)(*(long *)(lVar35 + 0x38) + 0x10);
                  }
                  fVar50 = fVar50 + fVar51 * fVar53;
                  (**(code **)(lVar35 + 0x20))
                            (fVar57 + fVar51 * fVar44,fVar44,fVar50,fVar53,lVar35,puVar7,
                             &uStack_12b0,uVar39);
                  bVar10 = true;
                  puStack_12e0 = (undefined8 *)CONCAT44(fVar53,fVar50);
                  uStack_1300 = uVar37;
                }
                goto LAB_109717b6c;
              }
              if (cStack_12c4 != '\x01') {
                if ((int)uStack_12b0 == 0) {
                  FUN_1097114b0(lStack_12c0,puStack_12b8,&uStack_12b0);
                }
                if (*(long *)(lVar35 + 0x38) == 0) {
                  uVar39 = 0;
                }
                else {
                  uVar39 = *(undefined8 *)(*(long *)(lVar35 + 0x38) + 0x10);
                }
                fVar50 = fVar50 + fVar51 * fVar53;
                (**(code **)(lVar35 + 0x20))
                          (fVar57 + fVar51 * fVar44,fVar44,fVar50,uVar28,lVar35,puVar7,&uStack_12b0,
                           uVar39);
                goto LAB_109717e8c;
              }
              if ((int)uStack_12b0 == 0) {
                FUN_1097114b0(lStack_12c0,puStack_12b8,&uStack_12b0);
              }
              if (*(long *)(lVar35 + 0x38) == 0) {
                uVar39 = 0;
              }
              else {
                uVar39 = *(undefined8 *)(*(long *)(lVar35 + 0x38) + 0x10);
              }
              (**(code **)(lVar35 + 0x20))
                        (uStack_1300,uStack_1300 >> 0x20,uVar37,uVar28,lVar35,puVar7,&uStack_12b0,
                         uVar39);
LAB_109717b60:
              bVar10 = false;
              goto LAB_109717b6c;
            }
            if ((bVar4 & 1) != 0) {
              if (cStack_12c4 != '\x01') {
                if ((int)uStack_12b0 == 0) {
                  FUN_1097114b0(lStack_12c0,puStack_12b8,&uStack_12b0);
                }
                if (*(long *)(lVar35 + 0x38) == 0) {
                  uVar39 = 0;
                }
                else {
                  uVar39 = *(undefined8 *)(*(long *)(lVar35 + 0x38) + 8);
                }
                fVar50 = fVar50 + fVar51 * fVar53;
                (**(code **)(lVar35 + 0x18))(fVar50,uVar28,lVar35,puVar7,&uStack_12b0,uVar39);
LAB_109717e8c:
                bVar10 = false;
                uStack_1330 = CONCAT44(fVar53,fVar50);
                puStack_12e0 = (undefined8 *)uStack_1330;
                goto LAB_109717b6c;
              }
              if ((int)uStack_12b0 == 0) {
                FUN_1097114b0(lStack_12c0,puStack_12b8,&uStack_12b0);
              }
              if (*(long *)(lVar35 + 0x38) == 0) {
                uVar39 = 0;
              }
              else {
                uVar39 = *(undefined8 *)(*(long *)(lVar35 + 0x38) + 8);
              }
              (**(code **)(lVar35 + 0x18))(uVar37,uVar28,lVar35,puVar7,&uStack_12b0,uVar39);
              goto LAB_109717b60;
            }
            bVar10 = true;
            bVar9 = true;
            uStack_1300 = uVar37;
          }
          else {
            if ((bVar4 & 1) == 0) {
              if (!bVar6) {
                bVar9 = false;
                bVar6 = true;
                uStack_1320 = uVar37;
                uStack_1310 = uVar28;
                uStack_12f0 = uVar37;
                goto LAB_109717b74;
              }
              fVar50 = (fVar50 + (float)uVar21) * 0.5;
              fVar51 = (fVar53 + (float)(uVar21 >> 0x20)) * 0.5;
              uStack_1330 = CONCAT44(fVar51,fVar50);
              uStack_1360 = uStack_1330;
              if (cStack_12c4 == '\x01') {
                if ((int)uStack_12b0 == 0) {
                  bVar6 = true;
                  bVar10 = true;
                  puStack_12e0 = (undefined8 *)uStack_1330;
                  uStack_1300 = uVar37;
                  goto LAB_109717b6c;
                }
                bVar10 = false;
                if ((uStack_12b0._4_4_ == fStack_12a4) &&
                   (bVar10 = false, !NAN(fStack_12a8) && !NAN(fStack_12a0))) {
                  bVar10 = fStack_12a8 == fStack_12a0;
                }
                if (!bVar10) {
                  if (*(long *)(lStack_12c0 + 0x38) == 0) {
                    uVar39 = 0;
                  }
                  else {
                    uVar39 = *(undefined8 *)(*(long *)(lStack_12c0 + 0x38) + 8);
                  }
                  (**(code **)(lStack_12c0 + 0x18))(lStack_12c0,puStack_12b8,&uStack_12b0,uVar39);
                }
                if (*(long *)(lVar35 + 0x38) == 0) {
                  uVar39 = 0;
                }
                else {
                  uVar39 = *(undefined8 *)(*(long *)(lVar35 + 0x38) + 0x20);
                }
                (**(code **)(lVar35 + 0x30))(lVar35,puVar7,&uStack_12b0,uVar39);
                uStack_1340 = uStack_1330;
              }
              else {
                uStack_1340 = CONCAT44(fVar51,fVar50 + fStack_12c8 * fVar51);
                if ((int)uStack_12b0 == 0) {
                  bVar6 = true;
                  goto LAB_109717b00;
                }
                bVar10 = false;
                if ((uStack_12b0._4_4_ == fStack_12a4) &&
                   (bVar10 = false, !NAN(fStack_12a8) && !NAN(fStack_12a0))) {
                  bVar10 = fStack_12a8 == fStack_12a0;
                }
                if (!bVar10) {
                  if (*(long *)(lStack_12c0 + 0x38) == 0) {
                    uVar39 = 0;
                  }
                  else {
                    uVar39 = *(undefined8 *)(*(long *)(lStack_12c0 + 0x38) + 8);
                  }
                  (**(code **)(lStack_12c0 + 0x18))(lStack_12c0,puStack_12b8,&uStack_12b0,uVar39);
                }
                if (*(long *)(lVar35 + 0x38) == 0) {
                  uVar39 = 0;
                }
                else {
                  uVar39 = *(undefined8 *)(*(long *)(lVar35 + 0x38) + 0x20);
                }
                (**(code **)(lVar35 + 0x30))(lVar35,puVar7,&uStack_12b0,uVar39);
              }
              bVar6 = true;
              bVar10 = true;
              uStack_1300 = uVar37;
              puStack_12e0 = (undefined8 *)uStack_1340;
LAB_109718410:
              uStack_12b0 = 0;
              fStack_12a8 = 0.0;
              uStack_1330 = CONCAT44((int)((ulong)puStack_12e0 >> 0x20),(int)uStack_1330);
              uStack_1360 = uStack_1330;
            }
            else {
              uStack_1360 = uVar37;
              if (cStack_12c4 == '\x01') {
                if ((int)uStack_12b0 != 0) {
                  bVar9 = false;
                  if ((uStack_12b0._4_4_ == fStack_12a4) &&
                     (bVar9 = false, !NAN(fStack_12a8) && !NAN(fStack_12a0))) {
                    bVar9 = fStack_12a8 == fStack_12a0;
                  }
                  if (!bVar9) {
                    if (*(long *)(lStack_12c0 + 0x38) == 0) {
                      uVar39 = 0;
                    }
                    else {
                      uVar39 = *(undefined8 *)(*(long *)(lStack_12c0 + 0x38) + 8);
                    }
                    (**(code **)(lStack_12c0 + 0x18))(lStack_12c0,puStack_12b8,&uStack_12b0,uVar39);
                  }
                  if (*(long *)(lVar35 + 0x38) == 0) {
                    uVar39 = 0;
                  }
                  else {
                    uVar39 = *(undefined8 *)(*(long *)(lVar35 + 0x38) + 0x20);
                  }
                  (**(code **)(lVar35 + 0x30))(lVar35,puVar7,&uStack_12b0,uVar39);
                  goto LAB_109718410;
                }
              }
              else {
                puStack_12e0 = (undefined8 *)CONCAT44(fVar53,fVar50 + fStack_12c8 * fVar53);
                if ((int)uStack_12b0 != 0) {
                  bVar9 = false;
                  if ((uStack_12b0._4_4_ == fStack_12a4) &&
                     (bVar9 = false, !NAN(fStack_12a8) && !NAN(fStack_12a0))) {
                    bVar9 = fStack_12a8 == fStack_12a0;
                  }
                  if (!bVar9) {
                    if (*(long *)(lStack_12c0 + 0x38) == 0) {
                      uVar39 = 0;
                    }
                    else {
                      uVar39 = *(undefined8 *)(*(long *)(lStack_12c0 + 0x38) + 8);
                    }
                    (**(code **)(lStack_12c0 + 0x18))(lStack_12c0,puStack_12b8,&uStack_12b0,uVar39);
                  }
                  if (*(long *)(lVar35 + 0x38) == 0) {
                    uVar39 = 0;
                  }
                  else {
                    uVar39 = *(undefined8 *)(*(long *)(lVar35 + 0x38) + 0x20);
                  }
                  (**(code **)(lVar35 + 0x30))(lVar35,puVar7,&uStack_12b0,uVar39);
                  goto LAB_109718410;
                }
              }
            }
LAB_109717b6c:
            fStack_12a4 = SUB84(puStack_12e0,0);
            fStack_12a0 = (float)((ulong)puStack_12e0 >> 0x20);
            bVar9 = true;
            uVar37 = uStack_1330;
          }
LAB_109717b74:
          puVar7 = puStack_12b8;
          lVar35 = lStack_12c0;
          fVar50 = fStack_12c8;
          fVar51 = (float)uStack_1320;
          if (*pcVar41 == '\x01') {
            fVar57 = (float)(uStack_1300 >> 0x20);
            fVar53 = (float)uStack_1300;
            fVar44 = (float)uStack_1360;
            fVar65 = (float)(uStack_1360 >> 0x20);
            if (bVar6) {
              fVar68 = (float)uStack_1310;
              puStack_12e0 = puStack_12b8;
              uVar39 = uStack_12b0;
              if (bVar10) {
                fVar59 = (fVar53 + fVar51) * 0.5;
                fVar63 = (fVar57 + fVar68) * 0.5;
                if (cStack_12c4 == '\x01') {
                  if ((int)uStack_12b0 == 0) {
                    FUN_1097114b0(lStack_12c0,puStack_12b8,&uStack_12b0);
                  }
                  if (*(long *)(lVar35 + 0x38) == 0) {
                    uVar39 = 0;
                  }
                  else {
                    uVar39 = *(undefined8 *)(*(long *)(lVar35 + 0x38) + 0x10);
                  }
                  (**(code **)(lVar35 + 0x20))
                            (uStack_1300,fVar57,fVar59,fVar63,lVar35,puVar7,&uStack_12b0,uVar39);
                  fVar50 = fStack_12c8;
                  lVar35 = lStack_12c0;
                  puStack_12e0 = puStack_12b8;
                  uVar39 = uStack_12b0;
                  fStack_12a4 = fVar59;
                  fStack_12a0 = fVar63;
                }
                else {
                  if ((int)uStack_12b0 == 0) {
                    FUN_1097114b0(lStack_12c0,puStack_12b8,&uStack_12b0);
                  }
                  if (*(long *)(lVar35 + 0x38) == 0) {
                    uVar39 = 0;
                  }
                  else {
                    uVar39 = *(undefined8 *)(*(long *)(lVar35 + 0x38) + 0x10);
                  }
                  fVar59 = fVar59 + fVar50 * fVar63;
                  (**(code **)(lVar35 + 0x20))
                            (fVar53 + fVar50 * fVar57,fVar57,fVar59,fVar63,lVar35,puVar7,
                             &uStack_12b0,uVar39);
                  fVar50 = fStack_12c8;
                  lVar35 = lStack_12c0;
                  puStack_12e0 = puStack_12b8;
                  uVar39 = uStack_12b0;
                  fStack_12a4 = fVar59;
                  fStack_12a0 = fVar63;
                }
              }
              uStack_12b0._0_4_ = (int)uVar39;
              lStack_12c0 = lVar35;
              puStack_12b8 = puStack_12e0;
              fStack_12c8 = fVar50;
              uStack_12b0 = uVar39;
              if (bVar9) {
                if (cStack_12c4 == '\x01') {
                  bVar10 = (int)uStack_12b0 == 0;
                  if (bVar10) {
                    FUN_1097114b0(lVar35,puStack_12e0,&uStack_12b0);
                  }
                  pcVar19 = *(code **)(lVar35 + 0x20);
                  lVar25 = *(long *)(lVar35 + 0x38);
                  if (lVar25 == 0) {
                    uVar39 = 0;
                    uStack_1300 = uStack_1320;
                  }
                  else {
                    uStack_1300 = uStack_1320;
LAB_109717d14:
                    uVar39 = *(undefined8 *)(lVar25 + 0x10);
                  }
LAB_109717f1c:
                  (*pcVar19)(uStack_1300,uStack_1310,uStack_1360,uStack_1360 >> 0x20,lVar35,
                             puStack_12e0,&uStack_12b0,uVar39);
                  uStack_1310 = uStack_1360 >> 0x20;
                }
                else {
                  bVar10 = (int)uStack_12b0 == 0;
                  if (bVar10) {
                    FUN_1097114b0(lVar35,puStack_12e0,&uStack_12b0);
                  }
                  if (*(long *)(lVar35 + 0x38) == 0) {
                    uVar39 = 0;
                  }
                  else {
                    uVar39 = *(undefined8 *)(*(long *)(lVar35 + 0x38) + 0x10);
                  }
                  uStack_1360 = (ulong)(uint)(fVar44 + fVar50 * fVar65);
                  (**(code **)(lVar35 + 0x20))
                            (fVar51 + fVar50 * fVar68,uStack_1310,uStack_1360,(ulong)(uint)fVar65,
                             lVar35,puStack_12e0,&uStack_12b0,uVar39);
                  uStack_1310 = (ulong)(uint)fVar65;
                }
                goto LAB_109717f9c;
              }
              uStack_12b0._4_4_ = (float)((ulong)uVar39 >> 0x20);
              if (cStack_12c4 == '\x01') {
                if ((int)uStack_12b0 == 0) {
                  fStack_12a0 = (float)(uStack_12f0 >> 0x20);
                  fStack_12a4 = (float)uStack_12f0;
                }
                else {
                  if ((uStack_12b0._4_4_ != fStack_12a4) || (fStack_12a8 != fStack_12a0)) {
                    if (*(long *)(lVar35 + 0x38) == 0) {
                      uVar39 = 0;
                    }
                    else {
                      uVar39 = *(undefined8 *)(*(long *)(lVar35 + 0x38) + 8);
                    }
                    (**(code **)(lVar35 + 0x18))(lVar35,puStack_12e0,&uStack_12b0,uVar39);
                  }
                  if (*(long *)(lVar35 + 0x38) == 0) {
                    uVar39 = 0;
                  }
                  else {
                    uVar39 = *(undefined8 *)(*(long *)(lVar35 + 0x38) + 0x20);
                  }
                  (**(code **)(lVar35 + 0x30))(lVar35,puStack_12e0,&uStack_12b0,uVar39);
                  uStack_1360._0_4_ = fVar51;
LAB_109718474:
                  uStack_12b0 = 0;
                  fStack_12a8 = 0.0;
                  fStack_12a4 = (float)uStack_1360;
                  fStack_12a0 = fVar68;
                  if (cStack_12c4 != '\x01') {
                    uStack_1360._0_4_ = fVar51 + fStack_12c8 * fVar68;
                    uVar39 = uStack_12b0;
                    fVar50 = fStack_12a4;
                    goto LAB_109718128;
                  }
                }
                puVar7 = puStack_12b8;
                lVar35 = lStack_12c0;
                FUN_1097114b0(lStack_12c0,puStack_12b8,&uStack_12b0);
                if (*(long *)(lVar35 + 0x38) == 0) {
                  uVar39 = 0;
                }
                else {
                  uVar39 = *(undefined8 *)(*(long *)(lVar35 + 0x38) + 0x10);
                }
                (**(code **)(lVar35 + 0x20))
                          (uStack_1320,uStack_1310,uStack_1320,uStack_1310,lVar35,puVar7,
                           &uStack_12b0,uVar39);
                uStack_1360 = uStack_1320;
              }
              else {
                uStack_1360._0_4_ = fVar51 + fVar50 * fVar68;
                fVar50 = (float)uStack_1360;
                if ((int)uStack_12b0 != 0) {
                  if ((uStack_12b0._4_4_ != fStack_12a4) || (fStack_12a8 != fStack_12a0)) {
                    if (*(long *)(lVar35 + 0x38) == 0) {
                      uVar39 = 0;
                    }
                    else {
                      uVar39 = *(undefined8 *)(*(long *)(lVar35 + 0x38) + 8);
                    }
                    (**(code **)(lVar35 + 0x18))(lVar35,puStack_12e0,&uStack_12b0,uVar39);
                  }
                  if (*(long *)(lVar35 + 0x38) == 0) {
                    uVar39 = 0;
                  }
                  else {
                    uVar39 = *(undefined8 *)(*(long *)(lVar35 + 0x38) + 0x20);
                  }
                  (**(code **)(lVar35 + 0x30))(lVar35,puStack_12e0,&uStack_12b0,uVar39);
                  goto LAB_109718474;
                }
LAB_109718128:
                fStack_12a4 = fVar50;
                uStack_12b0 = uVar39;
                puVar7 = puStack_12b8;
                lVar35 = lStack_12c0;
                uStack_1360 = (ulong)(uint)(float)uStack_1360;
                fStack_12a0 = fVar68;
                FUN_1097114b0(lStack_12c0,puStack_12b8,&uStack_12b0);
                if (*(long *)(lVar35 + 0x38) == 0) {
                  uVar39 = 0;
                }
                else {
                  uVar39 = *(undefined8 *)(*(long *)(lVar35 + 0x38) + 0x10);
                }
                (**(code **)(lVar35 + 0x20))
                          (uStack_1360,uStack_1310,uStack_1360,uStack_1310,lVar35,puVar7,
                           &uStack_12b0,uVar39);
              }
LAB_109717f9c:
              fStack_12a4 = (float)uStack_1360;
              fStack_12a0 = (float)uStack_1310;
              uVar37 = uStack_1310;
            }
            else {
              puStack_12e0 = puStack_12b8;
              if (bVar10) {
                if (bVar9) {
                  if (cStack_12c4 == '\x01') {
                    if ((int)uStack_12b0 == 0) {
                      FUN_1097114b0(lStack_12c0,puStack_12b8,&uStack_12b0);
                    }
                    pcVar19 = *(code **)(lVar35 + 0x20);
                    lVar25 = *(long *)(lVar35 + 0x38);
                    uStack_1310 = uStack_1300 >> 0x20;
                    if (lVar25 != 0) goto LAB_109717d14;
                    uVar39 = 0;
                    goto LAB_109717f1c;
                  }
                  if ((int)uStack_12b0 == 0) {
                    FUN_1097114b0(lStack_12c0,puStack_12b8,&uStack_12b0);
                  }
                  if (*(long *)(lVar35 + 0x38) == 0) {
                    uVar39 = 0;
                  }
                  else {
                    uVar39 = *(undefined8 *)(*(long *)(lVar35 + 0x38) + 0x10);
                  }
                  uStack_1310 = (ulong)(uint)fVar65;
                  uStack_1360 = (ulong)(uint)(fVar44 + fVar50 * fVar65);
                  (**(code **)(lVar35 + 0x20))
                            (fVar53 + fVar50 * fVar57,fVar57,lVar35,puVar7,&uStack_12b0,uVar39);
                  goto LAB_109717f9c;
                }
              }
              else if (bVar9) {
                if (cStack_12c4 == '\x01') {
                  if ((int)uStack_12b0 == 0) {
                    FUN_1097114b0(lStack_12c0,puStack_12b8,&uStack_12b0);
                  }
                  if (*(long *)(lVar35 + 0x38) == 0) {
                    uVar39 = 0;
                  }
                  else {
                    uVar39 = *(undefined8 *)(*(long *)(lVar35 + 0x38) + 8);
                  }
                  uStack_1310 = uStack_1360 >> 0x20;
                  (**(code **)(lVar35 + 0x18))(lVar35,puVar7,&uStack_12b0,uVar39);
                }
                else {
                  if ((int)uStack_12b0 == 0) {
                    FUN_1097114b0(lStack_12c0,puStack_12b8,&uStack_12b0);
                  }
                  if (*(long *)(lVar35 + 0x38) == 0) {
                    uVar39 = 0;
                  }
                  else {
                    uVar39 = *(undefined8 *)(*(long *)(lVar35 + 0x38) + 8);
                  }
                  uStack_1310 = (ulong)(uint)fVar65;
                  uStack_1360 = (ulong)(uint)(fVar44 + fVar50 * fVar65);
                  (**(code **)(lVar35 + 0x18))(lVar35,puVar7,&uStack_12b0,uVar39);
                }
                goto LAB_109717f9c;
              }
            }
            puVar7 = puStack_12b8;
            lVar35 = lStack_12c0;
            if ((int)uStack_12b0 != 0) {
              uVar37 = (ulong)(uint)uStack_12b0._4_4_;
              if ((uStack_12b0._4_4_ != fStack_12a4) || (fStack_12a8 != fStack_12a0)) {
                if (*(long *)(lStack_12c0 + 0x38) == 0) {
                  uVar39 = 0;
                }
                else {
                  uVar39 = *(undefined8 *)(*(long *)(lStack_12c0 + 0x38) + 8);
                }
                (**(code **)(lStack_12c0 + 0x18))(lStack_12c0,puStack_12b8,&uStack_12b0,uVar39);
              }
              if (*(long *)(lVar35 + 0x38) == 0) {
                uVar39 = 0;
              }
              else {
                uVar39 = *(undefined8 *)(*(long *)(lVar35 + 0x38) + 0x20);
              }
              (**(code **)(lVar35 + 0x30))(lVar35,puVar7,&uStack_12b0,uVar39);
            }
            bVar6 = false;
            bVar10 = false;
            bVar9 = false;
            uStack_12b0 = 0;
            fStack_12a8 = 0.0;
            fStack_12a4 = 0.0;
            fStack_12a0 = 0.0;
            uStack_1360 = uVar37;
            uStack_1310 = uVar37;
            uStack_1300 = uVar37;
          }
          uStack_12f0 = CONCAT44((int)uStack_1310,(float)uStack_12f0);
          uVar21 = CONCAT44((int)uStack_1310,fVar51);
          pcVar41 = pcVar41 + 0xc;
          lVar43 = lVar43 + -0xc;
        } while (lVar43 != 0);
      }
    }
    if ((int)uStack_b8 != 0) {
      _free(lStack_b0);
    }
    if (((ulong)puVar13 & 1) != 0) goto LAB_10971a1fc;
  }
  lVar43 = *(long *)(param_3 + 0x20) + 0xe8;
  func_0x000109721c94();
  if ((*(long *)(lVar43 + 0x40) != 0) && ((uint)param_5 < *(uint *)(lVar43 + 0xc0))) {
    uVar36 = *(undefined8 *)(param_3 + 0x80);
    uVar3 = *(undefined4 *)(param_3 + 0x78);
    uVar39 = *(undefined8 *)(lVar43 + 0x90);
    FUN_109700890(uVar39,param_5);
    uVar14 = *(undefined8 *)(lVar43 + 0x80);
    FUN_10970098c();
    uStack_b8 = uVar14;
    lStack_b0 = param_5;
    FUN_1097470d0(&uStack_1260,&uStack_b8,lVar43,uVar39,uVar36,uVar3);
    bStack_228 = 0;
    iVar34 = 200000;
    uVar18 = uStack_1258._4_4_;
    uVar24 = (uint)(float)uStack_1258;
    do {
      dVar71 = dStack_f8;
      dVar47 = dStack_100;
      dVar70 = adStack_1248[0xb];
      dVar69 = adStack_1248[10];
      dVar67 = adStack_1248[9];
      dVar66 = adStack_1248[8];
      dVar62 = adStack_1248[7];
      dVar60 = adStack_1248[6];
      dVar56 = adStack_1248[5];
      dVar49 = adStack_1248[4];
      uVar23 = uVar18 + 1;
      if (uVar23 <= uVar24) {
        uVar12 = (uint)*(byte *)(uStack_1260 + (ulong)uVar18);
        uStack_1258 = CONCAT44(uVar23,(float)uStack_1258);
        if (*(byte *)(uStack_1260 + (ulong)uVar18) != 0xc) goto LAB_109718784;
        uVar18 = uVar18 + 2;
        if (uVar18 <= uVar24) {
          uVar12 = *(byte *)(uStack_1260 + (ulong)uVar23) | 0x100;
          uStack_1258 = CONCAT44(uVar18,(float)uStack_1258);
          uVar23 = uVar18;
          goto LAB_109718784;
        }
        uVar12 = 0xffff;
LAB_10971a01c:
        FUN_1097159e4(uVar12,&uStack_1260);
        goto LAB_109719fe4;
      }
      uVar12 = 0xe;
      uVar23 = uVar18;
      if (uStack_214 != 0) {
        uVar12 = 0xb;
      }
LAB_109718784:
      uVar18 = uStack_1250._4_4_;
      if (0xfe < uVar12) {
        if (uVar12 < 0x123) {
          if (uVar12 == 0xff) {
            func_0x000109715858(&uStack_1250,&uStack_1260);
            goto LAB_109719fe4;
          }
          if (uVar12 != 0x122) goto LAB_10971a01c;
          if (uStack_1250._4_4_ == 7) {
            dVar47 = dStack_100 + adStack_1248[0] + adStack_1248[1];
            dVar62 = dStack_f8 + adStack_1248[2];
            dVar67 = dVar47 + adStack_1248[3];
            FUN_109747978(*(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x50),
                          dStack_100 + adStack_1248[0],dStack_f8,dVar47,dVar62,dVar67,dVar62,
                          &fStack_12c8);
            dVar56 = dVar67 + dVar49 + dVar56;
            dVar66 = dVar56 + dVar60;
            dStack_100 = dVar67;
            dStack_f8 = dVar62;
            FUN_109747978(*(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x50),
                          dVar67 + dVar49,dVar62,dVar56,dVar71,dVar66,dVar71,&fStack_12c8);
            goto LAB_1097199c4;
          }
        }
        else if (uVar12 == 0x123) {
          if (uStack_1250._4_4_ == 0xd) {
            dVar47 = dStack_100 + adStack_1248[0] + adStack_1248[2] + adStack_1248[4];
            dVar49 = dStack_f8 + adStack_1248[1] + adStack_1248[3] + adStack_1248[5];
            FUN_109747978(*(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x50),
                          &fStack_12c8);
            dStack_100 = dVar47;
            dStack_f8 = dVar49;
            FUN_109747978(*(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x50),
                          &fStack_12c8);
            dStack_100 = dVar47 + dVar60 + dVar66 + dVar69;
            dStack_f8 = dVar49 + dVar62 + dVar67 + dVar70;
            goto LAB_1097199cc;
          }
        }
        else if (uVar12 == 0x124) {
          if (uStack_1250._4_4_ == 9) {
            dVar47 = dStack_f8 + adStack_1248[1] + adStack_1248[3];
            dVar49 = dStack_100 + adStack_1248[0] + adStack_1248[2] + adStack_1248[4];
            FUN_109747978(*(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x50),
                          &fStack_12c8);
            dVar56 = dVar49 + dVar56;
            dVar60 = dVar56 + dVar60;
            dVar66 = dVar60 + dVar66;
            dStack_100 = dVar49;
            dStack_f8 = dVar47;
            FUN_109747978(*(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x50),dVar56,
                          dVar47,dVar60,dVar47 + dVar62,dVar66,dVar71,&fStack_12c8);
LAB_1097199c4:
            dStack_100 = dVar66;
            goto code_r0x0001097199c8;
          }
        }
        else {
          if (uVar12 != 0x125) goto LAB_10971a01c;
          if (uStack_1250._4_4_ == 0xb) {
            dVar47 = 0.0;
            dVar49 = 0.0;
            uVar21 = 0xfffffffffffffffe;
            pdVar16 = adStack_1248;
            do {
              dVar47 = dVar47 + *pdVar16;
              dVar49 = dVar49 + pdVar16[1];
              uVar21 = uVar21 + 2;
              pdVar16 = pdVar16 + 2;
            } while (uVar21 < 8);
            dVar67 = dStack_100 + adStack_1248[0] + adStack_1248[2] + adStack_1248[4];
            dVar69 = dStack_f8 + adStack_1248[1] + adStack_1248[3] + adStack_1248[5];
            dVar62 = dVar67 + adStack_1248[6];
            dVar66 = dVar69 + adStack_1248[7];
            dVar70 = dVar62 + adStack_1248[8];
            dVar71 = dVar66 + adStack_1248[9];
            dVar60 = dVar70 + adStack_1248[10];
            dVar56 = dStack_f8;
            if (ABS(dVar47) <= ABS(dVar49)) {
              dVar60 = dStack_100;
              dVar56 = dVar71 + adStack_1248[10];
            }
            FUN_109747978(*(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x50),
                          &fStack_12c8);
            dStack_100 = dVar67;
            dStack_f8 = dVar69;
            FUN_109747978(*(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x50),dVar62,
                          dVar66,dVar70,dVar71,dVar60,dVar56,&fStack_12c8);
            dStack_100 = dVar60;
            dStack_f8 = dVar56;
            goto LAB_1097199cc;
          }
        }
        uStack_1258 = CONCAT44(uVar24 + 1,(float)uStack_1258);
        goto LAB_1097199cc;
      }
      uVar39 = 2;
      uVar8 = uStack_1250._1_7_;
      puVar15 = auStack_110;
      uStack_1250._4_4_ = uVar18;
      switch(uVar12) {
      case 1:
      case 0x12:
        iStack_224 = iStack_224 + (uVar18 >> 1);
        break;
      default:
        goto LAB_10971a01c;
      case 3:
      case 0x17:
        iStack_220 = iStack_220 + (uVar18 >> 1);
        break;
      case 4:
        if (uVar18 == 0) {
          uStack_1250 = CONCAT71(uVar8,1);
          uRam000000011382ab30 = 0;
          dVar49 = 0.0;
        }
        else {
          uStack_1250 = CONCAT44(uVar18 - 1,(undefined4)uStack_1250);
          dVar49 = adStack_1248[uVar18 - 1];
        }
        dVar49 = dStack_f8 + dVar49;
        func_0x0001097477c8(*(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x50),
                            dStack_100,dVar49,&fStack_12c8);
        goto code_r0x00010971970c;
      case 5:
        if (1 < uVar18) {
          uVar24 = 0;
          do {
            if (uVar24 < uVar18) {
              pdVar16 = adStack_1248 + uVar24;
            }
            else {
              uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
              pdVar16 = (double *)0x11382ab30;
              uRam000000011382ab30 = 0;
            }
            if (uVar24 + 1 < uVar18) {
              dVar47 = adStack_1248[uVar24 + 1];
            }
            else {
              uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
              uRam000000011382ab30 = 0;
              dVar47 = 0.0;
            }
            dVar49 = dStack_100 + *pdVar16;
            dVar47 = dStack_f8 + dVar47;
            func_0x0001097478a4(*(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x50),
                                dVar49,dVar47,&fStack_12c8);
            dStack_100 = dVar49;
            dStack_f8 = dVar47;
            uVar23 = uVar24 + 4;
            uVar24 = uVar24 + 2;
            uVar18 = uStack_1250._4_4_;
          } while (uVar23 <= uStack_1250._4_4_);
        }
        goto code_r0x000109719fdc;
      case 6:
        if (uVar18 < 2) {
          uVar24 = 0;
        }
        else {
          uVar18 = 0;
          do {
            dVar47 = dStack_f8;
            if (uVar18 < uStack_1250._4_4_) {
              dVar49 = adStack_1248[uVar18];
            }
            else {
              uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
              uRam000000011382ab30 = 0;
              dVar49 = 0.0;
            }
            dVar49 = dStack_100 + dVar49;
            func_0x0001097478a4(*(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x50),
                                dVar49,dStack_f8,&fStack_12c8);
            dStack_100 = dVar49;
            dStack_f8 = dVar47;
            if (uVar18 + 1 < uStack_1250._4_4_) {
              dVar56 = adStack_1248[uVar18 + 1];
            }
            else {
              uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
              uRam000000011382ab30 = 0;
              dVar56 = 0.0;
            }
            dVar47 = dVar47 + dVar56;
            func_0x0001097478a4(*(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x50),
                                dVar49,dVar47,&fStack_12c8);
            dStack_100 = dVar49;
            dStack_f8 = dVar47;
            uVar24 = uVar18 + 2;
            uVar23 = uVar18 + 4;
            uVar18 = uVar24;
          } while (uVar23 <= uStack_1250._4_4_);
        }
        dVar71 = dStack_f8;
        if (uVar24 < uStack_1250._4_4_) {
          dVar47 = dStack_100 + adStack_1248[uVar24];
          func_0x0001097478a4(*(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x50),dVar47
                              ,dStack_f8,&fStack_12c8);
          dStack_100 = dVar47;
code_r0x0001097199c8:
          dStack_f8 = dVar71;
        }
        break;
      case 7:
        if (uVar18 < 2) {
          uVar24 = 0;
        }
        else {
          uVar18 = 0;
          do {
            dVar47 = dStack_100;
            if (uVar18 < uStack_1250._4_4_) {
              dVar49 = adStack_1248[uVar18];
            }
            else {
              uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
              uRam000000011382ab30 = 0;
              dVar49 = 0.0;
            }
            dVar49 = dStack_f8 + dVar49;
            func_0x0001097478a4(*(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x50),
                                dStack_100,dVar49,&fStack_12c8);
            dStack_100 = dVar47;
            dStack_f8 = dVar49;
            if (uVar18 + 1 < uStack_1250._4_4_) {
              dVar56 = adStack_1248[uVar18 + 1];
            }
            else {
              uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
              uRam000000011382ab30 = 0;
              dVar56 = 0.0;
            }
            dVar47 = dVar47 + dVar56;
            func_0x0001097478a4(*(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x50),
                                dVar47,dVar49,&fStack_12c8);
            dStack_100 = dVar47;
            dStack_f8 = dVar49;
            uVar24 = uVar18 + 2;
            uVar23 = uVar18 + 4;
            uVar18 = uVar24;
          } while (uVar23 <= uStack_1250._4_4_);
        }
        dVar60 = dStack_100;
        if (uVar24 < uStack_1250._4_4_) {
          dVar56 = dStack_f8 + adStack_1248[uVar24];
          func_0x0001097478a4(*(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x50),
                              dStack_100,dVar56,&fStack_12c8);
code_r0x00010971989c:
          dStack_100 = dVar60;
          dStack_f8 = dVar56;
        }
        break;
      case 8:
        if (5 < uVar18) {
          uVar24 = 0;
          do {
            if (uVar24 < uVar18) {
              pdVar16 = adStack_1248 + uVar24;
            }
            else {
              uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
              pdVar16 = (double *)0x11382ab30;
              uRam000000011382ab30 = 0;
            }
            if (uVar24 + 1 < uVar18) {
              dVar47 = adStack_1248[uVar24 + 1];
            }
            else {
              uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
              uRam000000011382ab30 = 0;
              dVar47 = 0.0;
            }
            if (uVar24 + 2 < uVar18) {
              pdVar17 = adStack_1248 + (uVar24 + 2);
            }
            else {
              uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
              pdVar17 = (double *)0x11382ab30;
              uRam000000011382ab30 = 0;
            }
            if (uVar24 + 3 < uVar18) {
              dVar49 = adStack_1248[uVar24 + 3];
            }
            else {
              uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
              uRam000000011382ab30 = 0;
              dVar49 = 0.0;
            }
            dVar56 = *pdVar17;
            if (uVar24 + 4 < uVar18) {
              pdVar17 = adStack_1248 + (uVar24 + 4);
            }
            else {
              uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
              pdVar17 = (double *)0x11382ab30;
              uRam000000011382ab30 = 0;
            }
            if (uVar24 + 5 < uVar18) {
              dVar60 = adStack_1248[uVar24 + 5];
            }
            else {
              uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
              uRam000000011382ab30 = 0;
              dVar60 = 0.0;
            }
            dVar66 = dStack_100 + *pdVar16;
            dVar47 = dStack_f8 + dVar47;
            dVar62 = *pdVar17;
            FUN_109747978(*(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x50),
                          &fStack_12c8);
            dStack_100 = dVar66 + dVar56 + dVar62;
            dStack_f8 = dVar47 + dVar49 + dVar60;
            uVar23 = uVar24 + 0xc;
            uVar24 = uVar24 + 6;
            uVar18 = uStack_1250._4_4_;
          } while (uVar23 <= uStack_1250._4_4_);
        }
        goto code_r0x000109719fdc;
      case 10:
        goto code_r0x000109719764;
      case 0xb:
        if (uStack_214 == 0) {
          bStack_218 = 1;
          plVar20 = (long *)0x11382ab30;
          uRam000000011382ab38 = 0;
          uRam000000011382ab40 = 0;
          uRam000000011382ab30 = 0;
        }
        else {
          uStack_214 = uStack_214 - 1;
          plVar20 = alStack_210 + (ulong)uStack_214 * 3;
        }
        uStack_1258 = plVar20[1];
        uStack_1260 = *plVar20;
        lStack_238 = uStack_1258;
        lStack_240 = uStack_1260;
        lStack_230 = plVar20[2];
        goto LAB_109719fe4;
      case 0xe:
        bStack_228 = 1;
        break;
      case 0xf:
        FUN_109747748(&uStack_1260);
        break;
      case 0x10:
        FUN_1097474dc(&uStack_1260);
        if (uStack_1250._4_4_ == 0) {
          uVar24 = 0;
          uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
          uRam000000011382ab30 = 0;
          uVar18 = 0;
        }
        else {
          uVar18 = uStack_1250._4_4_ - 1;
          uStack_1250 = CONCAT44(uVar18,(undefined4)uStack_1250);
          uVar24 = (uint)adStack_1248[uVar18];
          if ((int)uVar24 < 0) {
            uVar24 = 0;
            uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
          }
        }
        uVar23 = uVar18 + uVar24 * ~uStack_d8;
        if (uVar18 < uVar23) {
          uStack_1258 = CONCAT44((int)(float)uStack_1258 + 1,(float)uStack_1258);
        }
        else {
          if (uVar24 != 0) {
            uVar21 = 0;
            uVar12 = uVar18 - uVar24 * uStack_d8;
            do {
              uVar33 = 0;
              if (uVar12 < 0x202) {
                uVar33 = 0x201 - uVar12;
              }
              uVar37 = (ulong)uStack_d8;
              if ((ulong)uVar33 <= (ulong)uStack_d8) {
                uVar37 = (ulong)uVar33;
              }
              uVar38 = uVar23 + uVar24 + uStack_d8 * (int)uVar21;
              uVar33 = 0;
              if (uVar38 < 0x202) {
                uVar33 = 0x201 - uVar38;
              }
              if (uStack_d8 <= uVar33) {
                uVar33 = uStack_d8;
              }
              uVar38 = uVar23 + (int)uVar21;
              if (uVar38 < uVar18) {
                pdVar16 = adStack_1248 + uVar38;
                dVar47 = *pdVar16;
              }
              else {
                uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
                pdVar16 = (double *)0x11382ab30;
                uRam000000011382ab30 = 0;
                dVar47 = 0.0;
              }
              dVar49 = 0.0;
              if (((cStack_c0 != '\0') && (uStack_cc != 0)) && (uStack_cc == uVar33)) {
                pdVar17 = adStack_1248 + uVar12;
                pfVar29 = pfStack_c8;
                do {
                  dVar49 = dVar49 + *pdVar17 * (double)*pfVar29;
                  uVar37 = uVar37 - 1;
                  pdVar17 = pdVar17 + 1;
                  pfVar29 = pfVar29 + 1;
                } while (uVar37 != 0);
              }
              *pdVar16 = dVar47 + dVar49;
              uVar21 = uVar21 + 1;
              uVar12 = uVar12 + uStack_d8;
            } while (uVar21 != uVar24);
          }
          if (uVar18 < uVar24 * uStack_d8) {
            uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
          }
          else {
            uStack_1250 = CONCAT44(uVar18 - uVar24 * uStack_d8,(undefined4)uStack_1250);
          }
        }
        goto LAB_109719fe4;
      case 0x13:
      case 0x14:
        if (bStack_226 != 1) {
          iStack_220 = iStack_220 + (uVar18 >> 1);
          uStack_21c = iStack_220 + iStack_224 + 7U >> 3;
          bStack_226 = 1;
        }
        if (uVar23 + uStack_21c <= uVar24) {
          uStack_1250 = uStack_1250 & 0xffffffff;
          uStack_1258 = CONCAT44(uVar23 + uStack_21c,(float)uStack_1258);
        }
        goto LAB_109719fe4;
      case 0x15:
        if (uVar18 == 0) {
          pdVar16 = (double *)0x11382ab30;
code_r0x00010971a08c:
          uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
          uRam000000011382ab30 = 0;
          dVar47 = 0.0;
        }
        else {
          uVar24 = uVar18 - 1;
          uStack_1250 = CONCAT44(uVar24,(undefined4)uStack_1250);
          pdVar16 = adStack_1248 + uVar24;
          if (uVar24 == 0) goto code_r0x00010971a08c;
          uStack_1250 = CONCAT44(uVar18 - 2,(undefined4)uStack_1250);
          dVar47 = adStack_1248[uVar18 - 2];
        }
        dVar47 = dStack_100 + dVar47;
        dVar49 = dStack_f8 + *pdVar16;
        func_0x0001097477c8(*(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x50),dVar47,
                            dVar49,&fStack_12c8,auStack_110,2);
code_r0x00010971970c:
        dStack_100 = dVar47;
        dStack_f8 = dVar49;
code_r0x000109719714:
        if ((bStack_227 & 1) == 0) {
          if ((bStack_226 & 1) == 0) {
            iStack_220 = iStack_220 + (uStack_1250._4_4_ >> 1);
            uStack_21c = iStack_220 + iStack_224 + 7U >> 3;
            bStack_226 = 1;
          }
          bStack_227 = 1;
        }
        break;
      case 0x16:
        if (uVar18 == 0) {
          uStack_1250 = CONCAT71(uVar8,1);
          uRam000000011382ab30 = 0;
          dVar47 = 0.0;
        }
        else {
          uStack_1250 = CONCAT44(uVar18 - 1,(undefined4)uStack_1250);
          dVar47 = adStack_1248[uVar18 - 1];
        }
        dVar47 = dStack_100 + dVar47;
        func_0x0001097477c8(*(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x50),dVar47,
                            dStack_f8,&fStack_12c8,auStack_110,2);
        dStack_100 = dVar47;
        dStack_f8 = dVar71;
        goto code_r0x000109719714;
      case 0x18:
        if (7 < uVar18) {
          uVar24 = 0;
          do {
            uVar23 = uVar24;
            uVar24 = uStack_1250._4_4_;
            if (uVar23 < uStack_1250._4_4_) {
              pdVar16 = adStack_1248 + uVar23;
            }
            else {
              uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
              pdVar16 = (double *)0x11382ab30;
              uRam000000011382ab30 = 0;
            }
            if (uVar23 + 1 < uVar24) {
              dVar47 = adStack_1248[uVar23 + 1];
            }
            else {
              uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
              uRam000000011382ab30 = 0;
              dVar47 = 0.0;
            }
            if (uVar23 + 2 < uVar24) {
              pdVar17 = adStack_1248 + (uVar23 + 2);
            }
            else {
              uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
              pdVar17 = (double *)0x11382ab30;
              uRam000000011382ab30 = 0;
            }
            if (uVar23 + 3 < uVar24) {
              dVar49 = adStack_1248[uVar23 + 3];
            }
            else {
              uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
              uRam000000011382ab30 = 0;
              dVar49 = 0.0;
            }
            if (uVar23 + 4 < uVar24) {
              pdVar26 = adStack_1248 + (uVar23 + 4);
            }
            else {
              uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
              pdVar26 = (double *)0x11382ab30;
              uRam000000011382ab30 = 0;
            }
            if (uVar23 + 5 < uVar24) {
              dVar56 = adStack_1248[uVar23 + 5];
            }
            else {
              uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
              uRam000000011382ab30 = 0;
              dVar56 = 0.0;
            }
            dVar60 = dStack_100 + *pdVar16 + *pdVar17 + *pdVar26;
            dVar56 = dStack_f8 + dVar47 + dVar49 + dVar56;
            FUN_109747978(*(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x50),
                          &fStack_12c8);
            dStack_100 = dVar60;
            dStack_f8 = dVar56;
            uVar24 = uVar23 + 6;
          } while (uVar23 + 0xc <= uVar18 - 2);
          uVar18 = uStack_1250._4_4_;
          if (uVar24 < uStack_1250._4_4_) {
            pdVar16 = adStack_1248 + uVar24;
          }
          else {
            uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
            pdVar16 = (double *)0x11382ab30;
            uRam000000011382ab30 = 0;
          }
          if (uVar23 + 7 < uVar18) {
            dVar47 = adStack_1248[uVar23 + 7];
          }
          else {
            uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
            uRam000000011382ab30 = 0;
            dVar47 = 0.0;
          }
          dVar60 = dVar60 + *pdVar16;
          dVar56 = dVar56 + dVar47;
          func_0x0001097478a4(*(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x50),dVar60
                              ,dVar56,&fStack_12c8);
          goto code_r0x00010971989c;
        }
        break;
      case 0x19:
        if (7 < uVar18) {
          uVar21 = 0;
          pdVar16 = adStack_1248;
          do {
            uVar37 = uStack_1250 >> 0x20;
            pdVar17 = pdVar16;
            if (uVar37 <= uVar21) {
              uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
              pdVar17 = (double *)0x11382ab30;
              uRam000000011382ab30 = 0;
            }
            if (uVar21 + 1 < uVar37) {
              dVar47 = pdVar16[1];
            }
            else {
              uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
              uRam000000011382ab30 = 0;
              dVar47 = 0.0;
            }
            dVar49 = dStack_100 + *pdVar17;
            dVar47 = dStack_f8 + dVar47;
            func_0x0001097478a4(*(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x50),
                                dVar49,dVar47,&fStack_12c8);
            dStack_100 = dVar49;
            dStack_f8 = dVar47;
            pdVar16 = pdVar16 + 2;
            iVar40 = (int)uVar21;
            uVar21 = uVar21 + 2;
          } while (iVar40 + 4U <= uVar18 - 6);
          uVar18 = uVar18 & 0xfffffffe;
          uVar24 = uVar18 - 6;
          uVar23 = uStack_1250._4_4_;
          if (uVar24 < uStack_1250._4_4_) {
            pdVar16 = adStack_1248 + uVar24;
          }
          else {
            uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
            pdVar16 = (double *)0x11382ab30;
            uRam000000011382ab30 = 0;
          }
          if ((uVar24 | 1) < uVar23) {
            dVar56 = adStack_1248[uVar24 | 1];
          }
          else {
            uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
            uRam000000011382ab30 = 0;
            dVar56 = 0.0;
          }
          dVar60 = *pdVar16;
          if (uVar18 - 4 < uVar23) {
            pdVar16 = adStack_1248 + (uVar18 - 4);
          }
          else {
            uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
            pdVar16 = (double *)0x11382ab30;
            uRam000000011382ab30 = 0;
          }
          if (uVar18 - 3 < uVar23) {
            dVar62 = adStack_1248[uVar18 - 3];
          }
          else {
            uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
            uRam000000011382ab30 = 0;
            dVar62 = 0.0;
          }
          dVar66 = *pdVar16;
          if (uVar18 - 2 < uVar23) {
            pdVar16 = adStack_1248 + (uVar18 - 2);
          }
          else {
            uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
            pdVar16 = (double *)0x11382ab30;
            uRam000000011382ab30 = 0;
          }
          if (uVar18 - 1 < uVar23) {
            dVar67 = adStack_1248[uVar18 - 1];
          }
          else {
            uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
            uRam000000011382ab30 = 0;
            dVar67 = 0.0;
          }
          dVar69 = *pdVar16;
          FUN_109747978(*(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x50),&fStack_12c8
                       );
          dStack_100 = dVar49 + dVar60 + dVar66 + dVar69;
          dStack_f8 = dVar47 + dVar56 + dVar62 + dVar67;
        }
        goto code_r0x000109719fdc;
      case 0x1a:
        if ((uVar18 & 1 | 4) <= uVar18) {
          uVar24 = uVar18 & 1;
          if ((uStack_1250 & 0x100000000) != 0) {
            dVar47 = dStack_100 + adStack_1248[0];
          }
          do {
            if (uVar24 < uVar18) {
              dVar49 = adStack_1248[uVar24];
            }
            else {
              uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
              uRam000000011382ab30 = 0;
              dVar49 = 0.0;
            }
            if (uVar24 + 1 < uVar18) {
              pdVar16 = adStack_1248 + (uVar24 + 1);
            }
            else {
              uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
              pdVar16 = (double *)0x11382ab30;
              uRam000000011382ab30 = 0;
            }
            if (uVar24 + 2 < uVar18) {
              dVar56 = adStack_1248[uVar24 + 2];
            }
            else {
              uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
              uRam000000011382ab30 = 0;
              dVar56 = 0.0;
            }
            if (uVar24 + 3 < uVar18) {
              dVar60 = adStack_1248[uVar24 + 3];
            }
            else {
              uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
              uRam000000011382ab30 = 0;
              dVar60 = 0.0;
            }
            dVar62 = dVar47 + *pdVar16;
            dVar56 = dStack_f8 + dVar49 + dVar56;
            dVar60 = dVar56 + dVar60;
            FUN_109747978(*(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x50),dVar47,
                          dStack_f8 + dVar49,dVar62,dVar56,dVar62,dVar60,&fStack_12c8);
            dStack_100 = dVar62;
            dStack_f8 = dVar60;
            uVar23 = uVar24 + 8;
            uVar24 = uVar24 + 4;
            dVar47 = dVar62;
            uVar18 = uStack_1250._4_4_;
          } while (uVar23 <= uStack_1250._4_4_);
        }
        goto code_r0x000109719fdc;
      case 0x1b:
        if ((uVar18 & 1 | 4) <= uVar18) {
          uVar24 = uVar18 & 1;
          dVar47 = dStack_f8;
          if ((uStack_1250 & 0x100000000) != 0) {
            dVar47 = dStack_f8 + adStack_1248[0];
          }
          do {
            if (uVar24 < uVar18) {
              dVar49 = adStack_1248[uVar24];
            }
            else {
              uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
              uRam000000011382ab30 = 0;
              dVar49 = 0.0;
            }
            if (uVar24 + 1 < uVar18) {
              pdVar16 = adStack_1248 + (uVar24 + 1);
            }
            else {
              uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
              pdVar16 = (double *)0x11382ab30;
              uRam000000011382ab30 = 0;
            }
            if (uVar24 + 2 < uVar18) {
              dVar56 = adStack_1248[uVar24 + 2];
            }
            else {
              uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
              uRam000000011382ab30 = 0;
              dVar56 = 0.0;
            }
            dVar60 = *pdVar16;
            if (uVar24 + 3 < uVar18) {
              dVar62 = adStack_1248[uVar24 + 3];
            }
            else {
              uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
              uRam000000011382ab30 = 0;
              dVar62 = 0.0;
            }
            dVar49 = dStack_100 + dVar49;
            dVar47 = dVar47 + dVar56;
            FUN_109747978(*(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x50),
                          &fStack_12c8);
            dStack_100 = dVar49 + dVar60 + dVar62;
            dStack_f8 = dVar47;
            uVar23 = uVar24 + 8;
            uVar24 = uVar24 + 4;
            uVar18 = uStack_1250._4_4_;
          } while (uVar23 <= uStack_1250._4_4_);
        }
        goto code_r0x000109719fdc;
      case 0x1d:
        uVar39 = 1;
        puVar15 = auStack_120;
        goto code_r0x000109719764;
      case 0x1e:
        if ((uVar18 >> 2 & 1) == 0) {
          if (7 < uVar18) {
            iVar40 = 0;
            uVar24 = 0;
            do {
              if (uVar24 < uVar18) {
                dVar47 = adStack_1248[uVar24];
              }
              else {
                uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
                uRam000000011382ab30 = 0;
                dVar47 = 0.0;
              }
              if (uVar24 + 1 < uVar18) {
                pdVar16 = adStack_1248 + (uVar24 + 1);
              }
              else {
                uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
                pdVar16 = (double *)0x11382ab30;
                uRam000000011382ab30 = 0;
              }
              if (uVar24 + 2 < uVar18) {
                dVar49 = adStack_1248[uVar24 + 2];
              }
              else {
                uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
                uRam000000011382ab30 = 0;
                dVar49 = 0.0;
              }
              if (uVar24 + 3 < uVar18) {
                dVar56 = adStack_1248[uVar24 + 3];
              }
              else {
                uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
                uRam000000011382ab30 = 0;
                dVar56 = 0.0;
              }
              dVar49 = dStack_f8 + dVar47 + dVar49;
              dVar56 = dStack_100 + *pdVar16 + dVar56;
              FUN_109747978(*(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x50),
                            dStack_100,dStack_f8 + dVar47,dStack_100 + *pdVar16,dVar49,dVar56,dVar49
                            ,&fStack_12c8);
              uVar21 = uStack_1250;
              dStack_100 = dVar56;
              dStack_f8 = dVar49;
              uVar18 = uStack_1250._4_4_;
              if (uVar24 + 4 < uStack_1250._4_4_) {
                dVar47 = adStack_1248[uVar24 + 4];
              }
              else {
                uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
                uRam000000011382ab30 = 0;
                dVar47 = 0.0;
              }
              if (uVar24 + 5 < uVar18) {
                pdVar16 = adStack_1248 + (uVar24 + 5);
              }
              else {
                uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
                pdVar16 = (double *)0x11382ab30;
                uRam000000011382ab30 = 0;
              }
              if (uVar24 + 6 < uVar18) {
                dVar60 = adStack_1248[uVar24 + 6];
              }
              else {
                uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
                uRam000000011382ab30 = 0;
                dVar60 = 0.0;
              }
              if (uVar24 + 7 < uVar18) {
                dVar62 = adStack_1248[uVar24 + 7];
              }
              else {
                uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
                uRam000000011382ab30 = 0;
                dVar62 = 0.0;
              }
              dVar67 = dVar56 + dVar47 + *pdVar16;
              dVar66 = dVar67;
              if ((iVar40 + uVar18 < 0x10) && ((uVar21 & 0x100000000) != 0)) {
                if (uVar24 + 8 < uVar18) {
                  dVar66 = adStack_1248[uVar24 + 8];
                }
                else {
                  uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
                  uRam000000011382ab30 = 0;
                  dVar66 = 0.0;
                }
                dVar66 = dVar67 + dVar66;
              }
              dVar62 = dVar49 + dVar60 + dVar62;
              FUN_109747978(*(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x50),
                            dVar56 + dVar47,dVar49,dVar67,dVar49 + dVar60,dVar66,dVar62,&fStack_12c8
                           );
              dStack_100 = dVar66;
              dStack_f8 = dVar62;
              uVar23 = uVar24 + 0x10;
              uVar24 = uVar24 + 8;
              iVar40 = iVar40 + -8;
              uVar18 = uStack_1250._4_4_;
            } while (uVar23 <= uStack_1250._4_4_);
          }
        }
        else {
          dVar47 = dStack_f8 + adStack_1248[0];
          dVar60 = dStack_100 + adStack_1248[1];
          dVar49 = dVar47 + adStack_1248[2];
          dVar56 = dVar60 + adStack_1248[3];
          if (uVar18 < 0xc) {
            uVar23 = 4;
          }
          else {
            uVar24 = 6;
            do {
              uVar23 = uVar24;
              FUN_109747978(*(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x50),
                            dStack_100,dVar47,dVar60,dVar49,dVar56,dVar49,&fStack_12c8);
              dStack_100 = dVar56;
              dStack_f8 = dVar49;
              uVar18 = uStack_1250._4_4_;
              if (uVar23 - 2 < uStack_1250._4_4_) {
                dVar62 = adStack_1248[uVar23 - 2];
              }
              else {
                uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
                uRam000000011382ab30 = 0;
                dVar62 = 0.0;
              }
              if (uVar23 - 1 < uVar18) {
                pdVar16 = adStack_1248 + (uVar23 - 1);
              }
              else {
                uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
                pdVar16 = (double *)0x11382ab30;
                uRam000000011382ab30 = 0;
              }
              if (uVar23 < uVar18) {
                dVar66 = adStack_1248[uVar23];
              }
              else {
                uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
                uRam000000011382ab30 = 0;
                dVar66 = 0.0;
              }
              if (uVar23 + 1 < uVar18) {
                dVar47 = adStack_1248[uVar23 + 1];
              }
              else {
                uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
                uRam000000011382ab30 = 0;
                dVar47 = 0.0;
              }
              dVar60 = dVar56 + dVar62 + *pdVar16;
              dVar47 = dVar49 + dVar66 + dVar47;
              FUN_109747978(*(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x50),
                            dVar56 + dVar62,dVar49,dVar60,dVar49 + dVar66,dVar60,dVar47,&fStack_12c8
                           );
              dStack_100 = dVar60;
              dStack_f8 = dVar47;
              uVar18 = uStack_1250._4_4_;
              if (uVar23 + 2 < uStack_1250._4_4_) {
                dVar62 = adStack_1248[uVar23 + 2];
              }
              else {
                uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
                uRam000000011382ab30 = 0;
                dVar62 = 0.0;
              }
              if (uVar23 + 3 < uVar18) {
                pdVar16 = adStack_1248 + (uVar23 + 3);
              }
              else {
                uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
                pdVar16 = (double *)0x11382ab30;
                uRam000000011382ab30 = 0;
              }
              if (uVar23 + 4 < uVar18) {
                dVar49 = adStack_1248[uVar23 + 4];
              }
              else {
                uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
                uRam000000011382ab30 = 0;
                dVar49 = 0.0;
              }
              if (uVar23 + 5 < uVar18) {
                dVar56 = adStack_1248[uVar23 + 5];
              }
              else {
                uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
                uRam000000011382ab30 = 0;
                dVar56 = 0.0;
              }
              dVar47 = dVar47 + dVar62;
              dVar60 = dVar60 + *pdVar16;
              dVar49 = dVar47 + dVar49;
              dVar56 = dVar60 + dVar56;
              uVar24 = uVar23 + 8;
            } while (uVar23 + 0xe <= uVar18);
            uVar23 = uVar23 + 6;
          }
          dVar62 = dVar49;
          if (uVar23 < uVar18) {
            dVar62 = dVar49 + adStack_1248[uVar23];
          }
          FUN_109747978(*(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x50),dStack_100,
                        dVar47,dVar60,dVar49,dVar56,dVar62,&fStack_12c8);
          dStack_100 = dVar56;
          dStack_f8 = dVar62;
        }
        goto code_r0x000109719fdc;
      case 0x1f:
        if ((uVar18 >> 2 & 1) == 0) {
          if (7 < uVar18) {
            iVar40 = 0;
            uVar24 = 0;
            do {
              if (uVar24 < uVar18) {
                dVar47 = adStack_1248[uVar24];
              }
              else {
                uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
                uRam000000011382ab30 = 0;
                dVar47 = 0.0;
              }
              if (uVar24 + 1 < uVar18) {
                pdVar16 = adStack_1248 + (uVar24 + 1);
              }
              else {
                uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
                pdVar16 = (double *)0x11382ab30;
                uRam000000011382ab30 = 0;
              }
              if (uVar24 + 2 < uVar18) {
                dVar49 = adStack_1248[uVar24 + 2];
              }
              else {
                uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
                uRam000000011382ab30 = 0;
                dVar49 = 0.0;
              }
              if (uVar24 + 3 < uVar18) {
                dVar56 = adStack_1248[uVar24 + 3];
              }
              else {
                uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
                uRam000000011382ab30 = 0;
                dVar56 = 0.0;
              }
              dVar60 = dStack_100 + dVar47 + *pdVar16;
              dVar56 = dStack_f8 + dVar49 + dVar56;
              FUN_109747978(*(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x50),
                            dStack_100 + dVar47,dStack_f8,dVar60,dStack_f8 + dVar49,dVar60,dVar56,
                            &fStack_12c8);
              uVar21 = uStack_1250;
              dStack_100 = dVar60;
              dStack_f8 = dVar56;
              uVar18 = uStack_1250._4_4_;
              if (uVar24 + 4 < uStack_1250._4_4_) {
                dVar47 = adStack_1248[uVar24 + 4];
              }
              else {
                uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
                uRam000000011382ab30 = 0;
                dVar47 = 0.0;
              }
              if (uVar24 + 5 < uVar18) {
                pdVar16 = adStack_1248 + (uVar24 + 5);
              }
              else {
                uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
                pdVar16 = (double *)0x11382ab30;
                uRam000000011382ab30 = 0;
              }
              if (uVar24 + 6 < uVar18) {
                dVar49 = adStack_1248[uVar24 + 6];
              }
              else {
                uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
                uRam000000011382ab30 = 0;
                dVar49 = 0.0;
              }
              dVar62 = *pdVar16;
              if (uVar24 + 7 < uVar18) {
                dVar66 = adStack_1248[uVar24 + 7];
              }
              else {
                uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
                uRam000000011382ab30 = 0;
                dVar66 = 0.0;
              }
              dVar49 = dVar56 + dVar47 + dVar49;
              if ((iVar40 + uVar18 < 0x10) && ((uVar21 & 0x100000000) != 0)) {
                if (uVar24 + 8 < uVar18) {
                  dVar47 = adStack_1248[uVar24 + 8];
                }
                else {
                  uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
                  uRam000000011382ab30 = 0;
                  dVar47 = 0.0;
                }
                dVar49 = dVar49 + dVar47;
              }
              FUN_109747978(*(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x50),dVar60,
                            &fStack_12c8);
              dStack_100 = dVar60 + dVar62 + dVar66;
              dStack_f8 = dVar49;
              uVar23 = uVar24 + 0x10;
              uVar24 = uVar24 + 8;
              iVar40 = iVar40 + -8;
              uVar18 = uStack_1250._4_4_;
            } while (uVar23 <= uStack_1250._4_4_);
          }
        }
        else {
          dVar49 = dStack_100 + adStack_1248[0];
          dVar60 = dVar49 + adStack_1248[1];
          dVar47 = dStack_f8 + adStack_1248[2];
          dVar56 = dVar47 + adStack_1248[3];
          if (uVar18 < 0xc) {
            uVar23 = 4;
          }
          else {
            uVar24 = 6;
            do {
              uVar23 = uVar24;
              FUN_109747978(*(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x50),dVar49,
                            dStack_f8,dVar60,dVar47,dVar60,dVar56,&fStack_12c8);
              dStack_100 = dVar60;
              dStack_f8 = dVar56;
              uVar18 = uStack_1250._4_4_;
              if (uVar23 - 2 < uStack_1250._4_4_) {
                dVar62 = adStack_1248[uVar23 - 2];
              }
              else {
                uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
                uRam000000011382ab30 = 0;
                dVar62 = 0.0;
              }
              if (uVar23 - 1 < uVar18) {
                pdVar16 = adStack_1248 + (uVar23 - 1);
              }
              else {
                uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
                pdVar16 = (double *)0x11382ab30;
                uRam000000011382ab30 = 0;
              }
              if (uVar23 < uVar18) {
                dVar47 = adStack_1248[uVar23];
              }
              else {
                uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
                uRam000000011382ab30 = 0;
                dVar47 = 0.0;
              }
              if (uVar23 + 1 < uVar18) {
                dVar49 = adStack_1248[uVar23 + 1];
              }
              else {
                uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
                uRam000000011382ab30 = 0;
                dVar49 = 0.0;
              }
              dVar47 = dVar56 + dVar62 + dVar47;
              dVar49 = dVar60 + *pdVar16 + dVar49;
              FUN_109747978(*(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x50),dVar60,
                            dVar56 + dVar62,dVar60 + *pdVar16,dVar47,dVar49,dVar47,&fStack_12c8);
              dStack_100 = dVar49;
              dStack_f8 = dVar47;
              uVar18 = uStack_1250._4_4_;
              if (uVar23 + 2 < uStack_1250._4_4_) {
                dVar60 = adStack_1248[uVar23 + 2];
              }
              else {
                uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
                uRam000000011382ab30 = 0;
                dVar60 = 0.0;
              }
              if (uVar23 + 3 < uVar18) {
                pdVar16 = adStack_1248 + (uVar23 + 3);
              }
              else {
                uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
                pdVar16 = (double *)0x11382ab30;
                uRam000000011382ab30 = 0;
              }
              if (uVar23 + 4 < uVar18) {
                dVar62 = adStack_1248[uVar23 + 4];
              }
              else {
                uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
                uRam000000011382ab30 = 0;
                dVar62 = 0.0;
              }
              if (uVar23 + 5 < uVar18) {
                dVar56 = adStack_1248[uVar23 + 5];
              }
              else {
                uStack_1250 = CONCAT71(uStack_1250._1_7_,1);
                uRam000000011382ab30 = 0;
                dVar56 = 0.0;
              }
              dVar49 = dVar49 + dVar60;
              dVar60 = dVar49 + *pdVar16;
              dVar47 = dVar47 + dVar62;
              dVar56 = dVar47 + dVar56;
              uVar24 = uVar23 + 8;
            } while (uVar23 + 0xe <= uVar18);
            uVar23 = uVar23 + 6;
          }
          dVar62 = dVar60;
          if (uVar23 < uVar18) {
            dVar62 = dVar60 + adStack_1248[uVar23];
          }
          FUN_109747978(*(undefined4 *)(param_3 + 0x4c),*(undefined4 *)(param_3 + 0x50),dVar49,
                        dStack_f8,dVar60,dVar47,dVar62,dVar56,&fStack_12c8);
          dStack_100 = dVar62;
          dStack_f8 = dVar56;
        }
code_r0x000109719fdc:
        uStack_1250 = uStack_1250 & 0xffffffff;
        goto LAB_109719fe4;
      }
LAB_1097199cc:
      uStack_1250 = uStack_1250 & 0xffffffff;
LAB_109719fe4:
      if ((((bStack_218 & 1) != 0) || ((uint)(float)uStack_1258 < uStack_1258._4_4_)) ||
         (((uStack_1250 & 1) != 0 || (iVar34 = iVar34 + -1, iVar34 == 0)))) {
        bVar10 = false;
        uStack_1258 = CONCAT44((int)(float)uStack_1258 + 1,(float)uStack_1258);
        goto LAB_10971a1bc;
      }
      uVar18 = uStack_1258._4_4_;
      uVar24 = (uint)(float)uStack_1258;
    } while ((bStack_228 & 1) == 0);
    bVar10 = true;
LAB_10971a1bc:
    if (iStack_d0 != 0) {
      uStack_cc = 0;
      _free(pfStack_c8);
    }
    if (bVar10) goto LAB_10971a1fc;
  }
  func_0x000109723b9c(*(long *)(param_3 + 0x20) + 0xe0);
  FUN_1096febbc();
LAB_10971a1fc:
  FUN_109714130(&fStack_12c8);
  puVar32 = puStack_1268;
  if (bVar11) {
    iVar34 = *(int *)(param_3 + 0x40);
    fVar51 = (float)*(int *)(param_3 + 0x3c) / 2.0;
    fVar50 = 0.0;
    if (*(char *)(param_3 + 0x38) == '\0') {
      fVar50 = fVar51;
    }
    fVar57 = (float)iVar34 / 2.0;
    fVar53 = -fVar50;
    if (-1 < *(int *)(param_3 + 0x28)) {
      fVar53 = fVar50;
    }
    fVar50 = -((float)iVar34 * 0.5);
    if (-1 < *(int *)(param_3 + 0x2c)) {
      fVar50 = fVar57;
    }
    if (iVar34 != 0 || *(int *)(param_3 + 0x3c) != 0) {
      uVar18 = uStack_1280._4_4_;
      if (uStack_1280._4_4_ != 0) {
        uVar21 = (ulong)uStack_1270._4_4_;
        if (uStack_1270._4_4_ != 0) {
          fVar44 = 0.0;
          uVar37 = 0;
          puVar27 = puStack_1268;
          do {
            uVar28 = (ulong)*puVar27;
            if ((uint)uVar37 < *puVar27) {
              pfVar29 = (float *)(lStack_1278 + uVar37 * 0xc);
              uVar30 = uVar37 + 1;
              do {
                uVar24 = (uint)uVar30;
                if (uVar28 <= uVar30) {
                  uVar24 = (uint)uVar37;
                }
                pfVar31 = pfVar29;
                if ((ulong)uStack_1280._4_4_ <= uVar30 - 1) {
                  pfVar31 = (float *)&UNK_10dfe4888;
                }
                pfVar22 = (float *)(lStack_1278 + (ulong)uVar24 * 0xc);
                if (uStack_1280._4_4_ <= uVar24) {
                  pfVar22 = (float *)&UNK_10dfe4888;
                }
                fVar44 = fVar44 + -(pfVar31[1] * *pfVar22) + pfVar22[1] * *pfVar31;
                pfVar29 = pfVar29 + 3;
                uVar30 = uVar30 + 1;
              } while (uVar30 - uVar28 != 1);
            }
            puVar27 = puVar27 + 1;
            uVar37 = uVar28;
          } while (puVar27 != puStack_1268 + uVar21);
          uVar37 = 0;
          uVar24 = 0;
          do {
            lVar43 = lStack_1278;
            uVar23 = puVar32[uVar37];
            uVar12 = uVar23 - 1;
            if (uVar23 != 0 && uVar24 != uVar12) {
              uVar28 = 0;
              uVar33 = 0xffffffff;
              fVar65 = 0.0;
              fVar68 = 0.0;
              uVar30 = 0;
              uVar38 = uVar12;
              uVar42 = uVar24;
              fVar59 = 0.0;
              fVar63 = 0.0;
              do {
                uVar48 = uVar28;
                fVar64 = fVar68;
                fVar61 = fVar65;
                if (uVar42 == uVar33) {
LAB_10971a404:
                  fVar45 = (float)uVar30;
                  uVar72 = uVar48;
                  uVar1 = uVar42;
                  if (fVar45 != 0.0) {
                    if ((uVar33 & 0x80000000) != 0) {
                      uVar28 = uVar30 & 0xffffffff;
                      uVar33 = uVar38;
                      fVar68 = fVar59;
                      fVar65 = fVar63;
                    }
                    fVar58 = fVar59 * fVar64 + fVar61 * fVar63;
                    fVar54 = 0.0;
                    fVar52 = 0.0;
                    if (-0.9375 < fVar58) {
                      fVar58 = fVar58 + 1.0;
                      bVar11 = 0.0 <= fVar44 * 0.5;
                      fVar55 = -(fVar59 + fVar64);
                      fVar46 = fVar63 + fVar61;
                      if (bVar11) {
                        fVar55 = fVar59 + fVar64;
                        fVar46 = -(fVar63 + fVar61);
                      }
                      fVar54 = -(fVar61 * fVar59) - -(fVar64 * fVar63);
                      if (bVar11) {
                        fVar54 = -(fVar64 * fVar63) + fVar59 * fVar61;
                      }
                      if ((float)uVar48 < fVar45) {
                        fVar45 = (float)uVar48;
                      }
                      fVar52 = (fVar55 * fVar45) / fVar54;
                      if (fVar51 * fVar54 <= fVar58 * fVar45) {
                        fVar52 = (fVar51 * fVar55) / fVar58;
                      }
                      if (fVar57 * fVar54 <= fVar58 * fVar45) {
                        fVar54 = (fVar57 * fVar46) / fVar58;
                      }
                      else {
                        fVar54 = (fVar46 * fVar45) / fVar54;
                      }
                    }
                    if (uVar38 != uVar42) {
                      do {
                        if (uVar38 < uVar18) {
                          pfVar29 = (float *)(lStack_1278 + (ulong)uVar38 * 0xc);
                          fVar59 = pfVar29[1];
                          *pfVar29 = fVar53 + fVar52 + *pfVar29;
                        }
                        else {
                          pfVar29 = (float *)0x11382ab30;
                          uRam000000011382ab38 = uRam000000011382ab38 & 0xffffffff00000000;
                          uRam000000011382ab30 = 0;
                          fVar59 = 0.0;
                        }
                        pfVar29[1] = fVar50 + fVar54 + fVar59;
                        uVar2 = uVar24;
                        if ((int)uVar38 < (int)uVar12) {
                          uVar2 = uVar38 + 1;
                        }
                        uVar38 = uVar2;
                      } while (uVar2 != uVar42);
                    }
                  }
                }
                else {
                  if (uVar42 < uVar18) {
                    fVar45 = *(float *)(lVar43 + (ulong)uVar42 * 0xc);
                  }
                  else {
                    uRam000000011382ab38 = uRam000000011382ab38 & 0xffffffff00000000;
                    uRam000000011382ab30 = 0;
                    fVar45 = 0.0;
                  }
                  if (uVar38 < uVar18) {
                    fVar52 = *(float *)(lVar43 + (ulong)uVar38 * 0xc);
                  }
                  else {
                    uRam000000011382ab38 = uRam000000011382ab38 & 0xffffffff00000000;
                    uRam000000011382ab30 = 0;
                    fVar52 = 0.0;
                  }
                  if (uVar42 < uVar18) {
                    fVar54 = *(float *)(lVar43 + (ulong)uVar42 * 0xc + 4);
                  }
                  else {
                    uRam000000011382ab38 = uRam000000011382ab38 & 0xffffffff00000000;
                    uRam000000011382ab30 = 0;
                    fVar54 = 0.0;
                  }
                  if (uVar38 < uVar18) {
                    fVar58 = *(float *)(lVar43 + (ulong)uVar38 * 0xc + 4);
                  }
                  else {
                    uRam000000011382ab38 = uRam000000011382ab38 & 0xffffffff00000000;
                    uRam000000011382ab30 = 0;
                    fVar58 = 0.0;
                  }
                  uVar48 = (ulong)(uint)(fVar45 - fVar52);
                  _hypotf(uVar48,fVar54 - fVar58);
                  fVar46 = (float)uVar48;
                  uVar72 = uVar30;
                  uVar1 = uVar38;
                  fVar64 = fVar59;
                  fVar61 = fVar63;
                  if (fVar46 != 0.0) {
                    fVar61 = (fVar45 - fVar52) / fVar46;
                    fVar64 = (fVar54 - fVar58) / fVar46;
                    goto LAB_10971a404;
                  }
                }
                uVar38 = uVar1;
                uVar1 = uVar24;
                if ((int)uVar42 < (int)uVar12) {
                  uVar1 = uVar42 + 1;
                }
              } while ((uVar1 != uVar38) &&
                      (uVar30 = uVar72, uVar42 = uVar1, fVar59 = fVar64, fVar63 = fVar61,
                      uVar38 != uVar33));
            }
            uVar37 = uVar37 + 1;
            uVar24 = uVar23;
          } while (uVar37 != uVar21);
        }
      }
    }
    adStack_1248[0] = 0.0;
    uStack_1250 = 0;
    adStack_1248[2] = 0.0;
    adStack_1248[1] = 0.0;
    uStack_1258 = 0;
    uStack_1260 = 0;
    if (uStack_1270._4_4_ != 0) {
      puVar27 = puStack_1268 + uStack_1270._4_4_;
      puVar32 = puStack_1268;
      uVar18 = 0;
      do {
        uStack_1258 = 0;
        uStack_1260 = 0;
        uVar23 = *puVar32;
        uVar12 = uVar23 - uVar18;
        uVar24 = 0;
        if (uVar18 <= uStack_1280._4_4_) {
          uVar24 = uStack_1280._4_4_ - uVar18;
        }
        if (uVar12 <= uVar24) {
          uVar24 = uVar12;
        }
        if (uVar24 != 0) {
          pfVar29 = (float *)(lStack_1278 + (ulong)uVar18 * 0xc);
          fVar53 = 0.0;
          fVar50 = 0.0;
          fVar51 = 0.0;
          do {
            uVar18 = uVar24 - 1;
            pfVar31 = pfVar29 + 3;
            fVar44 = *pfVar29;
            fVar65 = pfVar29[1];
            fVar57 = pfVar29[2];
            if ((int)fVar57 < 2) {
              fVar68 = fVar65;
              if (fVar57 == 0.0) {
                fVar50 = fVar44;
                if ((int)uStack_1260 != 0) {
                  bVar11 = false;
                  if ((uStack_1260._4_4_ == fVar51) &&
                     (bVar11 = false, !NAN((float)uStack_1258) && !NAN(fVar53))) {
                    bVar11 = (float)uStack_1258 == fVar53;
                  }
                  if (!bVar11) {
                    if (*(long *)(param_6 + 0x38) == 0) {
                      uVar39 = 0;
                    }
                    else {
                      uVar39 = *(undefined8 *)(*(long *)(param_6 + 0x38) + 8);
                    }
                    (**(code **)(param_6 + 0x18))(param_6,param_7,&uStack_1260,uVar39);
                  }
                  if (*(long *)(param_6 + 0x38) == 0) {
                    uVar39 = 0;
                  }
                  else {
                    uVar39 = *(undefined8 *)(*(long *)(param_6 + 0x38) + 0x20);
                  }
                  (**(code **)(param_6 + 0x30))(param_6,param_7,&uStack_1260,uVar39);
                  uStack_1258 = 0;
                  uStack_1260 = 0;
                }
                goto LAB_10971a7c0;
              }
              if (fVar57 == 1.4013e-45) {
                if ((int)uStack_1260 == 0) {
                  FUN_1097114b0(param_6,param_7,&uStack_1260);
                }
                if (*(long *)(param_6 + 0x38) == 0) {
                  uVar39 = 0;
                }
                else {
                  uVar39 = *(undefined8 *)(*(long *)(param_6 + 0x38) + 8);
                }
                (**(code **)(param_6 + 0x18))(fVar44,fVar65,param_6,param_7,&uStack_1260,uVar39);
                fVar50 = fVar44;
                goto LAB_10971a7c0;
              }
            }
            else {
              if (fVar57 == 2.8026e-45) {
                pfVar22 = (float *)&UNK_10dfe4888;
                uVar18 = 0;
                if (uVar24 != 1) {
                  pfVar22 = pfVar31;
                  pfVar31 = pfVar29 + 6;
                  uVar18 = uVar24 - 2;
                }
                fVar50 = *pfVar22;
                fVar68 = pfVar22[1];
                if ((int)uStack_1260 == 0) {
                  FUN_1097114b0(param_6,param_7,&uStack_1260);
                }
                if (*(long *)(param_6 + 0x38) == 0) {
                  uVar39 = 0;
                }
                else {
                  uVar39 = *(undefined8 *)(*(long *)(param_6 + 0x38) + 0x10);
                }
                (**(code **)(param_6 + 0x20))
                          (fVar44,fVar65,fVar50,fVar68,param_6,param_7,&uStack_1260,uVar39);
              }
              else {
                if (fVar57 != 4.2039e-45) goto LAB_10971a7d4;
                pfVar22 = (float *)&UNK_10dfe4888;
                if (uVar24 == 1) {
                  fVar51 = 0.0;
                  fVar53 = 0.0;
                  uVar18 = 0;
                }
                else {
                  fVar53 = pfVar29[3];
                  fVar51 = pfVar29[4];
                  pfVar31 = pfVar29 + 6;
                  uVar18 = 0;
                  if (uVar24 != 2) {
                    pfVar22 = pfVar29 + 6;
                    pfVar31 = pfVar29 + 9;
                    uVar18 = uVar24 - 3;
                  }
                }
                fVar50 = *pfVar22;
                fVar68 = pfVar22[1];
                if ((int)uStack_1260 == 0) {
                  FUN_1097114b0(param_6,param_7,&uStack_1260);
                }
                if (*(long *)(param_6 + 0x38) == 0) {
                  uVar39 = 0;
                }
                else {
                  uVar39 = *(undefined8 *)(*(long *)(param_6 + 0x38) + 0x18);
                }
                (**(code **)(param_6 + 0x28))
                          (fVar44,fVar65,fVar53,fVar51,fVar50,fVar68,param_6,param_7,&uStack_1260,
                           uVar39);
              }
LAB_10971a7c0:
              uStack_1258 = CONCAT44(fVar50,(float)uStack_1258);
              uStack_1250 = CONCAT44(uStack_1250._4_4_,fVar68);
              fVar51 = fVar50;
              fVar53 = fVar68;
            }
LAB_10971a7d4:
            uVar24 = uVar18;
            pfVar29 = pfVar31;
          } while (uVar24 != 0);
          if ((int)uStack_1260 != 0) {
            bVar11 = false;
            if ((uStack_1260._4_4_ == fVar50) &&
               (bVar11 = false, !NAN((float)uStack_1258) && !NAN(fVar53))) {
              bVar11 = (float)uStack_1258 == fVar53;
            }
            if (!bVar11) {
              if (*(long *)(param_6 + 0x38) == 0) {
                uVar39 = 0;
              }
              else {
                uVar39 = *(undefined8 *)(*(long *)(param_6 + 0x38) + 8);
              }
              (**(code **)(param_6 + 0x18))(param_6,param_7,&uStack_1260,uVar39);
            }
            if (*(long *)(param_6 + 0x38) == 0) {
              uVar39 = 0;
            }
            else {
              uVar39 = *(undefined8 *)(*(long *)(param_6 + 0x38) + 0x20);
            }
            (**(code **)(param_6 + 0x30))(param_6,param_7,&uStack_1260,uVar39);
          }
        }
        puVar32 = puVar32 + 1;
        uStack_1260 = 0;
        uStack_1258 = 0;
        uStack_1250 = uStack_1250 & 0xffffffff00000000;
        uVar18 = uVar23;
      } while (puVar32 != puVar27);
    }
  }
  if ((int)uStack_1270 != 0) {
    uStack_1270 = uStack_1270 & 0xffffffff;
    _free(puStack_1268);
  }
  uStack_1270 = 0;
  puStack_1268 = (uint *)0x0;
  if ((int)uStack_1280 != 0) {
    uStack_1280 = uStack_1280 & 0xffffffff;
    _free(lStack_1278);
  }
  return;
code_r0x000109719764:
  FUN_109747298(&uStack_1260,puVar15,uVar39);
  goto LAB_109719fe4;
}



/* Entry: 10971aa7c; end: 10971b093;  */

/* WARNING: Removing unreachable block (ram,0x00010971ad6c) */
/* WARNING: Removing unreachable block (ram,0x00010971ad74) */
/* WARNING: Removing unreachable block (ram,0x00010971ad7c) */
/* WARNING: Removing unreachable block (ram,0x00010971ace4) */
/* WARNING: Removing unreachable block (ram,0x00010971acec) */
/* WARNING: Removing unreachable block (ram,0x00010971acf4) */
/* WARNING: Removing unreachable block (ram,0x00010971ada8) */
/* WARNING: Removing unreachable block (ram,0x00010971adb0) */
/* WARNING: Removing unreachable block (ram,0x00010971adb8) */
/* WARNING: Removing unreachable block (ram,0x00010971ade0) */
/* WARNING: Removing unreachable block (ram,0x00010971adf4) */
/* WARNING: Removing unreachable block (ram,0x00010971ae14) */
/* WARNING: Removing unreachable block (ram,0x00010971ae0c) */
/* WARNING: Removing unreachable block (ram,0x00010971ae18) */
/* WARNING: Removing unreachable block (ram,0x00010971ae2c) */
/* WARNING: Removing unreachable block (ram,0x00010971ae48) */
/* WARNING: Removing unreachable block (ram,0x00010971ae68) */
/* WARNING: Removing unreachable block (ram,0x00010971ae60) */
/* WARNING: Removing unreachable block (ram,0x00010971ae6c) */

void FUN_10971aa7c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  ushort *puVar2;
  int *piVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  bool bVar9;
  int *piVar10;
  int *piVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ushort *puVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  undefined1 auStack_88 [8];
  undefined4 uStack_80;
  int iStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar18 = *(long *)(param_1 + 0x20) + 0x170;
  FUN_109747f24();
  piVar10 = (int *)&UNK_10dfe4888;
  if (0xd < *(uint *)(lVar18 + 0x18)) {
    piVar10 = *(int **)(lVar18 + 0x10);
  }
  FUN_109725c6c(piVar10,param_1,param_3,param_4,param_5,param_6,param_7,1);
  if (((ulong)piVar10 & 1) != 0) {
    return;
  }
  lVar18 = *(long *)(param_1 + 0x20);
  plVar1 = (long *)(lVar18 + 400);
  puVar13 = (undefined8 *)*plVar1;
  if ((undefined8 *)*plVar1 == (undefined8 *)0x0) {
    do {
      puVar12 = *(undefined8 **)(lVar18 + 0x60);
      puVar13 = (undefined8 *)&UNK_10dfe4888;
      if (puVar12 == (undefined8 *)0x0) break;
      FUN_10974914c();
      if (puVar12 == (undefined8 *)0x0) {
        puVar12 = (undefined8 *)&UNK_10dfe4888;
      }
      if (*plVar1 == 0) {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = (long)puVar12;
          cVar8 = ExclusiveMonitorsStatus();
        }
        puVar13 = puVar12;
        if (cVar8 == '\0') break;
      }
      else {
        ClearExclusiveLocal();
      }
      FUN_109749100();
      puVar13 = (undefined8 *)*plVar1;
    } while (puVar13 == (undefined8 *)0x0);
  }
  piVar11 = (int *)*puVar13;
  piVar10 = (int *)&UNK_10dfe4888;
  if (piVar11 != (int *)0x0) {
    piVar10 = piVar11;
  }
  piVar3 = (int *)&UNK_10dfe4888;
  if (9 < (uint)piVar10[6]) {
    piVar3 = *(int **)(piVar10 + 4);
  }
  uVar5 = (*(uint *)((long)piVar3 + 2) & 0xff00ff00) >> 8 |
          (*(uint *)((long)piVar3 + 2) & 0xff00ff) << 8;
  uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
  if (uVar5 != 0) {
    puVar2 = (ushort *)((long)piVar3 + (ulong)uVar5);
    uVar7 = (uint)(*puVar2 >> 8) | (*puVar2 & 0xff00ff) << 8;
    puVar15 = (ushort *)&UNK_10dfe4888;
    if (uVar7 != 0) {
      iVar17 = 0;
      iVar16 = uVar7 - 1;
      puVar15 = (ushort *)&UNK_10dfe4888;
      do {
        uVar7 = (uint)(iVar16 + iVar17) >> 1;
        uVar4 = puVar2[(ulong)uVar7 * 6 + 1];
        if ((uint)param_3 < ((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8)) {
          iVar16 = uVar7 - 1;
        }
        else {
          uVar4 = (puVar2 + (ulong)uVar7 * 6 + 1)[1];
          if ((uint)param_3 <= ((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8)) {
            puVar15 = puVar2 + (ulong)uVar7 * 6 + 1;
            break;
          }
          iVar17 = uVar7 + 1;
        }
      } while (iVar17 <= iVar16);
    }
    uVar7 = (*(uint *)(puVar15 + 2) & 0xff00ff00) >> 8 | (*(uint *)(puVar15 + 2) & 0xff00ff) << 8;
    uVar6 = (*(uint *)(puVar15 + 4) & 0xff00ff00) >> 8 | (*(uint *)(puVar15 + 4) & 0xff00ff) << 8;
    FUN_1096f5af4(piVar11,(uVar7 >> 0x10 | uVar7 << 0x10) + uVar5,uVar6 >> 0x10 | uVar6 << 0x10);
    if (piVar11 != (int *)&UNK_10dfe4888) {
      if (*(long *)(param_4 + 0x80) == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined8 *)(*(long *)(param_4 + 0x80) + 0x38);
      }
      (**(code **)(param_4 + 0x48))
                (*(undefined4 *)(param_1 + 0x48),param_4,param_5,piVar11,0,0,0x73766720,0,uVar14);
      if ((piVar11 != (int *)0x0) && (*piVar11 != 0)) {
        do {
          iVar17 = *piVar11;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar9) {
            *piVar11 = iVar17 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar17 + -1 == 0) {
          *piVar11 = -0xdead;
          lVar18 = *(long *)(piVar11 + 2);
          if (lVar18 != 0) {
            FUN_109711500(lVar18 + 0x40,lVar18);
            _pthread_mutex_destroy(lVar18);
            _free(lVar18);
            piVar11[2] = 0;
            piVar11[3] = 0;
          }
          if (*(code **)(piVar11 + 10) != (code *)0x0) {
            (**(code **)(piVar11 + 10))(*(undefined8 *)(piVar11 + 8));
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__free_11034c310)(piVar11);
          return;
        }
      }
      return;
    }
  }
  puVar13 = (undefined8 *)(*(long *)(param_1 + 0x20) + 0x180);
  FUN_109749454();
  piVar10 = (int *)&UNK_10dfe4888;
  if ((int *)*puVar13 != (int *)0x0) {
    piVar10 = (int *)*puVar13;
  }
  piVar11 = (int *)&UNK_10dfe4888;
  if (7 < (uint)piVar10[6]) {
    piVar11 = *(int **)(piVar10 + 4);
  }
  func_0x0001097165d4(piVar11,param_1);
  piVar10 = piVar11;
  func_0x000109716704();
  if ((piVar10 != (int *)0x0 && (char)piVar11[0xb] != '\0') &&
      *(char *)((long)piVar11 + 0x2d) != '\0') {
    uStack_68 = 0;
    func_0x000109716790();
  }
  puVar13 = (undefined8 *)(*(long *)(param_1 + 0x20) + 0x188);
  FUN_109749d60();
  piVar10 = (int *)&UNK_10dfe4888;
  if ((int *)*puVar13 != (int *)0x0) {
    piVar10 = (int *)*puVar13;
  }
  piVar11 = (int *)&UNK_10dfe4888;
  if (7 < (uint)piVar10[6]) {
    piVar11 = *(int **)(piVar10 + 4);
  }
  if (*(char *)((long)piVar11 + 1) != '\0' || (char)*piVar11 != '\0') {
    puVar12 = puVar13;
    FUN_109716310();
    func_0x000109716490();
    if (puVar12 != (undefined8 *)&UNK_10dfe4888) {
      uStack_78 = 0;
      uStack_70 = 0;
      lVar18 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
      if (lVar18 == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined8 *)(lVar18 + 0x68);
      }
      lVar18 = param_1;
      (**(code **)(*(long *)(param_1 + 0x90) + 0x88))
                (param_1,*(undefined8 *)(param_1 + 0x98),param_3,&uStack_78,uVar14);
      if (((int)lVar18 != 0) &&
         (FUN_109729150(puVar13,param_1,param_3,auStack_88,0), (int)puVar13 != 0)) {
        if (*(long *)(param_4 + 0x80) == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = *(undefined8 *)(*(long *)(param_4 + 0x80) + 0x38);
        }
        lVar18 = param_4;
        (**(code **)(param_4 + 0x48))
                  (*(undefined4 *)(param_1 + 0x48),param_4,param_5,puVar12,uStack_80,-iStack_7c,
                   0x706e6720,&uStack_78,uVar14);
        FUN_1096f5a5c(puVar12);
        if ((int)lVar18 != 0) {
          return;
        }
      }
    }
  }
  FUN_10974a39c(*(long *)(param_1 + 0x20) + 0xd8);
  if (*(long *)(param_4 + 0x80) == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(undefined8 *)(*(long *)(param_4 + 0x80) + 0x18);
  }
  (**(code **)(param_4 + 0x28))(param_4,param_5,param_3,param_1,uVar14);
  if (*(long *)(param_4 + 0x80) == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(undefined8 *)(*(long *)(param_4 + 0x80) + 0x30);
  }
  (**(code **)(param_4 + 0x40))(param_4,param_5,1,param_7,uVar14);
  if (*(long *)(param_4 + 0x80) == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(undefined8 *)(*(long *)(param_4 + 0x80) + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010971b044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x38))(param_4,param_5,uVar14);
  return;
}



/* Entry: 10971b094; end: 10971d21b;  */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

long FUN_10971b094(long param_1,long *param_2,undefined8 param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  double *pdVar14;
  double *pdVar15;
  float *pfVar16;
  int iVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  bool bVar25;
  long lVar26;
  float fVar27;
  float fVar29;
  double dVar28;
  double dVar30;
  undefined1 auStack_12b8 [8];
  double dStack_12b0;
  double dStack_12a8;
  double dStack_12a0;
  double dStack_1298;
  undefined *puStack_1290;
  undefined8 uStack_1288;
  undefined8 uStack_1280;
  double dStack_1278;
  undefined8 uStack_1270;
  double dStack_1268;
  double dStack_1260;
  double dStack_1258;
  double dStack_1250;
  double dStack_1248;
  double dStack_1240;
  double dStack_1238;
  double dStack_1230;
  double dStack_1228;
  double dStack_1220;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  byte bStack_258;
  byte bStack_257;
  byte bStack_256;
  int iStack_254;
  int iStack_250;
  uint uStack_24c;
  byte bStack_248;
  uint uStack_244;
  undefined8 auStack_240 [30];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  double dStack_130;
  double dStack_128;
  uint uStack_108;
  int iStack_100;
  uint uStack_fc;
  float *pfStack_f8;
  char cStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar26 = *param_2;
  uVar19 = lVar26 + 0x128;
  FUN_109749d60();
  FUN_109729150();
  if ((uVar19 & 1) != 0) {
    return 1;
  }
  uVar19 = lVar26 + 0x120;
  FUN_109749454();
  FUN_109728f70();
  if ((uVar19 & 1) != 0) {
    return 1;
  }
  lVar18 = lVar26 + 0x110;
  FUN_109747f24();
  puVar9 = &UNK_10dfe4888;
  if (0xd < *(uint *)(lVar18 + 0x18)) {
    puVar9 = *(undefined **)(lVar18 + 0x10);
  }
  puVar6 = puVar9;
  FUN_109726194();
  puVar7 = puVar9;
  func_0x0001097261f4();
  uStack_1280 = *(double *)(param_1 + 0x80);
  dStack_1278 = (double)(ulong)*(uint *)(param_1 + 0x78);
  uStack_1270 = 0.0;
  puVar8 = puVar9;
  puStack_1290 = puVar6;
  uStack_1288 = puVar7;
  FUN_109726448();
  FUN_1097264a8();
  if ((int)puVar8 != 0) {
    FUN_1096feabc(param_1,param_4);
    return 1;
  }
  FUN_10974e9fc();
  FUN_109714f14(&puStack_1290);
  FUN_109725c6c(puVar9,param_1,param_3,puVar8,&puStack_1290,0,0,1);
  if (uStack_1270._4_4_ == 0) {
    uRam000000011382ab30 = 0;
    uRam000000011382ab38 = 0;
    uRam000000011382ab40 = uRam000000011382ab40 & 0xffffffff00000000;
    uVar10 = 0;
    fVar27 = 0.0;
    fVar29 = 0.0;
  }
  else {
    lVar18 = (long)dStack_1268 + (ulong)(uStack_1270._4_4_ - 1) * 0x14;
    fVar27 = *(float *)(lVar18 + 4);
    if ((float)((ulong)*(undefined8 *)(lVar18 + 8) >> 0x20) < fVar27) {
      param_4[0] = 0;
      param_4[1] = 0;
      param_4[2] = 0;
      param_4[3] = 0;
      goto LAB_10971b218;
    }
    uVar10 = NEON_rev64(*(undefined8 *)(lVar18 + 8),4);
    fVar29 = *(float *)(lVar18 + 0x10);
  }
  *(ulong *)(param_4 + 2) =
       CONCAT44((int)((float)((ulong)uVar10 >> 0x20) - fVar29),(int)((float)uVar10 - fVar27));
  *(ulong *)param_4 = CONCAT44((int)fVar29,(int)fVar27);
LAB_10971b218:
  if ((int)uStack_1270 != 0) {
    uStack_1270 = (double)((ulong)uStack_1270 & 0xffffffff);
    _free(dStack_1268);
  }
  uStack_1270 = 0.0;
  dStack_1268 = 0.0;
  if ((int)uStack_1280 != 0) {
    uStack_1280 = (double)((ulong)uStack_1280 & 0xffffffff);
    _free(dStack_1278);
  }
  uStack_1280 = 0.0;
  dStack_1278 = 0.0;
  if ((int)puStack_1290 != 0) {
    puStack_1290 = (undefined *)((ulong)puStack_1290 & 0xffffffff);
    _free(uStack_1288);
  }
  if (((ulong)puVar9 & 1) == 0) {
    uVar19 = lVar26 + 0x78;
    FUN_10974a39c();
    FUN_10971f374();
    if ((uVar19 & 1) == 0) {
      lVar18 = lVar26 + 0x88;
      func_0x000109721c94();
      if ((*(long *)(lVar18 + 0x40) != 0) && ((uint)param_3 < *(uint *)(lVar18 + 0xc0))) {
        uVar10 = *(undefined8 *)(lVar18 + 0x90);
        FUN_109700890(uVar10,param_3);
        uVar11 = *(undefined8 *)(lVar18 + 0x80);
        FUN_10970098c();
        uStack_e0 = uVar11;
        uStack_d8 = param_3;
        FUN_1097470d0(&puStack_1290,&uStack_e0,lVar18,uVar10,*(undefined8 *)(param_1 + 0x80),
                      *(undefined4 *)(param_1 + 0x78));
        auStack_12b8[0] = 0;
        dStack_12a8 = 2147483647.0;
        dStack_12b0 = 2147483647.0;
        dStack_1298 = -2147483648.0;
        dStack_12a0 = -2147483648.0;
        bStack_258 = 0;
        iVar17 = 200000;
        uVar21 = uStack_1288._4_4_;
        uVar23 = (uint)uStack_1288;
        do {
          uVar22 = uVar21 + 1;
          if (uVar22 <= uVar23) {
            uVar5 = (uint)(byte)puStack_1290[uVar21];
            uStack_1288 = (undefined *)CONCAT44(uVar22,(uint)uStack_1288);
            if (puStack_1290[uVar21] != 0xc) goto LAB_10971b3a8;
            uVar21 = uVar21 + 2;
            if (uVar21 <= uVar23) {
              uVar5 = (byte)puStack_1290[uVar22] | 0x100;
              uStack_1288 = (undefined *)CONCAT44(uVar21,(uint)uStack_1288);
              uVar22 = uVar21;
              goto LAB_10971b3a8;
            }
            uVar5 = 0xffff;
LAB_10971ce9c:
            FUN_1097159e4(uVar5,&puStack_1290);
            goto LAB_10971ce5c;
          }
          uVar5 = 0xe;
          uVar22 = uVar21;
          if (uStack_244 != 0) {
            uVar5 = 0xb;
          }
LAB_10971b3a8:
          uVar21 = uStack_1280._4_4_;
          if (0xfe < uVar5) {
            if (0x122 < uVar5) {
              if (uVar5 == 0x123) {
                if (uStack_1280._4_4_ != 0xd) {
LAB_10971cea8:
                  uStack_1288 = (undefined *)CONCAT44(uVar23 + 1,(uint)uStack_1288);
                  goto LAB_10971c9ac;
                }
                dStack_78 = uStack_1270 + dStack_128;
                dStack_90 = dStack_1268 + dStack_1278 + dStack_130;
                dStack_88 = dStack_1260 + dStack_78;
                dStack_a0 = dStack_1258 + dStack_90;
                dStack_98 = dStack_1250 + dStack_88;
                dStack_b0 = dStack_1248 + dStack_a0;
                dStack_a8 = dStack_1240 + dStack_98;
                dStack_c0 = dStack_1238 + dStack_b0;
                dStack_b8 = dStack_1230 + dStack_a8;
                dStack_d0 = dStack_1228 + dStack_c0;
                dStack_c8 = dStack_1220 + dStack_b8;
              }
              else if (uVar5 == 0x124) {
                if (uStack_1280._4_4_ != 9) goto LAB_10971cea8;
                dStack_78 = uStack_1270 + dStack_128;
                dStack_90 = dStack_1268 + dStack_1278 + dStack_130;
                dStack_a8 = dStack_1260 + dStack_78;
                dStack_a0 = dStack_1258 + dStack_90;
                dStack_b0 = dStack_1250 + dStack_a0;
                dStack_c0 = dStack_1248 + dStack_b0;
                dStack_b8 = dStack_1240 + dStack_a8;
                dStack_d0 = dStack_1238 + dStack_c0;
                dStack_c8 = dStack_128;
                dStack_98 = dStack_a8;
                dStack_88 = dStack_a8;
              }
              else {
                if (uVar5 != 0x125) goto LAB_10971ce9c;
                if (uStack_1280._4_4_ != 0xb) goto LAB_10971cea8;
                dVar28 = 0.0;
                dVar30 = 0.0;
                uVar19 = 0xfffffffffffffffe;
                lVar18 = 0x18;
                do {
                  dVar28 = dVar28 + *(double *)((long)&puStack_1290 + lVar18);
                  dVar30 = dVar30 + *(double *)((long)&uStack_1288 + lVar18);
                  uVar19 = uVar19 + 2;
                  lVar18 = lVar18 + 0x10;
                } while (uVar19 < 8);
                dStack_78 = uStack_1270 + dStack_128;
                dStack_90 = dStack_1268 + dStack_1278 + dStack_130;
                dStack_88 = dStack_1260 + dStack_78;
                dStack_a0 = dStack_1258 + dStack_90;
                dStack_98 = dStack_1250 + dStack_88;
                dStack_b0 = dStack_1248 + dStack_a0;
                dStack_a8 = dStack_1240 + dStack_98;
                dStack_c0 = dStack_1238 + dStack_b0;
                dStack_b8 = dStack_1230 + dStack_a8;
                if (ABS(dVar28) <= ABS(dVar30)) {
                  dStack_d0 = dStack_130;
                  dStack_c8 = dStack_1228 + dStack_b8;
                }
                else {
                  dStack_d0 = dStack_1228 + dStack_c0;
                  dStack_c8 = dStack_128;
                }
              }
LAB_10971c97c:
              dStack_80 = dStack_1278 + dStack_130;
              FUN_109747454(&puStack_1290,auStack_12b8,&dStack_80,&dStack_90,&dStack_a0);
              lVar18 = -0xa0;
              lVar3 = -0xb0;
              lVar4 = -0xc0;
code_r0x00010971c9a8:
              FUN_109747454(&puStack_1290,auStack_12b8,&stack0xfffffffffffffff0 + lVar18,
                            &stack0xfffffffffffffff0 + lVar3,&stack0xfffffffffffffff0 + lVar4);
              goto LAB_10971c9ac;
            }
            if (uVar5 != 0xff) {
              if (uVar5 == 0x122) {
                if (uStack_1280._4_4_ != 7) goto LAB_10971cea8;
                dStack_78 = dStack_128;
                dStack_90 = uStack_1270 + dStack_130 + dStack_1278;
                dStack_a8 = dStack_1268 + dStack_128;
                dStack_a0 = dStack_1260 + dStack_90;
                dStack_b0 = dStack_1258 + dStack_a0;
                dStack_c0 = dStack_1250 + dStack_b0;
                dStack_b8 = dStack_128;
                dStack_c8 = dStack_128;
                dStack_d0 = dStack_1248 + dStack_c0;
                dStack_98 = dStack_a8;
                dStack_88 = dStack_a8;
                goto LAB_10971c97c;
              }
              goto LAB_10971ce9c;
            }
            func_0x000109715858(&uStack_1280,&puStack_1290);
            goto LAB_10971ce5c;
          }
          uVar10 = 2;
          puVar13 = auStack_140;
          uStack_1280._4_4_ = uVar21;
          switch(uVar5) {
          case 1:
          case 0x12:
            iStack_254 = iStack_254 + (uVar21 >> 1);
            goto LAB_10971c9ac;
          default:
            goto LAB_10971ce9c;
          case 3:
          case 0x17:
            iStack_250 = iStack_250 + (uVar21 >> 1);
            goto LAB_10971c9ac;
          case 4:
            if (uVar21 == 0) {
              uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
              uRam000000011382ab30 = 0;
              dVar28 = 0.0;
            }
            else {
              dVar28 = (&dStack_1278)[uVar21 - 1];
              uVar21 = uVar21 - 1 >> 1;
            }
            dStack_128 = dStack_128 + dVar28;
            goto code_r0x00010971c150;
          case 5:
            if (1 < uVar21) {
              uVar23 = 0;
              do {
                dStack_78 = dStack_128;
                dStack_80 = dStack_130;
                if (uVar23 < uVar21) {
                  pdVar14 = &dStack_1278 + uVar23;
                }
                else {
                  uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                  pdVar14 = (double *)&uRam000000011382ab30;
                  uRam000000011382ab30 = 0;
                }
                if (uVar23 + 1 < uVar21) {
                  dStack_78 = (&dStack_1278)[uVar23 + 1];
                }
                else {
                  uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                  uRam000000011382ab30 = 0;
                  dStack_78 = 0.0;
                }
                dStack_80 = *pdVar14 + dStack_130;
                dStack_78 = dStack_78 + dStack_128;
                func_0x0001097473a0(&puStack_1290,auStack_12b8,&dStack_80);
                uVar22 = uVar23 + 4;
                uVar23 = uVar23 + 2;
                uVar21 = uStack_1280._4_4_;
              } while (uVar22 <= uStack_1280._4_4_);
            }
            break;
          case 6:
            if (uVar21 < 2) {
              uVar23 = 0;
            }
            else {
              uVar21 = 0;
              do {
                dStack_78 = dStack_128;
                dStack_80 = dStack_130;
                if (uVar21 < uStack_1280._4_4_) {
                  dStack_80 = (&dStack_1278)[uVar21];
                }
                else {
                  uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                  uRam000000011382ab30 = 0;
                  dStack_80 = 0.0;
                }
                dStack_80 = dStack_80 + dStack_130;
                func_0x0001097473a0(&puStack_1290,auStack_12b8,&dStack_80);
                if (uVar21 + 1 < uStack_1280._4_4_) {
                  dVar28 = (&dStack_1278)[uVar21 + 1];
                }
                else {
                  uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                  uRam000000011382ab30 = 0;
                  dVar28 = 0.0;
                }
                dStack_78 = dVar28 + dStack_78;
                func_0x0001097473a0(&puStack_1290,auStack_12b8,&dStack_80);
                uVar23 = uVar21 + 2;
                uVar22 = uVar21 + 4;
                uVar21 = uVar23;
              } while (uVar22 <= uStack_1280._4_4_);
            }
            if (uVar23 < uStack_1280._4_4_) {
              dStack_78 = dStack_128;
              dStack_80 = dStack_130;
              dStack_80 = dStack_130 + (&dStack_1278)[uVar23];
code_r0x00010971bf14:
              func_0x0001097473a0(&puStack_1290,auStack_12b8,&dStack_80);
            }
            break;
          case 7:
            if (uVar21 < 2) {
              uVar23 = 0;
            }
            else {
              uVar21 = 0;
              do {
                dStack_78 = dStack_128;
                dStack_80 = dStack_130;
                if (uVar21 < uStack_1280._4_4_) {
                  dStack_78 = (&dStack_1278)[uVar21];
                }
                else {
                  uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                  uRam000000011382ab30 = 0;
                  dStack_78 = 0.0;
                }
                dStack_78 = dStack_78 + dStack_128;
                func_0x0001097473a0(&puStack_1290,auStack_12b8,&dStack_80);
                if (uVar21 + 1 < uStack_1280._4_4_) {
                  dVar28 = (&dStack_1278)[uVar21 + 1];
                }
                else {
                  uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                  uRam000000011382ab30 = 0;
                  dVar28 = 0.0;
                }
                dStack_80 = dVar28 + dStack_80;
                func_0x0001097473a0(&puStack_1290,auStack_12b8,&dStack_80);
                uVar23 = uVar21 + 2;
                uVar22 = uVar21 + 4;
                uVar21 = uVar23;
              } while (uVar22 <= uStack_1280._4_4_);
            }
            if (uVar23 < uStack_1280._4_4_) {
              dStack_78 = dStack_128;
              dStack_80 = dStack_130;
              dStack_78 = dStack_128 + (&dStack_1278)[uVar23];
              goto code_r0x00010971bf14;
            }
            break;
          case 8:
            if (5 < uVar21) {
              uVar23 = 0;
              do {
                dStack_78 = dStack_128;
                dStack_80 = dStack_130;
                if (uVar23 < uVar21) {
                  pdVar14 = &dStack_1278 + uVar23;
                }
                else {
                  uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                  pdVar14 = (double *)&uRam000000011382ab30;
                  uRam000000011382ab30 = 0;
                }
                if (uVar23 + 1 < uVar21) {
                  dStack_78 = (&dStack_1278)[uVar23 + 1];
                }
                else {
                  uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                  uRam000000011382ab30 = 0;
                  dStack_78 = 0.0;
                }
                dStack_80 = *pdVar14 + dStack_130;
                dStack_78 = dStack_78 + dStack_128;
                dStack_88 = dStack_78;
                dStack_90 = dStack_80;
                if (uVar23 + 2 < uVar21) {
                  pdVar14 = &dStack_1278 + (uVar23 + 2);
                }
                else {
                  uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                  pdVar14 = (double *)&uRam000000011382ab30;
                  uRam000000011382ab30 = 0;
                }
                if (uVar23 + 3 < uVar21) {
                  dStack_88 = (&dStack_1278)[uVar23 + 3];
                }
                else {
                  uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                  uRam000000011382ab30 = 0;
                  dStack_88 = 0.0;
                }
                dStack_90 = *pdVar14 + dStack_80;
                dStack_88 = dStack_88 + dStack_78;
                dStack_98 = dStack_88;
                dStack_a0 = dStack_90;
                if (uVar23 + 4 < uVar21) {
                  pdVar14 = &dStack_1278 + (uVar23 + 4);
                }
                else {
                  uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                  pdVar14 = (double *)&uRam000000011382ab30;
                  uRam000000011382ab30 = 0;
                }
                if (uVar23 + 5 < uVar21) {
                  dStack_98 = (&dStack_1278)[uVar23 + 5];
                }
                else {
                  uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                  uRam000000011382ab30 = 0;
                  dStack_98 = 0.0;
                }
                dStack_a0 = *pdVar14 + dStack_90;
                dStack_98 = dStack_98 + dStack_88;
                FUN_109747454(&puStack_1290,auStack_12b8,&dStack_80,&dStack_90,&dStack_a0);
                uVar22 = uVar23 + 0xc;
                uVar23 = uVar23 + 6;
                uVar21 = uStack_1280._4_4_;
              } while (uVar22 <= uStack_1280._4_4_);
            }
            break;
          case 10:
            goto code_r0x00010971c1a4;
          case 0xb:
            if (uStack_244 == 0) {
              bStack_248 = 1;
              puVar20 = &uRam000000011382ab30;
              uRam000000011382ab38 = 0;
              uRam000000011382ab40 = 0;
              uRam000000011382ab30 = 0;
            }
            else {
              uStack_244 = uStack_244 - 1;
              puVar20 = auStack_240 + (ulong)uStack_244 * 3;
            }
            uStack_1288 = (undefined *)puVar20[1];
            puStack_1290 = (undefined *)*puVar20;
            puStack_268 = uStack_1288;
            puStack_270 = puStack_1290;
            uStack_260 = puVar20[2];
            goto LAB_10971ce5c;
          case 0xe:
            bStack_258 = 1;
            goto LAB_10971c9ac;
          case 0xf:
            FUN_109747748(&puStack_1290);
            goto LAB_10971c9ac;
          case 0x10:
            FUN_1097474dc(&puStack_1290,auStack_140,2);
            if (uStack_1280._4_4_ == 0) {
              uVar23 = 0;
              uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
              uRam000000011382ab30 = 0;
              uVar21 = 0;
            }
            else {
              uVar21 = uStack_1280._4_4_ - 1;
              uStack_1280 = (double)CONCAT44(uVar21,(int)uStack_1280);
              uVar23 = (uint)(&dStack_1278)[uVar21];
              if ((int)uVar23 < 0) {
                uVar23 = 0;
                uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
              }
            }
            uVar22 = uVar21 + uVar23 * ~uStack_108;
            if (uVar21 < uVar22) {
              uStack_1288 = (undefined *)CONCAT44((uint)uStack_1288 + 1,(uint)uStack_1288);
            }
            else {
              if (uVar23 != 0) {
                uVar19 = 0;
                uVar5 = uVar21 - uVar23 * uStack_108;
                do {
                  uVar1 = 0;
                  if (uVar5 < 0x202) {
                    uVar1 = 0x201 - uVar5;
                  }
                  uVar12 = (ulong)uStack_108;
                  if ((ulong)uVar1 <= (ulong)uStack_108) {
                    uVar12 = (ulong)uVar1;
                  }
                  uVar2 = uVar22 + uVar23 + uStack_108 * (int)uVar19;
                  uVar1 = 0;
                  if (uVar2 < 0x202) {
                    uVar1 = 0x201 - uVar2;
                  }
                  if (uStack_108 <= uVar1) {
                    uVar1 = uStack_108;
                  }
                  uVar2 = uVar22 + (int)uVar19;
                  if (uVar2 < uVar21) {
                    pdVar14 = &dStack_1278 + uVar2;
                    dVar28 = *pdVar14;
                  }
                  else {
                    uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                    pdVar14 = (double *)&uRam000000011382ab30;
                    uRam000000011382ab30 = 0;
                    dVar28 = 0.0;
                  }
                  dVar30 = 0.0;
                  if (((cStack_f0 != '\0') && (uStack_fc != 0)) && (uStack_fc == uVar1)) {
                    pdVar15 = &dStack_1278 + uVar5;
                    pfVar16 = pfStack_f8;
                    do {
                      dVar30 = dVar30 + *pdVar15 * (double)*pfVar16;
                      uVar12 = uVar12 - 1;
                      pdVar15 = pdVar15 + 1;
                      pfVar16 = pfVar16 + 1;
                    } while (uVar12 != 0);
                  }
                  *pdVar14 = dVar28 + dVar30;
                  uVar19 = uVar19 + 1;
                  uVar5 = uVar5 + uStack_108;
                } while (uVar19 != uVar23);
              }
              if (uVar21 < uVar23 * uStack_108) {
                uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
              }
              else {
                uStack_1280 = (double)CONCAT44(uVar21 - uVar23 * uStack_108,(int)uStack_1280);
              }
            }
            goto LAB_10971ce5c;
          case 0x13:
          case 0x14:
            if (bStack_256 != 1) {
              iStack_250 = iStack_250 + (uVar21 >> 1);
              uStack_24c = iStack_250 + iStack_254 + 7U >> 3;
              bStack_256 = 1;
            }
            if (uVar22 + uStack_24c <= uVar23) {
              uStack_1280 = (double)((ulong)uStack_1280 & 0xffffffff);
              uStack_1288 = (undefined *)CONCAT44(uVar22 + uStack_24c,(uint)uStack_1288);
            }
            goto LAB_10971ce5c;
          case 0x15:
            if (uVar21 == 0) {
              pdVar14 = (double *)&uRam000000011382ab30;
code_r0x00010971cf10:
              uVar21 = 0;
              uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
              uRam000000011382ab30 = 0;
              dVar28 = 0.0;
            }
            else {
              pdVar14 = &dStack_1278 + (uVar21 - 1);
              if (uVar21 - 1 == 0) goto code_r0x00010971cf10;
              dVar28 = (&dStack_1278)[uVar21 - 2];
              uVar21 = uVar21 - 2 >> 1;
            }
            dStack_128 = dStack_128 + *pdVar14;
            dStack_130 = dStack_130 + dVar28;
            goto code_r0x00010971c150;
          case 0x16:
            if (uVar21 == 0) {
              uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
              uRam000000011382ab30 = 0;
              dVar28 = 0.0;
            }
            else {
              dVar28 = (&dStack_1278)[uVar21 - 1];
              uVar21 = uVar21 - 1 >> 1;
            }
            dStack_130 = dStack_130 + dVar28;
code_r0x00010971c150:
            auStack_12b8[0] = 0;
            if ((bStack_257 & 1) == 0) {
              if ((bStack_256 & 1) == 0) {
                iStack_250 = iStack_250 + uVar21;
                uStack_24c = iStack_250 + iStack_254 + 7U >> 3;
                bStack_256 = 1;
              }
              bStack_257 = 1;
            }
            goto LAB_10971c9ac;
          case 0x18:
            if (7 < uVar21) {
              uVar23 = 0;
              do {
                uVar22 = uVar23;
                dStack_78 = dStack_128;
                dStack_80 = dStack_130;
                uVar23 = uStack_1280._4_4_;
                if (uVar22 < uStack_1280._4_4_) {
                  pdVar14 = &dStack_1278 + uVar22;
                }
                else {
                  uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                  pdVar14 = (double *)&uRam000000011382ab30;
                  uRam000000011382ab30 = 0;
                }
                if (uVar22 + 1 < uVar23) {
                  dStack_78 = (&dStack_1278)[uVar22 + 1];
                }
                else {
                  uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                  uRam000000011382ab30 = 0;
                  dStack_78 = 0.0;
                }
                dStack_80 = *pdVar14 + dStack_130;
                dStack_78 = dStack_78 + dStack_128;
                dStack_88 = dStack_78;
                dStack_90 = dStack_80;
                if (uVar22 + 2 < uVar23) {
                  pdVar14 = &dStack_1278 + (uVar22 + 2);
                }
                else {
                  uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                  pdVar14 = (double *)&uRam000000011382ab30;
                  uRam000000011382ab30 = 0;
                }
                if (uVar22 + 3 < uVar23) {
                  dStack_88 = (&dStack_1278)[uVar22 + 3];
                }
                else {
                  uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                  uRam000000011382ab30 = 0;
                  dStack_88 = 0.0;
                }
                dStack_90 = *pdVar14 + dStack_80;
                dStack_88 = dStack_88 + dStack_78;
                dStack_98 = dStack_88;
                dStack_a0 = dStack_90;
                if (uVar22 + 4 < uVar23) {
                  pdVar14 = &dStack_1278 + (uVar22 + 4);
                }
                else {
                  uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                  pdVar14 = (double *)&uRam000000011382ab30;
                  uRam000000011382ab30 = 0;
                }
                if (uVar22 + 5 < uVar23) {
                  dStack_98 = (&dStack_1278)[uVar22 + 5];
                }
                else {
                  uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                  uRam000000011382ab30 = 0;
                  dStack_98 = 0.0;
                }
                dStack_a0 = *pdVar14 + dStack_90;
                dStack_98 = dStack_98 + dStack_88;
                FUN_109747454(&puStack_1290,auStack_12b8,&dStack_80,&dStack_90,&dStack_a0);
                uVar23 = uVar22 + 6;
              } while (uVar22 + 0xc <= uVar21 - 2);
              uVar21 = uStack_1280._4_4_;
              dStack_78 = dStack_128;
              dStack_80 = dStack_130;
              if (uVar23 < uStack_1280._4_4_) {
                pdVar14 = &dStack_1278 + uVar23;
              }
              else {
                uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                pdVar14 = (double *)&uRam000000011382ab30;
                uRam000000011382ab30 = 0;
              }
              if (uVar22 + 7 < uVar21) {
                dStack_78 = (&dStack_1278)[uVar22 + 7];
              }
              else {
                uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                uRam000000011382ab30 = 0;
                dStack_78 = 0.0;
              }
              dStack_80 = *pdVar14 + dStack_130;
              dStack_78 = dStack_78 + dStack_128;
              func_0x0001097473a0(&puStack_1290,auStack_12b8,&dStack_80);
            }
            goto LAB_10971c9ac;
          case 0x19:
            if (7 < uVar21) {
              uVar19 = 0;
              pdVar14 = &dStack_1278;
              do {
                dStack_78 = dStack_128;
                dStack_80 = dStack_130;
                uVar12 = (ulong)uStack_1280 >> 0x20;
                pdVar15 = pdVar14;
                if (uVar12 <= uVar19) {
                  uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                  pdVar15 = (double *)&uRam000000011382ab30;
                  uRam000000011382ab30 = 0;
                }
                if (uVar19 + 1 < uVar12) {
                  dStack_78 = pdVar14[1];
                }
                else {
                  uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                  uRam000000011382ab30 = 0;
                  dStack_78 = 0.0;
                }
                dStack_80 = *pdVar15 + dStack_130;
                dStack_78 = dStack_78 + dStack_128;
                func_0x0001097473a0(&puStack_1290,auStack_12b8,&dStack_80);
                pdVar14 = pdVar14 + 2;
                iVar24 = (int)uVar19;
                uVar19 = uVar19 + 2;
              } while (iVar24 + 4U <= uVar21 - 6);
              uVar21 = uVar21 & 0xfffffffe;
              uVar23 = uVar21 - 6;
              uVar22 = uStack_1280._4_4_;
              dStack_78 = dStack_128;
              dStack_80 = dStack_130;
              if (uVar23 < uStack_1280._4_4_) {
                pdVar14 = &dStack_1278 + uVar23;
              }
              else {
                uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                pdVar14 = (double *)&uRam000000011382ab30;
                uRam000000011382ab30 = 0;
              }
              if ((uVar23 | 1) < uVar22) {
                dStack_78 = (&dStack_1278)[uVar23 | 1];
              }
              else {
                uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                uRam000000011382ab30 = 0;
                dStack_78 = 0.0;
              }
              dStack_80 = *pdVar14 + dStack_130;
              dStack_78 = dStack_78 + dStack_128;
              dStack_88 = dStack_78;
              dStack_90 = dStack_80;
              if (uVar21 - 4 < uVar22) {
                pdVar14 = &dStack_1278 + (uVar21 - 4);
              }
              else {
                uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                pdVar14 = (double *)&uRam000000011382ab30;
                uRam000000011382ab30 = 0;
              }
              if (uVar21 - 3 < uVar22) {
                dStack_88 = (&dStack_1278)[uVar21 - 3];
              }
              else {
                uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                uRam000000011382ab30 = 0;
                dStack_88 = 0.0;
              }
              dStack_90 = *pdVar14 + dStack_80;
              dStack_88 = dStack_88 + dStack_78;
              dStack_98 = dStack_88;
              dStack_a0 = dStack_90;
              if (uVar21 - 2 < uVar22) {
                pdVar14 = &dStack_1278 + (uVar21 - 2);
              }
              else {
                uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                pdVar14 = (double *)&uRam000000011382ab30;
                uRam000000011382ab30 = 0;
              }
              if (uVar21 - 1 < uVar22) {
                dStack_98 = (&dStack_1278)[uVar21 - 1];
              }
              else {
                uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                uRam000000011382ab30 = 0;
                dStack_98 = 0.0;
              }
              dStack_a0 = *pdVar14 + dStack_90;
              dStack_98 = dStack_98 + dStack_88;
              lVar18 = -0x70;
              lVar3 = -0x80;
              lVar4 = -0x90;
              goto code_r0x00010971c9a8;
            }
LAB_10971c9ac:
            uStack_1280 = (double)((ulong)uStack_1280 & 0xffffffff);
            goto LAB_10971ce5c;
          case 0x1a:
            dStack_78 = dStack_128;
            dStack_80 = dStack_130;
            bVar25 = ((ulong)uStack_1280 & 0x100000000) != 0;
            if (bVar25) {
              dStack_80 = dStack_1278 + dStack_130;
            }
            uVar22 = (uint)bVar25;
            uVar23 = uVar22 | 4;
            while (dStack_78 = dStack_128, uVar23 <= uVar21) {
              if (uVar22 < uVar21) {
                dStack_78 = (&dStack_1278)[uVar22];
              }
              else {
                uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                uRam000000011382ab30 = 0;
                dStack_78 = 0.0;
              }
              dStack_78 = dStack_78 + dStack_128;
              dStack_88 = dStack_78;
              dStack_90 = dStack_80;
              if (uVar22 + 1 < uVar21) {
                pdVar14 = &dStack_1278 + (uVar22 + 1);
              }
              else {
                uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                pdVar14 = (double *)&uRam000000011382ab30;
                uRam000000011382ab30 = 0;
              }
              if (uVar22 + 2 < uVar21) {
                dStack_88 = (&dStack_1278)[uVar22 + 2];
              }
              else {
                uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                uRam000000011382ab30 = 0;
                dStack_88 = 0.0;
              }
              dStack_88 = dStack_88 + dStack_78;
              dStack_90 = *pdVar14 + dStack_80;
              dStack_98 = dStack_88;
              dStack_a0 = *pdVar14 + dStack_80;
              if (uVar22 + 3 < uVar21) {
                dStack_98 = (&dStack_1278)[uVar22 + 3];
              }
              else {
                uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                uRam000000011382ab30 = 0;
                dStack_98 = 0.0;
              }
              dStack_98 = dStack_98 + dStack_88;
              FUN_109747454(&puStack_1290,auStack_12b8,&dStack_80,&dStack_90,&dStack_a0);
              dStack_78 = dStack_128;
              dStack_80 = dStack_130;
              uVar23 = uVar22 + 8;
              uVar22 = uVar22 + 4;
              uVar21 = uStack_1280._4_4_;
            }
            break;
          case 0x1b:
            dStack_78 = dStack_128;
            dStack_80 = dStack_130;
            bVar25 = ((ulong)uStack_1280 & 0x100000000) != 0;
            if (bVar25) {
              dStack_78 = dStack_1278 + dStack_128;
            }
            uVar22 = (uint)bVar25;
            uVar23 = uVar22 | 4;
            while (dStack_80 = dStack_130, uVar23 <= uVar21) {
              if (uVar22 < uVar21) {
                dStack_80 = (&dStack_1278)[uVar22];
              }
              else {
                uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                uRam000000011382ab30 = 0;
                dStack_80 = 0.0;
              }
              dStack_80 = dStack_80 + dStack_130;
              dStack_88 = dStack_78;
              dStack_90 = dStack_80;
              if (uVar22 + 1 < uVar21) {
                pdVar14 = &dStack_1278 + (uVar22 + 1);
              }
              else {
                uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                pdVar14 = (double *)&uRam000000011382ab30;
                uRam000000011382ab30 = 0;
              }
              if (uVar22 + 2 < uVar21) {
                dVar28 = (&dStack_1278)[uVar22 + 2];
              }
              else {
                uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                uRam000000011382ab30 = 0;
                dVar28 = 0.0;
              }
              dStack_90 = *pdVar14 + dStack_80;
              dStack_88 = dVar28 + dStack_78;
              dStack_98 = dVar28 + dStack_78;
              dStack_a0 = dStack_90;
              if (uVar22 + 3 < uVar21) {
                dStack_a0 = (&dStack_1278)[uVar22 + 3];
              }
              else {
                uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                uRam000000011382ab30 = 0;
                dStack_a0 = 0.0;
              }
              dStack_a0 = dStack_a0 + dStack_90;
              FUN_109747454(&puStack_1290,auStack_12b8,&dStack_80,&dStack_90,&dStack_a0);
              dStack_78 = dStack_128;
              dStack_80 = dStack_130;
              uVar23 = uVar22 + 8;
              uVar22 = uVar22 + 4;
              uVar21 = uStack_1280._4_4_;
            }
            break;
          case 0x1d:
            uVar10 = 1;
            puVar13 = auStack_150;
            goto code_r0x00010971c1a4;
          case 0x1e:
            if ((uVar21 >> 2 & 1) == 0) {
              if (7 < uVar21) {
                iVar24 = 0;
                uVar23 = 0;
                do {
                  dStack_78 = dStack_128;
                  dStack_80 = dStack_130;
                  if (uVar23 < uVar21) {
                    dStack_78 = (&dStack_1278)[uVar23];
                  }
                  else {
                    uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                    uRam000000011382ab30 = 0;
                    dStack_78 = 0.0;
                  }
                  dStack_78 = dStack_78 + dStack_128;
                  dStack_88 = dStack_78;
                  dStack_90 = dStack_130;
                  if (uVar23 + 1 < uVar21) {
                    pdVar14 = &dStack_1278 + (uVar23 + 1);
                  }
                  else {
                    uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                    pdVar14 = (double *)&uRam000000011382ab30;
                    uRam000000011382ab30 = 0;
                  }
                  if (uVar23 + 2 < uVar21) {
                    dVar28 = (&dStack_1278)[uVar23 + 2];
                  }
                  else {
                    uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                    uRam000000011382ab30 = 0;
                    dVar28 = 0.0;
                  }
                  dStack_90 = *pdVar14 + dStack_130;
                  dStack_88 = dVar28 + dStack_78;
                  dStack_98 = dVar28 + dStack_78;
                  dStack_a0 = dStack_90;
                  if (uVar23 + 3 < uVar21) {
                    dStack_a0 = (&dStack_1278)[uVar23 + 3];
                  }
                  else {
                    uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                    uRam000000011382ab30 = 0;
                    dStack_a0 = 0.0;
                  }
                  dStack_a0 = dStack_a0 + dStack_90;
                  FUN_109747454(&puStack_1290,auStack_12b8,&dStack_80,&dStack_90,&dStack_a0);
                  dVar28 = uStack_1280;
                  dStack_78 = dStack_98;
                  dStack_80 = dStack_a0;
                  uVar21 = uStack_1280._4_4_;
                  if (uVar23 + 4 < uStack_1280._4_4_) {
                    dStack_80 = (&dStack_1278)[uVar23 + 4];
                  }
                  else {
                    uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                    uRam000000011382ab30 = 0;
                    dStack_80 = 0.0;
                  }
                  dStack_80 = dStack_80 + dStack_a0;
                  dStack_88 = dStack_98;
                  dStack_90 = dStack_80;
                  if (uVar23 + 5 < uVar21) {
                    pdVar14 = &dStack_1278 + (uVar23 + 5);
                  }
                  else {
                    uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                    pdVar14 = (double *)&uRam000000011382ab30;
                    uRam000000011382ab30 = 0;
                  }
                  if (uVar23 + 6 < uVar21) {
                    dStack_88 = (&dStack_1278)[uVar23 + 6];
                  }
                  else {
                    uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                    uRam000000011382ab30 = 0;
                    dStack_88 = 0.0;
                  }
                  dStack_90 = *pdVar14 + dStack_80;
                  dStack_88 = dStack_88 + dStack_98;
                  dStack_98 = dStack_88;
                  dStack_a0 = dStack_90;
                  if (uVar23 + 7 < uVar21) {
                    dVar30 = (&dStack_1278)[uVar23 + 7];
                  }
                  else {
                    uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                    uRam000000011382ab30 = 0;
                    dVar30 = 0.0;
                  }
                  dStack_98 = dVar30 + dStack_88;
                  if ((iVar24 + uVar21 < 0x10) && (((ulong)dVar28 & 0x100000000) != 0)) {
                    if (uVar23 + 8 < uVar21) {
                      dStack_a0 = (&dStack_1278)[uVar23 + 8];
                    }
                    else {
                      uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                      uRam000000011382ab30 = 0;
                      dStack_a0 = 0.0;
                    }
                    dStack_a0 = dStack_a0 + dStack_90;
                  }
                  FUN_109747454(&puStack_1290,auStack_12b8,&dStack_80,&dStack_90,&dStack_a0);
                  uVar22 = uVar23 + 0x10;
                  uVar23 = uVar23 + 8;
                  iVar24 = iVar24 + -8;
                  uVar21 = uStack_1280._4_4_;
                } while (uVar22 <= uStack_1280._4_4_);
              }
            }
            else {
              dStack_80 = dStack_130;
              dStack_78 = dStack_1278 + dStack_128;
              dStack_88 = dStack_1268 + dStack_1278 + dStack_128;
              dStack_90 = uStack_1270 + dStack_130;
              dStack_98 = dStack_88;
              dStack_a0 = dStack_1260 + uStack_1270 + dStack_130;
              if (uVar21 < 0xc) {
                uVar22 = 4;
              }
              else {
                uVar23 = 6;
                do {
                  uVar22 = uVar23;
                  dStack_98 = dStack_88;
                  FUN_109747454(&puStack_1290,auStack_12b8,&dStack_80,&dStack_90,&dStack_a0);
                  dStack_78 = dStack_128;
                  dStack_80 = dStack_130;
                  uVar21 = uStack_1280._4_4_;
                  if (uVar22 - 2 < uStack_1280._4_4_) {
                    dStack_80 = (&dStack_1278)[uVar22 - 2];
                  }
                  else {
                    uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                    uRam000000011382ab30 = 0;
                    dStack_80 = 0.0;
                  }
                  dStack_80 = dStack_80 + dStack_130;
                  dStack_88 = dStack_128;
                  dStack_90 = dStack_80;
                  if (uVar22 - 1 < uVar21) {
                    pdVar14 = &dStack_1278 + (uVar22 - 1);
                  }
                  else {
                    uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                    pdVar14 = (double *)&uRam000000011382ab30;
                    uRam000000011382ab30 = 0;
                  }
                  if (uVar22 < uVar21) {
                    dStack_88 = (&dStack_1278)[uVar22];
                  }
                  else {
                    uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                    uRam000000011382ab30 = 0;
                    dStack_88 = 0.0;
                  }
                  dStack_88 = dStack_88 + dStack_128;
                  dStack_90 = *pdVar14 + dStack_80;
                  dStack_98 = dStack_88;
                  dStack_a0 = *pdVar14 + dStack_80;
                  if (uVar22 + 1 < uVar21) {
                    dStack_98 = (&dStack_1278)[uVar22 + 1];
                  }
                  else {
                    uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                    uRam000000011382ab30 = 0;
                    dStack_98 = 0.0;
                  }
                  dStack_98 = dStack_98 + dStack_88;
                  FUN_109747454(&puStack_1290,auStack_12b8,&dStack_80,&dStack_90,&dStack_a0);
                  dStack_78 = dStack_98;
                  dStack_80 = dStack_a0;
                  uVar21 = uStack_1280._4_4_;
                  if (uVar22 + 2 < uStack_1280._4_4_) {
                    dStack_78 = (&dStack_1278)[uVar22 + 2];
                  }
                  else {
                    uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                    uRam000000011382ab30 = 0;
                    dStack_78 = 0.0;
                  }
                  dStack_78 = dStack_78 + dStack_98;
                  dStack_88 = dStack_78;
                  dStack_90 = dStack_a0;
                  if (uVar22 + 3 < uVar21) {
                    pdVar14 = &dStack_1278 + (uVar22 + 3);
                  }
                  else {
                    uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                    pdVar14 = (double *)&uRam000000011382ab30;
                    uRam000000011382ab30 = 0;
                  }
                  if (uVar22 + 4 < uVar21) {
                    dVar28 = (&dStack_1278)[uVar22 + 4];
                  }
                  else {
                    uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                    uRam000000011382ab30 = 0;
                    dVar28 = 0.0;
                  }
                  dStack_90 = *pdVar14 + dStack_a0;
                  dStack_88 = dVar28 + dStack_78;
                  dStack_98 = dVar28 + dStack_78;
                  dStack_a0 = dStack_90;
                  if (uVar22 + 5 < uVar21) {
                    dVar28 = (&dStack_1278)[uVar22 + 5];
                  }
                  else {
                    uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                    uRam000000011382ab30 = 0;
                    dVar28 = 0.0;
                  }
                  dStack_a0 = dVar28 + dStack_90;
                  uVar23 = uVar22 + 8;
                } while (uVar22 + 0xe <= uVar21);
                uVar22 = uVar22 + 6;
              }
              dStack_98 = dStack_88;
              if (uVar22 < uVar21) {
                dStack_98 = dStack_88 + (&dStack_1278)[uVar22];
              }
code_r0x00010971ce38:
              FUN_109747454(&puStack_1290,auStack_12b8,&dStack_80,&dStack_90,&dStack_a0);
            }
            break;
          case 0x1f:
            if ((uVar21 >> 2 & 1) != 0) {
              dStack_78 = dStack_128;
              dStack_80 = dStack_1278 + dStack_130;
              dStack_90 = uStack_1270 + dStack_1278 + dStack_130;
              dStack_88 = dStack_1268 + dStack_128;
              dStack_a0 = dStack_90;
              dStack_98 = dStack_1260 + dStack_1268 + dStack_128;
              if (uVar21 < 0xc) {
                uVar22 = 4;
              }
              else {
                uVar23 = 6;
                do {
                  uVar22 = uVar23;
                  dStack_a0 = dStack_90;
                  FUN_109747454(&puStack_1290,auStack_12b8,&dStack_80,&dStack_90,&dStack_a0);
                  dStack_78 = dStack_128;
                  dStack_80 = dStack_130;
                  uVar21 = uStack_1280._4_4_;
                  if (uVar22 - 2 < uStack_1280._4_4_) {
                    dStack_78 = (&dStack_1278)[uVar22 - 2];
                  }
                  else {
                    uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                    uRam000000011382ab30 = 0;
                    dStack_78 = 0.0;
                  }
                  dStack_78 = dStack_78 + dStack_128;
                  dStack_88 = dStack_78;
                  dStack_90 = dStack_130;
                  if (uVar22 - 1 < uVar21) {
                    pdVar14 = &dStack_1278 + (uVar22 - 1);
                  }
                  else {
                    uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                    pdVar14 = (double *)&uRam000000011382ab30;
                    uRam000000011382ab30 = 0;
                  }
                  if (uVar22 < uVar21) {
                    dVar28 = (&dStack_1278)[uVar22];
                  }
                  else {
                    uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                    uRam000000011382ab30 = 0;
                    dVar28 = 0.0;
                  }
                  dStack_90 = *pdVar14 + dStack_130;
                  dStack_88 = dVar28 + dStack_78;
                  dStack_98 = dVar28 + dStack_78;
                  dStack_a0 = dStack_90;
                  if (uVar22 + 1 < uVar21) {
                    dStack_a0 = (&dStack_1278)[uVar22 + 1];
                  }
                  else {
                    uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                    uRam000000011382ab30 = 0;
                    dStack_a0 = 0.0;
                  }
                  dStack_a0 = dStack_a0 + dStack_90;
                  FUN_109747454(&puStack_1290,auStack_12b8,&dStack_80,&dStack_90,&dStack_a0);
                  dStack_78 = dStack_98;
                  dStack_80 = dStack_a0;
                  uVar21 = uStack_1280._4_4_;
                  if (uVar22 + 2 < uStack_1280._4_4_) {
                    dStack_80 = (&dStack_1278)[uVar22 + 2];
                  }
                  else {
                    uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                    uRam000000011382ab30 = 0;
                    dStack_80 = 0.0;
                  }
                  dStack_80 = dStack_80 + dStack_a0;
                  dStack_88 = dStack_98;
                  dStack_90 = dStack_80;
                  if (uVar22 + 3 < uVar21) {
                    pdVar14 = &dStack_1278 + (uVar22 + 3);
                  }
                  else {
                    uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                    pdVar14 = (double *)&uRam000000011382ab30;
                    uRam000000011382ab30 = 0;
                  }
                  if (uVar22 + 4 < uVar21) {
                    dStack_88 = (&dStack_1278)[uVar22 + 4];
                  }
                  else {
                    uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                    uRam000000011382ab30 = 0;
                    dStack_88 = 0.0;
                  }
                  dStack_88 = dStack_88 + dStack_98;
                  dStack_90 = *pdVar14 + dStack_80;
                  dStack_98 = dStack_88;
                  dStack_a0 = *pdVar14 + dStack_80;
                  if (uVar22 + 5 < uVar21) {
                    dVar28 = (&dStack_1278)[uVar22 + 5];
                  }
                  else {
                    uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                    uRam000000011382ab30 = 0;
                    dVar28 = 0.0;
                  }
                  dStack_98 = dVar28 + dStack_88;
                  uVar23 = uVar22 + 8;
                } while (uVar22 + 0xe <= uVar21);
                uVar22 = uVar22 + 6;
              }
              dStack_a0 = dStack_90;
              if (uVar22 < uVar21) {
                dStack_a0 = dStack_90 + (&dStack_1278)[uVar22];
              }
              goto code_r0x00010971ce38;
            }
            if (7 < uVar21) {
              iVar24 = 0;
              uVar23 = 0;
              do {
                dStack_78 = dStack_128;
                dStack_80 = dStack_130;
                if (uVar23 < uVar21) {
                  dStack_80 = (&dStack_1278)[uVar23];
                }
                else {
                  uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                  uRam000000011382ab30 = 0;
                  dStack_80 = 0.0;
                }
                dStack_80 = dStack_80 + dStack_130;
                dStack_88 = dStack_128;
                dStack_90 = dStack_80;
                if (uVar23 + 1 < uVar21) {
                  pdVar14 = &dStack_1278 + (uVar23 + 1);
                }
                else {
                  uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                  pdVar14 = (double *)&uRam000000011382ab30;
                  uRam000000011382ab30 = 0;
                }
                if (uVar23 + 2 < uVar21) {
                  dStack_88 = (&dStack_1278)[uVar23 + 2];
                }
                else {
                  uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                  uRam000000011382ab30 = 0;
                  dStack_88 = 0.0;
                }
                dStack_88 = dStack_88 + dStack_128;
                dStack_90 = *pdVar14 + dStack_80;
                dStack_98 = dStack_88;
                dStack_a0 = *pdVar14 + dStack_80;
                if (uVar23 + 3 < uVar21) {
                  dStack_98 = (&dStack_1278)[uVar23 + 3];
                }
                else {
                  uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                  uRam000000011382ab30 = 0;
                  dStack_98 = 0.0;
                }
                dStack_98 = dStack_98 + dStack_88;
                FUN_109747454(&puStack_1290,auStack_12b8,&dStack_80,&dStack_90,&dStack_a0);
                dVar28 = uStack_1280;
                dStack_78 = dStack_98;
                dStack_80 = dStack_a0;
                uVar21 = uStack_1280._4_4_;
                if (uVar23 + 4 < uStack_1280._4_4_) {
                  dStack_78 = (&dStack_1278)[uVar23 + 4];
                }
                else {
                  uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                  uRam000000011382ab30 = 0;
                  dStack_78 = 0.0;
                }
                dStack_78 = dStack_78 + dStack_98;
                dStack_88 = dStack_78;
                dStack_90 = dStack_a0;
                if (uVar23 + 5 < uVar21) {
                  pdVar14 = &dStack_1278 + (uVar23 + 5);
                }
                else {
                  uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                  pdVar14 = (double *)&uRam000000011382ab30;
                  uRam000000011382ab30 = 0;
                }
                if (uVar23 + 6 < uVar21) {
                  dStack_88 = (&dStack_1278)[uVar23 + 6];
                }
                else {
                  uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                  uRam000000011382ab30 = 0;
                  dStack_88 = 0.0;
                }
                dStack_90 = *pdVar14 + dStack_a0;
                dStack_88 = dStack_88 + dStack_78;
                dStack_98 = dStack_88;
                dStack_a0 = dStack_90;
                if (uVar23 + 7 < uVar21) {
                  dVar30 = (&dStack_1278)[uVar23 + 7];
                }
                else {
                  uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                  uRam000000011382ab30 = 0;
                  dVar30 = 0.0;
                }
                dStack_a0 = dVar30 + dStack_90;
                if ((iVar24 + uVar21 < 0x10) && (((ulong)dVar28 & 0x100000000) != 0)) {
                  if (uVar23 + 8 < uVar21) {
                    dStack_98 = (&dStack_1278)[uVar23 + 8];
                  }
                  else {
                    uStack_1280 = (double)CONCAT71(uStack_1280._1_7_,1);
                    uRam000000011382ab30 = 0;
                    dStack_98 = 0.0;
                  }
                  dStack_98 = dStack_98 + dStack_88;
                }
                FUN_109747454(&puStack_1290,auStack_12b8,&dStack_80,&dStack_90,&dStack_a0);
                uVar22 = uVar23 + 0x10;
                uVar23 = uVar23 + 8;
                iVar24 = iVar24 + -8;
                uVar21 = uStack_1280._4_4_;
              } while (uVar22 <= uStack_1280._4_4_);
            }
          }
          uStack_1280 = (double)((ulong)uStack_1280 & 0xffffffff);
LAB_10971ce5c:
          if ((((bStack_248 & 1) != 0) || ((uint)uStack_1288 < uStack_1288._4_4_)) ||
             ((((ulong)uStack_1280 & 1) != 0 || (iVar17 = iVar17 + -1, iVar17 == 0)))) {
            bVar25 = false;
            uStack_1288 = (undefined *)CONCAT44((uint)uStack_1288 + 1,(uint)uStack_1288);
            goto LAB_10971d0dc;
          }
          uVar21 = uStack_1288._4_4_;
          uVar23 = (uint)uStack_1288;
        } while ((bStack_258 & 1) == 0);
        if (dStack_12b0 < dStack_12a0) {
          iVar17 = (int)(dStack_12b0 + 0.5);
          iVar24 = (int)((dStack_12a0 - (double)iVar17) + 0.5);
        }
        else {
          iVar24 = 0;
          iVar17 = 0;
        }
        param_4[2] = iVar24;
        *param_4 = iVar17;
        if (dStack_12a8 < dStack_1298) {
          iVar17 = (int)(dStack_1298 + 0.5);
          iVar24 = (int)((dStack_12a8 - (double)iVar17) + 0.5);
        }
        else {
          iVar24 = 0;
          iVar17 = 0;
        }
        param_4[3] = iVar24;
        param_4[1] = iVar17;
        FUN_1096feabc(param_1,param_4);
        bVar25 = true;
LAB_10971d0dc:
        if (iStack_100 != 0) {
          uStack_fc = 0;
          _free(pfStack_f8);
        }
        if (bVar25) {
          return 1;
        }
      }
      lVar26 = lVar26 + 0x80;
      func_0x000109723b9c();
      FUN_1096fcbc8();
      if ((int)lVar26 != 0) {
        if ((double)puStack_1290 < uStack_1280) {
          iVar17 = (int)((double)puStack_1290 + 0.5);
          iVar24 = (int)((uStack_1280 - (double)iVar17) + 0.5);
        }
        else {
          iVar24 = 0;
          iVar17 = 0;
        }
        param_4[2] = iVar24;
        *param_4 = iVar17;
        if ((double)uStack_1288 < dStack_1278) {
          iVar17 = (int)(dStack_1278 + 0.5);
          iVar24 = (int)(((double)uStack_1288 - (double)iVar17) + 0.5);
        }
        else {
          iVar24 = 0;
          iVar17 = 0;
        }
        param_4[3] = iVar24;
        param_4[1] = iVar17;
        FUN_1096feabc(param_1,param_4);
        return lVar26;
      }
      return lVar26;
    }
  }
  return 1;
code_r0x00010971c1a4:
  FUN_109747298(&puStack_1290,puVar13,uVar10);
  goto LAB_10971ce5c;
}



/* Entry: 10971d21c; end: 10971d343;  */

undefined8
FUN_10971d21c(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *param_2;
  puVar6 = (undefined *)(lVar7 + 0x38);
  FUN_10974b128(puVar6);
  uVar4 = param_3;
  FUN_109729308();
  uVar2 = (uint)uVar4;
  if ((param_5 == 0) || (uVar2 == 0)) {
    if (uVar2 != 0) {
      return 1;
    }
    uVar5 = lVar7 + 0x80;
    func_0x000109723b9c();
    if (((*(uint *)(uVar5 + 0x128) <= (uint)param_3) || (*(long *)(uVar5 + 0x40) == 0)) ||
       (*(int *)(uVar5 + 0xdc) != -1)) {
      return 0;
    }
    if (param_5 == 0) {
      return 1;
    }
    uVar3 = uVar5;
    func_0x0001097293d0(uVar5,param_3,0);
    uVar2 = (uint)uVar3;
    if (uVar2 < 0x187) {
      puVar6 = &UNK_10dfe59b0 + *(uint *)(&UNK_10dfe6724 + (uVar3 & 0xffffffff) * 4);
      uVar5 = (ulong)(*(int *)(&UNK_10dfe6724 + (ulong)(uVar2 + 1) * 4) +
                     ~*(uint *)(&UNK_10dfe6724 + (uVar3 & 0xffffffff) * 4));
    }
    else {
      puVar6 = *(undefined **)(uVar5 + 0x68);
      uVar5 = (ulong)(uVar2 - 0x187);
      FUN_1097007f0(puVar6);
    }
    uVar5 = uVar5 & 0xffffffff;
    if (uVar5 == 0) {
      return 0;
    }
    if (param_5 - 1 <= uVar5) {
      uVar5 = (ulong)(param_5 - 1);
    }
  }
  else {
    uVar1 = param_5 - 1U;
    if (uVar2 <= param_5 - 1U) {
      uVar1 = uVar2;
    }
    uVar5 = (ulong)uVar1;
  }
  _strncpy(param_4,puVar6,uVar5);
  *(undefined1 *)(param_4 + uVar5) = 0;
  return 1;
}



/* Entry: 10971d344; end: 10971d7b3;  */

undefined8
FUN_10971d344(undefined8 param_1,long *param_2,undefined8 param_3,uint param_4,uint *param_5)

{
  long *plVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  char *pcVar12;
  ushort *puVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  char *pcStack_80;
  ulong uStack_78;
  undefined2 uStack_70;
  undefined8 uStack_68;
  
  lVar20 = *param_2;
  lVar15 = lVar20 + 0x38;
  FUN_10974b128();
  if (*(int *)(lVar15 + 8) == 0x20000) {
    uVar14 = (uint)(**(ushort **)(lVar15 + 0x10) >> 8) |
             (**(ushort **)(lVar15 + 0x10) & 0xff00ff) << 8;
    uVar21 = (ulong)uVar14;
    if (uVar14 == 0) goto LAB_10971d428;
  }
  else {
    if (*(int *)(lVar15 + 8) != 0x10000) goto LAB_10971d428;
    uVar21 = 0x102;
  }
  uVar14 = param_4;
  if ((int)param_4 < 0) {
    uVar10 = param_3;
    _strlen();
    uVar14 = (uint)uVar10;
  }
  if (uVar14 != 0) {
    plVar1 = (long *)(lVar15 + 0x30);
    lVar16 = *plVar1;
    if (lVar16 == 0) {
      do {
        lVar16 = uVar21 << 1;
        _malloc();
        if (lVar16 == 0) goto LAB_10971d428;
        uVar22 = 0;
        do {
          *(short *)(lVar16 + uVar22 * 2) = (short)uVar22;
          uVar22 = uVar22 + 1;
        } while (uVar21 != uVar22);
        FUN_1097295f4(lVar16,uVar21,lVar15);
        if (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar16;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') break;
        }
        else {
          ClearExclusiveLocal();
        }
        _free(lVar16);
        lVar16 = *plVar1;
      } while (lVar16 == 0);
    }
    iVar19 = 0;
    iVar18 = (int)uVar21 + -1;
    do {
      uVar22 = (ulong)(uint)(iVar18 + iVar19) & 0xfffffffe;
      uVar21 = (ulong)*(ushort *)(lVar16 + uVar22);
      lVar8 = lVar15;
      FUN_109729308(lVar15);
      iVar6 = uVar14 - (int)uVar21;
      if (iVar6 == 0) {
        uVar10 = param_3;
        _memcmp(param_3,lVar8,uVar21 & 0xffffffff);
        iVar6 = (int)uVar10;
      }
      uVar7 = (uint)(iVar18 + iVar19) >> 1;
      if (iVar6 < 0) {
        iVar18 = uVar7 - 1;
      }
      else {
        if (iVar6 == 0) {
          uVar14 = (uint)*(ushort *)(lVar16 + uVar22);
          goto LAB_10971d4d8;
        }
        iVar19 = uVar7 + 1;
      }
    } while (iVar19 <= iVar18);
  }
LAB_10971d428:
  uVar21 = lVar20 + 0x80;
  func_0x000109723b9c();
  if ((*(long *)(uVar21 + 0x40) != 0) && (*(int *)(uVar21 + 0xdc) == -1)) {
    if ((int)param_4 < 0) {
      uVar10 = param_3;
      _strlen();
      param_4 = (uint)uVar10;
    }
    if (param_4 != 0) {
      plVar1 = (long *)(uVar21 + 0x130);
      piVar17 = (int *)*plVar1;
      while (piVar17 == (int *)0x0) {
        piVar17 = (int *)0x1;
        _calloc(1,0x10);
        if (piVar17 == (int *)0x0) {
          if (*plVar1 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = 0;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              return 0;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        }
        else {
          piVar17[0] = 0;
          piVar17[1] = 0;
          piVar17[2] = 0;
          piVar17[3] = 0;
          uStack_68 = 0xffffffff00000000;
          if (*(int *)(uVar21 + 0x128) != 0) {
            uVar14 = 0;
            do {
              uVar22 = uVar21;
              func_0x0001097293d0(uVar21,uVar14,&uStack_68);
              pcStack_80 = (char *)0x0;
              uStack_78 = 0;
              uVar7 = (uint)uVar22;
              uStack_70 = (undefined2)uVar22;
              if (uVar7 < 0x187) {
                uStack_78 = (ulong)(*(int *)(&UNK_10dfe6724 + (ulong)(uVar7 + 1) * 4) +
                                   ~*(uint *)(&UNK_10dfe6724 + (uVar22 & 0xffffffff) * 4));
                pcStack_80 = &UNK_10dfe59b0 + *(uint *)(&UNK_10dfe6724 + (uVar22 & 0xffffffff) * 4);
              }
              else {
                pcVar12 = *(char **)(uVar21 + 0x68);
                uVar7 = uVar7 - 0x187;
                FUN_1097007f0();
                uStack_78 = (ulong)uVar7;
                pcStack_80 = pcVar12;
                if (pcVar12 == (char *)0x0) {
                  pcStack_80 = "";
                  uStack_78 = 0;
                }
              }
              FUN_109729978(piVar17,&pcStack_80);
              uVar14 = uVar14 + 1;
            } while (uVar14 < *(uint *)(uVar21 + 0x128));
            if (piVar17[1] != 0) {
              _qsort(*(undefined8 *)(piVar17 + 2),piVar17[1],0x18,FUN_109729a4c);
            }
          }
          if (*plVar1 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = (long)piVar17;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
          if (*piVar17 != 0) {
            piVar17[1] = 0;
            _free(*(undefined8 *)(piVar17 + 2));
          }
          _free(piVar17);
        }
        piVar17 = (int *)*plVar1;
      }
      iVar19 = piVar17[1] + -1;
      if (0 < piVar17[1]) {
        iVar18 = 0;
        lVar15 = *(long *)(piVar17 + 2);
        do {
          uVar3 = (uint)(iVar19 + iVar18) >> 1;
          puVar11 = (undefined8 *)(lVar15 + (ulong)uVar3 * 0x18);
          uVar7 = *(uint *)(puVar11 + 1);
          uVar14 = param_4;
          if (uVar7 <= param_4) {
            uVar14 = uVar7;
          }
          uVar10 = param_3;
          _strncmp(param_3,*puVar11,uVar14);
          iVar6 = param_4 - uVar7;
          if ((int)uVar10 != 0) {
            iVar6 = (int)uVar10;
          }
          if (iVar6 < 0) {
            iVar19 = uVar3 - 1;
          }
          else {
            if (iVar6 == 0) {
              puVar13 = (ushort *)(lVar15 + (ulong)uVar3 * 0x18 + 0x10);
              uVar2 = *puVar13;
              uVar14 = (uint)uVar2;
              puVar9 = *(undefined **)(uVar21 + 0x50);
              if (puVar9 != &UNK_10dfe4888) {
                func_0x000109715720(puVar9,uVar2,*(undefined4 *)(uVar21 + 0x128));
                uVar14 = (uint)puVar9;
                goto LAB_10971d530;
              }
              iVar19 = *(int *)(uVar21 + 0xf4);
              if (iVar19 == 0) {
                if (0xe4 < uVar2) {
                  return 0;
                }
                goto LAB_10971d530;
              }
              uVar7 = uVar14;
              if (iVar19 == 1) {
                iVar19 = 0;
                iVar18 = 0xa4;
                puVar9 = &UNK_10dfe0856;
                goto LAB_10971d5a8;
              }
              if (iVar19 != 2) goto LAB_10971d5d8;
              iVar19 = 0;
              iVar18 = 0x55;
              puVar9 = &UNK_10dfe0aea;
              goto LAB_10971d564;
            }
            iVar18 = uVar3 + 1;
          }
        } while (iVar18 <= iVar19);
      }
    }
  }
  return 0;
LAB_10971d5a8:
  do {
    uVar14 = (uint)(iVar18 + iVar19) >> 1;
    uVar21 = (ulong)uVar14;
    if (uVar2 < *(ushort *)(&UNK_10dfe0856 + uVar21 * 4)) {
      iVar18 = uVar14 - 1;
    }
    else {
      if (*(ushort *)(&UNK_10dfe0856 + uVar21 * 4) == uVar2) goto LAB_10971d5f8;
      iVar19 = uVar14 + 1;
    }
  } while (iVar19 <= iVar18);
  goto LAB_10971d5d8;
LAB_10971d5f8:
  uVar14 = (uint)(byte)puVar9[uVar21 * 4 + 2];
LAB_10971d530:
  if (uVar14 == 0) {
    uVar7 = (uint)*puVar13;
    goto LAB_10971d5d8;
  }
  goto LAB_10971d4d8;
LAB_10971d564:
  do {
    uVar14 = (uint)(iVar18 + iVar19) >> 1;
    uVar21 = (ulong)uVar14;
    if (uVar2 < *(ushort *)(&UNK_10dfe0aea + uVar21 * 4)) {
      iVar18 = uVar14 - 1;
    }
    else {
      if (*(ushort *)(&UNK_10dfe0aea + uVar21 * 4) == uVar2) goto LAB_10971d5f8;
      iVar19 = uVar14 + 1;
    }
  } while (iVar19 <= iVar18);
LAB_10971d5d8:
  uVar10 = 0;
  uVar14 = 0;
  if (uVar7 == 0) {
LAB_10971d4d8:
    *param_5 = uVar14;
    uVar10 = 1;
  }
  return uVar10;
}



/* Entry: 10971d7b4; end: 10971d7fb;  */

/* WARNING: Removing unreachable block (ram,0x00010971d7dc) */

void FUN_10971d7b4(void)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  do {
    piVar4 = piRam000000011382adc8;
    if (piRam000000011382adc8 == (int *)0x0) {
      return;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x11382adc8,0x10);
    if (bVar3) {
      piRam000000011382adc8 = (int *)0x0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (piVar4 == (int *)0x1132e0078) {
    return;
  }
  if ((piVar4 != (int *)0x0) && (*piVar4 != 0)) {
    do {
      iVar1 = *piVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar3) {
        *piVar4 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      *piVar4 = -0xdead;
      lVar7 = *(long *)(piVar4 + 2);
      if (lVar7 != 0) {
        FUN_109711500(lVar7 + 0x40,lVar7);
        _pthread_mutex_destroy(lVar7);
        _free(lVar7);
        piVar4[2] = 0;
        piVar4[3] = 0;
      }
      puVar5 = *(undefined8 **)(piVar4 + 6);
      if (puVar5 != (undefined8 *)0x0) {
        if ((code *)*puVar5 != (code *)0x0) {
          if (*(undefined8 **)(piVar4 + 4) == (undefined8 *)0x0) {
            uVar6 = 0;
          }
          else {
            uVar6 = **(undefined8 **)(piVar4 + 4);
          }
          (*(code *)*puVar5)(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 6);
        }
        if ((code *)puVar5[1] != (code *)0x0) {
          if (*(long *)(piVar4 + 4) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 4) + 8);
          }
          (*(code *)puVar5[1])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 6);
        }
        if ((code *)puVar5[2] != (code *)0x0) {
          if (*(long *)(piVar4 + 4) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 4) + 0x10);
          }
          (*(code *)puVar5[2])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 6);
        }
        if ((code *)puVar5[3] != (code *)0x0) {
          if (*(long *)(piVar4 + 4) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 4) + 0x18);
          }
          (*(code *)puVar5[3])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 6);
        }
        if ((code *)puVar5[4] != (code *)0x0) {
          if (*(long *)(piVar4 + 4) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 4) + 0x20);
          }
          (*(code *)puVar5[4])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 6);
        }
        if ((code *)puVar5[5] != (code *)0x0) {
          if (*(long *)(piVar4 + 4) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 4) + 0x28);
          }
          (*(code *)puVar5[5])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 6);
        }
        if ((code *)puVar5[6] != (code *)0x0) {
          if (*(long *)(piVar4 + 4) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 4) + 0x30);
          }
          (*(code *)puVar5[6])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 6);
        }
        if ((code *)puVar5[7] != (code *)0x0) {
          if (*(long *)(piVar4 + 4) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 4) + 0x38);
          }
          (*(code *)puVar5[7])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 6);
        }
        if ((code *)puVar5[8] != (code *)0x0) {
          if (*(long *)(piVar4 + 4) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 4) + 0x40);
          }
          (*(code *)puVar5[8])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 6);
        }
        if ((code *)puVar5[9] != (code *)0x0) {
          if (*(long *)(piVar4 + 4) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 4) + 0x48);
          }
          (*(code *)puVar5[9])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 6);
        }
        if ((code *)puVar5[10] != (code *)0x0) {
          if (*(long *)(piVar4 + 4) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 4) + 0x50);
          }
          (*(code *)puVar5[10])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 6);
        }
        if ((code *)puVar5[0xb] != (code *)0x0) {
          if (*(long *)(piVar4 + 4) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 4) + 0x58);
          }
          (*(code *)puVar5[0xb])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 6);
        }
        if ((code *)puVar5[0xc] != (code *)0x0) {
          if (*(long *)(piVar4 + 4) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 4) + 0x60);
          }
          (*(code *)puVar5[0xc])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 6);
        }
        if ((code *)puVar5[0xd] != (code *)0x0) {
          if (*(long *)(piVar4 + 4) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 4) + 0x68);
          }
          (*(code *)puVar5[0xd])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 6);
        }
        if ((code *)puVar5[0xe] != (code *)0x0) {
          if (*(long *)(piVar4 + 4) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 4) + 0x70);
          }
          (*(code *)puVar5[0xe])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 6);
        }
        if ((code *)puVar5[0xf] != (code *)0x0) {
          if (*(long *)(piVar4 + 4) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 4) + 0x78);
          }
          (*(code *)puVar5[0xf])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 6);
        }
        if ((code *)puVar5[0x10] != (code *)0x0) {
          if (*(long *)(piVar4 + 4) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 4) + 0x80);
          }
          (*(code *)puVar5[0x10])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 6);
        }
        if ((code *)puVar5[0x11] != (code *)0x0) {
          if (*(long *)(piVar4 + 4) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 4) + 0x88);
          }
          (*(code *)puVar5[0x11])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 6);
        }
        if ((code *)puVar5[0x12] != (code *)0x0) {
          if (*(long *)(piVar4 + 4) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(*(long *)(piVar4 + 4) + 0x90);
          }
          (*(code *)puVar5[0x12])(uVar6);
          puVar5 = *(undefined8 **)(piVar4 + 6);
        }
      }
      _free(puVar5);
      _free(*(undefined8 *)(piVar4 + 4));
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(piVar4);
      return;
    }
  }
  return;
}



/* Entry: 10971d7fc; end: 10971d8b7;  */

void FUN_10971d7fc(long param_1,undefined8 param_2,uint *param_3,long param_4)

{
  uint uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar3;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    if (param_4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010971d860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
      return;
    }
    uVar3 = (uint)param_2;
    uVar1 = *(uint *)(param_4 + (ulong)(uVar3 & 0xff) * 4);
    if (uVar1 >> 0x10 == uVar3 >> 8) {
      *param_3 = uVar1 & 0xffff;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      (*UNRECOVERED_JUMPTABLE)(uVar2,param_2,param_3);
      if ((((int)uVar2 != 0) && (uVar3 >> 0x15 == 0)) && (*param_3 >> 0x10 == 0)) {
        *(uint *)(param_4 + (ulong)(uVar3 & 0xff) * 4) = *param_3 | (uVar3 & 0x1fff00) << 8;
      }
    }
  }
  return;
}



/* Entry: 10971d8b8; end: 10971d92b;  */

ulong FUN_10971d8b8(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = (*(uint *)(param_1 + 2) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 2) & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  puVar1 = &UNK_10dfe4888;
  if (uVar2 != 0) {
    puVar1 = (undefined *)(param_1 + (ulong)uVar2);
  }
  uVar2 = (uint)(*(ushort *)(puVar1 + 2) >> 8) | (*(ushort *)(puVar1 + 2) & 0xff00ff) << 8;
  uVar3 = (ulong)(uVar2 << 2);
  _malloc();
  if (uVar3 != 0 && uVar2 != 0) {
    _memset_pattern16(uVar3,&UNK_10dfdff30,(ulong)(uVar2 - 1) * 4 + 4);
  }
  return uVar3;
}



/* Entry: 10971d92c; end: 10971da03;  */

ulong FUN_10971d92c(float param_1,ulong param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar5 = param_2;
  func_0x00010971e860();
  if (((uint)param_3 < *(uint *)(param_2 + 4)) && (*(int *)(param_4 + 0x78) != 0)) {
    puVar2 = &UNK_10dfe4888;
    if (*(undefined **)(param_2 + 0x20) != (undefined *)0x0) {
      puVar2 = *(undefined **)(param_2 + 0x20);
    }
    if (*(uint *)(puVar2 + 0x18) == 0) {
      uVar4 = (int)*(undefined8 *)(param_4 + 0x20) + 0xd8;
      FUN_10974a39c();
      FUN_109710a1c();
      uVar1 = (uint)uVar5;
      if (uVar4 != 0) {
        uVar1 = uVar4;
      }
      uVar5 = (ulong)uVar1;
    }
    else {
      puVar3 = &UNK_10dfe4888;
      if (0x13 < *(uint *)(puVar2 + 0x18)) {
        puVar3 = *(undefined **)(puVar2 + 0x10);
      }
      FUN_10971e8bc(puVar3,param_3,*(undefined8 *)(param_4 + 0x80),*(int *)(param_4 + 0x78),param_5)
      ;
      uVar5 = (ulong)(uint)(int)((float)(int)(param_1 + 0.5) + (float)(uVar5 & 0xffffffff));
    }
  }
  return uVar5;
}



/* Entry: 10971da04; end: 10971da73;  */

undefined * FUN_10971da04(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  puVar3 = (undefined *)*param_1;
  if (puVar3 == (undefined *)0x0) {
    do {
      puVar3 = (undefined *)param_1[-5];
      if (puVar3 == (undefined *)0x0) {
        return &UNK_10dfe4888;
      }
      FUN_10971dacc();
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
      FUN_10971da74();
      puVar3 = (undefined *)*param_1;
    } while (puVar3 == (undefined *)0x0);
  }
  return puVar3;
}



/* Entry: 10971da74; end: 10971dacb;  */

void FUN_10971da74(undefined *param_1)

{
  if ((param_1 != (undefined *)0x0) && (param_1 != &UNK_10dfe4888)) {
    FUN_1096f5a5c(*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
    FUN_1096f5a5c(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(param_1);
    return;
  }
  return;
}



/* Entry: 10971dacc; end: 10971df73;  */

uint * FUN_10971dacc(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  uint *puVar10;
  long lVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
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
  
  puVar10 = (uint *)0x1;
  _calloc(1,0x28);
  if (puVar10 == (uint *)0x0) {
    return (uint *)0x0;
  }
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
  iVar9 = param_1[6];
  if (iVar9 == -1) {
    piVar13 = param_1;
    FUN_109710978();
    iVar9 = (int)piVar13;
  }
  uStack_54 = CONCAT11(uStack_54._1_1_,1);
  iStack_58 = iVar9;
  if (*(code **)(param_1 + 8) == (code *)0x0) {
    piVar13 = (int *)&UNK_10dfe4888;
  }
  else {
    piVar13 = param_1;
    (**(code **)(param_1 + 8))(param_1,0x686d7478,*(undefined8 *)(param_1 + 10));
    if (piVar13 == (int *)0x0) {
      piVar13 = (int *)&UNK_10dfe4888;
    }
  }
  if (*piVar13 != 0) {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar6) {
        *piVar13 = *piVar13 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  bStack_68 = 0;
  lVar16 = *(long *)(piVar13 + 4);
  uStack_78._0_4_ = piVar13[6];
  uStack_80 = lVar16 + (ulong)(uint)uStack_78;
  uVar15 = (uint)uStack_78 << 6;
  if (uVar15 < 0x4001) {
    uVar15 = 0x4000;
  }
  if (0x3ffffffe < uVar15) {
    uVar15 = 0x3fffffff;
  }
  uStack_78._4_4_ = 0x3fffffff;
  if ((uint)uStack_78 >> 0x1a == 0) {
    uStack_78._4_4_ = uVar15;
  }
  auStack_90[0] = 0;
  iStack_64 = 0;
  uStack_70 = uStack_70 & 0xffffffff;
  lStack_88 = lVar16;
  piStack_60 = piVar13;
  FUN_1096f5a5c(piVar13);
  piStack_60 = (int *)0x0;
  lStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
  if ((lVar16 != 0) && (piVar13[1] != 0)) {
    piVar13[1] = 0;
  }
  *(int **)(puVar10 + 6) = piVar13;
  FUN_109710c0c(auStack_90);
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
  iVar9 = param_1[6];
  if (iVar9 == -1) {
    piVar13 = param_1;
    FUN_109710978();
    iVar9 = (int)piVar13;
  }
  uStack_54 = CONCAT11(uStack_54._1_1_,1);
  piVar13 = (int *)&UNK_10dfe4888;
  iStack_58 = iVar9;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    piVar13 = param_1;
    (**(code **)(param_1 + 8))(param_1,0x48564152,*(undefined8 *)(param_1 + 10));
    if (piVar13 == (int *)0x0) {
      piVar13 = (int *)&UNK_10dfe4888;
    }
  }
  if (*piVar13 != 0) {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar6) {
        *piVar13 = *piVar13 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  piStack_60 = piVar13;
  bVar8 = 0;
  do {
    bStack_68 = bVar8;
    lVar16 = *(long *)(piStack_60 + 4);
    uStack_78._0_4_ = piStack_60[6];
    uStack_80 = lVar16 + (ulong)(uint)uStack_78;
    uVar15 = (uint)uStack_78 << 6;
    if (uVar15 < 0x4001) {
      uVar15 = 0x4000;
    }
    if (0x3ffffffe < uVar15) {
      uVar15 = 0x3fffffff;
    }
    uStack_78._4_4_ = 0x3fffffff;
    if ((uint)uStack_78 >> 0x1a == 0) {
      uStack_78._4_4_ = uVar15;
    }
    auStack_90[0] = 0;
    iStack_64 = 0;
    uStack_70 = uStack_70 & 0xffffffff;
    lStack_88 = lVar16;
    if (lVar16 == 0) {
      FUN_1096f5a5c();
      piStack_60 = (int *)0x0;
      lStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
      goto LAB_10971dd78;
    }
    lVar11 = lVar16;
    FUN_10971df74(lVar16,auStack_90);
    if ((int)lVar11 != 0) {
      if (iStack_64 == 0) {
        FUN_1096f5a5c(piStack_60);
        uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
      }
      else {
        iStack_64 = 0;
        FUN_10971df74(lVar16,auStack_90);
        iVar9 = iStack_64;
        FUN_1096f5a5c(piStack_60);
        uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
        uVar15 = 0;
        if (iVar9 == 0) {
          uVar15 = (uint)lVar16;
        }
        if ((uVar15 & 1) == 0) goto LAB_10971dd68;
      }
      piStack_60 = (int *)0x0;
      uStack_80 = 0;
      lStack_88 = 0;
      if (piVar13[1] != 0) {
        piVar13[1] = 0;
      }
      goto LAB_10971dd78;
    }
    if ((iStack_64 == 0) || ((bStack_68 & 1) != 0)) goto LAB_10971dd54;
    if ((piVar13[1] == 0) || (piVar12 = piVar13, FUN_1096f59a0(), ((ulong)piVar12 & 1) == 0)) {
      uStack_80 = (ulong)(uint)piVar13[6];
      lStack_88 = 0;
      goto LAB_10971dd54;
    }
    uStack_80 = *(long *)(piVar13 + 4) + (ulong)(uint)piVar13[6];
    bVar8 = 1;
  } while (*(long *)(piVar13 + 4) != 0);
  lStack_88 = 0;
LAB_10971dd54:
  FUN_1096f5a5c(piStack_60);
  uStack_78 = (ulong)uStack_78._4_4_ << 0x20;
LAB_10971dd68:
  piStack_60 = (int *)0x0;
  uStack_80 = 0;
  lStack_88 = 0;
  FUN_1096f5a5c(piVar13);
  piVar13 = (int *)&UNK_10dfe4888;
LAB_10971dd78:
  *(int **)(puVar10 + 8) = piVar13;
  FUN_109710c0c(auStack_90);
  piVar13 = (int *)(ulong)(uint)param_1[5];
  if (param_1[5] == 0) {
    piVar13 = param_1;
    func_0x0001097109c0();
  }
  puVar10[4] = (uint)((ulong)piVar13 >> 1) & 0x7fffffff;
  piVar13 = (int *)&UNK_10dfe4888;
  if (*(int **)(puVar10 + 6) != (int *)0x0) {
    piVar13 = *(int **)(puVar10 + 6);
  }
  uVar15 = piVar13[6];
  piVar13 = param_1 + 0x20;
  FUN_10974e25c();
  piVar12 = (int *)&UNK_10dfe4888;
  if (0x23 < (uint)piVar13[6]) {
    piVar12 = *(int **)(piVar13 + 4);
  }
  uVar4 = (uint)(*(ushort *)((long)piVar12 + 0x22) >> 8) |
          (*(ushort *)((long)piVar12 + 0x22) & 0xff00ff) << 8;
  uVar2 = uVar4 << 2;
  uVar1 = uVar15 >> 2;
  uVar7 = uVar15 & 0xfffffffc;
  if (uVar2 <= (uVar15 & 0xfffffffe)) {
    uVar1 = uVar4;
    uVar7 = uVar2;
  }
  *puVar10 = uVar1;
  uVar7 = (uVar15 & 0xfffffffe) - uVar7;
  piVar13 = param_1 + 0x1c;
  FUN_10971e4f0();
  piVar12 = (int *)&UNK_10dfe4888;
  if (5 < (uint)piVar13[6]) {
    piVar12 = *(int **)(piVar13 + 4);
  }
  uVar2 = (uint)(*(ushort *)(piVar12 + 1) >> 8) | (*(ushort *)(piVar12 + 1) & 0xff00ff) << 8;
  puVar10[1] = uVar2;
  uVar15 = uVar2;
  if (uVar2 < uVar1) {
    uVar15 = uVar1;
  }
  uVar3 = (uVar15 - uVar1) * 2;
  uVar4 = uVar1 + (uVar7 >> 1);
  if (uVar7 < uVar3) {
    uVar15 = uVar4;
  }
  if (uVar1 == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = uVar15;
    if (uVar1 <= uVar2 && uVar3 <= uVar7) goto LAB_10971de44;
  }
  puVar10[1] = uVar14;
LAB_10971de44:
  uVar14 = uVar14 + (uVar4 - uVar15 & 0x7fffffff);
  puVar10[2] = uVar14;
  uVar15 = param_1[6];
  if (uVar15 == 0xffffffff) {
    FUN_109710978();
    uVar15 = (uint)param_1;
  }
  if (uVar15 <= uVar14) {
    uVar15 = uVar14;
  }
  puVar10[3] = uVar15;
  return puVar10;
}



/* Entry: 10971df74; end: 10971e097;  */

undefined8 FUN_10971df74(ushort *param_1,long param_2)

{
  char *pcVar1;
  uint *puVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  ulong uVar7;
  char *pcVar8;
  
  puVar6 = param_1 + 2;
  if ((((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar6 - *(long *)(param_2 + 8))) ||
      ((ushort)(*param_1 >> 8 | *param_1 << 8) != 1)) ||
     (func_0x00010971e00c(puVar6,param_2,param_1), (int)puVar6 == 0)) {
    return 0;
  }
  puVar6 = param_1 + 4;
  FUN_10971e098(puVar6,param_2,param_1);
  if ((int)puVar6 == 0) {
    return 0;
  }
  puVar6 = param_1 + 6;
  FUN_10971e098(puVar6,param_2,param_1);
  if ((int)puVar6 == 0) {
    return 0;
  }
  puVar2 = (uint *)(param_1 + 8);
  if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar2 + (4 - *(long *)(param_2 + 8)))) {
    return 0;
  }
  uVar4 = (*puVar2 & 0xff00ff00) >> 8 | (*puVar2 & 0xff00ff) << 8;
  uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
  if (uVar4 == 0) {
    return 1;
  }
  pcVar1 = (char *)((long)param_1 + (ulong)uVar4);
  if (pcVar1 + (1 - *(long *)(param_2 + 8)) <= (char *)(ulong)*(uint *)(param_2 + 0x18)) {
    if (*pcVar1 == '\x01') {
      pcVar8 = pcVar1 + 6;
      if ((((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)pcVar8 - *(long *)(param_2 + 8))) ||
          (uVar4 = (*(uint *)(pcVar1 + 2) & 0xff00ff00) >> 8 |
                   (*(uint *)(pcVar1 + 2) & 0xff00ff) << 8,
          uVar7 = (ulong)(uVar4 >> 0x10 | uVar4 << 0x10) * (ulong)(((byte)pcVar1[1] >> 4 & 3) + 1),
          (uVar7 & 0xffffffff00000000) != 0)) ||
         ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)pcVar8 - *(long *)(param_2 + 8))))
      goto LAB_10971e0d8;
    }
    else {
      if (*pcVar1 != '\0') {
        return 1;
      }
      pcVar8 = pcVar1 + 4;
      if (((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)pcVar8 - *(long *)(param_2 + 8))) ||
         ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)pcVar8 - *(long *)(param_2 + 8))))
      goto LAB_10971e0d8;
      uVar3 = *(ushort *)(pcVar1 + 2);
      uVar7 = (ulong)(((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8) * ((byte)pcVar1[1] >> 4 & 3) +
                     ((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8));
    }
    if (((uint)uVar7 <= (uint)(*(int *)(param_2 + 0x10) - (int)pcVar8)) &&
       (iVar5 = *(int *)(param_2 + 0x1c) - (uint)uVar7, *(int *)(param_2 + 0x1c) = iVar5, 0 < iVar5)
       ) {
      return 1;
    }
  }
LAB_10971e0d8:
  if ((*(uint *)(param_2 + 0x2c) < 0x20) &&
     (*(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1, *(char *)(param_2 + 0x28) == '\x01'
     )) {
    *puVar2 = 0;
    return 1;
  }
  return 0;
}



/* Entry: 10971e098; end: 10971e1db;  */

undefined8 FUN_10971e098(uint *param_1,long param_2,long param_3)

{
  char *pcVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  char *pcVar6;
  
  if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)param_1 + (4 - *(long *)(param_2 + 8)))) {
    return 0;
  }
  uVar3 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  if (uVar3 == 0) {
    return 1;
  }
  pcVar1 = (char *)(param_3 + (ulong)uVar3);
  if (pcVar1 + (1 - *(long *)(param_2 + 8)) <= (char *)(ulong)*(uint *)(param_2 + 0x18)) {
    if (*pcVar1 == '\x01') {
      pcVar6 = pcVar1 + 6;
      if ((((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)pcVar6 - *(long *)(param_2 + 8))) ||
          (uVar3 = (*(uint *)(pcVar1 + 2) & 0xff00ff00) >> 8 |
                   (*(uint *)(pcVar1 + 2) & 0xff00ff) << 8,
          uVar5 = (ulong)(uVar3 >> 0x10 | uVar3 << 0x10) * (ulong)(((byte)pcVar1[1] >> 4 & 3) + 1),
          (uVar5 & 0xffffffff00000000) != 0)) ||
         ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)pcVar6 - *(long *)(param_2 + 8))))
      goto LAB_10971e0d8;
    }
    else {
      if (*pcVar1 != '\0') {
        return 1;
      }
      pcVar6 = pcVar1 + 4;
      if (((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)pcVar6 - *(long *)(param_2 + 8))) ||
         ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)pcVar6 - *(long *)(param_2 + 8))))
      goto LAB_10971e0d8;
      uVar2 = *(ushort *)(pcVar1 + 2);
      uVar5 = (ulong)(((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8) * ((byte)pcVar1[1] >> 4 & 3) +
                     ((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8));
    }
    if (((uint)uVar5 <= (uint)(*(int *)(param_2 + 0x10) - (int)pcVar6)) &&
       (iVar4 = *(int *)(param_2 + 0x1c) - (uint)uVar5, *(int *)(param_2 + 0x1c) = iVar4, 0 < iVar4)
       ) {
      return 1;
    }
  }
LAB_10971e0d8:
  if ((*(uint *)(param_2 + 0x2c) < 0x20) &&
     (*(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1, *(char *)(param_2 + 0x28) == '\x01'
     )) {
    *param_1 = 0;
    return 1;
  }
  return 0;
}



/* Entry: 10971e1dc; end: 10971e483;  */

undefined8 FUN_10971e1dc(ushort *param_1,long param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  ushort *puVar11;
  
  puVar10 = (uint *)(param_1 + 4);
  if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar10 - *(long *)(param_2 + 8))) {
    return 0;
  }
  if ((ushort)(*param_1 >> 8 | *param_1 << 8) != 1) {
    return 0;
  }
  if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)param_1 + (6 - *(long *)(param_2 + 8)))) {
    return 0;
  }
  uVar6 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
  uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
  lVar7 = *(long *)(param_2 + 8);
  uVar8 = (ulong)*(uint *)(param_2 + 0x18);
  if (uVar6 != 0) {
    puVar11 = (ushort *)((long)param_1 + (ulong)uVar6);
    puVar1 = puVar11 + 2;
    if (((ulong)((long)puVar1 - lVar7) <= uVar8) &&
       (uVar9 = (ulong)(((uint)(puVar11[1] >> 8) | (puVar11[1] & 0xff00ff) << 8) *
                       ((uint)(*puVar11 >> 8) | (*puVar11 & 0xff00ff) << 8)) * 6,
       (uVar9 & 0xffffffff00000000) == 0)) {
      lVar7 = *(long *)(param_2 + 8);
      uVar8 = (ulong)*(uint *)(param_2 + 0x18);
      if (((ulong)((long)puVar1 - lVar7) <= uVar8) &&
         ((uVar6 = (uint)uVar9, uVar6 <= (uint)(*(int *)(param_2 + 0x10) - (int)puVar1) &&
          (iVar4 = *(int *)(param_2 + 0x1c) - uVar6, *(int *)(param_2 + 0x1c) = iVar4, 0 < iVar4))))
      goto LAB_10971e2f4;
    }
    if (0x1f < *(uint *)(param_2 + 0x2c)) {
      return 0;
    }
    *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1;
    if (*(char *)(param_2 + 0x28) != '\x01') {
      return 0;
    }
    param_1[1] = 0;
    param_1[2] = 0;
    lVar7 = *(long *)(param_2 + 8);
    uVar8 = (ulong)*(uint *)(param_2 + 0x18);
  }
LAB_10971e2f4:
  if ((((uVar8 < (ulong)((long)puVar10 - lVar7)) ||
       ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar10 - *(long *)(param_2 + 8)))) ||
      (uVar6 = (uint)(byte)param_1[3] << 10 | (uint)*(byte *)((long)param_1 + 7) << 2,
      (uint)(*(int *)(param_2 + 0x10) - (int)puVar10) < uVar6)) ||
     (iVar4 = *(int *)(param_2 + 0x1c) - uVar6, *(int *)(param_2 + 0x1c) = iVar4, iVar4 < 1)) {
    return 0;
  }
  uVar6 = (uint)(param_1[3] >> 8) | (param_1[3] & 0xff00ff) << 8;
  uVar8 = (ulong)uVar6;
  if (uVar6 != 0) {
    puVar11 = param_1 + 6;
    do {
      if ((ulong)*(uint *)(param_2 + 0x18) < (ulong)((long)puVar11 - *(long *)(param_2 + 8))) {
        return 0;
      }
      uVar6 = (*puVar10 & 0xff00ff00) >> 8 | (*puVar10 & 0xff00ff) << 8;
      uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
      if (uVar6 != 0) {
        puVar1 = (ushort *)((long)param_1 + (ulong)uVar6);
        if ((ulong)((long)puVar1 + (6 - *(long *)(param_2 + 8))) <= (ulong)*(uint *)(param_2 + 0x18)
           ) {
          puVar2 = puVar1 + 2;
          puVar5 = puVar2;
          FUN_10971e484(puVar2,param_2);
          if ((int)puVar5 != 0) {
            uVar6 = (uint)*(byte *)((long)puVar1 + 3) | ((byte)puVar1[1] & 0x7f) << 8;
            uVar3 = (uint)CONCAT11((byte)puVar1[2],*(byte *)((long)puVar1 + 5));
            if (((uVar6 <= uVar3) &&
                (uVar9 = (ulong)((uint)(*puVar1 >> 8) | (*puVar1 & 0xff00ff) << 8) *
                         (ulong)(uVar3 + uVar6 << (ulong)(byte)((byte)puVar1[1] >> 7)),
                (uVar9 & 0xffffffff00000000) == 0)) &&
               (((ulong)((long)(puVar2 + (ulong)*(byte *)((long)puVar1 + 5) +
                                         (ulong)(byte)puVar1[2] * 0x100 + 1) -
                        *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18) &&
                ((uVar6 = (uint)uVar9,
                 uVar6 <= (uint)(*(int *)(param_2 + 0x10) -
                                (int)(puVar2 + (ulong)*(byte *)((long)puVar1 + 5) +
                                               (ulong)(byte)puVar1[2] * 0x100 + 1)) &&
                 (iVar4 = *(int *)(param_2 + 0x1c) - uVar6, *(int *)(param_2 + 0x1c) = iVar4,
                 0 < iVar4)))))) goto LAB_10971e450;
          }
        }
        if (0x1f < *(uint *)(param_2 + 0x2c)) {
          return 0;
        }
        *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) + 1;
        if (*(char *)(param_2 + 0x28) != '\x01') {
          return 0;
        }
        *puVar10 = 0;
      }
LAB_10971e450:
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 2;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return 1;
}



/* Entry: 10971e484; end: 10971e4ef;  */

bool FUN_10971e484(byte *param_1,long param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  
  pbVar1 = param_1 + 2;
  if ((((ulong)((long)pbVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18)) &&
      ((ulong)((long)pbVar1 - *(long *)(param_2 + 8)) <= (ulong)*(uint *)(param_2 + 0x18))) &&
     (uVar2 = (uint)*param_1 << 9 | (uint)param_1[1] << 1,
     uVar2 <= (uint)(*(int *)(param_2 + 0x10) - (int)pbVar1))) {
    iVar3 = *(int *)(param_2 + 0x1c) - uVar2;
    *(int *)(param_2 + 0x1c) = iVar3;
    return 0 < iVar3;
  }
  return false;
}



/* Entry: 10971e4f0; end: 10971e57b;  */

void FUN_10971e4f0(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = *param_1;
  do {
    if ((lVar3 != 0) || (puVar4 = (undefined *)param_1[-2], puVar4 == (undefined *)0x0)) {
      return;
    }
    FUN_10971e57c();
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



/* Entry: 10971e57c; end: 10971e5f7;  */

undefined1 * FUN_10971e57c(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined4 auStack_60 [2];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  undefined2 uStack_24;
  
  puVar1 = auStack_60;
  auStack_60[0] = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_2c = 0;
  uStack_34 = 0;
  uStack_24 = 1;
  FUN_10971e5f8(auStack_60,param_1,0x6d617870);
  FUN_109710c0c(auStack_60);
  return (undefined1 *)puVar1;
}



/* Entry: 10971e5f8; end: 10971e7fb;  */

int * FUN_10971e5f8(undefined4 *param_1,int *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  undefined1 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar8;
  
  if ((*(byte *)(param_1 + 0xf) & 1) == 0) {
    iVar6 = param_2[6];
    if (iVar6 == -1) {
      piVar8 = param_2;
      FUN_109710978();
      iVar6 = (int)piVar8;
    }
    param_1[0xe] = iVar6;
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  if (((int)param_3 == 0) || (*(code **)(param_2 + 8) == (code *)0x0)) {
    param_2 = (int *)&UNK_10dfe4888;
  }
  else {
    (**(code **)(param_2 + 8))(param_2,param_3,*(undefined8 *)(param_2 + 10));
    if (param_2 == (int *)0x0) {
      param_2 = (int *)&UNK_10dfe4888;
    }
  }
  if (*param_2 != 0) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar5) {
        *param_2 = *param_2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar9 = 0;
  *(int **)(param_1 + 0xc) = param_2;
  while( true ) {
    *(undefined1 *)(param_1 + 10) = uVar9;
    uVar11 = *(ulong *)(*(long *)(param_1 + 0xc) + 0x10);
    uVar2 = *(uint *)(*(long *)(param_1 + 0xc) + 0x18);
    *(ulong *)(param_1 + 2) = uVar11;
    *(ulong *)(param_1 + 4) = uVar11 + uVar2;
    uVar3 = uVar2 << 6;
    if (uVar3 < 0x4001) {
      uVar3 = 0x4000;
    }
    if (0x3ffffffe < uVar3) {
      uVar3 = 0x3fffffff;
    }
    uVar1 = 0x3fffffff;
    if (uVar2 >> 0x1a == 0) {
      uVar1 = uVar3;
    }
    param_1[6] = uVar2;
    param_1[7] = uVar1;
    param_1[0xb] = 0;
    *param_1 = 0;
    param_1[9] = 0;
    if (uVar11 == 0) {
      FUN_1096f5a5c();
      *(undefined8 *)(param_1 + 0xc) = 0;
      *(undefined8 *)(param_1 + 2) = 0;
      *(undefined8 *)(param_1 + 4) = 0;
      param_1[6] = 0;
      return param_2;
    }
    uVar7 = uVar11;
    FUN_10971e7fc(uVar11,param_1);
    if ((int)uVar7 != 0) {
      if (param_1[0xb] == 0) {
        FUN_1096f5a5c(*(undefined8 *)(param_1 + 0xc));
        *(undefined8 *)(param_1 + 0xc) = 0;
        *(undefined8 *)(param_1 + 2) = 0;
        *(undefined8 *)(param_1 + 4) = 0;
        param_1[6] = 0;
      }
      else {
        param_1[0xb] = 0;
        FUN_10971e7fc(uVar11,param_1);
        iVar6 = param_1[0xb];
        FUN_1096f5a5c(*(undefined8 *)(param_1 + 0xc));
        *(undefined8 *)(param_1 + 0xc) = 0;
        *(undefined8 *)(param_1 + 2) = 0;
        *(undefined8 *)(param_1 + 4) = 0;
        param_1[6] = 0;
        if ((iVar6 != 0) || ((uVar11 & 1) == 0)) goto LAB_10971e748;
      }
      if (param_2[1] == 0) {
        return param_2;
      }
      param_2[1] = 0;
      return param_2;
    }
    if ((param_1[0xb] == 0) || ((*(byte *)(param_1 + 10) & 1) != 0)) goto LAB_10971e734;
    if ((param_2[1] == 0) || (piVar8 = param_2, FUN_1096f59a0(), ((ulong)piVar8 & 1) == 0)) break;
    lVar10 = *(long *)(param_2 + 4);
    uVar3 = param_2[6];
    *(long *)(param_1 + 2) = lVar10;
    *(ulong *)(param_1 + 4) = lVar10 + (ulong)uVar3;
    uVar9 = 1;
    if (lVar10 == 0) {
LAB_10971e734:
      FUN_1096f5a5c(*(undefined8 *)(param_1 + 0xc));
      *(undefined8 *)(param_1 + 0xc) = 0;
      *(undefined8 *)(param_1 + 2) = 0;
      *(undefined8 *)(param_1 + 4) = 0;
      param_1[6] = 0;
LAB_10971e748:
      FUN_1096f5a5c(param_2);
      return (int *)&UNK_10dfe4888;
    }
  }
  uVar3 = param_2[6];
  *(undefined8 *)(param_1 + 2) = 0;
  *(ulong *)(param_1 + 4) = (ulong)uVar3;
  goto LAB_10971e734;
}



/* Entry: 10971e7fc; end: 10971e8bb;  */

bool FUN_10971e7fc(ushort *param_1,long param_2)

{
  ushort uVar1;
  
  if ((ulong)((long)param_1 + (6 - *(long *)(param_2 + 8))) <= (ulong)*(uint *)(param_2 + 0x18)) {
    uVar1 = *param_1 >> 8 | *param_1 << 8;
    if (uVar1 == 1) {
      return (ulong)((long)param_1 + (0x20 - *(long *)(param_2 + 8))) <=
             (ulong)*(uint *)(param_2 + 0x18);
    }
    if (uVar1 == 0) {
      return (ushort)(param_1[1] >> 8 | param_1[1] << 8) == 0x5000;
    }
  }
  return false;
}



/* Entry: 10971e8bc; end: 10971e93f;  */

/* WARNING: Removing unreachable block (ram,0x00010971eae0) */
/* WARNING: Removing unreachable block (ram,0x00010971eae4) */
/* WARNING: Removing unreachable block (ram,0x00010971eaf0) */
/* WARNING: Removing unreachable block (ram,0x00010971eb28) */

float FUN_10971e8bc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  byte bVar4;
  byte bVar5;
  undefined *puVar6;
  uint uVar7;
  ushort *puVar8;
  ushort *puVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  float fVar13;
  
  uVar10 = (*(uint *)(param_2 + 8) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 8) & 0xff00ff) << 8;
  uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
  puVar6 = &UNK_10dfe4888;
  if (uVar10 != 0) {
    puVar6 = (undefined *)(param_2 + (ulong)uVar10);
  }
  FUN_10971e940();
  uVar10 = (*(uint *)(param_2 + 4) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 4) & 0xff00ff) << 8;
  uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
  puVar1 = &UNK_10dfe4888;
  if (uVar10 != 0) {
    puVar1 = (undefined *)(param_2 + (ulong)uVar10);
  }
  uVar7 = (uint)((ulong)puVar6 >> 0x10) & 0xffff;
  uVar10 = (uint)puVar6 & 0xffff;
  fVar13 = 0.0;
  if (uVar7 < ((uint)(*(ushort *)(puVar1 + 6) >> 8) | (*(ushort *)(puVar1 + 6) & 0xff00ff) << 8)) {
    uVar7 = (*(uint *)(puVar1 + (ulong)uVar7 * 4 + 8) & 0xff00ff00) >> 8 |
            (*(uint *)(puVar1 + (ulong)uVar7 * 4 + 8) & 0xff00ff) << 8;
    uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
    puVar2 = (ushort *)&UNK_10dfe4888;
    if (uVar7 != 0) {
      puVar2 = (ushort *)(puVar1 + uVar7);
    }
    uVar7 = (*(uint *)(puVar1 + 2) & 0xff00ff00) >> 8 | (*(uint *)(puVar1 + 2) & 0xff00ff) << 8;
    uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
    puVar3 = (ushort *)&UNK_10dfe4888;
    if (uVar7 != 0) {
      puVar3 = (ushort *)(puVar1 + uVar7);
    }
    if (uVar10 < ((uint)(*puVar2 >> 8) | (*puVar2 & 0xff00ff) << 8)) {
      bVar4 = (byte)puVar2[2];
      bVar5 = *(byte *)((long)puVar2 + 5);
      uVar7 = (uint)*(byte *)((long)puVar2 + 3) | ((byte)puVar2[1] & 0x7f) << 8;
      puVar8 = (ushort *)
               ((long)(puVar2 + 2) +
               (ulong)((uVar7 + CONCAT11(bVar4,bVar5) << (ulong)(byte)((byte)puVar2[1] >> 7)) *
                      uVar10) + (ulong)bVar4 * 0x200 + (ulong)bVar5 * 2 + 2);
      fVar13 = 0.0;
      uVar10 = 0;
      if (uVar7 != 0) {
        puVar6 = (undefined *)((long)puVar2 + 7);
        puVar9 = puVar8;
        uVar12 = (ulong)uVar7;
        do {
          FUN_10971ec24(puVar3,*(ushort *)(puVar6 + -1) >> 8 | *(ushort *)(puVar6 + -1) << 8,param_4
                        ,param_5,param_6);
          fVar13 = fVar13 + (float)(int)(short)(*puVar9 >> 8 | *puVar9 << 8) * (float)param_1;
          puVar6 = puVar6 + 2;
          uVar12 = uVar12 - 1;
          puVar9 = puVar9 + 1;
        } while (uVar12 != 0);
        puVar8 = puVar8 + uVar7;
        uVar10 = uVar7;
      }
      if (uVar10 < CONCAT11(bVar4,bVar5)) {
        lVar11 = (ulong)((uint)bVar4 * 0x100 + (uint)bVar5) - (ulong)uVar10;
        puVar6 = (undefined *)((long)puVar2 + (ulong)uVar10 * 2 + 7);
        do {
          FUN_10971ec24(puVar3,*(ushort *)(puVar6 + -1) >> 8 | *(ushort *)(puVar6 + -1) << 8,param_4
                        ,param_5,param_6);
          fVar13 = fVar13 + (float)(int)(char)(byte)*puVar8 * (float)param_1;
          puVar6 = puVar6 + 2;
          lVar11 = lVar11 + -1;
          puVar8 = (ushort *)((long)puVar8 + 1);
        } while (lVar11 != 0);
      }
    }
  }
  return fVar13;
}



/* Entry: 10971e940; end: 10971e9ff;  */

ulong FUN_10971e940(char *param_1,ulong param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  
  uVar3 = (uint)param_2;
  if (*param_1 == '\x01') {
    uVar2 = (*(uint *)(param_1 + 2) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 2) & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    if (uVar2 == 0) {
      return param_2;
    }
    uVar4 = 0;
    if (uVar2 <= uVar3) {
      uVar3 = uVar2 - 1;
    }
    bVar1 = param_1[1];
    iVar5 = (bVar1 >> 4 & 3) + 1;
    pbVar6 = (byte *)(param_1 + (ulong)(uVar3 * iVar5) + 6);
    do {
      uVar4 = (uint)*pbVar6 | uVar4 << 8;
      iVar5 = iVar5 + -1;
      pbVar6 = pbVar6 + 1;
    } while (iVar5 != 0);
  }
  else {
    if (*param_1 != '\0') {
      return param_2;
    }
    uVar2 = (uint)(*(ushort *)(param_1 + 2) >> 8) | (*(ushort *)(param_1 + 2) & 0xff00ff) << 8;
    if (uVar2 == 0) {
      return param_2;
    }
    uVar4 = 0;
    if (uVar2 <= uVar3) {
      uVar3 = uVar2 - 1;
    }
    bVar1 = param_1[1];
    iVar5 = (bVar1 >> 4 & 3) + 1;
    pbVar6 = (byte *)(param_1 + (ulong)(uVar3 * iVar5) + 4);
    do {
      uVar4 = (uint)*pbVar6 | uVar4 << 8;
      iVar5 = iVar5 + -1;
      pbVar6 = pbVar6 + 1;
    } while (iVar5 != 0);
  }
  uVar3 = (bVar1 & 0xf) + 1;
  return (ulong)(uVar4 & (-1 << (ulong)uVar3 ^ 0xffffffffU) | (uVar4 >> (ulong)uVar3) << 0x10);
}


